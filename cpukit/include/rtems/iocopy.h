/* SPDX-License-Identifier: BSD-2-Clause */

/**
 * @file
 *
 * @ingroup libmisc_ioaccess
 *
 * @brief Evaluate IO Library Configuration Options
 */

/*
 * Copyright (C) 2020 embedded brains GmbH (http://www.embedded-brains.de)
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _RTEMS_IOCOPY_H
#define _RTEMS_IOCOPY_H

#include <rtems.h>
#include <stdint.h>

/**
 *  @defgroup libmisc_ioaccess IO memory accesses
 */
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*
 * Note: This functions are for copying from or to memory that don't allow
 * misaligned access. In such areas memcpy doesn't work on all architectures.
 */

/**
 * @brief Copy data to IO memory.
 *
 * Copy a block of @a count Bytes from @src to @dst. @dst can point to a memory
 * location that doesn't allow misaligned access.
 */
void memcpy_toio(void *dst, const void *src, size_t count);
/**
 * @brief Copy data from IO memory.
 *
 * Copy a block of @a count Bytes from @src to @dst. @src can point to a memory
 * location that doesn't allow misaligned access.
 */
void memcpy_fromio(void *dst, const void *src, size_t count);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _RTEMS_IOCOPY_H */
