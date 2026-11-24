/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_809E804_8560 (10 functions) */
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

/* 0x080C12C4 (504B) | code_809E804_8560_Sub_080C12C4 (orig: func_080C12C4) | origin: wip | domain: code_809E804_8560 | MEDIUM / graph_algebra */
u32 code_809E804_8560_Sub_080C12C4(u32 *param_1,int param_2) {
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
  hardware_Wrap_Ctor_14BC(param_2);
  iVar1 = hardware_GetField_0x00_8918(param_2);
  *(u16 *)(iVar1 + 0x50) = 0x3f;
  piVar9 = (int *)(param_2 + 0x00000544);
  hardware_Sub_0800934C(*piVar9 + 0xc,0x00000889,1,1);
  iVar1 = hardware_GetField_0x00_8940(param_2);
  func_080D3914(iVar1,*piVar9,*(u32 *)(*(int *)(iVar1 + 8) + 0x10));
  code_809E804_8560_Sub_080C3B18(param_2);
  code_809E804_8560_Sub_080C3C18(param_2);
  hardware_Sub_080C160C(param_2);
  code_809E804_8560_Sub_080C16D4(param_2);
  hardware_Wrap_m4aMPlayStart(param_2 + 0x810,0x22);
  ppiStack_28 = &piStack_3c;
  ppuStack_24 = appiStack_38;
  iVar1 = *(int *)(param_2 + 0x0000089C);
  while (iVar1 != 7) {
    hardware_Ctor_87C8(param_2);
    if (*(u32 *)(param_2 + 0x0000089C) < 7) {
      switch(*(u32 *)(*(u32 *)(param_2 + 0x0000089C) * 4 + 0x080C1370) & 0xfffffffe) {
      case 0x80c138c:
        code_809E804_8560_Sub_080C3D04(param_2);
        break;
      case 0x80c1394:
        code_809E804_8560_Sub_080C516C(param_2);
        break;
      case 0x80c139c:
        hardware_Sub_080C5378(param_2);
        break;
      case 0x80c13a4:
        hardware_Sub_080C5648(param_2);
        break;
      case 0x80c13ac:
        hardware_Sub_080C5710(param_2);
        break;
      case 0x80c13b4:
        code_809E804_8560_Sub_080C5A6C(param_2);
        break;
      case 0x80c13bc:
        code_809E804_8560_Sub_080C608C(param_2);
      }
    }
    iVar1 = *(int *)(param_2 + 0x0000089C);
  }
  puVar10 = (u32 *)(param_2 + 0x00000544);
  uVar7 = *(u32 *)*puVar10;
  if (-1 < (int)(-uVar7 | uVar7)) {
    hardware_Sub_08009378((u32 *)*puVar10 + 3,0x00000889,1,1);
    iVar1 = hardware_GetField_0x00_8940(param_2);
    func_080D3914(iVar1,*puVar10,*(u32 *)(*(int *)(iVar1 + 8) + 0x10));
  }
  if ((int)(-*(u32 *)*puVar10 | *(u32 *)*puVar10) < 0) {
    puStack_2c = (u32 *)(param_2 + 0x0000051C);
    iVar1 = 0x00000814 + param_2;
    do {
      hardware_Ctor_87C8(param_2);
      uVar8 = *puStack_2c;
      uVar2 = hardware_GetField_0x00_88DC(param_2);
      uVar3 = hardware_GetField_0x00_8920(param_2);
      uVar4 = hardware_GetField_0x00_8918(param_2);
      uVar5 = hardware_GetField_0x00_8940(param_2);
      uVar6 = hardware_Sub_0800894C(param_2);
      code_0803EE94_78A8_Wrap_Ctor(uVar8,uVar2,uVar3,uVar4,uVar5,uVar6,iVar1);
      hardware_Sub_080C2D54(param_2);
    } while ((int)(-**(u32 **)(param_2 + 0x00000544) | **(u32 **)(param_2 + 0x00000544)) < 0
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

/* 0x080C16D4 (4096B) | code_809E804_8560_Sub_080C16D4 (orig: func_080C16D4) | origin: wip | domain: code_809E804_8560 | MEDIUM / graph_algebra */
void code_809E804_8560_Sub_080C16D4(int param_1) {
  u16 uVar1;
  u16 uVar2;
  int *piVar3;
  int iVar4;
  u32 uVar5;
  u16 *puVar6;
  u16 *puVar7;
  int iVar8;
  u32 *puVar9;
  u32 *puVar10;
  u32 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  u32 uVar16;
  int iVar17;
  u8 auStack_e4 [4];
  u32 uStack_e0;
  u32 uStack_dc;
  u32 uStack_d8;
  u32 uStack_d4;
  u32 uStack_d0;
  u32 uStack_cc;
  u32 uStack_c8;
  u32 uStack_c4;
  u32 uStack_b0;
  u32 uStack_ac;
  int iStack_a8;
  int iStack_a4;
  u32 uStack_a0;
  u32 uStack_9c;
  int iStack_98;
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
  u32 *puStack_34;
  int iStack_30;
  u32 *puStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  hardware_HW_DMA3SAD(*(u16 *)0x080F9F78,0x05000360,0x20);
  hardware_Sub_080C14C8(param_1);
  puVar6 = 0x0500024A;
  *(u16 *)0x0500024A = *(u16 *)0x05000362;
  puVar6[1] = *(u16 *)0x05000364;
  puVar6[2] = 0x1f;
  puVar6[3] = (short)0x0000675E;
  hardware_HW_DMA3SAD_8EB8(0,param_1 + 0x548,8);
  code_0803EE94_Sub_0804EC84(*(u8 *)(0x0000097B + param_1),auStack_e4,0);
  puVar6 = 0x05000240;
  *(u16 *)0x05000240 = 0x3e0;
  puVar6[1] = (short)0x00000303;
  puVar6[2] = (short)0x00004F15;
  puVar6[3] = (short)0x00007FFF;
  puVar6[4] = (short)0x000052F8;
  uStack_b0 = 0x20004;
  iVar12 = param_1 + 0xc;
  Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(0x20004,iVar12,0);
  uStack_ac = 0x20004;
  SpriteAnimEngine_Sub_0804E958(0x20004,iVar12,0,0,auStack_e4,0,1);
  piVar3 = (int *)hardware_GetField_0x00_8910(param_1);
  iVar4 = hardware_Sub_08007D4C(0x0000083C + param_1,*(u32 *)(0x0000083C + param_1 + 4));
  hardware_Sub_08008F0C(&uStack_e0,iVar12,iVar4 * 0x20 + 0x06010000,0x100);
  puVar9 = (u32 *)piVar3[1];
  if (puVar9 == (u32 *)piVar3[3]) {
    iStack_a4 = 1;
    iStack_a8 = (int)puVar9 - *piVar3 >> 4;
    piVar15 = &iStack_a8;
    if (iStack_a8 == 0) {
      piVar15 = &iStack_a4;
    }
    puStack_28 = puVar9;
    if (iStack_a8 + *piVar15 == 0) {
      puStack_24 = (u32 *)0x0;
      iVar4 = 0;
    }
    else {
      iVar4 = (iStack_a8 + *piVar15) * 0x10;
      puStack_24 = (u32 *)LibC_malloc(iVar4);
      if (puStack_24 == (u32 *)0x0) {
        puStack_24 = (u32 *)code_linkonce_Sub_080D3BC0(iVar4);
      }
    }
    puStack_34 = &uStack_a0;
    puStack_2c = &uStack_d0;
    puVar11 = puStack_24;
    for (puVar9 = (u32 *)*piVar3; puVar9 != puStack_28; puVar9 = puVar9 + 4) {
      if (puVar11 != (u32 *)0x0) {
        uVar5 = puVar9[1];
        uVar16 = puVar9[2];
        *puVar11 = *puVar9;
        puVar11[1] = uVar5;
        puVar11[2] = uVar16;
        puVar11[3] = puVar9[3];
      }
      puVar11 = puVar11 + 4;
    }
    iVar12 = iStack_a4;
    if (iStack_a4 == 1) {
      if (puVar11 != (u32 *)0x0) {
        *puVar11 = uStack_e0;
        puVar11[1] = uStack_dc;
        puVar11[2] = uStack_d8;
        puVar11[3] = uStack_d4;
      }
      puVar11 = puVar11 + 4;
    }
    else {
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar11 != (u32 *)0x0) {
          *puVar11 = uStack_e0;
          puVar11[1] = uStack_dc;
          puVar11[2] = uStack_d8;
          puVar11[3] = uStack_d4;
        }
        puVar11 = puVar11 + 4;
      }
    }
    for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
    }
    if (*piVar3 != 0) {
      LibC_free();
    }
    *piVar3 = (int)puStack_24;
    piVar3[1] = (int)puVar11;
    piVar3[3] = (int)puStack_24 + iVar4;
  }
  else {
    if (puVar9 != (u32 *)0x0) {
      *puVar9 = uStack_e0;
      puVar9[1] = uStack_dc;
      puVar9[2] = uStack_d8;
      puVar9[3] = uStack_d4;
    }
    piVar3[1] = piVar3[1] + 0x10;
    puStack_34 = &uStack_a0;
    puStack_2c = &uStack_d0;
  }
  uVar5 = hardware_Sub_08007D4C(0x0000083C + param_1,*(u32 *)(0x0000083C + param_1 + 4));
  code_0803EE94_Sub_0804EA94(puStack_34,0xd0,8,uVar5,2,0,2,1);
  *(u32 *)(param_1 + 0x548) = uStack_a0;
  *(u32 *)(param_1 + 0x54c) = uStack_9c;
  uVar5 = CppRuntime_builtin_new(0x14);
  iVar4 = code_0803EE94_Sub_0805E824(uVar5,*(u32 *)(param_1 + 0x520),0,0x100);
  piVar3 = (int *)(param_1 + 0x550);
  if (iVar4 != *piVar3) {
    CppRuntime_builtin_delete();
  }
  *piVar3 = iVar4;
  puVar6 = (u16 *)CppRuntime_builtin_new(0x1c);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  *(u32 *)(puVar6 + 6) = 0;
  *(u8 *)(puVar6 + 8) = 0;
  *(u8 *)((int)puVar6 + 0x11) = 0;
  *(u32 *)(puVar6 + 10) = 0;
  *(u8 *)(puVar6 + 0xc) = 0;
  piVar15 = (int *)(0x00000554 + param_1);
  if (puVar6 != (u16 *)*piVar15) {
    CppRuntime_builtin_delete();
  }
  *piVar15 = (int)puVar6;
  code_0803EE94_Sub_0805E860(*piVar3,0);
  *(u16 *)*piVar15 = 0x40;
  *(u16 *)(*piVar15 + 2) = 0x40;
  iVar4 = *piVar15;
  iVar12 = 0x00000844 + param_1;
  uVar1 = hardware_Sub_08007D4C(iVar12,*(u32 *)(iVar12 + 4));
  *(u16 *)(iVar4 + 6) = uVar1;
  *(u16 *)(*piVar15 + 4) = 3;
  *(u8 *)(*piVar15 + 0x18) = 1;
  puVar9 = (u32 *)*piVar3;
  func_080D3918(&uStack_d0,(int *)*puVar9,
                  *(u16 *)(puVar9[1] + (u32)*(u16 *)(puVar9 + 3) * 4),
                  *(u32 *)(*(int *)*puVar9 + 0x10));
  LibC_memcpy(puStack_2c,puStack_2c,0x20);
  uVar5 = puStack_2c[1];
  uVar16 = puStack_2c[2];
  *(u32 *)(param_1 + 0x558) = *puStack_2c;
  *(u32 *)(param_1 + 0x55c) = uVar5;
  *(u32 *)(param_1 + 0x560) = uVar16;
  uVar5 = puStack_2c[4];
  uVar16 = puStack_2c[5];
  *(u32 *)(param_1 + 0x564) = puStack_2c[3];
  *(u32 *)(param_1 + 0x568) = uVar5;
  *(u32 *)(param_1 + 0x56c) = uVar16;
  uVar5 = puStack_2c[7];
  *(u32 *)(param_1 + 0x570) = puStack_2c[6];
  *(u32 *)(param_1 + 0x574) = uVar5;
  piVar3 = (int *)hardware_GetField_0x00_8910(param_1);
  iVar17 = *(int *)(param_1 + 0x560);
  iVar4 = hardware_Sub_08007D4C(iVar12,*(u32 *)(iVar12 + 4));
  uVar1 = 0;
  if (*(int *)(param_1 + 0x560) != 0) {
    uVar1 = *(u16 *)(param_1 + 0x564);
  }
  hardware_Sub_08008F0C(&uStack_e0,iVar17,iVar4 * 0x20 + 0x06010000,uVar1);
  puVar9 = (u32 *)piVar3[1];
  if (puVar9 == (u32 *)piVar3[3]) {
    iStack_94 = 1;
    iStack_98 = (int)puVar9 - *piVar3 >> 4;
    piVar15 = &iStack_98;
    if (iStack_98 == 0) {
      piVar15 = &iStack_94;
    }
    puStack_28 = puVar9;
    if (iStack_98 + *piVar15 == 0) {
      puVar9 = (u32 *)0x0;
      iVar4 = 0;
    }
    else {
      iVar4 = (iStack_98 + *piVar15) * 0x10;
      puVar9 = (u32 *)LibC_malloc(iVar4);
      if (puVar9 == (u32 *)0x0) {
        puVar9 = (u32 *)code_linkonce_Sub_080D3BC0(iVar4);
      }
    }
    puVar11 = puVar9;
    for (puVar10 = (u32 *)*piVar3; puVar10 != puStack_28; puVar10 = puVar10 + 4) {
      if (puVar11 != (u32 *)0x0) {
        uVar5 = puVar10[1];
        uVar16 = puVar10[2];
        *puVar11 = *puVar10;
        puVar11[1] = uVar5;
        puVar11[2] = uVar16;
        puVar11[3] = puVar10[3];
      }
      puVar11 = puVar11 + 4;
    }
    iVar12 = iStack_94;
    if (iStack_94 == 1) {
      if (puVar11 != (u32 *)0x0) {
        *puVar11 = uStack_e0;
        puVar11[1] = uStack_dc;
        puVar11[2] = uStack_d8;
        puVar11[3] = uStack_d4;
      }
      puVar11 = puVar11 + 4;
    }
    else {
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar11 != (u32 *)0x0) {
          *puVar11 = uStack_e0;
          puVar11[1] = uStack_dc;
          puVar11[2] = uStack_d8;
          puVar11[3] = uStack_d4;
        }
        puVar11 = puVar11 + 4;
      }
    }
    for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
    }
    puStack_24 = puVar9;
    if (*piVar3 != 0) {
      LibC_free();
    }
    *piVar3 = (int)puStack_24;
    piVar3[1] = (int)puVar11;
    piVar3[3] = (int)puStack_24 + iVar4;
  }
  else {
    if (puVar9 != (u32 *)0x0) {
      *puVar9 = uStack_e0;
      puVar9[1] = uStack_dc;
      puVar9[2] = uStack_d8;
      puVar9[3] = uStack_d4;
    }
    piVar3[1] = piVar3[1] + 0x10;
  }
  piVar3 = (int *)hardware_GetField_0x00_8910(param_1);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x568) != 0) {
    uVar1 = *(u16 *)(param_1 + 0x56c);
  }
  hardware_Sub_08008F0C(&uStack_e0,*(int *)(param_1 + 0x568),0x05000260,uVar1);
  puVar9 = (u32 *)piVar3[1];
  if (puVar9 == (u32 *)piVar3[3]) {
    iStack_8c = 1;
    iStack_90 = (int)puVar9 - *piVar3 >> 4;
    piVar15 = &iStack_90;
    if (iStack_90 == 0) {
      piVar15 = &iStack_8c;
    }
    puStack_28 = puVar9;
    if (iStack_90 + *piVar15 == 0) {
      puVar9 = (u32 *)0x0;
      iVar4 = 0;
    }
    else {
      iVar4 = (iStack_90 + *piVar15) * 0x10;
      puVar9 = (u32 *)LibC_malloc(iVar4);
      if (puVar9 == (u32 *)0x0) {
        puVar9 = (u32 *)code_linkonce_Sub_080D3BC0(iVar4);
      }
    }
    puVar10 = puVar9;
    for (puVar11 = (u32 *)*piVar3; puVar11 != puStack_28; puVar11 = puVar11 + 4) {
      if (puVar10 != (u32 *)0x0) {
        uVar5 = puVar11[1];
        uVar16 = puVar11[2];
        *puVar10 = *puVar11;
        puVar10[1] = uVar5;
        puVar10[2] = uVar16;
        puVar10[3] = puVar11[3];
      }
      puVar10 = puVar10 + 4;
    }
    iVar12 = iStack_8c;
    if (iStack_8c == 1) {
      if (puVar10 != (u32 *)0x0) {
        *puVar10 = uStack_e0;
        puVar10[1] = uStack_dc;
        puVar10[2] = uStack_d8;
        puVar10[3] = uStack_d4;
      }
      puVar10 = puVar10 + 4;
    }
    else {
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar10 != (u32 *)0x0) {
          *puVar10 = uStack_e0;
          puVar10[1] = uStack_dc;
          puVar10[2] = uStack_d8;
          puVar10[3] = uStack_d4;
        }
        puVar10 = puVar10 + 4;
      }
    }
    for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
    }
    puStack_24 = puVar9;
    if (*piVar3 != 0) {
      LibC_free();
    }
    *piVar3 = (int)puStack_24;
    piVar3[1] = (int)puVar10;
    piVar3[3] = (int)puStack_24 + iVar4;
  }
  else {
    if (puVar9 != (u32 *)0x0) {
      *puVar9 = uStack_e0;
      puVar9[1] = uStack_dc;
      puVar9[2] = uStack_d8;
      puVar9[3] = uStack_d4;
    }
    piVar3[1] = piVar3[1] + 0x10;
  }
  uVar5 = CppRuntime_builtin_new(0x14);
  iVar4 = code_0803EE94_Sub_0805E824(uVar5,*(u32 *)(param_1 + 0x528),0,0x100);
  piVar3 = (int *)(param_1 + 0x578);
  if (iVar4 != *piVar3) {
    CppRuntime_builtin_delete();
  }
  *piVar3 = iVar4;
  puVar6 = (u16 *)CppRuntime_builtin_new(0x1c);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  *(u32 *)(puVar6 + 6) = 0;
  *(u8 *)(puVar6 + 8) = 0;
  *(u8 *)((int)puVar6 + 0x11) = 0;
  *(u32 *)(puVar6 + 10) = 0;
  *(u8 *)(puVar6 + 0xc) = 0;
  piVar15 = (int *)(0x0000057C + param_1);
  if (puVar6 != (u16 *)*piVar15) {
    CppRuntime_builtin_delete();
  }
  *piVar15 = (int)puVar6;
  code_0803EE94_Sub_0805E860(*piVar3,0);
  *(u16 *)*piVar15 = 0xc0;
  *(u16 *)(*piVar15 + 2) = 0;
  iVar4 = *piVar15;
  iVar12 = 0x00000864 + param_1;
  uVar1 = hardware_Sub_08007D4C(iVar12,*(u32 *)(iVar12 + 4));
  *(u16 *)(iVar4 + 6) = uVar1;
  *(u16 *)(*piVar15 + 4) = 7;
  *(u16 *)(*piVar15 + 8) = 1;
  *(u8 *)(*piVar15 + 0x18) = 1;
  puVar9 = (u32 *)*piVar3;
  func_080D3918(&uStack_e0,(int *)*puVar9,
                  *(u16 *)(puVar9[1] + (u32)*(u16 *)(puVar9 + 3) * 4),
                  *(u32 *)(*(int *)*puVar9 + 0x10));
  LibC_memcpy(&uStack_e0,&uStack_e0,0x20);
  *(u32 *)(param_1 + 0x580) = uStack_e0;
  *(u32 *)(param_1 + 0x584) = uStack_dc;
  *(u32 *)(param_1 + 0x588) = uStack_d8;
  *(u32 *)(param_1 + 0x58c) = uStack_d4;
  *(u32 *)(param_1 + 0x590) = uStack_d0;
  *(u32 *)(param_1 + 0x594) = uStack_cc;
  *(u32 *)(param_1 + 0x598) = uStack_c8;
  *(u32 *)(param_1 + 0x59c) = uStack_c4;
  piVar3 = (int *)hardware_GetField_0x00_8910(param_1);
  iVar17 = *(int *)(param_1 + 0x588);
  iVar4 = hardware_Sub_08007D4C(iVar12,*(u32 *)(iVar12 + 4));
  uVar1 = 0;
  if (*(int *)(param_1 + 0x588) != 0) {
    uVar1 = *(u16 *)(param_1 + 0x58c);
  }
  hardware_Sub_08008F0C(&uStack_e0,iVar17,iVar4 * 0x20 + 0x06010000,uVar1);
  puVar9 = (u32 *)piVar3[1];
  if (puVar9 == (u32 *)piVar3[3]) {
    iStack_84 = 1;
    iStack_88 = (int)puVar9 - *piVar3 >> 4;
    piVar15 = &iStack_88;
    if (iStack_88 == 0) {
      piVar15 = &iStack_84;
    }
    puStack_28 = puVar9;
    if (iStack_88 + *piVar15 == 0) {
      puVar9 = (u32 *)0x0;
      iVar4 = 0;
    }
    else {
      iVar4 = (iStack_88 + *piVar15) * 0x10;
      puVar9 = (u32 *)LibC_malloc(iVar4);
      if (puVar9 == (u32 *)0x0) {
        puVar9 = (u32 *)code_linkonce_Sub_080D3BC0(iVar4);
      }
    }
    puVar10 = puVar9;
    for (puVar11 = (u32 *)*piVar3; puVar11 != puStack_28; puVar11 = puVar11 + 4) {
      if (puVar10 != (u32 *)0x0) {
        uVar5 = puVar11[1];
        uVar16 = puVar11[2];
        *puVar10 = *puVar11;
        puVar10[1] = uVar5;
        puVar10[2] = uVar16;
        puVar10[3] = puVar11[3];
      }
      puVar10 = puVar10 + 4;
    }
    iVar12 = iStack_84;
    if (iStack_84 == 1) {
      if (puVar10 != (u32 *)0x0) {
        *puVar10 = uStack_e0;
        puVar10[1] = uStack_dc;
        puVar10[2] = uStack_d8;
        puVar10[3] = uStack_d4;
      }
      puVar10 = puVar10 + 4;
    }
    else {
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar10 != (u32 *)0x0) {
          *puVar10 = uStack_e0;
          puVar10[1] = uStack_dc;
          puVar10[2] = uStack_d8;
          puVar10[3] = uStack_d4;
        }
        puVar10 = puVar10 + 4;
      }
    }
    for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
    }
    puStack_24 = puVar9;
    if (*piVar3 != 0) {
      LibC_free();
    }
    *piVar3 = (int)puStack_24;
    piVar3[1] = (int)puVar10;
    piVar3[3] = (int)puStack_24 + iVar4;
  }
  else {
    if (puVar9 != (u32 *)0x0) {
      *puVar9 = uStack_e0;
      puVar9[1] = uStack_dc;
      puVar9[2] = uStack_d8;
      puVar9[3] = uStack_d4;
    }
    piVar3[1] = piVar3[1] + 0x10;
  }
  piVar3 = (int *)hardware_GetField_0x00_8910(param_1);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x590) != 0) {
    uVar1 = *(u16 *)(param_1 + 0x594);
  }
  hardware_Sub_08008F0C(&uStack_e0,*(int *)(param_1 + 0x590),0x050002E0,uVar1);
  puVar9 = (u32 *)piVar3[1];
  if (puVar9 == (u32 *)piVar3[3]) {
    iStack_7c = 1;
    iStack_80 = (int)puVar9 - *piVar3 >> 4;
    piVar15 = &iStack_80;
    if (iStack_80 == 0) {
      piVar15 = &iStack_7c;
    }
    puStack_28 = puVar9;
    if (iStack_80 + *piVar15 == 0) {
      puVar9 = (u32 *)0x0;
      iVar4 = 0;
    }
    else {
      iVar4 = (iStack_80 + *piVar15) * 0x10;
      puVar9 = (u32 *)LibC_malloc(iVar4);
      if (puVar9 == (u32 *)0x0) {
        puVar9 = (u32 *)code_linkonce_Sub_080D3BC0(iVar4);
      }
    }
    puVar10 = puVar9;
    for (puVar11 = (u32 *)*piVar3; puVar11 != puStack_28; puVar11 = puVar11 + 4) {
      if (puVar10 != (u32 *)0x0) {
        uVar5 = puVar11[1];
        uVar16 = puVar11[2];
        *puVar10 = *puVar11;
        puVar10[1] = uVar5;
        puVar10[2] = uVar16;
        puVar10[3] = puVar11[3];
      }
      puVar10 = puVar10 + 4;
    }
    iVar12 = iStack_7c;
    if (iStack_7c == 1) {
      if (puVar10 != (u32 *)0x0) {
        *puVar10 = uStack_e0;
        puVar10[1] = uStack_dc;
        puVar10[2] = uStack_d8;
        puVar10[3] = uStack_d4;
      }
      puVar10 = puVar10 + 4;
    }
    else {
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar10 != (u32 *)0x0) {
          *puVar10 = uStack_e0;
          puVar10[1] = uStack_dc;
          puVar10[2] = uStack_d8;
          puVar10[3] = uStack_d4;
        }
        puVar10 = puVar10 + 4;
      }
    }
    for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
    }
    puStack_24 = puVar9;
    if (*piVar3 != 0) {
      LibC_free();
    }
    *piVar3 = (int)puStack_24;
    piVar3[1] = (int)puVar10;
    piVar3[3] = (int)puStack_24 + iVar4;
  }
  else {
    if (puVar9 != (u32 *)0x0) {
      *puVar9 = uStack_e0;
      puVar9[1] = uStack_dc;
      puVar9[2] = uStack_d8;
      puVar9[3] = uStack_d4;
    }
    piVar3[1] = piVar3[1] + 0x10;
  }
  uVar5 = CppRuntime_builtin_new(0x14);
  iVar4 = code_0803EE94_Sub_0805E824(uVar5,*(u32 *)(param_1 + 0x538),0,0x100);
  piVar3 = (int *)(param_1 + 0x728);
  if (iVar4 != *piVar3) {
    CppRuntime_builtin_delete();
  }
  *piVar3 = iVar4;
  puVar6 = (u16 *)CppRuntime_builtin_new(0x1c);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  *(u32 *)(puVar6 + 6) = 0;
  *(u8 *)(puVar6 + 8) = 0;
  *(u8 *)((int)puVar6 + 0x11) = 0;
  *(u32 *)(puVar6 + 10) = 0;
  *(u8 *)(puVar6 + 0xc) = 0;
  piVar15 = (int *)(0x0000072C + param_1);
  if (puVar6 != (u16 *)*piVar15) {
    CppRuntime_builtin_delete();
  }
  *piVar15 = (int)puVar6;
  code_0803EE94_Sub_0805E860(*piVar3,6);
  iVar4 = *piVar15;
  iVar12 = 0x0000086C + param_1;
  uVar1 = hardware_Sub_08007D4C(iVar12,*(u32 *)(iVar12 + 4));
  *(u16 *)(iVar4 + 6) = uVar1;
  *(u16 *)(*piVar15 + 4) = 8;
  *(u8 *)(*piVar15 + 0x18) = 1;
  puVar9 = (u32 *)*piVar3;
  func_080D3918(&uStack_e0,(int *)*puVar9,
                  *(u16 *)(puVar9[1] + (u32)*(u16 *)(puVar9 + 3) * 4),
                  *(u32 *)(*(int *)*puVar9 + 0x10));
  LibC_memcpy(&uStack_e0,&uStack_e0,0x20);
  *(u32 *)(param_1 + 0x730) = uStack_e0;
  *(u32 *)(param_1 + 0x734) = uStack_dc;
  *(u32 *)(param_1 + 0x738) = uStack_d8;
  *(u32 *)(param_1 + 0x73c) = uStack_d4;
  *(u32 *)(param_1 + 0x740) = uStack_d0;
  *(u32 *)(param_1 + 0x744) = uStack_cc;
  *(u32 *)(param_1 + 0x748) = uStack_c8;
  *(u32 *)(param_1 + 0x74c) = uStack_c4;
  piVar3 = (int *)hardware_GetField_0x00_8910(param_1);
  iVar17 = *(int *)(param_1 + 0x738);
  iVar4 = hardware_Sub_08007D4C(iVar12,*(u32 *)(iVar12 + 4));
  uVar1 = 0;
  if (*(int *)(param_1 + 0x738) != 0) {
    uVar1 = *(u16 *)(param_1 + 0x73c);
  }
  hardware_Sub_08008F0C(&uStack_e0,iVar17,iVar4 * 0x20 + 0x06010000,uVar1);
  puVar9 = (u32 *)piVar3[1];
  if (puVar9 == (u32 *)piVar3[3]) {
    iStack_74 = 1;
    iStack_78 = (int)puVar9 - *piVar3 >> 4;
    piVar15 = &iStack_78;
    if (iStack_78 == 0) {
      piVar15 = &iStack_74;
    }
    puStack_28 = puVar9;
    if (iStack_78 + *piVar15 == 0) {
      puVar9 = (u32 *)0x0;
      iVar4 = 0;
    }
    else {
      iVar4 = (iStack_78 + *piVar15) * 0x10;
      puVar9 = (u32 *)LibC_malloc(iVar4);
      if (puVar9 == (u32 *)0x0) {
        puVar9 = (u32 *)code_linkonce_Sub_080D3BC0(iVar4);
      }
    }
    puVar11 = puVar9;
    for (puVar10 = (u32 *)*piVar3; puVar10 != puStack_28; puVar10 = puVar10 + 4) {
      if (puVar11 != (u32 *)0x0) {
        uVar5 = puVar10[1];
        uVar16 = puVar10[2];
        *puVar11 = *puVar10;
        puVar11[1] = uVar5;
        puVar11[2] = uVar16;
        puVar11[3] = puVar10[3];
      }
      puVar11 = puVar11 + 4;
    }
    iVar12 = iStack_74;
    if (iStack_74 == 1) {
      if (puVar11 != (u32 *)0x0) {
        *puVar11 = uStack_e0;
        puVar11[1] = uStack_dc;
        puVar11[2] = uStack_d8;
        puVar11[3] = uStack_d4;
      }
      puVar11 = puVar11 + 4;
    }
    else {
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar11 != (u32 *)0x0) {
          *puVar11 = uStack_e0;
          puVar11[1] = uStack_dc;
          puVar11[2] = uStack_d8;
          puVar11[3] = uStack_d4;
        }
        puVar11 = puVar11 + 4;
      }
    }
    for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
    }
    puStack_24 = puVar9;
    if (*piVar3 != 0) {
      LibC_free();
    }
    *piVar3 = (int)puStack_24;
    piVar3[1] = (int)puVar11;
    piVar3[3] = (int)puStack_24 + iVar4;
  }
  else {
    if (puVar9 != (u32 *)0x0) {
      *puVar9 = uStack_e0;
      puVar9[1] = uStack_dc;
      puVar9[2] = uStack_d8;
      puVar9[3] = uStack_d4;
    }
    piVar3[1] = piVar3[1] + 0x10;
  }
  piVar3 = (int *)hardware_GetField_0x00_8910(param_1);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x740) != 0) {
    uVar1 = *(u16 *)(param_1 + 0x744);
  }
  hardware_Sub_08008F0C(&uStack_e0,*(int *)(param_1 + 0x740),0x05000300,uVar1);
  puVar9 = (u32 *)piVar3[1];
  if (puVar9 == (u32 *)piVar3[3]) {
    iStack_6c = 1;
    iStack_70 = (int)puVar9 - *piVar3 >> 4;
    piVar15 = &iStack_70;
    if (iStack_70 == 0) {
      piVar15 = &iStack_6c;
    }
    puStack_28 = puVar9;
    if (iStack_70 + *piVar15 == 0) {
      puVar9 = (u32 *)0x0;
      iVar4 = 0;
    }
    else {
      iVar4 = (iStack_70 + *piVar15) * 0x10;
      puVar9 = (u32 *)LibC_malloc(iVar4);
      if (puVar9 == (u32 *)0x0) {
        puVar9 = (u32 *)code_linkonce_Sub_080D3BC0(iVar4);
      }
    }
    puVar10 = puVar9;
    for (puVar11 = (u32 *)*piVar3; puVar11 != puStack_28; puVar11 = puVar11 + 4) {
      if (puVar10 != (u32 *)0x0) {
        uVar5 = puVar11[1];
        uVar16 = puVar11[2];
        *puVar10 = *puVar11;
        puVar10[1] = uVar5;
        puVar10[2] = uVar16;
        puVar10[3] = puVar11[3];
      }
      puVar10 = puVar10 + 4;
    }
    iVar12 = iStack_6c;
    if (iStack_6c == 1) {
      if (puVar10 != (u32 *)0x0) {
        *puVar10 = uStack_e0;
        puVar10[1] = uStack_dc;
        puVar10[2] = uStack_d8;
        puVar10[3] = uStack_d4;
      }
      puVar10 = puVar10 + 4;
    }
    else {
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar10 != (u32 *)0x0) {
          *puVar10 = uStack_e0;
          puVar10[1] = uStack_dc;
          puVar10[2] = uStack_d8;
          puVar10[3] = uStack_d4;
        }
        puVar10 = puVar10 + 4;
      }
    }
    for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
    }
    puStack_24 = puVar9;
    if (*piVar3 != 0) {
      LibC_free();
    }
    *piVar3 = (int)puStack_24;
    piVar3[1] = (int)puVar10;
    piVar3[3] = (int)puStack_24 + iVar4;
  }
  else {
    if (puVar9 != (u32 *)0x0) {
      *puVar9 = uStack_e0;
      puVar9[1] = uStack_dc;
      puVar9[2] = uStack_d8;
      puVar9[3] = uStack_d4;
    }
    piVar3[1] = piVar3[1] + 0x10;
  }
  uVar5 = CppRuntime_builtin_new(0x14);
  puVar9 = (u32 *)(0x0000052C + param_1);
  iVar4 = code_0803EE94_Sub_0805E824(uVar5,*puVar9,0,0x100);
  if (iVar4 != *(int *)(param_1 + 0x5a0)) {
    CppRuntime_builtin_delete();
  }
  *(int *)(param_1 + 0x5a0) = iVar4;
  puVar7 = (u16 *)CppRuntime_builtin_new(0x1c);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  *(u8 *)(puVar7 + 8) = 0;
  *(u8 *)((int)puVar7 + 0x11) = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  *(u8 *)(puVar7 + 0xc) = 0;
  piVar3 = (int *)(0x000005A4 + param_1);
  if (puVar7 != (u16 *)*piVar3) {
    CppRuntime_builtin_delete();
  }
  *piVar3 = (int)puVar7;
  *puVar7 = (u16)*(u8 *)(0x000008B4 + param_1);
  puVar7[1] = (u16)*(u8 *)(0x000008B5 + param_1);
  uVar2 = hardware_Sub_08007D4C(0x0000087C + param_1,*(u32 *)(0x0000087C + param_1 + 4));
  puVar7[3] = uVar2;
  *(u16 *)(*piVar3 + 4) = 0xc;
  *(u16 *)(*piVar3 + 8) = 1;
  *(u8 *)(*piVar3 + 0x18) = 1;
  uVar5 = CppRuntime_builtin_new(0x14);
  iVar4 = code_0803EE94_Sub_0805E824(uVar5,*puVar9,0,0x100);
  piVar3 = (int *)(param_1 + 0x5c8);
  if (iVar4 != *piVar3) {
    CppRuntime_builtin_delete();
  }
  *piVar3 = iVar4;
  puVar6 = (u16 *)CppRuntime_builtin_new(0x1c);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  *(u32 *)(puVar6 + 6) = 0;
  *(u8 *)(puVar6 + 8) = 0;
  *(u8 *)((int)puVar6 + 0x11) = 0;
  *(u32 *)(puVar6 + 10) = 0;
  *(u8 *)(puVar6 + 0xc) = 0;
  piVar15 = (int *)(0x000005CC + param_1);
  if (puVar6 != (u16 *)*piVar15) {
    CppRuntime_builtin_delete();
  }
  *piVar15 = (int)puVar6;
  code_0803EE94_Sub_0805E860(*piVar3,0x0000091A);
  iVar4 = *piVar15;
  iVar12 = 0x00000884 + param_1;
  uVar1 = hardware_Sub_08007D4C(iVar12,*(u32 *)(iVar12 + 4));
  *(u16 *)(iVar4 + 6) = uVar1;
  *(u16 *)(*piVar15 + 4) = 10;
  *(u16 *)(*piVar15 + 8) = 1;
  *(u8 *)(*piVar15 + 0x18) = 1;
  puVar9 = (u32 *)*piVar3;
  func_080D3918(&uStack_e0,(int *)*puVar9,
                  *(u16 *)(puVar9[1] + (u32)*(u16 *)(puVar9 + 3) * 4),
                  *(u32 *)(*(int *)*puVar9 + 0x10));
  LibC_memcpy(&uStack_e0,&uStack_e0,0x20);
  *(u32 *)(param_1 + 0x5d0) = uStack_e0;
  *(u32 *)(param_1 + 0x5d4) = uStack_dc;
  *(u32 *)(param_1 + 0x5d8) = uStack_d8;
  *(u32 *)(param_1 + 0x5dc) = uStack_d4;
  *(u32 *)(param_1 + 0x5e0) = uStack_d0;
  *(u32 *)(param_1 + 0x5e4) = uStack_cc;
  *(u32 *)(param_1 + 0x5e8) = uStack_c8;
  *(u32 *)(param_1 + 0x5ec) = uStack_c4;
  piVar3 = (int *)hardware_GetField_0x00_8910(param_1);
  iVar17 = *(int *)(param_1 + 0x5d8);
  iVar4 = hardware_Sub_08007D4C(iVar12,*(u32 *)(iVar12 + 4));
  uVar1 = 0;
  if (*(int *)(param_1 + 0x5d8) != 0) {
    uVar1 = *(u16 *)(param_1 + 0x5dc);
  }
  hardware_Sub_08008F0C(&uStack_e0,iVar17,iVar4 * 0x20 + 0x06010000,uVar1);
  puVar9 = (u32 *)piVar3[1];
  if (puVar9 == (u32 *)piVar3[3]) {
    iStack_64 = 1;
    iStack_68 = (int)puVar9 - *piVar3 >> 4;
    piVar15 = &iStack_68;
    if (iStack_68 == 0) {
      piVar15 = &iStack_64;
    }
    puStack_28 = puVar9;
    if (iStack_68 + *piVar15 == 0) {
      puVar9 = (u32 *)0x0;
      iVar4 = 0;
    }
    else {
      iVar4 = (iStack_68 + *piVar15) * 0x10;
      puVar9 = (u32 *)LibC_malloc(iVar4);
      if (puVar9 == (u32 *)0x0) {
        puVar9 = (u32 *)code_linkonce_Sub_080D3BC0(iVar4);
      }
    }
    puVar11 = puVar9;
    for (puVar10 = (u32 *)*piVar3; puVar10 != puStack_28; puVar10 = puVar10 + 4) {
      if (puVar11 != (u32 *)0x0) {
        uVar5 = puVar10[1];
        uVar16 = puVar10[2];
        *puVar11 = *puVar10;
        puVar11[1] = uVar5;
        puVar11[2] = uVar16;
        puVar11[3] = puVar10[3];
      }
      puVar11 = puVar11 + 4;
    }
    iVar12 = iStack_64;
    if (iStack_64 == 1) {
      if (puVar11 != (u32 *)0x0) {
        *puVar11 = uStack_e0;
        puVar11[1] = uStack_dc;
        puVar11[2] = uStack_d8;
        puVar11[3] = uStack_d4;
      }
      puVar11 = puVar11 + 4;
    }
    else {
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar11 != (u32 *)0x0) {
          *puVar11 = uStack_e0;
          puVar11[1] = uStack_dc;
          puVar11[2] = uStack_d8;
          puVar11[3] = uStack_d4;
        }
        puVar11 = puVar11 + 4;
      }
    }
    for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
    }
    puStack_24 = puVar9;
    if (*piVar3 != 0) {
      LibC_free();
    }
    *piVar3 = (int)puStack_24;
    piVar3[1] = (int)puVar11;
    piVar3[3] = (int)puStack_24 + iVar4;
  }
  else {
    if (puVar9 != (u32 *)0x0) {
      *puVar9 = uStack_e0;
      puVar9[1] = uStack_dc;
      puVar9[2] = uStack_d8;
      puVar9[3] = uStack_d4;
    }
    piVar3[1] = piVar3[1] + 0x10;
  }
  piVar3 = (int *)hardware_GetField_0x00_8910(param_1);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x5e0) != 0) {
    uVar1 = *(u16 *)(param_1 + 0x5e4);
  }
  hardware_Sub_08008F0C(&uStack_e0,*(int *)(param_1 + 0x5e0),0x05000340,uVar1);
  puVar9 = (u32 *)piVar3[1];
  if (puVar9 == (u32 *)piVar3[3]) {
    iStack_5c = 1;
    iStack_60 = (int)puVar9 - *piVar3 >> 4;
    piVar15 = &iStack_60;
    if (iStack_60 == 0) {
      piVar15 = &iStack_5c;
    }
    puStack_28 = puVar9;
    if (iStack_60 + *piVar15 == 0) {
      puVar9 = (u32 *)0x0;
      iVar4 = 0;
    }
    else {
      iVar4 = (iStack_60 + *piVar15) * 0x10;
      puVar9 = (u32 *)LibC_malloc(iVar4);
      if (puVar9 == (u32 *)0x0) {
        puVar9 = (u32 *)code_linkonce_Sub_080D3BC0(iVar4);
      }
    }
    puVar10 = puVar9;
    for (puVar11 = (u32 *)*piVar3; puVar11 != puStack_28; puVar11 = puVar11 + 4) {
      if (puVar10 != (u32 *)0x0) {
        uVar5 = puVar11[1];
        uVar16 = puVar11[2];
        *puVar10 = *puVar11;
        puVar10[1] = uVar5;
        puVar10[2] = uVar16;
        puVar10[3] = puVar11[3];
      }
      puVar10 = puVar10 + 4;
    }
    iVar12 = iStack_5c;
    if (iStack_5c == 1) {
      if (puVar10 != (u32 *)0x0) {
        *puVar10 = uStack_e0;
        puVar10[1] = uStack_dc;
        puVar10[2] = uStack_d8;
        puVar10[3] = uStack_d4;
      }
      puVar10 = puVar10 + 4;
    }
    else {
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar10 != (u32 *)0x0) {
          *puVar10 = uStack_e0;
          puVar10[1] = uStack_dc;
          puVar10[2] = uStack_d8;
          puVar10[3] = uStack_d4;
        }
        puVar10 = puVar10 + 4;
      }
    }
    for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
    }
    puStack_24 = puVar9;
    if (*piVar3 != 0) {
      LibC_free();
    }
    *piVar3 = (int)puStack_24;
    piVar3[1] = (int)puVar10;
    piVar3[3] = (int)puStack_24 + iVar4;
  }
  else {
    if (puVar9 != (u32 *)0x0) {
      *puVar9 = uStack_e0;
      puVar9[1] = uStack_dc;
      puVar9[2] = uStack_d8;
      puVar9[3] = uStack_d4;
    }
    piVar3[1] = piVar3[1] + 0x10;
  }
  uVar5 = CppRuntime_builtin_new(0x14);
  iVar4 = code_0803EE94_Sub_0805E824(uVar5,*(u32 *)(0x0000052C + param_1),0,0x100);
  piVar3 = (int *)(param_1 + 0x5f0);
  if (iVar4 != *piVar3) {
    CppRuntime_builtin_delete();
  }
  *piVar3 = iVar4;
  puVar6 = (u16 *)CppRuntime_builtin_new(0x1c);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  *(u32 *)(puVar6 + 6) = 0;
  *(u8 *)(puVar6 + 8) = 0;
  *(u8 *)((int)puVar6 + 0x11) = 0;
  *(u32 *)(puVar6 + 10) = 0;
  *(u8 *)(puVar6 + 0xc) = 0;
  piVar15 = (int *)(0x000005F4 + param_1);
  if (puVar6 != (u16 *)*piVar15) {
    CppRuntime_builtin_delete();
  }
  *piVar15 = (int)puVar6;
  code_0803EE94_Sub_0805E860(*piVar3,*(int *)(param_1 + 0x980) * 0x54 + 0x0000042C);
  *(u16 *)*piVar15 = (u16)*(u8 *)(0x000008B4 + param_1);
  *(u16 *)(*piVar15 + 2) = (u16)*(u8 *)(0x000008B5 + param_1);
  iVar4 = *piVar15;
  uVar1 = hardware_Sub_08007D4C(0x0000084C + param_1,*(u32 *)(0x0000084C + param_1 + 4));
  *(u16 *)(iVar4 + 6) = uVar1;
  *(u16 *)(*piVar15 + 4) = 4;
  *(u16 *)(*piVar15 + 8) = 1;
  *(u8 *)(*piVar15 + 0x18) = 1;
  uVar5 = CppRuntime_builtin_new(0x14);
  iVar4 = code_0803EE94_Sub_0805E824(uVar5,*(u32 *)(0x00000534 + param_1),0,0x100);
  if (iVar4 != *(int *)(param_1 + 0x6a0)) {
    CppRuntime_builtin_delete();
  }
  *(int *)(param_1 + 0x6a0) = iVar4;
  code_0803EE94_Sub_0805E860(iVar4,0);
  iStack_38 = 0;
  do {
    iVar17 = 0;
    iVar4 = iStack_38 * 4;
    iVar12 = iStack_38 << 4;
    do {
      iVar8 = iStack_38 + iVar4;
      puVar6 = (u16 *)CppRuntime_builtin_new(0x1c);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      *(u32 *)(puVar6 + 6) = 0;
      *(u8 *)(puVar6 + 8) = 0;
      *(u8 *)((int)puVar6 + 0x11) = 0;
      *(u32 *)(puVar6 + 10) = 0;
      *(u8 *)(puVar6 + 0xc) = 0;
      iVar8 = (iVar8 + iVar17) * 4;
      puVar9 = (u32 *)(iVar8 + param_1 + 0x000006A4);
      if (puVar6 != (u16 *)*puVar9) {
        CppRuntime_builtin_delete();
      }
      *puVar9 = puVar6;
      iVar13 = 0x000006A4;
      **(short **)(iVar8 + param_1 + 0x000006A4) = (short)iVar17 * 0x10 + 0x50;
      *(short *)(*(int *)(iVar8 + param_1 + iVar13) + 2) = (short)iVar12 + 0x28;
      iVar13 = *(int *)(iVar8 + param_1 + iVar13);
      iVar14 = 0x00000854 + param_1;
      uVar1 = hardware_Sub_08007D4C(iVar14,*(u32 *)(iVar14 + 4));
      *(u16 *)(iVar13 + 6) = uVar1;
      iVar13 = 0x000006A4;
      *(u16 *)(*(int *)(iVar8 + param_1 + 0x000006A4) + 4) = 5;
      *(u16 *)(*(int *)(iVar8 + param_1 + iVar13) + 8) = 1;
      *(u8 *)(*(int *)(iVar8 + param_1 + iVar13) + 0x18) = 1;
      iVar17 = iVar17 + 1;
    } while (iVar17 < 5);
    puVar9 = *(u32 **)(param_1 + 0x6a0);
    func_080D3918(&uStack_e0,(int *)*puVar9,
                    *(u16 *)(puVar9[1] + (u32)*(u16 *)(puVar9 + 3) * 4),
                    *(u32 *)(*(int *)*puVar9 + 0x10));
    LibC_memcpy(&uStack_e0,&uStack_e0,0x20);
    *(u32 *)(param_1 + 0x708) = uStack_e0;
    *(u32 *)(param_1 + 0x70c) = uStack_dc;
    *(u32 *)(param_1 + 0x710) = uStack_d8;
    *(u32 *)(param_1 + 0x714) = uStack_d4;
    *(u32 *)(param_1 + 0x718) = uStack_d0;
    *(u32 *)(param_1 + 0x71c) = uStack_cc;
    *(u32 *)(param_1 + 0x720) = uStack_c8;
    *(u32 *)(param_1 + 0x724) = uStack_c4;
    piVar3 = (int *)hardware_GetField_0x00_8910(param_1,param_1 + 0x728);
    iVar12 = *(int *)(param_1 + 0x710);
    iVar4 = hardware_Sub_08007D4C(iVar14,*(u32 *)(iVar14 + 4));
    uVar1 = 0;
    if (*(int *)(param_1 + 0x710) != 0) {
      uVar1 = *(u16 *)(param_1 + 0x714);
    }
    hardware_Sub_08008F0C(&uStack_e0,iVar12,iVar4 * 0x20 + 0x06010000,uVar1);
    puVar9 = (u32 *)piVar3[1];
    if (puVar9 == (u32 *)piVar3[3]) {
      iStack_54 = 1;
      iStack_58 = (int)puVar9 - *piVar3 >> 4;
      piVar15 = &iStack_58;
      if (iStack_58 == 0) {
        piVar15 = &iStack_54;
      }
      puStack_28 = puVar9;
      if (iStack_58 + *piVar15 == 0) {
        puVar9 = (u32 *)0x0;
        iVar4 = 0;
      }
      else {
        iVar4 = (iStack_58 + *piVar15) * 0x10;
        puVar9 = (u32 *)LibC_malloc(iVar4);
        if (puVar9 == (u32 *)0x0) {
          puVar9 = (u32 *)code_linkonce_Sub_080D3BC0(iVar4);
        }
      }
      puVar10 = puVar9;
      for (puVar11 = (u32 *)*piVar3; puVar11 != puStack_28; puVar11 = puVar11 + 4) {
        if (puVar10 != (u32 *)0x0) {
          uVar5 = puVar11[1];
          uVar16 = puVar11[2];
          *puVar10 = *puVar11;
          puVar10[1] = uVar5;
          puVar10[2] = uVar16;
          puVar10[3] = puVar11[3];
        }
        puVar10 = puVar10 + 4;
      }
      iVar12 = iStack_54;
      if (iStack_54 == 1) {
        if (puVar10 != (u32 *)0x0) {
          *puVar10 = uStack_e0;
          puVar10[1] = uStack_dc;
          puVar10[2] = uStack_d8;
          puVar10[3] = uStack_d4;
        }
        puVar10 = puVar10 + 4;
      }
      else {
        for (; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (puVar10 != (u32 *)0x0) {
            *puVar10 = uStack_e0;
            puVar10[1] = uStack_dc;
            puVar10[2] = uStack_d8;
            puVar10[3] = uStack_d4;
          }
          puVar10 = puVar10 + 4;
        }
      }
      for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
      }
      puStack_24 = puVar9;
      if (*piVar3 != 0) {
        LibC_free();
      }
      *piVar3 = (int)puStack_24;
      piVar3[1] = (int)puVar10;
      piVar3[3] = (int)puStack_24 + iVar4;
    }
    else {
      if (puVar9 != (u32 *)0x0) {
        *puVar9 = uStack_e0;
        puVar9[1] = uStack_dc;
        puVar9[2] = uStack_d8;
        puVar9[3] = uStack_d4;
      }
      piVar3[1] = piVar3[1] + 0x10;
    }
    piVar3 = (int *)hardware_GetField_0x00_8910(param_1);
    uVar1 = 0;
    if (*(int *)(param_1 + 0x718) != 0) {
      uVar1 = *(u16 *)(param_1 + 0x71c);
    }
    hardware_Sub_08008F0C(&uStack_e0,*(int *)(param_1 + 0x718),0x050002A0,uVar1);
    puVar9 = (u32 *)piVar3[1];
    if (puVar9 == (u32 *)piVar3[3]) {
      iStack_4c = 1;
      iStack_50 = (int)puVar9 - *piVar3 >> 4;
      piVar15 = &iStack_50;
      if (iStack_50 == 0) {
        piVar15 = &iStack_4c;
      }
      puStack_28 = puVar9;
      if (iStack_50 + *piVar15 == 0) {
        puVar9 = (u32 *)0x0;
        iVar4 = 0;
      }
      else {
        iVar4 = (iStack_50 + *piVar15) * 0x10;
        puVar9 = (u32 *)LibC_malloc(iVar4);
        if (puVar9 == (u32 *)0x0) {
          puVar9 = (u32 *)code_linkonce_Sub_080D3BC0(iVar4);
        }
      }
      puVar10 = puVar9;
      for (puVar11 = (u32 *)*piVar3; puVar11 != puStack_28; puVar11 = puVar11 + 4) {
        if (puVar10 != (u32 *)0x0) {
          uVar5 = puVar11[1];
          uVar16 = puVar11[2];
          *puVar10 = *puVar11;
          puVar10[1] = uVar5;
          puVar10[2] = uVar16;
          puVar10[3] = puVar11[3];
        }
        puVar10 = puVar10 + 4;
      }
      iVar12 = iStack_4c;
      if (iStack_4c == 1) {
        if (puVar10 != (u32 *)0x0) {
          *puVar10 = uStack_e0;
          puVar10[1] = uStack_dc;
          puVar10[2] = uStack_d8;
          puVar10[3] = uStack_d4;
        }
        puVar10 = puVar10 + 4;
      }
      else {
        for (; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (puVar10 != (u32 *)0x0) {
            *puVar10 = uStack_e0;
            puVar10[1] = uStack_dc;
            puVar10[2] = uStack_d8;
            puVar10[3] = uStack_d4;
          }
          puVar10 = puVar10 + 4;
        }
      }
      for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
      }
      puStack_24 = puVar9;
      if (*piVar3 != 0) {
        LibC_free();
      }
      *piVar3 = (int)puStack_24;
      piVar3[1] = (int)puVar10;
      piVar3[3] = (int)puStack_24 + iVar4;
    }
    else {
      if (puVar9 != (u32 *)0x0) {
        *puVar9 = uStack_e0;
        puVar9[1] = uStack_dc;
        puVar9[2] = uStack_d8;
        puVar9[3] = uStack_d4;
      }
      piVar3[1] = piVar3[1] + 0x10;
    }
    iStack_38 = iStack_38 + 1;
  } while (iStack_38 < 5);
  uVar5 = CppRuntime_builtin_new(0x14);
  iVar4 = code_0803EE94_Sub_0805E824(uVar5,*(u32 *)(param_1 + 0x530),0,0x100);
  if (iVar4 != *(int *)(param_1 + 0x618)) {
    CppRuntime_builtin_delete();
  }
  *(int *)(param_1 + 0x618) = iVar4;
  code_0803EE94_Sub_0805E860(iVar4,0);
  iStack_38 = 0;
  do {
    iVar17 = 0;
    iVar4 = iStack_38 * 4;
    iVar12 = iStack_38 << 4;
    iStack_30 = iStack_38 + 1;
    do {
      iVar8 = iStack_38 + iVar4;
      puVar6 = (u16 *)CppRuntime_builtin_new(0x1c);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      *(u32 *)(puVar6 + 6) = 0;
      *(u8 *)(puVar6 + 8) = 0;
      *(u8 *)((int)puVar6 + 0x11) = 0;
      *(u32 *)(puVar6 + 10) = 0;
      *(u8 *)(puVar6 + 0xc) = 0;
      iVar8 = (iVar8 + iVar17) * 4;
      puVar9 = (u32 *)(iVar8 + param_1 + 0x0000061C);
      if (puVar6 != (u16 *)*puVar9) {
        CppRuntime_builtin_delete();
      }
      *puVar9 = puVar6;
      iVar13 = 0x0000061C;
      **(short **)(iVar8 + param_1 + 0x0000061C) = (short)iVar17 * 0x10 + 0x50;
      *(short *)(*(int *)(iVar8 + param_1 + iVar13) + 2) = (short)iVar12 + 0x28;
      iVar13 = *(int *)(iVar8 + param_1 + iVar13);
      iVar14 = 0x0000085C + param_1;
      uVar1 = hardware_Sub_08007D4C(iVar14,*(u32 *)(iVar14 + 4));
      *(u16 *)(iVar13 + 6) = uVar1;
      iVar13 = 0x0000061C;
      *(u16 *)(*(int *)(iVar8 + param_1 + 0x0000061C) + 4) = 6;
      *(u16 *)(*(int *)(iVar8 + param_1 + iVar13) + 8) = 1;
      *(u8 *)(*(int *)(iVar8 + param_1 + iVar13) + 0x18) = 1;
      iVar17 = iVar17 + 1;
    } while (iVar17 < 5);
    puVar9 = *(u32 **)(param_1 + 0x618);
    func_080D3918(&uStack_e0,(int *)*puVar9,
                    *(u16 *)(puVar9[1] + (u32)*(u16 *)(puVar9 + 3) * 4),
                    *(u32 *)(*(int *)*puVar9 + 0x10));
    LibC_memcpy(&uStack_e0,&uStack_e0,0x20);
    *(u32 *)(param_1 + 0x680) = uStack_e0;
    *(u32 *)(param_1 + 0x684) = uStack_dc;
    *(u32 *)(param_1 + 0x688) = uStack_d8;
    *(u32 *)(param_1 + 0x68c) = uStack_d4;
    *(u32 *)(param_1 + 0x690) = uStack_d0;
    *(u32 *)(param_1 + 0x694) = uStack_cc;
    *(u32 *)(param_1 + 0x698) = uStack_c8;
    *(u32 *)(param_1 + 0x69c) = uStack_c4;
    piVar3 = (int *)hardware_GetField_0x00_8910(param_1,param_1 + 0x6a0);
    iVar12 = *(int *)(param_1 + 0x688);
    iVar4 = hardware_Sub_08007D4C(iVar14,*(u32 *)(iVar14 + 4));
    uVar1 = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      uVar1 = *(u16 *)(param_1 + 0x68c);
    }
    hardware_Sub_08008F0C(&uStack_e0,iVar12,iVar4 * 0x20 + 0x06010000,uVar1);
    puVar9 = (u32 *)piVar3[1];
    if (puVar9 == (u32 *)piVar3[3]) {
      iStack_44 = 1;
      iStack_48 = (int)puVar9 - *piVar3 >> 4;
      piVar15 = &iStack_48;
      if (iStack_48 == 0) {
        piVar15 = &iStack_44;
      }
      puStack_28 = puVar9;
      if (iStack_48 + *piVar15 == 0) {
        puVar9 = (u32 *)0x0;
        iVar4 = 0;
      }
      else {
        iVar4 = (iStack_48 + *piVar15) * 0x10;
        puVar9 = (u32 *)LibC_malloc(iVar4);
        if (puVar9 == (u32 *)0x0) {
          puVar9 = (u32 *)code_linkonce_Sub_080D3BC0(iVar4);
        }
      }
      puVar10 = puVar9;
      for (puVar11 = (u32 *)*piVar3; puVar11 != puStack_28; puVar11 = puVar11 + 4) {
        if (puVar10 != (u32 *)0x0) {
          uVar5 = puVar11[1];
          uVar16 = puVar11[2];
          *puVar10 = *puVar11;
          puVar10[1] = uVar5;
          puVar10[2] = uVar16;
          puVar10[3] = puVar11[3];
        }
        puVar10 = puVar10 + 4;
      }
      iVar12 = iStack_44;
      if (iStack_44 == 1) {
        if (puVar10 != (u32 *)0x0) {
          *puVar10 = uStack_e0;
          puVar10[1] = uStack_dc;
          puVar10[2] = uStack_d8;
          puVar10[3] = uStack_d4;
        }
        puVar10 = puVar10 + 4;
      }
      else {
        for (; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (puVar10 != (u32 *)0x0) {
            *puVar10 = uStack_e0;
            puVar10[1] = uStack_dc;
            puVar10[2] = uStack_d8;
            puVar10[3] = uStack_d4;
          }
          puVar10 = puVar10 + 4;
        }
      }
      for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
      }
      puStack_24 = puVar9;
      if (*piVar3 != 0) {
        LibC_free();
      }
      *piVar3 = (int)puStack_24;
      piVar3[1] = (int)puVar10;
      piVar3[3] = (int)puStack_24 + iVar4;
    }
    else {
      if (puVar9 != (u32 *)0x0) {
        *puVar9 = uStack_e0;
        puVar9[1] = uStack_dc;
        puVar9[2] = uStack_d8;
        puVar9[3] = uStack_d4;
      }
      piVar3[1] = piVar3[1] + 0x10;
    }
    piVar3 = (int *)hardware_GetField_0x00_8910(param_1);
    uVar1 = 0;
    if (*(int *)(param_1 + 0x690) != 0) {
      uVar1 = *(u16 *)(param_1 + 0x694);
    }
    hardware_Sub_08008F0C(&uStack_e0,*(int *)(param_1 + 0x690),0x050002C0,uVar1);
    puVar9 = (u32 *)piVar3[1];
    if (puVar9 == (u32 *)piVar3[3]) {
      iStack_3c = 1;
      iStack_40 = (int)puVar9 - *piVar3 >> 4;
      piVar15 = &iStack_40;
      if (iStack_40 == 0) {
        piVar15 = &iStack_3c;
      }
      puStack_28 = puVar9;
      if (iStack_40 + *piVar15 == 0) {
        puVar9 = (u32 *)0x0;
        iVar4 = 0;
      }
      else {
        iVar4 = (iStack_40 + *piVar15) * 0x10;
        puVar9 = (u32 *)LibC_malloc(iVar4);
        if (puVar9 == (u32 *)0x0) {
          puVar9 = (u32 *)code_linkonce_Sub_080D3BC0(iVar4);
        }
      }
      puVar10 = puVar9;
      for (puVar11 = (u32 *)*piVar3; puVar11 != puStack_28; puVar11 = puVar11 + 4) {
        if (puVar10 != (u32 *)0x0) {
          uVar5 = puVar11[1];
          uVar16 = puVar11[2];
          *puVar10 = *puVar11;
          puVar10[1] = uVar5;
          puVar10[2] = uVar16;
          puVar10[3] = puVar11[3];
        }
        puVar10 = puVar10 + 4;
      }
      iVar12 = iStack_3c;
      if (iStack_3c == 1) {
        if (puVar10 != (u32 *)0x0) {
          *puVar10 = uStack_e0;
          puVar10[1] = uStack_dc;
          puVar10[2] = uStack_d8;
          puVar10[3] = uStack_d4;
        }
        puVar10 = puVar10 + 4;
      }
      else {
        for (; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (puVar10 != (u32 *)0x0) {
            *puVar10 = uStack_e0;
            puVar10[1] = uStack_dc;
            puVar10[2] = uStack_d8;
            puVar10[3] = uStack_d4;
          }
          puVar10 = puVar10 + 4;
        }
      }
      for (iVar12 = *piVar3; iVar12 != piVar3[1]; iVar12 = iVar12 + 0x10) {
      }
      puStack_24 = puVar9;
      if (*piVar3 != 0) {
        LibC_free();
      }
      *piVar3 = (int)puStack_24;
      piVar3[1] = (int)puVar10;
      piVar3[3] = (int)puStack_24 + iVar4;
    }
    else {
      if (puVar9 != (u32 *)0x0) {
        *puVar9 = uStack_e0;
        puVar9[1] = uStack_dc;
        puVar9[2] = uStack_d8;
        puVar9[3] = uStack_d4;
      }
      piVar3[1] = piVar3[1] + 0x10;
    }
    iStack_38 = iStack_30;
  } while (iStack_30 < 5);
}

