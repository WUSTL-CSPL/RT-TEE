/** @file

Copyright (c) 2006 - 2010, Intel Corporation. All rights reserved.<BR>
This program and the accompanying materials                          
are licensed and made available under the terms and conditions of the BSD License         
which accompanies this distribution.  The full text of the license may be found at        
http://opensource.org/licenses/bsd-license.php                                            
                                                                                          
THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,                     
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.             

Module Name:
  LegacyTable.c

Abstract:

Revision History:

**/

#include "DxeIpl.h"
#include "HobGeneration.h"
#include "Debug.h"

#define MPS_PTR           SIGNATURE_32('_','M','P','_')
#define SMBIOS_PTR        SIGNATURE_32('_','S','M','_')

#define EBDA_BASE_ADDRESS 0x40E

VOID *
FindAcpiRsdPtr (
  VOID
  )
{
  UINTN                           Address;
  UINTN                           Index;

  //
  // First Seach 0x0e0000 - 0x0fffff for RSD Ptr
  //
  for (Address = 0xe0000; Address < 0xfffff; Address += 0x10) {
    if (*(UINT64 *)(Address) == EFI_ACPI_3_0_ROOT_SYSTEM_DESCRIPTION_POINTER_SIGNATURE) {
      return (VOID *)Address;
    }
  }

  //
  // Search EBDA
  //

  Address = (*(UINT16 *)(UINTN)(EBDA_BASE_ADDRESS)) << 4;
  for (Index = 0; Index < 0x400 ; Index += 16) {
    if (*(UINT64 *)(Address + Index) == EFI_ACPI_3_0_ROOT_SYSTEM_DESCRIPTION_POINTER_SIGNATURE) {
      return (VOID *)Address;
    }
  }
  return NULL;
}

VOID *
FindSMBIOSPtr (
  VOID
  )
{
  UINTN                           Address;

  //
  // First Seach 0x0f0000 - 0x0fffff for SMBIOS Ptr
  //
  for (Address = 0xf0000; Address < 0xfffff; Address += 0x10) {
    if (*(UINT32 *)(Address) == SMBIOS_PTR) {
      return (VOID *)Address;
    }
  }
  return NULL;
}

VOID *
FindMPSPtr (
  VOID
  )
{
  UINTN                           Address;
  UINTN                           Index;

  //
  // First Seach 0x0e0000 - 0x0fffff for MPS Ptr
  //
  for (Address = 0xe0000; Address < 0xfffff; Address += 0x10) {
    if (*(UINT32 *)(Address) == MPS_PTR) {
      return (VOID *)Address;
    }
  }

  //
  // Search EBDA
  //

  Address = (*(UINT16 *)(UINTN)(EBDA_BASE_ADDRESS)) << 4;
  for (Index = 0; Index < 0x400 ; Index += 16) {
    if (*(UINT32 *)(Address + Index) == MPS_PTR) {
      return (VOID *)Address;
    }
  }
  return NULL;
}

#pragma pack(1)

typedef struct {
  EFI_ACPI_DESCRIPTION_HEADER  Header;
  UINT32                       Entry;
} RSDT_TABLE;

typedef struct {
  EFI_ACPI_DESCRIPTION_HEADER  Header;
  UINT64                       Entry;
} XSDT_TABLE;

#pragma pack()

VOID
ScanTableInRSDT (
  RSDT_TABLE                   *Rsdt,
  UINT32                       Signature,
  EFI_ACPI_DESCRIPTION_HEADER  **FoundTable
  )
{
  UINTN                         Index;
  UINT32                        EntryCount;
  UINT32                        *EntryPtr;
  EFI_ACPI_DESCRIPTION_HEADER   *Table;
  
  *FoundTable = NULL;
  
  EntryCount = (Rsdt->Header.Length - sizeof (EFI_ACPI_DESCRIPTION_HEADER)) / sizeof(UINT32);
  
  EntryPtr = &Rsdt->Entry;
  for (Index = 0; Index < EntryCount; Index ++, EntryPtr ++) {
    Table = (EFI_ACPI_DESCRIPTION_HEADER*)((UINTN)(*EntryPtr));
    if (Table->Signature == Signature) {
      *FoundTable = Table;
      break;
    }
  }
  
  return;
}

