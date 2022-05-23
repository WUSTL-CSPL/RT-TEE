// SPDX-License-Identifier: BSD-2-Clause
/*
 * Copyright (c) 2014, STMicroelectronics International N.V.
 * Copyright (c) 2015, Linaro Limited
 */
#include <initcall.h>
#include <kernel/linker.h>
#include <kernel/panic.h>
#include <kernel/pseudo_ta.h>
#include <kernel/tee_ta_manager.h>
#include <mm/core_memprot.h>
#include <mm/mobj.h>
#include <sm/tee_mon.h>
#include <stdlib.h>
#include <string.h>
#include <trace.h>
#include <types_ext.h>
#include <kernel/thread.h>
#include "thread_private.h"
#include <kernel/RT_TEE_Scheduler.h>
#include <sys/queue.h>



#ifdef CFG_SECURE_DATA_PATH
static bool client_is_secure(struct tee_ta_session *s)
{
	/* rely on core entry to have constrained client IDs */
	if (s->clnt_id.login == TEE_LOGIN_TRUSTED_APP)
		return true;

	return false;
}

static bool validate_in_param(struct tee_ta_session *s, struct mobj *mobj)
{
	/* for secure clients, core entry always holds valid memref objects */
	if (client_is_secure(s))
		return true;

	/* all non-secure memory references are hanlded by pTAs */
	if (mobj_is_nonsec(mobj))
		return true;

	return false;
}
#else
static bool validate_in_param(struct tee_ta_session *s __unused,
				struct mobj *mobj __unused)
{
	/* At this point, core has filled only valid accessible memref mobj */
	return true;
}
#endif

/* Maps pseudo TA params */
static TEE_Result copy_in_param(struct tee_ta_session *s __maybe_unused,
				struct tee_ta_param *param,
				TEE_Param tee_param[TEE_NUM_PARAMS],
				bool did_map[TEE_NUM_PARAMS])
{
	size_t n;
	void *va;
	struct param_mem *mem;

	for (n = 0; n < TEE_NUM_PARAMS; n++) {
		switch (TEE_PARAM_TYPE_GET(param->types, n)) {
		case TEE_PARAM_TYPE_VALUE_INPUT:
		case TEE_PARAM_TYPE_VALUE_OUTPUT:
		case TEE_PARAM_TYPE_VALUE_INOUT:
			tee_param[n].value.a = param->u[n].val.a;
			tee_param[n].value.b = param->u[n].val.b;
			break;
		case TEE_PARAM_TYPE_MEMREF_INPUT:
		case TEE_PARAM_TYPE_MEMREF_OUTPUT:
		case TEE_PARAM_TYPE_MEMREF_INOUT:
			mem = &param->u[n].mem;
			if (!validate_in_param(s, mem->mobj))
				return TEE_ERROR_BAD_PARAMETERS;
			va = mobj_get_va(mem->mobj, mem->offs);
			if (!va && mem->size) {
				TEE_Result res;

				res = mobj_reg_shm_inc_map(mem->mobj);
				if (res)
					return res;
				did_map[n] = true;
				va = mobj_get_va(mem->mobj, mem->offs);
				if (!va)
					return TEE_ERROR_BAD_PARAMETERS;
			}

			tee_param[n].memref.buffer = va;
			tee_param[n].memref.size = mem->size;
			break;
		default:
			memset(tee_param + n, 0, sizeof(TEE_Param));
			break;
		}
	}

	return TEE_SUCCESS;
}

static void update_out_param(TEE_Param tee_param[TEE_NUM_PARAMS],
			     struct tee_ta_param *param)
{
	size_t n;

	for (n = 0; n < TEE_NUM_PARAMS; n++) {
		switch (TEE_PARAM_TYPE_GET(param->types, n)) {
		case TEE_PARAM_TYPE_VALUE_OUTPUT:
		case TEE_PARAM_TYPE_VALUE_INOUT:
			param->u[n].val.a = tee_param[n].value.a;
			param->u[n].val.b = tee_param[n].value.b;
			break;
		case TEE_PARAM_TYPE_MEMREF_OUTPUT:
		case TEE_PARAM_TYPE_MEMREF_INOUT:
			param->u[n].mem.size = tee_param[n].memref.size;
			break;
		default:
			break;
		}
	}
}

