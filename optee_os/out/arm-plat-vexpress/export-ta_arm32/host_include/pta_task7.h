/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) 2017, Linaro Limited
 */

#ifndef __PTA_TASK7_H
#define __PTA_TASK7_H



#define PTA_TASK7_UUID \
		{ 0xff745060, 0x3760, 0x42c0, \
			{ 0xa6, 0x02, 0x61, 0x92, 0xf8, 0xfd, 0x0d, 0xbf } }
//ff745060-3760-42c0-a602-6192f8fd0dbf

/* Trace some hello string. Parameters are not used/checked. */
#define PTA_TASK7_CMD_TRACE		0

struct secure_task_params{
	int period;
	int priority;
	int execution_time;
	int task_init_flag;
	int cpu;
	void *cstm_param_addr; //used to transfer other params
	int cstm_param_size;   //used to transfer other params
};

#endif /*__PTA_TASK7_H*/




