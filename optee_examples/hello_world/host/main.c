/*
 * Copyright (c) 2014, Linaro Limited
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#define _GNU_SOURCE
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <err.h>
#include <tee_client_api.h>
#include <ta_hello_world.h>
#include <pthread.h>
#include <unistd.h>


#define CFG_TEE_CORE_NB_CORE	4
#define SECURE_TASK_NUM		5
#define TA_NUM 20

//task_init_flag indicate whether this task need to initialized
//1: task initialization, 0: no task initialization
struct secure_task_params{
	int period;
	int priority;
	int execution_time;
	int task_init_flag;
	int cpu;
	void *cstm_param_addr; //used to transfer other params
	int cstm_param_size;   //used to transfer other params
};

struct world_params
{
	int secure_period;
	int secure_budget;
	int non_secure_period;
	int non_secure_budget;
};

TEEC_Result results[TA_NUM];
TEEC_Context contexts[TA_NUM];
TEEC_Session sessions[TA_NUM];
TEEC_Operation operations[TA_NUM];
TEEC_UUID *uuid_tasks[TA_NUM];
struct secure_task_params task_params[TA_NUM];
uint32_t err_origins[TA_NUM];
struct world_params each_core_world_params[CFG_TEE_CORE_NB_CORE];


void world_params_init(struct world_params *world_params, int secure_period,\
	int secure_budget, int non_secure_period, int non_secure_budget){
	world_params->secure_period = secure_period;
	world_params->secure_budget = secure_budget;
	world_params->non_secure_period = non_secure_period;
	world_params->non_secure_budget = non_secure_budget;
}


void task_param_init(struct secure_task_params * task_params, int period,\
 int priority, int execution_time, int task_init_flag, int cpu){
 	task_params->period = period;
 	task_params->priority = priority;
 	task_params->execution_time = execution_time;
 	task_params->task_init_flag = task_init_flag;
 	task_params->cpu = cpu;
}

void rt_tee_open_session(int taskId){
	/* Initialize a context connecting us to the TEE */
	results[taskId] = TEEC_InitializeContext(NULL, &contexts[taskId]);
	if (results[taskId] != TEEC_SUCCESS)
		errx(1, "TEEC_InitializeContext failed with code 0x%x", results[taskId]);

	// * Open a session to the TA, the TA will perform the task
	//TEEC_MEMREF_INOUT
	//TEEC_MEMREF_TEMP_INPUT
	operations[taskId].paramTypes = TEEC_PARAM_TYPES(TEEC_MEMREF_TEMP_INPUT, TEEC_NONE, TEEC_NONE, TEEC_NONE);
	operations[taskId].params[0].memref.parent = &task_params[taskId];
	operations[taskId].params[0].memref.offset = 0;
	operations[taskId].params[0].memref.size = sizeof(struct secure_task_params);

	results[taskId] = TEEC_OpenSession(&contexts[taskId], &sessions[taskId], uuid_tasks[taskId],
			       TEEC_LOGIN_PUBLIC, NULL, &operations[taskId], &err_origins[taskId]);
	if (results[taskId] != TEEC_SUCCESS)
		errx(1, "TEEC_Opensession failed with code 0x%x origin 0x%x",
			results[taskId], err_origins[taskId]);
}

// void rt_tee_scheduler_start(struct world_params *curr_world_params){
void rt_tee_scheduler_start(struct world_params *first_world_params, unsigned int cmd_id){

	cpu_set_t mask;
	CPU_ZERO(&mask);
	CPU_SET(0, &mask);
	sched_setaffinity(0, sizeof(cpu_set_t), &mask);

	//initiate world scheduer params(world period and budget) and start rt-tee-scheduler
	memset(&operations[0], 0, sizeof(operations[0]));
	operations[0].paramTypes = TEEC_PARAM_TYPES(TEEC_MEMREF_TEMP_INPUT, TEEC_NONE,
					 TEEC_NONE, TEEC_NONE);

	// operations[0].params[0].memref.parent = curr_world_params;
	operations[0].params[0].memref.parent = first_world_params;
	operations[0].params[0].memref.offset = 0;
	// operations[0].params[0].memref.size = sizeof(struct world_params);
	operations[0].params[0].memref.size = CFG_TEE_CORE_NB_CORE * sizeof(struct world_params);

	//start scheduler
	results[0] = TEEC_InvokeCommand(&sessions[0], cmd_id, &operations[0],
				 &err_origins[0]);
	if (results[0] != TEEC_SUCCESS)
		errx(1, "TEEC_InvokeCommand failed with code 0x%x origin 0x%x",
			results[0], err_origins[0]);
}

void rt_tee_close_sessions(int taskId){
	TEEC_CloseSession(&sessions[taskId]);
	TEEC_FinalizeContext(&contexts[taskId]);
}

//trigger timer on core 1,2,3
void trigger_timer_on_cores(int pin_core){

	cpu_set_t mask;
	CPU_ZERO(&mask);
    CPU_SET(pin_core, &mask);
    sched_setaffinity(0, sizeof(cpu_set_t), &mask);

	/* code */
	TEEC_Result res;
	TEEC_Context ctx;
	TEEC_Operation op;

	uint32_t err_origin;

	res = TEEC_InitializeContext(NULL, &ctx);
	if (res != TEEC_SUCCESS)
		errx(1, "TEEC_InitializeContext failed with code 0x%x", res);

	memset(&op, 0, sizeof(op));
	op.paramTypes = TEEC_PARAM_TYPES(TEEC_VALUE_INOUT, TEEC_NONE,
					 TEEC_NONE, TEEC_NONE);
	op.params[0].value.a = 42;

	res = TEEC_InvokeCommand(&sessions[0], PTA_RT_TEE_TRIGGER_TIMER, &op,
				 &err_origin);	

	if (res != TEEC_SUCCESS)
		errx(1, "TEEC_InvokeCommand failed with code 0x%x origin 0x%x",
			res, err_origin);

	return ;
}


