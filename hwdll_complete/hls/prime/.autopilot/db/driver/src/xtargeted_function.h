// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef XTARGETED_FUNCTION_H
#define XTARGETED_FUNCTION_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xtargeted_function_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Rm_BaseAddress;
} XTargeted_function_Config;
#endif

typedef struct {
    u32 Rm_BaseAddress;
    u32 IsReady;
} XTargeted_function;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XTargeted_function_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XTargeted_function_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XTargeted_function_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XTargeted_function_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XTargeted_function_Initialize(XTargeted_function *InstancePtr, u16 DeviceId);
XTargeted_function_Config* XTargeted_function_LookupConfig(u16 DeviceId);
int XTargeted_function_CfgInitialize(XTargeted_function *InstancePtr, XTargeted_function_Config *ConfigPtr);
#else
int XTargeted_function_Initialize(XTargeted_function *InstancePtr, const char* InstanceName);
int XTargeted_function_Release(XTargeted_function *InstancePtr);
#endif

void XTargeted_function_Start(XTargeted_function *InstancePtr);
u32 XTargeted_function_IsDone(XTargeted_function *InstancePtr);
u32 XTargeted_function_IsIdle(XTargeted_function *InstancePtr);
u32 XTargeted_function_IsReady(XTargeted_function *InstancePtr);
void XTargeted_function_EnableAutoRestart(XTargeted_function *InstancePtr);
void XTargeted_function_DisableAutoRestart(XTargeted_function *InstancePtr);
u32 XTargeted_function_Get_return(XTargeted_function *InstancePtr);

void XTargeted_function_Set_input_000(XTargeted_function *InstancePtr, u32 Data);
u32 XTargeted_function_Get_input_000(XTargeted_function *InstancePtr);
u32 XTargeted_function_Get_output_000(XTargeted_function *InstancePtr);
u32 XTargeted_function_Get_output_000_vld(XTargeted_function *InstancePtr);

void XTargeted_function_InterruptGlobalEnable(XTargeted_function *InstancePtr);
void XTargeted_function_InterruptGlobalDisable(XTargeted_function *InstancePtr);
void XTargeted_function_InterruptEnable(XTargeted_function *InstancePtr, u32 Mask);
void XTargeted_function_InterruptDisable(XTargeted_function *InstancePtr, u32 Mask);
void XTargeted_function_InterruptClear(XTargeted_function *InstancePtr, u32 Mask);
u32 XTargeted_function_InterruptGetEnabled(XTargeted_function *InstancePtr);
u32 XTargeted_function_InterruptGetStatus(XTargeted_function *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif