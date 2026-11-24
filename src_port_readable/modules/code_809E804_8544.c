/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_809E804_8544 (9 functions) */
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

/* 0x080BCCE0 (476B) | code_809E804_8544_Sub_080BCCE0 (orig: func_080BCCE0) | origin: wip | domain: code_809E804_8544 | MEDIUM / graph_algebra */
u32 code_809E804_8544_Sub_080BCCE0(u32 *param_1,int param_2) {
  int iVar1;
  u32 uVar2;
  u32 uVar3;
  u32 uVar4;
  u32 uVar5;
  u32 uVar6;
  u32 uVar7;
  u32 uVar8;
  int *piVar9;
  u32 *puVar10;
  int *piStack_3c;
  int **appiStack_38 [2];
  u32 *puStack_30;
  u32 *puStack_2c;
  int **ppiStack_28;
  u32 **ppuStack_24;
  puStack_30 = param_1;
  hardware_Wrap_Ctor_CEBC(param_2);
  iVar1 = hardware_GetField_0x00_8918(param_2);
  *(u16 *)(iVar1 + 0x50) = 0x3f;
  piVar9 = (int *)(param_2 + 0x0000043C);
  hardware_Sub_0800934C(*piVar9 + 0xc,0x00000889,1,1);
  iVar1 = hardware_GetField_0x00_8940(param_2);
  func_080D3914(iVar1,*piVar9,*(u32 *)(*(int *)(iVar1 + 8) + 0x10));
  code_809E804_8544_Sub_080BE954(param_2);
  code_809E804_8544_Sub_080BEA34(param_2);
  hardware_Sub_080BCFAC(param_2);
  code_809E804_8544_Sub_080BD064(param_2);
  hardware_Wrap_m4aMPlayStart(param_2 + 0x578,0x22);
  ppiStack_28 = &piStack_3c;
  ppuStack_24 = appiStack_38;
  iVar1 = *(int *)(param_2 + 0x5a0);
  while (iVar1 != 5) {
    hardware_Ctor_87C8(param_2);
    if (*(u32 *)(param_2 + 0x5a0) < 5) {
      switch(*(u32 *)(*(u32 *)(param_2 + 0x5a0) * 4 + 0x080BCD8C) & 0xfffffffe) {
      case 0x80bcda0:
        code_809E804_8544_Sub_080BEAD4(param_2);
        break;
      case 0x80bcda8:
        code_809E804_8544_Sub_080BF0EC(param_2);
        break;
      case 0x80bcdb0:
        hardware_Sub_080BF2EC(param_2);
        break;
      case 0x80bcdb8:
        hardware_Sub_080BF348(param_2);
        break;
      case 0x80bcdc0:
        code_809E804_8544_Sub_080BF764(param_2);
      }
    }
    iVar1 = *(int *)(param_2 + 0x5a0);
  }
  puVar10 = (u32 *)(param_2 + 0x0000043C);
  uVar7 = *(u32 *)*puVar10;
  if (-1 < (int)(-uVar7 | uVar7)) {
    hardware_Sub_08009378((u32 *)*puVar10 + 3,0x00000889,1,1);
    iVar1 = hardware_GetField_0x00_8940(param_2);
    func_080D3914(iVar1,*puVar10,*(u32 *)(*(int *)(iVar1 + 8) + 0x10));
  }
  if ((int)(-*(u32 *)*puVar10 | *(u32 *)*puVar10) < 0) {
    puStack_2c = (u32 *)(param_2 + 0x418);
    iVar1 = 0x0000057C + param_2;
    do {
      hardware_Ctor_87C8(param_2);
      uVar8 = *puStack_2c;
      uVar2 = hardware_GetField_0x00_88DC(param_2);
      uVar3 = hardware_GetField_0x00_8920(param_2);
      uVar4 = hardware_GetField_0x00_8918(param_2);
      uVar5 = hardware_GetField_0x00_8940(param_2);
      uVar6 = hardware_Sub_0800894C(param_2);
      code_0803EE94_78A8_Wrap_Ctor(uVar8,uVar2,uVar3,uVar4,uVar5,uVar6,iVar1);
      hardware_Sub_080BDF40(param_2);
    } while ((int)(-**(u32 **)(param_2 + 0x0000043C) | **(u32 **)(param_2 + 0x0000043C)) < 0
            );
  }
  piStack_3c = (int *)0x0;
  appiStack_38[0] = ppiStack_28;
  ppuStack_24[1] = (int **)0x0;
  *ppiStack_28 = (int *)0x0;
  *puStack_30 = 0;
  if (piStack_3c != (int *)0x0) {
    func_080D3914(piStack_3c,3,*(u32 *)(*piStack_3c + 8));
  }
  return (puStack_30);
}