/* 0x080C3B18 (256B) | code_809E804_8560_Sub_080C3B18 (orig: func_080C3B18) | origin: wip | domain: code_809E804_8560 | MEDIUM / graph_algebra */
void code_809E804_8560_Sub_080C3B18(int param_1) {
  u8 bVar1;
  u32 uVar2;

  u32 auStack_28 [4];
  u32 uStack_18;
  u32 uStack_14;
  u32 uStack_10;
  
  auStack_28[0] = *((const u32 *)0x08108004);
  auStack_28[1] = ((const u32 *)0x08108004)[1];
  auStack_28[2] = ((const u32 *)0x08108004)[2];
  auStack_28[3] = ((const u32 *)0x08108004)[3];
  uStack_18 = ((const u32 *)0x08108004)[4];
  uStack_14 = ((const u32 *)0x08108004)[5];
  uStack_10 = ((const u32 *)0x08108004)[6];
  *(u32 *)(param_1 + 0x984) = auStack_28[*(int *)(param_1 + 0x980)];
  bVar1 = *(u8 *)(param_1 + 0x988);
  if (bVar1 < 3) {
    uVar2 = 0;
  }
  else if ((u8)(bVar1 - 3) < 3) {
    uVar2 = 1;
  }
  else if ((u8)(bVar1 - 6) < 3) {
    uVar2 = 2;
  }
  else if ((u8)(bVar1 - 9) < 2) {
    uVar2 = 3;
  }
  else if ((u8)(bVar1 - 0xb) < 3) {
    uVar2 = 4;
  }
  else if ((u8)(bVar1 - 0xe) < 3) {
    uVar2 = 5;
  }
  else if ((u8)(bVar1 - 0x11) < 3) {
    uVar2 = 6;
  }
  else {
    uVar2 = 7;
  }
  *(u32 *)(param_1 + 0x8b0) = uVar2;
  *(char *)(param_1 + 0x97C) =
       *(char *)(*(int *)(param_1 + 0x8b0) * 4 + ((const u32 *)0x08107FE0) + 1) * '\x03';
  return 0;
}

