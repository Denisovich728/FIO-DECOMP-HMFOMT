/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7CF4 (4 functions) */
#include <stdint.h>
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
#ifndef __cplusplus
typedef u32 bool;
#define true 1
#define false 0
#endif
#ifndef NULL
#define NULL 0
#endif

/* 0x08082C74 (120B) | code_0803EE94_7CF4_Sub_08082C74 (orig: func_08082C74) | origin: wip | domain: code_0803EE94_7CF4 | MEDIUM / graph_algebra */
u32 code_0803EE94_7CF4_Sub_08082C74(int param_1,int param_2) {
    u8 auStack_18 [4];
    s8 cVar1;
    register s16 iVar2;
  register s8 uVar3;
  uVar3 = (s32)1;
  iVar2 = ToolChest_GetFirstSlotWith(*(int *)(param_1 + 8) + 0x380,param_2);
  if ((iVar2 != -1) ||
     (iVar2 = Rucksack_GetFirstSlotWithTool(*(int *)(8 + param_1) + 0x00001C38,param_2), iVar2 != -1)) {
    uVar3 = 0;
  }
  if (ToolStack_IsEmpty(*(int *)(param_1 + 8) + 0x00001C34) == '\0') {
    auStack_18[0] = (s16)ToolStack_GetTool(*(int *)(param_1 + 8) + 0x00001C34);
    if (func_0800DB30(auStack_18) == param_2) {
      uVar3 = 0;
    }
  }
  return uVar3;
}

/* 0x08083B2C (168B) | code_0803EE94_7CF4_AutoPtrFactory (orig: func_08083B2C) | origin: wip | domain: code_0803EE94_7CF4 | HIGH / vtable_algebra */
u32 code_0803EE94_7CF4_AutoPtrFactory(u32 *self,int param_2) {
  int iVar1;
  u32 uVar2;
  u32 *puVar3;
  u32 uVar4;
  iVar1 = code_0803EE94_7CF4_Sub_08082CEC(*(u32 *)(param_2 + 4));
  if (iVar1 == 0) {
    uVar2 = *(u32 *)(param_2 + 8);
    *(u32 *)(param_2 + 8) = 0;
    *self = uVar2;
  }
  else if (iVar1 == 1) {
    puVar3 = (u32 *)CppRuntime_builtin_new(0x10);
    uVar4 = *(u32 *)(param_2 + 8);
    *(u32 *)(param_2 + 8) = 0;
    uVar2 = *(u32 *)(param_2 + 0x1c);
    *puVar3 = 0x080E7CF4;
    puVar3[1] = uVar4;
    puVar3[2] = uVar2;
    *(u8 *)(puVar3 + 3) = 0;
    *self = puVar3;
  }
  else {
    puVar3 = (u32 *)CppRuntime_builtin_new(0x10);
    uVar4 = *(u32 *)(param_2 + 8);
    *(u32 *)(param_2 + 8) = 0;
    uVar2 = *(u32 *)(param_2 + 0x1c);
    *puVar3 = 0x080E7CF4;
    puVar3[1] = uVar4;
    puVar3[2] = uVar2;
    *(u8 *)(puVar3 + 3) = 1;
    *self = puVar3;
  }
  return self;
}

/* 0x080E3494 (72B) | code_0803EE94_7CF4_vfunc_0C (orig: func_080E3494) | origin: wip | domain: code_0803EE94_7CF4 | HIGH / vtable_algebra */
u32 code_0803EE94_7CF4_vfunc_0C(u32 *self,int param_2) {
  u32 uVar1;
  u32 auStack_1c [3];
  auStack_1c[0] = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  uVar1 = CppRuntime_builtin_new(0xc);
  uVar1 = code_0803EE94_7DC8_Create(uVar1,auStack_1c,*(u32 *)(param_2 + 8),*(u8 *)(param_2 + 0xc)
                       );
  *self = uVar1;
  return self;
}

/* 0x080E34DC (40B) | code_0803EE94_7CF4_vfunc_08 (orig: func_080E34DC) | origin: pure | domain: code_0803EE94_7CF4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void code_0803EE94_7CF4_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

