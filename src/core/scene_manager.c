// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: SCENE_MANAGER (19 functions)
// Description: Scene management, title sequence, intro cutscenes and new game initialization
// =============================================================================

#include "../../include/global.h"

// =============================================================================
// Function: Scene_Destructor @ 0x0800080C
// =============================================================================
void Scene_Destructor(undefined4 *arg_1,uint arg_2)

{
  
  *arg_1 = gRomData_080E59DC;
  if ((arg_2 & 1) != 0) {
    CppRuntime_FreeMemory(arg_1);
  }
  return;
}

// =============================================================================
// Function: Scene_Routine_0800082C @ 0x0800082C
// =============================================================================
void Scene_Routine_0800082C(int *arg_1)

{
  int *p_int1;
  int *p_int2;
  int *p_int3;
  int *piStack_2c;
  int *piStack_28;
  int **ppiStack_24;
  int *piStack_20;
  int **ppiStack_1c;
  int *piStack_18;
  
  if (*arg_1 != 0) {
    do {
      _call_via_r2(&piStack_2c,(int *)*arg_1,*(undefined4 *)(*(int *)*arg_1 + 0xc));
      p_int1 = piStack_2c;
      piStack_20 = piStack_2c;
      piStack_2c = (int *)0x0;
      p_int2 = (int *)*arg_1;
      ppiStack_24 = &piStack_2c;
      if ((p_int2 != (int *)0x0) && (p_int2 != (int *)0x0)) {
        _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
      }
      *arg_1 = 0;
      if (p_int1 == (int *)0x0) break;
      _call_via_r2(&piStack_28,p_int1,*(undefined4 *)(*p_int1 + 0xc));
      p_int2 = piStack_28;
      piStack_18 = piStack_28;
      piStack_28 = (int *)0x0;
      piStack_2c = (int *)0x0;
      p_int3 = (int *)*arg_1;
      ppiStack_1c = &piStack_28;
      if ((p_int2 != p_int3) && (p_int3 != (int *)0x0)) {
        _call_via_r2(p_int3,3,*(undefined4 *)(*p_int3 + 8));
      }
      *arg_1 = (int)p_int2;
      if (piStack_2c != (int *)0x0) {
        _call_via_r2(piStack_2c,3,*(undefined4 *)(*piStack_2c + 8));
      }
      if (p_int1 != (int *)0x0) {
        _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
      }
    } while (*arg_1 != 0);
  }
  arg_1 = (int *)*arg_1;
  if (arg_1 != (int *)0x0) {
    _call_via_r2(arg_1,3,*(undefined4 *)(*arg_1 + 8));
  }
  return;
}

// =============================================================================
// Function: Scene_Routine_08000D64 @ 0x08000D64
// =============================================================================
u32 Scene_Routine_08000D64(undefined4 *arg_1,int arg_2)

{
  int i_val1;
  undefined4 *p_uint2;
  int *p_int3;
  
  p_int3 = (int *)(arg_2 + 0x6D28);
LAB_08000d72:
  i_val1 = *p_int3;
  if (i_val1 != 0) goto code_r0x08000d78;
  Scene_Routine_08000E1C(arg_2);
  i_val1 = 1;
  goto LAB_08000d9a;
code_r0x08000d78:
  if (i_val1 == 1) {
    i_val1 = Scene_Routine_08000FF8(arg_2);
    if (i_val1 == 1) {
      if (*(char *)(arg_2 + 0x6C6E) == '\0') {
        p_uint2 = (undefined4 *)CppRuntime_OperatorNewArray(4);
        *p_uint2 = gRomData_080E59FC;
        *arg_1 = p_uint2;
      }
      else {
        p_uint2 = (undefined4 *)CppRuntime_OperatorNewArray(4);
        *p_uint2 = gRomData_080E59EC;
        *arg_1 = p_uint2;
      }
      return arg_1;
    }
    i_val1 = 0;
LAB_08000d9a:
    *p_int3 = i_val1;
  }
  goto LAB_08000d72;
}

// =============================================================================
// Function: Scene_Routine_08000E1C @ 0x08000E1C
// =============================================================================
void Scene_Routine_08000E1C(int arg_1)

{
  short s_val1;
  bool b_flag2;
  int i_val3;
  uint *p_uint4;
  undefined4 u_val5;
  uint u_val6;
  int *p_int7;
  short *psVar8;
  
  HW_Routine_08008724();
  Scene_Routine_08000F5C(arg_1);
  i_val3 = HW_GetSpriteAttr1Offset(arg_1);
  *(undefined2 *)(i_val3 + 0x50) = 0x3f;
  p_uint4 = (uint *)CppRuntime_OperatorNewArray(0x10);
  u_val5 = HW_GetSpriteAttr1Offset(arg_1);
  b_flag2 = false;
  *p_uint4 = 0;
  p_uint4[1] = 0;
  p_uint4[2] = gRomData_080E5B80;
  Fade_Init(p_uint4 + 3,u_val5);
  Fade_StartFadeOut(p_uint4 + 3,0x889,1,0);
  i_val3 = HW_GetPaletteBankOffset(arg_1);
  _call_via_r2(i_val3,p_uint4,*(undefined4 *)(*(int *)(i_val3 + 8) + 0x10));
  *(undefined2 *)(arg_1 + 0x6D32) = 0;
  HW_Routine_08008B6C(arg_1 + 8,0);
  psVar8 = (short *)(arg_1 + 0x6D32);
  do {
    HW_Routine_080087C8(arg_1);
    HW_Routine_080088B8(arg_1);
    s_val1 = *psVar8;
    if (s_val1 == 1) {
      p_int7 = (int *)(arg_1 + 0x6D2C);
      *p_int7 = *p_int7 + -1;
      u_val6 = HW_Routine_080088CC(arg_1);
      if ((u_val6 & 8) != 0) {
        *p_int7 = 0;
      }
      if (*p_int7 < 1) {
        Fade_StartFadeIn(p_uint4 + 3,0x889,1,0);
        i_val3 = HW_GetPaletteBankOffset(arg_1);
        _call_via_r2(i_val3,p_uint4,*(undefined4 *)(*(int *)(i_val3 + 8) + 0x10));
        *psVar8 = 2;
      }
    }
    else if (s_val1 < 2) {
      if ((s_val1 == 0) && (-1 < (int)(-*p_uint4 | *p_uint4))) {
        *(undefined4 *)(arg_1 + 0x6D2C) = 0x78;
        *psVar8 = 1;
      }
    }
    else if ((s_val1 == 2) && (-1 < (int)(-*p_uint4 | *p_uint4))) {
      b_flag2 = true;
    }
  } while (!b_flag2);
  if (p_uint4 != (uint *)0x0) {
    _call_via_r2(p_uint4,3,*(undefined4 *)(p_uint4[2] + 0xc));
  }
  return;
}

// =============================================================================
// Function: Scene_Routine_08000F5C @ 0x08000F5C
// =============================================================================
void Scene_Routine_08000F5C(undefined4 arg_1)

{
  undefined4 u_val1;
  undefined2 *p_uint2;
  int i_val3;
  
  HW_Routine_08008EB8(0,0x06007FE0,0x20);
  u_val1 = 0x0600F800;
  HW_Routine_08008EB8(0xffffffff,0x0600F800,0x800);
  Unpack_ArcanoMarvelous_0x70(gRomGfx_0874E648,0x6000000);
  GBA_DMA3_FastCopy(gRomGfx_0874EB40,0x5000000,0x20);
  Unpack_ArcanoMarvelous_0x70(gRomGfx_0874EB60,u_val1);
  p_uint2 = (undefined2 *)HW_GetSpriteAttr1Offset(arg_1);
  *p_uint2 = 0x840;
  i_val3 = HW_GetSpriteAttr1Offset(arg_1);
  *(short *)(i_val3 + 0xe) = (short)0x1F43;
  i_val3 = HW_GetSpriteAttr1Offset(arg_1);
  *(undefined2 *)(i_val3 + 0x1c) = 0;
  i_val3 = HW_GetSpriteAttr1Offset(arg_1);
  *(undefined2 *)(i_val3 + 0x1e) = 0;
  return;
}

// =============================================================================
// Function: Scene_Routine_08000FF8 @ 0x08000FF8
// =============================================================================
u32 Scene_Routine_08000FF8(int arg_1)

