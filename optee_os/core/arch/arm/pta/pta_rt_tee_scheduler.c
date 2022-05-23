#include <compiler.h>
#include <kernel/pseudo_ta.h>
#include <kernel/panic.h>
#include <mm/core_memprot.h>
#include <pta_rt_tee_scheduler.h>
#include <string.h>
#include <tee/cache.h>
#include <tee_api_defines.h>
#include <tee_api_types.h>
#include <trace.h>
#include <types_ext.h>
#include <kernel/RT_TEE_Scheduler.h>
#include "thread_private.h"


#define TA_NAME		"pta_rt_tee_scheduler.pta"

extern struct rt_world rt_world_cores[NUM_OF_SECURITY_STATES][NUM_OF_CORES];
extern struct secure_task secure_tasks[SECURE_WORLD_MAX_SUPPORTED_TASKS];
extern struct secure_task_tq_head runnable_tasks[CFG_TEE_CORE_NB_CORE][SECURE_WORLD_MIN_PRIORITY];
extern void trigger_timer(uint64_t);
extern int scheduler_start_flag[CFG_TEE_CORE_NB_CORE];
extern setRateMonotonicPriority();
extern void trigger_timer_micro_s(uint64_t);

//scheduler debug
extern getCurrentTime_micro();
extern int get_current_core();
extern int wait_to_execute[CFG_TEE_CORE_NB_CORE];


static TEE_Result start_scheduler(uint32_t param_types __unused,
			TEE_Param params[TEE_NUM_PARAMS] )
{


	IMSG("======rt_tee_scheduler is initializaing======");

	struct world_params *curr_world_params = NULL;
	curr_world_params = (struct world_params*)params[0].memref.buffer;

	for(int i = 0; i < CFG_TEE_CORE_NB_CORE; i++){
		rt_world_cores[SECURE_STATE][i].period = (curr_world_params + i)->secure_period;
		rt_world_cores[SECURE_STATE][i].budget = (curr_world_params + i)->secure_budget;
		rt_world_cores[NONSECURE_STATE][i].period = (curr_world_params + i)->non_secure_period;
		rt_world_cores[NONSECURE_STATE][i].budget = (curr_world_params + i)->non_secure_budget;		
	}

	for(int i = 0; i < CFG_TEE_CORE_NB_CORE; i++){

		IMSG("%d: secure world: period %d, budget %d", i, \
			rt_world_cores[SECURE_STATE][i].period, rt_world_cores[SECURE_STATE][i].budget);
		IMSG("%d: non secure world: period %d, budget %d", i, \
			rt_world_cores[NONSECURE_STATE][i].period, rt_world_cores[NONSECURE_STATE][i].budget);
	
	}


	for(int core = 0; core < CFG_TEE_CORE_NB_CORE; core++){

		for(int i = 0; i < SECURE_WORLD_MIN_PRIORITY; i++){
			
			if(!TAILQ_EMPTY(&runnable_tasks[core][i])){
				IMSG("core %d priority %d:", core, i);
				struct secure_task *curr_task = NULL;
				TAILQ_FOREACH(curr_task, &runnable_tasks[core][i], tail_queue_entity){
					curr_task->curr_thread = -1;
					curr_task->task_state = 0;
					curr_task->processing_core = -1;
					IMSG("taskUid %d, period %d, priority %d, execution_time %d, threadid %d, state %d, sess_id %d", \
						curr_task->taskUid, curr_task->period, curr_task->priority, \
						curr_task->execution_time, curr_task->curr_thread, curr_task->task_state, curr_task->session_id);
				}
			}
		}
	}

    setRateMonotonicPriority();

	return TEE_SUCCESS;
}


static TEE_Result trigger_timer_start_scheduler(uint32_t param_types __unused,
			TEE_Param params[TEE_NUM_PARAMS] ){

	int32_t old_exp = thread_mask_exceptions(THREAD_EXCP_ALL);
	IMSG("**********core %d**********", get_current_core());
	scheduler_start_flag[get_current_core()] = 1;
	thread_unmask_exceptions(old_exp);
	IMSG("=============core %d scheduler starts=============", get_current_core());
	thread_unmask_exceptions(old_exp);
	trigger_timer(1000);

	return TEE_SUCCESS;

}


/*
 * Trusted Application Entry Points
 */

static TEE_Result create_ta(void)
{
	DMSG("create entry point for pseudo TA \"%s\"", TA_NAME);
	return TEE_SUCCESS;
}

static void destroy_ta(void)
{
	DMSG("destroy entry point for pseudo ta \"%s\"", TA_NAME);
}


static TEE_Result open_session(uint32_t nParamTypes,
		TEE_Param pParams[TEE_NUM_PARAMS],
		void **ppSessionContext __unused)
{

	DMSG("open entry point for pseudo ta \"%s\"", TA_NAME);


	return TEE_SUCCESS;
}

static void close_session(void *pSessionContext __unused)
{
	DMSG("close entry point for pseudo ta \"%s\"", TA_NAME);
}

static TEE_Result invoke_command(void *pSessionContext __unused,
		uint32_t nCommandID, uint32_t nParamTypes,
		TEE_Param pParams[TEE_NUM_PARAMS])
{
	FMSG("command entry point for pseudo ta \"%s\"", TA_NAME);
	// IMSG("command id %d", nCommandID);
	switch (nCommandID) {
	case PTA_RT_TEE_SCHEDULER_CMD_START:
		return start_scheduler(nParamTypes, pParams);
	case PTA_RT_TEE_TRIGGER_TIMER:
		return trigger_timer_start_scheduler(nParamTypes, pParams);
	default:
		break;
	}
	return TEE_ERROR_BAD_PARAMETERS;
}

pseudo_ta_register(.uuid = PTA_RT_TEE_SCHEDULER_UUID, .name = TA_NAME,
		   .flags = PTA_DEFAULT_FLAGS | TA_FLAG_SECURE_DATA_PATH |
			    TA_FLAG_DEVICE_ENUM | TA_FLAG_CONCURRENT,
		   .create_entry_point = create_ta,
		   .destroy_entry_point = destroy_ta,
		   .open_session_entry_point = open_session,
		   .close_session_entry_point = close_session,
		   .invoke_command_entry_point = invoke_command);
