// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.1
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xtrace_cntrl.h"

extern XTrace_cntrl_Config XTrace_cntrl_ConfigTable[];

XTrace_cntrl_Config *XTrace_cntrl_LookupConfig(u16 DeviceId) {
	XTrace_cntrl_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XTRACE_CNTRL_NUM_INSTANCES; Index++) {
		if (XTrace_cntrl_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XTrace_cntrl_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XTrace_cntrl_Initialize(XTrace_cntrl *InstancePtr, u16 DeviceId) {
	XTrace_cntrl_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XTrace_cntrl_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XTrace_cntrl_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

