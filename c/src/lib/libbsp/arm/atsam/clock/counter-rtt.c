/*
 * Copyright (c) 2016 embedded brains GmbH.  All rights reserved.
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

#include <rtems/counter.h>
#include <libchip/chip.h>
#include <bsp/counter-rtt.h>

#include <bsp.h>

#define RTT_PRESCALER 3 /* minimum value according to datasheet */
#define RTT_INPUT_CLOCK_HZ 32768

void atsam_rtt_initialize(void)
{
  Rtt *rtt = RTT;
  RTT_SetPrescaler(rtt, RTT_PRESCALER);
  rtems_counter_initialize_converter(RTT_INPUT_CLOCK_HZ / RTT_PRESCALER);
}

CPU_Counter_ticks _CPU_Counter_read(void)
{
  Rtt *rtt = RTT;
  return RTT_GetTime(rtt);
}