/* 0x080BD064 (3804B) | code_809E804_8544_Sub_080BD064 (orig: func_080BD064) | origin: wip | domain: code_809E804_8544 | MEDIUM / graph_algebra */
void code_809E804_8544_Sub_080BD064(int param_1) {
  u16 uVar1;
  int *piVar2;
  int iVar3;
  u32 uVar4;
  u16 *puVar5;
  u32 *puVar6;
  u32 *puVar7;
  u32 *puVar8;
  u32 uVar9;
  int iVar10;
  int *piVar11;
  u8 auStack_bc [4];
  u32 uStack_b8;
  u32 uStack_b4;
  u32 uStack_b0;
  u32 uStack_ac;
  u32 uStack_a8;
  u32 uStack_a4;
  u32 uStack_a0;
  u32 uStack_9c;
  u32 uStack_88;
  u32 uStack_84;
  int iStack_80;
  int iStack_7c;
  u32 uStack_78;
  u32 uStack_74;
  int iStack_70;
  int iStack_6c;
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
  int iStack_38;
  int iStack_34;
  u32 *puStack_30;
  u32 *puStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  hardware_HW_DMA3SAD(*(u16 *)0x080F9F78,0x05000320,0x20);
  hardware_Sub_080BCEC8(param_1);
  puVar5 = 0x0500024A;
  *(u16 *)0x0500024A = *(u16 *)0x05000322;
  puVar5[1] = *(u16 *)0x05000324;
  puVar5[2] = 0x1f;
  puVar5[3] = (short)0x0000675E;
  hardware_HW_DMA3SAD_8EB8(0,param_1 + 0x440,8);
  code_0803EE94_Sub_0804EC84(*(u8 *)(0x000005FD + param_1),auStack_bc,0);
  puVar5 = 0x05000240;
  *(u16 *)0x05000240 = 0x3e0;
  puVar5[1] = (short)0x00000303;
  puVar5[2] = (short)0x00004F15;
  puVar5[3] = (short)0x00007FFF;
  puVar5[4] = (short)0x000052F8;
  uStack_88 = 0x20004;
  iVar10 = param_1 + 0xc;
  Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(0x20004,iVar10,0);
  uStack_84 = 0x20004;
  SpriteAnimEngine_Sub_0804E958(0x20004,iVar10,0,0,auStack_bc,0,1);
  piVar2 = (int *)hardware_GetField_0x00_8910(param_1);
  iVar3 = hardware_Sub_08007D4C(param_1 + 0x5b0,*(u32 *)(param_1 + 0x5b4));
  hardware_Sub_08008F0C(&uStack_b8,iVar10,iVar3 * 0x20 + 0x06010000,0x100);
  puVar6 = (u32 *)piVar2[1];
  if (puVar6 == (u32 *)piVar2[3]) {
    iStack_7c = 1;
    iStack_80 = (int)puVar6 - *piVar2 >> 4;
    piVar11 = &iStack_80;
    if (iStack_80 == 0) {
      piVar11 = &iStack_7c;
    }
    puStack_28 = puVar6;
    if (iStack_80 + *piVar11 == 0) {
      puStack_24 = (u32 *)0x0;
      iVar3 = 0;
    }
    else {
      iVar3 = (iStack_80 + *piVar11) * 0x10;
      puStack_24 = (u32 *)LibC_malloc(iVar3);
      if (puStack_24 == (u32 *)0x0) {
        puStack_24 = (u32 *)code_linkonce_Sub_080D3BC0(iVar3);
      }
    }
    puStack_2c = &uStack_78;
    puStack_30 = &uStack_a8;
    puVar8 = puStack_24;
    for (puVar6 = (u32 *)*piVar2; puVar6 != puStack_28; puVar6 = puVar6 + 4) {
      if (puVar8 != (u32 *)0x0) {
        uVar4 = puVar6[1];
        uVar9 = puVar6[2];
        *puVar8 = *puVar6;
        puVar8[1] = uVar4;
        puVar8[2] = uVar9;
        puVar8[3] = puVar6[3];
      }
      puVar8 = puVar8 + 4;
    }
    iVar10 = iStack_7c;
    if (iStack_7c == 1) {
      if (puVar8 != (u32 *)0x0) {
        *puVar8 = uStack_b8;
        puVar8[1] = uStack_b4;
        puVar8[2] = uStack_b0;
        puVar8[3] = uStack_ac;
      }
      puVar8 = puVar8 + 4;
    }
    else {
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (puVar8 != (u32 *)0x0) {
          *puVar8 = uStack_b8;
          puVar8[1] = uStack_b4;
          puVar8[2] = uStack_b0;
          puVar8[3] = uStack_ac;
        }
        puVar8 = puVar8 + 4;
      }
    }
    for (iVar10 = *piVar2; iVar10 != piVar2[1]; iVar10 = iVar10 + 0x10) {
    }
    if (*piVar2 != 0) {
      LibC_free();
    }
    *piVar2 = (int)puStack_24;
    piVar2[1] = (int)puVar8;
    piVar2[3] = (int)puStack_24 + iVar3;
  }
  else {
    if (puVar6 != (u32 *)0x0) {
      *puVar6 = uStack_b8;
      puVar6[1] = uStack_b4;
      puVar6[2] = uStack_b0;
      puVar6[3] = uStack_ac;
    }
    piVar2[1] = piVar2[1] + 0x10;
    puStack_2c = &uStack_78;
    puStack_30 = &uStack_a8;
  }
  uVar4 = hardware_Sub_08007D4C(param_1 + 0x5b0,*(u32 *)(param_1 + 0x5b4));
  code_0803EE94_Sub_0804EA94(puStack_2c,0xd0,8,uVar4,2,0,2,1);
  *(u32 *)(param_1 + 0x440) = uStack_78;
  *(u32 *)(param_1 + 0x444) = uStack_74;
  uVar4 = CppRuntime_builtin_new(0x14);
  iVar3 = code_0803EE94_Sub_0805E824(uVar4,*(u32 *)(0x0000041C + param_1),0,0x100);
  piVar2 = (int *)(param_1 + 0x460);
  if (iVar3 != *piVar2) {
    CppRuntime_builtin_delete();
  }
  *piVar2 = iVar3;
  puVar5 = (u16 *)CppRuntime_builtin_new(0x1c);
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
  piVar11 = (int *)(0x00000464 + param_1);
  if (puVar5 != (u16 *)*piVar11) {
    CppRuntime_builtin_delete();
  }
  *piVar11 = (int)puVar5;
  code_0803EE94_Sub_0805E860(*piVar2,0);
  *(u16 *)*piVar11 = 0x40;
  *(u16 *)(*piVar11 + 2) = 0x40;
  iVar3 = *piVar11;
  uVar1 = hardware_Sub_08007D4C(param_1 + 0x5b8,*(u32 *)(param_1 + 0x5bc));
  *(u16 *)(iVar3 + 6) = uVar1;
  *(u16 *)(*piVar11 + 4) = 3;
  puVar6 = (u32 *)*piVar2;
  func_080D3918(&uStack_a8,(int *)*puVar6,
                  *(u16 *)(puVar6[1] + (u32)*(u16 *)(puVar6 + 3) * 4),
                  *(u32 *)(*(int *)*puVar6 + 0x10));
  LibC_memcpy(puStack_30,puStack_30,0x20);
  uVar4 = puStack_30[1];
  uVar9 = puStack_30[2];
  *(u32 *)(param_1 + 0x468) = *puStack_30;
  *(u32 *)(param_1 + 0x46c) = uVar4;
  *(u32 *)(param_1 + 0x470) = uVar9;
  uVar4 = puStack_30[4];
  uVar9 = puStack_30[5];
  *(u32 *)(param_1 + 0x474) = puStack_30[3];
  *(u32 *)(param_1 + 0x478) = uVar4;
  *(u32 *)(param_1 + 0x47c) = uVar9;
  uVar4 = puStack_30[7];
  *(u32 *)(param_1 + 0x480) = puStack_30[6];
  *(u32 *)(param_1 + 0x484) = uVar4;
  piVar2 = (int *)hardware_GetField_0x00_8910(param_1);
  iVar10 = *(int *)(param_1 + 0x470);
  iVar3 = hardware_Sub_08007D4C(param_1 + 0x5b8,*(u32 *)(param_1 + 0x5bc));
  uVar1 = 0;
  if (*(int *)(param_1 + 0x470) != 0) {
    uVar1 = *(u16 *)(param_1 + 0x474);
  }
  hardware_Sub_08008F0C(&uStack_b8,iVar10,iVar3 * 0x20 + 0x06010000,uVar1);
  puVar6 = (u32 *)piVar2[1];
  if (puVar6 == (u32 *)piVar2[3]) {
    iStack_6c = 1;
    iStack_70 = (int)puVar6 - *piVar2 >> 4;
    piVar11 = &iStack_70;
    if (iStack_70 == 0) {
      piVar11 = &iStack_6c;
    }
    puStack_28 = puVar6;
    if (iStack_70 + *piVar11 == 0) {
      puVar6 = (u32 *)0x0;
      iVar3 = 0;
    }
    else {
      iVar3 = (iStack_70 + *piVar11) * 0x10;
      puVar6 = (u32 *)LibC_malloc(iVar3);
      if (puVar6 == (u32 *)0x0) {
        puVar6 = (u32 *)code_linkonce_Sub_080D3BC0(iVar3);
      }
    }
    puVar7 = puVar6;
    for (puVar8 = (u32 *)*piVar2; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
      if (puVar7 != (u32 *)0x0) {
        uVar4 = puVar8[1];
        uVar9 = puVar8[2];
        *puVar7 = *puVar8;
        puVar7[1] = uVar4;
        puVar7[2] = uVar9;
        puVar7[3] = puVar8[3];
      }
      puVar7 = puVar7 + 4;
    }
    iVar10 = iStack_6c;
    if (iStack_6c == 1) {
      if (puVar7 != (u32 *)0x0) {
        *puVar7 = uStack_b8;
        puVar7[1] = uStack_b4;
        puVar7[2] = uStack_b0;
        puVar7[3] = uStack_ac;
      }
      puVar7 = puVar7 + 4;
    }
    else {
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (puVar7 != (u32 *)0x0) {
          *puVar7 = uStack_b8;
          puVar7[1] = uStack_b4;
          puVar7[2] = uStack_b0;
          puVar7[3] = uStack_ac;
        }
        puVar7 = puVar7 + 4;
      }
    }
    for (iVar10 = *piVar2; iVar10 != piVar2[1]; iVar10 = iVar10 + 0x10) {
    }
    puStack_24 = puVar6;
    if (*piVar2 != 0) {
      LibC_free();
    }
    *piVar2 = (int)puStack_24;
    piVar2[1] = (int)puVar7;
    piVar2[3] = (int)puStack_24 + iVar3;
  }
  else {
    if (puVar6 != (u32 *)0x0) {
      *puVar6 = uStack_b8;
      puVar6[1] = uStack_b4;
      puVar6[2] = uStack_b0;
      puVar6[3] = uStack_ac;
    }
    piVar2[1] = piVar2[1] + 0x10;
  }
  piVar2 = (int *)hardware_GetField_0x00_8910(param_1);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x478) != 0) {
    uVar1 = *(u16 *)(param_1 + 0x47c);
  }
  hardware_Sub_08008F0C(&uStack_b8,*(int *)(param_1 + 0x478),0x05000260,uVar1);
  puVar6 = (u32 *)piVar2[1];
  if (puVar6 == (u32 *)piVar2[3]) {
    iStack_64 = 1;
    iStack_68 = (int)puVar6 - *piVar2 >> 4;
    piVar11 = &iStack_68;
    if (iStack_68 == 0) {
      piVar11 = &iStack_64;
    }
    puStack_28 = puVar6;
    if (iStack_68 + *piVar11 == 0) {
      puVar6 = (u32 *)0x0;
      iVar3 = 0;
    }
    else {
      iVar3 = (iStack_68 + *piVar11) * 0x10;
      puVar6 = (u32 *)LibC_malloc(iVar3);
      if (puVar6 == (u32 *)0x0) {
        puVar6 = (u32 *)code_linkonce_Sub_080D3BC0(iVar3);
      }
    }
    puVar7 = puVar6;
    for (puVar8 = (u32 *)*piVar2; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
      if (puVar7 != (u32 *)0x0) {
        uVar4 = puVar8[1];
        uVar9 = puVar8[2];
        *puVar7 = *puVar8;
        puVar7[1] = uVar4;
        puVar7[2] = uVar9;
        puVar7[3] = puVar8[3];
      }
      puVar7 = puVar7 + 4;
    }
    iVar10 = iStack_64;
    if (iStack_64 == 1) {
      if (puVar7 != (u32 *)0x0) {
        *puVar7 = uStack_b8;
        puVar7[1] = uStack_b4;
        puVar7[2] = uStack_b0;
        puVar7[3] = uStack_ac;
      }
      puVar7 = puVar7 + 4;
    }
    else {
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (puVar7 != (u32 *)0x0) {
          *puVar7 = uStack_b8;
          puVar7[1] = uStack_b4;
          puVar7[2] = uStack_b0;
          puVar7[3] = uStack_ac;
        }
        puVar7 = puVar7 + 4;
      }
    }
    for (iVar10 = *piVar2; iVar10 != piVar2[1]; iVar10 = iVar10 + 0x10) {
    }
    puStack_24 = puVar6;
    if (*piVar2 != 0) {
      LibC_free();
    }
    *piVar2 = (int)puStack_24;
    piVar2[1] = (int)puVar7;
    piVar2[3] = (int)puStack_24 + iVar3;
  }
  else {
    if (puVar6 != (u32 *)0x0) {
      *puVar6 = uStack_b8;
      puVar6[1] = uStack_b4;
      puVar6[2] = uStack_b0;
      puVar6[3] = uStack_ac;
    }
    piVar2[1] = piVar2[1] + 0x10;
  }
  uVar4 = CppRuntime_builtin_new(0x14);
  iVar3 = code_0803EE94_Sub_0805E824(uVar4,*(u32 *)(param_1 + 0x428),0,0x100);
  piVar2 = (int *)(param_1 + 0x4b0);
  if (iVar3 != *piVar2) {
    CppRuntime_builtin_delete();
  }
  *piVar2 = iVar3;
  puVar5 = (u16 *)CppRuntime_builtin_new(0x1c);
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
  piVar11 = (int *)(0x000004B4 + param_1);
  if (puVar5 != (u16 *)*piVar11) {
    CppRuntime_builtin_delete();
  }
  *piVar11 = (int)puVar5;
  code_0803EE94_Sub_0805E860(*piVar2,0);
  *(u16 *)*piVar11 = 0xc0;
  *(u16 *)(*piVar11 + 2) = 0;
  iVar3 = *piVar11;
  uVar1 = hardware_Sub_08007D4C(param_1 + 0x5d0,*(u32 *)(param_1 + 0x5d4));
  *(u16 *)(iVar3 + 6) = uVar1;
  *(u16 *)(*piVar11 + 4) = 5;
  *(u16 *)(*piVar11 + 8) = 1;
  *(u8 *)(*piVar11 + 0x18) = 1;
  puVar6 = (u32 *)*piVar2;
  func_080D3918(&uStack_b8,(int *)*puVar6,
                  *(u16 *)(puVar6[1] + (u32)*(u16 *)(puVar6 + 3) * 4),
                  *(u32 *)(*(int *)*puVar6 + 0x10));
  LibC_memcpy(&uStack_b8,&uStack_b8,0x20);
  *(u32 *)(param_1 + 0x4b8) = uStack_b8;
  *(u32 *)(param_1 + 0x4bc) = uStack_b4;
  *(u32 *)(param_1 + 0x4c0) = uStack_b0;
  *(u32 *)(param_1 + 0x4c4) = uStack_ac;
  *(u32 *)(param_1 + 0x4c8) = uStack_a8;
  *(u32 *)(param_1 + 0x4cc) = uStack_a4;
  *(u32 *)(param_1 + 0x4d0) = uStack_a0;
  *(u32 *)(param_1 + 0x4d4) = uStack_9c;
  piVar2 = (int *)hardware_GetField_0x00_8910(param_1);
  iVar10 = *(int *)(param_1 + 0x4c0);
  iVar3 = hardware_Sub_08007D4C(param_1 + 0x5d0,*(u32 *)(param_1 + 0x5d4));
  uVar1 = 0;
  if (*(int *)(param_1 + 0x4c0) != 0) {
    uVar1 = *(u16 *)(param_1 + 0x4c4);
  }
  hardware_Sub_08008F0C(&uStack_b8,iVar10,iVar3 * 0x20 + 0x06010000,uVar1);
  puVar6 = (u32 *)piVar2[1];
  if (puVar6 == (u32 *)piVar2[3]) {
    iStack_5c = 1;
    iStack_60 = (int)puVar6 - *piVar2 >> 4;
    piVar11 = &iStack_60;
    if (iStack_60 == 0) {
      piVar11 = &iStack_5c;
    }
    puStack_28 = puVar6;
    if (iStack_60 + *piVar11 == 0) {
      puVar6 = (u32 *)0x0;
      iVar3 = 0;
    }
    else {
      iVar3 = (iStack_60 + *piVar11) * 0x10;
      puVar6 = (u32 *)LibC_malloc(iVar3);
      if (puVar6 == (u32 *)0x0) {
        puVar6 = (u32 *)code_linkonce_Sub_080D3BC0(iVar3);
      }
    }
    puVar7 = puVar6;
    for (puVar8 = (u32 *)*piVar2; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
      if (puVar7 != (u32 *)0x0) {
        uVar4 = puVar8[1];
        uVar9 = puVar8[2];
        *puVar7 = *puVar8;
        puVar7[1] = uVar4;
        puVar7[2] = uVar9;
        puVar7[3] = puVar8[3];
      }
      puVar7 = puVar7 + 4;
    }
    iVar10 = iStack_5c;
    if (iStack_5c == 1) {
      if (puVar7 != (u32 *)0x0) {
        *puVar7 = uStack_b8;
        puVar7[1] = uStack_b4;
        puVar7[2] = uStack_b0;
        puVar7[3] = uStack_ac;
      }
      puVar7 = puVar7 + 4;
    }
    else {
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (puVar7 != (u32 *)0x0) {
          *puVar7 = uStack_b8;
          puVar7[1] = uStack_b4;
          puVar7[2] = uStack_b0;
          puVar7[3] = uStack_ac;
        }
        puVar7 = puVar7 + 4;
      }
    }
    for (iVar10 = *piVar2; iVar10 != piVar2[1]; iVar10 = iVar10 + 0x10) {
    }
    puStack_24 = puVar6;
    if (*piVar2 != 0) {
      LibC_free();
    }
    *piVar2 = (int)puStack_24;
    piVar2[1] = (int)puVar7;
    piVar2[3] = (int)puStack_24 + iVar3;
  }
  else {
    if (puVar6 != (u32 *)0x0) {
      *puVar6 = uStack_b8;
      puVar6[1] = uStack_b4;
      puVar6[2] = uStack_b0;
      puVar6[3] = uStack_ac;
    }
    piVar2[1] = piVar2[1] + 0x10;
  }
  piVar2 = (int *)hardware_GetField_0x00_8910(param_1);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x4c8) != 0) {
    uVar1 = *(u16 *)(param_1 + 0x4cc);
  }
  hardware_Sub_08008F0C(&uStack_b8,*(int *)(param_1 + 0x4c8),0x050002A0,uVar1);
  puVar6 = (u32 *)piVar2[1];
  if (puVar6 == (u32 *)piVar2[3]) {
    iStack_54 = 1;
    iStack_58 = (int)puVar6 - *piVar2 >> 4;
    piVar11 = &iStack_58;
    if (iStack_58 == 0) {
      piVar11 = &iStack_54;
    }
    puStack_28 = puVar6;
    if (iStack_58 + *piVar11 == 0) {
      puVar6 = (u32 *)0x0;
      iVar3 = 0;
    }
    else {
      iVar3 = (iStack_58 + *piVar11) * 0x10;
      puVar6 = (u32 *)LibC_malloc(iVar3);
      if (puVar6 == (u32 *)0x0) {
        puVar6 = (u32 *)code_linkonce_Sub_080D3BC0(iVar3);
      }
    }
    puVar7 = puVar6;
    for (puVar8 = (u32 *)*piVar2; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
      if (puVar7 != (u32 *)0x0) {
        uVar4 = puVar8[1];
        uVar9 = puVar8[2];
        *puVar7 = *puVar8;
        puVar7[1] = uVar4;
        puVar7[2] = uVar9;
        puVar7[3] = puVar8[3];
      }
      puVar7 = puVar7 + 4;
    }
    iVar10 = iStack_54;
    if (iStack_54 == 1) {
      if (puVar7 != (u32 *)0x0) {
        *puVar7 = uStack_b8;
        puVar7[1] = uStack_b4;
        puVar7[2] = uStack_b0;
        puVar7[3] = uStack_ac;
      }
      puVar7 = puVar7 + 4;
    }
    else {
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (puVar7 != (u32 *)0x0) {
          *puVar7 = uStack_b8;
          puVar7[1] = uStack_b4;
          puVar7[2] = uStack_b0;
          puVar7[3] = uStack_ac;
        }
        puVar7 = puVar7 + 4;
      }
    }
    for (iVar10 = *piVar2; iVar10 != piVar2[1]; iVar10 = iVar10 + 0x10) {
    }
    puStack_24 = puVar6;
    if (*piVar2 != 0) {
      LibC_free();
    }
    *piVar2 = (int)puStack_24;
    piVar2[1] = (int)puVar7;
    piVar2[3] = (int)puStack_24 + iVar3;
  }
  else {
    if (puVar6 != (u32 *)0x0) {
      *puVar6 = uStack_b8;
      puVar6[1] = uStack_b4;
      puVar6[2] = uStack_b0;
      puVar6[3] = uStack_ac;
    }
    piVar2[1] = piVar2[1] + 0x10;
  }
  uVar4 = CppRuntime_builtin_new(0x14);
  iVar3 = code_0803EE94_Sub_0805E824(uVar4,*(u32 *)(param_1 + 0x430),0,0x100);
  piVar2 = (int *)(param_1 + 0x528);
  if (iVar3 != *piVar2) {
    CppRuntime_builtin_delete();
  }
  *piVar2 = iVar3;
  puVar5 = (u16 *)CppRuntime_builtin_new(0x1c);
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
  piVar11 = (int *)(0x0000052C + param_1);
  if (puVar5 != (u16 *)*piVar11) {
    CppRuntime_builtin_delete();
  }
  *piVar11 = (int)puVar5;
  code_0803EE94_Sub_0805E860(*piVar2,0);
  *(u16 *)*piVar11 = 0x80;
  *(u16 *)(*piVar11 + 2) = 0x30;
  iVar3 = *piVar11;
  uVar1 = hardware_Sub_08007D4C(param_1 + 0x5d8,*(u32 *)(param_1 + 0x5dc));
  *(u16 *)(iVar3 + 6) = uVar1;
  *(u16 *)(*piVar11 + 4) = 6;
  puVar6 = (u32 *)*piVar2;
  func_080D3918(&uStack_b8,(int *)*puVar6,
                  *(u16 *)(puVar6[1] + (u32)*(u16 *)(puVar6 + 3) * 4),
                  *(u32 *)(*(int *)*puVar6 + 0x10));
  LibC_memcpy(&uStack_b8,&uStack_b8,0x20);
  *(u32 *)(param_1 + 0x530) = uStack_b8;
  *(u32 *)(param_1 + 0x534) = uStack_b4;
  *(u32 *)(param_1 + 0x538) = uStack_b0;
  *(u32 *)(param_1 + 0x53c) = uStack_ac;
  *(u32 *)(param_1 + 0x540) = uStack_a8;
  *(u32 *)(param_1 + 0x544) = uStack_a4;
  *(u32 *)(param_1 + 0x548) = uStack_a0;
  *(u32 *)(param_1 + 0x54c) = uStack_9c;
  piVar2 = (int *)hardware_GetField_0x00_8910(param_1);
  iVar10 = *(int *)(param_1 + 0x538);
  iVar3 = hardware_Sub_08007D4C(param_1 + 0x5d8,*(u32 *)(param_1 + 0x5dc));
  uVar1 = 0;
  if (*(int *)(param_1 + 0x538) != 0) {
    uVar1 = *(u16 *)(param_1 + 0x53c);
  }
  hardware_Sub_08008F0C(&uStack_b8,iVar10,iVar3 * 0x20 + 0x06010000,uVar1);
  puVar6 = (u32 *)piVar2[1];
  if (puVar6 == (u32 *)piVar2[3]) {
    iStack_4c = 1;
    iStack_50 = (int)puVar6 - *piVar2 >> 4;
    piVar11 = &iStack_50;
    if (iStack_50 == 0) {
      piVar11 = &iStack_4c;
    }
    puStack_28 = puVar6;
    if (iStack_50 + *piVar11 == 0) {
      puVar6 = (u32 *)0x0;
      iVar3 = 0;
    }
    else {
      iVar3 = (iStack_50 + *piVar11) * 0x10;
      puVar6 = (u32 *)LibC_malloc(iVar3);
      if (puVar6 == (u32 *)0x0) {
        puVar6 = (u32 *)code_linkonce_Sub_080D3BC0(iVar3);
      }
    }
    puVar7 = puVar6;
    for (puVar8 = (u32 *)*piVar2; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
      if (puVar7 != (u32 *)0x0) {
        uVar4 = puVar8[1];
        uVar9 = puVar8[2];
        *puVar7 = *puVar8;
        puVar7[1] = uVar4;
        puVar7[2] = uVar9;
        puVar7[3] = puVar8[3];
      }
      puVar7 = puVar7 + 4;
    }
    iVar10 = iStack_4c;
    if (iStack_4c == 1) {
      if (puVar7 != (u32 *)0x0) {
        *puVar7 = uStack_b8;
        puVar7[1] = uStack_b4;
        puVar7[2] = uStack_b0;
        puVar7[3] = uStack_ac;
      }
      puVar7 = puVar7 + 4;
    }
    else {
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (puVar7 != (u32 *)0x0) {
          *puVar7 = uStack_b8;
          puVar7[1] = uStack_b4;
          puVar7[2] = uStack_b0;
          puVar7[3] = uStack_ac;
        }
        puVar7 = puVar7 + 4;
      }
    }
    for (iVar10 = *piVar2; iVar10 != piVar2[1]; iVar10 = iVar10 + 0x10) {
    }
    puStack_24 = puVar6;
    if (*piVar2 != 0) {
      LibC_free();
    }
    *piVar2 = (int)puStack_24;
    piVar2[1] = (int)puVar7;
    piVar2[3] = (int)puStack_24 + iVar3;
  }
  else {
    if (puVar6 != (u32 *)0x0) {
      *puVar6 = uStack_b8;
      puVar6[1] = uStack_b4;
      puVar6[2] = uStack_b0;
      puVar6[3] = uStack_ac;
    }
    piVar2[1] = piVar2[1] + 0x10;
  }
  piVar2 = (int *)hardware_GetField_0x00_8910(param_1);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x540) != 0) {
    uVar1 = *(u16 *)(param_1 + 0x544);
  }
  hardware_Sub_08008F0C(&uStack_b8,*(int *)(param_1 + 0x540),0x050002C0,uVar1);
  puVar6 = (u32 *)piVar2[1];
  if (puVar6 == (u32 *)piVar2[3]) {
    iStack_44 = 1;
    iStack_48 = (int)puVar6 - *piVar2 >> 4;
    piVar11 = &iStack_48;
    if (iStack_48 == 0) {
      piVar11 = &iStack_44;
    }
    puStack_28 = puVar6;
    if (iStack_48 + *piVar11 == 0) {
      puVar6 = (u32 *)0x0;
      iVar3 = 0;
    }
    else {
      iVar3 = (iStack_48 + *piVar11) * 0x10;
      puVar6 = (u32 *)LibC_malloc(iVar3);
      if (puVar6 == (u32 *)0x0) {
        puVar6 = (u32 *)code_linkonce_Sub_080D3BC0(iVar3);
      }
    }
    puVar7 = puVar6;
    for (puVar8 = (u32 *)*piVar2; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
      if (puVar7 != (u32 *)0x0) {
        uVar4 = puVar8[1];
        uVar9 = puVar8[2];
        *puVar7 = *puVar8;
        puVar7[1] = uVar4;
        puVar7[2] = uVar9;
        puVar7[3] = puVar8[3];
      }
      puVar7 = puVar7 + 4;
    }
    iVar10 = iStack_44;
    if (iStack_44 == 1) {
      if (puVar7 != (u32 *)0x0) {
        *puVar7 = uStack_b8;
        puVar7[1] = uStack_b4;
        puVar7[2] = uStack_b0;
        puVar7[3] = uStack_ac;
      }
      puVar7 = puVar7 + 4;
    }
    else {
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (puVar7 != (u32 *)0x0) {
          *puVar7 = uStack_b8;
          puVar7[1] = uStack_b4;
          puVar7[2] = uStack_b0;
          puVar7[3] = uStack_ac;
        }
        puVar7 = puVar7 + 4;
      }
    }
    for (iVar10 = *piVar2; iVar10 != piVar2[1]; iVar10 = iVar10 + 0x10) {
    }
    puStack_24 = puVar6;
    if (*piVar2 != 0) {
      LibC_free();
    }
    *piVar2 = (int)puStack_24;
    piVar2[1] = (int)puVar7;
    piVar2[3] = (int)puStack_24 + iVar3;
  }
  else {
    if (puVar6 != (u32 *)0x0) {
      *puVar6 = uStack_b8;
      puVar6[1] = uStack_b4;
      puVar6[2] = uStack_b0;
      puVar6[3] = uStack_ac;
    }
    piVar2[1] = piVar2[1] + 0x10;
  }
  uVar4 = CppRuntime_builtin_new(0x14);
  puVar6 = (u32 *)(0x0000042C + param_1);
  iVar3 = code_0803EE94_Sub_0805E824(uVar4,*puVar6,0,0x100);
  if (iVar3 != *(int *)(param_1 + 0x4d8)) {
    CppRuntime_builtin_delete();
  }
  *(int *)(param_1 + 0x4d8) = iVar3;
  puVar5 = (u16 *)CppRuntime_builtin_new(0x1c);
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
  piVar2 = (int *)(0x000004DC + param_1);
  if (puVar5 != (u16 *)*piVar2) {
    CppRuntime_builtin_delete();
  }
  *piVar2 = (int)puVar5;
  *puVar5 = 0x85;
  puVar5[1] = 0x50;
  uVar1 = hardware_Sub_08007D4C(param_1 + 0x5f0,*(u32 *)(param_1 + 0x5f4));
  puVar5[3] = uVar1;
  *(u16 *)(*piVar2 + 4) = 10;
  *(u16 *)(*piVar2 + 8) = 1;
  *(u8 *)(*piVar2 + 0x18) = 1;
  uVar4 = CppRuntime_builtin_new(0x14);
  iVar3 = code_0803EE94_Sub_0805E824(uVar4,*puVar6,0,0x100);
  piVar2 = (int *)(param_1 + 0x500);
  if (iVar3 != *piVar2) {
    CppRuntime_builtin_delete();
  }
  *piVar2 = iVar3;
  puVar5 = (u16 *)CppRuntime_builtin_new(0x1c);
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
  piVar11 = (int *)(0x00000504 + param_1);
  if (puVar5 != (u16 *)*piVar11) {
    CppRuntime_builtin_delete();
  }
  *piVar11 = (int)puVar5;
  code_0803EE94_Sub_0805E860(*piVar2,0x0000091A);
  iVar3 = *piVar11;
  uVar1 = hardware_Sub_08007D4C(param_1 + 0x5e8,*(u32 *)(param_1 + 0x5ec));
  *(u16 *)(iVar3 + 6) = uVar1;
  *(u16 *)(*piVar11 + 4) = 8;
  *(u16 *)(*piVar11 + 8) = 1;
  *(u8 *)(*piVar11 + 0x18) = 1;
  puVar6 = (u32 *)*piVar2;
  func_080D3918(&uStack_b8,(int *)*puVar6,
                  *(u16 *)(puVar6[1] + (u32)*(u16 *)(puVar6 + 3) * 4),
                  *(u32 *)(*(int *)*puVar6 + 0x10));
  LibC_memcpy(&uStack_b8,&uStack_b8,0x20);
  *(u32 *)(param_1 + 0x508) = uStack_b8;
  *(u32 *)(param_1 + 0x50c) = uStack_b4;
  *(u32 *)(param_1 + 0x510) = uStack_b0;
  *(u32 *)(param_1 + 0x514) = uStack_ac;
  *(u32 *)(param_1 + 0x518) = uStack_a8;
  *(u32 *)(param_1 + 0x51c) = uStack_a4;
  *(u32 *)(param_1 + 0x520) = uStack_a0;
  *(u32 *)(param_1 + 0x524) = uStack_9c;
  piVar2 = (int *)hardware_GetField_0x00_8910(param_1);
  iVar10 = *(int *)(param_1 + 0x510);
  iVar3 = hardware_Sub_08007D4C(param_1 + 0x5e8,*(u32 *)(param_1 + 0x5ec));
  uVar1 = 0;
  if (*(int *)(param_1 + 0x510) != 0) {
    uVar1 = *(u16 *)(param_1 + 0x514);
  }
  hardware_Sub_08008F0C(&uStack_b8,iVar10,iVar3 * 0x20 + 0x06010000,uVar1);
  puVar6 = (u32 *)piVar2[1];
  if (puVar6 == (u32 *)piVar2[3]) {
    iStack_3c = 1;
    iStack_40 = (int)puVar6 - *piVar2 >> 4;
    piVar11 = &iStack_40;
    if (iStack_40 == 0) {
      piVar11 = &iStack_3c;
    }
    puStack_28 = puVar6;
    if (iStack_40 + *piVar11 == 0) {
      puVar6 = (u32 *)0x0;
      iVar3 = 0;
    }
    else {
      iVar3 = (iStack_40 + *piVar11) * 0x10;
      puVar6 = (u32 *)LibC_malloc(iVar3);
      if (puVar6 == (u32 *)0x0) {
        puVar6 = (u32 *)code_linkonce_Sub_080D3BC0(iVar3);
      }
    }
    puVar8 = puVar6;
    for (puVar7 = (u32 *)*piVar2; puVar7 != puStack_28; puVar7 = puVar7 + 4) {
      if (puVar8 != (u32 *)0x0) {
        uVar4 = puVar7[1];
        uVar9 = puVar7[2];
        *puVar8 = *puVar7;
        puVar8[1] = uVar4;
        puVar8[2] = uVar9;
        puVar8[3] = puVar7[3];
      }
      puVar8 = puVar8 + 4;
    }
    iVar10 = iStack_3c;
    if (iStack_3c == 1) {
      if (puVar8 != (u32 *)0x0) {
        *puVar8 = uStack_b8;
        puVar8[1] = uStack_b4;
        puVar8[2] = uStack_b0;
        puVar8[3] = uStack_ac;
      }
      puVar8 = puVar8 + 4;
    }
    else {
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (puVar8 != (u32 *)0x0) {
          *puVar8 = uStack_b8;
          puVar8[1] = uStack_b4;
          puVar8[2] = uStack_b0;
          puVar8[3] = uStack_ac;
        }
        puVar8 = puVar8 + 4;
      }
    }
    for (iVar10 = *piVar2; iVar10 != piVar2[1]; iVar10 = iVar10 + 0x10) {
    }
    puStack_24 = puVar6;
    if (*piVar2 != 0) {
      LibC_free();
    }
    *piVar2 = (int)puStack_24;
    piVar2[1] = (int)puVar8;
    piVar2[3] = (int)puStack_24 + iVar3;
  }
  else {
    if (puVar6 != (u32 *)0x0) {
      *puVar6 = uStack_b8;
      puVar6[1] = uStack_b4;
      puVar6[2] = uStack_b0;
      puVar6[3] = uStack_ac;
    }
    piVar2[1] = piVar2[1] + 0x10;
  }
  piVar2 = (int *)hardware_GetField_0x00_8910(param_1);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x518) != 0) {
    uVar1 = *(u16 *)(param_1 + 0x51c);
  }
  hardware_Sub_08008F0C(&uStack_b8,*(int *)(param_1 + 0x518),0x05000300,uVar1);
  puStack_28 = (u32 *)piVar2[1];
  if (puStack_28 == (u32 *)piVar2[3]) {
    iStack_34 = 1;
    iStack_38 = (int)puStack_28 - *piVar2 >> 4;
    piVar11 = &iStack_38;
    if (iStack_38 == 0) {
      piVar11 = &iStack_34;
    }
    if (iStack_38 + *piVar11 == 0) {
      puVar6 = (u32 *)0x0;
      iVar3 = 0;
    }
    else {
      iVar3 = (iStack_38 + *piVar11) * 0x10;
      puVar6 = (u32 *)LibC_malloc(iVar3);
      if (puVar6 == (u32 *)0x0) {
        puVar6 = (u32 *)code_linkonce_Sub_080D3BC0(iVar3);
      }
    }
    puVar7 = puVar6;
    for (puVar8 = (u32 *)*piVar2; puVar8 != puStack_28; puVar8 = puVar8 + 4) {
      if (puVar7 != (u32 *)0x0) {
        uVar4 = puVar8[1];
        uVar9 = puVar8[2];
        *puVar7 = *puVar8;
        puVar7[1] = uVar4;
        puVar7[2] = uVar9;
        puVar7[3] = puVar8[3];
      }
      puVar7 = puVar7 + 4;
    }
    iVar10 = iStack_34;
    if (iStack_34 == 1) {
      if (puVar7 != (u32 *)0x0) {
        *puVar7 = uStack_b8;
        puVar7[1] = uStack_b4;
        puVar7[2] = uStack_b0;
        puVar7[3] = uStack_ac;
      }
      puVar7 = puVar7 + 4;
    }
    else {
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (puVar7 != (u32 *)0x0) {
          *puVar7 = uStack_b8;
          puVar7[1] = uStack_b4;
          puVar7[2] = uStack_b0;
          puVar7[3] = uStack_ac;
        }
        puVar7 = puVar7 + 4;
      }
    }
    for (iVar10 = *piVar2; iVar10 != piVar2[1]; iVar10 = iVar10 + 0x10) {
    }
    puStack_24 = puVar6;
    if (*piVar2 != 0) {
      LibC_free();
    }
    *piVar2 = (int)puStack_24;
    piVar2[1] = (int)puVar7;
    piVar2[3] = (int)puStack_24 + iVar3;
  }
  else {
    if (puStack_28 != (u32 *)0x0) {
      *puStack_28 = uStack_b8;
      puStack_28[1] = uStack_b4;
      puStack_28[2] = uStack_b0;
      puStack_28[3] = uStack_ac;
    }
    piVar2[1] = piVar2[1] + 0x10;
  }
}

