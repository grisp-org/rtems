/*
 *  Written by: Jake Janovetz <janovetz@tempest.ece.uiuc.edu>
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.rtems.com/license/LICENSE.
 *
 *  $Id$
 */

#ifndef __UNTAR_H__
#define __UNTAR_H__

#include <stddef.h>
#include <rtems/tar.h>

#ifdef __cplusplus
extern "C" {
#endif

#define UNTAR_SUCCESSFUL         0
#define UNTAR_FAIL               1
#define UNTAR_INVALID_CHECKSUM   2
#define UNTAR_INVALID_HEADER     3


int Untar_FromMemory(char *tar_buf, size_t size);
int Untar_FromFile(char *tar_name);

/**************************************************************************
 * This converts octal ASCII number representations into an
 * unsigned long.  Only support 32-bit numbers for now.
 *************************************************************************/
extern unsigned long
_rtems_octal2ulong(const char *octascii, size_t len);

/************************************************************************
 * Compute the TAR checksum and check with the value in
 * the archive.  The checksum is computed over the entire
 * header, but the checksum field is substituted with blanks.
 ************************************************************************/
extern int
_rtems_tar_header_checksum(const char *bufr);

#ifdef __cplusplus
}
#endif

#endif  /* __UNTAR_H__ */