/* 0x080C3C18 (236B) | code_809E804_8560_Sub_080C3C18 (orig: func_080C3C18) | origin: pure | domain: code_809E804_8560 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
void code_809E804_8560_Sub_080C3C18(int arg0) {
  int val;
  int val2;
  int z;

  *(u32 *)(arg0 + 0x000008BC) = 2;
  *(u8 *)(arg0 + 0x000008C4) = (z = 0, 1);
  val = 0x000008C5;
  *(u8 *)(arg0 + val) = z;
  *(u32 *)(arg0 + val + -0x29) = z;
  *(u32 *)(arg0 + val + -0x21) = z;
  *(u32 *)(arg0 + val + -0x25) = z;
  *(u32 *)(arg0 + val + -0x1d) = z;
  *(u32 *)(arg0 + val + -0x19) = z;
  *(u8 *)(arg0 + val + 0xa3) = 1;
  *(u8 *)(arg0 + val + 0xa4) = z;
  *(u8 *)(arg0 + val + 0xa5) = z;
  *(u8 *)(arg0 + val + 0xa6) = z;
  *(u8 *)(arg0 + val + 0xa7) = 1;
  val2 = 0x0000096D;
  *(u8 *)(arg0 + 0x0000096D) = z;
  *(u8 *)(arg0 + val + 0xab) = z;
  *(u8 *)(arg0 + val2 + 2) = z;
  *(u8 *)(arg0 + val + 0xa9) = z;
  *(u8 *)(arg0 + val2 + 0xb) = z;
  *(u8 *)(arg0 + val + 0xb5) = z;
  *(u8 *)(arg0 + val2 + 0xc) = z;
  *(u8 *)(arg0 + val + -0x11) = 0x78;
  *(u8 *)(arg0 + 0x000008B5) = 0x98;
  val2 = 0x000008B7;
  *(u8 *)(arg0 + 0x000008B7) = z;
  *(u8 *)(arg0 + val + -0xf) = z;
  *(u8 *)(arg0 + val2 + 2) = z;
  *(u8 *)(arg0 + val + -0xd) = z;
  *(u8 *)(arg0 + 0x0000097B) = 0x19;
  *(u8 *)(arg0 + 0x0000097E) = z;
  *(u8 *)(arg0 + val + 0xb8) = z;
  *(u8 *)(arg0 + 0x0000097F) = z;
}

/* 0x080C516C (524B) | code_809E804_8560_Sub_080C516C (orig: func_080C516C) | origin: wip | domain: code_809E804_8560 | MEDIUM / graph_algebra */
void code_809E804_8560_Sub_080C516C(int param_1) {
  u8 *puVar1;
  u16 *puVar2;
  u32 uVar3;
  u32 uVar4;
  u32 uVar5;
  u32 uVar6;
  u32 uVar7;
  u32 uVar8;
  int iVar9;
  u32 *puVar10;
  u32 uVar11;
  u8 auStack_78 [4];
  u8 auStack_74 [8];
  u8 auStack_6c [16];
  u8 auStack_5c [12];
  u32 uStack_50;
  u16 uStack_4c;
  u16 uStack_2c;
  int iStack_28;
  int iStack_24;
  code_0803EE94_Sub_0804EC84(*(u8 *)(param_1 + 0x0000097C),auStack_78,0);
  puVar10 = 0x08108218;
  LibC_memcpy(auStack_74,0x08108218,6);
  uVar3 = 0x08108220;
  LibC_memcpy(auStack_6c,0x08108220,0xf);
  uVar4 = 0x08108230;
  LibC_memcpy(auStack_5c,0x08108230,10);
  uStack_50 = *puVar10;
  uStack_4c = *(u16 *)(puVar10 + 1);
  LibC_strcat(&uStack_50,uVar3);
  LibC_strcat(&uStack_50,auStack_78);
  LibC_strcat(&uStack_50,uVar4);
  iStack_28 = 0;
  puVar1 = (u8 *)(param_1 + 0x00000904);
  iVar9 = 0x18;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 4;
    iVar9 = iVar9 + -1;
  } while (-1 < iVar9);
  iStack_24 = 1;
  puVar2 = (u16 *)hardware_GetField_0x00_8918(param_1);
  uStack_2c = 0x1740;
  *puVar2 = 0x1740;
  puVar10 = (u32 *)(param_1 + 0x0000051C);
  PortraitEngine_Sub_08050E5C(*puVar10);
  uVar11 = *puVar10;
  uVar3 = hardware_GetField_0x00_88DC(param_1);
  uVar4 = hardware_GetField_0x00_8920(param_1);
  uVar5 = hardware_GetField_0x00_8918(param_1);
  uVar6 = hardware_GetField_0x00_8940(param_1);
  uVar7 = hardware_Sub_0800894C(param_1);
  code_0803EE94_78A8_Wrap_Ctor(uVar11,uVar3,uVar4,uVar5,uVar6,uVar7,param_1 + 0x00000814);
  do {
    do {
      hardware_Sub_080C2D54(param_1);
      if (*(int *)(param_1 + 0x0000089C) != 1) {
      }
      hardware_Ctor_87C8(param_1);
      puVar10 = (u32 *)(param_1 + 0x0000051C);
      iVar9 = code_0803EE94_GetField_0x00(*puVar10);
      uVar11 = *puVar10;
      uVar3 = hardware_GetField_0x00_88DC(param_1);
      uVar4 = hardware_GetField_0x00_8920(param_1);
      uVar5 = hardware_GetField_0x00_8918(param_1);
      uVar6 = hardware_GetField_0x00_8940(param_1);
      uVar7 = hardware_Sub_0800894C(param_1);
      uVar8 = code_0803EE94_78A8_Wrap_Ctor(uVar11,uVar3,uVar4,uVar5,uVar6,uVar7,param_1 + 0x00000814);
    } while (6 < uVar8);
    switch(*(u32 *)(uVar8 * 4 + 0x080C52D8) & 0xfffffffe) {
    case 0x80c52f4:
      if (iStack_24 == 0) {
        *(u32 *)(param_1 + 0x0000089C) = 2;
      }
      else {
        code_0803EE94_78C0_Sub_08050D5C(*(u32 *)(param_1 + 0x0000051C));
      }
      break;
    case 0x80c5318:
      if (iVar9 == 1) {
        puVar10 = (u32 *)(param_1 + 0x0000051C);
        code_0803EE94_78C0_Sub_08050D8C(*puVar10,&uStack_50);
        code_0803EE94_GetField_0x00_0DD8(*puVar10);
        iStack_24 = 0;
      }
    case 0x80c5334:
      iStack_28 = iStack_28 + 1;
      if (0x78 < iStack_28) {
        puVar10 = (u32 *)(param_1 + 0x0000051C);
        code_0803EE94_GetField_0x00_0DE4(*puVar10);
        code_0803EE94_78C0_Sub_08050D74(*puVar10);
      }
    }
  } while( true );
}

