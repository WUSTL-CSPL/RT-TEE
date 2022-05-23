// SPDX-License-Identifier: BSD-2-Clause
/*
 * Copyright (c) 2015-2016, Linaro Limited
 * Copyright (c) 2014, STMicroelectronics International N.V.
 */

#include <assert.h>
#include <bench.h>
#include <compiler.h>
#include <initcall.h>
#include <io.h>
#include <kernel/linker.h>
#include <kernel/msg_param.h>
#include <kernel/panic.h>
#include <kernel/tee_misc.h>
#include <mm/core_memprot.h>
#include <mm/core_mmu.h>
#include <mm/mobj.h>
#include <optee_msg.h>
#include <sm/optee_smc.h>
#include <string.h>
#include <tee/entry_std.h>
#include <tee/tee_cryp_utl.h>
#include <tee/uuid.h>
#include <util.h>
#include <kernel/RT_TEE_Scheduler.h>
//this header is copied from thread_private.h in kernel directory, they must be the same
#include "thread_private.h"

#define SHM_CACHE_ATTRS	\
	(uint32_t)(core_mmu_is_shm_cached() ?  OPTEE_SMC_SHM_CACHED : 0)

/* Sessions opened from normal world */
static struct tee_ta_session_head tee_open_sessions =
TAILQ_HEAD_INITIALIZER(tee_open_sessions);

static struct mobj *shm_mobj;
#ifdef CFG_SECURE_DATA_PATH
static struct mobj **sdp_mem_mobjs;
#endif


extern struct secure_task secure_tasks[SECURE_WORLD_MAX_SUPPORTED_TASKS];



static unsigned int session_pnum;

static bool param_mem_from_mobj(struct param_mem *mem, struct mobj *mobj,
				const paddr_t pa, const size_t sz)
{
	paddr_t b;

	if (mobj_get_pa(mobj, 0, 0, &b) != TEE_SUCCESS)
		panic("mobj_get_pa failed");

	if (!core_is_buffer_inside(pa, MAX(sz, 1UL), b, mobj->size))
		return false;

	mem->mobj = mobj;
	mem->offs = pa - b;
	mem->size = sz;
	return true;
}

/* fill 'struct param_mem' structure if buffer matches a valid memory object */
static TEE_Result set_tmem_param(const struct optee_msg_param_tmem *tmem,
				 uint32_t attr, struct param_mem *mem)
{
	struct mobj __maybe_unused **mobj;
	paddr_t pa = READ_ONCE(tmem->buf_ptr);
	size_t sz = READ_ONCE(tmem->size);

	/* NULL Memory Rerefence? */
	if (!pa && !sz) {
		mem->mobj = NULL;
		mem->offs = 0;
		mem->size = 0;
		return TEE_SUCCESS;
	}

	/* Non-contigous buffer from non sec DDR? */
	if (attr & OPTEE_MSG_ATTR_NONCONTIG) {
		uint64_t shm_ref = READ_ONCE(tmem->shm_ref);

		mem->mobj = msg_param_mobj_from_noncontig(pa, sz, shm_ref,
							  false);
		if (!mem->mobj)
			return TEE_ERROR_BAD_PARAMETERS;
		mem->offs = 0;
		mem->size = sz;
		return TEE_SUCCESS;
	}

	/* Belongs to nonsecure shared memory? */
	if (param_mem_from_mobj(mem, shm_mobj, pa, sz))
		return TEE_SUCCESS;

#ifdef CFG_SECURE_DATA_PATH
	/* Belongs to SDP memories? */
	for (mobj = sdp_mem_mobjs; *mobj; mobj++)
		if (param_mem_from_mobj(mem, *mobj, pa, sz))
			return TEE_SUCCESS;
#endif

	return TEE_ERROR_BAD_PARAMETERS;
}

static TEE_Result set_rmem_param(const struct optee_msg_param_rmem *rmem,
				 struct param_mem *mem)
{
	size_t req_size = 0;
	uint64_t shm_ref = READ_ONCE(rmem->shm_ref);

	mem->mobj = mobj_reg_shm_get_by_cookie(shm_ref);
	if (!mem->mobj)
		return TEE_ERROR_BAD_PARAMETERS;

	mem->offs = READ_ONCE(rmem->offs);
	mem->size = READ_ONCE(rmem->size);

