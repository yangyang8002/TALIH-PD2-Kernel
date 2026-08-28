/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _LINUX_BOOT_MARK_H
#define _LINUX_BOOT_MARK_H
void boot_mark(const char *s);
void boot_mark_late(void);
void boot_mark_early(const char *s);
void boot_crash(const char *s);

/* Self-destruct bisection inside do_early_param(): crash after this many
 * early-param cmdline tokens have been fully handled. Bump each round. */
#define EARLY_PARAM_BISECT_N 16
#endif
