/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) 2017, Linaro Limited
 */

#ifndef __PTA_TRIGGER_TIMER_H
#define __PTA_TRIGGER_TIMER_H



#define PTA_TRIGGER_TIMER_UUID \
		{ 0xe4b63842, 0x05a2, 0x4663, \
			{ 0x95, 0xbf, 0x6a, 0x79, 0xb8, 0xdf, 0xfc, 0x1b } }
//e4b63842-05a2-4663-95bf-6a79b8dffc1b

/* Trace some hello string. Parameters are not used/checked. */
#define PTA_TRIGGER_TIMER_CMD_TRACE		0

struct secure_task_params{
	int period;
	int priority;
	int execution_time;
	int task_init_flag;
	int cpu;
	void *cstm_param_addr; //used to transfer other params
	int cstm_param_size;   //used to transfer other params
};

#endif /*__PTA_TRIGGER_TIMER_H*/




