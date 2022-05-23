/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) 2017, Linaro Limited
 */

#ifndef __PTA_TASK9_H
#define __PTA_TASK9_H



#define PTA_TASK9_UUID \
		{ 0x3cbbd85a, 0x75b8, 0x4101, \
			{ 0x9b, 0x0c, 0xfb, 0x6d, 0xaf, 0x4a, 0x7c, 0x5e } }
//3cbbd85a-75b8-4101-9b0c-fb6daf4a7c5e

/* Trace some hello string. Parameters are not used/checked. */
#define PTA_TASK9_CMD_TRACE		0

struct secure_task_params{
	int period;
	int priority;
	int execution_time;
	int task_init_flag;
	int cpu;
	void *cstm_param_addr; //used to transfer other params
	int cstm_param_size;   //used to transfer other params
};

#endif /*__PTA_TASK9_H*/




