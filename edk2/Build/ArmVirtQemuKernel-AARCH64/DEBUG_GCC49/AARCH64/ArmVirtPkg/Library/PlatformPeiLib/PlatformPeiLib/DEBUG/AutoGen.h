/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_59C11815_F8DA_4F49_B4FB_EC1E41ED1F06
#define _AUTOGENH_59C11815_F8DA_4F49_B4FB_EC1E41ED1F06

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEarlyPL011BaseAddressGuid;
extern EFI_GUID gFdtHobGuid;
extern EFI_GUID gArmTokenSpaceGuid;
extern EFI_GUID gArmVirtTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdFvSize  85U
extern const UINT32 _gPcd_FixedAtBuild_PcdFvSize;
#define _PCD_GET_MODE_32_PcdFvSize  _gPcd_FixedAtBuild_PcdFvSize
//#define _PCD_SET_MODE_32_PcdFvSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFvSize 0x001F8000
#define _PCD_SIZE_PcdFvSize 4
#define _PCD_GET_MODE_SIZE_PcdFvSize _PCD_SIZE_PcdFvSize
#define _PCD_TOKEN_PcdDeviceTreeAllocationPadding  110U
extern const UINT32 _gPcd_FixedAtBuild_PcdDeviceTreeAllocationPadding;
#define _PCD_GET_MODE_32_PcdDeviceTreeAllocationPadding  _gPcd_FixedAtBuild_PcdDeviceTreeAllocationPadding
//#define _PCD_SET_MODE_32_PcdDeviceTreeAllocationPadding  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdDeviceTreeAllocationPadding 256
#define _PCD_SIZE_PcdDeviceTreeAllocationPadding 4
#define _PCD_GET_MODE_SIZE_PcdDeviceTreeAllocationPadding _PCD_SIZE_PcdDeviceTreeAllocationPadding
#define _PCD_TOKEN_PcdFvBaseAddress  107U
extern volatile  UINT64  _gPcd_BinaryPatch_PcdFvBaseAddress;
#define _PCD_GET_MODE_64_PcdFvBaseAddress  _gPcd_BinaryPatch_PcdFvBaseAddress
#define _PCD_SET_MODE_64_PcdFvBaseAddress(Value)  (_gPcd_BinaryPatch_PcdFvBaseAddress = (Value))
#define _PCD_SET_MODE_64_S_PcdFvBaseAddress(Value)  ((_gPcd_BinaryPatch_PcdFvBaseAddress = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdFvBaseAddress_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdFvBaseAddress _gPcd_BinaryPatch_Size_PcdFvBaseAddress
extern UINTN _gPcd_BinaryPatch_Size_PcdFvBaseAddress; 
#define _PCD_TOKEN_PcdDeviceTreeInitialBaseAddress  105U
extern volatile  UINT64  _gPcd_BinaryPatch_PcdDeviceTreeInitialBaseAddress;
#define _PCD_GET_MODE_64_PcdDeviceTreeInitialBaseAddress  _gPcd_BinaryPatch_PcdDeviceTreeInitialBaseAddress
#define _PCD_SET_MODE_64_PcdDeviceTreeInitialBaseAddress(Value)  (_gPcd_BinaryPatch_PcdDeviceTreeInitialBaseAddress = (Value))
#define _PCD_SET_MODE_64_S_PcdDeviceTreeInitialBaseAddress(Value)  ((_gPcd_BinaryPatch_PcdDeviceTreeInitialBaseAddress = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdDeviceTreeInitialBaseAddress_SIZE 8
#define _PCD_GET_MODE_SIZE_PcdDeviceTreeInitialBaseAddress _gPcd_BinaryPatch_Size_PcdDeviceTreeInitialBaseAddress
extern UINTN _gPcd_BinaryPatch_Size_PcdDeviceTreeInitialBaseAddress; 


#ifdef __cplusplus
}
#endif

#endif
