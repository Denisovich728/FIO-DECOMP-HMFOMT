/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_809E804_85AC (1 functions) */
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

/* 0x080CC15C (436B) | code_809E804_85AC_Ctor (orig: func_080CC15C) | origin: wip | domain: code_809E804_85AC | HIGH / vtable_algebra */
u32 code_809E804_85AC_Ctor(int self,u32 param_2,u32 param_3,u32 param_4,u32 param_5,
             char param_6) {
  u32 uVar1;
  u32 *puVar2;
  u32 uVar3;
  int iVar4;
  int iVar5;
  u32 uStack_34;
  u32 uStack_30;
  u32 uStack_2c;
  u32 uStack_28;
  u8 *puStack_24;
  uStack_28 = param_4;
  code_809E804_85CC_Ctor(self,param_3);
  *(u32 *)(self + 0x210) = 0x080E85AC;
  code_809E804_SetField_0x00_AC70(&uStack_34);
  *(u32 *)(self + 0x214) = 0;
  if (uStack_28 < 9) {
    puVar2 = (u32 *)(self + 0x218);
    for (uVar3 = uStack_28; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (puVar2 != (u32 *)0x0) {
        *puVar2 = uStack_34;
        puVar2[1] = uStack_30;
        puVar2[2] = uStack_2c;
      }
      puVar2 = puVar2 + 3;
    }
    *(u32 *)(self + 0x214) = uStack_28;
  }
  *(u32 *)(self + 0x278) = param_2;
  *(char *)(self + 0x27c) = param_6;
  puStack_24 = (u8 *)&uStack_34;
  code_809E804_SetField_0x00_AC70(self + 0x280);
  uVar3 = LibC_strlen(param_5);
  if (8 < uVar3) {
    uVar3 = 8;
  }
  LibC_memcpy(self + 0x28c,param_5,uVar3);
  *(u8 *)(self + 0x28c + uVar3) = 0;
  *(u32 *)(self + 0x298) = uStack_28;
  hardware_Sub_08007874(self + 0x29c);
  *(u32 *)(self + 0x2a0) = 0;
  hardware_Sub_08007128(self + 0x2a4);
  *(u32 *)(self + 0x2a8) = 0;
  iVar4 = self + 0x2ac;
  iVar5 = 7;
  do {
    hardware_Sub_08007874(iVar4);
    *(u32 *)(iVar4 + 4) = 0;
    iVar4 = iVar4 + 8;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  iVar4 = self + 0x2ec;
  iVar5 = 7;
  do {
    hardware_Sub_08007128(iVar4);
    *(u32 *)(iVar4 + 4) = 0;
    iVar4 = iVar4 + 8;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  uVar3 = 0;
  puVar2 = (u32 *)(self + 0x2b0);
  do {
    iVar4 = uVar3 * 8 + self + 0x2ac;
    hardware_Sub_08007C28(iVar4,*puVar2);
    uVar1 = hardware_Sub_08007B54(iVar4,2);
    *puVar2 = uVar1;
    iVar4 = uVar3 * 8 + self + 0x2ec;
    hardware_Sub_080073E0(iVar4,puVar2[0x10]);
    uVar1 = hardware_Sub_0800736C(iVar4);
    puVar2[0x10] = uVar1;
    puVar2 = puVar2 + 2;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  if (param_6 != '\0') {
    hardware_Sub_08007C28(self + 0x29c,*(u32 *)(self + 0x2a0));
    uVar1 = hardware_Sub_08007B54(self + 0x29c,2);
    *(u32 *)(self + 0x2a0) = uVar1;
    hardware_Sub_080073E0(self + 0x2a4,*(u32 *)(self + 0x2a8));
    uVar1 = hardware_Sub_0800736C(self + 0x2a4);
    *(u32 *)(self + 0x2a8) = uVar1;
  }
  return (self);
}

