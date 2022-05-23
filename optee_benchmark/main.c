/*
 * Copyright (c) 2016, Linaro Limited
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

#include <errno.h>
#include <fcntl.h>
#include <inttypes.h>
#include <limits.h>
#include <libgen.h>
#include <pthread.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>
#include <yaml.h>

#include "benchmark_aux.h"
#include "common.h"

#define MAX_SCALAR	20
static struct tee_ts_global *bench_ts_global;

static const TEEC_UUID pta_benchmark_uuid = PTA_BENCHMARK_UUID;
static TEEC_Context ctx;
static TEEC_Session sess;

static sig_atomic_t is_running;
static yaml_emitter_t emitter;

struct consumer_param {
	pid_t child_pid;
	char *ts_filepath;
};
void sigint_handler(int data)
{
	(void)data;

	is_running = 0;
}

static void open_bench_pta(void)
{
	TEEC_Result res;
	uint32_t err_origin;

	res = TEEC_InitializeContext(NULL, &ctx);
	tee_check_res(res, "TEEC_InitializeContext");

	res = TEEC_OpenSession(&ctx, &sess, &pta_benchmark_uuid,
			TEEC_LOGIN_PUBLIC, NULL, NULL, &err_origin);
	tee_check_res(res, "TEEC_OpenSession");
}

static void close_bench_pta(void)
{
	/* release benchmark timestamp shm */
	TEEC_CloseSession(&sess);
	TEEC_FinalizeContext(&ctx);
}

static void alloc_bench_buf(uint32_t cores)
{
	TEEC_Result res;
	TEEC_Operation op = { 0 };
	uint32_t ret_orig;
	intptr_t paddr_ts_buf = 0;
	size_t size;

	op.paramTypes = TEEC_PARAM_TYPES(TEEC_VALUE_INOUT,
			TEEC_VALUE_INPUT, TEEC_NONE, TEEC_NONE);

	op.params[1].value.a = cores;

	res = TEEC_InvokeCommand(&sess, BENCHMARK_CMD_REGISTER_MEMREF,
					&op, &ret_orig);
	tee_check_res(res, "TEEC_InvokeCommand");

	paddr_ts_buf = op.params[0].value.a;
	size = op.params[0].value.b;

	INFO("ts buffer paddr = %" PRIiPTR ", size = %zu\n", paddr_ts_buf, size);
	if (paddr_ts_buf) {

		bench_ts_global = mmap_paddr(paddr_ts_buf, size);
		if (!bench_ts_global)
			ERROR_EXIT("Failed to allocate timestamp buffer");
	} else {
		ERROR_EXIT("Failed to allocate timestamp buffer");
	}
}

static void free_bench_buf(void)
{
	TEEC_Result res;
	TEEC_Operation op = { 0 };
	uint32_t ret_orig;

	DBG("Freeing benchmark buffer.");
	op.paramTypes = TEEC_PARAM_TYPES(TEEC_NONE,
					TEEC_NONE, TEEC_NONE, TEEC_NONE);

	res = TEEC_InvokeCommand(&sess, BENCHMARK_CMD_UNREGISTER,
					&op, &ret_orig);
	tee_check_res(res, "TEEC_InvokeCommand");
}

static void usage(char *progname)
{
	fprintf(stderr, "Call latency benchmark tool for OP-TEE\n\n");
	fprintf(stderr, "Usage:\n");
	fprintf(stderr, "  %s -h\n", progname);
	fprintf(stderr, "  %s host_app [host_app_args]\n", progname);
	fprintf(stderr, "Options:\n");
	fprintf(stderr, "  -h              Print this help and exit\n");
	fprintf(stderr, "  host_app        Path to host app to benchmark\n");
	fprintf(stderr, "  host_app_args   Original host app args\n");
}

static int timestamp_pop(struct tee_ts_cpu_buf *cpu_buf,
			 struct tee_time_st *ts)
{
	uint64_t ts_tail;