/* 0x080BE954 (224B) | code_809E804_8544_Sub_080BE954 (orig: func_080BE954) | origin: wip | domain: code_809E804_8544 | MEDIUM / graph_algebra */
void code_809E804_8544_Sub_080BE954(int param_1) {
    u32 auStack_28 [4];
    u32 uStack_18;
    u32 uStack_14;
    u32 uStack_10;
  register u32 bVar1;
  register u8 uVar2;
  auStack_28[0] = *((const u32 *)0x08107DBC);
  auStack_28[1] = ((const u32 *)0x08107DBC)[1];
  auStack_28[2] = ((const u32 *)0x08107DBC)[2];
  auStack_28[3] = ((const u32 *)0x08107DBC)[3];
  uStack_18 = ((const u32 *)0x08107DBC)[4];
  uStack_14 = ((const u32 *)0x08107DBC)[5];
  uStack_10 = ((const u32 *)0x08107DBC)[6];
  *(u32 *)(param_1 + 0x618) = auStack_28[*(int *)(param_1 + 0x614)];
  bVar1 = *(u8 *)(param_1 + 0x61C);
  if (bVar1 < 3) {
    uVar2 = 2;
  }
  else if ((u8)(bVar1 - 3) < 3) {
    uVar2 = 3;
  }
  else if ((u8)(bVar1 - 6) < 3) {
    uVar2 = 4;
  }
  else if ((u8)(bVar1 - 9) < 2) {
    uVar2 = 5;
  }
  else if ((u8)(bVar1 - 0xb) < 3) {
    uVar2 = 7;
  }
  else if ((u8)(bVar1 - 0xe) < 3) {
    uVar2 = 9;
  }
  else if ((u8)(bVar1 - 0x11) < 3) {
    uVar2 = 10;
  }
  else {
    uVar2 = 0xb;
  }
  *(u8 *)(param_1 + 0x600) = uVar2;
  return 0;
}