	/*
	 * Check that the supplied offset and size is covered by the
	 * previously verified MOBJ.
	 */
	if (ADD_OVERFLOW(mem->offs, mem->size, &req_size) ||
	    mem->mobj->size < req_size)
		return TEE_ERROR_SECURITY;

	return TEE_SUCCESS;
}

static TEE_Result copy_in_params(const struct optee_msg_param *params,
				 uint32_t num_params,
				 struct tee_ta_param *ta_param,
				 uint64_t *saved_attr)
{
	TEE_Result res;
	size_t n;
	uint8_t pt[TEE_NUM_PARAMS] = { 0 };

	if (num_params > TEE_NUM_PARAMS)
		return TEE_ERROR_BAD_PARAMETERS;

	memset(ta_param, 0, sizeof(*ta_param));

	for (n = 0; n < num_params; n++) {
		uint32_t attr;

		saved_attr[n] = READ_ONCE(params[n].attr);

		if (saved_attr[n] & OPTEE_MSG_ATTR_META)
			return TEE_ERROR_BAD_PARAMETERS;

		attr = saved_attr[n] & OPTEE_MSG_ATTR_TYPE_MASK;
		switch (attr) {
		case OPTEE_MSG_ATTR_TYPE_NONE:
			pt[n] = TEE_PARAM_TYPE_NONE;
			break;
		case OPTEE_MSG_ATTR_TYPE_VALUE_INPUT:
		case OPTEE_MSG_ATTR_TYPE_VALUE_OUTPUT:
		case OPTEE_MSG_ATTR_TYPE_VALUE_INOUT:
			pt[n] = TEE_PARAM_TYPE_VALUE_INPUT + attr -
				OPTEE_MSG_ATTR_TYPE_VALUE_INPUT;
			ta_param->u[n].val.a = READ_ONCE(params[n].u.value.a);
			ta_param->u[n].val.b = READ_ONCE(params[n].u.value.b);
			break;
		case OPTEE_MSG_ATTR_TYPE_TMEM_INPUT:
		case OPTEE_MSG_ATTR_TYPE_TMEM_OUTPUT:
		case OPTEE_MSG_ATTR_TYPE_TMEM_INOUT:
			res = set_tmem_param(&params[n].u.tmem, saved_attr[n],
					     &ta_param->u[n].mem);
			if (res)
				return res;
			pt[n] = TEE_PARAM_TYPE_MEMREF_INPUT + attr -
				OPTEE_MSG_ATTR_TYPE_TMEM_INPUT;
			break;
		case OPTEE_MSG_ATTR_TYPE_RMEM_INPUT:
		case OPTEE_MSG_ATTR_TYPE_RMEM_OUTPUT:
		case OPTEE_MSG_ATTR_TYPE_RMEM_INOUT:
			res = set_rmem_param(&params[n].u.rmem,
					     &ta_param->u[n].mem);
			if (res)
				return res;
			pt[n] = TEE_PARAM_TYPE_MEMREF_INPUT + attr -
				OPTEE_MSG_ATTR_TYPE_RMEM_INPUT;
			break;
		default:
			return TEE_ERROR_BAD_PARAMETERS;
		}
	}

	ta_param->types = TEE_PARAM_TYPES(pt[0], pt[1], pt[2], pt[3]);

	return TEE_SUCCESS;
}

static void cleanup_shm_refs(const uint64_t *saved_attr,
			     struct tee_ta_param *param, uint32_t num_params)
{
	size_t n;

	for (n = 0; n < num_params; n++) {
		switch (saved_attr[n]) {
		case OPTEE_MSG_ATTR_TYPE_TMEM_INPUT:
		case OPTEE_MSG_ATTR_TYPE_TMEM_OUTPUT:
		case OPTEE_MSG_ATTR_TYPE_TMEM_INOUT:
			if (saved_attr[n] & OPTEE_MSG_ATTR_NONCONTIG)
				mobj_free(param->u[n].mem.mobj);
			break;

		case OPTEE_MSG_ATTR_TYPE_RMEM_INPUT:
		case OPTEE_MSG_ATTR_TYPE_RMEM_OUTPUT:
		case OPTEE_MSG_ATTR_TYPE_RMEM_INOUT:
			mobj_reg_shm_put(param->u[n].mem.mobj);
			break;
		default:
			break;
		}
	}
}