static void unmap_mapped_param(struct tee_ta_param *param,
			       bool did_map[TEE_NUM_PARAMS])
{
	size_t n;

	for (n = 0; n < TEE_NUM_PARAMS; n++) {
		if (did_map[n]) {
			TEE_Result res __maybe_unused;

			res = mobj_reg_shm_dec_map(param->u[n].mem.mobj);
			assert(!res);
		}
	}
}

extern struct secure_task secure_tasks[SECURE_WORLD_MAX_SUPPORTED_TASKS];
//runnable queue, index is priority, each entity in the array is TAILQ_HEAD
extern struct secure_task_tq_head runnable_tasks[CFG_TEE_CORE_NB_CORE][SECURE_WORLD_MIN_PRIORITY];
//out of budget queue, index is priority, each entity in the array is TAILQ_HEAD
extern struct secure_task_tq_head out_of_budget_tasks[SECURE_WORLD_MIN_PRIORITY];

struct secure_task_params{
	int period;
	int priority;
	int execution_time;
	int task_init_flag;
	int cpu;
	void *cstm_param_addr; //used to transfer other params
	int cstm_param_size;   //used to transfer other params
};
extern int init_scheduler;
void init_pta_task_params(TEE_Param params){
	
	struct secure_task_params *task_params;

	task_params = (struct secure_task_params *)params.memref.buffer;

	if(task_params->task_init_flag == 0){
		uint32_t curr_exceptions = thread_get_exceptions();
		thread_set_foreign_intr(false);
		struct thread_core_local *l = thread_get_core_local();
		thread_set_exceptions(curr_exceptions);
		l->curr_task = -1;
		return;
	}

	int curr_task;
	for(int i = 0; i < SECURE_WORLD_MAX_SUPPORTED_TASKS; i++){
		if(secure_tasks[i].occupied == SECURE_TASK_FREE){
			curr_task = i;
			secure_tasks[i].occupied = SECURE_TASK_OCCUPIED;
			break;
		}
	}
	uint32_t curr_exceptions = thread_get_exceptions();
	thread_set_foreign_intr(false);
	struct thread_core_local *l = thread_get_core_local();
	thread_set_exceptions(curr_exceptions);
	l->curr_task = curr_task;
	//initialize secure task parameters

	secure_tasks[curr_task].period = task_params->period;
	secure_tasks[curr_task].priority = task_params->priority;
	secure_tasks[curr_task].execution_time = task_params->execution_time;
	secure_tasks[curr_task].cpu = task_params->cpu;

	//insert new initialized task into runnable task list
	TAILQ_INSERT_TAIL(&runnable_tasks[task_params->cpu][secure_tasks[curr_task].priority],\
	&secure_tasks[curr_task],tail_queue_entity);


}

static TEE_Result pseudo_ta_enter_open_session(struct tee_ta_session *s,
			struct tee_ta_param *param, TEE_ErrorOrigin *eo)
{
	TEE_Result res = TEE_SUCCESS;
	struct pseudo_ta_ctx *stc = to_pseudo_ta_ctx(s->ctx);
	

	TEE_Param tee_param[TEE_NUM_PARAMS];
	bool did_map[TEE_NUM_PARAMS] = { false };

	tee_ta_push_current_session(s);
	*eo = TEE_ORIGIN_TRUSTED_APP;

	if ((s->ctx->ref_count == 1) && stc->pseudo_ta->create_entry_point) {
		res = stc->pseudo_ta->create_entry_point();
		if (res != TEE_SUCCESS)
			goto out;
	}

