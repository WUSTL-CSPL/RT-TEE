/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) 2017, Linaro Limited
 */

#ifndef __PTA_RT_TEE_SCHEDULER_H
#define __PTA_RT_TEE_SCHEDULER_H

#define PTA_RT_TEE_SCHEDULER_UUID \
		{ 0x3ae8fc23, 0xc150, 0x4cc6, \
			{ 0xa5, 0x5a, 0x76, 0x8b, 0x61, 0xca, 0x93, 0x08 } }

/* initialize scheduler and start it*/
#define PTA_RT_TEE_SCHEDULER_CMD_START		0
/* trigger timer to start rt-tee scheduler*/
#define PTA_RT_TEE_TRIGGER_TIMER			1

struct world_params
{
	int secure_period;
	int secure_budget;
	int non_secure_period;
	int non_secure_budget;
};

#endif /*__PTA_RT_TEE_SCHEDULER_H*/