/* 0x080C5A6C (1568B) | code_809E804_8560_Sub_080C5A6C (orig: func_080C5A6C) | origin: wip | domain: code_809E804_8560 | MEDIUM / graph_algebra */
void code_809E804_8560_Sub_080C5A6C(int param_1) {
  int iVar1;
  u32 uVar2;
  u32 *puVar3;
  int *piVar4;
  u32 *puVar5;
  int iVar6;
  u32 *puVar7;
  u32 uVar8;
  u32 *puVar9;
  char *pcVar10;
  u16 uVar11;
  u32 uVar12;
  int *piVar13;
  u32 *puVar14;
  u8 auStack_7c [4];
  u32 uStack_78;
  u32 uStack_74;
  u32 uStack_70;
  u32 uStack_6c;
  u32 uStack_68;
  u32 uStack_64;
  u32 uStack_60;
  u32 uStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int aiStack_4c [2];
  u32 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  u32 *puStack_34;
  int iStack_30;
  u32 *puStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  iStack_38 = 0;
  *(u16 *)(*(int *)(param_1 + 0x5f0) + 0x10) = 0;
  *(u16 *)(*(int *)(param_1 + 0x5a0) + 0x10) = 0;
  *(u16 *)(*(int *)(param_1 + 0x728) + 0x10) = 0x100;
  code_0803EE94_Sub_0805E860(*(int *)(param_1 + 0x728),6);
  *(u8 *)(param_1 + 0x000008C5) = 0;
  *(u32 *)(param_1 + 0x000008BC) = 3;
  *(u8 *)(param_1 + 0x000008C4) = 1;
  hardware_Sub_080C2D54(param_1);
  iVar1 = 0x0000089C;
  while (*(int *)(param_1 + iVar1) == 5) {
    hardware_Ctor_87C8(param_1);
    iVar1 = *(int *)(param_1 + 0x000008AC);
    if (iVar1 < 2) {
      iStack_30 = iStack_38 + 1;
      if (iStack_38 == 0xb4) {
        *(int *)(param_1 + 0x000008AC) = iVar1 + 1;
        *(u32 *)(param_1 + 0x0000089C) = 2;
        *(u8 *)(param_1 + 0x00000969) = 0;
        uVar2 = CppRuntime_builtin_new(0x14);
        iVar1 = code_0803EE94_Sub_0805E824(uVar2,*(u32 *)(param_1 + 0x520),0,0x100);
        piVar13 = (int *)(param_1 + 0x550);
        if (iVar1 != *piVar13) {
          CppRuntime_builtin_delete();
        }
        *piVar13 = iVar1;
        code_0803EE94_Sub_0805E860(iVar1,0);
        puVar3 = (u32 *)*piVar13;
        func_080D3918(&uStack_78,(int *)*puVar3,
                        *(u16 *)(puVar3[1] + (u32)*(u16 *)(puVar3 + 3) * 4),
                        *(u32 *)(*(int *)*puVar3 + 0x10));
        LibC_memcpy(&uStack_78,&uStack_78,0x20);
        *(u32 *)(param_1 + 0x558) = uStack_78;
        *(u32 *)(param_1 + 0x55c) = uStack_74;
        *(u32 *)(param_1 + 0x560) = uStack_70;
        *(u32 *)(param_1 + 0x564) = uStack_6c;
        *(u32 *)(param_1 + 0x568) = uStack_68;
        *(u32 *)(param_1 + 0x56c) = uStack_64;
        *(u32 *)(param_1 + 0x570) = uStack_60;
        *(u32 *)(param_1 + 0x574) = uStack_5c;
        piVar13 = (int *)hardware_GetField_0x00_8910(param_1,param_1 + 0x578);
        iVar6 = *(int *)(param_1 + 0x560);
        iVar1 = hardware_Sub_08007D4C(param_1 + 0x00000844,*(u32 *)(param_1 + 0x00000844 + 4));
        uVar11 = 0;
        if (*(int *)(param_1 + 0x560) != 0) {
          uVar11 = *(u16 *)(param_1 + 0x564);
        }
        puStack_34 = &uStack_78;
        hardware_Sub_08008F0C(&uStack_78,iVar6,iVar1 * 0x20 + 0x06010000,uVar11);
        puVar3 = puStack_34;
        puVar7 = (u32 *)piVar13[1];
        if (puVar7 == (u32 *)piVar13[3]) {
          iStack_54 = 1;
          iStack_58 = (int)puVar7 - *piVar13 >> 4;
          piVar4 = &iStack_58;
          if (iStack_58 == 0) {
            piVar4 = &iStack_54;
          }
          if (iStack_58 + *piVar4 == 0) {
            puVar5 = (u32 *)0x0;
            iVar1 = 0;
          }
          else {
            iVar1 = (iStack_58 + *piVar4) * 0x10;
            puVar5 = (u32 *)LibC_malloc(iVar1);
            if (puVar5 == (u32 *)0x0) {
              puVar5 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
            }
          }
          iStack_30 = iStack_38 + 1;
          puVar14 = puVar5;
          for (puVar9 = (u32 *)*piVar13; puVar9 != puVar7; puVar9 = puVar9 + 4) {
            if (puVar14 != (u32 *)0x0) {
              uVar2 = puVar9[1];
              uVar12 = puVar9[2];
              *puVar14 = *puVar9;
              puVar14[1] = uVar2;
              puVar14[2] = uVar12;
              puVar14[3] = puVar9[3];
            }
            puVar14 = puVar14 + 4;
          }
          iVar6 = iStack_54;
          if (iStack_54 == 1) {
            if (puVar14 != (u32 *)0x0) {
              uVar2 = puVar3[1];
              uVar12 = puVar3[2];
              *puVar14 = *puVar3;
              puVar14[1] = uVar2;
              puVar14[2] = uVar12;
              puVar14[3] = puVar3[3];
            }
            puVar14 = puVar14 + 4;
          }
          else {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              if (puVar14 != (u32 *)0x0) {
                uVar2 = puVar3[1];
                uVar12 = puVar3[2];
                *puVar14 = *puVar3;
                puVar14[1] = uVar2;
                puVar14[2] = uVar12;
                puVar14[3] = puVar3[3];
              }
              puVar14 = puVar14 + 4;
            }
          }
          for (iVar6 = *piVar13; iVar6 != piVar13[1]; iVar6 = iVar6 + 0x10) {
          }
          puStack_28 = puVar5;
          if (*piVar13 != 0) {
            LibC_free();
          }
          *piVar13 = (int)puStack_28;
          piVar13[1] = (int)puVar14;
          piVar13[3] = (int)puStack_28 + iVar1;
        }
        else {
          if (puVar7 != (u32 *)0x0) {
            uVar2 = puStack_34[1];
            uVar12 = puStack_34[2];
            *puVar7 = *puStack_34;
            puVar7[1] = uVar2;
            puVar7[2] = uVar12;
            puVar7[3] = puStack_34[3];
          }
          piVar13[1] = piVar13[1] + 0x10;
        }
        piVar13 = (int *)hardware_GetField_0x00_8910(param_1);
        uVar11 = 0;
        if (*(int *)(param_1 + 0x568) != 0) {
          uVar11 = *(u16 *)(param_1 + 0x56c);
        }
        hardware_Sub_08008F0C(&uStack_78,*(int *)(param_1 + 0x568),0x05000260,uVar11);
        puVar3 = puStack_34;
        puVar7 = (u32 *)piVar13[1];
        if (puVar7 == (u32 *)piVar13[3]) {
          aiStack_4c[0] = 1;
          iStack_50 = (int)puVar7 - *piVar13 >> 4;
          piVar4 = &iStack_50;
          if (iStack_50 == 0) {
            piVar4 = aiStack_4c;
          }
          if (iStack_50 + *piVar4 == 0) {
            puVar5 = (u32 *)0x0;
            iVar1 = 0;
          }
          else {
            iVar1 = (iStack_50 + *piVar4) * 0x10;
            puVar5 = (u32 *)LibC_malloc(iVar1);
            if (puVar5 == (u32 *)0x0) {
              puVar5 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
            }
          }
          puVar14 = puVar5;
          for (puVar9 = (u32 *)*piVar13; puVar9 != puVar7; puVar9 = puVar9 + 4) {
            if (puVar14 != (u32 *)0x0) {
              uVar2 = puVar9[1];
              uVar12 = puVar9[2];
              *puVar14 = *puVar9;
              puVar14[1] = uVar2;
              puVar14[2] = uVar12;
              puVar14[3] = puVar9[3];
            }
            puVar14 = puVar14 + 4;
          }
          iVar6 = aiStack_4c[0];
          if (aiStack_4c[0] == 1) {
            if (puVar14 != (u32 *)0x0) {
              uVar2 = puVar3[1];
              uVar12 = puVar3[2];
              *puVar14 = *puVar3;
              puVar14[1] = uVar2;
              puVar14[2] = uVar12;
              puVar14[3] = puVar3[3];
            }
            puVar14 = puVar14 + 4;
          }
          else {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              if (puVar14 != (u32 *)0x0) {
                uVar2 = puVar3[1];
                uVar12 = puVar3[2];
                *puVar14 = *puVar3;
                puVar14[1] = uVar2;
                puVar14[2] = uVar12;
                puVar14[3] = puVar3[3];
              }
              puVar14 = puVar14 + 4;
            }
          }
          for (iVar6 = *piVar13; iVar6 != piVar13[1]; iVar6 = iVar6 + 0x10) {
          }
          puStack_28 = puVar5;
          if (*piVar13 != 0) {
            LibC_free();
          }
          *piVar13 = (int)puStack_28;
          piVar13[1] = (int)puVar14;
          piVar13[3] = (int)puStack_28 + iVar1;
        }
        else {
          if (puVar7 != (u32 *)0x0) {
            uVar2 = puStack_34[1];
            uVar12 = puStack_34[2];
            *puVar7 = *puStack_34;
            puVar7[1] = uVar2;
            puVar7[2] = uVar12;
            puVar7[3] = puStack_34[3];
          }
          piVar13[1] = piVar13[1] + 0x10;
        }
        pcVar10 = (char *)(param_1 + 0x0000096F);
        *(char *)(param_1 + 0x0000096E) = *pcVar10 + *(char *)(param_1 + 0x0000096E);
        *pcVar10 = '\0';
        *(u8 *)(param_1 + 0x00000979) = 0;
        *(u8 *)(param_1 + 0x0000097A) = 0;
        *(u8 *)(param_1 + 0x000008C5) = 0;
      }
      iStack_38 = iStack_30;
    }
    else {
      *(u32 *)(param_1 + 0x0000089C) = 6;
      *(char *)(param_1 + 0x0000096E) =
           *(char *)(param_1 + 0x0000096F) + *(char *)(param_1 + 0x0000096E);
    }
    hardware_Sub_080C2D54(param_1);
    iVar1 = 0x0000089C;
  }
  if (*(int *)(param_1 + 0x0000089C) == 2) {
    puVar3 = (u32 *)(param_1 + 0x00000544);
    uVar8 = *(u32 *)*puVar3;
    if (-1 < (int)(-uVar8 | uVar8)) {
      hardware_Sub_08009378((u32 *)*puVar3 + 3,0x00000889,1,1);
      iVar1 = hardware_GetField_0x00_8940(param_1);
      func_080D3914(iVar1,*puVar3,*(u32 *)(*(int *)(iVar1 + 8) + 0x10));
    }
    puStack_34 = &uStack_78;
    iVar1 = param_1 + 0xc;
    puStack_2c = &uStack_44;
    uVar8 = -*(u32 *)*puVar3 | *(u32 *)*puVar3;
    while ((int)uVar8 < 0) {
      hardware_Ctor_87C8(param_1);
      hardware_Sub_080C2D54(param_1);
      uVar8 = -**(u32 **)(param_1 + 0x00000544) | **(u32 **)(param_1 + 0x00000544);
    }
    piVar13 = (int *)(param_1 + 0x00000544);
    hardware_Sub_0800934C(*piVar13 + 0xc,0x00000889,1,1);
    iVar6 = hardware_GetField_0x00_8940(param_1);
    func_080D3914(iVar6,*piVar13,*(u32 *)(*(int *)(iVar6 + 8) + 0x10));
    *(u16 *)(*(int *)(param_1 + 0x5f0) + 0x10) = 0x100;
    *(u16 *)(*(int *)(param_1 + 0x5a0) + 0x10) = 0x100;
    *(u16 *)(*(int *)(param_1 + 0x728) + 0x10) = 0x100;
    *(u8 *)(param_1 + 0x0000097B) = 0x19;
    code_0803EE94_Sub_0804EC84(0x19,auStack_7c,0);
    aiStack_4c[1] = 0x20004;
    Code_Lib_Syscall_Wrap_CpuFastSet_E7A0(0x20004,iVar1,0);
    uStack_44 = ((u16)(4));
    *(u16 *)((int)puStack_2c + 2) = 2;
    SpriteAnimEngine_Sub_0804E958(uStack_44,iVar1,0,0,auStack_7c,0,1);
    piVar13 = (int *)hardware_GetField_0x00_8910(param_1);
    iVar6 = hardware_Sub_08007D4C(param_1 + 0x0000083C,*(u32 *)(param_1 + 0x0000083C + 4));
    hardware_Sub_08008F0C(&uStack_78,iVar1,iVar6 * 0x20 + 0x06010000,0x100);
    puVar3 = puStack_34;
    puStack_24 = (u32 *)piVar13[1];
    if (puStack_24 == (u32 *)piVar13[3]) {
      iStack_3c = 1;
      iStack_40 = (int)puStack_24 - *piVar13 >> 4;
      piVar4 = &iStack_40;
      if (iStack_40 == 0) {
        piVar4 = &iStack_3c;
      }
      if (iStack_40 + *piVar4 == 0) {
        puVar7 = (u32 *)0x0;
        iVar1 = 0;
      }
      else {
        iVar1 = (iStack_40 + *piVar4) * 0x10;
        puVar7 = (u32 *)LibC_malloc(iVar1);
        if (puVar7 == (u32 *)0x0) {
          puVar7 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
        }
      }
      puVar5 = puVar7;
      for (puVar9 = (u32 *)*piVar13; puVar9 != puStack_24; puVar9 = puVar9 + 4) {
        if (puVar5 != (u32 *)0x0) {
          uVar2 = puVar9[1];
          uVar12 = puVar9[2];
          *puVar5 = *puVar9;
          puVar5[1] = uVar2;
          puVar5[2] = uVar12;
          puVar5[3] = puVar9[3];
        }
        puVar5 = puVar5 + 4;
      }
      iVar6 = iStack_3c;
      if (iStack_3c == 1) {
        if (puVar5 != (u32 *)0x0) {
          uVar2 = puVar3[1];
          uVar12 = puVar3[2];
          *puVar5 = *puVar3;
          puVar5[1] = uVar2;
          puVar5[2] = uVar12;
          puVar5[3] = puVar3[3];
        }
        puVar5 = puVar5 + 4;
      }
      else {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (puVar5 != (u32 *)0x0) {
            uVar2 = puVar3[1];
            uVar12 = puVar3[2];
            *puVar5 = *puVar3;
            puVar5[1] = uVar2;
            puVar5[2] = uVar12;
            puVar5[3] = puVar3[3];
          }
          puVar5 = puVar5 + 4;
        }
      }
      for (iVar6 = *piVar13; iVar6 != piVar13[1]; iVar6 = iVar6 + 0x10) {
      }
      if (*piVar13 != 0) {
        LibC_free();
      }
      *piVar13 = (int)puVar7;
      piVar13[1] = (int)puVar5;
      piVar13[3] = iVar1 + (int)puVar7;
    }
    else {
      if (puStack_24 != (u32 *)0x0) {
        uVar2 = puStack_34[1];
        uVar12 = puStack_34[2];
        *puStack_24 = *puStack_34;
        puStack_24[1] = uVar2;
        puStack_24[2] = uVar12;
        puStack_24[3] = puStack_34[3];
      }
      piVar13[1] = piVar13[1] + 0x10;
    }
  }
}

