/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) 2017, Linaro Limited
 */

#ifndef __PTA_TASK8_H
#define __PTA_TASK8_H



#define PTA_TASK8_UUID \
		{ 0xcbcbf915, 0x8b8c, 0x414e, \
			{ 0xa3, 0xc0, 0x0d, 0x9f, 0x98, 0xa6, 0x43, 0xf3 } }
//cbcbf915-8b8c-414e-a3c0-0d9f98a643f3

/* Trace some hello string. Parameters are not used/checked. */
#define PTA_TASK8_CMD_TRACE		0

struct secure_task_params{
	int period;
	int priority;
	int execution_time;
	int task_init_flag;
	int cpu;
	void *cstm_param_addr; //used to transfer other params
	int cstm_param_size;   //used to transfer other params
};

#endif /*__PTA_TASK8_H*/