void rt_tee_task_init(int task_index){
	rt_tee_open_session(task_index);
}

void world_sched_init(){
	rt_tee_scheduler_start(&each_core_world_params[0], PTA_RT_TEE_SCHEDULER_CMD_START);
}

void world_sched_start(int core){
	trigger_timer_on_cores(core);
}

int main(int argc, char *argv[])
{
	cpu_set_t mask;
 //    CPU_ZERO(&mask);
 //    CPU_SET(1, &mask);
 //    sched_setaffinity(0, sizeof(cpu_set_t), &mask);

	//initialize uuids for each task and period, budgets, and execution for each task
	TEEC_UUID uuid_scheduler_start = TA_HELLO_WORLD_UUID;
	// TEEC_UUID uuid_dta_task1 = DTA_TASK1_UUID;
	// TEEC_UUID uuid_dta_task2 = DTA_TASK2_UUID;
	// TEEC_UUID uuid_dta_task3 = DTA_TASK3_UUID;
	// TEEC_UUID uuid_dta_task4 = DTA_TASK4_UUID;
	// TEEC_UUID uuid_dta_task5 = DTA_TASK5_UUID;
	// TEEC_UUID uuid_dta_task6 = DTA_TASK6_UUID;	
	TEEC_UUID uuid_task1 = PTA_TASK1_UUID;
	TEEC_UUID uuid_task2 = PTA_TASK2_UUID;
	TEEC_UUID uuid_task3 = PTA_TASK3_UUID;
	TEEC_UUID uuid_task4 = PTA_TASK4_UUID;
	TEEC_UUID uuid_task5 = PTA_TASK5_UUID;
	TEEC_UUID uuid_task6 = PTA_TASK6_UUID;
	TEEC_UUID uuid_task7 = PTA_TASK7_UUID;
	TEEC_UUID uuid_task8 = PTA_TASK8_UUID;
	TEEC_UUID uuid_task9 = PTA_TASK9_UUID;
	TEEC_UUID uuid_task10 = PTA_TASK10_UUID;

	TEEC_UUID uuid_rt_tee_scheduler = PTA_RT_TEE_SCHEDULER_UUID;
	TEEC_UUID uuid_trigger_timer = PTA_TRIGGER_TIMER_UUID;

	uuid_tasks[0] = &uuid_rt_tee_scheduler;

	uuid_tasks[1] = &uuid_task1;
	uuid_tasks[2] = &uuid_task2;
	uuid_tasks[3] = &uuid_task3;
	uuid_tasks[4] = &uuid_task4;
	uuid_tasks[5] = &uuid_task5;


	// uuid_tasks[1] = &uuid_dta_task1;
	// uuid_tasks[2] = &uuid_dta_task2;
	// uuid_tasks[3] = &uuid_dta_task3;
	// uuid_tasks[4] = &uuid_dta_task4;
	// uuid_tasks[5] = &uuid_dta_task5;
	// uuid_tasks[6] = &uuid_dta_task6;	

	//set task one params(period, priority, execution, \
	whether a task which need to allocate task storage struct, asigned cpu)
	task_param_init(&task_params[0], 1,1,1,0,0); 
	


	// // 70%
	task_param_init(&task_params[1], 51000,0,7000,1,0); 
	task_param_init(&task_params[2], 65000,1,7000,1,0); 
	task_param_init(&task_params[3], 142000,2,6000,1,0);
	task_param_init(&task_params[4], 214000,3,9000,1,0); 
	task_param_init(&task_params[5], 285000,4,8000,1,0);	
	

	//setting secure_period, secure_budegt, non_secure_period, non_secure_budget
	//50:50

	// //70%
 	world_params_init(&each_core_world_params[0], 20000, 9400, 22000, 12800);
	world_params_init(&each_core_world_params[1], 20000, 9400, 22000, 12800);
	world_params_init(&each_core_world_params[2], 20000, 9400, 22000, 12800);
	world_params_init(&each_core_world_params[3], 20000, 9400, 22000, 12800);

	//corresponding normal world tasks execution parameters (execution time, period) ms
	//(8, 60)
	//(5, 78)
	//(9, 98)
	//(6, 121)
	//(7, 500)


	//open session for rt-tee-scheduler initialization and start, 
	//the task param for scheduelr start task is meaningless
	rt_tee_task_init(0);


	//this will cause dta invocation fails
	// rt_tee_open_session(6);

	//open session for each secure tasks and creation tasks in rt-tee
	for(int i = 1; i <= SECURE_TASK_NUM; i++){

		rt_tee_task_init(i);
	}


	//initiate world scheduer params(world period and budget) and start rt-tee-scheduler
	world_sched_init();


	//trigger_timer_on_cores(0);
	world_sched_start(0);

	// trigger_timer_on_cores(2);

	// trigger_timer_on_cores(2);

	
	sleep(3500);

	// finish tasks and close all sessions to destroy the context
	for(int i = 0; i <= SECURE_TASK_NUM; i++){
		rt_tee_close_sessions(i);
	}

	return 0;
}

