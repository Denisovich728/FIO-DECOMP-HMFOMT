// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: SCENE_MANAGER (19 functions)
// Description: Scene management, title sequence, intro cutscenes and new game initialization
// =============================================================================

#include "../../include/global.h"

// =============================================================================
// Function: Scene_Destructor @ 0x0800080C
// =============================================================================
undefined4 Scene_Destructor(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  *param_1 = gRomData_080E59DC;
  if ((param_2 & 1) != 0) {
    Dispatcher_Routine_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: Scene_Routine_0800082C @ 0x0800082C
// =============================================================================
undefined4 Scene_Routine_0800082C(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 in_lr;
  int *piStack_2c;
  int *piStack_28;
  int **ppiStack_24;
  int *piStack_20;
  int **ppiStack_1c;
  int *piStack_18;
  
  if (*param_1 != 0) {
    do {
      _call_via_r2(&piStack_2c,(int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0xc));
      piVar1 = piStack_2c;
      piStack_20 = piStack_2c;
      piStack_2c = (int *)0x0;
      piVar2 = (int *)*param_1;
      ppiStack_24 = &piStack_2c;
      if ((piVar2 != (int *)0x0) && (piVar2 != (int *)0x0)) {
        _call_via_r2(piVar2,3,*(undefined4 *)(*piVar2 + 8));
      }
      *param_1 = 0;
      if (piVar1 == (int *)0x0) break;
      _call_via_r2(&piStack_28,piVar1,*(undefined4 *)(*piVar1 + 0xc));
      piVar2 = piStack_28;
      piStack_18 = piStack_28;
      piStack_28 = (int *)0x0;
      piStack_2c = (int *)0x0;
      piVar3 = (int *)*param_1;
      ppiStack_1c = &piStack_28;
      if ((piVar2 != piVar3) && (piVar3 != (int *)0x0)) {
        _call_via_r2(piVar3,3,*(undefined4 *)(*piVar3 + 8));
      }
      *param_1 = (int)piVar2;
      if (piStack_2c != (int *)0x0) {
        _call_via_r2(piStack_2c,3,*(undefined4 *)(*piStack_2c + 8));
      }
      if (piVar1 != (int *)0x0) {
        _call_via_r2(piVar1,3,*(undefined4 *)(*piVar1 + 8));
      }
    } while (*param_1 != 0);
  }
  param_1 = (int *)*param_1;
  if (param_1 != (int *)0x0) {
    _call_via_r2(param_1,3,*(undefined4 *)(*param_1 + 8));
  }
  return in_lr;
}

// =============================================================================
// Function: Scene_Routine_08000D64 @ 0x08000D64
// =============================================================================
undefined8 Scene_Routine_08000D64(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 in_lr;
  
  piVar3 = (int *)(param_2 + 0x6D28);
LAB_08000d72:
  iVar1 = *piVar3;
  if (iVar1 != 0) goto code_r0x08000d78;
  Scene_Routine_08000E1C(param_2);
  iVar1 = 1;
  goto LAB_08000d9a;
code_r0x08000d78:
  if (iVar1 == 1) {
    iVar1 = Scene_Routine_08000FF8(param_2);
    if (iVar1 == 1) {
      if (*(char *)(param_2 + 0x6C6E) == '\0') {
        puVar2 = (undefined4 *)Dispatcher_Routine_080005D4(4);
        *puVar2 = gRomData_080E59FC;
        *param_1 = puVar2;
      }
      else {
        puVar2 = (undefined4 *)Dispatcher_Routine_080005D4(4);
        *puVar2 = gRomData_080E59EC;
        *param_1 = puVar2;
      }
      return CONCAT44(in_lr,param_1);
    }
    iVar1 = 0;
LAB_08000d9a:
    *piVar3 = iVar1;
  }
  goto LAB_08000d72;
}

// =============================================================================
// Function: Scene_Routine_08000E1C @ 0x08000E1C
// =============================================================================
undefined4 Scene_Routine_08000E1C(int param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  short *psVar8;
  undefined4 in_lr;
  
  HW_Routine_08008724();
  Scene_Routine_08000F5C(param_1);
  iVar3 = HW_GetSpriteAttr1Offset(param_1);
  *(undefined2 *)(iVar3 + 0x50) = 0x3f;
  puVar4 = (uint *)Dispatcher_Routine_080005D4(0x10);
  uVar5 = HW_GetSpriteAttr1Offset(param_1);
  bVar2 = false;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = gRomData_080E5B80;
  Farm_Routine_08009300(puVar4 + 3,uVar5);
  Farm_Routine_0800934C(puVar4 + 3,0x889,1,0);
  iVar3 = HW_GetPaletteBankOffset(param_1);
  _call_via_r2(iVar3,puVar4,*(undefined4 *)(*(int *)(iVar3 + 8) + 0x10));
  *(undefined2 *)(param_1 + 0x6D32) = 0;
  HW_Routine_08008B6C(param_1 + 8,0);
  psVar8 = (short *)(param_1 + 0x6D32);
  do {
    HW_Routine_080087C8(param_1);
    HW_Routine_080088B8(param_1);
    sVar1 = *psVar8;
    if (sVar1 == 1) {
      piVar7 = (int *)(param_1 + 0x6D2C);
      *piVar7 = *piVar7 + -1;
      uVar6 = HW_Routine_080088CC(param_1);
      if ((uVar6 & 8) != 0) {
        *piVar7 = 0;
      }
      if (*piVar7 < 1) {
        Farm_Routine_08009378(puVar4 + 3,0x889,1,0);
        iVar3 = HW_GetPaletteBankOffset(param_1);
        _call_via_r2(iVar3,puVar4,*(undefined4 *)(*(int *)(iVar3 + 8) + 0x10));
        *psVar8 = 2;
      }
    }
    else if (sVar1 < 2) {
      if ((sVar1 == 0) && (-1 < (int)(-*puVar4 | *puVar4))) {
        *(undefined4 *)(param_1 + 0x6D2C) = 0x78;
        *psVar8 = 1;
      }
    }
    else if ((sVar1 == 2) && (-1 < (int)(-*puVar4 | *puVar4))) {
      bVar2 = true;
    }
  } while (!bVar2);
  if (puVar4 != (uint *)0x0) {
    _call_via_r2(puVar4,3,*(undefined4 *)(puVar4[2] + 0xc));
  }
  return in_lr;
}

// =============================================================================
// Function: Scene_Routine_08000F5C @ 0x08000F5C
// =============================================================================
undefined4 Scene_Routine_08000F5C(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  HW_Routine_08008EB8(0,0x06007FE0,0x20);
  uVar1 = 0x0600F800;
  HW_Routine_08008EB8(0xffffffff,0x0600F800,0x800);
  Unpack_ArcanoMarvelous_0x70(gRomGfx_0874E648,0x6000000);
  HW_Routine_08008E64(gRomGfx_0874EB40,0x5000000,0x20);
  Unpack_ArcanoMarvelous_0x70(gRomGfx_0874EB60,uVar1);
  puVar2 = (undefined2 *)HW_GetSpriteAttr1Offset(param_1);
  *puVar2 = 0x840;
  iVar3 = HW_GetSpriteAttr1Offset(param_1);
  *(short *)(iVar3 + 0xe) = (short)0x1F43;
  iVar3 = HW_GetSpriteAttr1Offset(param_1);
  *(undefined2 *)(iVar3 + 0x1c) = 0;
  iVar3 = HW_GetSpriteAttr1Offset(param_1);
  *(undefined2 *)(iVar3 + 0x1e) = 0;
  return in_lr;
}

// =============================================================================
// Function: Scene_Routine_08000FF8 @ 0x08000FF8
// =============================================================================
undefined8 Scene_Routine_08000FF8(int param_1)

{
  ushort uVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  short *psVar11;
  undefined4 *puVar12;
  ushort *puVar13;
  int *piVar14;
  undefined2 *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined4 in_lr;
  undefined1 auStack_38 [8];
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  HW_Routine_08008724();
  Scene_Routine_080019D8(param_1);
  iVar4 = HW_GetSpriteAttr1Offset(param_1);
  *(undefined2 *)(iVar4 + 0x50) = 0x3f;
  puVar5 = (uint *)Dispatcher_Routine_080005D4(0x10);
  uVar6 = HW_GetSpriteAttr1Offset(param_1);
  uVar16 = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = gRomData_080E5B80;
  Farm_Routine_08009300(puVar5 + 3,uVar6);
  Farm_Routine_0800934C(puVar5 + 3,0x889,1,0);
  iVar4 = HW_GetPaletteBankOffset(param_1);
  _call_via_r2(iVar4,puVar5,*(undefined4 *)(*(int *)(iVar4 + 8) + 0x10));
  HW_Routine_08008B6C(param_1 + 8,0x23);
  *(undefined2 *)(param_1 + 0x6C64) = 0x400;
  iVar4 = 0x6C66;
  *(undefined2 *)(param_1 + 0x6C66) = 0;
  iVar18 = 0x6C68;
  *(undefined2 *)(param_1 + 0x6C68) = 0;
  *(undefined2 *)(param_1 + iVar4 + 4) = 0x400;
  *(undefined2 *)(param_1 + iVar18 + 0xca) = 3;
  *(undefined2 *)(param_1 + 0x6D30) = 0xe0;
  *(undefined1 *)(param_1 + 0x6C6D) = 0;
  *(undefined1 *)(param_1 + iVar4 + 6) = 0;
  uVar17 = 0;
  iVar18 = 0;
  iVar4 = 0;
  iStack_30 = 0;
  iStack_2c = 0;
  uStack_28 = 0;
  iStack_24 = 0;
  do {
    math_rand();
    HW_Routine_080087C8(param_1);
    HW_Routine_080088B8(param_1);
    if (iStack_30 == 0) {
      bVar2 = false;
      uVar7 = HW_Routine_080088CC(param_1);
      if ((((uVar7 & 1) != 0) || (uVar7 = HW_Routine_080088CC(param_1), (uVar7 & 2) != 0)) ||
         (uVar7 = HW_Routine_080088CC(param_1), (uVar7 & 8) != 0)) {
        bVar2 = true;
      }
      if (bVar2) {
        *(undefined2 *)(param_1 + 0x6D32) = 0xb;
      }
    }
    uVar7 = (int)((*(ushort *)(param_1 + 0x6D32) - 3) * 0x10000) >> 0x10;
    if (uVar7 < 0xe) {
      switch(*(uint *)(uVar7 * 4 + gInlineTable_08001150) & 0xfffffffe) {
      case 0x8001188:
        if (-1 < (int)(-*puVar5 | *puVar5)) {
          *(undefined2 *)(param_1 + 0x6D32) = 4;
        }
        break;
      case 0x80011a4:
        puVar13 = (ushort *)(param_1 + 0x6D30);
        uVar1 = *puVar13;
        *puVar13 = (ushort)(uVar1 - 1);
        if ((int)((uVar1 - 1) * 0x10000) < 0) {
          *puVar13 = 0;
        }
        piVar14 = (int *)(param_1 + 0x6AB8);
        iVar8 = *piVar14 + 0xFFFF5000;
        *piVar14 = iVar8;
        if (iVar8 <= 0x006FFFFF) {
          *piVar14 = 0x006FFFFF + 1;
        }
        if ((*puVar13 == 0) && (*piVar14 == 0x700000)) {
          Animal_Routine_0805E860(param_1 + 0x6AA0,0x194);
          *(undefined4 *)(param_1 + 0x6D2C) = 0x5a;
          *(undefined2 *)(param_1 + 0x6D32) = 5;
        }
        break;
      case 0x8001220:
        iVar8 = *(int *)(param_1 + 0x6D2C) + -1;
        *(int *)(param_1 + 0x6D2C) = iVar8;
        if (iVar8 == 0x1e) {
          Animal_Routine_0805E860(param_1 + 0x6AA0,0x195);
        }
        else if (iVar8 == 0x3c) {
          Animal_Routine_0805E860(param_1 + 0x6AA0,0x192);
        }
        if (*(int *)(param_1 + 0x6D2C) < 1) {
          Animal_Routine_0805E860(param_1 + 0x6AA0,0x1FD);
          HW_Routine_08008B6C(param_1 + 0xc,0x67);
          *(undefined2 *)(param_1 + 0x6D32) = 6;
        }
        break;
      case 0x8001290:
        if ((int)((uint)*(byte *)(param_1 + 0x6AB4) * 0x20000000) < 0) {
          Animal_Routine_0805E860(param_1 + 0x6AA0,0x195);
          iVar18 = 1;
          iVar4 = 1;
          *(undefined2 *)(param_1 + 0x6D32) = 7;
        }
        break;
      case 0x80012c8:
        piVar14 = (int *)(param_1 + 0x6AD8);
        iVar8 = *piVar14 + 0xFFFEC000;
        *piVar14 = iVar8;
        if (iVar8 < 0x800001) {
          *(undefined4 *)(param_1 + 0x6D2C) = 0x3c;
          Animal_Routine_0805E860(param_1 + 0x6AA0,0x1c2);
          uVar16 = 1;
          *piVar14 = 0x800000;
          *(undefined2 *)(param_1 + 0x6D32) = 8;
        }
        break;
      case 0x8001314:
        iVar8 = *(int *)(param_1 + 0x6D2C) + -1;
        *(int *)(param_1 + 0x6D2C) = iVar8;
        if (iVar8 < 1) {
          *(undefined2 *)(param_1 + 0x6D32) = 9;
        }
        break;
      case 0x8001338:
        piVar14 = (int *)(param_1 + 0x6BBC);
        iVar8 = *piVar14;
        *piVar14 = iVar8 + 0x18000;
        if (-1 < iVar8 + 0x18000) {
          *piVar14 = 0;
          *(undefined1 *)(param_1 + 0x6C6C) = 1;
          iStack_2c = 1;
          uVar16 = 3;
          *(undefined2 *)(param_1 + 0x6D32) = 10;
        }
        break;
      case 0x8001374:
        psVar11 = (short *)(param_1 + 0x6C64);
        *psVar11 = *psVar11 + -0x10;
        *(short *)(param_1 + 0x6C6A) = *(short *)(param_1 + 0x6C6A) + -0x10;
        iVar8 = 0x6D32;
        if (*psVar11 == 0x100) goto LAB_08001412;
        break;
      case 0x80013ac:
        *(undefined2 *)(param_1 + 0x6D30) = 0;
        *(undefined4 *)(param_1 + 0x6AB8) = 0x700000;
        Animal_Routine_0805E860(param_1 + 0x6AA0,0x192);
        Animal_Routine_0805E860(param_1 + 0x6AC0,0x338);
        iVar8 = 0x6AD8;
        *(undefined4 *)(param_1 + 0x6AD8) = 0x800000;
        iVar10 = 0x6C6C;
        iStack_2c = 0;
        uVar16 = 0;
        iVar18 = 2;
        iVar4 = 2;
        *(undefined1 *)(param_1 + 0x6C6C) = 9;
        *(undefined4 *)(param_1 + iVar8 + 0xe4) = 0;
        iVar8 = 0x6C64;
        *(undefined2 *)(param_1 + 0x6C64) = 0x100;
        *(undefined2 *)(param_1 + iVar10 + -2) = 0x100;
        iVar8 = iVar8 + 0xce;
LAB_08001412:
        iStack_30 = 1;
        *(undefined2 *)(param_1 + iVar8) = 0xc;
        break;
      case 0x8001434:
        SramProxy_LoadGlobalSettings(auStack_38);
        iVar10 = SramProxy_VerifyChecksum(auStack_38);
        iVar8 = 0x6C6D;
        if (iVar10 == 0) {
          *(undefined1 *)(param_1 + 0x6C6D) = 1;
          *(undefined1 *)(param_1 + 0x6C6E) = 0;
          uVar6 = 0x500000;
          *(undefined4 *)(param_1 + 0x6BF8) = 0x500000;
          Animal_Routine_0805E860(param_1 + 0x6BE0,2);
          iVar8 = 0x6C58;
        }
        else {
          *(undefined1 *)(param_1 + 0x6C6D) = 2;
          *(undefined1 *)(param_1 + 0x6C6E) = 1;
          *(undefined4 *)(param_1 + 0x6BF8) = 0x180000;
          uVar6 = 0x880000;
          *(undefined4 *)(param_1 + 0x6C18) = 0x880000;
          Animal_Routine_0805E860(param_1 + iVar8 + -0x6d,5);
          iVar8 = 0x6C58;
        }
        *(undefined4 *)(param_1 + iVar8) = uVar6;
        *(undefined4 *)(param_1 + 0x6D2C) = 0x924;
        *(undefined2 *)(param_1 + 0x6D32) = 0xd;
        break;
      case 0x80014ec:
        if (*(char *)(param_1 + 0x6C6D) == '\x02') {
          bVar2 = false;
          uVar7 = HW_Routine_080088CC(param_1);
          if (((uVar7 & 0x20) != 0) || (uVar7 = HW_Routine_080088CC(param_1), (uVar7 & 0x10) != 0)) {
            bVar2 = true;
          }
          if (bVar2) {
            bVar9 = *(byte *)(param_1 + 0x6C6E) ^ 1;
            *(byte *)(param_1 + 0x6C6E) = bVar9;
            if (bVar9 == 0) {
              Animal_Routine_0805E860(param_1 + 0x6BE0,2);
              Animal_Routine_0805E860(param_1 + 0x6c00,4);
              uVar6 = 0x180000;
              iVar8 = 0x6C58;
            }
            else {
              Animal_Routine_0805E860(param_1 + 0x6BE0,1);
              Animal_Routine_0805E860(param_1 + 0x6c00,5);
              uVar6 = 0x880000;
              iVar8 = 0x6C58;
            }
            *(undefined4 *)(param_1 + iVar8) = uVar6;
            *(undefined4 *)(param_1 + 0x6D2C) = 0x708;
            HW_Routine_08008B6C(param_1 + 0xc,0xcb);
          }
        }
        bVar2 = false;
        uVar7 = HW_Routine_080088CC(param_1);
        if (((uVar7 & 1) != 0) || (uVar7 = HW_Routine_080088CC(param_1), (uVar7 & 8) != 0)) {
          bVar2 = true;
        }
        if (bVar2) {
          if (*(char *)(param_1 + 0x6C6E) == '\0') {
            Animal_Routine_0805E860(param_1 + 0x6BE0,3);
          }
          else {
            Animal_Routine_0805E860(param_1 + 0x6c00,6);
          }
          *(undefined4 *)(param_1 + 0x6D2C) = 0x3c;
          HW_Routine_08008B6C(param_1 + 0xc,0xc5);
          *(undefined2 *)(param_1 + 0x6D32) = 0xe;
        }
        else {
          iVar10 = *(int *)(param_1 + 0x6D2C) + -1;
          *(int *)(param_1 + 0x6D2C) = iVar10;
          iVar8 = 0x6D32;
          if (iVar10 < 1) goto LAB_08001646;
        }
        break;
      case 0x8001630:
        iVar8 = *(int *)(param_1 + 0x6D2C) + -1;
        *(int *)(param_1 + 0x6D2C) = iVar8;
        if (iVar8 < 1) {
          uStack_28 = 1;
          iVar8 = 0x6D32;
LAB_08001646:
          *(undefined2 *)(param_1 + iVar8) = 0xf;
        }
        break;
      case 0x8001654:
        Farm_Routine_08009378(puVar5 + 3,0x889,1,0);
        iVar8 = HW_GetPaletteBankOffset(param_1);
        _call_via_r2(iVar8,puVar5,*(undefined4 *)(*(int *)(iVar8 + 8) + 0x10));
        *(undefined2 *)(param_1 + 0x6D32) = 0x10;
        break;
      case 0x8001684:
        if (-1 < (int)(-*puVar5 | *puVar5)) {
          iStack_24 = 1;
        }
      }
    }
    if ((iStack_2c != 0) && ((int)((uint)*(byte *)(param_1 + 0x6AB4) * 0x20000000) < 0)) {
      Animal_Routine_0805E860(param_1 + 0x6AA0,0x192);
      iStack_2c = 0;
    }
    if (uVar16 == 2) {
      if ((int)((uint)*(byte *)(param_1 + 0x6AD4) * 0x20000000) < 0) {
        HW_Routine_08008B88(param_1 + 0xc,0xa9);
      }
    }
    else if (uVar16 < 3) {
      if (uVar16 == 1) {
        Animal_Routine_0805E860(param_1 + 0x6AC0,0x370);
        HW_Routine_08008B6C(param_1 + 0xc,0xa9);
        uVar16 = 2;
      }
    }
    else if ((uVar16 == 3) && ((int)((uint)*(byte *)(param_1 + 0x6AD4) * 0x20000000) < 0)) {
      Animal_Routine_0805E860(param_1 + 0x6AC0,0x338);
      uVar16 = 0;
    }
    if (iVar18 == 1) {
      iVar8 = *(int *)(param_1 + 0x6B18);
      if (iVar8 < 0xbc0001) goto LAB_08001760;
      *(int *)(param_1 + 0x6B18) = iVar8 + 0xFFFFA000;
    }
    else if (iVar18 == 2) {
LAB_08001760:
      Animal_Routine_0805E860(param_1 + 0x6b00,0x2B6);
      *(undefined4 *)(param_1 + 0x6B18) = 0xbc0000;
      iVar18 = 0;
    }
    if (iVar4 == 1) {
      iVar8 = *(int *)(param_1 + 0x6B38);
      if (0x003FFFFF < iVar8) goto LAB_080017b0;
      *(int *)(param_1 + 0x6B38) = iVar8 + 0x8000;
    }
    else if (iVar4 == 2) {
LAB_080017b0:
      Animal_Routine_0805E860(param_1 + 0x6B20,0x928);
      *(undefined4 *)(param_1 + 0x6B38) = 0x400000;
      iVar4 = 0;
    }
    iVar8 = 0x6B5C;
    uVar7 = (int)((*(byte *)(param_1 + 0x6C6C) - 1) * 0x1000000) >> 0x18;
    if (8 < uVar7) goto case_08001952;
    switch(*(uint *)(uVar7 * 4 + gInlineTable_080017F8) & 0xfffffffe) {
    case 0x800181c:
      piVar14 = (int *)(param_1 + 0x6B5C);
      iVar8 = *piVar14;
      *piVar14 = iVar8 + 0x10000;
      *(int *)(param_1 + 0x6B7C) = iVar8 + 0x10000;
      *(int *)(param_1 + 0x6B58) = *(int *)(param_1 + 0x6B58) + 0xFFFF0000;
      *(int *)(param_1 + 0x6B78) = *(int *)(param_1 + 0x6B78) + 0x10000;
      if (*piVar14 <= 0x005FFFFF) break;
      uVar3 = 2;
      iVar8 = 0x6C6C;
      goto LAB_08001950;
    case 0x8001874:
      piVar14 = (int *)(param_1 + 0x6B5C);
      iVar10 = *piVar14;
      *piVar14 = iVar10 + 0x10000;
      *(int *)(param_1 + iVar8 + 0x20) = iVar10 + 0x10000;
      *(int *)(param_1 + 0x6B58) = *(int *)(param_1 + 0x6B58) + 0x10000;
      *(int *)(param_1 + 0x6B78) = *(int *)(param_1 + 0x6B78) + 0xFFFF0000;
      if (0x0093FFFF < *piVar14) {
        *(undefined1 *)(param_1 + 0x6C6C) = 3;
        goto case_080018AE;
      }
      break;
    case 0x80018ae:
case_080018AE:
      *(undefined4 *)(param_1 + 0x6B58) = 0x1c0000;
      *(undefined4 *)(param_1 + 0x6B78) = 0xd40000;
      puVar12 = (undefined4 *)(param_1 + 0x6B7C);
      *(undefined4 *)(param_1 + 0x6B5C) = 0x940000;
      *puVar12 = 0x940000;
      uVar6 = 0x71C;
      if (*(char *)(param_1 + 0x6C6C) == '\x03') {
        uVar17 = 0x1e;
      }
      else {
        Animal_Routine_0805E860(param_1 + 0x6B40,0x71C);
        Animal_Routine_0805E860(param_1 + 0x6B60,uVar6);
        uVar17 = 0;
      }
      *(undefined1 *)(param_1 + 0x6C6C) = 4;
    case 0x8001922:
      uVar6 = 0x71C;
      uVar7 = uVar17 * 0x1000000 - 0x1000000;
      uVar17 = uVar7 >> 0x18;
      if ((int)uVar7 < 0) {
        Animal_Routine_0805E860(param_1 + 0x6B40,0x71C);
        Animal_Routine_0805E860(param_1 + 0x6B60,uVar6);
        uVar3 = 5;
        iVar8 = 0x6C6C;
LAB_08001950:
        *(undefined1 *)(param_1 + iVar8) = uVar3;
      }
    }
case_08001952:
    iVar8 = HW_GetSpriteAttr1Offset(param_1);
    puVar15 = (undefined2 *)(param_1 + 0x6D30);
    *(undefined2 *)(iVar8 + 0x10) = *puVar15;
    iVar8 = HW_GetSpriteAttr1Offset(param_1);
    *(undefined2 *)(iVar8 + 0x14) = *puVar15;
    iVar8 = HW_GetSpriteAttr1Offset(param_1);
    *(undefined2 *)(iVar8 + 0x18) = *puVar15;
    iVar8 = HW_GetSpriteAttr1Offset(param_1);
    *(undefined2 *)(iVar8 + 0x1c) = *puVar15;
    Scene_Routine_080024E0(param_1);
    if (iStack_24 != 0) {
      if (puVar5 != (uint *)0x0) {
        _call_via_r2(puVar5,3,*(undefined4 *)(puVar5[2] + 0xc));
      }
      return CONCAT44(in_lr,uStack_28);
    }
  } while( true );
}

// =============================================================================
// Function: Scene_Routine_080019D8 @ 0x080019D8
// =============================================================================
undefined4 Scene_Routine_080019D8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined4 uVar14;
  short *psVar15;
  undefined4 *puVar16;
  undefined2 *puVar17;
  undefined4 uStack_4;
  undefined2 *puVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  undefined2 *puVar22;
  undefined2 *puVar23;
  undefined2 *puVar24;
  undefined2 *puVar25;
  undefined2 *puVar26;
  undefined2 *puVar27;
  undefined2 *puVar28;
  undefined2 *puVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  undefined4 *puVar35;
  undefined4 *puVar36;
  undefined4 *puVar37;
  undefined4 *puVar38;
  undefined4 *puVar39;
  undefined4 *puVar40;
  undefined4 *puVar41;
  undefined4 *puVar42;
  undefined4 *puVar43;
  undefined4 *puVar44;
  undefined4 *puVar45;
  undefined1 *puVar46;
  
  iVar1 = 0xFFFFEFC8;
  puVar17 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar18 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar19 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar20 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar21 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar22 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar23 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar24 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar25 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar26 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar27 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar28 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar29 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar30 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar31 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar32 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar33 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar34 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar35 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar36 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar37 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar38 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar39 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar40 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar41 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar42 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar43 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar44 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar45 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  puVar46 = &stack0xffffffe0 + 0xFFFFEFC8;
  HW_Routine_08008EB8(0,0x06007FE0,0x20);
  HW_Routine_08008EB8(0xffffffff,0x0600C000,0x1000);
  HW_Routine_08008EB8(0xffffffff,0x0600D000,0x1000);
  HW_Routine_08008EB8(0xffffffff,0x0600E000,0x1000);
  HW_Routine_08008EB8(0xffffffff,0x0600F000,0x1000);
  Unpack_ArcanoMarvelous_0x70(gRomGfx_0874A9C0,0x6000000);
  HW_Routine_08008E64(gRomGfx_0874E330,0x5000000,0x200);
  iVar12 = 0;
  *(undefined1 **)(&stack0xffffffe0 + 0x1030 + iVar1) = &stack0xfffffff8 + iVar1;
  *(undefined1 **)(&stack0xffffffe0 + 0x1034 + iVar1) = &stack0x00000000 + iVar1;
  *(int *)(&stack0xffffffe0 + 0x101C + iVar1) = param_1 + 0x6BA4;
  *(int *)(&stack0x00001000 + iVar1) = param_1 + 0x6BC4;
  *(int *)(&stack0x00000fe0 + iVar1) = param_1 + 0x6AA4;
  *(int *)(&stack0xffffffe0 + 0x1004 + iVar1) = param_1 + 0x6AC4;
  *(int *)(&stack0xffffffe0 + 0x1008 + iVar1) = param_1 + 0x6AE4;
  *(int *)(&stack0xffffffe0 + 0x100C + iVar1) = param_1 + 0x6B04;
  *(int *)(&stack0xffffffe0 + 0x1010 + iVar1) = param_1 + 0x6B24;
  *(int *)(&stack0xffffffe0 + 0x1014 + iVar1) = param_1 + 0x6B44;
  *(int *)(&stack0xffffffe0 + 0x1018 + iVar1) = param_1 + 0x6B84;
  *(int *)(&stack0xffffffe0 + 0x1024 + iVar1) = param_1 + 0x6BE4;
  do {
    Unpack_ArcanoMarvelous_0x70(*(undefined4 *)(iVar12 * 4 + gRomData_080E8684),puVar46);
    iVar2 = iVar12 * 0x1000;
    iVar10 = 0;
    iVar12 = iVar12 + 1;
    *(int *)(&stack0xffffffe0 + 0x1028 + iVar1) = param_1 + 0x6C04;
    *(int *)(&stack0xffffffe0 + 0x102C + iVar1) = param_1 + 0x6C24;
    do {
      iVar9 = iVar10 * 0x40;
      iVar5 = iVar10 * 0x80;
      iVar10 = iVar10 + 1;
      puVar13 = (undefined2 *)(&stack0x00000020 + iVar5 + iVar1);
      puVar3 = (undefined2 *)(&stack0xffffffe0 + iVar5 + iVar1);
      iVar9 = iVar9 + iVar2 + 0xc000;
      iVar5 = 0x1f;
      do {
        *(undefined2 *)(iVar9 + 0x6000000) = *puVar3;
        *(undefined2 *)(iVar9 + 0x06000800) = *puVar13;
        puVar13 = puVar13 + 1;
        puVar3 = puVar3 + 1;
        iVar9 = iVar9 + 2;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    } while (iVar10 < 0x20);
  } while (iVar12 < 4);
  puVar3 = (undefined2 *)HW_GetSpriteAttr1Offset(param_1);
  *puVar17 = 8000;
  *puVar3 = 8000;
  iVar12 = HW_GetSpriteAttr1Offset(param_1);
  *puVar18 = (short)0x5843;
  *(short *)(iVar12 + 8) = (short)0x5843;
  iVar12 = HW_GetSpriteAttr1Offset(param_1);
  *puVar19 = (short)0x5A42;
  *(short *)(iVar12 + 10) = (short)0x5A42;
  iVar12 = HW_GetSpriteAttr1Offset(param_1);
  *puVar20 = (short)0x5C41;
  *(short *)(iVar12 + 0xc) = (short)0x5C41;
  iVar12 = HW_GetSpriteAttr1Offset(param_1);
  *puVar21 = (short)0x5E40;
  *(short *)(iVar12 + 0xe) = (short)0x5E40;
  iVar12 = HW_GetSpriteAttr1Offset(param_1);
  *puVar22 = 0;
  *(undefined2 *)(iVar12 + 0x10) = 0;
  iVar12 = HW_GetSpriteAttr1Offset(param_1);
  *puVar23 = 0;
  *(undefined2 *)(iVar12 + 0x12) = 0;
  iVar12 = HW_GetSpriteAttr1Offset(param_1);
  *puVar24 = 0;
  *(undefined2 *)(iVar12 + 0x14) = 0;
  iVar12 = HW_GetSpriteAttr1Offset(param_1);
  *puVar25 = 0;
  *(undefined2 *)(iVar12 + 0x16) = 0;
  iVar12 = HW_GetSpriteAttr1Offset(param_1);
  *puVar26 = 0;
  *(undefined2 *)(iVar12 + 0x18) = 0;
  iVar12 = HW_GetSpriteAttr1Offset(param_1);
  *puVar27 = 0;
  *(undefined2 *)(iVar12 + 0x1a) = 0;
  iVar12 = HW_GetSpriteAttr1Offset(param_1);
  *puVar28 = 0;
  *(undefined2 *)(iVar12 + 0x1c) = 0;
  iVar12 = HW_GetSpriteAttr1Offset(param_1);
  *puVar29 = 0;
  *(undefined2 *)(iVar12 + 0x1e) = 0;
  *puVar30 = 0;
  *(undefined2 *)(&stack0xffffffe4 + iVar1) = 0;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = 0;
  *(undefined2 *)(&stack0xffffffec + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
  *(undefined2 *)(&stack0xfffffff4 + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  *(undefined2 *)(*(int *)(&stack0xffffffe0 + 0x1030 + iVar1) + 4) = 0;
  piVar6 = *(int **)(param_1 + 0x6BA0);
  _call_via_r3(&stack0x00000000 + iVar1,piVar6,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + 0x101C + iVar1) +
                   (uint)*(ushort *)((undefined4 *)(param_1 + 0x6BA0) + 3) * 4),
                  *(undefined4 *)(*piVar6 + 0x10));
  puVar16 = *(undefined4 **)(&stack0xffffffe0 + 0x1034 + iVar1);
  gba_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar31 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  HW_Routine_08008E64(*(int *)(&stack0xfffffff0 + iVar1) + 0x120,0x05000320,0xe0);
  uVar8 = 0;
  if (*(int *)(&stack0xffffffe8 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xffffffec + iVar1);
  }
  HW_Routine_08008E64(*(int *)(&stack0xffffffe8 + iVar1),0x06010000,uVar8);
  iVar12 = 0x6C60;
  uVar7 = 0;
  if (*(int *)(&stack0xffffffe8 + iVar1) != 0) {
    uVar7 = (uint)*(ushort *)(&stack0xffffffec + iVar1);
  }
  psVar15 = (short *)(param_1 + 0x6C60);
  *psVar15 = (short)(uVar7 >> 5);
  *(undefined4 *)(param_1 + 0x6BB8) = 0x780000;
  *(undefined4 *)(param_1 + 0x6BBC) = 0xFFA00000;
  puVar4 = (undefined4 *)(param_1 + iVar12 + -0xa0);
  piVar6 = (int *)*puVar4;
  _call_via_r3(puVar16,piVar6,
                  *(undefined2 *)
                   (**(int **)(&stack0x00001000 + iVar1) + (uint)*(ushort *)(puVar4 + 3) * 4),
                  *(undefined4 *)(*piVar6 + 0x10));
  gba_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar32 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar8 = 0;
  if (*(int *)(&stack0xffffffe8 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xffffffec + iVar1);
  }
  HW_Routine_08008E64(*(int *)(&stack0xffffffe8 + iVar1),*psVar15 * 0x20 + 0x06010000,uVar8);
  *(undefined4 *)(param_1 + 0x6BD8) = 0x780000;
  *(undefined4 *)(param_1 + 0x6BDC) = 0x580000;
  puVar4 = (undefined4 *)(param_1 + 0x6AA0);
  Animal_Routine_0805E860(puVar4,0x160);
  _call_via_r3(puVar16,(int *)*puVar4,
                  *(undefined2 *)
                   (**(int **)(&stack0x00000fe0 + iVar1) + (uint)*(ushort *)(puVar4 + 3) * 4),
                  *(undefined4 *)(*(int *)*puVar4 + 0x10));
  gba_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar33 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(undefined4 *)(&stack0xfffffff0 + iVar1);
  iVar12 = HW_Routine_080074C0(param_1 + 0x6c80,*(undefined4 *)(param_1 + 0x6c84));
  uVar8 = 0;
  if (*(int *)(&stack0xfffffff0 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xfffffff4 + iVar1);
  }
  HW_Routine_08008E64(uVar11,iVar12 * 0x20 + 0x05000200,uVar8);
  *(undefined4 *)(param_1 + 0x6AB8) = 0x1080000;
  *(undefined4 *)(param_1 + 0x6ABC) = 0x940000;
  puVar4 = (undefined4 *)(param_1 + 0x6AC0);
  Animal_Routine_0805E860(puVar4,0x342);
  _call_via_r3(puVar16,(int *)*puVar4,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + 0x1004 + iVar1) +
                   (uint)*(ushort *)(puVar4 + 3) * 4),*(undefined4 *)(*(int *)*puVar4 + 0x10));
  gba_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar34 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(undefined4 *)(&stack0xfffffff0 + iVar1);
  iVar12 = HW_Routine_080074C0(param_1 + 0x6CB8,*(undefined4 *)(param_1 + 0x6CB8 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xfffffff0 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xfffffff4 + iVar1);
  }
  HW_Routine_08008E64(uVar11,iVar12 * 0x20 + 0x05000200,uVar8);
  *(undefined4 *)(param_1 + 0x6AD8) = 0x1080000;
  *(undefined4 *)(param_1 + 0x6ADC) = 0x940000;
  piVar6 = *(int **)(param_1 + 0x6AE0);
  _call_via_r3(puVar16,piVar6,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + 0x1008 + iVar1) +
                   (uint)*(ushort *)((undefined4 *)(param_1 + 0x6AE0) + 3) * 4),
                  *(undefined4 *)(*piVar6 + 0x10));
  gba_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar35 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(undefined4 *)(&stack0xfffffff0 + iVar1);
  iVar12 = HW_Routine_080074C0(param_1 + 0x6C90,*(undefined4 *)(param_1 + 0x6C90 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xfffffff0 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xfffffff4 + iVar1);
  }
  HW_Routine_08008E64(uVar11,iVar12 * 0x20 + 0x05000200,uVar8);
  *(undefined4 *)(param_1 + 0x6AF8) = 0x280000;
  *(undefined4 *)(param_1 + 0x6AFC) = 0x540000;
  Animal_Routine_0805E860((undefined4 *)(param_1 + 0x6b00),0x2B2);
  piVar6 = *(int **)(param_1 + 0x6b00);
  _call_via_r3(puVar16,piVar6,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + 0x100C + iVar1) +
                   (uint)*(ushort *)(param_1 + 0x6b0c) * 4),*(undefined4 *)(*piVar6 + 0x10));
  gba_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar36 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(undefined4 *)(&stack0xfffffff0 + iVar1);
  iVar12 = HW_Routine_080074C0(param_1 + 0x6CA0,*(undefined4 *)(param_1 + 0x6CA0 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xfffffff0 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xfffffff4 + iVar1);
  }
  HW_Routine_08008E64(uVar11,iVar12 * 0x20 + 0x05000200,uVar8);
  *(undefined4 *)(param_1 + 0x6B18) = 0x1100000;
  *(undefined4 *)(param_1 + 0x6B1C) = 0x940000;
  puVar4 = (undefined4 *)(param_1 + 0x6B20);
  Animal_Routine_0805E860(puVar4,0x924);
  _call_via_r3(puVar16,(int *)*puVar4,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + 0x1010 + iVar1) +
                   (uint)*(ushort *)(puVar4 + 3) * 4),*(undefined4 *)(*(int *)*puVar4 + 0x10));
  gba_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar37 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  *(undefined4 *)(param_1 + 0x6B38) = 0xFFF00000;
  *(undefined4 *)(param_1 + 0x6B3C) = 0x940000;
  puVar4 = (undefined4 *)(param_1 + 0x6B40);
  Animal_Routine_0805E860(puVar4,0x730);
  Animal_Routine_0805E860(param_1 + 0x6B60,0x730);
  _call_via_r3(puVar16,(int *)*puVar4,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + 0x1014 + iVar1) +
                   (uint)*(ushort *)(puVar4 + 3) * 4),*(undefined4 *)(*(int *)*puVar4 + 0x10));
  gba_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar38 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(undefined4 *)(&stack0xfffffff0 + iVar1);
  iVar12 = HW_Routine_080074C0(param_1 + 0x6CC8,*(undefined4 *)(param_1 + 0x6CC8 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xfffffff0 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xfffffff4 + iVar1);
  }
  HW_Routine_08008E64(uVar11,iVar12 * 0x20 + 0x05000200,uVar8);
  iVar12 = 0x6B58;
  *(undefined4 *)(param_1 + 0x6B58) = 0x280000;
  *(undefined4 *)(param_1 + 0x6B5C) = 0x200000;
  *(undefined4 *)(param_1 + 0x6B78) = 0xc80000;
  *(undefined4 *)(param_1 + iVar12 + 0x24) = 0x200000;
  puVar4 = (undefined4 *)(param_1 + 0x6b80);
  Animal_Routine_0805E860(puVar4,0x91A);
  piVar6 = *(int **)(&stack0xffffffe0 + 0x1018 + iVar1);
  _call_via_r3(puVar16,(int *)*puVar4,
                  *(undefined2 *)(*piVar6 + (uint)*(ushort *)(param_1 + 0x6b8c) * 4),
                  *(undefined4 *)(*(int *)*puVar4 + 0x10));
  gba_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar39 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(undefined4 *)(&stack0xfffffff0 + iVar1);
  iVar12 = HW_Routine_080074C0(param_1 + 0x6CE8,*(undefined4 *)(param_1 + 0x6CE8 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xfffffff0 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xfffffff4 + iVar1);
  }
  HW_Routine_08008E64(uVar11,iVar12 * 0x20 + 0x05000200,uVar8);
  uVar11 = *(undefined4 *)(&stack0xffffffe8 + iVar1);
  iVar12 = HW_Routine_08007D4C(param_1 + 0x6CD0,*(undefined4 *)(param_1 + 0x6CD0 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xffffffe8 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xffffffec + iVar1);
  }
  HW_Routine_08008E64(uVar11,iVar12 * 0x20 + 0x06010000,uVar8);
  Animal_Routine_0805E860(puVar4,0x91B);
  _call_via_r3(puVar16,(int *)*puVar4,
                  *(undefined2 *)(*piVar6 + (uint)*(ushort *)(param_1 + 0x6b8c) * 4),
                  *(undefined4 *)(*(int *)*puVar4 + 0x10));
  gba_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar40 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(undefined4 *)(&stack0xffffffe8 + iVar1);
  iVar12 = HW_Routine_08007D4C(param_1 + 0x6CD8,*(undefined4 *)(param_1 + 0x6CD8 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xffffffe8 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xffffffec + iVar1);
  }
  HW_Routine_08008E64(uVar11,iVar12 * 0x20 + 0x06010000,uVar8);
  Animal_Routine_0805E860(puVar4,0x91C);
  _call_via_r3(puVar16,(int *)*puVar4,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + 0x1018 + iVar1) +
                   (uint)*(ushort *)(param_1 + 0x6b8c) * 4),*(undefined4 *)(*(int *)*puVar4 + 0x10))
  ;
  gba_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar41 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(undefined4 *)(&stack0xffffffe8 + iVar1);
  iVar12 = HW_Routine_08007D4C(param_1 + 0x6CE0,*(undefined4 *)(param_1 + 0x6CE0 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xffffffe8 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xffffffec + iVar1);
  }
  HW_Routine_08008E64(uVar11,iVar12 * 0x20 + 0x06010000,uVar8);
  puVar4 = (undefined4 *)(param_1 + 0x6BE0);
  Animal_Routine_0805E860(puVar4,1);
  _call_via_r3(puVar16,(int *)*puVar4,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + 0x1024 + iVar1) +
                   (uint)*(ushort *)(puVar4 + 3) * 4),*(undefined4 *)(*(int *)*puVar4 + 0x10));
  gba_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar42 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(undefined4 *)(&stack0xfffffff0 + iVar1);
  iVar12 = HW_Routine_080074C0(param_1 + 0x6d00,*(undefined4 *)(param_1 + 0x6d04));
  uVar8 = 0;
  if (*(int *)(&stack0xfffffff0 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xfffffff4 + iVar1);
  }
  HW_Routine_08008E64(uVar11,iVar12 * 0x20 + 0x05000200,uVar8);
  uVar11 = *(undefined4 *)(&stack0xffffffe8 + iVar1);
  iVar12 = HW_Routine_08007D4C(param_1 + 0x6CF0,*(undefined4 *)(param_1 + 0x6CF0 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xffffffe8 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xffffffec + iVar1);
  }
  HW_Routine_08008E64(uVar11,iVar12 * 0x20 + 0x06010000,uVar8);
  *(undefined4 *)(param_1 + 0x6BFC) = 0x700000;
  Animal_Routine_0805E860((undefined4 *)(param_1 + 0x6c00),4);
  piVar6 = *(int **)(param_1 + 0x6c00);
  _call_via_r3(puVar16,piVar6,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + 0x1028 + iVar1) +
                   (uint)*(ushort *)(param_1 + 0x6c0c) * 4),*(undefined4 *)(*piVar6 + 0x10));
  gba_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar43 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(undefined4 *)(&stack0xffffffe8 + iVar1);
  iVar12 = HW_Routine_08007D4C(param_1 + 0x6CF8,*(undefined4 *)(param_1 + 0x6CF8 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xffffffe8 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xffffffec + iVar1);
  }
  HW_Routine_08008E64(uVar11,iVar12 * 0x20 + 0x06010000,uVar8);
  *(undefined4 *)(param_1 + 0x6C1C) = 0x700000;
  piVar6 = *(int **)(param_1 + 0x6C20);
  _call_via_r3(puVar16,piVar6,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + 0x102C + iVar1) +
                   (uint)*(ushort *)((undefined4 *)(param_1 + 0x6C20) + 3) * 4),
                  *(undefined4 *)(*piVar6 + 0x10));
  gba_memcpy(puVar16,puVar16,0x20);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar44 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(undefined4 *)(&stack0xfffffff0 + iVar1);
  iVar12 = HW_Routine_080074C0(param_1 + 0x6D10,*(undefined4 *)(param_1 + 0x6D10 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xfffffff0 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xfffffff4 + iVar1);
  }
  HW_Routine_08008E64(uVar11,iVar12 * 0x20 + 0x05000200,uVar8);
  uVar11 = *(undefined4 *)(&stack0xffffffe8 + iVar1);
  iVar12 = HW_Routine_08007D4C(param_1 + 0x6D08,*(undefined4 *)(param_1 + 0x6D08 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xffffffe8 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xffffffec + iVar1);
  }
  HW_Routine_08008E64(uVar11,iVar12 * 0x20 + 0x06010000,uVar8);
  *(undefined4 *)(param_1 + 0x6C38) = 0x780000;
  *(undefined4 *)(param_1 + 0x6C3C) = 0x900000;
  Animal_Routine_0805E790(puVar16,param_1 + 0x6A40,0);
  uVar11 = puVar16[1];
  uVar14 = puVar16[2];
  *puVar45 = *puVar16;
  *(undefined4 *)(&stack0xffffffe4 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = uVar14;
  uVar11 = puVar16[4];
  uVar14 = puVar16[5];
  *(undefined4 *)(&stack0xffffffec + iVar1) = puVar16[3];
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar14;
  uVar11 = puVar16[7];
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = puVar16[6];
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar11;
  uVar11 = *(undefined4 *)(&stack0xfffffff0 + iVar1);
  iVar12 = HW_Routine_080074C0(param_1 + 0x6D20,*(undefined4 *)(param_1 + 0x6D20 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xfffffff0 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xfffffff4 + iVar1);
  }
  HW_Routine_08008E64(uVar11,iVar12 * 0x20 + 0x05000200,uVar8);
  uVar11 = *(undefined4 *)(&stack0xffffffe8 + iVar1);
  iVar12 = HW_Routine_08007D4C(param_1 + 0x6D18,*(undefined4 *)(param_1 + 0x6D18 + 4));
  uVar8 = 0;
  if (*(int *)(&stack0xffffffe8 + iVar1) != 0) {
    uVar8 = *(undefined2 *)(&stack0xffffffec + iVar1);
  }
  HW_Routine_08008E64(uVar11,iVar12 * 0x20 + 0x06010000,uVar8);
  *(undefined4 *)(param_1 + 0x6C5C) = 0x780000;
  return *(undefined4 *)((int)&uStack_4 + 0x1038 + iVar1);
}