static void copy_out_param(struct tee_ta_param *ta_param, uint32_t num_params,
			   struct optee_msg_param *params, uint64_t *saved_attr)
{
	size_t n;

	for (n = 0; n < num_params; n++) {
		switch (TEE_PARAM_TYPE_GET(ta_param->types, n)) {
		case TEE_PARAM_TYPE_MEMREF_OUTPUT:
		case TEE_PARAM_TYPE_MEMREF_INOUT:
			switch (saved_attr[n] & OPTEE_MSG_ATTR_TYPE_MASK) {
			case OPTEE_MSG_ATTR_TYPE_TMEM_OUTPUT:
			case OPTEE_MSG_ATTR_TYPE_TMEM_INOUT:
				params[n].u.tmem.size = ta_param->u[n].mem.size;
				break;
			case OPTEE_MSG_ATTR_TYPE_RMEM_OUTPUT:
			case OPTEE_MSG_ATTR_TYPE_RMEM_INOUT:
				params[n].u.rmem.size = ta_param->u[n].mem.size;
				break;
			default:
				break;
			}
			break;
		case TEE_PARAM_TYPE_VALUE_OUTPUT:
		case TEE_PARAM_TYPE_VALUE_INOUT:
			params[n].u.value.a = ta_param->u[n].val.a;
			params[n].u.value.b = ta_param->u[n].val.b;
			break;
		default:
			break;
		}
	}
}

/*
 * Extracts mandatory parameter for open session.
 *
 * Returns
 * false : mandatory parameter wasn't found or malformatted
 * true  : paramater found and OK
 */
static TEE_Result get_open_session_meta(size_t num_params,
					struct optee_msg_param *params,
					size_t *num_meta, TEE_UUID *uuid,
					TEE_Identity *clnt_id)
{
	const uint32_t req_attr = OPTEE_MSG_ATTR_META |
				  OPTEE_MSG_ATTR_TYPE_VALUE_INPUT;

	if (num_params < 2)
		return TEE_ERROR_BAD_PARAMETERS;

	if (params[0].attr != req_attr || params[1].attr != req_attr)
		return TEE_ERROR_BAD_PARAMETERS;

	tee_uuid_from_octets(uuid, (void *)&params[0].u.value);
	clnt_id->login = params[1].u.value.c;
	switch (clnt_id->login) {
	case TEE_LOGIN_PUBLIC:
		memset(&clnt_id->uuid, 0, sizeof(clnt_id->uuid));
		break;
	case TEE_LOGIN_USER:
	case TEE_LOGIN_GROUP:
	case TEE_LOGIN_APPLICATION:
	case TEE_LOGIN_APPLICATION_USER:
	case TEE_LOGIN_APPLICATION_GROUP:
		tee_uuid_from_octets(&clnt_id->uuid,
				     (void *)&params[1].u.value);
		break;
	default:
		return TEE_ERROR_BAD_PARAMETERS;
	}

	*num_meta = 2;
	return TEE_SUCCESS;
}

extern int get_current_core();

extern struct secure_task secure_tasks[SECURE_WORLD_MAX_SUPPORTED_TASKS];
//runnable queue, index is priority, each entity in the array is TAILQ_HEAD
extern struct secure_task_tq_head runnable_tasks[CFG_TEE_CORE_NB_CORE][SECURE_WORLD_MIN_PRIORITY];
//out of budget queue, index is priority, each entity in the array is TAILQ_HEAD
extern struct secure_task_tq_head out_of_budget_tasks[SECURE_WORLD_MIN_PRIORITY];
//init wati_to_execute initialization value
extern int wait_to_execute[CFG_TEE_CORE_NB_CORE];