VOID
ScanTableInXSDT (
  XSDT_TABLE                   *Xsdt,
  UINT32                       Signature,
  EFI_ACPI_DESCRIPTION_HEADER  **FoundTable
  )
{
  UINTN                        Index;
  UINT32                       EntryCount;
  UINT64                       EntryPtr;
  UINTN                        BasePtr;
  EFI_ACPI_DESCRIPTION_HEADER  *Table;
  
  *FoundTable = NULL;
  
  EntryCount = (Xsdt->Header.Length - sizeof (EFI_ACPI_DESCRIPTION_HEADER)) / sizeof(UINT64);
  
  BasePtr = (UINTN)(&(Xsdt->Entry));
  for (Index = 0; Index < EntryCount; Index ++) {
    CopyMem (&EntryPtr, (VOID *)(BasePtr + Index * sizeof(UINT64)), sizeof(UINT64));
    Table = (EFI_ACPI_DESCRIPTION_HEADER*)((UINTN)(EntryPtr));
    if (Table->Signature == Signature) {
      *FoundTable = Table;
      break;
    }
  }
  
  return;
}

VOID *
FindAcpiPtr (
  IN HOB_TEMPLATE  *Hob,
  UINT32           Signature
  )
{
  EFI_ACPI_DESCRIPTION_HEADER                    *AcpiTable;
  EFI_ACPI_3_0_ROOT_SYSTEM_DESCRIPTION_POINTER   *Rsdp;
  RSDT_TABLE                                     *Rsdt;
  XSDT_TABLE                                     *Xsdt;
 
  AcpiTable = NULL;

  //
  // Check ACPI2.0 table
  //
  if ((int)Hob->Acpi20.Table != -1) {
    Rsdp = (EFI_ACPI_3_0_ROOT_SYSTEM_DESCRIPTION_POINTER *)(UINTN)Hob->Acpi20.Table;
    Rsdt = (RSDT_TABLE *)(UINTN)Rsdp->RsdtAddress;
    Xsdt = NULL;
    if ((Rsdp->Revision >= 2) && (Rsdp->XsdtAddress < (UINT64)(UINTN)-1)) {
      Xsdt = (XSDT_TABLE *)(UINTN)Rsdp->XsdtAddress;
    }
    //
    // Check Xsdt
    //
    if (Xsdt != NULL) {
      ScanTableInXSDT (Xsdt, Signature, &AcpiTable);
    }
    //
    // Check Rsdt
    //
    if ((AcpiTable == NULL) && (Rsdt != NULL)) {
      ScanTableInRSDT (Rsdt, Signature, &AcpiTable);
    }
  }
  
  //
  // Check ACPI1.0 table
  //
  if ((AcpiTable == NULL) && ((int)Hob->Acpi.Table != -1)) {
    Rsdp = (EFI_ACPI_3_0_ROOT_SYSTEM_DESCRIPTION_POINTER *)(UINTN)Hob->Acpi.Table;
    Rsdt = (RSDT_TABLE *)(UINTN)Rsdp->RsdtAddress;
    //
    // Check Rsdt
    //
    if (Rsdt != NULL) {
      ScanTableInRSDT (Rsdt, Signature, &AcpiTable);
    }
  }

  return AcpiTable;
}

#pragma pack(1)
typedef struct {
  UINT64  BaseAddress;
  UINT16  PciSegmentGroupNumber;
  UINT8   StartBusNumber;
  UINT8   EndBusNumber;
  UINT32  Reserved;
} MCFG_STRUCTURE;
#pragma pack()

VOID
PrepareMcfgTable (
  IN HOB_TEMPLATE  *Hob
  )
{
  EFI_ACPI_DESCRIPTION_HEADER  *McfgTable;
  MCFG_STRUCTURE               *Mcfg;
  UINTN                        McfgCount;
  UINTN                        Index;

  McfgTable = FindAcpiPtr (Hob, EFI_ACPI_3_0_PCI_EXPRESS_MEMORY_MAPPED_CONFIGURATION_SPACE_BASE_ADDRESS_DESCRIPTION_TABLE_SIGNATURE);
  if (McfgTable == NULL) {
    return ;
  }

  Mcfg = (MCFG_STRUCTURE *)((UINTN)McfgTable + sizeof(EFI_ACPI_DESCRIPTION_HEADER) + sizeof(UINT64));
  McfgCount = (McfgTable->Length - sizeof(EFI_ACPI_DESCRIPTION_HEADER) - sizeof(UINT64)) / sizeof(MCFG_STRUCTURE);

  //
  // Fill PciExpress info on Hob
  // Note: Only for 1st segment
  //
  for (Index = 0; Index < McfgCount; Index++) {
    if (Mcfg[Index].PciSegmentGroupNumber == 0) {
      Hob->PciExpress.PciExpressBaseAddressInfo.PciExpressBaseAddress = Mcfg[Index].BaseAddress;
      break;
    }
  }

  return ;
}

