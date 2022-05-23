/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) 2017, Linaro Limited
 */

#ifndef __PTA_TASK3_H
#define __PTA_TASK3_H

#define PTA_TASK3_UUID \
		{ 0xf8b50256, 0x9cdf, 0x4891, \
			{ 0xb3, 0xce, 0xe7, 0x28, 0x25, 0xe5, 0xfe, 0xf0 } }
//f8b50256-9cdf-4891-b3ce-e72825e5fef0

/* Trace some hello string. Parameters are not used/checked. */
#define PTA_TASK3_CMD_TRACE		0

struct secure_task_params{
	int period;
	int priority;
	int execution_time;
	int task_init_flag;
	int cpu;
	void *cstm_param_addr; //used to transfer other params
	int cstm_param_size;   //used to transfer other params
};


#endif /*__PTA_TASK3_H*/




