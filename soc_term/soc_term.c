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

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include <err.h>
#include <errno.h>
#include <poll.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <termios.h>
#include <unistd.h>

static const char prog_name[] = "soc_term";

static struct termios old_term;

static bool handle_telnet;

static void usage(void)
{
	fprintf(stderr, "Usage: %s [-t] <port>\n", prog_name);
	fprintf(stderr, "\t-t: handle telnet commands\n");
	exit(1);
}

static int get_port(const char *str)
{
	long port;
	char *eptr;

	if (*str == '\0')
		usage();

	port = strtol(str, &eptr, 10);
	if (port < 1 || *eptr != '\0')
		usage();
	return (int)port;
}

static int get_listen_fd(const char *port_str)
{
	struct sockaddr_in sain;
	int fd;
	int on;
	int port = get_port(port_str);

	memset(&sain, 0, sizeof(sain));
	sain.sin_family = AF_INET;
	sain.sin_port = htons(port);
	sain.sin_addr.s_addr = htonl(INADDR_ANY);

	fd = socket(sain.sin_family, SOCK_STREAM, 0);
	if (fd == -1)
		err(1, "socket");

	on = 1;
	if (setsockopt(fd, SOL_SOCKET, SO_REUSEADDR, &on, sizeof(on)))
		err(1, "setsockopt");

	if (bind(fd, (struct sockaddr *)&sain, sizeof(sain)))
		err(1, "bind");

	if (listen(fd, 5))
		err(1, "listen");

	return fd;

}

static int accept_fd(int listen_fd)
{
	struct sockaddr_storage sastor;
	socklen_t slen = sizeof(sastor);
	int fd = accept(listen_fd, (struct sockaddr *)&sastor, &slen);

	if (fd == -1)
		err(1, "accept");
	return fd;
}

static void save_current_termios(void)
{
	if (tcgetattr(STDIN_FILENO, &old_term) == -1)
		err(1, "save_current_termios: tcgetattr");
}

static void restore_termios(void)
{
	if (tcsetattr(STDIN_FILENO, TCSAFLUSH, &old_term) == -1)
		err(1, "restore_termios: tcsetattr");
}

static void set_tty_noncanonical(void)
{
	int fd = STDIN_FILENO;
	struct termios t;

	t = old_term;

	t.c_lflag &= ~(ICANON | ECHO | ISIG);

	t.c_iflag &= ~ICRNL;

	t.c_cc[VMIN] = 1;                   /* Character-at-a-time input */
	t.c_cc[VTIME] = 0;                  /* with blocking */

	if (tcsetattr(STDIN_FILENO, TCSAFLUSH, &t) == -1)
		err(1, "set_tty_noncanonical: tcsetattr");
}

static bool write_buf(int fd, const void *buf, size_t count)
{
	const uint8_t *b = buf;
	size_t num_written = 0;

	while (num_written < count) {
		ssize_t res = write(fd, b + num_written, count - num_written);

		if (res == -1)
			return false;

		num_written += res;
	}
	return true;
}

#define TELNET_IAC		0xff
#define TELNET_DO		0xfd
#define TELNET_WILL		0xfb
#define TELNET_SUPRESS_GO_AHEAD	0x1

static void handle_telnet_codes(int fd, char *buf, size_t *blen)
{
	uint8_t *b = (uint8_t *)buf;
	size_t n = 0;
	static uint8_t cmd_bytes[3];
	static size_t num_cmd_bytes = 0;

	if (!handle_telnet)
		return;

	if (buf == NULL) {
		/* Reset state */
		num_cmd_bytes = 0;
		return;
	}

	for (n = 0;n < *blen; n++) {
		if (num_cmd_bytes || b[n] == TELNET_IAC) {
			cmd_bytes[num_cmd_bytes] = b[n];
			num_cmd_bytes++;
			memmove(b + n, b + n + 1, *blen - n - 1);
			(*blen)--;
			n--;
		}
		if (num_cmd_bytes == 3) {
			switch (cmd_bytes[1]) {
			case TELNET_DO:
				cmd_bytes[1] = TELNET_WILL;
				break;
			case TELNET_WILL:
				if (cmd_bytes[2] == TELNET_SUPRESS_GO_AHEAD) {
					/*
					 * We're done after responding to
					 * this
					 */
					handle_telnet = false;
				}

				cmd_bytes[1] = TELNET_DO;
				break;
			default:
				/* Unknown command, ignore it */
				num_cmd_bytes = 0;
			}
			if (num_cmd_bytes) {
				write_buf(fd, cmd_bytes, num_cmd_bytes);
				num_cmd_bytes = 0;
			}
		}
	}
}

static void serve_fd(int fd)
{
	uint8_t buf[512];
	struct pollfd pfds[2];

	memset(pfds, 0, sizeof(pfds));
	pfds[0].fd = STDIN_FILENO;
	pfds[0].events = POLLIN;
	pfds[1].fd = fd;
	pfds[1].events = POLLIN;


	while (true) {
		size_t n;

		if (poll(pfds, 2, -1) == -1)
			err(1, "poll");

		if (pfds[0].revents & POLLIN) {
			n = read(STDIN_FILENO, buf, sizeof(buf));
			if (n == -1)
				err(1, "read stdin");
			if (n == 0)
				errx(1, "read stdin EOF");

			/* TODO handle case when this write blocks */
			if (!write_buf(fd, buf, n)) {
				warn("write_buf fd");
				break;
			}
		}

		if (pfds[1].revents & POLLIN) {
			n = read(fd, buf, sizeof(buf));
			if (n == -1) {
				warn("read fd");
				break;
			}
			if (n == 0) {
				warnx("read fd EOF");
				break;
			}
			handle_telnet_codes(fd, buf, &n);

			if (!write_buf(STDOUT_FILENO, buf, n))
				err(1, "write_buf stdout");
		}
	}
}

int main(int argc, char *argv[])
{
	int listen_fd;
	char *port;
	bool have_handle_telnet_option = false;

	switch (argc) {
	case 2:
		port = argv[1];
		break;
	case 3:
		if (strcmp(argv[1], "-t") != 0)
			usage();
		have_handle_telnet_option = true;
		port = argv[2];
		break;
	default:
		usage();
	}

	save_current_termios();

	listen_fd = get_listen_fd(port);

	printf("listening on port %s\n", port);
	if (have_handle_telnet_option)
		printf("Handling telnet commands\n");

	while (true) {
		int fd = accept_fd(listen_fd);

		handle_telnet = have_handle_telnet_option;
		handle_telnet_codes(-1, NULL, NULL); /* Reset internal state */

		warnx("accepted fd %d", fd);
		set_tty_noncanonical();
		serve_fd(fd);
		if (close(fd))
			err(1, "close");
		fd = -1;
		restore_termios();
	}
}
