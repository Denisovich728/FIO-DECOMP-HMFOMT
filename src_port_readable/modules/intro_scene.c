/* FIO-DECOMP-HMFOMT :: Port Readable Module: intro_scene (9 functions) */
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

/* 0x08000914 (1104B) | intro_scene_Ctor (orig: func_08000914) | origin: wip | domain: intro_scene | HIGH / vtable_algebra */
u32 intro_scene_Ctor(int self) {
  hardware_Create(self);
  *(u32 *)(self + 4) = 0x080E5A0C;
  hardware_Sub_08008B54((self + 8), 0);
  hardware_Sub_08008B54((self + 0xc), 1);
  System_UnpackData(0x08747A74, (self + 0x10));
  code_0803EE94_79C8_Ctor((0x00006A10 + self), (self + 0x10));
  code_0803EE94_79C8_Ctor(code_0803EE94_79C8_Ctor((0x00006A10 + self), (self + 0x10)), 0x0874E530);
  code_0803EE94_79C8_Ctor((0x00006A70 + self), 0x0858BA28);
  code_0803EE94_Sub_0805E824((self + 0x00006AA0), 0x00006AA0, (0xb0 << 1), (0x80 << 1));
  *(u32 *)((self + 0x00006AA0) + 0x18) = 0;
  *(u32 *)((self + 0x00006AA0) + 0x1c) = 0;
  code_0803EE94_Sub_0805E824((self + 0x00006AC0), 0x00006AA0, 0x00000342, (0x80 << 1));
  *(u32 *)((self + 0x00006AC0) + 0x18) = 0;
  *(u32 *)((self + 0x00006AC0) + 0x1c) = 0;
  code_0803EE94_Sub_0805E824((self + 0x00006AE0), 0x00006AE0, (0xf1 << 3), (0x80 << 1));
  *(u32 *)((self + 0x00006AE0) + 0x18) = 0;
  *(u32 *)((self + 0x00006AE0) + 0x1c) = 0;
  code_0803EE94_Sub_0805E824((self + (0xd6 << 7)), 0x00006AE0, 0x000002B2, (0x80 << 1));
  *(u32 *)((self + (0xd6 << 7)) + 0x18) = 0;
  *(u32 *)((self + (0xd6 << 7)) + 0x1c) = 0;
  code_0803EE94_Sub_0805E824((self + 0x00006B20), 0x00006B20, 0x00000924, (0x80 << 1));
  *(u32 *)((self + 0x00006B20) + 0x18) = 0;
  *(u32 *)((self + 0x00006B20) + 0x1c) = 0;
  code_0803EE94_Sub_0805E824((self + 0x00006B40), 0x00006B20, (0xe6 << 3), (0x80 << 1));
  *(u32 *)((self + 0x00006B40) + 0x18) = 0;
  *(u32 *)((self + 0x00006B40) + 0x1c) = 0;
  code_0803EE94_Sub_0805E824((self + 0x00006B60), 0x00006B60, (0xe6 << 3), (0x80 << 1));
  *(u32 *)((self + 0x00006B60) + 0x18) = 0;
  *(u32 *)((self + 0x00006B60) + 0x1c) = 0;
  code_0803EE94_Sub_0805E824((self + (0xd7 << 7)), 0x00006B60, 0x0000091A, (0x80 << 1));
  *(u32 *)((self + (0xd7 << 7)) + 0x18) = 0;
  *(u32 *)((self + (0xd7 << 7)) + 0x1c) = 0;
  code_0803EE94_Sub_0805E824((self + 0x00006BA0), 0x00006BA0, 0, (0x80 << 1));
  *(u32 *)((self + 0x00006BA0) + 0x18) = 0;
  *(u32 *)((self + 0x00006BA0) + 0x1c) = 0;
  code_0803EE94_Sub_0805E824((self + 0x00006BC0), 0x00006BA0, 0, (0x80 << 1));
  *(u32 *)((self + 0x00006BC0) + 0x18) = 0;
  *(u32 *)((self + 0x00006BC0) + 0x1c) = 0;
  code_0803EE94_Sub_0805E824((self + 0x00006BE0), 0x00006BE0, 1, (0x80 << 1));
  *(u32 *)((self + 0x00006BE0) + 0x18) = 0;
  *(u32 *)((self + 0x00006BE0) + 0x1c) = 0;
  code_0803EE94_Sub_0805E824((self + (0xd8 << 7)), 0x00006BE0, 4, (0x80 << 1));
  *(u32 *)((self + (0xd8 << 7)) + 0x18) = 0;
  *(u32 *)((self + (0xd8 << 7)) + 0x1c) = 0;
  code_0803EE94_Sub_0805E824((self + 0x00006C20), 0x00006C20, 7, (0x80 << 1));
  *(u32 *)((self + 0x00006C20) + 0x18) = 0;
  *(u32 *)((self + 0x00006C20) + 0x1c) = 0;
  code_0803EE94_Sub_0805E824((self + 0x00006C40), 0x00006C20, 0, (0x80 << 1));
  *(u32 *)((self + 0x00006C40) + 0x18) = 0;
  *(u32 *)((self + 0x00006C40) + 0x1c) = 0;
  hardware_Sub_08007874((self + 0x00006C70), 0x00006C70, 0, (0x80 << 1));
  hardware_Sub_08007A28((self + 0x00006C70), 0, (0xc0 << 2), (0x80 << 1));
  hardware_Sub_08007128((self + 0x00006C74), 0, (0xc0 << 2), (0x80 << 1));
  hardware_Sub_080071BC((self + 0x00006C74), 9, 7, (0x80 << 1));
  hardware_Sub_08007874((self + 0x00006C78), 0x00006C78, 7, (0x80 << 1));
  hardware_Sub_08007B54((self + 0x00006C78), 4, 7, (0x80 << 1));
  *(u32 *)((self + 0x00006C78) + 4) = hardware_Sub_08007B54((self + 0x00006C78), 4, 7, (0x80 << 1));
  hardware_Sub_08007128((self + (0xd9 << 7)), 4, 7, (0x80 << 1));
  hardware_Sub_0800736C((self + (0xd9 << 7)), 4, 7, (0x80 << 1));
  *(u32 *)((self + (0xd9 << 7)) + 4) = hardware_Sub_0800736C((self + (0xd9 << 7)), 4, 7, (0x80 << 1));
  hardware_Sub_08007874((self + 0x00006C88), 0x00006C88, 7, (0x80 << 1));
  hardware_Sub_08007B54((self + 0x00006C88), 4, 7, (0x80 << 1));
  *(u32 *)((self + 0x00006C88) + 4) = hardware_Sub_08007B54((self + 0x00006C88), 4, 7, (0x80 << 1));
  hardware_Sub_08007128((self + 0x00006C90), 4, 7, (0x80 << 1));
  hardware_Sub_0800736C((self + 0x00006C90), 4, 7, (0x80 << 1));
  *(u32 *)((self + 0x00006C90) + 4) = hardware_Sub_0800736C((self + 0x00006C90), 4, 7, (0x80 << 1));
  hardware_Sub_08007874((self + 0x00006C98), 0x00006C98, 7, (0x80 << 1));
  hardware_Sub_08007B54((self + 0x00006C98), 4, 7, (0x80 << 1));
  *(u32 *)((self + 0x00006C98) + 4) = hardware_Sub_08007B54((self + 0x00006C98), 4, 7, (0x80 << 1));
  hardware_Sub_08007128((self + 0x00006CA0), 4, 7, (0x80 << 1));
  hardware_Sub_0800736C((self + 0x00006CA0), 4, 7, (0x80 << 1));
  *(u32 *)((self + 0x00006CA0) + 4) = hardware_Sub_0800736C((self + 0x00006CA0), 4, 7, (0x80 << 1));
  hardware_Sub_08007874((self + 0x00006CA8), 0x00006CA8, 7, (0x80 << 1));
  hardware_Sub_08007B54((self + 0x00006CA8), 4, 7, (0x80 << 1));
  *(u32 *)((self + 0x00006CA8) + 4) = hardware_Sub_08007B54((self + 0x00006CA8), 4, 7, (0x80 << 1));
  hardware_Sub_08007874((self + 0x00006CB0), 4, 7, (0x80 << 1));
  hardware_Sub_08007B54((self + 0x00006CB0), 2, 7, (0x80 << 1));
  *(u32 *)((self + 0x00006CB0) + 4) = hardware_Sub_08007B54((self + 0x00006CB0), 2, 7, (0x80 << 1));
  hardware_Sub_08007128((self + 0x00006CB8), 0x00006CB8, 7, (0x80 << 1));
  hardware_Sub_0800736C((self + 0x00006CB8), 0x00006CB8, 7, (0x80 << 1));
  *(u32 *)((self + 0x00006CB8) + 4) = hardware_Sub_0800736C((self + 0x00006CB8), 0x00006CB8, 7, (0x80 << 1));
  hardware_Sub_08007874((self + 0x00006CC0), 0x00006CB8, 7, (0x80 << 1));
  hardware_Sub_08007B54((self + 0x00006CC0), 2, 7, (0x80 << 1));
  *(u32 *)((self + 0x00006CC0) + 4) = hardware_Sub_08007B54((self + 0x00006CC0), 2, 7, (0x80 << 1));
  hardware_Sub_08007128((self + 0x00006CC8), 0x00006CC8, 7, (0x80 << 1));
  hardware_Sub_0800736C((self + 0x00006CC8), 0x00006CC8, 7, (0x80 << 1));
  *(u32 *)((self + 0x00006CC8) + 4) = hardware_Sub_0800736C((self + 0x00006CC8), 0x00006CC8, 7, (0x80 << 1));
  hardware_Sub_08007874((self + 0x00006CD0), 0x00006CC8, 7, (0x80 << 1));
  hardware_Sub_08007B54((self + 0x00006CD0), 1, 7, (0x80 << 1));
  *(u32 *)((self + 0x00006CD0) + 4) = hardware_Sub_08007B54((self + 0x00006CD0), 1, 7, (0x80 << 1));
  hardware_Sub_08007874((self + 0x00006CD8), 0x00006CD8, 7, (0x80 << 1));
  hardware_Sub_08007B54((self + 0x00006CD8), 1, 7, (0x80 << 1));
  *(u32 *)((self + 0x00006CD8) + 4) = hardware_Sub_08007B54((self + 0x00006CD8), 1, 7, (0x80 << 1));
  hardware_Sub_08007874((self + 0x00006CE0), 1, 7, (0x80 << 1));
  hardware_Sub_08007B54((self + 0x00006CE0), 3, 7, (0x80 << 1));
  *(u32 *)((self + 0x00006CE0) + 4) = hardware_Sub_08007B54((self + 0x00006CE0), 3, 7, (0x80 << 1));
  hardware_Sub_08007128((self + 0x00006CE8), 0x00006CE8, 7, (0x80 << 1));
  hardware_Sub_0800736C((self + 0x00006CE8), 0x00006CE8, 7, (0x80 << 1));
  *(u32 *)((self + 0x00006CE8) + 4) = hardware_Sub_0800736C((self + 0x00006CE8), 0x00006CE8, 7, (0x80 << 1));
  hardware_Sub_08007874((self + 0x00006CF0), 0x00006CE8, 7, (0x80 << 1));
  hardware_Sub_08007B54((self + 0x00006CF0), 5, 7, (0x80 << 1));
  *(u32 *)((self + 0x00006CF0) + 4) = hardware_Sub_08007B54((self + 0x00006CF0), 5, 7, (0x80 << 1));
  hardware_Sub_08007874((self + 0x00006CF8), 0x00006CF8, 7, (0x80 << 1));
  hardware_Sub_08007B54((self + 0x00006CF8), 5, 7, (0x80 << 1));
  *(u32 *)((self + 0x00006CF8) + 4) = hardware_Sub_08007B54((self + 0x00006CF8), 5, 7, (0x80 << 1));
  hardware_Sub_08007128((self + (0xda << 7)), 5, 7, (0x80 << 1));
  hardware_Sub_0800736C((self + (0xda << 7)), 5, 7, (0x80 << 1));
  *(u32 *)((self + (0xda << 7)) + 4) = hardware_Sub_0800736C((self + (0xda << 7)), 5, 7, (0x80 << 1));
  hardware_Sub_08007874((self + 0x00006D08), 0x00006D08, 7, (0x80 << 1));
  hardware_Sub_08007B54((self + 0x00006D08), 6, 7, (0x80 << 1));
  *(u32 *)((self + 0x00006D08) + 4) = hardware_Sub_08007B54((self + 0x00006D08), 6, 7, (0x80 << 1));
  hardware_Sub_08007128((self + 0x00006D10), 6, 7, (0x80 << 1));
  hardware_Sub_0800736C((self + 0x00006D10), 6, 7, (0x80 << 1));
  *(u32 *)((self + 0x00006D10) + 4) = hardware_Sub_0800736C((self + 0x00006D10), 6, 7, (0x80 << 1));
  hardware_Sub_08007874((self + 0x00006D18), 0x00006D18, 7, (0x80 << 1));
  hardware_Sub_08007B54((self + 0x00006D18), 2, 7, (0x80 << 1));
  *(u32 *)((self + 0x00006D18) + 4) = hardware_Sub_08007B54((self + 0x00006D18), 2, 7, (0x80 << 1));
  hardware_Sub_08007128((self + 0x00006D20), 2, 7, (0x80 << 1));
  hardware_Sub_0800736C((self + 0x00006D20), 2, 7, (0x80 << 1));
  *(u32 *)((self + 0x00006D20) + 4) = hardware_Sub_0800736C((self + 0x00006D20), 2, 7, (0x80 << 1));
  *(u32 *)((self + 0x00006D28)) = 0;
  *(u32 *)((self + (0x00006D28 + 4))) = 0;
  *(u8 *)((self + ((0x00006D28 + 4) - 0xbf))) = 0;
  *(u8 *)((self + (((0x00006D28 + 4) - 0xbf) + 1))) = 0;
  return self;
}

