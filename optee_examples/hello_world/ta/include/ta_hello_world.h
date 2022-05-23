/*
 * Copyright (c) 2014, Linaro Limited
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef TA_HELLO_WORLD_H
#define TA_HELLO_WORLD_H

/* This UUID is generated with uuidgen
   the ITU-T UUID generator at http://www.itu.int/ITU-T/asn1/uuid.html */
#define DTA_TASK1_UUID { 0x8aaaf200, 0x2450, 0x11e4, \
		{ 0xab, 0xe2, 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b} }
//8aaaf200-2450-11e4-abe2-0002a5d5c51b
#define DTA_TASK2_UUID { 0xa25cbf7f, 0x8162, 0x4fe3, \
		{ 0x94, 0x38, 0xb7, 0xe4, 0x0c, 0x93, 0xd5, 0x02} }
//a25cbf7f-8162-4fe3-9438-b7e40c93d502
#define DTA_TASK3_UUID { 0xa5891c8a, 0x9066, 0x473f, \
		{ 0xa5, 0x63, 0x17, 0x7a, 0x3b, 0x1a, 0xb5, 0x6f} }
//a5891c8a-9066-473f-a563-177a3b1ab56f
#define DTA_TASK4_UUID { 0x235e4227, 0x8146, 0x4c9b, \
		{ 0x85, 0x44, 0xc1, 0xa4, 0xa4, 0xa5, 0x8b, 0xe9} }
//235e4227-8146-4c9b-8544-c1a4a4a58be9
#define DTA_TASK5_UUID { 0x7b8b42ae, 0x640f, 0x4304, \
		{ 0xb7, 0x74, 0x9c, 0x98, 0xf2, 0x04, 0x8a, 0xb4} }
//7b8b42ae-640f-4304-b774-9c98f2048ab4
#define DTA_TASK6_UUID { 0x6485de1f, 0x9ae3, 0x48b1, \
		{ 0x8d, 0xf5, 0x9f, 0xec, 0xcb, 0x92, 0x22, 0x25} }
//6485de1f-9ae3-48b1-8df5-9feccb922225




#define TA_HELLO_WORLD_UUID \
		{ 0xd96a5b40, 0xc3e5, 0x21e3, \
			{ 0x87, 0x94, 0x10, 0x02, 0xa5, 0xd5, 0xc6, 0x1b } }

#define PTA_TASK1_UUID \
		{ 0x72aefbfa, 0xd74b, 0x499e, \
			{ 0xa0, 0x39, 0x98, 0xfa, 0x6c, 0xb6, 0xec, 0x20 } }

#define PTA_TASK2_UUID \
		{ 0x69bd9327, 0xab63, 0x4d26, \
			{ 0x9a, 0xa7, 0xb6, 0x24, 0x6f, 0xdc, 0xee, 0x75 } }

#define PTA_TASK3_UUID \
		{ 0xf8b50256, 0x9cdf, 0x4891, \
			{ 0xb3, 0xce, 0xe7, 0x28, 0x25, 0xe5, 0xfe, 0xf0 } }

#define PTA_TASK4_UUID \
		{ 0x27d6ef44, 0x96ec, 0x4ec0, \
			{ 0xaa, 0xb3, 0xe0, 0x50, 0xcc, 0x02, 0xd7, 0x37 } }

#define PTA_TASK5_UUID \
		{ 0x4a3dbe29, 0x7faa, 0x4acb, \
			{ 0xb1, 0xda, 0xd3, 0x5b, 0xf9, 0x22, 0xf0, 0x6e } }

#define PTA_TASK6_UUID \
		{ 0x05319fc7, 0x83ce, 0x4d32, \
			{ 0xbb, 0x91, 0x37, 0x10, 0xc5, 0xa5, 0x0c, 0x50 } }
//05319fc7-83ce-4d32-bb91-3710c5a50c50

#define PTA_TASK7_UUID \
		{ 0xff745060, 0x3760, 0x42c0, \
			{ 0xa6, 0x02, 0x61, 0x92, 0xf8, 0xfd, 0x0d, 0xbf } }
//ff745060-3760-42c0-a602-6192f8fd0dbf

#define PTA_TASK8_UUID \
		{ 0xcbcbf915, 0x8b8c, 0x414e, \
			{ 0xa3, 0xc0, 0x0d, 0x9f, 0x98, 0xa6, 0x43, 0xf3 } }
//cbcbf915-8b8c-414e-a3c0-0d9f98a643f3

#define PTA_TASK9_UUID \
		{ 0x3cbbd85a, 0x75b8, 0x4101, \
			{ 0x9b, 0x0c, 0xfb, 0x6d, 0xaf, 0x4a, 0x7c, 0x5e } }
//3cbbd85a-75b8-4101-9b0c-fb6daf4a7c5e

#define PTA_TASK10_UUID \
		{ 0xd9fa0889, 0x26ff, 0x43c8, \
			{ 0xb2, 0x59, 0xb6, 0x38, 0xf1, 0xc6, 0xeb, 0x01 } }
//d9fa0889-26ff-43c8-b259-b638f1c6eb01

#define PTA_RT_TEE_SCHEDULER_UUID \
		{ 0x3ae8fc23, 0xc150, 0x4cc6, \
			{ 0xa5, 0x5a, 0x76, 0x8b, 0x61, 0xca, 0x93, 0x08 } }


#define PTA_TRIGGER_TIMER_UUID \
		{ 0xe4b63842, 0x05a2, 0x4663, \
			{ 0x95, 0xbf, 0x6a, 0x79, 0xb8, 0xdf, 0xfc, 0x1b } }
//e4b63842-05a2-4663-95bf-6a79b8dffc1b


/* The TAFs ID implemented in this TA */
#define TA_HELLO_WORLD_CMD_INC_VALUE	0

#define PTA_TRIGGER_SCHED_FROM_NORMAL_WORLD 9


#define PTA_RT_TEE_SCHEDULER_CMD_START	0

#define PTA_RT_TEE_TRIGGER_TIMER 1


struct secure_task_inputs
{
	float x;
	float y;
	float z;
	float p;
	float q;
};

struct secure_task_outputs
{
	float x;
	float y;
	float z;
};



#endif /*TA_HELLO_WORLD_H*/