int init_scheduler = 0;
void init_task(struct tee_ta_session *s){

	/*
	 *create secure_task for rt_tee scheduling 
	 *1. initialize secure_task struct
	 *2. insert secure_task into runnable_tasks
	 */
	//find a free secure_task struct in tasks pools
	int curr_task;

	uint32_t curr_exceptions = thread_get_exceptions();
	thread_set_foreign_intr(false);
	struct thread_core_local *l = thread_get_core_local();
	thread_set_exceptions(curr_exceptions);
	curr_task = l->curr_task;

	//not initialize task
	if(curr_task == -1){
		return;
	}

	//initialize new task crx
	secure_tasks[curr_task].curr_thread = -1;
	secure_tasks[curr_task].session_id = (vaddr_t)s;
	secure_tasks[curr_task].curr_tee_ta_ctx = s->ctx;
	secure_tasks[curr_task].taskUid = curr_task;
	secure_tasks[curr_task].numOfJobReleased = 0;
	secure_tasks[curr_task].numOfJobCompleted = 0;
	secure_tasks[curr_task].numOfJobDlMissed = 0;
	secure_tasks[curr_task].lastCompletionOfJob = 0;
	secure_tasks[curr_task].lastReleaseOfJob = 0;
	secure_tasks[curr_task].task_state = SECURE_TASK_FINISHED;
	secure_tasks[curr_task].processing_core = -1;//FIXME: this may be removed

	// wait_to_execute[secure_tasks[curr_task].cpu]+=1;
}

//this is for dta initialize task param, dta use a unified API for ta operations
int ta_open_session_flag[CFG_TEE_CORE_NB_CORE] = {0};

//FIXME: each session id should be included into the task structure. 
uint32_t session_ids[5];
int current_session_index = 0;
static void entry_open_session(struct thread_smc_args *smc_args,
			       struct optee_msg_arg *arg, uint32_t num_params)
{
	ta_open_session_flag[get_current_core()] = 1;

	TEE_Result res;
	TEE_ErrorOrigin err_orig = TEE_ORIGIN_TEE;
	struct tee_ta_session *s = NULL;
	TEE_Identity clnt_id;
	TEE_UUID uuid;
	struct tee_ta_param param;
	size_t num_meta;
	uint64_t saved_attr[TEE_NUM_PARAMS] = { 0 };

	res = get_open_session_meta(num_params, arg->params, &num_meta, &uuid,
				    &clnt_id);
	if (res != TEE_SUCCESS){
		IMSG("rd now at entry_std.c:entry_open_session going to out bc get_open_session_meta failed...\n");
		goto out;}

	res = copy_in_params(arg->params + num_meta, num_params - num_meta,
			     &param, saved_attr);
	if (res != TEE_SUCCESS){
		IMSG("rd now at entry_std.c:entry_open_session going to cleanup_shm_refs bc copy_in_params failed...\n");
		goto cleanup_shm_refs;}

	res = tee_ta_open_session(&err_orig, &s, &tee_open_sessions, &uuid,
				  &clnt_id, TEE_TIMEOUT_INFINITE, &param);
	if (res != TEE_SUCCESS){
		IMSG("rd now at entry_std.c:entry_open_session tee_ta_open_session failed...\n");
		s = NULL;}
	copy_out_param(&param, num_params - num_meta, arg->params + num_meta,
		       saved_attr);

	/*
	 * The occurrence of open/close session command is usually
	 * un-predictable, using this property to increase randomness
	 * of prng
	 */
	plat_prng_add_jitter_entropy(CRYPTO_RNG_SRC_JITTER_SESSION,
				     &session_pnum);


	/*
	 *create secure_task for rt_tee scheduling 
	 *1. initialize secure_task struct
	 *2. insert secure_task into runnable_tasks
	 */
	init_task(s);
	ta_open_session_flag[get_current_core()] = 0;




cleanup_shm_refs:
	cleanup_shm_refs(saved_attr, &param, num_params - num_meta);

out:
	if (s)
		arg->session = (vaddr_t)s; // this is the arg->session returned. need to put this to a persistant struct.
	else
		arg->session = 0;
	arg_session_id = (vaddr_t)s; // this is the arg->session returned. need to put this to a persistant struct.
	session_ids[current_session_index++] = (vaddr_t)s;//Jinwen recored all the session ids here
	//IMSG("session id in entry_open_session: %d", arg_session_id);
	arg->ret = res;
	arg->ret_origin = err_orig;
	smc_args->a0 = OPTEE_SMC_RETURN_OK;
}

static void entry_close_session(struct thread_smc_args *smc_args,
			struct optee_msg_arg *arg, uint32_t num_params)
{
	TEE_Result res;
	struct tee_ta_session *s;

	if (num_params) {
		res = TEE_ERROR_BAD_PARAMETERS;
		goto out;
	}