/* 0x08000D64 (184B) | intro_scene_AutoPtrFactory (orig: func_08000D64) | origin: wip | domain: intro_scene | HIGH / vtable_algebra */
u32 intro_scene_AutoPtrFactory(u32 *self,int param_2) {
  int iVar1;
  u32 *puVar2;
  int *piVar3;
  piVar3 = (int *)(param_2 + 0x00006D28);
LAB_08000d72:
  iVar1 = *piVar3;
  if (iVar1 != 0) goto code_r0x08000d78;
  intro_scene_AutoPtrFactory_0E1C(param_2);
  iVar1 = 1;
  goto LAB_08000d9a;
code_r0x08000d78:
  if (iVar1 == 1) {
    iVar1 = intro_scene_AutoPtrFactory_0FF8(param_2);
    if (iVar1 == 1) {
      if (*(char *)(param_2 + 0x00006C6E) == '\0') {
        puVar2 = (u32 *)CppRuntime_builtin_new(4);
        *puVar2 = 0x080E59FC;
        *self = puVar2;
      }
      else {
        puVar2 = (u32 *)CppRuntime_builtin_new(4);
        *puVar2 = 0x080E59EC;
        *self = puVar2;
      }
      return self;
    }
    iVar1 = 0;
LAB_08000d9a:
    *piVar3 = iVar1;
  }
  goto LAB_08000d72;
}

/* 0x08000E1C (320B) | intro_scene_AutoPtrFactory_0E1C (orig: func_08000E1C) | origin: wip | domain: intro_scene | HIGH / vtable_algebra */
void intro_scene_AutoPtrFactory_0E1C(int self) {
  short sVar1;
  bool bVar2;
  int iVar3;
  u32 *puVar4;
  u32 uVar5;
  u32 uVar6;
  int *piVar7;
  short *psVar8;
  hardware_Ctor();
  intro_scene_Sub_08000F5C(self);
  iVar3 = hardware_GetField_0x00_8918(self);
  *(u16 *)(iVar3 + 0x50) = 0x3f;
  puVar4 = (u32 *)CppRuntime_builtin_new(0x10);
  uVar5 = hardware_GetField_0x00_8918(self);
  bVar2 = false;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0x080E5B80;
  hardware_Sub_08009300(puVar4 + 3,uVar5);
  hardware_Sub_0800934C(puVar4 + 3,0x00000889,1,0);
  iVar3 = hardware_GetField_0x00_8940(self);
  func_080D3914(iVar3,puVar4,*(u32 *)(*(int *)(iVar3 + 8) + 0x10));
  *(u16 *)(self + 0x00006D32) = 0;
  hardware_Wrap_m4aMPlayStart(self + 8,0);
  psVar8 = (short *)(self + 0x00006D32);
  do {
    hardware_Ctor_87C8(self);
    hardware_Sub_080088B8(self);
    sVar1 = *psVar8;
    if (sVar1 == 1) {
      piVar7 = (int *)(self + 0x00006D2C);
      *piVar7 = *piVar7 + -1;
      uVar6 = hardware_GetField_0x00_88CC(self);
      if ((uVar6 & 8) != 0) {
        *piVar7 = 0;
      }
      if (*piVar7 < 1) {
        hardware_Sub_08009378(puVar4 + 3,0x00000889,1,0);
        iVar3 = hardware_GetField_0x00_8940(self);
        func_080D3914(iVar3,puVar4,*(u32 *)(*(int *)(iVar3 + 8) + 0x10));
        *psVar8 = 2;
      }
    }
    else if (sVar1 < 2) {
      if ((sVar1 == 0) && (-1 < (int)(-*puVar4 | *puVar4))) {
        *(u32 *)(self + 0x00006D2C) = 0x78;
        *psVar8 = 1;
      }
    }
    else if ((sVar1 == 2) && (-1 < (int)(-*puVar4 | *puVar4))) {
      bVar2 = true;
    }
  } while (!bVar2);
  if (puVar4 != (u32 *)0x0) {
    func_080D3914(puVar4,3,*(u32 *)(puVar4[2] + 0xc));
  }
}

/* 0x08000F5C (156B) | intro_scene_Sub_08000F5C (orig: func_08000F5C) | origin: wip | domain: intro_scene | HIGH / stanhash_map_tu */
void intro_scene_Sub_08000F5C(u32 param_1) {
  u32 uVar1;
  u16 iVar3;
  u16 *puVar2;
  hardware_HW_DMA3SAD_8EB8(0,0x06007FE0,0x20);
  uVar1 = 0x0600F800;
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600F800,0x800);
  System_UnpackData(0x0874E648,0x6000000);
  hardware_HW_DMA3SAD(0x0874EB40,0x5000000,0x20);
  System_UnpackData(0x0874EB60,uVar1);
  puVar2 = (u16)(u16 *)hardware_GetField_0x00_8918(param_1);
  *puVar2 = 0x840;
  iVar3 = hardware_GetField_0x00_8918(param_1);
  *(short *)(iVar3 + 0xe) = (short)0x00001F43;
  iVar3 = hardware_GetField_0x00_8918(param_1);
  *(u16 *)(iVar3 + 0x1c) = 0;
  iVar3 = hardware_GetField_0x00_8918(param_1);
  *(u32 *)(iVar3 + 0x1e) = 0;
}

