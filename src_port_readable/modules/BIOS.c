/* FIO-DECOMP-HMFOMT :: Port Readable Module: BIOS (1 functions) */
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

/* 0x080983E8 (1524B) | BIOS_SWI_0xFF_83E8 (orig: func_080983E8) | origin: wip | domain: BIOS | EXACT / runtime_bios */
void BIOS_SWI_0xFF_83E8(int param_1) {
  u8 bVar1;
  int *piVar2;
  u16 uVar3;
  short sVar4;
  u32 uVar5;
  int iVar6;
  u8 *pbVar7;
  u32 uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  u32 uVar14;
  int iVar15;
  int iVar16;
  u32 uStack_b0;
  u32 uStack_ac;
  u32 uStack_a8;
  u32 uStack_a4;
  u32 uStack_a0;
  u32 uStack_9c;
  u32 uStack_98;
  int iStack_94;
  u32 uStack_90;
  int iStack_8c;
  u32 uStack_88;
  int iStack_84;
  u32 uStack_80;
  int iStack_7c;
  u32 uStack_78;
  int aiStack_74 [8];
  u32 uStack_54;
  u32 uStack_50;
  u32 uStack_4c;
  u32 uStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int *piStack_34;
  int *piStack_30;
  int iStack_2c;
  int *piStack_28;
  int *piStack_24;
  uVar14 = 0xFFFFF3FF;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = uStack_a8 & 0xffff0000;
  uStack_a4 = 0;
  uStack_a0 = uStack_a0 & 0xffff0000;
  uStack_9c = 0;
  uStack_98 = uStack_98 & 0xffffff00;
  iStack_94 = 0;
  uStack_90 = uStack_90 & 0xffff0000;
  iStack_8c = 0;
  uStack_88 = uStack_88 & 0xffff0000;
  iStack_84 = 0;
  uStack_80 = uStack_80 & 0xffff0000;
  iStack_7c = 0;
  uStack_78 = uStack_78 & 0xffff0000;
  uStack_54 = ((uStack_54 & 0xFFFFFCFF & 0xFFFFF3FF | 0x1000) & 0xFFFFDFFF & 0xFFFF3FFF
              | 0x8000) & 0xF1FFFFFF & 0xEFFFFFFF & 0xDFFFFFFF & 0x3FFFFFFF;
  uVar5 = hardware_Sub_080074C0(param_1 + 0x308,*(u32 *)(param_1 + 0x30c));
  uStack_50 = (uStack_50 & 0xFFFF0FFF | (uVar5 & 0xf) << 0xc) & 0x0000FFFF & uVar14 | 0x400;
  uStack_54 = uStack_54 & 0xFFFFFF00 | 4;
  iVar12 = 0;
  piStack_30 = aiStack_74;
  uVar14 = 8;
  do {
    uStack_54 = uStack_54 & 0xFE00FFFF | (0x000001FF & uVar14) << 0x10;
    iVar6 = hardware_Sub_08007D4C(param_1 + 0x300,*(u32 *)(param_1 + 0x304));
    uStack_50 = uStack_50 & 0xFFFFFC00 | iVar6 + iVar12 * 2 & 0x3ffU;
    pbVar7 = (u8 *)hardware_GetField_0x00_8920(param_1);
    bVar1 = *pbVar7;
    if (bVar1 < 0x80) {
      *(u32 *)(pbVar7 + (u32)bVar1 * 8 + 4) = uStack_54;
      *(u16 *)((int)(pbVar7 + (u32)bVar1 * 8 + 4) + 4) = (u16)uStack_50;
      *pbVar7 = bVar1 + 1;
    }
    uVar5 = 0xFFFFF3FF;
    uVar14 = uVar14 + 8;
    iVar12 = iVar12 + 1;
  } while (iVar12 < 0x16);
  uStack_4c = (uStack_4c & 0xFFFFFCFF & 0xFFFFF3FF | 0x1000) & 0xFFFFDFFF & 0xFFFF3FFF &
              0xF1FFFFFF & 0xEFFFFFFF & 0xDFFFFFFF & 0x3FFFFFFF;
  uVar14 = hardware_Sub_080074C0(param_1 + 0x308,*(u32 *)(param_1 + 0x30c));
  uStack_48 = (uStack_48 & 0xFFFF0FFF | (uVar14 & 0xf) << 0xc) & 0x0000FFFF & uVar5 | 0x400;
  uStack_4c = uStack_4c & 0xFFFFFF00 | 0xc;
  iVar12 = 0;
  piStack_34 = (int *)(param_1 + 0x194);
  iStack_2c = param_1 + 0x310;
  uVar14 = 0xc0;
  do {
    uStack_4c = uStack_4c & 0xFE00FFFF | (0x000001FF & uVar14) << 0x10;
    iVar6 = hardware_Sub_08007D4C(iStack_2c,*(u32 *)(iStack_2c + 4));
    uStack_48 = uStack_48 & 0xFFFFFC00 |
                (u32)*(u8 *)(0x00000369 + param_1 + iVar12) + iVar6 & 0x3ff;
    pbVar7 = (u8 *)hardware_GetField_0x00_8920(param_1);
    bVar1 = *pbVar7;
    if (bVar1 < 0x80) {
      *(u32 *)(pbVar7 + (u32)bVar1 * 8 + 4) = uStack_4c;
      *(u16 *)((int)(pbVar7 + (u32)bVar1 * 8 + 4) + 4) = (u16)uStack_48;
      *pbVar7 = bVar1 + 1;
    }
    uVar14 = uVar14 + 8;
    iVar12 = iVar12 + 1;
  } while (iVar12 < 5);
  uVar8 = code_0803EE94_Sub_0805E8F0((u32 *)(param_1 + 0x158));
  *(u32 *)(param_1 + 0x188) = uVar8;
  piVar9 = *(int **)(param_1 + 0x158);
  func_080D3918(aiStack_74,piVar9,
                  *(u16 *)
                   (*(int *)(param_1 + 0x15c) + (u32)*(u16 *)(param_1 + 0x164) * 4),
                  *(u32 *)(*piVar9 + 0x10));
  LibC_memcpy(piStack_30,piStack_30,0x20);
  iStack_94 = *piStack_30;
  uStack_90 = piStack_30[1];
  iStack_8c = piStack_30[2];
  uStack_88 = piStack_30[3];
  iStack_84 = piStack_30[4];
  uStack_80 = piStack_30[5];
  iStack_7c = piStack_30[6];
  uStack_78 = piStack_30[7];
  uStack_ac = *(u32 *)(param_1 + 0x170);
  uStack_a8 = *(u32 *)(param_1 + 0x174);
  uStack_a4 = *(u32 *)(param_1 + 0x178);
  uStack_a0 = *(u32 *)(param_1 + 0x17c);
  uStack_9c = *(u32 *)(param_1 + 0x180);
  uStack_98 = *(u32 *)(param_1 + 0x184);
  uStack_b0 = 0x80000;
  uVar3 = hardware_Sub_08007D4C(param_1 + 0x2e0,*(u32 *)(param_1 + 0x2e4));
  (*(u16 *)((u8 *)&uStack_ac + 2)) = uVar3;
  uVar3 = hardware_Sub_080074C0(param_1 + 0x2e8,*(u32 *)(param_1 + 0x2ec));
  uStack_ac = ((u16)(uVar3));
  uStack_a8 = ((u16)(1));
  uStack_98 = (1);
  if ((int)((u32)*(u8 *)(param_1 + 0x188) * 0x40000000) < 0) {
    piVar9 = (int *)hardware_GetField_0x00_8910(param_1);
    iVar12 = iStack_8c;
    iVar6 = hardware_Sub_08007D4C(param_1 + 0x2e0,*(u32 *)(param_1 + 0x2e4));
    uVar14 = 0;
    if (iStack_8c != 0) {
      uVar14 = uStack_88 & 0xffff;
    }
    hardware_Sub_08008F0C(piStack_30,iVar12,iVar6 * 0x20 + 0x06010000,uVar14);
    piVar2 = piStack_30;
    piVar10 = (int *)piVar9[1];
    if (piVar10 == (int *)piVar9[3]) {
      iStack_40 = 1;
      iStack_44 = (int)piVar10 - *piVar9 >> 4;
      piVar11 = &iStack_44;
      if (iStack_44 == 0) {
        piVar11 = &iStack_40;
      }
      piStack_28 = piVar10;
      if (iStack_44 + *piVar11 == 0) {
        piStack_24 = (int *)0x0;
        iVar12 = 0;
      }
      else {
        iVar12 = (iStack_44 + *piVar11) * 0x10;
        piStack_24 = (int *)LibC_malloc(iVar12);
        if (piStack_24 == (int *)0x0) {
          piStack_24 = (int *)code_linkonce_Sub_080D3BC0(iVar12);
        }
      }
      piVar10 = piStack_24;
      for (piVar11 = (int *)*piVar9; piVar11 != piStack_28; piVar11 = piVar11 + 4) {
        if (piVar10 != (int *)0x0) {
          iVar6 = piVar11[1];
          iVar15 = piVar11[2];
          *piVar10 = *piVar11;
          piVar10[1] = iVar6;
          piVar10[2] = iVar15;
          piVar10[3] = piVar11[3];
        }
        piVar10 = piVar10 + 4;
      }
      iVar6 = iStack_40;
      if (iStack_40 == 1) {
        if (piVar10 != (int *)0x0) {
          iVar6 = piVar2[1];
          iVar15 = piVar2[2];
          *piVar10 = *piVar2;
          piVar10[1] = iVar6;
          piVar10[2] = iVar15;
          piVar10[3] = piVar2[3];
        }
        piVar10 = piVar10 + 4;
      }
      else {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (piVar10 != (int *)0x0) {
            iVar15 = piVar2[1];
            iVar16 = piVar2[2];
            *piVar10 = *piVar2;
            piVar10[1] = iVar15;
            piVar10[2] = iVar16;
            piVar10[3] = piVar2[3];
          }
          piVar10 = piVar10 + 4;
        }
      }
      for (iVar6 = *piVar9; iVar6 != piVar9[1]; iVar6 = iVar6 + 0x10) {
      }
      if (*piVar9 != 0) {
        LibC_free();
      }
      *piVar9 = (int)piStack_24;
      piVar9[1] = (int)piVar10;
      piVar9[3] = (int)piStack_24 + iVar12;
    }
    else {
      if (piVar10 != (int *)0x0) {
        iVar12 = piStack_30[1];
        iVar6 = piStack_30[2];
        *piVar10 = *piStack_30;
        piVar10[1] = iVar12;
        piVar10[2] = iVar6;
        piVar10[3] = piStack_30[3];
      }
      piVar9[1] = piVar9[1] + 0x10;
    }
  }
  uVar8 = hardware_GetField_0x00_8920(param_1);
  uVar14 = 0;
  if (iStack_94 != 0) {
    uVar14 = uStack_90 & 0xffff;
  }
  code_0803EE94_Sub_0805E99C(uVar8,iStack_94,uVar14,&uStack_b0);
  uVar8 = code_0803EE94_Sub_0805E8F0((u32 *)(param_1 + 400));
  *(u32 *)(param_1 + 0x1c0) = uVar8;
  piVar9 = *(int **)(param_1 + 400);
  func_080D3918(aiStack_74,piVar9,
                  *(u16 *)(*piStack_34 + (u32)*(u16 *)(param_1 + 0x19c) * 4),
                  *(u32 *)(*piVar9 + 0x10));
  piVar9 = piStack_30;
  LibC_memcpy(piStack_30,piStack_30,0x20);
  iStack_94 = *piVar9;
  uStack_90 = piVar9[1];
  iStack_8c = piVar9[2];
  uStack_88 = piVar9[3];
  iStack_84 = piVar9[4];
  uStack_80 = piVar9[5];
  iStack_7c = piVar9[6];
  uStack_78 = piVar9[7];
  uStack_ac = *(u32 *)(param_1 + 0x1a8);
  uStack_a8 = *(u32 *)(param_1 + 0x1ac);
  uStack_a4 = *(u32 *)(param_1 + 0x1b0);
  uStack_a0 = *(u32 *)(param_1 + 0x1b4);
  uStack_9c = *(u32 *)(param_1 + 0x1b8);
  uStack_98 = *(u32 *)(param_1 + 0x1bc);
  uStack_b0 = 0x800e8;
  sVar4 = hardware_Sub_08007D4C(param_1 + 0x2e0,*(u32 *)(param_1 + 0x2e4));
  (*(u16 *)((u8 *)&uStack_ac + 2)) = sVar4 + 2;
  uVar3 = hardware_Sub_080074C0(param_1 + 0x2e8,*(u32 *)(param_1 + 0x2ec));
  uStack_ac = ((u16)(uVar3));
  uStack_a8 = ((u16)(1));
  uStack_98 = (1);
  if ((int)((u32)*(u8 *)(param_1 + 0x1c0) * 0x40000000) < 0) {
    piVar9 = (int *)hardware_GetField_0x00_8910(param_1);
    iVar12 = iStack_8c;
    iVar6 = hardware_Sub_08007D4C(param_1 + 0x2e0,*(u32 *)(param_1 + 0x2e4));
    uVar14 = 0;
    if (iStack_8c != 0) {
      uVar14 = uStack_88 & 0xffff;
    }
    hardware_Sub_08008F0C(piStack_30,iVar12,iVar6 * 0x20 + 0x06010040,uVar14);
    piVar2 = piStack_30;
    piVar10 = (int *)piVar9[1];
    if (piVar10 == (int *)piVar9[3]) {
      iStack_38 = 1;
      iStack_3c = (int)piVar10 - *piVar9 >> 4;
      piVar11 = &iStack_3c;
      if (iStack_3c == 0) {
        piVar11 = &iStack_38;
      }
      piStack_28 = piVar10;
      if (iStack_3c + *piVar11 == 0) {
        piVar10 = (int *)0x0;
        iVar12 = 0;
      }
      else {
        iVar12 = (iStack_3c + *piVar11) * 0x10;
        piVar10 = (int *)LibC_malloc(iVar12);
        if (piVar10 == (int *)0x0) {
          piVar10 = (int *)code_linkonce_Sub_080D3BC0(iVar12);
        }
      }
      piVar13 = piVar10;
      for (piVar11 = (int *)*piVar9; piVar11 != piStack_28; piVar11 = piVar11 + 4) {
        if (piVar13 != (int *)0x0) {
          iVar6 = piVar11[1];
          iVar15 = piVar11[2];
          *piVar13 = *piVar11;
          piVar13[1] = iVar6;
          piVar13[2] = iVar15;
          piVar13[3] = piVar11[3];
        }
        piVar13 = piVar13 + 4;
      }
      iVar6 = iStack_38;
      if (iStack_38 == 1) {
        if (piVar13 != (int *)0x0) {
          iVar6 = piVar2[1];
          iVar15 = piVar2[2];
          *piVar13 = *piVar2;
          piVar13[1] = iVar6;
          piVar13[2] = iVar15;
          piVar13[3] = piVar2[3];
        }
        piVar13 = piVar13 + 4;
      }
      else {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (piVar13 != (int *)0x0) {
            iVar15 = piVar2[1];
            iVar16 = piVar2[2];
            *piVar13 = *piVar2;
            piVar13[1] = iVar15;
            piVar13[2] = iVar16;
            piVar13[3] = piVar2[3];
          }
          piVar13 = piVar13 + 4;
        }
      }
      for (iVar6 = *piVar9; iVar6 != piVar9[1]; iVar6 = iVar6 + 0x10) {
      }
      piStack_24 = piVar10;
      if (*piVar9 != 0) {
        LibC_free();
      }
      *piVar9 = (int)piStack_24;
      piVar9[1] = (int)piVar13;
      piVar9[3] = (int)piStack_24 + iVar12;
    }
    else {
      if (piVar10 != (int *)0x0) {
        iVar12 = piStack_30[1];
        iVar6 = piStack_30[2];
        *piVar10 = *piStack_30;
        piVar10[1] = iVar12;
        piVar10[2] = iVar6;
        piVar10[3] = piStack_30[3];
      }
      piVar9[1] = piVar9[1] + 0x10;
    }
  }
  uVar8 = hardware_GetField_0x00_8920(param_1);
  uVar14 = 0;
  if (iStack_94 != 0) {
    uVar14 = uStack_90 & 0xffff;
  }
  code_0803EE94_Sub_0805E99C(uVar8,iStack_94,uVar14,&uStack_b0);
  hardware_Sub_0809A3E0(param_1);
}