	plat_prng_add_jitter_entropy(CRYPTO_RNG_SRC_JITTER_SESSION,
				     &session_pnum);

	s = (struct tee_ta_session *)(vaddr_t)arg->session;
	res = tee_ta_close_session(s, &tee_open_sessions, NSAPP_IDENTITY);
out:
	arg->ret = res;
	arg->ret_origin = TEE_ORIGIN_TEE;
	smc_args->a0 = OPTEE_SMC_RETURN_OK;
}


static void entry_invoke_command(struct thread_smc_args *smc_args,
				 struct optee_msg_arg *arg, uint32_t num_params)
{

	TEE_Result res;
	TEE_ErrorOrigin err_orig = TEE_ORIGIN_TEE;
	struct tee_ta_session *s;
	struct tee_ta_param param = { 0 };
	uint64_t saved_attr[TEE_NUM_PARAMS] = { 0 };

	bm_timestamp();

	res = copy_in_params(arg->params, num_params, &param, saved_attr);
	if (res != TEE_SUCCESS){
		IMSG("rd says copy_in_params fails...\n");
		goto out;
	}
	// problem is here

	s = tee_ta_get_session(arg->session, true, &tee_open_sessions);
	if (!s) {
		EMSG("tee_ta_get_session failed, could not open the correct session!\n");
		res = TEE_ERROR_BAD_PARAMETERS;
		goto out;
	}


	//modified codes
	res = tee_ta_invoke_command(&err_orig, s, NSAPP_IDENTITY,\
				    TEE_TIMEOUT_INFINITE, arg->func, &param);


	bm_timestamp();

	tee_ta_put_session(s);

	copy_out_param(&param, num_params, arg->params, saved_attr);

out:
	cleanup_shm_refs(saved_attr, &param, num_params);

	arg->ret = res;
	arg->ret_origin = err_orig;
	smc_args->a0 = OPTEE_SMC_RETURN_OK;
}

static void entry_cancel(struct thread_smc_args *smc_args,
			struct optee_msg_arg *arg, uint32_t num_params)
{
	TEE_Result res;
	TEE_ErrorOrigin err_orig = TEE_ORIGIN_TEE;
	struct tee_ta_session *s;

	if (num_params) {
		res = TEE_ERROR_BAD_PARAMETERS;
		goto out;
	}

	s = tee_ta_get_session(arg->session, false, &tee_open_sessions);
	if (!s) {
		res = TEE_ERROR_BAD_PARAMETERS;
		goto out;
	}

	res = tee_ta_cancel_command(&err_orig, s, NSAPP_IDENTITY);
	tee_ta_put_session(s);

out:
	arg->ret = res;
	arg->ret_origin = err_orig;
	smc_args->a0 = OPTEE_SMC_RETURN_OK;
}

static void register_shm(struct thread_smc_args *smc_args,
			 struct optee_msg_arg *arg, uint32_t num_params)
{
	arg->ret = TEE_ERROR_BAD_PARAMETERS;
	smc_args->a0 = OPTEE_SMC_RETURN_OK;

	if (num_params != 1 ||
	    (arg->params[0].attr !=
	     (OPTEE_MSG_ATTR_TYPE_TMEM_OUTPUT | OPTEE_MSG_ATTR_NONCONTIG)))
		return;

	struct optee_msg_param_tmem *tmem = &arg->params[0].u.tmem;
	struct mobj *mobj = msg_param_mobj_from_noncontig(tmem->buf_ptr,
							  tmem->size,
							  tmem->shm_ref, false);

	if (!mobj)
		return;

	mobj_reg_shm_unguard(mobj);
	arg->ret = TEE_SUCCESS;
}

static void unregister_shm(struct thread_smc_args *smc_args,
			   struct optee_msg_arg *arg, uint32_t num_params)
{
	if (num_params == 1) {
		uint64_t cookie = arg->params[0].u.rmem.shm_ref;
		TEE_Result res = mobj_reg_shm_release_by_cookie(cookie);

		if (res)
			EMSG("Can't find mapping with given cookie");
		arg->ret = res;
	} else {
		arg->ret = TEE_ERROR_BAD_PARAMETERS;
		arg->ret_origin = TEE_ORIGIN_TEE;
	}

