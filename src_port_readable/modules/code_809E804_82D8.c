/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_809E804_82D8 (5 functions) */
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

/* 0x08038EB8 (40B) | code_809E804_82D8_Wrap_Dtor (orig: func_08038EB8) | origin: wip | domain: code_809E804_82D8 | MEDIUM / graph_algebra */
void code_809E804_82D8_Wrap_Dtor(int param_1) {
  int iVar1;
  iVar1 = *(int *)(param_1 + 0xc);
  if ((iVar1 != 0) && (iVar1 != 0)) {
    code_809E804_82D8_Dtor(iVar1,2);
    CppRuntime_builtin_delete(iVar1);
  }
  *(u32 *)(param_1 + 0xc) = 0;
}

/* 0x080A46AC (148B) | code_809E804_82D8_Ctor (orig: func_080A46AC) | origin: wip | domain: code_809E804_82D8 | HIGH / vtable_algebra */
u32 code_809E804_82D8_Ctor(u32 *self,int *param_2,u32 param_3,u32 *param_4,u32 param_5) {
  u8 uVar1;
  u16 uVar2;
  u32 uVar3;
  u32 *puVar4;
  u32 uVar5;
  self[9] = 0x080E82D8;
  *self = param_2;
  puVar4 = self + 1;
  hardware_Sub_08007874(puVar4);
  uVar3 = hardware_Sub_08007B54(puVar4,param_3);
  self[2] = uVar3;
  uVar2 = hardware_Sub_08007D4C(puVar4);
  *(u16 *)(self + 3) = uVar2;
  self[4] = 0;
  if (param_5 < 0x11) {
    LibC_memset(self + 5,0);
    self[4] = param_5;
  }
  uVar5 = 0;
  if (param_5 != 0) {
    puVar4 = self + 5;
    do {
      uVar1 = func_080D3914(param_2,*param_4,*(u32 *)(*param_2 + 0x48));
      *(u8 *)puVar4 = uVar1;
      puVar4 = (u32 *)((int)puVar4 + 1);
      uVar5 = uVar5 + 1;
      param_4 = param_4 + 1;
    } while (uVar5 < param_5);
  }
  return self;
}

/* 0x080A4740 (116B) | code_809E804_82D8_Ctor_4740 (orig: func_080A4740) | origin: wip | domain: code_809E804_82D8 | HIGH / vtable_algebra */
u32 code_809E804_82D8_Ctor_4740(u32 *self,int *param_2,u32 param_3,u32 param_4) {
    u32 uVar3;
  register s8 uVar2;
  register s16 uVar1;
  register u32 *puVar4;
  self[9] = 0x080E82D8;
  *self = param_2;
  puVar4 = self + 1;
  hardware_Sub_08007874(puVar4);
  uVar3 = (s8)hardware_Sub_08007B54(puVar4,param_3);
  uVar2 = hardware_Sub_08007D4C(puVar4);
  self[2] = uVar3;
  self[4] = 0;
  *(u32 *)(3 + self) = uVar2;
  LibC_memset(5 + self,0,1);
  self[4] = 1;
  uVar1 = func_080D3914(param_2,param_4,*(u32 *)(*param_2 + 0x48));
  *(u32 *)(5 + self) = uVar1;
  return self;
}

/* 0x080A47B4 (88B) | code_809E804_82D8_Dtor (orig: func_080A47B4) | origin: pure | domain: code_809E804_82D8 | HIGH / vtable_algebra */
extern void func_080D3914();
extern void hardware_Sub_08007C28();
extern void hardware_Sub_080079E8();
extern void CppRuntime_builtin_delete();
void code_809E804_82D8_Dtor(u32 *self, int param_2) {
    u32 i;
    u32 *sub;
    self[9] = 0x080E82D8;
    i = 0;
    if (i < self[4]) {
        u8 *p = (u8 *)(self + 5);
        do {
            int *obj = (int *)self[0];
            int vtbl = *obj;
            func_080D3914(obj, *p, *(u32 *)(vtbl + 0x4c));
            p++;
            i++;
        } while (i < self[4]);
    }
    sub = self + 1;
    hardware_Sub_08007C28(sub, sub[1]);
    hardware_Sub_080079E8(sub, 2);
    if (param_2 & 1) {
        CppRuntime_builtin_delete(self);
    }
}

/* 0x080DC840 (80B) | code_809E804_82D8_Ctor_C840 (orig: func_080DC840) | origin: wip | domain: code_809E804_82D8 | HIGH / vtable_algebra */
u32 code_809E804_82D8_Ctor_C840(u32 *self,u32 *param_2) {
  u32 uVar1;
  u32 *puVar2;
  int iVar3;
  self[9] = 0x080E82D8;
  *self = *param_2;
  hardware_Sub_08007874(self + 1);
  uVar1 = hardware_Sub_08007CD8(self + 1,param_2[2]);
  self[2] = uVar1;
  *(u16 *)(self + 3) = *(u16 *)(param_2 + 3);
  self[4] = 0;
  iVar3 = param_2[4];
  param_2 = param_2 + 5;
  puVar2 = (u32 *)((int)param_2 + iVar3);
  if (puVar2 != param_2) {
    LibC_memmove(self + 5,param_2,(int)puVar2 - (int)param_2);
  }
  self[4] = iVar3;
  return self;
}

