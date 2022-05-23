/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) 2017, Linaro Limited
 */

#ifndef __PTA_TASK2_H
#define __PTA_TASK2_H

#define PTA_TASK2_UUID \
		{ 0x69bd9327, 0xab63, 0x4d26, \
			{ 0x9a, 0xa7, 0xb6, 0x24, 0x6f, 0xdc, 0xee, 0x75 } }
//69bd9327-ab63-4d26-9aa7-b6246fdcee75

/* Trace some hello string. Parameters are not used/checked. */
#define PTA_TASK2_CMD_TRACE		0

struct secure_task_params{
	int period;
	int priority;
	int execution_time;
	int task_init_flag;
	int cpu;
	void *cstm_param_addr; //used to transfer other params
	int cstm_param_size;   //used to transfer other params
};

#endif /*__PTA_TASK2_H*/