	smc_args->a0 = OPTEE_SMC_RETURN_OK;
}

static struct mobj *map_cmd_buffer(paddr_t parg, uint32_t *num_params)
{
	struct mobj *mobj;
	struct optee_msg_arg *arg;
	size_t args_size;

	assert(!(parg & SMALL_PAGE_MASK));
	/* mobj_mapped_shm_alloc checks if parg resides in nonsec ddr */
	//IMSG("position 00");
	mobj = mobj_mapped_shm_alloc(&parg, 1, 0, 0);
	if (!mobj)
		return NULL;
	//IMSG("position 01");

	arg = mobj_get_va(mobj, 0);
	if (!arg)
		goto err;
	//IMSG("position 02");

	*num_params = READ_ONCE(arg->num_params);
	if (*num_params > OPTEE_MSG_MAX_NUM_PARAMS)
		goto err;
	//IMSG("position 03");

	args_size = OPTEE_MSG_GET_ARG_SIZE(*num_params);
	if (args_size > SMALL_PAGE_SIZE) {
		EMSG("Command buffer spans across page boundary");
		goto err;
	}
	//IMSG("position 04");
	return mobj;
err:
	mobj_free(mobj);
	return NULL;
}

static struct mobj *get_cmd_buffer(paddr_t parg, uint32_t *num_params)
{
	struct optee_msg_arg *arg;
	size_t args_size;

	arg = phys_to_virt(parg, MEM_AREA_NSEC_SHM);
	if (!arg)
		return NULL;

	*num_params = READ_ONCE(arg->num_params);
	if (*num_params > OPTEE_MSG_MAX_NUM_PARAMS)
		return NULL;

	args_size = OPTEE_MSG_GET_ARG_SIZE(*num_params);

	return mobj_shm_alloc(parg, args_size, 0);
}

/*
 * Call with struct optee_msg_arg as argument
 *
 * Call register usage:
 * a0	SMC Function ID, OPTEE_SMC*CALL_WITH_ARG
 * a1	Upper 32bit of a 64bit physical pointer to a struct optee_msg_arg
 * a2	Lower 32bit of a 64bit physical pointer to a struct optee_msg_arg
 * a3	Cache settings, not used if physical pointer is in a predefined shared
 *	memory area else per OPTEE_SMC_SHM_*
 * a4-6	Not used
 * a7	Hypervisor Client ID register
 *
 * Normal return register usage:
 * a0	Return value, OPTEE_SMC_RETURN_*
 * a1-3	Not used
 * a4-7	Preserved
 *
 */

/*
 * Note: this function is weak just to make it possible to exclude it from
 * the unpaged area.
 */
// struct thread_smc_args {
// 	uint64_t a0;	/* SMC function ID */
// 	uint64_t a1;	/* Parameter */
// 	uint64_t a2;	/* Parameter */
// 	uint64_t a3;	 Thread ID when returning from RPC 
// 	uint64_t a4;	/* Not used */
// 	uint64_t a5;	/* Not used */
// 	uint64_t a6;	/* Not used */
// 	uint64_t a7;	/* Hypervisor Client ID */
// };

