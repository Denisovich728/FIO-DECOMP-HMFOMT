/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_79DC (1 functions) */
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

/* 0x0805ED4C (248B) | code_0803EE94_79DC_Create (orig: func_0805ED4C) | origin: wip | domain: code_0803EE94_79DC | HIGH / vtable_algebra */
u32 code_0803EE94_79DC_Create(int self,u32 param_2) {
    u8 auStack_20 [4];
    u32 * puVar2;
    u8 auStack_1c [4];
    u16 uStack_16;
  register u8 uVar1;
  register u16 uStack_18;
  uStack_18 = 0x1e;
  uStack_16 = 1;
  hardware_Create_84DC(self);
  *(u32 *)(self + 4) = 0x080E79DC;
  *(u32 *)(self + 8) = param_2;
  *(u32 *)(self + 0xc) = 0;
  uVar1 = CppRuntime_builtin_new(4);
  hardware_SetField_0x00_835C(auStack_20);
  hardware_SetField_0x00(auStack_1c);
  uVar1 = hardware_5BB4_Sub_08050CC0(uVar1,0,0x1f,0xf,*(u32 *)(self + 0xc),auStack_20,auStack_1c);
  *(u32 *)(self + 0x10) = uVar1;
  hardware_Sub_08007714(auStack_1c,2);
  hardware_Sub_08008364(auStack_20,2);
  hardware_Sub_08008B54(self + 0x14,1);
  hardware_Sub_08008B54(self + 0x18,0);
  hardware_Sub_08008B54(self + 0x1c,2);
  puVar2 = (u32 *)(self + 0x00006428);
  puVar2[1] = 0;
  *puVar2 = 0x080E79E8;
  code_0803EE94_Sub_08050E98(*(u32 *)(self + 0x10),0xb);
  *(u8 *)(self + 0x00006420) = 0;
  *(u16 *)(self + 0x00006422) = 0;
  *(u16 *)(self + 0x00006426) = 2;
  *(u16 *)(self + 0x00006424) = 0;
  uVar1 = farmer_NoOp(*(int *)(self + 8) + 0x00001BD8);
  *(u32 *)(self + 0x0000642C) = (s8)uVar1;
  return self;
}

