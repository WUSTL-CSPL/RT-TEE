/*
 * Copyright (c) 2017, Linaro Limited
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

#ifndef COMMON_H
#define COMMON_H

/*
 * Misc. output defines
 */

#define OUTPUT_APP_PREFIX "Benchmark"

#ifdef DEBUG
#define DBG(fmt, args...) printf("[" OUTPUT_APP_PREFIX \
	"] DEBUG: %s:%d:%s(): " fmt "\n", __FILE__, __LINE__, __func__, ##args)
#else
#define DBG(fmt, args...)
#endif

#define INFO(fmt, args...) printf("[" OUTPUT_APP_PREFIX \
					"] INFO: " fmt "\n", ##args)
#define ERROR(fmt, args...) fprintf(stderr, "[" OUTPUT_APP_PREFIX \
					"] ERROR: " fmt "\n", ##args)

#define ERROR_EXIT(fmt, args...) do {		\
					ERROR(fmt, ##args);		\
					exit(EXIT_FAILURE);		\
			} while(0)

#define ERROR_RETURN_FALSE(fmt, args...) do {		\
					ERROR(fmt, ##args);		\
					return false;			\
			} while(0)

#define ERROR_GOTO(label, fmt, args...) do {		\
					ERROR(fmt, ##args);		\
					goto label;			\
			} while(0)




#define STAT_AMOUNT 				5
#define TSFILE_NAME_SUFFIX			".ts"
#define YAML_IMPLICIT				1
/*
 * Ringbuffer return codes
 */
#define RING_SUCCESS	0
#define RING_BADPARM	-1
#define RING_NODATA		-2

#define LIBTEEC_NAME	"libteec.so"
#endif /* COMMON.H */

