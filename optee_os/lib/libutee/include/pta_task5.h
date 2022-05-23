/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) 2017, Linaro Limited
 */

#ifndef __PTA_TASK5_H
#define __PTA_TASK5_H



#define PTA_TASK5_UUID \
		{ 0x4a3dbe29, 0x7faa, 0x4acb, \
			{ 0xb1, 0xda, 0xd3, 0x5b, 0xf9, 0x22, 0xf0, 0x6e } }

/* Trace some hello string. Parameters are not used/checked. */
#define PTA_TASK5_CMD_TRACE		0

struct secure_task_params{
	int period;
	int priority;
	int execution_time;
	int task_init_flag;
	int cpu;
	void *cstm_param_addr; //used to transfer other params
	int cstm_param_size;   //used to transfer other params
};

#endif /*__PTA_TASK5_H*/




