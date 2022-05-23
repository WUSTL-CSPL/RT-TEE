/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) 2017, Linaro Limited
 */

#ifndef __PTA_TASK1_H
#define __PTA_TASK1_H



#define PTA_TASK1_UUID \
		{ 0x72aefbfa, 0xd74b, 0x499e, \
			{ 0xa0, 0x39, 0x98, 0xfa, 0x6c, 0xb6, 0xec, 0x20 } }
//72aefbfa-d74b-499e-a039-98fa6cb6ec20

/* Trace some hello string. Parameters are not used/checked. */
#define PTA_TASK1_CMD_TRACE		0

struct secure_task_params{
	int period;
	int priority;
	int execution_time;
	int task_init_flag;
	int cpu;
	void *cstm_param_addr; //used to transfer other params
	int cstm_param_size;   //used to transfer other params
};

#endif /*__PTA_TASK1_H*/