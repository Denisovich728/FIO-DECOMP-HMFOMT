/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_8230 (1 functions) */
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

/* 0x08094AC0 (1196B) | code_0803EE94_8230_Ctor (orig: func_08094AC0) | origin: wip | domain: code_0803EE94_8230 | HIGH / vtable_algebra */
u32 code_0803EE94_8230_Ctor(int self,u32 param_2,u32 param_3) {
  char cVar1;
  u32 uVar2;
  u16 *puVar3;
  u8 *puVar4;
  int *piVar5;
  u32 *puVar6;
  u16 *puVar7;
  int iVar8;
  int iVar9;
  u32 uStack_28;
  u32 uStack_24;
  uStack_24 = param_3 & 0xff;
  code_809E804_85A0_Ctor();
  *(u32 *)(self + 4) = 0x080E8230;
  *(u32 *)(self + 0x8c) = param_2;
  hardware_Sub_08008B54(self + 0x90,0);
  hardware_Sub_08008B54(self + 0x94,2);
  iVar9 = self + 0x98;
  code_0803EE94_79C8_Ctor(iVar9,0x08527094);
  code_0803EE94_79C8_Ctor(self + 200,0x08728208);
  code_0803EE94_79C8_Ctor(self + 0xf8,0x08754C0C);
  code_0803EE94_79C8_Ctor(self + 0x128,0x08754674);
  code_0803EE94_Sub_0805E824(self + 0x158,iVar9,3,0x100);
  *(u16 *)(self + 0x16c) = 0;
  *(u16 *)(self + 0x16e) = 0;
  *(u16 *)(self + 0x170) = 0;
  *(u16 *)(self + 0x172) = 0;
  *(u16 *)(self + 0x174) = 0;
  *(u32 *)(self + 0x178) = 0;
  *(u8 *)(self + 0x17c) = 0;
  *(u8 *)(self + 0x17d) = 0;
  *(u32 *)(self + 0x180) = 0;
  *(u8 *)(self + 0x184) = 0;
  *(u8 *)(self + 0x18c) = 0;
  code_0803EE94_Sub_0805E824(self + 400,iVar9,2,0x100);
  *(u16 *)(self + 0x1a4) = 0;
  *(u16 *)(self + 0x1a6) = 0;
  *(u16 *)(self + 0x1a8) = 0;
  *(u16 *)(self + 0x1aa) = 0;
  *(u16 *)(self + 0x1ac) = 0;
  *(u32 *)(self + 0x1b0) = 0;
  *(u8 *)(self + 0x1b4) = 0;
  *(u8 *)(self + 0x1b5) = 0;
  *(u32 *)(self + 0x1b8) = 0;
  *(u8 *)(self + 0x1bc) = 0;
  *(u8 *)(self + 0x1c4) = 0;
  code_0803EE94_Sub_0805E824(self + 0x1c8,iVar9,0,0x100);
  *(u16 *)(self + 0x1dc) = 0;
  *(u16 *)(self + 0x1de) = 0;
  *(u16 *)(self + 0x1e0) = 0;
  *(u16 *)(self + 0x1e2) = 0;
  *(u16 *)(self + 0x1e4) = 0;
  *(u32 *)(self + 0x1e8) = 0;
  *(u8 *)(self + 0x1ec) = 0;
  *(u8 *)(self + 0x1ed) = 0;
  *(u32 *)(self + 0x1f0) = 0;
  *(u8 *)(self + 500) = 0;
  *(u8 *)(self + 0x1fc) = 0;
  code_0803EE94_Sub_0805E824(self + 0x200,iVar9,1,0x100);
  *(u16 *)(self + 0x214) = 0;
  *(u16 *)(self + 0x216) = 0;
  *(u16 *)(self + 0x218) = 0;
  *(u16 *)(self + 0x21a) = 0;
  *(u16 *)(self + 0x21c) = 0;
  *(u32 *)(self + 0x220) = 0;
  *(u8 *)(self + 0x224) = 0;
  *(u8 *)(self + 0x225) = 0;
  *(u32 *)(self + 0x228) = 0;
  *(u8 *)(self + 0x22c) = 0;
  *(u8 *)(self + 0x234) = 0;
  code_0803EE94_Sub_0805E824(self + 0x238,self + 200,0,0x100);
  *(u16 *)(self + 0x24c) = 0;
  *(u16 *)(self + 0x24e) = 0;
  *(u16 *)(self + 0x250) = 0;
  *(u16 *)(self + 0x252) = 0;
  *(u16 *)(self + 0x254) = 0;
  *(u32 *)(self + 600) = 0;
  *(u8 *)(self + 0x25c) = 0;
  *(u8 *)(self + 0x25d) = 0;
  *(u32 *)(self + 0x260) = 0;
  *(u8 *)(self + 0x264) = 0;
  *(u8 *)(self + 0x26c) = 0;
  code_0803EE94_Sub_0805E824(self + 0x270,self + 0xf8,1,0x100);
  *(u16 *)(self + 0x284) = 0;
  *(u16 *)(self + 0x286) = 0;
  *(u16 *)(self + 0x288) = 0;
  *(u16 *)(self + 0x28a) = 0;
  *(u16 *)(self + 0x28c) = 0;
  *(u32 *)(self + 0x290) = 0;
  *(u8 *)(self + 0x294) = 0;
  *(u8 *)(self + 0x295) = 0;
  *(u32 *)(self + 0x298) = 0;
  *(u8 *)(self + 0x29c) = 0;
  *(u8 *)(self + 0x2a4) = 0;
  code_0803EE94_Sub_0805E824(self + 0x2a8,self + 0x128,0,0x100);
  *(u16 *)(self + 700) = 0;
  *(u16 *)(self + 0x2be) = 0;
  *(u16 *)(self + 0x2c0) = 0;
  *(u16 *)(self + 0x2c2) = 0;
  *(u16 *)(self + 0x2c4) = 0;
  *(u32 *)(self + 0x2c8) = 0;
  *(u8 *)(self + 0x2cc) = 0;
  *(u8 *)(self + 0x2cd) = 0;
  *(u32 *)(self + 0x2d0) = 0;
  *(u8 *)(self + 0x2d4) = 0;
  *(u8 *)(self + 0x2dc) = 0;
  hardware_Sub_08007874(self + 0x2e0);
  uVar2 = hardware_Sub_08007B54(self + 0x2e0,2);
  *(u32 *)(self + 0x2e4) = uVar2;
  hardware_Sub_08007128(self + 0x2e8);
  *(u32 *)(self + 0x2ec) = 0;
  hardware_Sub_08007874(self + 0x2f0);
  uVar2 = hardware_Sub_08007B54(self + 0x2f0,2);
  *(u32 *)(self + 0x2f4) = uVar2;
  hardware_Sub_08007128(self + 0x2f8);
  uVar2 = hardware_Sub_0800736C(self + 0x2f8);
  *(u32 *)(self + 0x2fc) = uVar2;
  hardware_Sub_08007874(self + 0x300);
  uVar2 = hardware_Sub_08007B54(self + 0x300,6);
  *(u32 *)(self + 0x304) = uVar2;
  hardware_Sub_08007128(self + 0x308);
  *(u32 *)(self + 0x30c) = 0;
  hardware_Sub_08007874(self + 0x310);
  uVar2 = hardware_Sub_08007B54(self + 0x310,4);
  *(u32 *)(self + 0x314) = uVar2;
  hardware_Sub_08007874(self + 0x318);
  uVar2 = hardware_Sub_08007B54(self + 0x318,4);
  *(u32 *)(self + 0x31c) = uVar2;
  hardware_Sub_08007128(self + 800);
  *(u32 *)(self + 0x324) = 0;
  hardware_Sub_08007874(self + 0x328);
  uVar2 = hardware_Sub_08007B54(self + 0x328,7);
  *(u32 *)(self + 0x32c) = uVar2;
  *(u16 *)(self + 0x334) = 0;
  *(u16 *)(self + 0x346) = (u16)0xFFFFF000 & *(u16 *)(self + 0x346);
  *(u8 *)(self + 0x347) = *(u8 *)(self + 0x347) & 0xef;
  iVar9 = 7;
  puVar3 = (u16 *)(self + 0x344);
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + -1;
    iVar9 = iVar9 + -1;
  } while (-1 < iVar9);
  *(u16 *)(self + 0x348) = 0;
  *(u16 *)(self + 0x35a) = (u16)0xFFFFF000 & *(u16 *)(self + 0x35a);
  *(u8 *)(self + 0x35b) = *(u8 *)(self + 0x35b) & 0xef;
  piVar5 = (int *)(self + 0x8c);
  iVar9 = 7;
  puVar3 = (u16 *)(self + 0x358);
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + -1;
    iVar9 = iVar9 + -1;
  } while (-1 < iVar9);
  iVar9 = 7;
  do {
    iVar9 = iVar9 + -1;
  } while (iVar9 != -1);
  iVar9 = self + 0x00002BB0;
  iVar8 = 7;
  do {
    func_0800EFEC(iVar9);
    iVar9 = iVar9 + 4;
    iVar8 = iVar8 + -1;
  } while (iVar8 != -1);
  puVar6 = (u32 *)(self + 0x000033D8);
  *puVar6 = 0x080E823C;
  *(u16 *)(puVar6 + 1) = 0;
  *(u8 *)((int)puVar6 + 6) = 0;
  *(u8 *)((int)puVar6 + 7) = 0;
  *(u8 *)(self + 0x0000035E) = (u8)uStack_24;
  *(u8 *)(self + 0x368) = *(u8 *)(*piVar5 + 0x00002C1A);
  puVar7 = (u16 *)(self + 0x330);
  *puVar7 = 0;
  cVar1 = func_0800BFD4(*piVar5 + 500);
  if (cVar1 != '\0') {
    *puVar7 = *puVar7 | 1;
  }
  cVar1 = func_0800BFDC(*piVar5 + 500);
  if (cVar1 != '\0') {
    *puVar7 = *puVar7 | 2;
  }
  cVar1 = func_0800BFE4(*piVar5 + 500);
  if (cVar1 != '\0') {
    *puVar7 = *puVar7 | 4;
  }
  cVar1 = func_0800BFEC(*piVar5 + 500);
  if (cVar1 != '\0') {
    *puVar7 = *puVar7 | 8;
  }
  cVar1 = func_0800BFF4(*piVar5 + 500);
  if (cVar1 != '\0') {
    *puVar7 = *puVar7 | 0x10;
  }
  cVar1 = func_0800BFFC(*piVar5 + 500);
  if (cVar1 != '\0') {
    *puVar7 = *puVar7 | 0x20;
  }
  cVar1 = func_0800C004(*piVar5 + 500);
  if (cVar1 != '\0') {
    *puVar7 = *puVar7 | 0x40;
  }
  cVar1 = func_0800C00C(*piVar5 + 500);
  if (cVar1 != '\0') {
    *puVar7 = *puVar7 | 0xf80;
  }
  uVar2 = func_0800F5F8(*piVar5 + 0x00001C38);
  *(u32 *)(self + 0x00002BA0) = uVar2;
  puVar6 = (u32 *)(self + 0x00002BB0);
  iVar9 = 7;
  do {
    func_0800EFEC(&uStack_28);
    *puVar6 = uStack_28;
    puVar6 = puVar6 + 1;
    iVar9 = iVar9 + -1;
  } while (-1 < iVar9);
  iVar9 = 8;
  puVar4 = (u8 *)(self + 0x00002BAF);
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + -1;
    iVar9 = iVar9 + -1;
  } while (-1 < iVar9);
  *(u16 *)(self + 0x000033D0) = 0;
  return (self);
}

