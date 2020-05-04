/*
 * Copyright (c) 2018-2020 embedded brains GmbH.  All rights reserved.
 *
 *  embedded brains GmbH
 *  Dornierstr. 4
 *  82178 Puchheim
 *  Germany
 *  <rtems@embedded-brains.de>
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rtems.org/license/LICENSE.
 */

#ifndef ATSAM_IOCOPY_H
#define ATSAM_IOCOPY_H

#include <rtems.h>
#include <rtems/iocopy.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define atsam_copy_to_io memcpy_toio
#define atsam_copy_from_io memcpy_fromio

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* ATSAM_IOCOPY_H */