	if (!cpu_buf && !ts)
		return RING_BADPARM;

	if (cpu_buf->tail >= cpu_buf->head)
		return RING_NODATA;

	ts_tail = cpu_buf->tail++;
	*ts = cpu_buf->stamps[ts_tail & TEE_BENCH_MAX_MASK];

	return 0;
}

static bool init_emitter(FILE *ts_file)
{
	yaml_event_t event;

	if (!yaml_emitter_initialize(&emitter))
		ERROR_RETURN_FALSE("Can't initialize YAML emitter");

	yaml_emitter_set_canonical(&emitter, 0);
	yaml_emitter_set_unicode(&emitter, 1);
	yaml_emitter_set_output_file(&emitter, ts_file);

	/* Stream start */
	if (!yaml_stream_start_event_initialize(&event, YAML_UTF8_ENCODING))
		ERROR_GOTO(emitter_delete,
			"Failed to initialize YAML stream start event");
	if (!yaml_emitter_emit(&emitter, &event))
		ERROR_GOTO(emitter_delete,
			"Failed to emit YAML stream start event");

	/* Document start */
	if (!yaml_document_start_event_initialize(&event,
			NULL, NULL, NULL, YAML_IMPLICIT))
		ERROR_GOTO(emitter_delete,
			"Failed to initialize YAML document start event");
	if (!yaml_emitter_emit(&emitter, &event))
		ERROR_GOTO(emitter_delete,
			"Failed to emit YAML doc start event");

	/* Mapping start */
	if (!yaml_mapping_start_event_initialize(&event,
				NULL, NULL , YAML_IMPLICIT,
				YAML_ANY_SEQUENCE_STYLE))
		ERROR_GOTO(emitter_delete,
			"Failed to initialize YAML mapping start event");
	if (!yaml_emitter_emit(&emitter, &event))
		ERROR_GOTO(emitter_delete,
			"Failed to emit YAML sequence mapping event");
	/* Key timestamps */
	yaml_scalar_event_initialize(&event, NULL, NULL,
		(yaml_char_t *)"timestamps", -1, 1, 1, YAML_PLAIN_SCALAR_STYLE);
	if (!yaml_emitter_emit(&emitter, &event))
		ERROR_RETURN_FALSE("Failed to emit YAML scalar");

	/* Sequence start */
	if (!yaml_sequence_start_event_initialize(&event,
				NULL, NULL , YAML_IMPLICIT,
				YAML_ANY_SEQUENCE_STYLE))
		ERROR_GOTO(emitter_delete,
			"Failed to initialize YAML sequence start event");
	if (!yaml_emitter_emit(&emitter, &event))
		ERROR_GOTO(emitter_delete,
			"Failed to emit YAML sequence start event");

	return true;
emitter_delete:
	yaml_emitter_delete(&emitter);
	return false;
}

static void deinit_emitter()
{
	yaml_event_t event;

	/* Sequence cmd */
	if (!yaml_sequence_end_event_initialize(&event))
		ERROR_GOTO(emitter_delete,
			"Failed to initialize YAML sequence end event");
	if (!yaml_emitter_emit(&emitter, &event))
		ERROR_GOTO(emitter_delete,
			"Failed to emit YAML sequence end event");

	/* Mapping end */
	if (!yaml_mapping_end_event_initialize(&event))
		ERROR_GOTO(emitter_delete,
			"Failed to initialize YAML mapping end event");
	if (!yaml_emitter_emit(&emitter, &event))
		ERROR_GOTO(emitter_delete,
			"Failed to emit YAML mapping end event");

	/* Document end */
	if (!yaml_document_end_event_initialize(&event, 0))
		ERROR_GOTO(emitter_delete,
			"Failed to initialize YAML document end event");
	if (!yaml_emitter_emit(&emitter, &event))
		ERROR_GOTO(emitter_delete, "Failed to emit YAML doc end event");

	/* Stream end */
	if (!yaml_stream_end_event_initialize(&event))
		ERROR_GOTO(emitter_delete,
			"Failed to initialise YAML stream end event");
	if (!yaml_emitter_emit(&emitter, &event))
		ERROR_GOTO(emitter_delete,
			"Failed to emit YAML stream end event");

emitter_delete:
	yaml_emitter_delete(&emitter);
}

