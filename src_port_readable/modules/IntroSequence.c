/* FIO-DECOMP-HMFOMT :: Port Readable Module: IntroSequence (5 functions) */
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

/* 0x0805FA54 (356B) | IntroSequence_Sub_0805FA54 (orig: func_0805FA54) | origin: wip | domain: IntroSequence | HIGH / fomt_studio_table */
void IntroSequence_Sub_0805FA54(u32 param_1,u32 param_2,u32 param_3,u32 param_4) {
  Code_Lib_Syscall_Sub_08050E68(0,0x080FB300,param_3,param_4,param_3);
  code_0803EE94_78C0_Sub_08050DA0(0,0x080FB634,0x00006428);
  *(u16 *)0x00006426 = 6;
  *(u16 *)0x00006424 = 0x14;
}

/* 0x0805FF14 (4096B) | IntroSequence_Ctor (orig: func_0805FF14) | origin: wip | domain: IntroSequence | HIGH / vtable_algebra */
u32 IntroSequence_Ctor(u32 self,u32 param_2,int param_3) {
  short *psVar1;
  u8 *puVar2;
  int iVar3;
  char cVar4;
  u32 uVar5;
  u32 uVar6;
  int iVar7;
  u32 uVar8;
  int *piVar9;
  u32 *puVar10;
  u32 *puVar11;
  int iVar12;
  int iVar13;
  u32 *puVar14;
  u32 *puVar15;
  u32 *puVar16;
  u32 uVar17;
  int iVar18;
  int *piVar19;
  u32 *puVar20;
  u32 *puVar21;
  u32 *puVar22;
  u32 *puVar23;
  u32 *puVar24;
  u32 *puVar25;
  u32 *puVar26;
  u32 *puVar27;
  u32 *puVar28;
  u32 *puVar29;
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
  u32 *puVar46;
  u32 *puVar47;
  u32 *puVar48;
  u32 *puVar49;
  u32 *puVar50;
  u32 *puVar51;
  u32 *puVar52;
  u32 *puVar53;
  u32 *puVar54;
  u32 *puVar55;
  u32 *puVar56;
  u32 *puVar57;
  u32 *puVar58;
  u32 *puVar59;
  u32 *puVar60;
  iVar3 = 0xFFFFFD64;
  piVar19 = (int *)(0 + 0xFFFFFD64);
  puVar20 = (u32 *)(0 + 0xFFFFFD64);
  puVar21 = (u32 *)(0 + 0xFFFFFD64);
  puVar22 = (u32 *)(0 + 0xFFFFFD64);
  puVar23 = (u32 *)(0 + 0xFFFFFD64);
  puVar24 = (u32 *)(0 + 0xFFFFFD64);
  puVar25 = (u32 *)(0 + 0xFFFFFD64);
  puVar26 = (u32 *)(0 + 0xFFFFFD64);
  puVar27 = (u32 *)(0 + 0xFFFFFD64);
  puVar28 = (u32 *)(0 + 0xFFFFFD64);
  puVar29 = (u32 *)(0 + 0xFFFFFD64);
  puVar30 = (u32 *)(0 + 0xFFFFFD64);
  puVar31 = (u32 *)(0 + 0xFFFFFD64);
  puVar32 = (u32 *)(0 + 0xFFFFFD64);
  puVar33 = (u32 *)(0 + 0xFFFFFD64);
  puVar34 = (u32 *)(0 + 0xFFFFFD64);
  puVar35 = (u32 *)(0 + 0xFFFFFD64);
  puVar36 = (u32 *)(0 + 0xFFFFFD64);
  puVar37 = (u32 *)(0 + 0xFFFFFD64);
  puVar38 = (u32 *)(0 + 0xFFFFFD64);
  puVar39 = (u32 *)(0 + 0xFFFFFD64);
  puVar40 = (u32 *)(0 + 0xFFFFFD64);
  puVar41 = (u32 *)(0 + 0xFFFFFD64);
  puVar42 = (u32 *)(0 + 0xFFFFFD64);
  puVar43 = (u32 *)(0 + 0xFFFFFD64);
  puVar44 = (u32 *)(0 + 0xFFFFFD64);
  puVar45 = (u32 *)(0 + 0xFFFFFD64);
  puVar46 = (u32 *)(0 + 0xFFFFFD64);
  puVar47 = (u32 *)(0 + 0xFFFFFD64);
  puVar48 = (u32 *)(0 + 0xFFFFFD64);
  puVar49 = (u32 *)(0 + 0xFFFFFD64);
  puVar50 = (u32 *)(0 + 0xFFFFFD64);
  puVar51 = (u32 *)(0 + 0xFFFFFD64);
  puVar52 = (u32 *)(0 + 0xFFFFFD64);
  puVar53 = (u32 *)(0 + 0xFFFFFD64);
  puVar54 = (u32 *)(0 + 0xFFFFFD64);
  puVar55 = (u32 *)(0 + 0xFFFFFD64);
  puVar56 = (u32 *)(0 + 0xFFFFFD64);
  puVar57 = (u32 *)(0 + 0xFFFFFD64);
  puVar58 = (u32 *)(0 + 0xFFFFFD64);
  puVar59 = (u32 *)(0 + 0xFFFFFD64);
  puVar60 = (u32 *)(0 + 0xFFFFFD64);
  *(u32 *)(0 + 0xFFFFFD64) = self;
  *(u32 *)(0 + 0xFFFFFD64) = param_2;
  uVar5 = func_08009AF4(param_3 + 0x14);
  puVar2 = 0 + iVar3;
  uVar6 = LibC_strlen();
  if (0x16 < uVar6) {
    uVar6 = 0x16;
  }
  LibC_memcpy(puVar2,uVar5,uVar6);
  uVar5 = 0x080FB824;
  puVar2[uVar6] = 0;
  iVar7 = LibC_strlen(puVar2);
  uVar6 = 0x16 - iVar7;
  if (uVar6 != 0) {
    uVar8 = LibC_strlen(uVar5);
    if (uVar6 < uVar8) {
      uVar8 = uVar6;
    }
    LibC_memcpy(puVar2 + iVar7,uVar5,uVar8);
    (puVar2 + iVar7)[uVar8] = 0;
  }
  LibC_strcpy(0 + iVar3,puVar2);
  LibC_memcpy(0 + iVar3,0 + iVar3,0x18);
  *piVar19 = (int)(0 + iVar3);
  code_0803EE94_7B88_Create(*(u32 *)(0 + iVar3),*(u32 *)(0 + iVar3),
                param_3,0x40);
  puVar16 = *(u32 **)(0 + iVar3);
  *(u32 *)((int)puVar16 + 0x000005B4) = 0x080E7A78;
  *(u32 *)(0 + iVar3) = puVar16[1];
  *(u16 *)(0 + iVar3) = 2;
  *(u16 *)(0 + iVar3) = 2;
  uVar5 = *(u32 *)(0 + iVar3);
  iVar7 = (int)puVar16 + 0x000005BC;
  *puVar20 = 0x080FB830;
  Code_Lib_Syscall_Sub_0804E8F0(uVar5,iVar7,0,0);
  piVar9 = (int *)hardware_GetField_0x00_8910(*puVar16);
  hardware_Sub_08008F0C(0 + iVar3,iVar7,0x6000700,0x80);
  psVar1 = (short *)(0 + iVar3);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    *(u32 **)(0 + iVar3) = puVar16;
    *(u32 *)(0 + iVar3) = 1;
    iVar7 = (int)puVar16 - *piVar9 >> 4;
    *(int *)(0 + iVar3) = iVar7;
    puVar2 = 0;
    if (iVar7 == 0) {
      puVar2 = 0;
    }
    if (iVar7 + *(int *)(puVar2 + iVar3) == 0) {
      puVar16 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (iVar7 + *(int *)(puVar2 + iVar3)) * 0x10;
      puVar16 = (u32 *)LibC_malloc(iVar7);
      if (puVar16 == (u32 *)0x0) {
        puVar16 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
    }
    *(u32 **)(0 + iVar3) = puVar16;
    puVar15 = (u32 *)*piVar9;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    iVar18 = *(int *)(0 + iVar3);
    *(int *)(0 + iVar3) = iVar18 + 0x640;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    *(int *)(0 + iVar3) = iVar18 + 0x000006C4;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    *(int *)(0 + iVar3) = iVar18 + 0x748;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    *(int *)(0 + iVar3) = iVar18 + 0x000007CC;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    *(int *)(0 + iVar3) = iVar18 + 0x850;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    *(int *)(0 + iVar3) = iVar18 + 0x000008D4;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    *(int *)(0 + iVar3) = iVar18 + 0x00000958;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    *(int *)(0 + iVar3) = iVar18 + 0x00001568;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    *(u32 *)(0 + iVar3) = 0x380000;
    if (puVar15 != *(u32 **)(0 + iVar3)) {
      do {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = puVar15[1];
          uVar17 = puVar15[2];
          *puVar16 = *puVar15;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = puVar15[3];
        }
        puVar15 = puVar15 + 4;
        puVar16 = puVar16 + 4;
      } while (puVar15 != *(u32 **)(0 + iVar3));
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar16 = *(u32 *)psVar1;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = *(u32 *)(0 + iVar3);
      }
      puVar16 = puVar16 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar16 = *(u32 *)psVar1;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = *(u32 *)(0 + iVar3);
        }
        puVar16 = puVar16 + 4;
      }
    }
    for (iVar18 = *piVar9; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (*piVar9 != 0) {
      LibC_free();
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar16;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar16 = *(u32 *)psVar1;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    iVar7 = *(int *)(0 + iVar3);
    *(int *)(0 + iVar3) = iVar7 + 0x640;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    *(int *)(0 + iVar3) = iVar7 + 0x000006C4;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    *(int *)(0 + iVar3) = iVar7 + 0x748;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    *(int *)(0 + iVar3) = iVar7 + 0x000007CC;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    *(int *)(0 + iVar3) = iVar7 + 0x850;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    *(int *)(0 + iVar3) = iVar7 + 0x000008D4;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    *(int *)(0 + iVar3) = iVar7 + 0x00000958;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    *(int *)(0 + iVar3) = iVar7 + 0x00001568;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    *(u8 **)(0 + iVar3) = 0 + iVar3;
    *(u32 *)(0 + iVar3) = 0x380000;
  }
  uVar5 = 0x080FB830;
  *(u16 *)(0 + iVar3) = 2;
  *(u16 *)(*(int *)(0 + iVar3) + 2) = 2;
  uVar17 = *(u32 *)(0 + iVar3);
  *puVar21 = uVar5;
  Code_Lib_Syscall_Sub_0804E8F0(uVar17,*(u32 *)(0 + iVar3),0,0);
  piVar9 = (int *)hardware_GetField_0x00_8910(**(u32 **)(0 + iVar3));
  hardware_Sub_08008F0C(0 + iVar3,*(u32 *)(0 + iVar3),0x6000780,0x80);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    *(u32 **)(0 + iVar3) = puVar16;
    *(u32 *)(0 + iVar3) = 1;
    iVar7 = (int)puVar16 - *piVar9 >> 4;
    *(int *)(0 + iVar3) = iVar7;
    puVar2 = 0;
    if (iVar7 == 0) {
      puVar2 = 0;
    }
    if (iVar7 + *(int *)(puVar2 + iVar3) == 0) {
      puVar16 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (iVar7 + *(int *)(puVar2 + iVar3)) * 0x10;
      puVar16 = (u32 *)LibC_malloc(iVar7);
      if (puVar16 == (u32 *)0x0) {
        puVar16 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
    }
    *(u32 **)(0 + iVar3) = puVar16;
    puVar15 = (u32 *)*piVar9;
    *(u32 *)(0 + iVar3) = 0x3c0000;
    if (puVar15 != *(u32 **)(0 + iVar3)) {
      do {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = puVar15[1];
          uVar17 = puVar15[2];
          *puVar16 = *puVar15;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = puVar15[3];
        }
        puVar15 = puVar15 + 4;
        puVar16 = puVar16 + 4;
      } while (puVar15 != *(u32 **)(0 + iVar3));
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar16 = *(u32 *)psVar1;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = *(u32 *)(0 + iVar3);
      }
      puVar16 = puVar16 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar16 = *(u32 *)psVar1;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = *(u32 *)(0 + iVar3);
        }
        puVar16 = puVar16 + 4;
      }
    }
    for (iVar18 = *piVar9; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (*piVar9 != 0) {
      LibC_free();
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar16;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar16 = *(u32 *)psVar1;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
    *(u32 *)(0 + iVar3) = 0x3c0000;
  }
  uVar5 = 0x080FB830;
  *(u16 *)(0 + iVar3) = 2;
  *(u16 *)(*(int *)(0 + iVar3) + 2) = 2;
  uVar17 = *(u32 *)(0 + iVar3);
  *puVar22 = uVar5;
  Code_Lib_Syscall_Sub_0804E8F0(uVar17,*(u32 *)(0 + iVar3),0,0);
  piVar9 = (int *)hardware_GetField_0x00_8910(**(u32 **)(0 + iVar3));
  hardware_Sub_08008F0C(0 + iVar3,*(u32 *)(0 + iVar3),0x06000800,
                0x80);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    *(u32 **)(0 + iVar3) = puVar16;
    *(u32 *)(0 + iVar3) = 1;
    iVar7 = (int)puVar16 - *piVar9 >> 4;
    *(int *)(0 + iVar3) = iVar7;
    puVar2 = 0;
    if (iVar7 == 0) {
      puVar2 = 0;
    }
    if (iVar7 + *(int *)(puVar2 + iVar3) == 0) {
      puVar16 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (iVar7 + *(int *)(puVar2 + iVar3)) * 0x10;
      puVar16 = (u32 *)LibC_malloc(iVar7);
      if (puVar16 == (u32 *)0x0) {
        puVar16 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
    }
    *(u32 **)(0 + iVar3) = puVar16;
    puVar15 = (u32 *)*piVar9;
    if (puVar15 != *(u32 **)(0 + iVar3)) {
      do {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = puVar15[1];
          uVar17 = puVar15[2];
          *puVar16 = *puVar15;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = puVar15[3];
        }
        puVar15 = puVar15 + 4;
        puVar16 = puVar16 + 4;
      } while (puVar15 != *(u32 **)(0 + iVar3));
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar16 = *(u32 *)psVar1;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = *(u32 *)(0 + iVar3);
      }
      puVar16 = puVar16 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar16 = *(u32 *)psVar1;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = *(u32 *)(0 + iVar3);
        }
        puVar16 = puVar16 + 4;
      }
    }
    for (iVar18 = *piVar9; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (*piVar9 != 0) {
      LibC_free();
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar16;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar16 = *(u32 *)psVar1;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  uVar5 = 0x080FB830;
  *(u16 *)(0 + iVar3) = 2;
  *(u16 *)(*(int *)(0 + iVar3) + 2) = 2;
  uVar17 = *(u32 *)(0 + iVar3);
  *puVar23 = uVar5;
  Code_Lib_Syscall_Sub_0804E8F0(uVar17,*(u32 *)(0 + iVar3),0,0);
  piVar9 = (int *)hardware_GetField_0x00_8910(**(u32 **)(0 + iVar3));
  hardware_Sub_08008F0C(0 + iVar3,*(u32 *)(0 + iVar3),0x6000880,0x80);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    *(u32 **)(0 + iVar3) = puVar16;
    *(u32 *)(0 + iVar3) = 1;
    iVar7 = (int)puVar16 - *piVar9 >> 4;
    *(int *)(0 + iVar3) = iVar7;
    puVar2 = 0;
    if (iVar7 == 0) {
      puVar2 = 0;
    }
    if (iVar7 + *(int *)(puVar2 + iVar3) == 0) {
      puVar16 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (iVar7 + *(int *)(puVar2 + iVar3)) * 0x10;
      puVar16 = (u32 *)LibC_malloc(iVar7);
      if (puVar16 == (u32 *)0x0) {
        puVar16 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
    }
    *(u32 **)(0 + iVar3) = puVar16;
    puVar15 = (u32 *)*piVar9;
    *(u32 *)(0 + iVar3) = 0x440000;
    if (puVar15 != *(u32 **)(0 + iVar3)) {
      do {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = puVar15[1];
          uVar17 = puVar15[2];
          *puVar16 = *puVar15;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = puVar15[3];
        }
        puVar15 = puVar15 + 4;
        puVar16 = puVar16 + 4;
      } while (puVar15 != *(u32 **)(0 + iVar3));
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar16 = *(u32 *)psVar1;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = *(u32 *)(0 + iVar3);
      }
      puVar16 = puVar16 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar16 = *(u32 *)psVar1;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = *(u32 *)(0 + iVar3);
        }
        puVar16 = puVar16 + 4;
      }
    }
    for (iVar18 = *piVar9; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (*piVar9 != 0) {
      LibC_free();
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar16;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar16 = *(u32 *)psVar1;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
    *(u32 *)(0 + iVar3) = 0x440000;
  }
  uVar5 = 0x080FB830;
  *(u16 *)(0 + iVar3) = 2;
  *(u16 *)(*(int *)(0 + iVar3) + 2) = 2;
  uVar17 = *(u32 *)(0 + iVar3);
  *puVar24 = uVar5;
  Code_Lib_Syscall_Sub_0804E8F0(uVar17,*(u32 *)(0 + iVar3),0,0);
  piVar9 = (int *)hardware_GetField_0x00_8910(**(u32 **)(0 + iVar3));
  hardware_Sub_08008F0C(0 + iVar3,*(u32 *)(0 + iVar3),0x6000900,0x80);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    *(u32 **)(0 + iVar3) = puVar16;
    puVar14 = (u32 *)(0 + iVar3);
    *puVar14 = 1;
    uVar6 = *(int *)(0 + iVar3) - *piVar9 >> 4;
    *(u32 *)(0 + iVar3) = uVar6;
    puVar10 = (u32 *)(0 + iVar3);
    if (uVar6 < *puVar14) {
      puVar10 = puVar14;
    }
    if (uVar6 + *puVar10 == 0) {
      puVar16 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar6 + *puVar10) * 0x10;
      puVar16 = (u32 *)LibC_malloc(iVar7);
      if (puVar16 == (u32 *)0x0) {
        puVar16 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
    }
    *(u32 **)(0 + iVar3) = puVar16;
    puVar15 = (u32 *)*piVar9;
    *(u32 *)(0 + iVar3) = 0x480000;
    for (; puVar15 != *(u32 **)(0 + iVar3); puVar15 = puVar15 + 4) {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = puVar15[1];
        uVar17 = puVar15[2];
        *puVar16 = *puVar15;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = puVar15[3];
      }
      puVar16 = puVar16 + 4;
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar16 = *(u32 *)psVar1;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = *(u32 *)(0 + iVar3);
      }
      puVar16 = puVar16 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar16 = *(u32 *)psVar1;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = *(u32 *)(0 + iVar3);
        }
        puVar16 = puVar16 + 4;
      }
    }
    for (iVar18 = *piVar9; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (*piVar9 != 0) {
      LibC_free();
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar16;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar16 = *(u32 *)psVar1;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
    *(u32 *)(0 + iVar3) = 0x480000;
  }
  uVar5 = 0x080FB830;
  *(u16 *)(0 + iVar3) = 2;
  *(u16 *)(*(int *)(0 + iVar3) + 2) = 2;
  uVar17 = *(u32 *)(0 + iVar3);
  *puVar25 = uVar5;
  Code_Lib_Syscall_Sub_0804E8F0(uVar17,*(u32 *)(0 + iVar3),0,0);
  piVar9 = (int *)hardware_GetField_0x00_8910(**(u32 **)(0 + iVar3));
  hardware_Sub_08008F0C(0 + iVar3,*(u32 *)(0 + iVar3),0x6000980,0x80);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    *(u32 **)(0 + iVar3) = puVar16;
    puVar14 = (u32 *)(0 + iVar3);
    *puVar14 = 1;
    uVar6 = *(int *)(0 + iVar3) - *piVar9 >> 4;
    *(u32 *)(0 + iVar3) = uVar6;
    puVar10 = (u32 *)(0 + iVar3);
    if (uVar6 < *puVar14) {
      puVar10 = puVar14;
    }
    if (uVar6 + *puVar10 == 0) {
      puVar16 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar6 + *puVar10) * 0x10;
      puVar16 = (u32 *)LibC_malloc(iVar7);
      if (puVar16 == (u32 *)0x0) {
        puVar16 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
    }
    *(u32 **)(0 + iVar3) = puVar16;
    puVar15 = (u32 *)*piVar9;
    *(u32 *)(0 + iVar3) = 0x4c0000;
    for (; puVar15 != *(u32 **)(0 + iVar3); puVar15 = puVar15 + 4) {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = puVar15[1];
        uVar17 = puVar15[2];
        *puVar16 = *puVar15;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = puVar15[3];
      }
      puVar16 = puVar16 + 4;
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar16 = *(u32 *)psVar1;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = *(u32 *)(0 + iVar3);
      }
      puVar16 = puVar16 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar16 = *(u32 *)psVar1;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = *(u32 *)(0 + iVar3);
        }
        puVar16 = puVar16 + 4;
      }
    }
    for (iVar18 = *piVar9; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (*piVar9 != 0) {
      LibC_free();
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar16;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar16 = *(u32 *)psVar1;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
    *(u32 *)(0 + iVar3) = 0x4c0000;
  }
  uVar5 = 0x080FB834;
  *(u16 *)(0 + iVar3) = 2;
  *(u16 *)(*(int *)(0 + iVar3) + 2) = 2;
  uVar17 = *(u32 *)(0 + iVar3);
  *puVar26 = uVar5;
  Code_Lib_Syscall_Sub_0804E8F0(uVar17,*(u32 *)(0 + iVar3),0,0);
  piVar9 = (int *)hardware_GetField_0x00_8910(**(u32 **)(0 + iVar3));
  hardware_Sub_08008F0C(0 + iVar3,*(u32 *)(0 + iVar3),0x6000a00,0x80);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    *(u32 **)(0 + iVar3) = puVar16;
    puVar14 = (u32 *)(0 + iVar3);
    *puVar14 = 1;
    uVar6 = *(int *)(0 + iVar3) - *piVar9 >> 4;
    *(u32 *)(0 + iVar3) = uVar6;
    puVar10 = (u32 *)(0 + iVar3);
    if (uVar6 < *puVar14) {
      puVar10 = puVar14;
    }
    if (uVar6 + *puVar10 == 0) {
      puVar16 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar6 + *puVar10) * 0x10;
      puVar16 = (u32 *)LibC_malloc(iVar7);
      if (puVar16 == (u32 *)0x0) {
        puVar16 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
    }
    *(u32 **)(0 + iVar3) = puVar16;
    puVar15 = (u32 *)*piVar9;
    *(u32 *)(0 + iVar3) = 0x500000;
    for (; puVar15 != *(u32 **)(0 + iVar3); puVar15 = puVar15 + 4) {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = puVar15[1];
        uVar17 = puVar15[2];
        *puVar16 = *puVar15;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = puVar15[3];
      }
      puVar16 = puVar16 + 4;
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar16 = *(u32 *)psVar1;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = *(u32 *)(0 + iVar3);
      }
      puVar16 = puVar16 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar16 = *(u32 *)psVar1;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = *(u32 *)(0 + iVar3);
        }
        puVar16 = puVar16 + 4;
      }
    }
    for (iVar18 = *piVar9; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (*piVar9 != 0) {
      LibC_free();
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar16;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar16 = *(u32 *)psVar1;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
    *(u32 *)(0 + iVar3) = 0x500000;
  }
  piVar9 = (int *)hardware_GetField_0x00_8910(**(u32 **)(0 + iVar3));
  hardware_Sub_08008F0C(0 + iVar3,0x0875196C,0x6000a80,0x80);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    *(u32 **)(0 + iVar3) = puVar16;
    puVar14 = (u32 *)(0 + iVar3);
    *puVar14 = 1;
    uVar6 = *(int *)(0 + iVar3) - *piVar9 >> 4;
    *(u32 *)(0 + iVar3) = uVar6;
    puVar10 = (u32 *)(0 + iVar3);
    if (uVar6 < *puVar14) {
      puVar10 = puVar14;
    }
    if (uVar6 + *puVar10 == 0) {
      puVar16 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar6 + *puVar10) * 0x10;
      puVar16 = (u32 *)LibC_malloc(iVar7);
      if (puVar16 == (u32 *)0x0) {
        puVar16 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
    }
    *(u32 **)(0 + iVar3) = puVar16;
    puVar15 = (u32 *)*piVar9;
    if (puVar15 != *(u32 **)(0 + iVar3)) {
      do {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = puVar15[1];
          uVar17 = puVar15[2];
          *puVar16 = *puVar15;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = puVar15[3];
        }
        puVar15 = puVar15 + 4;
        puVar16 = puVar16 + 4;
      } while (puVar15 != *(u32 **)(0 + iVar3));
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar16 = *(u32 *)psVar1;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = *(u32 *)(0 + iVar3);
      }
      puVar16 = puVar16 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar16 = *(u32 *)psVar1;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = *(u32 *)(0 + iVar3);
        }
        puVar16 = puVar16 + 4;
      }
    }
    for (iVar18 = *piVar9; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (*piVar9 != 0) {
      LibC_free();
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar16;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar16 = *(u32 *)psVar1;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  piVar9 = (int *)hardware_GetField_0x00_8910(**(u32 **)(0 + iVar3));
  hardware_Sub_08008F0C(0 + iVar3,0x087519EC,0x05000020,0x20);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    *(u32 **)(0 + iVar3) = puVar16;
    puVar14 = (u32 *)(0 + iVar3);
    *puVar14 = 1;
    uVar6 = *(int *)(0 + iVar3) - *piVar9 >> 4;
    *(u32 *)(0 + iVar3) = uVar6;
    puVar10 = (u32 *)(0 + iVar3);
    if (uVar6 < *puVar14) {
      puVar10 = puVar14;
    }
    if (uVar6 + *puVar10 == 0) {
      puVar16 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar6 + *puVar10) * 0x10;
      puVar16 = (u32 *)LibC_malloc(iVar7);
      if (puVar16 == (u32 *)0x0) {
        puVar16 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
    }
    *(u32 **)(0 + iVar3) = puVar16;
    for (puVar15 = (u32 *)*piVar9; puVar15 != *(u32 **)(0 + iVar3);
        puVar15 = puVar15 + 4) {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = puVar15[1];
        uVar17 = puVar15[2];
        *puVar16 = *puVar15;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = puVar15[3];
      }
      puVar16 = puVar16 + 4;
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar16 = *(u32 *)psVar1;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = *(u32 *)(0 + iVar3);
      }
      puVar16 = puVar16 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar16 = *(u32 *)psVar1;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = *(u32 *)(0 + iVar3);
        }
        puVar16 = puVar16 + 4;
      }
    }
    for (iVar18 = *piVar9; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (*piVar9 != 0) {
      LibC_free();
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar16;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar16 = *(u32 *)psVar1;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  piVar9 = (int *)hardware_GetField_0x00_8910(**(u32 **)(0 + iVar3));
  hardware_Sub_08008F0C(0 + iVar3,0x0875254C,0x6000b00,0x20);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    *(u32 **)(0 + iVar3) = puVar16;
    puVar14 = (u32 *)(0 + iVar3);
    *puVar14 = 1;
    uVar6 = *(int *)(0 + iVar3) - *piVar9 >> 4;
    *(u32 *)(0 + iVar3) = uVar6;
    puVar10 = (u32 *)(0 + iVar3);
    if (uVar6 < *puVar14) {
      puVar10 = puVar14;
    }
    if (uVar6 + *puVar10 == 0) {
      puVar16 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar6 + *puVar10) * 0x10;
      puVar16 = (u32 *)LibC_malloc(iVar7);
      if (puVar16 == (u32 *)0x0) {
        puVar16 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
    }
    *(u32 **)(0 + iVar3) = puVar16;
    puVar15 = (u32 *)*piVar9;
    if (puVar15 != *(u32 **)(0 + iVar3)) {
      do {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = puVar15[1];
          uVar17 = puVar15[2];
          *puVar16 = *puVar15;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = puVar15[3];
        }
        puVar15 = puVar15 + 4;
        puVar16 = puVar16 + 4;
      } while (puVar15 != *(u32 **)(0 + iVar3));
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar16 = *(u32 *)psVar1;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = *(u32 *)(0 + iVar3);
      }
      puVar16 = puVar16 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar16 = *(u32 *)psVar1;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = *(u32 *)(0 + iVar3);
        }
        puVar16 = puVar16 + 4;
      }
    }
    for (iVar18 = *piVar9; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (*piVar9 != 0) {
      LibC_free();
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar16;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar16 = *(u32 *)psVar1;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  piVar9 = (int *)hardware_GetField_0x00_8910(**(u32 **)(0 + iVar3));
  hardware_Sub_08008F0C(0 + iVar3,0x087525CC,0x05000040,0x20);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    *(u32 **)(0 + iVar3) = puVar16;
    puVar14 = (u32 *)(0 + iVar3);
    *puVar14 = 1;
    uVar6 = *(int *)(0 + iVar3) - *piVar9 >> 4;
    *(u32 *)(0 + iVar3) = uVar6;
    puVar10 = (u32 *)(0 + iVar3);
    if (uVar6 < *puVar14) {
      puVar10 = puVar14;
    }
    if (uVar6 + *puVar10 == 0) {
      puVar16 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar6 + *puVar10) * 0x10;
      puVar16 = (u32 *)LibC_malloc(iVar7);
      if (puVar16 == (u32 *)0x0) {
        puVar16 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
    }
    *(u32 **)(0 + iVar3) = puVar16;
    for (puVar15 = (u32 *)*piVar9; puVar15 != *(u32 **)(0 + iVar3);
        puVar15 = puVar15 + 4) {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = puVar15[1];
        uVar17 = puVar15[2];
        *puVar16 = *puVar15;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = puVar15[3];
      }
      puVar16 = puVar16 + 4;
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar16 = *(u32 *)psVar1;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = *(u32 *)(0 + iVar3);
      }
      puVar16 = puVar16 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar16 = *(u32 *)psVar1;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = *(u32 *)(0 + iVar3);
        }
        puVar16 = puVar16 + 4;
      }
    }
    for (iVar18 = *piVar9; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (*piVar9 != 0) {
      LibC_free();
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar16;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar16 = *(u32 *)psVar1;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  piVar9 = (int *)hardware_GetField_0x00_8910(**(u32 **)(0 + iVar3));
  hardware_Sub_08008F0C(0 + iVar3,0x087530CC,0x6000b80,0x20);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    *(u32 **)(0 + iVar3) = puVar16;
    puVar14 = (u32 *)(0 + iVar3);
    *puVar14 = 1;
    uVar6 = *(int *)(0 + iVar3) - *piVar9 >> 4;
    *(u32 *)(0 + iVar3) = uVar6;
    puVar10 = (u32 *)(0 + iVar3);
    if (uVar6 < *puVar14) {
      puVar10 = puVar14;
    }
    if (uVar6 + *puVar10 == 0) {
      puVar16 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar6 + *puVar10) * 0x10;
      puVar16 = (u32 *)LibC_malloc(iVar7);
      if (puVar16 == (u32 *)0x0) {
        puVar16 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
    }
    *(u32 **)(0 + iVar3) = puVar16;
    puVar15 = (u32 *)*piVar9;
    if (puVar15 != *(u32 **)(0 + iVar3)) {
      do {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = puVar15[1];
          uVar17 = puVar15[2];
          *puVar16 = *puVar15;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = puVar15[3];
        }
        puVar15 = puVar15 + 4;
        puVar16 = puVar16 + 4;
      } while (puVar15 != *(u32 **)(0 + iVar3));
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar16 = *(u32 *)psVar1;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = *(u32 *)(0 + iVar3);
      }
      puVar16 = puVar16 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar16 = *(u32 *)psVar1;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = *(u32 *)(0 + iVar3);
        }
        puVar16 = puVar16 + 4;
      }
    }
    for (iVar18 = *piVar9; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (*piVar9 != 0) {
      LibC_free();
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar16;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar16 = *(u32 *)psVar1;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  piVar9 = (int *)hardware_GetField_0x00_8910(**(u32 **)(0 + iVar3));
  hardware_Sub_08008F0C(0 + iVar3,0x0875314C,0x05000060,0x20);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    *(u32 **)(0 + iVar3) = puVar16;
    puVar14 = (u32 *)(0 + iVar3);
    *puVar14 = 1;
    uVar6 = *(int *)(0 + iVar3) - *piVar9 >> 4;
    *(u32 *)(0 + iVar3) = uVar6;
    puVar10 = (u32 *)(0 + iVar3);
    if (uVar6 < *puVar14) {
      puVar10 = puVar14;
    }
    if (uVar6 + *puVar10 == 0) {
      puVar16 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar6 + *puVar10) * 0x10;
      puVar16 = (u32 *)LibC_malloc(iVar7);
      if (puVar16 == (u32 *)0x0) {
        puVar16 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
    }
    *(u32 **)(0 + iVar3) = puVar16;
    for (puVar15 = (u32 *)*piVar9; puVar15 != *(u32 **)(0 + iVar3);
        puVar15 = puVar15 + 4) {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = puVar15[1];
        uVar17 = puVar15[2];
        *puVar16 = *puVar15;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = puVar15[3];
      }
      puVar16 = puVar16 + 4;
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar16 = *(u32 *)psVar1;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = *(u32 *)(0 + iVar3);
      }
      puVar16 = puVar16 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar16 = *(u32 *)psVar1;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = *(u32 *)(0 + iVar3);
        }
        puVar16 = puVar16 + 4;
      }
    }
    for (iVar18 = *piVar9; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (*piVar9 != 0) {
      LibC_free();
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar16;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar16 = *(u32 *)psVar1;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  piVar9 = (int *)hardware_GetField_0x00_8910(**(u32 **)(0 + iVar3));
  hardware_Sub_08008F0C(0 + iVar3,0x0875348C,0x6000ba0,0x20);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    *(u32 **)(0 + iVar3) = puVar16;
    puVar14 = (u32 *)(0 + iVar3);
    *puVar14 = 1;
    uVar6 = *(int *)(0 + iVar3) - *piVar9 >> 4;
    *(u32 *)(0 + iVar3) = uVar6;
    puVar10 = (u32 *)(0 + iVar3);
    if (uVar6 < *puVar14) {
      puVar10 = puVar14;
    }
    if (uVar6 + *puVar10 == 0) {
      puVar16 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar6 + *puVar10) * 0x10;
      puVar16 = (u32 *)LibC_malloc(iVar7);
      if (puVar16 == (u32 *)0x0) {
        puVar16 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
    }
    *(u32 **)(0 + iVar3) = puVar16;
    puVar15 = (u32 *)*piVar9;
    if (puVar15 != *(u32 **)(0 + iVar3)) {
      do {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = puVar15[1];
          uVar17 = puVar15[2];
          *puVar16 = *puVar15;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = puVar15[3];
        }
        puVar15 = puVar15 + 4;
        puVar16 = puVar16 + 4;
      } while (puVar15 != *(u32 **)(0 + iVar3));
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar16 = *(u32 *)psVar1;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = *(u32 *)(0 + iVar3);
      }
      puVar16 = puVar16 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar16 = *(u32 *)psVar1;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = *(u32 *)(0 + iVar3);
        }
        puVar16 = puVar16 + 4;
      }
    }
    for (iVar18 = *piVar9; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (*piVar9 != 0) {
      LibC_free();
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar16;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar16 = *(u32 *)psVar1;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  piVar9 = (int *)hardware_GetField_0x00_8910(**(u32 **)(0 + iVar3));
  hardware_Sub_08008F0C(0 + iVar3,0x0875350C,0x05000080,0x20);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    *(u32 **)(0 + iVar3) = puVar16;
    puVar14 = (u32 *)(0 + iVar3);
    *puVar14 = 1;
    uVar6 = *(int *)(0 + iVar3) - *piVar9 >> 4;
    *(u32 *)(0 + iVar3) = uVar6;
    puVar10 = (u32 *)(0 + iVar3);
    if (uVar6 < *puVar14) {
      puVar10 = puVar14;
    }
    if (uVar6 + *puVar10 == 0) {
      puVar16 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar6 + *puVar10) * 0x10;
      puVar16 = (u32 *)LibC_malloc(iVar7);
      if (puVar16 == (u32 *)0x0) {
        puVar16 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
    }
    *(u32 **)(0 + iVar3) = puVar16;
    for (puVar15 = (u32 *)*piVar9; puVar15 != *(u32 **)(0 + iVar3);
        puVar15 = puVar15 + 4) {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = puVar15[1];
        uVar17 = puVar15[2];
        *puVar16 = *puVar15;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = puVar15[3];
      }
      puVar16 = puVar16 + 4;
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar16 = *(u32 *)psVar1;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = *(u32 *)(0 + iVar3);
      }
      puVar16 = puVar16 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar16 = *(u32 *)psVar1;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = *(u32 *)(0 + iVar3);
        }
        puVar16 = puVar16 + 4;
      }
    }
    for (iVar18 = *piVar9; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (*piVar9 != 0) {
      LibC_free();
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar16;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar16 = *(u32 *)psVar1;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  *(u32 *)(0 + iVar3) = 4;
  *psVar1 = 0x20;
  *(u32 *)(0 + iVar3) = 0;
  *(u32 *)(0 + iVar3) = 0x08752F8C;
  *(u32 *)(0 + iVar3) = 0x0875300C;
  piVar9 = (int *)(*(int *)(0 + iVar3) + 0x00000594);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    *(u32 **)(0 + iVar3) = puVar16;
    puVar14 = (u32 *)(0 + iVar3);
    *puVar14 = 1;
    puVar16 = (u32 *)*piVar9;
    uVar6 = *(int *)(0 + iVar3) - (int)puVar16 >> 4;
    *(u32 *)(0 + iVar3) = uVar6;
    puVar10 = (u32 *)(0 + iVar3);
    if (uVar6 < *puVar14) {
      puVar10 = puVar14;
    }
    if (uVar6 + *puVar10 == 0) {
      puVar15 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar6 + *puVar10) * 0x10;
      puVar15 = (u32 *)LibC_malloc(iVar7);
      if (puVar15 == (u32 *)0x0) {
        puVar15 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
      puVar16 = (u32 *)*piVar9;
    }
    *(u32 **)(0 + iVar3) = puVar15;
    *(int *)(0 + iVar3) = *(int *)(0 + iVar3) + 3;
    if (puVar16 != *(u32 **)(0 + iVar3)) {
      do {
        if (puVar15 != (u32 *)0x0) {
          uVar5 = puVar16[1];
          uVar17 = puVar16[2];
          *puVar15 = *puVar16;
          puVar15[1] = uVar5;
          puVar15[2] = uVar17;
          puVar15[3] = puVar16[3];
        }
        puVar16 = puVar16 + 4;
        puVar15 = puVar15 + 4;
      } while (puVar16 != *(u32 **)(0 + iVar3));
    }
    uVar6 = *puVar14;
    if (uVar6 == 1) {
      if (puVar15 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar15 = *(u32 *)psVar1;
        puVar15[1] = uVar5;
        puVar15[2] = uVar17;
        puVar15[3] = *(u32 *)(0 + iVar3);
      }
      puVar15 = puVar15 + 4;
    }
    else {
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (puVar15 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar15 = *(u32 *)psVar1;
          puVar15[1] = uVar5;
          puVar15[2] = uVar17;
          puVar15[3] = *(u32 *)(0 + iVar3);
        }
        puVar15 = puVar15 + 4;
      }
    }
    iVar12 = *piVar9;
    for (iVar18 = iVar12; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (iVar12 != 0) {
      LibC_free(iVar12);
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar15;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar16 = *(u32 *)psVar1;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
    *(u32 *)(0 + iVar3) = 7;
  }
  uVar5 = *(u32 *)
           (*(int *)(*(int *)(0 + iVar3) + 0x0000058C) + 0x00001AA8);
  iVar7 = *(int *)(*(int *)(0 + iVar3) + 0x18);
  iVar18 = *(int *)(0 + iVar3);
  *puVar27 = 0x20;
  code_0803EE94_Sub_0804EDB4(uVar5,iVar7 + iVar18 * 0x40 + 0x2c,0x120,0);
  iVar7 = *(int *)(*(int *)(0 + iVar3) + 0x18);
  uVar6 = *(u32 *)(0 + iVar3);
  *puVar28 = 0;
  *(u32 *)(0 + iVar3) = 0x20;
  code_0803EE94_Sub_0804E9F4(iVar7 + iVar18 * 0x40 + 0x2e,uVar6 >> 0x10,2,2);
  *(int *)(0 + iVar3) = *(int *)(0 + iVar3);
  *psVar1 = (short)(*(int *)(0 + iVar3) << 3);
  *(u32 *)(0 + iVar3) = 0;
  *(u32 *)(0 + iVar3) = 0x087518CC;
  *(u32 *)(0 + iVar3) = 0x0875194C;
  piVar9 = (int *)(*(int *)(0 + iVar3) + 0x00000594);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    *(u32 **)(0 + iVar3) = puVar16;
    puVar14 = (u32 *)(0 + iVar3);
    *puVar14 = 1;
    puVar16 = (u32 *)*piVar9;
    uVar6 = *(int *)(0 + iVar3) - (int)puVar16 >> 4;
    *(u32 *)(0 + iVar3) = uVar6;
    puVar10 = (u32 *)(0 + iVar3);
    if (uVar6 < *puVar14) {
      puVar10 = puVar14;
    }
    if (uVar6 + *puVar10 == 0) {
      puVar15 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar6 + *puVar10) * 0x10;
      puVar15 = (u32 *)LibC_malloc(iVar7);
      if (puVar15 == (u32 *)0x0) {
        puVar15 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
      puVar16 = (u32 *)*piVar9;
    }
    *(u32 **)(0 + iVar3) = puVar15;
    *(int *)(0 + iVar3) = *(int *)(0 + iVar3) << 6;
    *(int *)(0 + iVar3) = *(int *)(0 + iVar3) + 4;
    if (puVar16 != *(u32 **)(0 + iVar3)) {
      do {
        if (puVar15 != (u32 *)0x0) {
          uVar5 = puVar16[1];
          uVar17 = puVar16[2];
          *puVar15 = *puVar16;
          puVar15[1] = uVar5;
          puVar15[2] = uVar17;
          puVar15[3] = puVar16[3];
        }
        puVar16 = puVar16 + 4;
        puVar15 = puVar15 + 4;
      } while (puVar16 != *(u32 **)(0 + iVar3));
    }
    uVar6 = *puVar14;
    if (uVar6 == 1) {
      if (puVar15 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar15 = *(u32 *)psVar1;
        puVar15[1] = uVar5;
        puVar15[2] = uVar17;
        puVar15[3] = *(u32 *)(0 + iVar3);
      }
      puVar15 = puVar15 + 4;
    }
    else {
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (puVar15 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar15 = *(u32 *)psVar1;
          puVar15[1] = uVar5;
          puVar15[2] = uVar17;
          puVar15[3] = *(u32 *)(0 + iVar3);
        }
        puVar15 = puVar15 + 4;
      }
    }
    iVar12 = *piVar9;
    for (iVar18 = iVar12; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (iVar12 != 0) {
      LibC_free(iVar12);
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar15;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar16 = *(u32 *)psVar1;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
    *(int *)(0 + iVar3) = *(int *)(0 + iVar3) << 6;
    *(int *)(0 + iVar3) = *(int *)(0 + iVar3) + 4;
  }
  *(u16 *)(0 + iVar3) = 0xc;
  *(u16 *)(*(int *)(0 + iVar3) + 2) = 2;
  Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(*(u32 *)(0 + iVar3),*(u32 *)(0 + iVar3),
                0);
  uVar5 = farmer_NoOp(*(int *)(*(int *)(0 + iVar3) + 0x0000058C) +
                          0x00001BD8);
  *(u16 *)(0 + iVar3) = 0xc;
  *(u16 *)(*(int *)(0 + iVar3) + 2) = 2;
  uVar17 = *(u32 *)(0 + iVar3);
  *puVar29 = uVar5;
  Code_Lib_Syscall_Sub_0804E8F0(uVar17,*(u32 *)(0 + iVar3),0,0);
  piVar9 = (int *)hardware_GetField_0x00_8910(**(u32 **)(0 + iVar3));
  hardware_Sub_08008F0C(0 + iVar3,*(u32 *)(0 + iVar3),0x06003000,
                0x300);
  puVar15 = *(u32 **)(0 + iVar3);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    *(u32 **)(0 + iVar3) = puVar16;
    puVar14 = (u32 *)(0 + iVar3);
    *puVar14 = 1;
    uVar6 = *(int *)(0 + iVar3) - *piVar9 >> 4;
    *(u32 *)(0 + iVar3) = uVar6;
    puVar10 = (u32 *)(0 + iVar3);
    if (uVar6 < *puVar14) {
      puVar10 = puVar14;
    }
    if (uVar6 + *puVar10 == 0) {
      puVar16 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar6 + *puVar10) * 0x10;
      puVar16 = (u32 *)LibC_malloc(iVar7);
      if (puVar16 == (u32 *)0x0) {
        puVar16 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
    }
    *(u32 **)(0 + iVar3) = puVar16;
    puVar11 = (u32 *)*piVar9;
    if (puVar11 != *(u32 **)(0 + iVar3)) {
      do {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = puVar11[1];
          uVar17 = puVar11[2];
          *puVar16 = *puVar11;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = puVar11[3];
        }
        puVar11 = puVar11 + 4;
        puVar16 = puVar16 + 4;
      } while (puVar11 != *(u32 **)(0 + iVar3));
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = puVar15[1];
        uVar17 = puVar15[2];
        *puVar16 = *puVar15;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = puVar15[3];
      }
      puVar16 = puVar16 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = puVar15[1];
          uVar17 = puVar15[2];
          *puVar16 = *puVar15;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = puVar15[3];
        }
        puVar16 = puVar16 + 4;
      }
    }
    for (iVar18 = *piVar9; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (*piVar9 != 0) {
      LibC_free();
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar16;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = puVar15[1];
      uVar17 = puVar15[2];
      *puVar16 = *puVar15;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = puVar15[3];
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  iVar7 = *(int *)(*(int *)(0 + iVar3) + 0x18);
  iVar18 = *(int *)(0 + iVar3);
  *puVar30 = 0;
  *(u32 *)(0 + iVar3) = 0x20;
  code_0803EE94_Sub_0804E9F4(iVar7 + iVar18 + 4,0x180,0xc,2);
  iVar7 = 0x00001BD8;
  piVar9 = (int *)(*(int *)(0 + iVar3) + 0x0000058C);
  cVar4 = farmer_Sub_0800E53C(*piVar9 + 0x00001BD8);
  if (cVar4 != '\0') {
    iVar12 = *(int *)(0 + iVar3);
    iVar18 = *(int *)(*(int *)(0 + iVar3) + 0x18);
    *puVar31 = 4;
    *(u32 *)(0 + iVar3) = 0x20;
    code_0803EE94_Sub_0804E9F4(iVar18 + (iVar12 + 2) * 0x40 + 4,0x5d,1,1);
  }
  uVar6 = farmer_Sub_0800E530(*piVar9 + iVar7);
  uVar8 = 0;
  if (uVar6 != 0) {
    iVar7 = *(int *)(0 + iVar3);
    iVar18 = 8;
    do {
      iVar12 = *(int *)(*(int *)(0 + iVar3) + 0x18);
      *puVar32 = 3;
      *(u32 *)(0 + iVar3) = 0x20;
      code_0803EE94_Sub_0804E9F4(iVar12 + (iVar7 + 2) * 0x40 + iVar18,0x5c,1,1);
      iVar18 = iVar18 + 2;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  iVar7 = 0x00001CD4;
  *(u32 *)(0 + iVar3) = *(u32 *)(0 + iVar3);
  piVar9 = (int *)(*(int *)(0 + iVar3) + 0x0000058C);
  cVar4 = ScriptVM_Wrap_Func120(*piVar9 + 0x00001CD4);
  if (cVar4 == '\0') goto SUB_08061e00;
  uVar5 = ScriptVM_Func120(*piVar9 + iVar7);
  *(u32 *)(0 + iVar3) = uVar5;
  uVar5 = ScriptVM_Sub_080A01F8(*piVar9 + iVar7,*(u32 *)(0 + iVar3));
  *(u32 *)(0 + iVar3) = uVar5;
  if (*(int *)(0 + iVar3) - 3U < 0x1d) {
    switch(*(u32 *)((*(int *)(0 + iVar3) - 3U) * 4 + 0x08061668) & 0xfffffffe) {
    case 0x80616dc:
      *(u32 *)(0 + iVar3) = 0x08751A0C;
      *(u32 *)(0 + iVar3) = 0x08751A8C;
      break;
    case 0x80616f0:
      *(u32 *)(0 + iVar3) = 0x08752E4C;
      *(u32 *)(0 + iVar3) = 0x08752ECC;
      break;
    case 0x8061704:
      *(u32 *)(0 + iVar3) = 0x087524AC;
      *(u32 *)(0 + iVar3) = 0x0875252C;
      break;
    case 0x8061718:
      *(u32 *)(0 + iVar3) = 0x0875286C;
      *(u32 *)(0 + iVar3) = 0x087528EC;
      break;
    case 0x806172c:
      *(u32 *)(0 + iVar3) = 0x0875302C;
      *(u32 *)(0 + iVar3) = 0x087530AC;
      break;
    case 0x8061740:
      *(u32 *)(0 + iVar3) = 0x0875240C;
      *(u32 *)(0 + iVar3) = 0x0875248C;
      break;
    case 0x8061754:
      goto case_08061754;
    }
  }
  else {
case_08061754:
    *(u32 *)(0 + iVar3) = 0;
  }
  *(int *)(0 + iVar3) = *(int *)(0 + iVar3) + 5;
  if (*(int *)(0 + iVar3) != 0) {
    *psVar1 = (short)(*(int *)(0 + iVar3) << 3);
    *(u32 *)(0 + iVar3) = 0;
    piVar9 = (int *)(*(int *)(0 + iVar3) + 0x00000594);
    puVar16 = (u32 *)piVar9[1];
    if (puVar16 == (u32 *)piVar9[3]) {
      *(u32 **)(0 + iVar3) = puVar16;
      puVar14 = (u32 *)(0 + iVar3);
      *puVar14 = 1;
      puVar16 = (u32 *)*piVar9;
      uVar6 = *(int *)(0 + iVar3) - (int)puVar16 >> 4;
      *(u32 *)(0 + iVar3) = uVar6;
      puVar10 = (u32 *)(0 + iVar3);
      if (uVar6 < *puVar14) {
        puVar10 = puVar14;
      }
      if (uVar6 + *puVar10 == 0) {
        puVar15 = (u32 *)0x0;
        iVar7 = 0;
      }
      else {
        iVar7 = (uVar6 + *puVar10) * 0x10;
        puVar15 = (u32 *)LibC_malloc(iVar7);
        if (puVar15 == (u32 *)0x0) {
          puVar15 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
        }
        puVar16 = (u32 *)*piVar9;
      }
      *(u32 **)(0 + iVar3) = puVar15;
      *(int *)(0 + iVar3) = *(int *)(0 + iVar3) << 6;
      *(u8 **)(0 + iVar3) = 0 + iVar3;
      iVar18 = *(int *)(0 + iVar3) + 0x00000C5C;
      *(u8 **)(0 + iVar3) = 0 + iVar3;
      *(u8 **)(0 + iVar3) = 0 + iVar3;
      *(u8 **)(0 + iVar3) = 0 + iVar3;
      *(int *)(0 + iVar3) = *(int *)(0 + iVar3) + 5;
      for (; puVar16 != *(u32 **)(0 + iVar3); puVar16 = puVar16 + 4) {
        if (puVar15 != (u32 *)0x0) {
          uVar5 = puVar16[1];
          uVar17 = puVar16[2];
          *puVar15 = *puVar16;
          puVar15[1] = uVar5;
          puVar15[2] = uVar17;
          puVar15[3] = puVar16[3];
        }
        puVar15 = puVar15 + 4;
      }
      iVar12 = *(int *)(0 + iVar3);
      if (iVar12 == 1) {
        if (puVar15 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar15 = *(u32 *)psVar1;
          puVar15[1] = uVar5;
          puVar15[2] = uVar17;
          puVar15[3] = *(u32 *)(0 + iVar3);
        }
        puVar15 = puVar15 + 4;
      }
      else {
        for (; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (puVar15 != (u32 *)0x0) {
            uVar5 = *(u32 *)(0 + iVar3);
            uVar17 = *(u32 *)(0 + iVar3);
            *puVar15 = *(u32 *)psVar1;
            puVar15[1] = uVar5;
            puVar15[2] = uVar17;
            puVar15[3] = *(u32 *)(0 + iVar3);
          }
          puVar15 = puVar15 + 4;
        }
      }
      iVar13 = *piVar9;
      for (iVar12 = iVar13; iVar12 != piVar9[1]; iVar12 = iVar12 + 0x10) {
      }
      if (iVar13 != 0) {
        LibC_free(iVar13);
      }
      iVar12 = *(int *)(0 + iVar3);
      *piVar9 = *(int *)(0 + iVar3);
      piVar9[1] = (int)puVar15;
      piVar9[3] = iVar12 + iVar7;
    }
    else {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar16 = *(u32 *)psVar1;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = *(u32 *)(0 + iVar3);
      }
      piVar9[1] = piVar9[1] + 0x10;
      *(int *)(0 + iVar3) = *(int *)(0 + iVar3) << 6;
      *(u8 **)(0 + iVar3) = 0 + iVar3;
      iVar18 = *(int *)(0 + iVar3) + 0x00000C5C;
      *(u8 **)(0 + iVar3) = 0 + iVar3;
      *(u8 **)(0 + iVar3) = 0 + iVar3;
      *(u8 **)(0 + iVar3) = 0 + iVar3;
    }
    *(u16 *)(0 + iVar3) = 0xc;
    *(u16 *)(*(int *)(0 + iVar3) + 2) = 2;
    Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(*(u32 *)(0 + iVar3),iVar18,0);
    uVar5 = NpcSystem_Sub_0809FE3C(*(int *)(*(int *)(0 + iVar3) + 0x0000058C) +
                          0x00001CD4,*(u32 *)(0 + iVar3));
    *(u16 *)(0 + iVar3) = 0xc;
    *(u16 *)(*(int *)(0 + iVar3) + 2) = 2;
    uVar17 = *(u32 *)(0 + iVar3);
    *puVar33 = uVar5;
    Code_Lib_Syscall_Sub_0804E8F0(uVar17,iVar18,0,0);
    piVar9 = (int *)hardware_GetField_0x00_8910(**(u32 **)(0 + iVar3));
    hardware_Sub_08008F0C(0 + iVar3,iVar18,0x06003300,0x300);
    puVar15 = *(u32 **)(0 + iVar3);
    puVar16 = (u32 *)piVar9[1];
    if (puVar16 == (u32 *)piVar9[3]) {
      *(u32 **)(0 + iVar3) = puVar16;
      puVar14 = (u32 *)(0 + iVar3);
      *puVar14 = 1;
      uVar6 = *(int *)(0 + iVar3) - *piVar9 >> 4;
      *(u32 *)(0 + iVar3) = uVar6;
      puVar10 = (u32 *)(0 + iVar3);
      if (uVar6 < *puVar14) {
        puVar10 = puVar14;
      }
      if (uVar6 + *puVar10 == 0) {
        puVar16 = (u32 *)0x0;
        iVar7 = 0;
      }
      else {
        iVar7 = (uVar6 + *puVar10) * 0x10;
        puVar16 = (u32 *)LibC_malloc(iVar7);
        if (puVar16 == (u32 *)0x0) {
          puVar16 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
        }
      }
      *(u32 **)(0 + iVar3) = puVar16;
      puVar11 = (u32 *)*piVar9;
      if (puVar11 != *(u32 **)(0 + iVar3)) {
        do {
          if (puVar16 != (u32 *)0x0) {
            uVar5 = puVar11[1];
            uVar17 = puVar11[2];
            *puVar16 = *puVar11;
            puVar16[1] = uVar5;
            puVar16[2] = uVar17;
            puVar16[3] = puVar11[3];
          }
          puVar11 = puVar11 + 4;
          puVar16 = puVar16 + 4;
        } while (puVar11 != *(u32 **)(0 + iVar3));
      }
      iVar18 = *(int *)(0 + iVar3);
      if (iVar18 == 1) {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = puVar15[1];
          uVar17 = puVar15[2];
          *puVar16 = *puVar15;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = puVar15[3];
        }
        puVar16 = puVar16 + 4;
      }
      else {
        for (; iVar18 != 0; iVar18 = iVar18 + -1) {
          if (puVar16 != (u32 *)0x0) {
            uVar5 = puVar15[1];
            uVar17 = puVar15[2];
            *puVar16 = *puVar15;
            puVar16[1] = uVar5;
            puVar16[2] = uVar17;
            puVar16[3] = puVar15[3];
          }
          puVar16 = puVar16 + 4;
        }
      }
      for (iVar18 = *piVar9; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
      }
      if (*piVar9 != 0) {
        LibC_free();
      }
      iVar18 = *(int *)(0 + iVar3);
      *piVar9 = *(int *)(0 + iVar3);
      piVar9[1] = (int)puVar16;
      piVar9[3] = iVar18 + iVar7;
    }
    else {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = puVar15[1];
        uVar17 = puVar15[2];
        *puVar16 = *puVar15;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = puVar15[3];
      }
      piVar9[1] = piVar9[1] + 0x10;
    }
    iVar7 = *(int *)(*(int *)(0 + iVar3) + 0x18);
    iVar18 = *(int *)(0 + iVar3);
    *puVar34 = 0;
    *(u32 *)(0 + iVar3) = 0x20;
    code_0803EE94_Sub_0804E9F4(iVar7 + iVar18 + 4,0x198,0xc,2);
    *(u32 *)(0 + iVar3) = 10;
    uVar5 = func_0809E498(*(u32 *)(0 + iVar3));
    uVar6 = LibGcc_udivsi3(uVar5,0x00001999);
    *(u32 *)(0 + iVar3) = uVar6;
    puVar14 = *(u32 **)(0 + iVar3);
    if (uVar6 < *(u32 *)(0 + iVar3)) {
      puVar14 = *(u32 **)(0 + iVar3);
    }
    uVar8 = *puVar14;
    uVar6 = 0;
    if (uVar8 != 0) {
      iVar7 = *(int *)(0 + iVar3);
      iVar18 = 8;
      do {
        iVar12 = *(int *)(*(int *)(0 + iVar3) + 0x18);
        *puVar35 = 2;
        *(u32 *)(0 + iVar3) = 0x20;
        code_0803EE94_Sub_0804E9F4(iVar12 + (iVar7 + 2) * 0x40 + iVar18,0x58,1,1);
        iVar18 = iVar18 + 2;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar8);
    }
  }
  iVar7 = code_809E804_Sub_080A0384(*(int *)(*(int *)(0 + iVar3) + 0x0000058C) + 0x00001CD4
                       );
  *(int *)(0 + iVar3) = iVar7;
  if (iVar7 != 0) {
    *psVar1 = (short)(*(int *)(0 + iVar3) << 3);
    *(u32 *)(0 + iVar3) = 0x78;
    *(u32 *)(0 + iVar3) = 0x08751AAC;
    *(u32 *)(0 + iVar3) = 0x08751B2C;
    piVar9 = (int *)(*(int *)(0 + iVar3) + 0x00000594);
    puVar16 = (u32 *)piVar9[1];
    if (puVar16 == (u32 *)piVar9[3]) {
      *(u32 **)(0 + iVar3) = puVar16;
      puVar14 = (u32 *)(0 + iVar3);
      *puVar14 = 1;
      puVar16 = (u32 *)*piVar9;
      uVar6 = *(int *)(0 + iVar3) - (int)puVar16 >> 4;
      *(u32 *)(0 + iVar3) = uVar6;
      puVar10 = (u32 *)(0 + iVar3);
      if (uVar6 < *puVar14) {
        puVar10 = puVar14;
      }
      if (uVar6 + *puVar10 == 0) {
        puVar15 = (u32 *)0x0;
        iVar7 = 0;
      }
      else {
        iVar7 = (uVar6 + *puVar10) * 0x10;
        puVar15 = (u32 *)LibC_malloc(iVar7);
        if (puVar15 == (u32 *)0x0) {
          puVar15 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
        }
        puVar16 = (u32 *)*piVar9;
      }
      *(u32 **)(0 + iVar3) = puVar15;
      *(int *)(0 + iVar3) = *(int *)(0 + iVar3) << 6;
      *(u8 **)(0 + iVar3) = 0 + iVar3;
      iVar18 = *(int *)(0 + iVar3);
      *(u8 **)(0 + iVar3) = 0 + iVar3;
      *(u8 **)(0 + iVar3) = 0 + iVar3;
      *(u8 **)(0 + iVar3) = 0 + iVar3;
      if (puVar16 != *(u32 **)(0 + iVar3)) {
        do {
          if (puVar15 != (u32 *)0x0) {
            uVar5 = puVar16[1];
            uVar17 = puVar16[2];
            *puVar15 = *puVar16;
            puVar15[1] = uVar5;
            puVar15[2] = uVar17;
            puVar15[3] = puVar16[3];
          }
          puVar16 = puVar16 + 4;
          puVar15 = puVar15 + 4;
        } while (puVar16 != *(u32 **)(0 + iVar3));
      }
      iVar12 = *(int *)(0 + iVar3);
      if (iVar12 == 1) {
        if (puVar15 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar15 = *(u32 *)psVar1;
          puVar15[1] = uVar5;
          puVar15[2] = uVar17;
          puVar15[3] = *(u32 *)(0 + iVar3);
        }
        puVar15 = puVar15 + 4;
      }
      else {
        for (; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (puVar15 != (u32 *)0x0) {
            uVar5 = *(u32 *)(0 + iVar3);
            uVar17 = *(u32 *)(0 + iVar3);
            *puVar15 = *(u32 *)psVar1;
            puVar15[1] = uVar5;
            puVar15[2] = uVar17;
            puVar15[3] = *(u32 *)(0 + iVar3);
          }
          puVar15 = puVar15 + 4;
        }
      }
      iVar13 = *piVar9;
      for (iVar12 = iVar13; iVar12 != piVar9[1]; iVar12 = iVar12 + 0x10) {
      }
      if (iVar13 != 0) {
        LibC_free(iVar13);
      }
      iVar12 = *(int *)(0 + iVar3);
      *piVar9 = *(int *)(0 + iVar3);
      piVar9[1] = (int)puVar15;
      piVar9[3] = iVar12 + iVar7;
    }
    else {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar16 = *(u32 *)psVar1;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = *(u32 *)(0 + iVar3);
      }
      piVar9[1] = piVar9[1] + 0x10;
      *(int *)(0 + iVar3) = *(int *)(0 + iVar3) << 6;
      *(u8 **)(0 + iVar3) = 0 + iVar3;
      iVar18 = *(int *)(0 + iVar3);
      *(u8 **)(0 + iVar3) = 0 + iVar3;
      *(u8 **)(0 + iVar3) = 0 + iVar3;
      *(u8 **)(0 + iVar3) = 0 + iVar3;
    }
    iVar18 = iVar18 + 0xf60;
    *(u16 *)(0 + iVar3) = 0xc;
    *(u16 *)(*(int *)(0 + iVar3) + 2) = 2;
    Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(*(u32 *)(0 + iVar3),iVar18,0);
    uVar5 = code_809E804_Sub_0809EACC(*(u32 *)(0 + iVar3));
    *(u16 *)(0 + iVar3) = 0xc;
    *(u16 *)(*(int *)(0 + iVar3) + 2) = 2;
    uVar17 = *(u32 *)(0 + iVar3);
    *puVar36 = uVar5;
    Code_Lib_Syscall_Sub_0804E8F0(uVar17,iVar18,0,0);
    piVar9 = (int *)hardware_GetField_0x00_8910(**(u32 **)(0 + iVar3));
    hardware_Sub_08008F0C(0 + iVar3,iVar18,0x06003600,0x300);
    puVar15 = *(u32 **)(0 + iVar3);
    puVar16 = (u32 *)piVar9[1];
    if (puVar16 == (u32 *)piVar9[3]) {
      *(u32 **)(0 + iVar3) = puVar16;
      puVar14 = (u32 *)(0 + iVar3);
      *puVar14 = 1;
      uVar6 = *(int *)(0 + iVar3) - *piVar9 >> 4;
      *(u32 *)(0 + iVar3) = uVar6;
      puVar10 = (u32 *)(0 + iVar3);
      if (uVar6 < *puVar14) {
        puVar10 = puVar14;
      }
      if (uVar6 + *puVar10 == 0) {
        puVar16 = (u32 *)0x0;
        iVar7 = 0;
      }
      else {
        iVar7 = (uVar6 + *puVar10) * 0x10;
        puVar16 = (u32 *)LibC_malloc(iVar7);
        if (puVar16 == (u32 *)0x0) {
          puVar16 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
        }
      }
      *(u32 **)(0 + iVar3) = puVar16;
      puVar11 = (u32 *)*piVar9;
      if (puVar11 != *(u32 **)(0 + iVar3)) {
        do {
          if (puVar16 != (u32 *)0x0) {
            uVar5 = puVar11[1];
            uVar17 = puVar11[2];
            *puVar16 = *puVar11;
            puVar16[1] = uVar5;
            puVar16[2] = uVar17;
            puVar16[3] = puVar11[3];
          }
          puVar11 = puVar11 + 4;
          puVar16 = puVar16 + 4;
        } while (puVar11 != *(u32 **)(0 + iVar3));
      }
      iVar18 = *(int *)(0 + iVar3);
      if (iVar18 == 1) {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = puVar15[1];
          uVar17 = puVar15[2];
          *puVar16 = *puVar15;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = puVar15[3];
        }
        puVar16 = puVar16 + 4;
      }
      else {
        for (; iVar18 != 0; iVar18 = iVar18 + -1) {
          if (puVar16 != (u32 *)0x0) {
            uVar5 = puVar15[1];
            uVar17 = puVar15[2];
            *puVar16 = *puVar15;
            puVar16[1] = uVar5;
            puVar16[2] = uVar17;
            puVar16[3] = puVar15[3];
          }
          puVar16 = puVar16 + 4;
        }
      }
      for (iVar18 = *piVar9; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
      }
      if (*piVar9 != 0) {
        LibC_free();
      }
      iVar18 = *(int *)(0 + iVar3);
      *piVar9 = *(int *)(0 + iVar3);
      piVar9[1] = (int)puVar16;
      piVar9[3] = iVar18 + iVar7;
    }
    else {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = puVar15[1];
        uVar17 = puVar15[2];
        *puVar16 = *puVar15;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = puVar15[3];
      }
      piVar9[1] = piVar9[1] + 0x10;
    }
    iVar7 = *(int *)(*(int *)(0 + iVar3) + 0x18);
    iVar18 = *(int *)(0 + iVar3);
    *puVar37 = 0;
    *(u32 *)(0 + iVar3) = 0x20;
    code_0803EE94_Sub_0804E9F4(iVar7 + iVar18 + 0x22,0x1b0,0xc,2);
    *(u32 *)(0 + iVar3) = 10;
    uVar5 = func_0809E33C(*(u32 *)(0 + iVar3));
    uVar6 = LibGcc_udivsi3(uVar5,0x19);
    *(u32 *)(0 + iVar3) = uVar6;
    puVar14 = *(u32 **)(0 + iVar3);
    if (uVar6 < *(u32 *)(0 + iVar3)) {
      puVar14 = *(u32 **)(0 + iVar3);
    }
    uVar8 = *puVar14;
    uVar6 = 0;
    if (uVar8 != 0) {
      iVar7 = *(int *)(0 + iVar3);
      iVar18 = 0x26;
      do {
        iVar12 = *(int *)(*(int *)(0 + iVar3) + 0x18);
        *puVar38 = 2;
        *(u32 *)(0 + iVar3) = 0x20;
        code_0803EE94_Sub_0804E9F4(iVar12 + (iVar7 + 2) * 0x40 + iVar18,0x58,1,1);
        iVar18 = iVar18 + 2;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar8);
    }
  }
  *(u32 *)(0 + iVar3) = *(u32 *)(0 + iVar3);