VOID
PrepareFadtTable (
  IN HOB_TEMPLATE  *Hob
  )
{
  EFI_ACPI_3_0_FIXED_ACPI_DESCRIPTION_TABLE   *Fadt;
  EFI_ACPI_DESCRIPTION                        *AcpiDescription;

  Fadt = FindAcpiPtr (Hob, EFI_ACPI_3_0_FIXED_ACPI_DESCRIPTION_TABLE_SIGNATURE);
  if (Fadt == NULL) {
    return ;
  }

  AcpiDescription = &Hob->AcpiInfo.AcpiDescription;
  //
  // Fill AcpiDescription according to FADT
  // Currently, only for PM_TMR
  //
  AcpiDescription->PM_TMR_LEN = Fadt->PmTmrLen;
  AcpiDescription->TMR_VAL_EXT = (UINT8)((Fadt->Flags & 0x100) != 0);
 
  //
  // For fields not included in ACPI 1.0 spec, we get the value based on table length
  //
  if (Fadt->Header.Length >= OFFSET_OF (EFI_ACPI_3_0_FIXED_ACPI_DESCRIPTION_TABLE, XPmTmrBlk) + sizeof (Fadt->XPmTmrBlk)) {
    CopyMem (
      &AcpiDescription->PM_TMR_BLK,
      &Fadt->XPmTmrBlk,
      sizeof(EFI_ACPI_3_0_GENERIC_ADDRESS_STRUCTURE)
      );
  }
  if (Fadt->Header.Length >= OFFSET_OF (EFI_ACPI_3_0_FIXED_ACPI_DESCRIPTION_TABLE, ResetValue) + sizeof (Fadt->ResetValue)) {
    CopyMem (
      &AcpiDescription->RESET_REG,
      &Fadt->ResetReg,
      sizeof(EFI_ACPI_3_0_GENERIC_ADDRESS_STRUCTURE)
      );
    AcpiDescription->RESET_VALUE = Fadt->ResetValue;
  }

  if (AcpiDescription->PM_TMR_BLK.Address == 0) {
    AcpiDescription->PM_TMR_BLK.Address          = Fadt->PmTmrBlk;
    AcpiDescription->PM_TMR_BLK.AddressSpaceId   = EFI_ACPI_3_0_SYSTEM_IO;
  }

  //
  // It's possible that the PM_TMR_BLK.RegisterBitWidth is always 32,
  //  we need to set the correct RegisterBitWidth value according to the TMR_VAL_EXT
  //  A zero indicates TMR_VAL is implemented as a 24-bit value. 
  //  A one indicates TMR_VAL is implemented as a 32-bit value
  //
  AcpiDescription->PM_TMR_BLK.RegisterBitWidth = (UINT8) ((AcpiDescription->TMR_VAL_EXT == 0) ? 24 : 32);
  

  return ;
}

VOID
PrepareHobLegacyTable (
  IN HOB_TEMPLATE  *Hob
  )
{
  CHAR8    PrintBuffer[256];

  Hob->Acpi.Table   = (EFI_PHYSICAL_ADDRESS)(UINTN)FindAcpiRsdPtr ();
  AsciiSPrint (PrintBuffer, 256, "\nAcpiTable=0x%x ", (UINT32)(UINTN)Hob->Acpi.Table);
  PrintString (PrintBuffer);
  Hob->Acpi20.Table = (EFI_PHYSICAL_ADDRESS)(UINTN)FindAcpiRsdPtr ();
  Hob->Smbios.Table = (EFI_PHYSICAL_ADDRESS)(UINTN)FindSMBIOSPtr ();
  AsciiSPrint (PrintBuffer, 256, "SMBIOS Table=0x%x ", (UINT32)(UINTN)Hob->Smbios.Table);
  PrintString (PrintBuffer);
  Hob->Mps.Table    = (EFI_PHYSICAL_ADDRESS)(UINTN)FindMPSPtr ();
  AsciiSPrint (PrintBuffer, 256, "MPS Table=0x%x\n", (UINT32)(UINTN)Hob->Mps.Table);
  PrintString (PrintBuffer);

  PrepareMcfgTable (Hob);

  PrepareFadtTable (Hob);

  return ;
}