static bool fill_map(char *var, char *value)
{
	yaml_event_t event;

	yaml_scalar_event_initialize(&event, NULL, NULL,
		(yaml_char_t *)var, -1, 1, 1, YAML_PLAIN_SCALAR_STYLE);
	if (!yaml_emitter_emit(&emitter, &event))
		ERROR_RETURN_FALSE("Failed to emit YAML scalar");

	yaml_scalar_event_initialize(&event, NULL, NULL,
		(yaml_char_t *)value, -1, 1, 1, YAML_PLAIN_SCALAR_STYLE);
	if (!yaml_emitter_emit(&emitter, &event))
		ERROR_RETURN_FALSE("Failed to emit YAML scalar");

	return true;
}

static bool fill_timestamp(uint32_t core, uint64_t count, uint64_t addr,
							const char *subsystem)
{
	yaml_event_t event;
	char data[MAX_SCALAR];

	/* Mapping start */
	if (!yaml_mapping_start_event_initialize(&event,
				NULL, NULL , YAML_IMPLICIT,
				YAML_ANY_SEQUENCE_STYLE))
		ERROR_RETURN_FALSE(
			"Failed to initialize YAML mapping start event");
	if (!yaml_emitter_emit(&emitter, &event))
		ERROR_RETURN_FALSE("Failed to emit YAML mapping start event");

	snprintf(data, MAX_SCALAR, "%" PRIu32, core);
	fill_map("core", data);

	snprintf(data, MAX_SCALAR, "%" PRIu64, count);
	fill_map("counter", data);

	snprintf(data, MAX_SCALAR, "0x%" PRIx64, addr);
	fill_map("address", data);

	snprintf(data, MAX_SCALAR, "%s", subsystem);
	fill_map("component", data);

	/* Mapping end */
	if (!yaml_mapping_end_event_initialize(&event))
		ERROR_RETURN_FALSE(
			"Failed to initialize YAML mapping end event");
	if (!yaml_emitter_emit(&emitter, &event))
		ERROR_RETURN_FALSE("Failed to emit YAML mapping end event");

	return true;
}

/*
 * Consume all timestamps from per-cpu ringbuffers and put everything into
 * the yaml file.
 */
static void *ts_consumer(void *arg)
{
	unsigned int i;
	int ret;
	bool ts_received = false;
	uint32_t cores;
	struct tee_time_st ts_data;
	FILE *ts_file;
	struct consumer_param *prm = (struct consumer_param *)arg;
	char *tsfile_path = prm->ts_filepath;
	pid_t child_pid = prm->child_pid;
	size_t teec_dyn_addr = 0;

	if (!tsfile_path)
		ERROR_GOTO(exit, "Wrong timestamp file path");

	cores = get_cores();
	if (!cores)
		ERROR_GOTO(exit, "Can't receive amount of avalable cores");

	ts_file = fopen(tsfile_path, "w");
	if (!ts_file)
		ERROR_GOTO(exit, "Can't open timestamp file");

	if (!init_emitter(ts_file))
		ERROR_GOTO(file_close,
			"Error occurred in emitter initialization");

	while (is_running) {
		ts_received = false;
		for (i = 0; i < cores; i++) {
			ret = timestamp_pop(&bench_ts_global->cpu_buf[i],
						&ts_data);
			if (!ret) {
				ts_received = true;
				DBG("Timestamp: core = %u; tick = %lld; "
					"pc = 0x%" PRIx64 "; system = %s",
					i, ts_data.cnt, ts_data.addr,
					bench_str_src(ts_data.src));
				do {
					teec_dyn_addr = get_library_load_offset
						(child_pid,
						LIBTEEC_NAME);

				} while (!teec_dyn_addr && is_running);
				if (ts_data.src == TEE_BENCH_CLIENT) {
					DBG("ts_addr = %llx, teec_addr = %x",
						ts_data.addr, teec_dyn_addr);
					ts_data.addr -= teec_dyn_addr;
				}
				if (!fill_timestamp(i, ts_data.cnt,
					ts_data.addr,
					bench_str_src(ts_data.src)))
					ERROR_GOTO(deinit_yaml,
					"Adding timestamp failed");

			}
		}

		if (!ts_received) {
			if (is_running) {
				DBG("yielding...");
				sched_yield();
			} else {
				ERROR_GOTO(deinit_yaml,
					"No new data in the per-cpu ringbuffers"
					);
			}
		}
	}

deinit_yaml:
	deinit_emitter();
file_close:
	fclose(ts_file);
exit:
	return NULL;
}

