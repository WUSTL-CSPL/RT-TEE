/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) 2017, Linaro Limited
 */

#ifndef __PTA_TASK10_H
#define __PTA_TASK10_H



#define PTA_TASK10_UUID \
		{ 0xd9fa0889, 0x26ff, 0x43c8, \
			{ 0xb2, 0x59, 0xb6, 0x38, 0xf1, 0xc6, 0xeb, 0x01 } }
//d9fa0889-26ff-43c8-b259-b638f1c6eb01

/* Trace some hello string. Parameters are not used/checked. */
#define PTA_TASK10_CMD_TRACE		0

struct secure_task_params{
	int period;
	int priority;
	int execution_time;
	int task_init_flag;
	int cpu;
	void *cstm_param_addr; //used to transfer other params
	int cstm_param_size;   //used to transfer other params
};

#endif /*__PTA_TASK10_H*/