	if (stc->pseudo_ta->open_session_entry_point) {
		res = copy_in_param(s, param, tee_param, did_map);
		if (res != TEE_SUCCESS) {
			unmap_mapped_param(param, did_map);
			*eo = TEE_ORIGIN_TEE;
			goto out;
		}

		init_pta_task_params(tee_param[0]);


		IMSG("rd now at core/arch/arm/kernel/pseudo_ta.c:pseudo_ta_enter_open_session before open_session_entry_point!\n");
		res = stc->pseudo_ta->open_session_entry_point(param->types,
								tee_param,
								&s->user_ctx);
		update_out_param(tee_param, param);
		unmap_mapped_param(param, did_map);
	}

out:
	tee_ta_pop_current_session();
	return res;
}

extern int debug_thread_index;
extern int thread_use_num[CFG_TEE_CORE_NB_CORE][10];
extern int get_current_core();

void correlate_task_thread(){
	uint32_t curr_exceptions = thread_get_exceptions();
	thread_set_foreign_intr(false);
	struct thread_core_local *l = thread_get_core_local();
	thread_set_exceptions(curr_exceptions);

	if(l->curr_task < 0){
		return;
	}

	assert(l->curr_task >= 0);
	secure_tasks[l->curr_task].curr_thread = l->curr_thread;
	secure_tasks[l->curr_task].task_state = SECURE_TASK_RUNNING;
	
	if(l->curr_thread > debug_thread_index){
		debug_thread_index = l->curr_thread;
	}
	
	thread_use_num[get_current_core()][l->curr_thread]+=1;

}

extern int getCurrentTime_micro();
extern int scheduler_start_flag[CFG_TEE_CORE_NB_CORE];
extern int world_scheduler_trigger_time;
extern int secure_exe_next_timer[CFG_TEE_CORE_NB_CORE];
extern void trigger_timer_micro_s(uint64_t);
extern int set_next_timer_flag[CFG_TEE_CORE_NB_CORE];
extern int set_preemptive_timer_flag[CFG_TEE_CORE_NB_CORE];
extern uint64_t fiqORstd[CFG_TEE_CORE_NB_CORE];


static TEE_Result pseudo_ta_enter_invoke_cmd(struct tee_ta_session *s,
			uint32_t cmd, struct tee_ta_param *param,
			TEE_ErrorOrigin *eo)
{

	TEE_Result res;
	struct pseudo_ta_ctx *stc = to_pseudo_ta_ctx(s->ctx);
	TEE_Param tee_param[TEE_NUM_PARAMS];
	bool did_map[TEE_NUM_PARAMS] = { false };

	tee_ta_push_current_session(s);
	res = copy_in_param(s, param, tee_param, did_map);
	if (res != TEE_SUCCESS) {
		unmap_mapped_param(param, did_map);
		*eo = TEE_ORIGIN_TEE;
		goto out;
	}
	correlate_task_thread();
	*eo = TEE_ORIGIN_TRUSTED_APP;


	int coreNum = get_current_core();
	if(scheduler_start_flag[coreNum] && (set_next_timer_flag[coreNum] \
		|| set_preemptive_timer_flag[coreNum])){


		set_next_timer_flag[coreNum] = 0;
		set_preemptive_timer_flag[coreNum] = 0;


		//debug dta miss rate
		struct thread_core_local *l = thread_get_core_local();

		int curr_task = l->curr_task;


		trigger_timer_micro_s(secure_exe_next_timer[get_current_core()]);	
	}

	thread_set_native_intr(true);

	res = stc->pseudo_ta->invoke_command_entry_point(s->user_ctx, cmd,
							 param->types,
							 tee_param);

	thread_set_native_intr(false);

	update_out_param(tee_param, param);
	unmap_mapped_param(param, did_map);
out:
	tee_ta_pop_current_session();
	return res;
}

