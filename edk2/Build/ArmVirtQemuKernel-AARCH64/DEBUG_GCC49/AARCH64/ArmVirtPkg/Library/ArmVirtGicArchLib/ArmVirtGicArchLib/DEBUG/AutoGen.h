/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_87b0dc84_4661_4deb_a789_97977ff636ed
#define _AUTOGENH_87b0dc84_4661_4deb_a789_97977ff636ed

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gArmTokenSpaceGuid;

// Protocols
extern GUID gFdtClientProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdGicDistributorBase  6U
#define _PCD_GET_MODE_64_PcdGicDistributorBase  LibPcdGet64(_PCD_TOKEN_PcdGicDistributorBase)
#define _PCD_GET_MODE_SIZE_PcdGicDistributorBase  LibPcdGetSize(_PCD_TOKEN_PcdGicDistributorBase)
#define _PCD_SET_MODE_64_PcdGicDistributorBase(Value)  LibPcdSet64(_PCD_TOKEN_PcdGicDistributorBase, (Value))
#define _PCD_SET_MODE_64_S_PcdGicDistributorBase(Value)  LibPcdSet64S(_PCD_TOKEN_PcdGicDistributorBase, (Value))
#define _PCD_TOKEN_PcdGicRedistributorsBase  13U
#define _PCD_GET_MODE_64_PcdGicRedistributorsBase  LibPcdGet64(_PCD_TOKEN_PcdGicRedistributorsBase)
#define _PCD_GET_MODE_SIZE_PcdGicRedistributorsBase  LibPcdGetSize(_PCD_TOKEN_PcdGicRedistributorsBase)
#define _PCD_SET_MODE_64_PcdGicRedistributorsBase(Value)  LibPcdSet64(_PCD_TOKEN_PcdGicRedistributorsBase, (Value))
#define _PCD_SET_MODE_64_S_PcdGicRedistributorsBase(Value)  LibPcdSet64S(_PCD_TOKEN_PcdGicRedistributorsBase, (Value))
#define _PCD_TOKEN_PcdGicInterruptInterfaceBase  18U
#define _PCD_GET_MODE_64_PcdGicInterruptInterfaceBase  LibPcdGet64(_PCD_TOKEN_PcdGicInterruptInterfaceBase)
#define _PCD_GET_MODE_SIZE_PcdGicInterruptInterfaceBase  LibPcdGetSize(_PCD_TOKEN_PcdGicInterruptInterfaceBase)
#define _PCD_SET_MODE_64_PcdGicInterruptInterfaceBase(Value)  LibPcdSet64(_PCD_TOKEN_PcdGicInterruptInterfaceBase, (Value))
#define _PCD_SET_MODE_64_S_PcdGicInterruptInterfaceBase(Value)  LibPcdSet64S(_PCD_TOKEN_PcdGicInterruptInterfaceBase, (Value))

RETURN_STATUS
EFIAPI
ArmVirtGicArchLibConstructor (
  VOID
  );


#ifdef __cplusplus
}
#endif

#endif
