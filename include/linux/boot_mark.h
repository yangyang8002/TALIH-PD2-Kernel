/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _LINUX_BOOT_MARK_H
#define _LINUX_BOOT_MARK_H
void boot_mark(const char *s);
void boot_mark_late(void);
void boot_mark_early(const char *s);
void boot_crash(const char *s);
#endif