/* 0x080C7B64 (24B) | code_809E804_8560_Sub_080C7B64 (orig: func_080C7B64) | origin: pure | domain: code_809E804_8560 | MEDIUM / graph_algebra */
extern u16 g_0810827C[]; u16 code_809E804_8560_Sub_080C7B64(u8 *a) { return g_0810827C[*(u32 *)(a + 0x984)]; }

/* 0x080C7EA8 (40B) | code_809E804_8560_Create (orig: func_080C7EA8) | origin: pure | domain: code_809E804_8560 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 SpriteAnimEngine_Create_0DCC();
u32 code_809E804_8560_Create(u32 *arg0,u32 arg1) {
  u32 val;
  *arg0 = 0x080E8560;
  val = CppRuntime_builtin_new(0x0000098C);
  val = SpriteAnimEngine_Create_0DCC(val,arg1);
  arg0[1] = val;
  return arg0;
}

/* 0x080C7ED0 (48B) | code_809E804_8560_Ctor (orig: func_080C7ED0) | origin: pure | domain: code_809E804_8560 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void code_809E804_8560_Ctor(u32 *arg0,u32 arg1) {
  int val;
  *arg0 = 0x080E8560;
  val = arg0[1];
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  scene_Dtor(arg0,arg1);
}

/* 0x080C7F1C (60B) | code_809E804_8560_vfunc_0C (orig: func_080C7F1C) | origin: pure | domain: code_809E804_8560 | HIGH / vtable_algebra */
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
extern "C" AutoPtr<V1> code_809E804_8560_Sub_080C12C4(int);
extern "C" AutoPtr<V0> code_809E804_8560_vfunc_0C(In *in) {
    return code_809E804_8560_Sub_080C12C4(in->f4);
}