// extern uint64_t fiqORstd;
extern uint64_t fiqORstd[CFG_TEE_CORE_NB_CORE];
void __weak tee_entry_std(struct thread_smc_args *smc_args)
{		
	if (fiqORstd[get_current_core()] == 1){
		fiq_tee_entry_std(smc_args);
		return;
	}

	paddr_t parg;
	struct optee_msg_arg *arg = NULL;	/* fix gcc warning */
	uint32_t num_params = 0;		/* fix gcc warning */
	struct mobj *mobj;

	if (smc_args->a0 != OPTEE_SMC_CALL_WITH_ARG) {
		EMSG("Unknown SMC 0x%" PRIx64, (uint64_t)smc_args->a0);
		DMSG("Expected 0x%x\n", OPTEE_SMC_CALL_WITH_ARG);
		smc_args->a0 = OPTEE_SMC_RETURN_EBADCMD;
		return;
	}


	parg = (uint64_t)smc_args->a1 << 32 | smc_args->a2;

	/* Check if this region is in static shared space */
	if (core_pbuf_is(CORE_MEM_NSEC_SHM, parg,
			  sizeof(struct optee_msg_arg))) {
		mobj = get_cmd_buffer(parg, &num_params); // allocate shm for s-el1 virtual memory address, mobj point to start.
	} else {
		if (parg & SMALL_PAGE_MASK) {
			smc_args->a0 = OPTEE_SMC_RETURN_EBADADDR;
			return;
		}
		mobj = map_cmd_buffer(parg, &num_params);
	}
	// FIXME: rd ignore this check to get pass static shared space, in future change the struct maintained
	// by optee_os to static shared space or actually, delete this check maybe?


	if (!mobj || !ALIGNMENT_IS_OK(parg, struct optee_msg_arg)) {
		EMSG("Bad arg address 0x%x\n" PRIxPA, parg);
		smc_args->a0 = OPTEE_SMC_RETURN_EBADADDR;
		mobj_free(mobj);
		return;
	}
	// FIXME: rd ignore Alignment

	arg = mobj_get_va(mobj, 0);
	assert(arg && mobj_is_nonsec(mobj));
	/* Enable foreign interrupts for STD calls */
	switch (arg->cmd) {
	case OPTEE_MSG_CMD_OPEN_SESSION:
		
		entry_open_session(smc_args, arg, num_params);
		break;
	case OPTEE_MSG_CMD_CLOSE_SESSION:
		entry_close_session(smc_args, arg, num_params);
		break;
	case OPTEE_MSG_CMD_INVOKE_COMMAND:
		entry_invoke_command(smc_args, arg, num_params);
		break;
	case OPTEE_MSG_CMD_CANCEL:
		entry_cancel(smc_args, arg, num_params);
		break;
	case OPTEE_MSG_CMD_REGISTER_SHM:
		register_shm(smc_args, arg, num_params);
		break;
	case OPTEE_MSG_CMD_UNREGISTER_SHM:
		unregister_shm(smc_args, arg, num_params);
		break;

	default:
		smc_args->a0 = OPTEE_SMC_RETURN_EBADCMD;
	}
	mobj_free(mobj);
}


void __weak fiq_tee_entry_std(struct thread_smc_args *smc_args)
{
	
	paddr_t parg;
	struct optee_msg_arg *arg = NULL;	/* fix gcc warning */

	uint32_t num_params = 0;		/* fix gcc warning */
	struct mobj *mobj;


	if (smc_args->a0 != OPTEE_SMC_CALL_WITH_ARG) {

		smc_args->a0 = OPTEE_SMC_RETURN_EBADCMD;
		return;
	}
	// here we get physical address of optee_msg_arg
	parg = (uint64_t)smc_args->a1 << 32 | smc_args->a2; 


	arg = (struct optee_msg_arg *) parg;
	assert(arg != NULL);

	switch (arg->cmd) {
	case OPTEE_MSG_CMD_OPEN_SESSION:
		num_params = 6;
		entry_open_session(smc_args, arg, num_params);
		break;
	case OPTEE_MSG_CMD_CLOSE_SESSION:
		entry_close_session(smc_args, arg, num_params);
		break;
	case OPTEE_MSG_CMD_INVOKE_COMMAND:
		num_params = 4;

		entry_invoke_command(smc_args, arg, num_params);

		break;
	case OPTEE_MSG_CMD_CANCEL:
		entry_cancel(smc_args, arg, num_params);
		break;
	case OPTEE_MSG_CMD_REGISTER_SHM:
		register_shm(smc_args, arg, num_params);
		break;
	case OPTEE_MSG_CMD_UNREGISTER_SHM:
		unregister_shm(smc_args, arg, num_params);
		break;

	default:
		smc_args->a0 = OPTEE_SMC_RETURN_EBADCMD;
	}
	mobj_free(mobj);
}


static TEE_Result default_mobj_init(void)
{
	shm_mobj = mobj_phys_alloc(default_nsec_shm_paddr,
				   default_nsec_shm_size, SHM_CACHE_ATTRS,
				   CORE_MEM_NSEC_SHM);
	if (!shm_mobj)
		panic("Failed to register shared memory");

#ifdef CFG_SECURE_DATA_PATH
	sdp_mem_mobjs = core_sdp_mem_create_mobjs();
	if (!sdp_mem_mobjs)
		panic("Failed to register SDP memory");
#endif

	return TEE_SUCCESS;
}

driver_init_late(default_mobj_init);