int main(int argc, char *argv[])
{
	int i;
	int status;
	pid_t pid;
	char testapp_path[PATH_MAX];
	char **testapp_argv;
	char *res;
	char *tsfile_path;
	uint32_t cores;
	pthread_t consumer_thread;
	struct consumer_param prm;

	if (argc == 1) {
		usage(argv[0]);
		return 0;
	}

	/* Parse command line */
	for (i = 1; i < argc; i++) {
		if (!strcmp(argv[i], "-h")) {
			usage(argv[0]);
			return 0;
		}
	}

	signal(SIGINT, sigint_handler);

	INFO("1. Opening Benchmark Static TA...");
	open_bench_pta();

	cores = get_cores();
	if (!cores)
		ERROR_EXIT("Receiving amount of active cores failed");

	INFO("2. Allocating per-core buffers, cores detected = %d",
					cores);
	alloc_bench_buf(cores);

	res = realpath(argv[1], testapp_path);
	if (!res)
		tee_errx("Failed to get realpath", EXIT_FAILURE);

	alloc_argv(argc, argv, &testapp_argv);

	INFO("3. Starting origin host app %s ...", testapp_path);

	/* fork/exec here */
	pid = fork();

	if (pid == -1) {
		DBG("fork() failed");
		ERROR_EXIT("Starting origin host application failed.");
	} else if (pid > 0) {
		is_running = 1;
		tsfile_path = malloc(strlen(testapp_path) +
					strlen(TSFILE_NAME_SUFFIX) + 1);
		if (!tsfile_path)
			ERROR_EXIT("Memory allocation failed the file path.");

		tsfile_path[0] = '\0';
		strcat(tsfile_path, testapp_path);
		strcat(tsfile_path, TSFILE_NAME_SUFFIX);

		INFO("Dumping timestamps to %s ...", tsfile_path);
		print_line();

		prm.child_pid = pid;
		prm.ts_filepath = tsfile_path;

		if (pthread_create(&consumer_thread, NULL,
				ts_consumer, &prm)) {
			DBG( "Error creating ts consumer thread");
			ERROR_EXIT("Can't start process of reading timestamps");
		}
		/* wait for child app exits */
		waitpid(pid, &status, 0);
		DBG("Origin host application finished executing");

		is_running = 0;

		/* wait for our consumer thread terminate */
		if (pthread_join(consumer_thread, NULL)) {
			DBG("Error joining thread");
			ERROR_EXIT("Couldn't start consuming timestamps");
		}
	}
	else {
		execvp(testapp_path, testapp_argv);
		DBG("execve() failed");
		ERROR_EXIT("Starting origin host application failed");
	}

	INFO("4. Done benchmark");

	dealloc_argv(argc-1, testapp_argv);
	free_bench_buf();
	close_bench_pta();
	return 0;
}
