#include <compiler.h>
#include <kernel/pseudo_ta.h>
#include <kernel/panic.h>
#include <mm/core_memprot.h>
#include <pta_trigger_timer.h>
#include <string.h>
#include <tee/cache.h>
#include <tee_api_defines.h>
#include <tee_api_types.h>
#include <trace.h>
#include <types_ext.h>

#define TA_NAME		"pta_trigger_timer.pta"

extern long loop_result;
extern long mult_busy_loop(unsigned long execution_time);
extern int test_finish[5];
extern getCurrentTime_micro();
extern int get_current_core();
extern void trigger_timer_micro_s(uint64_t);
extern void trigger_timer(uint64_t);
extern int scheduler_start_flag[CFG_TEE_CORE_NB_CORE];


static TEE_Result test_trace(uint32_t param_types __unused,
			TEE_Param params[TEE_NUM_PARAMS] __unused)
{
	int32_t old_exp = thread_mask_exceptions(THREAD_EXCP_ALL);
	IMSG("**********core %d**********", get_current_core());
	scheduler_start_flag[get_current_core()] = 1;
	thread_unmask_exceptions(old_exp);
	// IMSG("curr itrt %d", thread_get_exceptions());
	trigger_timer(1000);
	return TEE_SUCCESS;
}

static TEE_Result function2(uint32_t param_types __unused,
			TEE_Param params[TEE_NUM_PARAMS] __unused)
{
	IMSG("pseudo TA \"%s\" says \"Hello world function1!\"", TA_NAME);

	return TEE_SUCCESS;
}

static TEE_Result function3(uint32_t param_types __unused,
			TEE_Param params[TEE_NUM_PARAMS] __unused)
{
	IMSG("pseudo TA \"%s\" says \"Hello world function2!\"", TA_NAME);

	return TEE_SUCCESS;
}

static TEE_Result function4(uint32_t param_types __unused,
			TEE_Param params[TEE_NUM_PARAMS] __unused)
{
	IMSG("pseudo TA \"%s\" says \"Hello world function3!\"", TA_NAME);

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

// static TEE_Result open_session(uint32_t nParamTypes __unused,
// 		TEE_Param pParams[TEE_NUM_PARAMS] __unused,
// 		void **ppSessionContext __unused)
static TEE_Result open_session(uint32_t nParamTypes,
		TEE_Param pParams[TEE_NUM_PARAMS],
		void **ppSessionContext __unused)
{

	DMSG("open entry point for pseudo ta \"%s\"", TA_NAME);
	// struct secure_task_params *curr_task_params = NULL;
	// curr_task_params = (struct secure_task_params*)pParams[0].memref.buffer;
	// task1_execution_time = curr_task_params->execution_time;

	return TEE_SUCCESS;
}

static void close_session(void *pSessionContext __unused)
{
	DMSG("close entry point for pseudo ta \"%s\"", TA_NAME);
}


extern int debug_thread_index;


static TEE_Result invoke_command(void *pSessionContext __unused,
		uint32_t nCommandID, uint32_t nParamTypes,
		TEE_Param pParams[TEE_NUM_PARAMS])
{
	switch (nCommandID) {
	case PTA_TRIGGER_TIMER_CMD_TRACE:
		return test_trace(nParamTypes, pParams);
	case 2:
		return function2(nParamTypes, pParams);
	case 3:
		return function3(nParamTypes, pParams);
	case 4:		
		return function3(nParamTypes, pParams);
	default:
		break;
	}
	return TEE_ERROR_BAD_PARAMETERS;
}

pseudo_ta_register(.uuid = PTA_TRIGGER_TIMER_UUID, .name = TA_NAME,
		   .flags = PTA_DEFAULT_FLAGS | TA_FLAG_SECURE_DATA_PATH |
			    TA_FLAG_DEVICE_ENUM | TA_FLAG_CONCURRENT,
		   .create_entry_point = create_ta,
		   .destroy_entry_point = destroy_ta,
		   .open_session_entry_point = open_session,
		   .close_session_entry_point = close_session,
		   .invoke_command_entry_point = invoke_command);
