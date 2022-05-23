/// Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
/// This program and the accompanying materials                          
/// are licensed and made available under the terms and conditions of the BSD License         
/// which accompanies this distribution.  The full text of the license may be found at        
/// http://opensource.org/licenses/bsd-license.php                                            
///                                                                                           
/// THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,                     
/// WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.    
///
/// Module Name:
///
///   InterlockedCompareExchange64.s
///
/// Abstract:
///
///

.auto
.text

.proc   InternalSyncCompareExchange64
.type   InternalSyncCompareExchange64, @function
InternalSyncCompareExchange64::
        mov                 ar.ccv = r33
        cmpxchg8.rel        r8  = [r32], r34
        mf
        br.ret.sptk.many    b0
.endp   InternalSyncCompareExchange64