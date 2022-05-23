# RT-TEE: Real-time System Availability for Cyber-physical Systems using ARM TrustZone

Jinwen Wang, Ao Li, Haoran Li, Chenyang Lu, and Ning Zhang. "RT-TEE: Real-time System Availability for Cyber-physical Systems using ARM TrustZone." 2022 IEEE Symposium on Security and Privacy (SP), pp. 1573-1573. IEEE Computer Society, 2022.

## Dependencies
RT-TEE is migrated on QEMU. Install prerequisite folowing [this](https://optee.readthedocs.io/en/latest/building/prerequisites.html).

## Project Structure
The main RT-TEE codes are distributed in directory structure as follows.
```
REPO_ROOT
  |-> optee_os
    |-> /core/arch/arm/kernel/RT_TEE_Scheduler.c (customisable hierarchical scheduling)
    |-> /core/arch/arm/pta/pta_xxx (trusted applications, i.e., synthetic pseudo secure sensitive tasks)
    |-> /core/arch/arm/pta/tplt_driver.c (driver debloating)
  |-> driver_sandbox
    |-> walk_gimple.cc (GCC sandboxing plugin)
  |-> optee_examples
    |->/hello_world/host/main.c RT-TEE (Normal World Configurations)
```
Note: 
Above struct only shows some files modified by RT-TEE. RT-TEE modified tens of files in optee.
Template driver only works on hardware platfrom specified in RT-TEE paper. We only show an example, i.e., barometer prom read through I2C bus driver template. RT-TEE works on multi-cores on Pi3, but single core on QEMU, we will support multi-cores on QEMU in the future.




## Setup
To setup RT-TEE for the first time, clone the repo and follow next steps. REPO_ROOT is the path of RT-TEE root directory.
1. Build Toolchain
```
cd REPO_ROOT
mkdir toolchains
cd toolchains
```
Download and decompress following toolchains.
gcc-arm-8.2-2018.08-x86_64-aarch64-linux-gnu.tar.xz
gcc-arm-8.2-2018.08-x86_64-arm-linux-gnueabihf.tar.xz

2. Build Project 
```
cd REPO_ROOT
cd build
source start_qemu.txt
```
3. Build trusted application and configure scheduling parameters. 
```
cd REPO_ROOT
cd build
source ta_build.txt
```
An example of configuring RT-TEE scheduling parameters is shown in /optee_example/hello_world/host/main.c, including parameter sematics.


## Running
- start qemu
```
cd build
source start_qemu.txt
```
- After VM initialization, start RT-TEE hierarchical scheduling.
```
mkdir shared && mount -t 9p -o trans=virtio host shared
./shared/optee_example_hello_world
```
