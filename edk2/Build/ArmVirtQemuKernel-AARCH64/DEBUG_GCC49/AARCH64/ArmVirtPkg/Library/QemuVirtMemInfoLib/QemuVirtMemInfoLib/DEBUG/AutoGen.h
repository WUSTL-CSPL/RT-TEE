/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_9b30ca82_6746_4a82_a3e6_11ea79df3b46
#define _AUTOGENH_9b30ca82_6746_4a82_a3e6_11ea79df3b46

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gArmTokenSpaceGuid;
extern GUID gEmbeddedTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdFdSize  84U
extern const UINT32 _gPcd_FixedAtBuild_PcdFdSize;
#define _PCD_GET_MODE_32_PcdFdSize  _gPcd_FixedAtBuild_PcdFdSize
//#define _PCD_SET_MODE_32_PcdFdSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFdSize 0x00200000
#define _PCD_SIZE_PcdFdSize 4
#define _PCD_GET_MODE_SIZE_PcdFdSize _PCD_SIZE_PcdFdSize
#define _PCD_TOKEN_PcdPrePiCpuMemorySize  90U
extern const UINT8 _gPcd_FixedAtBuild_PcdPrePiCpuMemorySize;
#define _PCD_GET_MODE_8_PcdPrePiCpuMemorySize  _gPcd_FixedAtBuild_PcdPrePiCpuMemorySize
//#define _PCD_SET_MODE_8_PcdPrePiCpuMemorySize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPrePiCpuMemorySize 40
#define _PCD_SIZE_PcdPrePiCpuMemorySize 1
#define _PCD_GET_MODE_SIZE_PcdPrePiCpuMemorySize _PCD_SIZE_PcdPrePiCpuMemorySize
#define _PCD_TOKEN_PcdFdBaseAddress  106U
extern volatile  UINT64  _gPcd_BinaryPatch_PcdFdBaseAddress;
#define _PCD_GET_MODE_64_PcdFdBaseAddress  _gPcd_BinaryPatch_PcdFdBaseAddress
#define _PCD_SET_MODE_64_PcdFdBaseAddress(Value)  (_gPcd_BinaryPatch_PcdFdBaseAddress = (Value))
#define _PCD_SET_MODE_64_S_PcdFdBaseAddress(Value)  ((_gPcd_BinaryPatch_PcdFdBaseAddress = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdFdBaseAddress_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdFdBaseAddress _gPcd_BinaryPatch_Size_PcdFdBaseAddress
extern UINTN _gPcd_BinaryPatch_Size_PcdFdBaseAddress; 
#define _PCD_TOKEN_PcdSystemMemoryBase  103U
extern volatile  UINT64  _gPcd_BinaryPatch_PcdSystemMemoryBase;
#define _PCD_GET_MODE_64_PcdSystemMemoryBase  _gPcd_BinaryPatch_PcdSystemMemoryBase
#define _PCD_SET_MODE_64_PcdSystemMemoryBase(Value)  (_gPcd_BinaryPatch_PcdSystemMemoryBase = (Value))
#define _PCD_SET_MODE_64_S_PcdSystemMemoryBase(Value)  ((_gPcd_BinaryPatch_PcdSystemMemoryBase = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdSystemMemoryBase_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdSystemMemoryBase _gPcd_BinaryPatch_Size_PcdSystemMemoryBase
extern UINTN _gPcd_BinaryPatch_Size_PcdSystemMemoryBase; 
#define _PCD_TOKEN_PcdSystemMemorySize  104U
extern volatile  UINT64  _gPcd_BinaryPatch_PcdSystemMemorySize;
#define _PCD_GET_MODE_64_PcdSystemMemorySize  _gPcd_BinaryPatch_PcdSystemMemorySize
#define _PCD_SET_MODE_64_PcdSystemMemorySize(Value)  (_gPcd_BinaryPatch_PcdSystemMemorySize = (Value))
#define _PCD_SET_MODE_64_S_PcdSystemMemorySize(Value)  ((_gPcd_BinaryPatch_PcdSystemMemorySize = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdSystemMemorySize_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdSystemMemorySize _gPcd_BinaryPatch_Size_PcdSystemMemorySize
extern UINTN _gPcd_BinaryPatch_Size_PcdSystemMemorySize; 


#ifdef __cplusplus
}
#endif

#endif
