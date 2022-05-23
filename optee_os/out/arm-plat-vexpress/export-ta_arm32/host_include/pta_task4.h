/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) 2017, Linaro Limited
 */

#ifndef __PTA_TASK4_H
#define __PTA_TASK4_H



#define PTA_TASK4_UUID \
		{ 0x27d6ef44, 0x96ec, 0x4ec0, \
			{ 0xaa, 0xb3, 0xe0, 0x50, 0xcc, 0x02, 0xd7, 0x37 } }

/* Trace some hello string. Parameters are not used/checked. */
#define PTA_TASK4_CMD_TRACE		0

struct secure_task_params{
	int period;
	int priority;
	int execution_time;
	int task_init_flag;
	int cpu;
	void *cstm_param_addr; //used to transfer other params
	int cstm_param_size;   //used to transfer other params
};

#endif /*__PTA_TASK4_H*/