/* 0x080BEA34 (160B) | code_809E804_8544_Sub_080BEA34 (orig: func_080BEA34) | origin: pure | domain: code_809E804_8544 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
void code_809E804_8544_Sub_080BEA34(int arg0) {
  int val;
  *(u32 *)(arg0 + 0x5a0) = 0;
  val = 0x000005A4;
  *(u32 *)(arg0 + 0x000005A4) = 0;
  *(u32 *)(arg0 + 0x5a8) = 0;
  *(u32 *)(arg0 + val + 8) = 0;
  *(u8 *)(arg0 + 0x5fb) = 0;
  *(u8 *)(arg0 + val + 0x56) = 0;
  *(u8 *)(arg0 + 0x5f9) = 0;
  *(u8 *)(arg0 + val + 0x54) = 0;
  *(u8 *)(arg0 + 0x5fd) = 0x3c;
  *(u8 *)(arg0 + 0x000005FE) = 0;
  *(u8 *)(arg0 + 0x5ff) = 0;
  *(u8 *)(arg0 + 0x608) = 0x85;
  val = 0x00000609;
  *(u8 *)(arg0 + 0x00000609) = 0;
  *(u8 *)(arg0 + 0x60a) = 0;
  *(u8 *)(arg0 + val + 2) = 0;
  *(u8 *)(arg0 + 0x60e) = 1;
  *(u8 *)(arg0 + 0x60c) = 0;
  *(u8 *)(arg0 + 0x60d) = 1;
  *(u8 *)(arg0 + 0x0000060F) = 0;
  *(u8 *)(arg0 + 0x610) = 0;
}

/* 0x080BF0EC (512B) | code_809E804_8544_Sub_080BF0EC (orig: func_080BF0EC) | origin: wip | domain: code_809E804_8544 | MEDIUM / graph_algebra */
void code_809E804_8544_Sub_080BF0EC(int param_1) {
  u32 *puVar1;
  u16 *puVar2;
  u32 uVar3;
  u32 uVar4;
  u32 uVar5;
  u32 uVar6;
  u32 uVar7;
  int iVar8;
  u32 uVar9;
  u32 uVar10;
  u8 auStack_78 [4];
  u8 auStack_74 [8];
  u8 auStack_6c [16];
  u8 auStack_5c [12];
  u32 uStack_50;
  u16 uStack_4c;
  u16 uStack_2c;
  int iStack_28;
  int iStack_24;
  code_0803EE94_Sub_0804EC84(*(u8 *)(param_1 + 0x600),auStack_78,0);
  puVar1 = 0x08107F60;
  LibC_memcpy(auStack_74,0x08107F60,6);
  uVar3 = 0x08107F68;
  LibC_memcpy(auStack_6c,0x08107F68,0xf);
  uVar4 = 0x08107F78;
  LibC_memcpy(auStack_5c,0x08107F78,10);
  uStack_50 = *puVar1;
  uStack_4c = *(u16 *)(puVar1 + 1);
  LibC_strcat(&uStack_50,uVar3);
  LibC_strcat(&uStack_50,auStack_78);
  LibC_strcat(&uStack_50,uVar4);
  iStack_28 = 1;
  iStack_24 = 0;
  puVar2 = (u16 *)hardware_GetField_0x00_8918(param_1);
  uStack_2c = 0x1740;
  *puVar2 = 0x1740;
  PortraitEngine_Sub_08050E5C(*(u32 *)(param_1 + 0x418));
  uVar10 = *(u32 *)(param_1 + 0x418);
  uVar3 = hardware_GetField_0x00_88DC(param_1);
  uVar4 = hardware_GetField_0x00_8920(param_1);
  uVar5 = hardware_GetField_0x00_8918(param_1);
  uVar6 = hardware_GetField_0x00_8940(param_1);
  uVar7 = hardware_Sub_0800894C(param_1);
  code_0803EE94_78A8_Wrap_Ctor(uVar10,uVar3,uVar4,uVar5,uVar6,uVar7,param_1 + 0x0000057C);
  hardware_Sub_080BDF40(param_1);
  while (*(int *)(param_1 + 0x5a0) == 1) {
    hardware_Ctor_87C8(param_1);
    hardware_Sub_080088B8(param_1);
    iVar8 = code_0803EE94_GetField_0x00(*(u32 *)(param_1 + 0x418));
    uVar10 = *(u32 *)(param_1 + 0x418);
    uVar3 = hardware_GetField_0x00_88DC(param_1);
    uVar4 = hardware_GetField_0x00_8920(param_1);
    uVar5 = hardware_GetField_0x00_8918(param_1);
    uVar6 = hardware_GetField_0x00_8940(param_1);
    uVar7 = hardware_Sub_0800894C(param_1);
    uVar9 = code_0803EE94_78A8_Wrap_Ctor(uVar10,uVar3,uVar4,uVar5,uVar6,uVar7,param_1 + 0x0000057C);
    if (uVar9 < 7) {
      switch(*(u32 *)(uVar9 * 4 + 0x080BF24C) & 0xfffffffe) {
      case 0x80bf268:
        if (iStack_28 == 0) {
          *(u32 *)(param_1 + 0x5a0) = 2;
        }
        else {
          code_0803EE94_78C0_Sub_08050D5C(*(u32 *)(param_1 + 0x418));
        }
        break;
      case 0x80bf288:
        if (iVar8 == 1) {
          code_0803EE94_78C0_Sub_08050D8C(*(u32 *)(param_1 + 0x418),&uStack_50);
          code_0803EE94_GetField_0x00_0DD8(*(u32 *)(param_1 + 0x418));
          iStack_28 = 0;
        }
      }
    }
    if (iStack_28 == 0) {
      iStack_24 = iStack_24 + 1;
      if (0x78 < iStack_24) {
        code_0803EE94_GetField_0x00_0DE4(*(u32 *)(param_1 + 0x418));
        code_0803EE94_78C0_Sub_08050D74(*(u32 *)(param_1 + 0x418));
      }
    }
    hardware_Sub_080BDF40(param_1);
  }
}