// =============================================================================
// Function: Scene_Routine_080024E0 @ 0x080024E0
// =============================================================================
undefined4 Scene_Routine_080024E0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  short *psVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 in_lr;
  short sStack_c4;
  short sStack_c2;
  undefined2 uStack_c0;
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined4 uStack_b8;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined4 uStack_b0;
  undefined1 uStack_ac;
  int iStack_a8;
  uint uStack_a4;
  int iStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  uint uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  int iStack_88;
  uint uStack_84;
  int iStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
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
  puVar6 = (undefined4 *)(param_1 + 0x6AB4);
  uVar1 = Animal_Routine_0805E8F0(param_1 + 0x6AA0);
  *puVar6 = uVar1;
  puVar6 = (undefined4 *)(param_1 + 0x6AD4);
  uVar1 = Animal_Routine_0805E8F0(param_1 + 0x6AC0);
  *puVar6 = uVar1;
  puVar6 = (undefined4 *)(param_1 + 0x6AF4);
  uVar1 = Animal_Routine_0805E8F0(param_1 + 0x6AE0);
  *puVar6 = uVar1;
  puVar6 = (undefined4 *)(param_1 + 0x6B14);
  uVar1 = Animal_Routine_0805E8F0(param_1 + 0x6b00);
  *puVar6 = uVar1;
  puVar6 = (undefined4 *)(param_1 + 0x6B34);
  uVar1 = Animal_Routine_0805E8F0(param_1 + 0x6B20);
  *puVar6 = uVar1;
  puVar6 = (undefined4 *)(param_1 + 0x6B54);
  uVar1 = Animal_Routine_0805E8F0(param_1 + 0x6B40);
  *puVar6 = uVar1;
  pcVar7 = (char *)(0x6C6D + param_1);
  if (*pcVar7 != '\0') {
    puVar6 = (undefined4 *)(param_1 + 0x6C20);
    _call_via_r3(&iStack_88,(int *)*puVar6,
                    *(undefined2 *)
                     (*(int *)(param_1 + 0x6C24) + (uint)*(ushort *)(puVar6 + 3) * 4),
                    *(undefined4 *)(*(int *)*puVar6 + 0x10));
    gba_memcpy(&iStack_88,&iStack_88,0x20);
    iStack_a8 = iStack_88;
    uStack_a4 = uStack_84;
    iStack_a0 = iStack_80;
    uStack_9c = uStack_7c;
    uStack_98 = uStack_78;
    uStack_94 = uStack_74;
    uStack_90 = uStack_70;
    uStack_8c = uStack_6c;
    sStack_c4 = *(short *)((int)puVar6 + 0x1a);
    sStack_c2 = *(undefined2 *)((int)puVar6 + 0x1e);
    uStack_bc = 0;
    uStack_be = HW_Routine_08007D4C(param_1 + 0x6D08,*(undefined4 *)(param_1 + 0x6D08 + 4));
    uStack_c0 = HW_Routine_080074C0(param_1 + 0x6D10,*(undefined4 *)(param_1 + 0x6D10 + 4));
    uStack_ac = 1;
    uVar1 = HW_GetSpriteAttr2Offset(param_1);
    uVar4 = 0;
    if (iStack_a8 != 0) {
      uVar4 = uStack_a4 & 0xffff;
    }
    Animal_Routine_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
    puVar6 = (undefined4 *)(param_1 + 0x6BF4);
    puVar9 = (undefined4 *)(param_1 + 0x6BE0);
    uVar1 = Animal_Routine_0805E8F0(puVar9);
    *puVar6 = uVar1;
    _call_via_r3(&iStack_88,(int *)*puVar9,
                    *(undefined2 *)
                     (*(int *)(param_1 + 0x6BE4) + (uint)*(ushort *)(puVar9 + 3) * 4),
                    *(undefined4 *)(*(int *)*puVar9 + 0x10));
    gba_memcpy(&iStack_88,&iStack_88,0x20);
    iStack_a8 = iStack_88;
    uStack_a4 = uStack_84;
    iStack_a0 = iStack_80;
    uStack_9c = uStack_7c;
    uStack_98 = uStack_78;
    uStack_94 = uStack_74;
    uStack_90 = uStack_70;
    uStack_8c = uStack_6c;
    sStack_c4 = *(short *)((int)puVar9 + 0x1a);
    sStack_c2 = *(undefined2 *)((int)puVar9 + 0x1e);
    uStack_be = HW_Routine_08007D4C(param_1 + 0x6CF0,*(undefined4 *)(param_1 + 0x6CF0 + 4));
    uStack_c0 = HW_Routine_080074C0(param_1 + 0x6d00,*(undefined4 *)(param_1 + 0x6d04));
    uVar1 = HW_GetSpriteAttr2Offset(param_1);
    uVar4 = 0;
    if (iStack_a8 != 0) {
      uVar4 = uStack_a4 & 0xffff;
    }
    Animal_Routine_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
    if (*pcVar7 == '\x02') {
      puVar6 = (undefined4 *)(param_1 + 0x6C14);
      uVar1 = Animal_Routine_0805E8F0((undefined4 *)(param_1 + 0x6c00));
      *puVar6 = uVar1;
      piVar2 = *(int **)(param_1 + 0x6c00);
      _call_via_r3(&iStack_88,piVar2,
                      *(undefined2 *)
                       (*(int *)(param_1 + 0x6C04) + (uint)*(ushort *)(param_1 + 0x6c0c) * 4)
                      ,*(undefined4 *)(*piVar2 + 0x10));
      gba_memcpy(&iStack_88,&iStack_88,0x20);
      iStack_a8 = iStack_88;
      uStack_a4 = uStack_84;
      iStack_a0 = iStack_80;
      uStack_9c = uStack_7c;
      uStack_98 = uStack_78;
      uStack_94 = uStack_74;
      uStack_90 = uStack_70;
      uStack_8c = uStack_6c;
      sStack_c4 = *(short *)(param_1 + 0x6c1a);
      sStack_c2 = *(undefined2 *)(param_1 + 0x6c1e);
      uStack_be = HW_Routine_08007D4C(param_1 + 0x6CF8,*(undefined4 *)(param_1 + 0x6CF8 + 4)
                               );
      uStack_c0 = HW_Routine_080074C0(param_1 + 0x6d00,*(undefined4 *)(param_1 + 0x6d04));
      uVar1 = HW_GetSpriteAttr2Offset(param_1);
      uVar4 = 0;
      if (iStack_a8 != 0) {
        uVar4 = uStack_a4 & 0xffff;
      }
      Animal_Routine_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
    }
    puVar6 = (undefined4 *)(param_1 + 0x6C40);
    Animal_Routine_0805E8F0(puVar6);
    _call_via_r3(&iStack_88,(int *)*puVar6,
                    *(undefined2 *)
                     (*(int *)(param_1 + 0x6C44) + (uint)*(ushort *)(puVar6 + 3) * 4),
                    *(undefined4 *)(*(int *)*puVar6 + 0x10));
    gba_memcpy(&iStack_88,&iStack_88,0x20);
    iStack_a8 = iStack_88;
    uStack_a4 = uStack_84;
    iStack_a0 = iStack_80;
    uStack_9c = uStack_7c;
    uStack_98 = uStack_78;
    uStack_94 = uStack_74;
    uStack_90 = uStack_70;
    uStack_8c = uStack_6c;
    sStack_c4 = *(short *)((int)puVar6 + 0x1a);
    sStack_c2 = *(undefined2 *)((int)puVar6 + 0x1e);
    uStack_be = HW_Routine_08007D4C(param_1 + 0x6D18,*(undefined4 *)(param_1 + 0x6D18 + 4));
    uStack_c0 = HW_Routine_080074C0(param_1 + 0x6D20,*(undefined4 *)(param_1 + 0x6D20 + 4));
    uVar1 = HW_GetSpriteAttr2Offset(param_1);
    uVar4 = 0;
    if (iStack_a8 != 0) {
      uVar4 = uStack_a4 & 0xffff;
    }
    Animal_Routine_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
  }
  puVar6 = (undefined4 *)(param_1 + 0x6BA0);
  _call_via_r3(&iStack_88,(int *)*puVar6,
                  *(undefined2 *)
                   (*(int *)(param_1 + 0x6BA4) + (uint)*(ushort *)(puVar6 + 3) * 4),
                  *(undefined4 *)(*(int *)*puVar6 + 0x10));
  gba_memcpy(&iStack_88,&iStack_88,0x20);
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  iStack_a0 = iStack_80;
  uStack_9c = uStack_7c;
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  uStack_90 = uStack_70;
  uStack_8c = uStack_6c;
  sStack_c4 = *(short *)((int)puVar6 + 0x1a);
  sStack_c2 = *(undefined2 *)((int)puVar6 + 0x1e);
  uStack_bc = 0;
  uStack_be = 0;
  uStack_c0 = 0;
  uStack_ac = 1;
  uVar1 = HW_GetSpriteAttr2Offset(param_1);
  uVar4 = 0;
  if (iStack_a8 != 0) {
    uVar4 = uStack_a4 & 0xffff;
  }
  Animal_Routine_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
  if (9 < *(short *)(param_1 + 0x6D32)) {
    iVar8 = HW_GetSpriteAttr2Offset(param_1);
    psVar10 = (short *)(param_1 + 0x6C64);
    *(short *)(iVar8 + 10) = *psVar10;
    *(short *)(iVar8 + 0x12) = psVar10[1];
    *(short *)(iVar8 + 0x1a) = psVar10[2];
    *(short *)(iVar8 + 0x22) = psVar10[3];
    puVar6 = (undefined4 *)(0x6BC0 + param_1);
    _call_via_r3(&iStack_88,(int *)*puVar6,
                    *(undefined2 *)
                     (*(int *)(param_1 + 0x6BC4) + (uint)*(ushort *)(puVar6 + 3) * 4),
                    *(undefined4 *)(*(int *)*puVar6 + 0x10));
    gba_memcpy(&iStack_88,&iStack_88,0x20);
    iStack_a8 = iStack_88;
    uStack_a4 = uStack_84;
    iStack_a0 = iStack_80;
    uStack_9c = uStack_7c;
    uStack_98 = uStack_78;
    uStack_94 = uStack_74;
    uStack_90 = uStack_70;
    uStack_8c = uStack_6c;
    sStack_c4 = *(short *)((int)puVar6 + 0x1a);
    sStack_c2 = *(undefined2 *)((int)puVar6 + 0x1e);
    uStack_bc = 0;
    uStack_be = *(undefined2 *)(param_1 + 0x6C60);
    uStack_c0 = 0;
    uStack_b3 = 0;
    if ((*psVar10 == 0x100) && (*(short *)(param_1 + 0x6C6A) == 0x100)) {
      uStack_b0 = 0;
    }
    else {
      uStack_b0 = 1;
    }
    uStack_ac = 1;
  }
  puVar6 = (undefined4 *)(param_1 + 0x6AA0);
  _call_via_r3(&iStack_88,(int *)*puVar6,
                  *(undefined2 *)
                   (*(int *)(param_1 + 0x6AA4) + (uint)*(ushort *)(puVar6 + 3) * 4),
                  *(undefined4 *)(*(int *)*puVar6 + 0x10));
  gba_memcpy(&iStack_88,&iStack_88,0x20);
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
  iVar8 = param_1 + 0x6C78;
  uStack_be = HW_Routine_08007D4C(iVar8,*(undefined4 *)(iVar8 + 4));
  uStack_c0 = HW_Routine_080074C0(param_1 + 0x6c80,*(undefined4 *)(param_1 + 0x6c84));
  uStack_b0 = 0;
  uStack_ac = 1;
  piStack_38 = (int *)(param_1 + 0x6AC4);
  piStack_34 = (int *)(param_1 + 0x6AE4);
  piStack_30 = (int *)(param_1 + 0x6B04);
  piStack_2c = (int *)(param_1 + 0x6B24);
  if ((int)((uint)*(byte *)(param_1 + 0x6AB4) * 0x40000000) < 0) {
    piVar2 = (int *)HW_GetSpriteAttr0Offset(param_1);
    iVar11 = iStack_a0;
    iVar8 = HW_Routine_08007D4C(iVar8,*(undefined4 *)(iVar8 + 4));
    uVar4 = 0;
    if (iStack_a0 != 0) {
      uVar4 = uStack_9c & 0xffff;
    }
    piStack_28 = piVar2;
    HW_Routine_08008F0C(&iStack_88,iVar11,iVar8 * 0x20 + 0x06010000,uVar4);
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
        piStack_24 = (int *)runtime_malloc_aligned(iVar8);
        if (piStack_24 == (int *)0x0) {
          piStack_24 = (int *)VTable_Routine_080D3BC0(iVar8);
        }
      }
      piStack_38 = (int *)(param_1 + 0x6AC4);
      piStack_34 = (int *)(param_1 + 0x6AE4);
      piStack_30 = (int *)(param_1 + 0x6B04);
      piStack_2c = (int *)(param_1 + 0x6B24);
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
        cpp_operator_delete();
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
  uVar1 = HW_GetSpriteAttr2Offset(param_1);
  uVar4 = 0;
  if (iStack_a8 != 0) {
    uVar4 = uStack_a4 & 0xffff;
  }
  Animal_Routine_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
  Scene_Routine_080035C0(param_1,(int)sStack_c4,(int)sStack_c2,1);
  puVar6 = (undefined4 *)(param_1 + 0x6AC0);
  _call_via_r3(&iStack_88,(int *)*puVar6,
                  *(undefined2 *)(*piStack_38 + (uint)*(ushort *)(puVar6 + 3) * 4),
                  *(undefined4 *)(*(int *)*puVar6 + 0x10));
  gba_memcpy(&iStack_88,&iStack_88,0x20);
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
  iVar8 = param_1 + 0x6CB0;
  uStack_be = HW_Routine_08007D4C(iVar8,*(undefined4 *)(iVar8 + 4));
  uStack_c0 = HW_Routine_080074C0(param_1 + 0x6CB8,*(undefined4 *)(param_1 + 0x6CB8 + 4));
  uStack_ac = 1;
  if ((int)((uint)*(byte *)(param_1 + 0x6AD4) * 0x40000000) < 0) {
    piVar2 = (int *)HW_GetSpriteAttr0Offset(param_1);
    iVar11 = iStack_a0;
    iVar8 = HW_Routine_08007D4C(iVar8,*(undefined4 *)(iVar8 + 4));
    uVar4 = 0;
    if (iStack_a0 != 0) {
      uVar4 = uStack_9c & 0xffff;
    }
    piStack_28 = piVar2;
    HW_Routine_08008F0C(&iStack_88,iVar11,iVar8 * 0x20 + 0x06010000,uVar4);
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
        piVar2 = (int *)runtime_malloc_aligned(iVar8);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)VTable_Routine_080D3BC0(iVar8);
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
        cpp_operator_delete();
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
  uVar1 = HW_GetSpriteAttr2Offset(param_1);
  uVar4 = 0;
  if (iStack_a8 != 0) {
    uVar4 = uStack_a4 & 0xffff;
  }
  Animal_Routine_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
  Scene_Routine_080035C0(param_1,(int)sStack_c4,(int)sStack_c2,0);
  if (*(char *)(param_1 + 0x6C6C) != '\0') {
    puVar6 = (undefined4 *)(param_1 + 0x6B40);
    _call_via_r3(&iStack_88,(int *)*puVar6,
                    *(undefined2 *)
                     (*(int *)(param_1 + 0x6B44) + (uint)*(ushort *)(puVar6 + 3) * 4),
                    *(undefined4 *)(*(int *)*puVar6 + 0x10));
    gba_memcpy(&iStack_88,&iStack_88,0x20);
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
    iVar8 = param_1 + 0x6CC0;
    uStack_be = HW_Routine_08007D4C(iVar8,*(undefined4 *)(iVar8 + 4));
    uStack_c0 = HW_Routine_080074C0(param_1 + 0x6CC8,*(undefined4 *)(param_1 + 0x6CC8 + 4));
    uStack_ac = 1;
    if ((int)((uint)*(byte *)(param_1 + 0x6B54) * 0x40000000) < 0) {
      piVar2 = (int *)HW_GetSpriteAttr0Offset(param_1);
      iVar11 = iStack_a0;
      iVar8 = HW_Routine_08007D4C(iVar8,*(undefined4 *)(iVar8 + 4));
      uVar4 = 0;
      if (iStack_a0 != 0) {
        uVar4 = uStack_9c & 0xffff;
      }
      piStack_28 = piVar2;
      HW_Routine_08008F0C(&iStack_88,iVar11,iVar8 * 0x20 + 0x06010000,uVar4);
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
          piVar2 = (int *)runtime_malloc_aligned(iVar8);
          if (piVar2 == (int *)0x0) {
            piVar2 = (int *)VTable_Routine_080D3BC0(iVar8);
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
          cpp_operator_delete();
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
    uVar1 = HW_GetSpriteAttr2Offset(param_1);
    uVar4 = 0;
    if (iStack_a8 != 0) {
      uVar4 = uStack_a4 & 0xffff;
    }
    Animal_Routine_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
    if (sStack_c2 == 0x94) {
      Scene_Routine_080035C0(param_1,(int)sStack_c4,0x94,0);
    }
    sStack_c4 = *(short *)(param_1 + 0x6B60 + 0x1a);
    sStack_c2 = *(short *)(param_1 + 0x6B60 + 0x1e);
    uVar1 = HW_GetSpriteAttr2Offset(param_1);
    uVar4 = 0;
    if (iStack_a8 != 0) {
      uVar4 = uStack_a4 & 0xffff;
    }
    Animal_Routine_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
    if (sStack_c2 == 0x94) {
      Scene_Routine_080035C0(param_1,(int)sStack_c4,0x94,0);
    }
  }
  puVar6 = (undefined4 *)(param_1 + 0x6AE0);
  _call_via_r3(&iStack_88,(int *)*puVar6,
                  *(undefined2 *)(*piStack_34 + (uint)*(ushort *)(puVar6 + 3) * 4),
                  *(undefined4 *)(*(int *)*puVar6 + 0x10));
  gba_memcpy(&iStack_88,&iStack_88,0x20);
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  iStack_a0 = iStack_80;
  uStack_9c = uStack_7c;
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  uStack_90 = uStack_70;
  uStack_8c = uStack_6c;
  sStack_c4 = *(short *)((int)puVar6 + 0x1a) - *(short *)(param_1 + 0x6D30);
  sStack_c2 = *(short *)((int)puVar6 + 0x1e);
  uStack_bc = 0;
  iVar8 = param_1 + 0x6C88;
  uStack_be = HW_Routine_08007D4C(iVar8,*(undefined4 *)(iVar8 + 4));
  uStack_c0 = HW_Routine_080074C0(param_1 + 0x6C90,*(undefined4 *)(param_1 + 0x6C90 + 4));
  uStack_ac = 1;
  if ((int)((uint)*(byte *)(param_1 + 0x6AF4) * 0x40000000) < 0) {
    piVar2 = (int *)HW_GetSpriteAttr0Offset(param_1);
    iVar11 = iStack_a0;
    iVar8 = HW_Routine_08007D4C(iVar8,*(undefined4 *)(iVar8 + 4));
    uVar4 = 0;
    if (iStack_a0 != 0) {
      uVar4 = uStack_9c & 0xffff;
    }
    piStack_28 = piVar2;
    HW_Routine_08008F0C(&iStack_88,iVar11,iVar8 * 0x20 + 0x06010000,uVar4);
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
        piVar2 = (int *)runtime_malloc_aligned(iVar8);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)VTable_Routine_080D3BC0(iVar8);
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
        cpp_operator_delete();
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
  uVar1 = HW_GetSpriteAttr2Offset(param_1);
  uVar4 = 0;
  if (iStack_a8 != 0) {
    uVar4 = uStack_a4 & 0xffff;
  }
  Animal_Routine_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
  Scene_Routine_080035C0(param_1,(int)sStack_c4,(int)sStack_c2,2);
  _call_via_r3(&iStack_88,*(int **)(param_1 + 0x6b00),
                  *(undefined2 *)(*piStack_30 + (uint)*(ushort *)(param_1 + 0x6b0c) * 4),
                  *(undefined4 *)(**(int **)(param_1 + 0x6b00) + 0x10));
  gba_memcpy(&iStack_88,&iStack_88,0x20);
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
  iVar8 = param_1 + 0x6C98;
  uStack_be = HW_Routine_08007D4C(iVar8,*(undefined4 *)(iVar8 + 4));
  uStack_c0 = HW_Routine_080074C0(param_1 + 0x6CA0,*(undefined4 *)(param_1 + 0x6CA0 + 4));
  uStack_ac = 1;
  if ((int)((uint)*(byte *)(param_1 + 0x6B14) * 0x40000000) < 0) {
    piVar2 = (int *)HW_GetSpriteAttr0Offset(param_1);
    iVar11 = iStack_a0;
    iVar8 = HW_Routine_08007D4C(iVar8,*(undefined4 *)(iVar8 + 4));
    uVar4 = 0;
    if (iStack_a0 != 0) {
      uVar4 = uStack_9c & 0xffff;
    }
    piStack_28 = piVar2;
    HW_Routine_08008F0C(&iStack_88,iVar11,iVar8 * 0x20 + 0x06010000,uVar4);
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
        piVar2 = (int *)runtime_malloc_aligned(iVar8);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)VTable_Routine_080D3BC0(iVar8);
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
        cpp_operator_delete();
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
  uVar1 = HW_GetSpriteAttr2Offset(param_1);
  uVar4 = 0;
  if (iStack_a8 != 0) {
    uVar4 = uStack_a4 & 0xffff;
  }
  Animal_Routine_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
  Scene_Routine_080035C0(param_1,(int)sStack_c4,(int)sStack_c2,2);
  puVar6 = (undefined4 *)(param_1 + 0x6B20);
  _call_via_r3(&iStack_88,(int *)*puVar6,
                  *(undefined2 *)(*piStack_2c + (uint)*(ushort *)(puVar6 + 3) * 4),
                  *(undefined4 *)(*(int *)*puVar6 + 0x10));
  gba_memcpy(&iStack_88,&iStack_88,0x20);
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
  iVar8 = param_1 + 0x6CA8;
  uStack_be = HW_Routine_08007D4C(iVar8,*(undefined4 *)(iVar8 + 4));
  uStack_c0 = HW_Routine_080074C0(param_1 + 0x6CC8,*(undefined4 *)(param_1 + 0x6CC8 + 4));
  uStack_ac = 1;
  if ((int)((uint)*(byte *)(param_1 + 0x6B34) * 0x40000000) < 0) {
    piVar2 = (int *)HW_GetSpriteAttr0Offset(param_1);
    iVar11 = iStack_a0;
    iVar8 = HW_Routine_08007D4C(iVar8,*(undefined4 *)(iVar8 + 4));
    uVar4 = 0;
    if (iStack_a0 != 0) {
      uVar4 = uStack_9c & 0xffff;
    }
    piStack_28 = piVar2;
    HW_Routine_08008F0C(&iStack_88,iVar11,iVar8 * 0x20 + 0x06010000,uVar4);
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
        piVar2 = (int *)runtime_malloc_aligned(iVar8);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)VTable_Routine_080D3BC0(iVar8);
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
        cpp_operator_delete();
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
  uVar1 = HW_GetSpriteAttr2Offset(param_1);
  uVar4 = 0;
  if (iStack_a8 != 0) {
    uVar4 = uStack_a4 & 0xffff;
  }
  Animal_Routine_0805E99C(uVar1,iStack_a8,uVar4,&sStack_c4);
  Scene_Routine_080035C0(param_1,(int)sStack_c4,(int)sStack_c2,2);
  return in_lr;
}

// =============================================================================
// Function: Scene_Routine_080035C0 @ 0x080035C0
// =============================================================================
undefined4 Scene_Routine_080035C0(int param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  int iStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  int iStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_74 = 0;
  uStack_72 = 0;
  uStack_70 = 0;
  uStack_6e = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_63 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  iStack_58 = 0;
  uStack_54 = uStack_54 & 0xffff0000;
  uStack_50 = 0;
  uStack_4c = uStack_4c & 0xffff0000;
  uStack_48 = 0;
  uStack_44 = uStack_44 & 0xffff0000;
  uStack_40 = 0;
  uStack_3c = uStack_3c & 0xffff0000;
  if (param_4 == 1) {
    Animal_Routine_0805E860(param_1 + 0x6b80,0x91B);
    iVar1 = 0x6CD8;
  }
  else if (param_4 < 2) {
    if (param_4 != 0) goto LAB_08003666;
    Animal_Routine_0805E860(param_1 + 0x6b80,0x91A);
    iVar1 = 0x6CD0;
  }
  else {
    if (param_4 != 2) goto LAB_08003666;
    Animal_Routine_0805E860(param_1 + 0x6b80,0x91C);
    iVar1 = 0x6CE0;
  }
  uStack_6e = HW_Routine_08007D4C(param_1 + iVar1,*(undefined4 *)(param_1 + iVar1 + 4));
LAB_08003666:
  _call_via_r3(&iStack_38,*(int **)(param_1 + 0x6b80),
                  *(undefined2 *)
                   (*(int *)(param_1 + 0x6B84) + (uint)*(ushort *)(param_1 + 0x6b8c) * 4),
                  *(undefined4 *)(**(int **)(param_1 + 0x6b80) + 0x10));
  gba_memcpy(&iStack_38,&iStack_38,0x20);
  iStack_58 = iStack_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  uStack_48 = uStack_28;
  uStack_44 = uStack_24;
  uStack_40 = uStack_20;
  uStack_3c = uStack_1c;
  uStack_6c = 0;
  uStack_74 = param_2;
  uStack_72 = param_3;
  uStack_70 = HW_Routine_080074C0(param_1 + 0x6CE8,*(undefined4 *)(param_1 + 0x6CE8 + 4));
  uStack_5c = 1;
  uVar2 = HW_GetSpriteAttr2Offset(param_1);
  uVar3 = 0;
  if (iStack_58 != 0) {
    uVar3 = uStack_54 & 0xffff;
  }
  Animal_Routine_0805E99C(uVar2,iStack_58,uVar3,&uStack_74);
  return in_lr;
}

// =============================================================================
// Function: Scene_Routine_080036F8 @ 0x080036F8
// =============================================================================
undefined8 Scene_Routine_080036F8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *param_1 = gRomData_080E5A18;
  Dispatcher_Routine_080005D4(0x6D34);
  uVar1 = Scene_Routine_08000914();
  param_1[1] = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: Scene_Routine_0800371C @ 0x0800371C
// =============================================================================
undefined4 Scene_Routine_0800371C(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  *param_1 = gRomData_080E5A18;
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    _call_via_r2(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 4) + 8));
  }
  SramProxy_VerifyBufferParity(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: Scene_Routine_0800374C @ 0x0800374C
// =============================================================================
undefined8 Scene_Routine_0800374C(undefined4 *param_1,int param_2)

{
  undefined4 in_lr;
  undefined4 auStack_14 [3];
  
  Scene_Routine_08000D64(auStack_14,*(undefined4 *)(param_2 + 4));
  *param_1 = auStack_14[0];
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: Scene_Routine_08003B40 @ 0x08003B40
// =============================================================================
undefined4 Scene_Routine_08003B40(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  uint auStack_1c [3];
  undefined1 auStack_10 [4];
  
  iVar1 = HW_GetSpriteAttr1Offset();
  *(undefined2 *)(iVar1 + 0x50) = 0x3f;
  uVar2 = HW_GetSpriteAttr1Offset(param_1);
  auStack_1c[0] = 0;
  auStack_1c[1] = 0;
  auStack_1c[2] = gRomData_080E5B80;
  Farm_Routine_08009300(auStack_10,uVar2);
  Farm_Routine_0800934C(auStack_10,0x889,1,1);
  iVar1 = HW_GetPaletteBankOffset(param_1);
  _call_via_r2(iVar1,auStack_1c,*(undefined4 *)(*(int *)(iVar1 + 8) + 0x10));
  while ((int)(-auStack_1c[0] | auStack_1c[0]) < 0) {
    HW_Routine_080087C8(param_1);
  }
  Farm_Routine_080094B8(auStack_1c,2);
  return in_lr;
}

// =============================================================================
// Function: Scene_Routine_08003BB4 @ 0x08003BB4
// =============================================================================
undefined4 Scene_Routine_08003BB4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  uint auStack_1c [3];
  undefined1 auStack_10 [4];
  
  iVar1 = HW_GetSpriteAttr1Offset();
  *(undefined2 *)(iVar1 + 0x50) = 0x3f;
  uVar2 = HW_GetSpriteAttr1Offset(param_1);
  auStack_1c[0] = 0;
  auStack_1c[1] = 0;
  auStack_1c[2] = gRomData_080E5B80;
  Farm_Routine_08009300(auStack_10,uVar2);
  Farm_Routine_08009378(auStack_10,0x889,1,1);
  iVar1 = HW_GetPaletteBankOffset(param_1);
  _call_via_r2(iVar1,auStack_1c,*(undefined4 *)(*(int *)(iVar1 + 8) + 0x10));
  while ((int)(-auStack_1c[0] | auStack_1c[0]) < 0) {
    HW_Routine_080087C8(param_1);
  }
  Farm_Routine_080094B8(auStack_1c,2);
  return in_lr;
}

// =============================================================================
// Function: Scene_Routine_08003C28 @ 0x08003C28
// =============================================================================
undefined4 Scene_Routine_08003C28(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  uVar1 = HW_Routine_080088DC();
  uVar2 = HW_GetSpriteAttr2Offset(param_1);
  uVar3 = HW_GetSpriteAttr1Offset(param_1);
  uVar4 = HW_GetPaletteBankOffset(param_1);
  uVar5 = HW_Routine_0800894C(param_1);
  Animal_Routine_08050D3C(param_1 + 0x10,uVar1,uVar2,uVar3,uVar4,uVar5,param_1 + 0x14);
  return in_lr;
}

// =============================================================================
// Function: Scene_Routine_08003C80 @ 0x08003C80
// =============================================================================
undefined4 Scene_Routine_08003C80(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  short sVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uStack_4;
  undefined4 *puVar15;
  undefined4 *puVar16;
  
  iVar13 = 0x0600E800;
  iVar2 = 0xFFFFD2D8;
  puVar14 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFD2D8);
  puVar15 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFD2D8);
  puVar16 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFD2D8);
  HW_Routine_08008EB8(0,0x06007FE0,0x20);
  HW_Routine_08008EB8(0xffffffff,iVar13,0x800);
  sVar9 = 0;
  uVar8 = 0;
  iVar1 = 0x2D08 + iVar2;
  *(undefined1 **)(&stack0xffffffe0 + 0x2D24 + iVar2) = &stack0xffffffe8 + iVar2;
  *(undefined1 **)(&stack0xffffffe0 + 0x2D18 + iVar2) =
       &stack0xffffffe0 + 0x2D0C + iVar2;
  *(undefined1 **)(&stack0xffffffe0 + 0x2D1C + iVar2) =
       &stack0xffffffe0 + 0x2D10 + iVar2;
  *(undefined1 **)(&stack0xffffffe0 + 0x2D20 + iVar2) =
       &stack0xffffffe0 + 0x2D14 + iVar2;
  do {
    uVar6 = 0;
    iVar3 = uVar8 * 0x40;
    uVar8 = uVar8 + 1;
    psVar4 = (short *)(iVar3 + iVar13 + 0x40);
    do {
      *psVar4 = sVar9;
      sVar9 = sVar9 + 1;
      psVar4 = psVar4 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x1e);
  } while (uVar8 < 0xc);
  *(undefined2 *)(&stack0xffffffe0 + 0x2D08 + iVar2) = 0x1e;
  *(undefined2 *)(&stack0xffffffe2 + iVar1) = 0xc;
  ScriptEngine_Routine_0804E7A0(*(undefined4 *)(&stack0xffffffe0 + 0x2D08 + iVar2),
                *(undefined4 *)(&stack0xffffffe0 + 0x2D24 + iVar2),0);
  uVar8 = 0;
  uVar12 = *(undefined4 *)(&stack0xffffffe0 + 0x2D24 + iVar2);
  iVar13 = 0;
  iVar1 = 0x2D0C + iVar2;
  do {
    puVar10 = (undefined4 *)(gRomData_080E8704 + iVar13);
    iVar11 = uVar8 * 0x10;
    uVar7 = *puVar10;
    *(undefined2 *)(&stack0xffffffe0 + iVar1) = 0x1e;
    *(undefined2 *)(*(int *)(&stack0xffffffe0 + 0x2D18 + iVar2) + 2) = 0xc;
    uVar5 = *(undefined4 *)(&stack0xffffffe0 + iVar1);
    *puVar14 = uVar7;
    ScriptEngine_Routine_0804E8F0(uVar5,uVar12,0x10,iVar11);
    uVar7 = puVar10[1];
    iVar3 = 0x2D10 + iVar2;
    *(undefined2 *)(&stack0xffffffe0 + iVar3) = 0x1e;
    *(undefined2 *)(*(int *)(&stack0xffffffe0 + 0x2D1C + iVar2) + 2) = 0xc;
    uVar5 = *(undefined4 *)(&stack0xffffffe0 + iVar3);
    *puVar15 = uVar7;
    ScriptEngine_Routine_0804E8F0(uVar5,uVar12,0x80,iVar11);
    uVar7 = puVar10[2];
    iVar3 = 0x2D14 + iVar2;
    *(undefined2 *)(&stack0xffffffe0 + iVar3) = 0x1e;
    *(undefined2 *)(*(int *)(&stack0xffffffe0 + 0x2D20 + iVar2) + 2) = 0xc;
    uVar5 = *(undefined4 *)(&stack0xffffffe0 + iVar3);
    *puVar16 = uVar7;
    ScriptEngine_Routine_0804E8F0(uVar5,uVar12,0xc0,iVar11);
    iVar13 = iVar13 + 0xc;
    uVar8 = uVar8 + 1;
  } while (uVar8 < 6);
  HW_Routine_08008E64(*(undefined4 *)(&stack0xffffffe0 + 0x2D24 + iVar2),0x6000000,0x2d00);
  return *(undefined4 *)((int)&uStack_4 + 0x2D28 + iVar2);
}

