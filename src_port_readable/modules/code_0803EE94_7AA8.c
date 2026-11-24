/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7AA8 (1 functions) */
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

/* 0x08069F14 (736B) | code_0803EE94_7AA8_Ctor (orig: func_08069F14) | origin: wip | domain: code_0803EE94_7AA8 | HIGH / vtable_algebra */
u32 code_0803EE94_7AA8_Ctor(int self,u32 *param_2,u32 param_3,int param_4) {
  u32 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  u32 *puVar5;
  u8 auStack_28 [4];
  u8 auStack_24 [4];
  hardware_Create();
  *(u32 *)(self + 4) = 0x080E7AA8;
  uVar1 = *param_2;
  *param_2 = 0;
  *(u32 *)(self + 8) = uVar1;
  *(u32 *)(self + 0xc) = param_3;
  *(int *)(self + 0x10) = param_4;
  *(u32 *)(self + 0x14) = 0;
  *(u32 *)(self + 0x18) = 0xffffffff;
  *(u32 *)(self + 0x1c) = 0;
  *(u16 *)(self + 0x20) = 0;
  iVar4 = self + 0x24;
  code_0803EE94_79C8_Ctor(iVar4,0x08527094);
  code_0803EE94_79C8_Ctor(self + 0x54,0x08728208);
  *(u16 *)(self + 0x84) = 0;
  *(u16 *)(self + 0x86) = 0;
  code_0803EE94_Sub_0805E824(self + 0x88,iVar4,0,0x100);
  *(u16 *)(self + 0x9c) = 0;
  *(u16 *)(self + 0x9e) = 0;
  *(u16 *)(self + 0xa0) = 0;
  *(u16 *)(self + 0xa2) = 0;
  *(u16 *)(self + 0xa4) = 0;
  *(u32 *)(self + 0xa8) = 0;
  *(u8 *)(self + 0xac) = 0;
  *(u8 *)(self + 0xad) = 0;
  *(u32 *)(self + 0xb0) = 0;
  *(u8 *)(self + 0xb4) = 0;
  *(u8 *)(self + 0xb8) = 0;
  *(u16 *)(self + 0xbc) = 0;
  *(u16 *)(self + 0xbe) = 0;
  code_0803EE94_Sub_0805E824(self + 0xc0,iVar4,1,0x100);
  *(u16 *)(self + 0xd4) = 0;
  *(u16 *)(self + 0xd6) = 0;
  *(u16 *)(self + 0xd8) = 0;
  *(u16 *)(self + 0xda) = 0;
  *(u16 *)(self + 0xdc) = 0;
  *(u32 *)(self + 0xe0) = 0;
  *(u8 *)(self + 0xe4) = 0;
  *(u8 *)(self + 0xe5) = 0;
  *(u32 *)(self + 0xe8) = 0;
  *(u8 *)(self + 0xec) = 0;
  *(u8 *)(self + 0xf0) = 0;
  *(u16 *)(self + 0xf4) = 0xc;
  *(u32 *)(self + 0xf8) = 0x18;
  code_0803EE94_Sub_0805E824(self + 0xfc,self + 0x54,0,0x100);
  *(u16 *)(self + 0x110) = 0;
  *(u16 *)(self + 0x112) = 0;
  *(u16 *)(self + 0x114) = 0;
  *(u16 *)(self + 0x116) = 0;
  *(u16 *)(self + 0x118) = 0;
  *(u32 *)(self + 0x11c) = 0;
  *(u8 *)(self + 0x120) = 0;
  *(u8 *)(self + 0x121) = 0;
  *(u32 *)(self + 0x124) = 0;
  *(u8 *)(self + 0x128) = 0;
  *(u8 *)(self + 300) = 1;
  *(u32 *)(self + 0x130) = 0;
  hardware_SetField_0x00_835C(auStack_28);
  hardware_SetField_0x00(auStack_24);
  hardware_5BB4_Sub_08050CC0(self + 0x134,0,0x1d,0,0,auStack_28,auStack_24);
  hardware_Sub_08007714(auStack_24,2);
  hardware_Sub_08008364(auStack_28,2);
  *(u32 *)(self + 0x138) = 0;
  iVar4 = 0xf;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != -1);
  *(u32 *)(self + 0x00003EA0) = 0;
  iVar4 = 0x00003FA4;
  *(u32 *)(self + 0x00003FA4) = 0;
  *(u32 *)(self + iVar4 + 0xc4) = 0;
  *(u32 *)(self + iVar4 + 0x108) = 0;
  iVar4 = self + 0x000040B0;
  hardware_Sub_08007874(iVar4);
  uVar1 = hardware_Sub_08007B54(iVar4,1);
  *(u32 *)(iVar4 + 4) = uVar1;
  iVar4 = self + 0x000040B8;
  hardware_Sub_08007128(iVar4);
  uVar1 = hardware_Sub_0800736C(iVar4);
  *(u32 *)(iVar4 + 4) = uVar1;
  iVar4 = self + 0x000040C0;
  hardware_Sub_08007874(iVar4);
  uVar1 = hardware_Sub_08007B54(iVar4,2);
  *(u32 *)(iVar4 + 4) = uVar1;
  iVar4 = self + 0x000040C8;
  hardware_Sub_08007128(iVar4);
  uVar1 = hardware_Sub_0800736C(iVar4);
  *(u32 *)(iVar4 + 4) = uVar1;
  iVar4 = self + 0x000040D0;
  iVar3 = 9;
  do {
    hardware_Sub_08007874(iVar4);
    *(u32 *)(iVar4 + 4) = 0;
    iVar4 = iVar4 + 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  iVar4 = self + 0x00004120;
  iVar3 = 9;
  do {
    hardware_Sub_08007128(iVar4);
    *(u32 *)(iVar4 + 4) = 0;
    iVar4 = iVar4 + 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  hardware_Sub_08008B54(self + 0x00004170,1);
  *(u32 *)(self + 0x00004174) = 0;
  if (((param_4 == 1) || (1 < param_4)) || (param_4 != 0)) {
    PortraitEngine_Sub_08050E50(self + 0x134,0xb4);
  }
  else {
    PortraitEngine_Sub_08050E50(self + 0x134,0);
  }
  iVar4 = 0;
  puVar5 = (u32 *)(self + 0x000040D4);
  do {
    iVar3 = iVar4 * 8 + self + 0x000040D0;
    hardware_Sub_08007C28(iVar3,*puVar5);
    uVar1 = hardware_Sub_08007B54(iVar3,2);
    *puVar5 = uVar1;
    iVar3 = iVar4 * 8 + self + 0x00004120;
    hardware_Sub_080073E0(iVar3,puVar5[0x14]);
    uVar1 = hardware_Sub_0800736C(iVar3);
    puVar5[0x14] = uVar1;
    puVar5 = puVar5 + 2;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 10);
  piVar2 = (int *)*param_2;
  if (piVar2 != (int *)0x0) {
    func_080D3914(piVar2,3,*(u32 *)(*piVar2 + 8));
  }
  return (self);
}

