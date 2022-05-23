/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
This program and the accompanying materials                          
are licensed and made available under the terms and conditions of the BSD License         
which accompanies this distribution.  The full text of the license may be found at        
http://opensource.org/licenses/bsd-license.php                                            
                                                                                          
THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,                     
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.  


Module Name:

  IpfTimerLib.c
  
Abstract: 

  Timer Library functions built upon local APIC on IA32/x64.

  @bug Should use PCD to retrieve all the constants including index of
  the IA32_APIC_BASE MSR, the offsets of InitialCount, CorrentCount
  and DivideConfiguration.

--*/

#include "EdkIIGlueBase.h"


/**
  Performs a delay measured as number of ticks.

  An internal function to perform a delay measured as number of ticks. It's
  invoked by MicroSecondDelay() and NanoSecondDelay().

  @param  Delay Number of ticks to delay.

**/
STATIC
VOID
InternalIpfDelay (
  IN      INT64                     Delay
  )
{
  INT64                             Ticks;

  //
  // The target timer count is calculated here
  //
  Ticks = (INT64)AsmReadItc () + Delay;

  //
  // Wait until time out
  // Delay > 2^63 could not be handled by this function
  // Timer wrap-arounds are handled correctly by this function
  //
  while (Ticks - (INT64)AsmReadItc() >= 0);
}

/**
  Stalls the CPU for at least the given number of microseconds.

  Stalls the CPU for the number of microseconds specified by MicroSeconds.

  @param  MicroSeconds  The minimum number of microseconds to delay.

  @return MicroSeconds

**/
UINTN
EFIAPI
MicroSecondDelay (
  IN      UINTN                     MicroSeconds
  )
{
  InternalIpfDelay (
    GetPerformanceCounterProperties (NULL, NULL) *
    MicroSeconds /
    1000000
    );
  return MicroSeconds;
}

/**
  Stalls the CPU for at least the given number of nanoseconds.

  Stalls the CPU for the number of nanoseconds specified by NanoSeconds.

  @param  NanoSeconds The minimum number of nanoseconds to delay.

  @return NanoSeconds

**/
UINTN
EFIAPI
NanoSecondDelay (
  IN      UINTN                     NanoSeconds
  )
{
  InternalIpfDelay (
    GetPerformanceCounterProperties (NULL, NULL) *
    NanoSeconds /
    1000000000
    );
  return NanoSeconds;
}

/**
  Retrieves the current value of a 64-bit free running performance counter.

  Retrieves the current value of a 64-bit free running performance counter. The
  counter can either count up by 1 or count down by 1. If the physical
  performance counter counts by a larger increment, then the counter values
  must be translated. The properties of the counter can be retrieved from
  GetPerformanceCounterProperties().

  @return The current value of the free running performance counter.

**/
UINT64
EFIAPI
GetPerformanceCounter (
  VOID
  )
{
  return AsmReadItc ();
}

/**
  Retrieves the 64-bit frequency in Hz and the range of performance counter
  values.

  If StartValue is not NULL, then the value that the performance counter starts
  with immediately after is it rolls over is returned in StartValue. If
  EndValue is not NULL, then the value that the performance counter end with
  immediately before it rolls over is returned in EndValue. The 64-bit
  frequency of the performance counter in Hz is always returned. If StartValue
  is less than EndValue, then the performance counter counts up. If StartValue
  is greater than EndValue, then the performance counter counts down. For
  example, a 64-bit free running counter that counts up would have a StartValue
  of 0 and an EndValue of 0xFFFFFFFFFFFFFFFF. A 24-bit free running counter
  that counts down would have a StartValue of 0xFFFFFF and an EndValue of 0.

  @param  StartValue  The value the performance counter starts with when it
                      rolls over.
  @param  EndValue    The value that the performance counter ends with before
                      it rolls over.

  @return The frequency in Hz.

**/
UINT64
EFIAPI
GetPerformanceCounterProperties (
  OUT      UINT64                    *StartValue,  OPTIONAL
  OUT      UINT64                    *EndValue     OPTIONAL
  )
{
  PAL_CALL_RETURN                   PalRet;
  UINT64                            BaseFrequence;

  PalRet = PalCallStatic (NULL, 13, 0, 0, 0);
  ASSERT (PalRet.Status == 0);
  BaseFrequence = PalRet.r9;

  PalRet = PalCallStatic (NULL, 14, 0, 0, 0);
  ASSERT (PalRet.Status == 0);

  if (StartValue != NULL) {
    *StartValue = 0;
  }

  if (EndValue != NULL) {
    *EndValue = (UINT64)(-1);
  }

  return BaseFrequence * (PalRet.r11 >> 32) / (UINT32)PalRet.r11;
}
