/*++

Copyright (c) 2004 - 2011, Intel Corporation. All rights reserved.<BR>
This program and the accompanying materials                          
are licensed and made available under the terms and conditions of the BSD License         
which accompanies this distribution.  The full text of the license may be found at        
http://opensource.org/licenses/bsd-license.php                                            
                                                                                          
THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,                     
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.  


Module Name:

  CpuBreakpint.c
  
Abstract: 

--*/

#include "BaseLibInternals.h"

/**
  Generates a breakpoint on the CPU.

  Generates a breakpoint on the CPU. The breakpoint must be implemented such
  that code can resume normal execution after the breakpoint.

**/
VOID
EFIAPI
CpuBreakpoint (
  VOID
  )
{
  __break (0);
}

/**
  Used to serialize load and store operations.

  All loads and stores that proceed calls to this function are guaranteed to be
  globally visible when this function returns.

**/
VOID
EFIAPI
MemoryFence (
  VOID
  )
{
  __mfa ();
}

/**
  Disables CPU interrupts.

  Disables CPU interrupts.

**/
VOID
EFIAPI
DisableInterrupts (
  VOID
  )
{
  _disable ();
}

/**
  Enables CPU interrupts.

  Enables CPU interrupts.

**/
VOID
EFIAPI
EnableInterrupts (
  VOID
  )
{
  _enable ();
}

/**
  Enables CPU interrupts for the smallest window required to capture any
  pending interrupts.

  Enables CPU interrupts for the smallest window required to capture any
  pending interrupts.

**/
VOID
EFIAPI
EnableDisableInterrupts (
  VOID
  )
{
  EnableInterrupts ();
  DisableInterrupts ();
}

/**
  Places the CPU in a sleep state until an interrupt is received.

  Places the CPU in a sleep state until an interrupt is received. If interrupts
  are disabled prior to calling this function, then the CPU will be placed in a
  sleep state indefinitely.

**/
VOID
EFIAPI
CpuSleep (
  VOID
  )
{
  PalCallStatic (NULL, 29, 0, 0, 0);
}