// =============================================================================
// Function: Scene_Routine_08003DF0 @ 0x08003DF0
// =============================================================================
undefined4 Scene_Routine_08003DF0(int param_1,uint param_2,uint param_3,undefined2 param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  uint uStack_14;
  
  uVar4 = (param_3 & 0xFFFFFF00 & 0x1ffffff) >> 0x10;
  uVar3 = uVar4 + 0x80;
  if (*(char *)(param_1 + 0x84 + param_2) != '\0') {
    uVar3 = uVar4 + 0xc0;
  }
  uStack_14 = 0xFE00FFFF &
              (param_3 & 0xFFFFFF00 | (param_3 & 0xff) + 8 + (param_2 * 2 + 1) * 8 & 0xff) |
              (uVar3 & 0x1FF) << 0x10;
  if ((param_2 == 1) && (*(int *)(param_1 + 0x80) != 1)) {
    uStack_14 = 0xFFFFFCFF & uStack_14 | 0x200;
  }
  iVar1 = HW_GetSpriteAttr2Offset(param_1);
  puVar2 = (uint *)(iVar1 + (param_2 & 0x7f) * 8 + 4);
  *puVar2 = uStack_14;
  *(undefined2 *)(puVar2 + 1) = param_4;
  return in_lr;
}

// =============================================================================
// Function: Scene_Routine_08003E88 @ 0x08003E88
// =============================================================================
undefined4 Scene_Routine_08003E88(undefined4 param_1,int param_2,uint param_3,undefined2 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (param_2 == 1) {
    param_2 = 0;
  }
  uVar3 = ((param_3 & 0xFFFFFF00 & 0x1ffffff) >> 0x10) + 0x10 & 0x1FF;
  uVar1 = 0xFE00FFFF &
          (param_3 & 0xFFFFFF00 | (param_3 & 0xff) + 8 + (param_2 * 2 + 1) * 8 & 0xff);
  iVar2 = HW_GetSpriteAttr2Offset(param_1);
  *(uint *)(iVar2 + 0x34) = uVar1 | uVar3 << 0x10;
  *(undefined2 *)(iVar2 + 0x38) = param_4;
  return in_lr;
}