static void pseudo_ta_enter_close_session(struct tee_ta_session *s)
{
	struct pseudo_ta_ctx *stc = to_pseudo_ta_ctx(s->ctx);

	tee_ta_push_current_session(s);

	if (stc->pseudo_ta->close_session_entry_point)
		stc->pseudo_ta->close_session_entry_point(s->user_ctx);

	if ((s->ctx->ref_count == 1) && stc->pseudo_ta->destroy_entry_point)
		stc->pseudo_ta->destroy_entry_point();

	tee_ta_pop_current_session();
}

static void pseudo_ta_destroy(struct tee_ta_ctx *ctx)
{
	free(to_pseudo_ta_ctx(ctx));
}

static const struct tee_ta_ops pseudo_ta_ops = {
	.enter_open_session = pseudo_ta_enter_open_session,
	.enter_invoke_cmd = pseudo_ta_enter_invoke_cmd,
	.enter_close_session = pseudo_ta_enter_close_session,
	.destroy = pseudo_ta_destroy,
};

bool is_pseudo_ta_ctx(struct tee_ta_ctx *ctx)
{
	return ctx->ops == &pseudo_ta_ops;
}

/* Insures declared pseudo TAs conforms with core expectations */
static TEE_Result verify_pseudo_tas_conformance(void)
{
	const struct pseudo_ta_head *start =
		SCATTERED_ARRAY_BEGIN(pseudo_tas, struct pseudo_ta_head);
	const struct pseudo_ta_head *end =
		SCATTERED_ARRAY_END(pseudo_tas, struct pseudo_ta_head);
	const struct pseudo_ta_head *pta;

	for (pta = start; pta < end; pta++) {
		const struct pseudo_ta_head *pta2;

		/* PTAs must all have a specific UUID */
		for (pta2 = pta + 1; pta2 < end; pta2++) {
			if (!memcmp(&pta->uuid, &pta2->uuid, sizeof(TEE_UUID)))
				goto err;
		}

		if (!pta->name ||
		    (pta->flags & PTA_MANDATORY_FLAGS) != PTA_MANDATORY_FLAGS ||
		    pta->flags & ~PTA_ALLOWED_FLAGS ||
		    !pta->invoke_command_entry_point)
			goto err;
	}
	return TEE_SUCCESS;
err:
	DMSG("pseudo TA error at %p", (void *)pta);
	panic("pta");
}

service_init(verify_pseudo_tas_conformance);

/*-----------------------------------------------------------------------------
 * Initialises a session based on the UUID or ptr to the ta
 * Returns ptr to the session (ta_session) and a TEE_Result
 *---------------------------------------------------------------------------*/
TEE_Result tee_ta_init_pseudo_ta_session(const TEE_UUID *uuid,
			struct tee_ta_session *s)
{
	struct pseudo_ta_ctx *stc = NULL;
	struct tee_ta_ctx *ctx;
	const struct pseudo_ta_head *ta;

	DMSG("Lookup pseudo TA %pUl", (void *)uuid);

	ta = SCATTERED_ARRAY_BEGIN(pseudo_tas, struct pseudo_ta_head);
	while (true) {
		if (ta >= SCATTERED_ARRAY_END(pseudo_tas,
					      struct pseudo_ta_head))
			return TEE_ERROR_ITEM_NOT_FOUND;
		if (memcmp(&ta->uuid, uuid, sizeof(TEE_UUID)) == 0)
			break;
		ta++;
	}

	/* Load a new TA and create a session */
	DMSG("Open %s", ta->name);
	stc = calloc(1, sizeof(struct pseudo_ta_ctx));
	if (!stc)
		return TEE_ERROR_OUT_OF_MEMORY;
	ctx = &stc->ctx;

	ctx->ref_count = 1;
	s->ctx = ctx;
	ctx->flags = ta->flags;
	stc->pseudo_ta = ta;
	ctx->uuid = ta->uuid;
	ctx->ops = &pseudo_ta_ops;
	TAILQ_INSERT_TAIL(&tee_ctxes, ctx, link);

	DMSG("%s : %pUl", stc->pseudo_ta->name, (void *)&ctx->uuid);

	return TEE_SUCCESS;
}
