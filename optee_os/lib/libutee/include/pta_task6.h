/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) 2017, Linaro Limited
 */

#ifndef __PTA_TASK6_H
#define __PTA_TASK6_H



#define PTA_TASK6_UUID \
		{ 0x05319fc7, 0x83ce, 0x4d32, \
			{ 0xbb, 0x91, 0x37, 0x10, 0xc5, 0xa5, 0x0c, 0x50 } }
//05319fc7-83ce-4d32-bb91-3710c5a50c50

/* Trace some hello string. Parameters are not used/checked. */
#define PTA_TASK6_CMD_TRACE		0

struct secure_task_params{
	int period;
	int priority;
	int execution_time;
	int task_init_flag;
	int cpu;
	void *cstm_param_addr; //used to transfer other params
	int cstm_param_size;   //used to transfer other params
};

#endif /*__PTA_TASK6_H*/




