/* Copyright (C) 2011, 2012, 2013 The uOFW team
   See the file COPYING for copying permission.
*/

#ifndef SYSMEM_USER_H
#define	SYSMEM_USER_H

#include "common_header.h"

#include "sysmem_common.h"

enum SceSysMemPartitionId {
    SCE_KERNEL_UNKNOWN_PARTITION = 0,
    SCE_KERNEL_PRIMARY_KERNEL_PARTITION = 1,
    SCE_KERNEL_PRIMARY_USER_PARTITION = 2,
    SCE_KERNEL_OTHER_KERNEL_PARTITION_1 = 3, //PRIMARY_ME_KERNEL_PARTITION according to TyRaNiD
    SCE_KERNEL_OTHER_KERNEL_PARTITION_2 = 4,
    SCE_KERNEL_VSHELL_PARTITION = 5,
    SCE_KERNEL_SC_USER_PARTITION = 6,
    SCE_KERNEL_ME_USER_PARTITION = 7,
    SCE_KERNEL_EXTENDED_SC_KERNEL_PARTITION = 8,
    SCE_KERNEL_EXTENDED_SC_2_KERNEL_PARTITION = 9,
    SCE_KERNEL_EXTENDED_ME_KERNEL_PARTITION = 10,
    SCE_KERNEL_VSHELL_KERNEL_PARTITION = 11,
    SCE_KERNEL_EXTENDED_KERNEL_PARTITION = 12,
};

enum SceSysMemBlockType {
    SCE_KERNEL_SMEM_Low = 0,
    SCE_KERNEL_SMEM_High = 1,
    SCE_KERNEL_SMEM_Addr = 2
};

SceUID sceKernelAllocPartitionMemory(SceUID partitionid, const char *name, s32 type, SceSize size, void *addr);
s32 sceKernelFreePartitionMemory(SceUID uid);

void *sceKernelGetBlockHeadAddr(SceUID uid);
int SysMemForKernel_CC31DEAD(SceUID uid);


#endif	/* SYSMEM_USER_H */
