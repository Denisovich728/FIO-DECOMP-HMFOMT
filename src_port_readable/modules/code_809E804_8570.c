/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_809E804_8570 (2 functions) */
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

/* 0x080C7F58 (1032B) | code_809E804_8570_Ctor (orig: func_080C7F58) | origin: wip | domain: code_809E804_8570 | HIGH / vtable_algebra */
u32 code_809E804_8570_Ctor(int self,u32 param_2) {
  int iVar1;
  u32 uVar2;
  u16 *puVar3;
  u16 *puVar4;
  u16 *puVar5;
  int iVar6;
  int iVar7;
  u32 *puVar8;
  u8 auStack_6c [4];
  u8 auStack_68 [4];
  int iStack_64;
  int iStack_60;
  u32 *puStack_5c;
  u8 *puStack_58;
  int iStack_54;
  int iStack_50;
  u16 *puStack_4c;
  u8 *puStack_48;
  u8 *puStack_44;
  int iStack_40;
  u16 *puStack_3c;
  u8 *puStack_38;
  int iStack_34;
  int iStack_30;
  u16 *puStack_2c;
  int *piStack_28;
  u8 *puStack_24;
  hardware_Create();
  *(u32 *)(self + 4) = 0x080E8570;
  *(u32 *)(self + 8) = param_2;
  *(u16 *)(self + 0xc) = 0;
  *(u32 *)(self + 0x10) = 0;
  *(u32 *)(self + 0x14) = 0xffffffff;
  hardware_Sub_08008B54(self + 0x18,1);
  *(u32 *)(self + 0x1c) = 0;
  *(u32 *)(self + 0x20) = 0;
  *(u32 *)(self + 0x2a4) = 0;
  hardware_SetField_0x00_835C(auStack_6c);
  hardware_SetField_0x00(auStack_68);
  hardware_5BB4_Sub_08050CC0(self + 0x348,0,0x1c,0,0,auStack_6c,auStack_68);
  hardware_Sub_08007714(auStack_68,2);
  hardware_Sub_08008364(auStack_6c,2);
  hardware_Sub_08007874(self + 0x354);
  uVar2 = hardware_Sub_08007B54(self + 0x354,2);
  *(u32 *)(self + 0x358) = uVar2;
  hardware_Sub_08007128(self + 0x35c);
  uVar2 = hardware_Sub_0800736C(self + 0x35c);
  *(u32 *)(self + 0x360) = uVar2;
  hardware_Sub_08007874(self + 0x364);
  uVar2 = hardware_Sub_08007B54(self + 0x364,2);
  *(u32 *)(self + 0x368) = uVar2;
  hardware_Sub_08007128(self + 0x36c);
  uVar2 = hardware_Sub_0800736C(self + 0x36c);
  *(u32 *)(self + 0x370) = uVar2;
  hardware_Sub_08007874(self + 0x374);
  uVar2 = hardware_Sub_08007B54(self + 0x374,1);
  *(u32 *)(self + 0x378) = uVar2;
  hardware_Sub_08007874(self + 0x37c);
  uVar2 = hardware_Sub_08007B54(self + 0x37c,1);
  *(u32 *)(self + 0x380) = uVar2;
  hardware_Sub_08007128(self + 900);
  uVar2 = hardware_Sub_0800736C(self + 900);
  *(u32 *)(self + 0x388) = uVar2;
  hardware_Sub_08007874(self + 0x38c);
  uVar2 = hardware_Sub_08007B54(self + 0x38c,1);
  *(u32 *)(self + 0x390) = uVar2;
  hardware_Sub_08007874(self + 0x394);
  uVar2 = hardware_Sub_08007B54(self + 0x394,1);
  *(u32 *)(self + 0x398) = uVar2;
  hardware_Sub_08007128(self + 0x39c);
  uVar2 = hardware_Sub_0800736C(self + 0x39c);
  *(u32 *)(self + 0x3a0) = uVar2;
  iVar6 = self + 0x3a4;
  iVar7 = 8;
  piStack_28 = &iStack_64;
  do {
    hardware_Sub_08007874(iVar6);
    *(u32 *)(iVar6 + 4) = 0;
    iVar6 = iVar6 + 8;
    iVar7 = iVar7 + -1;
  } while (iVar7 != -1);
  iVar6 = self + 0x3ec;
  iVar7 = 8;
  iStack_30 = self + 0x568;
  puVar3 = (u16 *)(0x0000057C + self);
  puStack_58 = (u8 *)(self + 0x598);
  iStack_50 = self + 0x5a0;
  puVar5 = (u16 *)(0x000005B4 + self);
  puStack_44 = (u8 *)(self + 0x5d0);
  iStack_40 = self + 0x5d8;
  puStack_3c = (u16 *)(self + 0x000005EC);
  puStack_38 = (u8 *)(self + 0x608);
  iStack_34 = self + 0x610;
  puStack_2c = (u16 *)(self + 0x00000624);
  puStack_24 = (u8 *)(self + 0x640);
  puStack_5c = (u32 *)(self + 0x648);
  iStack_54 = self + 0x0000064C;
  puStack_4c = (u16 *)(self + 0x660);
  puStack_48 = (u8 *)(self + 0x0000067C);
  do {
    hardware_Sub_08007128(iVar6);
    *(u32 *)(iVar6 + 4) = 0;
    iVar1 = 0x00000434;
    iVar6 = iVar6 + 8;
    iVar7 = iVar7 + -1;
  } while (iVar7 != -1);
  *(u16 *)(self + 0x00000434) = 0;
  iStack_64 = self;
  code_linkonce_857C_Ctor(self + iVar1 + 4,piStack_28);
  iVar7 = self + 0x000004D4;
  code_0803EE94_79C8_Ctor(iVar7,0x08527094);
  iStack_60 = self + 0x00000504;
  code_0803EE94_79C8_Ctor(iStack_60,0x08728208);
  iVar6 = 0x00000534 + self;
  code_0803EE94_79C8_Ctor(iVar6,0x087536E4);
  puVar4 = (u16 *)(self + 0x00000564);
  *puVar4 = 0;
  puVar4[1] = 0;
  code_0803EE94_Sub_0805E824(iStack_30,iVar7,0,0x100);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  *(u32 *)(puVar3 + 6) = 0;
  *(u8 *)(puVar3 + 8) = 0;
  *(u8 *)((int)puVar3 + 0x11) = 0;
  *(u32 *)(puVar3 + 10) = 0;
  *(u8 *)(puVar3 + 0xc) = 0;
  *puStack_58 = 0;
  puVar3 = (u16 *)(self + 0x0000059C);
  *puVar3 = 0;
  puVar3[1] = 0;
  code_0803EE94_Sub_0805E824(iStack_50,iVar7,1,0x100);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  *(u32 *)(puVar5 + 6) = 0;
  *(u8 *)(puVar5 + 8) = 0;
  *(u8 *)((int)puVar5 + 0x11) = 0;
  *(u32 *)(puVar5 + 10) = 0;
  *(u8 *)(puVar5 + 0xc) = 0;
  *puStack_44 = 0;
  puVar3 = (u16 *)(self + 0x000005D4);
  *puVar3 = 0;
  puVar3[1] = 0;
  code_0803EE94_Sub_0805E824(iStack_40,iVar6,0,0x100);
  *puStack_3c = 0;
  puStack_3c[1] = 0;
  puStack_3c[2] = 0;
  puStack_3c[3] = 0;
  puStack_3c[4] = 0;
  *(u32 *)(puStack_3c + 6) = 0;
  *(u8 *)(puStack_3c + 8) = 0;
  *(u8 *)((int)puStack_3c + 0x11) = 0;
  *(u32 *)(puStack_3c + 10) = 0;
  *(u8 *)(puStack_3c + 0xc) = 0;
  *puStack_38 = 0;
  puVar3 = (u16 *)(self + 0x0000060C);
  *puVar3 = 0;
  puVar3[1] = 0;
  code_0803EE94_Sub_0805E824(iStack_34,iVar6,1,0x100);
  *puStack_2c = 0;
  puStack_2c[1] = 0;
  puStack_2c[2] = 0;
  puStack_2c[3] = 0;
  puStack_2c[4] = 0;
  *(u32 *)(puStack_2c + 6) = 0;
  *(u8 *)(puStack_2c + 8) = 0;
  *(u8 *)((int)puStack_2c + 0x11) = 0;
  *(u32 *)(puStack_2c + 10) = 0;
  *(u8 *)(puStack_2c + 0xc) = 0;
  *puStack_24 = 0;
  puVar3 = (u16 *)(self + 0x00000644);
  *puVar3 = 0xc;
  *puStack_5c = 0x28;
  code_0803EE94_Sub_0805E824(iStack_54,iStack_60,0,0x100);
  *puStack_4c = 0;
  puStack_4c[1] = 0;
  puStack_4c[2] = 0;
  puStack_4c[3] = 0;
  puStack_4c[4] = 0;
  *(u32 *)(puStack_4c + 6) = 0;
  *(u8 *)(puStack_4c + 8) = 0;
  *(u8 *)((int)puStack_4c + 0x11) = 0;
  *(u32 *)(puStack_4c + 10) = 0;
  *(u8 *)(puStack_4c + 0xc) = 0;
  *puStack_48 = 1;
  *(u32 *)(puVar3 + 0x1e) = 0;
  hardware_Sub_080CA770(self + 0x00000684,self);
  *(u8 *)(self + 0x6a0) = 0;
  *(u8 *)(self + 0x6a1) = 0;
  *(u8 *)(self + 0x6a2) = 0;
  *(u8 *)(self + 0x6a3) = 0;
  iVar6 = 0;
  puVar8 = (u32 *)(self + 0x3a8);
  do {
    iVar7 = iVar6 * 8 + self + 0x3a4;
    hardware_Sub_08007C28(iVar7,*puVar8);
    uVar2 = hardware_Sub_08007B54(iVar7,2);
    *puVar8 = uVar2;
    iVar7 = iVar6 * 8 + self + 0x3ec;
    hardware_Sub_080073E0(iVar7,puVar8[0x12]);
    uVar2 = hardware_Sub_0800736C(iVar7);
    puVar8[0x12] = uVar2;
    puVar8 = puVar8 + 2;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 9);
  return (self);
}

