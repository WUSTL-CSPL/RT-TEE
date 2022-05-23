/** @file
  Internal header file for DxeIpl module.
  
Copyright (c) 2006 - 2011, Intel Corporation. All rights reserved.<BR>
This program and the accompanying materials                          
are licensed and made available under the terms and conditions of the BSD License         
which accompanies this distribution.  The full text of the license may be found at        
http://opensource.org/licenses/bsd-license.php                                            
                                                                                          
THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,                     
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.             

**/  

#ifndef _DUET_DXEIPL_H_
#define _DUET_DXEIPL_H_

#include <FrameworkPei.h>

#include "EfiLdrHandoff.h"
#include "EfiFlashMap.h"

#include <Guid/MemoryTypeInformation.h>
#include <Guid/PciExpressBaseAddress.h>
#include <Guid/AcpiDescription.h>

#include <Guid/MemoryAllocationHob.h>
#include <Guid/Acpi.h>
#include <Guid/SmBios.h>
#include <Guid/Mps.h>
#include <Guid/FlashMapHob.h>
#include <Guid/SystemNvDataGuid.h>
#include <Guid/VariableFormat.h>
#include <Guid/StatusCodeDataTypeDebug.h>
#include <Guid/DxeCoreFileName.h>
#include <Guid/LdrMemoryDescriptor.h>

#include <Protocol/Decompress.h>
#include <Protocol/StatusCode.h>
#include <Protocol/FirmwareVolumeBlock.h>

#include <Library/BaseLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/ReportStatusCodeLib.h>
#include <Library/PrintLib.h>
#include <Library/IoLib.h>

#endif // _DUET_DXEIPL_H_

