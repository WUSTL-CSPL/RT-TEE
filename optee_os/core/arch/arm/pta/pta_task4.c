#include <compiler.h>
#include <kernel/pseudo_ta.h>
#include <kernel/panic.h>
#include <mm/core_memprot.h>
#include <pta_task4.h>
#include <string.h>
#include <tee/cache.h>
#include <tee_api_defines.h>
#include <tee_api_types.h>
#include <trace.h>
#include <types_ext.h>

#define TA_NAME		"pta_task4.pta"

int task4_execution_time = 0;
extern long loop_result;
extern long mult_busy_loop(unsigned long execution_time);
extern int test_finish[CFG_TEE_CORE_NB_CORE][5];
extern int get_current_core();


static TEE_Result test_trace(uint32_t param_types __unused,
			TEE_Param params[TEE_NUM_PARAMS] __unused)
{
	mult_busy_loop(task4_execution_time); 
	test_finish[get_current_core()][3] += 1; 
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
	struct secure_task_params *curr_task_params = NULL;
	curr_task_params = (struct secure_task_params*)pParams[0].memref.buffer;
	task4_execution_time = curr_task_params->execution_time;
	//int *test_pointer = (int *)pParams[0].memref.buffer;
	//DMSG("in pta: a:%d, b:%d", *test_pointer,*(test_pointer+1));
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
	//FMSG("command entry point for pseudo ta \"%s\"", TA_NAME);

	switch (nCommandID) {
	case PTA_TASK4_CMD_TRACE:
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

pseudo_ta_register(.uuid = PTA_TASK4_UUID, .name = TA_NAME,
		   .flags = PTA_DEFAULT_FLAGS | TA_FLAG_SECURE_DATA_PATH |
			    TA_FLAG_DEVICE_ENUM | TA_FLAG_CONCURRENT,
		   .create_entry_point = create_ta,
		   .destroy_entry_point = destroy_ta,
		   .open_session_entry_point = open_session,
		   .close_session_entry_point = close_session,
		   .invoke_command_entry_point = invoke_command);