/* 0x080C8360 (496B) | code_809E804_8570_Dtor (orig: func_080C8360) | origin: wip | domain: code_809E804_8570 | HIGH / vtable_algebra */
void code_809E804_8570_Dtor(int self,u32 param_2) {
  u32 uVar1;
  int iVar2;
  int iVar3;
  u16 *puVar4;
  u16 *puVar5;
  int iVar6;
  *(u32 *)(self + 4) = 0x080E8570;
  puVar4 = (u16 *)(self + 0x00000434);
  interrupt_Sub_08000540(0,*puVar4);
  uVar1 = 0x080E5A28;
  *(u32 *)(self + 0x00000534) = 0x080E5A28;
  iVar3 = 0x00000504;
  *(u32 *)(self + 0x00000504) = uVar1;
  *(u32 *)(self + iVar3 + -0x30) = uVar1;
  code_linkonce_857C_Dtor(self + 0x438,2);
  if (self != -0x3ec) {
    while ((u16 *)(self + 0x3ec) != puVar4) {
      puVar5 = puVar4 + -4;
      hardware_Sub_080073E0(puVar5,*(u32 *)(puVar4 + -2));
      hardware_Sub_08007184(puVar5,2);
      puVar4 = puVar5;
    }
  }
  iVar3 = self + 0x24;
  if ((self != -0x3a4) && (self + 0x3a4 != self + 0x3ec)) {
    iVar2 = self + 0x3ec;
    do {
      iVar6 = iVar2 + -8;
      hardware_Sub_08007C28(iVar6,*(u32 *)(iVar2 + -4));
      hardware_Sub_080079E8(iVar6,2);
      iVar2 = iVar6;
    } while (self + 0x3a4 != iVar6);
  }
  hardware_Sub_080073E0(self + 0x39c,*(u32 *)(self + 0x3a0));
  hardware_Sub_08007184(self + 0x39c,2);
  hardware_Sub_08007C28(self + 0x394,*(u32 *)(self + 0x398));
  hardware_Sub_080079E8(self + 0x394,2);
  hardware_Sub_08007C28(self + 0x38c,*(u32 *)(self + 0x390));
  hardware_Sub_080079E8(self + 0x38c,2);
  hardware_Sub_080073E0(self + 900,*(u32 *)(self + 0x388));
  hardware_Sub_08007184(self + 900,2);
  hardware_Sub_08007C28(self + 0x37c,*(u32 *)(self + 0x380));
  hardware_Sub_080079E8(self + 0x37c,2);
  hardware_Sub_08007C28(self + 0x374,*(u32 *)(self + 0x378));
  hardware_Sub_080079E8(self + 0x374,2);
  hardware_Sub_080073E0(self + 0x36c,*(u32 *)(self + 0x370));
  hardware_Sub_08007184(self + 0x36c,2);
  hardware_Sub_08007C28(self + 0x364,*(u32 *)(self + 0x368));
  hardware_Sub_080079E8(self + 0x364,2);
  hardware_Sub_080073E0(self + 0x35c,*(u32 *)(self + 0x360));
  hardware_Sub_08007184(self + 0x35c,2);
  hardware_Sub_08007C28(self + 0x354,*(u32 *)(self + 0x358));
  hardware_Sub_080079E8(self + 0x354,2);
  SpriteAnimEngine_5A28_Wrap_Dtor_0D0C(self + 0x348,2);
  for (; iVar3 != self + *(int *)(self + 0x20) * 0x10 + 0x24; iVar3 = iVar3 + 0x10) {
  }
  iVar3 = *(int *)(self + 0x1c);
  if (iVar3 != 0) {
    code_0803EE94_7B68_Ctor_5DEC(iVar3 + 0x28,2);
    for (iVar2 = *(int *)(iVar3 + 0x18); iVar2 != *(int *)(iVar3 + 0x1c); iVar2 = iVar2 + 0x40) {
    }
    if (*(int *)(iVar3 + 0x18) != 0) {
      LibC_free();
    }
    CppRuntime_builtin_delete(iVar3);
  }
  hardware_Dtor(self,param_2);
}