SUB_08061e00:
  *psVar1 = (short)(*(int *)(0 + iVar3) << 3);
  *(u32 *)(0 + iVar3) = 0;
  *(u32 *)(0 + iVar3) = 0x08751E6C;
  *(u32 *)(0 + iVar3) = 0x08751EEC;
  piVar9 = (int *)(*(int *)(0 + iVar3) + 0x00000594);
  puVar15 = (u32 *)piVar9[1];
  puVar16 = (u32 *)piVar9[3];
  *(int *)(0 + iVar3) = *(int *)(0 + iVar3) << 3;
  if (puVar15 == puVar16) {
    puVar14 = (u32 *)(0 + iVar3);
    *puVar14 = 1;
    puVar16 = (u32 *)*piVar9;
    uVar6 = (int)puVar15 - (int)puVar16 >> 4;
    *(u32 *)(0 + iVar3) = uVar6;
    puVar10 = (u32 *)(0 + iVar3);
    if (uVar6 < *puVar14) {
      puVar10 = puVar14;
    }
    if (uVar6 + *puVar10 == 0) {
      puVar11 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar6 + *puVar10) * 0x10;
      puVar11 = (u32 *)LibC_malloc(iVar7);
      if (puVar11 == (u32 *)0x0) {
        puVar11 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
      puVar16 = (u32 *)*piVar9;
    }
    *(u32 **)(0 + iVar3) = puVar11;
    *(int *)(0 + iVar3) = *(int *)(0 + iVar3) << 6;
    *(int *)(0 + iVar3) = *(int *)(0 + iVar3) + 4;
    for (; puVar16 != puVar15; puVar16 = puVar16 + 4) {
      if (puVar11 != (u32 *)0x0) {
        uVar5 = puVar16[1];
        uVar17 = puVar16[2];
        *puVar11 = *puVar16;
        puVar11[1] = uVar5;
        puVar11[2] = uVar17;
        puVar11[3] = puVar16[3];
      }
      puVar11 = puVar11 + 4;
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar11 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar11 = *(u32 *)psVar1;
        puVar11[1] = uVar5;
        puVar11[2] = uVar17;
        puVar11[3] = *(u32 *)(0 + iVar3);
      }
      puVar11 = puVar11 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar11 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar11 = *(u32 *)psVar1;
          puVar11[1] = uVar5;
          puVar11[2] = uVar17;
          puVar11[3] = *(u32 *)(0 + iVar3);
        }
        puVar11 = puVar11 + 4;
      }
    }
    iVar12 = *piVar9;
    for (iVar18 = iVar12; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (iVar12 != 0) {
      LibC_free(iVar12);
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar11;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar15 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar15 = *(u32 *)psVar1;
      puVar15[1] = uVar5;
      puVar15[2] = uVar17;
      puVar15[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
    *(int *)(0 + iVar3) = *(int *)(0 + iVar3) << 6;
    *(int *)(0 + iVar3) = *(int *)(0 + iVar3) + 4;
  }
  iVar7 = 0x00001C70;
  piVar9 = (int *)(*(int *)(0 + iVar3) + 0x0000058C);
  cVar4 = func_0809B218(*piVar9 + 0x00001C70);
  if (cVar4 != '\0') {
    iVar12 = *(int *)(0 + iVar3);
    iVar18 = *(int *)(*(int *)(0 + iVar3) + 0x18);
    *puVar39 = 1;
    *(u32 *)(0 + iVar3) = 0x20;
    code_0803EE94_Sub_0804E9F4(iVar18 + (iVar12 + -2) * 0x40,0x54,2,2);
  }
  *(u16 *)(0 + iVar3) = 0xc;
  *(u16 *)(*(int *)(0 + iVar3) + 2) = 2;
  Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(*(u32 *)(0 + iVar3),*(u32 *)(0 + iVar3),
                0);
  uVar5 = Animal_GetName(*piVar9 + iVar7);
  *(u16 *)(0 + iVar3) = 0xc;
  *(u16 *)(*(int *)(0 + iVar3) + 2) = 2;
  uVar17 = *(u32 *)(0 + iVar3);
  *puVar40 = uVar5;
  Code_Lib_Syscall_Sub_0804E8F0(uVar17,*(u32 *)(0 + iVar3),0,0);
  piVar9 = (int *)hardware_GetField_0x00_8910(**(u32 **)(0 + iVar3));
  hardware_Sub_08008F0C(0 + iVar3,*(u32 *)(0 + iVar3),0x06003900,
                0x300);
  puVar15 = *(u32 **)(0 + iVar3);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    *(u32 **)(0 + iVar3) = puVar16;
    puVar14 = (u32 *)(0 + iVar3);
    *puVar14 = 1;
    uVar6 = *(int *)(0 + iVar3) - *piVar9 >> 4;
    *(u32 *)(0 + iVar3) = uVar6;
    puVar10 = (u32 *)(0 + iVar3);
    if (uVar6 < *puVar14) {
      puVar10 = puVar14;
    }
    if (uVar6 + *puVar10 == 0) {
      puVar16 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar6 + *puVar10) * 0x10;
      puVar16 = (u32 *)LibC_malloc(iVar7);
      if (puVar16 == (u32 *)0x0) {
        puVar16 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
    }
    *(u32 **)(0 + iVar3) = puVar16;
    puVar11 = (u32 *)*piVar9;
    if (puVar11 != *(u32 **)(0 + iVar3)) {
      do {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = puVar11[1];
          uVar17 = puVar11[2];
          *puVar16 = *puVar11;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = puVar11[3];
        }
        puVar11 = puVar11 + 4;
        puVar16 = puVar16 + 4;
      } while (puVar11 != *(u32 **)(0 + iVar3));
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = puVar15[1];
        uVar17 = puVar15[2];
        *puVar16 = *puVar15;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = puVar15[3];
      }
      puVar16 = puVar16 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = puVar15[1];
          uVar17 = puVar15[2];
          *puVar16 = *puVar15;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = puVar15[3];
        }
        puVar16 = puVar16 + 4;
      }
    }
    for (iVar18 = *piVar9; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (*piVar9 != 0) {
      LibC_free();
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar16;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = puVar15[1];
      uVar17 = puVar15[2];
      *puVar16 = *puVar15;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = puVar15[3];
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  iVar7 = *(int *)(*(int *)(0 + iVar3) + 0x18);
  iVar18 = *(int *)(0 + iVar3);
  *puVar41 = 0;
  *(u32 *)(0 + iVar3) = 0x20;
  code_0803EE94_Sub_0804E9F4(iVar7 + iVar18 + 4,0x1c8,0xc,2);
  *(u32 *)(0 + iVar3) = 10;
  uVar5 = func_0809B228(*(int *)(*(int *)(0 + iVar3) + 0x0000058C) +
                          0x00001C70);
  uVar6 = LibGcc_udivsi3(uVar5,0x19);
  *(u32 *)(0 + iVar3) = uVar6;
  puVar14 = *(u32 **)(0 + iVar3);
  if (uVar6 < *(u32 *)(0 + iVar3)) {
    puVar14 = *(u32 **)(0 + iVar3);
  }
  uVar8 = *puVar14;
  uVar6 = 0;
  if (uVar8 != 0) {
    iVar7 = *(int *)(0 + iVar3);
    iVar18 = 8;
    do {
      iVar12 = *(int *)(*(int *)(0 + iVar3) + 0x18);
      *puVar42 = 2;
      *(u32 *)(0 + iVar3) = 0x20;
      code_0803EE94_Sub_0804E9F4(iVar12 + (iVar7 + 2) * 0x40 + iVar18,0x58,1,1);
      iVar18 = iVar18 + 2;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
  }
  iVar18 = *(int *)(0 + iVar3);
  iVar7 = Farm_GetHorse(*(int *)(iVar18 + 0x0000058C) + 0x14);
  *(int *)(0 + iVar3) = iVar7;
  if (iVar7 != 0) {
    *psVar1 = *(short *)(0 + iVar3);
    *(u32 *)(0 + iVar3) = 0x78;
    *(u32 *)(0 + iVar3) = 0x087527CC;
    *(u32 *)(0 + iVar3) = 0x0875284C;
    piVar9 = (int *)(iVar18 + 0x00000594);
    puVar16 = (u32 *)piVar9[1];
    if (puVar16 == (u32 *)piVar9[3]) {
      *(u32 **)(0 + iVar3) = puVar16;
      puVar14 = (u32 *)(0 + iVar3);
      *puVar14 = 1;
      puVar16 = (u32 *)*piVar9;
      uVar6 = *(int *)(0 + iVar3) - (int)puVar16 >> 4;
      *(u32 *)(0 + iVar3) = uVar6;
      puVar10 = (u32 *)(0 + iVar3);
      if (uVar6 < *puVar14) {
        puVar10 = puVar14;
      }
      if (uVar6 + *puVar10 == 0) {
        puVar15 = (u32 *)0x0;
        iVar7 = 0;
      }
      else {
        iVar7 = (uVar6 + *puVar10) * 0x10;
        puVar15 = (u32 *)LibC_malloc(iVar7);
        if (puVar15 == (u32 *)0x0) {
          puVar15 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
        }
        puVar16 = (u32 *)*piVar9;
      }
      *(u32 **)(0 + iVar3) = puVar15;
      *(u8 **)(0 + iVar3) = 0 + iVar3;
      iVar18 = *(int *)(0 + iVar3) + 0x0000186C;
      *(u8 **)(0 + iVar3) = 0 + iVar3;
      *(u8 **)(0 + iVar3) = 0 + iVar3;
      *(u8 **)(0 + iVar3) = 0 + iVar3;
      if (puVar16 != *(u32 **)(0 + iVar3)) {
        do {
          if (puVar15 != (u32 *)0x0) {
            uVar5 = puVar16[1];
            uVar17 = puVar16[2];
            *puVar15 = *puVar16;
            puVar15[1] = uVar5;
            puVar15[2] = uVar17;
            puVar15[3] = puVar16[3];
          }
          puVar16 = puVar16 + 4;
          puVar15 = puVar15 + 4;
        } while (puVar16 != *(u32 **)(0 + iVar3));
      }
      iVar12 = *(int *)(0 + iVar3);
      if (iVar12 == 1) {
        if (puVar15 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar15 = *(u32 *)psVar1;
          puVar15[1] = uVar5;
          puVar15[2] = uVar17;
          puVar15[3] = *(u32 *)(0 + iVar3);
        }
        puVar15 = puVar15 + 4;
      }
      else {
        for (; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (puVar15 != (u32 *)0x0) {
            uVar5 = *(u32 *)(0 + iVar3);
            uVar17 = *(u32 *)(0 + iVar3);
            *puVar15 = *(u32 *)psVar1;
            puVar15[1] = uVar5;
            puVar15[2] = uVar17;
            puVar15[3] = *(u32 *)(0 + iVar3);
          }
          puVar15 = puVar15 + 4;
        }
      }
      iVar13 = *piVar9;
      for (iVar12 = iVar13; iVar12 != piVar9[1]; iVar12 = iVar12 + 0x10) {
      }
      if (iVar13 != 0) {
        LibC_free(iVar13);
      }
      iVar12 = *(int *)(0 + iVar3);
      *piVar9 = *(int *)(0 + iVar3);
      piVar9[1] = (int)puVar15;
      piVar9[3] = iVar12 + iVar7;
    }
    else {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar16 = *(u32 *)psVar1;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = *(u32 *)(0 + iVar3);
      }
      piVar9[1] = piVar9[1] + 0x10;
      *(u8 **)(0 + iVar3) = 0 + iVar3;
      iVar18 = *(int *)(0 + iVar3) + 0x0000186C;
      *(u8 **)(0 + iVar3) = 0 + iVar3;
      *(u8 **)(0 + iVar3) = 0 + iVar3;
      *(u8 **)(0 + iVar3) = 0 + iVar3;
    }
    cVar4 = func_0809B218(*(u32 *)(0 + iVar3));
    if (cVar4 != '\0') {
      iVar12 = *(int *)(0 + iVar3);
      iVar7 = *(int *)(*(int *)(0 + iVar3) + 0x18);
      *puVar43 = 1;
      *(u32 *)(0 + iVar3) = 0x20;
      code_0803EE94_Sub_0804E9F4(iVar7 + (iVar12 + -2) * 0x40 + 0x1e,0x54,2,2);
    }
    *(u16 *)(0 + iVar3) = 0xc;
    *(u16 *)(*(int *)(0 + iVar3) + 2) = 2;
    Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(*(u32 *)(0 + iVar3),iVar18,0);
    uVar5 = Animal_GetName(*(u32 *)(0 + iVar3));
    *(u16 *)(0 + iVar3) = 0xc;
    *(u16 *)(*(int *)(0 + iVar3) + 2) = 2;
    uVar17 = *(u32 *)(0 + iVar3);
    *puVar44 = uVar5;
    Code_Lib_Syscall_Sub_0804E8F0(uVar17,iVar18,0,0);
    piVar9 = (int *)hardware_GetField_0x00_8910(**(u32 **)(0 + iVar3));
    hardware_Sub_08008F0C(0 + iVar3,iVar18,0x06003C00,0x300);
    puVar15 = *(u32 **)(0 + iVar3);
    puVar16 = (u32 *)piVar9[1];
    if (puVar16 == (u32 *)piVar9[3]) {
      *(u32 **)(0 + iVar3) = puVar16;
      puVar14 = (u32 *)(0 + iVar3);
      *puVar14 = 1;
      uVar6 = *(int *)(0 + iVar3) - *piVar9 >> 4;
      *(u32 *)(0 + iVar3) = uVar6;
      puVar10 = (u32 *)(0 + iVar3);
      if (uVar6 < *puVar14) {
        puVar10 = puVar14;
      }
      if (uVar6 + *puVar10 == 0) {
        puVar16 = (u32 *)0x0;
        iVar7 = 0;
      }
      else {
        iVar7 = (uVar6 + *puVar10) * 0x10;
        puVar16 = (u32 *)LibC_malloc(iVar7);
        if (puVar16 == (u32 *)0x0) {
          puVar16 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
        }
      }
      *(u32 **)(0 + iVar3) = puVar16;
      puVar11 = (u32 *)*piVar9;
      if (puVar11 != *(u32 **)(0 + iVar3)) {
        do {
          if (puVar16 != (u32 *)0x0) {
            uVar5 = puVar11[1];
            uVar17 = puVar11[2];
            *puVar16 = *puVar11;
            puVar16[1] = uVar5;
            puVar16[2] = uVar17;
            puVar16[3] = puVar11[3];
          }
          puVar11 = puVar11 + 4;
          puVar16 = puVar16 + 4;
        } while (puVar11 != *(u32 **)(0 + iVar3));
      }
      iVar18 = *(int *)(0 + iVar3);
      if (iVar18 == 1) {
        if (puVar16 != (u32 *)0x0) {
          uVar5 = puVar15[1];
          uVar17 = puVar15[2];
          *puVar16 = *puVar15;
          puVar16[1] = uVar5;
          puVar16[2] = uVar17;
          puVar16[3] = puVar15[3];
        }
        puVar16 = puVar16 + 4;
      }
      else {
        for (; iVar18 != 0; iVar18 = iVar18 + -1) {
          if (puVar16 != (u32 *)0x0) {
            uVar5 = puVar15[1];
            uVar17 = puVar15[2];
            *puVar16 = *puVar15;
            puVar16[1] = uVar5;
            puVar16[2] = uVar17;
            puVar16[3] = puVar15[3];
          }
          puVar16 = puVar16 + 4;
        }
      }
      for (iVar18 = *piVar9; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
      }
      if (*piVar9 != 0) {
        LibC_free();
      }
      iVar18 = *(int *)(0 + iVar3);
      *piVar9 = *(int *)(0 + iVar3);
      piVar9[1] = (int)puVar16;
      piVar9[3] = iVar18 + iVar7;
    }
    else {
      if (puVar16 != (u32 *)0x0) {
        uVar5 = puVar15[1];
        uVar17 = puVar15[2];
        *puVar16 = *puVar15;
        puVar16[1] = uVar5;
        puVar16[2] = uVar17;
        puVar16[3] = puVar15[3];
      }
      piVar9[1] = piVar9[1] + 0x10;
    }
    iVar7 = *(int *)(*(int *)(0 + iVar3) + 0x18);
    iVar18 = *(int *)(0 + iVar3);
    *puVar45 = 0;
    *(u32 *)(0 + iVar3) = 0x20;
    code_0803EE94_Sub_0804E9F4(iVar7 + iVar18 + 0x22,0x1e0,0xc,2);
    *(u32 *)(0 + iVar3) = 10;
    uVar5 = func_0809B228(*(u32 *)(0 + iVar3));
    uVar6 = LibGcc_udivsi3(uVar5,0x19);
    *(u32 *)(0 + iVar3) = uVar6;
    puVar14 = *(u32 **)(0 + iVar3);
    if (uVar6 < *(u32 *)(0 + iVar3)) {
      puVar14 = *(u32 **)(0 + iVar3);
    }
    uVar8 = *puVar14;
    uVar6 = 0;
    if (uVar8 != 0) {
      iVar7 = *(int *)(0 + iVar3);
      iVar18 = 0x26;
      do {
        iVar12 = *(int *)(*(int *)(0 + iVar3) + 0x18);
        *puVar46 = 2;
        *(u32 *)(0 + iVar3) = 0x20;
        code_0803EE94_Sub_0804E9F4(iVar12 + (iVar7 + 2) * 0x40 + iVar18,0x58,1,1);
        iVar18 = iVar18 + 2;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar8);
    }
  }
  *(int *)(0 + iVar3) = *(int *)(0 + iVar3);
  *psVar1 = (short)(*(int *)(0 + iVar3) << 3);
  *(u32 *)(0 + iVar3) = 0x20;
  *(u32 *)(0 + iVar3) = 0x0875268C;
  *(u32 *)(0 + iVar3) = 0x0875270C;
  piVar9 = (int *)(*(int *)(0 + iVar3) + 0x00000594);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    puVar14 = (u32 *)(0 + iVar3);
    *puVar14 = 1;
    puVar15 = (u32 *)*piVar9;
    uVar6 = (int)puVar16 - (int)puVar15 >> 4;
    *(u32 *)(0 + iVar3) = uVar6;
    puVar10 = (u32 *)(0 + iVar3);
    if (uVar6 < *puVar14) {
      puVar10 = puVar14;
    }
    if (uVar6 + *puVar10 == 0) {
      puVar11 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar6 + *puVar10) * 0x10;
      puVar11 = (u32 *)LibC_malloc(iVar7);
      if (puVar11 == (u32 *)0x0) {
        puVar11 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
      puVar15 = (u32 *)*piVar9;
    }
    *(u32 **)(0 + iVar3) = puVar11;
    *(int *)(0 + iVar3) = *(int *)(0 + iVar3) << 6;
    for (; puVar15 != puVar16; puVar15 = puVar15 + 4) {
      if (puVar11 != (u32 *)0x0) {
        uVar5 = puVar15[1];
        uVar17 = puVar15[2];
        *puVar11 = *puVar15;
        puVar11[1] = uVar5;
        puVar11[2] = uVar17;
        puVar11[3] = puVar15[3];
      }
      puVar11 = puVar11 + 4;
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar11 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar11 = *(u32 *)psVar1;
        puVar11[1] = uVar5;
        puVar11[2] = uVar17;
        puVar11[3] = *(u32 *)(0 + iVar3);
      }
      puVar11 = puVar11 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar11 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar11 = *(u32 *)psVar1;
          puVar11[1] = uVar5;
          puVar11[2] = uVar17;
          puVar11[3] = *(u32 *)(0 + iVar3);
        }
        puVar11 = puVar11 + 4;
      }
    }
    iVar12 = *piVar9;
    for (iVar18 = iVar12; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (iVar12 != 0) {
      LibC_free(iVar12);
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar11;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar16 = *(u32 *)psVar1;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
    *(int *)(0 + iVar3) = *(int *)(0 + iVar3) << 6;
  }
  uVar5 = Coop_CountChickens(*(int *)(*(int *)(0 + iVar3) + 0x0000058C) + 0x410);
  iVar7 = *(int *)(*(int *)(0 + iVar3) + 0x18);
  iVar18 = *(int *)(0 + iVar3);
  *puVar47 = 0x20;
  code_0803EE94_Sub_0804EDB4(uVar5,iVar7 + iVar18 + 0x12,0x120,0);
  iVar7 = *(int *)(*(int *)(0 + iVar3) + 0x18);
  uVar6 = *(u32 *)(0 + iVar3);
  *puVar48 = 0;
  *(u32 *)(0 + iVar3) = 0x20;
  code_0803EE94_Sub_0804E9F4(iVar7 + iVar18 + 0x14,uVar6 >> 0x10,2,2);
  *(u32 *)(0 + iVar3) = 0x94;
  *(u32 *)(0 + iVar3) = 0x087525EC;
  *(u32 *)(0 + iVar3) = 0x0875266C;
  piVar9 = (int *)(*(int *)(0 + iVar3) + 0x00000594);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    puVar14 = (u32 *)(0 + iVar3);
    *puVar14 = 1;
    puVar15 = (u32 *)*piVar9;
    uVar6 = (int)puVar16 - (int)puVar15 >> 4;
    *(u32 *)(0 + iVar3) = uVar6;
    puVar10 = (u32 *)(0 + iVar3);
    if (uVar6 < *puVar14) {
      puVar10 = puVar14;
    }
    if (uVar6 + *puVar10 == 0) {
      puVar11 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar6 + *puVar10) * 0x10;
      puVar11 = (u32 *)LibC_malloc(iVar7);
      if (puVar11 == (u32 *)0x0) {
        puVar11 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
      puVar15 = (u32 *)*piVar9;
    }
    *(u32 **)(0 + iVar3) = puVar11;
    for (; puVar15 != puVar16; puVar15 = puVar15 + 4) {
      if (puVar11 != (u32 *)0x0) {
        uVar5 = puVar15[1];
        uVar17 = puVar15[2];
        *puVar11 = *puVar15;
        puVar11[1] = uVar5;
        puVar11[2] = uVar17;
        puVar11[3] = puVar15[3];
      }
      puVar11 = puVar11 + 4;
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar11 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar11 = *(u32 *)psVar1;
        puVar11[1] = uVar5;
        puVar11[2] = uVar17;
        puVar11[3] = *(u32 *)(0 + iVar3);
      }
      puVar11 = puVar11 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar11 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar11 = *(u32 *)psVar1;
          puVar11[1] = uVar5;
          puVar11[2] = uVar17;
          puVar11[3] = *(u32 *)(0 + iVar3);
        }
        puVar11 = puVar11 + 4;
      }
    }
    iVar12 = *piVar9;
    for (iVar18 = iVar12; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (iVar12 != 0) {
      LibC_free(iVar12);
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar11;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar16 = *(u32 *)psVar1;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  uVar5 = func_0800C568(*(int *)(*(int *)(0 + iVar3) + 0x0000058C) + 0x410);
  iVar7 = *(int *)(*(int *)(0 + iVar3) + 0x18);
  iVar18 = *(int *)(0 + iVar3);
  iVar12 = iVar18 * 0x40;
  *puVar49 = 0x20;
  code_0803EE94_Sub_0804EDB4(uVar5,iVar7 + iVar12 + 0x32,0x120,0);
  iVar7 = *(int *)(*(int *)(0 + iVar3) + 0x18);
  uVar6 = *(u32 *)(0 + iVar3);
  *puVar50 = 0;
  *(u32 *)(0 + iVar3) = 0x20;
  code_0803EE94_Sub_0804E9F4(iVar7 + iVar12 + 0x34,uVar6 >> 0x10,2,2);
  iVar18 = iVar18 + 3;
  *(int *)(0 + iVar3) = iVar18;
  *psVar1 = (short)iVar18 * 8;
  *(u32 *)(0 + iVar3) = 0x20;
  *(u32 *)(0 + iVar3) = 0x08751B4C;
  *(u32 *)(0 + iVar3) = 0x08751BCC;
  piVar9 = (int *)(*(int *)(0 + iVar3) + 0x00000594);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    puVar14 = (u32 *)(0 + iVar3);
    *puVar14 = 1;
    puVar15 = (u32 *)*piVar9;
    uVar6 = (int)puVar16 - (int)puVar15 >> 4;
    *(u32 *)(0 + iVar3) = uVar6;
    puVar10 = (u32 *)(0 + iVar3);
    if (uVar6 < *puVar14) {
      puVar10 = puVar14;
    }
    if (uVar6 + *puVar10 == 0) {
      puVar11 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar6 + *puVar10) * 0x10;
      puVar11 = (u32 *)LibC_malloc(iVar7);
      if (puVar11 == (u32 *)0x0) {
        puVar11 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
      puVar15 = (u32 *)*piVar9;
    }
    *(u32 **)(0 + iVar3) = puVar11;
    *(int *)(0 + iVar3) = *(int *)(0 + iVar3) << 6;
    for (; puVar15 != puVar16; puVar15 = puVar15 + 4) {
      if (puVar11 != (u32 *)0x0) {
        uVar5 = puVar15[1];
        uVar17 = puVar15[2];
        *puVar11 = *puVar15;
        puVar11[1] = uVar5;
        puVar11[2] = uVar17;
        puVar11[3] = puVar15[3];
      }
      puVar11 = puVar11 + 4;
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar11 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar11 = *(u32 *)psVar1;
        puVar11[1] = uVar5;
        puVar11[2] = uVar17;
        puVar11[3] = *(u32 *)(0 + iVar3);
      }
      puVar11 = puVar11 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar11 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar11 = *(u32 *)psVar1;
          puVar11[1] = uVar5;
          puVar11[2] = uVar17;
          puVar11[3] = *(u32 *)(0 + iVar3);
        }
        puVar11 = puVar11 + 4;
      }
    }
    iVar12 = *piVar9;
    for (iVar18 = iVar12; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (iVar12 != 0) {
      LibC_free(iVar12);
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar11;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar16 = *(u32 *)psVar1;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
    *(int *)(0 + iVar3) = *(int *)(0 + iVar3) << 6;
  }
  uVar5 = Barn_CountCows(*(int *)(*(int *)(0 + iVar3) + 0x0000058C) + 0x5f0);
  iVar7 = *(int *)(*(int *)(0 + iVar3) + 0x18);
  iVar18 = *(int *)(0 + iVar3);
  *puVar51 = 0x20;
  code_0803EE94_Sub_0804EDB4(uVar5,iVar7 + iVar18 + 0x12,0x120,0);
  iVar7 = *(int *)(*(int *)(0 + iVar3) + 0x18);
  uVar6 = *(u32 *)(0 + iVar3);
  *puVar52 = 0;
  *(u32 *)(0 + iVar3) = 0x20;
  code_0803EE94_Sub_0804E9F4(iVar7 + iVar18 + 0x14,uVar6 >> 0x10,2,2);
  *(u32 *)(0 + iVar3) = 0x94;
  *(u32 *)(0 + iVar3) = 0x0875236C;
  *(u32 *)(0 + iVar3) = 0x087523EC;
  piVar9 = (int *)(*(int *)(0 + iVar3) + 0x00000594);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    puVar14 = (u32 *)(0 + iVar3);
    *puVar14 = 1;
    puVar15 = (u32 *)*piVar9;
    uVar6 = (int)puVar16 - (int)puVar15 >> 4;
    *(u32 *)(0 + iVar3) = uVar6;
    puVar10 = (u32 *)(0 + iVar3);
    if (uVar6 < *puVar14) {
      puVar10 = puVar14;
    }
    if (uVar6 + *puVar10 == 0) {
      puVar11 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar6 + *puVar10) * 0x10;
      puVar11 = (u32 *)LibC_malloc(iVar7);
      if (puVar11 == (u32 *)0x0) {
        puVar11 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
      puVar15 = (u32 *)*piVar9;
    }
    *(u32 **)(0 + iVar3) = puVar11;
    for (; puVar15 != puVar16; puVar15 = puVar15 + 4) {
      if (puVar11 != (u32 *)0x0) {
        uVar5 = puVar15[1];
        uVar17 = puVar15[2];
        *puVar11 = *puVar15;
        puVar11[1] = uVar5;
        puVar11[2] = uVar17;
        puVar11[3] = puVar15[3];
      }
      puVar11 = puVar11 + 4;
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar11 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar11 = *(u32 *)psVar1;
        puVar11[1] = uVar5;
        puVar11[2] = uVar17;
        puVar11[3] = *(u32 *)(0 + iVar3);
      }
      puVar11 = puVar11 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar11 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar11 = *(u32 *)psVar1;
          puVar11[1] = uVar5;
          puVar11[2] = uVar17;
          puVar11[3] = *(u32 *)(0 + iVar3);
        }
        puVar11 = puVar11 + 4;
      }
    }
    iVar12 = *piVar9;
    for (iVar18 = iVar12; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (iVar12 != 0) {
      LibC_free(iVar12);
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar11;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar16 = *(u32 *)psVar1;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  uVar5 = func_0800CE6C(*(int *)(*(int *)(0 + iVar3) + 0x0000058C) + 0x5f0);
  iVar7 = *(int *)(*(int *)(0 + iVar3) + 0x18);
  iVar18 = *(int *)(0 + iVar3);
  iVar12 = iVar18 * 0x40;
  *puVar53 = 0x20;
  code_0803EE94_Sub_0804EDB4(uVar5,iVar7 + iVar12 + 0x32,0x120,0);
  iVar7 = *(int *)(*(int *)(0 + iVar3) + 0x18);
  uVar6 = *(u32 *)(0 + iVar3);
  *puVar54 = 0;
  *(u32 *)(0 + iVar3) = 0x20;
  code_0803EE94_Sub_0804E9F4(iVar7 + iVar12 + 0x34,uVar6 >> 0x10,2,2);
  iVar18 = iVar18 + 3;
  *(int *)(0 + iVar3) = iVar18;
  *psVar1 = (short)iVar18 * 8;
  *(u32 *)(0 + iVar3) = 0x20;
  *(u32 *)(0 + iVar3) = 0x0875320C;
  *(u32 *)(0 + iVar3) = 0x0875328C;
  piVar9 = (int *)(*(int *)(0 + iVar3) + 0x00000594);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    puVar14 = (u32 *)(0 + iVar3);
    *puVar14 = 1;
    puVar15 = (u32 *)*piVar9;
    uVar6 = (int)puVar16 - (int)puVar15 >> 4;
    *(u32 *)(0 + iVar3) = uVar6;
    puVar10 = (u32 *)(0 + iVar3);
    if (uVar6 < *puVar14) {
      puVar10 = puVar14;
    }
    if (uVar6 + *puVar10 == 0) {
      puVar11 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar6 + *puVar10) * 0x10;
      puVar11 = (u32 *)LibC_malloc(iVar7);
      if (puVar11 == (u32 *)0x0) {
        puVar11 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
      puVar15 = (u32 *)*piVar9;
    }
    *(u32 **)(0 + iVar3) = puVar11;
    for (; puVar15 != puVar16; puVar15 = puVar15 + 4) {
      if (puVar11 != (u32 *)0x0) {
        uVar5 = puVar15[1];
        uVar17 = puVar15[2];
        *puVar11 = *puVar15;
        puVar11[1] = uVar5;
        puVar11[2] = uVar17;
        puVar11[3] = puVar15[3];
      }
      puVar11 = puVar11 + 4;
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar11 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar11 = *(u32 *)psVar1;
        puVar11[1] = uVar5;
        puVar11[2] = uVar17;
        puVar11[3] = *(u32 *)(0 + iVar3);
      }
      puVar11 = puVar11 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar11 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar11 = *(u32 *)psVar1;
          puVar11[1] = uVar5;
          puVar11[2] = uVar17;
          puVar11[3] = *(u32 *)(0 + iVar3);
        }
        puVar11 = puVar11 + 4;
      }
    }
    iVar12 = *piVar9;
    for (iVar18 = iVar12; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (iVar12 != 0) {
      LibC_free(iVar12);
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar11;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar16 = *(u32 *)psVar1;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  uVar5 = Barn_CountSheeps(*(int *)(*(int *)(0 + iVar3) + 0x0000058C) + 0x5f0);
  iVar7 = *(int *)(*(int *)(0 + iVar3) + 0x18);
  iVar18 = *(int *)(0 + iVar3);
  iVar12 = iVar18 * 0x40;
  *puVar55 = 0x20;
  code_0803EE94_Sub_0804EDB4(uVar5,iVar7 + iVar12 + 0x12,0x120,0);
  iVar7 = *(int *)(*(int *)(0 + iVar3) + 0x18);
  uVar6 = *(u32 *)(0 + iVar3);
  *puVar56 = 0;
  *(u32 *)(0 + iVar3) = 0x20;
  code_0803EE94_Sub_0804E9F4(iVar7 + iVar12 + 0x14,uVar6 >> 0x10,2,2);
  iVar18 = iVar18 + 3;
  *(int *)(0 + iVar3) = iVar18;
  iVar18 = iVar18 * 8;
  *psVar1 = (short)iVar18;
  *(u32 *)(0 + iVar3) = 0x20;
  *(u32 *)(0 + iVar3) = 0x0875316C;
  *(u32 *)(0 + iVar3) = 0x087531EC;
  piVar9 = (int *)(*(int *)(0 + iVar3) + 0x00000594);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    puVar14 = (u32 *)(0 + iVar3);
    *puVar14 = 1;
    puVar15 = (u32 *)*piVar9;
    uVar6 = (int)puVar16 - (int)puVar15 >> 4;
    *(u32 *)(0 + iVar3) = uVar6;
    puVar10 = (u32 *)(0 + iVar3);
    if (uVar6 < *puVar14) {
      puVar10 = puVar14;
    }
    if (uVar6 + *puVar10 == 0) {
      puVar11 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar6 + *puVar10) * 0x10;
      puVar11 = (u32 *)LibC_malloc(iVar7);
      if (puVar11 == (u32 *)0x0) {
        puVar11 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
      puVar15 = (u32 *)*piVar9;
    }
    *(u32 **)(0 + iVar3) = puVar11;
    *(int *)(0 + iVar3) = *(int *)(0 + iVar3) << 6;
    *(int *)(0 + iVar3) = *(int *)(0 + iVar3) + 3;
    *(int *)(0 + iVar3) = *(int *)(0 + iVar3) << 3;
    for (; puVar15 != puVar16; puVar15 = puVar15 + 4) {
      if (puVar11 != (u32 *)0x0) {
        uVar5 = puVar15[1];
        uVar17 = puVar15[2];
        *puVar11 = *puVar15;
        puVar11[1] = uVar5;
        puVar11[2] = uVar17;
        puVar11[3] = puVar15[3];
      }
      puVar11 = puVar11 + 4;
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar11 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar11 = *(u32 *)psVar1;
        puVar11[1] = uVar5;
        puVar11[2] = uVar17;
        puVar11[3] = *(u32 *)(0 + iVar3);
      }
      puVar11 = puVar11 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar11 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar11 = *(u32 *)psVar1;
          puVar11[1] = uVar5;
          puVar11[2] = uVar17;
          puVar11[3] = *(u32 *)(0 + iVar3);
        }
        puVar11 = puVar11 + 4;
      }
    }
    iVar12 = *piVar9;
    for (iVar18 = iVar12; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (iVar12 != 0) {
      LibC_free(iVar12);
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar11;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar16 = *(u32 *)psVar1;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
    *(int *)(0 + iVar3) = *(int *)(0 + iVar3) << 6;
    *(int *)(0 + iVar3) = *(int *)(0 + iVar3) + 3;
    *(int *)(0 + iVar3) = iVar18;
  }
  uVar5 = ScriptVM_Proc134(*(int *)(*(int *)(0 + iVar3) + 0x0000058C) + 0x00002214
                       );
  iVar7 = *(int *)(*(int *)(0 + iVar3) + 0x18);
  iVar18 = *(int *)(0 + iVar3);
  *puVar57 = 0x20;
  code_0803EE94_Sub_0804EDB4(uVar5,iVar7 + iVar18 + 0x16,0x120,0);
  iVar7 = *(int *)(*(int *)(0 + iVar3) + 0x18);
  uVar6 = *(u32 *)(0 + iVar3);
  *puVar58 = 0;
  *(u32 *)(0 + iVar3) = 0x20;
  code_0803EE94_Sub_0804E9F4(iVar7 + iVar18 + 0x18,uVar6 >> 0x10,2,2);
  *psVar1 = *(short *)(0 + iVar3);
  *(u32 *)(0 + iVar3) = 0x94;
  *(u32 *)(0 + iVar3) = 0x08752EEC;
  *(u32 *)(0 + iVar3) = 0x08752F6C;
  piVar9 = (int *)(*(int *)(0 + iVar3) + 0x00000594);
  puVar16 = (u32 *)piVar9[1];
  if (puVar16 == (u32 *)piVar9[3]) {
    puVar14 = (u32 *)(0 + iVar3);
    *puVar14 = 1;
    puVar15 = (u32 *)*piVar9;
    uVar6 = (int)puVar16 - (int)puVar15 >> 4;
    *(u32 *)(0 + iVar3) = uVar6;
    puVar10 = (u32 *)(0 + iVar3);
    if (uVar6 < *puVar14) {
      puVar10 = puVar14;
    }
    if (uVar6 + *puVar10 == 0) {
      puVar11 = (u32 *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar6 + *puVar10) * 0x10;
      puVar11 = (u32 *)LibC_malloc(iVar7);
      if (puVar11 == (u32 *)0x0) {
        puVar11 = (u32 *)code_linkonce_Sub_080D3BC0(iVar7);
      }
      puVar15 = (u32 *)*piVar9;
    }
    *(u32 **)(0 + iVar3) = puVar11;
    for (; puVar15 != puVar16; puVar15 = puVar15 + 4) {
      if (puVar11 != (u32 *)0x0) {
        uVar5 = puVar15[1];
        uVar17 = puVar15[2];
        *puVar11 = *puVar15;
        puVar11[1] = uVar5;
        puVar11[2] = uVar17;
        puVar11[3] = puVar15[3];
      }
      puVar11 = puVar11 + 4;
    }
    iVar18 = *(int *)(0 + iVar3);
    if (iVar18 == 1) {
      if (puVar11 != (u32 *)0x0) {
        uVar5 = *(u32 *)(0 + iVar3);
        uVar17 = *(u32 *)(0 + iVar3);
        *puVar11 = *(u32 *)psVar1;
        puVar11[1] = uVar5;
        puVar11[2] = uVar17;
        puVar11[3] = *(u32 *)(0 + iVar3);
      }
      puVar11 = puVar11 + 4;
    }
    else {
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (puVar11 != (u32 *)0x0) {
          uVar5 = *(u32 *)(0 + iVar3);
          uVar17 = *(u32 *)(0 + iVar3);
          *puVar11 = *(u32 *)psVar1;
          puVar11[1] = uVar5;
          puVar11[2] = uVar17;
          puVar11[3] = *(u32 *)(0 + iVar3);
        }
        puVar11 = puVar11 + 4;
      }
    }
    iVar12 = *piVar9;
    for (iVar18 = iVar12; iVar18 != piVar9[1]; iVar18 = iVar18 + 0x10) {
    }
    if (iVar12 != 0) {
      LibC_free(iVar12);
    }
    iVar18 = *(int *)(0 + iVar3);
    *piVar9 = *(int *)(0 + iVar3);
    piVar9[1] = (int)puVar11;
    piVar9[3] = iVar18 + iVar7;
  }
  else {
    if (puVar16 != (u32 *)0x0) {
      uVar5 = *(u32 *)(0 + iVar3);
      uVar17 = *(u32 *)(0 + iVar3);
      *puVar16 = *(u32 *)psVar1;
      puVar16[1] = uVar5;
      puVar16[2] = uVar17;
      puVar16[3] = *(u32 *)(0 + iVar3);
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  uVar5 = func_08009AF8(*(int *)(*(int *)(0 + iVar3) + 0x0000058C) + 0x14);
  iVar7 = *(int *)(*(int *)(0 + iVar3) + 0x18);
  iVar18 = *(int *)(0 + iVar3);
  *puVar59 = 0x20;
  code_0803EE94_Sub_0804EDB4(uVar5,iVar7 + iVar18 + 0x32,0x120,0);
  iVar7 = *(int *)(*(int *)(0 + iVar3) + 0x18);
  uVar6 = *(u32 *)(0 + iVar3);
  *puVar60 = 0;
  *(u32 *)(0 + iVar3) = 0x20;
  code_0803EE94_Sub_0804E9F4(iVar7 + iVar18 + 0x34,uVar6 >> 0x10,2,2);
  code_0803EE94_Sub_08075E24(*(u32 *)(0 + iVar3),
                (*(int *)(0 + iVar3) << 0x13) >> 0x10);
  return (*(u32 *)(0 + iVar3));
}

/* 0x08062E9C (3944B) | IntroSequence_Ctor_2E9C (orig: func_08062E9C) | origin: wip | domain: IntroSequence | HIGH / vtable_algebra */
u32 IntroSequence_Ctor_2E9C(u32 *self) {
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  u32 *puVar5;
  int iVar6;
  u32 *puVar7;
  u32 *puVar8;
  u32 uVar9;
  u32 uVar10;
  u32 uStack_110;
  u32 uStack_10c;
  u32 uStack_108;
  u32 uStack_104;
  u32 uStack_100;
  u32 uStack_fc;
  int iStack_f8;
  int iStack_f4;
  u32 uStack_f0;
  int iStack_ec;
  int iStack_e8;
  u32 uStack_e4;
  u32 uStack_e0;
  int iStack_dc;
  int iStack_d8;
  u32 uStack_d4;
  int iStack_d0;
  int iStack_cc;
  u32 uStack_c8;
  int iStack_c4;
  int iStack_c0;
  u32 uStack_bc;
  int iStack_b8;
  int iStack_b4;
  u32 uStack_b0;
  int iStack_ac;
  int iStack_a8;
  u32 uStack_a4;
  int iStack_a0;
  int iStack_9c;
  u32 uStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  u32 *puStack_6c;
  u32 *puStack_68;
  u32 *puStack_64;
  u32 *puStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  u32 *puStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  u32 *puStack_40;
  u32 *puStack_3c;
  u32 *puStack_38;
  u32 *puStack_34;
  u32 *puStack_30;
  u32 *puStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  puStack_6c = self;
  code_0803EE94_7B88_Create(self);
  *(u32 *)((int)puStack_6c + 0x000005B4) = 0x080E7A68;
  iVar1 = 0xf;
  puStack_40 = &uStack_f0;
  puStack_3c = &uStack_e4;
  puStack_38 = &uStack_e0;
  puStack_34 = &uStack_d4;
  puStack_30 = &uStack_c8;
  puStack_2c = &uStack_bc;
  puStack_68 = &uStack_b0;
  puStack_64 = &uStack_a4;
  puStack_60 = &uStack_98;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  piVar2 = (int *)hardware_GetField_0x00_8910(*puStack_6c);
  uStack_100 = 0x20008;
  iVar1 = (int)puStack_6c + 0x000005BC;
  Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(0x20008,iVar1,0);
  uStack_fc = 0x20008;
  Code_Lib_Syscall_Sub_0804E8F0(0x20008,iVar1,0,0,0x080FB838);
  hardware_Sub_08008F0C(&uStack_110,iVar1,0x06000700,0x200);
  puVar5 = (u32 *)piVar2[1];
  if (puVar5 == (u32 *)piVar2[3]) {
    iStack_f4 = 1;
    puVar7 = (u32 *)*piVar2;
    iStack_f8 = (int)puVar5 - (int)puVar7 >> 4;
    piVar3 = &iStack_f8;
    if (iStack_f8 == 0) {
      piVar3 = &iStack_f4;
    }
    puStack_28 = puVar5;
    if (iStack_f8 + *piVar3 == 0) {
      puStack_24 = (u32 *)0x0;
      iVar1 = 0;
    }
    else {
      iVar1 = (iStack_f8 + *piVar3) * 0x10;
      puStack_24 = (u32 *)LibC_malloc(iVar1);
      if (puStack_24 == (u32 *)0x0) {
        puStack_24 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
      }
      puVar7 = (u32 *)*piVar2;
    }
    puVar5 = puStack_6c;
    iStack_4c = (int)puStack_6c + 0x000009C4;
    puStack_50 = puStack_6c + 0x334;
    iStack_44 = (int)puStack_6c + 0x00000E54;
    iStack_58 = (int)puStack_6c + 0x00000FD8;
    iStack_48 = (int)puStack_6c + 0x0000115C;
    iStack_5c = (int)puStack_6c + 0x00000BC8;
    iStack_54 = (int)puStack_6c + 0x00000C4C;
    puVar8 = puStack_24;
    for (; puVar7 != puStack_28; puVar7 = puVar7 + 4) {
      if (puVar8 != (u32 *)0x0) {
        uVar9 = puVar7[1];
        uVar10 = puVar7[2];
        *puVar8 = *puVar7;
        puVar8[1] = uVar9;
        puVar8[2] = uVar10;
        puVar8[3] = puVar7[3];
      }
      puVar8 = puVar8 + 4;
    }
    iVar4 = iStack_f4;
    if (iStack_f4 == 1) {
      if (puVar8 != (u32 *)0x0) {
        *puVar8 = uStack_110;
        puVar8[1] = uStack_10c;
        puVar8[2] = uStack_108;
        puVar8[3] = uStack_104;
      }
      puVar8 = puVar8 + 4;
    }
    else {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar8 != (u32 *)0x0) {
          *puVar8 = uStack_110;
          puVar8[1] = uStack_10c;
          puVar8[2] = uStack_108;
          puVar8[3] = uStack_104;
        }
        puVar8 = puVar8 + 4;
      }
    }
    iVar6 = *piVar2;
    for (iVar4 = iVar6; iVar4 != piVar2[1]; iVar4 = iVar4 + 0x10) {
    }
    if (iVar6 != 0) {
      LibC_free(iVar6);
    }
    *piVar2 = (int)puStack_24;
    piVar2[1] = (int)puVar8;
    piVar2[3] = (int)puStack_24 + iVar1;
  }
  else {
    if (puVar5 != (u32 *)0x0) {
      *puVar5 = uStack_110;
      puVar5[1] = uStack_10c;
      puVar5[2] = uStack_108;
      puVar5[3] = uStack_104;
    }
    piVar2[1] = piVar2[1] + 0x10;
    iStack_4c = (int)puStack_6c + 0x000009C4;
    puStack_50 = puStack_6c + 0x334;
    iStack_44 = (int)puStack_6c + 0x00000E54;
    iStack_58 = (int)puStack_6c + 0x00000FD8;
    iStack_48 = (int)puStack_6c + 0x0000115C;
    iStack_5c = (int)puStack_6c + 0x00000BC8;
    iStack_54 = (int)puStack_6c + 0x00000C4C;
    puVar5 = puStack_6c;
  }
  uStack_f0 = ((u16)(8));
  *(u16 *)((int)puStack_40 + 2) = 2;
  Code_Lib_Syscall_Sub_0804E8F0(uStack_f0,puVar5 + 0x1f0,0,0,0x080FB844);
  hardware_Sub_08008F0C(&uStack_110,puVar5 + 0x1f0,0x06000900,0x200);
  puVar5 = (u32 *)piVar2[1];
  if (puVar5 == (u32 *)piVar2[3]) {
    iStack_e8 = 1;
    puVar7 = (u32 *)*piVar2;
    iStack_ec = (int)puVar5 - (int)puVar7 >> 4;
    piVar3 = &iStack_ec;
    if (iStack_ec == 0) {
      piVar3 = &iStack_e8;
    }
    if (iStack_ec + *piVar3 == 0) {
      puVar8 = (u32 *)0x0;
      iVar1 = 0;
      puStack_24 = puVar8;
    }
    else {
      iVar1 = (iStack_ec + *piVar3) * 0x10;
      puVar8 = (u32 *)LibC_malloc(iVar1);
      if (puVar8 == (u32 *)0x0) {
        puVar8 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
      }
      puVar7 = (u32 *)*piVar2;
      puStack_24 = puVar8;
    }
    for (; puVar7 != puVar5; puVar7 = puVar7 + 4) {
      if (puVar8 != (u32 *)0x0) {
        uVar9 = puVar7[1];
        uVar10 = puVar7[2];
        *puVar8 = *puVar7;
        puVar8[1] = uVar9;
        puVar8[2] = uVar10;
        puVar8[3] = puVar7[3];
      }
      puVar8 = puVar8 + 4;
    }
    iVar4 = iStack_e8;
    if (iStack_e8 == 1) {
      if (puVar8 != (u32 *)0x0) {
        *puVar8 = uStack_110;
        puVar8[1] = uStack_10c;
        puVar8[2] = uStack_108;
        puVar8[3] = uStack_104;
      }
      puVar8 = puVar8 + 4;
    }
    else {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar8 != (u32 *)0x0) {
          *puVar8 = uStack_110;
          puVar8[1] = uStack_10c;
          puVar8[2] = uStack_108;
          puVar8[3] = uStack_104;
        }
        puVar8 = puVar8 + 4;
      }
    }
    iVar6 = *piVar2;
    for (iVar4 = iVar6; iVar4 != piVar2[1]; iVar4 = iVar4 + 0x10) {
    }
    if (iVar6 != 0) {
      LibC_free(iVar6);
    }
    *piVar2 = (int)puStack_24;
    piVar2[1] = (int)puVar8;
    piVar2[3] = (int)puStack_24 + iVar1;
  }
  else {
    if (puVar5 != (u32 *)0x0) {
      *puVar5 = uStack_110;
      puVar5[1] = uStack_10c;
      puVar5[2] = uStack_108;
      puVar5[3] = uStack_104;
    }
    piVar2[1] = piVar2[1] + 0x10;
  }
  uStack_e4 = ((u16)(8));
  *(u16 *)((int)puStack_3c + 2) = 2;
  Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(uStack_e4,iStack_4c,0);
  uStack_e0 = ((u16)(8));
  *(u16 *)((int)puStack_38 + 2) = 2;
  Code_Lib_Syscall_Sub_0804E8F0(uStack_e0,iStack_4c,0,0,0x080FB850);
  hardware_Sub_08008F0C(&uStack_110,iStack_4c,0x06000B00,0x200);
  puVar5 = (u32 *)piVar2[1];
  if (puVar5 == (u32 *)piVar2[3]) {
    iStack_d8 = 1;
    puVar7 = (u32 *)*piVar2;
    iStack_dc = (int)puVar5 - (int)puVar7 >> 4;
    piVar3 = &iStack_dc;
    if (iStack_dc == 0) {
      piVar3 = &iStack_d8;
    }
    if (iStack_dc + *piVar3 == 0) {
      puVar8 = (u32 *)0x0;
      iVar1 = 0;
      puStack_24 = puVar8;
    }
    else {
      iVar1 = (iStack_dc + *piVar3) * 0x10;
      puVar8 = (u32 *)LibC_malloc(iVar1);
      if (puVar8 == (u32 *)0x0) {
        puVar8 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
      }
      puVar7 = (u32 *)*piVar2;
      puStack_24 = puVar8;
    }
    for (; puVar7 != puVar5; puVar7 = puVar7 + 4) {
      if (puVar8 != (u32 *)0x0) {
        uVar9 = puVar7[1];
        uVar10 = puVar7[2];
        *puVar8 = *puVar7;
        puVar8[1] = uVar9;
        puVar8[2] = uVar10;
        puVar8[3] = puVar7[3];
      }
      puVar8 = puVar8 + 4;
    }
    iVar4 = iStack_d8;
    if (iStack_d8 == 1) {
      if (puVar8 != (u32 *)0x0) {
        *puVar8 = uStack_110;
        puVar8[1] = uStack_10c;
        puVar8[2] = uStack_108;
        puVar8[3] = uStack_104;
      }
      puVar8 = puVar8 + 4;
    }
    else {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar8 != (u32 *)0x0) {
          *puVar8 = uStack_110;
          puVar8[1] = uStack_10c;
          puVar8[2] = uStack_108;
          puVar8[3] = uStack_104;
        }
        puVar8 = puVar8 + 4;
      }
    }
    iVar6 = *piVar2;
    for (iVar4 = iVar6; iVar4 != piVar2[1]; iVar4 = iVar4 + 0x10) {
    }
    if (iVar6 != 0) {
      LibC_free(iVar6);
    }
    *piVar2 = (int)puStack_24;
    piVar2[1] = (int)puVar8;
    piVar2[3] = (int)puStack_24 + iVar1;
  }
  else {
    if (puVar5 != (u32 *)0x0) {
      *puVar5 = uStack_110;
      puVar5[1] = uStack_10c;
      puVar5[2] = uStack_108;
      puVar5[3] = uStack_104;
    }
    piVar2[1] = piVar2[1] + 0x10;
  }
  uStack_d4 = ((u16)(6));
  *(u16 *)((int)puStack_34 + 2) = 2;
  Code_Lib_Syscall_Sub_0804E8F0(uStack_d4,puStack_50,0,0,0x080FB85C);
  hardware_Sub_08008F0C(&uStack_110,puStack_50,0x06000D00,0x180);
  puVar5 = (u32 *)piVar2[1];
  if (puVar5 == (u32 *)piVar2[3]) {
    iStack_cc = 1;
    puVar7 = (u32 *)*piVar2;
    iStack_d0 = (int)puVar5 - (int)puVar7 >> 4;
    piVar3 = &iStack_d0;
    if (iStack_d0 == 0) {
      piVar3 = &iStack_cc;
    }
    if (iStack_d0 + *piVar3 == 0) {
      puVar8 = (u32 *)0x0;
      iVar1 = 0;
      puStack_24 = puVar8;
    }
    else {
      iVar1 = (iStack_d0 + *piVar3) * 0x10;
      puVar8 = (u32 *)LibC_malloc(iVar1);
      if (puVar8 == (u32 *)0x0) {
        puVar8 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
      }
      puVar7 = (u32 *)*piVar2;
      puStack_24 = puVar8;
    }
    for (; puVar7 != puVar5; puVar7 = puVar7 + 4) {
      if (puVar8 != (u32 *)0x0) {
        uVar9 = puVar7[1];
        uVar10 = puVar7[2];
        *puVar8 = *puVar7;
        puVar8[1] = uVar9;
        puVar8[2] = uVar10;
        puVar8[3] = puVar7[3];
      }
      puVar8 = puVar8 + 4;
    }
    iVar4 = iStack_cc;
    if (iStack_cc == 1) {
      if (puVar8 != (u32 *)0x0) {
        *puVar8 = uStack_110;
        puVar8[1] = uStack_10c;
        puVar8[2] = uStack_108;
        puVar8[3] = uStack_104;
      }
      puVar8 = puVar8 + 4;
    }
    else {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar8 != (u32 *)0x0) {
          *puVar8 = uStack_110;
          puVar8[1] = uStack_10c;
          puVar8[2] = uStack_108;
          puVar8[3] = uStack_104;
        }
        puVar8 = puVar8 + 4;
      }
    }
    iVar6 = *piVar2;
    for (iVar4 = iVar6; iVar4 != piVar2[1]; iVar4 = iVar4 + 0x10) {
    }
    if (iVar6 != 0) {
      LibC_free(iVar6);
    }
    *piVar2 = (int)puStack_24;
    piVar2[1] = (int)puVar8;
    piVar2[3] = (int)puStack_24 + iVar1;
  }
  else {
    if (puVar5 != (u32 *)0x0) {
      *puVar5 = uStack_110;
      puVar5[1] = uStack_10c;
      puVar5[2] = uStack_108;
      puVar5[3] = uStack_104;
    }
    piVar2[1] = piVar2[1] + 0x10;
  }
  uStack_c8 = ((u16)(6));
  *(u16 *)((int)puStack_30 + 2) = 2;
  Code_Lib_Syscall_Sub_0804E8F0(uStack_c8,iStack_44,0,0,0x080FB864);
  hardware_Sub_08008F0C(&uStack_110,iStack_44,0x06000E80,0x180);
  puVar5 = (u32 *)piVar2[1];
  if (puVar5 == (u32 *)piVar2[3]) {
    iStack_c0 = 1;
    puVar7 = (u32 *)*piVar2;
    iStack_c4 = (int)puVar5 - (int)puVar7 >> 4;
    piVar3 = &iStack_c4;
    if (iStack_c4 == 0) {
      piVar3 = &iStack_c0;
    }
    if (iStack_c4 + *piVar3 == 0) {
      puVar8 = (u32 *)0x0;
      iVar1 = 0;
      puStack_24 = puVar8;
    }
    else {
      iVar1 = (iStack_c4 + *piVar3) * 0x10;
      puVar8 = (u32 *)LibC_malloc(iVar1);
      if (puVar8 == (u32 *)0x0) {
        puVar8 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
      }
      puVar7 = (u32 *)*piVar2;
      puStack_24 = puVar8;
    }
    for (; puVar7 != puVar5; puVar7 = puVar7 + 4) {
      if (puVar8 != (u32 *)0x0) {
        uVar9 = puVar7[1];
        uVar10 = puVar7[2];
        *puVar8 = *puVar7;
        puVar8[1] = uVar9;
        puVar8[2] = uVar10;
        puVar8[3] = puVar7[3];
      }
      puVar8 = puVar8 + 4;
    }
    iVar4 = iStack_c0;
    if (iStack_c0 == 1) {
      if (puVar8 != (u32 *)0x0) {
        *puVar8 = uStack_110;
        puVar8[1] = uStack_10c;
        puVar8[2] = uStack_108;
        puVar8[3] = uStack_104;
      }
      puVar8 = puVar8 + 4;
    }
    else {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar8 != (u32 *)0x0) {
          *puVar8 = uStack_110;
          puVar8[1] = uStack_10c;
          puVar8[2] = uStack_108;
          puVar8[3] = uStack_104;
        }
        puVar8 = puVar8 + 4;
      }
    }
    iVar6 = *piVar2;
    for (iVar4 = iVar6; iVar4 != piVar2[1]; iVar4 = iVar4 + 0x10) {
    }
    if (iVar6 != 0) {
      LibC_free(iVar6);
    }
    *piVar2 = (int)puStack_24;
    piVar2[1] = (int)puVar8;
    piVar2[3] = (int)puStack_24 + iVar1;
  }
  else {
    if (puVar5 != (u32 *)0x0) {
      *puVar5 = uStack_110;
      puVar5[1] = uStack_10c;
      puVar5[2] = uStack_108;
      puVar5[3] = uStack_104;
    }
    piVar2[1] = piVar2[1] + 0x10;
  }
  uStack_bc = ((u16)(6));
  *(u16 *)((int)puStack_2c + 2) = 2;
  Code_Lib_Syscall_Sub_0804E8F0(uStack_bc,iStack_58,0,0,0x080FB86C);
  hardware_Sub_08008F0C(&uStack_110,iStack_58,0x06001000,0x180);
  puVar5 = (u32 *)piVar2[1];
  if (puVar5 == (u32 *)piVar2[3]) {
    iStack_b4 = 1;
    puVar7 = (u32 *)*piVar2;
    iStack_b8 = (int)puVar5 - (int)puVar7 >> 4;
    piVar3 = &iStack_b8;
    if (iStack_b8 == 0) {
      piVar3 = &iStack_b4;
    }
    if (iStack_b8 + *piVar3 == 0) {
      puVar8 = (u32 *)0x0;
      iVar1 = 0;
      puStack_24 = puVar8;
    }
    else {
      iVar1 = (iStack_b8 + *piVar3) * 0x10;
      puVar8 = (u32 *)LibC_malloc(iVar1);
      if (puVar8 == (u32 *)0x0) {
        puVar8 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
      }
      puVar7 = (u32 *)*piVar2;
      puStack_24 = puVar8;
    }
    for (; puVar7 != puVar5; puVar7 = puVar7 + 4) {
      if (puVar8 != (u32 *)0x0) {
        uVar9 = puVar7[1];
        uVar10 = puVar7[2];
        *puVar8 = *puVar7;
        puVar8[1] = uVar9;
        puVar8[2] = uVar10;
        puVar8[3] = puVar7[3];
      }
      puVar8 = puVar8 + 4;
    }
    iVar4 = iStack_b4;
    if (iStack_b4 == 1) {
      if (puVar8 != (u32 *)0x0) {
        *puVar8 = uStack_110;
        puVar8[1] = uStack_10c;
        puVar8[2] = uStack_108;
        puVar8[3] = uStack_104;
      }
      puVar8 = puVar8 + 4;
    }
    else {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar8 != (u32 *)0x0) {
          *puVar8 = uStack_110;
          puVar8[1] = uStack_10c;
          puVar8[2] = uStack_108;
          puVar8[3] = uStack_104;
        }
        puVar8 = puVar8 + 4;
      }
    }
    iVar6 = *piVar2;
    for (iVar4 = iVar6; iVar4 != piVar2[1]; iVar4 = iVar4 + 0x10) {
    }
    if (iVar6 != 0) {
      LibC_free(iVar6);
    }
    *piVar2 = (int)puStack_24;
    piVar2[1] = (int)puVar8;
    piVar2[3] = (int)puStack_24 + iVar1;
  }
  else {
    if (puVar5 != (u32 *)0x0) {
      *puVar5 = uStack_110;
      puVar5[1] = uStack_10c;
      puVar5[2] = uStack_108;
      puVar5[3] = uStack_104;
    }
    piVar2[1] = piVar2[1] + 0x10;
  }
  uStack_b0 = ((u16)(6));
  *(u16 *)((int)puStack_68 + 2) = 2;
  Code_Lib_Syscall_Sub_0804E8F0(uStack_b0,iStack_48,0,0,0x080FB874);
  hardware_Sub_08008F0C(&uStack_110,iStack_48,0x06001180,0x180);
  puVar5 = (u32 *)piVar2[1];
  if (puVar5 == (u32 *)piVar2[3]) {
    iStack_a8 = 1;
    puVar7 = (u32 *)*piVar2;
    iStack_ac = (int)puVar5 - (int)puVar7 >> 4;
    piVar3 = &iStack_ac;
    if (iStack_ac == 0) {
      piVar3 = &iStack_a8;
    }
    if (iStack_ac + *piVar3 == 0) {
      puVar8 = (u32 *)0x0;
      iVar1 = 0;
      puStack_24 = puVar8;
    }
    else {
      iVar1 = (iStack_ac + *piVar3) * 0x10;
      puVar8 = (u32 *)LibC_malloc(iVar1);
      if (puVar8 == (u32 *)0x0) {
        puVar8 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
      }
      puVar7 = (u32 *)*piVar2;
      puStack_24 = puVar8;
    }
    for (; puVar7 != puVar5; puVar7 = puVar7 + 4) {
      if (puVar8 != (u32 *)0x0) {
        uVar9 = puVar7[1];
        uVar10 = puVar7[2];
        *puVar8 = *puVar7;
        puVar8[1] = uVar9;
        puVar8[2] = uVar10;
        puVar8[3] = puVar7[3];
      }
      puVar8 = puVar8 + 4;
    }
    iVar4 = iStack_a8;
    if (iStack_a8 == 1) {
      if (puVar8 != (u32 *)0x0) {
        *puVar8 = uStack_110;
        puVar8[1] = uStack_10c;
        puVar8[2] = uStack_108;
        puVar8[3] = uStack_104;
      }
      puVar8 = puVar8 + 4;
    }
    else {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar8 != (u32 *)0x0) {
          *puVar8 = uStack_110;
          puVar8[1] = uStack_10c;
          puVar8[2] = uStack_108;
          puVar8[3] = uStack_104;
        }
        puVar8 = puVar8 + 4;
      }
    }
    iVar6 = *piVar2;
    for (iVar4 = iVar6; iVar4 != piVar2[1]; iVar4 = iVar4 + 0x10) {
    }
    if (iVar6 != 0) {
      LibC_free(iVar6);
    }
    *piVar2 = (int)puStack_24;
    piVar2[1] = (int)puVar8;
    piVar2[3] = (int)puStack_24 + iVar1;
  }
  else {
    if (puVar5 != (u32 *)0x0) {
      *puVar5 = uStack_110;
      puVar5[1] = uStack_10c;
      puVar5[2] = uStack_108;
      puVar5[3] = uStack_104;
    }
    piVar2[1] = piVar2[1] + 0x10;
  }
  uStack_a4 = ((u16)(2));
  *(u16 *)((int)puStack_64 + 2) = 2;
  Code_Lib_Syscall_Sub_0804E8F0(uStack_a4,iStack_5c,0,0,0x080FB87C);
  hardware_Sub_08008F0C(&uStack_110,iStack_5c,0x06001300,0x80);
  puVar5 = (u32 *)piVar2[1];
  if (puVar5 == (u32 *)piVar2[3]) {
    iStack_9c = 1;
    puVar7 = (u32 *)*piVar2;
    iStack_a0 = (int)puVar5 - (int)puVar7 >> 4;
    piVar3 = &iStack_a0;
    if (iStack_a0 == 0) {
      piVar3 = &iStack_9c;
    }
    if (iStack_a0 + *piVar3 == 0) {
      puVar8 = (u32 *)0x0;
      iVar1 = 0;
      puStack_24 = puVar8;
    }
    else {
      iVar1 = (iStack_a0 + *piVar3) * 0x10;
      puVar8 = (u32 *)LibC_malloc(iVar1);
      if (puVar8 == (u32 *)0x0) {
        puVar8 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
      }
      puVar7 = (u32 *)*piVar2;
      puStack_24 = puVar8;
    }
    for (; puVar7 != puVar5; puVar7 = puVar7 + 4) {
      if (puVar8 != (u32 *)0x0) {
        uVar9 = puVar7[1];
        uVar10 = puVar7[2];
        *puVar8 = *puVar7;
        puVar8[1] = uVar9;
        puVar8[2] = uVar10;
        puVar8[3] = puVar7[3];
      }
      puVar8 = puVar8 + 4;
    }
    iVar4 = iStack_9c;
    if (iStack_9c == 1) {
      if (puVar8 != (u32 *)0x0) {
        *puVar8 = uStack_110;
        puVar8[1] = uStack_10c;
        puVar8[2] = uStack_108;
        puVar8[3] = uStack_104;
      }
      puVar8 = puVar8 + 4;
    }
    else {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar8 != (u32 *)0x0) {
          *puVar8 = uStack_110;
          puVar8[1] = uStack_10c;
          puVar8[2] = uStack_108;
          puVar8[3] = uStack_104;
        }
        puVar8 = puVar8 + 4;
      }
    }
    iVar6 = *piVar2;
    for (iVar4 = iVar6; iVar4 != piVar2[1]; iVar4 = iVar4 + 0x10) {
    }
    if (iVar6 != 0) {
      LibC_free(iVar6);
    }
    *piVar2 = (int)puStack_24;
    piVar2[1] = (int)puVar8;
    piVar2[3] = (int)puStack_24 + iVar1;
  }
  else {
    if (puVar5 != (u32 *)0x0) {
      *puVar5 = uStack_110;
      puVar5[1] = uStack_10c;
      puVar5[2] = uStack_108;
      puVar5[3] = uStack_104;
    }
    piVar2[1] = piVar2[1] + 0x10;
  }
  uStack_98 = ((u16)(2));
  *(u16 *)((int)puStack_60 + 2) = 2;
  Code_Lib_Syscall_Sub_0804E8F0(uStack_98,iStack_54,0,0,0x080FB830);
  hardware_Sub_08008F0C(&uStack_110,iStack_54,0x06001380,0x80);
  puVar5 = (u32 *)piVar2[1];
  if (puVar5 == (u32 *)piVar2[3]) {
    iStack_90 = 1;
    iStack_94 = (int)puVar5 - *piVar2 >> 4;
    piVar3 = &iStack_94;
    if (iStack_94 == 0) {
      piVar3 = &iStack_90;
    }
    puStack_28 = puVar5;
    if (iStack_94 + *piVar3 == 0) {
      puVar5 = (u32 *)0x0;
      iVar1 = 0;
    }
    else {
      iVar1 = (iStack_94 + *piVar3) * 0x10;
      puVar5 = (u32 *)LibC_malloc(iVar1);
      if (puVar5 == (u32 *)0x0) {
        puVar5 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
      }
    }
    puVar8 = puVar5;
    for (puVar7 = (u32 *)*piVar2; puVar7 != puStack_28; puVar7 = puVar7 + 4) {
      if (puVar8 != (u32 *)0x0) {
        uVar9 = puVar7[1];
        uVar10 = puVar7[2];
        *puVar8 = *puVar7;
        puVar8[1] = uVar9;
        puVar8[2] = uVar10;
        puVar8[3] = puVar7[3];
      }
      puVar8 = puVar8 + 4;
    }
    iVar4 = iStack_90;
    if (iStack_90 == 1) {
      if (puVar8 != (u32 *)0x0) {
        *puVar8 = uStack_110;
        puVar8[1] = uStack_10c;
        puVar8[2] = uStack_108;
        puVar8[3] = uStack_104;
      }
      puVar8 = puVar8 + 4;
    }
    else {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar8 != (u32 *)0x0) {
          *puVar8 = uStack_110;
          puVar8[1] = uStack_10c;
          puVar8[2] = uStack_108;
          puVar8[3] = uStack_104;
        }
        puVar8 = puVar8 + 4;
      }
    }
    iVar6 = *piVar2;
    for (iVar4 = iVar6; iVar4 != piVar2[1]; iVar4 = iVar4 + 0x10) {
    }
    puStack_24 = puVar5;
    if (iVar6 != 0) {
      LibC_free(iVar6);
    }
    *piVar2 = (int)puStack_24;
    piVar2[1] = (int)puVar8;
    piVar2[3] = (int)puStack_24 + iVar1;
  }
  else {
    if (puVar5 != (u32 *)0x0) {
      *puVar5 = uStack_110;
      puVar5[1] = uStack_10c;
      puVar5[2] = uStack_108;
      puVar5[3] = uStack_104;
    }
    piVar2[1] = piVar2[1] + 0x10;
  }
  hardware_Sub_08008F0C(&uStack_110,0x0875196C,0x06001400,0x80);
  puVar5 = (u32 *)piVar2[1];
  if (puVar5 == (u32 *)piVar2[3]) {
    iStack_88 = 1;
    iStack_8c = (int)puVar5 - *piVar2 >> 4;
    piVar3 = &iStack_8c;
    if (iStack_8c == 0) {
      piVar3 = &iStack_88;
    }
    puStack_28 = puVar5;
    if (iStack_8c + *piVar3 == 0) {
      puVar5 = (u32 *)0x0;
      iVar1 = 0;
    }
    else {
      iVar1 = (iStack_8c + *piVar3) * 0x10;
      puVar5 = (u32 *)LibC_malloc(iVar1);
      if (puVar5 == (u32 *)0x0) {
        puVar5 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
      }
    }
    puVar7 = puVar5;
    for (puVar8 = (u32 *)*piVar2; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
      if (puVar7 != (u32 *)0x0) {
        uVar9 = puVar8[1];
        uVar10 = puVar8[2];
        *puVar7 = *puVar8;
        puVar7[1] = uVar9;
        puVar7[2] = uVar10;
        puVar7[3] = puVar8[3];
      }
      puVar7 = puVar7 + 4;
    }
    iVar4 = iStack_88;
    if (iStack_88 == 1) {
      if (puVar7 != (u32 *)0x0) {
        *puVar7 = uStack_110;
        puVar7[1] = uStack_10c;
        puVar7[2] = uStack_108;
        puVar7[3] = uStack_104;
      }
      puVar7 = puVar7 + 4;
    }
    else {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar7 != (u32 *)0x0) {
          *puVar7 = uStack_110;
          puVar7[1] = uStack_10c;
          puVar7[2] = uStack_108;
          puVar7[3] = uStack_104;
        }
        puVar7 = puVar7 + 4;
      }
    }
    iVar6 = *piVar2;
    for (iVar4 = iVar6; iVar4 != piVar2[1]; iVar4 = iVar4 + 0x10) {
    }
    puStack_24 = puVar5;
    if (iVar6 != 0) {
      LibC_free(iVar6);
    }
    *piVar2 = (int)puStack_24;
    piVar2[1] = (int)puVar7;
    piVar2[3] = (int)puStack_24 + iVar1;
  }
  else {
    if (puVar5 != (u32 *)0x0) {
      *puVar5 = uStack_110;
      puVar5[1] = uStack_10c;
      puVar5[2] = uStack_108;
      puVar5[3] = uStack_104;
    }
    piVar2[1] = piVar2[1] + 0x10;
  }
  hardware_Sub_08008F0C(&uStack_110,0x087519EC,0x05000020,0x20);
  puVar5 = (u32 *)piVar2[1];
  if (puVar5 == (u32 *)piVar2[3]) {
    iStack_80 = 1;
    iStack_84 = (int)puVar5 - *piVar2 >> 4;
    piVar3 = &iStack_84;
    if (iStack_84 == 0) {
      piVar3 = &iStack_80;
    }
    puStack_28 = puVar5;
    if (iStack_84 + *piVar3 == 0) {
      puVar5 = (u32 *)0x0;
      iVar1 = 0;
    }
    else {
      iVar1 = (iStack_84 + *piVar3) * 0x10;
      puVar5 = (u32 *)LibC_malloc(iVar1);
      if (puVar5 == (u32 *)0x0) {
        puVar5 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
      }
    }
    puVar7 = puVar5;
    for (puVar8 = (u32 *)*piVar2; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
      if (puVar7 != (u32 *)0x0) {
        uVar9 = puVar8[1];
        uVar10 = puVar8[2];
        *puVar7 = *puVar8;
        puVar7[1] = uVar9;
        puVar7[2] = uVar10;
        puVar7[3] = puVar8[3];
      }
      puVar7 = puVar7 + 4;
    }
    iVar4 = iStack_80;
    if (iStack_80 == 1) {
      if (puVar7 != (u32 *)0x0) {
        *puVar7 = uStack_110;
        puVar7[1] = uStack_10c;
        puVar7[2] = uStack_108;
        puVar7[3] = uStack_104;
      }
      puVar7 = puVar7 + 4;
    }
    else {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar7 != (u32 *)0x0) {
          *puVar7 = uStack_110;
          puVar7[1] = uStack_10c;
          puVar7[2] = uStack_108;
          puVar7[3] = uStack_104;
        }
        puVar7 = puVar7 + 4;
      }
    }
    iVar6 = *piVar2;
    for (iVar4 = iVar6; iVar4 != piVar2[1]; iVar4 = iVar4 + 0x10) {
    }
    puStack_24 = puVar5;
    if (iVar6 != 0) {
      LibC_free(iVar6);
    }
    *piVar2 = (int)puStack_24;
    piVar2[1] = (int)puVar7;
    piVar2[3] = (int)puStack_24 + iVar1;
  }
  else {
    if (puVar5 != (u32 *)0x0) {
      *puVar5 = uStack_110;
      puVar5[1] = uStack_10c;
      puVar5[2] = uStack_108;
      puVar5[3] = uStack_104;
    }
    piVar2[1] = piVar2[1] + 0x10;
  }
  hardware_Sub_08008F0C(&uStack_110,0x0875254C,0x06001480,0x20);
  puVar5 = (u32 *)piVar2[1];
  if (puVar5 == (u32 *)piVar2[3]) {
    iStack_78 = 1;
    iStack_7c = (int)puVar5 - *piVar2 >> 4;
    piVar3 = &iStack_7c;
    if (iStack_7c == 0) {
      piVar3 = &iStack_78;
    }
    puStack_28 = puVar5;
    if (iStack_7c + *piVar3 == 0) {
      puVar5 = (u32 *)0x0;
      iVar1 = 0;
    }
    else {
      iVar1 = (iStack_7c + *piVar3) * 0x10;
      puVar5 = (u32 *)LibC_malloc(iVar1);
      if (puVar5 == (u32 *)0x0) {
        puVar5 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
      }
    }
    puVar7 = puVar5;
    for (puVar8 = (u32 *)*piVar2; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
      if (puVar7 != (u32 *)0x0) {
        uVar9 = puVar8[1];
        uVar10 = puVar8[2];
        *puVar7 = *puVar8;
        puVar7[1] = uVar9;
        puVar7[2] = uVar10;
        puVar7[3] = puVar8[3];
      }
      puVar7 = puVar7 + 4;
    }
    iVar4 = iStack_78;
    if (iStack_78 == 1) {
      if (puVar7 != (u32 *)0x0) {
        *puVar7 = uStack_110;
        puVar7[1] = uStack_10c;
        puVar7[2] = uStack_108;
        puVar7[3] = uStack_104;
      }
      puVar7 = puVar7 + 4;
    }
    else {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar7 != (u32 *)0x0) {
          *puVar7 = uStack_110;
          puVar7[1] = uStack_10c;
          puVar7[2] = uStack_108;
          puVar7[3] = uStack_104;
        }
        puVar7 = puVar7 + 4;
      }
    }
    iVar6 = *piVar2;
    for (iVar4 = iVar6; iVar4 != piVar2[1]; iVar4 = iVar4 + 0x10) {
    }
    puStack_24 = puVar5;
    if (iVar6 != 0) {
      LibC_free(iVar6);
    }
    *piVar2 = (int)puStack_24;
    piVar2[1] = (int)puVar7;
    piVar2[3] = (int)puStack_24 + iVar1;
  }
  else {
    if (puVar5 != (u32 *)0x0) {
      *puVar5 = uStack_110;
      puVar5[1] = uStack_10c;
      puVar5[2] = uStack_108;
      puVar5[3] = uStack_104;
    }
    piVar2[1] = piVar2[1] + 0x10;
  }
  hardware_Sub_08008F0C(&uStack_110,0x087525CC,0x05000040,0x20);
  puStack_28 = (u32 *)piVar2[1];
  if (puStack_28 == (u32 *)piVar2[3]) {
    iStack_70 = 1;
    iStack_74 = (int)puStack_28 - *piVar2 >> 4;
    piVar3 = &iStack_74;
    if (iStack_74 == 0) {
      piVar3 = &iStack_70;
    }
    if (iStack_74 + *piVar3 == 0) {
      puVar5 = (u32 *)0x0;
      iVar1 = 0;
    }
    else {
      iVar1 = (iStack_74 + *piVar3) * 0x10;
      puVar5 = (u32 *)LibC_malloc(iVar1);
      if (puVar5 == (u32 *)0x0) {
        puVar5 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
      }
    }
    puVar7 = puVar5;
    for (puVar8 = (u32 *)*piVar2; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
      if (puVar7 != (u32 *)0x0) {
        uVar9 = puVar8[1];
        uVar10 = puVar8[2];
        *puVar7 = *puVar8;
        puVar7[1] = uVar9;
        puVar7[2] = uVar10;
        puVar7[3] = puVar8[3];
      }
      puVar7 = puVar7 + 4;
    }
    iVar4 = iStack_70;
    if (iStack_70 == 1) {
      if (puVar7 != (u32 *)0x0) {
        *puVar7 = uStack_110;
        puVar7[1] = uStack_10c;
        puVar7[2] = uStack_108;
        puVar7[3] = uStack_104;
      }
      puVar7 = puVar7 + 4;
    }
    else {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar7 != (u32 *)0x0) {
          *puVar7 = uStack_110;
          puVar7[1] = uStack_10c;
          puVar7[2] = uStack_108;
          puVar7[3] = uStack_104;
        }
        puVar7 = puVar7 + 4;
      }
    }
    iVar6 = *piVar2;
    for (iVar4 = iVar6; iVar4 != piVar2[1]; iVar4 = iVar4 + 0x10) {
    }
    puStack_24 = puVar5;
    if (iVar6 != 0) {
      LibC_free(iVar6);
    }
    *piVar2 = (int)puStack_24;
    piVar2[1] = (int)puVar7;
    piVar2[3] = (int)puStack_24 + iVar1;
  }
  else {
    if (puStack_28 != (u32 *)0x0) {
      *puStack_28 = uStack_110;
      puStack_28[1] = uStack_10c;
      puStack_28[2] = uStack_108;
      puStack_28[3] = uStack_104;
    }
    piVar2[1] = piVar2[1] + 0x10;
  }
  return (puStack_6c);
}

/* 0x08063E64 (40B) | IntroSequence_Sub_08063E64 (orig: func_08063E64) | origin: pure | domain: IntroSequence | MEDIUM / graph_algebra */
template <class T> inline const T& min_ref(const T& a, const T& b) { return b < a ? b : a; }
extern "C" u32 func_0809B228(void *);
extern "C" u32 IntroSequence_Sub_08063E64(void *s) {
    return min_ref<u32>(10, func_0809B228(s) / 25);
}

/* 0x08063E8C (44B) | IntroSequence_Sub_08063E8C (orig: func_08063E8C) | origin: pure | domain: IntroSequence | MEDIUM / graph_algebra */
extern "C" bool func_0809B50C(void const *);
extern "C" bool func_0809B504(void const *);
extern "C" u32 IntroSequence_Sub_08063E8C(void const *s) {
    if (func_0809B50C(s))
        return 0x58;
    if (func_0809B504(s))
        return 0x48;
    return 0x38;
}