// =============================================================================
// Function: Scene_Routine_08003F9C @ 0x08003F9C
// =============================================================================
undefined8 Scene_Routine_08003F9C(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  ushort auStack_38 [2];
  undefined4 uStack_34;
  ushort *puStack_30;
  undefined4 *puStack_2c;
  int iStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0x85);
    iVar5 = param_1 + 0x90;
    uStack_34 = SramProxy_GetSaveSlotOffset(iVar5,uVar2);
    iVar6 = 3;
    iStack_28 = param_1 + 0x10;
    puStack_2c = (undefined4 *)(param_1 + 0x8c);
    iStack_24 = param_1 + 0x18;
    puStack_30 = auStack_38;
    do {
      uVar1 = Interrupt_WaitForVBlank(0x1000);
      *puStack_30 = uVar1 & 0x1000;
      iVar3 = Farmer_Routine_080115B0(*(undefined4 *)(param_1 + 8),iVar5,uStack_34);
      if (iVar3 == 0) {
        Scene_Routine_08003788(param_1,param_1 + uVar2 * 0x80 + 0x98,*(undefined4 *)(param_1 + 8));
        Animal_Routine_08050DC8(iStack_28,uVar2 * 0x80 + param_1 + 0x98,0,0);
        *puStack_2c = 3;
        HW_Routine_08008B6C(iStack_24,0xc5);
        SramProxy_ReadSaveSlot(iVar5,uVar2);
        SramProxy_FlushSlotBuffer(iVar5,uVar2);
        if (auStack_38[0] != 0) {
          Interrupt_EnableHBlank();
        }
        uVar4 = 1;
        goto LAB_0800408c;
      }
      if (auStack_38[0] != 0) {
        Interrupt_EnableHBlank();
      }
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  Animal_Routine_08050DC8(param_1 + 0x10,gRomData_080E88C8,0,0);
  *(undefined4 *)(param_1 + 0x8c) = 3;
  HW_Routine_08008B6C(param_1 + 0x18,199);
  uVar4 = 0;
LAB_0800408c:
  return CONCAT44(in_lr,uVar4);
}