/* 0x080019D8 (2824B) | intro_scene_Ctor_19D8 (orig: func_080019D8) | origin: wip | domain: intro_scene | HIGH / vtable_algebra */
u32 intro_scene_Ctor_19D8(int self) {
  int iVar1;
  int iVar2;
  u16 *puVar3;
  u32 *puVar4;
  int iVar5;
  int *piVar6;
  u32 uVar7;
  u16 uVar8;
  int iVar9;
  int iVar10;
  u32 uVar11;
  int iVar12;
  u16 *puVar13;
  u32 uVar14;
  short *psVar15;
  u32 *puVar16;
  u16 *puVar17;
  u32 uStack_4;
  u16 *puVar18;
  u16 *puVar19;
  u16 *puVar20;
  u16 *puVar21;
  u16 *puVar22;
  u16 *puVar23;
  u16 *puVar24;
  u16 *puVar25;
  u16 *puVar26;
  u16 *puVar27;
  u16 *puVar28;
  u16 *puVar29;
  u32 *puVar30;
  u32 *puVar31;
  u32 *puVar32;
  u32 *puVar33;
  u32 *puVar34;
  u32 *puVar35;
  u32 *puVar36;
  u32 *puVar37;
  u32 *puVar38;
  u32 *puVar39;
  u32 *puVar40;
  u32 *puVar41;
  u32 *puVar42;
  u32 *puVar43;
  u32 *puVar44;
  u32 *puVar45;
  u8 *puVar46;
  iVar1 = 0xFFFFEFC8;
  puVar17 = (u16 *)(0 + 0xFFFFEFC8);
  puVar18 = (u16 *)(0 + 0xFFFFEFC8);
  puVar19 = (u16 *)(0 + 0xFFFFEFC8);
  puVar20 = (u16 *)(0 + 0xFFFFEFC8);
  puVar21 = (u16 *)(0 + 0xFFFFEFC8);
  puVar22 = (u16 *)(0 + 0xFFFFEFC8);
  puVar23 = (u16 *)(0 + 0xFFFFEFC8);
  puVar24 = (u16 *)(0 + 0xFFFFEFC8);
  puVar25 = (u16 *)(0 + 0xFFFFEFC8);
  puVar26 = (u16 *)(0 + 0xFFFFEFC8);
  puVar27 = (u16 *)(0 + 0xFFFFEFC8);
  puVar28 = (u16 *)(0 + 0xFFFFEFC8);
  puVar29 = (u16 *)(0 + 0xFFFFEFC8);
  puVar30 = (u32 *)(0 + 0xFFFFEFC8);
  puVar31 = (u32 *)(0 + 0xFFFFEFC8);
  puVar32 = (u32 *)(0 + 0xFFFFEFC8);
  puVar33 = (u32 *)(0 + 0xFFFFEFC8);
  puVar34 = (u32 *)(0 + 0xFFFFEFC8);
  puVar35 = (u32 *)(0 + 0xFFFFEFC8);
  puVar36 = (u32 *)(0 + 0xFFFFEFC8);
  puVar37 = (u32 *)(0 + 0xFFFFEFC8);
  puVar38 = (u32 *)(0 + 0xFFFFEFC8);
  puVar39 = (u32 *)(0 + 0xFFFFEFC8);
  puVar40 = (u32 *)(0 + 0xFFFFEFC8);
  puVar41 = (u32 *)(0 + 0xFFFFEFC8);
  puVar42 = (u32 *)(0 + 0xFFFFEFC8);
  puVar43 = (u32 *)(0 + 0xFFFFEFC8);
  puVar44 = (u32 *)(0 + 0xFFFFEFC8);
  puVar45 = (u32 *)(0 + 0xFFFFEFC8);
  puVar46 = 0 + 0xFFFFEFC8;
  hardware_HW_DMA3SAD_8EB8(0,0x06007FE0,0x20);
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600C000,0x1000);
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600D000,0x1000);
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600E000,0x1000);
  hardware_HW_DMA3SAD_8EB8(0xffffffff,0x0600F000,0x1000);
  System_UnpackData(0x0874A9C0,0x6000000);
  hardware_HW_DMA3SAD(0x0874E330,0x5000000,0x200);
  iVar12 = 0;
  *(u8 **)(0 + 0x00001030 + iVar1) = 0 + iVar1;
  *(u8 **)(0 + 0x00001034 + iVar1) = 0 + iVar1;
  *(int *)(0 + 0x0000101C + iVar1) = self + 0x00006BA4;
  *(int *)(0 + iVar1) = self + 0x00006BC4;
  *(int *)(0 + iVar1) = self + 0x00006AA4;
  *(int *)(0 + 0x00001004 + iVar1) = self + 0x00006AC4;
  *(int *)(0 + 0x00001008 + iVar1) = self + 0x00006AE4;
  *(int *)(0 + 0x0000100C + iVar1) = self + 0x00006B04;
  *(int *)(0 + 0x00001010 + iVar1) = self + 0x00006B24;
  *(int *)(0 + 0x00001014 + iVar1) = self + 0x00006B44;
  *(int *)(0 + 0x00001018 + iVar1) = self + 0x00006B84;
  *(int *)(0 + 0x00001024 + iVar1) = self + 0x00006BE4;
  do {
    System_UnpackData(*(u32 *)(iVar12 * 4 + 0x080E8684),puVar46);
    iVar2 = iVar12 * 0x1000;
    iVar10 = 0;
    iVar12 = iVar12 + 1;
    *(int *)(0 + 0x00001028 + iVar1) = self + 0x00006C04;
    *(int *)(0 + 0x0000102C + iVar1) = self + 0x00006C24;
    do {
      iVar9 = iVar10 * 0x40;
      iVar5 = iVar10 * 0x80;
      iVar10 = iVar10 + 1;
      puVar13 = (u16 *)(0 + iVar5 + iVar1);
      puVar3 = (u16 *)(0 + iVar5 + iVar1);
      iVar9 = iVar9 + iVar2 + 0xc000;
      iVar5 = 0x1f;
      do {
        *(u16 *)(iVar9 + 0x6000000) = *puVar3;
        *(u16 *)(iVar9 + 0x06000800) = *puVar13;
        puVar13 = puVar13 + 1;
        puVar3 = puVar3 + 1;
        iVar9 = iVar9 + 2;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    } while (iVar10 < 0x20);
  } while (iVar12 < 4);
  puVar3 = (u16 *)hardware_GetField_0x00_8918(self);
  *puVar17 = 8000;
  *puVar3 = 8000;
  iVar12 = hardware_GetField_0x00_8918(self);
  *puVar18 = (short)0x00005843;
  *(short *)(iVar12 + 8) = (short)0x00005843;
  iVar12 = hardware_GetField_0x00_8918(self);
  *puVar19 = (short)0x00005A42;
  *(short *)(iVar12 + 10) = (short)0x00005A42;
  iVar12 = hardware_GetField_0x00_8918(self);
  *puVar20 = (short)0x00005C41;
  *(short *)(iVar12 + 0xc) = (short)0x00005C41;
  iVar12 = hardware_GetField_0x00_8918(self);
  *puVar21 = (short)0x00005E40;
  *(short *)(iVar12 + 0xe) = (short)0x00005E40;
  iVar12 = hardware_GetField_0x00_8918(self);
  *puVar22 = 0;
  *(u16 *)(iVar12 + 0x10) = 0;
  iVar12 = hardware_GetField_0x00_8918(self);
  *puVar23 = 0;
  *(u16 *)(iVar12 + 0x12) = 0;
  iVar12 = hardware_GetField_0x00_8918(self);
  *puVar24 = 0;
  *(u16 *)(iVar12 + 0x14) = 0;
  iVar12 = hardware_GetField_0x00_8918(self);
  *puVar25 = 0;
  *(u16 *)(iVar12 + 0x16) = 0;
  iVar12 = hardware_GetField_0x00_8918(self);
  *puVar26 = 0;
  *(u16 *)(iVar12 + 0x18) = 0;
  iVar12 = hardware_GetField_0x00_8918(self);
  *puVar27 = 0;
  *(u16 *)(iVar12 + 0x1a) = 0;
  iVar12 = hardware_GetField_0x00_8918(self);
  *puVar28 = 0;
  *(u16 *)(iVar12 + 0x1c) = 0;
  iVar12 = hardware_GetField_0x00_8918(self);
  *puVar29 = 0;
  *(u16 *)(iVar12 + 0x1e) = 0;
  *puVar30 = 0;
  *(u16 *)(0 + iVar1) = 0;
  *(u32 *)(0 + iVar1) = 0;
  *(u16 *)(0 + iVar1) = 0;
  *(u32 *)(0 + iVar1) = 0;
  *(u16 *)(0 + iVar1) = 0;
  *(u32 *)(0 + iVar1) = 0;
  *(u16 *)(*(int *)(0 + 0x00001030 + iVar1) + 4) = 0;
  piVar6 = *(int **)(self + 0x00006BA0);
  func_080D3918(0 + iVar1,piVar6,
                  *(u16 *)
                   (**(int **)(0 + 0x0000101C + iVar1) +
                   (u32)*(u16 *)((u32 *)(self + 0x00006BA0) + 3) * 4),
                  *(u32 *)(*piVar6 + 0x10));
  puVar16 = *(u32 **)(0 + 0x00001034 + iVar1);
  LibC_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar31 = *puVar16;
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(u32 *)(0 + iVar1) = puVar16[3];
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(u32 *)(0 + iVar1) = puVar16[6];
  *(u32 *)((int)&uStack_4 + iVar1) = uVar11;
  hardware_HW_DMA3SAD(*(int *)(0 + iVar1) + 0x120,0x05000320,0xe0);
  uVar8 = 0;
  if (*(int *)(0 + iVar1) != 0) {
    uVar8 = *(u16 *)(0 + iVar1);
  }
  hardware_HW_DMA3SAD(*(int *)(0 + iVar1),0x06010000,uVar8);
  iVar12 = 0x00006C60;
  uVar7 = 0;
  if (*(int *)(0 + iVar1) != 0) {
    uVar7 = (u32)*(u16 *)(0 + iVar1);
  }
  psVar15 = (short *)(self + 0x00006C60);
  *psVar15 = (short)(uVar7 >> 5);
  *(u32 *)(self + 0x00006BB8) = 0x780000;
  *(u32 *)(self + 0x00006BBC) = 0xFFA00000;
  puVar4 = (u32 *)(self + iVar12 + -0xa0);
  piVar6 = (int *)*puVar4;
  func_080D3918(puVar16,piVar6,
                  *(u16 *)
                   (**(int **)(0 + iVar1) + (u32)*(u16 *)(puVar4 + 3) * 4),
                  *(u32 *)(*piVar6 + 0x10));
  LibC_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar32 = *puVar16;
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(u32 *)(0 + iVar1) = puVar16[3];
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(u32 *)(0 + iVar1) = puVar16[6];
  *(u32 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar8 = 0;
  if (*(int *)(0 + iVar1) != 0) {
    uVar8 = *(u16 *)(0 + iVar1);
  }
  hardware_HW_DMA3SAD(*(int *)(0 + iVar1),*psVar15 * 0x20 + 0x06010000,uVar8);
  *(u32 *)(self + 0x00006BD8) = 0x780000;
  *(u32 *)(self + 0x00006BDC) = 0x580000;
  puVar4 = (u32 *)(self + 0x00006AA0);
  code_0803EE94_Sub_0805E860(puVar4,0x160);
  func_080D3918(puVar16,(int *)*puVar4,
                  *(u16 *)
                   (**(int **)(0 + iVar1) + (u32)*(u16 *)(puVar4 + 3) * 4),
                  *(u32 *)(*(int *)*puVar4 + 0x10));
  LibC_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar33 = *puVar16;
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(u32 *)(0 + iVar1) = puVar16[3];
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(u32 *)(0 + iVar1) = puVar16[6];
  *(u32 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(u32 *)(0 + iVar1);
  iVar12 = hardware_Sub_080074C0(self + 0x6c80,*(u32 *)(self + 0x6c84));
  uVar8 = 0;
  if (*(int *)(0 + iVar1) != 0) {
    uVar8 = *(u16 *)(0 + iVar1);
  }
  hardware_HW_DMA3SAD(uVar11,iVar12 * 0x20 + 0x05000200,uVar8);
  *(u32 *)(self + 0x00006AB8) = 0x1080000;
  *(u32 *)(self + 0x00006ABC) = 0x940000;
  puVar4 = (u32 *)(self + 0x00006AC0);
  code_0803EE94_Sub_0805E860(puVar4,0x00000342);
  func_080D3918(puVar16,(int *)*puVar4,
                  *(u16 *)
                   (**(int **)(0 + 0x00001004 + iVar1) +
                   (u32)*(u16 *)(puVar4 + 3) * 4),*(u32 *)(*(int *)*puVar4 + 0x10));
  LibC_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar34 = *puVar16;
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(u32 *)(0 + iVar1) = puVar16[3];
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(u32 *)(0 + iVar1) = puVar16[6];
  *(u32 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(u32 *)(0 + iVar1);
  iVar12 = hardware_Sub_080074C0(self + 0x00006CB8,*(u32 *)(self + 0x00006CB8 + 4));
  uVar8 = 0;
  if (*(int *)(0 + iVar1) != 0) {
    uVar8 = *(u16 *)(0 + iVar1);
  }
  hardware_HW_DMA3SAD(uVar11,iVar12 * 0x20 + 0x05000200,uVar8);
  *(u32 *)(self + 0x00006AD8) = 0x1080000;
  *(u32 *)(self + 0x00006ADC) = 0x940000;
  piVar6 = *(int **)(self + 0x00006AE0);
  func_080D3918(puVar16,piVar6,
                  *(u16 *)
                   (**(int **)(0 + 0x00001008 + iVar1) +
                   (u32)*(u16 *)((u32 *)(self + 0x00006AE0) + 3) * 4),
                  *(u32 *)(*piVar6 + 0x10));
  LibC_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar35 = *puVar16;
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(u32 *)(0 + iVar1) = puVar16[3];
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(u32 *)(0 + iVar1) = puVar16[6];
  *(u32 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(u32 *)(0 + iVar1);
  iVar12 = hardware_Sub_080074C0(self + 0x00006C90,*(u32 *)(self + 0x00006C90 + 4));
  uVar8 = 0;
  if (*(int *)(0 + iVar1) != 0) {
    uVar8 = *(u16 *)(0 + iVar1);
  }
  hardware_HW_DMA3SAD(uVar11,iVar12 * 0x20 + 0x05000200,uVar8);
  *(u32 *)(self + 0x00006AF8) = 0x280000;
  *(u32 *)(self + 0x00006AFC) = 0x540000;
  code_0803EE94_Sub_0805E860((u32 *)(self + 0x6b00),0x000002B2);
  piVar6 = *(int **)(self + 0x6b00);
  func_080D3918(puVar16,piVar6,
                  *(u16 *)
                   (**(int **)(0 + 0x0000100C + iVar1) +
                   (u32)*(u16 *)(self + 0x6b0c) * 4),*(u32 *)(*piVar6 + 0x10));
  LibC_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar36 = *puVar16;
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(u32 *)(0 + iVar1) = puVar16[3];
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(u32 *)(0 + iVar1) = puVar16[6];
  *(u32 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(u32 *)(0 + iVar1);
  iVar12 = hardware_Sub_080074C0(self + 0x00006CA0,*(u32 *)(self + 0x00006CA0 + 4));
  uVar8 = 0;
  if (*(int *)(0 + iVar1) != 0) {
    uVar8 = *(u16 *)(0 + iVar1);
  }
  hardware_HW_DMA3SAD(uVar11,iVar12 * 0x20 + 0x05000200,uVar8);
  *(u32 *)(self + 0x00006B18) = 0x1100000;
  *(u32 *)(self + 0x00006B1C) = 0x940000;
  puVar4 = (u32 *)(self + 0x00006B20);
  code_0803EE94_Sub_0805E860(puVar4,0x00000924);
  func_080D3918(puVar16,(int *)*puVar4,
                  *(u16 *)
                   (**(int **)(0 + 0x00001010 + iVar1) +
                   (u32)*(u16 *)(puVar4 + 3) * 4),*(u32 *)(*(int *)*puVar4 + 0x10));
  LibC_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar37 = *puVar16;
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(u32 *)(0 + iVar1) = puVar16[3];
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(u32 *)(0 + iVar1) = puVar16[6];
  *(u32 *)((int)&uStack_4 + iVar1) = uVar11;
  *(u32 *)(self + 0x00006B38) = 0xFFF00000;
  *(u32 *)(self + 0x00006B3C) = 0x940000;
  puVar4 = (u32 *)(self + 0x00006B40);
  code_0803EE94_Sub_0805E860(puVar4,0x730);
  code_0803EE94_Sub_0805E860(self + 0x00006B60,0x730);
  func_080D3918(puVar16,(int *)*puVar4,
                  *(u16 *)
                   (**(int **)(0 + 0x00001014 + iVar1) +
                   (u32)*(u16 *)(puVar4 + 3) * 4),*(u32 *)(*(int *)*puVar4 + 0x10));
  LibC_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar38 = *puVar16;
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(u32 *)(0 + iVar1) = puVar16[3];
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(u32 *)(0 + iVar1) = puVar16[6];
  *(u32 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(u32 *)(0 + iVar1);
  iVar12 = hardware_Sub_080074C0(self + 0x00006CC8,*(u32 *)(self + 0x00006CC8 + 4));
  uVar8 = 0;
  if (*(int *)(0 + iVar1) != 0) {
    uVar8 = *(u16 *)(0 + iVar1);
  }
  hardware_HW_DMA3SAD(uVar11,iVar12 * 0x20 + 0x05000200,uVar8);
  iVar12 = 0x00006B58;
  *(u32 *)(self + 0x00006B58) = 0x280000;
  *(u32 *)(self + 0x00006B5C) = 0x200000;
  *(u32 *)(self + 0x00006B78) = 0xc80000;
  *(u32 *)(self + iVar12 + 0x24) = 0x200000;
  puVar4 = (u32 *)(self + 0x6b80);
  code_0803EE94_Sub_0805E860(puVar4,0x0000091A);
  piVar6 = *(int **)(0 + 0x00001018 + iVar1);
  func_080D3918(puVar16,(int *)*puVar4,
                  *(u16 *)(*piVar6 + (u32)*(u16 *)(self + 0x6b8c) * 4),
                  *(u32 *)(*(int *)*puVar4 + 0x10));
  LibC_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar39 = *puVar16;
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(u32 *)(0 + iVar1) = puVar16[3];
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(u32 *)(0 + iVar1) = puVar16[6];
  *(u32 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(u32 *)(0 + iVar1);
  iVar12 = hardware_Sub_080074C0(self + 0x00006CE8,*(u32 *)(self + 0x00006CE8 + 4));
  uVar8 = 0;
  if (*(int *)(0 + iVar1) != 0) {
    uVar8 = *(u16 *)(0 + iVar1);
  }
  hardware_HW_DMA3SAD(uVar11,iVar12 * 0x20 + 0x05000200,uVar8);
  uVar11 = *(u32 *)(0 + iVar1);
  iVar12 = hardware_Sub_08007D4C(self + 0x00006CD0,*(u32 *)(self + 0x00006CD0 + 4));
  uVar8 = 0;
  if (*(int *)(0 + iVar1) != 0) {
    uVar8 = *(u16 *)(0 + iVar1);
  }
  hardware_HW_DMA3SAD(uVar11,iVar12 * 0x20 + 0x06010000,uVar8);
  code_0803EE94_Sub_0805E860(puVar4,0x0000091B);
  func_080D3918(puVar16,(int *)*puVar4,
                  *(u16 *)(*piVar6 + (u32)*(u16 *)(self + 0x6b8c) * 4),
                  *(u32 *)(*(int *)*puVar4 + 0x10));
  LibC_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar40 = *puVar16;
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(u32 *)(0 + iVar1) = puVar16[3];
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(u32 *)(0 + iVar1) = puVar16[6];
  *(u32 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(u32 *)(0 + iVar1);
  iVar12 = hardware_Sub_08007D4C(self + 0x00006CD8,*(u32 *)(self + 0x00006CD8 + 4));
  uVar8 = 0;
  if (*(int *)(0 + iVar1) != 0) {
    uVar8 = *(u16 *)(0 + iVar1);
  }
  hardware_HW_DMA3SAD(uVar11,iVar12 * 0x20 + 0x06010000,uVar8);
  code_0803EE94_Sub_0805E860(puVar4,0x0000091C);
  func_080D3918(puVar16,(int *)*puVar4,
                  *(u16 *)
                   (**(int **)(0 + 0x00001018 + iVar1) +
                   (u32)*(u16 *)(self + 0x6b8c) * 4),*(u32 *)(*(int *)*puVar4 + 0x10))
  ;
  LibC_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar41 = *puVar16;
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(u32 *)(0 + iVar1) = puVar16[3];
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(u32 *)(0 + iVar1) = puVar16[6];
  *(u32 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(u32 *)(0 + iVar1);
  iVar12 = hardware_Sub_08007D4C(self + 0x00006CE0,*(u32 *)(self + 0x00006CE0 + 4));
  uVar8 = 0;
  if (*(int *)(0 + iVar1) != 0) {
    uVar8 = *(u16 *)(0 + iVar1);
  }
  hardware_HW_DMA3SAD(uVar11,iVar12 * 0x20 + 0x06010000,uVar8);
  puVar4 = (u32 *)(self + 0x00006BE0);
  code_0803EE94_Sub_0805E860(puVar4,1);
  func_080D3918(puVar16,(int *)*puVar4,
                  *(u16 *)
                   (**(int **)(0 + 0x00001024 + iVar1) +
                   (u32)*(u16 *)(puVar4 + 3) * 4),*(u32 *)(*(int *)*puVar4 + 0x10));
  LibC_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar42 = *puVar16;
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(u32 *)(0 + iVar1) = puVar16[3];
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(u32 *)(0 + iVar1) = puVar16[6];
  *(u32 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(u32 *)(0 + iVar1);
  iVar12 = hardware_Sub_080074C0(self + 0x6d00,*(u32 *)(self + 0x6d04));
  uVar8 = 0;
  if (*(int *)(0 + iVar1) != 0) {
    uVar8 = *(u16 *)(0 + iVar1);
  }
  hardware_HW_DMA3SAD(uVar11,iVar12 * 0x20 + 0x05000200,uVar8);
  uVar11 = *(u32 *)(0 + iVar1);
  iVar12 = hardware_Sub_08007D4C(self + 0x00006CF0,*(u32 *)(self + 0x00006CF0 + 4));
  uVar8 = 0;
  if (*(int *)(0 + iVar1) != 0) {
    uVar8 = *(u16 *)(0 + iVar1);
  }
  hardware_HW_DMA3SAD(uVar11,iVar12 * 0x20 + 0x06010000,uVar8);
  *(u32 *)(self + 0x00006BFC) = 0x700000;
  code_0803EE94_Sub_0805E860((u32 *)(self + 0x6c00),4);
  piVar6 = *(int **)(self + 0x6c00);
  func_080D3918(puVar16,piVar6,
                  *(u16 *)
                   (**(int **)(0 + 0x00001028 + iVar1) +
                   (u32)*(u16 *)(self + 0x6c0c) * 4),*(u32 *)(*piVar6 + 0x10));
  LibC_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar43 = *puVar16;
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(u32 *)(0 + iVar1) = puVar16[3];
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(u32 *)(0 + iVar1) = puVar16[6];
  *(u32 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(u32 *)(0 + iVar1);
  iVar12 = hardware_Sub_08007D4C(self + 0x00006CF8,*(u32 *)(self + 0x00006CF8 + 4));
  uVar8 = 0;
  if (*(int *)(0 + iVar1) != 0) {
    uVar8 = *(u16 *)(0 + iVar1);
  }
  hardware_HW_DMA3SAD(uVar11,iVar12 * 0x20 + 0x06010000,uVar8);
  *(u32 *)(self + 0x00006C1C) = 0x700000;
  piVar6 = *(int **)(self + 0x00006C20);
  func_080D3918(puVar16,piVar6,
                  *(u16 *)
                   (**(int **)(0 + 0x0000102C + iVar1) +
                   (u32)*(u16 *)((u32 *)(self + 0x00006C20) + 3) * 4),
                  *(u32 *)(*piVar6 + 0x10));
  LibC_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar44 = *puVar16;
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(u32 *)(0 + iVar1) = puVar16[3];
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(u32 *)(0 + iVar1) = puVar16[6];
  *(u32 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(u32 *)(0 + iVar1);
  iVar12 = hardware_Sub_080074C0(self + 0x00006D10,*(u32 *)(self + 0x00006D10 + 4));
  uVar8 = 0;
  if (*(int *)(0 + iVar1) != 0) {
    uVar8 = *(u16 *)(0 + iVar1);
  }
  hardware_HW_DMA3SAD(uVar11,iVar12 * 0x20 + 0x05000200,uVar8);
  uVar11 = *(u32 *)(0 + iVar1);
  iVar12 = hardware_Sub_08007D4C(self + 0x00006D08,*(u32 *)(self + 0x00006D08 + 4));
  uVar8 = 0;
  if (*(int *)(0 + iVar1) != 0) {
    uVar8 = *(u16 *)(0 + iVar1);
  }
  hardware_HW_DMA3SAD(uVar11,iVar12 * 0x20 + 0x06010000,uVar8);
  *(u32 *)(self + 0x00006C38) = 0x780000;
  *(u32 *)(self + 0x00006C3C) = 0x900000;
  code_0803EE94_79C8_vfunc_10(puVar16,self + 0x00006A40,0);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar45 = *puVar16;
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(u32 *)(0 + iVar1) = puVar16[3];
  *(u32 *)(0 + iVar1) = uVar11;
  *(u32 *)(0 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(u32 *)(0 + iVar1) = puVar16[6];
  *(u32 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(u32 *)(0 + iVar1);
  iVar12 = hardware_Sub_080074C0(self + 0x00006D20,*(u32 *)(self + 0x00006D20 + 4));
  uVar8 = 0;
  if (*(int *)(0 + iVar1) != 0) {
    uVar8 = *(u16 *)(0 + iVar1);
  }
  hardware_HW_DMA3SAD(uVar11,iVar12 * 0x20 + 0x05000200,uVar8);
  uVar11 = *(u32 *)(0 + iVar1);
  iVar12 = hardware_Sub_08007D4C(self + 0x00006D18,*(u32 *)(self + 0x00006D18 + 4));
  uVar8 = 0;
  if (*(int *)(0 + iVar1) != 0) {
    uVar8 = *(u16 *)(0 + iVar1);
  }
  hardware_HW_DMA3SAD(uVar11,iVar12 * 0x20 + 0x06010000,uVar8);
  *(u32 *)(self + 0x00006C5C) = 0x780000;
  return *(u32 *)((int)&uStack_4 + 0x00001038 + iVar1);
}

/* 0x080024E0 (4096B) | intro_scene_Sub_080024E0 (orig: func_080024E0) | origin: wip | domain: intro_scene | HIGH / stanhash_map_tu */
void intro_scene_Sub_080024E0(int param_1) {
  u32 uVar1;
  int *piVar2;
  int *piVar3;
  u32 uVar4;
  int *piVar5;
  u32 *puVar6;
  char *pcVar7;
  int iVar8;
  u32 *puVar9;
  short *psVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  short sStack_c4;
  short sStack_c2;
  u16 uStack_c0;
  u16 uStack_be;
  u16 uStack_bc;
  u32 uStack_b8;
  u8 uStack_b4;
  u8 uStack_b3;
  u32 uStack_b0;
  u8 uStack_ac;
  int iStack_a8;
  u32 uStack_a4;
  int iStack_a0;
  u32 uStack_9c;
  u32 uStack_98;
  u32 uStack_94;
  u32 uStack_90;
  u32 uStack_8c;
  int iStack_88;
  u32 uStack_84;
  int iStack_80;
  u32 uStack_7c;
  u32 uStack_78;
  u32 uStack_74;
  u32 uStack_70;
  u32 uStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  sStack_c4 = 0;
  sStack_c2 = 0;
  uStack_c0 = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  iStack_a8 = 0;
  uStack_a4 = uStack_a4 & 0xffff0000;
  iStack_a0 = 0;
  uStack_9c = uStack_9c & 0xffff0000;
  uStack_98 = 0;
  uStack_94 = uStack_94 & 0xffff0000;
  uStack_90 = 0;
  uStack_8c = uStack_8c & 0xffff0000;
  puVar6 = (u32 *)(param_1 + 0x00006AB4);
  uVar1 = code_0803EE94_Sub_0805E8F0(param_1 + 0x00006AA0);
  *puVar6 = uVar1;
  puVar6 = (u32 *)(param_1 + 0x00006AD4);
  uVar1 = code_0803EE94_Sub_0805E8F0(param_1 + 0x00006AC0);
  *puVar6 = uVar1;
  puVar6 = (u32 *)(param_1 + 0x00006AF4);
  uVar1 = code_0803EE94_Sub_0805E8F0(param_1 + 0x00006AE0);
  *puVar6 = uVar1;
  puVar6 = (u32 *)(param_1 + 0x00006B14);
  uVar1 = code_0803EE94_Sub_0805E8F0(param_1 + 0x6b00);
  *puVar6 = uVar1;
  puVar6 = (u32 *)(param_1 + 0x00006B34);
  uVar1 = code_0803EE94_Sub_0805E8F0(param_1 + 0x00006B20);
  *puVar6 = uVar1;
  puVar6 = (u32 *)(param_1 + 0x00006B54);
  uVar1 = code_0803EE94_Sub_0805E8F0(param_1 + 0x00006B40);
  *puVar6 = uVar1;
  pcVar7 = (char *)(0x00006C6D + param_1);
  if (*pcVar7 != '\0') {
    puVar6 = (u32 *)(param_1 + 0x00006C20);
    func_080D3918(&iStack_88,(int *)*puVar6,
                    *(u16 *)
                     (*(int *)(param_1 + 0x00006C24) + (u32)*(u16 *)(puVar6 + 3) * 4),
                    *(u32 *)(*(int *)*puVar6 + 0x10));
    LibC_memcpy(&iStack_88,&iStack_88,0x20);
    iStack_a8 = iStack_88;
    uStack_a4 = uStack_84;
    iStack_a0 = iStack_80;
    uStack_9c = uStack_7c;
    uStack_98 = uStack_78;
    uStack_94 = uStack_74;
    uStack_90 = uStack_70;
    uStack_8c = uStack_6c;
    sStack_c4 = *(short *)((int)puVar6 + 0x1a);
    sStack_c2 = *(u16 *)((int)puVar6 + 0x1e);
    uStack_bc = 0;
    uStack_be = hardware_Sub_08007D4C(param_1 + 0x00006D08,*(u32 *)(param_1 + 0x00006D08 + 4));
    uStack_c0 = hardware_Sub_080074C0(param_1 + 0x00006D10,*(u32 *)(param_1 + 0x00006D10 + 4));
    uStack_ac = 1;
    uVar1 = hardware_GetField_0x00_8920(param_1);
    uVar4 = 0;
    if (iStack_a8 != 0) {
      uVar4 = uStack_a4 & 0xffff;
    }
    code_0803EE94_Sub_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
    puVar6 = (u32 *)(param_1 + 0x00006BF4);
    puVar9 = (u32 *)(param_1 + 0x00006BE0);
    uVar1 = code_0803EE94_Sub_0805E8F0(puVar9);
    *puVar6 = uVar1;
    func_080D3918(&iStack_88,(int *)*puVar9,
                    *(u16 *)
                     (*(int *)(param_1 + 0x00006BE4) + (u32)*(u16 *)(puVar9 + 3) * 4),
                    *(u32 *)(*(int *)*puVar9 + 0x10));
    LibC_memcpy(&iStack_88,&iStack_88,0x20);
    iStack_a8 = iStack_88;
    uStack_a4 = uStack_84;
    iStack_a0 = iStack_80;
    uStack_9c = uStack_7c;
    uStack_98 = uStack_78;
    uStack_94 = uStack_74;
    uStack_90 = uStack_70;
    uStack_8c = uStack_6c;
    sStack_c4 = *(short *)((int)puVar9 + 0x1a);
    sStack_c2 = *(u16 *)((int)puVar9 + 0x1e);
    uStack_be = hardware_Sub_08007D4C(param_1 + 0x00006CF0,*(u32 *)(param_1 + 0x00006CF0 + 4));
    uStack_c0 = hardware_Sub_080074C0(param_1 + 0x6d00,*(u32 *)(param_1 + 0x6d04));
    uVar1 = hardware_GetField_0x00_8920(param_1);
    uVar4 = 0;
    if (iStack_a8 != 0) {
      uVar4 = uStack_a4 & 0xffff;
    }
    code_0803EE94_Sub_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
    if (*pcVar7 == '\x02') {
      puVar6 = (u32 *)(param_1 + 0x00006C14);
      uVar1 = code_0803EE94_Sub_0805E8F0((u32 *)(param_1 + 0x6c00));
      *puVar6 = uVar1;
      piVar2 = *(int **)(param_1 + 0x6c00);
      func_080D3918(&iStack_88,piVar2,
                      *(u16 *)
                       (*(int *)(param_1 + 0x00006C04) + (u32)*(u16 *)(param_1 + 0x6c0c) * 4)
                      ,*(u32 *)(*piVar2 + 0x10));
      LibC_memcpy(&iStack_88,&iStack_88,0x20);
      iStack_a8 = iStack_88;
      uStack_a4 = uStack_84;
      iStack_a0 = iStack_80;
      uStack_9c = uStack_7c;
      uStack_98 = uStack_78;
      uStack_94 = uStack_74;
      uStack_90 = uStack_70;
      uStack_8c = uStack_6c;
      sStack_c4 = *(short *)(param_1 + 0x6c1a);
      sStack_c2 = *(u16 *)(param_1 + 0x6c1e);
      uStack_be = hardware_Sub_08007D4C(param_1 + 0x00006CF8,*(u32 *)(param_1 + 0x00006CF8 + 4)
                               );
      uStack_c0 = hardware_Sub_080074C0(param_1 + 0x6d00,*(u32 *)(param_1 + 0x6d04));
      uVar1 = hardware_GetField_0x00_8920(param_1);
      uVar4 = 0;
      if (iStack_a8 != 0) {
        uVar4 = uStack_a4 & 0xffff;
      }
      code_0803EE94_Sub_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
    }
    puVar6 = (u32 *)(param_1 + 0x00006C40);
    code_0803EE94_Sub_0805E8F0(puVar6);
    func_080D3918(&iStack_88,(int *)*puVar6,
                    *(u16 *)
                     (*(int *)(param_1 + 0x00006C44) + (u32)*(u16 *)(puVar6 + 3) * 4),
                    *(u32 *)(*(int *)*puVar6 + 0x10));
    LibC_memcpy(&iStack_88,&iStack_88,0x20);
    iStack_a8 = iStack_88;
    uStack_a4 = uStack_84;
    iStack_a0 = iStack_80;
    uStack_9c = uStack_7c;
    uStack_98 = uStack_78;
    uStack_94 = uStack_74;
    uStack_90 = uStack_70;
    uStack_8c = uStack_6c;
    sStack_c4 = *(short *)((int)puVar6 + 0x1a);
    sStack_c2 = *(u16 *)((int)puVar6 + 0x1e);
    uStack_be = hardware_Sub_08007D4C(param_1 + 0x00006D18,*(u32 *)(param_1 + 0x00006D18 + 4));
    uStack_c0 = hardware_Sub_080074C0(param_1 + 0x00006D20,*(u32 *)(param_1 + 0x00006D20 + 4));
    uVar1 = hardware_GetField_0x00_8920(param_1);
    uVar4 = 0;
    if (iStack_a8 != 0) {
      uVar4 = uStack_a4 & 0xffff;
    }
    code_0803EE94_Sub_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
  }
  puVar6 = (u32 *)(param_1 + 0x00006BA0);
  func_080D3918(&iStack_88,(int *)*puVar6,
                  *(u16 *)
                   (*(int *)(param_1 + 0x00006BA4) + (u32)*(u16 *)(puVar6 + 3) * 4),
                  *(u32 *)(*(int *)*puVar6 + 0x10));
  LibC_memcpy(&iStack_88,&iStack_88,0x20);
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  iStack_a0 = iStack_80;
  uStack_9c = uStack_7c;
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  uStack_90 = uStack_70;
  uStack_8c = uStack_6c;
  sStack_c4 = *(short *)((int)puVar6 + 0x1a);
  sStack_c2 = *(u16 *)((int)puVar6 + 0x1e);
  uStack_bc = 0;
  uStack_be = 0;
  uStack_c0 = 0;
  uStack_ac = 1;
  uVar1 = hardware_GetField_0x00_8920(param_1);
  uVar4 = 0;
  if (iStack_a8 != 0) {
    uVar4 = uStack_a4 & 0xffff;
  }
  code_0803EE94_Sub_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
  if (9 < *(short *)(param_1 + 0x00006D32)) {
    iVar8 = hardware_GetField_0x00_8920(param_1);
    psVar10 = (short *)(param_1 + 0x00006C64);
    *(short *)(iVar8 + 10) = *psVar10;
    *(short *)(iVar8 + 0x12) = psVar10[1];
    *(short *)(iVar8 + 0x1a) = psVar10[2];
    *(short *)(iVar8 + 0x22) = psVar10[3];
    puVar6 = (u32 *)(0x00006BC0 + param_1);
    func_080D3918(&iStack_88,(int *)*puVar6,
                    *(u16 *)
                     (*(int *)(param_1 + 0x00006BC4) + (u32)*(u16 *)(puVar6 + 3) * 4),
                    *(u32 *)(*(int *)*puVar6 + 0x10));
    LibC_memcpy(&iStack_88,&iStack_88,0x20);
    iStack_a8 = iStack_88;
    uStack_a4 = uStack_84;
    iStack_a0 = iStack_80;
    uStack_9c = uStack_7c;
    uStack_98 = uStack_78;
    uStack_94 = uStack_74;
    uStack_90 = uStack_70;
    uStack_8c = uStack_6c;
    sStack_c4 = *(short *)((int)puVar6 + 0x1a);
    sStack_c2 = *(u16 *)((int)puVar6 + 0x1e);
    uStack_bc = 0;
    uStack_be = *(u16 *)(param_1 + 0x00006C60);
    uStack_c0 = 0;
    uStack_b3 = 0;
    if ((*psVar10 == 0x100) && (*(short *)(param_1 + 0x00006C6A) == 0x100)) {
      uStack_b0 = 0;
    }
    else {
      uStack_b0 = 1;
    }
    uStack_ac = 1;
  }
  puVar6 = (u32 *)(param_1 + 0x00006AA0);
  func_080D3918(&iStack_88,(int *)*puVar6,
                  *(u16 *)
                   (*(int *)(param_1 + 0x00006AA4) + (u32)*(u16 *)(puVar6 + 3) * 4),
                  *(u32 *)(*(int *)*puVar6 + 0x10));
  LibC_memcpy(&iStack_88,&iStack_88,0x20);
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  iStack_a0 = iStack_80;
  uStack_9c = uStack_7c;
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  uStack_90 = uStack_70;
  uStack_8c = uStack_6c;
  sStack_c4 = *(short *)((int)puVar6 + 0x1a);
  sStack_c2 = *(short *)((int)puVar6 + 0x1e);
  uStack_bc = 0;
  iVar8 = param_1 + 0x00006C78;
  uStack_be = hardware_Sub_08007D4C(iVar8,*(u32 *)(iVar8 + 4));
  uStack_c0 = hardware_Sub_080074C0(param_1 + 0x6c80,*(u32 *)(param_1 + 0x6c84));
  uStack_b0 = 0;
  uStack_ac = 1;
  piStack_38 = (int *)(param_1 + 0x00006AC4);
  piStack_34 = (int *)(param_1 + 0x00006AE4);
  piStack_30 = (int *)(param_1 + 0x00006B04);
  piStack_2c = (int *)(param_1 + 0x00006B24);
  if ((int)((u32)*(u8 *)(param_1 + 0x00006AB4) * 0x40000000) < 0) {
    piVar2 = (int *)hardware_GetField_0x00_8910(param_1);
    iVar11 = iStack_a0;
    iVar8 = hardware_Sub_08007D4C(iVar8,*(u32 *)(iVar8 + 4));
    uVar4 = 0;
    if (iStack_a0 != 0) {
      uVar4 = uStack_9c & 0xffff;
    }
    piStack_28 = piVar2;
    hardware_Sub_08008F0C(&iStack_88,iVar11,iVar8 * 0x20 + 0x06010000,uVar4);
    piVar3 = (int *)piVar2[1];
    if (piVar3 == (int *)piVar2[3]) {
      iStack_64 = 1;
      iStack_68 = (int)piVar3 - *piStack_28 >> 4;
      piVar2 = &iStack_68;
      if (iStack_68 == 0) {
        piVar2 = &iStack_64;
      }
      if (iStack_68 + *piVar2 == 0) {
        piStack_24 = (int *)0x0;
        iVar8 = 0;
      }
      else {
        iVar8 = (iStack_68 + *piVar2) * 0x10;
        piStack_24 = (int *)LibC_malloc(iVar8);
        if (piStack_24 == (int *)0x0) {
          piStack_24 = (int *)code_linkonce_Sub_080D3BC0(iVar8);
        }
      }
      piStack_38 = (int *)(param_1 + 0x00006AC4);
      piStack_34 = (int *)(param_1 + 0x00006AE4);
      piStack_30 = (int *)(param_1 + 0x00006B04);
      piStack_2c = (int *)(param_1 + 0x00006B24);
      piVar5 = piStack_24;
      for (piVar2 = (int *)*piStack_28; piVar2 != piVar3; piVar2 = piVar2 + 4) {
        if (piVar5 != (int *)0x0) {
          iVar11 = piVar2[1];
          iVar13 = piVar2[2];
          *piVar5 = *piVar2;
          piVar5[1] = iVar11;
          piVar5[2] = iVar13;
          piVar5[3] = piVar2[3];
        }
        piVar5 = piVar5 + 4;
      }
      iVar11 = iStack_64;
      if (iStack_64 == 1) {
        if (piVar5 != (int *)0x0) {
          *piVar5 = iStack_88;
          piVar5[1] = uStack_84;
          piVar5[2] = iStack_80;
          piVar5[3] = uStack_7c;
        }
        piVar5 = piVar5 + 4;
      }
      else {
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (piVar5 != (int *)0x0) {
            *piVar5 = iStack_88;
            piVar5[1] = uStack_84;
            piVar5[2] = iStack_80;
            piVar5[3] = uStack_7c;
          }
          piVar5 = piVar5 + 4;
        }
      }
      for (iVar11 = *piStack_28; iVar11 != piStack_28[1]; iVar11 = iVar11 + 0x10) {
      }
      if (*piStack_28 != 0) {
        LibC_free();
      }
      *piStack_28 = (int)piStack_24;
      piStack_28[1] = (int)piVar5;
      piStack_28[3] = (int)piStack_24 + iVar8;
    }
    else {
      if (piVar3 != (int *)0x0) {
        *piVar3 = iStack_88;
        piVar3[1] = uStack_84;
        piVar3[2] = iStack_80;
        piVar3[3] = uStack_7c;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
  }
  uVar1 = hardware_GetField_0x00_8920(param_1);
  uVar4 = 0;
  if (iStack_a8 != 0) {
    uVar4 = uStack_a4 & 0xffff;
  }
  code_0803EE94_Sub_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
  intro_scene_Sub_080035C0(param_1,(int)sStack_c4,(int)sStack_c2,1);
  puVar6 = (u32 *)(param_1 + 0x00006AC0);
  func_080D3918(&iStack_88,(int *)*puVar6,
                  *(u16 *)(*piStack_38 + (u32)*(u16 *)(puVar6 + 3) * 4),
                  *(u32 *)(*(int *)*puVar6 + 0x10));
  LibC_memcpy(&iStack_88,&iStack_88,0x20);
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  iStack_a0 = iStack_80;
  uStack_9c = uStack_7c;
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  uStack_90 = uStack_70;
  uStack_8c = uStack_6c;
  sStack_c4 = *(short *)((int)puVar6 + 0x1a);
  sStack_c2 = *(short *)((int)puVar6 + 0x1e);
  uStack_bc = 0;
  iVar8 = param_1 + 0x00006CB0;
  uStack_be = hardware_Sub_08007D4C(iVar8,*(u32 *)(iVar8 + 4));
  uStack_c0 = hardware_Sub_080074C0(param_1 + 0x00006CB8,*(u32 *)(param_1 + 0x00006CB8 + 4));
  uStack_ac = 1;
  if ((int)((u32)*(u8 *)(param_1 + 0x00006AD4) * 0x40000000) < 0) {
    piVar2 = (int *)hardware_GetField_0x00_8910(param_1);
    iVar11 = iStack_a0;
    iVar8 = hardware_Sub_08007D4C(iVar8,*(u32 *)(iVar8 + 4));
    uVar4 = 0;
    if (iStack_a0 != 0) {
      uVar4 = uStack_9c & 0xffff;
    }
    piStack_28 = piVar2;
    hardware_Sub_08008F0C(&iStack_88,iVar11,iVar8 * 0x20 + 0x06010000,uVar4);
    piVar3 = (int *)piVar2[1];
    if (piVar3 == (int *)piVar2[3]) {
      iStack_5c = 1;
      iStack_60 = (int)piVar3 - *piStack_28 >> 4;
      piVar2 = &iStack_60;
      if (iStack_60 == 0) {
        piVar2 = &iStack_5c;
      }
      if (iStack_60 + *piVar2 == 0) {
        piVar2 = (int *)0x0;
        iVar8 = 0;
      }
      else {
        iVar8 = (iStack_60 + *piVar2) * 0x10;
        piVar2 = (int *)LibC_malloc(iVar8);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)code_linkonce_Sub_080D3BC0(iVar8);
        }
      }
      piVar12 = piVar2;
      for (piVar5 = (int *)*piStack_28; piVar5 != piVar3; piVar5 = piVar5 + 4) {
        if (piVar12 != (int *)0x0) {
          iVar11 = piVar5[1];
          iVar13 = piVar5[2];
          *piVar12 = *piVar5;
          piVar12[1] = iVar11;
          piVar12[2] = iVar13;
          piVar12[3] = piVar5[3];
        }
        piVar12 = piVar12 + 4;
      }
      iVar11 = iStack_5c;
      if (iStack_5c == 1) {
        if (piVar12 != (int *)0x0) {
          *piVar12 = iStack_88;
          piVar12[1] = uStack_84;
          piVar12[2] = iStack_80;
          piVar12[3] = uStack_7c;
        }
        piVar12 = piVar12 + 4;
      }
      else {
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (piVar12 != (int *)0x0) {
            *piVar12 = iStack_88;
            piVar12[1] = uStack_84;
            piVar12[2] = iStack_80;
            piVar12[3] = uStack_7c;
          }
          piVar12 = piVar12 + 4;
        }
      }
      for (iVar11 = *piStack_28; iVar11 != piStack_28[1]; iVar11 = iVar11 + 0x10) {
      }
      piStack_24 = piVar2;
      if (*piStack_28 != 0) {
        LibC_free();
      }
      *piStack_28 = (int)piStack_24;
      piStack_28[1] = (int)piVar12;
      piStack_28[3] = (int)piStack_24 + iVar8;
    }
    else {
      if (piVar3 != (int *)0x0) {
        *piVar3 = iStack_88;
        piVar3[1] = uStack_84;
        piVar3[2] = iStack_80;
        piVar3[3] = uStack_7c;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
  }
  uVar1 = hardware_GetField_0x00_8920(param_1);
  uVar4 = 0;
  if (iStack_a8 != 0) {
    uVar4 = uStack_a4 & 0xffff;
  }
  code_0803EE94_Sub_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
  intro_scene_Sub_080035C0(param_1,(int)sStack_c4,(int)sStack_c2,0);
  if (*(char *)(param_1 + 0x00006C6C) != '\0') {
    puVar6 = (u32 *)(param_1 + 0x00006B40);
    func_080D3918(&iStack_88,(int *)*puVar6,
                    *(u16 *)
                     (*(int *)(param_1 + 0x00006B44) + (u32)*(u16 *)(puVar6 + 3) * 4),
                    *(u32 *)(*(int *)*puVar6 + 0x10));
    LibC_memcpy(&iStack_88,&iStack_88,0x20);
    iStack_a8 = iStack_88;
    uStack_a4 = uStack_84;
    iStack_a0 = iStack_80;
    uStack_9c = uStack_7c;
    uStack_98 = uStack_78;
    uStack_94 = uStack_74;
    uStack_90 = uStack_70;
    uStack_8c = uStack_6c;
    sStack_c4 = *(short *)((int)puVar6 + 0x1a);
    sStack_c2 = *(short *)((int)puVar6 + 0x1e);
    uStack_bc = 0;
    iVar8 = param_1 + 0x00006CC0;
    uStack_be = hardware_Sub_08007D4C(iVar8,*(u32 *)(iVar8 + 4));
    uStack_c0 = hardware_Sub_080074C0(param_1 + 0x00006CC8,*(u32 *)(param_1 + 0x00006CC8 + 4));
    uStack_ac = 1;
    if ((int)((u32)*(u8 *)(param_1 + 0x00006B54) * 0x40000000) < 0) {
      piVar2 = (int *)hardware_GetField_0x00_8910(param_1);
      iVar11 = iStack_a0;
      iVar8 = hardware_Sub_08007D4C(iVar8,*(u32 *)(iVar8 + 4));
      uVar4 = 0;
      if (iStack_a0 != 0) {
        uVar4 = uStack_9c & 0xffff;
      }
      piStack_28 = piVar2;
      hardware_Sub_08008F0C(&iStack_88,iVar11,iVar8 * 0x20 + 0x06010000,uVar4);
      piVar3 = (int *)piVar2[1];
      if (piVar3 == (int *)piVar2[3]) {
        iStack_54 = 1;
        iStack_58 = (int)piVar3 - *piStack_28 >> 4;
        piVar2 = &iStack_58;
        if (iStack_58 == 0) {
          piVar2 = &iStack_54;
        }
        if (iStack_58 + *piVar2 == 0) {
          piVar2 = (int *)0x0;
          iVar8 = 0;
        }
        else {
          iVar8 = (iStack_58 + *piVar2) * 0x10;
          piVar2 = (int *)LibC_malloc(iVar8);
          if (piVar2 == (int *)0x0) {
            piVar2 = (int *)code_linkonce_Sub_080D3BC0(iVar8);
          }
        }
        piVar12 = piVar2;
        for (piVar5 = (int *)*piStack_28; piVar5 != piVar3; piVar5 = piVar5 + 4) {
          if (piVar12 != (int *)0x0) {
            iVar11 = piVar5[1];
            iVar13 = piVar5[2];
            *piVar12 = *piVar5;
            piVar12[1] = iVar11;
            piVar12[2] = iVar13;
            piVar12[3] = piVar5[3];
          }
          piVar12 = piVar12 + 4;
        }
        iVar11 = iStack_54;
        if (iStack_54 == 1) {
          if (piVar12 != (int *)0x0) {
            *piVar12 = iStack_88;
            piVar12[1] = uStack_84;
            piVar12[2] = iStack_80;
            piVar12[3] = uStack_7c;
          }
          piVar12 = piVar12 + 4;
        }
        else {
          for (; iVar11 != 0; iVar11 = iVar11 + -1) {
            if (piVar12 != (int *)0x0) {
              *piVar12 = iStack_88;
              piVar12[1] = uStack_84;
              piVar12[2] = iStack_80;
              piVar12[3] = uStack_7c;
            }
            piVar12 = piVar12 + 4;
          }
        }
        for (iVar11 = *piStack_28; iVar11 != piStack_28[1]; iVar11 = iVar11 + 0x10) {
        }
        piStack_24 = piVar2;
        if (*piStack_28 != 0) {
          LibC_free();
        }
        *piStack_28 = (int)piStack_24;
        piStack_28[1] = (int)piVar12;
        piStack_28[3] = (int)piStack_24 + iVar8;
      }
      else {
        if (piVar3 != (int *)0x0) {
          *piVar3 = iStack_88;
          piVar3[1] = uStack_84;
          piVar3[2] = iStack_80;
          piVar3[3] = uStack_7c;
        }
        piStack_28[1] = piStack_28[1] + 0x10;
      }
    }
    uVar1 = hardware_GetField_0x00_8920(param_1);
    uVar4 = 0;
    if (iStack_a8 != 0) {
      uVar4 = uStack_a4 & 0xffff;
    }
    code_0803EE94_Sub_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
    if (sStack_c2 == 0x94) {
      intro_scene_Sub_080035C0(param_1,(int)sStack_c4,0x94,0);
    }
    sStack_c4 = *(short *)(param_1 + 0x00006B60 + 0x1a);
    sStack_c2 = *(short *)(param_1 + 0x00006B60 + 0x1e);
    uVar1 = hardware_GetField_0x00_8920(param_1);
    uVar4 = 0;
    if (iStack_a8 != 0) {
      uVar4 = uStack_a4 & 0xffff;
    }
    code_0803EE94_Sub_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
    if (sStack_c2 == 0x94) {
      intro_scene_Sub_080035C0(param_1,(int)sStack_c4,0x94,0);
    }
  }
  puVar6 = (u32 *)(param_1 + 0x00006AE0);
  func_080D3918(&iStack_88,(int *)*puVar6,
                  *(u16 *)(*piStack_34 + (u32)*(u16 *)(puVar6 + 3) * 4),
                  *(u32 *)(*(int *)*puVar6 + 0x10));
  LibC_memcpy(&iStack_88,&iStack_88,0x20);
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  iStack_a0 = iStack_80;
  uStack_9c = uStack_7c;
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  uStack_90 = uStack_70;
  uStack_8c = uStack_6c;
  sStack_c4 = *(short *)((int)puVar6 + 0x1a) - *(short *)(param_1 + 0x00006D30);
  sStack_c2 = *(short *)((int)puVar6 + 0x1e);
  uStack_bc = 0;
  iVar8 = param_1 + 0x00006C88;
  uStack_be = hardware_Sub_08007D4C(iVar8,*(u32 *)(iVar8 + 4));
  uStack_c0 = hardware_Sub_080074C0(param_1 + 0x00006C90,*(u32 *)(param_1 + 0x00006C90 + 4));
  uStack_ac = 1;
  if ((int)((u32)*(u8 *)(param_1 + 0x00006AF4) * 0x40000000) < 0) {
    piVar2 = (int *)hardware_GetField_0x00_8910(param_1);
    iVar11 = iStack_a0;
    iVar8 = hardware_Sub_08007D4C(iVar8,*(u32 *)(iVar8 + 4));
    uVar4 = 0;
    if (iStack_a0 != 0) {
      uVar4 = uStack_9c & 0xffff;
    }
    piStack_28 = piVar2;
    hardware_Sub_08008F0C(&iStack_88,iVar11,iVar8 * 0x20 + 0x06010000,uVar4);
    piVar3 = (int *)piVar2[1];
    if (piVar3 == (int *)piVar2[3]) {
      iStack_4c = 1;
      iStack_50 = (int)piVar3 - *piStack_28 >> 4;
      piVar2 = &iStack_50;
      if (iStack_50 == 0) {
        piVar2 = &iStack_4c;
      }
      if (iStack_50 + *piVar2 == 0) {
        piVar2 = (int *)0x0;
        iVar8 = 0;
      }
      else {
        iVar8 = (iStack_50 + *piVar2) * 0x10;
        piVar2 = (int *)LibC_malloc(iVar8);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)code_linkonce_Sub_080D3BC0(iVar8);
        }
      }
      piVar12 = piVar2;
      for (piVar5 = (int *)*piStack_28; piVar5 != piVar3; piVar5 = piVar5 + 4) {
        if (piVar12 != (int *)0x0) {
          iVar11 = piVar5[1];
          iVar13 = piVar5[2];
          *piVar12 = *piVar5;
          piVar12[1] = iVar11;
          piVar12[2] = iVar13;
          piVar12[3] = piVar5[3];
        }
        piVar12 = piVar12 + 4;
      }
      iVar11 = iStack_4c;
      if (iStack_4c == 1) {
        if (piVar12 != (int *)0x0) {
          *piVar12 = iStack_88;
          piVar12[1] = uStack_84;
          piVar12[2] = iStack_80;
          piVar12[3] = uStack_7c;
        }
        piVar12 = piVar12 + 4;
      }
      else {
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (piVar12 != (int *)0x0) {
            *piVar12 = iStack_88;
            piVar12[1] = uStack_84;
            piVar12[2] = iStack_80;
            piVar12[3] = uStack_7c;
          }
          piVar12 = piVar12 + 4;
        }
      }
      for (iVar11 = *piStack_28; iVar11 != piStack_28[1]; iVar11 = iVar11 + 0x10) {
      }
      piStack_24 = piVar2;
      if (*piStack_28 != 0) {
        LibC_free();
      }
      *piStack_28 = (int)piStack_24;
      piStack_28[1] = (int)piVar12;
      piStack_28[3] = (int)piStack_24 + iVar8;
    }
    else {
      if (piVar3 != (int *)0x0) {
        *piVar3 = iStack_88;
        piVar3[1] = uStack_84;
        piVar3[2] = iStack_80;
        piVar3[3] = uStack_7c;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
  }
  uVar1 = hardware_GetField_0x00_8920(param_1);
  uVar4 = 0;
  if (iStack_a8 != 0) {
    uVar4 = uStack_a4 & 0xffff;
  }
  code_0803EE94_Sub_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
  intro_scene_Sub_080035C0(param_1,(int)sStack_c4,(int)sStack_c2,2);
  func_080D3918(&iStack_88,*(int **)(param_1 + 0x6b00),
                  *(u16 *)(*piStack_30 + (u32)*(u16 *)(param_1 + 0x6b0c) * 4),
                  *(u32 *)(**(int **)(param_1 + 0x6b00) + 0x10));
  LibC_memcpy(&iStack_88,&iStack_88,0x20);
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  iStack_a0 = iStack_80;
  uStack_9c = uStack_7c;
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  uStack_90 = uStack_70;
  uStack_8c = uStack_6c;
  sStack_c4 = *(short *)(param_1 + 0x6b1a);
  sStack_c2 = *(short *)(param_1 + 0x6b1e);
  uStack_bc = 0;
  iVar8 = param_1 + 0x00006C98;
  uStack_be = hardware_Sub_08007D4C(iVar8,*(u32 *)(iVar8 + 4));
  uStack_c0 = hardware_Sub_080074C0(param_1 + 0x00006CA0,*(u32 *)(param_1 + 0x00006CA0 + 4));
  uStack_ac = 1;
  if ((int)((u32)*(u8 *)(param_1 + 0x00006B14) * 0x40000000) < 0) {
    piVar2 = (int *)hardware_GetField_0x00_8910(param_1);
    iVar11 = iStack_a0;
    iVar8 = hardware_Sub_08007D4C(iVar8,*(u32 *)(iVar8 + 4));
    uVar4 = 0;
    if (iStack_a0 != 0) {
      uVar4 = uStack_9c & 0xffff;
    }
    piStack_28 = piVar2;
    hardware_Sub_08008F0C(&iStack_88,iVar11,iVar8 * 0x20 + 0x06010000,uVar4);
    piVar3 = (int *)piVar2[1];
    if (piVar3 == (int *)piVar2[3]) {
      iStack_44 = 1;
      iStack_48 = (int)piVar3 - *piStack_28 >> 4;
      piVar2 = &iStack_48;
      if (iStack_48 == 0) {
        piVar2 = &iStack_44;
      }
      if (iStack_48 + *piVar2 == 0) {
        piVar2 = (int *)0x0;
        iVar8 = 0;
      }
      else {
        iVar8 = (iStack_48 + *piVar2) * 0x10;
        piVar2 = (int *)LibC_malloc(iVar8);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)code_linkonce_Sub_080D3BC0(iVar8);
        }
      }
      piVar12 = piVar2;
      for (piVar5 = (int *)*piStack_28; piVar5 != piVar3; piVar5 = piVar5 + 4) {
        if (piVar12 != (int *)0x0) {
          iVar11 = piVar5[1];
          iVar13 = piVar5[2];
          *piVar12 = *piVar5;
          piVar12[1] = iVar11;
          piVar12[2] = iVar13;
          piVar12[3] = piVar5[3];
        }
        piVar12 = piVar12 + 4;
      }
      iVar11 = iStack_44;
      if (iStack_44 == 1) {
        if (piVar12 != (int *)0x0) {
          *piVar12 = iStack_88;
          piVar12[1] = uStack_84;
          piVar12[2] = iStack_80;
          piVar12[3] = uStack_7c;
        }
        piVar12 = piVar12 + 4;
      }
      else {
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (piVar12 != (int *)0x0) {
            *piVar12 = iStack_88;
            piVar12[1] = uStack_84;
            piVar12[2] = iStack_80;
            piVar12[3] = uStack_7c;
          }
          piVar12 = piVar12 + 4;
        }
      }
      for (iVar11 = *piStack_28; iVar11 != piStack_28[1]; iVar11 = iVar11 + 0x10) {
      }
      piStack_24 = piVar2;
      if (*piStack_28 != 0) {
        LibC_free();
      }
      *piStack_28 = (int)piStack_24;
      piStack_28[1] = (int)piVar12;
      piStack_28[3] = (int)piStack_24 + iVar8;
    }
    else {
      if (piVar3 != (int *)0x0) {
        *piVar3 = iStack_88;
        piVar3[1] = uStack_84;
        piVar3[2] = iStack_80;
        piVar3[3] = uStack_7c;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
  }
  uVar1 = hardware_GetField_0x00_8920(param_1);
  uVar4 = 0;
  if (iStack_a8 != 0) {
    uVar4 = uStack_a4 & 0xffff;
  }
  code_0803EE94_Sub_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
  intro_scene_Sub_080035C0(param_1,(int)sStack_c4,(int)sStack_c2,2);
  puVar6 = (u32 *)(param_1 + 0x00006B20);
  func_080D3918(&iStack_88,(int *)*puVar6,
                  *(u16 *)(*piStack_2c + (u32)*(u16 *)(puVar6 + 3) * 4),
                  *(u32 *)(*(int *)*puVar6 + 0x10));
  LibC_memcpy(&iStack_88,&iStack_88,0x20);
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  iStack_a0 = iStack_80;
  uStack_9c = uStack_7c;
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  uStack_90 = uStack_70;
  uStack_8c = uStack_6c;
  sStack_c4 = *(short *)((int)puVar6 + 0x1a);
  sStack_c2 = *(short *)((int)puVar6 + 0x1e);
  uStack_bc = 0;
  iVar8 = param_1 + 0x00006CA8;
  uStack_be = hardware_Sub_08007D4C(iVar8,*(u32 *)(iVar8 + 4));
  uStack_c0 = hardware_Sub_080074C0(param_1 + 0x00006CC8,*(u32 *)(param_1 + 0x00006CC8 + 4));
  uStack_ac = 1;
  if ((int)((u32)*(u8 *)(param_1 + 0x00006B34) * 0x40000000) < 0) {
    piVar2 = (int *)hardware_GetField_0x00_8910(param_1);
    iVar11 = iStack_a0;
    iVar8 = hardware_Sub_08007D4C(iVar8,*(u32 *)(iVar8 + 4));
    uVar4 = 0;
    if (iStack_a0 != 0) {
      uVar4 = uStack_9c & 0xffff;
    }
    piStack_28 = piVar2;
    hardware_Sub_08008F0C(&iStack_88,iVar11,iVar8 * 0x20 + 0x06010000,uVar4);
    piVar3 = (int *)piVar2[1];
    if (piVar3 == (int *)piVar2[3]) {
      iStack_3c = 1;
      iStack_40 = (int)piVar3 - *piStack_28 >> 4;
      piVar2 = &iStack_40;
      if (iStack_40 == 0) {
        piVar2 = &iStack_3c;
      }
      if (iStack_40 + *piVar2 == 0) {
        piVar2 = (int *)0x0;
        iVar8 = 0;
      }
      else {
        iVar8 = (iStack_40 + *piVar2) * 0x10;
        piVar2 = (int *)LibC_malloc(iVar8);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)code_linkonce_Sub_080D3BC0(iVar8);
        }
      }
      piVar12 = piVar2;
      for (piVar5 = (int *)*piStack_28; piVar5 != piVar3; piVar5 = piVar5 + 4) {
        if (piVar12 != (int *)0x0) {
          iVar11 = piVar5[1];
          iVar13 = piVar5[2];
          *piVar12 = *piVar5;
          piVar12[1] = iVar11;
          piVar12[2] = iVar13;
          piVar12[3] = piVar5[3];
        }
        piVar12 = piVar12 + 4;
      }
      iVar11 = iStack_3c;
      if (iStack_3c == 1) {
        if (piVar12 != (int *)0x0) {
          *piVar12 = iStack_88;
          piVar12[1] = uStack_84;
          piVar12[2] = iStack_80;
          piVar12[3] = uStack_7c;
        }
        piVar12 = piVar12 + 4;
      }
      else {
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (piVar12 != (int *)0x0) {
            *piVar12 = iStack_88;
            piVar12[1] = uStack_84;
            piVar12[2] = iStack_80;
            piVar12[3] = uStack_7c;
          }
          piVar12 = piVar12 + 4;
        }
      }
      for (iVar11 = *piStack_28; iVar11 != piStack_28[1]; iVar11 = iVar11 + 0x10) {
      }
      piStack_24 = piVar2;
      if (*piStack_28 != 0) {
        LibC_free();
      }
      *piStack_28 = (int)piStack_24;
      piStack_28[1] = (int)piVar12;
      piStack_28[3] = (int)piStack_24 + iVar8;
    }
    else {
      if (piVar3 != (int *)0x0) {
        *piVar3 = iStack_88;
        piVar3[1] = uStack_84;
        piVar3[2] = iStack_80;
        piVar3[3] = uStack_7c;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
  }
  uVar1 = hardware_GetField_0x00_8920(param_1);
  uVar4 = 0;
  if (iStack_a8 != 0) {
    uVar4 = uStack_a4 & 0xffff;
  }
  code_0803EE94_Sub_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
  intro_scene_Sub_080035C0(param_1,(int)sStack_c4,(int)sStack_c2,2);
}

/* 0x080036F8 (36B) | intro_scene_Create (orig: func_080036F8) | origin: pure | domain: intro_scene | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 intro_scene_Ctor();
u32 intro_scene_Create(u32 *arg0) {
  u32 val;
  *arg0 = 0x080E5A18;
  CppRuntime_builtin_new(0x00006D34);
  val = intro_scene_Ctor();
  arg0[1] = val;
  return arg0;
}

/* 0x0800371C (48B) | intro_scene_Ctor_371C (orig: func_0800371C) | origin: pure | domain: intro_scene | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void intro_scene_Ctor_371C(u32 *arg0,u32 arg1) {
  int val;
  *arg0 = 0x080E5A18;
  val = arg0[1];
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  scene_Dtor(arg0,arg1);
}

/* 0x0800374C (60B) | intro_scene_vfunc_0C (orig: func_0800374C) | origin: pure | domain: intro_scene | HIGH / vtable_algebra */
class V0 { public: virtual ~V0(); };
class V1 : public V0 {};
template <class T>
struct AutoPtr {
    T *_M_ptr;
    explicit AutoPtr(T *p = 0) : _M_ptr(p) {}
    AutoPtr(AutoPtr &a) : _M_ptr(a.release()) {}
    ~AutoPtr() { delete _M_ptr; }
    T *release() {
        T *tmp = _M_ptr;
        _M_ptr = 0;
        return tmp;
    }
    struct Ref {
        void *s;
        T *p;
        Ref(void *s, T *p) : s(s), p(p) {}
    };
    template <class U>
    AutoPtr(AutoPtr<U> const &a) {
        Ref r((void *)&a, a._M_ptr);
        *(U **)r.s = 0;
        _M_ptr = r.p;
    }
};
struct In { int f0; int f4; };
extern "C" AutoPtr<V1> intro_scene_AutoPtrFactory(int);
extern "C" AutoPtr<V0> intro_scene_vfunc_0C(In *in) {
    return intro_scene_AutoPtrFactory(in->f4);
}

