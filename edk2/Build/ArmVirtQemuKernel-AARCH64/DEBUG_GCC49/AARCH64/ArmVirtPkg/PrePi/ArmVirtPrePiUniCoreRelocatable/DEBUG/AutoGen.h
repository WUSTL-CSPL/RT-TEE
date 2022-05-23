/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_f7d9fd14_9335_4389_80c5_334d6abfcced
#define _AUTOGENH_f7d9fd14_9335_4389_80c5_334d6abfcced

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xf7d9fd14, 0x9335, 0x4389, {0x80, 0xc5, 0x33, 0x4d, 0x6a, 0xbf, 0xcc, 0xed}}

// Guids
extern EFI_GUID gArmMpCoreInfoGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gArmTokenSpaceGuid;
extern EFI_GUID gArmPlatformTokenSpaceGuid;
extern EFI_GUID gEmbeddedTokenSpaceGuid;
extern EFI_GUID gArmVirtTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiMemoryTypeInformationGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gLzmaCustomDecompressGuid;
extern EFI_GUID gEarlyPL011BaseAddressGuid;
extern EFI_GUID gFdtHobGuid;

// Protocols
extern EFI_GUID gEfiCpuArchProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gPeCoffLoaderProtocolGuid;

// PPIs
extern EFI_GUID gArmMpCoreInfoPpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdFirmwareVersionString  82U
#define _PCD_VALUE_PcdFirmwareVersionString  _gPcd_FixedAtBuild_PcdFirmwareVersionString
extern const UINT16 _gPcd_FixedAtBuild_PcdFirmwareVersionString[1];
#define _PCD_GET_MODE_PTR_PcdFirmwareVersionString  _gPcd_FixedAtBuild_PcdFirmwareVersionString
#define _PCD_SIZE_PcdFirmwareVersionString 2
#define _PCD_GET_MODE_SIZE_PcdFirmwareVersionString  _PCD_SIZE_PcdFirmwareVersionString 
//#define _PCD_SET_MODE_PTR_PcdFirmwareVersionString  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdVFPEnabled  83U
#define _PCD_SIZE_PcdVFPEnabled 4
#define _PCD_GET_MODE_SIZE_PcdVFPEnabled  _PCD_SIZE_PcdVFPEnabled 
#define _PCD_VALUE_PcdVFPEnabled  1U
extern const  UINT32  _gPcd_FixedAtBuild_PcdVFPEnabled;
#define _PCD_GET_MODE_32_PcdVFPEnabled  _gPcd_FixedAtBuild_PcdVFPEnabled
//#define _PCD_SET_MODE_32_PcdVFPEnabled  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFdSize  84U
#define _PCD_SIZE_PcdFdSize 4
#define _PCD_GET_MODE_SIZE_PcdFdSize  _PCD_SIZE_PcdFdSize 
#define _PCD_VALUE_PcdFdSize  0x00200000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFdSize;
#define _PCD_GET_MODE_32_PcdFdSize  _gPcd_FixedAtBuild_PcdFdSize
//#define _PCD_SET_MODE_32_PcdFdSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFvSize  85U
#define _PCD_SIZE_PcdFvSize 4
#define _PCD_GET_MODE_SIZE_PcdFvSize  _PCD_SIZE_PcdFvSize 
#define _PCD_VALUE_PcdFvSize  0x001F8000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFvSize;
#define _PCD_GET_MODE_32_PcdFvSize  _gPcd_FixedAtBuild_PcdFvSize
//#define _PCD_SET_MODE_32_PcdFvSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCPUCorePrimaryStackSize  86U
#define _PCD_SIZE_PcdCPUCorePrimaryStackSize 4
#define _PCD_GET_MODE_SIZE_PcdCPUCorePrimaryStackSize  _PCD_SIZE_PcdCPUCorePrimaryStackSize 
#define _PCD_VALUE_PcdCPUCorePrimaryStackSize  0x4000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCPUCorePrimaryStackSize;
#define _PCD_GET_MODE_32_PcdCPUCorePrimaryStackSize  _gPcd_FixedAtBuild_PcdCPUCorePrimaryStackSize
//#define _PCD_SET_MODE_32_PcdCPUCorePrimaryStackSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCPUCoreSecondaryStackSize  87U
#define _PCD_SIZE_PcdCPUCoreSecondaryStackSize 4
#define _PCD_GET_MODE_SIZE_PcdCPUCoreSecondaryStackSize  _PCD_SIZE_PcdCPUCoreSecondaryStackSize 
#define _PCD_VALUE_PcdCPUCoreSecondaryStackSize  0x1000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCPUCoreSecondaryStackSize;
#define _PCD_GET_MODE_32_PcdCPUCoreSecondaryStackSize  _gPcd_FixedAtBuild_PcdCPUCoreSecondaryStackSize
//#define _PCD_SET_MODE_32_PcdCPUCoreSecondaryStackSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSystemMemoryUefiRegionSize  88U
#define _PCD_SIZE_PcdSystemMemoryUefiRegionSize 4
#define _PCD_GET_MODE_SIZE_PcdSystemMemoryUefiRegionSize  _PCD_SIZE_PcdSystemMemoryUefiRegionSize 
#define _PCD_VALUE_PcdSystemMemoryUefiRegionSize  0x04000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdSystemMemoryUefiRegionSize;
#define _PCD_GET_MODE_32_PcdSystemMemoryUefiRegionSize  _gPcd_FixedAtBuild_PcdSystemMemoryUefiRegionSize
//#define _PCD_SET_MODE_32_PcdSystemMemoryUefiRegionSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCoreCount  89U
#define _PCD_SIZE_PcdCoreCount 4
#define _PCD_GET_MODE_SIZE_PcdCoreCount  _PCD_SIZE_PcdCoreCount 
#define _PCD_VALUE_PcdCoreCount  1U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCoreCount;
#define _PCD_GET_MODE_32_PcdCoreCount  _gPcd_FixedAtBuild_PcdCoreCount
//#define _PCD_SET_MODE_32_PcdCoreCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPrePiCpuMemorySize  90U
#define _PCD_SIZE_PcdPrePiCpuMemorySize 1
#define _PCD_GET_MODE_SIZE_PcdPrePiCpuMemorySize  _PCD_SIZE_PcdPrePiCpuMemorySize 
#define _PCD_VALUE_PcdPrePiCpuMemorySize  40U
extern const  UINT8  _gPcd_FixedAtBuild_PcdPrePiCpuMemorySize;
#define _PCD_GET_MODE_8_PcdPrePiCpuMemorySize  _gPcd_FixedAtBuild_PcdPrePiCpuMemorySize
//#define _PCD_SET_MODE_8_PcdPrePiCpuMemorySize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPrePiCpuIoSize  91U
#define _PCD_SIZE_PcdPrePiCpuIoSize 1
#define _PCD_GET_MODE_SIZE_PcdPrePiCpuIoSize  _PCD_SIZE_PcdPrePiCpuIoSize 
#define _PCD_VALUE_PcdPrePiCpuIoSize  16U
extern const  UINT8  _gPcd_FixedAtBuild_PcdPrePiCpuIoSize;
#define _PCD_GET_MODE_8_PcdPrePiCpuIoSize  _gPcd_FixedAtBuild_PcdPrePiCpuIoSize
//#define _PCD_SET_MODE_8_PcdPrePiCpuIoSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiACPIReclaimMemory  92U
#define _PCD_SIZE_PcdMemoryTypeEfiACPIReclaimMemory 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiACPIReclaimMemory  _PCD_SIZE_PcdMemoryTypeEfiACPIReclaimMemory 
#define _PCD_VALUE_PcdMemoryTypeEfiACPIReclaimMemory  0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIReclaimMemory;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiACPIReclaimMemory  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIReclaimMemory
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiACPIReclaimMemory  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiACPIMemoryNVS  93U
#define _PCD_SIZE_PcdMemoryTypeEfiACPIMemoryNVS 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiACPIMemoryNVS  _PCD_SIZE_PcdMemoryTypeEfiACPIMemoryNVS 
#define _PCD_VALUE_PcdMemoryTypeEfiACPIMemoryNVS  0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIMemoryNVS;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiACPIMemoryNVS  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIMemoryNVS
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiACPIMemoryNVS  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiReservedMemoryType  94U
#define _PCD_SIZE_PcdMemoryTypeEfiReservedMemoryType 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiReservedMemoryType  _PCD_SIZE_PcdMemoryTypeEfiReservedMemoryType 
#define _PCD_VALUE_PcdMemoryTypeEfiReservedMemoryType  0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiReservedMemoryType;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiReservedMemoryType  _gPcd_FixedAtBuild_PcdMemoryTypeEfiReservedMemoryType
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiReservedMemoryType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiRuntimeServicesData  95U
#define _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesData 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiRuntimeServicesData  _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesData 
#define _PCD_VALUE_PcdMemoryTypeEfiRuntimeServicesData  300U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesData;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiRuntimeServicesData  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesData
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiRuntimeServicesData  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiRuntimeServicesCode  96U
#define _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesCode 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiRuntimeServicesCode  _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesCode 
#define _PCD_VALUE_PcdMemoryTypeEfiRuntimeServicesCode  150U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesCode;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiRuntimeServicesCode  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesCode
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiRuntimeServicesCode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiBootServicesCode  97U
#define _PCD_SIZE_PcdMemoryTypeEfiBootServicesCode 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiBootServicesCode  _PCD_SIZE_PcdMemoryTypeEfiBootServicesCode 
#define _PCD_VALUE_PcdMemoryTypeEfiBootServicesCode  1000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesCode;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiBootServicesCode  _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesCode
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiBootServicesCode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiBootServicesData  98U
#define _PCD_SIZE_PcdMemoryTypeEfiBootServicesData 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiBootServicesData  _PCD_SIZE_PcdMemoryTypeEfiBootServicesData 
#define _PCD_VALUE_PcdMemoryTypeEfiBootServicesData  12000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesData;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiBootServicesData  _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesData
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiBootServicesData  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiLoaderCode  99U
#define _PCD_SIZE_PcdMemoryTypeEfiLoaderCode 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiLoaderCode  _PCD_SIZE_PcdMemoryTypeEfiLoaderCode 
#define _PCD_VALUE_PcdMemoryTypeEfiLoaderCode  20U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderCode;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiLoaderCode  _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderCode
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiLoaderCode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiLoaderData  100U
#define _PCD_SIZE_PcdMemoryTypeEfiLoaderData 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiLoaderData  _PCD_SIZE_PcdMemoryTypeEfiLoaderData 
#define _PCD_VALUE_PcdMemoryTypeEfiLoaderData  0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderData;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiLoaderData  _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderData
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiLoaderData  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPrePiProduceMemoryTypeInformationHob  101U
#define _PCD_SIZE_PcdPrePiProduceMemoryTypeInformationHob 1
#define _PCD_GET_MODE_SIZE_PcdPrePiProduceMemoryTypeInformationHob  _PCD_SIZE_PcdPrePiProduceMemoryTypeInformationHob 
#define _PCD_VALUE_PcdPrePiProduceMemoryTypeInformationHob  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdPrePiProduceMemoryTypeInformationHob;
#define _PCD_GET_MODE_BOOL_PcdPrePiProduceMemoryTypeInformationHob  _gPcd_FixedAtBuild_PcdPrePiProduceMemoryTypeInformationHob
//#define _PCD_SET_MODE_BOOL_PcdPrePiProduceMemoryTypeInformationHob  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSendSgiToBringUpSecondaryCores  102U
#define _PCD_SIZE_PcdSendSgiToBringUpSecondaryCores 1
#define _PCD_GET_MODE_SIZE_PcdSendSgiToBringUpSecondaryCores  _PCD_SIZE_PcdSendSgiToBringUpSecondaryCores 
#define _PCD_VALUE_PcdSendSgiToBringUpSecondaryCores  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSendSgiToBringUpSecondaryCores;
#define _PCD_GET_MODE_BOOL_PcdSendSgiToBringUpSecondaryCores  _gPcd_FixedAtBuild_PcdSendSgiToBringUpSecondaryCores
//#define _PCD_SET_MODE_BOOL_PcdSendSgiToBringUpSecondaryCores  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSystemMemoryBase  103U
#define _PCD_PATCHABLE_VALUE_PcdSystemMemoryBase  ((UINT64)0x0ULL)
extern volatile   UINT64  _gPcd_BinaryPatch_PcdSystemMemoryBase;
#define _PCD_GET_MODE_64_PcdSystemMemoryBase  _gPcd_BinaryPatch_PcdSystemMemoryBase
#define _PCD_PATCHABLE_PcdSystemMemoryBase_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdSystemMemoryBase  _gPcd_BinaryPatch_Size_PcdSystemMemoryBase 
extern UINTN _gPcd_BinaryPatch_Size_PcdSystemMemoryBase; 
#define _PCD_SET_MODE_64_PcdSystemMemoryBase(Value)  (_gPcd_BinaryPatch_PcdSystemMemoryBase = (Value))
#define _PCD_SET_MODE_64_S_PcdSystemMemoryBase(Value)  ((_gPcd_BinaryPatch_PcdSystemMemoryBase = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdSystemMemorySize  104U
#define _PCD_PATCHABLE_VALUE_PcdSystemMemorySize  ((UINT64)0x0ULL)
extern volatile   UINT64  _gPcd_BinaryPatch_PcdSystemMemorySize;
#define _PCD_GET_MODE_64_PcdSystemMemorySize  _gPcd_BinaryPatch_PcdSystemMemorySize
#define _PCD_PATCHABLE_PcdSystemMemorySize_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdSystemMemorySize  _gPcd_BinaryPatch_Size_PcdSystemMemorySize 
extern UINTN _gPcd_BinaryPatch_Size_PcdSystemMemorySize; 
#define _PCD_SET_MODE_64_PcdSystemMemorySize(Value)  (_gPcd_BinaryPatch_PcdSystemMemorySize = (Value))
#define _PCD_SET_MODE_64_S_PcdSystemMemorySize(Value)  ((_gPcd_BinaryPatch_PcdSystemMemorySize = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdDeviceTreeInitialBaseAddress  105U
#define _PCD_PATCHABLE_VALUE_PcdDeviceTreeInitialBaseAddress  ((UINT64)0x40000000ULL)
extern volatile   UINT64  _gPcd_BinaryPatch_PcdDeviceTreeInitialBaseAddress;
#define _PCD_GET_MODE_64_PcdDeviceTreeInitialBaseAddress  _gPcd_BinaryPatch_PcdDeviceTreeInitialBaseAddress
#define _PCD_PATCHABLE_PcdDeviceTreeInitialBaseAddress_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdDeviceTreeInitialBaseAddress  _gPcd_BinaryPatch_Size_PcdDeviceTreeInitialBaseAddress 
extern UINTN _gPcd_BinaryPatch_Size_PcdDeviceTreeInitialBaseAddress; 
#define _PCD_SET_MODE_64_PcdDeviceTreeInitialBaseAddress(Value)  (_gPcd_BinaryPatch_PcdDeviceTreeInitialBaseAddress = (Value))
#define _PCD_SET_MODE_64_S_PcdDeviceTreeInitialBaseAddress(Value)  ((_gPcd_BinaryPatch_PcdDeviceTreeInitialBaseAddress = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdFdBaseAddress  106U
#define _PCD_PATCHABLE_VALUE_PcdFdBaseAddress  ((UINT64)0x00000000ULL)
extern volatile   UINT64  _gPcd_BinaryPatch_PcdFdBaseAddress;
#define _PCD_GET_MODE_64_PcdFdBaseAddress  _gPcd_BinaryPatch_PcdFdBaseAddress
#define _PCD_PATCHABLE_PcdFdBaseAddress_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdFdBaseAddress  _gPcd_BinaryPatch_Size_PcdFdBaseAddress 
extern UINTN _gPcd_BinaryPatch_Size_PcdFdBaseAddress; 
#define _PCD_SET_MODE_64_PcdFdBaseAddress(Value)  (_gPcd_BinaryPatch_PcdFdBaseAddress = (Value))
#define _PCD_SET_MODE_64_S_PcdFdBaseAddress(Value)  ((_gPcd_BinaryPatch_PcdFdBaseAddress = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdFvBaseAddress  107U
#define _PCD_PATCHABLE_VALUE_PcdFvBaseAddress  ((UINT64)0x00008000ULL)
extern volatile   UINT64  _gPcd_BinaryPatch_PcdFvBaseAddress;
#define _PCD_GET_MODE_64_PcdFvBaseAddress  _gPcd_BinaryPatch_PcdFvBaseAddress
#define _PCD_PATCHABLE_PcdFvBaseAddress_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdFvBaseAddress  _gPcd_BinaryPatch_Size_PcdFvBaseAddress 
extern UINTN _gPcd_BinaryPatch_Size_PcdFvBaseAddress; 
#define _PCD_SET_MODE_64_PcdFvBaseAddress(Value)  (_gPcd_BinaryPatch_PcdFvBaseAddress = (Value))
#define _PCD_SET_MODE_64_S_PcdFvBaseAddress(Value)  ((_gPcd_BinaryPatch_PcdFvBaseAddress = (Value)), RETURN_SUCCESS) 

// Definition of PCDs used in libraries is in AutoGen.c


#ifdef __cplusplus
}
#endif

#endif