/* 0x080C0B58 (24B) | code_809E804_8544_Sub_080C0B58 (orig: func_080C0B58) | origin: pure | domain: code_809E804_8544 | MEDIUM / graph_algebra */
extern u16 g_08107FC6[]; u16 code_809E804_8544_Sub_080C0B58(u8 *a) { return g_08107FC6[*(u32 *)(a + (0xc3 << 3))]; }

/* 0x080C0D1C (40B) | code_809E804_8544_Create (orig: func_080C0D1C) | origin: pure | domain: code_809E804_8544 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 SpriteAnimEngine_Create_C938();
u32 code_809E804_8544_Create(u32 *arg0,u32 arg1) {
  u32 val;
  *arg0 = 0x080E8544;
  val = CppRuntime_builtin_new(0x620);
  val = SpriteAnimEngine_Create_C938(val,arg1);
  arg0[1] = val;
  return arg0;
}

/* 0x080C0D44 (48B) | code_809E804_8544_Ctor (orig: func_080C0D44) | origin: pure | domain: code_809E804_8544 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void code_809E804_8544_Ctor(u32 *arg0,u32 arg1) {
  int val;
  *arg0 = 0x080E8544;
  val = arg0[1];
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  scene_Dtor(arg0,arg1);
}

/* 0x080C0D90 (60B) | code_809E804_8544_vfunc_0C (orig: func_080C0D90) | origin: pure | domain: code_809E804_8544 | HIGH / vtable_algebra */
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
extern "C" AutoPtr<V1> code_809E804_8544_Sub_080BCCE0(int);
extern "C" AutoPtr<V0> code_809E804_8544_vfunc_0C(In *in) {
    return code_809E804_8544_Sub_080BCCE0(in->f4);
}