{
  ushort u_val1;
  bool b_flag2;
  undefined1 u_val3;
  int i_val4;
  uint *p_uint5;
  undefined4 u_val6;
  uint u_val7;
  int i_val8;
  byte b_flag9;
  int i_val10;
  short *psVar11;
  undefined4 *p_uint12;
  ushort *p_uint13;
  int *p_int14;
  undefined2 *p_uint15;
  uint u_val16;
  uint u_val17;
  int i_val18;
  undefined1 stack_buf_38 [8];
  int stack_val_30;
  int stack_val_2c;
  undefined4 stack_val_28;
  int stack_val_24;
  
  HW_Routine_08008724();
  Scene_Routine_080019D8(arg_1);
  i_val4 = HW_GetSpriteAttr1Offset(arg_1);
  *(undefined2 *)(i_val4 + 0x50) = 0x3f;
  p_uint5 = (uint *)CppRuntime_OperatorNewArray(0x10);
  u_val6 = HW_GetSpriteAttr1Offset(arg_1);
  u_val16 = 0;
  *p_uint5 = 0;
  p_uint5[1] = 0;
  p_uint5[2] = gRomData_080E5B80;
  Fade_Init(p_uint5 + 3,u_val6);
  Fade_StartFadeOut(p_uint5 + 3,0x889,1,0);
  i_val4 = HW_GetPaletteBankOffset(arg_1);
  _call_via_r2(i_val4,p_uint5,*(undefined4 *)(*(int *)(i_val4 + 8) + 0x10));
  HW_Routine_08008B6C(arg_1 + 8,0x23);
  *(undefined2 *)(arg_1 + 0x6C64) = 0x400;
  i_val4 = 0x6C66;
  *(undefined2 *)(arg_1 + 0x6C66) = 0;
  i_val18 = 0x6C68;
  *(undefined2 *)(arg_1 + 0x6C68) = 0;
  *(undefined2 *)(arg_1 + i_val4 + 4) = 0x400;
  *(undefined2 *)(arg_1 + i_val18 + 0xca) = 3;
  *(undefined2 *)(arg_1 + 0x6D30) = 0xe0;
  *(undefined1 *)(arg_1 + 0x6C6D) = 0;
  *(undefined1 *)(arg_1 + i_val4 + 6) = 0;
  u_val17 = 0;
  i_val18 = 0;
  i_val4 = 0;
  stack_val_30 = 0;
  stack_val_2c = 0;
  stack_val_28 = 0;
  stack_val_24 = 0;
  do {
    math_rand();
    HW_Routine_080087C8(arg_1);
    HW_Routine_080088B8(arg_1);
    if (stack_val_30 == 0) {
      b_flag2 = false;
      u_val7 = HW_Routine_080088CC(arg_1);
      if ((((u_val7 & 1) != 0) || (u_val7 = HW_Routine_080088CC(arg_1), (u_val7 & 2) != 0)) ||
         (u_val7 = HW_Routine_080088CC(arg_1), (u_val7 & 8) != 0)) {
        b_flag2 = true;
      }
      if (b_flag2) {
        *(undefined2 *)(arg_1 + 0x6D32) = 0xb;
      }
    }
    u_val7 = (int)((*(ushort *)(arg_1 + 0x6D32) - 3) * 0x10000) >> 0x10;
    if (u_val7 < 0xe) {
      switch(*(uint *)(u_val7 * 4 + gInlineTable_08001150) & 0xfffffffe) {
      case 0x8001188:
        if (-1 < (int)(-*p_uint5 | *p_uint5)) {
          *(undefined2 *)(arg_1 + 0x6D32) = 4;
        }
        break;
      case 0x80011a4:
        p_uint13 = (ushort *)(arg_1 + 0x6D30);
        u_val1 = *p_uint13;
        *p_uint13 = (ushort)(u_val1 - 1);
        if ((int)((u_val1 - 1) * 0x10000) < 0) {
          *p_uint13 = 0;
        }
        p_int14 = (int *)(arg_1 + 0x6AB8);
        i_val8 = *p_int14 + 0xFFFF5000;
        *p_int14 = i_val8;
        if (i_val8 <= 0x006FFFFF) {
          *p_int14 = 0x006FFFFF + 1;
        }
        if ((*p_uint13 == 0) && (*p_int14 == 0x700000)) {
          Animal_Routine_0805E860(arg_1 + 0x6AA0,0x194);
          *(undefined4 *)(arg_1 + 0x6D2C) = 0x5a;
          *(undefined2 *)(arg_1 + 0x6D32) = 5;
        }
        break;
      case 0x8001220:
        i_val8 = *(int *)(arg_1 + 0x6D2C) + -1;
        *(int *)(arg_1 + 0x6D2C) = i_val8;
        if (i_val8 == 0x1e) {
          Animal_Routine_0805E860(arg_1 + 0x6AA0,0x195);
        }
        else if (i_val8 == 0x3c) {
          Animal_Routine_0805E860(arg_1 + 0x6AA0,0x192);
        }
        if (*(int *)(arg_1 + 0x6D2C) < 1) {
          Animal_Routine_0805E860(arg_1 + 0x6AA0,0x1FD);
          HW_Routine_08008B6C(arg_1 + 0xc,0x67);
          *(undefined2 *)(arg_1 + 0x6D32) = 6;
        }
        break;
      case 0x8001290:
        if ((int)((uint)*(byte *)(arg_1 + 0x6AB4) * 0x20000000) < 0) {
          Animal_Routine_0805E860(arg_1 + 0x6AA0,0x195);
          i_val18 = 1;
          i_val4 = 1;
          *(undefined2 *)(arg_1 + 0x6D32) = 7;
        }
        break;
      case 0x80012c8:
        p_int14 = (int *)(arg_1 + 0x6AD8);
        i_val8 = *p_int14 + 0xFFFEC000;
        *p_int14 = i_val8;
        if (i_val8 < 0x800001) {
          *(undefined4 *)(arg_1 + 0x6D2C) = 0x3c;
          Animal_Routine_0805E860(arg_1 + 0x6AA0,0x1c2);
          u_val16 = 1;
          *p_int14 = 0x800000;
          *(undefined2 *)(arg_1 + 0x6D32) = 8;
        }
        break;
      case 0x8001314:
        i_val8 = *(int *)(arg_1 + 0x6D2C) + -1;
        *(int *)(arg_1 + 0x6D2C) = i_val8;
        if (i_val8 < 1) {
          *(undefined2 *)(arg_1 + 0x6D32) = 9;
        }
        break;
      case 0x8001338:
        p_int14 = (int *)(arg_1 + 0x6BBC);
        i_val8 = *p_int14;
        *p_int14 = i_val8 + 0x18000;
        if (-1 < i_val8 + 0x18000) {
          *p_int14 = 0;
          *(undefined1 *)(arg_1 + 0x6C6C) = 1;
          stack_val_2c = 1;
          u_val16 = 3;
          *(undefined2 *)(arg_1 + 0x6D32) = 10;
        }
        break;
      case 0x8001374:
        psVar11 = (short *)(arg_1 + 0x6C64);
        *psVar11 = *psVar11 + -0x10;
        *(short *)(arg_1 + 0x6C6A) = *(short *)(arg_1 + 0x6C6A) + -0x10;
        i_val8 = 0x6D32;
        if (*psVar11 == 0x100) goto LAB_08001412;
        break;
      case 0x80013ac:
        *(undefined2 *)(arg_1 + 0x6D30) = 0;
        *(undefined4 *)(arg_1 + 0x6AB8) = 0x700000;
        Animal_Routine_0805E860(arg_1 + 0x6AA0,0x192);
        Animal_Routine_0805E860(arg_1 + 0x6AC0,0x338);
        i_val8 = 0x6AD8;
        *(undefined4 *)(arg_1 + 0x6AD8) = 0x800000;
        i_val10 = 0x6C6C;
        stack_val_2c = 0;
        u_val16 = 0;
        i_val18 = 2;
        i_val4 = 2;
        *(undefined1 *)(arg_1 + 0x6C6C) = 9;
        *(undefined4 *)(arg_1 + i_val8 + 0xe4) = 0;
        i_val8 = 0x6C64;
        *(undefined2 *)(arg_1 + 0x6C64) = 0x100;
        *(undefined2 *)(arg_1 + i_val10 + -2) = 0x100;
        i_val8 = i_val8 + 0xce;
LAB_08001412:
        stack_val_30 = 1;
        *(undefined2 *)(arg_1 + i_val8) = 0xc;
        break;
      case 0x8001434:
        SramProxy_LoadGlobalSettings(stack_buf_38);
        i_val10 = SramProxy_VerifyChecksum(stack_buf_38);
        i_val8 = 0x6C6D;
        if (i_val10 == 0) {
          *(undefined1 *)(arg_1 + 0x6C6D) = 1;
          *(undefined1 *)(arg_1 + 0x6C6E) = 0;
          u_val6 = 0x500000;
          *(undefined4 *)(arg_1 + 0x6BF8) = 0x500000;
          Animal_Routine_0805E860(arg_1 + 0x6BE0,2);
          i_val8 = 0x6C58;
        }
        else {
          *(undefined1 *)(arg_1 + 0x6C6D) = 2;
          *(undefined1 *)(arg_1 + 0x6C6E) = 1;
          *(undefined4 *)(arg_1 + 0x6BF8) = 0x180000;
          u_val6 = 0x880000;
          *(undefined4 *)(arg_1 + 0x6C18) = 0x880000;
          Animal_Routine_0805E860(arg_1 + i_val8 + -0x6d,5);
          i_val8 = 0x6C58;
        }
        *(undefined4 *)(arg_1 + i_val8) = u_val6;
        *(undefined4 *)(arg_1 + 0x6D2C) = 0x924;
        *(undefined2 *)(arg_1 + 0x6D32) = 0xd;
        break;
      case 0x80014ec:
        if (*(char *)(arg_1 + 0x6C6D) == '\x02') {
          b_flag2 = false;
          u_val7 = HW_Routine_080088CC(arg_1);
          if (((u_val7 & 0x20) != 0) || (u_val7 = HW_Routine_080088CC(arg_1), (u_val7 & 0x10) != 0)) {
            b_flag2 = true;
          }
          if (b_flag2) {
            b_flag9 = *(byte *)(arg_1 + 0x6C6E) ^ 1;
            *(byte *)(arg_1 + 0x6C6E) = b_flag9;
            if (b_flag9 == 0) {
              Animal_Routine_0805E860(arg_1 + 0x6BE0,2);
              Animal_Routine_0805E860(arg_1 + 0x6c00,4);
              u_val6 = 0x180000;
              i_val8 = 0x6C58;
            }
            else {
              Animal_Routine_0805E860(arg_1 + 0x6BE0,1);
              Animal_Routine_0805E860(arg_1 + 0x6c00,5);
              u_val6 = 0x880000;
              i_val8 = 0x6C58;
            }
            *(undefined4 *)(arg_1 + i_val8) = u_val6;
            *(undefined4 *)(arg_1 + 0x6D2C) = 0x708;
            HW_Routine_08008B6C(arg_1 + 0xc,0xcb);
          }
        }
        b_flag2 = false;
        u_val7 = HW_Routine_080088CC(arg_1);
        if (((u_val7 & 1) != 0) || (u_val7 = HW_Routine_080088CC(arg_1), (u_val7 & 8) != 0)) {
          b_flag2 = true;
        }
        if (b_flag2) {
          if (*(char *)(arg_1 + 0x6C6E) == '\0') {
            Animal_Routine_0805E860(arg_1 + 0x6BE0,3);
          }
          else {
            Animal_Routine_0805E860(arg_1 + 0x6c00,6);
          }
          *(undefined4 *)(arg_1 + 0x6D2C) = 0x3c;
          HW_Routine_08008B6C(arg_1 + 0xc,0xc5);
          *(undefined2 *)(arg_1 + 0x6D32) = 0xe;
        }
        else {
          i_val10 = *(int *)(arg_1 + 0x6D2C) + -1;
          *(int *)(arg_1 + 0x6D2C) = i_val10;
          i_val8 = 0x6D32;
          if (i_val10 < 1) goto LAB_08001646;
        }
        break;
      case 0x8001630:
        i_val8 = *(int *)(arg_1 + 0x6D2C) + -1;
        *(int *)(arg_1 + 0x6D2C) = i_val8;
        if (i_val8 < 1) {
          stack_val_28 = 1;
          i_val8 = 0x6D32;
LAB_08001646:
          *(undefined2 *)(arg_1 + i_val8) = 0xf;
        }
        break;
      case 0x8001654:
        Fade_StartFadeIn(p_uint5 + 3,0x889,1,0);
        i_val8 = HW_GetPaletteBankOffset(arg_1);
        _call_via_r2(i_val8,p_uint5,*(undefined4 *)(*(int *)(i_val8 + 8) + 0x10));
        *(undefined2 *)(arg_1 + 0x6D32) = 0x10;
        break;
      case 0x8001684:
        if (-1 < (int)(-*p_uint5 | *p_uint5)) {
          stack_val_24 = 1;
        }
      }
    }
    if ((stack_val_2c != 0) && ((int)((uint)*(byte *)(arg_1 + 0x6AB4) * 0x20000000) < 0)) {
      Animal_Routine_0805E860(arg_1 + 0x6AA0,0x192);
      stack_val_2c = 0;
    }
    if (u_val16 == 2) {
      if ((int)((uint)*(byte *)(arg_1 + 0x6AD4) * 0x20000000) < 0) {
        HW_Routine_08008B88(arg_1 + 0xc,0xa9);
      }
    }
    else if (u_val16 < 3) {
      if (u_val16 == 1) {
        Animal_Routine_0805E860(arg_1 + 0x6AC0,0x370);
        HW_Routine_08008B6C(arg_1 + 0xc,0xa9);
        u_val16 = 2;
      }
    }
    else if ((u_val16 == 3) && ((int)((uint)*(byte *)(arg_1 + 0x6AD4) * 0x20000000) < 0)) {
      Animal_Routine_0805E860(arg_1 + 0x6AC0,0x338);
      u_val16 = 0;
    }
    if (i_val18 == 1) {
      i_val8 = *(int *)(arg_1 + 0x6B18);
      if (i_val8 < 0xbc0001) goto LAB_08001760;
      *(int *)(arg_1 + 0x6B18) = i_val8 + 0xFFFFA000;
    }
    else if (i_val18 == 2) {
LAB_08001760:
      Animal_Routine_0805E860(arg_1 + 0x6b00,0x2B6);
      *(undefined4 *)(arg_1 + 0x6B18) = 0xbc0000;
      i_val18 = 0;
    }
    if (i_val4 == 1) {
      i_val8 = *(int *)(arg_1 + 0x6B38);
      if (0x003FFFFF < i_val8) goto LAB_080017b0;
      *(int *)(arg_1 + 0x6B38) = i_val8 + 0x8000;
    }
    else if (i_val4 == 2) {
LAB_080017b0:
      Animal_Routine_0805E860(arg_1 + 0x6B20,0x928);
      *(undefined4 *)(arg_1 + 0x6B38) = 0x400000;
      i_val4 = 0;
    }
    i_val8 = 0x6B5C;
    u_val7 = (int)((*(byte *)(arg_1 + 0x6C6C) - 1) * 0x1000000) >> 0x18;
    if (8 < u_val7) goto case_08001952;
    switch(*(uint *)(u_val7 * 4 + gInlineTable_080017F8) & 0xfffffffe) {
    case 0x800181c:
      p_int14 = (int *)(arg_1 + 0x6B5C);
      i_val8 = *p_int14;
      *p_int14 = i_val8 + 0x10000;
      *(int *)(arg_1 + 0x6B7C) = i_val8 + 0x10000;
      *(int *)(arg_1 + 0x6B58) = *(int *)(arg_1 + 0x6B58) + 0xFFFF0000;
      *(int *)(arg_1 + 0x6B78) = *(int *)(arg_1 + 0x6B78) + 0x10000;
      if (*p_int14 <= 0x005FFFFF) break;
      u_val3 = 2;
      i_val8 = 0x6C6C;
      goto LAB_08001950;
    case 0x8001874:
      p_int14 = (int *)(arg_1 + 0x6B5C);
      i_val10 = *p_int14;
      *p_int14 = i_val10 + 0x10000;
      *(int *)(arg_1 + i_val8 + 0x20) = i_val10 + 0x10000;
      *(int *)(arg_1 + 0x6B58) = *(int *)(arg_1 + 0x6B58) + 0x10000;
      *(int *)(arg_1 + 0x6B78) = *(int *)(arg_1 + 0x6B78) + 0xFFFF0000;
      if (0x0093FFFF < *p_int14) {
        *(undefined1 *)(arg_1 + 0x6C6C) = 3;
        goto case_080018AE;
      }
      break;
    case 0x80018ae:
case_080018AE:
      *(undefined4 *)(arg_1 + 0x6B58) = 0x1c0000;
      *(undefined4 *)(arg_1 + 0x6B78) = 0xd40000;
      p_uint12 = (undefined4 *)(arg_1 + 0x6B7C);
      *(undefined4 *)(arg_1 + 0x6B5C) = 0x940000;
      *p_uint12 = 0x940000;
      u_val6 = 0x71C;
      if (*(char *)(arg_1 + 0x6C6C) == '\x03') {
        u_val17 = 0x1e;
      }
      else {
        Animal_Routine_0805E860(arg_1 + 0x6B40,0x71C);
        Animal_Routine_0805E860(arg_1 + 0x6B60,u_val6);
        u_val17 = 0;
      }
      *(undefined1 *)(arg_1 + 0x6C6C) = 4;
    case 0x8001922:
      u_val6 = 0x71C;
      u_val7 = u_val17 * 0x1000000 - 0x1000000;
      u_val17 = u_val7 >> 0x18;
      if ((int)u_val7 < 0) {
        Animal_Routine_0805E860(arg_1 + 0x6B40,0x71C);
        Animal_Routine_0805E860(arg_1 + 0x6B60,u_val6);
        u_val3 = 5;
        i_val8 = 0x6C6C;
LAB_08001950:
        *(undefined1 *)(arg_1 + i_val8) = u_val3;
      }
    }
case_08001952:
    i_val8 = HW_GetSpriteAttr1Offset(arg_1);
    p_uint15 = (undefined2 *)(arg_1 + 0x6D30);
    *(undefined2 *)(i_val8 + 0x10) = *p_uint15;
    i_val8 = HW_GetSpriteAttr1Offset(arg_1);
    *(undefined2 *)(i_val8 + 0x14) = *p_uint15;
    i_val8 = HW_GetSpriteAttr1Offset(arg_1);
    *(undefined2 *)(i_val8 + 0x18) = *p_uint15;
    i_val8 = HW_GetSpriteAttr1Offset(arg_1);
    *(undefined2 *)(i_val8 + 0x1c) = *p_uint15;
    Scene_Routine_080024E0(arg_1);
    if (stack_val_24 != 0) {
      if (p_uint5 != (uint *)0x0) {
        _call_via_r2(p_uint5,3,*(undefined4 *)(p_uint5[2] + 0xc));
      }
      return stack_val_28;
    }
  } while( true );
}

// =============================================================================
// Function: Scene_Routine_080019D8 @ 0x080019D8
// =============================================================================
u32 Scene_Routine_080019D8(int arg_1)

{
  int i_val1;
  int i_val2;
  undefined2 *p_uint3;
  undefined4 *p_uint4;
  int i_val5;
  int *p_int6;
  uint u_val7;
  undefined2 u_val8;
  int i_val9;
  int i_val10;
  undefined4 u_val11;
  int loop_i;
  undefined2 *p_uint13;
  undefined4 u_val14;
  short *psVar15;
  undefined4 *p_uint16;
  undefined2 *p_uint17;
  undefined4 stack_val_4;
  undefined2 *p_uint18;
  undefined2 *p_uint19;
  undefined2 *p_uint20;
  undefined2 *p_uint21;
  undefined2 *p_uint22;
  undefined2 *p_uint23;
  undefined2 *p_uint24;
  undefined2 *p_uint25;
  undefined2 *p_uint26;
  undefined2 *p_uint27;
  undefined2 *p_uint28;
  undefined2 *p_uint29;
  undefined4 *p_uint30;
  undefined4 *p_uint31;
  undefined4 *p_uint32;
  undefined4 *p_uint33;
  undefined4 *p_uint34;
  undefined4 *p_uint35;
  undefined4 *p_uint36;
  undefined4 *p_uint37;
  undefined4 *p_uint38;
  undefined4 *p_uint39;
  undefined4 *p_uint40;
  undefined4 *p_uint41;
  undefined4 *p_uint42;
  undefined4 *p_uint43;
  undefined4 *p_uint44;
  undefined4 *p_uint45;
  undefined1 *p_uint46;
  
  i_val1 = 0xFFFFEFC8;
  p_uint17 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint18 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint19 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint20 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint21 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint22 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint23 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint24 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint25 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint26 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint27 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint28 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint29 = (undefined2 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint30 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint31 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint32 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint33 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint34 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint35 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint36 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint37 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint38 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint39 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint40 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint41 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint42 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint43 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint44 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint45 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFEFC8);
  p_uint46 = &stack0xffffffe0 + 0xFFFFEFC8;
  HW_Routine_08008EB8(0,0x06007FE0,0x20);
  HW_Routine_08008EB8(0xffffffff,0x0600C000,0x1000);
  HW_Routine_08008EB8(0xffffffff,0x0600D000,0x1000);
  HW_Routine_08008EB8(0xffffffff,0x0600E000,0x1000);
  HW_Routine_08008EB8(0xffffffff,0x0600F000,0x1000);
  Unpack_ArcanoMarvelous_0x70(gRomGfx_0874A9C0,0x6000000);
  GBA_DMA3_FastCopy(gRomGfx_0874E330,0x5000000,0x200);
  loop_i = 0;
  *(undefined1 **)(&stack0xffffffe0 + 0x1030 + i_val1) = &stack0xfffffff8 + i_val1;
  *(undefined1 **)(&stack0xffffffe0 + 0x1034 + i_val1) = &stack0x00000000 + i_val1;
  *(int *)(&stack0xffffffe0 + 0x101C + i_val1) = arg_1 + 0x6BA4;
  *(int *)(&stack0x00001000 + i_val1) = arg_1 + 0x6BC4;
  *(int *)(&stack0x00000fe0 + i_val1) = arg_1 + 0x6AA4;
  *(int *)(&stack0xffffffe0 + 0x1004 + i_val1) = arg_1 + 0x6AC4;
  *(int *)(&stack0xffffffe0 + 0x1008 + i_val1) = arg_1 + 0x6AE4;
  *(int *)(&stack0xffffffe0 + 0x100C + i_val1) = arg_1 + 0x6B04;
  *(int *)(&stack0xffffffe0 + 0x1010 + i_val1) = arg_1 + 0x6B24;
  *(int *)(&stack0xffffffe0 + 0x1014 + i_val1) = arg_1 + 0x6B44;
  *(int *)(&stack0xffffffe0 + 0x1018 + i_val1) = arg_1 + 0x6B84;
  *(int *)(&stack0xffffffe0 + 0x1024 + i_val1) = arg_1 + 0x6BE4;
  do {
    Unpack_ArcanoMarvelous_0x70(*(undefined4 *)(loop_i * 4 + gRomData_080E8684),p_uint46);
    i_val2 = loop_i * 0x1000;
    i_val10 = 0;
    loop_i = loop_i + 1;
    *(int *)(&stack0xffffffe0 + 0x1028 + i_val1) = arg_1 + 0x6C04;
    *(int *)(&stack0xffffffe0 + 0x102C + i_val1) = arg_1 + 0x6C24;
    do {
      i_val9 = i_val10 * 0x40;
      i_val5 = i_val10 * 0x80;
      i_val10 = i_val10 + 1;
      p_uint13 = (undefined2 *)(&stack0x00000020 + i_val5 + i_val1);
      p_uint3 = (undefined2 *)(&stack0xffffffe0 + i_val5 + i_val1);
      i_val9 = i_val9 + i_val2 + 0xc000;
      i_val5 = 0x1f;
      do {
        *(undefined2 *)(i_val9 + 0x6000000) = *p_uint3;
        *(undefined2 *)(i_val9 + 0x06000800) = *p_uint13;
        p_uint13 = p_uint13 + 1;
        p_uint3 = p_uint3 + 1;
        i_val9 = i_val9 + 2;
        i_val5 = i_val5 + -1;
      } while (-1 < i_val5);
    } while (i_val10 < 0x20);
  } while (loop_i < 4);
  p_uint3 = (undefined2 *)HW_GetSpriteAttr1Offset(arg_1);
  *p_uint17 = 8000;
  *p_uint3 = 8000;
  loop_i = HW_GetSpriteAttr1Offset(arg_1);
  *p_uint18 = (short)0x5843;
  *(short *)(loop_i + 8) = (short)0x5843;
  loop_i = HW_GetSpriteAttr1Offset(arg_1);
  *p_uint19 = (short)0x5A42;
  *(short *)(loop_i + 10) = (short)0x5A42;
  loop_i = HW_GetSpriteAttr1Offset(arg_1);
  *p_uint20 = (short)0x5C41;
  *(short *)(loop_i + 0xc) = (short)0x5C41;
  loop_i = HW_GetSpriteAttr1Offset(arg_1);
  *p_uint21 = (short)0x5E40;
  *(short *)(loop_i + 0xe) = (short)0x5E40;
  loop_i = HW_GetSpriteAttr1Offset(arg_1);
  *p_uint22 = 0;
  *(undefined2 *)(loop_i + 0x10) = 0;
  loop_i = HW_GetSpriteAttr1Offset(arg_1);
  *p_uint23 = 0;
  *(undefined2 *)(loop_i + 0x12) = 0;
  loop_i = HW_GetSpriteAttr1Offset(arg_1);
  *p_uint24 = 0;
  *(undefined2 *)(loop_i + 0x14) = 0;
  loop_i = HW_GetSpriteAttr1Offset(arg_1);
  *p_uint25 = 0;
  *(undefined2 *)(loop_i + 0x16) = 0;
  loop_i = HW_GetSpriteAttr1Offset(arg_1);
  *p_uint26 = 0;
  *(undefined2 *)(loop_i + 0x18) = 0;
  loop_i = HW_GetSpriteAttr1Offset(arg_1);
  *p_uint27 = 0;
  *(undefined2 *)(loop_i + 0x1a) = 0;
  loop_i = HW_GetSpriteAttr1Offset(arg_1);
  *p_uint28 = 0;
  *(undefined2 *)(loop_i + 0x1c) = 0;
  loop_i = HW_GetSpriteAttr1Offset(arg_1);
  *p_uint29 = 0;
  *(undefined2 *)(loop_i + 0x1e) = 0;
  *p_uint30 = 0;
  *(undefined2 *)(&stack0xffffffe4 + i_val1) = 0;
  *(undefined4 *)(&stack0xffffffe8 + i_val1) = 0;
  *(undefined2 *)(&stack0xffffffec + i_val1) = 0;
  *(undefined4 *)(&stack0xfffffff0 + i_val1) = 0;
  *(undefined2 *)(&stack0xfffffff4 + i_val1) = 0;
  *(undefined4 *)(&stack0xfffffff8 + i_val1) = 0;
  *(undefined2 *)(*(int *)(&stack0xffffffe0 + 0x1030 + i_val1) + 4) = 0;
  p_int6 = *(int **)(arg_1 + 0x6BA0);
  _call_via_r3(&stack0x00000000 + i_val1,p_int6,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + 0x101C + i_val1) +
                   (uint)*(ushort *)((undefined4 *)(arg_1 + 0x6BA0) + 3) * 4),
                  *(undefined4 *)(*p_int6 + 0x10));
  p_uint16 = *(undefined4 **)(&stack0xffffffe0 + 0x1034 + i_val1);
  gba_memcpy(p_uint16,p_uint16,0x20);
  u_val11 = p_uint16[1];
  u_val14 = p_uint16[2];
  *p_uint31 = *p_uint16;
  *(undefined4 *)(&stack0xffffffe4 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xffffffe8 + i_val1) = u_val14;
  u_val11 = p_uint16[4];
  u_val14 = p_uint16[5];
  *(undefined4 *)(&stack0xffffffec + i_val1) = p_uint16[3];
  *(undefined4 *)(&stack0xfffffff0 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xfffffff4 + i_val1) = u_val14;
  u_val11 = p_uint16[7];
  *(undefined4 *)(&stack0xfffffff8 + i_val1) = p_uint16[6];
  *(undefined4 *)((int)&stack_val_4 + i_val1) = u_val11;
  GBA_DMA3_FastCopy(*(int *)(&stack0xfffffff0 + i_val1) + 0x120,0x05000320,0xe0);
  u_val8 = 0;
  if (*(int *)(&stack0xffffffe8 + i_val1) != 0) {
    u_val8 = *(undefined2 *)(&stack0xffffffec + i_val1);
  }
  GBA_DMA3_FastCopy(*(int *)(&stack0xffffffe8 + i_val1),0x06010000,u_val8);
  loop_i = 0x6C60;
  u_val7 = 0;
  if (*(int *)(&stack0xffffffe8 + i_val1) != 0) {
    u_val7 = (uint)*(ushort *)(&stack0xffffffec + i_val1);
  }
  psVar15 = (short *)(arg_1 + 0x6C60);
  *psVar15 = (short)(u_val7 >> 5);
  *(undefined4 *)(arg_1 + 0x6BB8) = 0x780000;
  *(undefined4 *)(arg_1 + 0x6BBC) = 0xFFA00000;
  p_uint4 = (undefined4 *)(arg_1 + loop_i + -0xa0);
  p_int6 = (int *)*p_uint4;
  _call_via_r3(p_uint16,p_int6,
                  *(undefined2 *)
                   (**(int **)(&stack0x00001000 + i_val1) + (uint)*(ushort *)(p_uint4 + 3) * 4),
                  *(undefined4 *)(*p_int6 + 0x10));
  gba_memcpy(p_uint16,p_uint16,0x20);
  u_val11 = p_uint16[1];
  u_val14 = p_uint16[2];
  *p_uint32 = *p_uint16;
  *(undefined4 *)(&stack0xffffffe4 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xffffffe8 + i_val1) = u_val14;
  u_val11 = p_uint16[4];
  u_val14 = p_uint16[5];
  *(undefined4 *)(&stack0xffffffec + i_val1) = p_uint16[3];
  *(undefined4 *)(&stack0xfffffff0 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xfffffff4 + i_val1) = u_val14;
  u_val11 = p_uint16[7];
  *(undefined4 *)(&stack0xfffffff8 + i_val1) = p_uint16[6];
  *(undefined4 *)((int)&stack_val_4 + i_val1) = u_val11;
  u_val8 = 0;
  if (*(int *)(&stack0xffffffe8 + i_val1) != 0) {
    u_val8 = *(undefined2 *)(&stack0xffffffec + i_val1);
  }
  GBA_DMA3_FastCopy(*(int *)(&stack0xffffffe8 + i_val1),*psVar15 * 0x20 + 0x06010000,u_val8);
  *(undefined4 *)(arg_1 + 0x6BD8) = 0x780000;
  *(undefined4 *)(arg_1 + 0x6BDC) = 0x580000;
  p_uint4 = (undefined4 *)(arg_1 + 0x6AA0);
  Animal_Routine_0805E860(p_uint4,0x160);
  _call_via_r3(p_uint16,(int *)*p_uint4,
                  *(undefined2 *)
                   (**(int **)(&stack0x00000fe0 + i_val1) + (uint)*(ushort *)(p_uint4 + 3) * 4),
                  *(undefined4 *)(*(int *)*p_uint4 + 0x10));
  gba_memcpy(p_uint16,p_uint16,0x20);
  u_val11 = p_uint16[1];
  u_val14 = p_uint16[2];
  *p_uint33 = *p_uint16;
  *(undefined4 *)(&stack0xffffffe4 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xffffffe8 + i_val1) = u_val14;
  u_val11 = p_uint16[4];
  u_val14 = p_uint16[5];
  *(undefined4 *)(&stack0xffffffec + i_val1) = p_uint16[3];
  *(undefined4 *)(&stack0xfffffff0 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xfffffff4 + i_val1) = u_val14;
  u_val11 = p_uint16[7];
  *(undefined4 *)(&stack0xfffffff8 + i_val1) = p_uint16[6];
  *(undefined4 *)((int)&stack_val_4 + i_val1) = u_val11;
  u_val11 = *(undefined4 *)(&stack0xfffffff0 + i_val1);
  loop_i = HW_Routine_080074C0(arg_1 + 0x6c80,*(undefined4 *)(arg_1 + 0x6c84));
  u_val8 = 0;
  if (*(int *)(&stack0xfffffff0 + i_val1) != 0) {
    u_val8 = *(undefined2 *)(&stack0xfffffff4 + i_val1);
  }
  GBA_DMA3_FastCopy(u_val11,loop_i * 0x20 + 0x05000200,u_val8);
  *(undefined4 *)(arg_1 + 0x6AB8) = 0x1080000;
  *(undefined4 *)(arg_1 + 0x6ABC) = 0x940000;
  p_uint4 = (undefined4 *)(arg_1 + 0x6AC0);
  Animal_Routine_0805E860(p_uint4,0x342);
  _call_via_r3(p_uint16,(int *)*p_uint4,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + 0x1004 + i_val1) +
                   (uint)*(ushort *)(p_uint4 + 3) * 4),*(undefined4 *)(*(int *)*p_uint4 + 0x10));
  gba_memcpy(p_uint16,p_uint16,0x20);
  u_val11 = p_uint16[1];
  u_val14 = p_uint16[2];
  *p_uint34 = *p_uint16;
  *(undefined4 *)(&stack0xffffffe4 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xffffffe8 + i_val1) = u_val14;
  u_val11 = p_uint16[4];
  u_val14 = p_uint16[5];
  *(undefined4 *)(&stack0xffffffec + i_val1) = p_uint16[3];
  *(undefined4 *)(&stack0xfffffff0 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xfffffff4 + i_val1) = u_val14;
  u_val11 = p_uint16[7];
  *(undefined4 *)(&stack0xfffffff8 + i_val1) = p_uint16[6];
  *(undefined4 *)((int)&stack_val_4 + i_val1) = u_val11;
  u_val11 = *(undefined4 *)(&stack0xfffffff0 + i_val1);
  loop_i = HW_Routine_080074C0(arg_1 + 0x6CB8,*(undefined4 *)(arg_1 + 0x6CB8 + 4));
  u_val8 = 0;
  if (*(int *)(&stack0xfffffff0 + i_val1) != 0) {
    u_val8 = *(undefined2 *)(&stack0xfffffff4 + i_val1);
  }
  GBA_DMA3_FastCopy(u_val11,loop_i * 0x20 + 0x05000200,u_val8);
  *(undefined4 *)(arg_1 + 0x6AD8) = 0x1080000;
  *(undefined4 *)(arg_1 + 0x6ADC) = 0x940000;
  p_int6 = *(int **)(arg_1 + 0x6AE0);
  _call_via_r3(p_uint16,p_int6,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + 0x1008 + i_val1) +
                   (uint)*(ushort *)((undefined4 *)(arg_1 + 0x6AE0) + 3) * 4),
                  *(undefined4 *)(*p_int6 + 0x10));
  gba_memcpy(p_uint16,p_uint16,0x20);
  u_val11 = p_uint16[1];
  u_val14 = p_uint16[2];
  *p_uint35 = *p_uint16;
  *(undefined4 *)(&stack0xffffffe4 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xffffffe8 + i_val1) = u_val14;
  u_val11 = p_uint16[4];
  u_val14 = p_uint16[5];
  *(undefined4 *)(&stack0xffffffec + i_val1) = p_uint16[3];
  *(undefined4 *)(&stack0xfffffff0 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xfffffff4 + i_val1) = u_val14;
  u_val11 = p_uint16[7];
  *(undefined4 *)(&stack0xfffffff8 + i_val1) = p_uint16[6];
  *(undefined4 *)((int)&stack_val_4 + i_val1) = u_val11;
  u_val11 = *(undefined4 *)(&stack0xfffffff0 + i_val1);
  loop_i = HW_Routine_080074C0(arg_1 + 0x6C90,*(undefined4 *)(arg_1 + 0x6C90 + 4));
  u_val8 = 0;
  if (*(int *)(&stack0xfffffff0 + i_val1) != 0) {
    u_val8 = *(undefined2 *)(&stack0xfffffff4 + i_val1);
  }
  GBA_DMA3_FastCopy(u_val11,loop_i * 0x20 + 0x05000200,u_val8);
  *(undefined4 *)(arg_1 + 0x6AF8) = 0x280000;
  *(undefined4 *)(arg_1 + 0x6AFC) = 0x540000;
  Animal_Routine_0805E860((undefined4 *)(arg_1 + 0x6b00),0x2B2);
  p_int6 = *(int **)(arg_1 + 0x6b00);
  _call_via_r3(p_uint16,p_int6,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + 0x100C + i_val1) +
                   (uint)*(ushort *)(arg_1 + 0x6b0c) * 4),*(undefined4 *)(*p_int6 + 0x10));
  gba_memcpy(p_uint16,p_uint16,0x20);
  u_val11 = p_uint16[1];
  u_val14 = p_uint16[2];
  *p_uint36 = *p_uint16;
  *(undefined4 *)(&stack0xffffffe4 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xffffffe8 + i_val1) = u_val14;
  u_val11 = p_uint16[4];
  u_val14 = p_uint16[5];
  *(undefined4 *)(&stack0xffffffec + i_val1) = p_uint16[3];
  *(undefined4 *)(&stack0xfffffff0 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xfffffff4 + i_val1) = u_val14;
  u_val11 = p_uint16[7];
  *(undefined4 *)(&stack0xfffffff8 + i_val1) = p_uint16[6];
  *(undefined4 *)((int)&stack_val_4 + i_val1) = u_val11;
  u_val11 = *(undefined4 *)(&stack0xfffffff0 + i_val1);
  loop_i = HW_Routine_080074C0(arg_1 + 0x6CA0,*(undefined4 *)(arg_1 + 0x6CA0 + 4));
  u_val8 = 0;
  if (*(int *)(&stack0xfffffff0 + i_val1) != 0) {
    u_val8 = *(undefined2 *)(&stack0xfffffff4 + i_val1);
  }
  GBA_DMA3_FastCopy(u_val11,loop_i * 0x20 + 0x05000200,u_val8);
  *(undefined4 *)(arg_1 + 0x6B18) = 0x1100000;
  *(undefined4 *)(arg_1 + 0x6B1C) = 0x940000;
  p_uint4 = (undefined4 *)(arg_1 + 0x6B20);
  Animal_Routine_0805E860(p_uint4,0x924);
  _call_via_r3(p_uint16,(int *)*p_uint4,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + 0x1010 + i_val1) +
                   (uint)*(ushort *)(p_uint4 + 3) * 4),*(undefined4 *)(*(int *)*p_uint4 + 0x10));
  gba_memcpy(p_uint16,p_uint16,0x20);
  u_val11 = p_uint16[1];
  u_val14 = p_uint16[2];
  *p_uint37 = *p_uint16;
  *(undefined4 *)(&stack0xffffffe4 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xffffffe8 + i_val1) = u_val14;
  u_val11 = p_uint16[4];
  u_val14 = p_uint16[5];
  *(undefined4 *)(&stack0xffffffec + i_val1) = p_uint16[3];
  *(undefined4 *)(&stack0xfffffff0 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xfffffff4 + i_val1) = u_val14;
  u_val11 = p_uint16[7];
  *(undefined4 *)(&stack0xfffffff8 + i_val1) = p_uint16[6];
  *(undefined4 *)((int)&stack_val_4 + i_val1) = u_val11;
  *(undefined4 *)(arg_1 + 0x6B38) = 0xFFF00000;
  *(undefined4 *)(arg_1 + 0x6B3C) = 0x940000;
  p_uint4 = (undefined4 *)(arg_1 + 0x6B40);
  Animal_Routine_0805E860(p_uint4,0x730);
  Animal_Routine_0805E860(arg_1 + 0x6B60,0x730);
  _call_via_r3(p_uint16,(int *)*p_uint4,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + 0x1014 + i_val1) +
                   (uint)*(ushort *)(p_uint4 + 3) * 4),*(undefined4 *)(*(int *)*p_uint4 + 0x10));
  gba_memcpy(p_uint16,p_uint16,0x20);
  u_val11 = p_uint16[1];
  u_val14 = p_uint16[2];
  *p_uint38 = *p_uint16;
  *(undefined4 *)(&stack0xffffffe4 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xffffffe8 + i_val1) = u_val14;
  u_val11 = p_uint16[4];
  u_val14 = p_uint16[5];
  *(undefined4 *)(&stack0xffffffec + i_val1) = p_uint16[3];
  *(undefined4 *)(&stack0xfffffff0 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xfffffff4 + i_val1) = u_val14;
  u_val11 = p_uint16[7];
  *(undefined4 *)(&stack0xfffffff8 + i_val1) = p_uint16[6];
  *(undefined4 *)((int)&stack_val_4 + i_val1) = u_val11;
  u_val11 = *(undefined4 *)(&stack0xfffffff0 + i_val1);
  loop_i = HW_Routine_080074C0(arg_1 + 0x6CC8,*(undefined4 *)(arg_1 + 0x6CC8 + 4));
  u_val8 = 0;
  if (*(int *)(&stack0xfffffff0 + i_val1) != 0) {
    u_val8 = *(undefined2 *)(&stack0xfffffff4 + i_val1);
  }
  GBA_DMA3_FastCopy(u_val11,loop_i * 0x20 + 0x05000200,u_val8);
  loop_i = 0x6B58;
  *(undefined4 *)(arg_1 + 0x6B58) = 0x280000;
  *(undefined4 *)(arg_1 + 0x6B5C) = 0x200000;
  *(undefined4 *)(arg_1 + 0x6B78) = 0xc80000;
  *(undefined4 *)(arg_1 + loop_i + 0x24) = 0x200000;
  p_uint4 = (undefined4 *)(arg_1 + 0x6b80);
  Animal_Routine_0805E860(p_uint4,0x91A);
  p_int6 = *(int **)(&stack0xffffffe0 + 0x1018 + i_val1);
  _call_via_r3(p_uint16,(int *)*p_uint4,
                  *(undefined2 *)(*p_int6 + (uint)*(ushort *)(arg_1 + 0x6b8c) * 4),
                  *(undefined4 *)(*(int *)*p_uint4 + 0x10));
  gba_memcpy(p_uint16,p_uint16,0x20);
  u_val11 = p_uint16[1];
  u_val14 = p_uint16[2];
  *p_uint39 = *p_uint16;
  *(undefined4 *)(&stack0xffffffe4 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xffffffe8 + i_val1) = u_val14;
  u_val11 = p_uint16[4];
  u_val14 = p_uint16[5];
  *(undefined4 *)(&stack0xffffffec + i_val1) = p_uint16[3];
  *(undefined4 *)(&stack0xfffffff0 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xfffffff4 + i_val1) = u_val14;
  u_val11 = p_uint16[7];
  *(undefined4 *)(&stack0xfffffff8 + i_val1) = p_uint16[6];
  *(undefined4 *)((int)&stack_val_4 + i_val1) = u_val11;
  u_val11 = *(undefined4 *)(&stack0xfffffff0 + i_val1);
  loop_i = HW_Routine_080074C0(arg_1 + 0x6CE8,*(undefined4 *)(arg_1 + 0x6CE8 + 4));
  u_val8 = 0;
  if (*(int *)(&stack0xfffffff0 + i_val1) != 0) {
    u_val8 = *(undefined2 *)(&stack0xfffffff4 + i_val1);
  }
  GBA_DMA3_FastCopy(u_val11,loop_i * 0x20 + 0x05000200,u_val8);
  u_val11 = *(undefined4 *)(&stack0xffffffe8 + i_val1);
  loop_i = GBA_Vram_AllocateTileBlock(arg_1 + 0x6CD0,*(undefined4 *)(arg_1 + 0x6CD0 + 4));
  u_val8 = 0;
  if (*(int *)(&stack0xffffffe8 + i_val1) != 0) {
    u_val8 = *(undefined2 *)(&stack0xffffffec + i_val1);
  }
  GBA_DMA3_FastCopy(u_val11,loop_i * 0x20 + 0x06010000,u_val8);
  Animal_Routine_0805E860(p_uint4,0x91B);
  _call_via_r3(p_uint16,(int *)*p_uint4,
                  *(undefined2 *)(*p_int6 + (uint)*(ushort *)(arg_1 + 0x6b8c) * 4),
                  *(undefined4 *)(*(int *)*p_uint4 + 0x10));
  gba_memcpy(p_uint16,p_uint16,0x20);
  u_val11 = p_uint16[1];
  u_val14 = p_uint16[2];
  *p_uint40 = *p_uint16;
  *(undefined4 *)(&stack0xffffffe4 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xffffffe8 + i_val1) = u_val14;
  u_val11 = p_uint16[4];
  u_val14 = p_uint16[5];
  *(undefined4 *)(&stack0xffffffec + i_val1) = p_uint16[3];
  *(undefined4 *)(&stack0xfffffff0 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xfffffff4 + i_val1) = u_val14;
  u_val11 = p_uint16[7];
  *(undefined4 *)(&stack0xfffffff8 + i_val1) = p_uint16[6];
  *(undefined4 *)((int)&stack_val_4 + i_val1) = u_val11;
  u_val11 = *(undefined4 *)(&stack0xffffffe8 + i_val1);
  loop_i = GBA_Vram_AllocateTileBlock(arg_1 + 0x6CD8,*(undefined4 *)(arg_1 + 0x6CD8 + 4));
  u_val8 = 0;
  if (*(int *)(&stack0xffffffe8 + i_val1) != 0) {
    u_val8 = *(undefined2 *)(&stack0xffffffec + i_val1);
  }
  GBA_DMA3_FastCopy(u_val11,loop_i * 0x20 + 0x06010000,u_val8);
  Animal_Routine_0805E860(p_uint4,0x91C);
  _call_via_r3(p_uint16,(int *)*p_uint4,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + 0x1018 + i_val1) +
                   (uint)*(ushort *)(arg_1 + 0x6b8c) * 4),*(undefined4 *)(*(int *)*p_uint4 + 0x10))
  ;
  gba_memcpy(p_uint16,p_uint16,0x20);
  u_val11 = p_uint16[1];
  u_val14 = p_uint16[2];
  *p_uint41 = *p_uint16;
  *(undefined4 *)(&stack0xffffffe4 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xffffffe8 + i_val1) = u_val14;
  u_val11 = p_uint16[4];
  u_val14 = p_uint16[5];
  *(undefined4 *)(&stack0xffffffec + i_val1) = p_uint16[3];
  *(undefined4 *)(&stack0xfffffff0 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xfffffff4 + i_val1) = u_val14;
  u_val11 = p_uint16[7];
  *(undefined4 *)(&stack0xfffffff8 + i_val1) = p_uint16[6];
  *(undefined4 *)((int)&stack_val_4 + i_val1) = u_val11;
  u_val11 = *(undefined4 *)(&stack0xffffffe8 + i_val1);
  loop_i = GBA_Vram_AllocateTileBlock(arg_1 + 0x6CE0,*(undefined4 *)(arg_1 + 0x6CE0 + 4));
  u_val8 = 0;
  if (*(int *)(&stack0xffffffe8 + i_val1) != 0) {
    u_val8 = *(undefined2 *)(&stack0xffffffec + i_val1);
  }
  GBA_DMA3_FastCopy(u_val11,loop_i * 0x20 + 0x06010000,u_val8);
  p_uint4 = (undefined4 *)(arg_1 + 0x6BE0);
  Animal_Routine_0805E860(p_uint4,1);
  _call_via_r3(p_uint16,(int *)*p_uint4,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + 0x1024 + i_val1) +
                   (uint)*(ushort *)(p_uint4 + 3) * 4),*(undefined4 *)(*(int *)*p_uint4 + 0x10));
  gba_memcpy(p_uint16,p_uint16,0x20);
  u_val11 = p_uint16[1];
  u_val14 = p_uint16[2];
  *p_uint42 = *p_uint16;
  *(undefined4 *)(&stack0xffffffe4 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xffffffe8 + i_val1) = u_val14;
  u_val11 = p_uint16[4];
  u_val14 = p_uint16[5];
  *(undefined4 *)(&stack0xffffffec + i_val1) = p_uint16[3];
  *(undefined4 *)(&stack0xfffffff0 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xfffffff4 + i_val1) = u_val14;
  u_val11 = p_uint16[7];
  *(undefined4 *)(&stack0xfffffff8 + i_val1) = p_uint16[6];
  *(undefined4 *)((int)&stack_val_4 + i_val1) = u_val11;
  u_val11 = *(undefined4 *)(&stack0xfffffff0 + i_val1);
  loop_i = HW_Routine_080074C0(arg_1 + 0x6d00,*(undefined4 *)(arg_1 + 0x6d04));
  u_val8 = 0;
  if (*(int *)(&stack0xfffffff0 + i_val1) != 0) {
    u_val8 = *(undefined2 *)(&stack0xfffffff4 + i_val1);
  }
  GBA_DMA3_FastCopy(u_val11,loop_i * 0x20 + 0x05000200,u_val8);
  u_val11 = *(undefined4 *)(&stack0xffffffe8 + i_val1);
  loop_i = GBA_Vram_AllocateTileBlock(arg_1 + 0x6CF0,*(undefined4 *)(arg_1 + 0x6CF0 + 4));
  u_val8 = 0;
  if (*(int *)(&stack0xffffffe8 + i_val1) != 0) {
    u_val8 = *(undefined2 *)(&stack0xffffffec + i_val1);
  }
  GBA_DMA3_FastCopy(u_val11,loop_i * 0x20 + 0x06010000,u_val8);
  *(undefined4 *)(arg_1 + 0x6BFC) = 0x700000;
  Animal_Routine_0805E860((undefined4 *)(arg_1 + 0x6c00),4);
  p_int6 = *(int **)(arg_1 + 0x6c00);
  _call_via_r3(p_uint16,p_int6,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + 0x1028 + i_val1) +
                   (uint)*(ushort *)(arg_1 + 0x6c0c) * 4),*(undefined4 *)(*p_int6 + 0x10));
  gba_memcpy(p_uint16,p_uint16,0x20);
  u_val11 = p_uint16[1];
  u_val14 = p_uint16[2];
  *p_uint43 = *p_uint16;
  *(undefined4 *)(&stack0xffffffe4 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xffffffe8 + i_val1) = u_val14;
  u_val11 = p_uint16[4];
  u_val14 = p_uint16[5];
  *(undefined4 *)(&stack0xffffffec + i_val1) = p_uint16[3];
  *(undefined4 *)(&stack0xfffffff0 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xfffffff4 + i_val1) = u_val14;
  u_val11 = p_uint16[7];
  *(undefined4 *)(&stack0xfffffff8 + i_val1) = p_uint16[6];
  *(undefined4 *)((int)&stack_val_4 + i_val1) = u_val11;
  u_val11 = *(undefined4 *)(&stack0xffffffe8 + i_val1);
  loop_i = GBA_Vram_AllocateTileBlock(arg_1 + 0x6CF8,*(undefined4 *)(arg_1 + 0x6CF8 + 4));
  u_val8 = 0;
  if (*(int *)(&stack0xffffffe8 + i_val1) != 0) {
    u_val8 = *(undefined2 *)(&stack0xffffffec + i_val1);
  }
  GBA_DMA3_FastCopy(u_val11,loop_i * 0x20 + 0x06010000,u_val8);
  *(undefined4 *)(arg_1 + 0x6C1C) = 0x700000;
  p_int6 = *(int **)(arg_1 + 0x6C20);
  _call_via_r3(p_uint16,p_int6,
                  *(undefined2 *)
                   (**(int **)(&stack0xffffffe0 + 0x102C + i_val1) +
                   (uint)*(ushort *)((undefined4 *)(arg_1 + 0x6C20) + 3) * 4),
                  *(undefined4 *)(*p_int6 + 0x10));
  gba_memcpy(p_uint16,p_uint16,0x20);
  u_val11 = p_uint16[1];
  u_val14 = p_uint16[2];
  *p_uint44 = *p_uint16;
  *(undefined4 *)(&stack0xffffffe4 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xffffffe8 + i_val1) = u_val14;
  u_val11 = p_uint16[4];
  u_val14 = p_uint16[5];
  *(undefined4 *)(&stack0xffffffec + i_val1) = p_uint16[3];
  *(undefined4 *)(&stack0xfffffff0 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xfffffff4 + i_val1) = u_val14;
  u_val11 = p_uint16[7];
  *(undefined4 *)(&stack0xfffffff8 + i_val1) = p_uint16[6];
  *(undefined4 *)((int)&stack_val_4 + i_val1) = u_val11;
  u_val11 = *(undefined4 *)(&stack0xfffffff0 + i_val1);
  loop_i = HW_Routine_080074C0(arg_1 + 0x6D10,*(undefined4 *)(arg_1 + 0x6D10 + 4));
  u_val8 = 0;
  if (*(int *)(&stack0xfffffff0 + i_val1) != 0) {
    u_val8 = *(undefined2 *)(&stack0xfffffff4 + i_val1);
  }
  GBA_DMA3_FastCopy(u_val11,loop_i * 0x20 + 0x05000200,u_val8);
  u_val11 = *(undefined4 *)(&stack0xffffffe8 + i_val1);
  loop_i = GBA_Vram_AllocateTileBlock(arg_1 + 0x6D08,*(undefined4 *)(arg_1 + 0x6D08 + 4));
  u_val8 = 0;
  if (*(int *)(&stack0xffffffe8 + i_val1) != 0) {
    u_val8 = *(undefined2 *)(&stack0xffffffec + i_val1);
  }
  GBA_DMA3_FastCopy(u_val11,loop_i * 0x20 + 0x06010000,u_val8);
  *(undefined4 *)(arg_1 + 0x6C38) = 0x780000;
  *(undefined4 *)(arg_1 + 0x6C3C) = 0x900000;
  Animal_Routine_0805E790(p_uint16,arg_1 + 0x6A40,0);
  u_val11 = p_uint16[1];
  u_val14 = p_uint16[2];
  *p_uint45 = *p_uint16;
  *(undefined4 *)(&stack0xffffffe4 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xffffffe8 + i_val1) = u_val14;
  u_val11 = p_uint16[4];
  u_val14 = p_uint16[5];
  *(undefined4 *)(&stack0xffffffec + i_val1) = p_uint16[3];
  *(undefined4 *)(&stack0xfffffff0 + i_val1) = u_val11;
  *(undefined4 *)(&stack0xfffffff4 + i_val1) = u_val14;
  u_val11 = p_uint16[7];
  *(undefined4 *)(&stack0xfffffff8 + i_val1) = p_uint16[6];
  *(undefined4 *)((int)&stack_val_4 + i_val1) = u_val11;
  u_val11 = *(undefined4 *)(&stack0xfffffff0 + i_val1);
  loop_i = HW_Routine_080074C0(arg_1 + 0x6D20,*(undefined4 *)(arg_1 + 0x6D20 + 4));
  u_val8 = 0;
  if (*(int *)(&stack0xfffffff0 + i_val1) != 0) {
    u_val8 = *(undefined2 *)(&stack0xfffffff4 + i_val1);
  }
  GBA_DMA3_FastCopy(u_val11,loop_i * 0x20 + 0x05000200,u_val8);
  u_val11 = *(undefined4 *)(&stack0xffffffe8 + i_val1);
  loop_i = GBA_Vram_AllocateTileBlock(arg_1 + 0x6D18,*(undefined4 *)(arg_1 + 0x6D18 + 4));
  u_val8 = 0;
  if (*(int *)(&stack0xffffffe8 + i_val1) != 0) {
    u_val8 = *(undefined2 *)(&stack0xffffffec + i_val1);
  }
  GBA_DMA3_FastCopy(u_val11,loop_i * 0x20 + 0x06010000,u_val8);
  *(undefined4 *)(arg_1 + 0x6C5C) = 0x780000;
  return *(undefined4 *)((int)&stack_val_4 + 0x1038 + i_val1);
}

// =============================================================================
// Function: Scene_Routine_080024E0 @ 0x080024E0
// =============================================================================
void Scene_Routine_080024E0(int arg_1)

{
  undefined4 u_val1;
  int *p_int2;
  int *p_int3;
  uint u_val4;
  int *p_int5;
  undefined4 *p_uint6;
  char *p_char7;
  int i_val8;
  undefined4 *p_uint9;
  short *psVar10;
  int i_val11;
  int *p_int12;
  int i_val13;
  short stack_val_c4;
  short stack_val_c2;
  undefined2 stack_val_c0;
  undefined2 stack_val_be;
  undefined2 stack_val_bc;
  undefined4 stack_val_b8;
  undefined1 stack_val_b4;
  undefined1 stack_val_b3;
  undefined4 stack_val_b0;
  undefined1 stack_val_ac;
  int stack_val_a8;
  uint stack_val_a4;
  int stack_val_a0;
  uint stack_val_9c;
  undefined4 stack_val_98;
  uint stack_val_94;
  undefined4 stack_val_90;
  uint stack_val_8c;
  int stack_val_88;
  uint stack_val_84;
  int stack_val_80;
  uint stack_val_7c;
  undefined4 stack_val_78;
  uint stack_val_74;
  undefined4 stack_val_70;
  uint stack_val_6c;
  int stack_val_68;
  int stack_val_64;
  int stack_val_60;
  int stack_val_5c;
  int stack_val_58;
  int stack_val_54;
  int stack_val_50;
  int stack_val_4c;
  int stack_val_48;
  int stack_val_44;
  int stack_val_40;
  int stack_val_3c;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  
  stack_val_c4 = 0;
  stack_val_c2 = 0;
  stack_val_c0 = 0;
  stack_val_be = 0;
  stack_val_bc = 0;
  stack_val_b8 = 0;
  stack_val_b4 = 0;
  stack_val_b3 = 0;
  stack_val_b0 = 0;
  stack_val_ac = 0;
  stack_val_a8 = 0;
  stack_val_a4 = stack_val_a4 & 0xffff0000;
  stack_val_a0 = 0;
  stack_val_9c = stack_val_9c & 0xffff0000;
  stack_val_98 = 0;
  stack_val_94 = stack_val_94 & 0xffff0000;
  stack_val_90 = 0;
  stack_val_8c = stack_val_8c & 0xffff0000;
  p_uint6 = (undefined4 *)(arg_1 + 0x6AB4);
  u_val1 = Animal_Routine_0805E8F0(arg_1 + 0x6AA0);
  *p_uint6 = u_val1;
  p_uint6 = (undefined4 *)(arg_1 + 0x6AD4);
  u_val1 = Animal_Routine_0805E8F0(arg_1 + 0x6AC0);
  *p_uint6 = u_val1;
  p_uint6 = (undefined4 *)(arg_1 + 0x6AF4);
  u_val1 = Animal_Routine_0805E8F0(arg_1 + 0x6AE0);
  *p_uint6 = u_val1;
  p_uint6 = (undefined4 *)(arg_1 + 0x6B14);
  u_val1 = Animal_Routine_0805E8F0(arg_1 + 0x6b00);
  *p_uint6 = u_val1;
  p_uint6 = (undefined4 *)(arg_1 + 0x6B34);
  u_val1 = Animal_Routine_0805E8F0(arg_1 + 0x6B20);
  *p_uint6 = u_val1;
  p_uint6 = (undefined4 *)(arg_1 + 0x6B54);
  u_val1 = Animal_Routine_0805E8F0(arg_1 + 0x6B40);
  *p_uint6 = u_val1;
  p_char7 = (char *)(0x6C6D + arg_1);
  if (*p_char7 != '\0') {
    p_uint6 = (undefined4 *)(arg_1 + 0x6C20);
    _call_via_r3(&stack_val_88,(int *)*p_uint6,
                    *(undefined2 *)
                     (*(int *)(arg_1 + 0x6C24) + (uint)*(ushort *)(p_uint6 + 3) * 4),
                    *(undefined4 *)(*(int *)*p_uint6 + 0x10));
    gba_memcpy(&stack_val_88,&stack_val_88,0x20);
    stack_val_a8 = stack_val_88;
    stack_val_a4 = stack_val_84;
    stack_val_a0 = stack_val_80;
    stack_val_9c = stack_val_7c;
    stack_val_98 = stack_val_78;
    stack_val_94 = stack_val_74;
    stack_val_90 = stack_val_70;
    stack_val_8c = stack_val_6c;
    stack_val_c4 = *(short *)((int)p_uint6 + 0x1a);
    stack_val_c2 = *(undefined2 *)((int)p_uint6 + 0x1e);
    stack_val_bc = 0;
    stack_val_be = GBA_Vram_AllocateTileBlock(arg_1 + 0x6D08,*(undefined4 *)(arg_1 + 0x6D08 + 4));
    stack_val_c0 = HW_Routine_080074C0(arg_1 + 0x6D10,*(undefined4 *)(arg_1 + 0x6D10 + 4));
    stack_val_ac = 1;
    u_val1 = HW_GetSpriteAttr2Offset(arg_1);
    u_val4 = 0;
    if (stack_val_a8 != 0) {
      u_val4 = stack_val_a4 & 0xffff;
    }
    Animal_Routine_0805E99C(u_val1,stack_val_a8,u_val4,&stack_val_c4);
    p_uint6 = (undefined4 *)(arg_1 + 0x6BF4);
    p_uint9 = (undefined4 *)(arg_1 + 0x6BE0);
    u_val1 = Animal_Routine_0805E8F0(p_uint9);
    *p_uint6 = u_val1;
    _call_via_r3(&stack_val_88,(int *)*p_uint9,
                    *(undefined2 *)
                     (*(int *)(arg_1 + 0x6BE4) + (uint)*(ushort *)(p_uint9 + 3) * 4),
                    *(undefined4 *)(*(int *)*p_uint9 + 0x10));
    gba_memcpy(&stack_val_88,&stack_val_88,0x20);
    stack_val_a8 = stack_val_88;
    stack_val_a4 = stack_val_84;
    stack_val_a0 = stack_val_80;
    stack_val_9c = stack_val_7c;
    stack_val_98 = stack_val_78;
    stack_val_94 = stack_val_74;
    stack_val_90 = stack_val_70;
    stack_val_8c = stack_val_6c;
    stack_val_c4 = *(short *)((int)p_uint9 + 0x1a);
    stack_val_c2 = *(undefined2 *)((int)p_uint9 + 0x1e);
    stack_val_be = GBA_Vram_AllocateTileBlock(arg_1 + 0x6CF0,*(undefined4 *)(arg_1 + 0x6CF0 + 4));
    stack_val_c0 = HW_Routine_080074C0(arg_1 + 0x6d00,*(undefined4 *)(arg_1 + 0x6d04));
    u_val1 = HW_GetSpriteAttr2Offset(arg_1);
    u_val4 = 0;
    if (stack_val_a8 != 0) {
      u_val4 = stack_val_a4 & 0xffff;
    }
    Animal_Routine_0805E99C(u_val1,stack_val_a8,u_val4,&stack_val_c4);
    if (*p_char7 == '\x02') {
      p_uint6 = (undefined4 *)(arg_1 + 0x6C14);
      u_val1 = Animal_Routine_0805E8F0((undefined4 *)(arg_1 + 0x6c00));
      *p_uint6 = u_val1;
      p_int2 = *(int **)(arg_1 + 0x6c00);
      _call_via_r3(&stack_val_88,p_int2,
                      *(undefined2 *)
                       (*(int *)(arg_1 + 0x6C04) + (uint)*(ushort *)(arg_1 + 0x6c0c) * 4)
                      ,*(undefined4 *)(*p_int2 + 0x10));
      gba_memcpy(&stack_val_88,&stack_val_88,0x20);
      stack_val_a8 = stack_val_88;
      stack_val_a4 = stack_val_84;
      stack_val_a0 = stack_val_80;
      stack_val_9c = stack_val_7c;
      stack_val_98 = stack_val_78;
      stack_val_94 = stack_val_74;
      stack_val_90 = stack_val_70;
      stack_val_8c = stack_val_6c;
      stack_val_c4 = *(short *)(arg_1 + 0x6c1a);
      stack_val_c2 = *(undefined2 *)(arg_1 + 0x6c1e);
      stack_val_be = GBA_Vram_AllocateTileBlock(arg_1 + 0x6CF8,*(undefined4 *)(arg_1 + 0x6CF8 + 4)
                               );
      stack_val_c0 = HW_Routine_080074C0(arg_1 + 0x6d00,*(undefined4 *)(arg_1 + 0x6d04));
      u_val1 = HW_GetSpriteAttr2Offset(arg_1);
      u_val4 = 0;
      if (stack_val_a8 != 0) {
        u_val4 = stack_val_a4 & 0xffff;
      }
      Animal_Routine_0805E99C(u_val1,stack_val_a8,u_val4,&stack_val_c4);
    }
    p_uint6 = (undefined4 *)(arg_1 + 0x6C40);
    Animal_Routine_0805E8F0(p_uint6);
    _call_via_r3(&stack_val_88,(int *)*p_uint6,
                    *(undefined2 *)
                     (*(int *)(arg_1 + 0x6C44) + (uint)*(ushort *)(p_uint6 + 3) * 4),
                    *(undefined4 *)(*(int *)*p_uint6 + 0x10));
    gba_memcpy(&stack_val_88,&stack_val_88,0x20);
    stack_val_a8 = stack_val_88;
    stack_val_a4 = stack_val_84;
    stack_val_a0 = stack_val_80;
    stack_val_9c = stack_val_7c;
    stack_val_98 = stack_val_78;
    stack_val_94 = stack_val_74;
    stack_val_90 = stack_val_70;
    stack_val_8c = stack_val_6c;
    stack_val_c4 = *(short *)((int)p_uint6 + 0x1a);
    stack_val_c2 = *(undefined2 *)((int)p_uint6 + 0x1e);
    stack_val_be = GBA_Vram_AllocateTileBlock(arg_1 + 0x6D18,*(undefined4 *)(arg_1 + 0x6D18 + 4));
    stack_val_c0 = HW_Routine_080074C0(arg_1 + 0x6D20,*(undefined4 *)(arg_1 + 0x6D20 + 4));
    u_val1 = HW_GetSpriteAttr2Offset(arg_1);
    u_val4 = 0;
    if (stack_val_a8 != 0) {
      u_val4 = stack_val_a4 & 0xffff;
    }
    Animal_Routine_0805E99C(u_val1,stack_val_a8,u_val4,&stack_val_c4);
  }
  p_uint6 = (undefined4 *)(arg_1 + 0x6BA0);
  _call_via_r3(&stack_val_88,(int *)*p_uint6,
                  *(undefined2 *)
                   (*(int *)(arg_1 + 0x6BA4) + (uint)*(ushort *)(p_uint6 + 3) * 4),
                  *(undefined4 *)(*(int *)*p_uint6 + 0x10));
  gba_memcpy(&stack_val_88,&stack_val_88,0x20);
  stack_val_a8 = stack_val_88;
  stack_val_a4 = stack_val_84;
  stack_val_a0 = stack_val_80;
  stack_val_9c = stack_val_7c;
  stack_val_98 = stack_val_78;
  stack_val_94 = stack_val_74;
  stack_val_90 = stack_val_70;
  stack_val_8c = stack_val_6c;
  stack_val_c4 = *(short *)((int)p_uint6 + 0x1a);
  stack_val_c2 = *(undefined2 *)((int)p_uint6 + 0x1e);
  stack_val_bc = 0;
  stack_val_be = 0;
  stack_val_c0 = 0;
  stack_val_ac = 1;
  u_val1 = HW_GetSpriteAttr2Offset(arg_1);
  u_val4 = 0;
  if (stack_val_a8 != 0) {
    u_val4 = stack_val_a4 & 0xffff;
  }
  Animal_Routine_0805E99C(u_val1,stack_val_a8,u_val4,&stack_val_c4);
  if (9 < *(short *)(arg_1 + 0x6D32)) {
    i_val8 = HW_GetSpriteAttr2Offset(arg_1);
    psVar10 = (short *)(arg_1 + 0x6C64);
    *(short *)(i_val8 + 10) = *psVar10;
    *(short *)(i_val8 + 0x12) = psVar10[1];
    *(short *)(i_val8 + 0x1a) = psVar10[2];
    *(short *)(i_val8 + 0x22) = psVar10[3];
    p_uint6 = (undefined4 *)(0x6BC0 + arg_1);
    _call_via_r3(&stack_val_88,(int *)*p_uint6,
                    *(undefined2 *)
                     (*(int *)(arg_1 + 0x6BC4) + (uint)*(ushort *)(p_uint6 + 3) * 4),
                    *(undefined4 *)(*(int *)*p_uint6 + 0x10));
    gba_memcpy(&stack_val_88,&stack_val_88,0x20);
    stack_val_a8 = stack_val_88;
    stack_val_a4 = stack_val_84;
    stack_val_a0 = stack_val_80;
    stack_val_9c = stack_val_7c;
    stack_val_98 = stack_val_78;
    stack_val_94 = stack_val_74;
    stack_val_90 = stack_val_70;
    stack_val_8c = stack_val_6c;
    stack_val_c4 = *(short *)((int)p_uint6 + 0x1a);
    stack_val_c2 = *(undefined2 *)((int)p_uint6 + 0x1e);
    stack_val_bc = 0;
    stack_val_be = *(undefined2 *)(arg_1 + 0x6C60);
    stack_val_c0 = 0;
    stack_val_b3 = 0;
    if ((*psVar10 == 0x100) && (*(short *)(arg_1 + 0x6C6A) == 0x100)) {
      stack_val_b0 = 0;
    }
    else {
      stack_val_b0 = 1;
    }
    stack_val_ac = 1;
  }
  p_uint6 = (undefined4 *)(arg_1 + 0x6AA0);
  _call_via_r3(&stack_val_88,(int *)*p_uint6,
                  *(undefined2 *)
                   (*(int *)(arg_1 + 0x6AA4) + (uint)*(ushort *)(p_uint6 + 3) * 4),
                  *(undefined4 *)(*(int *)*p_uint6 + 0x10));
  gba_memcpy(&stack_val_88,&stack_val_88,0x20);
  stack_val_a8 = stack_val_88;
  stack_val_a4 = stack_val_84;
  stack_val_a0 = stack_val_80;
  stack_val_9c = stack_val_7c;
  stack_val_98 = stack_val_78;
  stack_val_94 = stack_val_74;
  stack_val_90 = stack_val_70;
  stack_val_8c = stack_val_6c;
  stack_val_c4 = *(short *)((int)p_uint6 + 0x1a);
  stack_val_c2 = *(short *)((int)p_uint6 + 0x1e);
  stack_val_bc = 0;
  i_val8 = arg_1 + 0x6C78;
  stack_val_be = GBA_Vram_AllocateTileBlock(i_val8,*(undefined4 *)(i_val8 + 4));
  stack_val_c0 = HW_Routine_080074C0(arg_1 + 0x6c80,*(undefined4 *)(arg_1 + 0x6c84));
  stack_val_b0 = 0;
  stack_val_ac = 1;
  piStack_38 = (int *)(arg_1 + 0x6AC4);
  piStack_34 = (int *)(arg_1 + 0x6AE4);
  piStack_30 = (int *)(arg_1 + 0x6B04);
  piStack_2c = (int *)(arg_1 + 0x6B24);
  if ((int)((uint)*(byte *)(arg_1 + 0x6AB4) * 0x40000000) < 0) {
    p_int2 = (int *)HW_GetSpriteAttr0Offset(arg_1);
    i_val11 = stack_val_a0;
    i_val8 = GBA_Vram_AllocateTileBlock(i_val8,*(undefined4 *)(i_val8 + 4));
    u_val4 = 0;
    if (stack_val_a0 != 0) {
      u_val4 = stack_val_9c & 0xffff;
    }
    piStack_28 = p_int2;
    HW_Routine_08008F0C(&stack_val_88,i_val11,i_val8 * 0x20 + 0x06010000,u_val4);
    p_int3 = (int *)p_int2[1];
    if (p_int3 == (int *)p_int2[3]) {
      stack_val_64 = 1;
      stack_val_68 = (int)p_int3 - *piStack_28 >> 4;
      p_int2 = &stack_val_68;
      if (stack_val_68 == 0) {
        p_int2 = &stack_val_64;
      }
      if (stack_val_68 + *p_int2 == 0) {
        piStack_24 = (int *)0x0;
        i_val8 = 0;
      }
      else {
        i_val8 = (stack_val_68 + *p_int2) * 0x10;
        piStack_24 = (int *)runtime_malloc_aligned(i_val8);
        if (piStack_24 == (int *)0x0) {
          piStack_24 = (int *)VTable_Routine_080D3BC0(i_val8);
        }
      }
      piStack_38 = (int *)(arg_1 + 0x6AC4);
      piStack_34 = (int *)(arg_1 + 0x6AE4);
      piStack_30 = (int *)(arg_1 + 0x6B04);
      piStack_2c = (int *)(arg_1 + 0x6B24);
      p_int5 = piStack_24;
      for (p_int2 = (int *)*piStack_28; p_int2 != p_int3; p_int2 = p_int2 + 4) {
        if (p_int5 != (int *)0x0) {
          i_val11 = p_int2[1];
          i_val13 = p_int2[2];
          *p_int5 = *p_int2;
          p_int5[1] = i_val11;
          p_int5[2] = i_val13;
          p_int5[3] = p_int2[3];
        }
        p_int5 = p_int5 + 4;
      }
      i_val11 = stack_val_64;
      if (stack_val_64 == 1) {
        if (p_int5 != (int *)0x0) {
          *p_int5 = stack_val_88;
          p_int5[1] = stack_val_84;
          p_int5[2] = stack_val_80;
          p_int5[3] = stack_val_7c;
        }
        p_int5 = p_int5 + 4;
      }
      else {
        for (; i_val11 != 0; i_val11 = i_val11 + -1) {
          if (p_int5 != (int *)0x0) {
            *p_int5 = stack_val_88;
            p_int5[1] = stack_val_84;
            p_int5[2] = stack_val_80;
            p_int5[3] = stack_val_7c;
          }
          p_int5 = p_int5 + 4;
        }
      }
      for (i_val11 = *piStack_28; i_val11 != piStack_28[1]; i_val11 = i_val11 + 0x10) {
      }
      if (*piStack_28 != 0) {
        cpp_operator_delete();
      }
      *piStack_28 = (int)piStack_24;
      piStack_28[1] = (int)p_int5;
      piStack_28[3] = (int)piStack_24 + i_val8;
    }
    else {
      if (p_int3 != (int *)0x0) {
        *p_int3 = stack_val_88;
        p_int3[1] = stack_val_84;
        p_int3[2] = stack_val_80;
        p_int3[3] = stack_val_7c;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
  }
  u_val1 = HW_GetSpriteAttr2Offset(arg_1);
  u_val4 = 0;
  if (stack_val_a8 != 0) {
    u_val4 = stack_val_a4 & 0xffff;
  }
  Animal_Routine_0805E99C(u_val1,stack_val_a8,u_val4,&stack_val_c4);
  Scene_Routine_080035C0(arg_1,(int)stack_val_c4,(int)stack_val_c2,1);
  p_uint6 = (undefined4 *)(arg_1 + 0x6AC0);
  _call_via_r3(&stack_val_88,(int *)*p_uint6,
                  *(undefined2 *)(*piStack_38 + (uint)*(ushort *)(p_uint6 + 3) * 4),
                  *(undefined4 *)(*(int *)*p_uint6 + 0x10));
  gba_memcpy(&stack_val_88,&stack_val_88,0x20);
  stack_val_a8 = stack_val_88;
  stack_val_a4 = stack_val_84;
  stack_val_a0 = stack_val_80;
  stack_val_9c = stack_val_7c;
  stack_val_98 = stack_val_78;
  stack_val_94 = stack_val_74;
  stack_val_90 = stack_val_70;
  stack_val_8c = stack_val_6c;
  stack_val_c4 = *(short *)((int)p_uint6 + 0x1a);
  stack_val_c2 = *(short *)((int)p_uint6 + 0x1e);
  stack_val_bc = 0;
  i_val8 = arg_1 + 0x6CB0;
  stack_val_be = GBA_Vram_AllocateTileBlock(i_val8,*(undefined4 *)(i_val8 + 4));
  stack_val_c0 = HW_Routine_080074C0(arg_1 + 0x6CB8,*(undefined4 *)(arg_1 + 0x6CB8 + 4));
  stack_val_ac = 1;
  if ((int)((uint)*(byte *)(arg_1 + 0x6AD4) * 0x40000000) < 0) {
    p_int2 = (int *)HW_GetSpriteAttr0Offset(arg_1);
    i_val11 = stack_val_a0;
    i_val8 = GBA_Vram_AllocateTileBlock(i_val8,*(undefined4 *)(i_val8 + 4));
    u_val4 = 0;
    if (stack_val_a0 != 0) {
      u_val4 = stack_val_9c & 0xffff;
    }
    piStack_28 = p_int2;
    HW_Routine_08008F0C(&stack_val_88,i_val11,i_val8 * 0x20 + 0x06010000,u_val4);
    p_int3 = (int *)p_int2[1];
    if (p_int3 == (int *)p_int2[3]) {
      stack_val_5c = 1;
      stack_val_60 = (int)p_int3 - *piStack_28 >> 4;
      p_int2 = &stack_val_60;
      if (stack_val_60 == 0) {
        p_int2 = &stack_val_5c;
      }
      if (stack_val_60 + *p_int2 == 0) {
        p_int2 = (int *)0x0;
        i_val8 = 0;
      }
      else {
        i_val8 = (stack_val_60 + *p_int2) * 0x10;
        p_int2 = (int *)runtime_malloc_aligned(i_val8);
        if (p_int2 == (int *)0x0) {
          p_int2 = (int *)VTable_Routine_080D3BC0(i_val8);
        }
      }
      p_int12 = p_int2;
      for (p_int5 = (int *)*piStack_28; p_int5 != p_int3; p_int5 = p_int5 + 4) {
        if (p_int12 != (int *)0x0) {
          i_val11 = p_int5[1];
          i_val13 = p_int5[2];
          *p_int12 = *p_int5;
          p_int12[1] = i_val11;
          p_int12[2] = i_val13;
          p_int12[3] = p_int5[3];
        }
        p_int12 = p_int12 + 4;
      }
      i_val11 = stack_val_5c;
      if (stack_val_5c == 1) {
        if (p_int12 != (int *)0x0) {
          *p_int12 = stack_val_88;
          p_int12[1] = stack_val_84;
          p_int12[2] = stack_val_80;
          p_int12[3] = stack_val_7c;
        }
        p_int12 = p_int12 + 4;
      }
      else {
        for (; i_val11 != 0; i_val11 = i_val11 + -1) {
          if (p_int12 != (int *)0x0) {
            *p_int12 = stack_val_88;
            p_int12[1] = stack_val_84;
            p_int12[2] = stack_val_80;
            p_int12[3] = stack_val_7c;
          }
          p_int12 = p_int12 + 4;
        }
      }
      for (i_val11 = *piStack_28; i_val11 != piStack_28[1]; i_val11 = i_val11 + 0x10) {
      }
      piStack_24 = p_int2;
      if (*piStack_28 != 0) {
        cpp_operator_delete();
      }
      *piStack_28 = (int)piStack_24;
      piStack_28[1] = (int)p_int12;
      piStack_28[3] = (int)piStack_24 + i_val8;
    }
    else {
      if (p_int3 != (int *)0x0) {
        *p_int3 = stack_val_88;
        p_int3[1] = stack_val_84;
        p_int3[2] = stack_val_80;
        p_int3[3] = stack_val_7c;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
  }
  u_val1 = HW_GetSpriteAttr2Offset(arg_1);
  u_val4 = 0;
  if (stack_val_a8 != 0) {
    u_val4 = stack_val_a4 & 0xffff;
  }
  Animal_Routine_0805E99C(u_val1,stack_val_a8,u_val4,&stack_val_c4);
  Scene_Routine_080035C0(arg_1,(int)stack_val_c4,(int)stack_val_c2,0);
  if (*(char *)(arg_1 + 0x6C6C) != '\0') {
    p_uint6 = (undefined4 *)(arg_1 + 0x6B40);
    _call_via_r3(&stack_val_88,(int *)*p_uint6,
                    *(undefined2 *)
                     (*(int *)(arg_1 + 0x6B44) + (uint)*(ushort *)(p_uint6 + 3) * 4),
                    *(undefined4 *)(*(int *)*p_uint6 + 0x10));
    gba_memcpy(&stack_val_88,&stack_val_88,0x20);
    stack_val_a8 = stack_val_88;
    stack_val_a4 = stack_val_84;
    stack_val_a0 = stack_val_80;
    stack_val_9c = stack_val_7c;
    stack_val_98 = stack_val_78;
    stack_val_94 = stack_val_74;
    stack_val_90 = stack_val_70;
    stack_val_8c = stack_val_6c;
    stack_val_c4 = *(short *)((int)p_uint6 + 0x1a);
    stack_val_c2 = *(short *)((int)p_uint6 + 0x1e);
    stack_val_bc = 0;
    i_val8 = arg_1 + 0x6CC0;
    stack_val_be = GBA_Vram_AllocateTileBlock(i_val8,*(undefined4 *)(i_val8 + 4));
    stack_val_c0 = HW_Routine_080074C0(arg_1 + 0x6CC8,*(undefined4 *)(arg_1 + 0x6CC8 + 4));
    stack_val_ac = 1;
    if ((int)((uint)*(byte *)(arg_1 + 0x6B54) * 0x40000000) < 0) {
      p_int2 = (int *)HW_GetSpriteAttr0Offset(arg_1);
      i_val11 = stack_val_a0;
      i_val8 = GBA_Vram_AllocateTileBlock(i_val8,*(undefined4 *)(i_val8 + 4));
      u_val4 = 0;
      if (stack_val_a0 != 0) {
        u_val4 = stack_val_9c & 0xffff;
      }
      piStack_28 = p_int2;
      HW_Routine_08008F0C(&stack_val_88,i_val11,i_val8 * 0x20 + 0x06010000,u_val4);
      p_int3 = (int *)p_int2[1];
      if (p_int3 == (int *)p_int2[3]) {
        stack_val_54 = 1;
        stack_val_58 = (int)p_int3 - *piStack_28 >> 4;
        p_int2 = &stack_val_58;
        if (stack_val_58 == 0) {
          p_int2 = &stack_val_54;
        }
        if (stack_val_58 + *p_int2 == 0) {
          p_int2 = (int *)0x0;
          i_val8 = 0;
        }
        else {
          i_val8 = (stack_val_58 + *p_int2) * 0x10;
          p_int2 = (int *)runtime_malloc_aligned(i_val8);
          if (p_int2 == (int *)0x0) {
            p_int2 = (int *)VTable_Routine_080D3BC0(i_val8);
          }
        }
        p_int12 = p_int2;
        for (p_int5 = (int *)*piStack_28; p_int5 != p_int3; p_int5 = p_int5 + 4) {
          if (p_int12 != (int *)0x0) {
            i_val11 = p_int5[1];
            i_val13 = p_int5[2];
            *p_int12 = *p_int5;
            p_int12[1] = i_val11;
            p_int12[2] = i_val13;
            p_int12[3] = p_int5[3];
          }
          p_int12 = p_int12 + 4;
        }
        i_val11 = stack_val_54;
        if (stack_val_54 == 1) {
          if (p_int12 != (int *)0x0) {
            *p_int12 = stack_val_88;
            p_int12[1] = stack_val_84;
            p_int12[2] = stack_val_80;
            p_int12[3] = stack_val_7c;
          }
          p_int12 = p_int12 + 4;
        }
        else {
          for (; i_val11 != 0; i_val11 = i_val11 + -1) {
            if (p_int12 != (int *)0x0) {
              *p_int12 = stack_val_88;
              p_int12[1] = stack_val_84;
              p_int12[2] = stack_val_80;
              p_int12[3] = stack_val_7c;
            }
            p_int12 = p_int12 + 4;
          }
        }
        for (i_val11 = *piStack_28; i_val11 != piStack_28[1]; i_val11 = i_val11 + 0x10) {
        }
        piStack_24 = p_int2;
        if (*piStack_28 != 0) {
          cpp_operator_delete();
        }
        *piStack_28 = (int)piStack_24;
        piStack_28[1] = (int)p_int12;
        piStack_28[3] = (int)piStack_24 + i_val8;
      }
      else {
        if (p_int3 != (int *)0x0) {
          *p_int3 = stack_val_88;
          p_int3[1] = stack_val_84;
          p_int3[2] = stack_val_80;
          p_int3[3] = stack_val_7c;
        }
        piStack_28[1] = piStack_28[1] + 0x10;
      }
    }
    u_val1 = HW_GetSpriteAttr2Offset(arg_1);
    u_val4 = 0;
    if (stack_val_a8 != 0) {
      u_val4 = stack_val_a4 & 0xffff;
    }
    Animal_Routine_0805E99C(u_val1,stack_val_a8,u_val4,&stack_val_c4);
    if (stack_val_c2 == 0x94) {
      Scene_Routine_080035C0(arg_1,(int)stack_val_c4,0x94,0);
    }
    stack_val_c4 = *(short *)(arg_1 + 0x6B60 + 0x1a);
    stack_val_c2 = *(short *)(arg_1 + 0x6B60 + 0x1e);
    u_val1 = HW_GetSpriteAttr2Offset(arg_1);
    u_val4 = 0;
    if (stack_val_a8 != 0) {
      u_val4 = stack_val_a4 & 0xffff;
    }
    Animal_Routine_0805E99C(u_val1,stack_val_a8,u_val4,&stack_val_c4);
    if (stack_val_c2 == 0x94) {
      Scene_Routine_080035C0(arg_1,(int)stack_val_c4,0x94,0);
    }
  }
  p_uint6 = (undefined4 *)(arg_1 + 0x6AE0);
  _call_via_r3(&stack_val_88,(int *)*p_uint6,
                  *(undefined2 *)(*piStack_34 + (uint)*(ushort *)(p_uint6 + 3) * 4),
                  *(undefined4 *)(*(int *)*p_uint6 + 0x10));
  gba_memcpy(&stack_val_88,&stack_val_88,0x20);
  stack_val_a8 = stack_val_88;
  stack_val_a4 = stack_val_84;
  stack_val_a0 = stack_val_80;
  stack_val_9c = stack_val_7c;
  stack_val_98 = stack_val_78;
  stack_val_94 = stack_val_74;
  stack_val_90 = stack_val_70;
  stack_val_8c = stack_val_6c;
  stack_val_c4 = *(short *)((int)p_uint6 + 0x1a) - *(short *)(arg_1 + 0x6D30);
  stack_val_c2 = *(short *)((int)p_uint6 + 0x1e);
  stack_val_bc = 0;
  i_val8 = arg_1 + 0x6C88;
  stack_val_be = GBA_Vram_AllocateTileBlock(i_val8,*(undefined4 *)(i_val8 + 4));
  stack_val_c0 = HW_Routine_080074C0(arg_1 + 0x6C90,*(undefined4 *)(arg_1 + 0x6C90 + 4));
  stack_val_ac = 1;
  if ((int)((uint)*(byte *)(arg_1 + 0x6AF4) * 0x40000000) < 0) {
    p_int2 = (int *)HW_GetSpriteAttr0Offset(arg_1);
    i_val11 = stack_val_a0;
    i_val8 = GBA_Vram_AllocateTileBlock(i_val8,*(undefined4 *)(i_val8 + 4));
    u_val4 = 0;
    if (stack_val_a0 != 0) {
      u_val4 = stack_val_9c & 0xffff;
    }
    piStack_28 = p_int2;
    HW_Routine_08008F0C(&stack_val_88,i_val11,i_val8 * 0x20 + 0x06010000,u_val4);
    p_int3 = (int *)p_int2[1];
    if (p_int3 == (int *)p_int2[3]) {
      stack_val_4c = 1;
      stack_val_50 = (int)p_int3 - *piStack_28 >> 4;
      p_int2 = &stack_val_50;
      if (stack_val_50 == 0) {
        p_int2 = &stack_val_4c;
      }
      if (stack_val_50 + *p_int2 == 0) {
        p_int2 = (int *)0x0;
        i_val8 = 0;
      }
      else {
        i_val8 = (stack_val_50 + *p_int2) * 0x10;
        p_int2 = (int *)runtime_malloc_aligned(i_val8);
        if (p_int2 == (int *)0x0) {
          p_int2 = (int *)VTable_Routine_080D3BC0(i_val8);
        }
      }
      p_int12 = p_int2;
      for (p_int5 = (int *)*piStack_28; p_int5 != p_int3; p_int5 = p_int5 + 4) {
        if (p_int12 != (int *)0x0) {
          i_val11 = p_int5[1];
          i_val13 = p_int5[2];
          *p_int12 = *p_int5;
          p_int12[1] = i_val11;
          p_int12[2] = i_val13;
          p_int12[3] = p_int5[3];
        }
        p_int12 = p_int12 + 4;
      }
      i_val11 = stack_val_4c;
      if (stack_val_4c == 1) {
        if (p_int12 != (int *)0x0) {
          *p_int12 = stack_val_88;
          p_int12[1] = stack_val_84;
          p_int12[2] = stack_val_80;
          p_int12[3] = stack_val_7c;
        }
        p_int12 = p_int12 + 4;
      }
      else {
        for (; i_val11 != 0; i_val11 = i_val11 + -1) {
          if (p_int12 != (int *)0x0) {
            *p_int12 = stack_val_88;
            p_int12[1] = stack_val_84;
            p_int12[2] = stack_val_80;
            p_int12[3] = stack_val_7c;
          }
          p_int12 = p_int12 + 4;
        }
      }
      for (i_val11 = *piStack_28; i_val11 != piStack_28[1]; i_val11 = i_val11 + 0x10) {
      }
      piStack_24 = p_int2;
      if (*piStack_28 != 0) {
        cpp_operator_delete();
      }
      *piStack_28 = (int)piStack_24;
      piStack_28[1] = (int)p_int12;
      piStack_28[3] = (int)piStack_24 + i_val8;
    }
    else {
      if (p_int3 != (int *)0x0) {
        *p_int3 = stack_val_88;
        p_int3[1] = stack_val_84;
        p_int3[2] = stack_val_80;
        p_int3[3] = stack_val_7c;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
  }
  u_val1 = HW_GetSpriteAttr2Offset(arg_1);
  u_val4 = 0;
  if (stack_val_a8 != 0) {
    u_val4 = stack_val_a4 & 0xffff;
  }
  Animal_Routine_0805E99C(u_val1,stack_val_a8,u_val4,&stack_val_c4);
  Scene_Routine_080035C0(arg_1,(int)stack_val_c4,(int)stack_val_c2,2);
  _call_via_r3(&stack_val_88,*(int **)(arg_1 + 0x6b00),
                  *(undefined2 *)(*piStack_30 + (uint)*(ushort *)(arg_1 + 0x6b0c) * 4),
                  *(undefined4 *)(**(int **)(arg_1 + 0x6b00) + 0x10));
  gba_memcpy(&stack_val_88,&stack_val_88,0x20);
  stack_val_a8 = stack_val_88;
  stack_val_a4 = stack_val_84;
  stack_val_a0 = stack_val_80;
  stack_val_9c = stack_val_7c;
  stack_val_98 = stack_val_78;
  stack_val_94 = stack_val_74;
  stack_val_90 = stack_val_70;
  stack_val_8c = stack_val_6c;
  stack_val_c4 = *(short *)(arg_1 + 0x6b1a);
  stack_val_c2 = *(short *)(arg_1 + 0x6b1e);
  stack_val_bc = 0;
  i_val8 = arg_1 + 0x6C98;
  stack_val_be = GBA_Vram_AllocateTileBlock(i_val8,*(undefined4 *)(i_val8 + 4));
  stack_val_c0 = HW_Routine_080074C0(arg_1 + 0x6CA0,*(undefined4 *)(arg_1 + 0x6CA0 + 4));
  stack_val_ac = 1;
  if ((int)((uint)*(byte *)(arg_1 + 0x6B14) * 0x40000000) < 0) {
    p_int2 = (int *)HW_GetSpriteAttr0Offset(arg_1);
    i_val11 = stack_val_a0;
    i_val8 = GBA_Vram_AllocateTileBlock(i_val8,*(undefined4 *)(i_val8 + 4));
    u_val4 = 0;
    if (stack_val_a0 != 0) {
      u_val4 = stack_val_9c & 0xffff;
    }
    piStack_28 = p_int2;
    HW_Routine_08008F0C(&stack_val_88,i_val11,i_val8 * 0x20 + 0x06010000,u_val4);
    p_int3 = (int *)p_int2[1];
    if (p_int3 == (int *)p_int2[3]) {
      stack_val_44 = 1;
      stack_val_48 = (int)p_int3 - *piStack_28 >> 4;
      p_int2 = &stack_val_48;
      if (stack_val_48 == 0) {
        p_int2 = &stack_val_44;
      }
      if (stack_val_48 + *p_int2 == 0) {
        p_int2 = (int *)0x0;
        i_val8 = 0;
      }
      else {
        i_val8 = (stack_val_48 + *p_int2) * 0x10;
        p_int2 = (int *)runtime_malloc_aligned(i_val8);
        if (p_int2 == (int *)0x0) {
          p_int2 = (int *)VTable_Routine_080D3BC0(i_val8);
        }
      }
      p_int12 = p_int2;
      for (p_int5 = (int *)*piStack_28; p_int5 != p_int3; p_int5 = p_int5 + 4) {
        if (p_int12 != (int *)0x0) {
          i_val11 = p_int5[1];
          i_val13 = p_int5[2];
          *p_int12 = *p_int5;
          p_int12[1] = i_val11;
          p_int12[2] = i_val13;
          p_int12[3] = p_int5[3];
        }
        p_int12 = p_int12 + 4;
      }
      i_val11 = stack_val_44;
      if (stack_val_44 == 1) {
        if (p_int12 != (int *)0x0) {
          *p_int12 = stack_val_88;
          p_int12[1] = stack_val_84;
          p_int12[2] = stack_val_80;
          p_int12[3] = stack_val_7c;
        }
        p_int12 = p_int12 + 4;
      }
      else {
        for (; i_val11 != 0; i_val11 = i_val11 + -1) {
          if (p_int12 != (int *)0x0) {
            *p_int12 = stack_val_88;
            p_int12[1] = stack_val_84;
            p_int12[2] = stack_val_80;
            p_int12[3] = stack_val_7c;
          }
          p_int12 = p_int12 + 4;
        }
      }
      for (i_val11 = *piStack_28; i_val11 != piStack_28[1]; i_val11 = i_val11 + 0x10) {
      }
      piStack_24 = p_int2;
      if (*piStack_28 != 0) {
        cpp_operator_delete();
      }
      *piStack_28 = (int)piStack_24;
      piStack_28[1] = (int)p_int12;
      piStack_28[3] = (int)piStack_24 + i_val8;
    }
    else {
      if (p_int3 != (int *)0x0) {
        *p_int3 = stack_val_88;
        p_int3[1] = stack_val_84;
        p_int3[2] = stack_val_80;
        p_int3[3] = stack_val_7c;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
  }
  u_val1 = HW_GetSpriteAttr2Offset(arg_1);
  u_val4 = 0;
  if (stack_val_a8 != 0) {
    u_val4 = stack_val_a4 & 0xffff;
  }
  Animal_Routine_0805E99C(u_val1,stack_val_a8,u_val4,&stack_val_c4);
  Scene_Routine_080035C0(arg_1,(int)stack_val_c4,(int)stack_val_c2,2);
  p_uint6 = (undefined4 *)(arg_1 + 0x6B20);
  _call_via_r3(&stack_val_88,(int *)*p_uint6,
                  *(undefined2 *)(*piStack_2c + (uint)*(ushort *)(p_uint6 + 3) * 4),
                  *(undefined4 *)(*(int *)*p_uint6 + 0x10));
  gba_memcpy(&stack_val_88,&stack_val_88,0x20);
  stack_val_a8 = stack_val_88;
  stack_val_a4 = stack_val_84;
  stack_val_a0 = stack_val_80;
  stack_val_9c = stack_val_7c;
  stack_val_98 = stack_val_78;
  stack_val_94 = stack_val_74;
  stack_val_90 = stack_val_70;
  stack_val_8c = stack_val_6c;
  stack_val_c4 = *(short *)((int)p_uint6 + 0x1a);
  stack_val_c2 = *(short *)((int)p_uint6 + 0x1e);
  stack_val_bc = 0;
  i_val8 = arg_1 + 0x6CA8;
  stack_val_be = GBA_Vram_AllocateTileBlock(i_val8,*(undefined4 *)(i_val8 + 4));
  stack_val_c0 = HW_Routine_080074C0(arg_1 + 0x6CC8,*(undefined4 *)(arg_1 + 0x6CC8 + 4));
  stack_val_ac = 1;
  if ((int)((uint)*(byte *)(arg_1 + 0x6B34) * 0x40000000) < 0) {
    p_int2 = (int *)HW_GetSpriteAttr0Offset(arg_1);
    i_val11 = stack_val_a0;
    i_val8 = GBA_Vram_AllocateTileBlock(i_val8,*(undefined4 *)(i_val8 + 4));
    u_val4 = 0;
    if (stack_val_a0 != 0) {
      u_val4 = stack_val_9c & 0xffff;
    }
    piStack_28 = p_int2;
    HW_Routine_08008F0C(&stack_val_88,i_val11,i_val8 * 0x20 + 0x06010000,u_val4);
    p_int3 = (int *)p_int2[1];
    if (p_int3 == (int *)p_int2[3]) {
      stack_val_3c = 1;
      stack_val_40 = (int)p_int3 - *piStack_28 >> 4;
      p_int2 = &stack_val_40;
      if (stack_val_40 == 0) {
        p_int2 = &stack_val_3c;
      }
      if (stack_val_40 + *p_int2 == 0) {
        p_int2 = (int *)0x0;
        i_val8 = 0;
      }
      else {
        i_val8 = (stack_val_40 + *p_int2) * 0x10;
        p_int2 = (int *)runtime_malloc_aligned(i_val8);
        if (p_int2 == (int *)0x0) {
          p_int2 = (int *)VTable_Routine_080D3BC0(i_val8);
        }
      }
      p_int12 = p_int2;
      for (p_int5 = (int *)*piStack_28; p_int5 != p_int3; p_int5 = p_int5 + 4) {
        if (p_int12 != (int *)0x0) {
          i_val11 = p_int5[1];
          i_val13 = p_int5[2];
          *p_int12 = *p_int5;
          p_int12[1] = i_val11;
          p_int12[2] = i_val13;
          p_int12[3] = p_int5[3];
        }
        p_int12 = p_int12 + 4;
      }
      i_val11 = stack_val_3c;
      if (stack_val_3c == 1) {
        if (p_int12 != (int *)0x0) {
          *p_int12 = stack_val_88;
          p_int12[1] = stack_val_84;
          p_int12[2] = stack_val_80;
          p_int12[3] = stack_val_7c;
        }
        p_int12 = p_int12 + 4;
      }
      else {
        for (; i_val11 != 0; i_val11 = i_val11 + -1) {
          if (p_int12 != (int *)0x0) {
            *p_int12 = stack_val_88;
            p_int12[1] = stack_val_84;
            p_int12[2] = stack_val_80;
            p_int12[3] = stack_val_7c;
          }
          p_int12 = p_int12 + 4;
        }
      }
      for (i_val11 = *piStack_28; i_val11 != piStack_28[1]; i_val11 = i_val11 + 0x10) {
      }
      piStack_24 = p_int2;
      if (*piStack_28 != 0) {
        cpp_operator_delete();
      }
      *piStack_28 = (int)piStack_24;
      piStack_28[1] = (int)p_int12;
      piStack_28[3] = (int)piStack_24 + i_val8;
    }
    else {
      if (p_int3 != (int *)0x0) {
        *p_int3 = stack_val_88;
        p_int3[1] = stack_val_84;
        p_int3[2] = stack_val_80;
        p_int3[3] = stack_val_7c;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
  }
  u_val1 = HW_GetSpriteAttr2Offset(arg_1);
  u_val4 = 0;
  if (stack_val_a8 != 0) {
    u_val4 = stack_val_a4 & 0xffff;
  }
  Animal_Routine_0805E99C(u_val1,stack_val_a8,u_val4,&stack_val_c4);
  Scene_Routine_080035C0(arg_1,(int)stack_val_c4,(int)stack_val_c2,2);
  return;
}

// =============================================================================
// Function: Scene_Routine_080035C0 @ 0x080035C0
// =============================================================================
void Scene_Routine_080035C0(int arg_1,undefined2 arg_2,undefined2 arg_3,int arg_4)

{
  int i_val1;
  undefined4 u_val2;
  uint u_val3;
  undefined2 stack_val_74;
  undefined2 stack_val_72;
  undefined2 stack_val_70;
  undefined2 stack_val_6e;
  undefined2 stack_val_6c;
  undefined4 stack_val_68;
  undefined1 stack_val_64;
  undefined1 stack_val_63;
  undefined4 stack_val_60;
  undefined1 stack_val_5c;
  int stack_val_58;
  uint stack_val_54;
  undefined4 stack_val_50;
  uint stack_val_4c;
  undefined4 stack_val_48;
  uint stack_val_44;
  undefined4 stack_val_40;
  uint stack_val_3c;
  int stack_val_38;
  uint stack_val_34;
  undefined4 stack_val_30;
  undefined4 stack_val_2c;
  undefined4 stack_val_28;
  undefined4 stack_val_24;
  undefined4 stack_val_20;
  undefined4 stack_val_1c;
  
  stack_val_74 = 0;
  stack_val_72 = 0;
  stack_val_70 = 0;
  stack_val_6e = 0;
  stack_val_6c = 0;
  stack_val_68 = 0;
  stack_val_64 = 0;
  stack_val_63 = 0;
  stack_val_60 = 0;
  stack_val_5c = 0;
  stack_val_58 = 0;
  stack_val_54 = stack_val_54 & 0xffff0000;
  stack_val_50 = 0;
  stack_val_4c = stack_val_4c & 0xffff0000;
  stack_val_48 = 0;
  stack_val_44 = stack_val_44 & 0xffff0000;
  stack_val_40 = 0;
  stack_val_3c = stack_val_3c & 0xffff0000;
  if (arg_4 == 1) {
    Animal_Routine_0805E860(arg_1 + 0x6b80,0x91B);
    i_val1 = 0x6CD8;
  }
  else if (arg_4 < 2) {
    if (arg_4 != 0) goto LAB_08003666;
    Animal_Routine_0805E860(arg_1 + 0x6b80,0x91A);
    i_val1 = 0x6CD0;
  }
  else {
    if (arg_4 != 2) goto LAB_08003666;
    Animal_Routine_0805E860(arg_1 + 0x6b80,0x91C);
    i_val1 = 0x6CE0;
  }
  stack_val_6e = GBA_Vram_AllocateTileBlock(arg_1 + i_val1,*(undefined4 *)(arg_1 + i_val1 + 4));
LAB_08003666:
  _call_via_r3(&stack_val_38,*(int **)(arg_1 + 0x6b80),
                  *(undefined2 *)
                   (*(int *)(arg_1 + 0x6B84) + (uint)*(ushort *)(arg_1 + 0x6b8c) * 4),
                  *(undefined4 *)(**(int **)(arg_1 + 0x6b80) + 0x10));
  gba_memcpy(&stack_val_38,&stack_val_38,0x20);
  stack_val_58 = stack_val_38;
  stack_val_54 = stack_val_34;
  stack_val_50 = stack_val_30;
  stack_val_4c = stack_val_2c;
  stack_val_48 = stack_val_28;
  stack_val_44 = stack_val_24;
  stack_val_40 = stack_val_20;
  stack_val_3c = stack_val_1c;
  stack_val_6c = 0;
  stack_val_74 = arg_2;
  stack_val_72 = arg_3;
  stack_val_70 = HW_Routine_080074C0(arg_1 + 0x6CE8,*(undefined4 *)(arg_1 + 0x6CE8 + 4));
  stack_val_5c = 1;
  u_val2 = HW_GetSpriteAttr2Offset(arg_1);
  u_val3 = 0;
  if (stack_val_58 != 0) {
    u_val3 = stack_val_54 & 0xffff;
  }
  Animal_Routine_0805E99C(u_val2,stack_val_58,u_val3,&stack_val_74);
  return;
}

// =============================================================================
// Function: Scene_Routine_080036F8 @ 0x080036F8
// =============================================================================
u32 Scene_Routine_080036F8(undefined4 *arg_1)

{
  undefined4 u_val1;
  
  *arg_1 = gRomData_080E5A18;
  CppRuntime_OperatorNewArray(0x6D34);
  u_val1 = Scene_Routine_08000914();
  arg_1[1] = u_val1;
  return arg_1;
}

// =============================================================================
// Function: Scene_Routine_0800371C @ 0x0800371C
// =============================================================================
void Scene_Routine_0800371C(undefined4 *arg_1,undefined4 arg_2)

{
  int i_val1;
  
  *arg_1 = gRomData_080E5A18;
  i_val1 = arg_1[1];
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 4) + 8));
  }
  SramProxy_VerifyBufferParity(arg_1,arg_2);
  return;
}

// =============================================================================
// Function: Scene_Routine_0800374C @ 0x0800374C
// =============================================================================
u32 Scene_Routine_0800374C(undefined4 *arg_1,int arg_2)

{
  undefined4 facing_buffer [3];
  
  Scene_Routine_08000D64(facing_buffer,*(undefined4 *)(arg_2 + 4));
  *arg_1 = facing_buffer[0];
  return arg_1;
}

// =============================================================================
// Function: Scene_Routine_08003B40 @ 0x08003B40
// =============================================================================
void Scene_Routine_08003B40(undefined4 arg_1)

{
  int i_val1;
  undefined4 u_val2;
  uint stack_buf_1c [3];
  undefined1 temp_coords [4];
  
  i_val1 = HW_GetSpriteAttr1Offset();
  *(undefined2 *)(i_val1 + 0x50) = 0x3f;
  u_val2 = HW_GetSpriteAttr1Offset(arg_1);
  stack_buf_1c[0] = 0;
  stack_buf_1c[1] = 0;
  stack_buf_1c[2] = gRomData_080E5B80;
  Fade_Init(temp_coords,u_val2);
  Fade_StartFadeOut(temp_coords,0x889,1,1);
  i_val1 = HW_GetPaletteBankOffset(arg_1);
  _call_via_r2(i_val1,stack_buf_1c,*(undefined4 *)(*(int *)(i_val1 + 8) + 0x10));
  while ((int)(-stack_buf_1c[0] | stack_buf_1c[0]) < 0) {
    HW_Routine_080087C8(arg_1);
  }
  Farm_Routine_080094B8(stack_buf_1c,2);
  return;
}

// =============================================================================
// Function: Scene_Routine_08003BB4 @ 0x08003BB4
// =============================================================================
void Scene_Routine_08003BB4(undefined4 arg_1)

{
  int i_val1;
  undefined4 u_val2;
  uint stack_buf_1c [3];
  undefined1 temp_coords [4];
  
  i_val1 = HW_GetSpriteAttr1Offset();
  *(undefined2 *)(i_val1 + 0x50) = 0x3f;
  u_val2 = HW_GetSpriteAttr1Offset(arg_1);
  stack_buf_1c[0] = 0;
  stack_buf_1c[1] = 0;
  stack_buf_1c[2] = gRomData_080E5B80;
  Fade_Init(temp_coords,u_val2);
  Fade_StartFadeIn(temp_coords,0x889,1,1);
  i_val1 = HW_GetPaletteBankOffset(arg_1);
  _call_via_r2(i_val1,stack_buf_1c,*(undefined4 *)(*(int *)(i_val1 + 8) + 0x10));
  while ((int)(-stack_buf_1c[0] | stack_buf_1c[0]) < 0) {
    HW_Routine_080087C8(arg_1);
  }
  Farm_Routine_080094B8(stack_buf_1c,2);
  return;
}

// =============================================================================
// Function: Scene_Routine_08003C28 @ 0x08003C28
// =============================================================================
void Scene_Routine_08003C28(int arg_1)

{
  undefined4 u_val1;
  undefined4 u_val2;
  undefined4 u_val3;
  undefined4 u_val4;
  undefined4 u_val5;
  
  u_val1 = HW_Routine_080088DC();
  u_val2 = HW_GetSpriteAttr2Offset(arg_1);
  u_val3 = HW_GetSpriteAttr1Offset(arg_1);
  u_val4 = HW_GetPaletteBankOffset(arg_1);
  u_val5 = HW_Routine_0800894C(arg_1);
  Animal_Routine_08050D3C(arg_1 + 0x10,u_val1,u_val2,u_val3,u_val4,u_val5,arg_1 + 0x14);
  return;
}

// =============================================================================
// Function: Scene_Routine_08003C80 @ 0x08003C80
// =============================================================================
u32 Scene_Routine_08003C80(void)

{
  int i_val1;
  int i_val2;
  int i_val3;
  short *psVar4;
  undefined4 u_val5;
  uint u_val6;
  undefined4 u_val7;
  uint loop_i;
  short s_val9;
  undefined4 *p_uint10;
  int i_val11;
  undefined4 u_val12;
  int i_val13;
  undefined4 *p_uint14;
  undefined4 stack_val_4;
  undefined4 *p_uint15;
  undefined4 *p_uint16;
  
  i_val13 = 0x0600E800;
  i_val2 = 0xFFFFD2D8;
  p_uint14 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFD2D8);
  p_uint15 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFD2D8);
  p_uint16 = (undefined4 *)(&stack0xffffffe0 + 0xFFFFD2D8);
  HW_Routine_08008EB8(0,0x06007FE0,0x20);
  HW_Routine_08008EB8(0xffffffff,i_val13,0x800);
  s_val9 = 0;
  loop_i = 0;
  i_val1 = 0x2D08 + i_val2;
  *(undefined1 **)(&stack0xffffffe0 + 0x2D24 + i_val2) = &stack0xffffffe8 + i_val2;
  *(undefined1 **)(&stack0xffffffe0 + 0x2D18 + i_val2) =
       &stack0xffffffe0 + 0x2D0C + i_val2;
  *(undefined1 **)(&stack0xffffffe0 + 0x2D1C + i_val2) =
       &stack0xffffffe0 + 0x2D10 + i_val2;
  *(undefined1 **)(&stack0xffffffe0 + 0x2D20 + i_val2) =
       &stack0xffffffe0 + 0x2D14 + i_val2;
  do {
    u_val6 = 0;
    i_val3 = loop_i * 0x40;
    loop_i = loop_i + 1;
    psVar4 = (short *)(i_val3 + i_val13 + 0x40);
    do {
      *psVar4 = s_val9;
      s_val9 = s_val9 + 1;
      psVar4 = psVar4 + 1;
      u_val6 = u_val6 + 1;
    } while (u_val6 < 0x1e);
  } while (loop_i < 0xc);
  *(undefined2 *)(&stack0xffffffe0 + 0x2D08 + i_val2) = 0x1e;
  *(undefined2 *)(&stack0xffffffe2 + i_val1) = 0xc;
  ScriptEngine_Routine_0804E7A0(*(undefined4 *)(&stack0xffffffe0 + 0x2D08 + i_val2),
                *(undefined4 *)(&stack0xffffffe0 + 0x2D24 + i_val2),0);
  loop_i = 0;
  u_val12 = *(undefined4 *)(&stack0xffffffe0 + 0x2D24 + i_val2);
  i_val13 = 0;
  i_val1 = 0x2D0C + i_val2;
  do {
    p_uint10 = (undefined4 *)(gRomData_080E8704 + i_val13);
    i_val11 = loop_i * 0x10;
    u_val7 = *p_uint10;
    *(undefined2 *)(&stack0xffffffe0 + i_val1) = 0x1e;
    *(undefined2 *)(*(int *)(&stack0xffffffe0 + 0x2D18 + i_val2) + 2) = 0xc;
    u_val5 = *(undefined4 *)(&stack0xffffffe0 + i_val1);
    *p_uint14 = u_val7;
    ScriptEngine_Routine_0804E8F0(u_val5,u_val12,0x10,i_val11);
    u_val7 = p_uint10[1];
    i_val3 = 0x2D10 + i_val2;
    *(undefined2 *)(&stack0xffffffe0 + i_val3) = 0x1e;
    *(undefined2 *)(*(int *)(&stack0xffffffe0 + 0x2D1C + i_val2) + 2) = 0xc;
    u_val5 = *(undefined4 *)(&stack0xffffffe0 + i_val3);
    *p_uint15 = u_val7;
    ScriptEngine_Routine_0804E8F0(u_val5,u_val12,0x80,i_val11);
    u_val7 = p_uint10[2];
    i_val3 = 0x2D14 + i_val2;
    *(undefined2 *)(&stack0xffffffe0 + i_val3) = 0x1e;
    *(undefined2 *)(*(int *)(&stack0xffffffe0 + 0x2D20 + i_val2) + 2) = 0xc;
    u_val5 = *(undefined4 *)(&stack0xffffffe0 + i_val3);
    *p_uint16 = u_val7;
    ScriptEngine_Routine_0804E8F0(u_val5,u_val12,0xc0,i_val11);
    i_val13 = i_val13 + 0xc;
    loop_i = loop_i + 1;
  } while (loop_i < 6);
  GBA_DMA3_FastCopy(*(undefined4 *)(&stack0xffffffe0 + 0x2D24 + i_val2),0x6000000,0x2d00);
  return *(undefined4 *)((int)&stack_val_4 + 0x2D28 + i_val2);
}

// =============================================================================
// Function: Scene_Routine_08003DF0 @ 0x08003DF0
// =============================================================================
void Scene_Routine_08003DF0(int arg_1,uint arg_2,uint arg_3,undefined2 arg_4)

{
  int i_val1;
  uint *p_uint2;
  uint u_val3;
  uint u_val4;
  uint stack_val_14;
  
  u_val4 = (arg_3 & 0xFFFFFF00 & 0x1ffffff) >> 0x10;
  u_val3 = u_val4 + 0x80;
  if (*(char *)(arg_1 + 0x84 + arg_2) != '\0') {
    u_val3 = u_val4 + 0xc0;
  }
  stack_val_14 = 0xFE00FFFF &
              (arg_3 & 0xFFFFFF00 | (arg_3 & 0xff) + 8 + (arg_2 * 2 + 1) * 8 & 0xff) |
              (u_val3 & 0x1FF) << 0x10;
  if ((arg_2 == 1) && (*(int *)(arg_1 + 0x80) != 1)) {
    stack_val_14 = 0xFFFFFCFF & stack_val_14 | 0x200;
  }
  i_val1 = HW_GetSpriteAttr2Offset(arg_1);
  p_uint2 = (uint *)(i_val1 + (arg_2 & 0x7f) * 8 + 4);
  *p_uint2 = stack_val_14;
  *(undefined2 *)(p_uint2 + 1) = arg_4;
  return;
}

// =============================================================================
// Function: Scene_Routine_08003E88 @ 0x08003E88
// =============================================================================
void Scene_Routine_08003E88(undefined4 arg_1,int arg_2,uint arg_3,undefined2 arg_4)

{
  uint u_val1;
  int i_val2;
  uint u_val3;
  
  if (arg_2 == 1) {
    arg_2 = 0;
  }
  u_val3 = ((arg_3 & 0xFFFFFF00 & 0x1ffffff) >> 0x10) + 0x10 & 0x1FF;
  u_val1 = 0xFE00FFFF &
          (arg_3 & 0xFFFFFF00 | (arg_3 & 0xff) + 8 + (arg_2 * 2 + 1) * 8 & 0xff);
  i_val2 = HW_GetSpriteAttr2Offset(arg_1);
  *(uint *)(i_val2 + 0x34) = u_val1 | u_val3 << 0x10;
  *(undefined2 *)(i_val2 + 0x38) = arg_4;
  return;
}

// =============================================================================
// Function: Scene_Routine_08003F9C @ 0x08003F9C
// =============================================================================
u32 Scene_Routine_08003F9C(int arg_1)

{
  ushort u_val1;
  uint u_val2;
  int i_val3;
  undefined4 u_val4;
  int i_val5;
  int i_val6;
  ushort stack_buf_38 [2];
  undefined4 stack_val_34;
  ushort *puStack_30;
  undefined4 *puStack_2c;
  int stack_val_28;
  int stack_val_24;
  
  if (*(int *)(arg_1 + 8) != 0) {
    u_val2 = (uint)*(byte *)(arg_1 + 0x85);
    i_val5 = arg_1 + 0x90;
    stack_val_34 = SramProxy_GetSaveSlotOffset(i_val5,u_val2);
    i_val6 = 3;
    stack_val_28 = arg_1 + 0x10;
    puStack_2c = (undefined4 *)(arg_1 + 0x8c);
    stack_val_24 = arg_1 + 0x18;
    puStack_30 = stack_buf_38;
    do {
      u_val1 = Interrupt_WaitForVBlank(0x1000);
      *puStack_30 = u_val1 & 0x1000;
      i_val3 = Farmer_Routine_080115B0(*(undefined4 *)(arg_1 + 8),i_val5,stack_val_34);
      if (i_val3 == 0) {
        Scene_Routine_08003788(arg_1,arg_1 + u_val2 * 0x80 + 0x98,*(undefined4 *)(arg_1 + 8));
        Animal_Routine_08050DC8(stack_val_28,u_val2 * 0x80 + arg_1 + 0x98,0,0);
        *puStack_2c = 3;
        HW_Routine_08008B6C(stack_val_24,0xc5);
        SramProxy_ReadSaveSlot(i_val5,u_val2);
        SramProxy_FlushSlotBuffer(i_val5,u_val2);
        if (stack_buf_38[0] != 0) {
          Interrupt_EnableHBlank();
        }
        u_val4 = 1;
        goto LAB_0800408c;
      }
      if (stack_buf_38[0] != 0) {
        Interrupt_EnableHBlank();
      }
      i_val6 = i_val6 + -1;
    } while (i_val6 != 0);
  }
  Animal_Routine_08050DC8(arg_1 + 0x10,gRomData_080E88C8,0,0);
  *(undefined4 *)(arg_1 + 0x8c) = 3;
  HW_Routine_08008B6C(arg_1 + 0x18,199);
  u_val4 = 0;
LAB_0800408c:
  return u_val4;
}

