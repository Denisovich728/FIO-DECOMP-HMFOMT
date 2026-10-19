// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: AUDIO_M4A (165 functions)
// Description: Music Player 2000 sound driver, PCM playback and MIDI sequence synthesizer
// =============================================================================

#include "../../include/audio/m4a.h"

// =============================================================================
// Function: M4A_Routine_080C0910 @ 0x080C0910
// =============================================================================
undefined4 M4A_Routine_080C0910(int handle)

{
  char c_char1;
  int i_val2;
  char *p_char3;
  
  p_char3 = (char *)(handle + 0x5FA);
  c_char1 = *p_char3;
  if (c_char1 == '\x13') {
    if (*(int *)(handle + 0x5AC) == 3) {
      *(undefined1 *)(handle + 0x60A) = 0;
    }
    else {
      *(undefined1 *)(handle + 0x60A) = 1;
    }
  }
  else if (c_char1 == '\x14') {
    *(undefined1 *)(handle + 0x5F9) = 0;
    *(undefined1 *)(handle + 0x5f8) = 0;
    *p_char3 = '\0';
    i_val2 = 0x609;
    *(undefined1 *)(handle + 0x609) = 0;
    if (*(char *)(handle + 0x60a) == '\0') {
      *(char *)(handle + 0x5FF) = *(char *)(handle + 0x5FF) + '\x01';
      HW_Routine_08008B6C(handle + i_val2 + -0x89,199);
    }
    else {
      *(char *)(handle + 0x5FE) = *(char *)(handle + 0x5FE) + '\x01';
      HW_Routine_08008B6C(handle + 0x580,0xbc);
    }
    i_val2 = 0x5AC;
    *(undefined4 *)(handle + 0x5AC) = 0;
    *(undefined1 *)(handle + 0x60E) = 1;
    *(undefined4 *)(handle + i_val2 + -8) = 1;
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080C09D8 @ 0x080C09D8
// =============================================================================
ulonglong M4A_Routine_080C09D8(int handle)

{
  int i_val1;
  ushort *p_uint2;
  
  if (*(int *)(handle + 0x5a0) == 0) {
    if (*(char *)(handle + 0x612) != '\0') {
      i_val1 = *(int *)(handle + 0x614) * 0x54 + (uint)*gRomData_08107FB0;
      goto LAB_080c0b44;
    }
    if (*(char *)(handle + 0x611) != '\0') {
      i_val1 = *(int *)(handle + 0x614) * 0x54 + (uint)*(ushort *)(gRomData_08107FB0 + 4);
      goto LAB_080c0b44;
    }
    p_uint2 = (ushort *)
             (((uint)*(byte *)(handle + 0x609) * 4 + *(int *)(handle + 0x5AC) + 3)
              * 2 + gRomData_08107FB0);
  }
  else {
    if (*(int *)(handle + 0x5a0) != 3) {
      i_val1 = *(int *)(handle + 0x614) * 0x54 + (uint)*(ushort *)(gRomData_08107FB0 + 6);
      goto LAB_080c0b44;
    }
    if (*(int *)(handle + 0x5A4) == 0) {
      p_uint2 = (ushort *)
               (((uint)*(byte *)(handle + 0x609) * 4 +
                *(int *)(handle + 0x609 + -0x5d) + 3) * 2 + gRomData_08107FB0);
    }
    else {
      if (*(int *)(handle + 0x5A4) != 1) {
        i_val1 = *(int *)(handle + 0x614) * 0x54 + (uint)*(ushort *)(gRomData_08107FB0 + 6);
        goto LAB_080c0b44;
      }
      if (*(char *)(handle + 0x60F) != '\0') {
        *(char *)(handle + 0x60F) = '\0';
        i_val1 = *(int *)(handle + 0x614) * 0x54 + (uint)*(ushort *)(gRomData_08107FB0 + 6);
        goto LAB_080c0b44;
      }
      if (*(char *)(handle + 0x60A) != '\0') {
        i_val1 = *(int *)(handle + 0x614) * 0x54 + (uint)*gRomData_08107FB0;
        goto LAB_080c0b44;
      }
      i_val1 = math_rand();
      p_uint2 = (ushort *)((1 - ((i_val1 << 0x10) >> 0x1f)) * 2 + gRomData_08107FB0);
    }
  }
  i_val1 = *(int *)(handle + 0x614) * 0x54 + (uint)*p_uint2;
LAB_080c0b44:
  return ((u32)(i_val1) & 0xffff);
}

// =============================================================================
// Function: M4A_Routine_080C0B70 @ 0x080C0B70
// =============================================================================
undefined4 M4A_Routine_080C0B70(undefined4 handle)

{
  uint u_val1;
  
  u_val1 = HW_Routine_080088CC();
  M4A_Routine_080C0CA4(handle);
  if ((u_val1 & 8) == 0) {
    M4A_Routine_080C0B94(handle);
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080C0B94 @ 0x080C0B94
// =============================================================================
undefined4 M4A_Routine_080C0B94(int handle)

{
  char c_char1;
  int i_val2;
  byte b_flag3;
  uint u_val4;
  int i_val5;
  char *p_char6;
  byte *pbVar7;
  int *p_int8;
  char *p_char9;
  
  u_val4 = HW_Routine_080088CC();
  if ((u_val4 & 1) == 0) {
    p_char9 = (char *)(handle + 0x609);
    if (*p_char9 == '\0') {
      return;
    }
    p_char6 = (char *)(handle + 0x5FC);
    c_char1 = *p_char6;
    *p_char6 = c_char1 + '\x01';
    if ((char)(c_char1 + '\x01') != '\x1e') {
      return;
    }
    *p_char9 = '\0';
    *(undefined1 *)(handle + 0x60E) = 1;
    *p_char6 = '\0';
    return;
  }
  p_char9 = (char *)(handle + 0x609);
  if (*p_char9 == '\0') {
    *(undefined1 *)(handle + 0x60E) = 1;
  }
  *p_char9 = '\x01';
  i_val5 = 0x5FC;
  *(undefined1 *)(handle + 0x5FC) = 0;
  b_flag3 = *(byte *)(handle + 0x5FA) + 1;
  *(byte *)(handle + 0x5FA) = b_flag3;
  i_val2 = 0x5F9;
  if ((b_flag3 < 2) || (0x14 < b_flag3)) goto LAB_080c0c88;
  if (*(byte *)(handle + 0x5FB) < 0xd) {
    pbVar7 = (byte *)(handle + i_val5 + -4);
    *pbVar7 = *pbVar7 + 1;
    *(undefined1 *)(handle + i_val5 + -3) = 0;
    if (4 < *pbVar7) {
      *pbVar7 = 0;
      p_int8 = (int *)(handle + 0x5AC);
      if (*p_int8 < 3) {
        i_val5 = *p_int8 + 1;
LAB_080c0c78:
        *p_int8 = i_val5;
        *(undefined1 *)(handle + 0x60E) = 1;
      }
    }
  }
  else {
    pbVar7 = (byte *)(handle + 0x5F9);
    *pbVar7 = *pbVar7 + 1;
    *(undefined1 *)(handle + i_val2 + -1) = 0;
    if (2 < *pbVar7) {
      *pbVar7 = 0;
      p_int8 = (int *)(handle + 0x5AC);
      if (0 < *p_int8) {
        i_val5 = *p_int8 + -1;
        goto LAB_080c0c78;
      }
    }
  }
  *(undefined1 *)(handle + 0x5FB) = 0;
LAB_080c0c88:
  M4A_Routine_080C0910(handle);
  return;
}

// =============================================================================
// Function: M4A_Routine_080C0CA4 @ 0x080C0CA4
// =============================================================================
undefined4 M4A_Routine_080C0CA4(int handle)

{
  uint u_val1;
  int i_val2;
  int *p_int3;
  
  u_val1 = HW_Routine_080088CC();
  if ((u_val1 & 8) != 0) {
    HW_Routine_08008B6C(handle + 0x584,0xb8);
    p_int3 = (int *)(handle + 0x5A4);
    i_val2 = *p_int3;
    if (i_val2 == 1) {
      *p_int3 = 3;
      *(undefined2 *)(*(int *)(handle + 0x4d8) + 0x10) = 0;
    }
    else {
      if (i_val2 < 2) {
        if (i_val2 != 0) {
          return;
        }
        i_val2 = 2;
      }
      else {
        if (i_val2 != 2) {
          if (i_val2 != 3) {
            return;
          }
          *p_int3 = 1;
          *(undefined2 *)(*(int *)(handle + 0x4d8) + 0x10) = 0x100;
          return;
        }
        i_val2 = 0;
      }
      *p_int3 = i_val2;
    }
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080C0D1C @ 0x080C0D1C
// =============================================================================
undefined8 M4A_Routine_080C0D1C(undefined4 *handle,undefined4 channel)

{
  undefined4 u_val1;
  
  *handle = gRomData_080E8544;
  u_val1 = Dispatcher_Routine_080005D4(0x620);
  u_val1 = NPC_Routine_080BC938(u_val1,channel);
  handle[1] = u_val1;
  return handle;
}

// =============================================================================
// Function: M4A_Routine_080C0D44 @ 0x080C0D44
// =============================================================================
undefined4 M4A_Routine_080C0D44(undefined4 *handle,undefined4 channel)

{
  int i_val1;
  
  *handle = gRomData_080E8544;
  i_val1 = handle[1];
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 4) + 8));
  }
  SramProxy_VerifyBufferParity(handle,channel);
  return;
}

// =============================================================================
// Function: M4A_Routine_080C0D74 @ 0x080C0D74
// =============================================================================
void M4A_Routine_080C0D74(int handle)

{
  
  NPC_Routine_080BCCD4(*(undefined4 *)(handle + 4));
  return;
}

// =============================================================================
// Function: M4A_Routine_080C0D90 @ 0x080C0D90
// =============================================================================
undefined8 M4A_Routine_080C0D90(undefined4 *handle,int channel)

{
  undefined4 facing_buffer [3];
  
  NPC_Routine_080BCCE0(facing_buffer,*(undefined4 *)(channel + 4));
  *handle = facing_buffer[0];
  return handle;
}

// =============================================================================
// Function: M4A_Routine_080C0DCC @ 0x080C0DCC
// =============================================================================
undefined8 M4A_Routine_080C0DCC(int handle,undefined4 *channel)

{
  int i_val1;
  undefined4 u_val2;
  undefined4 *p_uint3;
  undefined4 *p_uint4;
  undefined4 *p_uint5;
  undefined1 stack_buf_64 [4];
  undefined1 stack_buf_60 [4];
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  undefined4 *puStack_54;
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  puStack_5c = channel;
  HW_Routine_08008444();
  *(undefined4 *)(handle + 4) = gRomData_080E8554;
  i_val1 = 3;
  do {
    i_val1 = i_val1 + -1;
  } while (i_val1 != -1);
  u_val2 = Dispatcher_Routine_080005D4(4);
  HW_Routine_0800835C(stack_buf_64);
  HW_Routine_0800770C(stack_buf_60);
  u_val2 = Animal_Routine_08050CC0(u_val2,0,0x18,0,0,stack_buf_64,stack_buf_60);
  *(undefined4 *)(handle + 0x51C) = u_val2;
  HW_Routine_08007714(stack_buf_60,2);
  HW_Routine_08008364(stack_buf_64,2);
  u_val2 = Dispatcher_Routine_080005D4(0x30);
  u_val2 = Animal_Routine_0805E6CC(u_val2,gRomGfx_0873E5B0);
  *(undefined4 *)(handle + 0x520) = u_val2;
  u_val2 = Dispatcher_Routine_080005D4(0x30);
  u_val2 = Animal_Routine_0805E6CC(u_val2,gRomGfx_0873DE44);
  *(undefined4 *)(handle + 0x524) = u_val2;
  u_val2 = Dispatcher_Routine_080005D4(0x30);
  u_val2 = Animal_Routine_0805E6CC(u_val2,gRomGfx_087405A0);
  *(undefined4 *)(handle + 0x528) = u_val2;
  u_val2 = Dispatcher_Routine_080005D4(0x30);
  u_val2 = Animal_Routine_0805E6CC(u_val2,gRomGfx_0858BA28);
  *(undefined4 *)(handle + 0x52C) = u_val2;
  u_val2 = Dispatcher_Routine_080005D4(0x30);
  u_val2 = Animal_Routine_0805E6CC(u_val2,gRomGfx_0873D5FC);
  *(undefined4 *)(handle + 0x530) = u_val2;
  u_val2 = Dispatcher_Routine_080005D4(0x30);
  u_val2 = Animal_Routine_0805E6CC(u_val2,gRomGfx_08740908);
  *(undefined4 *)(handle + 0x534) = u_val2;
  u_val2 = Dispatcher_Routine_080005D4(0x30);
  u_val2 = Animal_Routine_0805E6CC(u_val2,gRomGfx_0871D51C);
  *(undefined4 *)(handle + 0x538) = u_val2;
  u_val2 = Dispatcher_Routine_080005D4(0x30);
  u_val2 = Animal_Routine_0805E6CC(u_val2,gRomGfx_0872BE64);
  *(undefined4 *)(handle + 0x53C) = u_val2;
  u_val2 = Dispatcher_Routine_080005D4(0x30);
  u_val2 = Animal_Routine_0805E6CC(u_val2,gRomGfx_0873D6D8);
  *(undefined4 *)(handle + 0x540) = u_val2;
  p_uint3 = (undefined4 *)Dispatcher_Routine_080005D4(0x10);
  u_val2 = HW_GetSpriteAttr1Offset(handle);
  *p_uint3 = 0;
  p_uint3[1] = 0;
  p_uint3[2] = gRomData_080E5B80;
  Farm_Routine_08009300(p_uint3 + 3,u_val2);
  i_val1 = 0x544;
  *(undefined4 **)(handle + 0x544) = p_uint3;
  *(undefined4 *)(handle + 0x550) = 0;
  *(undefined4 *)(handle + i_val1 + 0x10) = 0;
  *(undefined4 *)(handle + 0x558) = 0;
  *(undefined2 *)(handle + 0x55c) = 0;
  p_uint3 = (undefined4 *)(handle + i_val1 + 0x1c);
  *p_uint3 = 0;
  *(undefined2 *)(p_uint3 + 1) = 0;
  *(undefined4 *)(handle + 0x568) = 0;
  *(undefined2 *)(handle + 0x56c) = 0;
  p_uint3 = (undefined4 *)(handle + i_val1 + 0x2c);
  *p_uint3 = 0;
  *(undefined2 *)(p_uint3 + 1) = 0;
  *(undefined4 *)(handle + 0x578) = 0;
  *(undefined4 *)(handle + i_val1 + 0x38) = 0;
  *(undefined4 *)(handle + 0x580) = 0;
  *(undefined2 *)(handle + 0x584) = 0;
  p_uint3 = (undefined4 *)(handle + i_val1 + 0x44);
  *p_uint3 = 0;
  *(undefined2 *)(p_uint3 + 1) = 0;
  *(undefined4 *)(handle + 0x590) = 0;
  *(undefined2 *)(handle + 0x594) = 0;
  p_uint3 = (undefined4 *)(handle + i_val1 + 0x54);
  *p_uint3 = 0;
  *(undefined2 *)(p_uint3 + 1) = 0;
  *(undefined4 *)(handle + 0x5a0) = 0;
  *(undefined4 *)(handle + i_val1 + 0x60) = 0;
  *(undefined4 *)(handle + 0x5a8) = 0;
  *(undefined2 *)(handle + 0x5ac) = 0;
  p_uint3 = (undefined4 *)(handle + i_val1 + 0x6c);
  *p_uint3 = 0;
  *(undefined2 *)(p_uint3 + 1) = 0;
  *(undefined4 *)(handle + 0x5b8) = 0;
  *(undefined2 *)(handle + 0x5bc) = 0;
  p_uint3 = (undefined4 *)(handle + i_val1 + 0x7c);
  *p_uint3 = 0;
  *(undefined2 *)(p_uint3 + 1) = 0;
  *(undefined4 *)(handle + 0x5c8) = 0;
  *(undefined4 *)(handle + i_val1 + 0x88) = 0;
  *(undefined4 *)(handle + 0x5d0) = 0;
  *(undefined2 *)(handle + 0x5d4) = 0;
  p_uint3 = (undefined4 *)(handle + i_val1 + 0x94);
  *p_uint3 = 0;
  *(undefined2 *)(p_uint3 + 1) = 0;
  *(undefined4 *)(handle + 0x5e0) = 0;
  *(undefined2 *)(handle + 0x5e4) = 0;
  p_uint3 = (undefined4 *)(handle + i_val1 + 0xa4);
  *p_uint3 = 0;
  *(undefined2 *)(p_uint3 + 1) = 0;
  *(undefined4 *)(handle + 0x5f0) = 0;
  *(undefined4 *)(handle + i_val1 + 0xb0) = 0;
  *(undefined4 *)(handle + 0x5f8) = 0;
  *(undefined2 *)(handle + 0x5fc) = 0;
  p_uint3 = (undefined4 *)(handle + i_val1 + 0xbc);
  *p_uint3 = 0;
  *(undefined2 *)(p_uint3 + 1) = 0;
  *(undefined4 *)(handle + 0x608) = 0;
  *(undefined2 *)(handle + 0x60c) = 0;
  p_uint3 = (undefined4 *)(handle + i_val1 + 0xcc);
  *p_uint3 = 0;
  *(undefined2 *)(p_uint3 + 1) = 0;
  *(undefined4 *)(handle + 0x618) = 0;
  p_uint4 = (undefined4 *)(handle + 0x61C);
  i_val1 = 0x18;
  p_uint5 = (undefined4 *)(handle + 0x61C + 0x74);
  p_uint3 = (undefined4 *)(0x61C + 0xf4 + handle);
  puStack_34 = (undefined4 *)(handle + 0x740);
  puStack_30 = (undefined4 *)(handle + 0x748);
  puStack_2c = (undefined4 *)(handle + 0x760);
  puStack_28 = (undefined4 *)(handle + 0x768);
  puStack_24 = (undefined4 *)(handle + 0x770);
  puStack_58 = (undefined4 *)(handle + 0x7a8);
  puStack_54 = (undefined4 *)(handle + 0x7b0);
  puStack_50 = (undefined4 *)(handle + 0x7b8);
  puStack_4c = (undefined4 *)(handle + 2000);
  puStack_48 = (undefined4 *)(handle + 0x7d8);
  puStack_44 = (undefined4 *)(handle + 0x7e0);
  puStack_40 = (undefined4 *)(handle + 0x7f8);
  puStack_3c = (undefined4 *)(handle + 0x800);
  puStack_38 = (undefined4 *)(handle + 0x808);
  do {
    *p_uint4 = 0;
    p_uint4 = p_uint4 + 1;
    i_val1 = i_val1 + -1;
  } while (i_val1 != -1);
  *(undefined4 *)(handle + 0x680) = 0;
  *(undefined2 *)(handle + 0x684) = 0;
  *(undefined4 *)(handle + 0x688) = 0;
  *(undefined2 *)(handle + 0x68c) = 0;
  *p_uint5 = 0;
  *(undefined2 *)(p_uint5 + 1) = 0;
  *(undefined4 *)(handle + 0x698) = 0;
  *(undefined2 *)(handle + 0x69c) = 0;
  *(undefined4 *)(handle + 0x6a0) = 0;
  p_uint4 = (undefined4 *)(handle + 0x6A4);
  i_val1 = 0x18;
  do {
    *p_uint4 = 0;
    p_uint4 = p_uint4 + 1;
    i_val1 = i_val1 + -1;
  } while (i_val1 != -1);
  *(undefined4 *)(handle + 0x708) = 0;
  *(undefined2 *)(handle + 0x70c) = 0;
  *p_uint3 = 0;
  *(undefined2 *)(p_uint3 + 1) = 0;
  *(undefined4 *)(handle + 0x718) = 0;
  *(undefined2 *)(handle + 0x71c) = 0;
  *(undefined4 *)(handle + 0x720) = 0;
  *(undefined2 *)(handle + 0x724) = 0;
  *(undefined4 *)(handle + 0x728) = 0;
  *(undefined4 *)(handle + 0x72C) = 0;
  *(undefined4 *)(handle + 0x730) = 0;
  *(undefined2 *)(handle + 0x734) = 0;
  *(undefined4 *)(handle + 0x738) = 0;
  *(undefined2 *)(handle + 0x73c) = 0;
  *puStack_34 = 0;
  *(undefined2 *)(handle + 0x744) = 0;
  *puStack_30 = 0;
  *(undefined2 *)(handle + 0x74c) = 0;
  *(undefined4 *)(handle + 0x750) = 0;
  *(undefined4 *)(handle + 0x754) = 0;
  *(undefined4 *)(handle + 0x758) = 0;
  *(undefined2 *)(handle + 0x75c) = 0;
  *puStack_2c = 0;
  *(undefined2 *)(handle + 0x764) = 0;
  *puStack_28 = 0;
  *(undefined2 *)(handle + 0x76c) = 0;
  *puStack_24 = 0;
  *(undefined2 *)(handle + 0x774) = 0;
  *(undefined4 *)(handle + 0x798) = 0;
  *(undefined4 *)(handle + 0x79C) = 0;
  *(undefined4 *)(handle + 0x7a0) = 0;
  *(undefined2 *)(handle + 0x7a4) = 0;
  *puStack_58 = 0;
  *(undefined2 *)(handle + 0x7ac) = 0;
  *puStack_54 = 0;
  *(undefined2 *)(handle + 0x7b4) = 0;
  *puStack_50 = 0;
  *(undefined2 *)(handle + 0x7bc) = 0;
  *(undefined4 *)(handle + 0x7c0) = 0;
  *(undefined4 *)(handle + 0x7C4) = 0;
  *(undefined4 *)(handle + 0x7c8) = 0;
  *(undefined2 *)(handle + 0x7cc) = 0;
  *puStack_4c = 0;
  *(undefined2 *)(handle + 0x7d4) = 0;
  *puStack_48 = 0;
  *(undefined2 *)(handle + 0x7dc) = 0;
  *puStack_44 = 0;
  *(undefined2 *)(handle + 0x7e4) = 0;
  *(undefined4 *)(handle + 0x7e8) = 0;
  *(undefined4 *)(handle + 0x7EC) = 0;
  *(undefined4 *)(handle + 0x7f0) = 0;
  *(undefined2 *)(handle + 0x7f4) = 0;
  *puStack_40 = 0;
  *(undefined2 *)(handle + 0x7fc) = 0;
  *puStack_3c = 0;
  *(undefined2 *)(handle + 0x804) = 0;
  *puStack_38 = 0;
  *(undefined2 *)(puStack_38 + 1) = 0;
  HW_Routine_08008B54(handle + 0x810,0);
  HW_Routine_08008B54(handle + 0x814,1);
  HW_Routine_08008B54(handle + 0x818,2);
  HW_Routine_08008B54(handle + 0x81C,3);
  HW_Routine_08008B54(handle + 0x820,4);
  i_val1 = 0x824;
  p_uint3 = (undefined4 *)(handle + 0x824);
  *p_uint3 = 0;
  p_uint3[1] = 0;
  p_uint3[2] = gRomData_080E5B70;
  *(undefined4 *)(handle + 0x830) = 0;
  *(undefined4 *)(handle + 0x834) = 0;
  *(undefined4 *)(handle + 0x838) = gRomData_080E5B60;
  VTable_Routine_080E52A0(handle + i_val1 + 0x18);
  *(undefined4 *)(handle + 0x974) = 0;
  *(undefined4 *)(handle + 0x980) = *puStack_5c;
  *(undefined1 *)(handle + 0x988) = *(undefined1 *)(puStack_5c + 1);
  return handle;
}

// =============================================================================
// Function: M4A_Routine_080C14BC @ 0x080C14BC
// =============================================================================
undefined4 M4A_Routine_080C14BC(void)

{
  
  HW_Routine_08008724();
  return;
}

// =============================================================================
// Function: M4A_Routine_080C14C8 @ 0x080C14C8
// =============================================================================
undefined4 M4A_Routine_080C14C8(int handle)

{
  undefined4 u_val1;
  int i_val2;
  
  i_val2 = handle + 0x83C;
  HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val2 + 4));
  u_val1 = HW_Routine_08007B54(i_val2,3);
  *(undefined4 *)(i_val2 + 4) = u_val1;
  i_val2 = handle + 0x844;
  HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val2 + 4));
  u_val1 = HW_Routine_08007B54(i_val2,6);
  *(undefined4 *)(i_val2 + 4) = u_val1;
  i_val2 = handle + 0x84C;
  HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val2 + 4));
  u_val1 = HW_Routine_08007B54(i_val2,3);
  *(undefined4 *)(i_val2 + 4) = u_val1;
  i_val2 = handle + 0x854;
  HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val2 + 4));
  u_val1 = HW_Routine_08007B54(i_val2,2);
  *(undefined4 *)(i_val2 + 4) = u_val1;
  i_val2 = handle + 0x85C;
  HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val2 + 4));
  u_val1 = HW_Routine_08007B54(i_val2,2);
  *(undefined4 *)(i_val2 + 4) = u_val1;
  i_val2 = handle + 0x864;
  HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val2 + 4));
  u_val1 = HW_Routine_08007B54(i_val2,5);
  *(undefined4 *)(i_val2 + 4) = u_val1;
  i_val2 = handle + 0x86C;
  HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val2 + 4));
  u_val1 = HW_Routine_08007B54(i_val2,2);
  *(undefined4 *)(i_val2 + 4) = u_val1;
  i_val2 = handle + 0x87C;
  HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val2 + 4));
  u_val1 = HW_Routine_08007B54(i_val2,3);
  *(undefined4 *)(i_val2 + 4) = u_val1;
  i_val2 = handle + 0x884;
  HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val2 + 4));
  u_val1 = HW_Routine_08007B54(i_val2,2);
  *(undefined4 *)(i_val2 + 4) = u_val1;
  i_val2 = handle + 0x874;
  HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val2 + 4));
  u_val1 = HW_Routine_08007B54(i_val2,6);
  *(undefined4 *)(i_val2 + 4) = u_val1;
  i_val2 = handle + 0x88C;
  HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val2 + 4));
  u_val1 = HW_Routine_08007B54(i_val2,5);
  *(undefined4 *)(i_val2 + 4) = u_val1;
  handle = handle + 0x894;
  HW_Routine_08007C28(handle,*(undefined4 *)(handle + 4));
  u_val1 = HW_Routine_08007B54(handle,3);
  *(undefined4 *)(handle + 4) = u_val1;
  return;
}

// =============================================================================
// Function: M4A_Routine_080C160C @ 0x080C160C
// =============================================================================
undefined4 M4A_Routine_080C160C(undefined4 handle)

{
  undefined4 u_val1;
  undefined4 u_val2;
  undefined2 *p_uint3;
  int i_val4;
  
  HW_Routine_08008EB8(0,0x06007FE0,0x20);
  u_val1 = 0x0600F000;
  HW_Routine_08008EB8(0xffffffff,0x0600F000,0x800);
  u_val2 = 0x0600F800;
  HW_Routine_08008EB8(0xffffffff,0x0600F800,0x800);
  Unpack_ArcanoMarvelous_0x70(gRomGfx_0873F3C8,u_val2);
  Unpack_ArcanoMarvelous_0x70(gRomGfx_0873F5D4,u_val1);
  Unpack_ArcanoMarvelous_0x70(gRomGfx_0873F6AC,0x6000000);
  HW_Routine_08008E64(gRomGfx_087400E4,0x05000020,0x200);
  p_uint3 = (undefined2 *)HW_GetSpriteAttr1Offset(handle);
  *p_uint3 = 0x1640;
  i_val4 = HW_GetSpriteAttr1Offset(handle);
  *(short *)(i_val4 + 10) = (short)0x1E41;
  i_val4 = HW_GetSpriteAttr1Offset(handle);
  *(short *)(i_val4 + 0xc) = (short)0x1F42;
  return;
}

// =============================================================================
// Function: M4A_Routine_080C16D4 @ 0x080C16D4
// =============================================================================
undefined4 M4A_Routine_080C16D4(int handle)

{
  undefined2 u_val1;
  ushort u_val2;
  int *p_int3;
  int i_val4;
  undefined4 u_val5;
  undefined2 *p_uint6;
  ushort *p_uint7;
  int i_val8;
  undefined4 *p_uint9;
  undefined4 *p_uint10;
  undefined4 *p_uint11;
  int i_val12;
  int i_val13;
  int i_val14;
  int *p_int15;
  undefined4 u_val16;
  int loop_i;
  undefined1 stack_buf_e4 [4];
  undefined4 stack_val_e0;
  undefined4 stack_val_dc;
  undefined4 stack_val_d8;
  undefined4 stack_val_d4;
  undefined4 stack_val_d0;
  undefined4 stack_val_cc;
  undefined4 stack_val_c8;
  undefined4 stack_val_c4;
  undefined4 stack_val_b0;
  undefined4 stack_val_ac;
  int stack_val_a8;
  int stack_val_a4;
  undefined4 stack_val_a0;
  undefined4 stack_val_9c;
  int stack_val_98;
  int stack_val_94;
  int stack_val_90;
  int stack_val_8c;
  int stack_val_88;
  int stack_val_84;
  int stack_val_80;
  int stack_val_7c;
  int stack_val_78;
  int stack_val_74;
  int stack_val_70;
  int stack_val_6c;
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
  int stack_val_38;
  undefined4 *puStack_34;
  int stack_val_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  HW_Routine_08008E64(*gRomData_080F9F78,0x05000360,0x20);
  M4A_Routine_080C14C8(handle);
  p_uint6 = 0x0500024A;
  *0x0500024A = *0x05000362;
  p_uint6[1] = *0x05000364;
  p_uint6[2] = 0x1f;
  p_uint6[3] = (short)0x675E;
  HW_Routine_08008EB8(0,handle + 0x548,8);
  ScriptEngine_Routine_0804EC84(*(undefined1 *)(0x97B + handle),stack_buf_e4,0);
  p_uint6 = 0x05000240;
  *0x05000240 = 0x3e0;
  p_uint6[1] = (short)0x303;
  p_uint6[2] = (short)0x4F15;
  p_uint6[3] = (short)0x7FFF;
  p_uint6[4] = (short)0x52F8;
  stack_val_b0 = 0x20004;
  i_val12 = handle + 0xc;
  ScriptEngine_Routine_0804E7A0(0x20004,i_val12,0);
  stack_val_ac = 0x20004;
  ScriptEngine_Routine_0804E958(0x20004,i_val12,0,0,stack_buf_e4,0,1);
  p_int3 = (int *)HW_GetSpriteAttr0Offset(handle);
  i_val4 = HW_Routine_08007D4C(0x83C + handle,*(undefined4 *)(0x83C + handle + 4));
  HW_Routine_08008F0C(&stack_val_e0,i_val12,i_val4 * 0x20 + 0x06010000,0x100);
  p_uint9 = (undefined4 *)p_int3[1];
  if (p_uint9 == (undefined4 *)p_int3[3]) {
    stack_val_a4 = 1;
    stack_val_a8 = (int)p_uint9 - *p_int3 >> 4;
    p_int15 = &stack_val_a8;
    if (stack_val_a8 == 0) {
      p_int15 = &stack_val_a4;
    }
    puStack_28 = p_uint9;
    if (stack_val_a8 + *p_int15 == 0) {
      puStack_24 = (undefined4 *)0x0;
      i_val4 = 0;
    }
    else {
      i_val4 = (stack_val_a8 + *p_int15) * 0x10;
      puStack_24 = (undefined4 *)runtime_malloc_aligned(i_val4);
      if (puStack_24 == (undefined4 *)0x0) {
        puStack_24 = (undefined4 *)VTable_Routine_080D3BC0(i_val4);
      }
    }
    puStack_34 = &stack_val_a0;
    puStack_2c = &stack_val_d0;
    p_uint11 = puStack_24;
    for (p_uint9 = (undefined4 *)*p_int3; p_uint9 != puStack_28; p_uint9 = p_uint9 + 4) {
      if (p_uint11 != (undefined4 *)0x0) {
        u_val5 = p_uint9[1];
        u_val16 = p_uint9[2];
        *p_uint11 = *p_uint9;
        p_uint11[1] = u_val5;
        p_uint11[2] = u_val16;
        p_uint11[3] = p_uint9[3];
      }
      p_uint11 = p_uint11 + 4;
    }
    i_val12 = stack_val_a4;
    if (stack_val_a4 == 1) {
      if (p_uint11 != (undefined4 *)0x0) {
        *p_uint11 = stack_val_e0;
        p_uint11[1] = stack_val_dc;
        p_uint11[2] = stack_val_d8;
        p_uint11[3] = stack_val_d4;
      }
      p_uint11 = p_uint11 + 4;
    }
    else {
      for (; i_val12 != 0; i_val12 = i_val12 + -1) {
        if (p_uint11 != (undefined4 *)0x0) {
          *p_uint11 = stack_val_e0;
          p_uint11[1] = stack_val_dc;
          p_uint11[2] = stack_val_d8;
          p_uint11[3] = stack_val_d4;
        }
        p_uint11 = p_uint11 + 4;
      }
    }
    for (i_val12 = *p_int3; i_val12 != p_int3[1]; i_val12 = i_val12 + 0x10) {
    }
    if (*p_int3 != 0) {
      cpp_operator_delete();
    }
    *p_int3 = (int)puStack_24;
    p_int3[1] = (int)p_uint11;
    p_int3[3] = (int)puStack_24 + i_val4;
  }
  else {
    if (p_uint9 != (undefined4 *)0x0) {
      *p_uint9 = stack_val_e0;
      p_uint9[1] = stack_val_dc;
      p_uint9[2] = stack_val_d8;
      p_uint9[3] = stack_val_d4;
    }
    p_int3[1] = p_int3[1] + 0x10;
    puStack_34 = &stack_val_a0;
    puStack_2c = &stack_val_d0;
  }
  u_val5 = HW_Routine_08007D4C(0x83C + handle,*(undefined4 *)(0x83C + handle + 4));
  ScriptEngine_Routine_0804EA94(puStack_34,0xd0,8,u_val5,2,0,2,1);
  *(undefined4 *)(handle + 0x548) = stack_val_a0;
  *(undefined4 *)(handle + 0x54c) = stack_val_9c;
  u_val5 = Dispatcher_Routine_080005D4(0x14);
  i_val4 = Animal_Routine_0805E824(u_val5,*(undefined4 *)(handle + 0x520),0,0x100);
  p_int3 = (int *)(handle + 0x550);
  if (i_val4 != *p_int3) {
    Dispatcher_Routine_08000608();
  }
  *p_int3 = i_val4;
  p_uint6 = (undefined2 *)Dispatcher_Routine_080005D4(0x1c);
  *p_uint6 = 0;
  p_uint6[1] = 0;
  p_uint6[2] = 0;
  p_uint6[3] = 0;
  p_uint6[4] = 0;
  *(undefined4 *)(p_uint6 + 6) = 0;
  *(undefined1 *)(p_uint6 + 8) = 0;
  *(undefined1 *)((int)p_uint6 + 0x11) = 0;
  *(undefined4 *)(p_uint6 + 10) = 0;
  *(undefined1 *)(p_uint6 + 0xc) = 0;
  p_int15 = (int *)(0x554 + handle);
  if (p_uint6 != (undefined2 *)*p_int15) {
    Dispatcher_Routine_08000608();
  }
  *p_int15 = (int)p_uint6;
  Animal_Routine_0805E860(*p_int3,0);
  *(undefined2 *)*p_int15 = 0x40;
  *(undefined2 *)(*p_int15 + 2) = 0x40;
  i_val4 = *p_int15;
  i_val12 = 0x844 + handle;
  u_val1 = HW_Routine_08007D4C(i_val12,*(undefined4 *)(i_val12 + 4));
  *(undefined2 *)(i_val4 + 6) = u_val1;
  *(undefined2 *)(*p_int15 + 4) = 3;
  *(undefined1 *)(*p_int15 + 0x18) = 1;
  p_uint9 = (undefined4 *)*p_int3;
  _call_via_r3(&stack_val_d0,(int *)*p_uint9,
                  *(undefined2 *)(p_uint9[1] + (uint)*(ushort *)(p_uint9 + 3) * 4),
                  *(undefined4 *)(*(int *)*p_uint9 + 0x10));
  gba_memcpy(puStack_2c,puStack_2c,0x20);
  u_val5 = puStack_2c[1];
  u_val16 = puStack_2c[2];
  *(undefined4 *)(handle + 0x558) = *puStack_2c;
  *(undefined4 *)(handle + 0x55c) = u_val5;
  *(undefined4 *)(handle + 0x560) = u_val16;
  u_val5 = puStack_2c[4];
  u_val16 = puStack_2c[5];
  *(undefined4 *)(handle + 0x564) = puStack_2c[3];
  *(undefined4 *)(handle + 0x568) = u_val5;
  *(undefined4 *)(handle + 0x56c) = u_val16;
  u_val5 = puStack_2c[7];
  *(undefined4 *)(handle + 0x570) = puStack_2c[6];
  *(undefined4 *)(handle + 0x574) = u_val5;
  p_int3 = (int *)HW_GetSpriteAttr0Offset(handle);
  loop_i = *(int *)(handle + 0x560);
  i_val4 = HW_Routine_08007D4C(i_val12,*(undefined4 *)(i_val12 + 4));
  u_val1 = 0;
  if (*(int *)(handle + 0x560) != 0) {
    u_val1 = *(undefined2 *)(handle + 0x564);
  }
  HW_Routine_08008F0C(&stack_val_e0,loop_i,i_val4 * 0x20 + 0x06010000,u_val1);
  p_uint9 = (undefined4 *)p_int3[1];
  if (p_uint9 == (undefined4 *)p_int3[3]) {
    stack_val_94 = 1;
    stack_val_98 = (int)p_uint9 - *p_int3 >> 4;
    p_int15 = &stack_val_98;
    if (stack_val_98 == 0) {
      p_int15 = &stack_val_94;
    }
    puStack_28 = p_uint9;
    if (stack_val_98 + *p_int15 == 0) {
      p_uint9 = (undefined4 *)0x0;
      i_val4 = 0;
    }
    else {
      i_val4 = (stack_val_98 + *p_int15) * 0x10;
      p_uint9 = (undefined4 *)runtime_malloc_aligned(i_val4);
      if (p_uint9 == (undefined4 *)0x0) {
        p_uint9 = (undefined4 *)VTable_Routine_080D3BC0(i_val4);
      }
    }
    p_uint11 = p_uint9;
    for (p_uint10 = (undefined4 *)*p_int3; p_uint10 != puStack_28; p_uint10 = p_uint10 + 4) {
      if (p_uint11 != (undefined4 *)0x0) {
        u_val5 = p_uint10[1];
        u_val16 = p_uint10[2];
        *p_uint11 = *p_uint10;
        p_uint11[1] = u_val5;
        p_uint11[2] = u_val16;
        p_uint11[3] = p_uint10[3];
      }
      p_uint11 = p_uint11 + 4;
    }
    i_val12 = stack_val_94;
    if (stack_val_94 == 1) {
      if (p_uint11 != (undefined4 *)0x0) {
        *p_uint11 = stack_val_e0;
        p_uint11[1] = stack_val_dc;
        p_uint11[2] = stack_val_d8;
        p_uint11[3] = stack_val_d4;
      }
      p_uint11 = p_uint11 + 4;
    }
    else {
      for (; i_val12 != 0; i_val12 = i_val12 + -1) {
        if (p_uint11 != (undefined4 *)0x0) {
          *p_uint11 = stack_val_e0;
          p_uint11[1] = stack_val_dc;
          p_uint11[2] = stack_val_d8;
          p_uint11[3] = stack_val_d4;
        }
        p_uint11 = p_uint11 + 4;
      }
    }
    for (i_val12 = *p_int3; i_val12 != p_int3[1]; i_val12 = i_val12 + 0x10) {
    }
    puStack_24 = p_uint9;
    if (*p_int3 != 0) {
      cpp_operator_delete();
    }
    *p_int3 = (int)puStack_24;
    p_int3[1] = (int)p_uint11;
    p_int3[3] = (int)puStack_24 + i_val4;
  }
  else {
    if (p_uint9 != (undefined4 *)0x0) {
      *p_uint9 = stack_val_e0;
      p_uint9[1] = stack_val_dc;
      p_uint9[2] = stack_val_d8;
      p_uint9[3] = stack_val_d4;
    }
    p_int3[1] = p_int3[1] + 0x10;
  }
  p_int3 = (int *)HW_GetSpriteAttr0Offset(handle);
  u_val1 = 0;
  if (*(int *)(handle + 0x568) != 0) {
    u_val1 = *(undefined2 *)(handle + 0x56c);
  }
  HW_Routine_08008F0C(&stack_val_e0,*(int *)(handle + 0x568),0x05000260,u_val1);
  p_uint9 = (undefined4 *)p_int3[1];
  if (p_uint9 == (undefined4 *)p_int3[3]) {
    stack_val_8c = 1;
    stack_val_90 = (int)p_uint9 - *p_int3 >> 4;
    p_int15 = &stack_val_90;
    if (stack_val_90 == 0) {
      p_int15 = &stack_val_8c;
    }
    puStack_28 = p_uint9;
    if (stack_val_90 + *p_int15 == 0) {
      p_uint9 = (undefined4 *)0x0;
      i_val4 = 0;
    }
    else {
      i_val4 = (stack_val_90 + *p_int15) * 0x10;
      p_uint9 = (undefined4 *)runtime_malloc_aligned(i_val4);
      if (p_uint9 == (undefined4 *)0x0) {
        p_uint9 = (undefined4 *)VTable_Routine_080D3BC0(i_val4);
      }
    }
    p_uint10 = p_uint9;
    for (p_uint11 = (undefined4 *)*p_int3; p_uint11 != puStack_28; p_uint11 = p_uint11 + 4) {
      if (p_uint10 != (undefined4 *)0x0) {
        u_val5 = p_uint11[1];
        u_val16 = p_uint11[2];
        *p_uint10 = *p_uint11;
        p_uint10[1] = u_val5;
        p_uint10[2] = u_val16;
        p_uint10[3] = p_uint11[3];
      }
      p_uint10 = p_uint10 + 4;
    }
    i_val12 = stack_val_8c;
    if (stack_val_8c == 1) {
      if (p_uint10 != (undefined4 *)0x0) {
        *p_uint10 = stack_val_e0;
        p_uint10[1] = stack_val_dc;
        p_uint10[2] = stack_val_d8;
        p_uint10[3] = stack_val_d4;
      }
      p_uint10 = p_uint10 + 4;
    }
    else {
      for (; i_val12 != 0; i_val12 = i_val12 + -1) {
        if (p_uint10 != (undefined4 *)0x0) {
          *p_uint10 = stack_val_e0;
          p_uint10[1] = stack_val_dc;
          p_uint10[2] = stack_val_d8;
          p_uint10[3] = stack_val_d4;
        }
        p_uint10 = p_uint10 + 4;
      }
    }
    for (i_val12 = *p_int3; i_val12 != p_int3[1]; i_val12 = i_val12 + 0x10) {
    }
    puStack_24 = p_uint9;
    if (*p_int3 != 0) {
      cpp_operator_delete();
    }
    *p_int3 = (int)puStack_24;
    p_int3[1] = (int)p_uint10;
    p_int3[3] = (int)puStack_24 + i_val4;
  }
  else {
    if (p_uint9 != (undefined4 *)0x0) {
      *p_uint9 = stack_val_e0;
      p_uint9[1] = stack_val_dc;
      p_uint9[2] = stack_val_d8;
      p_uint9[3] = stack_val_d4;
    }
    p_int3[1] = p_int3[1] + 0x10;
  }
  u_val5 = Dispatcher_Routine_080005D4(0x14);
  i_val4 = Animal_Routine_0805E824(u_val5,*(undefined4 *)(handle + 0x528),0,0x100);
  p_int3 = (int *)(handle + 0x578);
  if (i_val4 != *p_int3) {
    Dispatcher_Routine_08000608();
  }
  *p_int3 = i_val4;
  p_uint6 = (undefined2 *)Dispatcher_Routine_080005D4(0x1c);
  *p_uint6 = 0;
  p_uint6[1] = 0;
  p_uint6[2] = 0;
  p_uint6[3] = 0;
  p_uint6[4] = 0;
  *(undefined4 *)(p_uint6 + 6) = 0;
  *(undefined1 *)(p_uint6 + 8) = 0;
  *(undefined1 *)((int)p_uint6 + 0x11) = 0;
  *(undefined4 *)(p_uint6 + 10) = 0;
  *(undefined1 *)(p_uint6 + 0xc) = 0;
  p_int15 = (int *)(0x57C + handle);
  if (p_uint6 != (undefined2 *)*p_int15) {
    Dispatcher_Routine_08000608();
  }
  *p_int15 = (int)p_uint6;
  Animal_Routine_0805E860(*p_int3,0);
  *(undefined2 *)*p_int15 = 0xc0;
  *(undefined2 *)(*p_int15 + 2) = 0;
  i_val4 = *p_int15;
  i_val12 = 0x864 + handle;
  u_val1 = HW_Routine_08007D4C(i_val12,*(undefined4 *)(i_val12 + 4));
  *(undefined2 *)(i_val4 + 6) = u_val1;
  *(undefined2 *)(*p_int15 + 4) = 7;
  *(undefined2 *)(*p_int15 + 8) = 1;
  *(undefined1 *)(*p_int15 + 0x18) = 1;
  p_uint9 = (undefined4 *)*p_int3;
  _call_via_r3(&stack_val_e0,(int *)*p_uint9,
                  *(undefined2 *)(p_uint9[1] + (uint)*(ushort *)(p_uint9 + 3) * 4),
                  *(undefined4 *)(*(int *)*p_uint9 + 0x10));
  gba_memcpy(&stack_val_e0,&stack_val_e0,0x20);
  *(undefined4 *)(handle + 0x580) = stack_val_e0;
  *(undefined4 *)(handle + 0x584) = stack_val_dc;
  *(undefined4 *)(handle + 0x588) = stack_val_d8;
  *(undefined4 *)(handle + 0x58c) = stack_val_d4;
  *(undefined4 *)(handle + 0x590) = stack_val_d0;
  *(undefined4 *)(handle + 0x594) = stack_val_cc;
  *(undefined4 *)(handle + 0x598) = stack_val_c8;
  *(undefined4 *)(handle + 0x59c) = stack_val_c4;
  p_int3 = (int *)HW_GetSpriteAttr0Offset(handle);
  loop_i = *(int *)(handle + 0x588);
  i_val4 = HW_Routine_08007D4C(i_val12,*(undefined4 *)(i_val12 + 4));
  u_val1 = 0;
  if (*(int *)(handle + 0x588) != 0) {
    u_val1 = *(undefined2 *)(handle + 0x58c);
  }
  HW_Routine_08008F0C(&stack_val_e0,loop_i,i_val4 * 0x20 + 0x06010000,u_val1);
  p_uint9 = (undefined4 *)p_int3[1];
  if (p_uint9 == (undefined4 *)p_int3[3]) {
    stack_val_84 = 1;
    stack_val_88 = (int)p_uint9 - *p_int3 >> 4;
    p_int15 = &stack_val_88;
    if (stack_val_88 == 0) {
      p_int15 = &stack_val_84;
    }
    puStack_28 = p_uint9;
    if (stack_val_88 + *p_int15 == 0) {
      p_uint9 = (undefined4 *)0x0;
      i_val4 = 0;
    }
    else {
      i_val4 = (stack_val_88 + *p_int15) * 0x10;
      p_uint9 = (undefined4 *)runtime_malloc_aligned(i_val4);
      if (p_uint9 == (undefined4 *)0x0) {
        p_uint9 = (undefined4 *)VTable_Routine_080D3BC0(i_val4);
      }
    }
    p_uint10 = p_uint9;
    for (p_uint11 = (undefined4 *)*p_int3; p_uint11 != puStack_28; p_uint11 = p_uint11 + 4) {
      if (p_uint10 != (undefined4 *)0x0) {
        u_val5 = p_uint11[1];
        u_val16 = p_uint11[2];
        *p_uint10 = *p_uint11;
        p_uint10[1] = u_val5;
        p_uint10[2] = u_val16;
        p_uint10[3] = p_uint11[3];
      }
      p_uint10 = p_uint10 + 4;
    }
    i_val12 = stack_val_84;
    if (stack_val_84 == 1) {
      if (p_uint10 != (undefined4 *)0x0) {
        *p_uint10 = stack_val_e0;
        p_uint10[1] = stack_val_dc;
        p_uint10[2] = stack_val_d8;
        p_uint10[3] = stack_val_d4;
      }
      p_uint10 = p_uint10 + 4;
    }
    else {
      for (; i_val12 != 0; i_val12 = i_val12 + -1) {
        if (p_uint10 != (undefined4 *)0x0) {
          *p_uint10 = stack_val_e0;
          p_uint10[1] = stack_val_dc;
          p_uint10[2] = stack_val_d8;
          p_uint10[3] = stack_val_d4;
        }
        p_uint10 = p_uint10 + 4;
      }
    }
    for (i_val12 = *p_int3; i_val12 != p_int3[1]; i_val12 = i_val12 + 0x10) {
    }
    puStack_24 = p_uint9;
    if (*p_int3 != 0) {
      cpp_operator_delete();
    }
    *p_int3 = (int)puStack_24;
    p_int3[1] = (int)p_uint10;
    p_int3[3] = (int)puStack_24 + i_val4;
  }
  else {
    if (p_uint9 != (undefined4 *)0x0) {
      *p_uint9 = stack_val_e0;
      p_uint9[1] = stack_val_dc;
      p_uint9[2] = stack_val_d8;
      p_uint9[3] = stack_val_d4;
    }
    p_int3[1] = p_int3[1] + 0x10;
  }
  p_int3 = (int *)HW_GetSpriteAttr0Offset(handle);
  u_val1 = 0;
  if (*(int *)(handle + 0x590) != 0) {
    u_val1 = *(undefined2 *)(handle + 0x594);
  }
  HW_Routine_08008F0C(&stack_val_e0,*(int *)(handle + 0x590),0x050002E0,u_val1);
  p_uint9 = (undefined4 *)p_int3[1];
  if (p_uint9 == (undefined4 *)p_int3[3]) {
    stack_val_7c = 1;
    stack_val_80 = (int)p_uint9 - *p_int3 >> 4;
    p_int15 = &stack_val_80;
    if (stack_val_80 == 0) {
      p_int15 = &stack_val_7c;
    }
    puStack_28 = p_uint9;
    if (stack_val_80 + *p_int15 == 0) {
      p_uint9 = (undefined4 *)0x0;
      i_val4 = 0;
    }
    else {
      i_val4 = (stack_val_80 + *p_int15) * 0x10;
      p_uint9 = (undefined4 *)runtime_malloc_aligned(i_val4);
      if (p_uint9 == (undefined4 *)0x0) {
        p_uint9 = (undefined4 *)VTable_Routine_080D3BC0(i_val4);
      }
    }
    p_uint10 = p_uint9;
    for (p_uint11 = (undefined4 *)*p_int3; p_uint11 != puStack_28; p_uint11 = p_uint11 + 4) {
      if (p_uint10 != (undefined4 *)0x0) {
        u_val5 = p_uint11[1];
        u_val16 = p_uint11[2];
        *p_uint10 = *p_uint11;
        p_uint10[1] = u_val5;
        p_uint10[2] = u_val16;
        p_uint10[3] = p_uint11[3];
      }
      p_uint10 = p_uint10 + 4;
    }
    i_val12 = stack_val_7c;
    if (stack_val_7c == 1) {
      if (p_uint10 != (undefined4 *)0x0) {
        *p_uint10 = stack_val_e0;
        p_uint10[1] = stack_val_dc;
        p_uint10[2] = stack_val_d8;
        p_uint10[3] = stack_val_d4;
      }
      p_uint10 = p_uint10 + 4;
    }
    else {
      for (; i_val12 != 0; i_val12 = i_val12 + -1) {
        if (p_uint10 != (undefined4 *)0x0) {
          *p_uint10 = stack_val_e0;
          p_uint10[1] = stack_val_dc;
          p_uint10[2] = stack_val_d8;
          p_uint10[3] = stack_val_d4;
        }
        p_uint10 = p_uint10 + 4;
      }
    }
    for (i_val12 = *p_int3; i_val12 != p_int3[1]; i_val12 = i_val12 + 0x10) {
    }
    puStack_24 = p_uint9;
    if (*p_int3 != 0) {
      cpp_operator_delete();
    }
    *p_int3 = (int)puStack_24;
    p_int3[1] = (int)p_uint10;
    p_int3[3] = (int)puStack_24 + i_val4;
  }
  else {
    if (p_uint9 != (undefined4 *)0x0) {
      *p_uint9 = stack_val_e0;
      p_uint9[1] = stack_val_dc;
      p_uint9[2] = stack_val_d8;
      p_uint9[3] = stack_val_d4;
    }
    p_int3[1] = p_int3[1] + 0x10;
  }
  u_val5 = Dispatcher_Routine_080005D4(0x14);
  i_val4 = Animal_Routine_0805E824(u_val5,*(undefined4 *)(handle + 0x538),0,0x100);
  p_int3 = (int *)(handle + 0x728);
  if (i_val4 != *p_int3) {
    Dispatcher_Routine_08000608();
  }
  *p_int3 = i_val4;
  p_uint6 = (undefined2 *)Dispatcher_Routine_080005D4(0x1c);
  *p_uint6 = 0;
  p_uint6[1] = 0;
  p_uint6[2] = 0;
  p_uint6[3] = 0;
  p_uint6[4] = 0;
  *(undefined4 *)(p_uint6 + 6) = 0;
  *(undefined1 *)(p_uint6 + 8) = 0;
  *(undefined1 *)((int)p_uint6 + 0x11) = 0;
  *(undefined4 *)(p_uint6 + 10) = 0;
  *(undefined1 *)(p_uint6 + 0xc) = 0;
  p_int15 = (int *)(0x72C + handle);
  if (p_uint6 != (undefined2 *)*p_int15) {
    Dispatcher_Routine_08000608();
  }
  *p_int15 = (int)p_uint6;
  Animal_Routine_0805E860(*p_int3,6);
  i_val4 = *p_int15;
  i_val12 = 0x86C + handle;
  u_val1 = HW_Routine_08007D4C(i_val12,*(undefined4 *)(i_val12 + 4));
  *(undefined2 *)(i_val4 + 6) = u_val1;
  *(undefined2 *)(*p_int15 + 4) = 8;
  *(undefined1 *)(*p_int15 + 0x18) = 1;
  p_uint9 = (undefined4 *)*p_int3;
  _call_via_r3(&stack_val_e0,(int *)*p_uint9,
                  *(undefined2 *)(p_uint9[1] + (uint)*(ushort *)(p_uint9 + 3) * 4),
                  *(undefined4 *)(*(int *)*p_uint9 + 0x10));
  gba_memcpy(&stack_val_e0,&stack_val_e0,0x20);
  *(undefined4 *)(handle + 0x730) = stack_val_e0;
  *(undefined4 *)(handle + 0x734) = stack_val_dc;
  *(undefined4 *)(handle + 0x738) = stack_val_d8;
  *(undefined4 *)(handle + 0x73c) = stack_val_d4;
  *(undefined4 *)(handle + 0x740) = stack_val_d0;
  *(undefined4 *)(handle + 0x744) = stack_val_cc;
  *(undefined4 *)(handle + 0x748) = stack_val_c8;
  *(undefined4 *)(handle + 0x74c) = stack_val_c4;
  p_int3 = (int *)HW_GetSpriteAttr0Offset(handle);
  loop_i = *(int *)(handle + 0x738);
  i_val4 = HW_Routine_08007D4C(i_val12,*(undefined4 *)(i_val12 + 4));
  u_val1 = 0;
  if (*(int *)(handle + 0x738) != 0) {
    u_val1 = *(undefined2 *)(handle + 0x73c);
  }
  HW_Routine_08008F0C(&stack_val_e0,loop_i,i_val4 * 0x20 + 0x06010000,u_val1);
  p_uint9 = (undefined4 *)p_int3[1];
  if (p_uint9 == (undefined4 *)p_int3[3]) {
    stack_val_74 = 1;
    stack_val_78 = (int)p_uint9 - *p_int3 >> 4;
    p_int15 = &stack_val_78;
    if (stack_val_78 == 0) {
      p_int15 = &stack_val_74;
    }
    puStack_28 = p_uint9;
    if (stack_val_78 + *p_int15 == 0) {
      p_uint9 = (undefined4 *)0x0;
      i_val4 = 0;
    }
    else {
      i_val4 = (stack_val_78 + *p_int15) * 0x10;
      p_uint9 = (undefined4 *)runtime_malloc_aligned(i_val4);
      if (p_uint9 == (undefined4 *)0x0) {
        p_uint9 = (undefined4 *)VTable_Routine_080D3BC0(i_val4);
      }
    }
    p_uint11 = p_uint9;
    for (p_uint10 = (undefined4 *)*p_int3; p_uint10 != puStack_28; p_uint10 = p_uint10 + 4) {
      if (p_uint11 != (undefined4 *)0x0) {
        u_val5 = p_uint10[1];
        u_val16 = p_uint10[2];
        *p_uint11 = *p_uint10;
        p_uint11[1] = u_val5;
        p_uint11[2] = u_val16;
        p_uint11[3] = p_uint10[3];
      }
      p_uint11 = p_uint11 + 4;
    }
    i_val12 = stack_val_74;
    if (stack_val_74 == 1) {
      if (p_uint11 != (undefined4 *)0x0) {
        *p_uint11 = stack_val_e0;
        p_uint11[1] = stack_val_dc;
        p_uint11[2] = stack_val_d8;
        p_uint11[3] = stack_val_d4;
      }
      p_uint11 = p_uint11 + 4;
    }
    else {
      for (; i_val12 != 0; i_val12 = i_val12 + -1) {
        if (p_uint11 != (undefined4 *)0x0) {
          *p_uint11 = stack_val_e0;
          p_uint11[1] = stack_val_dc;
          p_uint11[2] = stack_val_d8;
          p_uint11[3] = stack_val_d4;
        }
        p_uint11 = p_uint11 + 4;
      }
    }
    for (i_val12 = *p_int3; i_val12 != p_int3[1]; i_val12 = i_val12 + 0x10) {
    }
    puStack_24 = p_uint9;
    if (*p_int3 != 0) {
      cpp_operator_delete();
    }
    *p_int3 = (int)puStack_24;
    p_int3[1] = (int)p_uint11;
    p_int3[3] = (int)puStack_24 + i_val4;
  }
  else {
    if (p_uint9 != (undefined4 *)0x0) {
      *p_uint9 = stack_val_e0;
      p_uint9[1] = stack_val_dc;
      p_uint9[2] = stack_val_d8;
      p_uint9[3] = stack_val_d4;
    }
    p_int3[1] = p_int3[1] + 0x10;
  }
  p_int3 = (int *)HW_GetSpriteAttr0Offset(handle);
  u_val1 = 0;
  if (*(int *)(handle + 0x740) != 0) {
    u_val1 = *(undefined2 *)(handle + 0x744);
  }
  HW_Routine_08008F0C(&stack_val_e0,*(int *)(handle + 0x740),0x05000300,u_val1);
  p_uint9 = (undefined4 *)p_int3[1];
  if (p_uint9 == (undefined4 *)p_int3[3]) {
    stack_val_6c = 1;
    stack_val_70 = (int)p_uint9 - *p_int3 >> 4;
    p_int15 = &stack_val_70;
    if (stack_val_70 == 0) {
      p_int15 = &stack_val_6c;
    }
    puStack_28 = p_uint9;
    if (stack_val_70 + *p_int15 == 0) {
      p_uint9 = (undefined4 *)0x0;
      i_val4 = 0;
    }
    else {
      i_val4 = (stack_val_70 + *p_int15) * 0x10;
      p_uint9 = (undefined4 *)runtime_malloc_aligned(i_val4);
      if (p_uint9 == (undefined4 *)0x0) {
        p_uint9 = (undefined4 *)VTable_Routine_080D3BC0(i_val4);
      }
    }
    p_uint10 = p_uint9;
    for (p_uint11 = (undefined4 *)*p_int3; p_uint11 != puStack_28; p_uint11 = p_uint11 + 4) {
      if (p_uint10 != (undefined4 *)0x0) {
        u_val5 = p_uint11[1];
        u_val16 = p_uint11[2];
        *p_uint10 = *p_uint11;
        p_uint10[1] = u_val5;
        p_uint10[2] = u_val16;
        p_uint10[3] = p_uint11[3];
      }
      p_uint10 = p_uint10 + 4;
    }
    i_val12 = stack_val_6c;
    if (stack_val_6c == 1) {
      if (p_uint10 != (undefined4 *)0x0) {
        *p_uint10 = stack_val_e0;
        p_uint10[1] = stack_val_dc;
        p_uint10[2] = stack_val_d8;
        p_uint10[3] = stack_val_d4;
      }
      p_uint10 = p_uint10 + 4;
    }
    else {
      for (; i_val12 != 0; i_val12 = i_val12 + -1) {
        if (p_uint10 != (undefined4 *)0x0) {
          *p_uint10 = stack_val_e0;
          p_uint10[1] = stack_val_dc;
          p_uint10[2] = stack_val_d8;
          p_uint10[3] = stack_val_d4;
        }
        p_uint10 = p_uint10 + 4;
      }
    }
    for (i_val12 = *p_int3; i_val12 != p_int3[1]; i_val12 = i_val12 + 0x10) {
    }
    puStack_24 = p_uint9;
    if (*p_int3 != 0) {
      cpp_operator_delete();
    }
    *p_int3 = (int)puStack_24;
    p_int3[1] = (int)p_uint10;
    p_int3[3] = (int)puStack_24 + i_val4;
  }
  else {
    if (p_uint9 != (undefined4 *)0x0) {
      *p_uint9 = stack_val_e0;
      p_uint9[1] = stack_val_dc;
      p_uint9[2] = stack_val_d8;
      p_uint9[3] = stack_val_d4;
    }
    p_int3[1] = p_int3[1] + 0x10;
  }
  u_val5 = Dispatcher_Routine_080005D4(0x14);
  p_uint9 = (undefined4 *)(0x52C + handle);
  i_val4 = Animal_Routine_0805E824(u_val5,*p_uint9,0,0x100);
  if (i_val4 != *(int *)(handle + 0x5a0)) {
    Dispatcher_Routine_08000608();
  }
  *(int *)(handle + 0x5a0) = i_val4;
  p_uint7 = (ushort *)Dispatcher_Routine_080005D4(0x1c);
  *p_uint7 = 0;
  p_uint7[1] = 0;
  p_uint7[2] = 0;
  p_uint7[3] = 0;
  p_uint7[4] = 0;
  p_uint7[6] = 0;
  p_uint7[7] = 0;
  *(undefined1 *)(p_uint7 + 8) = 0;
  *(undefined1 *)((int)p_uint7 + 0x11) = 0;
  p_uint7[10] = 0;
  p_uint7[0xb] = 0;
  *(undefined1 *)(p_uint7 + 0xc) = 0;
  p_int3 = (int *)(0x5A4 + handle);
  if (p_uint7 != (ushort *)*p_int3) {
    Dispatcher_Routine_08000608();
  }
  *p_int3 = (int)p_uint7;
  *p_uint7 = (ushort)*(byte *)(0x8B4 + handle);
  p_uint7[1] = (ushort)*(byte *)(0x8B5 + handle);
  u_val2 = HW_Routine_08007D4C(0x87C + handle,*(undefined4 *)(0x87C + handle + 4));
  p_uint7[3] = u_val2;
  *(undefined2 *)(*p_int3 + 4) = 0xc;
  *(undefined2 *)(*p_int3 + 8) = 1;
  *(undefined1 *)(*p_int3 + 0x18) = 1;
  u_val5 = Dispatcher_Routine_080005D4(0x14);
  i_val4 = Animal_Routine_0805E824(u_val5,*p_uint9,0,0x100);
  p_int3 = (int *)(handle + 0x5c8);
  if (i_val4 != *p_int3) {
    Dispatcher_Routine_08000608();
  }
  *p_int3 = i_val4;
  p_uint6 = (undefined2 *)Dispatcher_Routine_080005D4(0x1c);
  *p_uint6 = 0;
  p_uint6[1] = 0;
  p_uint6[2] = 0;
  p_uint6[3] = 0;
  p_uint6[4] = 0;
  *(undefined4 *)(p_uint6 + 6) = 0;
  *(undefined1 *)(p_uint6 + 8) = 0;
  *(undefined1 *)((int)p_uint6 + 0x11) = 0;
  *(undefined4 *)(p_uint6 + 10) = 0;
  *(undefined1 *)(p_uint6 + 0xc) = 0;
  p_int15 = (int *)(0x5CC + handle);
  if (p_uint6 != (undefined2 *)*p_int15) {
    Dispatcher_Routine_08000608();
  }
  *p_int15 = (int)p_uint6;
  Animal_Routine_0805E860(*p_int3,0x91A);
  i_val4 = *p_int15;
  i_val12 = 0x884 + handle;
  u_val1 = HW_Routine_08007D4C(i_val12,*(undefined4 *)(i_val12 + 4));
  *(undefined2 *)(i_val4 + 6) = u_val1;
  *(undefined2 *)(*p_int15 + 4) = 10;
  *(undefined2 *)(*p_int15 + 8) = 1;
  *(undefined1 *)(*p_int15 + 0x18) = 1;
  p_uint9 = (undefined4 *)*p_int3;
  _call_via_r3(&stack_val_e0,(int *)*p_uint9,
                  *(undefined2 *)(p_uint9[1] + (uint)*(ushort *)(p_uint9 + 3) * 4),
                  *(undefined4 *)(*(int *)*p_uint9 + 0x10));
  gba_memcpy(&stack_val_e0,&stack_val_e0,0x20);
  *(undefined4 *)(handle + 0x5d0) = stack_val_e0;
  *(undefined4 *)(handle + 0x5d4) = stack_val_dc;
  *(undefined4 *)(handle + 0x5d8) = stack_val_d8;
  *(undefined4 *)(handle + 0x5dc) = stack_val_d4;
  *(undefined4 *)(handle + 0x5e0) = stack_val_d0;
  *(undefined4 *)(handle + 0x5e4) = stack_val_cc;
  *(undefined4 *)(handle + 0x5e8) = stack_val_c8;
  *(undefined4 *)(handle + 0x5ec) = stack_val_c4;
  p_int3 = (int *)HW_GetSpriteAttr0Offset(handle);
  loop_i = *(int *)(handle + 0x5d8);
  i_val4 = HW_Routine_08007D4C(i_val12,*(undefined4 *)(i_val12 + 4));
  u_val1 = 0;
  if (*(int *)(handle + 0x5d8) != 0) {
    u_val1 = *(undefined2 *)(handle + 0x5dc);
  }
  HW_Routine_08008F0C(&stack_val_e0,loop_i,i_val4 * 0x20 + 0x06010000,u_val1);
  p_uint9 = (undefined4 *)p_int3[1];
  if (p_uint9 == (undefined4 *)p_int3[3]) {
    stack_val_64 = 1;
    stack_val_68 = (int)p_uint9 - *p_int3 >> 4;
    p_int15 = &stack_val_68;
    if (stack_val_68 == 0) {
      p_int15 = &stack_val_64;
    }
    puStack_28 = p_uint9;
    if (stack_val_68 + *p_int15 == 0) {
      p_uint9 = (undefined4 *)0x0;
      i_val4 = 0;
    }
    else {
      i_val4 = (stack_val_68 + *p_int15) * 0x10;
      p_uint9 = (undefined4 *)runtime_malloc_aligned(i_val4);
      if (p_uint9 == (undefined4 *)0x0) {
        p_uint9 = (undefined4 *)VTable_Routine_080D3BC0(i_val4);
      }
    }
    p_uint11 = p_uint9;
    for (p_uint10 = (undefined4 *)*p_int3; p_uint10 != puStack_28; p_uint10 = p_uint10 + 4) {
      if (p_uint11 != (undefined4 *)0x0) {
        u_val5 = p_uint10[1];
        u_val16 = p_uint10[2];
        *p_uint11 = *p_uint10;
        p_uint11[1] = u_val5;
        p_uint11[2] = u_val16;
        p_uint11[3] = p_uint10[3];
      }
      p_uint11 = p_uint11 + 4;
    }
    i_val12 = stack_val_64;
    if (stack_val_64 == 1) {
      if (p_uint11 != (undefined4 *)0x0) {
        *p_uint11 = stack_val_e0;
        p_uint11[1] = stack_val_dc;
        p_uint11[2] = stack_val_d8;
        p_uint11[3] = stack_val_d4;
      }
      p_uint11 = p_uint11 + 4;
    }
    else {
      for (; i_val12 != 0; i_val12 = i_val12 + -1) {
        if (p_uint11 != (undefined4 *)0x0) {
          *p_uint11 = stack_val_e0;
          p_uint11[1] = stack_val_dc;
          p_uint11[2] = stack_val_d8;
          p_uint11[3] = stack_val_d4;
        }
        p_uint11 = p_uint11 + 4;
      }
    }
    for (i_val12 = *p_int3; i_val12 != p_int3[1]; i_val12 = i_val12 + 0x10) {
    }
    puStack_24 = p_uint9;
    if (*p_int3 != 0) {
      cpp_operator_delete();
    }
    *p_int3 = (int)puStack_24;
    p_int3[1] = (int)p_uint11;
    p_int3[3] = (int)puStack_24 + i_val4;
  }
  else {
    if (p_uint9 != (undefined4 *)0x0) {
      *p_uint9 = stack_val_e0;
      p_uint9[1] = stack_val_dc;
      p_uint9[2] = stack_val_d8;
      p_uint9[3] = stack_val_d4;
    }
    p_int3[1] = p_int3[1] + 0x10;
  }
  p_int3 = (int *)HW_GetSpriteAttr0Offset(handle);
  u_val1 = 0;
  if (*(int *)(handle + 0x5e0) != 0) {
    u_val1 = *(undefined2 *)(handle + 0x5e4);
  }
  HW_Routine_08008F0C(&stack_val_e0,*(int *)(handle + 0x5e0),0x05000340,u_val1);
  p_uint9 = (undefined4 *)p_int3[1];
  if (p_uint9 == (undefined4 *)p_int3[3]) {
    stack_val_5c = 1;
    stack_val_60 = (int)p_uint9 - *p_int3 >> 4;
    p_int15 = &stack_val_60;
    if (stack_val_60 == 0) {
      p_int15 = &stack_val_5c;
    }
    puStack_28 = p_uint9;
    if (stack_val_60 + *p_int15 == 0) {
      p_uint9 = (undefined4 *)0x0;
      i_val4 = 0;
    }
    else {
      i_val4 = (stack_val_60 + *p_int15) * 0x10;
      p_uint9 = (undefined4 *)runtime_malloc_aligned(i_val4);
      if (p_uint9 == (undefined4 *)0x0) {
        p_uint9 = (undefined4 *)VTable_Routine_080D3BC0(i_val4);
      }
    }
    p_uint10 = p_uint9;
    for (p_uint11 = (undefined4 *)*p_int3; p_uint11 != puStack_28; p_uint11 = p_uint11 + 4) {
      if (p_uint10 != (undefined4 *)0x0) {
        u_val5 = p_uint11[1];
        u_val16 = p_uint11[2];
        *p_uint10 = *p_uint11;
        p_uint10[1] = u_val5;
        p_uint10[2] = u_val16;
        p_uint10[3] = p_uint11[3];
      }
      p_uint10 = p_uint10 + 4;
    }
    i_val12 = stack_val_5c;
    if (stack_val_5c == 1) {
      if (p_uint10 != (undefined4 *)0x0) {
        *p_uint10 = stack_val_e0;
        p_uint10[1] = stack_val_dc;
        p_uint10[2] = stack_val_d8;
        p_uint10[3] = stack_val_d4;
      }
      p_uint10 = p_uint10 + 4;
    }
    else {
      for (; i_val12 != 0; i_val12 = i_val12 + -1) {
        if (p_uint10 != (undefined4 *)0x0) {
          *p_uint10 = stack_val_e0;
          p_uint10[1] = stack_val_dc;
          p_uint10[2] = stack_val_d8;
          p_uint10[3] = stack_val_d4;
        }
        p_uint10 = p_uint10 + 4;
      }
    }
    for (i_val12 = *p_int3; i_val12 != p_int3[1]; i_val12 = i_val12 + 0x10) {
    }
    puStack_24 = p_uint9;
    if (*p_int3 != 0) {
      cpp_operator_delete();
    }
    *p_int3 = (int)puStack_24;
    p_int3[1] = (int)p_uint10;
    p_int3[3] = (int)puStack_24 + i_val4;
  }
  else {
    if (p_uint9 != (undefined4 *)0x0) {
      *p_uint9 = stack_val_e0;
      p_uint9[1] = stack_val_dc;
      p_uint9[2] = stack_val_d8;
      p_uint9[3] = stack_val_d4;
    }
    p_int3[1] = p_int3[1] + 0x10;
  }
  u_val5 = Dispatcher_Routine_080005D4(0x14);
  i_val4 = Animal_Routine_0805E824(u_val5,*(undefined4 *)(0x52C + handle),0,0x100);
  p_int3 = (int *)(handle + 0x5f0);
  if (i_val4 != *p_int3) {
    Dispatcher_Routine_08000608();
  }
  *p_int3 = i_val4;
  p_uint6 = (undefined2 *)Dispatcher_Routine_080005D4(0x1c);
  *p_uint6 = 0;
  p_uint6[1] = 0;
  p_uint6[2] = 0;
  p_uint6[3] = 0;
  p_uint6[4] = 0;
  *(undefined4 *)(p_uint6 + 6) = 0;
  *(undefined1 *)(p_uint6 + 8) = 0;
  *(undefined1 *)((int)p_uint6 + 0x11) = 0;
  *(undefined4 *)(p_uint6 + 10) = 0;
  *(undefined1 *)(p_uint6 + 0xc) = 0;
  p_int15 = (int *)(0x5F4 + handle);
  if (p_uint6 != (undefined2 *)*p_int15) {
    Dispatcher_Routine_08000608();
  }
  *p_int15 = (int)p_uint6;
  Animal_Routine_0805E860(*p_int3,*(int *)(handle + 0x980) * 0x54 + 0x42C);
  *(ushort *)*p_int15 = (ushort)*(byte *)(0x8B4 + handle);
  *(ushort *)(*p_int15 + 2) = (ushort)*(byte *)(0x8B5 + handle);
  i_val4 = *p_int15;
  u_val1 = HW_Routine_08007D4C(0x84C + handle,*(undefined4 *)(0x84C + handle + 4));
  *(undefined2 *)(i_val4 + 6) = u_val1;
  *(undefined2 *)(*p_int15 + 4) = 4;
  *(undefined2 *)(*p_int15 + 8) = 1;
  *(undefined1 *)(*p_int15 + 0x18) = 1;
  u_val5 = Dispatcher_Routine_080005D4(0x14);
  i_val4 = Animal_Routine_0805E824(u_val5,*(undefined4 *)(0x534 + handle),0,0x100);
  if (i_val4 != *(int *)(handle + 0x6a0)) {
    Dispatcher_Routine_08000608();
  }
  *(int *)(handle + 0x6a0) = i_val4;
  Animal_Routine_0805E860(i_val4,0);
  stack_val_38 = 0;
  do {
    loop_i = 0;
    i_val4 = stack_val_38 * 4;
    i_val12 = stack_val_38 << 4;
    do {
      i_val8 = stack_val_38 + i_val4;
      p_uint6 = (undefined2 *)Dispatcher_Routine_080005D4(0x1c);
      *p_uint6 = 0;
      p_uint6[1] = 0;
      p_uint6[2] = 0;
      p_uint6[3] = 0;
      p_uint6[4] = 0;
      *(undefined4 *)(p_uint6 + 6) = 0;
      *(undefined1 *)(p_uint6 + 8) = 0;
      *(undefined1 *)((int)p_uint6 + 0x11) = 0;
      *(undefined4 *)(p_uint6 + 10) = 0;
      *(undefined1 *)(p_uint6 + 0xc) = 0;
      i_val8 = (i_val8 + loop_i) * 4;
      p_uint9 = (undefined4 *)(i_val8 + handle + 0x6A4);
      if (p_uint6 != (undefined2 *)*p_uint9) {
        Dispatcher_Routine_08000608();
      }
      *p_uint9 = p_uint6;
      i_val13 = 0x6A4;
      **(short **)(i_val8 + handle + 0x6A4) = (short)loop_i * 0x10 + 0x50;
      *(short *)(*(int *)(i_val8 + handle + i_val13) + 2) = (short)i_val12 + 0x28;
      i_val13 = *(int *)(i_val8 + handle + i_val13);
      i_val14 = 0x854 + handle;
      u_val1 = HW_Routine_08007D4C(i_val14,*(undefined4 *)(i_val14 + 4));
      *(undefined2 *)(i_val13 + 6) = u_val1;
      i_val13 = 0x6A4;
      *(undefined2 *)(*(int *)(i_val8 + handle + 0x6A4) + 4) = 5;
      *(undefined2 *)(*(int *)(i_val8 + handle + i_val13) + 8) = 1;
      *(undefined1 *)(*(int *)(i_val8 + handle + i_val13) + 0x18) = 1;
      loop_i = loop_i + 1;
    } while (loop_i < 5);
    p_uint9 = *(undefined4 **)(handle + 0x6a0);
    _call_via_r3(&stack_val_e0,(int *)*p_uint9,
                    *(undefined2 *)(p_uint9[1] + (uint)*(ushort *)(p_uint9 + 3) * 4),
                    *(undefined4 *)(*(int *)*p_uint9 + 0x10));
    gba_memcpy(&stack_val_e0,&stack_val_e0,0x20);
    *(undefined4 *)(handle + 0x708) = stack_val_e0;
    *(undefined4 *)(handle + 0x70c) = stack_val_dc;
    *(undefined4 *)(handle + 0x710) = stack_val_d8;
    *(undefined4 *)(handle + 0x714) = stack_val_d4;
    *(undefined4 *)(handle + 0x718) = stack_val_d0;
    *(undefined4 *)(handle + 0x71c) = stack_val_cc;
    *(undefined4 *)(handle + 0x720) = stack_val_c8;
    *(undefined4 *)(handle + 0x724) = stack_val_c4;
    p_int3 = (int *)HW_GetSpriteAttr0Offset(handle,handle + 0x728);
    i_val12 = *(int *)(handle + 0x710);
    i_val4 = HW_Routine_08007D4C(i_val14,*(undefined4 *)(i_val14 + 4));
    u_val1 = 0;
    if (*(int *)(handle + 0x710) != 0) {
      u_val1 = *(undefined2 *)(handle + 0x714);
    }
    HW_Routine_08008F0C(&stack_val_e0,i_val12,i_val4 * 0x20 + 0x06010000,u_val1);
    p_uint9 = (undefined4 *)p_int3[1];
    if (p_uint9 == (undefined4 *)p_int3[3]) {
      stack_val_54 = 1;
      stack_val_58 = (int)p_uint9 - *p_int3 >> 4;
      p_int15 = &stack_val_58;
      if (stack_val_58 == 0) {
        p_int15 = &stack_val_54;
      }
      puStack_28 = p_uint9;
      if (stack_val_58 + *p_int15 == 0) {
        p_uint9 = (undefined4 *)0x0;
        i_val4 = 0;
      }
      else {
        i_val4 = (stack_val_58 + *p_int15) * 0x10;
        p_uint9 = (undefined4 *)runtime_malloc_aligned(i_val4);
        if (p_uint9 == (undefined4 *)0x0) {
          p_uint9 = (undefined4 *)VTable_Routine_080D3BC0(i_val4);
        }
      }
      p_uint10 = p_uint9;
      for (p_uint11 = (undefined4 *)*p_int3; p_uint11 != puStack_28; p_uint11 = p_uint11 + 4) {
        if (p_uint10 != (undefined4 *)0x0) {
          u_val5 = p_uint11[1];
          u_val16 = p_uint11[2];
          *p_uint10 = *p_uint11;
          p_uint10[1] = u_val5;
          p_uint10[2] = u_val16;
          p_uint10[3] = p_uint11[3];
        }
        p_uint10 = p_uint10 + 4;
      }
      i_val12 = stack_val_54;
      if (stack_val_54 == 1) {
        if (p_uint10 != (undefined4 *)0x0) {
          *p_uint10 = stack_val_e0;
          p_uint10[1] = stack_val_dc;
          p_uint10[2] = stack_val_d8;
          p_uint10[3] = stack_val_d4;
        }
        p_uint10 = p_uint10 + 4;
      }
      else {
        for (; i_val12 != 0; i_val12 = i_val12 + -1) {
          if (p_uint10 != (undefined4 *)0x0) {
            *p_uint10 = stack_val_e0;
            p_uint10[1] = stack_val_dc;
            p_uint10[2] = stack_val_d8;
            p_uint10[3] = stack_val_d4;
          }
          p_uint10 = p_uint10 + 4;
        }
      }
      for (i_val12 = *p_int3; i_val12 != p_int3[1]; i_val12 = i_val12 + 0x10) {
      }
      puStack_24 = p_uint9;
      if (*p_int3 != 0) {
        cpp_operator_delete();
      }
      *p_int3 = (int)puStack_24;
      p_int3[1] = (int)p_uint10;
      p_int3[3] = (int)puStack_24 + i_val4;
    }
    else {
      if (p_uint9 != (undefined4 *)0x0) {
        *p_uint9 = stack_val_e0;
        p_uint9[1] = stack_val_dc;
        p_uint9[2] = stack_val_d8;
        p_uint9[3] = stack_val_d4;
      }
      p_int3[1] = p_int3[1] + 0x10;
    }
    p_int3 = (int *)HW_GetSpriteAttr0Offset(handle);
    u_val1 = 0;
    if (*(int *)(handle + 0x718) != 0) {
      u_val1 = *(undefined2 *)(handle + 0x71c);
    }
    HW_Routine_08008F0C(&stack_val_e0,*(int *)(handle + 0x718),0x050002A0,u_val1);
    p_uint9 = (undefined4 *)p_int3[1];
    if (p_uint9 == (undefined4 *)p_int3[3]) {
      stack_val_4c = 1;
      stack_val_50 = (int)p_uint9 - *p_int3 >> 4;
      p_int15 = &stack_val_50;
      if (stack_val_50 == 0) {
        p_int15 = &stack_val_4c;
      }
      puStack_28 = p_uint9;
      if (stack_val_50 + *p_int15 == 0) {
        p_uint9 = (undefined4 *)0x0;
        i_val4 = 0;
      }
      else {
        i_val4 = (stack_val_50 + *p_int15) * 0x10;
        p_uint9 = (undefined4 *)runtime_malloc_aligned(i_val4);
        if (p_uint9 == (undefined4 *)0x0) {
          p_uint9 = (undefined4 *)VTable_Routine_080D3BC0(i_val4);
        }
      }
      p_uint10 = p_uint9;
      for (p_uint11 = (undefined4 *)*p_int3; p_uint11 != puStack_28; p_uint11 = p_uint11 + 4) {
        if (p_uint10 != (undefined4 *)0x0) {
          u_val5 = p_uint11[1];
          u_val16 = p_uint11[2];
          *p_uint10 = *p_uint11;
          p_uint10[1] = u_val5;
          p_uint10[2] = u_val16;
          p_uint10[3] = p_uint11[3];
        }
        p_uint10 = p_uint10 + 4;
      }
      i_val12 = stack_val_4c;
      if (stack_val_4c == 1) {
        if (p_uint10 != (undefined4 *)0x0) {
          *p_uint10 = stack_val_e0;
          p_uint10[1] = stack_val_dc;
          p_uint10[2] = stack_val_d8;
          p_uint10[3] = stack_val_d4;
        }
        p_uint10 = p_uint10 + 4;
      }
      else {
        for (; i_val12 != 0; i_val12 = i_val12 + -1) {
          if (p_uint10 != (undefined4 *)0x0) {
            *p_uint10 = stack_val_e0;
            p_uint10[1] = stack_val_dc;
            p_uint10[2] = stack_val_d8;
            p_uint10[3] = stack_val_d4;
          }
          p_uint10 = p_uint10 + 4;
        }
      }
      for (i_val12 = *p_int3; i_val12 != p_int3[1]; i_val12 = i_val12 + 0x10) {
      }
      puStack_24 = p_uint9;
      if (*p_int3 != 0) {
        cpp_operator_delete();
      }
      *p_int3 = (int)puStack_24;
      p_int3[1] = (int)p_uint10;
      p_int3[3] = (int)puStack_24 + i_val4;
    }
    else {
      if (p_uint9 != (undefined4 *)0x0) {
        *p_uint9 = stack_val_e0;
        p_uint9[1] = stack_val_dc;
        p_uint9[2] = stack_val_d8;
        p_uint9[3] = stack_val_d4;
      }
      p_int3[1] = p_int3[1] + 0x10;
    }
    stack_val_38 = stack_val_38 + 1;
  } while (stack_val_38 < 5);
  u_val5 = Dispatcher_Routine_080005D4(0x14);
  i_val4 = Animal_Routine_0805E824(u_val5,*(undefined4 *)(handle + 0x530),0,0x100);
  if (i_val4 != *(int *)(handle + 0x618)) {
    Dispatcher_Routine_08000608();
  }
  *(int *)(handle + 0x618) = i_val4;
  Animal_Routine_0805E860(i_val4,0);
  stack_val_38 = 0;
  do {
    loop_i = 0;
    i_val4 = stack_val_38 * 4;
    i_val12 = stack_val_38 << 4;
    stack_val_30 = stack_val_38 + 1;
    do {
      i_val8 = stack_val_38 + i_val4;
      p_uint6 = (undefined2 *)Dispatcher_Routine_080005D4(0x1c);
      *p_uint6 = 0;
      p_uint6[1] = 0;
      p_uint6[2] = 0;
      p_uint6[3] = 0;
      p_uint6[4] = 0;
      *(undefined4 *)(p_uint6 + 6) = 0;
      *(undefined1 *)(p_uint6 + 8) = 0;
      *(undefined1 *)((int)p_uint6 + 0x11) = 0;
      *(undefined4 *)(p_uint6 + 10) = 0;
      *(undefined1 *)(p_uint6 + 0xc) = 0;
      i_val8 = (i_val8 + loop_i) * 4;
      p_uint9 = (undefined4 *)(i_val8 + handle + 0x61C);
      if (p_uint6 != (undefined2 *)*p_uint9) {
        Dispatcher_Routine_08000608();
      }
      *p_uint9 = p_uint6;
      i_val13 = 0x61C;
      **(short **)(i_val8 + handle + 0x61C) = (short)loop_i * 0x10 + 0x50;
      *(short *)(*(int *)(i_val8 + handle + i_val13) + 2) = (short)i_val12 + 0x28;
      i_val13 = *(int *)(i_val8 + handle + i_val13);
      i_val14 = 0x85C + handle;
      u_val1 = HW_Routine_08007D4C(i_val14,*(undefined4 *)(i_val14 + 4));
      *(undefined2 *)(i_val13 + 6) = u_val1;
      i_val13 = 0x61C;
      *(undefined2 *)(*(int *)(i_val8 + handle + 0x61C) + 4) = 6;
      *(undefined2 *)(*(int *)(i_val8 + handle + i_val13) + 8) = 1;
      *(undefined1 *)(*(int *)(i_val8 + handle + i_val13) + 0x18) = 1;
      loop_i = loop_i + 1;
    } while (loop_i < 5);
    p_uint9 = *(undefined4 **)(handle + 0x618);
    _call_via_r3(&stack_val_e0,(int *)*p_uint9,
                    *(undefined2 *)(p_uint9[1] + (uint)*(ushort *)(p_uint9 + 3) * 4),
                    *(undefined4 *)(*(int *)*p_uint9 + 0x10));
    gba_memcpy(&stack_val_e0,&stack_val_e0,0x20);
    *(undefined4 *)(handle + 0x680) = stack_val_e0;
    *(undefined4 *)(handle + 0x684) = stack_val_dc;
    *(undefined4 *)(handle + 0x688) = stack_val_d8;
    *(undefined4 *)(handle + 0x68c) = stack_val_d4;
    *(undefined4 *)(handle + 0x690) = stack_val_d0;
    *(undefined4 *)(handle + 0x694) = stack_val_cc;
    *(undefined4 *)(handle + 0x698) = stack_val_c8;
    *(undefined4 *)(handle + 0x69c) = stack_val_c4;
    p_int3 = (int *)HW_GetSpriteAttr0Offset(handle,handle + 0x6a0);
    i_val12 = *(int *)(handle + 0x688);
    i_val4 = HW_Routine_08007D4C(i_val14,*(undefined4 *)(i_val14 + 4));
    u_val1 = 0;
    if (*(int *)(handle + 0x688) != 0) {
      u_val1 = *(undefined2 *)(handle + 0x68c);
    }
    HW_Routine_08008F0C(&stack_val_e0,i_val12,i_val4 * 0x20 + 0x06010000,u_val1);
    p_uint9 = (undefined4 *)p_int3[1];
    if (p_uint9 == (undefined4 *)p_int3[3]) {
      stack_val_44 = 1;
      stack_val_48 = (int)p_uint9 - *p_int3 >> 4;
      p_int15 = &stack_val_48;
      if (stack_val_48 == 0) {
        p_int15 = &stack_val_44;
      }
      puStack_28 = p_uint9;
      if (stack_val_48 + *p_int15 == 0) {
        p_uint9 = (undefined4 *)0x0;
        i_val4 = 0;
      }
      else {
        i_val4 = (stack_val_48 + *p_int15) * 0x10;
        p_uint9 = (undefined4 *)runtime_malloc_aligned(i_val4);
        if (p_uint9 == (undefined4 *)0x0) {
          p_uint9 = (undefined4 *)VTable_Routine_080D3BC0(i_val4);
        }
      }
      p_uint10 = p_uint9;
      for (p_uint11 = (undefined4 *)*p_int3; p_uint11 != puStack_28; p_uint11 = p_uint11 + 4) {
        if (p_uint10 != (undefined4 *)0x0) {
          u_val5 = p_uint11[1];
          u_val16 = p_uint11[2];
          *p_uint10 = *p_uint11;
          p_uint10[1] = u_val5;
          p_uint10[2] = u_val16;
          p_uint10[3] = p_uint11[3];
        }
        p_uint10 = p_uint10 + 4;
      }
      i_val12 = stack_val_44;
      if (stack_val_44 == 1) {
        if (p_uint10 != (undefined4 *)0x0) {
          *p_uint10 = stack_val_e0;
          p_uint10[1] = stack_val_dc;
          p_uint10[2] = stack_val_d8;
          p_uint10[3] = stack_val_d4;
        }
        p_uint10 = p_uint10 + 4;
      }
      else {
        for (; i_val12 != 0; i_val12 = i_val12 + -1) {
          if (p_uint10 != (undefined4 *)0x0) {
            *p_uint10 = stack_val_e0;
            p_uint10[1] = stack_val_dc;
            p_uint10[2] = stack_val_d8;
            p_uint10[3] = stack_val_d4;
          }
          p_uint10 = p_uint10 + 4;
        }
      }
      for (i_val12 = *p_int3; i_val12 != p_int3[1]; i_val12 = i_val12 + 0x10) {
      }
      puStack_24 = p_uint9;
      if (*p_int3 != 0) {
        cpp_operator_delete();
      }
      *p_int3 = (int)puStack_24;
      p_int3[1] = (int)p_uint10;
      p_int3[3] = (int)puStack_24 + i_val4;
    }
    else {
      if (p_uint9 != (undefined4 *)0x0) {
        *p_uint9 = stack_val_e0;
        p_uint9[1] = stack_val_dc;
        p_uint9[2] = stack_val_d8;
        p_uint9[3] = stack_val_d4;
      }
      p_int3[1] = p_int3[1] + 0x10;
    }
    p_int3 = (int *)HW_GetSpriteAttr0Offset(handle);
    u_val1 = 0;
    if (*(int *)(handle + 0x690) != 0) {
      u_val1 = *(undefined2 *)(handle + 0x694);
    }
    HW_Routine_08008F0C(&stack_val_e0,*(int *)(handle + 0x690),0x050002C0,u_val1);
    p_uint9 = (undefined4 *)p_int3[1];
    if (p_uint9 == (undefined4 *)p_int3[3]) {
      stack_val_3c = 1;
      stack_val_40 = (int)p_uint9 - *p_int3 >> 4;
      p_int15 = &stack_val_40;
      if (stack_val_40 == 0) {
        p_int15 = &stack_val_3c;
      }
      puStack_28 = p_uint9;
      if (stack_val_40 + *p_int15 == 0) {
        p_uint9 = (undefined4 *)0x0;
        i_val4 = 0;
      }
      else {
        i_val4 = (stack_val_40 + *p_int15) * 0x10;
        p_uint9 = (undefined4 *)runtime_malloc_aligned(i_val4);
        if (p_uint9 == (undefined4 *)0x0) {
          p_uint9 = (undefined4 *)VTable_Routine_080D3BC0(i_val4);
        }
      }
      p_uint10 = p_uint9;
      for (p_uint11 = (undefined4 *)*p_int3; p_uint11 != puStack_28; p_uint11 = p_uint11 + 4) {
        if (p_uint10 != (undefined4 *)0x0) {
          u_val5 = p_uint11[1];
          u_val16 = p_uint11[2];
          *p_uint10 = *p_uint11;
          p_uint10[1] = u_val5;
          p_uint10[2] = u_val16;
          p_uint10[3] = p_uint11[3];
        }
        p_uint10 = p_uint10 + 4;
      }
      i_val12 = stack_val_3c;
      if (stack_val_3c == 1) {
        if (p_uint10 != (undefined4 *)0x0) {
          *p_uint10 = stack_val_e0;
          p_uint10[1] = stack_val_dc;
          p_uint10[2] = stack_val_d8;
          p_uint10[3] = stack_val_d4;
        }
        p_uint10 = p_uint10 + 4;
      }
      else {
        for (; i_val12 != 0; i_val12 = i_val12 + -1) {
          if (p_uint10 != (undefined4 *)0x0) {
            *p_uint10 = stack_val_e0;
            p_uint10[1] = stack_val_dc;
            p_uint10[2] = stack_val_d8;
            p_uint10[3] = stack_val_d4;
          }
          p_uint10 = p_uint10 + 4;
        }
      }
      for (i_val12 = *p_int3; i_val12 != p_int3[1]; i_val12 = i_val12 + 0x10) {
      }
      puStack_24 = p_uint9;
      if (*p_int3 != 0) {
        cpp_operator_delete();
      }
      *p_int3 = (int)puStack_24;
      p_int3[1] = (int)p_uint10;
      p_int3[3] = (int)puStack_24 + i_val4;
    }
    else {
      if (p_uint9 != (undefined4 *)0x0) {
        *p_uint9 = stack_val_e0;
        p_uint9[1] = stack_val_dc;
        p_uint9[2] = stack_val_d8;
        p_uint9[3] = stack_val_d4;
      }
      p_int3[1] = p_int3[1] + 0x10;
    }
    stack_val_38 = stack_val_30;
  } while (stack_val_30 < 5);
  return;
}

// =============================================================================
// Function: M4A_Routine_080C2D54 @ 0x080C2D54
// =============================================================================
void M4A_Routine_080C2D54(int handle)

{
  byte b_flag1;
  ushort u_val2;
  undefined2 u_val3;
  undefined4 u_val4;
  byte *pbVar5;
  int *p_int6;
  int *p_int7;
  undefined4 *p_uint8;
  undefined4 *p_uint9;
  undefined4 *p_uint10;
  int i_val11;
  char *p_char12;
  int i_val13;
  undefined4 u_val14;
  undefined4 stack_val_78;
  undefined4 stack_val_74;
  undefined4 stack_val_70;
  undefined4 stack_val_6c;
  undefined4 stack_val_68;
  undefined4 stack_val_64;
  undefined4 stack_val_60;
  undefined4 stack_val_5c;
  int stack_val_58;
  int stack_val_54;
  int stack_val_50;
  int stack_val_4c;
  int stack_val_48;
  int stack_val_44;
  int stack_val_40;
  int stack_val_3c;
  int stack_val_38;
  int stack_val_34;
  int stack_val_30;
  int stack_val_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  if (*(char *)(_ASSET_BLOCK_080C2FA8 + handle) != '\0') {
    u_val4 = HW_GetSpriteAttr2Offset(handle);
    u_val3 = 0;
    if (*(int *)(handle + 0x7a0) != 0) {
      u_val3 = *(undefined2 *)(handle + 0x7a4);
    }
    Animal_Routine_0805E99C(u_val4,*(int *)(handle + 0x7a0),u_val3,*(undefined4 *)(0x79C + handle));
    u_val4 = HW_GetSpriteAttr2Offset(handle);
    u_val3 = 0;
    if (*(int *)(handle + 0x7c8) != 0) {
      u_val3 = *(undefined2 *)(handle + 0x7cc);
    }
    Animal_Routine_0805E99C(u_val4,*(int *)(handle + 0x7c8),u_val3,*(undefined4 *)(0x7C4 + handle));
    u_val4 = HW_GetSpriteAttr2Offset(handle);
    u_val3 = 0;
    if (*(int *)(handle + 0x7f0) != 0) {
      u_val3 = *(undefined2 *)(handle + 0x7f4);
    }
    Animal_Routine_0805E99C(u_val4,*(int *)(handle + 0x7f0),u_val3,*(undefined4 *)(0x7EC + handle));
    p_uint9 = (undefined4 *)(handle + 0x778);
    i_val11 = 3;
    do {
      pbVar5 = (byte *)HW_GetSpriteAttr2Offset(handle);
      b_flag1 = *pbVar5;
      if (b_flag1 < 0x80) {
        *(undefined4 *)(pbVar5 + (uint)b_flag1 * 8 + 4) = *p_uint9;
        *(undefined2 *)(pbVar5 + (uint)b_flag1 * 8 + 4 + 4) = *(undefined2 *)(p_uint9 + 1);
        *pbVar5 = b_flag1 + 1;
      }
      p_uint9 = p_uint9 + 2;
      i_val11 = i_val11 + -1;
    } while (-1 < i_val11);
  }
  pbVar5 = (byte *)HW_GetSpriteAttr2Offset(handle);
  b_flag1 = *pbVar5;
  if (b_flag1 < 0x80) {
    *(undefined4 *)(pbVar5 + (uint)b_flag1 * 8 + 4) = *(undefined4 *)(handle + 0x548);
    *(undefined2 *)(pbVar5 + (uint)b_flag1 * 8 + 4 + 4) = *(undefined2 *)(0x54C + handle);
    *pbVar5 = b_flag1 + 1;
  }
  if (((*(int *)(0x89C + handle) == 4) && (*(int *)(0x8A4 + handle) == 1)) ||
     ((*(int *)(0x89C + handle) == 3 && (*(int *)(handle + 0x8a0) != 2)))) {
    u_val4 = HW_GetSpriteAttr2Offset(handle);
    u_val3 = 0;
    if (*(int *)(handle + 0x558) != 0) {
      u_val3 = *(undefined2 *)(handle + 0x55c);
    }
    Animal_Routine_0805E99C(u_val4,*(int *)(handle + 0x558),u_val3,*(undefined4 *)(0x554 + handle));
  }
  u_val4 = HW_GetSpriteAttr2Offset(handle);
  u_val3 = 0;
  if (*(int *)(handle + 0x580) != 0) {
    u_val3 = *(undefined2 *)(handle + 0x584);
  }
  Animal_Routine_0805E99C(u_val4,*(int *)(handle + 0x580),u_val3,*(undefined4 *)(0x57C + handle));
  if (*(char *)(0x96D + handle) != '\0') {
    u_val4 = HW_GetSpriteAttr2Offset(handle);
    u_val3 = 0;
    if (*(int *)(handle + 0x758) != 0) {
      u_val3 = *(undefined2 *)(handle + 0x75c);
    }
    Animal_Routine_0805E99C(u_val4,*(int *)(handle + 0x758),u_val3,*(undefined4 *)(0x754 + handle));
  }
  if (*(int *)(0x8BC + handle) == 9) {
    p_int7 = (int *)(0x72C + handle);
    *(ushort *)*p_int7 = *(byte *)(0x8B4 + handle) - 8;
    *(ushort *)(*p_int7 + 2) = *(byte *)(0x8B5 + handle) - 0x20;
    p_int7 = (int *)(handle + 0x728);
    i_val11 = Animal_Routine_0805E8F0(*p_int7);
    if (i_val11 * 0x40000000 < 0) {
      if (i_val11 * 0x20000000 < 0) {
        *(undefined2 *)(*p_int7 + 0x10) = 0;
      }
      p_uint9 = (undefined4 *)*p_int7;
      _call_via_r3(&stack_val_78,(int *)*p_uint9,
                      *(undefined2 *)(p_uint9[1] + (uint)*(ushort *)(p_uint9 + 3) * 4),
                      *(undefined4 *)(*(int *)*p_uint9 + 0x10));
      gba_memcpy(&stack_val_78,&stack_val_78,0x20);
      *(undefined4 *)(handle + 0x730) = stack_val_78;
      *(undefined4 *)(handle + 0x734) = stack_val_74;
      *(undefined4 *)(handle + 0x738) = stack_val_70;
      *(undefined4 *)(handle + 0x73c) = stack_val_6c;
      *(undefined4 *)(handle + 0x740) = stack_val_68;
      *(undefined4 *)(handle + 0x744) = stack_val_64;
      *(undefined4 *)(handle + 0x748) = stack_val_60;
      *(undefined4 *)(handle + 0x74c) = stack_val_5c;
      p_int7 = (int *)HW_GetSpriteAttr0Offset(handle);
      i_val13 = *(int *)(handle + 0x738);
      i_val11 = HW_Routine_08007D4C(0x86C + handle,*(undefined4 *)(0x86C + handle + 4));
      u_val3 = 0;
      if (*(int *)(handle + 0x738) != 0) {
        u_val3 = *(undefined2 *)(handle + 0x73c);
      }
      HW_Routine_08008F0C(&stack_val_78,i_val13,i_val11 * 0x20 + 0x06010000,u_val3);
      p_uint9 = (undefined4 *)p_int7[1];
      if (p_uint9 == (undefined4 *)p_int7[3]) {
        stack_val_54 = 1;
        stack_val_58 = (int)p_uint9 - *p_int7 >> 4;
        p_int6 = &stack_val_58;
        if (stack_val_58 == 0) {
          p_int6 = &stack_val_54;
        }
        puStack_28 = p_uint9;
        if (stack_val_58 + *p_int6 == 0) {
          puStack_24 = (undefined4 *)0x0;
          i_val11 = 0;
        }
        else {
          i_val11 = (stack_val_58 + *p_int6) * 0x10;
          puStack_24 = (undefined4 *)runtime_malloc_aligned(i_val11);
          if (puStack_24 == (undefined4 *)0x0) {
            puStack_24 = (undefined4 *)VTable_Routine_080D3BC0(i_val11);
          }
        }
        p_uint8 = puStack_24;
        for (p_uint9 = (undefined4 *)*p_int7; p_uint9 != puStack_28; p_uint9 = p_uint9 + 4) {
          if (p_uint8 != (undefined4 *)0x0) {
            u_val4 = p_uint9[1];
            u_val14 = p_uint9[2];
            *p_uint8 = *p_uint9;
            p_uint8[1] = u_val4;
            p_uint8[2] = u_val14;
            p_uint8[3] = p_uint9[3];
          }
          p_uint8 = p_uint8 + 4;
        }
        i_val13 = stack_val_54;
        if (stack_val_54 == 1) {
          if (p_uint8 != (undefined4 *)0x0) {
            *p_uint8 = stack_val_78;
            p_uint8[1] = stack_val_74;
            p_uint8[2] = stack_val_70;
            p_uint8[3] = stack_val_6c;
          }
          p_uint8 = p_uint8 + 4;
        }
        else {
          for (; i_val13 != 0; i_val13 = i_val13 + -1) {
            if (p_uint8 != (undefined4 *)0x0) {
              *p_uint8 = stack_val_78;
              p_uint8[1] = stack_val_74;
              p_uint8[2] = stack_val_70;
              p_uint8[3] = stack_val_6c;
            }
            p_uint8 = p_uint8 + 4;
          }
        }
        for (i_val13 = *p_int7; i_val13 != p_int7[1]; i_val13 = i_val13 + 0x10) {
        }
        if (*p_int7 != 0) {
          cpp_operator_delete();
        }
        *p_int7 = (int)puStack_24;
        p_int7[1] = (int)p_uint8;
        p_int7[3] = (int)puStack_24 + i_val11;
      }
      else {
        if (p_uint9 != (undefined4 *)0x0) {
          *p_uint9 = stack_val_78;
          p_uint9[1] = stack_val_74;
          p_uint9[2] = stack_val_70;
          p_uint9[3] = stack_val_6c;
        }
        p_int7[1] = p_int7[1] + 0x10;
      }
      p_int7 = (int *)HW_GetSpriteAttr0Offset(handle);
      u_val3 = 0;
      if (*(int *)(handle + 0x740) != 0) {
        u_val3 = *(undefined2 *)(handle + 0x744);
      }
      HW_Routine_08008F0C(&stack_val_78,*(int *)(handle + 0x740),0x05000300,u_val3);
      p_uint9 = (undefined4 *)p_int7[1];
      if (p_uint9 == (undefined4 *)p_int7[3]) {
        stack_val_4c = 1;
        stack_val_50 = (int)p_uint9 - *p_int7 >> 4;
        p_int6 = &stack_val_50;
        if (stack_val_50 == 0) {
          p_int6 = &stack_val_4c;
        }
        puStack_28 = p_uint9;
        if (stack_val_50 + *p_int6 == 0) {
          p_uint9 = (undefined4 *)0x0;
          i_val11 = 0;
        }
        else {
          i_val11 = (stack_val_50 + *p_int6) * 0x10;
          p_uint9 = (undefined4 *)runtime_malloc_aligned(i_val11);
          if (p_uint9 == (undefined4 *)0x0) {
            p_uint9 = (undefined4 *)VTable_Routine_080D3BC0(i_val11);
          }
        }
        p_uint10 = p_uint9;
        for (p_uint8 = (undefined4 *)*p_int7; p_uint8 != puStack_28; p_uint8 = p_uint8 + 4) {
          if (p_uint10 != (undefined4 *)0x0) {
            u_val4 = p_uint8[1];
            u_val14 = p_uint8[2];
            *p_uint10 = *p_uint8;
            p_uint10[1] = u_val4;
            p_uint10[2] = u_val14;
            p_uint10[3] = p_uint8[3];
          }
          p_uint10 = p_uint10 + 4;
        }
        i_val13 = stack_val_4c;
        if (stack_val_4c == 1) {
          if (p_uint10 != (undefined4 *)0x0) {
            *p_uint10 = stack_val_78;
            p_uint10[1] = stack_val_74;
            p_uint10[2] = stack_val_70;
            p_uint10[3] = stack_val_6c;
          }
          p_uint10 = p_uint10 + 4;
        }
        else {
          for (; i_val13 != 0; i_val13 = i_val13 + -1) {
            if (p_uint10 != (undefined4 *)0x0) {
              *p_uint10 = stack_val_78;
              p_uint10[1] = stack_val_74;
              p_uint10[2] = stack_val_70;
              p_uint10[3] = stack_val_6c;
            }
            p_uint10 = p_uint10 + 4;
          }
        }
        for (i_val13 = *p_int7; i_val13 != p_int7[1]; i_val13 = i_val13 + 0x10) {
        }
        puStack_24 = p_uint9;
        if (*p_int7 != 0) {
          cpp_operator_delete();
        }
        *p_int7 = (int)puStack_24;
        p_int7[1] = (int)p_uint10;
        p_int7[3] = (int)puStack_24 + i_val11;
      }
      else {
        if (p_uint9 != (undefined4 *)0x0) {
          *p_uint9 = stack_val_78;
          p_uint9[1] = stack_val_74;
          p_uint9[2] = stack_val_70;
          p_uint9[3] = stack_val_6c;
        }
        p_int7[1] = p_int7[1] + 0x10;
      }
    }
    u_val4 = HW_GetSpriteAttr2Offset(handle);
    u_val3 = 0;
    if (*(int *)(handle + 0x730) != 0) {
      u_val3 = *(undefined2 *)(handle + 0x734);
    }
    Animal_Routine_0805E99C(u_val4,*(int *)(handle + 0x730),u_val3,
                  *(undefined4 *)(_ASSET_BLOCK_080C321C + handle));
  }
  if (*(char *)(0x8C5 + handle) != '\0') {
    if ((*(int *)(0x89C + handle) == 2) || (*(int *)(0x89C + handle) == 0)) {
      p_int7 = (int *)(0x5F4 + handle);
      *(ushort *)*p_int7 = (ushort)*(byte *)(0x97D + handle);
      i_val11 = *p_int7;
      u_val2 = (ushort)*(byte *)(0x97E + handle);
    }
    else {
      p_int7 = (int *)(0x5F4 + handle);
      *(ushort *)*p_int7 = (ushort)*(byte *)(0x8B4 + handle);
      i_val11 = *p_int7;
      u_val2 = *(byte *)(0x8B5 + handle) + 0xf;
    }
    *(ushort *)(i_val11 + 2) = u_val2;
    i_val11 = Animal_Routine_0805E8F0(*(int *)(handle + 0x5f0));
    if (i_val11 * 0x40000000 < 0) {
      p_uint9 = *(undefined4 **)(handle + 0x5f0);
      _call_via_r3(&stack_val_78,(int *)*p_uint9,
                      *(undefined2 *)(p_uint9[1] + (uint)*(ushort *)(p_uint9 + 3) * 4),
                      *(undefined4 *)(*(int *)*p_uint9 + 0x10));
      gba_memcpy(&stack_val_78,&stack_val_78,0x20);
      *(undefined4 *)(handle + 0x5f8) = stack_val_78;
      *(undefined4 *)(handle + 0x5fc) = stack_val_74;
      *(undefined4 *)(handle + 0x600) = stack_val_70;
      *(undefined4 *)(handle + 0x604) = stack_val_6c;
      *(undefined4 *)(handle + 0x608) = stack_val_68;
      *(undefined4 *)(handle + 0x60c) = stack_val_64;
      *(undefined4 *)(handle + 0x610) = stack_val_60;
      *(undefined4 *)(handle + 0x614) = stack_val_5c;
      p_int7 = (int *)HW_GetSpriteAttr0Offset(handle);
      i_val13 = *(int *)(handle + 0x600);
      i_val11 = HW_Routine_08007D4C(0x84C + handle,*(undefined4 *)(0x84C + handle + 4));
      u_val3 = 0;
      if (*(int *)(handle + 0x600) != 0) {
        u_val3 = *(undefined2 *)(handle + 0x604);
      }
      HW_Routine_08008F0C(&stack_val_78,i_val13,i_val11 * 0x20 + 0x06010000,u_val3);
      p_uint9 = (undefined4 *)p_int7[1];
      if (p_uint9 == (undefined4 *)p_int7[3]) {
        stack_val_44 = 1;
        stack_val_48 = (int)p_uint9 - *p_int7 >> 4;
        p_int6 = &stack_val_48;
        if (stack_val_48 == 0) {
          p_int6 = &stack_val_44;
        }
        puStack_28 = p_uint9;
        if (stack_val_48 + *p_int6 == 0) {
          p_uint9 = (undefined4 *)0x0;
          i_val11 = 0;
        }
        else {
          i_val11 = (stack_val_48 + *p_int6) * 0x10;
          p_uint9 = (undefined4 *)runtime_malloc_aligned(i_val11);
          if (p_uint9 == (undefined4 *)0x0) {
            p_uint9 = (undefined4 *)VTable_Routine_080D3BC0(i_val11);
          }
        }
        p_uint10 = p_uint9;
        for (p_uint8 = (undefined4 *)*p_int7; p_uint8 != puStack_28; p_uint8 = p_uint8 + 4) {
          if (p_uint10 != (undefined4 *)0x0) {
            u_val4 = p_uint8[1];
            u_val14 = p_uint8[2];
            *p_uint10 = *p_uint8;
            p_uint10[1] = u_val4;
            p_uint10[2] = u_val14;
            p_uint10[3] = p_uint8[3];
          }
          p_uint10 = p_uint10 + 4;
        }
        i_val13 = stack_val_44;
        if (stack_val_44 == 1) {
          if (p_uint10 != (undefined4 *)0x0) {
            *p_uint10 = stack_val_78;
            p_uint10[1] = stack_val_74;
            p_uint10[2] = stack_val_70;
            p_uint10[3] = stack_val_6c;
          }
          p_uint10 = p_uint10 + 4;
        }
        else {
          for (; i_val13 != 0; i_val13 = i_val13 + -1) {
            if (p_uint10 != (undefined4 *)0x0) {
              *p_uint10 = stack_val_78;
              p_uint10[1] = stack_val_74;
              p_uint10[2] = stack_val_70;
              p_uint10[3] = stack_val_6c;
            }
            p_uint10 = p_uint10 + 4;
          }
        }
        for (i_val13 = *p_int7; i_val13 != p_int7[1]; i_val13 = i_val13 + 0x10) {
        }
        puStack_24 = p_uint9;
        if (*p_int7 != 0) {
          cpp_operator_delete();
        }
        *p_int7 = (int)puStack_24;
        p_int7[1] = (int)p_uint10;
        p_int7[3] = (int)puStack_24 + i_val11;
      }
      else {
        if (p_uint9 != (undefined4 *)0x0) {
          *p_uint9 = stack_val_78;
          p_uint9[1] = stack_val_74;
          p_uint9[2] = stack_val_70;
          p_uint9[3] = stack_val_6c;
        }
        p_int7[1] = p_int7[1] + 0x10;
      }
      p_int7 = (int *)HW_GetSpriteAttr0Offset(handle);
      u_val3 = 0;
      if (*(int *)(handle + 0x608) != 0) {
        u_val3 = *(undefined2 *)(handle + 0x60c);
      }
      HW_Routine_08008F0C(&stack_val_78,*(int *)(handle + 0x608),0x05000280,u_val3);
      p_uint9 = (undefined4 *)p_int7[1];
      if (p_uint9 == (undefined4 *)p_int7[3]) {
        stack_val_3c = 1;
        stack_val_40 = (int)p_uint9 - *p_int7 >> 4;
        p_int6 = &stack_val_40;
        if (stack_val_40 == 0) {
          p_int6 = &stack_val_3c;
        }
        puStack_28 = p_uint9;
        if (stack_val_40 + *p_int6 == 0) {
          p_uint9 = (undefined4 *)0x0;
          i_val11 = 0;
        }
        else {
          i_val11 = (stack_val_40 + *p_int6) * 0x10;
          p_uint9 = (undefined4 *)runtime_malloc_aligned(i_val11);
          if (p_uint9 == (undefined4 *)0x0) {
            p_uint9 = (undefined4 *)VTable_Routine_080D3BC0(i_val11);
          }
        }
        p_uint10 = p_uint9;
        for (p_uint8 = (undefined4 *)*p_int7; p_uint8 != puStack_28; p_uint8 = p_uint8 + 4) {
          if (p_uint10 != (undefined4 *)0x0) {
            u_val4 = p_uint8[1];
            u_val14 = p_uint8[2];
            *p_uint10 = *p_uint8;
            p_uint10[1] = u_val4;
            p_uint10[2] = u_val14;
            p_uint10[3] = p_uint8[3];
          }
          p_uint10 = p_uint10 + 4;
        }
        i_val13 = stack_val_3c;
        if (stack_val_3c == 1) {
          if (p_uint10 != (undefined4 *)0x0) {
            *p_uint10 = stack_val_78;
            p_uint10[1] = stack_val_74;
            p_uint10[2] = stack_val_70;
            p_uint10[3] = stack_val_6c;
          }
          p_uint10 = p_uint10 + 4;
        }
        else {
          for (; i_val13 != 0; i_val13 = i_val13 + -1) {
            if (p_uint10 != (undefined4 *)0x0) {
              *p_uint10 = stack_val_78;
              p_uint10[1] = stack_val_74;
              p_uint10[2] = stack_val_70;
              p_uint10[3] = stack_val_6c;
            }
            p_uint10 = p_uint10 + 4;
          }
        }
        for (i_val13 = *p_int7; i_val13 != p_int7[1]; i_val13 = i_val13 + 0x10) {
        }
        puStack_24 = p_uint9;
        if (*p_int7 != 0) {
          cpp_operator_delete();
        }
        *p_int7 = (int)puStack_24;
        p_int7[1] = (int)p_uint10;
        p_int7[3] = (int)puStack_24 + i_val11;
      }
      else {
        if (p_uint9 != (undefined4 *)0x0) {
          *p_uint9 = stack_val_78;
          p_uint9[1] = stack_val_74;
          p_uint9[2] = stack_val_70;
          p_uint9[3] = stack_val_6c;
        }
        p_int7[1] = p_int7[1] + 0x10;
      }
    }
    u_val4 = HW_GetSpriteAttr2Offset(handle);
    u_val3 = 0;
    if (*(int *)(handle + 0x5f8) != 0) {
      u_val3 = *(undefined2 *)(handle + 0x5fc);
    }
    Animal_Routine_0805E99C(u_val4,*(int *)(handle + 0x5f8),u_val3,*(undefined4 *)(0x5F4 + handle));
  }
  p_int7 = (int *)(0x5A4 + handle);
  *(ushort *)*p_int7 = (ushort)*(byte *)(0x8B4 + handle);
  *(ushort *)(*p_int7 + 2) = (ushort)*(byte *)(0x8B5 + handle);
  p_char12 = (char *)(0x8C4 + handle);
  if (*p_char12 != '\0') {
    u_val4 = *(undefined4 *)(handle + 0x5a0);
    u_val3 = M4A_Routine_080C7B38(handle);
    Animal_Routine_0805E860(u_val4,u_val3);
    *p_char12 = '\0';
  }
  i_val11 = Animal_Routine_0805E8F0(*(int *)(handle + 0x5a0));
  if (i_val11 * 0x40000000 < 0) {
    p_uint9 = *(undefined4 **)(handle + 0x5a0);
    _call_via_r3(&stack_val_78,(int *)*p_uint9,
                    *(undefined2 *)(p_uint9[1] + (uint)*(ushort *)(p_uint9 + 3) * 4),
                    *(undefined4 *)(*(int *)*p_uint9 + 0x10));
    gba_memcpy(&stack_val_78,&stack_val_78,0x20);
    *(undefined4 *)(handle + 0x5a8) = stack_val_78;
    *(undefined4 *)(handle + 0x5ac) = stack_val_74;
    *(undefined4 *)(handle + 0x5b0) = stack_val_70;
    *(undefined4 *)(handle + 0x5b4) = stack_val_6c;
    *(undefined4 *)(handle + 0x5b8) = stack_val_68;
    *(undefined4 *)(handle + 0x5bc) = stack_val_64;
    *(undefined4 *)(handle + 0x5c0) = stack_val_60;
    *(undefined4 *)(handle + 0x5c4) = stack_val_5c;
    p_int7 = (int *)HW_GetSpriteAttr0Offset(handle);
    i_val13 = *(int *)(handle + 0x5b0);
    i_val11 = HW_Routine_08007D4C(0x87C + handle,*(undefined4 *)(0x87C + handle + 4));
    u_val3 = 0;
    if (*(int *)(handle + 0x5b0) != 0) {
      u_val3 = *(undefined2 *)(handle + 0x5b4);
    }
    HW_Routine_08008F0C(&stack_val_78,i_val13,i_val11 * 0x20 + 0x06010000,u_val3);
    p_uint9 = (undefined4 *)p_int7[1];
    if (p_uint9 == (undefined4 *)p_int7[3]) {
      stack_val_34 = 1;
      stack_val_38 = (int)p_uint9 - *p_int7 >> 4;
      p_int6 = &stack_val_38;
      if (stack_val_38 == 0) {
        p_int6 = &stack_val_34;
      }
      puStack_28 = p_uint9;
      if (stack_val_38 + *p_int6 == 0) {
        p_uint9 = (undefined4 *)0x0;
        i_val11 = 0;
      }
      else {
        i_val11 = (stack_val_38 + *p_int6) * 0x10;
        p_uint9 = (undefined4 *)runtime_malloc_aligned(i_val11);
        if (p_uint9 == (undefined4 *)0x0) {
          p_uint9 = (undefined4 *)VTable_Routine_080D3BC0(i_val11);
        }
      }
      p_uint10 = p_uint9;
      for (p_uint8 = (undefined4 *)*p_int7; p_uint8 != puStack_28; p_uint8 = p_uint8 + 4) {
        if (p_uint10 != (undefined4 *)0x0) {
          u_val4 = p_uint8[1];
          u_val14 = p_uint8[2];
          *p_uint10 = *p_uint8;
          p_uint10[1] = u_val4;
          p_uint10[2] = u_val14;
          p_uint10[3] = p_uint8[3];
        }
        p_uint10 = p_uint10 + 4;
      }
      i_val13 = stack_val_34;
      if (stack_val_34 == 1) {
        if (p_uint10 != (undefined4 *)0x0) {
          *p_uint10 = stack_val_78;
          p_uint10[1] = stack_val_74;
          p_uint10[2] = stack_val_70;
          p_uint10[3] = stack_val_6c;
        }
        p_uint10 = p_uint10 + 4;
      }
      else {
        for (; i_val13 != 0; i_val13 = i_val13 + -1) {
          if (p_uint10 != (undefined4 *)0x0) {
            *p_uint10 = stack_val_78;
            p_uint10[1] = stack_val_74;
            p_uint10[2] = stack_val_70;
            p_uint10[3] = stack_val_6c;
          }
          p_uint10 = p_uint10 + 4;
        }
      }
      for (i_val13 = *p_int7; i_val13 != p_int7[1]; i_val13 = i_val13 + 0x10) {
      }
      puStack_24 = p_uint9;
      if (*p_int7 != 0) {
        cpp_operator_delete();
      }
      *p_int7 = (int)puStack_24;
      p_int7[1] = (int)p_uint10;
      p_int7[3] = (int)puStack_24 + i_val11;
    }
    else {
      if (p_uint9 != (undefined4 *)0x0) {
        *p_uint9 = stack_val_78;
        p_uint9[1] = stack_val_74;
        p_uint9[2] = stack_val_70;
        p_uint9[3] = stack_val_6c;
      }
      p_int7[1] = p_int7[1] + 0x10;
    }
    p_int7 = (int *)HW_GetSpriteAttr0Offset(handle);
    u_val3 = 0;
    if (*(int *)(handle + 0x5b8) != 0) {
      u_val3 = *(undefined2 *)(handle + 0x5bc);
    }
    HW_Routine_08008F0C(&stack_val_78,*(int *)(handle + 0x5b8),0x05000380,u_val3);
    p_uint9 = (undefined4 *)p_int7[1];
    if (p_uint9 == (undefined4 *)p_int7[3]) {
      stack_val_2c = 1;
      stack_val_30 = (int)p_uint9 - *p_int7 >> 4;
      p_int6 = &stack_val_30;
      if (stack_val_30 == 0) {
        p_int6 = &stack_val_2c;
      }
      puStack_28 = p_uint9;
      if (stack_val_30 + *p_int6 == 0) {
        p_uint9 = (undefined4 *)0x0;
        i_val11 = 0;
      }
      else {
        i_val11 = (stack_val_30 + *p_int6) * 0x10;
        p_uint9 = (undefined4 *)runtime_malloc_aligned(i_val11);
        if (p_uint9 == (undefined4 *)0x0) {
          p_uint9 = (undefined4 *)VTable_Routine_080D3BC0(i_val11);
        }
      }
      p_uint10 = p_uint9;
      for (p_uint8 = (undefined4 *)*p_int7; p_uint8 != puStack_28; p_uint8 = p_uint8 + 4) {
        if (p_uint10 != (undefined4 *)0x0) {
          u_val4 = p_uint8[1];
          u_val14 = p_uint8[2];
          *p_uint10 = *p_uint8;
          p_uint10[1] = u_val4;
          p_uint10[2] = u_val14;
          p_uint10[3] = p_uint8[3];
        }
        p_uint10 = p_uint10 + 4;
      }
      i_val13 = stack_val_2c;
      if (stack_val_2c == 1) {
        if (p_uint10 != (undefined4 *)0x0) {
          *p_uint10 = stack_val_78;
          p_uint10[1] = stack_val_74;
          p_uint10[2] = stack_val_70;
          p_uint10[3] = stack_val_6c;
        }
        p_uint10 = p_uint10 + 4;
      }
      else {
        for (; i_val13 != 0; i_val13 = i_val13 + -1) {
          if (p_uint10 != (undefined4 *)0x0) {
            *p_uint10 = stack_val_78;
            p_uint10[1] = stack_val_74;
            p_uint10[2] = stack_val_70;
            p_uint10[3] = stack_val_6c;
          }
          p_uint10 = p_uint10 + 4;
        }
      }
      for (i_val13 = *p_int7; i_val13 != p_int7[1]; i_val13 = i_val13 + 0x10) {
      }
      puStack_24 = p_uint9;
      if (*p_int7 != 0) {
        cpp_operator_delete();
      }
      *p_int7 = (int)puStack_24;
      p_int7[1] = (int)p_uint10;
      p_int7[3] = (int)puStack_24 + i_val11;
    }
    else {
      if (p_uint9 != (undefined4 *)0x0) {
        *p_uint9 = stack_val_78;
        p_uint9[1] = stack_val_74;
        p_uint9[2] = stack_val_70;
        p_uint9[3] = stack_val_6c;
      }
      p_int7[1] = p_int7[1] + 0x10;
    }
  }
  u_val4 = HW_GetSpriteAttr2Offset(handle);
  u_val3 = 0;
  if (*(int *)(handle + 0x5a8) != 0) {
    u_val3 = *(undefined2 *)(handle + 0x5ac);
  }
  Animal_Routine_0805E99C(u_val4,*(int *)(handle + 0x5a8),u_val3,*(undefined4 *)(0x5A4 + handle));
  p_uint9 = (undefined4 *)(0x6A4 + handle);
  p_char12 = (char *)(0x905 + handle);
  i_val11 = 0x18;
  do {
    if (*p_char12 != '\0') {
      u_val4 = HW_GetSpriteAttr2Offset(handle);
      u_val3 = 0;
      if (*(int *)(handle + 0x708) != 0) {
        u_val3 = *(undefined2 *)(handle + 0x70c);
      }
      Animal_Routine_0805E99C(u_val4,*(int *)(handle + 0x708),u_val3,*p_uint9);
    }
    p_uint9 = p_uint9 + 1;
    p_char12 = p_char12 + 4;
    i_val11 = i_val11 + -1;
  } while (-1 < i_val11);
  if (*(char *)(0x96C + handle) != '\0') {
    p_int7 = (int *)(0x5CC + handle);
    *(ushort *)*p_int7 = (ushort)*(byte *)(0x8B4 + handle);
    *(ushort *)(*p_int7 + 2) = (ushort)*(byte *)(0x8B5 + handle);
    u_val4 = HW_GetSpriteAttr2Offset(handle);
    u_val3 = 0;
    if (*(int *)(handle + 0x5d0) != 0) {
      u_val3 = *(undefined2 *)(handle + 0x5d4);
    }
    Animal_Routine_0805E99C(u_val4,*(int *)(handle + 0x5d0),u_val3,*p_int7);
  }
  p_uint9 = (undefined4 *)(0x61C + handle);
  p_char12 = (char *)(0x904 + handle);
  i_val11 = 0x18;
  do {
    if (*p_char12 != '\0') {
      u_val4 = HW_GetSpriteAttr2Offset(handle);
      u_val3 = 0;
      if (*(int *)(handle + 0x680) != 0) {
        u_val3 = *(undefined2 *)(handle + 0x684);
      }
      Animal_Routine_0805E99C(u_val4,*(int *)(handle + 0x680),u_val3,*p_uint9);
    }
    p_uint9 = p_uint9 + 1;
    p_char12 = p_char12 + 4;
    i_val11 = i_val11 + -1;
  } while (-1 < i_val11);
  return;
}

// =============================================================================
// Function: M4A_Routine_080C38E4 @ 0x080C38E4
// =============================================================================
undefined4 M4A_Routine_080C38E4(int handle,int channel)

{
  byte b_flag1;
  int *p_int2;
  int i_val3;
  int *p_int4;
  undefined4 *p_uint5;
  int i_val6;
  undefined4 *p_uint7;
  byte *pbVar8;
  undefined4 u_val9;
  undefined4 u_val10;
  undefined1 stack_val_54;
  undefined1 stack_val_53;
  undefined1 temp_buf_50 [4];
  undefined4 stack_val_4c;
  undefined4 stack_val_48;
  undefined4 stack_val_44;
  undefined4 stack_val_40;
  undefined4 stack_val_3c;
  undefined4 stack_val_38;
  undefined4 stack_val_34;
  int stack_val_30;
  int stack_val_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  if (channel == 0x3c) {
    pbVar8 = (byte *)(0x97B + handle);
    b_flag1 = *pbVar8;
    *pbVar8 = b_flag1 - 1;
    if ((byte)(b_flag1 - 1) == 9) {
      HW_Routine_08008C28(handle + 0x810,0x180);
    }
    ScriptEngine_Routine_0804EC84(*pbVar8,&stack_val_54,0);
    if (*pbVar8 < 10) {
      gba_memcpy(temp_buf_50,gRomData_08108000,2);
      stack_val_53 = stack_val_54;
      stack_val_54 = 0x30;
    }
    stack_val_3c = 0x20004;
    i_val6 = handle + 0xc;
    ScriptEngine_Routine_0804E7A0(0x20004,i_val6,0);
    if (*pbVar8 < 10) {
      stack_val_34 = 0x20004;
      ScriptEngine_Routine_0804E958(0x20004,i_val6,0,0,&stack_val_54,0,3);
    }
    else {
      stack_val_38 = 0x20004;
      ScriptEngine_Routine_0804E958(0x20004,i_val6,0,0,&stack_val_54,0,1);
    }
    p_int2 = (int *)HW_GetSpriteAttr0Offset(handle);
    i_val3 = HW_Routine_08007D4C(0x83C + handle,*(undefined4 *)(0x83C + handle + 4));
    HW_Routine_08008F0C(&stack_val_4c,i_val6,i_val3 * 0x20 + 0x06010000,0x100);
    p_uint5 = (undefined4 *)p_int2[1];
    if (p_uint5 == (undefined4 *)p_int2[3]) {
      stack_val_2c = 1;
      stack_val_30 = (int)p_uint5 - *p_int2 >> 4;
      p_int4 = &stack_val_30;
      if (stack_val_30 == 0) {
        p_int4 = &stack_val_2c;
      }
      puStack_28 = p_uint5;
      if (stack_val_30 + *p_int4 == 0) {
        puStack_24 = (undefined4 *)0x0;
        i_val6 = 0;
      }
      else {
        i_val6 = (stack_val_30 + *p_int4) * 0x10;
        puStack_24 = (undefined4 *)runtime_malloc_aligned(i_val6);
        if (puStack_24 == (undefined4 *)0x0) {
          puStack_24 = (undefined4 *)VTable_Routine_080D3BC0(i_val6);
        }
      }
      p_uint7 = puStack_24;
      for (p_uint5 = (undefined4 *)*p_int2; p_uint5 != puStack_28; p_uint5 = p_uint5 + 4) {
        if (p_uint7 != (undefined4 *)0x0) {
          u_val9 = p_uint5[1];
          u_val10 = p_uint5[2];
          *p_uint7 = *p_uint5;
          p_uint7[1] = u_val9;
          p_uint7[2] = u_val10;
          p_uint7[3] = p_uint5[3];
        }
        p_uint7 = p_uint7 + 4;
      }
      i_val3 = stack_val_2c;
      if (stack_val_2c == 1) {
        if (p_uint7 != (undefined4 *)0x0) {
          *p_uint7 = stack_val_4c;
          p_uint7[1] = stack_val_48;
          p_uint7[2] = stack_val_44;
          p_uint7[3] = stack_val_40;
        }
        p_uint7 = p_uint7 + 4;
      }
      else {
        for (; i_val3 != 0; i_val3 = i_val3 + -1) {
          if (p_uint7 != (undefined4 *)0x0) {
            *p_uint7 = stack_val_4c;
            p_uint7[1] = stack_val_48;
            p_uint7[2] = stack_val_44;
            p_uint7[3] = stack_val_40;
          }
          p_uint7 = p_uint7 + 4;
        }
      }
      for (i_val3 = *p_int2; i_val3 != p_int2[1]; i_val3 = i_val3 + 0x10) {
      }
      if (*p_int2 != 0) {
        cpp_operator_delete();
      }
      *p_int2 = (int)puStack_24;
      p_int2[1] = (int)p_uint7;
      p_int2[3] = (int)puStack_24 + i_val6;
    }
    else {
      if (p_uint5 != (undefined4 *)0x0) {
        *p_uint5 = stack_val_4c;
        p_uint5[1] = stack_val_48;
        p_uint5[2] = stack_val_44;
        p_uint5[3] = stack_val_40;
      }
      p_int2[1] = p_int2[1] + 0x10;
    }
    if (*(char *)(0x97B + handle) == '\0') {
      *(undefined1 *)(0x97F + handle) = 0;
      *(undefined4 *)(0x89C + handle) = 5;
      HW_Routine_08008C28(handle + 0x810,0x100);
      HW_Routine_08008B6C(0x818 + handle,0xbb);
    }
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080C3B18 @ 0x080C3B18
// =============================================================================
undefined4 M4A_Routine_080C3B18(int handle)

{
  byte b_flag1;
  undefined4 u_val2;
  undefined4 temp_buf_28 [4];
  undefined4 stack_val_18;
  undefined4 stack_val_14;
  undefined4 stack_val_10;
  
  temp_buf_28[0] = *gRomData_08108004;
  temp_buf_28[1] = gRomData_08108004[1];
  temp_buf_28[2] = gRomData_08108004[2];
  temp_buf_28[3] = gRomData_08108004[3];
  stack_val_18 = gRomData_08108004[4];
  stack_val_14 = gRomData_08108004[5];
  stack_val_10 = gRomData_08108004[6];
  *(undefined4 *)(handle + 0x984) = temp_buf_28[*(int *)(handle + 0x980)];
  b_flag1 = *(byte *)(handle + 0x988);
  if (b_flag1 < 3) {
    u_val2 = 0;
  }
  else if ((byte)(b_flag1 - 3) < 3) {
    u_val2 = 1;
  }
  else if ((byte)(b_flag1 - 6) < 3) {
    u_val2 = 2;
  }
  else if ((byte)(b_flag1 - 9) < 2) {
    u_val2 = 3;
  }
  else if ((byte)(b_flag1 - 0xb) < 3) {
    u_val2 = 4;
  }
  else if ((byte)(b_flag1 - 0xe) < 3) {
    u_val2 = 5;
  }
  else if ((byte)(b_flag1 - 0x11) < 3) {
    u_val2 = 6;
  }
  else {
    u_val2 = 7;
  }
  *(undefined4 *)(handle + 0x8b0) = u_val2;
  *(char *)(handle + 0x97C) =
       *(char *)(*(int *)(handle + 0x8b0) * 4 + gRomData_08107FE0 + 1) * '\x03';
  return;
}

// =============================================================================
// Function: M4A_Routine_080C3C18 @ 0x080C3C18
// =============================================================================
undefined4 M4A_Routine_080C3C18(int handle)

{
  int i_val1;
  int i_val2;
  
  *(undefined4 *)(handle + 0x8BC) = 2;
  *(undefined1 *)(handle + 0x8C4) = 1;
  i_val1 = 0x8C5;
  *(undefined1 *)(handle + 0x8C5) = 0;
  *(undefined4 *)(handle + i_val1 + -0x29) = 0;
  *(undefined4 *)(handle + i_val1 + -0x21) = 0;
  *(undefined4 *)(handle + i_val1 + -0x25) = 0;
  *(undefined4 *)(handle + i_val1 + -0x1d) = 0;
  *(undefined4 *)(handle + i_val1 + -0x19) = 0;
  *(undefined1 *)(handle + i_val1 + 0xa3) = 1;
  *(undefined1 *)(handle + i_val1 + 0xa4) = 0;
  *(undefined1 *)(handle + i_val1 + 0xa5) = 0;
  *(undefined1 *)(handle + i_val1 + 0xa6) = 0;
  *(undefined1 *)(handle + i_val1 + 0xa7) = 1;
  i_val2 = 0x96D;
  *(undefined1 *)(handle + 0x96D) = 0;
  *(undefined1 *)(handle + i_val1 + 0xab) = 0;
  *(undefined1 *)(handle + i_val2 + 2) = 0;
  *(undefined1 *)(handle + i_val1 + 0xa9) = 0;
  *(undefined1 *)(handle + i_val2 + 0xb) = 0;
  *(undefined1 *)(handle + i_val1 + 0xb5) = 0;
  *(undefined1 *)(handle + i_val2 + 0xc) = 0;
  *(undefined1 *)(handle + i_val1 + -0x11) = 0x78;
  *(undefined1 *)(handle + 0x8B5) = 0x98;
  i_val2 = 0x8B7;
  *(undefined1 *)(handle + 0x8B7) = 0;
  *(undefined1 *)(handle + i_val1 + -0xf) = 0;
  *(undefined1 *)(handle + i_val2 + 2) = 0;
  *(undefined1 *)(handle + i_val1 + -0xd) = 0;
  *(undefined1 *)(handle + 0x97B) = 0x19;
  *(undefined1 *)(handle + 0x97E) = 0;
  *(undefined1 *)(handle + i_val1 + 0xb8) = 0;
  *(undefined1 *)(handle + 0x97F) = 0;
  return;
}

// =============================================================================
// Function: M4A_Routine_080C3D04 @ 0x080C3D04
// =============================================================================
undefined4 M4A_Routine_080C3D04(int handle)

{
  int i_val1;
  char c_char2;
  undefined2 u_val3;
  undefined1 *p_uint4;
  undefined2 *p_uint5;
  undefined4 u_val6;
  undefined4 u_val7;
  undefined4 u_val8;
  undefined4 u_val9;
  undefined4 u_val10;
  int *p_int11;
  uint u_val12;
  int i_val13;
  int i_val14;
  char *p_char15;
  undefined4 *p_uint16;
  undefined4 u_val17;
  undefined4 stack_val_b8;
  uint stack_val_b4;
  undefined4 stack_val_b0;
  undefined4 stack_val_ac;
  undefined4 stack_val_a8;
  undefined4 stack_val_a4;
  undefined4 stack_val_a0;
  undefined4 stack_val_9c;
  undefined4 stack_val_98;
  undefined4 stack_val_94;
  undefined4 stack_val_90;
  undefined4 stack_val_8c;
  undefined4 stack_val_88;
  undefined4 stack_val_84;
  undefined4 stack_val_80;
  undefined4 stack_buf_7c [13];
  uint stack_val_48;
  int stack_val_44;
  int stack_val_40;
  int stack_val_3c;
  int stack_val_38;
  int stack_val_34;
  int stack_val_30;
  undefined4 stack_val_2c;
  int stack_val_28;
  undefined4 stack_val_24;
  
  stack_val_48 = 0;
  stack_val_44 = 0;
  stack_val_40 = 0;
  stack_val_3c = 0;
  stack_val_38 = 0;
  stack_val_34 = 0;
  stack_val_30 = 0;
  stack_val_2c = 0;
  stack_val_28 = 0;
  p_uint4 = (undefined1 *)(handle + 0x904);
  i_val14 = 0x18;
  do {
    *p_uint4 = 0;
    p_uint4[1] = 0;
    p_uint4 = p_uint4 + 4;
    i_val14 = i_val14 + -1;
  } while (-1 < i_val14);
  p_uint5 = (undefined2 *)HW_GetSpriteAttr1Offset(handle);
  *p_uint5 = 0x1740;
  u_val6 = *(undefined4 *)(handle + 0x51c);
  u_val7 = HW_Routine_080088DC(handle);
  stack_val_24 = HW_GetSpriteAttr2Offset(handle);
  u_val8 = HW_GetSpriteAttr1Offset(handle);
  u_val9 = HW_GetPaletteBankOffset(handle);
  u_val10 = HW_Routine_0800894C(handle);
  Animal_Routine_08050D3C(u_val6,u_val7,stack_val_24,u_val8,u_val9,u_val10,handle + 0x814);
  u_val6 = *(undefined4 *)(handle + 0x51c);
  u_val3 = M4A_Routine_080C7B64(handle);
  Animal_Routine_08050E50(u_val6,u_val3);
  p_int11 = (int *)(handle + 0x89c);
  do {
    if (*p_int11 != 0) {
      return;
    }
    HW_Routine_080087C8(handle);
    HW_Routine_080088B8(handle);
    p_uint16 = (undefined4 *)(handle + 0x51C);
    i_val14 = Animal_Routine_08050D34(*p_uint16);
    u_val17 = *p_uint16;
    u_val6 = HW_Routine_080088DC(handle);
    u_val7 = HW_GetSpriteAttr2Offset(handle);
    u_val8 = HW_GetSpriteAttr1Offset(handle);
    u_val9 = HW_GetPaletteBankOffset(handle);
    u_val10 = HW_Routine_0800894C(handle);
    u_val12 = Animal_Routine_08050D3C(u_val17,u_val6,u_val7,u_val8,u_val9,u_val10,handle + 0x814);
    if (u_val12 < 7) {
      switch(*(uint *)(u_val12 * 4 + gInlineTable_080C3E38) & 0xfffffffe) {
      case 0x80c3e54:
        if (stack_val_48 == 8) {
          *(undefined4 *)(handle + 0x89C) = 1;
        }
        else if (stack_val_48 == 5) {
          stack_val_2c = 1;
          if (stack_val_28 != 0) {
            Animal_Routine_08050D5C(*(undefined4 *)(handle + 0x51C));
            stack_val_48 = 6;
            stack_val_44 = 0;
            M4A_Routine_080C3C18(handle);
            p_uint4 = (undefined1 *)(handle + 0x904);
            i_val14 = 0x18;
            do {
              *p_uint4 = 0;
              p_uint4[1] = 0;
              p_uint4 = p_uint4 + 4;
              i_val14 = i_val14 + -1;
            } while (-1 < i_val14);
            p_uint16 = (undefined4 *)(handle + 0x544);
            u_val12 = *(uint *)*p_uint16;
            if (-1 < (int)(-u_val12 | u_val12)) {
              Farm_Routine_08009378((uint *)*p_uint16 + 3,0x889,1,1);
              i_val14 = HW_GetPaletteBankOffset(handle);
              _call_via_r2(i_val14,*p_uint16,*(undefined4 *)(*(int *)(i_val14 + 8) + 0x10));
            }
            if ((int)(-*(uint *)*p_uint16 | *(uint *)*p_uint16) < 0) {
              p_uint16 = (undefined4 *)(handle + 0x544);
              do {
                HW_Routine_080087C8(handle);
              } while ((int)(-*(uint *)*p_uint16 | *(uint *)*p_uint16) < 0);
            }
            p_int11 = (int *)(handle + 0x544);
            Farm_Routine_0800934C(*p_int11 + 0xc,0x889,1,1);
            i_val14 = HW_GetPaletteBankOffset(handle);
            _call_via_r2(i_val14,*p_int11,*(undefined4 *)(*(int *)(i_val14 + 8) + 0x10));
          }
        }
        else if (stack_val_48 == 4) {
          stack_val_34 = 1;
          if (stack_val_30 != 0) {
            Animal_Routine_08050D5C(*(undefined4 *)(handle + 0x51C));
            stack_val_48 = 5;
LAB_080c3f6e:
            stack_val_44 = 0;
          }
        }
        else if (stack_val_48 == 3) {
          stack_val_3c = 1;
          if (stack_val_38 != 0) {
            Animal_Routine_08050D5C(*(undefined4 *)(handle + 0x51C));
            stack_val_48 = 4;
            goto LAB_080c3f6e;
          }
        }
        else {
          Animal_Routine_08050D5C(*(undefined4 *)(handle + 0x51C));
          if ((stack_val_48 != 0) && (stack_val_48 != 6)) {
            stack_val_48 = stack_val_48 + 1;
          }
        }
        break;
      case 0x80c3fa0:
        if (i_val14 < 6) {
          if (i_val14 < 4) {
            if (i_val14 != 1) goto LAB_080c3fb6;
            if (stack_val_48 < 9) {
              u_val6 = (**(code **)(stack_val_48 * 4 + gInlineTable_080C3FE0))();
              return u_val6;
            }
          }
        }
        else if (i_val14 == 6) {
          i_val14 = Animal_Routine_08050DF0(*(undefined4 *)(handle + 0x51C));
          if (i_val14 == 1) {
            if (stack_val_48 == 0) {
              stack_val_48 = 1;
            }
            else if (stack_val_48 == 6) {
              stack_val_48 = 7;
            }
          }
          else if (i_val14 == 2) {
            if (stack_val_48 == 0) {
              stack_val_48 = 7;
            }
            else if (stack_val_48 == 6) {
              stack_val_48 = 1;
              stack_val_44 = 0;
              stack_val_3c = 0;
              stack_val_38 = 0;
              stack_val_34 = 0;
              stack_val_30 = 0;
              stack_val_2c = 0;
              stack_val_28 = 0;
            }
          }
        }
        else {
LAB_080c3fb6:
          Animal_Routine_08050D74(*(undefined4 *)(handle + 0x51C));
        }
      }
    }
    if (stack_val_48 == 4) {
      if (stack_val_34 == 0) goto M4A_Routine_080C513A;
      if (stack_val_44 == 0) {
        *(undefined1 *)(handle + 0x8c5) = 1;
        M4A_Routine_080C7B7C(&stack_val_98,handle,3);
        *(char *)(handle + 0x97d) = (char)stack_val_98 + '\b';
        M4A_Routine_080C7B7C(&stack_val_94,handle,3);
        *(char *)(handle + 0x97e) = (char)((uint)stack_val_94 >> 8) + '\x18';
        HW_Routine_08008B6C(handle + 0x818,0xbe);
        i_val14 = 1;
        goto case_080C5138;
      }
      if (stack_val_44 == 0x14) {
        i_val14 = 0x910;
        goto M4A_Routine_080C4B4A;
      }
      if (stack_val_44 == 0x1e) {
        *(undefined1 *)(handle + 0x8C5) = 1;
        M4A_Routine_080C7B7C(&stack_val_90,handle,0x14);
        *(char *)(handle + 0x97D) = (char)stack_val_90 + '\b';
        M4A_Routine_080C7B7C(&stack_val_8c,handle,0x14);
        *(char *)(handle + 0x97E) = (char)((uint)stack_val_8c >> 8) + '\x18';
        i_val14 = handle + 0x818;
        goto LAB_080c41f8;
      }
      if (stack_val_44 == 0x32) {
        *(undefined1 *)(handle + 0x954) = 1;
        i_val14 = 0x33;
        goto case_080C5138;
      }
      if (stack_val_44 == 0x3c) {
        *(undefined1 *)(handle + 0x8c5) = 0;
        *(undefined1 *)(handle + 0x910) = 0;
        *(undefined1 *)(handle + 0x954) = 0;
        p_uint16 = (undefined4 *)(handle + 0x544);
        u_val12 = *(uint *)*p_uint16;
        if (-1 < (int)(-u_val12 | u_val12)) {
          Farm_Routine_08009378((uint *)*p_uint16 + 3,0x889,1,1);
          i_val14 = HW_GetPaletteBankOffset(handle);
          _call_via_r2(i_val14,*p_uint16,*(undefined4 *)(*(int *)(i_val14 + 8) + 0x10));
        }
        i_val14 = 0x3d;
        u_val12 = -*(uint *)*p_uint16 | *(uint *)*p_uint16;
        while ((int)u_val12 < 0) {
          HW_Routine_080087C8(handle);
          M4A_Routine_080C2D54(handle);
          u_val12 = -**(uint **)(handle + 0x544) | **(uint **)(handle + 0x544);
        }
        p_int11 = (int *)(handle + 0x544);
        Farm_Routine_0800934C(*p_int11 + 0xc,0x889,1,1);
        i_val13 = HW_GetPaletteBankOffset(handle);
        _call_via_r2(i_val13,*p_int11,*(undefined4 *)(*(int *)(i_val13 + 8) + 0x10));
        *(undefined1 *)(handle + 0x8b4) = 0x78;
        *(undefined1 *)(handle + 0x8b5) = 0x51;
        u_val12 = -*(uint *)*p_int11 | *(uint *)*p_int11;
        while ((int)u_val12 < 0) {
          HW_Routine_080087C8(handle);
          M4A_Routine_080C2D54(handle);
          u_val12 = -**(uint **)(handle + 0x544) | **(uint **)(handle + 0x544);
        }
        goto case_080C5138;
      }
      i_val14 = stack_val_44 + 1;
      if (stack_val_44 < 0x3d) {
        M4A_Routine_080C5138();
      }
      i_val13 = 0x8C5;
      if (8 < *(uint *)(handle + 0x8BC)) goto case_080C5138;
      switch(*(uint *)(*(uint *)(handle + 0x8BC) * 4 + gInlineTable_080C47DC) & 0xfffffffe) {
      case 0x80c4800:
        *(undefined4 *)(handle + 0x8c0) = 4;
        *(undefined4 *)(handle + _ASSET_BLOCK_080C486C) = 8;
        *(undefined1 *)(handle + _LAB_080c4870) = 1;
        i_val14 = _LAB_080c4874;
        *(char *)(handle + _LAB_080c4874) = *(char *)(handle + _LAB_080c4874) + -10;
        i_val13 = _LAB_080c4878;
        *(undefined1 *)(handle + _LAB_080c4878) = 1;
        M4A_Routine_080C7B7C(&stack_val_88,handle,3);
        *(char *)(handle + _LAB_080c487c) = (char)stack_val_88 + '\b';
        M4A_Routine_080C7B7C(&stack_val_84,handle,3);
        *(char *)(handle + _LAB_080c4880) = (char)((uint)stack_val_84 >> 8) + '\x18';
        HW_Routine_08008B6C(handle + i_val14 + -0x95,0xbc);
        HW_Routine_08008B6C(handle + i_val13 + -0xad,0xbe);
        goto M4A_Routine_080C5028;
      case 0x80c4884:
        *(undefined4 *)(handle + 0x8BC) = 5;
        p_char15 = (char *)(handle + 0x8C4);
M4A_Routine_080C5024:
        c_char2 = '\x01';
        goto M4A_Routine_080C5026;
      case 0x80c489c:
        *(undefined4 *)(handle + 0x8c0) = 2;
        i_val14 = 0x8BC;
        *(undefined4 *)(handle + 0x8BC) = 8;
        i_val13 = 0x8C4;
        *(undefined1 *)(handle + 0x8C4) = 1;
        *(char *)(handle + 0x8B5) = *(char *)(handle + 0x8B5) + -10;
        *(undefined1 *)(handle + 0x8C5) = 1;
        M4A_Routine_080C7B7C(&stack_val_80,handle,0x14);
        *(char *)(handle + 0x97D) = (char)stack_val_80 + '\b';
        M4A_Routine_080C7B7C(stack_buf_7c,handle,0x14);
        *(char *)(handle + 0x97E) = (char)((uint)stack_buf_7c[0] >> 8) + '\x18';
        HW_Routine_08008B6C(handle + i_val14 + -0x9c,0xbc);
        HW_Routine_08008B6C(handle + i_val13 + -0xac,0xbe);
        goto M4A_Routine_080C5028;
      case 0x80c4920:
        c_char2 = *(char *)(handle + 0x8B4) + -1;
        *(char *)(handle + 0x8B4) = c_char2;
        i_val14 = stack_val_44 + 1;
        if (c_char2 != 'X') {
          M4A_Routine_080C5138();
        }
        *(undefined4 *)(handle + 0x8BC) = 7;
        p_uint4 = (undefined1 *)(handle + 0x8C4);
        goto M4A_Routine_080C5044;
      case 0x80c4954:
        c_char2 = *(char *)(handle + 0x8B4) + '\x01';
        *(char *)(handle + 0x8B4) = c_char2;
        i_val14 = stack_val_44 + 1;
        if (c_char2 == -0x78) {
          *(undefined4 *)(handle + 0x8BC) = 6;
          p_uint4 = (undefined1 *)(handle + 0x8C4);
          goto M4A_Routine_080C5044;
        }
        break;
      case 0x80c4988:
        c_char2 = *(char *)(handle + 0x8B5) + -1;
        *(char *)(handle + 0x8B5) = c_char2;
        i_val14 = stack_val_44 + 1;
        if (c_char2 == '1') {
          *(undefined4 *)(handle + 0x8BC) = 0;
          i_val13 = 0x8C4;
          goto M4A_Routine_080C5042;
        }
        break;
      case 0x80c49b8:
        c_char2 = *(char *)(handle + 0x8B5) + '\x01';
        *(char *)(handle + 0x8B5) = c_char2;
        i_val14 = stack_val_44 + 1;
        if (c_char2 == 'q') {
          *(undefined4 *)(handle + 0x8BC) = 3;
          p_uint4 = (undefined1 *)(handle + 0x8C4);
          goto M4A_Routine_080C5044;
        }
        break;
      case 0x80c49ec:
        stack_val_40 = stack_val_40 + 1;
        if (stack_val_40 == 0x14) {
          if (*(int *)(handle + 0x8c0) == 4) {
            p_char15 = (char *)(handle + 0x910);
            goto M4A_Routine_080C5024;
          }
          i_val14 = stack_val_44 + 1;
          if (*(int *)(handle + 0x8c0) == 2) {
            p_uint4 = (undefined1 *)(handle + 0x954);
            goto M4A_Routine_080C5044;
          }
        }
        else if (stack_val_40 == 0x32) {
          HW_Routine_08008B6C(handle + 0x820,0x6c);
          if (*(int *)(handle + 0x8c0) == 4) {
            p_char15 = (char *)(handle + 0x911);
            goto M4A_Routine_080C5024;
          }
          i_val14 = stack_val_44 + 1;
          if (*(int *)(handle + 0x8c0) == 2) {
            p_uint4 = (undefined1 *)(handle + 0x955);
            goto M4A_Routine_080C5044;
          }
        }
        else {
          i_val14 = stack_val_44 + 1;
          if (stack_val_40 == 0x3c) {
            stack_val_40 = 0;
            *(undefined1 *)(handle + 0x8C5) = 0;
            i_val1 = 0x8BC;
            p_int11 = (int *)(handle + 0x8BC);
            *p_int11 = *(int *)(handle + 0x8c0);
            p_uint4 = (undefined1 *)(handle + i_val13 + -1);
            *p_uint4 = 1;
            p_char15 = (char *)(handle + i_val1 + -7);
            *p_char15 = *p_char15 + '\n';
            if (*(int *)(handle + 0x8c0) == 2) {
              stack_val_30 = 1;
              *(undefined1 *)(i_val1 + 0x54 + handle) = 0;
              *(undefined1 *)(i_val1 + 0x98 + handle) = 0;
              *(undefined1 *)(i_val1 + 0x55 + handle) = 0;
              *(undefined1 *)(i_val1 + 0x99 + handle) = 0;
              *p_int11 = 2;
              p_int11 = &stack_val_30;
              goto LAB_080c4ac2;
            }
          }
        }
      }
      goto case_080C5138;
    }
    if (4 < (int)stack_val_48) {
LAB_080c413c:
      if (stack_val_48 == 5) {
        M4A_Routine_080C4AE0();
      }
      goto M4A_Routine_080C513A;
    }
    if (stack_val_48 != 3) {
      M4A_Routine_080C513A();
      goto LAB_080c413c;
    }
    if (stack_val_3c == 0) {
      M4A_Routine_080C513A();
    }
    if (stack_val_44 == 0) {
      *(undefined1 *)(handle + 0x8c5) = 1;
      HW_Routine_08008B6C(handle + 0x818,0xbe);
      M4A_Routine_080C7B7C(&stack_val_b8,handle,1);
      *(char *)(handle + 0x97d) = (char)stack_val_b8 + '\b';
      M4A_Routine_080C7B7C(&stack_val_b4,handle,1);
      M4A_Routine_080C4B28((stack_val_b4 >> 8) + 0x18,handle + 0x97e);
    }
    if (stack_val_44 == 0x14) {
      i_val14 = 0x908;
M4A_Routine_080C4B4A:
      *(undefined1 *)(handle + i_val14) = 1;
      i_val14 = 0x15;
      goto case_080C5138;
    }
    if (stack_val_44 == 0x1e) {
      *(undefined1 *)(handle + 0x8c5) = 1;
      M4A_Routine_080C7B7C(&stack_val_b0,handle,0x17);
      *(char *)(handle + 0x97d) = (char)stack_val_b0 + '\b';
      M4A_Routine_080C7B7C(&stack_val_ac,handle,0x17);
      *(char *)(handle + 0x97e) = (char)((uint)stack_val_ac >> 8) + '\x18';
      i_val14 = handle + 0x818;
LAB_080c41f8:
      HW_Routine_08008B6C(i_val14,0xbe);
      i_val14 = 0x1f;
      goto case_080C5138;
    }
    if (stack_val_44 == 0x32) {
      M4A_Routine_080C4BBC(0x32,handle + 0x960);
    }
    if (stack_val_44 == 0x3c) {
      *(undefined1 *)(handle + 0x8c5) = 0;
      *(undefined1 *)(handle + 0x908) = 0;
      *(undefined1 *)(handle + 0x960) = 0;
      p_uint16 = (undefined4 *)(handle + 0x544);
      u_val12 = *(uint *)*p_uint16;
      if (-1 < (int)(-u_val12 | u_val12)) {
        Farm_Routine_08009378((uint *)*p_uint16 + 3,0x889,1,1);
        i_val14 = HW_GetPaletteBankOffset(handle);
        _call_via_r2(i_val14,*p_uint16,*(undefined4 *)(*(int *)(i_val14 + 8) + 0x10));
      }
      i_val14 = 0x3d;
      u_val12 = -*(uint *)*p_uint16 | *(uint *)*p_uint16;
      while ((int)u_val12 < 0) {
        HW_Routine_080087C8(handle);
        M4A_Routine_080C2D54(handle);
        u_val12 = -**(uint **)(handle + 0x544) | **(uint **)(handle + 0x544);
      }
      p_int11 = (int *)(handle + 0x544);
      Farm_Routine_0800934C(*p_int11 + 0xc,0x889,1,1);
      i_val13 = HW_GetPaletteBankOffset(handle);
      _call_via_r2(i_val13,*p_int11,*(undefined4 *)(*(int *)(i_val13 + 8) + 0x10));
      *(undefined1 *)(handle + 0x8b4) = 0x78;
      *(undefined1 *)(handle + 0x8b5) = 0x51;
      u_val12 = -*(uint *)*p_int11 | *(uint *)*p_int11;
      while ((int)u_val12 < 0) {
        HW_Routine_080087C8(handle);
        M4A_Routine_080C2D54(handle);
        u_val12 = -**(uint **)(handle + 0x544) | **(uint **)(handle + 0x544);
      }
      goto case_080C5138;
    }
    i_val14 = stack_val_44 + 1;
    if (stack_val_44 < 0x3d) {
      M4A_Routine_080C5138();
    }
    if (8 < *(uint *)(handle + 0x8BC)) goto case_080C5138;
    switch(*(uint *)(*(uint *)(handle + 0x8BC) * 4 + gInlineTable_080C4344) & 0xfffffffe) {
    case 0x80c4368:
      *(undefined4 *)(handle + 0x8c0) = 2;
      i_val14 = _ASSET_BLOCK_080C43C8;
      *(undefined4 *)(handle + _ASSET_BLOCK_080C43C8) = 8;
      *(undefined1 *)(handle + _LAB_080c43cc) = 1;
      *(char *)(handle + _LAB_080c43d0) = *(char *)(handle + _LAB_080c43d0) + -10;
      *(undefined1 *)(handle + 0x8c5) = 1;
      HW_Routine_08008B6C(handle + i_val14 + -0xa4,0xbe);
      M4A_Routine_080C7B7C(&stack_val_a8,handle,1);
      *(char *)(handle + _LAB_080c43d4) = (char)stack_val_a8 + '\b';
      M4A_Routine_080C7B7C(&stack_val_a4,handle,1);
      c_char2 = (char)((uint)stack_val_a4 >> 8) + '\x18';
      p_char15 = (char *)(handle + _LAB_080c43d8);
      goto M4A_Routine_080C5026;
    case 0x80c43dc:
      *(undefined4 *)(handle + _LAB_080c43ec) = 5;
      M4A_Routine_080C5024(5,handle + _LAB_080c43f0);
    case 0x80c43f4:
      *(undefined4 *)(handle + 0x8c0) = 6;
      *(undefined4 *)(handle + _ASSET_BLOCK_080C4454) = 8;
      *(undefined1 *)(handle + _LAB_080c4458) = 1;
      *(char *)(handle + _LAB_080c445c) = *(char *)(handle + _LAB_080c445c) + -10;
      *(undefined1 *)(handle + _LAB_080c4460) = 1;
      HW_Routine_08008B6C(handle + _LAB_080c4464,0xbe);
      M4A_Routine_080C7B7C(&stack_val_a0,handle,0x17);
      *(char *)(handle + _LAB_080c4468) = (char)stack_val_a0 + '\b';
      M4A_Routine_080C7B7C(&stack_val_9c,handle,0x17);
      c_char2 = (char)((uint)stack_val_9c >> 8) + '\x18';
      p_char15 = (char *)(handle + _LAB_080c446c);
M4A_Routine_080C5026:
      *p_char15 = c_char2;
M4A_Routine_080C5028:
      i_val14 = stack_val_44 + 1;
      goto case_080C5138;
    case 0x80c4470:
      c_char2 = *(char *)(handle + _LAB_080c449c) + -1;
      u_val6 = 0;
      *(char *)(handle + _LAB_080c449c) = c_char2;
      i_val14 = stack_val_44 + 1;
      if (c_char2 != 'h') {
        M4A_Routine_080C5138();
      }
      *(undefined4 *)(handle + _LAB_080c44a0) = u_val6;
      p_uint4 = (undefined1 *)(handle + _LAB_080c44a4);
      break;
    case 0x80c44a8:
      c_char2 = *(char *)(handle + _LAB_080c44d0) + '\x01';
      *(char *)(handle + _LAB_080c44d0) = c_char2;
      i_val14 = stack_val_44 + 1;
      if (c_char2 != -0x78) {
        M4A_Routine_080C5138();
      }
      *(undefined4 *)(handle + _LAB_080c44d4) = 7;
      i_val13 = _LAB_080c44d8;
M4A_Routine_080C5042:
      p_uint4 = (undefined1 *)(handle + i_val13);
      break;
    case 0x80c44dc:
      c_char2 = *(char *)(handle + _LAB_080c4508) + -1;
      *(char *)(handle + _LAB_080c4508) = c_char2;
      i_val14 = stack_val_44 + 1;
      if (c_char2 != '1') {
        M4A_Routine_080C5138();
      }
      *(undefined4 *)(handle + _LAB_080c450c) = 4;
      p_uint4 = (undefined1 *)(handle + _LAB_080c4510);
      break;
    case 0x80c4514:
      c_char2 = *(char *)(handle + _LAB_080c4540) + '\x01';
      *(char *)(handle + _LAB_080c4540) = c_char2;
      i_val14 = stack_val_44 + 1;
      if (c_char2 != 'q') {
        M4A_Routine_080C5138();
      }
      *(undefined4 *)(handle + _LAB_080c4544) = 3;
      p_uint4 = (undefined1 *)(handle + _LAB_080c4548);
      break;
    case 0x80c454c:
      stack_val_40 = stack_val_40 + 1;
      if (stack_val_40 == 0x14) {
        if (*(int *)(handle + 0x8c0) == 6) {
          p_char15 = (char *)(handle + 0x960);
          goto M4A_Routine_080C5024;
        }
        i_val14 = stack_val_44 + 1;
        if (*(int *)(handle + 0x8c0) != 2) {
          M4A_Routine_080C5138();
        }
        p_uint4 = (undefined1 *)(handle + _LAB_080c4580);
        break;
      }
      i_val14 = stack_val_44 + 1;
      if (stack_val_40 != 0x3c) {
        M4A_Routine_080C5138();
      }
      stack_val_40 = 0;
      *(undefined1 *)(handle + 0x8C5) = 0;
      p_int11 = (int *)(handle + 0x8BC);
      *p_int11 = *(int *)(handle + 0x8c0);
      p_uint4 = (undefined1 *)(handle + 0x8C4);
      *p_uint4 = 1;
      p_char15 = (char *)(handle + 0x8b5);
      *p_char15 = *p_char15 + '\n';
      if (*(int *)(handle + 0x8c0) == 2) {
        stack_val_38 = 1;
        *(undefined1 *)(handle + 0x908) = 0;
        *(undefined1 *)(handle + 0x960) = 0;
        *p_int11 = 2;
        p_int11 = &stack_val_38;
LAB_080c4ac2:
        stack_val_40 = 0;
        *p_uint4 = (char)*p_int11;
        *(undefined1 *)(handle + 0x8B4) = 0x78;
        *p_char15 = -0x68;
      }
    case 0x80c5138:
      goto case_080C5138;
    }
M4A_Routine_080C5044:
    *p_uint4 = 1;
case_080C5138:
    stack_val_44 = i_val14;
M4A_Routine_080C513A:
    M4A_Routine_080C2D54(handle);
    p_int11 = (int *)(handle + 0x89C);
  } while( true );
}

// =============================================================================
// Function: M4A_Routine_080C516C @ 0x080C516C
// =============================================================================
undefined4 M4A_Routine_080C516C(int handle)

{
  undefined1 *p_uint1;
  undefined2 *p_uint2;
  undefined4 u_val3;
  undefined4 u_val4;
  undefined4 u_val5;
  undefined4 u_val6;
  undefined4 u_val7;
  uint u_val8;
  int i_val9;
  undefined4 *p_uint10;
  undefined4 u_val11;
  undefined1 stack_buf_78 [4];
  undefined1 stack_buf_74 [8];
  undefined1 stack_buf_6c [16];
  undefined1 temp_buf_5c [12];
  undefined4 stack_val_50;
  undefined2 stack_val_4c;
  undefined2 stack_val_2c;
  int stack_val_28;
  int stack_val_24;
  
  ScriptEngine_Routine_0804EC84(*(undefined1 *)(handle + 0x97C),stack_buf_78,0);
  p_uint10 = gRomData_08108218;
  gba_memcpy(stack_buf_74,gRomData_08108218,6);
  u_val3 = gRomData_08108220;
  gba_memcpy(stack_buf_6c,gRomData_08108220,0xf);
  u_val4 = gRomData_08108230;
  gba_memcpy(temp_buf_5c,gRomData_08108230,10);
  stack_val_50 = *p_uint10;
  stack_val_4c = *(undefined2 *)(p_uint10 + 1);
  gba_strcat(&stack_val_50,u_val3);
  gba_strcat(&stack_val_50,stack_buf_78);
  gba_strcat(&stack_val_50,u_val4);
  stack_val_28 = 0;
  p_uint1 = (undefined1 *)(handle + 0x904);
  i_val9 = 0x18;
  do {
    *p_uint1 = 0;
    p_uint1[1] = 0;
    p_uint1 = p_uint1 + 4;
    i_val9 = i_val9 + -1;
  } while (-1 < i_val9);
  stack_val_24 = 1;
  p_uint2 = (undefined2 *)HW_GetSpriteAttr1Offset(handle);
  stack_val_2c = 0x1740;
  *p_uint2 = 0x1740;
  p_uint10 = (undefined4 *)(handle + 0x51C);
  Animal_Routine_08050E5C(*p_uint10);
  u_val11 = *p_uint10;
  u_val3 = HW_Routine_080088DC(handle);
  u_val4 = HW_GetSpriteAttr2Offset(handle);
  u_val5 = HW_GetSpriteAttr1Offset(handle);
  u_val6 = HW_GetPaletteBankOffset(handle);
  u_val7 = HW_Routine_0800894C(handle);
  Animal_Routine_08050D3C(u_val11,u_val3,u_val4,u_val5,u_val6,u_val7,handle + 0x814);
  do {
    do {
      M4A_Routine_080C2D54(handle);
      if (*(int *)(handle + 0x89C) != 1) {
        return;
      }
      HW_Routine_080087C8(handle);
      p_uint10 = (undefined4 *)(handle + 0x51C);
      i_val9 = Animal_Routine_08050D34(*p_uint10);
      u_val11 = *p_uint10;
      u_val3 = HW_Routine_080088DC(handle);
      u_val4 = HW_GetSpriteAttr2Offset(handle);
      u_val5 = HW_GetSpriteAttr1Offset(handle);
      u_val6 = HW_GetPaletteBankOffset(handle);
      u_val7 = HW_Routine_0800894C(handle);
      u_val8 = Animal_Routine_08050D3C(u_val11,u_val3,u_val4,u_val5,u_val6,u_val7,handle + 0x814);
    } while (6 < u_val8);
    switch(*(uint *)(u_val8 * 4 + gInlineTable_080C52D8) & 0xfffffffe) {
    case 0x80c52f4:
      if (stack_val_24 == 0) {
        *(undefined4 *)(handle + 0x89C) = 2;
      }
      else {
        Animal_Routine_08050D5C(*(undefined4 *)(handle + 0x51C));
      }
      break;
    case 0x80c5318:
      if (i_val9 == 1) {
        p_uint10 = (undefined4 *)(handle + 0x51C);
        Animal_Routine_08050D8C(*p_uint10,&stack_val_50);
        Animal_Routine_08050DD8(*p_uint10);
        stack_val_24 = 0;
      }
    case 0x80c5334:
      stack_val_28 = stack_val_28 + 1;
      if (0x78 < stack_val_28) {
        p_uint10 = (undefined4 *)(handle + 0x51C);
        Animal_Routine_08050DE4(*p_uint10);
        Animal_Routine_08050D74(*p_uint10);
      }
    }
  } while( true );
}

// =============================================================================
// Function: M4A_Routine_080C5378 @ 0x080C5378
// =============================================================================
undefined4 M4A_Routine_080C5378(int handle)

{
  byte *pbVar1;
  undefined1 *p_uint2;
  char *p_char3;
  uint u_val4;
  undefined2 *p_uint5;
  uint u_val6;
  uint *p_uint7;
  int i_val8;
  undefined4 *p_uint9;
  int loop_i;
  int loop_j;
  int *p_int12;
  uint u_val13;
  char stack_str_58 [28];
  undefined2 temp_buf_3c [2];
  undefined1 stack_buf_38 [4];
  undefined1 stack_buf_34 [4];
  uint stack_val_30;
  uint stack_val_2c;
  uint stack_val_28;
  undefined2 *puStack_24;
  
  *(undefined1 *)(handle + _ASSET_BLOCK_080C54E0) = 0x78;
  *(undefined1 *)(handle + 0x8B5) = 0x98;
  loop_i = 0x8BC;
  *(undefined4 *)(handle + 0x8BC) = 2;
  *(undefined1 *)(handle + 0x8C4) = 1;
  u_val13 = 0;
  stack_val_30 = 0;
  pbVar1 = (byte *)(*(int *)(handle + loop_i + -0xc) * 4 + gRomData_08107FE0);
  stack_val_2c = (uint)*pbVar1;
  u_val6 = (uint)pbVar1[1];
  stack_val_28 = (uint)pbVar1[2];
  puStack_24 = temp_buf_3c;
  p_uint2 = (undefined1 *)(handle + 0x904);
  loop_i = 0x18;
  do {
    *p_uint2 = 0;
    p_uint2[1] = 0;
    p_uint2 = p_uint2 + 4;
    loop_i = loop_i + -1;
  } while (-1 < loop_i);
  p_uint2 = (undefined1 *)(handle + 0x8C8);
  loop_i = 0xe;
  do {
    *p_uint2 = 0;
    p_uint2[1] = 0;
    p_uint2 = p_uint2 + 4;
    loop_i = loop_i + -1;
  } while (-1 < loop_i);
  p_char3 = stack_str_58 + 0x18;
  do {
    *p_char3 = '\0';
    p_char3 = p_char3 + -1;
  } while ((int)stack_str_58 <= (int)p_char3);
  loop_i = 0;
  if (u_val6 != 0) {
    p_uint2 = (undefined1 *)(handle + 0x8CA);
    do {
      u_val4 = math_rand();
      *p_uint2 = (char)((0x19U - loop_i & 0xffff) * (u_val4 & 0xffff) >> 0x10);
      p_uint2 = p_uint2 + 4;
      loop_i = loop_i + 1;
    } while (loop_i < (int)u_val6);
  }
  loop_i = 0x8CA;
  stack_str_58[*(byte *)(handle + 0x8CA)] = '\x01';
  loop_j = 0;
  if (0 < (int)(u_val6 - 1)) {
    do {
      loop_j = loop_j + 1;
      i_val8 = handle + loop_j * 4;
      pbVar1 = (byte *)(i_val8 + loop_i);
      u_val4 = (uint)*pbVar1;
      *pbVar1 = 0xff;
      pbVar1 = (byte *)(i_val8 + 0x8CA);
      do {
        *pbVar1 = *pbVar1 + 1;
        if (stack_str_58[*pbVar1] == '\0') {
          u_val4 = u_val4 - 1;
        }
      } while (-1 < (int)u_val4);
      stack_str_58[*(byte *)(handle + loop_j * 4 + loop_i)] = '\x01';
    } while (loop_j < (int)(u_val6 - 1));
  }
  if (u_val6 < 0xf) {
    *(undefined1 *)(handle + u_val6 * 4 + 0x8C8) = 1;
  }
  p_uint5 = (undefined2 *)HW_GetSpriteAttr1Offset(handle);
  *puStack_24 = 0x1640;
  *p_uint5 = 0x1640;
  M4A_Routine_080C2D54(handle);
  if (*(int *)(handle + 0x89C) == 2) {
    p_int12 = (int *)(handle + 0x8a0);
    p_char3 = (char *)(handle + 0x8C8);
    loop_i = handle;
    do {
      HW_Routine_080087C8(handle);
      loop_j = *p_int12;
      if (loop_j == 1) {
        if (stack_val_30 == stack_val_28) {
          *p_int12 = 2;
          p_uint9 = (undefined4 *)(handle + 0x544);
          p_uint7 = (uint *)*p_uint9;
          u_val6 = *p_uint7;
          if (-1 < (int)(-u_val6 | u_val6)) {
            Farm_Routine_08009378(p_uint7 + 3,0x889,1,1);
            loop_j = HW_GetPaletteBankOffset(handle);
            _call_via_r2(loop_j,*p_uint9,*(undefined4 *)(*(int *)(loop_j + 8) + 0x10));
          }
        }
        stack_val_30 = stack_val_30 + 1;
      }
      else if (loop_j < 2) {
        if (loop_j == 0) {
          if (u_val13 == 0) {
            if (*p_char3 != '\0') {
              *p_int12 = 1;
              goto LAB_080c561c;
            }
            *(undefined1 *)(handle + 0x8C5) = 1;
            HW_Routine_08008B6C(handle + 0x818,0xbe);
            p_uint2 = (undefined1 *)(0x8CA + loop_i);
            M4A_Routine_080C7B7C(stack_buf_38,handle,*p_uint2);
            *(char *)(handle + 0x97D) = stack_buf_38[0] + '\b';
            M4A_Routine_080C7B7C(stack_buf_34,handle,*p_uint2);
            *(char *)(handle + 0x97E) = stack_buf_34[1] + '\x18';
          }
          else if (u_val13 == 0x14) {
            *(undefined1 *)(handle + (uint)(byte)p_char3[2] * 4 + 0x904) = 1;
          }
          else if (u_val13 == stack_val_2c) {
            u_val13 = 0xffffffff;
            *(undefined1 *)(handle + 0x8C5) = 0;
            loop_i = loop_i + 4;
            p_char3 = p_char3 + 4;
          }
          u_val13 = u_val13 + 1;
        }
      }
      else if ((loop_j == 2) &&
              (-1 < (int)(-**(uint **)(handle + 0x544) |
                         **(uint **)(handle + 0x544)))) {
        *p_int12 = 0;
        *(undefined4 *)(handle + 0x89C) = 3;
      }
LAB_080c561c:
      M4A_Routine_080C2D54(handle);
    } while (*(int *)(handle + 0x89C) == 2);
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080C5648 @ 0x080C5648
// =============================================================================
void M4A_Routine_080C5648(int handle)

{
  int i_val1;
  undefined1 *p_uint2;
  int i_val3;
  int *p_int4;
  int i_val5;
  
  i_val5 = 0;
  p_uint2 = (undefined1 *)(handle + 0x904);
  i_val3 = 0x18;
  do {
    *p_uint2 = 0;
    p_uint2[1] = 0;
    i_val1 = 0x8B4;
    p_uint2 = p_uint2 + 4;
    i_val3 = i_val3 + -1;
  } while (-1 < i_val3);
  *(undefined1 *)(handle + 0x8B4) = 0x78;
  *(undefined1 *)(handle + 0x8B5) = 0x51;
  *(undefined1 *)(handle + 0x8B7) = 2;
  *(undefined1 *)(handle + i_val1 + 2) = 2;
  i_val3 = 0x8B9;
  *(undefined1 *)(handle + 0x8B9) = 0;
  *(undefined1 *)(handle + i_val1 + 4) = 0;
  p_int4 = (int *)(handle + 0x544);
  Farm_Routine_0800934C(*p_int4 + 0xc,i_val3 + -0x30,1,1);
  i_val3 = HW_GetPaletteBankOffset(handle);
  _call_via_r2(i_val3,*p_int4,*(undefined4 *)(*(int *)(i_val3 + 8) + 0x10));
  M4A_Routine_080C2D54(handle);
  HW_Routine_08008B6C(handle + 0x818,0xbb);
  if (*(int *)(handle + 0x89C) == 3) {
    p_int4 = (int *)(handle + 0x89C);
    do {
      HW_Routine_080087C8(handle);
      if (i_val5 == 0x78) {
        *p_int4 = 4;
      }
      i_val5 = i_val5 + 1;
      M4A_Routine_080C2D54(handle);
    } while (*p_int4 == 3);
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080C5710 @ 0x080C5710
// =============================================================================
undefined4 M4A_Routine_080C5710(int handle)

{
  undefined4 u_val1;
  int i_val2;
  undefined4 *p_uint3;
  undefined4 *p_uint4;
  undefined4 *p_uint5;
  undefined2 u_val6;
  int *p_int7;
  int i_val8;
  undefined4 u_val9;
  undefined4 stack_val_5c;
  undefined4 stack_val_58;
  undefined4 stack_val_54;
  undefined4 stack_val_50;
  undefined4 stack_val_4c;
  undefined4 stack_val_48;
  undefined4 stack_val_44;
  undefined4 stack_val_40;
  int stack_val_3c;
  int stack_val_38;
  int stack_val_34;
  int stack_val_30;
  int stack_val_2c;
  int *piStack_28;
  undefined4 *puStack_24;
  
  stack_val_2c = 0;
  u_val1 = Dispatcher_Routine_080005D4(0x14);
  i_val2 = Animal_Routine_0805E824(u_val1,*(undefined4 *)(handle + 0x524),0,0x100);
  p_int7 = (int *)(handle + 0x550);
  if (i_val2 != *p_int7) {
    Dispatcher_Routine_08000608();
  }
  *p_int7 = i_val2;
  Animal_Routine_0805E860(i_val2,0);
  p_uint3 = (undefined4 *)*p_int7;
  _call_via_r3(&stack_val_5c,(int *)*p_uint3,
                  *(undefined2 *)(p_uint3[1] + (uint)*(ushort *)(p_uint3 + 3) * 4),
                  *(undefined4 *)(*(int *)*p_uint3 + 0x10));
  gba_memcpy(&stack_val_5c,&stack_val_5c,0x20);
  *(undefined4 *)(handle + 0x558) = stack_val_5c;
  *(undefined4 *)(handle + 0x55c) = stack_val_58;
  *(undefined4 *)(handle + 0x560) = stack_val_54;
  *(undefined4 *)(handle + 0x564) = stack_val_50;
  *(undefined4 *)(handle + 0x568) = stack_val_4c;
  *(undefined4 *)(handle + 0x56c) = stack_val_48;
  *(undefined4 *)(handle + 0x570) = stack_val_44;
  *(undefined4 *)(handle + 0x574) = stack_val_40;
  p_int7 = (int *)HW_GetSpriteAttr0Offset(handle);
  i_val8 = *(int *)(handle + 0x560);
  i_val2 = HW_Routine_08007D4C(handle + 0x844,*(undefined4 *)(handle + 0x844 + 4));
  u_val6 = 0;
  if (*(int *)(handle + 0x560) != 0) {
    u_val6 = *(undefined2 *)(handle + 0x564);
  }
  piStack_28 = p_int7;
  HW_Routine_08008F0C(&stack_val_5c,i_val8,i_val2 * 0x20 + 0x06010000,u_val6);
  p_uint3 = (undefined4 *)p_int7[1];
  if (p_uint3 == (undefined4 *)p_int7[3]) {
    stack_val_38 = 1;
    stack_val_3c = (int)p_uint3 - *piStack_28 >> 4;
    p_int7 = &stack_val_3c;
    if (stack_val_3c == 0) {
      p_int7 = &stack_val_38;
    }
    puStack_24 = p_uint3;
    if (stack_val_3c + *p_int7 == 0) {
      p_uint3 = (undefined4 *)0x0;
      i_val2 = 0;
    }
    else {
      i_val2 = (stack_val_3c + *p_int7) * 0x10;
      p_uint3 = (undefined4 *)runtime_malloc_aligned(i_val2);
      if (p_uint3 == (undefined4 *)0x0) {
        p_uint3 = (undefined4 *)VTable_Routine_080D3BC0(i_val2);
      }
    }
    p_uint5 = p_uint3;
    for (p_uint4 = (undefined4 *)*piStack_28; p_uint4 != puStack_24; p_uint4 = p_uint4 + 4) {
      if (p_uint5 != (undefined4 *)0x0) {
        u_val1 = p_uint4[1];
        u_val9 = p_uint4[2];
        *p_uint5 = *p_uint4;
        p_uint5[1] = u_val1;
        p_uint5[2] = u_val9;
        p_uint5[3] = p_uint4[3];
      }
      p_uint5 = p_uint5 + 4;
    }
    i_val8 = stack_val_38;
    if (stack_val_38 == 1) {
      if (p_uint5 != (undefined4 *)0x0) {
        *p_uint5 = stack_val_5c;
        p_uint5[1] = stack_val_58;
        p_uint5[2] = stack_val_54;
        p_uint5[3] = stack_val_50;
      }
      p_uint5 = p_uint5 + 4;
    }
    else {
      for (; i_val8 != 0; i_val8 = i_val8 + -1) {
        if (p_uint5 != (undefined4 *)0x0) {
          *p_uint5 = stack_val_5c;
          p_uint5[1] = stack_val_58;
          p_uint5[2] = stack_val_54;
          p_uint5[3] = stack_val_50;
        }
        p_uint5 = p_uint5 + 4;
      }
    }
    for (i_val8 = *piStack_28; i_val8 != piStack_28[1]; i_val8 = i_val8 + 0x10) {
    }
    if (*piStack_28 != 0) {
      cpp_operator_delete();
    }
    *piStack_28 = (int)p_uint3;
    piStack_28[1] = (int)p_uint5;
    piStack_28[3] = i_val2 + (int)p_uint3;
  }
  else {
    if (p_uint3 != (undefined4 *)0x0) {
      *p_uint3 = stack_val_5c;
      p_uint3[1] = stack_val_58;
      p_uint3[2] = stack_val_54;
      p_uint3[3] = stack_val_50;
    }
    piStack_28[1] = piStack_28[1] + 0x10;
  }
  p_int7 = (int *)HW_GetSpriteAttr0Offset(handle);
  u_val6 = 0;
  if (*(int *)(handle + 0x568) != 0) {
    u_val6 = *(undefined2 *)(handle + 0x56c);
  }
  piStack_28 = p_int7;
  HW_Routine_08008F0C(&stack_val_5c,*(int *)(handle + 0x568),0x05000260,u_val6);
  p_uint3 = (undefined4 *)p_int7[1];
  if (p_uint3 == (undefined4 *)p_int7[3]) {
    stack_val_30 = 1;
    stack_val_34 = (int)p_uint3 - *piStack_28 >> 4;
    p_int7 = &stack_val_34;
    if (stack_val_34 == 0) {
      p_int7 = &stack_val_30;
    }
    puStack_24 = p_uint3;
    if (stack_val_34 + *p_int7 == 0) {
      p_uint3 = (undefined4 *)0x0;
      i_val2 = 0;
    }
    else {
      i_val2 = (stack_val_34 + *p_int7) * 0x10;
      p_uint3 = (undefined4 *)runtime_malloc_aligned(i_val2);
      if (p_uint3 == (undefined4 *)0x0) {
        p_uint3 = (undefined4 *)VTable_Routine_080D3BC0(i_val2);
      }
    }
    p_uint4 = p_uint3;
    for (p_uint5 = (undefined4 *)*piStack_28; p_uint5 != puStack_24; p_uint5 = p_uint5 + 4) {
      if (p_uint4 != (undefined4 *)0x0) {
        u_val1 = p_uint5[1];
        u_val9 = p_uint5[2];
        *p_uint4 = *p_uint5;
        p_uint4[1] = u_val1;
        p_uint4[2] = u_val9;
        p_uint4[3] = p_uint5[3];
      }
      p_uint4 = p_uint4 + 4;
    }
    i_val8 = stack_val_30;
    if (stack_val_30 == 1) {
      if (p_uint4 != (undefined4 *)0x0) {
        *p_uint4 = stack_val_5c;
        p_uint4[1] = stack_val_58;
        p_uint4[2] = stack_val_54;
        p_uint4[3] = stack_val_50;
      }
      p_uint4 = p_uint4 + 4;
    }
    else {
      for (; i_val8 != 0; i_val8 = i_val8 + -1) {
        if (p_uint4 != (undefined4 *)0x0) {
          *p_uint4 = stack_val_5c;
          p_uint4[1] = stack_val_58;
          p_uint4[2] = stack_val_54;
          p_uint4[3] = stack_val_50;
        }
        p_uint4 = p_uint4 + 4;
      }
    }
    for (i_val8 = *piStack_28; i_val8 != piStack_28[1]; i_val8 = i_val8 + 0x10) {
    }
    if (*piStack_28 != 0) {
      cpp_operator_delete();
    }
    *piStack_28 = (int)p_uint3;
    piStack_28[1] = (int)p_uint4;
    piStack_28[3] = i_val2 + (int)p_uint3;
  }
  else {
    if (p_uint3 != (undefined4 *)0x0) {
      *p_uint3 = stack_val_5c;
      p_uint3[1] = stack_val_58;
      p_uint3[2] = stack_val_54;
      p_uint3[3] = stack_val_50;
    }
    piStack_28[1] = piStack_28[1] + 0x10;
  }
  M4A_Routine_080C2D54(handle);
  i_val2 = 0x89C;
  while (*(int *)(handle + i_val2) == 4) {
    HW_Routine_080087C8(handle);
    HW_Routine_080088B8(handle);
    if (*(int *)(handle + 0x8A4) == 0) {
      M4A_Routine_080C7BF0(handle);
      M4A_Routine_080C7DF8(handle);
      M4A_Routine_080C76D4(handle);
      M4A_Routine_080C7D78(handle);
      i_val2 = stack_val_2c + 1;
      stack_val_2c = i_val2;
      M4A_Routine_080C38E4(handle,i_val2);
      if (i_val2 == 0x3c) {
        stack_val_2c = 0;
      }
    }
    else if (*(int *)(handle + 0x8A4) == 1) {
      M4A_Routine_080C7D78(handle);
    }
    M4A_Routine_080C2D54(handle);
    i_val2 = 0x89C;
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080C5A6C @ 0x080C5A6C
// =============================================================================
undefined4 M4A_Routine_080C5A6C(int handle)

{
  int i_val1;
  undefined4 u_val2;
  undefined4 *p_uint3;
  int *p_int4;
  undefined4 *p_uint5;
  int i_val6;
  undefined4 *p_uint7;
  uint u_val8;
  undefined4 *p_uint9;
  char *p_char10;
  undefined2 u_val11;
  undefined4 u_val12;
  int *p_int13;
  undefined4 *p_uint14;
  undefined1 stack_buf_7c [4];
  undefined4 stack_val_78;
  undefined4 stack_val_74;
  undefined4 stack_val_70;
  undefined4 stack_val_6c;
  undefined4 stack_val_68;
  undefined4 stack_val_64;
  undefined4 stack_val_60;
  undefined4 stack_val_5c;
  int stack_val_58;
  int stack_val_54;
  int stack_val_50;
  int stack_ints_4c [2];
  undefined4 stack_val_44;
  int stack_val_40;
  int stack_val_3c;
  int stack_val_38;
  undefined4 *puStack_34;
  int stack_val_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  stack_val_38 = 0;
  *(undefined2 *)(*(int *)(handle + 0x5f0) + 0x10) = 0;
  *(undefined2 *)(*(int *)(handle + 0x5a0) + 0x10) = 0;
  *(undefined2 *)(*(int *)(handle + 0x728) + 0x10) = 0x100;
  Animal_Routine_0805E860(*(int *)(handle + 0x728),6);
  *(undefined1 *)(handle + 0x8C5) = 0;
  *(undefined4 *)(handle + 0x8BC) = 3;
  *(undefined1 *)(handle + 0x8C4) = 1;
  M4A_Routine_080C2D54(handle);
  i_val1 = 0x89C;
  while (*(int *)(handle + i_val1) == 5) {
    HW_Routine_080087C8(handle);
    i_val1 = *(int *)(handle + 0x8AC);
    if (i_val1 < 2) {
      stack_val_30 = stack_val_38 + 1;
      if (stack_val_38 == 0xb4) {
        *(int *)(handle + 0x8AC) = i_val1 + 1;
        *(undefined4 *)(handle + 0x89C) = 2;
        *(undefined1 *)(handle + 0x969) = 0;
        u_val2 = Dispatcher_Routine_080005D4(0x14);
        i_val1 = Animal_Routine_0805E824(u_val2,*(undefined4 *)(handle + 0x520),0,0x100);
        p_int13 = (int *)(handle + 0x550);
        if (i_val1 != *p_int13) {
          Dispatcher_Routine_08000608();
        }
        *p_int13 = i_val1;
        Animal_Routine_0805E860(i_val1,0);
        p_uint3 = (undefined4 *)*p_int13;
        _call_via_r3(&stack_val_78,(int *)*p_uint3,
                        *(undefined2 *)(p_uint3[1] + (uint)*(ushort *)(p_uint3 + 3) * 4),
                        *(undefined4 *)(*(int *)*p_uint3 + 0x10));
        gba_memcpy(&stack_val_78,&stack_val_78,0x20);
        *(undefined4 *)(handle + 0x558) = stack_val_78;
        *(undefined4 *)(handle + 0x55c) = stack_val_74;
        *(undefined4 *)(handle + 0x560) = stack_val_70;
        *(undefined4 *)(handle + 0x564) = stack_val_6c;
        *(undefined4 *)(handle + 0x568) = stack_val_68;
        *(undefined4 *)(handle + 0x56c) = stack_val_64;
        *(undefined4 *)(handle + 0x570) = stack_val_60;
        *(undefined4 *)(handle + 0x574) = stack_val_5c;
        p_int13 = (int *)HW_GetSpriteAttr0Offset(handle,handle + 0x578);
        i_val6 = *(int *)(handle + 0x560);
        i_val1 = HW_Routine_08007D4C(handle + 0x844,*(undefined4 *)(handle + 0x844 + 4));
        u_val11 = 0;
        if (*(int *)(handle + 0x560) != 0) {
          u_val11 = *(undefined2 *)(handle + 0x564);
        }
        puStack_34 = &stack_val_78;
        HW_Routine_08008F0C(&stack_val_78,i_val6,i_val1 * 0x20 + 0x06010000,u_val11);
        p_uint3 = puStack_34;
        p_uint7 = (undefined4 *)p_int13[1];
        if (p_uint7 == (undefined4 *)p_int13[3]) {
          stack_val_54 = 1;
          stack_val_58 = (int)p_uint7 - *p_int13 >> 4;
          p_int4 = &stack_val_58;
          if (stack_val_58 == 0) {
            p_int4 = &stack_val_54;
          }
          if (stack_val_58 + *p_int4 == 0) {
            p_uint5 = (undefined4 *)0x0;
            i_val1 = 0;
          }
          else {
            i_val1 = (stack_val_58 + *p_int4) * 0x10;
            p_uint5 = (undefined4 *)runtime_malloc_aligned(i_val1);
            if (p_uint5 == (undefined4 *)0x0) {
              p_uint5 = (undefined4 *)VTable_Routine_080D3BC0(i_val1);
            }
          }
          stack_val_30 = stack_val_38 + 1;
          p_uint14 = p_uint5;
          for (p_uint9 = (undefined4 *)*p_int13; p_uint9 != p_uint7; p_uint9 = p_uint9 + 4) {
            if (p_uint14 != (undefined4 *)0x0) {
              u_val2 = p_uint9[1];
              u_val12 = p_uint9[2];
              *p_uint14 = *p_uint9;
              p_uint14[1] = u_val2;
              p_uint14[2] = u_val12;
              p_uint14[3] = p_uint9[3];
            }
            p_uint14 = p_uint14 + 4;
          }
          i_val6 = stack_val_54;
          if (stack_val_54 == 1) {
            if (p_uint14 != (undefined4 *)0x0) {
              u_val2 = p_uint3[1];
              u_val12 = p_uint3[2];
              *p_uint14 = *p_uint3;
              p_uint14[1] = u_val2;
              p_uint14[2] = u_val12;
              p_uint14[3] = p_uint3[3];
            }
            p_uint14 = p_uint14 + 4;
          }
          else {
            for (; i_val6 != 0; i_val6 = i_val6 + -1) {
              if (p_uint14 != (undefined4 *)0x0) {
                u_val2 = p_uint3[1];
                u_val12 = p_uint3[2];
                *p_uint14 = *p_uint3;
                p_uint14[1] = u_val2;
                p_uint14[2] = u_val12;
                p_uint14[3] = p_uint3[3];
              }
              p_uint14 = p_uint14 + 4;
            }
          }
          for (i_val6 = *p_int13; i_val6 != p_int13[1]; i_val6 = i_val6 + 0x10) {
          }
          puStack_28 = p_uint5;
          if (*p_int13 != 0) {
            cpp_operator_delete();
          }
          *p_int13 = (int)puStack_28;
          p_int13[1] = (int)p_uint14;
          p_int13[3] = (int)puStack_28 + i_val1;
        }
        else {
          if (p_uint7 != (undefined4 *)0x0) {
            u_val2 = puStack_34[1];
            u_val12 = puStack_34[2];
            *p_uint7 = *puStack_34;
            p_uint7[1] = u_val2;
            p_uint7[2] = u_val12;
            p_uint7[3] = puStack_34[3];
          }
          p_int13[1] = p_int13[1] + 0x10;
        }
        p_int13 = (int *)HW_GetSpriteAttr0Offset(handle);
        u_val11 = 0;
        if (*(int *)(handle + 0x568) != 0) {
          u_val11 = *(undefined2 *)(handle + 0x56c);
        }
        HW_Routine_08008F0C(&stack_val_78,*(int *)(handle + 0x568),0x05000260,u_val11);
        p_uint3 = puStack_34;
        p_uint7 = (undefined4 *)p_int13[1];
        if (p_uint7 == (undefined4 *)p_int13[3]) {
          stack_ints_4c[0] = 1;
          stack_val_50 = (int)p_uint7 - *p_int13 >> 4;
          p_int4 = &stack_val_50;
          if (stack_val_50 == 0) {
            p_int4 = stack_ints_4c;
          }
          if (stack_val_50 + *p_int4 == 0) {
            p_uint5 = (undefined4 *)0x0;
            i_val1 = 0;
          }
          else {
            i_val1 = (stack_val_50 + *p_int4) * 0x10;
            p_uint5 = (undefined4 *)runtime_malloc_aligned(i_val1);
            if (p_uint5 == (undefined4 *)0x0) {
              p_uint5 = (undefined4 *)VTable_Routine_080D3BC0(i_val1);
            }
          }
          p_uint14 = p_uint5;
          for (p_uint9 = (undefined4 *)*p_int13; p_uint9 != p_uint7; p_uint9 = p_uint9 + 4) {
            if (p_uint14 != (undefined4 *)0x0) {
              u_val2 = p_uint9[1];
              u_val12 = p_uint9[2];
              *p_uint14 = *p_uint9;
              p_uint14[1] = u_val2;
              p_uint14[2] = u_val12;
              p_uint14[3] = p_uint9[3];
            }
            p_uint14 = p_uint14 + 4;
          }
          i_val6 = stack_ints_4c[0];
          if (stack_ints_4c[0] == 1) {
            if (p_uint14 != (undefined4 *)0x0) {
              u_val2 = p_uint3[1];
              u_val12 = p_uint3[2];
              *p_uint14 = *p_uint3;
              p_uint14[1] = u_val2;
              p_uint14[2] = u_val12;
              p_uint14[3] = p_uint3[3];
            }
            p_uint14 = p_uint14 + 4;
          }
          else {
            for (; i_val6 != 0; i_val6 = i_val6 + -1) {
              if (p_uint14 != (undefined4 *)0x0) {
                u_val2 = p_uint3[1];
                u_val12 = p_uint3[2];
                *p_uint14 = *p_uint3;
                p_uint14[1] = u_val2;
                p_uint14[2] = u_val12;
                p_uint14[3] = p_uint3[3];
              }
              p_uint14 = p_uint14 + 4;
            }
          }
          for (i_val6 = *p_int13; i_val6 != p_int13[1]; i_val6 = i_val6 + 0x10) {
          }
          puStack_28 = p_uint5;
          if (*p_int13 != 0) {
            cpp_operator_delete();
          }
          *p_int13 = (int)puStack_28;
          p_int13[1] = (int)p_uint14;
          p_int13[3] = (int)puStack_28 + i_val1;
        }
        else {
          if (p_uint7 != (undefined4 *)0x0) {
            u_val2 = puStack_34[1];
            u_val12 = puStack_34[2];
            *p_uint7 = *puStack_34;
            p_uint7[1] = u_val2;
            p_uint7[2] = u_val12;
            p_uint7[3] = puStack_34[3];
          }
          p_int13[1] = p_int13[1] + 0x10;
        }
        p_char10 = (char *)(handle + 0x96F);
        *(char *)(handle + 0x96E) = *p_char10 + *(char *)(handle + 0x96E);
        *p_char10 = '\0';
        *(undefined1 *)(handle + 0x979) = 0;
        *(undefined1 *)(handle + 0x97A) = 0;
        *(undefined1 *)(handle + 0x8C5) = 0;
      }
      stack_val_38 = stack_val_30;
    }
    else {
      *(undefined4 *)(handle + _ASSET_BLOCK_080C5F98) = 6;
      *(char *)(handle + 0x96E) =
           *(char *)(handle + 0x96F) + *(char *)(handle + 0x96E);
    }
    M4A_Routine_080C2D54(handle);
    i_val1 = _ASSET_BLOCK_080C5F98;
  }
  if (*(int *)(handle + _ASSET_BLOCK_080C5F98) == 2) {
    p_uint3 = (undefined4 *)(handle + 0x544);
    u_val8 = *(uint *)*p_uint3;
    if (-1 < (int)(-u_val8 | u_val8)) {
      Farm_Routine_08009378((uint *)*p_uint3 + 3,0x889,1,1);
      i_val1 = HW_GetPaletteBankOffset(handle);
      _call_via_r2(i_val1,*p_uint3,*(undefined4 *)(*(int *)(i_val1 + 8) + 0x10));
    }
    puStack_34 = &stack_val_78;
    i_val1 = handle + 0xc;
    puStack_2c = &stack_val_44;
    u_val8 = -*(uint *)*p_uint3 | *(uint *)*p_uint3;
    while ((int)u_val8 < 0) {
      HW_Routine_080087C8(handle);
      M4A_Routine_080C2D54(handle);
      u_val8 = -**(uint **)(handle + 0x544) | **(uint **)(handle + 0x544);
    }
    p_int13 = (int *)(handle + 0x544);
    Farm_Routine_0800934C(*p_int13 + 0xc,0x889,1,1);
    i_val6 = HW_GetPaletteBankOffset(handle);
    _call_via_r2(i_val6,*p_int13,*(undefined4 *)(*(int *)(i_val6 + 8) + 0x10));
    *(undefined2 *)(*(int *)(handle + 0x5f0) + 0x10) = 0x100;
    *(undefined2 *)(*(int *)(handle + 0x5a0) + 0x10) = 0x100;
    *(undefined2 *)(*(int *)(handle + 0x728) + 0x10) = 0x100;
    *(undefined1 *)(handle + 0x97B) = 0x19;
    ScriptEngine_Routine_0804EC84(0x19,stack_buf_7c,0);
    stack_ints_4c[1] = 0x20004;
    ScriptEngine_Routine_0804E7A0(0x20004,i_val1,0);
    stack_val_44 = CONCAT22(stack_val_44._2_2_,4);
    *(undefined2 *)((int)puStack_2c + 2) = 2;
    ScriptEngine_Routine_0804E958(stack_val_44,i_val1,0,0,stack_buf_7c,0,1);
    p_int13 = (int *)HW_GetSpriteAttr0Offset(handle);
    i_val6 = HW_Routine_08007D4C(handle + 0x83C,*(undefined4 *)(handle + 0x83C + 4));
    HW_Routine_08008F0C(&stack_val_78,i_val1,i_val6 * 0x20 + 0x06010000,0x100);
    p_uint3 = puStack_34;
    puStack_24 = (undefined4 *)p_int13[1];
    if (puStack_24 == (undefined4 *)p_int13[3]) {
      stack_val_3c = 1;
      stack_val_40 = (int)puStack_24 - *p_int13 >> 4;
      p_int4 = &stack_val_40;
      if (stack_val_40 == 0) {
        p_int4 = &stack_val_3c;
      }
      if (stack_val_40 + *p_int4 == 0) {
        p_uint7 = (undefined4 *)0x0;
        i_val1 = 0;
      }
      else {
        i_val1 = (stack_val_40 + *p_int4) * 0x10;
        p_uint7 = (undefined4 *)runtime_malloc_aligned(i_val1);
        if (p_uint7 == (undefined4 *)0x0) {
          p_uint7 = (undefined4 *)VTable_Routine_080D3BC0(i_val1);
        }
      }
      p_uint5 = p_uint7;
      for (p_uint9 = (undefined4 *)*p_int13; p_uint9 != puStack_24; p_uint9 = p_uint9 + 4) {
        if (p_uint5 != (undefined4 *)0x0) {
          u_val2 = p_uint9[1];
          u_val12 = p_uint9[2];
          *p_uint5 = *p_uint9;
          p_uint5[1] = u_val2;
          p_uint5[2] = u_val12;
          p_uint5[3] = p_uint9[3];
        }
        p_uint5 = p_uint5 + 4;
      }
      i_val6 = stack_val_3c;
      if (stack_val_3c == 1) {
        if (p_uint5 != (undefined4 *)0x0) {
          u_val2 = p_uint3[1];
          u_val12 = p_uint3[2];
          *p_uint5 = *p_uint3;
          p_uint5[1] = u_val2;
          p_uint5[2] = u_val12;
          p_uint5[3] = p_uint3[3];
        }
        p_uint5 = p_uint5 + 4;
      }
      else {
        for (; i_val6 != 0; i_val6 = i_val6 + -1) {
          if (p_uint5 != (undefined4 *)0x0) {
            u_val2 = p_uint3[1];
            u_val12 = p_uint3[2];
            *p_uint5 = *p_uint3;
            p_uint5[1] = u_val2;
            p_uint5[2] = u_val12;
            p_uint5[3] = p_uint3[3];
          }
          p_uint5 = p_uint5 + 4;
        }
      }
      for (i_val6 = *p_int13; i_val6 != p_int13[1]; i_val6 = i_val6 + 0x10) {
      }
      if (*p_int13 != 0) {
        cpp_operator_delete();
      }
      *p_int13 = (int)p_uint7;
      p_int13[1] = (int)p_uint5;
      p_int13[3] = i_val1 + (int)p_uint7;
    }
    else {
      if (puStack_24 != (undefined4 *)0x0) {
        u_val2 = puStack_34[1];
        u_val12 = puStack_34[2];
        *puStack_24 = *puStack_34;
        puStack_24[1] = u_val2;
        puStack_24[2] = u_val12;
        puStack_24[3] = puStack_34[3];
      }
      p_int13[1] = p_int13[1] + 0x10;
    }
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080C608C @ 0x080C608C
// =============================================================================
undefined4 M4A_Routine_080C608C(int handle)

{
  undefined2 u_val1;
  undefined2 *p_uint2;
  int i_val3;
  undefined4 u_val4;
  int i_val5;
  undefined4 u_val6;
  undefined4 u_val7;
  undefined4 u_val8;
  undefined4 u_val9;
  undefined4 u_val10;
  undefined4 *p_uint11;
  uint u_val12;
  uint *p_uint13;
  uint *p_uint14;
  uint *p_uint15;
  uint *p_uint16;
  uint u_val17;
  byte *pbVar18;
  int *p_int19;
  int *p_int20;
  int i_val21;
  uint stack_buf_14c [4];
  undefined1 stack_buf_13c [16];
  uint stack_val_12c;
  uint stack_val_128;
  uint stack_val_124;
  uint stack_val_120;
  undefined4 stack_val_11c;
  undefined4 stack_val_118;
  uint stack_val_114;
  uint stack_val_110;
  uint stack_val_10c;
  uint stack_val_108;
  undefined4 stack_val_104;
  undefined4 stack_val_100;
  int stack_val_fc;
  int stack_val_f8;
  int stack_val_f4;
  int stack_val_f0;
  undefined4 stack_val_ec;
  undefined4 stack_val_e8;
  undefined4 stack_val_e4;
  int stack_val_e0;
  int stack_val_dc;
  undefined4 stack_val_d8;
  undefined4 stack_val_d4;
  undefined4 stack_val_d0;
  undefined4 stack_val_cc;
  int stack_val_c8;
  int stack_val_c4;
  int stack_val_c0;
  int stack_val_bc;
  int stack_val_b8;
  int stack_val_b4;
  int stack_val_b0;
  int stack_val_ac;
  int stack_ints_a8 [2];
  int stack_val_a0;
  int stack_val_9c;
  int stack_val_98;
  int stack_ints_94 [3];
  undefined4 stack_val_88;
  int stack_val_84;
  int stack_val_80;
  undefined4 stack_val_7c;
  undefined4 stack_val_78;
  undefined4 stack_val_74;
  int stack_val_70;
  int stack_val_6c;
  int stack_val_68;
  int stack_val_64;
  int stack_val_60;
  int stack_val_5c;
  int stack_val_58;
  int stack_val_54;
  uint stack_val_50;
  undefined4 *puStack_4c;
  uint *puStack_48;
  uint *puStack_44;
  undefined4 *puStack_40;
  int stack_val_3c;
  int stack_val_38;
  int *piStack_34;
  undefined4 *puStack_30;
  int stack_val_2c;
  uint *puStack_28;
  uint *puStack_24;
  
  pbVar18 = (byte *)(0x978 + handle);
  u_val12 = (uint)*pbVar18;
  stack_val_12c = *(byte *)(0x96E + handle) - u_val12;
  p_uint14 = (uint *)(0x974 + handle);
  u_val12 = (stack_val_12c + *(byte *)(handle + 0x970)) - u_val12;
  *p_uint14 = u_val12;
  if ((int)u_val12 < 0) {
    *p_uint14 = 0;
  }
  if ((int)(uint)*(byte *)(0x97C + handle) <= (int)*p_uint14) {
    *(undefined1 *)(0x96A + handle) = 1;
  }
  stack_val_128 = (uint)*(byte *)(handle + 0x970);
  stack_val_124 = (uint)*pbVar18;
  stack_val_120 = *p_uint14;
  gba_memcpy(stack_buf_13c,&stack_val_12c,0x10);
  gba_memcpy(stack_buf_14c,stack_buf_13c,0x10);
  p_uint2 = (undefined2 *)HW_GetSpriteAttr1Offset(handle);
  stack_val_12c = CONCAT22(stack_val_12c._2_2_,0x1740);
  *p_uint2 = 0x1740;
  p_int19 = (int *)(0x51C + handle);
  i_val3 = *p_int19;
  if ((i_val3 != 0) && (i_val3 != 0)) {
    Animal_Routine_08050D0C(i_val3,3);
  }
  *p_int19 = 0;
  u_val4 = Dispatcher_Routine_080005D4(4);
  HW_Routine_0800835C(&stack_val_12c);
  HW_Routine_0800770C(&stack_val_128);
  i_val3 = Animal_Routine_08050CC0(u_val4,0,0x18,0,0,&stack_val_12c,&stack_val_128);
  p_int19 = (int *)(0x51C + handle);
  i_val5 = *p_int19;
  if ((i_val3 != i_val5) && (i_val5 != 0)) {
    Animal_Routine_08050D0C(i_val5,3);
  }
  *p_int19 = i_val3;
  HW_Routine_08007714(&stack_val_128,2);
  HW_Routine_08008364(&stack_val_12c,2);
  u_val4 = *(undefined4 *)(0x51C + handle);
  u_val6 = HW_Routine_080088DC(handle);
  u_val7 = HW_GetSpriteAttr2Offset(handle);
  u_val8 = HW_GetSpriteAttr1Offset(handle);
  u_val9 = HW_GetPaletteBankOffset(handle);
  u_val10 = HW_Routine_0800894C(handle);
  Animal_Routine_08050D3C(u_val4,u_val6,u_val7,u_val8,u_val9,u_val10,0x814 + handle);
  if (*(char *)(0x96A + handle) == '\0') {
    u_val4 = Dispatcher_Routine_080005D4(0x14);
    i_val3 = 0x540;
  }
  else {
    u_val4 = Dispatcher_Routine_080005D4(0x14);
    i_val3 = 0x53C;
  }
  i_val3 = Animal_Routine_0805E824(u_val4,*(undefined4 *)(i_val3 + handle),0,0x100);
  if (i_val3 != *(int *)(handle + 0x750)) {
    Dispatcher_Routine_08000608();
  }
  *(int *)(handle + 0x750) = i_val3;
  p_uint2 = (undefined2 *)Dispatcher_Routine_080005D4(0x1c);
  *p_uint2 = 0;
  p_uint2[1] = 0;
  p_uint2[2] = 0;
  p_uint2[3] = 0;
  p_uint2[4] = 0;
  *(undefined4 *)(p_uint2 + 6) = 0;
  *(undefined1 *)(p_uint2 + 8) = 0;
  *(undefined1 *)((int)p_uint2 + 0x11) = 0;
  *(undefined4 *)(p_uint2 + 10) = 0;
  *(undefined1 *)(p_uint2 + 0xc) = 0;
  p_int19 = (int *)(0x754 + handle);
  if (p_uint2 != (undefined2 *)*p_int19) {
    Dispatcher_Routine_08000608();
  }
  *p_int19 = (int)p_uint2;
  Animal_Routine_0805E860(*(int *)(handle + 0x750),0);
  *(undefined2 *)*p_int19 = 0x40;
  *(undefined2 *)(*p_int19 + 2) = 0x40;
  i_val3 = *p_int19;
  i_val5 = 0x874 + handle;
  u_val1 = HW_Routine_08007D4C(i_val5,*(undefined4 *)(i_val5 + 4));
  *(undefined2 *)(i_val3 + 6) = u_val1;
  *(undefined2 *)(*p_int19 + 4) = 9;
  *(undefined1 *)(*p_int19 + 0x18) = 1;
  p_uint11 = *(undefined4 **)(handle + 0x750);
  _call_via_r3(&stack_val_11c,(int *)*p_uint11,
                  *(undefined2 *)(p_uint11[1] + (uint)*(ushort *)(p_uint11 + 3) * 4),
                  *(undefined4 *)(*(int *)*p_uint11 + 0x10));
  gba_memcpy(&stack_val_11c,&stack_val_11c,0x20);
  *(undefined4 *)(handle + 0x758) = stack_val_11c;
  *(undefined4 *)(handle + 0x75c) = stack_val_118;
  *(uint *)(handle + 0x760) = stack_val_114;
  *(uint *)(handle + 0x764) = stack_val_110;
  *(uint *)(handle + 0x768) = stack_val_10c;
  *(uint *)(handle + 0x76c) = stack_val_108;
  *(undefined4 *)(handle + 0x770) = stack_val_104;
  *(undefined4 *)(handle + 0x774) = stack_val_100;
  p_int19 = (int *)HW_GetSpriteAttr0Offset(handle);
  i_val21 = *(int *)(handle + 0x760);
  i_val3 = HW_Routine_08007D4C(i_val5,*(undefined4 *)(i_val5 + 4));
  u_val1 = 0;
  if (*(int *)(handle + 0x760) != 0) {
    u_val1 = *(undefined2 *)(handle + 0x764);
  }
  HW_Routine_08008F0C(&stack_val_12c,i_val21,i_val3 * 0x20 + 0x06010000,u_val1);
  p_uint14 = (uint *)p_int19[1];
  if (p_uint14 == (uint *)p_int19[3]) {
    puStack_28 = p_uint14;
    stack_val_f8 = 1;
    stack_val_fc = (int)p_uint14 - *p_int19 >> 4;
    p_int20 = &stack_val_fc;
    if (stack_val_fc == 0) {
      p_int20 = &stack_val_f8;
    }
    if (stack_val_fc + *p_int20 == 0) {
      puStack_24 = (uint *)0x0;
      i_val3 = 0;
    }
    else {
      i_val3 = (stack_val_fc + *p_int20) * 0x10;
      puStack_24 = (uint *)runtime_malloc_aligned(i_val3);
      if (puStack_24 == (uint *)0x0) {
        puStack_24 = (uint *)VTable_Routine_080D3BC0(i_val3);
      }
    }
    puStack_40 = &stack_val_ec;
    puStack_48 = &stack_val_124;
    piStack_34 = stack_ints_a8;
    p_uint14 = puStack_24;
    for (p_uint13 = (uint *)*p_int19; p_uint13 != puStack_28; p_uint13 = p_uint13 + 4) {
      if (p_uint14 != (uint *)0x0) {
        u_val12 = p_uint13[1];
        u_val17 = p_uint13[2];
        *p_uint14 = *p_uint13;
        p_uint14[1] = u_val12;
        p_uint14[2] = u_val17;
        p_uint14[3] = p_uint13[3];
      }
      p_uint14 = p_uint14 + 4;
    }
    i_val5 = stack_val_f8;
    if (stack_val_f8 == 1) {
      if (p_uint14 != (uint *)0x0) {
        *p_uint14 = stack_val_12c;
        p_uint14[1] = stack_val_128;
        p_uint14[2] = stack_val_124;
        p_uint14[3] = stack_val_120;
      }
      p_uint14 = p_uint14 + 4;
    }
    else {
      for (; i_val5 != 0; i_val5 = i_val5 + -1) {
        if (p_uint14 != (uint *)0x0) {
          *p_uint14 = stack_val_12c;
          p_uint14[1] = stack_val_128;
          p_uint14[2] = stack_val_124;
          p_uint14[3] = stack_val_120;
        }
        p_uint14 = p_uint14 + 4;
      }
    }
    for (i_val5 = *p_int19; i_val5 != p_int19[1]; i_val5 = i_val5 + 0x10) {
    }
    if (*p_int19 != 0) {
      cpp_operator_delete();
    }
    *p_int19 = (int)puStack_24;
    p_int19[1] = (int)p_uint14;
    p_int19[3] = (int)puStack_24 + i_val3;
  }
  else {
    if (p_uint14 != (uint *)0x0) {
      *p_uint14 = stack_val_12c;
      p_uint14[1] = stack_val_128;
      p_uint14[2] = stack_val_124;
      p_uint14[3] = stack_val_120;
    }
    p_int19[1] = p_int19[1] + 0x10;
    puStack_40 = &stack_val_ec;
    puStack_48 = &stack_val_124;
    piStack_34 = stack_ints_a8;
  }
  p_int19 = (int *)HW_GetSpriteAttr0Offset(handle);
  u_val1 = 0;
  if (*(int *)(handle + 0x768) != 0) {
    u_val1 = *(undefined2 *)(handle + 0x76c);
  }
  HW_Routine_08008F0C(&stack_val_12c,*(int *)(handle + 0x768),0x05000320,u_val1);
  p_uint14 = (uint *)p_int19[1];
  if (p_uint14 == (uint *)p_int19[3]) {
    puStack_28 = p_uint14;
    stack_val_f0 = 1;
    stack_val_f4 = (int)p_uint14 - *p_int19 >> 4;
    p_int20 = &stack_val_f4;
    if (stack_val_f4 == 0) {
      p_int20 = &stack_val_f0;
    }
    if (stack_val_f4 + *p_int20 == 0) {
      p_uint14 = (uint *)0x0;
      i_val3 = 0;
    }
    else {
      i_val3 = (stack_val_f4 + *p_int20) * 0x10;
      p_uint14 = (uint *)runtime_malloc_aligned(i_val3);
      if (p_uint14 == (uint *)0x0) {
        p_uint14 = (uint *)VTable_Routine_080D3BC0(i_val3);
      }
    }
    p_uint16 = p_uint14;
    for (p_uint13 = (uint *)*p_int19; p_uint13 != puStack_28; p_uint13 = p_uint13 + 4) {
      if (p_uint16 != (uint *)0x0) {
        u_val12 = p_uint13[1];
        u_val17 = p_uint13[2];
        *p_uint16 = *p_uint13;
        p_uint16[1] = u_val12;
        p_uint16[2] = u_val17;
        p_uint16[3] = p_uint13[3];
      }
      p_uint16 = p_uint16 + 4;
    }
    i_val5 = stack_val_f0;
    if (stack_val_f0 == 1) {
      if (p_uint16 != (uint *)0x0) {
        *p_uint16 = stack_val_12c;
        p_uint16[1] = stack_val_128;
        p_uint16[2] = stack_val_124;
        p_uint16[3] = stack_val_120;
      }
      p_uint16 = p_uint16 + 4;
    }
    else {
      for (; i_val5 != 0; i_val5 = i_val5 + -1) {
        if (p_uint16 != (uint *)0x0) {
          *p_uint16 = stack_val_12c;
          p_uint16[1] = stack_val_128;
          p_uint16[2] = stack_val_124;
          p_uint16[3] = stack_val_120;
        }
        p_uint16 = p_uint16 + 4;
      }
    }
    for (i_val5 = *p_int19; i_val5 != p_int19[1]; i_val5 = i_val5 + 0x10) {
    }
    puStack_24 = p_uint14;
    if (*p_int19 != 0) {
      cpp_operator_delete();
    }
    *p_int19 = (int)puStack_24;
    p_int19[1] = (int)p_uint16;
    p_int19[3] = (int)puStack_24 + i_val3;
  }
  else {
    if (p_uint14 != (uint *)0x0) {
      *p_uint14 = stack_val_12c;
      p_uint14[1] = stack_val_128;
      p_uint14[2] = stack_val_124;
      p_uint14[3] = stack_val_120;
    }
    p_int19[1] = p_int19[1] + 0x10;
  }
  stack_val_68 = 0;
  stack_val_64 = 0x88C + handle;
  do {
    i_val5 = stack_val_68 * 8;
    HW_Routine_08008EB8(0,i_val5 + 0x778 + handle,8);
    ScriptEngine_Routine_0804EC84(0,&stack_val_12c,0);
    i_val3 = stack_val_68 * 0x40;
    i_val21 = stack_val_68 * 0x104;
    stack_val_ec = CONCAT22(stack_val_ec._2_2_,4);
    *(undefined2 *)((int)puStack_40 + 2) = 2;
    ScriptEngine_Routine_0804E7A0(stack_val_ec,i_val21 + handle + 0x110,0);
    stack_val_38 = i_val5;
    if (stack_val_68 == 2) {
      i_val5 = gba_strlen(&stack_val_12c);
      stack_val_e4 = CONCAT22((undefined2)stack_val_68,4);
      ScriptEngine_Routine_0804E958(stack_val_e4,handle + 0x318,i_val5 * -8 + 0x20,0,&stack_val_12c,0,7);
    }
    else {
      i_val5 = gba_strlen(&stack_val_12c);
      stack_val_e8 = 0x20004;
      ScriptEngine_Routine_0804E958(0x20004,i_val21 + handle + 0x110,i_val5 * -8 + 0x20,0,&stack_val_12c,0,5);
    }
    p_int19 = (int *)HW_GetSpriteAttr0Offset(handle);
    i_val3 = i_val3 + stack_val_68;
    i_val5 = HW_Routine_08007D4C(stack_val_64,*(undefined4 *)(stack_val_64 + 4));
    HW_Routine_08008F0C(&stack_val_124,i_val3 * 4 + handle + 0x110,(stack_val_38 + i_val5) * 0x20 + 0x06010000
                  ,0x100);
    p_uint14 = puStack_48;
    p_uint13 = (uint *)p_int19[1];
    if (p_uint13 == (uint *)p_int19[3]) {
      puStack_28 = p_uint13;
      stack_val_dc = 1;
      stack_val_e0 = (int)p_uint13 - *p_int19 >> 4;
      p_int20 = &stack_val_e0;
      if (stack_val_e0 == 0) {
        p_int20 = &stack_val_dc;
      }
      if (stack_val_e0 + *p_int20 == 0) {
        p_uint13 = (uint *)0x0;
        i_val3 = 0;
      }
      else {
        i_val3 = (stack_val_e0 + *p_int20) * 0x10;
        p_uint13 = (uint *)runtime_malloc_aligned(i_val3);
        if (p_uint13 == (uint *)0x0) {
          p_uint13 = (uint *)VTable_Routine_080D3BC0(i_val3);
        }
      }
      stack_val_3c = stack_val_68 + 1;
      p_uint16 = p_uint13;
      for (p_uint15 = (uint *)*p_int19; p_uint15 != puStack_28; p_uint15 = p_uint15 + 4) {
        if (p_uint16 != (uint *)0x0) {
          u_val12 = p_uint15[1];
          u_val17 = p_uint15[2];
          *p_uint16 = *p_uint15;
          p_uint16[1] = u_val12;
          p_uint16[2] = u_val17;
          p_uint16[3] = p_uint15[3];
        }
        p_uint16 = p_uint16 + 4;
      }
      i_val5 = stack_val_dc;
      if (stack_val_dc == 1) {
        if (p_uint16 != (uint *)0x0) {
          u_val12 = p_uint14[1];
          u_val17 = p_uint14[2];
          *p_uint16 = *p_uint14;
          p_uint16[1] = u_val12;
          p_uint16[2] = u_val17;
          p_uint16[3] = p_uint14[3];
        }
        p_uint16 = p_uint16 + 4;
      }
      else {
        for (; i_val5 != 0; i_val5 = i_val5 + -1) {
          if (p_uint16 != (uint *)0x0) {
            u_val12 = p_uint14[1];
            u_val17 = p_uint14[2];
            *p_uint16 = *p_uint14;
            p_uint16[1] = u_val12;
            p_uint16[2] = u_val17;
            p_uint16[3] = p_uint14[3];
          }
          p_uint16 = p_uint16 + 4;
        }
      }
      for (i_val5 = *p_int19; i_val5 != p_int19[1]; i_val5 = i_val5 + 0x10) {
      }
      puStack_24 = p_uint13;
      if (*p_int19 != 0) {
        cpp_operator_delete();
      }
      *p_int19 = (int)puStack_24;
      p_int19[1] = (int)p_uint16;
      p_int19[3] = (int)puStack_24 + i_val3;
    }
    else {
      if (p_uint13 != (uint *)0x0) {
        u_val12 = puStack_48[1];
        u_val17 = puStack_48[2];
        *p_uint13 = *puStack_48;
        p_uint13[1] = u_val12;
        p_uint13[2] = u_val17;
        p_uint13[3] = puStack_48[3];
      }
      p_int19[1] = p_int19[1] + 0x10;
      stack_val_3c = stack_val_68 + 1;
    }
    if (stack_val_68 == 3) {
      p_uint11 = (undefined4 *)(handle + 0x790);
      i_val3 = HW_Routine_08007D4C(stack_val_64,*(undefined4 *)(stack_val_64 + 4));
      ScriptEngine_Routine_0804EA94(&stack_val_d0,200,0x8d,i_val3 + 0x18,2,0,2,1);
      u_val4 = stack_val_d0;
      u_val6 = stack_val_cc;
    }
    else {
      p_uint11 = (undefined4 *)(stack_val_38 + handle + 0x778);
      i_val3 = HW_Routine_08007D4C(stack_val_64,*(undefined4 *)(stack_val_64 + 4));
      ScriptEngine_Routine_0804EA94(&stack_val_d8,0x78,stack_val_68 * 0x10 + 0x6d,i_val3 + stack_val_38,2,0,2,1);
      u_val4 = stack_val_d8;
      u_val6 = stack_val_d4;
    }
    *p_uint11 = u_val4;
    p_uint11[1] = u_val6;
    stack_val_68 = stack_val_3c;
  } while (stack_val_3c < 4);
  u_val4 = Dispatcher_Routine_080005D4(0x14);
  i_val3 = Animal_Routine_0805E824(u_val4,*(undefined4 *)(0x52C + handle),0,0x100);
  p_int19 = (int *)(handle + 0x798);
  if (i_val3 != *p_int19) {
    Dispatcher_Routine_08000608();
  }
  *p_int19 = i_val3;
  p_uint2 = (undefined2 *)Dispatcher_Routine_080005D4(0x1c);
  *p_uint2 = 0;
  p_uint2[1] = 0;
  p_uint2[2] = 0;
  p_uint2[3] = 0;
  p_uint2[4] = 0;
  *(undefined4 *)(p_uint2 + 6) = 0;
  *(undefined1 *)(p_uint2 + 8) = 0;
  *(undefined1 *)((int)p_uint2 + 0x11) = 0;
  *(undefined4 *)(p_uint2 + 10) = 0;
  *(undefined1 *)(p_uint2 + 0xc) = 0;
  p_int20 = (int *)(0x79C + handle);
  if (p_uint2 != (undefined2 *)*p_int20) {
    Dispatcher_Routine_08000608();
  }
  *p_int20 = (int)p_uint2;
  Animal_Routine_0805E860(*p_int19,*(int *)(handle + 0x980) * 0x54 + 0x42C);
  *(undefined2 *)*p_int20 = 0x70;
  *(undefined2 *)(*p_int20 + 2) = 0x85;
  i_val3 = *p_int20;
  i_val5 = 0x894 + handle;
  u_val1 = HW_Routine_08007D4C(i_val5,*(undefined4 *)(i_val5 + 4));
  *(undefined2 *)(i_val3 + 6) = u_val1;
  *(undefined2 *)(*p_int20 + 4) = 4;
  *(undefined1 *)(*p_int20 + 0x18) = 1;
  p_uint11 = (undefined4 *)*p_int19;
  _call_via_r3(&stack_val_124,(int *)*p_uint11,
                  *(undefined2 *)(p_uint11[1] + (uint)*(ushort *)(p_uint11 + 3) * 4),
                  *(undefined4 *)(*(int *)*p_uint11 + 0x10));
  gba_memcpy(puStack_48,puStack_48,0x20);
  u_val12 = puStack_48[1];
  u_val17 = puStack_48[2];
  *(uint *)(handle + 0x7a0) = *puStack_48;
  *(uint *)(handle + 0x7a4) = u_val12;
  *(uint *)(handle + 0x7a8) = u_val17;
  u_val12 = puStack_48[4];
  u_val17 = puStack_48[5];
  *(uint *)(handle + 0x7ac) = puStack_48[3];
  *(uint *)(handle + 0x7b0) = u_val12;
  *(uint *)(handle + 0x7b4) = u_val17;
  u_val12 = puStack_48[7];
  *(uint *)(handle + 0x7b8) = puStack_48[6];
  *(uint *)(handle + 0x7bc) = u_val12;
  p_int19 = (int *)HW_GetSpriteAttr0Offset(handle);
  i_val21 = *(int *)(handle + 0x7a8);
  i_val3 = HW_Routine_08007D4C(i_val5,*(undefined4 *)(i_val5 + 4));
  u_val1 = 0;
  if (*(int *)(handle + 0x7a8) != 0) {
    u_val1 = *(undefined2 *)(handle + 0x7ac);
  }
  HW_Routine_08008F0C(puStack_48,i_val21,i_val3 * 0x20 + 0x06010000,u_val1);
  p_uint14 = puStack_48;
  p_uint13 = (uint *)p_int19[1];
  if (p_uint13 == (uint *)p_int19[3]) {
    puStack_28 = p_uint13;
    stack_val_c4 = 1;
    stack_val_c8 = (int)p_uint13 - *p_int19 >> 4;
    p_int20 = &stack_val_c8;
    if (stack_val_c8 == 0) {
      p_int20 = &stack_val_c4;
    }
    if (stack_val_c8 + *p_int20 == 0) {
      p_uint13 = (uint *)0x0;
      i_val3 = 0;
    }
    else {
      i_val3 = (stack_val_c8 + *p_int20) * 0x10;
      p_uint13 = (uint *)runtime_malloc_aligned(i_val3);
      if (p_uint13 == (uint *)0x0) {
        p_uint13 = (uint *)VTable_Routine_080D3BC0(i_val3);
      }
    }
    p_uint15 = p_uint13;
    for (p_uint16 = (uint *)*p_int19; p_uint16 != puStack_28; p_uint16 = p_uint16 + 4) {
      if (p_uint15 != (uint *)0x0) {
        u_val12 = p_uint16[1];
        u_val17 = p_uint16[2];
        *p_uint15 = *p_uint16;
        p_uint15[1] = u_val12;
        p_uint15[2] = u_val17;
        p_uint15[3] = p_uint16[3];
      }
      p_uint15 = p_uint15 + 4;
    }
    i_val5 = stack_val_c4;
    if (stack_val_c4 == 1) {
      if (p_uint15 != (uint *)0x0) {
        u_val12 = p_uint14[1];
        u_val17 = p_uint14[2];
        *p_uint15 = *p_uint14;
        p_uint15[1] = u_val12;
        p_uint15[2] = u_val17;
        p_uint15[3] = p_uint14[3];
      }
      p_uint15 = p_uint15 + 4;
    }
    else {
      for (; i_val5 != 0; i_val5 = i_val5 + -1) {
        if (p_uint15 != (uint *)0x0) {
          u_val12 = p_uint14[1];
          u_val17 = p_uint14[2];
          *p_uint15 = *p_uint14;
          p_uint15[1] = u_val12;
          p_uint15[2] = u_val17;
          p_uint15[3] = p_uint14[3];
        }
        p_uint15 = p_uint15 + 4;
      }
    }
    for (i_val5 = *p_int19; i_val5 != p_int19[1]; i_val5 = i_val5 + 0x10) {
    }
    puStack_24 = p_uint13;
    if (*p_int19 != 0) {
      cpp_operator_delete();
    }
    *p_int19 = (int)puStack_24;
    p_int19[1] = (int)p_uint15;
    p_int19[3] = (int)puStack_24 + i_val3;
  }
  else {
    if (p_uint13 != (uint *)0x0) {
      u_val12 = puStack_48[1];
      u_val17 = puStack_48[2];
      *p_uint13 = *puStack_48;
      p_uint13[1] = u_val12;
      p_uint13[2] = u_val17;
      p_uint13[3] = puStack_48[3];
    }
    p_int19[1] = p_int19[1] + 0x10;
  }
  p_int19 = (int *)HW_GetSpriteAttr0Offset(handle);
  u_val1 = 0;
  if (*(int *)(handle + 0x7b0) != 0) {
    u_val1 = *(undefined2 *)(handle + 0x7b4);
  }
  HW_Routine_08008F0C(&stack_val_124,*(int *)(handle + 0x7b0),0x05000280,u_val1);
  p_uint14 = puStack_48;
  p_uint13 = (uint *)p_int19[1];
  if (p_uint13 == (uint *)p_int19[3]) {
    puStack_28 = p_uint13;
    stack_val_bc = 1;
    stack_val_c0 = (int)p_uint13 - *p_int19 >> 4;
    p_int20 = &stack_val_c0;
    if (stack_val_c0 == 0) {
      p_int20 = &stack_val_bc;
    }
    if (stack_val_c0 + *p_int20 == 0) {
      p_uint13 = (uint *)0x0;
      i_val3 = 0;
    }
    else {
      i_val3 = (stack_val_c0 + *p_int20) * 0x10;
      p_uint13 = (uint *)runtime_malloc_aligned(i_val3);
      if (p_uint13 == (uint *)0x0) {
        p_uint13 = (uint *)VTable_Routine_080D3BC0(i_val3);
      }
    }
    p_uint15 = p_uint13;
    for (p_uint16 = (uint *)*p_int19; p_uint16 != puStack_28; p_uint16 = p_uint16 + 4) {
      if (p_uint15 != (uint *)0x0) {
        u_val12 = p_uint16[1];
        u_val17 = p_uint16[2];
        *p_uint15 = *p_uint16;
        p_uint15[1] = u_val12;
        p_uint15[2] = u_val17;
        p_uint15[3] = p_uint16[3];
      }
      p_uint15 = p_uint15 + 4;
    }
    i_val5 = stack_val_bc;
    if (stack_val_bc == 1) {
      if (p_uint15 != (uint *)0x0) {
        u_val12 = p_uint14[1];
        u_val17 = p_uint14[2];
        *p_uint15 = *p_uint14;
        p_uint15[1] = u_val12;
        p_uint15[2] = u_val17;
        p_uint15[3] = p_uint14[3];
      }
      p_uint15 = p_uint15 + 4;
    }
    else {
      for (; i_val5 != 0; i_val5 = i_val5 + -1) {
        if (p_uint15 != (uint *)0x0) {
          u_val12 = p_uint14[1];
          u_val17 = p_uint14[2];
          *p_uint15 = *p_uint14;
          p_uint15[1] = u_val12;
          p_uint15[2] = u_val17;
          p_uint15[3] = p_uint14[3];
        }
        p_uint15 = p_uint15 + 4;
      }
    }
    for (i_val5 = *p_int19; i_val5 != p_int19[1]; i_val5 = i_val5 + 0x10) {
    }
    puStack_24 = p_uint13;
    if (*p_int19 != 0) {
      cpp_operator_delete();
    }
    *p_int19 = (int)puStack_24;
    p_int19[1] = (int)p_uint15;
    p_int19[3] = (int)puStack_24 + i_val3;
  }
  else {
    if (p_uint13 != (uint *)0x0) {
      u_val12 = puStack_48[1];
      u_val17 = puStack_48[2];
      *p_uint13 = *puStack_48;
      p_uint13[1] = u_val12;
      p_uint13[2] = u_val17;
      p_uint13[3] = puStack_48[3];
    }
    p_int19[1] = p_int19[1] + 0x10;
  }
  u_val4 = Dispatcher_Routine_080005D4(0x14);
  i_val3 = Animal_Routine_0805E824(u_val4,*(undefined4 *)(0x534 + handle),0,0x100);
  p_int19 = (int *)(handle + 0x7c0);
  if (i_val3 != *p_int19) {
    Dispatcher_Routine_08000608();
  }
  *p_int19 = i_val3;
  p_uint2 = (undefined2 *)Dispatcher_Routine_080005D4(0x1c);
  *p_uint2 = 0;
  p_uint2[1] = 0;
  p_uint2[2] = 0;
  p_uint2[3] = 0;
  p_uint2[4] = 0;
  *(undefined4 *)(p_uint2 + 6) = 0;
  *(undefined1 *)(p_uint2 + 8) = 0;
  *(undefined1 *)((int)p_uint2 + 0x11) = 0;
  *(undefined4 *)(p_uint2 + 10) = 0;
  *(undefined1 *)(p_uint2 + 0xc) = 0;
  p_int20 = (int *)(0x7C4 + handle);
  if (p_uint2 != (undefined2 *)*p_int20) {
    Dispatcher_Routine_08000608();
  }
  *p_int20 = (int)p_uint2;
  *p_uint2 = 0x68;
  p_uint2[1] = 0x7d;
  i_val3 = 0x854 + handle;
  u_val1 = HW_Routine_08007D4C(i_val3,*(undefined4 *)(i_val3 + 4));
  p_uint2[3] = u_val1;
  *(undefined2 *)(*p_int20 + 4) = 5;
  *(undefined1 *)(*p_int20 + 0x18) = 1;
  p_uint11 = (undefined4 *)*p_int19;
  _call_via_r3(&stack_val_124,(int *)*p_uint11,
                  *(undefined2 *)(p_uint11[1] + (uint)*(ushort *)(p_uint11 + 3) * 4),
                  *(undefined4 *)(*(int *)*p_uint11 + 0x10));
  gba_memcpy(puStack_48,puStack_48,0x20);
  u_val12 = puStack_48[1];
  u_val17 = puStack_48[2];
  *(uint *)(handle + 0x7c8) = *puStack_48;
  *(uint *)(handle + 0x7cc) = u_val12;
  *(uint *)(handle + 2000) = u_val17;
  u_val12 = puStack_48[4];
  u_val17 = puStack_48[5];
  *(uint *)(handle + 0x7d4) = puStack_48[3];
  *(uint *)(handle + 0x7d8) = u_val12;
  *(uint *)(handle + 0x7dc) = u_val17;
  u_val12 = puStack_48[7];
  *(uint *)(handle + 0x7e0) = puStack_48[6];
  *(uint *)(handle + 0x7e4) = u_val12;
  p_int19 = (int *)HW_GetSpriteAttr0Offset(handle);
  i_val5 = *(int *)(handle + 2000);
  i_val3 = HW_Routine_08007D4C(i_val3,*(undefined4 *)(i_val3 + 4));
  u_val1 = 0;
  if (*(int *)(handle + 2000) != 0) {
    u_val1 = *(undefined2 *)(handle + 0x7d4);
  }
  HW_Routine_08008F0C(puStack_48,i_val5,i_val3 * 0x20 + 0x06010000,u_val1);
  p_uint14 = puStack_48;
  p_uint13 = (uint *)p_int19[1];
  if (p_uint13 == (uint *)p_int19[3]) {
    puStack_28 = p_uint13;
    stack_val_b4 = 1;
    stack_val_b8 = (int)p_uint13 - *p_int19 >> 4;
    p_int20 = &stack_val_b8;
    if (stack_val_b8 == 0) {
      p_int20 = &stack_val_b4;
    }
    if (stack_val_b8 + *p_int20 == 0) {
      p_uint13 = (uint *)0x0;
      i_val3 = 0;
    }
    else {
      i_val3 = (stack_val_b8 + *p_int20) * 0x10;
      p_uint13 = (uint *)runtime_malloc_aligned(i_val3);
      if (p_uint13 == (uint *)0x0) {
        p_uint13 = (uint *)VTable_Routine_080D3BC0(i_val3);
      }
    }
    p_uint16 = p_uint13;
    for (p_uint15 = (uint *)*p_int19; p_uint15 != puStack_28; p_uint15 = p_uint15 + 4) {
      if (p_uint16 != (uint *)0x0) {
        u_val12 = p_uint15[1];
        u_val17 = p_uint15[2];
        *p_uint16 = *p_uint15;
        p_uint16[1] = u_val12;
        p_uint16[2] = u_val17;
        p_uint16[3] = p_uint15[3];
      }
      p_uint16 = p_uint16 + 4;
    }
    i_val5 = stack_val_b4;
    if (stack_val_b4 == 1) {
      if (p_uint16 != (uint *)0x0) {
        u_val12 = p_uint14[1];
        u_val17 = p_uint14[2];
        *p_uint16 = *p_uint14;
        p_uint16[1] = u_val12;
        p_uint16[2] = u_val17;
        p_uint16[3] = p_uint14[3];
      }
      p_uint16 = p_uint16 + 4;
    }
    else {
      for (; i_val5 != 0; i_val5 = i_val5 + -1) {
        if (p_uint16 != (uint *)0x0) {
          u_val12 = p_uint14[1];
          u_val17 = p_uint14[2];
          *p_uint16 = *p_uint14;
          p_uint16[1] = u_val12;
          p_uint16[2] = u_val17;
          p_uint16[3] = p_uint14[3];
        }
        p_uint16 = p_uint16 + 4;
      }
    }
    for (i_val5 = *p_int19; i_val5 != p_int19[1]; i_val5 = i_val5 + 0x10) {
    }
    puStack_24 = p_uint13;
    if (*p_int19 != 0) {
      cpp_operator_delete();
    }
    *p_int19 = (int)puStack_24;
    p_int19[1] = (int)p_uint16;
    p_int19[3] = (int)puStack_24 + i_val3;
  }
  else {
    if (p_uint13 != (uint *)0x0) {
      u_val12 = puStack_48[1];
      u_val17 = puStack_48[2];
      *p_uint13 = *puStack_48;
      p_uint13[1] = u_val12;
      p_uint13[2] = u_val17;
      p_uint13[3] = puStack_48[3];
    }
    p_int19[1] = p_int19[1] + 0x10;
  }
  p_int19 = (int *)HW_GetSpriteAttr0Offset(handle);
  u_val1 = 0;
  if (*(int *)(handle + 0x7d8) != 0) {
    u_val1 = *(undefined2 *)(handle + 0x7dc);
  }
  HW_Routine_08008F0C(&stack_val_124,*(int *)(handle + 0x7d8),0x050002A0,u_val1);
  p_uint14 = puStack_48;
  p_uint13 = (uint *)p_int19[1];
  if (p_uint13 == (uint *)p_int19[3]) {
    puStack_28 = p_uint13;
    stack_val_ac = 1;
    stack_val_b0 = (int)p_uint13 - *p_int19 >> 4;
    p_int20 = &stack_val_b0;
    if (stack_val_b0 == 0) {
      p_int20 = &stack_val_ac;
    }
    if (stack_val_b0 + *p_int20 == 0) {
      p_uint13 = (uint *)0x0;
      i_val3 = 0;
    }
    else {
      i_val3 = (stack_val_b0 + *p_int20) * 0x10;
      p_uint13 = (uint *)runtime_malloc_aligned(i_val3);
      if (p_uint13 == (uint *)0x0) {
        p_uint13 = (uint *)VTable_Routine_080D3BC0(i_val3);
      }
    }
    p_uint15 = p_uint13;
    for (p_uint16 = (uint *)*p_int19; p_uint16 != puStack_28; p_uint16 = p_uint16 + 4) {
      if (p_uint15 != (uint *)0x0) {
        u_val12 = p_uint16[1];
        u_val17 = p_uint16[2];
        *p_uint15 = *p_uint16;
        p_uint15[1] = u_val12;
        p_uint15[2] = u_val17;
        p_uint15[3] = p_uint16[3];
      }
      p_uint15 = p_uint15 + 4;
    }
    i_val5 = stack_val_ac;
    if (stack_val_ac == 1) {
      if (p_uint15 != (uint *)0x0) {
        u_val12 = p_uint14[1];
        u_val17 = p_uint14[2];
        *p_uint15 = *p_uint14;
        p_uint15[1] = u_val12;
        p_uint15[2] = u_val17;
        p_uint15[3] = p_uint14[3];
      }
      p_uint15 = p_uint15 + 4;
    }
    else {
      for (; i_val5 != 0; i_val5 = i_val5 + -1) {
        if (p_uint15 != (uint *)0x0) {
          u_val12 = p_uint14[1];
          u_val17 = p_uint14[2];
          *p_uint15 = *p_uint14;
          p_uint15[1] = u_val12;
          p_uint15[2] = u_val17;
          p_uint15[3] = p_uint14[3];
        }
        p_uint15 = p_uint15 + 4;
      }
    }
    for (i_val5 = *p_int19; i_val5 != p_int19[1]; i_val5 = i_val5 + 0x10) {
    }
    puStack_24 = p_uint13;
    if (*p_int19 != 0) {
      cpp_operator_delete();
    }
    *p_int19 = (int)puStack_24;
    p_int19[1] = (int)p_uint15;
    p_int19[3] = (int)puStack_24 + i_val3;
  }
  else {
    if (p_uint13 != (uint *)0x0) {
      u_val12 = puStack_48[1];
      u_val17 = puStack_48[2];
      *p_uint13 = *puStack_48;
      p_uint13[1] = u_val12;
      p_uint13[2] = u_val17;
      p_uint13[3] = puStack_48[3];
    }
    p_int19[1] = p_int19[1] + 0x10;
  }
  p_uint2 = (undefined2 *)Dispatcher_Routine_080005D4(0x1c);
  *p_uint2 = 0;
  p_uint2[1] = 0;
  p_uint2[2] = 0;
  p_uint2[3] = 0;
  p_uint2[4] = 0;
  *(undefined4 *)(p_uint2 + 6) = 0;
  *(undefined1 *)(p_uint2 + 8) = 0;
  *(undefined1 *)((int)p_uint2 + 0x11) = 0;
  *(undefined4 *)(p_uint2 + 10) = 0;
  *(undefined1 *)(p_uint2 + 0xc) = 0;
  p_int19 = (int *)(0x7EC + handle);
  if (p_uint2 != (undefined2 *)*p_int19) {
    Dispatcher_Routine_08000608();
  }
  *p_int19 = (int)p_uint2;
  *p_uint2 = 0x68;
  p_uint2[1] = 0x8d;
  i_val3 = 0x86C + handle;
  u_val1 = HW_Routine_08007D4C(i_val3,*(undefined4 *)(i_val3 + 4));
  p_uint2[3] = u_val1;
  *(undefined2 *)(*p_int19 + 4) = 8;
  *(undefined1 *)(*p_int19 + 0x18) = 1;
  p_int19 = *(int **)(handle + 0x538);
  i_val5 = *p_int19;
  _call_via_r3(piStack_34,p_int19,6,*(undefined4 *)(i_val5 + 0xc));
  _call_via_r3(&stack_val_124,p_int19,*(undefined2 *)(stack_ints_a8[0] + 0xc),
                  *(undefined4 *)(i_val5 + 0x10));
  gba_memcpy(puStack_48,puStack_48,0x20);
  u_val12 = puStack_48[1];
  u_val17 = puStack_48[2];
  *(uint *)(handle + 0x7f0) = *puStack_48;
  *(uint *)(handle + 0x7f4) = u_val12;
  *(uint *)(handle + 0x7f8) = u_val17;
  u_val12 = puStack_48[4];
  u_val17 = puStack_48[5];
  *(uint *)(handle + 0x7fc) = puStack_48[3];
  *(uint *)(handle + 0x800) = u_val12;
  *(uint *)(handle + 0x804) = u_val17;
  u_val12 = puStack_48[7];
  *(uint *)(handle + 0x808) = puStack_48[6];
  *(uint *)(handle + 0x80c) = u_val12;
  p_int19 = (int *)HW_GetSpriteAttr0Offset(handle);
  i_val5 = *(int *)(handle + 0x7f8);
  i_val3 = HW_Routine_08007D4C(i_val3,*(undefined4 *)(i_val3 + 4));
  u_val1 = 0;
  if (*(int *)(handle + 0x7f8) != 0) {
    u_val1 = *(undefined2 *)(handle + 0x7fc);
  }
  HW_Routine_08008F0C(puStack_48,i_val5,i_val3 * 0x20 + 0x06010000,u_val1);
  p_uint14 = puStack_48;
  p_uint13 = (uint *)p_int19[1];
  if (p_uint13 == (uint *)p_int19[3]) {
    puStack_28 = p_uint13;
    stack_val_9c = 1;
    stack_val_a0 = (int)p_uint13 - *p_int19 >> 4;
    p_int20 = &stack_val_a0;
    if (stack_val_a0 == 0) {
      p_int20 = &stack_val_9c;
    }
    if (stack_val_a0 + *p_int20 == 0) {
      p_uint13 = (uint *)0x0;
      i_val3 = 0;
    }
    else {
      i_val3 = (stack_val_a0 + *p_int20) * 0x10;
      p_uint13 = (uint *)runtime_malloc_aligned(i_val3);
      if (p_uint13 == (uint *)0x0) {
        p_uint13 = (uint *)VTable_Routine_080D3BC0(i_val3);
      }
    }
    p_uint16 = p_uint13;
    for (p_uint15 = (uint *)*p_int19; p_uint15 != puStack_28; p_uint15 = p_uint15 + 4) {
      if (p_uint16 != (uint *)0x0) {
        u_val12 = p_uint15[1];
        u_val17 = p_uint15[2];
        *p_uint16 = *p_uint15;
        p_uint16[1] = u_val12;
        p_uint16[2] = u_val17;
        p_uint16[3] = p_uint15[3];
      }
      p_uint16 = p_uint16 + 4;
    }
    i_val5 = stack_val_9c;
    if (stack_val_9c == 1) {
      if (p_uint16 != (uint *)0x0) {
        u_val12 = p_uint14[1];
        u_val17 = p_uint14[2];
        *p_uint16 = *p_uint14;
        p_uint16[1] = u_val12;
        p_uint16[2] = u_val17;
        p_uint16[3] = p_uint14[3];
      }
      p_uint16 = p_uint16 + 4;
    }
    else {
      for (; i_val5 != 0; i_val5 = i_val5 + -1) {
        if (p_uint16 != (uint *)0x0) {
          u_val12 = p_uint14[1];
          u_val17 = p_uint14[2];
          *p_uint16 = *p_uint14;
          p_uint16[1] = u_val12;
          p_uint16[2] = u_val17;
          p_uint16[3] = p_uint14[3];
        }
        p_uint16 = p_uint16 + 4;
      }
    }
    for (i_val5 = *p_int19; i_val5 != p_int19[1]; i_val5 = i_val5 + 0x10) {
    }
    puStack_24 = p_uint13;
    if (*p_int19 != 0) {
      cpp_operator_delete();
    }
    *p_int19 = (int)puStack_24;
    p_int19[1] = (int)p_uint16;
    p_int19[3] = (int)puStack_24 + i_val3;
  }
  else {
    if (p_uint13 != (uint *)0x0) {
      u_val12 = puStack_48[1];
      u_val17 = puStack_48[2];
      *p_uint13 = *puStack_48;
      p_uint13[1] = u_val12;
      p_uint13[2] = u_val17;
      p_uint13[3] = puStack_48[3];
    }
    p_int19[1] = p_int19[1] + 0x10;
  }
  p_int19 = (int *)HW_GetSpriteAttr0Offset(handle);
  u_val1 = 0;
  if (*(int *)(handle + 0x800) != 0) {
    u_val1 = *(undefined2 *)(handle + 0x804);
  }
  HW_Routine_08008F0C(&stack_val_124,*(int *)(handle + 0x800),0x05000300,u_val1);
  p_uint14 = puStack_48;
  p_uint13 = (uint *)p_int19[1];
  if (p_uint13 == (uint *)p_int19[3]) {
    puStack_28 = p_uint13;
    stack_ints_94[0] = 1;
    stack_val_98 = (int)p_uint13 - *p_int19 >> 4;
    p_int20 = &stack_val_98;
    if (stack_val_98 == 0) {
      p_int20 = stack_ints_94;
    }
    if (stack_val_98 + *p_int20 == 0) {
      p_uint13 = (uint *)0x0;
      i_val3 = 0;
    }
    else {
      i_val3 = (stack_val_98 + *p_int20) * 0x10;
      p_uint13 = (uint *)runtime_malloc_aligned(i_val3);
      if (p_uint13 == (uint *)0x0) {
        p_uint13 = (uint *)VTable_Routine_080D3BC0(i_val3);
      }
    }
    p_uint15 = p_uint13;
    for (p_uint16 = (uint *)*p_int19; p_uint16 != puStack_28; p_uint16 = p_uint16 + 4) {
      if (p_uint15 != (uint *)0x0) {
        u_val12 = p_uint16[1];
        u_val17 = p_uint16[2];
        *p_uint15 = *p_uint16;
        p_uint15[1] = u_val12;
        p_uint15[2] = u_val17;
        p_uint15[3] = p_uint16[3];
      }
      p_uint15 = p_uint15 + 4;
    }
    i_val5 = stack_ints_94[0];
    if (stack_ints_94[0] == 1) {
      if (p_uint15 != (uint *)0x0) {
        u_val12 = p_uint14[1];
        u_val17 = p_uint14[2];
        *p_uint15 = *p_uint14;
        p_uint15[1] = u_val12;
        p_uint15[2] = u_val17;
        p_uint15[3] = p_uint14[3];
      }
      p_uint15 = p_uint15 + 4;
    }
    else {
      for (; i_val5 != 0; i_val5 = i_val5 + -1) {
        if (p_uint15 != (uint *)0x0) {
          u_val12 = p_uint14[1];
          u_val17 = p_uint14[2];
          *p_uint15 = *p_uint14;
          p_uint15[1] = u_val12;
          p_uint15[2] = u_val17;
          p_uint15[3] = p_uint14[3];
        }
        p_uint15 = p_uint15 + 4;
      }
    }
    for (i_val5 = *p_int19; i_val5 != p_int19[1]; i_val5 = i_val5 + 0x10) {
    }
    puStack_24 = p_uint13;
    if (*p_int19 != 0) {
      cpp_operator_delete();
    }
    *p_int19 = (int)puStack_24;
    p_int19[1] = (int)p_uint15;
    p_int19[3] = (int)puStack_24 + i_val3;
  }
  else {
    if (p_uint13 != (uint *)0x0) {
      u_val12 = puStack_48[1];
      u_val17 = puStack_48[2];
      *p_uint13 = *puStack_48;
      p_uint13[1] = u_val12;
      p_uint13[2] = u_val17;
      p_uint13[3] = puStack_48[3];
    }
    p_int19[1] = p_int19[1] + 0x10;
  }
  HW_Routine_08008C38(handle + 0x810,0xcd,0xFFFF);
  M4A_Routine_080C2D54(handle);
  stack_val_60 = 0;
  stack_val_5c = 0;
  p_uint14 = puStack_48 + 3;
  do {
    *p_uint14 = 0;
    p_uint14 = p_uint14 + -1;
  } while ((int)puStack_48 <= (int)p_uint14);
  stack_val_58 = 0;
  stack_val_54 = 0;
  do {
    if (*(int *)(0x89C + handle) != 6) {
      return;
    }
    HW_Routine_080087C8(handle);
    HW_Routine_080088B8(handle);
    p_int19 = (int *)(0x8A8 + handle);
    if (*p_int19 == 0) {
      stack_val_60 = stack_val_60 + 1;
      if (stack_val_60 == 0x78) {
        stack_val_60 = 0;
        i_val3 = 1;
LAB_080c76aa:
        *p_int19 = i_val3;
      }
    }
    else {
      stack_val_50 = HW_Routine_080088D4(handle);
      p_uint11 = (undefined4 *)(0x51C + handle);
      i_val3 = Animal_Routine_08050D34(*p_uint11);
      u_val10 = *p_uint11;
      u_val4 = HW_Routine_080088DC(handle);
      u_val6 = HW_GetSpriteAttr2Offset(handle);
      u_val7 = HW_GetSpriteAttr1Offset(handle);
      u_val8 = HW_GetPaletteBankOffset(handle);
      u_val9 = HW_Routine_0800894C(handle);
      u_val12 = Animal_Routine_08050D3C(u_val10,u_val4,u_val6,u_val7,u_val8,u_val9,0x814 + handle);
      if (u_val12 < 7) {
        switch(*(uint *)(u_val12 * 4 + gInlineTable_080C7148) & 0xfffffffe) {
        case 0x80c7164:
          Animal_Routine_08050D5C(*(undefined4 *)(0x51C + handle));
          break;
        case 0x80c7174:
          if (i_val3 == 1) {
            p_uint11 = (undefined4 *)(0x51C + handle);
            Animal_Routine_08050D8C(*p_uint11,gRomData_0810823C);
            Animal_Routine_08050DD8(*p_uint11);
            *(undefined1 *)(0x96B + handle) = 1;
          }
        }
      }
      i_val3 = *(int *)(0x8A8 + handle);
      if (i_val3 == 2) {
        stack_val_5c = stack_val_5c + 1;
        if (stack_val_5c == 0x3c) {
          *(undefined1 *)(0x96D + handle) = 1;
          if (*(char *)(0x96A + handle) == '\0') {
            HW_Routine_08008B6C(0x818 + handle,0xb7);
          }
          else {
            HW_Routine_08008B6C(0x818 + handle,0xb6);
          }
        }
        if (stack_val_5c == 0xf0) {
          stack_val_5c = 0;
          p_int19 = (int *)(0x8A8 + handle);
          i_val3 = 3;
          goto LAB_080c76aa;
        }
      }
      else if (i_val3 < 3) {
        if ((i_val3 == 1) && (*(char *)(0x96B + handle) != '\0')) {
          stack_val_54 = stack_val_54 + 1;
          stack_val_2c = stack_val_58 * 4;
          if (stack_val_54 == 0x14) {
            stack_val_54 = 0;
            puStack_48[stack_val_58] = puStack_48[stack_val_58] + 1;
            if (stack_val_58 == 2) {
              HW_Routine_08008B6C(handle + 0x820,0xc0);
            }
            else {
              HW_Routine_08008B6C(handle + 0x820,0xbf);
            }
            ScriptEngine_Routine_0804EC84(*(undefined4 *)((int)puStack_48 + stack_val_2c),&stack_val_12c,0);
            i_val3 = stack_val_58 * 0x40;
            i_val5 = stack_val_58 * 0x104;
            stack_ints_94[1] = 0x20004;
            ScriptEngine_Routine_0804E7A0(0x20004,i_val5 + handle + 0x110);
            if (stack_val_58 == 2) {
              i_val5 = gba_strlen(&stack_val_12c);
              stack_val_88 = CONCAT22((undefined2)stack_val_58,4);
              ScriptEngine_Routine_0804E958(stack_val_88,handle + 0x318,i_val5 * -8 + 0x20,0,&stack_val_12c,0,7);
            }
            else {
              i_val21 = gba_strlen(&stack_val_12c);
              stack_ints_94[2] = 0x20004;
              ScriptEngine_Routine_0804E958(0x20004,i_val5 + handle + 0x110,i_val21 * -8 + 0x20,0,&stack_val_12c,0,5);
            }
            p_int19 = (int *)HW_GetSpriteAttr0Offset(handle);
            i_val5 = stack_val_58;
            i_val3 = i_val3 + stack_val_58;
            i_val21 = HW_Routine_08007D4C(0x88C + handle,
                                   *(undefined4 *)(0x88C + handle + 4));
            HW_Routine_08008F0C(&stack_val_114,i_val3 * 4 + handle + 0x110,
                          (i_val5 * 8 + i_val21) * 0x20 + 0x06010000,0x100);
            p_uint14 = (uint *)p_int19[1];
            puStack_44 = &stack_val_114;
            if (p_uint14 == (uint *)p_int19[3]) {
              puStack_28 = p_uint14;
              stack_val_80 = 1;
              stack_val_84 = (int)p_uint14 - *p_int19 >> 4;
              p_int20 = &stack_val_84;
              if (stack_val_84 == 0) {
                p_int20 = &stack_val_80;
              }
              if (stack_val_84 + *p_int20 == 0) {
                p_uint14 = (uint *)0x0;
                i_val3 = 0;
              }
              else {
                i_val3 = (stack_val_84 + *p_int20) * 0x10;
                p_uint14 = (uint *)runtime_malloc_aligned(i_val3);
                if (p_uint14 == (uint *)0x0) {
                  p_uint14 = (uint *)VTable_Routine_080D3BC0(i_val3);
                }
              }
              puStack_24 = p_uint14;
              for (p_uint13 = (uint *)*p_int19; p_uint13 != puStack_28; p_uint13 = p_uint13 + 4) {
                if (p_uint14 != (uint *)0x0) {
                  u_val12 = p_uint13[1];
                  u_val17 = p_uint13[2];
                  *p_uint14 = *p_uint13;
                  p_uint14[1] = u_val12;
                  p_uint14[2] = u_val17;
                  p_uint14[3] = p_uint13[3];
                }
                p_uint14 = p_uint14 + 4;
              }
              i_val5 = stack_val_80;
              if (stack_val_80 == 1) {
                if (p_uint14 != (uint *)0x0) {
                  *p_uint14 = stack_val_114;
                  p_uint14[1] = stack_val_110;
                  p_uint14[2] = stack_val_10c;
                  p_uint14[3] = stack_val_108;
                }
                p_uint14 = p_uint14 + 4;
              }
              else {
                for (; i_val5 != 0; i_val5 = i_val5 + -1) {
                  if (p_uint14 != (uint *)0x0) {
                    *p_uint14 = stack_val_114;
                    p_uint14[1] = stack_val_110;
                    p_uint14[2] = stack_val_10c;
                    p_uint14[3] = stack_val_108;
                  }
                  p_uint14 = p_uint14 + 4;
                }
              }
              for (i_val5 = *p_int19; i_val5 != p_int19[1]; i_val5 = i_val5 + 0x10) {
              }
              if (*p_int19 != 0) {
                cpp_operator_delete();
              }
              *p_int19 = (int)puStack_24;
              p_int19[1] = (int)p_uint14;
              p_int19[3] = (int)puStack_24 + i_val3;
            }
            else {
              if (p_uint14 != (uint *)0x0) {
                *p_uint14 = stack_val_114;
                p_uint14[1] = stack_val_110;
                p_uint14[2] = stack_val_10c;
                p_uint14[3] = stack_val_108;
              }
              p_int19[1] = p_int19[1] + 0x10;
            }
          }
          if (*(int *)((int)puStack_48 + stack_val_2c) == *(int *)((int)stack_buf_14c + stack_val_2c)) {
            stack_val_58 = stack_val_58 + 1;
          }
          if ((stack_val_50 & 9) != 0) {
            stack_val_68 = 0;
            puStack_44 = &stack_val_114;
            puStack_30 = &stack_val_7c;
            puStack_4c = &stack_val_78;
            do {
              u_val12 = stack_buf_14c[stack_val_68];
              puStack_48[stack_val_68] = u_val12;
              ScriptEngine_Routine_0804EC84(u_val12,&stack_val_12c,0);
              i_val3 = stack_val_68 * 0x40;
              i_val5 = stack_val_68 * 0x104;
              stack_val_7c = CONCAT22(stack_val_7c._2_2_,4);
              *(undefined2 *)((int)puStack_30 + 2) = 2;
              ScriptEngine_Routine_0804E7A0(stack_val_7c,i_val5 + handle + 0x110,0);
              if (stack_val_68 == 2) {
                i_val5 = gba_strlen(&stack_val_12c);
                stack_val_74 = CONCAT22((undefined2)stack_val_68,4);
                ScriptEngine_Routine_0804E958(stack_val_74,handle + 0x318,i_val5 * -8 + 0x20,0,&stack_val_12c,0,7);
              }
              else {
                i_val21 = gba_strlen(&stack_val_12c);
                p_uint11 = puStack_4c;
                *(undefined2 *)puStack_4c = 4;
                *(undefined2 *)((int)p_uint11 + 2) = 2;
                ScriptEngine_Routine_0804E958(*p_uint11,i_val5 + handle + 0x110,i_val21 * -8 + 0x20,0,&stack_val_12c,0,5)
                ;
              }
              p_int19 = (int *)HW_GetSpriteAttr0Offset(handle);
              i_val3 = i_val3 + stack_val_68;
              i_val5 = HW_Routine_08007D4C(0x88C + handle,
                                    *(undefined4 *)(0x88C + handle + 4));
              HW_Routine_08008F0C(&stack_val_114,i_val3 * 4 + handle + 0x110,
                            (stack_val_68 * 8 + i_val5) * 0x20 + 0x06010000,0x100);
              p_uint14 = puStack_44;
              p_uint13 = (uint *)p_int19[1];
              if (p_uint13 == (uint *)p_int19[3]) {
                puStack_28 = p_uint13;
                stack_val_6c = 1;
                stack_val_70 = (int)p_uint13 - *p_int19 >> 4;
                p_int20 = &stack_val_70;
                if (stack_val_70 == 0) {
                  p_int20 = &stack_val_6c;
                }
                if (stack_val_70 + *p_int20 == 0) {
                  p_uint13 = (uint *)0x0;
                  i_val3 = 0;
                }
                else {
                  i_val3 = (stack_val_70 + *p_int20) * 0x10;
                  p_uint13 = (uint *)runtime_malloc_aligned(i_val3);
                  if (p_uint13 == (uint *)0x0) {
                    p_uint13 = (uint *)VTable_Routine_080D3BC0(i_val3);
                  }
                }
                puStack_24 = p_uint13;
                p_uint16 = (uint *)*p_int19;
                stack_val_3c = stack_val_68 + 1;
                for (; p_uint16 != puStack_28; p_uint16 = p_uint16 + 4) {
                  if (p_uint13 != (uint *)0x0) {
                    u_val12 = p_uint16[1];
                    u_val17 = p_uint16[2];
                    *p_uint13 = *p_uint16;
                    p_uint13[1] = u_val12;
                    p_uint13[2] = u_val17;
                    p_uint13[3] = p_uint16[3];
                  }
                  p_uint13 = p_uint13 + 4;
                }
                i_val5 = stack_val_6c;
                if (stack_val_6c == 1) {
                  if (p_uint13 != (uint *)0x0) {
                    u_val12 = p_uint14[1];
                    u_val17 = p_uint14[2];
                    *p_uint13 = *p_uint14;
                    p_uint13[1] = u_val12;
                    p_uint13[2] = u_val17;
                    p_uint13[3] = p_uint14[3];
                  }
                  p_uint13 = p_uint13 + 4;
                }
                else {
                  for (; i_val5 != 0; i_val5 = i_val5 + -1) {
                    if (p_uint13 != (uint *)0x0) {
                      u_val12 = p_uint14[1];
                      u_val17 = p_uint14[2];
                      *p_uint13 = *p_uint14;
                      p_uint13[1] = u_val12;
                      p_uint13[2] = u_val17;
                      p_uint13[3] = p_uint14[3];
                    }
                    p_uint13 = p_uint13 + 4;
                  }
                }
                for (i_val5 = *p_int19; i_val5 != p_int19[1]; i_val5 = i_val5 + 0x10) {
                }
                if (*p_int19 != 0) {
                  cpp_operator_delete();
                }
                *p_int19 = (int)puStack_24;
                p_int19[1] = (int)p_uint13;
                p_int19[3] = (int)puStack_24 + i_val3;
              }
              else {
                if (p_uint13 != (uint *)0x0) {
                  u_val12 = puStack_44[1];
                  u_val17 = puStack_44[2];
                  *p_uint13 = *puStack_44;
                  p_uint13[1] = u_val12;
                  p_uint13[2] = u_val17;
                  p_uint13[3] = puStack_44[3];
                }
                p_int19[1] = p_int19[1] + 0x10;
                stack_val_3c = stack_val_68 + 1;
              }
              stack_val_68 = stack_val_3c;
            } while (stack_val_3c < 4);
          }
          if ((((stack_val_124 == stack_buf_14c[0]) && (puStack_48[1] == stack_buf_14c[1])) &&
              (puStack_48[2] == stack_buf_14c[2])) && (puStack_48[3] == stack_buf_14c[3])) {
            p_int19 = (int *)(0x8A8 + handle);
            i_val3 = 2;
            goto LAB_080c76aa;
          }
        }
      }
      else if ((i_val3 == 3) &&
              ((stack_val_5c = stack_val_5c + 1, (stack_val_50 & 9) != 0 || (stack_val_5c == 600)))) {
        p_int19 = (int *)(0x89C + handle);
        i_val3 = 7;
        goto LAB_080c76aa;
      }
    }
    M4A_Routine_080C2D54(handle);
  } while( true );
}

// =============================================================================
// Function: M4A_Routine_080C76D4 @ 0x080C76D4
// =============================================================================
undefined4 M4A_Routine_080C76D4(int handle)

{
  byte b_flag1;
  int i_val2;
  int i_val3;
  int i_val4;
  char c_char5;
  undefined1 u_val6;
  uint u_val7;
  uint u_val8;
  byte *pbVar9;
  int i_val10;
  char *p_char11;
  undefined1 *p_uint12;
  int i_val13;
  
  u_val7 = HW_Routine_080088C4();
  i_val4 = 0x97A;
  i_val3 = 0x8B5;
  i_val2 = 0x8B5;
  i_val13 = 0x8B4;
  i_val10 = 0x8B4;
  u_val8 = *(int *)(handle + 0x8BC) - 4;
  if (5 < u_val8) goto LAB_080c7b12;
  switch(*(uint *)(u_val8 * 4 + gInlineTable_080C7700) & 0xfffffffe) {
  case 0x80c7718:
    b_flag1 = *(byte *)(handle + 0x8B4);
    if (b_flag1 < 0x59) {
      if (b_flag1 != 0x58) goto LAB_080c7b12;
      *(undefined4 *)(handle + 0x8BC) = 0;
      p_uint12 = (undefined1 *)(handle + 0x8C4);
      u_val6 = 1;
    }
    else {
      *(byte *)(handle + 0x8B4) = b_flag1 - 2;
      pbVar9 = (byte *)(handle + 0x8B8);
      b_flag1 = *pbVar9;
      *pbVar9 = (byte)(b_flag1 - 2);
      i_val13 = (int)((b_flag1 - 2) * 0x1000000) >> 0x18;
      if (i_val13 == -0x10) {
        *pbVar9 = 0;
        *(char *)(handle + 0x8B6) = *(char *)(handle + 0x8B6) + -1;
        if ((u_val7 & 0x20) != 0) goto LAB_080c7b12;
        *(undefined4 *)(handle + i_val10 + 8) = 0;
        p_uint12 = (undefined1 *)(handle + 0x8C4);
        u_val6 = 1;
      }
      else {
        if ((i_val13 != 0) || ((u_val7 & 0x20) != 0)) goto LAB_080c7b12;
        *(undefined4 *)(handle + 0x8BC) = 0;
        p_uint12 = (undefined1 *)(handle + 0x8C4);
        u_val6 = 1;
      }
    }
    break;
  case 0x80c77c4:
    b_flag1 = *(byte *)(handle + 0x8B4);
    if (b_flag1 < 0x98) {
      *(byte *)(handle + 0x8B4) = b_flag1 + 2;
      p_char11 = (char *)(handle + 0x8B8);
      c_char5 = *p_char11 + '\x02';
      *p_char11 = c_char5;
      if (c_char5 == '\x10') {
        *p_char11 = '\0';
        p_char11 = (char *)(handle + i_val13 + 2);
        *p_char11 = *p_char11 + '\x01';
        i_val10 = 0x8BC;
      }
      else {
        i_val10 = 0x8BC;
        if (c_char5 != '\0') goto LAB_080c7b12;
      }
      if ((u_val7 & 0x10) != 0) goto LAB_080c7b12;
    }
    else {
      i_val10 = 0x8BC;
      if (b_flag1 != 0x98) goto LAB_080c7b12;
    }
    *(undefined4 *)(handle + i_val10) = 1;
    *(undefined1 *)(handle + 0x8C4) = 1;
    goto LAB_080c7b12;
  case 0x80c7844:
    b_flag1 = *(byte *)(handle + 0x8B5);
    if (b_flag1 < 0x32) {
      if (b_flag1 != 0x31) goto LAB_080c7b12;
      *(undefined4 *)(handle + 0x8BC) = 2;
      p_uint12 = (undefined1 *)(handle + 0x8C4);
      u_val6 = 1;
    }
    else {
      *(byte *)(handle + 0x8B5) = b_flag1 - 2;
      pbVar9 = (byte *)(handle + 0x8B9);
      b_flag1 = *pbVar9;
      *pbVar9 = (byte)(b_flag1 - 2);
      i_val10 = (int)((b_flag1 - 2) * 0x1000000) >> 0x18;
      if (i_val10 == -0x10) {
        *pbVar9 = 0;
        *(char *)(handle + 0x8B7) = *(char *)(handle + 0x8B7) + -1;
        if ((u_val7 & 0x40) != 0) goto LAB_080c7b12;
        *(undefined4 *)(handle + i_val2 + 7) = 2;
        p_uint12 = (undefined1 *)(handle + 0x8C4);
        u_val6 = 1;
      }
      else {
        if ((i_val10 != 0) || ((u_val7 & 0x40) != 0)) goto LAB_080c7b12;
        *(undefined4 *)(handle + 0x8BC) = 2;
        p_uint12 = (undefined1 *)(handle + 0x8C4);
        u_val6 = 1;
      }
    }
    break;
  case 0x80c78ec:
    b_flag1 = *(byte *)(handle + 0x8B5);
    if (b_flag1 < 0x71) {
      *(byte *)(handle + 0x8B5) = b_flag1 + 2;
      p_char11 = (char *)(handle + 0x8B9);
      c_char5 = *p_char11 + '\x02';
      *p_char11 = c_char5;
      if (c_char5 == '\x10') {
        *p_char11 = '\0';
        *(char *)(handle + 0x8B7) = *(char *)(handle + 0x8B7) + '\x01';
        if ((u_val7 & 0x80) != 0) goto LAB_080c7b12;
        *(undefined4 *)(handle + i_val3 + 7) = 3;
        p_uint12 = (undefined1 *)(handle + 0x8C4);
        u_val6 = 1;
      }
      else {
        if ((c_char5 != '\0') || ((u_val7 & 0x80) != 0)) goto LAB_080c7b12;
        *(undefined4 *)(handle + 0x8BC) = 3;
        p_uint12 = (undefined1 *)(handle + 0x8C4);
        u_val6 = 1;
      }
    }
    else {
      if (b_flag1 != 0x71) goto LAB_080c7b12;
      *(undefined4 *)(handle + 0x8BC) = 3;
      p_uint12 = (undefined1 *)(handle + 0x8C4);
      u_val6 = 1;
    }
    break;
  case 0x80c7990:
    i_val10 = (uint)*(byte *)(handle + 0x8B7) * 5 + (uint)*(byte *)(handle + 0x8B6)
    ;
    c_char5 = *(char *)(handle + 0x979);
    if (c_char5 == '\0') {
      *(undefined1 *)(handle + 0x8B6 + 0xf) = 1;
      *(char *)(handle + 0x8B5) = *(char *)(handle + 0x8B5) + -10;
    }
    else if (c_char5 == '\x14') {
      *(undefined1 *)(handle + i_val10 * 4 + 0x904) = 1;
    }
    else if ((c_char5 == '2') && (*(char *)(handle + 0x969) == '\0')) {
      *(undefined1 *)(handle + i_val10 * 4 + 0x905) = 1;
      HW_Routine_08008B6C(handle + 0x820,0x6c);
    }
    i_val10 = 0x979;
    p_char11 = (char *)(handle + 0x979);
    c_char5 = *p_char11;
    *p_char11 = c_char5 + '\x01';
    if ((char)(c_char5 + '\x01') == '<') {
      *(char *)(handle + 0x8B5) = *(char *)(handle + 0x8B5) + '\n';
      *(undefined1 *)(handle + 0x8C5) = 0;
      *p_char11 = '\0';
      i_val13 = 0x8BC;
      *(undefined4 *)(handle + 0x8BC) = *(undefined4 *)(handle + i_val10 + -0xb9);
      *(undefined1 *)(handle + 0x8C4) = 1;
      if ((u_val7 & 1) != 0) {
        *(undefined1 *)(handle + i_val13 + 0xac) = 0;
      }
      if (*(char *)(handle + 0x97F) ==
          *(char *)(*(int *)(handle + 0x97F + -0xcf) * 4 + gRomData_08107FE0 + 1)) {
        *(char *)(handle + 0x97F) = '\0';
        *(undefined4 *)(handle + 0x89C) = 5;
        HW_Routine_08008C28(handle + 0x810,0x100);
        HW_Routine_08008B6C(handle + 0x818,0xbb);
      }
    }
    goto LAB_080c7b12;
  case 0x80c7ac0:
    p_char11 = (char *)(handle + 0x97A);
    c_char5 = *p_char11;
    *p_char11 = c_char5 + '\x01';
    if ((char)(c_char5 + '\x01') != '<') goto LAB_080c7b12;
    *p_char11 = '\0';
    *(undefined4 *)(handle + 0x8BC) = *(undefined4 *)(handle + 0x8c0);
    *(undefined1 *)(handle + i_val4 + -0xb6) = 1;
    *(undefined2 *)(*(int *)(handle + 0x728) + 0x10) = 0x100;
    Animal_Routine_0805E860(*(int *)(handle + 0x728),6);
    if ((u_val7 & 1) == 0) goto LAB_080c7b12;
    p_uint12 = (undefined1 *)(handle + 0x968);
    u_val6 = 0;
  }
  *p_uint12 = u_val6;
LAB_080c7b12:
  if ((*(char *)(handle + 0x968) == '\0') && ((u_val7 & 1) == 0)) {
    *(char *)(handle + 0x968) = '\x01';
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080C7B7C @ 0x080C7B7C
// =============================================================================
undefined8 M4A_Routine_080C7B7C(uint *handle,undefined4 channel,uint param,uint val)

{
  uint u_val1;
  uint u_val2;
  
  u_val1 = (val & 0xFFFFFF00 | param & 0xff) & 0xFFFF00FF;
  u_val2 = u_val1;
  while (4 < (u_val2 & 0xff)) {
    u_val2 = (u_val1 & 0xFFFFFF00 | u_val1 - 5 & 0xff) & 0xFFFF00FF;
    u_val1 = u_val2 | (((u_val1 & 0xFFFFFF00) >> 8) + 1 & 0xff) << 8;
  }
  *handle = (u_val1 & 0xFFFFFF00 | u_val1 * 0x10000000 + 0x50000000 >> 0x18) & 0xFFFF00FF |
             ((u_val1 & 0xFFFFFF00) >> 8) * 0x10000000 + 0x28000000 >> 0x10;
  return handle;
}

// =============================================================================
// Function: M4A_Routine_080C7BF0 @ 0x080C7BF0
// =============================================================================
undefined4 M4A_Routine_080C7BF0(int handle)

{
  int i_val1;
  uint u_val2;
  undefined1 *p_uint3;
  char *p_char4;
  char *p_char5;
  char *p_char6;
  undefined1 *p_uint7;
  undefined4 *p_uint8;
  int loop_i;
  
  u_val2 = HW_Routine_080088C4();
  if ((((u_val2 & 1) != 0) && (*(int *)(handle + 0x8BC) < 4)) &&
     (*(char *)(handle + 0x968) != '\0')) {
    *(int *)(handle + 0x968 + -0xa8) = *(int *)(handle + 0x8BC);
    *(char *)(handle + 0x96F) = *(char *)(handle + 0x96F) + '\x01';
    loop_i = 0;
    p_char5 = (char *)(handle + 0x978);
    p_uint8 = (undefined4 *)(handle + 0x8BC);
    p_uint3 = (undefined1 *)(0x978 + -0xb4 + handle);
    p_uint7 = (undefined1 *)(handle + 0x8BC + 0xd);
    p_char4 = (char *)(handle + 0x8C8);
    p_char6 = (char *)(handle + 0x8C8 + 0xa1);
    do {
      if (*p_char4 != '\0') {
        *p_char5 = *p_char5 + '\x01';
        *p_uint8 = 9;
        *p_uint3 = 1;
        *p_char6 = '\x01';
LAB_080c7cbe:
        HW_Routine_08008B6C(handle + 0x820,199);
        break;
      }
      if ((uint)(byte)p_char4[2] ==
          (uint)*(byte *)(handle + 0x8B6) +
          (uint)*(byte *)(handle + 0x8B6 + 1) * 5) {
        if (p_char4[1] != '\0') {
          *p_uint8 = 9;
          *p_uint3 = 1;
          *p_char5 = *p_char5 + '\x01';
          *p_char6 = '\x01';
          goto LAB_080c7cbe;
        }
        *p_uint7 = 1;
        if ((loop_i == *(byte *)(handle + 0x96F) - 1) && (*p_char6 == '\0')) {
          *(char *)(handle + 0x970) = *(char *)(handle + 0x970) + '\x01';
        }
        else {
          *p_char6 = '\x01';
        }
        *p_uint8 = 8;
        *p_uint3 = 1;
        HW_Routine_08008B6C(handle + 0x820,0xbc);
        HW_Routine_08008B6C(handle + 0x818,0xbe);
        *(char *)(handle + 0x97F) = *(char *)(handle + 0x97F) + '\x01';
        break;
      }
      p_uint7 = p_uint7 + 4;
      p_char4 = p_char4 + 4;
      loop_i = loop_i + 1;
    } while (loop_i < 0xf);
    i_val1 = 0x978;
    if (loop_i == 0xf) {
      *(char *)(handle + 0x978) = *(char *)(handle + 0x978) + '\x01';
      *(undefined4 *)(handle + 0x8BC) = 9;
      *(undefined1 *)(handle + 0x8C4) = 1;
      *(undefined1 *)(handle + i_val1 + -0xf) = 1;
      HW_Routine_08008B6C(handle + 0x820,199);
    }
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080C7D78 @ 0x080C7D78
// =============================================================================
undefined4 M4A_Routine_080C7D78(int handle)

{
  uint u_val1;
  int *p_int2;
  
  u_val1 = HW_Routine_080088CC();
  if ((u_val1 & 8) != 0) {
    HW_Routine_08008B6C(handle + 0x81C,0xb8);
    p_int2 = (int *)(handle + 0x8A4);
    if (*p_int2 == 0) {
      *p_int2 = 1;
      *(undefined2 *)(*(int *)(handle + 0x5f0) + 0x10) = 0;
      *(undefined2 *)(*(int *)(handle + 0x5a0) + 0x10) = 0;
      *(undefined2 *)(*(int *)(handle + 0x728) + 0x10) = 0;
    }
    else if (*p_int2 == 1) {
      *p_int2 = 0;
      *(undefined2 *)(*(int *)(handle + 0x5f0) + 0x10) = 0x100;
      *(undefined2 *)(*(int *)(handle + 0x5a0) + 0x10) = 0x100;
      *(undefined2 *)(*(int *)(handle + 0x728) + 0x10) = 0x100;
    }
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080C7DF8 @ 0x080C7DF8
// =============================================================================
undefined4 M4A_Routine_080C7DF8(int handle)

{
  uint u_val1;
  int i_val2;
  int *p_int3;
  
  u_val1 = HW_Routine_080088C4();
  i_val2 = *(int *)(handle + 0x8BC);
  if (7 < i_val2) {
    return;
  }
  if (((((u_val1 & 0x20) != 0) && (i_val2 != 6)) && (i_val2 != 7)) && (i_val2 != 4)) {
    *(int *)(handle + 0x8BC) = 4;
    goto LAB_080c7e92;
  }
  if ((u_val1 & 0x10) == 0) {
LAB_080c7e50:
    if ((u_val1 & 0x40) != 0) {
      p_int3 = (int *)(handle + 0x8BC);
      i_val2 = *p_int3;
      if (((i_val2 != 4) && (i_val2 != 5)) && (i_val2 != 6)) {
        i_val2 = 6;
        goto LAB_080c7e90;
      }
    }
    if ((u_val1 & 0x80) == 0) {
      return;
    }
    p_int3 = (int *)(handle + 0x8BC);
    i_val2 = *p_int3;
    if (i_val2 == 4) {
      return;
    }
    if (i_val2 == 5) {
      return;
    }
    if (i_val2 == 7) {
      return;
    }
    i_val2 = 7;
  }
  else {
    p_int3 = (int *)(handle + 0x8BC);
    i_val2 = *p_int3;
    if (((i_val2 == 6) || (i_val2 == 7)) || (i_val2 == 5)) goto LAB_080c7e50;
    i_val2 = 5;
  }
LAB_080c7e90:
  *p_int3 = i_val2;
LAB_080c7e92:
  *(undefined1 *)(handle + 0x8C4) = 1;
  return;
}

// =============================================================================
// Function: M4A_Routine_080C7EA8 @ 0x080C7EA8
// =============================================================================
undefined8 M4A_Routine_080C7EA8(undefined4 *handle,undefined4 channel)

{
  undefined4 u_val1;
  
  *handle = gRomData_080E8560;
  u_val1 = Dispatcher_Routine_080005D4(0x98C);
  u_val1 = M4A_Routine_080C0DCC(u_val1,channel);
  handle[1] = u_val1;
  return handle;
}

// =============================================================================
// Function: M4A_Routine_080C7ED0 @ 0x080C7ED0
// =============================================================================
undefined4 M4A_Routine_080C7ED0(undefined4 *handle,undefined4 channel)

{
  int i_val1;
  
  *handle = gRomData_080E8560;
  i_val1 = handle[1];
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 4) + 8));
  }
  SramProxy_VerifyBufferParity(handle,channel);
  return;
}

// =============================================================================
// Function: M4A_Routine_080C7F00 @ 0x080C7F00
// =============================================================================
void M4A_Routine_080C7F00(int handle)

{
  
  M4A_Routine_080C12B8(*(undefined4 *)(handle + 4));
  return;
}

// =============================================================================
// Function: M4A_Routine_080C7F1C @ 0x080C7F1C
// =============================================================================
undefined8 M4A_Routine_080C7F1C(undefined4 *handle,int channel)

{
  undefined4 facing_buffer [3];
  
  M4A_Routine_080C12C4(facing_buffer,*(undefined4 *)(channel + 4));
  *handle = facing_buffer[0];
  return handle;
}

// =============================================================================
// Function: M4A_Routine_080C7F58 @ 0x080C7F58
// =============================================================================
undefined8 M4A_Routine_080C7F58(int handle,undefined4 channel)

{
  int i_val1;
  undefined4 u_val2;
  undefined2 *p_uint3;
  undefined2 *p_uint4;
  undefined2 *p_uint5;
  int loop_i;
  int i_val7;
  undefined4 *p_uint8;
  undefined1 stack_buf_6c [4];
  undefined1 stack_buf_68 [4];
  int stack_val_64;
  int stack_val_60;
  undefined4 *puStack_5c;
  undefined1 *puStack_58;
  int stack_val_54;
  int stack_val_50;
  undefined2 *puStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  int stack_val_40;
  undefined2 *puStack_3c;
  undefined1 *puStack_38;
  int stack_val_34;
  int stack_val_30;
  undefined2 *puStack_2c;
  int *piStack_28;
  undefined1 *puStack_24;
  
  HW_Routine_08008444();
  *(undefined4 *)(handle + 4) = gRomData_080E8570;
  *(undefined4 *)(handle + 8) = channel;
  *(undefined2 *)(handle + 0xc) = 0;
  *(undefined4 *)(handle + 0x10) = 0;
  *(undefined4 *)(handle + 0x14) = 0xffffffff;
  HW_Routine_08008B54(handle + 0x18,1);
  *(undefined4 *)(handle + 0x1c) = 0;
  *(undefined4 *)(handle + 0x20) = 0;
  *(undefined4 *)(handle + 0x2a4) = 0;
  HW_Routine_0800835C(stack_buf_6c);
  HW_Routine_0800770C(stack_buf_68);
  Animal_Routine_08050CC0(handle + 0x348,0,0x1c,0,0,stack_buf_6c,stack_buf_68);
  HW_Routine_08007714(stack_buf_68,2);
  HW_Routine_08008364(stack_buf_6c,2);
  HW_Routine_08007874(handle + 0x354);
  u_val2 = HW_Routine_08007B54(handle + 0x354,2);
  *(undefined4 *)(handle + 0x358) = u_val2;
  HW_Routine_08007128(handle + 0x35c);
  u_val2 = HW_Routine_0800736C(handle + 0x35c);
  *(undefined4 *)(handle + 0x360) = u_val2;
  HW_Routine_08007874(handle + 0x364);
  u_val2 = HW_Routine_08007B54(handle + 0x364,2);
  *(undefined4 *)(handle + 0x368) = u_val2;
  HW_Routine_08007128(handle + 0x36c);
  u_val2 = HW_Routine_0800736C(handle + 0x36c);
  *(undefined4 *)(handle + 0x370) = u_val2;
  HW_Routine_08007874(handle + 0x374);
  u_val2 = HW_Routine_08007B54(handle + 0x374,1);
  *(undefined4 *)(handle + 0x378) = u_val2;
  HW_Routine_08007874(handle + 0x37c);
  u_val2 = HW_Routine_08007B54(handle + 0x37c,1);
  *(undefined4 *)(handle + 0x380) = u_val2;
  HW_Routine_08007128(handle + 900);
  u_val2 = HW_Routine_0800736C(handle + 900);
  *(undefined4 *)(handle + 0x388) = u_val2;
  HW_Routine_08007874(handle + 0x38c);
  u_val2 = HW_Routine_08007B54(handle + 0x38c,1);
  *(undefined4 *)(handle + 0x390) = u_val2;
  HW_Routine_08007874(handle + 0x394);
  u_val2 = HW_Routine_08007B54(handle + 0x394,1);
  *(undefined4 *)(handle + 0x398) = u_val2;
  HW_Routine_08007128(handle + 0x39c);
  u_val2 = HW_Routine_0800736C(handle + 0x39c);
  *(undefined4 *)(handle + 0x3a0) = u_val2;
  loop_i = handle + 0x3a4;
  i_val7 = 8;
  piStack_28 = &stack_val_64;
  do {
    HW_Routine_08007874(loop_i);
    *(undefined4 *)(loop_i + 4) = 0;
    loop_i = loop_i + 8;
    i_val7 = i_val7 + -1;
  } while (i_val7 != -1);
  loop_i = handle + 0x3ec;
  i_val7 = 8;
  stack_val_30 = handle + 0x568;
  p_uint3 = (undefined2 *)(0x57C + handle);
  puStack_58 = (undefined1 *)(handle + 0x598);
  stack_val_50 = handle + 0x5a0;
  p_uint5 = (undefined2 *)(0x5B4 + handle);
  puStack_44 = (undefined1 *)(handle + 0x5d0);
  stack_val_40 = handle + 0x5d8;
  puStack_3c = (undefined2 *)(handle + 0x5EC);
  puStack_38 = (undefined1 *)(handle + 0x608);
  stack_val_34 = handle + 0x610;
  puStack_2c = (undefined2 *)(handle + 0x624);
  puStack_24 = (undefined1 *)(handle + 0x640);
  puStack_5c = (undefined4 *)(handle + 0x648);
  stack_val_54 = handle + 0x64C;
  puStack_4c = (undefined2 *)(handle + 0x660);
  puStack_48 = (undefined1 *)(handle + 0x67C);
  do {
    HW_Routine_08007128(loop_i);
    *(undefined4 *)(loop_i + 4) = 0;
    i_val1 = 0x434;
    loop_i = loop_i + 8;
    i_val7 = i_val7 + -1;
  } while (i_val7 != -1);
  *(undefined2 *)(handle + 0x434) = 0;
  stack_val_64 = handle;
  VTable_Routine_080E542C(handle + i_val1 + 4,piStack_28);
  i_val7 = handle + 0x4D4;
  Animal_Routine_0805E6CC(i_val7,gRomGfx_08527094);
  stack_val_60 = handle + 0x504;
  Animal_Routine_0805E6CC(stack_val_60,gRomGfx_08728208);
  loop_i = 0x534 + handle;
  Animal_Routine_0805E6CC(loop_i,gRomGfx_087536E4);
  p_uint4 = (undefined2 *)(handle + 0x564);
  *p_uint4 = 0;
  p_uint4[1] = 0;
  Animal_Routine_0805E824(stack_val_30,i_val7,0,0x100);
  *p_uint3 = 0;
  p_uint3[1] = 0;
  p_uint3[2] = 0;
  p_uint3[3] = 0;
  p_uint3[4] = 0;
  *(undefined4 *)(p_uint3 + 6) = 0;
  *(undefined1 *)(p_uint3 + 8) = 0;
  *(undefined1 *)((int)p_uint3 + 0x11) = 0;
  *(undefined4 *)(p_uint3 + 10) = 0;
  *(undefined1 *)(p_uint3 + 0xc) = 0;
  *puStack_58 = 0;
  p_uint3 = (undefined2 *)(handle + 0x59C);
  *p_uint3 = 0;
  p_uint3[1] = 0;
  Animal_Routine_0805E824(stack_val_50,i_val7,1,0x100);
  *p_uint5 = 0;
  p_uint5[1] = 0;
  p_uint5[2] = 0;
  p_uint5[3] = 0;
  p_uint5[4] = 0;
  *(undefined4 *)(p_uint5 + 6) = 0;
  *(undefined1 *)(p_uint5 + 8) = 0;
  *(undefined1 *)((int)p_uint5 + 0x11) = 0;
  *(undefined4 *)(p_uint5 + 10) = 0;
  *(undefined1 *)(p_uint5 + 0xc) = 0;
  *puStack_44 = 0;
  p_uint3 = (undefined2 *)(handle + 0x5D4);
  *p_uint3 = 0;
  p_uint3[1] = 0;
  Animal_Routine_0805E824(stack_val_40,loop_i,0,0x100);
  *puStack_3c = 0;
  puStack_3c[1] = 0;
  puStack_3c[2] = 0;
  puStack_3c[3] = 0;
  puStack_3c[4] = 0;
  *(undefined4 *)(puStack_3c + 6) = 0;
  *(undefined1 *)(puStack_3c + 8) = 0;
  *(undefined1 *)((int)puStack_3c + 0x11) = 0;
  *(undefined4 *)(puStack_3c + 10) = 0;
  *(undefined1 *)(puStack_3c + 0xc) = 0;
  *puStack_38 = 0;
  p_uint3 = (undefined2 *)(handle + 0x60C);
  *p_uint3 = 0;
  p_uint3[1] = 0;
  Animal_Routine_0805E824(stack_val_34,loop_i,1,0x100);
  *puStack_2c = 0;
  puStack_2c[1] = 0;
  puStack_2c[2] = 0;
  puStack_2c[3] = 0;
  puStack_2c[4] = 0;
  *(undefined4 *)(puStack_2c + 6) = 0;
  *(undefined1 *)(puStack_2c + 8) = 0;
  *(undefined1 *)((int)puStack_2c + 0x11) = 0;
  *(undefined4 *)(puStack_2c + 10) = 0;
  *(undefined1 *)(puStack_2c + 0xc) = 0;
  *puStack_24 = 0;
  p_uint3 = (undefined2 *)(handle + 0x644);
  *p_uint3 = 0xc;
  *puStack_5c = 0x28;
  Animal_Routine_0805E824(stack_val_54,stack_val_60,0,0x100);
  *puStack_4c = 0;
  puStack_4c[1] = 0;
  puStack_4c[2] = 0;
  puStack_4c[3] = 0;
  puStack_4c[4] = 0;
  *(undefined4 *)(puStack_4c + 6) = 0;
  *(undefined1 *)(puStack_4c + 8) = 0;
  *(undefined1 *)((int)puStack_4c + 0x11) = 0;
  *(undefined4 *)(puStack_4c + 10) = 0;
  *(undefined1 *)(puStack_4c + 0xc) = 0;
  *puStack_48 = 1;
  *(undefined4 *)(p_uint3 + 0x1e) = 0;
  M4A_Routine_080CA770(handle + 0x684,handle);
  *(undefined1 *)(handle + 0x6a0) = 0;
  *(undefined1 *)(handle + 0x6a1) = 0;
  *(undefined1 *)(handle + 0x6a2) = 0;
  *(undefined1 *)(handle + 0x6a3) = 0;
  loop_i = 0;
  p_uint8 = (undefined4 *)(handle + 0x3a8);
  do {
    i_val7 = loop_i * 8 + handle + 0x3a4;
    HW_Routine_08007C28(i_val7,*p_uint8);
    u_val2 = HW_Routine_08007B54(i_val7,2);
    *p_uint8 = u_val2;
    i_val7 = loop_i * 8 + handle + 0x3ec;
    HW_Routine_080073E0(i_val7,p_uint8[0x12]);
    u_val2 = HW_Routine_0800736C(i_val7);
    p_uint8[0x12] = u_val2;
    p_uint8 = p_uint8 + 2;
    loop_i = loop_i + 1;
  } while (loop_i < 9);
  return handle;
}

// =============================================================================
// Function: M4A_Routine_080C8360 @ 0x080C8360
// =============================================================================
undefined4 M4A_Routine_080C8360(int handle,undefined4 channel)

{
  undefined4 u_val1;
  int vel_x;
  int vel_y;
  undefined2 *p_uint4;
  undefined2 *p_uint5;
  int i_val6;
  
  *(undefined4 *)(handle + 4) = gRomData_080E8570;
  p_uint4 = (undefined2 *)(handle + 0x434);
  Interrupt_SetCallback(0,*p_uint4);
  u_val1 = gRomData_080E5A28;
  *(undefined4 *)(handle + 0x534) = gRomData_080E5A28;
  vel_y = 0x504;
  *(undefined4 *)(handle + 0x504) = u_val1;
  *(undefined4 *)(handle + vel_y + -0x30) = u_val1;
  VTable_Routine_080E5478(handle + 0x438,2);
  if (handle != -0x3ec) {
    while ((undefined2 *)(handle + 0x3ec) != p_uint4) {
      p_uint5 = p_uint4 + -4;
      HW_Routine_080073E0(p_uint5,*(undefined4 *)(p_uint4 + -2));
      HW_Routine_08007184(p_uint5,2);
      p_uint4 = p_uint5;
    }
  }
  vel_y = handle + 0x24;
  if ((handle != -0x3a4) && (handle + 0x3a4 != handle + 0x3ec)) {
    vel_x = handle + 0x3ec;
    do {
      i_val6 = vel_x + -8;
      HW_Routine_08007C28(i_val6,*(undefined4 *)(vel_x + -4));
      HW_Routine_080079E8(i_val6,2);
      vel_x = i_val6;
    } while (handle + 0x3a4 != i_val6);
  }
  HW_Routine_080073E0(handle + 0x39c,*(undefined4 *)(handle + 0x3a0));
  HW_Routine_08007184(handle + 0x39c,2);
  HW_Routine_08007C28(handle + 0x394,*(undefined4 *)(handle + 0x398));
  HW_Routine_080079E8(handle + 0x394,2);
  HW_Routine_08007C28(handle + 0x38c,*(undefined4 *)(handle + 0x390));
  HW_Routine_080079E8(handle + 0x38c,2);
  HW_Routine_080073E0(handle + 900,*(undefined4 *)(handle + 0x388));
  HW_Routine_08007184(handle + 900,2);
  HW_Routine_08007C28(handle + 0x37c,*(undefined4 *)(handle + 0x380));
  HW_Routine_080079E8(handle + 0x37c,2);
  HW_Routine_08007C28(handle + 0x374,*(undefined4 *)(handle + 0x378));
  HW_Routine_080079E8(handle + 0x374,2);
  HW_Routine_080073E0(handle + 0x36c,*(undefined4 *)(handle + 0x370));
  HW_Routine_08007184(handle + 0x36c,2);
  HW_Routine_08007C28(handle + 0x364,*(undefined4 *)(handle + 0x368));
  HW_Routine_080079E8(handle + 0x364,2);
  HW_Routine_080073E0(handle + 0x35c,*(undefined4 *)(handle + 0x360));
  HW_Routine_08007184(handle + 0x35c,2);
  HW_Routine_08007C28(handle + 0x354,*(undefined4 *)(handle + 0x358));
  HW_Routine_080079E8(handle + 0x354,2);
  Animal_Routine_08050D0C(handle + 0x348,2);
  for (; vel_y != handle + *(int *)(handle + 0x20) * 0x10 + 0x24; vel_y = vel_y + 0x10) {
  }
  vel_y = *(int *)(handle + 0x1c);
  if (vel_y != 0) {
    Animal_Routine_08075DEC(vel_y + 0x28,2);
    for (vel_x = *(int *)(vel_y + 0x18); vel_x != *(int *)(vel_y + 0x1c); vel_x = vel_x + 0x40) {
    }
    if (*(int *)(vel_y + 0x18) != 0) {
      cpp_operator_delete();
    }
    Dispatcher_Routine_08000608(vel_y);
  }
  HW_Routine_080086BC(handle,channel);
  return;
}

// =============================================================================
// Function: M4A_Routine_080C8550 @ 0x080C8550
// =============================================================================
undefined4 M4A_Routine_080C8550(int handle)

{
  undefined4 u_val1;
  
  u_val1 = 0x03FF03FF;
  HW_Routine_08008EB8(0x03FF03FF,0x0600FF8A,0x28);
  HW_Routine_08008EB8(u_val1,0x0600FFCA,0x28);
  ScriptEngine_Routine_0804EDB4(*(undefined4 *)(*(int *)(handle + 8) + 0x1AA8),0x0600FFB2,0xa0,0,0x20);
  return;
}

// =============================================================================
// Function: M4A_Routine_080C85A0 @ 0x080C85A0
// =============================================================================
undefined4 M4A_Routine_080C85A0(int handle)

{
  undefined4 *p_uint1;
  undefined2 u_val2;
  int i_val3;
  undefined2 *p_uint4;
  int *p_int5;
  undefined4 u_val6;
  int *p_int7;
  undefined4 *p_uint8;
  int vel_x;
  undefined4 *p_uint10;
  undefined4 *p_uint11;
  undefined4 u_val12;
  undefined4 *p_uint13;
  undefined4 u_val14;
  int loop_i;
  undefined1 stack_buf_150 [64];
  undefined4 stack_buf_110 [4];
  undefined1 stack_buf_100 [16];
  int stack_ints_f0 [4];
  undefined1 stack_buf_e0 [16];
  int stack_ints_d0 [4];
  undefined1 stack_buf_c0 [16];
  int stack_ints_b0 [4];
  undefined4 stack_val_a0;
  undefined4 stack_val_9c;
  undefined4 stack_val_98;
  int stack_val_94;
  int stack_val_90;
  int stack_val_8c;
  int stack_val_88;
  int stack_val_84;
  int stack_val_80;
  int stack_val_7c;
  int stack_val_78;
  int stack_val_74;
  int stack_val_70;
  int stack_val_6c;
  int stack_val_68;
  undefined4 *puStack_64;
  undefined1 *puStack_60;
  int *piStack_5c;
  undefined1 *puStack_58;
  int *piStack_54;
  undefined1 *puStack_50;
  int *piStack_4c;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  undefined1 *puStack_34;
  int *piStack_30;
  int *piStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  i_val3 = HW_GetSpriteAttr1Offset();
  *(undefined2 *)(i_val3 + 8) = 0x1c40;
  i_val3 = HW_GetSpriteAttr1Offset(handle);
  *(short *)(i_val3 + 10) = (short)0x1D42;
  i_val3 = HW_GetSpriteAttr1Offset(handle);
  *(short *)(i_val3 + 0xc) = (short)0x3E41;
  i_val3 = HW_GetSpriteAttr1Offset(handle);
  *(undefined2 *)(i_val3 + 0xe) = 8000;
  u_val12 = 0x0600E800;
  HW_Routine_08008EB8(0xffffffff,0x0600E800,0x800);
  u_val14 = 0x0600F000;
  HW_Routine_08008EB8(0xffffffff,0x0600F000,0x800);
  HW_Routine_08008EB8(0xffffffff,0x0600F800,0x800);
  HW_Routine_08008EB8(0,0x6000000,0x8000);
  p_uint4 = (undefined2 *)HW_GetSpriteAttr1Offset(handle);
  *p_uint4 = 0x1e40;
  HW_Routine_08008E64(*gRomData_080F9F70,0x6000000,*gRomData_080F9F74);
  HW_Routine_08008EB8(0x00030003,u_val14,0x800);
  Animal_Routine_08051320(u_val14,0,0,0x1e,3,0,0);
  HW_Routine_08008E64(*gRomData_080F9F78,0x5000000,0x20);
  HW_Routine_08008EB8(0x03FF03FF,u_val12,0x800);
  i_val3 = HW_GetSpriteAttr1Offset(handle);
  *(short *)(i_val3 + 0x1e) = (short)0x1EB;
  loop_i = 0;
  puStack_34 = stack_buf_150;
  puStack_48 = &stack_val_9c;
  puStack_44 = &stack_val_98;
  puStack_64 = stack_buf_110;
  puStack_60 = stack_buf_100;
  piStack_5c = stack_ints_f0;
  puStack_58 = stack_buf_e0;
  piStack_54 = stack_ints_d0;
  puStack_50 = stack_buf_c0;
  piStack_4c = stack_ints_b0;
  p_uint4 = gRomData_081177F6;
  i_val3 = 0x06001400;
  do {
    stack_val_a0 = 0x20001;
    ScriptEngine_Routine_0804E5AC(0x20001,stack_buf_150,0,0,*p_uint4,0,1);
    HW_Routine_08008E64(puStack_34,i_val3,0x40);
    i_val3 = i_val3 + 0x40;
    p_uint4 = p_uint4 + 1;
    loop_i = loop_i + 1;
  } while (loop_i < 10);
  Animal_Routine_08050D5C(handle + 0x348);
  stack_val_9c = CONCAT22(stack_val_9c._2_2_,2);
  *(undefined2 *)((int)puStack_48 + 2) = 2;
  i_val3 = handle + 0x454;
  ScriptEngine_Routine_0804E7A0(stack_val_9c,i_val3,0);
  stack_val_98 = CONCAT22(stack_val_98._2_2_,2);
  *(undefined2 *)((int)puStack_44 + 2) = 2;
  ScriptEngine_Routine_0804E958(stack_val_98,i_val3,0,0,gRomData_0811780C,0,1);
  piStack_2c = (int *)HW_GetSpriteAttr0Offset(handle);
  HW_Routine_08008F0C(stack_buf_110,i_val3,0x06000400,0x80);
  p_uint1 = puStack_64;
  p_uint8 = (undefined4 *)piStack_2c[1];
  if (p_uint8 == (undefined4 *)piStack_2c[3]) {
    stack_val_90 = 1;
    stack_val_94 = (int)p_uint8 - *piStack_2c >> 4;
    p_int5 = &stack_val_94;
    if (stack_val_94 == 0) {
      p_int5 = &stack_val_90;
    }
    if (stack_val_94 + *p_int5 == 0) {
      puStack_28 = (undefined4 *)0x0;
      i_val3 = 0;
    }
    else {
      i_val3 = (stack_val_94 + *p_int5) * 0x10;
      puStack_28 = (undefined4 *)runtime_malloc_aligned(i_val3);
      if (puStack_28 == (undefined4 *)0x0) {
        puStack_28 = (undefined4 *)VTable_Routine_080D3BC0(i_val3);
      }
    }
    piStack_30 = (int *)(handle + 0x1c);
    piStack_38 = (int *)(handle + 0x650);
    piStack_40 = (int *)(handle + 0x56C);
    piStack_3c = (int *)(handle + 0x5DC);
    p_uint10 = puStack_28;
    for (p_uint11 = (undefined4 *)*piStack_2c; p_uint11 != p_uint8; p_uint11 = p_uint11 + 4) {
      if (p_uint10 != (undefined4 *)0x0) {
        u_val12 = p_uint11[1];
        u_val14 = p_uint11[2];
        *p_uint10 = *p_uint11;
        p_uint10[1] = u_val12;
        p_uint10[2] = u_val14;
        p_uint10[3] = p_uint11[3];
      }
      p_uint10 = p_uint10 + 4;
    }
    loop_i = stack_val_90;
    if (stack_val_90 == 1) {
      if (p_uint10 != (undefined4 *)0x0) {
        u_val12 = p_uint1[1];
        u_val14 = p_uint1[2];
        *p_uint10 = *p_uint1;
        p_uint10[1] = u_val12;
        p_uint10[2] = u_val14;
        p_uint10[3] = p_uint1[3];
      }
      p_uint10 = p_uint10 + 4;
    }
    else {
      for (; loop_i != 0; loop_i = loop_i + -1) {
        if (p_uint10 != (undefined4 *)0x0) {
          u_val12 = p_uint1[1];
          u_val14 = p_uint1[2];
          *p_uint10 = *p_uint1;
          p_uint10[1] = u_val12;
          p_uint10[2] = u_val14;
          p_uint10[3] = p_uint1[3];
        }
        p_uint10 = p_uint10 + 4;
      }
    }
    for (loop_i = *piStack_2c; loop_i != piStack_2c[1]; loop_i = loop_i + 0x10) {
    }
    if (*piStack_2c != 0) {
      cpp_operator_delete();
    }
    *piStack_2c = (int)puStack_28;
    piStack_2c[1] = (int)p_uint10;
    piStack_2c[3] = (int)puStack_28 + i_val3;
  }
  else {
    if (p_uint8 != (undefined4 *)0x0) {
      u_val12 = puStack_64[1];
      u_val14 = puStack_64[2];
      *p_uint8 = *puStack_64;
      p_uint8[1] = u_val12;
      p_uint8[2] = u_val14;
      p_uint8[3] = puStack_64[3];
    }
    piStack_2c[1] = piStack_2c[1] + 0x10;
    piStack_30 = (int *)(handle + 0x1c);
    piStack_38 = (int *)(handle + 0x650);
    piStack_40 = (int *)(handle + 0x56C);
    piStack_3c = (int *)(handle + 0x5DC);
  }
  ScriptEngine_Routine_0804E9F4(0x0600FFB4,0x20,2,2,0,0x20);
  M4A_Routine_080C8550(handle);
  p_int5 = (int *)HW_GetSpriteAttr0Offset(handle);
  i_val3 = HW_Routine_08007D4C(handle + 0x354,*(undefined4 *)(handle + 0x358));
  piStack_2c = p_int5;
  HW_Routine_08008F0C(stack_buf_110,gRomGfx_08752F8C,i_val3 * 0x20 + 0x06010000,0x80);
  p_uint1 = puStack_64;
  p_uint8 = (undefined4 *)piStack_2c[1];
  if (p_uint8 == (undefined4 *)piStack_2c[3]) {
    stack_val_88 = 1;
    stack_val_8c = (int)p_uint8 - *piStack_2c >> 4;
    p_int5 = &stack_val_8c;
    if (stack_val_8c == 0) {
      p_int5 = &stack_val_88;
    }
    if (stack_val_8c + *p_int5 == 0) {
      p_uint11 = (undefined4 *)0x0;
      i_val3 = 0;
    }
    else {
      i_val3 = (stack_val_8c + *p_int5) * 0x10;
      p_uint11 = (undefined4 *)runtime_malloc_aligned(i_val3);
      if (p_uint11 == (undefined4 *)0x0) {
        p_uint11 = (undefined4 *)VTable_Routine_080D3BC0(i_val3);
      }
    }
    p_uint13 = p_uint11;
    for (p_uint10 = (undefined4 *)*piStack_2c; p_uint10 != p_uint8; p_uint10 = p_uint10 + 4) {
      if (p_uint13 != (undefined4 *)0x0) {
        u_val12 = p_uint10[1];
        u_val14 = p_uint10[2];
        *p_uint13 = *p_uint10;
        p_uint13[1] = u_val12;
        p_uint13[2] = u_val14;
        p_uint13[3] = p_uint10[3];
      }
      p_uint13 = p_uint13 + 4;
    }
    loop_i = stack_val_88;
    if (stack_val_88 == 1) {
      if (p_uint13 != (undefined4 *)0x0) {
        u_val12 = p_uint1[1];
        u_val14 = p_uint1[2];
        *p_uint13 = *p_uint1;
        p_uint13[1] = u_val12;
        p_uint13[2] = u_val14;
        p_uint13[3] = p_uint1[3];
      }
      p_uint13 = p_uint13 + 4;
    }
    else {
      for (; loop_i != 0; loop_i = loop_i + -1) {
        if (p_uint13 != (undefined4 *)0x0) {
          u_val12 = p_uint1[1];
          u_val14 = p_uint1[2];
          *p_uint13 = *p_uint1;
          p_uint13[1] = u_val12;
          p_uint13[2] = u_val14;
          p_uint13[3] = p_uint1[3];
        }
        p_uint13 = p_uint13 + 4;
      }
    }
    for (loop_i = *piStack_2c; loop_i != piStack_2c[1]; loop_i = loop_i + 0x10) {
    }
    puStack_28 = p_uint11;
    if (*piStack_2c != 0) {
      cpp_operator_delete();
    }
    *piStack_2c = (int)puStack_28;
    piStack_2c[1] = (int)p_uint13;
    piStack_2c[3] = (int)puStack_28 + i_val3;
  }
  else {
    if (p_uint8 != (undefined4 *)0x0) {
      u_val12 = puStack_64[1];
      u_val14 = puStack_64[2];
      *p_uint8 = *puStack_64;
      p_uint8[1] = u_val12;
      p_uint8[2] = u_val14;
      p_uint8[3] = puStack_64[3];
    }
    piStack_2c[1] = piStack_2c[1] + 0x10;
  }
  p_int5 = (int *)HW_GetSpriteAttr0Offset(handle);
  i_val3 = HW_Routine_080074C0(handle + 0x35c,*(undefined4 *)(handle + 0x360));
  piStack_2c = p_int5;
  HW_Routine_08008F0C(stack_buf_110,gRomGfx_0875300C,i_val3 * 0x20 + 0x05000200,0x20);
  p_uint1 = puStack_64;
  p_uint8 = (undefined4 *)piStack_2c[1];
  if (p_uint8 == (undefined4 *)piStack_2c[3]) {
    stack_val_80 = 1;
    stack_val_84 = (int)p_uint8 - *piStack_2c >> 4;
    p_int5 = &stack_val_84;
    if (stack_val_84 == 0) {
      p_int5 = &stack_val_80;
    }
    if (stack_val_84 + *p_int5 == 0) {
      p_uint11 = (undefined4 *)0x0;
      i_val3 = 0;
    }
    else {
      i_val3 = (stack_val_84 + *p_int5) * 0x10;
      p_uint11 = (undefined4 *)runtime_malloc_aligned(i_val3);
      if (p_uint11 == (undefined4 *)0x0) {
        p_uint11 = (undefined4 *)VTable_Routine_080D3BC0(i_val3);
      }
    }
    p_uint13 = p_uint11;
    for (p_uint10 = (undefined4 *)*piStack_2c; p_uint10 != p_uint8; p_uint10 = p_uint10 + 4) {
      if (p_uint13 != (undefined4 *)0x0) {
        u_val12 = p_uint10[1];
        u_val14 = p_uint10[2];
        *p_uint13 = *p_uint10;
        p_uint13[1] = u_val12;
        p_uint13[2] = u_val14;
        p_uint13[3] = p_uint10[3];
      }
      p_uint13 = p_uint13 + 4;
    }
    loop_i = stack_val_80;
    if (stack_val_80 == 1) {
      if (p_uint13 != (undefined4 *)0x0) {
        u_val12 = p_uint1[1];
        u_val14 = p_uint1[2];
        *p_uint13 = *p_uint1;
        p_uint13[1] = u_val12;
        p_uint13[2] = u_val14;
        p_uint13[3] = p_uint1[3];
      }
      p_uint13 = p_uint13 + 4;
    }
    else {
      for (; loop_i != 0; loop_i = loop_i + -1) {
        if (p_uint13 != (undefined4 *)0x0) {
          u_val12 = p_uint1[1];
          u_val14 = p_uint1[2];
          *p_uint13 = *p_uint1;
          p_uint13[1] = u_val12;
          p_uint13[2] = u_val14;
          p_uint13[3] = p_uint1[3];
        }
        p_uint13 = p_uint13 + 4;
      }
    }
    for (loop_i = *piStack_2c; loop_i != piStack_2c[1]; loop_i = loop_i + 0x10) {
    }
    puStack_28 = p_uint11;
    if (*piStack_2c != 0) {
      cpp_operator_delete();
    }
    *piStack_2c = (int)puStack_28;
    piStack_2c[1] = (int)p_uint13;
    piStack_2c[3] = (int)puStack_28 + i_val3;
  }
  else {
    if (p_uint8 != (undefined4 *)0x0) {
      u_val12 = puStack_64[1];
      u_val14 = puStack_64[2];
      *p_uint8 = *puStack_64;
      p_uint8[1] = u_val12;
      p_uint8[2] = u_val14;
      p_uint8[3] = puStack_64[3];
    }
    piStack_2c[1] = piStack_2c[1] + 0x10;
  }
  u_val12 = Dispatcher_Routine_080005D4(0x4c);
  u_val14 = HW_Routine_0800894C(handle);
  u_val6 = HW_GetSpriteAttr1Offset(handle);
  i_val3 = Animal_Routine_08075B00(u_val12,100,u_val14,u_val6,0x0600E800);
  p_int5 = piStack_30;
  loop_i = *(int *)(handle + 0x1c);
  if ((i_val3 != loop_i) && (loop_i != 0)) {
    Animal_Routine_08075DEC(loop_i + 0x28,2);
    for (vel_x = *(int *)(loop_i + 0x18); vel_x != *(int *)(loop_i + 0x1c); vel_x = vel_x + 0x40) {
    }
    if (*(int *)(loop_i + 0x18) != 0) {
      cpp_operator_delete();
    }
    Dispatcher_Routine_08000608(loop_i);
  }
  *p_int5 = i_val3;
  i_val3 = HW_GetSpriteAttr1Offset(handle);
  *(ushort *)(i_val3 + 4) = *(ushort *)(i_val3 + 4) | 0x20;
  i_val3 = HW_GetSpriteAttr1Offset(handle);
  *(ushort *)(i_val3 + 4) = *(ushort *)(i_val3 + 4) | 0x1700;
  Interrupt_SetMasterEnable(4);
  u_val2 = Interrupt_SetCallback(0,4);
  *(undefined2 *)(handle + 0x434) = u_val2;
  *(undefined2 *)(handle + 0x564) = 0xe8;
  *(undefined2 *)(handle + 0x566) = 0x18;
  *(undefined2 *)(handle + 0x59C) = 0xe8;
  *(undefined2 *)(handle + 0x59E) = 0x60;
  p_int5 = *(int **)(handle + 0x64C);
  _call_via_r3(puStack_60,p_int5,
                  *(undefined2 *)
                   (*piStack_38 + (uint)*(ushort *)((undefined4 *)(handle + 0x64C) + 3) * 4
                   ),*(undefined4 *)(*p_int5 + 0x10));
  p_int5 = (int *)HW_GetSpriteAttr0Offset(handle);
  i_val3 = stack_ints_f0[0];
  loop_i = HW_Routine_080074C0(handle + 0x36c,*(undefined4 *)(handle + 0x370));
  u_val2 = 0;
  if (stack_ints_f0[0] != 0) {
    u_val2 = (undefined2)piStack_5c[1];
  }
  piStack_2c = p_int5;
  HW_Routine_08008F0C(stack_buf_110,i_val3,loop_i * 0x20 + 0x05000200,u_val2);
  p_uint1 = puStack_64;
  p_uint8 = (undefined4 *)p_int5[1];
  if (p_uint8 == (undefined4 *)p_int5[3]) {
    stack_val_78 = 1;
    stack_val_7c = (int)p_uint8 - *piStack_2c >> 4;
    p_int5 = &stack_val_7c;
    if (stack_val_7c == 0) {
      p_int5 = &stack_val_78;
    }
    if (stack_val_7c + *p_int5 == 0) {
      p_uint11 = (undefined4 *)0x0;
      i_val3 = 0;
    }
    else {
      i_val3 = (stack_val_7c + *p_int5) * 0x10;
      p_uint11 = (undefined4 *)runtime_malloc_aligned(i_val3);
      if (p_uint11 == (undefined4 *)0x0) {
        p_uint11 = (undefined4 *)VTable_Routine_080D3BC0(i_val3);
      }
    }
    p_uint13 = p_uint11;
    for (p_uint10 = (undefined4 *)*piStack_2c; p_uint10 != p_uint8; p_uint10 = p_uint10 + 4) {
      if (p_uint13 != (undefined4 *)0x0) {
        u_val12 = p_uint10[1];
        u_val14 = p_uint10[2];
        *p_uint13 = *p_uint10;
        p_uint13[1] = u_val12;
        p_uint13[2] = u_val14;
        p_uint13[3] = p_uint10[3];
      }
      p_uint13 = p_uint13 + 4;
    }
    loop_i = stack_val_78;
    if (stack_val_78 == 1) {
      if (p_uint13 != (undefined4 *)0x0) {
        u_val12 = p_uint1[1];
        u_val14 = p_uint1[2];
        *p_uint13 = *p_uint1;
        p_uint13[1] = u_val12;
        p_uint13[2] = u_val14;
        p_uint13[3] = p_uint1[3];
      }
      p_uint13 = p_uint13 + 4;
    }
    else {
      for (; loop_i != 0; loop_i = loop_i + -1) {
        if (p_uint13 != (undefined4 *)0x0) {
          u_val12 = p_uint1[1];
          u_val14 = p_uint1[2];
          *p_uint13 = *p_uint1;
          p_uint13[1] = u_val12;
          p_uint13[2] = u_val14;
          p_uint13[3] = p_uint1[3];
        }
        p_uint13 = p_uint13 + 4;
      }
    }
    for (loop_i = *piStack_2c; loop_i != piStack_2c[1]; loop_i = loop_i + 0x10) {
    }
    puStack_28 = p_uint11;
    if (*piStack_2c != 0) {
      cpp_operator_delete();
    }
    *piStack_2c = (int)puStack_28;
    piStack_2c[1] = (int)p_uint13;
    piStack_2c[3] = (int)puStack_28 + i_val3;
  }
  else {
    if (p_uint8 != (undefined4 *)0x0) {
      u_val12 = puStack_64[1];
      u_val14 = puStack_64[2];
      *p_uint8 = *puStack_64;
      p_uint8[1] = u_val12;
      p_uint8[2] = u_val14;
      p_uint8[3] = puStack_64[3];
    }
    piStack_2c[1] = piStack_2c[1] + 0x10;
  }
  _call_via_r3(puStack_58,*(int **)(handle + 0x568),
                  *(undefined2 *)(*piStack_40 + (uint)*(ushort *)(handle + 0x574) * 4),
                  *(undefined4 *)(**(int **)(handle + 0x568) + 0x10));
  p_int7 = (int *)HW_GetSpriteAttr0Offset(handle);
  p_int5 = piStack_54;
  loop_i = *piStack_54;
  i_val3 = HW_Routine_080074C0(handle + 900,*(undefined4 *)(handle + 0x388));
  u_val2 = 0;
  if (*p_int5 != 0) {
    u_val2 = (undefined2)p_int5[1];
  }
  piStack_2c = p_int7;
  HW_Routine_08008F0C(stack_buf_110,loop_i,i_val3 * 0x20 + 0x05000200,u_val2);
  p_uint1 = puStack_64;
  p_uint8 = (undefined4 *)piStack_2c[1];
  if (p_uint8 == (undefined4 *)piStack_2c[3]) {
    stack_val_70 = 1;
    stack_val_74 = (int)p_uint8 - *piStack_2c >> 4;
    p_int5 = &stack_val_74;
    if (stack_val_74 == 0) {
      p_int5 = &stack_val_70;
    }
    if (stack_val_74 + *p_int5 == 0) {
      p_uint11 = (undefined4 *)0x0;
      i_val3 = 0;
    }
    else {
      i_val3 = (stack_val_74 + *p_int5) * 0x10;
      p_uint11 = (undefined4 *)runtime_malloc_aligned(i_val3);
      if (p_uint11 == (undefined4 *)0x0) {
        p_uint11 = (undefined4 *)VTable_Routine_080D3BC0(i_val3);
      }
    }
    p_uint13 = p_uint11;
    for (p_uint10 = (undefined4 *)*piStack_2c; p_uint10 != p_uint8; p_uint10 = p_uint10 + 4) {
      if (p_uint13 != (undefined4 *)0x0) {
        u_val12 = p_uint10[1];
        u_val14 = p_uint10[2];
        *p_uint13 = *p_uint10;
        p_uint13[1] = u_val12;
        p_uint13[2] = u_val14;
        p_uint13[3] = p_uint10[3];
      }
      p_uint13 = p_uint13 + 4;
    }
    loop_i = stack_val_70;
    if (stack_val_70 == 1) {
      if (p_uint13 != (undefined4 *)0x0) {
        u_val12 = p_uint1[1];
        u_val14 = p_uint1[2];
        *p_uint13 = *p_uint1;
        p_uint13[1] = u_val12;
        p_uint13[2] = u_val14;
        p_uint13[3] = p_uint1[3];
      }
      p_uint13 = p_uint13 + 4;
    }
    else {
      for (; loop_i != 0; loop_i = loop_i + -1) {
        if (p_uint13 != (undefined4 *)0x0) {
          u_val12 = p_uint1[1];
          u_val14 = p_uint1[2];
          *p_uint13 = *p_uint1;
          p_uint13[1] = u_val12;
          p_uint13[2] = u_val14;
          p_uint13[3] = p_uint1[3];
        }
        p_uint13 = p_uint13 + 4;
      }
    }
    for (loop_i = *piStack_2c; loop_i != piStack_2c[1]; loop_i = loop_i + 0x10) {
    }
    puStack_28 = p_uint11;
    if (*piStack_2c != 0) {
      cpp_operator_delete();
    }
    *piStack_2c = (int)puStack_28;
    piStack_2c[1] = (int)p_uint13;
    piStack_2c[3] = (int)puStack_28 + i_val3;
  }
  else {
    if (p_uint8 != (undefined4 *)0x0) {
      u_val12 = puStack_64[1];
      u_val14 = puStack_64[2];
      *p_uint8 = *puStack_64;
      p_uint8[1] = u_val12;
      p_uint8[2] = u_val14;
      p_uint8[3] = puStack_64[3];
    }
    piStack_2c[1] = piStack_2c[1] + 0x10;
  }
  _call_via_r3(puStack_50,*(int **)(handle + 0x5d8),
                  *(undefined2 *)(*piStack_3c + (uint)*(ushort *)(handle + 0x5e4) * 4),
                  *(undefined4 *)(**(int **)(handle + 0x5d8) + 0x10));
  p_int7 = (int *)HW_GetSpriteAttr0Offset(handle);
  p_int5 = piStack_4c;
  loop_i = *piStack_4c;
  i_val3 = HW_Routine_080074C0(handle + 0x39c,*(undefined4 *)(handle + 0x3a0));
  u_val2 = 0;
  if (*p_int5 != 0) {
    u_val2 = (undefined2)p_int5[1];
  }
  HW_Routine_08008F0C(stack_buf_110,loop_i,i_val3 * 0x20 + 0x05000200,u_val2);
  p_uint1 = puStack_64;
  puStack_24 = (undefined4 *)p_int7[1];
  if (puStack_24 == (undefined4 *)p_int7[3]) {
    stack_val_68 = 1;
    stack_val_6c = (int)puStack_24 - *p_int7 >> 4;
    p_int5 = &stack_val_6c;
    if (stack_val_6c == 0) {
      p_int5 = &stack_val_68;
    }
    if (stack_val_6c + *p_int5 == 0) {
      p_uint8 = (undefined4 *)0x0;
      i_val3 = 0;
    }
    else {
      i_val3 = (stack_val_6c + *p_int5) * 0x10;
      p_uint8 = (undefined4 *)runtime_malloc_aligned(i_val3);
      if (p_uint8 == (undefined4 *)0x0) {
        p_uint8 = (undefined4 *)VTable_Routine_080D3BC0(i_val3);
      }
    }
    p_uint10 = p_uint8;
    for (p_uint11 = (undefined4 *)*p_int7; p_uint11 != puStack_24; p_uint11 = p_uint11 + 4) {
      if (p_uint10 != (undefined4 *)0x0) {
        u_val12 = p_uint11[1];
        u_val14 = p_uint11[2];
        *p_uint10 = *p_uint11;
        p_uint10[1] = u_val12;
        p_uint10[2] = u_val14;
        p_uint10[3] = p_uint11[3];
      }
      p_uint10 = p_uint10 + 4;
    }
    loop_i = stack_val_68;
    if (stack_val_68 == 1) {
      if (p_uint10 != (undefined4 *)0x0) {
        u_val12 = p_uint1[1];
        u_val14 = p_uint1[2];
        *p_uint10 = *p_uint1;
        p_uint10[1] = u_val12;
        p_uint10[2] = u_val14;
        p_uint10[3] = p_uint1[3];
      }
      p_uint10 = p_uint10 + 4;
    }
    else {
      for (; loop_i != 0; loop_i = loop_i + -1) {
        if (p_uint10 != (undefined4 *)0x0) {
          u_val12 = p_uint1[1];
          u_val14 = p_uint1[2];
          *p_uint10 = *p_uint1;
          p_uint10[1] = u_val12;
          p_uint10[2] = u_val14;
          p_uint10[3] = p_uint1[3];
        }
        p_uint10 = p_uint10 + 4;
      }
    }
    for (loop_i = *p_int7; loop_i != p_int7[1]; loop_i = loop_i + 0x10) {
    }
    puStack_28 = p_uint8;
    if (*p_int7 != 0) {
      cpp_operator_delete();
    }
    *p_int7 = (int)puStack_28;
    p_int7[1] = (int)p_uint10;
    p_int7[3] = (int)puStack_28 + i_val3;
  }
  else {
    if (puStack_24 != (undefined4 *)0x0) {
      u_val12 = puStack_64[1];
      u_val14 = puStack_64[2];
      *puStack_24 = *puStack_64;
      puStack_24[1] = u_val12;
      puStack_24[2] = u_val14;
      puStack_24[3] = puStack_64[3];
    }
    p_int7[1] = p_int7[1] + 0x10;
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080C9020 @ 0x080C9020
// =============================================================================
undefined4 M4A_Routine_080C9020(int handle,int channel)

{
  bool b_flag1;
  char c_char2;
  short s_val3;
  uint u_val4;
  int i_val5;
  uint u_val6;
  char *p_char7;
  int *p_int8;
  uint u_val9;
  
  u_val9 = 0x28;
  if ((channel != 1) && (channel != 0)) {
    if (channel == 2) {
      u_val9 = 0x38;
    }
    else if (channel == 3) {
      u_val9 = 0x48;
    }
    else {
      u_val9 = 0x58;
    }
  }
  p_char7 = (char *)(handle + 0x6A1);
  if ((*p_char7 == '\0') || (c_char2 = '\0', *(char *)(handle + 0x6a0) != '\0')) {
    u_val4 = HW_Routine_080088CC(handle);
    if ((u_val4 & 1) != 0) {
      p_char7 = (char *)(handle + 0x6a0);
      c_char2 = '\x01';
      goto LAB_080c906c;
    }
  }
  else {
LAB_080c906c:
    *p_char7 = c_char2;
  }
  p_char7 = (char *)(handle + 0x6A3);
  if ((*p_char7 == '\0') || (c_char2 = '\0', *(char *)(handle + 0x6A3 + -1) != '\0')) {
    u_val4 = HW_Routine_080088CC(handle);
    if ((u_val4 & 2) != 0) {
      p_char7 = (char *)(handle + 0x6A2);
      c_char2 = '\x01';
      goto LAB_080c9096;
    }
  }
  else {
LAB_080c9096:
    *p_char7 = c_char2;
  }
  u_val4 = HW_Routine_080088C4(handle);
  u_val4 = u_val4 & 0xffff;
  p_int8 = (int *)(handle + 0x680);
  if (*p_int8 != 0) {
    if (*p_int8 < 1) {
      *(short *)(handle + 0xc) = *(short *)(handle + 0xc) + -4;
      i_val5 = *p_int8 + 1;
    }
    else {
      *(short *)(handle + 0xc) = *(short *)(handle + 0xc) + 4;
      i_val5 = *p_int8 + -1;
    }
    *p_int8 = i_val5;
    goto LAB_080c9262;
  }
  b_flag1 = false;
  u_val6 = HW_Routine_080088D4(handle);
  if (((u_val6 & 0x40) != 0) && ((0x3BF & u_val4) == 0)) {
    b_flag1 = true;
  }
  if (b_flag1) {
    if (*(char *)(handle + 0x6a0) != '\0') {
      *(undefined1 *)(handle + 0x6A1) = 1;
      *(char *)(handle + 0x6a0) = '\0';
      return;
    }
    *(undefined1 *)(handle + 0x6A1) = 0;
    p_char7 = (char *)(handle + 0x6A2);
    if (*p_char7 != '\0') {
      *(undefined1 *)(handle + 0x6A3) = 1;
      *p_char7 = '\0';
      return;
    }
    *(undefined1 *)(handle + 0x6A3) = 0;
    i_val5 = *(int *)(handle + 0x648);
    if (i_val5 < 0x29) {
      s_val3 = 0;
      if (*(short *)(handle + 0xc) < 1) {
LAB_080c9244:
        *(short *)(handle + 0xc) = s_val3;
        goto LAB_080c9262;
      }
      *(undefined4 *)(handle + 0x680) = 0xfffffffc;
      i_val5 = *(int *)(handle + 0x10) + -1;
LAB_080c9256:
      *(int *)(handle + 0x10) = i_val5;
      HW_Routine_08008B6C(handle + 0x18,0xcb);
      goto LAB_080c9262;
    }
    if (i_val5 == 0x38) {
      i_val5 = 0x28;
LAB_080c9176:
      *(int *)(handle + 0x648) = i_val5;
    }
    else if (0x38 < i_val5) {
      if (i_val5 == 0x48) {
        i_val5 = 0x38;
      }
      else {
        if (i_val5 != 0x58) goto LAB_080c9178;
        i_val5 = 0x48;
      }
      goto LAB_080c9176;
    }
LAB_080c9178:
    i_val5 = *(int *)(handle + 0x10) + -1;
  }
  else {
    b_flag1 = false;
    u_val6 = HW_Routine_080088D4(handle);
    if (((u_val6 & 0x80) != 0) && ((0x37F & u_val4) == 0)) {
      b_flag1 = true;
    }
    if (!b_flag1) {
      b_flag1 = false;
      u_val6 = HW_Routine_080088D4(handle);
      if (((u_val6 & 0x10) != 0) && ((0x3EF & u_val4) == 0)) {
        b_flag1 = true;
      }
      if (b_flag1) {
        i_val5 = 0x6A1;
        if (*(char *)(handle + 0x6a0) != '\0') goto LAB_080c95e8;
        *(undefined1 *)(handle + 0x6A1) = 0;
        p_char7 = (char *)(handle + 0x6A2);
        i_val5 = 0x6A2;
        if (*p_char7 != '\0') goto LAB_080c960c;
        *(undefined1 *)(handle + 0x6A3) = 0;
        s_val3 = *(short *)(*(int *)(handle + 0x1c) + 0xe) + -0xa0;
        p_int8 = (int *)(handle + 0x648);
        i_val5 = *p_int8;
        if (0x47 < i_val5) {
          if (i_val5 == 0x48) {
            *p_int8 = 0x58;
            if (u_val9 < 0x58) {
              *p_int8 = 0x48;
              goto LAB_080c94f0;
            }
            if (*(short *)(handle + 0xc) < s_val3) {
              *(undefined4 *)(handle + 0x680) = 4;
              i_val5 = *(int *)(handle + 0x10) + 2;
            }
            else {
              *(short *)(handle + 0xc) = s_val3;
              i_val5 = *(int *)(handle + 0x10) + 1;
            }
          }
          else {
            if ((int)s_val3 <= (int)*(short *)(handle + 0xc)) {
LAB_080c94c4:
              *(short *)(handle + 0xc) = s_val3;
              return;
            }
            if ((int)*(short *)(handle + 0xc) < s_val3 + -0x10) {
              *(undefined4 *)(handle + 0x680) = 8;
              i_val5 = *(int *)(handle + 0x10) + 2;
            }
            else {
              *(undefined4 *)(handle + 0x680) = 4;
              i_val5 = *(int *)(handle + 0x10) + 1;
            }
          }
          goto LAB_080c94ee;
        }
        if (i_val5 == 0x38) {
          i_val5 = 0x48;
LAB_080c92fc:
          *p_int8 = i_val5;
        }
        else if (i_val5 < 0x39) {
          if (i_val5 == 0x28) {
            i_val5 = 0x38;
            goto LAB_080c92fc;
          }
        }
        else if (i_val5 == 0x48) {
          i_val5 = 0x58;
          goto LAB_080c92fc;
        }
        p_int8 = (int *)(handle + 0x648);
        i_val5 = *p_int8;
        if ((int)u_val9 < i_val5) {
          if (i_val5 == 0x38) {
            *p_int8 = 0x28;
            return;
          }
          if (i_val5 < 0x39) {
            return;
          }
          if (i_val5 == 0x48) {
            *p_int8 = 0x38;
            return;
          }
          if (i_val5 != 0x58) {
            return;
          }
          *p_int8 = 0x48;
          return;
        }
        *(int *)(handle + 0x10) = *(int *)(handle + 0x10) + 1;
        if (i_val5 == 0x38) {
          i_val5 = 0x48;
LAB_080c9354:
          *p_int8 = i_val5;
        }
        else if (i_val5 < 0x39) {
          if (i_val5 == 0x28) {
            i_val5 = 0x38;
            goto LAB_080c9354;
          }
        }
        else if (i_val5 == 0x48) {
          i_val5 = 0x58;
          goto LAB_080c9354;
        }
        p_int8 = (int *)(handle + 0x648);
        i_val5 = *p_int8;
        if ((int)u_val9 < i_val5) {
          if (i_val5 == 0x38) {
            *p_int8 = 0x28;
          }
          else if (0x38 < i_val5) {
            if (i_val5 == 0x48) {
              *p_int8 = 0x38;
            }
            else if (i_val5 == 0x58) {
              *p_int8 = 0x48;
            }
          }
          goto LAB_080c94f0;
        }
        i_val5 = *(int *)(handle + 0x10) + 1;
        goto LAB_080c94ee;
      }
      b_flag1 = false;
      u_val9 = HW_Routine_080088D4(handle);
      if (((u_val9 & 0x20) != 0) && ((0x3DF & u_val4) == 0)) {
        b_flag1 = true;
      }
      if (!b_flag1) {
        b_flag1 = false;
        u_val9 = HW_Routine_080088D4(handle);
        if (((u_val9 >> 8 & 1) != 0) && ((0x2FF & u_val4) == 0)) {
          b_flag1 = true;
        }
        if (b_flag1) {
          i_val5 = 0x6A1;
          if (*(char *)(handle + 0x6a0) != '\0') {
LAB_080c95e8:
            *(undefined1 *)(handle + i_val5) = 1;
            *(undefined1 *)(handle + 0x6a0) = 0;
            return;
          }
          *(undefined1 *)(handle + 0x6A1) = 0;
          p_char7 = (char *)(handle + 0x6A2);
          i_val5 = 0x6A2;
          if (*p_char7 == '\0') {
            *(undefined1 *)(handle + 0x6A3) = 0;
            i_val5 = *(short *)(*(int *)(handle + 0x1c) + 0xe) + -0xa0;
            if (i_val5 * 0x10000 >> 0x10 <= (int)*(short *)(handle + 0xc)) {
              *(short *)(handle + 0xc) = (short)i_val5;
              return;
            }
            *(undefined4 *)(handle + 0x680) = 4;
            HW_Routine_08008B6C(handle + 0x18,0xcb);
            i_val5 = *(int *)(handle + 0x648);
            if (i_val5 < 0x29) {
              *(int *)(handle + 0x10) = *(int *)(handle + 0x10) + 1;
              return;
            }
            if (i_val5 == 0x38) {
              *(int *)(handle + 0x648) = 0x28;
              return;
            }
            if (i_val5 < 0x39) {
              return;
            }
            if (i_val5 == 0x48) {
LAB_080c966e:
              *(undefined4 *)(handle + 0x648) = 0x38;
              return;
            }
            if (i_val5 != 0x58) {
              return;
            }
LAB_080c9674:
            *(undefined4 *)(handle + 0x648) = 0x48;
            return;
          }
        }
        else {
          b_flag1 = false;
          u_val9 = HW_Routine_080088D4(handle);
          if (((u_val9 >> 8 & 2) != 0) && ((0x1FF & u_val4) == 0)) {
            b_flag1 = true;
          }
          if (!b_flag1) {
            if (*(char *)(handle + 0x6a0) != '\0') {
              *(undefined1 *)(handle + 0x6a1) = 1;
              *(char *)(handle + 0x6a0) = b_flag1;
              return;
            }
            p_char7 = (char *)(handle + 0x6A2);
            if (*p_char7 == '\0') {
              return;
            }
            *(undefined1 *)(handle + 0x6A3) = 1;
            *p_char7 = '\0';
            return;
          }
          i_val5 = 0x6A1;
          if (*(char *)(handle + 0x6a0) != '\0') goto LAB_080c95e8;
          *(undefined1 *)(handle + 0x6A1) = 0;
          p_char7 = (char *)(handle + 0x6A2);
          i_val5 = 0x6A2;
          if (*p_char7 == '\0') {
            *(undefined1 *)(handle + 0x6A3) = 0;
            if (*(short *)(handle + 0xc) < 1) {
              *(undefined2 *)(handle + 0xc) = 0;
              return;
            }
            *(undefined4 *)(handle + 0x680) = 0xfffffffc;
            HW_Routine_08008B6C(handle + 0x18,0xcb);
            i_val5 = *(int *)(handle + 0x648);
            if (0x57 < i_val5) {
              *(int *)(handle + 0x10) = *(int *)(handle + 0x10) + -1;
              return;
            }
            if (i_val5 != 0x38) {
              if (0x38 < i_val5) {
                if (i_val5 != 0x48) {
                  return;
                }
                *(int *)(handle + 0x648) = 0x58;
                return;
              }
              if (i_val5 != 0x28) {
                return;
              }
              goto LAB_080c966e;
            }
            goto LAB_080c9674;
          }
        }
LAB_080c960c:
        *(undefined1 *)(handle + i_val5 + 1) = 1;
        *p_char7 = '\0';
        return;
      }
      i_val5 = 0x6A1;
      if (*(char *)(handle + 0x6a0) != '\0') goto LAB_080c95e8;
      *(undefined1 *)(handle + 0x6A1) = 0;
      p_char7 = (char *)(handle + 0x6A2);
      if (*p_char7 != '\0') {
        *(undefined1 *)(handle + 0x6A2 + 1) = 1;
        *p_char7 = '\0';
        return;
      }
      *(undefined1 *)(handle + 0x6A3) = 0;
      p_int8 = (int *)(handle + 0x648);
      i_val5 = *p_int8;
      if (i_val5 < 0x39) {
        if (i_val5 == 0x38) {
          *p_int8 = 0x28;
          if (0 < *(short *)(handle + 0xc)) {
            p_int8 = (int *)(handle + 0x680);
            i_val5 = -4;
            goto LAB_080c94e8;
          }
          i_val5 = *(int *)(handle + 0x10) + -1;
        }
        else {
          s_val3 = 0;
          if (*(short *)(handle + 0xc) < 1) goto LAB_080c94c4;
          if (0x10 < *(short *)(handle + 0xc)) {
            p_int8 = (int *)(handle + 0x680);
            i_val5 = -8;
            goto LAB_080c94e8;
          }
          *(undefined4 *)(handle + 0x680) = 0xfffffffc;
          i_val5 = *(int *)(handle + 0x10) + -1;
        }
      }
      else {
        if (i_val5 == 0x48) {
          i_val5 = 0x38;
LAB_080c9472:
          *p_int8 = i_val5;
        }
        else if (i_val5 == 0x58) {
          i_val5 = 0x48;
          goto LAB_080c9472;
        }
        p_int8 = (int *)(handle + 0x648);
        i_val5 = *p_int8;
        if (i_val5 == 0x38) {
          i_val5 = 0x28;
LAB_080c94e8:
          *p_int8 = i_val5;
        }
        else if (0x38 < i_val5) {
          if (i_val5 == 0x48) {
            i_val5 = 0x38;
          }
          else {
            if (i_val5 != 0x58) goto LAB_080c94ea;
            i_val5 = 0x48;
          }
          goto LAB_080c94e8;
        }
LAB_080c94ea:
        i_val5 = *(int *)(handle + 0x10) + -2;
      }
LAB_080c94ee:
      *(int *)(handle + 0x10) = i_val5;
LAB_080c94f0:
      HW_Routine_08008B6C(handle + 0x18,0xcb);
      return;
    }
    i_val5 = 0x6A1;
    if (*(char *)(handle + 0x6a0) != '\0') goto LAB_080c95e8;
    *(undefined1 *)(handle + 0x6A1) = 0;
    p_char7 = (char *)(handle + 0x6A2);
    i_val5 = 0x6A2;
    if (*p_char7 != '\0') goto LAB_080c960c;
    *(undefined1 *)(handle + 0x6A3) = 0;
    s_val3 = *(short *)(*(int *)(handle + 0x1c) + 0xe) + -0xa0;
    i_val5 = *(int *)(handle + 0x648);
    if ((int)u_val9 <= i_val5) {
      if (s_val3 <= *(short *)(handle + 0xc)) goto LAB_080c9244;
      *(undefined4 *)(handle + 0x680) = 4;
      i_val5 = *(int *)(handle + 0x10) + 1;
      goto LAB_080c9256;
    }
    if (i_val5 == 0x38) {
      i_val5 = 0x48;
LAB_080c9224:
      *(int *)(handle + 0x648) = i_val5;
    }
    else if (i_val5 < 0x39) {
      if (i_val5 == 0x28) {
        i_val5 = 0x38;
        goto LAB_080c9224;
      }
    }
    else if (i_val5 == 0x48) {
      i_val5 = 0x58;
      goto LAB_080c9224;
    }
    i_val5 = *(int *)(handle + 0x10) + 1;
  }
  *(int *)(handle + 0x10) = i_val5;
  HW_Routine_08008B6C(handle + 0x18,0xcb);
LAB_080c9262:
  Animal_Routine_08075C88(*(undefined4 *)(handle + 0x1c),(int)*(short *)(handle + 0xc));
  return;
}

// =============================================================================
// Function: M4A_Routine_080C96C4 @ 0x080C96C4
// =============================================================================
undefined4 M4A_Routine_080C96C4(int handle)

{
  byte b_flag1;
  undefined2 u_val2;
  byte *pbVar3;
  undefined4 u_val4;
  undefined4 u_val5;
  undefined4 u_val6;
  undefined4 u_val7;
  undefined4 u_val8;
  int i_val9;
  uint u_val10;
  undefined1 *p_uint11;
  int *p_int12;
  int i_val13;
  uint *p_uint14;
  short *psVar15;
  undefined1 *p_uint16;
  undefined1 *p_uint17;
  int i_val18;
  int *p_int19;
  int i_val20;
  bool b_flag21;
  uint *p_uint22;
  uint *p_uint23;
  undefined1 *p_uint24;
  uint u_val25;
  undefined4 stack_val_108;
  undefined4 stack_val_104;
  undefined4 stack_val_100;
  uint stack_val_fc;
  undefined1 *puStack_f8;
  undefined1 *puStack_f4;
  uint stack_val_f0;
  undefined1 *puStack_ec;
  uint stack_val_e8;
  undefined1 *puStack_e4;
  undefined1 *puStack_e0;
  undefined1 *puStack_dc;
  undefined1 *puStack_d8;
  uint stack_val_d4;
  undefined1 *puStack_d0;
  uint stack_val_cc;
  undefined1 *puStack_c8;
  undefined1 *puStack_c4;
  uint stack_val_c0;
  uint stack_val_bc;
  uint stack_val_b8;
  uint stack_val_b4;
  undefined4 stack_val_b0;
  undefined2 stack_val_ac;
  undefined1 *puStack_a8;
  int stack_val_a4;
  int stack_val_a0;
  uint stack_val_9c;
  int stack_val_98;
  int stack_val_94;
  undefined4 stack_val_90;
  undefined2 stack_val_8c;
  int stack_val_88;
  int stack_val_84;
  int stack_val_80;
  int stack_val_7c;
  int stack_val_78;
  int stack_val_74;
  int stack_val_70;
  int stack_val_6c;
  int stack_val_68;
  int stack_val_64;
  int stack_val_60;
  uint stack_val_5c;
  int stack_val_58;
  int stack_val_54;
  int stack_val_50;
  undefined1 **ppuStack_4c;
  uint stack_val_48;
  undefined1 *puStack_44;
  undefined1 **ppuStack_40;
  uint *puStack_3c;
  int stack_val_38;
  uint stack_val_34;
  uint *puStack_30;
  int stack_val_2c;
  uint *puStack_28;
  uint *puStack_24;
  
  stack_val_60 = 1;
  pbVar3 = (byte *)HW_GetSpriteAttr2Offset(handle);
  u_val4 = HW_Routine_08007D4C(handle + 0x354,*(undefined4 *)(handle + 0x358));
  u_val5 = HW_Routine_080074C0(handle + 0x35c,*(undefined4 *)(handle + 0x360));
  ScriptEngine_Routine_0804EA94(&stack_val_b0,0x10,4,u_val4,u_val5,0,stack_val_60,0);
  b_flag1 = *pbVar3;
  if (b_flag1 < 0x80) {
    *(undefined4 *)(pbVar3 + (uint)b_flag1 * 8 + 4) = stack_val_b0;
    *(undefined2 *)(pbVar3 + (uint)b_flag1 * 8 + 4 + 4) = stack_val_ac;
    *pbVar3 = b_flag1 + 1;
  }
  u_val4 = Animal_Routine_08050D34(handle + 0x348);
  *(undefined4 *)(handle + 0x34c) = u_val4;
  u_val4 = HW_Routine_080088DC(handle);
  u_val5 = HW_GetSpriteAttr2Offset(handle);
  u_val6 = HW_GetSpriteAttr1Offset(handle);
  u_val7 = HW_GetPaletteBankOffset(handle);
  u_val8 = HW_Routine_0800894C(handle);
  i_val9 = Animal_Routine_08050D3C(handle + 0x348,u_val4,u_val5,u_val6,u_val7,u_val8,handle + 0x18);
  *(int *)(handle + 0x350) = i_val9;
  stack_val_60 = 0;
  if ((i_val9 == 3) && (*(char *)(0x684 + handle + 8) == '\0')) {
    stack_val_60 = 1;
  }
  u_val10 = *(uint *)(handle + 0x20);
  if (u_val10 != 0) {
    u_val25 = 0;
    i_val9 = *(short *)(handle + 0xc) + -8;
    puStack_3c = &stack_val_f0;
    if ((u_val10 != 0) && (*(short *)(handle + 0x24) < i_val9)) {
      psVar15 = (short *)(handle + 0x24);
      do {
        psVar15 = psVar15 + 8;
        u_val25 = u_val25 + 1;
        if (u_val10 <= u_val25) break;
      } while (*psVar15 < i_val9);
    }
    stack_val_48 = 0;
    stack_val_104 = (undefined1 *)0x0;
    stack_val_5c = u_val10;
    p_uint11 = (undefined1 *)runtime_malloc_aligned(0x18);
    if (p_uint11 == (undefined1 *)0x0) {
      p_uint11 = (undefined1 *)VTable_Routine_080D3BC0(0x18);
    }
    stack_val_100 = stack_val_48;
    stack_val_fc = stack_val_48;
    *p_uint11 = (char)stack_val_48;
    *(uint *)(p_uint11 + 4) = stack_val_48;
    *(undefined1 **)(p_uint11 + 8) = p_uint11;
    *(undefined1 **)(p_uint11 + 0xc) = p_uint11;
    puStack_44 = (undefined1 *)0x0;
    puStack_ec = (undefined1 *)0x0;
    stack_val_104 = p_uint11;
    p_uint11 = (undefined1 *)runtime_malloc_aligned(0x18);
    if (p_uint11 == (undefined1 *)0x0) {
      p_uint11 = (undefined1 *)VTable_Routine_080D3BC0(0x18);
    }
    p_uint24 = puStack_44;
    puStack_3c[2] = (uint)puStack_44;
    puStack_e4 = p_uint24;
    *p_uint11 = (char)p_uint24;
    *(undefined1 **)(p_uint11 + 4) = puStack_44;
    *(undefined1 **)(p_uint11 + 8) = p_uint11;
    *(undefined1 **)(p_uint11 + 0xc) = p_uint11;
    stack_val_58 = *(short *)(handle + 0xc) + 0x68;
    puStack_ec = p_uint11;
    if (u_val25 < stack_val_5c) {
      stack_val_38 = handle + 0x20;
      stack_val_2c = u_val25 * 0x10;
      if (*(short *)(stack_val_38 + stack_val_2c + 4) <= stack_val_58) {
        ppuStack_4c = &puStack_f8;
        ppuStack_40 = &puStack_f4;
        puStack_30 = &stack_val_9c;
        stack_val_34 = u_val25;
        do {
          stack_val_54 = stack_val_38 + stack_val_2c + 4;
          puStack_a8 = *(undefined1 **)(stack_val_54 + 8);
          stack_val_34 = stack_val_34 + 1;
          p_uint24 = *(undefined1 **)(stack_val_104 + 4);
          p_uint11 = stack_val_104;
          while (p_uint16 = p_uint24, p_uint16 != (undefined1 *)0x0) {
            if (*(undefined1 **)(p_uint16 + 0x10) < puStack_a8) {
              p_uint24 = *(undefined1 **)(p_uint16 + 0xc);
            }
            else {
              p_uint24 = *(undefined1 **)(p_uint16 + 8);
              p_uint11 = p_uint16;
            }
          }
          *ppuStack_4c = p_uint11;
          u_val10 = stack_val_48;
          b_flag21 = false;
          puStack_f4 = stack_val_104;
          if (((puStack_f8 == stack_val_104) || (puStack_a8 < *(undefined1 **)(puStack_f8 + 0x10))) &&
             ((int)stack_val_48 < 9)) {
            b_flag21 = true;
          }
          if (b_flag21) {
            puStack_dc = puStack_f8;
            puStack_d0 = puStack_a8;
            stack_val_cc = stack_val_48;
            gba_memcpy(&puStack_d0,&puStack_d0,8);
            puStack_d8 = puStack_d0;
            stack_val_d4 = stack_val_cc;
            puStack_c8 = puStack_dc;
            VTable_Routine_080E5664(&puStack_e0,&stack_val_108,&puStack_c8,&puStack_d8);
            i_val9 = u_val10 * 8 + handle;
            stack_val_50 = HW_Routine_08007D4C(i_val9 + 0x3a4,*(undefined4 *)(i_val9 + 0x3a8));
            p_int19 = (int *)HW_GetSpriteAttr0Offset(handle);
            HW_Routine_08008F0C(&puStack_e0,puStack_a8,stack_val_50 * 0x20 + 0x06010000,0x80);
            p_uint14 = (uint *)p_int19[1];
            if (p_uint14 == (uint *)p_int19[3]) {
              puStack_28 = p_uint14;
              stack_val_a0 = 1;
              p_uint23 = (uint *)*p_int19;
              stack_val_a4 = (int)p_uint14 - (int)p_uint23 >> 4;
              p_int12 = &stack_val_a4;
              if (stack_val_a4 == 0) {
                p_int12 = &stack_val_a0;
              }
              if (stack_val_a4 + *p_int12 == 0) {
                p_uint14 = (uint *)0x0;
                i_val9 = 0;
                puStack_24 = p_uint14;
              }
              else {
                i_val9 = (stack_val_a4 + *p_int12) * 0x10;
                p_uint14 = (uint *)runtime_malloc_aligned(i_val9);
                if (p_uint14 == (uint *)0x0) {
                  p_uint14 = (uint *)VTable_Routine_080D3BC0(i_val9);
                }
                p_uint23 = (uint *)*p_int19;
                puStack_24 = p_uint14;
              }
              for (; p_uint23 != puStack_28; p_uint23 = p_uint23 + 4) {
                if (p_uint14 != (uint *)0x0) {
                  u_val10 = p_uint23[1];
                  u_val25 = p_uint23[2];
                  *p_uint14 = *p_uint23;
                  p_uint14[1] = u_val10;
                  p_uint14[2] = u_val25;
                  p_uint14[3] = p_uint23[3];
                }
                p_uint14 = p_uint14 + 4;
              }
              i_val20 = stack_val_a0;
              if (stack_val_a0 == 1) {
                if (p_uint14 != (uint *)0x0) {
                  *p_uint14 = (uint)puStack_e0;
                  p_uint14[1] = (uint)puStack_dc;
                  p_uint14[2] = (uint)puStack_d8;
                  p_uint14[3] = stack_val_d4;
                }
                p_uint14 = p_uint14 + 4;
              }
              else {
                for (; i_val20 != 0; i_val20 = i_val20 + -1) {
                  if (p_uint14 != (uint *)0x0) {
                    *p_uint14 = (uint)puStack_e0;
                    p_uint14[1] = (uint)puStack_dc;
                    p_uint14[2] = (uint)puStack_d8;
                    p_uint14[3] = stack_val_d4;
                  }
                  p_uint14 = p_uint14 + 4;
                }
              }
              i_val13 = *p_int19;
              for (i_val20 = i_val13; i_val20 != p_int19[1]; i_val20 = i_val20 + 0x10) {
              }
              if (i_val13 != 0) {
                cpp_operator_delete(i_val13);
              }
              *p_int19 = (int)puStack_24;
              p_int19[1] = (int)p_uint14;
              p_int19[3] = (int)puStack_24 + i_val9;
            }
            else {
              if (p_uint14 != (uint *)0x0) {
                *p_uint14 = (uint)puStack_e0;
                p_uint14[1] = (uint)puStack_dc;
                p_uint14[2] = (uint)puStack_d8;
                p_uint14[3] = stack_val_d4;
              }
              p_int19[1] = p_int19[1] + 0x10;
            }
            stack_val_48 = stack_val_48 + 1;
          }
          else {
            i_val9 = *(int *)(puStack_f8 + 0x14) * 8 + handle;
            stack_val_50 = HW_Routine_08007D4C(i_val9 + 0x3a4,*(undefined4 *)(i_val9 + 0x3a8));
          }
          p_uint11 = puStack_ec;
          stack_val_9c = *(uint *)(stack_val_54 + 0xc);
          p_uint24 = puStack_ec;
          if (*(undefined1 **)(puStack_ec + 4) != (undefined1 *)0x0) {
            p_uint16 = *(undefined1 **)(puStack_ec + 4);
            do {
              if (*(uint *)(p_uint16 + 0x10) < *puStack_30) {
                p_uint17 = *(undefined1 **)(p_uint16 + 0xc);
              }
              else {
                p_uint17 = *(undefined1 **)(p_uint16 + 8);
                p_uint24 = p_uint16;
              }
              p_uint16 = p_uint17;
            } while (p_uint17 != (undefined1 *)0x0);
          }
          *ppuStack_40 = p_uint24;
          b_flag21 = false;
          puStack_e0 = p_uint11;
          if (((puStack_f4 == p_uint11) || (stack_val_9c < *(uint *)(puStack_f4 + 0x10))) &&
             ((int)puStack_44 < 9)) {
            b_flag21 = true;
          }
          if (b_flag21) {
            puStack_d8 = puStack_f4;
            stack_val_cc = stack_val_9c;
            puStack_c8 = puStack_44;
            gba_memcpy(&stack_val_cc,&stack_val_cc,8);
            stack_val_d4 = stack_val_cc;
            puStack_d0 = puStack_c8;
            puStack_c4 = puStack_d8;
            VTable_Routine_080E5664(&puStack_dc,&stack_val_f0,&puStack_c4,&stack_val_d4);
            i_val9 = (int)puStack_44 * 8 + handle;
            i_val9 = HW_Routine_080074C0(i_val9 + 0x3ec,*(undefined4 *)(i_val9 + 0x3f0));
            p_int19 = (int *)HW_GetSpriteAttr0Offset(handle);
            HW_Routine_08008F0C(&puStack_dc,stack_val_9c,i_val9 * 0x20 + 0x05000200,0x20);
            p_uint14 = (uint *)p_int19[1];
            if (p_uint14 == (uint *)p_int19[3]) {
              puStack_28 = p_uint14;
              stack_val_94 = 1;
              p_uint23 = (uint *)*p_int19;
              stack_val_98 = (int)p_uint14 - (int)p_uint23 >> 4;
              p_int12 = &stack_val_98;
              if (stack_val_98 == 0) {
                p_int12 = &stack_val_94;
              }
              if (stack_val_98 + *p_int12 == 0) {
                p_uint14 = (uint *)0x0;
                i_val20 = 0;
                puStack_24 = p_uint14;
              }
              else {
                i_val20 = (stack_val_98 + *p_int12) * 0x10;
                p_uint14 = (uint *)runtime_malloc_aligned(i_val20);
                if (p_uint14 == (uint *)0x0) {
                  p_uint14 = (uint *)VTable_Routine_080D3BC0(i_val20);
                }
                p_uint23 = (uint *)*p_int19;
                puStack_24 = p_uint14;
              }
              for (; p_uint23 != puStack_28; p_uint23 = p_uint23 + 4) {
                if (p_uint14 != (uint *)0x0) {
                  u_val10 = p_uint23[1];
                  u_val25 = p_uint23[2];
                  *p_uint14 = *p_uint23;
                  p_uint14[1] = u_val10;
                  p_uint14[2] = u_val25;
                  p_uint14[3] = p_uint23[3];
                }
                p_uint14 = p_uint14 + 4;
              }
              i_val13 = stack_val_94;
              if (stack_val_94 == 1) {
                if (p_uint14 != (uint *)0x0) {
                  *p_uint14 = (uint)puStack_dc;
                  p_uint14[1] = (uint)puStack_d8;
                  p_uint14[2] = stack_val_d4;
                  p_uint14[3] = (uint)puStack_d0;
                }
                p_uint14 = p_uint14 + 4;
              }
              else {
                for (; i_val13 != 0; i_val13 = i_val13 + -1) {
                  if (p_uint14 != (uint *)0x0) {
                    *p_uint14 = (uint)puStack_dc;
                    p_uint14[1] = (uint)puStack_d8;
                    p_uint14[2] = stack_val_d4;
                    p_uint14[3] = (uint)puStack_d0;
                  }
                  p_uint14 = p_uint14 + 4;
                }
              }
              i_val18 = *p_int19;
              for (i_val13 = i_val18; i_val13 != p_int19[1]; i_val13 = i_val13 + 0x10) {
              }
              if (i_val18 != 0) {
                cpp_operator_delete(i_val18);
              }
              *p_int19 = (int)puStack_24;
              p_int19[1] = (int)p_uint14;
              p_int19[3] = (int)puStack_24 + i_val20;
            }
            else {
              if (p_uint14 != (uint *)0x0) {
                *p_uint14 = (uint)puStack_dc;
                p_uint14[1] = (uint)puStack_d8;
                p_uint14[2] = stack_val_d4;
                p_uint14[3] = (uint)puStack_d0;
              }
              p_int19[1] = p_int19[1] + 0x10;
            }
            puStack_44 = puStack_44 + 1;
          }
          else {
            i_val9 = *(int *)(puStack_f4 + 0x14) * 8 + handle;
            i_val9 = HW_Routine_080074C0(i_val9 + 0x3ec,*(undefined4 *)(i_val9 + 0x3f0));
          }
          if ((-1 < stack_val_50) && (-1 < i_val9)) {
            pbVar3 = (byte *)HW_GetSpriteAttr2Offset(handle);
            psVar15 = (short *)(stack_val_38 + stack_val_2c + 4);
            ScriptEngine_Routine_0804EA94(&stack_val_90,*(undefined4 *)(psVar15 + 2),
                          (int)*psVar15 - (int)*(short *)(handle + 0xc),stack_val_50,i_val9,2,1,0);
            b_flag1 = *pbVar3;
            if (b_flag1 < 0x80) {
              *(undefined4 *)(pbVar3 + (uint)b_flag1 * 8 + 4) = stack_val_90;
              *(undefined2 *)(pbVar3 + (uint)b_flag1 * 8 + 4 + 4) = stack_val_8c;
              *pbVar3 = b_flag1 + 1;
            }
          }
        } while ((stack_val_34 < stack_val_5c) &&
                (stack_val_2c = stack_val_34 * 0x10, *(short *)(stack_val_38 + stack_val_2c + 4) <= stack_val_58));
      }
    }
    if (stack_val_e8 != 0) {
      VTable_Routine_080E54C4(puStack_3c,*(undefined4 *)(puStack_ec + 4));
      *(undefined1 **)(puStack_ec + 8) = puStack_ec;
      *(undefined4 *)(puStack_ec + 4) = 0;
      *(undefined1 **)(puStack_ec + 0xc) = puStack_ec;
      puStack_3c[2] = 0;
    }
    if (puStack_ec != (undefined1 *)0x0) {
      cpp_operator_delete();
    }
    if (stack_val_100 != 0) {
      VTable_Routine_080E54C4(&stack_val_108,*(undefined4 *)(stack_val_104 + 4));
      *(undefined1 **)(stack_val_104 + 8) = stack_val_104;
      *(undefined4 *)(stack_val_104 + 4) = 0;
      *(undefined1 **)(stack_val_104 + 0xc) = stack_val_104;
      stack_val_100 = 0;
    }
    if (stack_val_104 != (undefined1 *)0x0) {
      cpp_operator_delete();
    }
  }
  stack_val_108 = 0;
  stack_val_104 = (undefined1 *)0x0;
  stack_val_100 = stack_val_100 & 0xffff0000;
  stack_val_fc = 0;
  puStack_f8 = (undefined1 *)((uint)puStack_f8 & 0xffff0000);
  puStack_f4 = (undefined1 *)0x0;
  stack_val_f0 = stack_val_f0 & 0xffffff00;
  if ((int)*(short *)(handle + 0xc) < *(short *)(*(int *)(handle + 0x1c) + 0xe) + -0xa0) {
    *(undefined1 *)(handle + 0x5d0) = 1;
  }
  else {
    *(undefined1 *)(handle + 0x5d0) = 0;
  }
  if (*(short *)(handle + 0xc) == 0) {
    *(undefined1 *)(handle + 0x598) = 0;
  }
  else {
    *(undefined1 *)(handle + 0x598) = 1;
  }
  i_val9 = 0x684 + handle;
  if (*(char *)(i_val9 + 8) == '\0') {
    *(undefined1 *)(handle + 0x608) = 0;
    *(undefined1 *)(handle + 0x640) = 0;
  }
  else {
    *(undefined1 *)(handle + 0x608) = 1;
    *(undefined1 *)(handle + 0x640) = 1;
    *(short *)(0x5D4 + handle) = ((short)*(undefined4 *)(i_val9 + 0x10) + 2) * 8;
    *(short *)(0x5D6 + handle) = (short)*(undefined4 *)(handle + 0x648) + -8;
    *(short *)(0x60C + handle) = ((short)*(undefined4 *)(i_val9 + 0x10) + 2) * 8;
    *(short *)(0x60E + handle) = (short)*(undefined4 *)(handle + 0x648) + 8;
  }
  if (*(char *)(0x67C + handle) != '\0') {
    if (stack_val_60 != 0) {
      Animal_Routine_0805E8F0(0x64C + handle);
    }
    p_int19 = *(int **)(0x64C + handle);
    _call_via_r3(&puStack_ec,p_int19,
                    *(undefined2 *)
                     (*(int *)(handle + 0x650) +
                     (uint)*(ushort *)((undefined4 *)(0x64C + handle) + 3) * 4),
                    *(undefined4 *)(*p_int19 + 0x10));
    stack_val_104 = *(undefined1 **)(handle + 0x664);
    stack_val_fc = *(undefined4 *)(handle + 0x66c);
    puStack_f8 = *(undefined1 **)(handle + 0x670);
    puStack_f4 = *(undefined1 **)(handle + 0x674);
    stack_val_f0 = *(uint *)(handle + 0x678);
    stack_val_108 = CONCAT22((short)*(undefined4 *)(handle + 0x648),
                          *(undefined2 *)(0x644 + handle));
    stack_val_100._2_2_ = (undefined2)((uint)*(undefined4 *)(handle + 0x668) >> 0x10);
    stack_val_100 = CONCAT22(stack_val_100._2_2_,1);
    u_val2 = HW_Routine_080074C0(handle + 0x36c,*(undefined4 *)(handle + 0x370));
    stack_val_104 = (undefined1 *)CONCAT22(stack_val_104._2_2_,u_val2);
    u_val2 = HW_Routine_08007D4C(handle + 0x364,*(undefined4 *)(handle + 0x368));
    stack_val_104 = (undefined1 *)CONCAT22(u_val2,(undefined2)stack_val_104);
    stack_val_f0 = CONCAT31(stack_val_f0._1_3_,1);
    u_val4 = HW_GetSpriteAttr2Offset(handle);
    u_val10 = 0;
    if (puStack_ec != (undefined1 *)0x0) {
      u_val10 = stack_val_e8 & 0xffff;
    }
    Animal_Routine_0805E99C(u_val4,puStack_ec,u_val10,&stack_val_108);
    p_int19 = (int *)HW_GetSpriteAttr0Offset(handle);
    p_uint11 = puStack_e4;
    i_val9 = HW_Routine_08007D4C(handle + 0x364,*(undefined4 *)(handle + 0x368));
    u_val10 = 0;
    if (puStack_e4 != (undefined1 *)0x0) {
      u_val10 = (uint)puStack_e0 & 0xffff;
    }
    HW_Routine_08008F0C(&stack_val_c0,p_uint11,i_val9 * 0x20 + 0x06010000,u_val10);
    p_uint14 = (uint *)p_int19[1];
    if (p_uint14 == (uint *)p_int19[3]) {
      puStack_28 = p_uint14;
      stack_val_84 = 1;
      stack_val_88 = (int)p_uint14 - *p_int19 >> 4;
      p_int12 = &stack_val_88;
      if (stack_val_88 == 0) {
        p_int12 = &stack_val_84;
      }
      if (stack_val_88 + *p_int12 == 0) {
        p_uint14 = (uint *)0x0;
        i_val9 = 0;
      }
      else {
        i_val9 = (stack_val_88 + *p_int12) * 0x10;
        p_uint14 = (uint *)runtime_malloc_aligned(i_val9);
        if (p_uint14 == (uint *)0x0) {
          p_uint14 = (uint *)VTable_Routine_080D3BC0(i_val9);
        }
      }
      p_uint23 = p_uint14;
      for (p_uint22 = (uint *)*p_int19; p_uint22 != puStack_28; p_uint22 = p_uint22 + 4) {
        if (p_uint23 != (uint *)0x0) {
          u_val10 = p_uint22[1];
          u_val25 = p_uint22[2];
          *p_uint23 = *p_uint22;
          p_uint23[1] = u_val10;
          p_uint23[2] = u_val25;
          p_uint23[3] = p_uint22[3];
        }
        p_uint23 = p_uint23 + 4;
      }
      i_val20 = stack_val_84;
      if (stack_val_84 == 1) {
        if (p_uint23 != (uint *)0x0) {
          *p_uint23 = stack_val_c0;
          p_uint23[1] = stack_val_bc;
          p_uint23[2] = stack_val_b8;
          p_uint23[3] = stack_val_b4;
        }
        p_uint23 = p_uint23 + 4;
      }
      else {
        for (; i_val20 != 0; i_val20 = i_val20 + -1) {
          if (p_uint23 != (uint *)0x0) {
            *p_uint23 = stack_val_c0;
            p_uint23[1] = stack_val_bc;
            p_uint23[2] = stack_val_b8;
            p_uint23[3] = stack_val_b4;
          }
          p_uint23 = p_uint23 + 4;
        }
      }
      for (i_val20 = *p_int19; i_val20 != p_int19[1]; i_val20 = i_val20 + 0x10) {
      }
      puStack_24 = p_uint14;
      if (*p_int19 != 0) {
        cpp_operator_delete();
      }
      *p_int19 = (int)puStack_24;
      p_int19[1] = (int)p_uint23;
      p_int19[3] = (int)puStack_24 + i_val9;
    }
    else {
      if (p_uint14 != (uint *)0x0) {
        *p_uint14 = stack_val_c0;
        p_uint14[1] = stack_val_bc;
        p_uint14[2] = stack_val_b8;
        p_uint14[3] = stack_val_b4;
      }
      p_int19[1] = p_int19[1] + 0x10;
    }
  }
  if (*(char *)(handle + 0x598) != '\0') {
    if (stack_val_60 != 0) {
      Animal_Routine_0805E8F0(handle + 0x568);
    }
    _call_via_r3(&puStack_ec,*(int **)(handle + 0x568),
                    *(undefined2 *)
                     (*(int *)(0x56C + handle) + (uint)*(ushort *)(handle + 0x574) * 4),
                    *(undefined4 *)(**(int **)(handle + 0x568) + 0x10));
    i_val9 = 0x57C + handle;
    stack_val_104 = *(undefined1 **)(i_val9 + 4);
    stack_val_fc = *(undefined4 *)(i_val9 + 0xc);
    puStack_f8 = *(undefined1 **)(i_val9 + 0x10);
    puStack_f4 = *(undefined1 **)(i_val9 + 0x14);
    stack_val_f0 = *(uint *)(i_val9 + 0x18);
    stack_val_108 = CONCAT22(*(undefined2 *)(0x566 + handle),
                          *(undefined2 *)(0x564 + handle));
    stack_val_100._2_2_ = (undefined2)((uint)*(undefined4 *)(i_val9 + 8) >> 0x10);
    stack_val_100 = CONCAT22(stack_val_100._2_2_,1);
    u_val2 = HW_Routine_080074C0(handle + 900,*(undefined4 *)(handle + 0x388));
    stack_val_104 = (undefined1 *)CONCAT22(stack_val_104._2_2_,u_val2);
    u_val2 = HW_Routine_08007D4C(handle + 0x374,*(undefined4 *)(handle + 0x378));
    stack_val_104 = (undefined1 *)CONCAT22(u_val2,(undefined2)stack_val_104);
    stack_val_f0 = CONCAT31(stack_val_f0._1_3_,1);
    u_val4 = HW_GetSpriteAttr2Offset(handle);
    u_val10 = 0;
    if (puStack_ec != (undefined1 *)0x0) {
      u_val10 = stack_val_e8 & 0xffff;
    }
    Animal_Routine_0805E99C(u_val4,puStack_ec,u_val10,&stack_val_108);
    p_int19 = (int *)HW_GetSpriteAttr0Offset(handle);
    p_uint11 = puStack_e4;
    i_val9 = HW_Routine_08007D4C(handle + 0x374,*(undefined4 *)(handle + 0x378));
    u_val10 = 0;
    if (puStack_e4 != (undefined1 *)0x0) {
      u_val10 = (uint)puStack_e0 & 0xffff;
    }
    HW_Routine_08008F0C(&stack_val_cc,p_uint11,i_val9 * 0x20 + 0x06010000,u_val10);
    p_uint14 = (uint *)p_int19[1];
    if (p_uint14 == (uint *)p_int19[3]) {
      puStack_28 = p_uint14;
      stack_val_7c = 1;
      stack_val_80 = (int)p_uint14 - *p_int19 >> 4;
      p_int12 = &stack_val_80;
      if (stack_val_80 == 0) {
        p_int12 = &stack_val_7c;
      }
      if (stack_val_80 + *p_int12 == 0) {
        p_uint14 = (uint *)0x0;
        i_val9 = 0;
      }
      else {
        i_val9 = (stack_val_80 + *p_int12) * 0x10;
        p_uint14 = (uint *)runtime_malloc_aligned(i_val9);
        if (p_uint14 == (uint *)0x0) {
          p_uint14 = (uint *)VTable_Routine_080D3BC0(i_val9);
        }
      }
      p_uint23 = p_uint14;
      for (p_uint22 = (uint *)*p_int19; p_uint22 != puStack_28; p_uint22 = p_uint22 + 4) {
        if (p_uint23 != (uint *)0x0) {
          u_val10 = p_uint22[1];
          u_val25 = p_uint22[2];
          *p_uint23 = *p_uint22;
          p_uint23[1] = u_val10;
          p_uint23[2] = u_val25;
          p_uint23[3] = p_uint22[3];
        }
        p_uint23 = p_uint23 + 4;
      }
      i_val20 = stack_val_7c;
      if (stack_val_7c == 1) {
        if (p_uint23 != (uint *)0x0) {
          *p_uint23 = stack_val_cc;
          p_uint23[1] = (uint)puStack_c8;
          p_uint23[2] = (uint)puStack_c4;
          p_uint23[3] = stack_val_c0;
        }
        p_uint23 = p_uint23 + 4;
      }
      else {
        for (; i_val20 != 0; i_val20 = i_val20 + -1) {
          if (p_uint23 != (uint *)0x0) {
            *p_uint23 = stack_val_cc;
            p_uint23[1] = (uint)puStack_c8;
            p_uint23[2] = (uint)puStack_c4;
            p_uint23[3] = stack_val_c0;
          }
          p_uint23 = p_uint23 + 4;
        }
      }
      for (i_val20 = *p_int19; i_val20 != p_int19[1]; i_val20 = i_val20 + 0x10) {
      }
      puStack_24 = p_uint14;
      if (*p_int19 != 0) {
        cpp_operator_delete();
      }
      *p_int19 = (int)puStack_24;
      p_int19[1] = (int)p_uint23;
      p_int19[3] = (int)puStack_24 + i_val9;
    }
    else {
      if (p_uint14 != (uint *)0x0) {
        *p_uint14 = stack_val_cc;
        p_uint14[1] = (uint)puStack_c8;
        p_uint14[2] = (uint)puStack_c4;
        p_uint14[3] = stack_val_c0;
      }
      p_int19[1] = p_int19[1] + 0x10;
    }
  }
  if (*(char *)(handle + 0x5d0) != '\0') {
    if (stack_val_60 != 0) {
      Animal_Routine_0805E8F0(handle + 0x5a0);
    }
    _call_via_r3(&puStack_ec,*(int **)(handle + 0x5a0),
                    *(undefined2 *)
                     (*(int *)(0x5A4 + handle) + (uint)*(ushort *)(handle + 0x5ac) * 4),
                    *(undefined4 *)(**(int **)(handle + 0x5a0) + 0x10));
    i_val9 = 0x5B4 + handle;
    stack_val_104 = *(undefined1 **)(i_val9 + 4);
    stack_val_fc = *(undefined4 *)(i_val9 + 0xc);
    puStack_f8 = *(undefined1 **)(i_val9 + 0x10);
    puStack_f4 = *(undefined1 **)(i_val9 + 0x14);
    stack_val_f0 = *(uint *)(i_val9 + 0x18);
    stack_val_108 = CONCAT22(*(undefined2 *)(0x59E + handle),
                          *(undefined2 *)(0x59C + handle));
    stack_val_100._2_2_ = (undefined2)((uint)*(undefined4 *)(i_val9 + 8) >> 0x10);
    stack_val_100 = CONCAT22(stack_val_100._2_2_,1);
    u_val2 = HW_Routine_080074C0(handle + 900,*(undefined4 *)(handle + 0x388));
    stack_val_104 = (undefined1 *)CONCAT22(stack_val_104._2_2_,u_val2);
    u_val2 = HW_Routine_08007D4C(handle + 0x37c,*(undefined4 *)(handle + 0x380));
    stack_val_104 = (undefined1 *)CONCAT22(u_val2,(undefined2)stack_val_104);
    stack_val_f0 = CONCAT31(stack_val_f0._1_3_,1);
    u_val4 = HW_GetSpriteAttr2Offset(handle);
    u_val10 = 0;
    if (puStack_ec != (undefined1 *)0x0) {
      u_val10 = stack_val_e8 & 0xffff;
    }
    Animal_Routine_0805E99C(u_val4,puStack_ec,u_val10,&stack_val_108);
    p_int19 = (int *)HW_GetSpriteAttr0Offset(handle);
    p_uint11 = puStack_e4;
    i_val9 = HW_Routine_08007D4C(handle + 0x37c,*(undefined4 *)(handle + 0x380));
    u_val10 = 0;
    if (puStack_e4 != (undefined1 *)0x0) {
      u_val10 = (uint)puStack_e0 & 0xffff;
    }
    HW_Routine_08008F0C(&stack_val_cc,p_uint11,i_val9 * 0x20 + 0x06010000,u_val10);
    p_uint14 = (uint *)p_int19[1];
    if (p_uint14 == (uint *)p_int19[3]) {
      puStack_28 = p_uint14;
      stack_val_74 = 1;
      stack_val_78 = (int)p_uint14 - *p_int19 >> 4;
      p_int12 = &stack_val_78;
      if (stack_val_78 == 0) {
        p_int12 = &stack_val_74;
      }
      if (stack_val_78 + *p_int12 == 0) {
        p_uint14 = (uint *)0x0;
        i_val9 = 0;
      }
      else {
        i_val9 = (stack_val_78 + *p_int12) * 0x10;
        p_uint14 = (uint *)runtime_malloc_aligned(i_val9);
        if (p_uint14 == (uint *)0x0) {
          p_uint14 = (uint *)VTable_Routine_080D3BC0(i_val9);
        }
      }
      p_uint23 = p_uint14;
      for (p_uint22 = (uint *)*p_int19; p_uint22 != puStack_28; p_uint22 = p_uint22 + 4) {
        if (p_uint23 != (uint *)0x0) {
          u_val10 = p_uint22[1];
          u_val25 = p_uint22[2];
          *p_uint23 = *p_uint22;
          p_uint23[1] = u_val10;
          p_uint23[2] = u_val25;
          p_uint23[3] = p_uint22[3];
        }
        p_uint23 = p_uint23 + 4;
      }
      i_val20 = stack_val_74;
      if (stack_val_74 == 1) {
        if (p_uint23 != (uint *)0x0) {
          *p_uint23 = stack_val_cc;
          p_uint23[1] = (uint)puStack_c8;
          p_uint23[2] = (uint)puStack_c4;
          p_uint23[3] = stack_val_c0;
        }
        p_uint23 = p_uint23 + 4;
      }
      else {
        for (; i_val20 != 0; i_val20 = i_val20 + -1) {
          if (p_uint23 != (uint *)0x0) {
            *p_uint23 = stack_val_cc;
            p_uint23[1] = (uint)puStack_c8;
            p_uint23[2] = (uint)puStack_c4;
            p_uint23[3] = stack_val_c0;
          }
          p_uint23 = p_uint23 + 4;
        }
      }
      for (i_val20 = *p_int19; i_val20 != p_int19[1]; i_val20 = i_val20 + 0x10) {
      }
      puStack_24 = p_uint14;
      if (*p_int19 != 0) {
        cpp_operator_delete();
      }
      *p_int19 = (int)puStack_24;
      p_int19[1] = (int)p_uint23;
      p_int19[3] = (int)puStack_24 + i_val9;
    }
    else {
      if (p_uint14 != (uint *)0x0) {
        *p_uint14 = stack_val_cc;
        p_uint14[1] = (uint)puStack_c8;
        p_uint14[2] = (uint)puStack_c4;
        p_uint14[3] = stack_val_c0;
      }
      p_int19[1] = p_int19[1] + 0x10;
    }
  }
  if (*(char *)(handle + 0x640) != '\0') {
    Animal_Routine_0805E8F0((undefined4 *)(handle + 0x610));
    p_int19 = *(int **)(handle + 0x610);
    _call_via_r3(&puStack_ec,p_int19,
                    *(undefined2 *)
                     (*(int *)(0x614 + handle) + (uint)*(ushort *)(handle + 0x61c) * 4),
                    *(undefined4 *)(*p_int19 + 0x10));
    i_val9 = 0x624 + handle;
    stack_val_104 = *(undefined1 **)(i_val9 + 4);
    stack_val_fc = *(undefined4 *)(i_val9 + 0xc);
    puStack_f8 = *(undefined1 **)(i_val9 + 0x10);
    puStack_f4 = *(undefined1 **)(i_val9 + 0x14);
    stack_val_f0 = *(uint *)(i_val9 + 0x18);
    stack_val_108 = CONCAT22(*(undefined2 *)(0x60E + handle),
                          *(undefined2 *)(0x60C + handle));
    stack_val_100 = *(uint *)(i_val9 + 8) & 0xffff0000;
    u_val2 = HW_Routine_080074C0(handle + 0x39c,*(undefined4 *)(handle + 0x3a0));
    stack_val_104 = (undefined1 *)CONCAT22(stack_val_104._2_2_,u_val2);
    u_val2 = HW_Routine_08007D4C(handle + 0x394,*(undefined4 *)(handle + 0x398));
    stack_val_104 = (undefined1 *)CONCAT22(u_val2,(undefined2)stack_val_104);
    stack_val_f0 = CONCAT31(stack_val_f0._1_3_,1);
    u_val4 = HW_GetSpriteAttr2Offset(handle);
    u_val10 = 0;
    if (puStack_ec != (undefined1 *)0x0) {
      u_val10 = stack_val_e8 & 0xffff;
    }
    Animal_Routine_0805E99C(u_val4,puStack_ec,u_val10,&stack_val_108);
    p_int19 = (int *)HW_GetSpriteAttr0Offset(handle);
    p_uint11 = puStack_e4;
    i_val9 = HW_Routine_08007D4C(handle + 0x394,*(undefined4 *)(handle + 0x398));
    u_val10 = 0;
    if (puStack_e4 != (undefined1 *)0x0) {
      u_val10 = (uint)puStack_e0 & 0xffff;
    }
    HW_Routine_08008F0C(&stack_val_cc,p_uint11,i_val9 * 0x20 + 0x06010000,u_val10);
    p_uint14 = (uint *)p_int19[1];
    if (p_uint14 == (uint *)p_int19[3]) {
      puStack_28 = p_uint14;
      stack_val_6c = 1;
      stack_val_70 = (int)p_uint14 - *p_int19 >> 4;
      p_int12 = &stack_val_70;
      if (stack_val_70 == 0) {
        p_int12 = &stack_val_6c;
      }
      if (stack_val_70 + *p_int12 == 0) {
        p_uint14 = (uint *)0x0;
        i_val9 = 0;
      }
      else {
        i_val9 = (stack_val_70 + *p_int12) * 0x10;
        p_uint14 = (uint *)runtime_malloc_aligned(i_val9);
        if (p_uint14 == (uint *)0x0) {
          p_uint14 = (uint *)VTable_Routine_080D3BC0(i_val9);
        }
      }
      p_uint22 = p_uint14;
      for (p_uint23 = (uint *)*p_int19; p_uint23 != puStack_28; p_uint23 = p_uint23 + 4) {
        if (p_uint22 != (uint *)0x0) {
          u_val10 = p_uint23[1];
          u_val25 = p_uint23[2];
          *p_uint22 = *p_uint23;
          p_uint22[1] = u_val10;
          p_uint22[2] = u_val25;
          p_uint22[3] = p_uint23[3];
        }
        p_uint22 = p_uint22 + 4;
      }
      i_val20 = stack_val_6c;
      if (stack_val_6c == 1) {
        if (p_uint22 != (uint *)0x0) {
          *p_uint22 = stack_val_cc;
          p_uint22[1] = (uint)puStack_c8;
          p_uint22[2] = (uint)puStack_c4;
          p_uint22[3] = stack_val_c0;
        }
        p_uint22 = p_uint22 + 4;
      }
      else {
        for (; i_val20 != 0; i_val20 = i_val20 + -1) {
          if (p_uint22 != (uint *)0x0) {
            *p_uint22 = stack_val_cc;
            p_uint22[1] = (uint)puStack_c8;
            p_uint22[2] = (uint)puStack_c4;
            p_uint22[3] = stack_val_c0;
          }
          p_uint22 = p_uint22 + 4;
        }
      }
      for (i_val20 = *p_int19; i_val20 != p_int19[1]; i_val20 = i_val20 + 0x10) {
      }
      puStack_24 = p_uint14;
      if (*p_int19 != 0) {
        cpp_operator_delete();
      }
      *p_int19 = (int)puStack_24;
      p_int19[1] = (int)p_uint22;
      p_int19[3] = (int)puStack_24 + i_val9;
    }
    else {
      if (p_uint14 != (uint *)0x0) {
        *p_uint14 = stack_val_cc;
        p_uint14[1] = (uint)puStack_c8;
        p_uint14[2] = (uint)puStack_c4;
        p_uint14[3] = stack_val_c0;
      }
      p_int19[1] = p_int19[1] + 0x10;
    }
  }
  if (*(char *)(handle + 0x608) != '\0') {
    Animal_Routine_0805E8F0((undefined4 *)(handle + 0x5d8));
    p_int19 = *(int **)(handle + 0x5d8);
    _call_via_r3(&puStack_ec,p_int19,
                    *(undefined2 *)
                     (*(int *)(0x5DC + handle) + (uint)*(ushort *)(handle + 0x5e4) * 4),
                    *(undefined4 *)(*p_int19 + 0x10));
    i_val9 = 0x5EC + handle;
    stack_val_104 = *(undefined1 **)(i_val9 + 4);
    stack_val_fc = *(undefined4 *)(i_val9 + 0xc);
    puStack_f8 = *(undefined1 **)(i_val9 + 0x10);
    puStack_f4 = *(undefined1 **)(i_val9 + 0x14);
    stack_val_f0 = *(uint *)(i_val9 + 0x18);
    stack_val_108 = CONCAT22(*(undefined2 *)(0x5D6 + handle),
                          *(undefined2 *)(0x5D4 + handle));
    stack_val_100 = *(uint *)(i_val9 + 8) & 0xffff0000;
    u_val2 = HW_Routine_080074C0(handle + 0x39c,*(undefined4 *)(handle + 0x3a0));
    stack_val_104 = (undefined1 *)CONCAT22(stack_val_104._2_2_,u_val2);
    u_val2 = HW_Routine_08007D4C(handle + 0x38c,*(undefined4 *)(handle + 0x390));
    stack_val_104 = (undefined1 *)CONCAT22(u_val2,(undefined2)stack_val_104);
    stack_val_f0 = CONCAT31(stack_val_f0._1_3_,1);
    u_val4 = HW_GetSpriteAttr2Offset(handle);
    u_val10 = 0;
    if (puStack_ec != (undefined1 *)0x0) {
      u_val10 = stack_val_e8 & 0xffff;
    }
    Animal_Routine_0805E99C(u_val4,puStack_ec,u_val10,&stack_val_108);
    p_int19 = (int *)HW_GetSpriteAttr0Offset(handle);
    p_uint11 = puStack_e4;
    i_val9 = HW_Routine_08007D4C(handle + 0x38c,*(undefined4 *)(handle + 0x390));
    u_val10 = 0;
    if (puStack_e4 != (undefined1 *)0x0) {
      u_val10 = (uint)puStack_e0 & 0xffff;
    }
    HW_Routine_08008F0C(&stack_val_cc,p_uint11,i_val9 * 0x20 + 0x06010000,u_val10);
    puStack_28 = (uint *)p_int19[1];
    if (puStack_28 == (uint *)p_int19[3]) {
      stack_val_64 = 1;
      stack_val_68 = (int)puStack_28 - *p_int19 >> 4;
      p_int12 = &stack_val_68;
      if (stack_val_68 == 0) {
        p_int12 = &stack_val_64;
      }
      if (stack_val_68 + *p_int12 == 0) {
        p_uint14 = (uint *)0x0;
        i_val9 = 0;
      }
      else {
        i_val9 = (stack_val_68 + *p_int12) * 0x10;
        p_uint14 = (uint *)runtime_malloc_aligned(i_val9);
        if (p_uint14 == (uint *)0x0) {
          p_uint14 = (uint *)VTable_Routine_080D3BC0(i_val9);
        }
      }
      p_uint22 = p_uint14;
      for (p_uint23 = (uint *)*p_int19; p_uint23 != puStack_28; p_uint23 = p_uint23 + 4) {
        if (p_uint22 != (uint *)0x0) {
          u_val10 = p_uint23[1];
          u_val25 = p_uint23[2];
          *p_uint22 = *p_uint23;
          p_uint22[1] = u_val10;
          p_uint22[2] = u_val25;
          p_uint22[3] = p_uint23[3];
        }
        p_uint22 = p_uint22 + 4;
      }
      i_val20 = stack_val_64;
      if (stack_val_64 == 1) {
        if (p_uint22 != (uint *)0x0) {
          *p_uint22 = stack_val_cc;
          p_uint22[1] = (uint)puStack_c8;
          p_uint22[2] = (uint)puStack_c4;
          p_uint22[3] = stack_val_c0;
        }
        p_uint22 = p_uint22 + 4;
      }
      else {
        for (; i_val20 != 0; i_val20 = i_val20 + -1) {
          if (p_uint22 != (uint *)0x0) {
            *p_uint22 = stack_val_cc;
            p_uint22[1] = (uint)puStack_c8;
            p_uint22[2] = (uint)puStack_c4;
            p_uint22[3] = stack_val_c0;
          }
          p_uint22 = p_uint22 + 4;
        }
      }
      for (i_val20 = *p_int19; i_val20 != p_int19[1]; i_val20 = i_val20 + 0x10) {
      }
      puStack_24 = p_uint14;
      if (*p_int19 != 0) {
        cpp_operator_delete();
      }
      *p_int19 = (int)puStack_24;
      p_int19[1] = (int)p_uint22;
      p_int19[3] = (int)puStack_24 + i_val9;
    }
    else {
      if (puStack_28 != (uint *)0x0) {
        *puStack_28 = stack_val_cc;
        puStack_28[1] = (uint)puStack_c8;
        puStack_28[2] = (uint)puStack_c4;
        puStack_28[3] = stack_val_c0;
      }
      p_int19[1] = p_int19[1] + 0x10;
    }
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080CA6F4 @ 0x080CA6F4
// =============================================================================
undefined4 M4A_Routine_080CA6F4(void)

{
  ushort u_val1;
  ushort *p_uint2;
  
  if (*REG_VCOUNT == '\x17') {
    u_val1 = *REG_DISPSTAT;
    while ((u_val1 & 2) == 0) {
      u_val1 = *REG_DISPSTAT;
    }
    *REG_BG2CNT = (short)0x3E43;
    p_uint2 = REG_DISPSTAT;
    *REG_DISPSTAT = *REG_DISPSTAT & 0xff;
    u_val1 = 0x9f00;
  }
  else {
    if (*REG_VCOUNT != -0x61) {
      return;
    }
    *REG_BG2CNT = (short)0x3E41;
    p_uint2 = REG_DISPSTAT;
    *REG_DISPSTAT = *REG_DISPSTAT & 0xff;
    u_val1 = 0x1700;
  }
  *p_uint2 = u_val1 | *p_uint2;
  return;
}

// =============================================================================
// Function: M4A_Routine_080CA770 @ 0x080CA770
// =============================================================================
undefined8 M4A_Routine_080CA770(undefined4 *handle,undefined4 channel)

{
  int *p_int1;
  int *p_int2;
  undefined4 *p_uint3;
  undefined4 *p_uint4;
  int i_val5;
  undefined4 *p_uint6;
  int i_val7;
  int i_val8;
  undefined4 u_val9;
  undefined4 u_val10;
  undefined4 stack_val_40;
  undefined4 stack_val_3c;
  undefined4 stack_val_38;
  undefined4 stack_val_34;
  int stack_val_30;
  int stack_val_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  *handle = 0;
  handle[1] = 99;
  *(undefined1 *)(handle + 2) = 0;
  handle[3] = 0;
  handle[4] = 0;
  handle[5] = 1;
  handle[6] = channel;
  puStack_28 = handle;
  p_int1 = (int *)HW_GetSpriteAttr0Offset();
  HW_Routine_08008F0C(&stack_val_40,gRomGfx_08750C8C,0x06000480,0x1c0);
  puStack_24 = (undefined4 *)p_int1[1];
  if (puStack_24 == (undefined4 *)p_int1[3]) {
    stack_val_2c = 1;
    p_uint6 = (undefined4 *)*p_int1;
    stack_val_30 = (int)puStack_24 - (int)p_uint6 >> 4;
    p_int2 = &stack_val_30;
    if (stack_val_30 == 0) {
      p_int2 = &stack_val_2c;
    }
    if (stack_val_30 + *p_int2 == 0) {
      p_uint3 = (undefined4 *)0x0;
      i_val8 = 0;
      p_uint4 = p_uint3;
    }
    else {
      i_val8 = (stack_val_30 + *p_int2) * 0x10;
      p_uint3 = (undefined4 *)runtime_malloc_aligned(i_val8);
      if (p_uint3 == (undefined4 *)0x0) {
        p_uint3 = (undefined4 *)VTable_Routine_080D3BC0(i_val8);
      }
      p_uint6 = (undefined4 *)*p_int1;
      p_uint4 = p_uint3;
    }
    for (; p_uint6 != puStack_24; p_uint6 = p_uint6 + 4) {
      if (p_uint3 != (undefined4 *)0x0) {
        u_val9 = p_uint6[1];
        u_val10 = p_uint6[2];
        *p_uint3 = *p_uint6;
        p_uint3[1] = u_val9;
        p_uint3[2] = u_val10;
        p_uint3[3] = p_uint6[3];
      }
      p_uint3 = p_uint3 + 4;
    }
    i_val5 = stack_val_2c;
    if (stack_val_2c == 1) {
      if (p_uint3 != (undefined4 *)0x0) {
        *p_uint3 = stack_val_40;
        p_uint3[1] = stack_val_3c;
        p_uint3[2] = stack_val_38;
        p_uint3[3] = stack_val_34;
      }
      p_uint3 = p_uint3 + 4;
    }
    else {
      for (; i_val5 != 0; i_val5 = i_val5 + -1) {
        if (p_uint3 != (undefined4 *)0x0) {
          *p_uint3 = stack_val_40;
          p_uint3[1] = stack_val_3c;
          p_uint3[2] = stack_val_38;
          p_uint3[3] = stack_val_34;
        }
        p_uint3 = p_uint3 + 4;
      }
    }
    i_val7 = *p_int1;
    for (i_val5 = i_val7; i_val5 != p_int1[1]; i_val5 = i_val5 + 0x10) {
    }
    if (i_val7 != 0) {
      cpp_operator_delete(i_val7);
    }
    *p_int1 = (int)p_uint4;
    p_int1[1] = (int)p_uint3;
    p_int1[3] = i_val8 + (int)p_uint4;
  }
  else {
    if (puStack_24 != (undefined4 *)0x0) {
      *puStack_24 = stack_val_40;
      puStack_24[1] = stack_val_3c;
      puStack_24[2] = stack_val_38;
      puStack_24[3] = stack_val_34;
    }
    p_int1[1] = p_int1[1] + 0x10;
  }
  return puStack_28;
}

// =============================================================================
// Function: M4A_Routine_080CA8B4 @ 0x080CA8B4
// =============================================================================
undefined4 M4A_Routine_080CA8B4(undefined4 *handle,undefined4 channel,uint param,int val)

{
  uint u_val1;
  int i_val2;
  int i_val3;
  int i_val4;
  
  handle[3] = *(int *)(handle[6] + 0x10) * 2 + 4;
  handle[4] = val;
  *handle = channel;
  if (param < 100) {
    handle[1] = param;
  }
  else {
    handle[1] = 99;
  }
  i_val4 = handle[6];
  u_val1 = math_divsi3(*(undefined4 *)(*(int *)(i_val4 + 8) + 0x1AA8),*handle);
  if (u_val1 < (uint)handle[1]) {
    handle[1] = u_val1;
  }
  ScriptEngine_Routine_0804E9F4(*(int *)(*(int *)(i_val4 + 0x1c) + 0x18) + (handle[3] + 1) * 0x40 + val * 2,0x2e
                ,1,1,0,0x20);
  ScriptEngine_Routine_0804EE30(handle[5],
                *(int *)(*(int *)(handle[6] + 0x1c) + 0x18) + (handle[3] + 1) * 0x40 +
                (val + 2) * 2,0x24,0,0x20);
  ScriptEngine_Routine_0804E9F4(*(int *)(*(int *)(handle[6] + 0x1c) + 0x18) + (handle[3] + 1) * 0x40 +
                (val + 4) * 2,0x2f,1,1,0,0x20);
  i_val3 = (int)*(short *)(*(int *)(handle[6] + 0x1c) + 0xc);
  i_val4 = i_val3;
  if (i_val3 < 0) {
    i_val4 = i_val3 + 7;
  }
  i_val2 = i_val3 + 0x100;
  if (i_val2 < 0) {
    i_val2 = i_val3 + 0x107;
  }
  Animal_Routine_08075BC8(*(int *)(handle[6] + 0x1c),i_val4 >> 3,i_val2 >> 3);
  *(undefined1 *)(handle + 2) = 1;
  return;
}

// =============================================================================
// Function: M4A_Routine_080CA98C @ 0x080CA98C
// =============================================================================
undefined4 M4A_Routine_080CA98C(int *handle)

{
  undefined4 u_val1;
  uint u_val2;
  int i_val3;
  uint u_val4;
  int i_val5;
  int i_val6;
  
  i_val6 = handle[5];
  u_val2 = HW_Routine_080088D4(handle[6]);
  if ((u_val2 & 0x40) == 0) {
    u_val2 = HW_Routine_080088D4(handle[6]);
    if ((u_val2 & 0x80) == 0) {
      u_val2 = HW_Routine_080088D4(handle[6]);
      if ((u_val2 & 0x10) == 0) {
        u_val2 = HW_Routine_080088D4(handle[6]);
        if ((u_val2 & 0x20) == 0) goto LAB_080caa1a;
        u_val2 = handle[5];
        if (u_val2 == 1) {
          i_val3 = handle[1];
        }
        else if (u_val2 < 0xc) {
          i_val3 = 1;
        }
        else {
          i_val3 = u_val2 - 10;
        }
      }
      else {
        u_val2 = handle[1];
        if (handle[5] != u_val2) {
          u_val4 = handle[5] + 10;
          handle[5] = u_val4;
          if (u_val2 <= u_val4) {
            handle[5] = u_val2;
          }
          goto LAB_080caa1a;
        }
        i_val3 = 1;
      }
    }
    else {
      i_val3 = handle[5];
      handle[5] = i_val3 + -1;
      if (i_val3 + -1 != 0) goto LAB_080caa1a;
      i_val3 = handle[1];
    }
  }
  else {
    i_val3 = handle[5];
    handle[5] = i_val3 + 1U;
    if (i_val3 + 1U <= (uint)handle[1]) goto LAB_080caa1a;
    i_val3 = 1;
  }
  handle[5] = i_val3;
LAB_080caa1a:
  u_val1 = 0x03FF03FF;
  if (i_val6 != handle[5]) {
    HW_Routine_08008EB8(0x03FF03FF,
                  *(int *)(*(int *)(handle[6] + 0x1c) + 0x18) + (handle[3] + 1) * 0x40 +
                  (handle[4] + 1) * 2,4);
    HW_Routine_08008EB8(u_val1,*(int *)(*(int *)(handle[6] + 0x1c) + 0x18) + handle[3] * 0x40 + 0x18,0x1c
                 );
    HW_Routine_08008EB8(u_val1,*(int *)(*(int *)(handle[6] + 0x1c) + 0x18) + (handle[3] + 1) * 0x40 +
                        0x18,0x1c);
    ScriptEngine_Routine_0804EE30(handle[5],
                  *(int *)(*(int *)(handle[6] + 0x1c) + 0x18) + (handle[3] + 1) * 0x40 +
                  (handle[4] + 2) * 2,0x24,0,0x20);
    ScriptEngine_Routine_0804EDB4(handle[5] * *handle,
                  *(int *)(*(int *)(handle[6] + 0x1c) + 0x18) + handle[3] * 0x40 + 0x32,0xa0,0,
                  0x20);
    i_val3 = (int)*(short *)(*(int *)(handle[6] + 0x1c) + 0xc);
    i_val6 = i_val3;
    if (i_val3 < 0) {
      i_val6 = i_val3 + 7;
    }
    i_val5 = i_val3 + 0x100;
    if (i_val5 < 0) {
      i_val5 = i_val3 + 0x107;
    }
    Animal_Routine_08075BC8(*(int *)(handle[6] + 0x1c),i_val6 >> 3,i_val5 >> 3);
    HW_Routine_08008B6C(handle[6] + 0x18,0xcb);
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080CAAF4 @ 0x080CAAF4
// =============================================================================
undefined4 M4A_Routine_080CAAF4(undefined4 *handle)

{
  undefined4 u_val1;
  int i_val2;
  int i_val3;
  int i_val4;
  
  u_val1 = 0x03FF03FF;
  HW_Routine_08008EB8(0x03FF03FF,
                *(int *)(*(int *)(handle[6] + 0x1c) + 0x18) + (handle[3] + 1) * 0x40 +
                handle[4] * 2,0x10);
  HW_Routine_08008EB8(u_val1,*(int *)(*(int *)(handle[6] + 0x1c) + 0x18) + handle[3] * 0x40 + 0x18,0x1c);
  HW_Routine_08008EB8(u_val1,*(int *)(*(int *)(handle[6] + 0x1c) + 0x18) + (handle[3] + 1) * 0x40 + 0x18,
                0x1c);
  ScriptEngine_Routine_0804EDB4(*handle,*(int *)(*(int *)(handle[6] + 0x1c) + 0x18) + handle[3] * 0x40 + 0x32,
                0xa0,0,0x20);
  i_val4 = (int)*(short *)(*(int *)(handle[6] + 0x1c) + 0xc);
  i_val2 = i_val4;
  if (i_val4 < 0) {
    i_val2 = i_val4 + 7;
  }
  i_val3 = i_val4 + 0x100;
  if (i_val3 < 0) {
    i_val3 = i_val4 + 0x107;
  }
  Animal_Routine_08075BC8(*(int *)(handle[6] + 0x1c),i_val2 >> 3,i_val3 >> 3);
  *(undefined1 *)(handle + 2) = 0;
  handle[3] = 0;
  handle[5] = 1;
  return;
}

// =============================================================================
// Function: M4A_Routine_080CABA0 @ 0x080CABA0
// =============================================================================
undefined4 M4A_Routine_080CABA0(int handle,undefined4 channel)

{
  
  handle = handle + 0x348;
  Animal_Routine_08050EBC(handle,4);
  Animal_Routine_08050EBC(handle,8);
  Animal_Routine_08050EBC(handle,1);
  Animal_Routine_08050EBC(handle,2);
  Animal_Routine_08050EBC(handle,0x10);
  Animal_Routine_08050EBC(handle,0x20);
  Animal_Routine_08050D8C(handle,channel);
  return;
}

// =============================================================================
// Function: M4A_Routine_080CABEC @ 0x080CABEC
// =============================================================================
undefined4 M4A_Routine_080CABEC(int handle,undefined4 channel)

{
  
  handle = handle + 0x348;
  Animal_Routine_08050E98(handle,4);
  Animal_Routine_08050E98(handle,8);
  Animal_Routine_08050E98(handle,1);
  Animal_Routine_08050E98(handle,2);
  Animal_Routine_08050E98(handle,0x10);
  Animal_Routine_08050E98(handle,0x20);
  Animal_Routine_08050DC8(handle,channel,0,0);
  return;
}

// =============================================================================
// Function: M4A_Routine_080CAC7C @ 0x080CAC7C
// =============================================================================
undefined8
M4A_Routine_080CAC7C(undefined4 *handle,undefined4 channel,undefined2 param,undefined4 val)

{
  undefined1 stack_buf_a0 [48];
  undefined2 stack_val_70;
  undefined2 stack_val_6e;
  int *piStack_6c;
  int stack_val_68;
  ushort stack_val_60;
  undefined2 stack_val_58;
  undefined2 stack_val_56;
  undefined2 stack_val_54;
  undefined2 stack_val_52;
  undefined2 stack_val_50;
  undefined4 stack_val_4c;
  undefined1 stack_val_48;
  undefined1 stack_val_47;
  undefined4 stack_val_44;
  undefined1 stack_val_40;
  undefined1 stack_val_3c;
  undefined1 stack_buf_38 [8];
  undefined4 stack_val_30;
  undefined4 stack_val_28;
  
  Animal_Routine_0805E6CC(stack_buf_a0);
  stack_val_70 = 0;
  stack_val_6e = 0;
  Animal_Routine_0805E824(&piStack_6c,stack_buf_a0,param,0x100);
  stack_val_58 = 0;
  stack_val_56 = 0;
  stack_val_54 = 0;
  stack_val_52 = 0;
  stack_val_50 = 0;
  stack_val_4c = 0;
  stack_val_48 = 0;
  stack_val_47 = 0;
  stack_val_44 = 0;
  stack_val_40 = 0;
  stack_val_3c = 0;
  _call_via_r3(stack_buf_38,piStack_6c,*(undefined2 *)(stack_val_68 + (uint)stack_val_60 * 4),
                  *(undefined4 *)(*piStack_6c + 0x10));
  handle[1] = stack_val_30;
  handle[2] = stack_val_28;
  *handle = val;
  return handle;
}

// =============================================================================
// Function: M4A_Routine_080CADB4 @ 0x080CADB4
// =============================================================================
undefined8 M4A_Routine_080CADB4(undefined4 *handle,undefined4 channel)

{
  int i_val1;
  
  handle[0x84] = gRomData_080E85CC;
  *handle = channel;
  handle[2] = 0;
  i_val1 = runtime_malloc_aligned(0xc);
  if (i_val1 == 0) {
    i_val1 = VTable_Routine_080D3BC0(0xc);
  }
  *(int *)i_val1 = i_val1;
  *(int *)(i_val1 + 4) = i_val1;
  handle[2] = i_val1;
  return handle;
}

// =============================================================================
// Function: M4A_Routine_080CADF0 @ 0x080CADF0
// =============================================================================
undefined4 M4A_Routine_080CADF0(int handle,uint channel)

{
  undefined4 *p_uint1;
  undefined4 *p_uint2;
  int i_val3;
  undefined4 *p_uint4;
  undefined4 *puStack_18;
  
  *(undefined4 *)(handle + 0x210) = gRomData_080E85CC;
  p_uint1 = *(undefined4 **)(handle + 8);
  p_uint2 = p_uint1;
  p_uint4 = (undefined4 *)*p_uint1;
  puStack_18 = (undefined4 *)*p_uint1;
  while ((int)(-((uint)p_uint4 ^ (uint)p_uint2) | (uint)p_uint4 ^ (uint)p_uint2) < 0) {
    i_val3 = puStack_18[2];
    if (i_val3 != 0) {
      _call_via_r2(i_val3,3,*(undefined4 *)(*(int *)(i_val3 + 8) + 0xc));
    }
    p_uint2 = (undefined4 *)*puStack_18;
    p_uint4 = p_uint1;
    puStack_18 = p_uint2;
  }
  VTable_Routine_080E586C(handle + 4);
  if (*(int *)(handle + 8) != 0) {
    cpp_operator_delete();
  }
  if ((channel & 1) != 0) {
    Dispatcher_Routine_08000608(handle);
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080CAE60 @ 0x080CAE60
// =============================================================================
undefined4
M4A_Routine_080CAE60(int *handle,undefined4 channel,undefined2 param,undefined4 val,
             undefined4 arg_5,undefined2 arg_6,undefined4 arg_7)

{
  undefined4 u_val1;
  int i_val2;
  int i_val3;
  int *p_int4;
  undefined4 *p_uint5;
  
  u_val1 = Dispatcher_Routine_080005D4(0x20);
  i_val2 = ScriptEngine_Routine_0804EA58(u_val1,channel,param,val,arg_5,arg_6,arg_7);
  i_val3 = handle[2];
  p_int4 = (int *)runtime_malloc_aligned(0xc);
  if (p_int4 == (int *)0x0) {
    p_int4 = (int *)VTable_Routine_080D3BC0(0xc);
  }
  if (p_int4 != (int *)0xfffffff8) {
    p_int4[2] = i_val2;
  }
  p_uint5 = *(undefined4 **)(i_val3 + 4);
  *p_int4 = i_val3;
  p_int4[1] = (int)p_uint5;
  *p_uint5 = p_int4;
  *(int **)(i_val3 + 4) = p_int4;
  _call_via_r2(*handle,i_val2,*(undefined4 *)(*(int *)(*handle + 8) + 0x10));
  return;
}

// =============================================================================
// Function: M4A_Routine_080CAEEC @ 0x080CAEEC
// =============================================================================
undefined4
M4A_Routine_080CAEEC(int *handle,undefined4 channel,undefined4 param,undefined2 val,
             undefined2 arg_5,undefined4 arg_6)

{
  undefined4 u_val1;
  int i_val2;
  int i_val3;
  int *p_int4;
  undefined4 *p_uint5;
  
  u_val1 = Dispatcher_Routine_080005D4(0x1c);
  i_val2 = ScriptEngine_Routine_0804EE64(u_val1,channel,param,val,arg_5,arg_6);
  i_val3 = handle[2];
  p_int4 = (int *)runtime_malloc_aligned(0xc);
  if (p_int4 == (int *)0x0) {
    p_int4 = (int *)VTable_Routine_080D3BC0(0xc);
  }
  if (p_int4 != (int *)0xfffffff8) {
    p_int4[2] = i_val2;
  }
  p_uint5 = *(undefined4 **)(i_val3 + 4);
  *p_int4 = i_val3;
  p_int4[1] = (int)p_uint5;
  *p_uint5 = p_int4;
  *(int **)(i_val3 + 4) = p_int4;
  _call_via_r2(*handle,i_val2,*(undefined4 *)(*(int *)(*handle + 8) + 0x10));
  return;
}

// =============================================================================
// Function: M4A_Routine_080CAF6C @ 0x080CAF6C
// =============================================================================
undefined4 M4A_Routine_080CAF6C(int handle)

{
  undefined4 *p_uint1;
  undefined4 *p_uint2;
  uint u_val3;
  uint *p_uint4;
  undefined4 *p_uint5;
  undefined4 *puStack_18;
  
  p_uint1 = *(undefined4 **)(handle + 8);
  puStack_18 = (undefined4 *)*p_uint1;
  while (u_val3 = (uint)puStack_18 ^ (uint)p_uint1, (int)(-u_val3 | u_val3) < 0) {
    p_uint4 = (uint *)puStack_18[2];
    if ((int)(-*p_uint4 | *p_uint4) < 0) {
      puStack_18 = (undefined4 *)*puStack_18;
    }
    else {
      _call_via_r2(p_uint4,3,*(undefined4 *)(p_uint4[2] + 0xc));
      p_uint5 = (undefined4 *)*puStack_18;
      p_uint2 = (undefined4 *)puStack_18[1];
      *p_uint2 = p_uint5;
      p_uint5[1] = p_uint2;
      cpp_operator_delete();
      puStack_18 = p_uint5;
    }
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080CAFC4 @ 0x080CAFC4
// =============================================================================
undefined8
M4A_Routine_080CAFC4(int handle,undefined4 channel,undefined4 param,uint val,undefined4 arg_5,
             undefined1 arg_6)

{
  undefined4 *p_uint1;
  uint u_val2;
  undefined4 stack_val_34;
  undefined4 stack_val_30;
  undefined4 stack_val_2c;
  uint *puStack_28;
  undefined1 *puStack_24;
  
  M4A_Routine_080CADB4(handle,param);
  *(undefined4 *)(handle + 0x210) = gRomData_080E85BC;
  M4A_Routine_080CAC70(&stack_val_34);
  puStack_28 = (uint *)(handle + 0x214);
  *puStack_28 = 0;
  if (val < 9) {
    p_uint1 = (undefined4 *)(handle + 0x218);
    for (u_val2 = val; u_val2 != 0; u_val2 = u_val2 - 1) {
      if (p_uint1 != (undefined4 *)0x0) {
        *p_uint1 = stack_val_34;
        p_uint1[1] = stack_val_30;
        p_uint1[2] = stack_val_2c;
      }
      p_uint1 = p_uint1 + 3;
    }
    *puStack_28 = val;
  }
  *(undefined4 *)(handle + 0x278) = channel;
  *(undefined1 *)(handle + 0x27c) = arg_6;
  puStack_24 = (undefined1 *)&stack_val_34;
  M4A_Routine_080CAC70(handle + 0x280);
  u_val2 = gba_strlen(arg_5);
  if (8 < u_val2) {
    u_val2 = 8;
  }
  gba_memcpy(handle + 0x28c,arg_5,u_val2);
  *(undefined1 *)(handle + 0x28c + u_val2) = 0;
  *(uint *)(handle + 0x298) = val;
  return handle;
}

// =============================================================================
// Function: M4A_Routine_080CB090 @ 0x080CB090
// =============================================================================
undefined4 M4A_Routine_080CB090(int handle)

{
  int *p_int1;
  undefined4 *p_uint2;
  undefined4 *p_uint3;
  int i_val4;
  uint loop_i;
  int i_val6;
  undefined4 u_val7;
  int i_val8;
  int *p_int9;
  char *p_char10;
  undefined4 u_val11;
  undefined4 stack_val_4c;
  undefined4 stack_val_48;
  undefined4 stack_val_44;
  undefined4 stack_val_40;
  uint stack_val_3c;
  undefined4 stack_val_38;
  undefined4 stack_val_34;
  int stack_val_30;
  int stack_val_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  i_val4 = 0x13;
  i_val6 = 0x0600F800;
  i_val8 = 0x0600F000;
  do {
    HW_Routine_08008EB8(0x00030003,i_val6,0x1c);
    HW_Routine_08008EB8(0x03FF03FF,i_val8,0x20);
    i_val8 = i_val8 + 0x40;
    i_val6 = i_val6 + 0x40;
    i_val4 = i_val4 + -1;
  } while (-1 < i_val4);
  stack_val_3c = *gRomData_0811785C;
  if (*(char *)(handle + 0x27c) != '\0') {
    M4A_Routine_080CAE60(handle,(stack_val_3c >> 8 & 0xff) * 0x40 + (stack_val_3c & 0xff) * 2 + 0x0600F800,
                  0x1c,2,2,1,0x20);
  }
  loop_i = 0;
  if (*(int *)(handle + 0x214) != 0) {
    do {
      stack_val_3c = *(uint *)(loop_i * 4 + gRomData_08117860);
      M4A_Routine_080CAE60(handle,(stack_val_3c >> 8 & 0xff) * 0x40 + (stack_val_3c & 0xff) * 2 + 0x0600F800,
                    0x1c,2,2,1,0x20);
      loop_i = loop_i + 1;
    } while (loop_i < *(uint *)(handle + 0x214));
  }
  p_char10 = (char *)(handle + 0x28c);
  if (*p_char10 != '\0') {
    stack_val_38 = 0x20008;
    i_val8 = handle + 0x10;
    ScriptEngine_Routine_0804E7A0(0x20008,i_val8,0);
    i_val6 = gba_strlen(p_char10);
    stack_val_34 = 0x20008;
    ScriptEngine_Routine_0804E958(0x20008,i_val8,i_val6 * -8 + 0x40,0,p_char10,0,1);
    p_int9 = *(int **)(handle + 0x278);
    HW_Routine_08008F0C(&stack_val_4c,i_val8,0x06000B00,0x200);
    p_uint2 = (undefined4 *)p_int9[1];
    if (p_uint2 == (undefined4 *)p_int9[3]) {
      stack_val_2c = 1;
      p_uint3 = (undefined4 *)*p_int9;
      stack_val_30 = (int)p_uint2 - (int)p_uint3 >> 4;
      p_int1 = &stack_val_30;
      if (stack_val_30 == 0) {
        p_int1 = &stack_val_2c;
      }
      puStack_28 = p_uint2;
      if (stack_val_30 + *p_int1 == 0) {
        p_uint2 = (undefined4 *)0x0;
        i_val6 = 0;
        puStack_24 = p_uint2;
      }
      else {
        i_val6 = (stack_val_30 + *p_int1) * 0x10;
        p_uint2 = (undefined4 *)runtime_malloc_aligned(i_val6);
        if (p_uint2 == (undefined4 *)0x0) {
          p_uint2 = (undefined4 *)VTable_Routine_080D3BC0(i_val6);
        }
        p_uint3 = (undefined4 *)*p_int9;
        puStack_24 = p_uint2;
      }
      for (; p_uint3 != puStack_28; p_uint3 = p_uint3 + 4) {
        if (p_uint2 != (undefined4 *)0x0) {
          u_val7 = p_uint3[1];
          u_val11 = p_uint3[2];
          *p_uint2 = *p_uint3;
          p_uint2[1] = u_val7;
          p_uint2[2] = u_val11;
          p_uint2[3] = p_uint3[3];
        }
        p_uint2 = p_uint2 + 4;
      }
      i_val8 = stack_val_2c;
      if (stack_val_2c == 1) {
        if (p_uint2 != (undefined4 *)0x0) {
          *p_uint2 = stack_val_4c;
          p_uint2[1] = stack_val_48;
          p_uint2[2] = stack_val_44;
          p_uint2[3] = stack_val_40;
        }
        p_uint2 = p_uint2 + 4;
      }
      else {
        for (; i_val8 != 0; i_val8 = i_val8 + -1) {
          if (p_uint2 != (undefined4 *)0x0) {
            *p_uint2 = stack_val_4c;
            p_uint2[1] = stack_val_48;
            p_uint2[2] = stack_val_44;
            p_uint2[3] = stack_val_40;
          }
          p_uint2 = p_uint2 + 4;
        }
      }
      i_val4 = *p_int9;
      for (i_val8 = i_val4; i_val8 != p_int9[1]; i_val8 = i_val8 + 0x10) {
      }
      if (i_val4 != 0) {
        cpp_operator_delete(i_val4);
      }
      *p_int9 = (int)puStack_24;
      p_int9[1] = (int)p_uint2;
      p_int9[3] = (int)puStack_24 + i_val6;
    }
    else {
      if (p_uint2 != (undefined4 *)0x0) {
        *p_uint2 = stack_val_4c;
        p_uint2[1] = stack_val_48;
        p_uint2[2] = stack_val_44;
        p_uint2[3] = stack_val_40;
      }
      p_int9[1] = p_int9[1] + 0x10;
    }
    M4A_Routine_080CAE60(handle,0x0600F00C,0x58,8,2,0,0x20);
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080CB304 @ 0x080CB304
// =============================================================================
undefined4 M4A_Routine_080CB304(int handle,int channel,undefined4 param,undefined2 val,uint arg_5)

{
  uint *p_uint1;
  int *p_int2;
  undefined4 *p_uint3;
  int i_val4;
  undefined4 *p_uint5;
  undefined4 *p_uint6;
  int i_val7;
  int i_val8;
  int *p_int9;
  undefined4 u_val10;
  undefined4 u_val11;
  undefined4 stack_val_64;
  undefined4 stack_val_60;
  undefined4 stack_val_5c;
  undefined4 stack_val_58;
  int stack_val_54;
  int stack_val_50;
  int stack_val_4c;
  int stack_val_48;
  uint stack_val_44;
  int stack_val_40;
  uint stack_val_3c;
  int stack_val_38;
  int stack_val_34;
  uint *puStack_30;
  int stack_val_2c;
  int stack_val_28;
  undefined4 *puStack_24;
  
  i_val8 = channel * 0xc + handle;
  stack_val_40 = handle;
  stack_val_28 = channel;
  M4A_Routine_080CAD18(i_val8 + 0x218,param,val,arg_5);
  p_int9 = *(int **)(stack_val_40 + 0x278);
  HW_Routine_08008F0C(&stack_val_64,*(undefined4 *)(i_val8 + 0x21c),stack_val_28 * 0x80 + 0x06000680,0x80);
  p_uint5 = (undefined4 *)p_int9[1];
  if (p_uint5 == (undefined4 *)p_int9[3]) {
    stack_val_50 = 1;
    p_uint6 = (undefined4 *)*p_int9;
    stack_val_54 = (int)p_uint5 - (int)p_uint6 >> 4;
    p_int2 = &stack_val_54;
    if (stack_val_54 == 0) {
      p_int2 = &stack_val_50;
    }
    puStack_24 = p_uint5;
    if (stack_val_54 + *p_int2 == 0) {
      p_uint5 = (undefined4 *)0x0;
      i_val8 = 0;
    }
    else {
      i_val8 = (stack_val_54 + *p_int2) * 0x10;
      p_uint5 = (undefined4 *)runtime_malloc_aligned(i_val8);
      if (p_uint5 == (undefined4 *)0x0) {
        p_uint5 = (undefined4 *)VTable_Routine_080D3BC0(i_val8);
      }
      p_uint6 = (undefined4 *)*p_int9;
    }
    stack_val_38 = stack_val_28 << 1;
    stack_val_2c = stack_val_28 << 5;
    stack_val_34 = stack_val_28 << 2;
    puStack_30 = &stack_val_44;
    stack_val_3c = stack_val_28 + 3;
    p_uint3 = p_uint5;
    for (; p_uint6 != puStack_24; p_uint6 = p_uint6 + 4) {
      if (p_uint3 != (undefined4 *)0x0) {
        u_val10 = p_uint6[1];
        u_val11 = p_uint6[2];
        *p_uint3 = *p_uint6;
        p_uint3[1] = u_val10;
        p_uint3[2] = u_val11;
        p_uint3[3] = p_uint6[3];
      }
      p_uint3 = p_uint3 + 4;
    }
    i_val4 = stack_val_50;
    if (stack_val_50 == 1) {
      if (p_uint3 != (undefined4 *)0x0) {
        *p_uint3 = stack_val_64;
        p_uint3[1] = stack_val_60;
        p_uint3[2] = stack_val_5c;
        p_uint3[3] = stack_val_58;
      }
      p_uint3 = p_uint3 + 4;
    }
    else {
      for (; i_val4 != 0; i_val4 = i_val4 + -1) {
        if (p_uint3 != (undefined4 *)0x0) {
          *p_uint3 = stack_val_64;
          p_uint3[1] = stack_val_60;
          p_uint3[2] = stack_val_5c;
          p_uint3[3] = stack_val_58;
        }
        p_uint3 = p_uint3 + 4;
      }
    }
    i_val7 = *p_int9;
    for (i_val4 = i_val7; i_val4 != p_int9[1]; i_val4 = i_val4 + 0x10) {
    }
    if (i_val7 != 0) {
      cpp_operator_delete(i_val7);
    }
    *p_int9 = (int)p_uint5;
    p_int9[1] = (int)p_uint3;
    p_int9[3] = i_val8 + (int)p_uint5;
  }
  else {
    if (p_uint5 != (undefined4 *)0x0) {
      *p_uint5 = stack_val_64;
      p_uint5[1] = stack_val_60;
      p_uint5[2] = stack_val_5c;
      p_uint5[3] = stack_val_58;
    }
    p_int9[1] = p_int9[1] + 0x10;
    stack_val_2c = stack_val_28 << 5;
    stack_val_34 = stack_val_28 << 2;
    puStack_30 = &stack_val_44;
    stack_val_3c = stack_val_28 + 3;
    stack_val_38 = channel * 2;
  }
  p_int9 = *(int **)(stack_val_40 + 0x278);
  HW_Routine_08008F0C(&stack_val_64,*(undefined4 *)((stack_val_38 + stack_val_28) * 4 + stack_val_40 + 0x220),
                stack_val_2c + 0x05000060,0x20);
  p_uint5 = (undefined4 *)p_int9[1];
  if (p_uint5 == (undefined4 *)p_int9[3]) {
    stack_val_48 = 1;
    p_uint6 = (undefined4 *)*p_int9;
    stack_val_4c = (int)p_uint5 - (int)p_uint6 >> 4;
    p_int2 = &stack_val_4c;
    if (stack_val_4c == 0) {
      p_int2 = &stack_val_48;
    }
    if (stack_val_4c + *p_int2 == 0) {
      p_uint3 = (undefined4 *)0x0;
      i_val8 = 0;
      puStack_24 = p_uint3;
    }
    else {
      i_val8 = (stack_val_4c + *p_int2) * 0x10;
      p_uint3 = (undefined4 *)runtime_malloc_aligned(i_val8);
      if (p_uint3 == (undefined4 *)0x0) {
        p_uint3 = (undefined4 *)VTable_Routine_080D3BC0(i_val8);
      }
      p_uint6 = (undefined4 *)*p_int9;
      puStack_24 = p_uint3;
    }
    for (; p_uint6 != p_uint5; p_uint6 = p_uint6 + 4) {
      if (p_uint3 != (undefined4 *)0x0) {
        u_val10 = p_uint6[1];
        u_val11 = p_uint6[2];
        *p_uint3 = *p_uint6;
        p_uint3[1] = u_val10;
        p_uint3[2] = u_val11;
        p_uint3[3] = p_uint6[3];
      }
      p_uint3 = p_uint3 + 4;
    }
    i_val4 = stack_val_48;
    if (stack_val_48 == 1) {
      if (p_uint3 != (undefined4 *)0x0) {
        *p_uint3 = stack_val_64;
        p_uint3[1] = stack_val_60;
        p_uint3[2] = stack_val_5c;
        p_uint3[3] = stack_val_58;
      }
      p_uint3 = p_uint3 + 4;
    }
    else {
      for (; i_val4 != 0; i_val4 = i_val4 + -1) {
        if (p_uint3 != (undefined4 *)0x0) {
          *p_uint3 = stack_val_64;
          p_uint3[1] = stack_val_60;
          p_uint3[2] = stack_val_5c;
          p_uint3[3] = stack_val_58;
        }
        p_uint3 = p_uint3 + 4;
      }
    }
    i_val7 = *p_int9;
    for (i_val4 = i_val7; i_val4 != p_int9[1]; i_val4 = i_val4 + 0x10) {
    }
    if (i_val7 != 0) {
      cpp_operator_delete(i_val7);
    }
    *p_int9 = (int)puStack_24;
    p_int9[1] = (int)p_uint3;
    p_int9[3] = (int)puStack_24 + i_val8;
  }
  else {
    if (p_uint5 != (undefined4 *)0x0) {
      *p_uint5 = stack_val_64;
      p_uint5[1] = stack_val_60;
      p_uint5[2] = stack_val_5c;
      p_uint5[3] = stack_val_58;
    }
    p_int9[1] = p_int9[1] + 0x10;
  }
  stack_val_44 = *(uint *)(stack_val_34 + gRomData_08117860);
  M4A_Routine_080CAE60(stack_val_40,
                (uint)*(byte *)((int)puStack_30 + 1) * 0x40 + (stack_val_44 & 0xff) * 2 + 0x0600F000
                ,stack_val_34 + 0x34U & 0xffff,2,2,stack_val_3c & 0xffff,0x20);
  p_uint1 = puStack_30;
  M4A_Routine_080CAE60(stack_val_40,
                (uint)*(byte *)((int)puStack_30 + 1) * 0x40 + (stack_val_44 & 0xff) * 2 + 0x0600F080
                ,0x54,2,1,0,0x20);
  if (1 < arg_5) {
    M4A_Routine_080CAEEC(stack_val_40,arg_5,
                  (uint)*(byte *)((int)p_uint1 + 1) * 0x40 + (uint)(byte)*p_uint1 * 2 + 0x0600F082,
                  0x20,0,0x20);
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080CB63C @ 0x080CB63C
// =============================================================================
void M4A_Routine_080CB63C(int handle,int channel,undefined4 param,undefined4 val,uint arg_5)

{
  uint *p_uint1;
  int *p_int2;
  undefined4 *p_uint3;
  int i_val4;
  undefined4 *p_uint5;
  undefined4 *p_uint6;
  int i_val7;
  int i_val8;
  int *p_int9;
  undefined4 u_val10;
  undefined4 u_val11;
  undefined4 stack_val_60;
  undefined4 stack_val_5c;
  undefined4 stack_val_58;
  undefined4 stack_val_54;
  int stack_val_50;
  int stack_val_4c;
  int stack_val_48;
  int stack_val_44;
  uint stack_val_40;
  int stack_val_3c;
  undefined4 stack_val_38;
  uint stack_val_34;
  int stack_val_30;
  uint *puStack_2c;
  int stack_val_28;
  undefined4 *puStack_24;
  
  stack_val_3c = handle;
  stack_val_38 = val;
  M4A_Routine_080CADA0(channel * 0xc + handle + 0x218,param,val,arg_5);
  p_int9 = *(int **)(stack_val_3c + 0x278);
  HW_Routine_08008F0C(&stack_val_60,param,channel * 0x80 + 0x06000680,0x80);
  p_uint5 = (undefined4 *)p_int9[1];
  if (p_uint5 == (undefined4 *)p_int9[3]) {
    stack_val_4c = 1;
    p_uint6 = (undefined4 *)*p_int9;
    stack_val_50 = (int)p_uint5 - (int)p_uint6 >> 4;
    p_int2 = &stack_val_50;
    if (stack_val_50 == 0) {
      p_int2 = &stack_val_4c;
    }
    puStack_24 = p_uint5;
    if (stack_val_50 + *p_int2 == 0) {
      p_uint5 = (undefined4 *)0x0;
      i_val8 = 0;
    }
    else {
      i_val8 = (stack_val_50 + *p_int2) * 0x10;
      p_uint5 = (undefined4 *)runtime_malloc_aligned(i_val8);
      if (p_uint5 == (undefined4 *)0x0) {
        p_uint5 = (undefined4 *)VTable_Routine_080D3BC0(i_val8);
      }
      p_uint6 = (undefined4 *)*p_int9;
    }
    stack_val_28 = channel << 5;
    stack_val_30 = channel << 2;
    puStack_2c = &stack_val_40;
    stack_val_34 = channel + 3;
    p_uint3 = p_uint5;
    for (; p_uint6 != puStack_24; p_uint6 = p_uint6 + 4) {
      if (p_uint3 != (undefined4 *)0x0) {
        u_val10 = p_uint6[1];
        u_val11 = p_uint6[2];
        *p_uint3 = *p_uint6;
        p_uint3[1] = u_val10;
        p_uint3[2] = u_val11;
        p_uint3[3] = p_uint6[3];
      }
      p_uint3 = p_uint3 + 4;
    }
    i_val4 = stack_val_4c;
    if (stack_val_4c == 1) {
      if (p_uint3 != (undefined4 *)0x0) {
        *p_uint3 = stack_val_60;
        p_uint3[1] = stack_val_5c;
        p_uint3[2] = stack_val_58;
        p_uint3[3] = stack_val_54;
      }
      p_uint3 = p_uint3 + 4;
    }
    else {
      for (; i_val4 != 0; i_val4 = i_val4 + -1) {
        if (p_uint3 != (undefined4 *)0x0) {
          *p_uint3 = stack_val_60;
          p_uint3[1] = stack_val_5c;
          p_uint3[2] = stack_val_58;
          p_uint3[3] = stack_val_54;
        }
        p_uint3 = p_uint3 + 4;
      }
    }
    i_val7 = *p_int9;
    for (i_val4 = i_val7; i_val4 != p_int9[1]; i_val4 = i_val4 + 0x10) {
    }
    if (i_val7 != 0) {
      cpp_operator_delete(i_val7);
    }
    *p_int9 = (int)p_uint5;
    p_int9[1] = (int)p_uint3;
    p_int9[3] = i_val8 + (int)p_uint5;
  }
  else {
    if (p_uint5 != (undefined4 *)0x0) {
      *p_uint5 = stack_val_60;
      p_uint5[1] = stack_val_5c;
      p_uint5[2] = stack_val_58;
      p_uint5[3] = stack_val_54;
    }
    p_int9[1] = p_int9[1] + 0x10;
    stack_val_28 = channel << 5;
    stack_val_30 = channel << 2;
    puStack_2c = &stack_val_40;
    stack_val_34 = channel + 3;
  }
  p_int9 = *(int **)(stack_val_3c + 0x278);
  HW_Routine_08008F0C(&stack_val_60,stack_val_38,stack_val_28 + 0x05000060,0x20);
  p_uint5 = (undefined4 *)p_int9[1];
  if (p_uint5 == (undefined4 *)p_int9[3]) {
    stack_val_44 = 1;
    p_uint6 = (undefined4 *)*p_int9;
    stack_val_48 = (int)p_uint5 - (int)p_uint6 >> 4;
    p_int2 = &stack_val_48;
    if (stack_val_48 == 0) {
      p_int2 = &stack_val_44;
    }
    if (stack_val_48 + *p_int2 == 0) {
      p_uint3 = (undefined4 *)0x0;
      i_val8 = 0;
      puStack_24 = p_uint3;
    }
    else {
      i_val8 = (stack_val_48 + *p_int2) * 0x10;
      p_uint3 = (undefined4 *)runtime_malloc_aligned(i_val8);
      if (p_uint3 == (undefined4 *)0x0) {
        p_uint3 = (undefined4 *)VTable_Routine_080D3BC0(i_val8);
      }
      p_uint6 = (undefined4 *)*p_int9;
      puStack_24 = p_uint3;
    }
    for (; p_uint6 != p_uint5; p_uint6 = p_uint6 + 4) {
      if (p_uint3 != (undefined4 *)0x0) {
        u_val10 = p_uint6[1];
        u_val11 = p_uint6[2];
        *p_uint3 = *p_uint6;
        p_uint3[1] = u_val10;
        p_uint3[2] = u_val11;
        p_uint3[3] = p_uint6[3];
      }
      p_uint3 = p_uint3 + 4;
    }
    i_val4 = stack_val_44;
    if (stack_val_44 == 1) {
      if (p_uint3 != (undefined4 *)0x0) {
        *p_uint3 = stack_val_60;
        p_uint3[1] = stack_val_5c;
        p_uint3[2] = stack_val_58;
        p_uint3[3] = stack_val_54;
      }
      p_uint3 = p_uint3 + 4;
    }
    else {
      for (; i_val4 != 0; i_val4 = i_val4 + -1) {
        if (p_uint3 != (undefined4 *)0x0) {
          *p_uint3 = stack_val_60;
          p_uint3[1] = stack_val_5c;
          p_uint3[2] = stack_val_58;
          p_uint3[3] = stack_val_54;
        }
        p_uint3 = p_uint3 + 4;
      }
    }
    i_val7 = *p_int9;
    for (i_val4 = i_val7; i_val4 != p_int9[1]; i_val4 = i_val4 + 0x10) {
    }
    if (i_val7 != 0) {
      cpp_operator_delete(i_val7);
    }
    *p_int9 = (int)puStack_24;
    p_int9[1] = (int)p_uint3;
    p_int9[3] = (int)puStack_24 + i_val8;
  }
  else {
    if (p_uint5 != (undefined4 *)0x0) {
      *p_uint5 = stack_val_60;
      p_uint5[1] = stack_val_5c;
      p_uint5[2] = stack_val_58;
      p_uint5[3] = stack_val_54;
    }
    p_int9[1] = p_int9[1] + 0x10;
  }
  stack_val_40 = *(uint *)(stack_val_30 + gRomData_08117860);
  M4A_Routine_080CAE60(stack_val_3c,
                (uint)*(byte *)((int)puStack_2c + 1) * 0x40 + (stack_val_40 & 0xff) * 2 + 0x0600F000
                ,stack_val_30 + 0x34U & 0xffff,2,2,stack_val_34 & 0xffff,0x20);
  p_uint1 = puStack_2c;
  M4A_Routine_080CAE60(stack_val_3c,
                (uint)*(byte *)((int)puStack_2c + 1) * 0x40 + (stack_val_40 & 0xff) * 2 + 0x0600F080
                ,0x54,2,1,0,0x20);
  if (1 < arg_5) {
    M4A_Routine_080CAEEC(stack_val_3c,arg_5,
                  (uint)*(byte *)((int)p_uint1 + 1) * 0x40 + (uint)(byte)*p_uint1 * 2 + 0x0600F082,
                  0x20,0,0x20);
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080CBAF0 @ 0x080CBAF0
// =============================================================================
undefined4 M4A_Routine_080CBAF0(int handle,undefined4 channel,undefined2 param)

{
  int *p_int1;
  int i_val2;
  uint u_val3;
  undefined4 u_val4;
  undefined4 *p_uint5;
  undefined4 *p_uint6;
  int i_val7;
  int i_val8;
  int *p_int9;
  undefined4 u_val10;
  undefined4 stack_val_50;
  undefined4 stack_val_4c;
  undefined4 stack_val_48;
  undefined4 stack_val_44;
  int stack_val_40;
  int stack_val_3c;
  int stack_val_38;
  int stack_val_34;
  uint stack_val_30;
  uint *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  M4A_Routine_080CAD18(handle + 0x280,channel,param);
  p_int9 = *(int **)(handle + 0x278);
  HW_Routine_08008F0C(&stack_val_50,*(undefined4 *)(handle + 0x284),0x06000600,0x80);
  p_uint5 = (undefined4 *)p_int9[1];
  if (p_uint5 == (undefined4 *)p_int9[3]) {
    stack_val_3c = 1;
    p_uint6 = (undefined4 *)*p_int9;
    stack_val_40 = (int)p_uint5 - (int)p_uint6 >> 4;
    p_int1 = &stack_val_40;
    if (stack_val_40 == 0) {
      p_int1 = &stack_val_3c;
    }
    puStack_28 = p_uint5;
    if (stack_val_40 + *p_int1 == 0) {
      puStack_24 = (undefined4 *)0x0;
      i_val8 = 0;
    }
    else {
      i_val8 = (stack_val_40 + *p_int1) * 0x10;
      puStack_24 = (undefined4 *)runtime_malloc_aligned(i_val8);
      if (puStack_24 == (undefined4 *)0x0) {
        puStack_24 = (undefined4 *)VTable_Routine_080D3BC0(i_val8);
      }
      p_uint6 = (undefined4 *)*p_int9;
    }
    puStack_2c = &stack_val_30;
    p_uint5 = puStack_24;
    for (; p_uint6 != puStack_28; p_uint6 = p_uint6 + 4) {
      if (p_uint5 != (undefined4 *)0x0) {
        u_val4 = p_uint6[1];
        u_val10 = p_uint6[2];
        *p_uint5 = *p_uint6;
        p_uint5[1] = u_val4;
        p_uint5[2] = u_val10;
        p_uint5[3] = p_uint6[3];
      }
      p_uint5 = p_uint5 + 4;
    }
    i_val2 = stack_val_3c;
    if (stack_val_3c == 1) {
      if (p_uint5 != (undefined4 *)0x0) {
        *p_uint5 = stack_val_50;
        p_uint5[1] = stack_val_4c;
        p_uint5[2] = stack_val_48;
        p_uint5[3] = stack_val_44;
      }
      p_uint5 = p_uint5 + 4;
    }
    else {
      for (; i_val2 != 0; i_val2 = i_val2 + -1) {
        if (p_uint5 != (undefined4 *)0x0) {
          *p_uint5 = stack_val_50;
          p_uint5[1] = stack_val_4c;
          p_uint5[2] = stack_val_48;
          p_uint5[3] = stack_val_44;
        }
        p_uint5 = p_uint5 + 4;
      }
    }
    i_val7 = *p_int9;
    for (i_val2 = i_val7; i_val2 != p_int9[1]; i_val2 = i_val2 + 0x10) {
    }
    if (i_val7 != 0) {
      cpp_operator_delete(i_val7);
    }
    *p_int9 = (int)puStack_24;
    p_int9[1] = (int)p_uint5;
    p_int9[3] = (int)puStack_24 + i_val8;
  }
  else {
    if (p_uint5 != (undefined4 *)0x0) {
      *p_uint5 = stack_val_50;
      p_uint5[1] = stack_val_4c;
      p_uint5[2] = stack_val_48;
      p_uint5[3] = stack_val_44;
    }
    p_int9[1] = p_int9[1] + 0x10;
    puStack_2c = &stack_val_30;
  }
  p_int9 = *(int **)(handle + 0x278);
  HW_Routine_08008F0C(&stack_val_50,*(undefined4 *)(handle + 0x288),0x05000040,0x20);
  p_uint5 = (undefined4 *)p_int9[1];
  if (p_uint5 == (undefined4 *)p_int9[3]) {
    stack_val_34 = 1;
    p_uint6 = (undefined4 *)*p_int9;
    stack_val_38 = (int)p_uint5 - (int)p_uint6 >> 4;
    p_int1 = &stack_val_38;
    if (stack_val_38 == 0) {
      p_int1 = &stack_val_34;
    }
    puStack_28 = p_uint5;
    if (stack_val_38 + *p_int1 == 0) {
      p_uint5 = (undefined4 *)0x0;
      i_val8 = 0;
      puStack_24 = p_uint5;
    }
    else {
      i_val8 = (stack_val_38 + *p_int1) * 0x10;
      p_uint5 = (undefined4 *)runtime_malloc_aligned(i_val8);
      if (p_uint5 == (undefined4 *)0x0) {
        p_uint5 = (undefined4 *)VTable_Routine_080D3BC0(i_val8);
      }
      p_uint6 = (undefined4 *)*p_int9;
      puStack_24 = p_uint5;
    }
    for (; p_uint6 != puStack_28; p_uint6 = p_uint6 + 4) {
      if (p_uint5 != (undefined4 *)0x0) {
        u_val4 = p_uint6[1];
        u_val10 = p_uint6[2];
        *p_uint5 = *p_uint6;
        p_uint5[1] = u_val4;
        p_uint5[2] = u_val10;
        p_uint5[3] = p_uint6[3];
      }
      p_uint5 = p_uint5 + 4;
    }
    i_val2 = stack_val_34;
    if (stack_val_34 == 1) {
      if (p_uint5 != (undefined4 *)0x0) {
        *p_uint5 = stack_val_50;
        p_uint5[1] = stack_val_4c;
        p_uint5[2] = stack_val_48;
        p_uint5[3] = stack_val_44;
      }
      p_uint5 = p_uint5 + 4;
    }
    else {
      for (; i_val2 != 0; i_val2 = i_val2 + -1) {
        if (p_uint5 != (undefined4 *)0x0) {
          *p_uint5 = stack_val_50;
          p_uint5[1] = stack_val_4c;
          p_uint5[2] = stack_val_48;
          p_uint5[3] = stack_val_44;
        }
        p_uint5 = p_uint5 + 4;
      }
    }
    i_val7 = *p_int9;
    for (i_val2 = i_val7; i_val2 != p_int9[1]; i_val2 = i_val2 + 0x10) {
    }
    if (i_val7 != 0) {
      cpp_operator_delete(i_val7);
    }
    *p_int9 = (int)puStack_24;
    p_int9[1] = (int)p_uint5;
    p_int9[3] = (int)puStack_24 + i_val8;
  }
  else {
    if (p_uint5 != (undefined4 *)0x0) {
      *p_uint5 = stack_val_50;
      p_uint5[1] = stack_val_4c;
      p_uint5[2] = stack_val_48;
      p_uint5[3] = stack_val_44;
    }
    p_int9[1] = p_int9[1] + 0x10;
  }
  stack_val_30 = *gRomData_0811785C;
  M4A_Routine_080CAE60(handle,(uint)*(byte *)((int)puStack_2c + 1) * 0x40 +
                        (stack_val_30 & 0xff) * 2 + 0x0600F000,0x30,2,2,2,0x20);
  M4A_Routine_080CAE60(handle,(uint)*(byte *)((int)puStack_2c + 1) * 0x40 +
                        (stack_val_30 & 0xff) * 2 + 0x0600F080,0x54,2,1,0,0x20);
  u_val3 = M4A_Routine_080CAD14(handle + 0x280);
  if (1 < u_val3) {
    u_val4 = M4A_Routine_080CAD14(handle + 0x280);
    M4A_Routine_080CAEEC(handle,u_val4,
                  (uint)*(byte *)((int)puStack_2c + 1) * 0x40 +
                  (uint)(byte)*puStack_2c * 2 + 0x0600F082,0x20,0,0x20);
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080CBDD4 @ 0x080CBDD4
// =============================================================================
undefined4 M4A_Routine_080CBDD4(int handle)

{
  int *p_int1;
  int i_val2;
  uint u_val3;
  undefined4 u_val4;
  undefined4 *p_uint5;
  undefined4 *p_uint6;
  int i_val7;
  int i_val8;
  int *p_int9;
  undefined4 u_val10;
  undefined4 stack_val_50;
  undefined4 stack_val_4c;
  undefined4 stack_val_48;
  undefined4 stack_val_44;
  int stack_val_40;
  int stack_val_3c;
  int stack_val_38;
  int stack_val_34;
  uint stack_val_30;
  uint *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  M4A_Routine_080CADA0(handle + 0x280);
  p_int9 = *(int **)(handle + 0x278);
  HW_Routine_08008F0C(&stack_val_50,*(undefined4 *)(handle + 0x284),0x06000600,0x80);
  p_uint5 = (undefined4 *)p_int9[1];
  if (p_uint5 == (undefined4 *)p_int9[3]) {
    stack_val_3c = 1;
    p_uint6 = (undefined4 *)*p_int9;
    stack_val_40 = (int)p_uint5 - (int)p_uint6 >> 4;
    p_int1 = &stack_val_40;
    if (stack_val_40 == 0) {
      p_int1 = &stack_val_3c;
    }
    puStack_28 = p_uint5;
    if (stack_val_40 + *p_int1 == 0) {
      puStack_24 = (undefined4 *)0x0;
      i_val8 = 0;
    }
    else {
      i_val8 = (stack_val_40 + *p_int1) * 0x10;
      puStack_24 = (undefined4 *)runtime_malloc_aligned(i_val8);
      if (puStack_24 == (undefined4 *)0x0) {
        puStack_24 = (undefined4 *)VTable_Routine_080D3BC0(i_val8);
      }
      p_uint6 = (undefined4 *)*p_int9;
    }
    puStack_2c = &stack_val_30;
    p_uint5 = puStack_24;
    for (; p_uint6 != puStack_28; p_uint6 = p_uint6 + 4) {
      if (p_uint5 != (undefined4 *)0x0) {
        u_val4 = p_uint6[1];
        u_val10 = p_uint6[2];
        *p_uint5 = *p_uint6;
        p_uint5[1] = u_val4;
        p_uint5[2] = u_val10;
        p_uint5[3] = p_uint6[3];
      }
      p_uint5 = p_uint5 + 4;
    }
    i_val2 = stack_val_3c;
    if (stack_val_3c == 1) {
      if (p_uint5 != (undefined4 *)0x0) {
        *p_uint5 = stack_val_50;
        p_uint5[1] = stack_val_4c;
        p_uint5[2] = stack_val_48;
        p_uint5[3] = stack_val_44;
      }
      p_uint5 = p_uint5 + 4;
    }
    else {
      for (; i_val2 != 0; i_val2 = i_val2 + -1) {
        if (p_uint5 != (undefined4 *)0x0) {
          *p_uint5 = stack_val_50;
          p_uint5[1] = stack_val_4c;
          p_uint5[2] = stack_val_48;
          p_uint5[3] = stack_val_44;
        }
        p_uint5 = p_uint5 + 4;
      }
    }
    i_val7 = *p_int9;
    for (i_val2 = i_val7; i_val2 != p_int9[1]; i_val2 = i_val2 + 0x10) {
    }
    if (i_val7 != 0) {
      cpp_operator_delete(i_val7);
    }
    *p_int9 = (int)puStack_24;
    p_int9[1] = (int)p_uint5;
    p_int9[3] = (int)puStack_24 + i_val8;
  }
  else {
    if (p_uint5 != (undefined4 *)0x0) {
      *p_uint5 = stack_val_50;
      p_uint5[1] = stack_val_4c;
      p_uint5[2] = stack_val_48;
      p_uint5[3] = stack_val_44;
    }
    p_int9[1] = p_int9[1] + 0x10;
    puStack_2c = &stack_val_30;
  }
  p_int9 = *(int **)(handle + 0x278);
  HW_Routine_08008F0C(&stack_val_50,*(undefined4 *)(handle + 0x288),0x05000040,0x20);
  p_uint5 = (undefined4 *)p_int9[1];
  if (p_uint5 == (undefined4 *)p_int9[3]) {
    stack_val_34 = 1;
    p_uint6 = (undefined4 *)*p_int9;
    stack_val_38 = (int)p_uint5 - (int)p_uint6 >> 4;
    p_int1 = &stack_val_38;
    if (stack_val_38 == 0) {
      p_int1 = &stack_val_34;
    }
    puStack_28 = p_uint5;
    if (stack_val_38 + *p_int1 == 0) {
      p_uint5 = (undefined4 *)0x0;
      i_val8 = 0;
      puStack_24 = p_uint5;
    }
    else {
      i_val8 = (stack_val_38 + *p_int1) * 0x10;
      p_uint5 = (undefined4 *)runtime_malloc_aligned(i_val8);
      if (p_uint5 == (undefined4 *)0x0) {
        p_uint5 = (undefined4 *)VTable_Routine_080D3BC0(i_val8);
      }
      p_uint6 = (undefined4 *)*p_int9;
      puStack_24 = p_uint5;
    }
    for (; p_uint6 != puStack_28; p_uint6 = p_uint6 + 4) {
      if (p_uint5 != (undefined4 *)0x0) {
        u_val4 = p_uint6[1];
        u_val10 = p_uint6[2];
        *p_uint5 = *p_uint6;
        p_uint5[1] = u_val4;
        p_uint5[2] = u_val10;
        p_uint5[3] = p_uint6[3];
      }
      p_uint5 = p_uint5 + 4;
    }
    i_val2 = stack_val_34;
    if (stack_val_34 == 1) {
      if (p_uint5 != (undefined4 *)0x0) {
        *p_uint5 = stack_val_50;
        p_uint5[1] = stack_val_4c;
        p_uint5[2] = stack_val_48;
        p_uint5[3] = stack_val_44;
      }
      p_uint5 = p_uint5 + 4;
    }
    else {
      for (; i_val2 != 0; i_val2 = i_val2 + -1) {
        if (p_uint5 != (undefined4 *)0x0) {
          *p_uint5 = stack_val_50;
          p_uint5[1] = stack_val_4c;
          p_uint5[2] = stack_val_48;
          p_uint5[3] = stack_val_44;
        }
        p_uint5 = p_uint5 + 4;
      }
    }
    i_val7 = *p_int9;
    for (i_val2 = i_val7; i_val2 != p_int9[1]; i_val2 = i_val2 + 0x10) {
    }
    if (i_val7 != 0) {
      cpp_operator_delete(i_val7);
    }
    *p_int9 = (int)puStack_24;
    p_int9[1] = (int)p_uint5;
    p_int9[3] = (int)puStack_24 + i_val8;
  }
  else {
    if (p_uint5 != (undefined4 *)0x0) {
      *p_uint5 = stack_val_50;
      p_uint5[1] = stack_val_4c;
      p_uint5[2] = stack_val_48;
      p_uint5[3] = stack_val_44;
    }
    p_int9[1] = p_int9[1] + 0x10;
  }
  stack_val_30 = *gRomData_0811785C;
  M4A_Routine_080CAE60(handle,(uint)*(byte *)((int)puStack_2c + 1) * 0x40 +
                        (stack_val_30 & 0xff) * 2 + 0x0600F000,0x30,2,2,2,0x20);
  M4A_Routine_080CAE60(handle,(uint)*(byte *)((int)puStack_2c + 1) * 0x40 +
                        (stack_val_30 & 0xff) * 2 + 0x0600F080,0x54,2,1,0,0x20);
  u_val3 = M4A_Routine_080CAD14(handle + 0x280);
  if (1 < u_val3) {
    u_val4 = M4A_Routine_080CAD14(handle + 0x280);
    M4A_Routine_080CAEEC(handle,u_val4,
                  (uint)*(byte *)((int)puStack_2c + 1) * 0x40 +
                  (uint)(byte)*puStack_2c * 2 + 0x0600F082,0x20,0,0x20);
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080CC0B4 @ 0x080CC0B4
// =============================================================================
undefined4 M4A_Routine_080CC0B4(int handle)

{
  uint u_val1;
  
  M4A_Routine_080CADA8(handle + 0x280);
  u_val1 = *gRomData_0811785C;
  M4A_Routine_080CAE60(handle,(u_val1 >> 8 & 0xff) * 0x40 + (u_val1 & 0xff) * 2 + 0x0600F000,0x54,2,2,0,
                0x20);
  M4A_Routine_080CAE60(handle,(u_val1 >> 8 & 0xff) * 0x40 + (u_val1 & 0xff) * 2 + 0x0600F080,0x54,2,1,0,
                0x20);
  return;
}

// =============================================================================
// Function: M4A_Routine_080CC150 @ 0x080CC150
// =============================================================================
undefined4 M4A_Routine_080CC150(void)

{
  
  M4A_Routine_080CAF6C();
  return;
}

// =============================================================================
// Function: M4A_Routine_080CC15C @ 0x080CC15C
// =============================================================================
undefined8
M4A_Routine_080CC15C(int handle,undefined4 channel,undefined4 param,uint val,undefined4 arg_5,
             char arg_6)

{
  undefined4 u_val1;
  undefined4 *p_uint2;
  uint loop_i;
  int i_val4;
  int i_val5;
  undefined4 stack_val_34;
  undefined4 stack_val_30;
  undefined4 stack_val_2c;
  uint stack_val_28;
  undefined1 *puStack_24;
  
  stack_val_28 = val;
  M4A_Routine_080CADB4(handle,param);
  *(undefined4 *)(handle + 0x210) = gRomData_080E85AC;
  M4A_Routine_080CAC70(&stack_val_34);
  *(uint *)(handle + 0x214) = 0;
  if (stack_val_28 < 9) {
    p_uint2 = (undefined4 *)(handle + 0x218);
    for (loop_i = stack_val_28; loop_i != 0; loop_i = loop_i - 1) {
      if (p_uint2 != (undefined4 *)0x0) {
        *p_uint2 = stack_val_34;
        p_uint2[1] = stack_val_30;
        p_uint2[2] = stack_val_2c;
      }
      p_uint2 = p_uint2 + 3;
    }
    *(uint *)(handle + 0x214) = stack_val_28;
  }
  *(undefined4 *)(handle + 0x278) = channel;
  *(char *)(handle + 0x27c) = arg_6;
  puStack_24 = (undefined1 *)&stack_val_34;
  M4A_Routine_080CAC70(handle + 0x280);
  loop_i = gba_strlen(arg_5);
  if (8 < loop_i) {
    loop_i = 8;
  }
  gba_memcpy(handle + 0x28c,arg_5,loop_i);
  *(undefined1 *)(handle + 0x28c + loop_i) = 0;
  *(uint *)(handle + 0x298) = stack_val_28;
  HW_Routine_08007874(handle + 0x29c);
  *(undefined4 *)(handle + 0x2a0) = 0;
  HW_Routine_08007128(handle + 0x2a4);
  *(undefined4 *)(handle + 0x2a8) = 0;
  i_val4 = handle + 0x2ac;
  i_val5 = 7;
  do {
    HW_Routine_08007874(i_val4);
    *(undefined4 *)(i_val4 + 4) = 0;
    i_val4 = i_val4 + 8;
    i_val5 = i_val5 + -1;
  } while (i_val5 != -1);
  i_val4 = handle + 0x2ec;
  i_val5 = 7;
  do {
    HW_Routine_08007128(i_val4);
    *(undefined4 *)(i_val4 + 4) = 0;
    i_val4 = i_val4 + 8;
    i_val5 = i_val5 + -1;
  } while (i_val5 != -1);
  loop_i = 0;
  p_uint2 = (undefined4 *)(handle + 0x2b0);
  do {
    i_val4 = loop_i * 8 + handle + 0x2ac;
    HW_Routine_08007C28(i_val4,*p_uint2);
    u_val1 = HW_Routine_08007B54(i_val4,2);
    *p_uint2 = u_val1;
    i_val4 = loop_i * 8 + handle + 0x2ec;
    HW_Routine_080073E0(i_val4,p_uint2[0x10]);
    u_val1 = HW_Routine_0800736C(i_val4);
    p_uint2[0x10] = u_val1;
    p_uint2 = p_uint2 + 2;
    loop_i = loop_i + 1;
  } while (loop_i < 8);
  if (arg_6 != '\0') {
    HW_Routine_08007C28(handle + 0x29c,*(undefined4 *)(handle + 0x2a0));
    u_val1 = HW_Routine_08007B54(handle + 0x29c,2);
    *(undefined4 *)(handle + 0x2a0) = u_val1;
    HW_Routine_080073E0(handle + 0x2a4,*(undefined4 *)(handle + 0x2a8));
    u_val1 = HW_Routine_0800736C(handle + 0x2a4);
    *(undefined4 *)(handle + 0x2a8) = u_val1;
  }
  return handle;
}

// =============================================================================
// Function: M4A_Routine_080CC310 @ 0x080CC310
// =============================================================================
undefined4 M4A_Routine_080CC310(int handle)

{
  uint loop_i;
  int *p_int2;
  uint u_val3;
  undefined4 *p_uint4;
  undefined4 *p_uint5;
  uint u_val6;
  int i_val7;
  int i_val8;
  undefined4 u_val9;
  int i_val10;
  int *p_int11;
  char *p_char12;
  undefined4 u_val13;
  undefined4 stack_val_4c;
  undefined4 stack_val_48;
  undefined4 stack_val_44;
  undefined4 stack_val_40;
  uint stack_val_3c;
  undefined4 stack_val_38;
  undefined4 stack_val_34;
  int stack_val_30;
  int stack_val_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  i_val7 = 0x13;
  i_val8 = 0x0600F822;
  i_val10 = 0x0600F01E;
  do {
    HW_Routine_08008EB8(0x00030003,i_val8,0x1c);
    HW_Routine_08008EB8(0x03FF03FF,i_val10,0x20);
    i_val10 = i_val10 + 0x40;
    i_val8 = i_val8 + 0x40;
    i_val7 = i_val7 + -1;
  } while (-1 < i_val7);
  loop_i = *gRomData_0811785C + 0xf & 0xff;
  u_val3 = *gRomData_0811785C & 0xFFFFFF00;
  stack_val_3c = u_val3 | loop_i;
  if (*(char *)(handle + 0x27c) != '\0') {
    M4A_Routine_080CAE60(handle,((u_val3 & 0xff00) >> 8) * 0x40 +
                          (u_val3 & 0xff | loop_i) * 2 + 0x0600F800,0x1c,2,2,1,0x20);
  }
  loop_i = 0;
  if (*(int *)(handle + 0x214) != 0) {
    do {
      u_val6 = *(uint *)(loop_i * 4 + gRomData_08117860);
      u_val3 = u_val6 + 0xf & 0xff;
      u_val6 = u_val6 & 0xFFFFFF00;
      stack_val_3c = u_val6 | u_val3;
      M4A_Routine_080CAE60(handle,((u_val6 & 0xff00) >> 8) * 0x40 +
                            (u_val6 & 0xff | u_val3) * 2 + 0x0600F800,0x1c,2,2,1,0x20);
      loop_i = loop_i + 1;
    } while (loop_i < *(uint *)(handle + 0x214));
  }
  p_char12 = (char *)(handle + 0x28c);
  if (*p_char12 != '\0') {
    stack_val_38 = 0x20008;
    i_val10 = handle + 0x10;
    ScriptEngine_Routine_0804E7A0(0x20008,i_val10,0);
    i_val8 = gba_strlen(p_char12);
    stack_val_34 = 0x20008;
    ScriptEngine_Routine_0804E958(0x20008,i_val10,i_val8 * -8 + 0x40,0,p_char12,0,1);
    p_int11 = *(int **)(handle + 0x278);
    HW_Routine_08008F0C(&stack_val_4c,i_val10,0x06000D00,0x200);
    p_uint4 = (undefined4 *)p_int11[1];
    if (p_uint4 == (undefined4 *)p_int11[3]) {
      stack_val_2c = 1;
      p_uint5 = (undefined4 *)*p_int11;
      stack_val_30 = (int)p_uint4 - (int)p_uint5 >> 4;
      p_int2 = &stack_val_30;
      if (stack_val_30 == 0) {
        p_int2 = &stack_val_2c;
      }
      puStack_28 = p_uint4;
      if (stack_val_30 + *p_int2 == 0) {
        p_uint4 = (undefined4 *)0x0;
        i_val8 = 0;
        puStack_24 = p_uint4;
      }
      else {
        i_val8 = (stack_val_30 + *p_int2) * 0x10;
        p_uint4 = (undefined4 *)runtime_malloc_aligned(i_val8);
        if (p_uint4 == (undefined4 *)0x0) {
          p_uint4 = (undefined4 *)VTable_Routine_080D3BC0(i_val8);
        }
        p_uint5 = (undefined4 *)*p_int11;
        puStack_24 = p_uint4;
      }
      for (; p_uint5 != puStack_28; p_uint5 = p_uint5 + 4) {
        if (p_uint4 != (undefined4 *)0x0) {
          u_val9 = p_uint5[1];
          u_val13 = p_uint5[2];
          *p_uint4 = *p_uint5;
          p_uint4[1] = u_val9;
          p_uint4[2] = u_val13;
          p_uint4[3] = p_uint5[3];
        }
        p_uint4 = p_uint4 + 4;
      }
      i_val10 = stack_val_2c;
      if (stack_val_2c == 1) {
        if (p_uint4 != (undefined4 *)0x0) {
          *p_uint4 = stack_val_4c;
          p_uint4[1] = stack_val_48;
          p_uint4[2] = stack_val_44;
          p_uint4[3] = stack_val_40;
        }
        p_uint4 = p_uint4 + 4;
      }
      else {
        for (; i_val10 != 0; i_val10 = i_val10 + -1) {
          if (p_uint4 != (undefined4 *)0x0) {
            *p_uint4 = stack_val_4c;
            p_uint4[1] = stack_val_48;
            p_uint4[2] = stack_val_44;
            p_uint4[3] = stack_val_40;
          }
          p_uint4 = p_uint4 + 4;
        }
      }
      i_val7 = *p_int11;
      for (i_val10 = i_val7; i_val10 != p_int11[1]; i_val10 = i_val10 + 0x10) {
      }
      if (i_val7 != 0) {
        cpp_operator_delete(i_val7);
      }
      *p_int11 = (int)puStack_24;
      p_int11[1] = (int)p_uint4;
      p_int11[3] = (int)puStack_24 + i_val8;
    }
    else {
      if (p_uint4 != (undefined4 *)0x0) {
        *p_uint4 = stack_val_4c;
        p_uint4[1] = stack_val_48;
        p_uint4[2] = stack_val_44;
        p_uint4[3] = stack_val_40;
      }
      p_int11[1] = p_int11[1] + 0x10;
    }
    M4A_Routine_080CAE60(handle,0x0600F02A,0x68,8,2,0,0x20);
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080CC58C @ 0x080CC58C
// =============================================================================
undefined4 M4A_Routine_080CC58C(int handle,byte *channel)

{
  byte b_flag1;
  undefined4 *p_uint2;
  undefined4 u_val3;
  undefined4 u_val4;
  bool b_flag5;
  int i_val6;
  uint u_val7;
  uint u_val8;
  int *p_int9;
  undefined4 stack_val_40;
  undefined2 stack_val_3c;
  undefined4 stack_val_38;
  undefined2 stack_val_34;
  byte *pbStack_30;
  uint stack_val_2c;
  uint *puStack_28;
  int stack_val_24;
  
  pbStack_30 = channel;
  M4A_Routine_080CAF6C();
  stack_val_2c = 0;
  if (*(int *)(handle + 0x214) != 0) {
    puStack_28 = (uint *)(handle + 0x214);
    p_uint2 = (undefined4 *)(handle + 0x2b0);
    p_int9 = (int *)(handle + 0x21c);
    do {
      stack_val_24 = 0;
      if ((*p_int9 == 0) || (p_int9[1] == 0)) {
        stack_val_24 = 1;
      }
      if (stack_val_24 == 0) {
        u_val7 = *(uint *)(stack_val_2c * 4 + gRomData_08117860);
        u_val8 = u_val7 & 0xFFFFFF00;
        i_val6 = stack_val_2c * 8;
        u_val3 = HW_Routine_08007D4C(i_val6 + handle + 0x2ac,*p_uint2);
        u_val4 = HW_Routine_080074C0(i_val6 + handle + 0x2ec,p_uint2[0x10]);
        ScriptEngine_Routine_0804EA94(&stack_val_40,(u_val7 + 0xf & 0xff) * 8,(u_val8 & 0xffff) >> 5,u_val3,u_val4,1,1,
                      stack_val_24);
        b_flag1 = *pbStack_30;
        if (b_flag1 < 0x80) {
          *(undefined4 *)(pbStack_30 + (uint)b_flag1 * 8 + 4) = stack_val_40;
          *(undefined2 *)(pbStack_30 + (uint)b_flag1 * 8 + 4 + 4) = stack_val_3c;
          *pbStack_30 = b_flag1 + 1;
        }
      }
      p_uint2 = p_uint2 + 2;
      p_int9 = p_int9 + 3;
      stack_val_2c = stack_val_2c + 1;
    } while (stack_val_2c < *puStack_28);
  }
  b_flag5 = false;
  if ((*(int *)(handle + 0x284) == 0) || (*(int *)(handle + 0x288) == 0)) {
    b_flag5 = true;
  }
  if (!b_flag5) {
    u_val7 = *gRomData_0811785C;
    u_val3 = HW_Routine_08007D4C(handle + 0x29c,*(undefined4 *)(handle + 0x2a0));
    u_val4 = HW_Routine_080074C0(handle + 0x2a4,*(undefined4 *)(handle + 0x2a8));
    ScriptEngine_Routine_0804EA94(&stack_val_38,(u_val7 + 0xf & 0xff) * 8,(u_val7 >> 8 & 0xff) * 8,u_val3,u_val4,1,1,0);
    b_flag1 = *pbStack_30;
    if (b_flag1 < 0x80) {
      *(undefined4 *)(pbStack_30 + (uint)b_flag1 * 8 + 4) = stack_val_38;
      *(undefined2 *)(pbStack_30 + (uint)b_flag1 * 8 + 4 + 4) = stack_val_34;
      *pbStack_30 = b_flag1 + 1;
    }
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080CCD48 @ 0x080CCD48
// =============================================================================
undefined4 M4A_Routine_080CCD48(int handle,int channel,uint param)

{
  uint u_val1;
  uint u_val2;
  
  M4A_Routine_080CAD10(channel * 0xc + handle + 0x218,param);
  u_val2 = *(uint *)(channel * 4 + gRomData_08117860);
  u_val1 = u_val2 + 0xf & 0xff;
  u_val2 = u_val2 & 0xFFFFFF00;
  M4A_Routine_080CAE60(handle,((u_val2 & 0xff00) >> 8) * 0x40 + (u_val2 & 0xff | u_val1) * 2 + 0x0600F080,
                0x54,2,1,0,0x20);
  if (1 < param) {
    M4A_Routine_080CAEEC(handle,param,
                  ((u_val2 & 0xff00) >> 8) * 0x40 + (u_val2 & 0xff | u_val1) * 2 + 0x0600F082,0x20,0
                  ,0x20);
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080CCDEC @ 0x080CCDEC
// =============================================================================
undefined4 M4A_Routine_080CCDEC(int handle,int channel)

{
  uint u_val1;
  uint u_val2;
  
  M4A_Routine_080CADA8(channel * 0xc + handle + 0x218);
  u_val1 = *(uint *)(channel * 4 + gRomData_08117860);
  u_val2 = u_val1 & 0xFFFFFF00;
  M4A_Routine_080CAE60(handle,((u_val2 & 0xff00) >> 8) * 0x40 +
                        (u_val2 & 0xff | u_val1 + 0xf & 0xff) * 2 + 0x0600F080,0x54,2,1,0,0x20);
  return;
}

// =============================================================================
// Function: M4A_Routine_080CCE58 @ 0x080CCE58
// =============================================================================
undefined4 M4A_Routine_080CCE58(int handle,undefined4 channel,undefined2 param,uint val)

{
  int i_val1;
  int *p_int2;
  int i_val3;
  uint u_val4;
  undefined4 *p_uint5;
  undefined4 *p_uint6;
  int i_val7;
  uint u_val8;
  undefined4 u_val9;
  int *p_int10;
  undefined4 u_val11;
  undefined4 stack_val_5c;
  undefined4 stack_val_58;
  undefined4 stack_val_54;
  undefined4 stack_val_50;
  int stack_val_4c;
  int stack_val_48;
  int stack_val_44;
  int stack_val_40;
  uint stack_val_3c;
  uint stack_val_38;
  int stack_val_34;
  int stack_val_30;
  uint *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  stack_val_38 = val;
  M4A_Routine_080CAD18(handle + 0x280,channel,param);
  i_val1 = HW_Routine_08007D4C(handle + 0x29c,*(undefined4 *)(handle + 0x2a0));
  stack_val_34 = HW_Routine_080074C0(handle + 0x2a4,*(undefined4 *)(handle + 0x2a8));
  p_int10 = *(int **)(handle + 0x278);
  HW_Routine_08008F0C(&stack_val_5c,*(undefined4 *)(handle + 0x284),i_val1 * 0x20 + 0x06010000,0x80);
  p_uint5 = (undefined4 *)p_int10[1];
  if (p_uint5 == (undefined4 *)p_int10[3]) {
    stack_val_48 = 1;
    p_uint6 = (undefined4 *)*p_int10;
    stack_val_4c = (int)p_uint5 - (int)p_uint6 >> 4;
    p_int2 = &stack_val_4c;
    if (stack_val_4c == 0) {
      p_int2 = &stack_val_48;
    }
    puStack_28 = p_uint5;
    if (stack_val_4c + *p_int2 == 0) {
      puStack_24 = (undefined4 *)0x0;
      i_val1 = 0;
    }
    else {
      i_val1 = (stack_val_4c + *p_int2) * 0x10;
      puStack_24 = (undefined4 *)runtime_malloc_aligned(i_val1);
      if (puStack_24 == (undefined4 *)0x0) {
        puStack_24 = (undefined4 *)VTable_Routine_080D3BC0(i_val1);
      }
      p_uint6 = (undefined4 *)*p_int10;
    }
    stack_val_30 = stack_val_34 << 5;
    puStack_2c = &stack_val_3c;
    p_uint5 = puStack_24;
    for (; p_uint6 != puStack_28; p_uint6 = p_uint6 + 4) {
      if (p_uint5 != (undefined4 *)0x0) {
        u_val9 = p_uint6[1];
        u_val11 = p_uint6[2];
        *p_uint5 = *p_uint6;
        p_uint5[1] = u_val9;
        p_uint5[2] = u_val11;
        p_uint5[3] = p_uint6[3];
      }
      p_uint5 = p_uint5 + 4;
    }
    i_val3 = stack_val_48;
    if (stack_val_48 == 1) {
      if (p_uint5 != (undefined4 *)0x0) {
        *p_uint5 = stack_val_5c;
        p_uint5[1] = stack_val_58;
        p_uint5[2] = stack_val_54;
        p_uint5[3] = stack_val_50;
      }
      p_uint5 = p_uint5 + 4;
    }
    else {
      for (; i_val3 != 0; i_val3 = i_val3 + -1) {
        if (p_uint5 != (undefined4 *)0x0) {
          *p_uint5 = stack_val_5c;
          p_uint5[1] = stack_val_58;
          p_uint5[2] = stack_val_54;
          p_uint5[3] = stack_val_50;
        }
        p_uint5 = p_uint5 + 4;
      }
    }
    i_val7 = *p_int10;
    for (i_val3 = i_val7; i_val3 != p_int10[1]; i_val3 = i_val3 + 0x10) {
    }
    if (i_val7 != 0) {
      cpp_operator_delete(i_val7);
    }
    *p_int10 = (int)puStack_24;
    p_int10[1] = (int)p_uint5;
    p_int10[3] = (int)puStack_24 + i_val1;
  }
  else {
    if (p_uint5 != (undefined4 *)0x0) {
      *p_uint5 = stack_val_5c;
      p_uint5[1] = stack_val_58;
      p_uint5[2] = stack_val_54;
      p_uint5[3] = stack_val_50;
    }
    p_int10[1] = p_int10[1] + 0x10;
    stack_val_30 = stack_val_34 << 5;
    puStack_2c = &stack_val_3c;
  }
  p_int10 = *(int **)(handle + 0x278);
  HW_Routine_08008F0C(&stack_val_5c,*(undefined4 *)(handle + 0x288),stack_val_30 + 0x05000200,0x20);
  p_uint5 = (undefined4 *)p_int10[1];
  if (p_uint5 == (undefined4 *)p_int10[3]) {
    stack_val_40 = 1;
    p_uint6 = (undefined4 *)*p_int10;
    stack_val_44 = (int)p_uint5 - (int)p_uint6 >> 4;
    p_int2 = &stack_val_44;
    if (stack_val_44 == 0) {
      p_int2 = &stack_val_40;
    }
    puStack_28 = p_uint5;
    if (stack_val_44 + *p_int2 == 0) {
      p_uint5 = (undefined4 *)0x0;
      i_val1 = 0;
      puStack_24 = p_uint5;
    }
    else {
      i_val1 = (stack_val_44 + *p_int2) * 0x10;
      p_uint5 = (undefined4 *)runtime_malloc_aligned(i_val1);
      if (p_uint5 == (undefined4 *)0x0) {
        p_uint5 = (undefined4 *)VTable_Routine_080D3BC0(i_val1);
      }
      p_uint6 = (undefined4 *)*p_int10;
      puStack_24 = p_uint5;
    }
    for (; p_uint6 != puStack_28; p_uint6 = p_uint6 + 4) {
      if (p_uint5 != (undefined4 *)0x0) {
        u_val9 = p_uint6[1];
        u_val11 = p_uint6[2];
        *p_uint5 = *p_uint6;
        p_uint5[1] = u_val9;
        p_uint5[2] = u_val11;
        p_uint5[3] = p_uint6[3];
      }
      p_uint5 = p_uint5 + 4;
    }
    i_val3 = stack_val_40;
    if (stack_val_40 == 1) {
      if (p_uint5 != (undefined4 *)0x0) {
        *p_uint5 = stack_val_5c;
        p_uint5[1] = stack_val_58;
        p_uint5[2] = stack_val_54;
        p_uint5[3] = stack_val_50;
      }
      p_uint5 = p_uint5 + 4;
    }
    else {
      for (; i_val3 != 0; i_val3 = i_val3 + -1) {
        if (p_uint5 != (undefined4 *)0x0) {
          *p_uint5 = stack_val_5c;
          p_uint5[1] = stack_val_58;
          p_uint5[2] = stack_val_54;
          p_uint5[3] = stack_val_50;
        }
        p_uint5 = p_uint5 + 4;
      }
    }
    i_val7 = *p_int10;
    for (i_val3 = i_val7; i_val3 != p_int10[1]; i_val3 = i_val3 + 0x10) {
    }
    if (i_val7 != 0) {
      cpp_operator_delete(i_val7);
    }
    *p_int10 = (int)puStack_24;
    p_int10[1] = (int)p_uint5;
    p_int10[3] = (int)puStack_24 + i_val1;
  }
  else {
    if (p_uint5 != (undefined4 *)0x0) {
      *p_uint5 = stack_val_5c;
      p_uint5[1] = stack_val_58;
      p_uint5[2] = stack_val_54;
      p_uint5[3] = stack_val_50;
    }
    p_int10[1] = p_int10[1] + 0x10;
  }
  u_val4 = *gRomData_0811785C + 0xf & 0xff;
  u_val8 = *gRomData_0811785C & 0xFFFFFF00;
  stack_val_3c = u_val8 | u_val4;
  M4A_Routine_080CAE60(handle,(uint)*(byte *)((int)puStack_2c + 1) * 0x40 +
                        (u_val8 & 0xff | u_val4) * 2 + 0x0600F080,0x54,2,1,0,0x20);
  if (1 < stack_val_38) {
    M4A_Routine_080CAEEC(handle,stack_val_38,
                  (uint)*(byte *)((int)puStack_2c + 1) * 0x40 +
                  (uint)(byte)*puStack_2c * 2 + 0x0600F082,0x20,0,0x20);
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080CD14C @ 0x080CD14C
// =============================================================================
undefined4 M4A_Routine_080CD14C(int handle,undefined4 channel,undefined4 param,uint val)

{
  int i_val1;
  int *p_int2;
  int i_val3;
  uint u_val4;
  undefined4 *p_uint5;
  undefined4 *p_uint6;
  int i_val7;
  uint u_val8;
  undefined4 u_val9;
  int *p_int10;
  undefined4 u_val11;
  undefined4 stack_val_5c;
  undefined4 stack_val_58;
  undefined4 stack_val_54;
  undefined4 stack_val_50;
  int stack_val_4c;
  int stack_val_48;
  int stack_val_44;
  int stack_val_40;
  uint stack_val_3c;
  uint stack_val_38;
  int stack_val_34;
  uint *puStack_30;
  int stack_val_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  stack_val_38 = val;
  M4A_Routine_080CADA0(handle + 0x280);
  i_val1 = HW_Routine_08007D4C(handle + 0x29c,*(undefined4 *)(handle + 0x2a0));
  stack_val_34 = HW_Routine_080074C0(handle + 0x2a4,*(undefined4 *)(handle + 0x2a8));
  p_int10 = *(int **)(handle + 0x278);
  HW_Routine_08008F0C(&stack_val_5c,*(undefined4 *)(handle + 0x284),i_val1 * 0x20 + 0x06010000,0x80);
  p_uint5 = (undefined4 *)p_int10[1];
  if (p_uint5 == (undefined4 *)p_int10[3]) {
    stack_val_48 = 1;
    p_uint6 = (undefined4 *)*p_int10;
    stack_val_4c = (int)p_uint5 - (int)p_uint6 >> 4;
    p_int2 = &stack_val_4c;
    if (stack_val_4c == 0) {
      p_int2 = &stack_val_48;
    }
    puStack_28 = p_uint5;
    if (stack_val_4c + *p_int2 == 0) {
      puStack_24 = (undefined4 *)0x0;
      i_val1 = 0;
    }
    else {
      i_val1 = (stack_val_4c + *p_int2) * 0x10;
      puStack_24 = (undefined4 *)runtime_malloc_aligned(i_val1);
      if (puStack_24 == (undefined4 *)0x0) {
        puStack_24 = (undefined4 *)VTable_Routine_080D3BC0(i_val1);
      }
      p_uint6 = (undefined4 *)*p_int10;
    }
    stack_val_2c = stack_val_34 << 5;
    puStack_30 = &stack_val_3c;
    p_uint5 = puStack_24;
    for (; p_uint6 != puStack_28; p_uint6 = p_uint6 + 4) {
      if (p_uint5 != (undefined4 *)0x0) {
        u_val9 = p_uint6[1];
        u_val11 = p_uint6[2];
        *p_uint5 = *p_uint6;
        p_uint5[1] = u_val9;
        p_uint5[2] = u_val11;
        p_uint5[3] = p_uint6[3];
      }
      p_uint5 = p_uint5 + 4;
    }
    i_val3 = stack_val_48;
    if (stack_val_48 == 1) {
      if (p_uint5 != (undefined4 *)0x0) {
        *p_uint5 = stack_val_5c;
        p_uint5[1] = stack_val_58;
        p_uint5[2] = stack_val_54;
        p_uint5[3] = stack_val_50;
      }
      p_uint5 = p_uint5 + 4;
    }
    else {
      for (; i_val3 != 0; i_val3 = i_val3 + -1) {
        if (p_uint5 != (undefined4 *)0x0) {
          *p_uint5 = stack_val_5c;
          p_uint5[1] = stack_val_58;
          p_uint5[2] = stack_val_54;
          p_uint5[3] = stack_val_50;
        }
        p_uint5 = p_uint5 + 4;
      }
    }
    i_val7 = *p_int10;
    for (i_val3 = i_val7; i_val3 != p_int10[1]; i_val3 = i_val3 + 0x10) {
    }
    if (i_val7 != 0) {
      cpp_operator_delete(i_val7);
    }
    *p_int10 = (int)puStack_24;
    p_int10[1] = (int)p_uint5;
    p_int10[3] = (int)puStack_24 + i_val1;
  }
  else {
    if (p_uint5 != (undefined4 *)0x0) {
      *p_uint5 = stack_val_5c;
      p_uint5[1] = stack_val_58;
      p_uint5[2] = stack_val_54;
      p_uint5[3] = stack_val_50;
    }
    p_int10[1] = p_int10[1] + 0x10;
    stack_val_2c = stack_val_34 << 5;
    puStack_30 = &stack_val_3c;
  }
  p_int10 = *(int **)(handle + 0x278);
  HW_Routine_08008F0C(&stack_val_5c,*(undefined4 *)(handle + 0x288),stack_val_2c + 0x05000200,0x20);
  p_uint5 = (undefined4 *)p_int10[1];
  if (p_uint5 == (undefined4 *)p_int10[3]) {
    stack_val_40 = 1;
    p_uint6 = (undefined4 *)*p_int10;
    stack_val_44 = (int)p_uint5 - (int)p_uint6 >> 4;
    p_int2 = &stack_val_44;
    if (stack_val_44 == 0) {
      p_int2 = &stack_val_40;
    }
    puStack_28 = p_uint5;
    if (stack_val_44 + *p_int2 == 0) {
      p_uint5 = (undefined4 *)0x0;
      i_val1 = 0;
      puStack_24 = p_uint5;
    }
    else {
      i_val1 = (stack_val_44 + *p_int2) * 0x10;
      p_uint5 = (undefined4 *)runtime_malloc_aligned(i_val1);
      if (p_uint5 == (undefined4 *)0x0) {
        p_uint5 = (undefined4 *)VTable_Routine_080D3BC0(i_val1);
      }
      p_uint6 = (undefined4 *)*p_int10;
      puStack_24 = p_uint5;
    }
    for (; p_uint6 != puStack_28; p_uint6 = p_uint6 + 4) {
      if (p_uint5 != (undefined4 *)0x0) {
        u_val9 = p_uint6[1];
        u_val11 = p_uint6[2];
        *p_uint5 = *p_uint6;
        p_uint5[1] = u_val9;
        p_uint5[2] = u_val11;
        p_uint5[3] = p_uint6[3];
      }
      p_uint5 = p_uint5 + 4;
    }
    i_val3 = stack_val_40;
    if (stack_val_40 == 1) {
      if (p_uint5 != (undefined4 *)0x0) {
        *p_uint5 = stack_val_5c;
        p_uint5[1] = stack_val_58;
        p_uint5[2] = stack_val_54;
        p_uint5[3] = stack_val_50;
      }
      p_uint5 = p_uint5 + 4;
    }
    else {
      for (; i_val3 != 0; i_val3 = i_val3 + -1) {
        if (p_uint5 != (undefined4 *)0x0) {
          *p_uint5 = stack_val_5c;
          p_uint5[1] = stack_val_58;
          p_uint5[2] = stack_val_54;
          p_uint5[3] = stack_val_50;
        }
        p_uint5 = p_uint5 + 4;
      }
    }
    i_val7 = *p_int10;
    for (i_val3 = i_val7; i_val3 != p_int10[1]; i_val3 = i_val3 + 0x10) {
    }
    if (i_val7 != 0) {
      cpp_operator_delete(i_val7);
    }
    *p_int10 = (int)puStack_24;
    p_int10[1] = (int)p_uint5;
    p_int10[3] = (int)puStack_24 + i_val1;
  }
  else {
    if (p_uint5 != (undefined4 *)0x0) {
      *p_uint5 = stack_val_5c;
      p_uint5[1] = stack_val_58;
      p_uint5[2] = stack_val_54;
      p_uint5[3] = stack_val_50;
    }
    p_int10[1] = p_int10[1] + 0x10;
  }
  u_val4 = *gRomData_0811785C + 0xf & 0xff;
  u_val8 = *gRomData_0811785C & 0xFFFFFF00;
  stack_val_3c = u_val8 | u_val4;
  M4A_Routine_080CAE60(handle,(uint)*(byte *)((int)puStack_30 + 1) * 0x40 +
                        (u_val8 & 0xff | u_val4) * 2 + 0x0600F080,0x54,2,1,0,0x20);
  if (1 < stack_val_38) {
    M4A_Routine_080CAEEC(handle,stack_val_38,
                  (uint)*(byte *)((int)puStack_30 + 1) * 0x40 +
                  (uint)(byte)*puStack_30 * 2 + 0x0600F082,0x20,0,0x20);
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080CD43C @ 0x080CD43C
// =============================================================================
undefined4 M4A_Routine_080CD43C(int handle,uint channel)

{
  uint u_val1;
  uint u_val2;
  
  M4A_Routine_080CAD10(handle + 0x280,channel);
  u_val1 = *gRomData_0811785C + 0xf & 0xff;
  u_val2 = *gRomData_0811785C & 0xFFFFFF00;
  M4A_Routine_080CAE60(handle,((u_val2 & 0xff00) >> 8) * 0x40 + (u_val2 & 0xff | u_val1) * 2 + 0x0600F080,
                0x54,2,1,0,0x20);
  if (1 < channel) {
    M4A_Routine_080CAEEC(handle,channel,
                  ((u_val2 & 0xff00) >> 8) * 0x40 + (u_val2 & 0xff | u_val1) * 2 + 0x0600F082,0x20,0
                  ,0x20);
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080CD4D4 @ 0x080CD4D4
// =============================================================================
undefined4 M4A_Routine_080CD4D4(int handle)

{
  uint u_val1;
  
  M4A_Routine_080CADA8(handle + 0x280);
  u_val1 = *gRomData_0811785C & 0xFFFFFF00;
  M4A_Routine_080CAE60(handle,((u_val1 & 0xff00) >> 8) * 0x40 +
                        (u_val1 & 0xff | *gRomData_0811785C + 0xf & 0xff) * 2 + 0x0600F080,0x54,2,1,0,
                0x20);
  return;
}

// =============================================================================
// Function: M4A_Routine_080CD620 @ 0x080CD620
// =============================================================================
undefined4 M4A_Routine_080CD620(int handle)

{
  int i_val1;
  undefined2 *p_uint2;
  int *p_int3;
  int *p_int4;
  int i_val5;
  undefined4 *p_uint6;
  undefined4 *p_uint7;
  int i_val8;
  undefined2 u_val9;
  undefined4 u_val10;
  undefined4 u_val11;
  undefined4 stack_val_74;
  undefined4 stack_val_70;
  undefined4 stack_val_6c;
  undefined4 stack_val_68;
  undefined1 stack_buf_64 [8];
  int stack_ints_5c [2];
  int stack_ints_54 [4];
  int stack_val_44;
  int stack_val_40;
  int *piStack_3c;
  int *piStack_38;
  int stack_val_34;
  int stack_val_30;
  undefined1 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  i_val1 = HW_GetSpriteAttr1Offset();
  *(undefined2 *)(i_val1 + 8) = 0x1d40;
  i_val1 = HW_GetSpriteAttr1Offset(handle);
  *(short *)(i_val1 + 10) = (short)0x1E41;
  i_val1 = HW_GetSpriteAttr1Offset(handle);
  *(short *)(i_val1 + 0xc) = (short)0x3F42;
  HW_Routine_08008EB8(0xffffffff,0x0600F000,0x800);
  u_val10 = 0x0600F800;
  HW_Routine_08008EB8(0xffffffff,0x0600F800,0x800);
  HW_Routine_08008EB8(0,0x6000000,0x8000);
  p_uint2 = (undefined2 *)HW_GetSpriteAttr1Offset(handle);
  *p_uint2 = 0x1640;
  HW_Routine_08008E64(*gRomData_080F9F78,0x5000000,0x20);
  HW_Routine_08008E64(*gRomData_080F9F70,0x6000000,*gRomData_080F9F74);
  HW_Routine_08008EB8(0x00030003,u_val10,0x800);
  puStack_2c = stack_buf_64;
  piStack_3c = stack_ints_5c;
  piStack_38 = stack_ints_54;
  i_val1 = 0x13;
  p_uint2 = 0x0600F81C;
  do {
    *p_uint2 = 8;
    p_uint2[1] = 2;
    p_uint2 = p_uint2 + 0x20;
    i_val1 = i_val1 + -1;
  } while (-1 < i_val1);
  HW_Routine_08008EB8(0x03FF03FF,0x0600F000,0x800);
  p_int3 = (int *)HW_GetSpriteAttr0Offset(handle);
  HW_Routine_08008F0C(&stack_val_74,gRomGfx_08750C8C,0x06000400,0x1c0);
  p_uint6 = (undefined4 *)p_int3[1];
  if (p_uint6 == (undefined4 *)p_int3[3]) {
    stack_val_40 = 1;
    p_uint7 = (undefined4 *)*p_int3;
    stack_val_44 = (int)p_uint6 - (int)p_uint7 >> 4;
    p_int4 = &stack_val_44;
    if (stack_val_44 == 0) {
      p_int4 = &stack_val_40;
    }
    puStack_28 = p_uint6;
    if (stack_val_44 + *p_int4 == 0) {
      puStack_24 = (undefined4 *)0x0;
      i_val1 = 0;
    }
    else {
      i_val1 = (stack_val_44 + *p_int4) * 0x10;
      puStack_24 = (undefined4 *)runtime_malloc_aligned(i_val1);
      if (puStack_24 == (undefined4 *)0x0) {
        puStack_24 = (undefined4 *)VTable_Routine_080D3BC0(i_val1);
      }
      p_uint7 = (undefined4 *)*p_int3;
    }
    stack_val_34 = handle + 0x44;
    stack_val_30 = handle + 0x80;
    p_uint6 = puStack_24;
    for (; p_uint7 != puStack_28; p_uint7 = p_uint7 + 4) {
      if (p_uint6 != (undefined4 *)0x0) {
        u_val10 = p_uint7[1];
        u_val11 = p_uint7[2];
        *p_uint6 = *p_uint7;
        p_uint6[1] = u_val10;
        p_uint6[2] = u_val11;
        p_uint6[3] = p_uint7[3];
      }
      p_uint6 = p_uint6 + 4;
    }
    i_val5 = stack_val_40;
    if (stack_val_40 == 1) {
      if (p_uint6 != (undefined4 *)0x0) {
        *p_uint6 = stack_val_74;
        p_uint6[1] = stack_val_70;
        p_uint6[2] = stack_val_6c;
        p_uint6[3] = stack_val_68;
      }
      p_uint6 = p_uint6 + 4;
    }
    else {
      for (; i_val5 != 0; i_val5 = i_val5 + -1) {
        if (p_uint6 != (undefined4 *)0x0) {
          *p_uint6 = stack_val_74;
          p_uint6[1] = stack_val_70;
          p_uint6[2] = stack_val_6c;
          p_uint6[3] = stack_val_68;
        }
        p_uint6 = p_uint6 + 4;
      }
    }
    i_val8 = *p_int3;
    for (i_val5 = i_val8; i_val5 != p_int3[1]; i_val5 = i_val5 + 0x10) {
    }
    if (i_val8 != 0) {
      cpp_operator_delete(i_val8);
    }
    *p_int3 = (int)puStack_24;
    p_int3[1] = (int)p_uint6;
    p_int3[3] = (int)puStack_24 + i_val1;
  }
  else {
    if (p_uint6 != (undefined4 *)0x0) {
      *p_uint6 = stack_val_74;
      p_uint6[1] = stack_val_70;
      p_uint6[2] = stack_val_6c;
      p_uint6[3] = stack_val_68;
    }
    p_int3[1] = p_int3[1] + 0x10;
    stack_val_34 = handle + 0x44;
    stack_val_30 = handle + 0x80;
  }
  _call_via_r3(puStack_2c,*(int **)(handle + 0x44),
                  *(undefined2 *)(*(int *)(handle + 0x48) + (uint)*(ushort *)(stack_val_34 + 0xc) * 4)
                  ,*(undefined4 *)(**(int **)(handle + 0x44) + 0x10));
  u_val9 = 0;
  if (stack_ints_5c[0] != 0) {
    u_val9 = (undefined2)piStack_3c[1];
  }
  HW_Routine_08008E64(stack_ints_5c[0],0x06000380,u_val9);
  u_val9 = 0;
  if (stack_ints_54[0] != 0) {
    u_val9 = (undefined2)piStack_38[1];
  }
  HW_Routine_08008E64(stack_ints_54[0],0x05000020,u_val9);
  Animal_Routine_08050D5C(stack_val_30);
  return;
}

// =============================================================================
// Function: M4A_Routine_080CD8A0 @ 0x080CD8A0
// =============================================================================
undefined4 M4A_Routine_080CD8A0(int handle)

{
  undefined4 u_val1;
  undefined4 u_val2;
  undefined4 u_val3;
  undefined4 u_val4;
  undefined4 u_val5;
  int i_val6;
  
  u_val1 = Animal_Routine_08050D34();
  *(undefined4 *)(handle + 0x84) = u_val1;
  u_val1 = HW_Routine_080088DC(handle);
  u_val2 = HW_GetSpriteAttr2Offset(handle);
  u_val3 = HW_GetSpriteAttr1Offset(handle);
  u_val4 = HW_GetPaletteBankOffset(handle);
  u_val5 = HW_Routine_0800894C(handle);
  u_val1 = Animal_Routine_08050D3C(handle + 0x80,u_val1,u_val2,u_val3,u_val4,u_val5,handle + 0xc);
  *(undefined4 *)(handle + 0x88) = u_val1;
  i_val6 = *(int *)(handle + 0x78);
  if (i_val6 != 0) {
    _call_via_r1(i_val6,*(undefined4 *)(*(int *)(i_val6 + 0x210) + 0xc));
  }
  i_val6 = *(int *)(handle + 0x7c);
  if (i_val6 != 0) {
    u_val1 = HW_GetSpriteAttr2Offset(handle);
    M4A_Routine_080CC58C(i_val6,u_val1);
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080CD9B0 @ 0x080CD9B0
// =============================================================================
undefined8 M4A_Routine_080CD9B0(int *handle,int channel,int param)

{
  int i_val1;
  
  *handle = channel;
  handle[1] = param;
  handle[2] = param;
  HW_Routine_08007874(handle + 5);
  i_val1 = HW_Routine_08007B54(handle + 5,2);
  handle[6] = i_val1;
  HW_Routine_08007128(handle + 7);
  i_val1 = HW_Routine_0800736C(handle + 7);
  handle[8] = i_val1;
  Animal_Routine_0805E6CC(handle + 9,gRomGfx_08728208);
  *(undefined2 *)(handle + 0x15) = 0;
  *(undefined2 *)((int)handle + 0x56) = 0;
  Animal_Routine_0805E824(handle + 0x16,handle + 9,0,0x100);
  *(undefined2 *)(handle + 0x1b) = 0;
  *(undefined2 *)((int)handle + 0x6e) = 0;
  *(undefined2 *)(handle + 0x1c) = 0;
  *(undefined2 *)((int)handle + 0x72) = 0;
  *(undefined2 *)(handle + 0x1d) = 0;
  handle[0x1e] = 0;
  *(undefined1 *)(handle + 0x1f) = 0;
  *(undefined1 *)((int)handle + 0x7d) = 0;
  handle[0x20] = 0;
  *(undefined1 *)(handle + 0x21) = 0;
  *(undefined1 *)(handle + 0x22) = 0;
  handle[3] = *(int *)(*(int *)(*handle + 0x78) + 0x298);
  handle[4] = *(int *)(*(int *)(*handle + 0x7c) + 0x298) + 9;
  return handle;
}

// =============================================================================
// Function: M4A_Routine_080CDA44 @ 0x080CDA44
// =============================================================================
undefined8 M4A_Routine_080CDA44(int *handle)

{
  uint u_val1;
  int i_val2;
  int i_val3;
  
  handle[3] = *(int *)(*(int *)(*handle + 0x78) + 0x298);
  handle[4] = *(int *)(*(int *)(*handle + 0x7c) + 0x298) + 9;
  i_val3 = handle[1];
  i_val2 = *(int *)(i_val3 * 0x10 + gRomData_0811788C);
  if (i_val3 == 0) {
    i_val3 = handle[2];
    if (i_val3 == 9) goto LAB_080cda92;
    u_val1 = i_val3 - 5;
  }
  else {
    if ((i_val3 != 9) || (i_val3 = handle[2], i_val3 == 0)) goto LAB_080cda92;
    u_val1 = i_val3 - 0xe;
  }
  i_val2 = i_val3 + 4;
  if (u_val1 < 4) {
    i_val2 = i_val3;
  }
LAB_080cda92:
  if (i_val2 < 9) {
    i_val3 = handle[1];
    if ((i_val2 == 0) && (*(char *)(*(int *)(*handle + 0x78) + 0x27c) == '\0')) {
      i_val2 = i_val3 + 4;
    }
    for (; handle[3] < i_val2; i_val2 = *(int *)(i_val2 * 0x10 + gRomData_0811788C)) {
    }
  }
  else {
    i_val3 = handle[1];
    if ((i_val2 == 9) && (*(char *)(*(int *)(*handle + 0x7c) + 0x27c) == '\0')) {
      i_val2 = i_val3 + 4;
    }
    for (; handle[4] < i_val2; i_val2 = *(int *)(i_val2 * 0x10 + gRomData_0811788C)) {
    }
  }
  if (i_val2 != i_val3) {
    handle[2] = i_val3;
    handle[1] = i_val2;
  }
  return i_val2;
}

// =============================================================================
// Function: M4A_Routine_080CDB08 @ 0x080CDB08
// =============================================================================
undefined8 M4A_Routine_080CDB08(int *handle)

{
  uint u_val1;
  int i_val2;
  int i_val3;
  
  handle[3] = *(int *)(*(int *)(*handle + 0x78) + 0x298);
  handle[4] = *(int *)(*(int *)(*handle + 0x7c) + 0x298) + 9;
  i_val3 = handle[1];
  i_val2 = *(int *)(i_val3 * 0x10 + gRomData_0811788C + 4);
  if (i_val3 == 0) {
    i_val3 = handle[2];
    if (i_val3 == 9) goto LAB_080cdb5a;
    u_val1 = i_val3 - 1;
  }
  else {
    if ((i_val3 != 9) || (i_val3 = handle[2], i_val3 == 0)) goto LAB_080cdb5a;
    u_val1 = i_val3 - 10;
  }
  i_val2 = i_val3 + -4;
  if (u_val1 < 4) {
    i_val2 = i_val3;
  }
LAB_080cdb5a:
  if (i_val2 < 9) {
    i_val3 = handle[1];
    if ((i_val2 == 0) && (*(char *)(*(int *)(*handle + 0x78) + 0x27c) == '\0')) {
      i_val2 = i_val3 + -4;
    }
    while (handle[3] < i_val2) {
      i_val2 = *(int *)(i_val2 * 0x10 + gRomData_08117890);
      if ((i_val2 == 0) && (*(char *)(*(int *)(*handle + 0x78) + 0x27c) == '\0')) {
        i_val2 = i_val3;
      }
    }
  }
  else {
    i_val3 = handle[1];
    if ((i_val2 == 9) && (*(char *)(*(int *)(*handle + 0x7c) + 0x27c) == '\0')) {
      i_val2 = i_val3 + -4;
    }
    while (handle[4] < i_val2) {
      i_val2 = *(int *)(i_val2 * 0x10 + gRomData_08117890);
      if ((i_val2 == 9) && (*(char *)(*(int *)(*handle + 0x7c) + 0x27c) == '\0')) {
        i_val2 = i_val3;
      }
    }
  }
  if (i_val2 != i_val3) {
    handle[2] = i_val3;
    handle[1] = i_val2;
  }
  return i_val2;
}

// =============================================================================
// Function: M4A_Routine_080CDC00 @ 0x080CDC00
// =============================================================================
undefined8 M4A_Routine_080CDC00(int *handle)

{
  int i_val1;
  int i_val2;
  int i_val3;
  int i_val4;
  int i_val5;
  int i_val6;
  int i_val7;
  
  i_val1 = *(int *)(*handle + 0x78);
  i_val7 = *(int *)(i_val1 + 0x298);
  handle[3] = i_val7;
  i_val6 = *(int *)(*handle + 0x7c);
  i_val5 = *(int *)(i_val6 + 0x298) + 9;
  handle[4] = i_val5;
  i_val4 = handle[1];
  i_val2 = gRomData_0811788C + 8;
  i_val3 = *(int *)(i_val4 * 0x10 + i_val2);
  if (i_val3 < 9) {
    if (i_val3 == 0) {
      i_val5 = i_val3;
      if (*(char *)(i_val1 + 0x27c) == '\0') {
        i_val5 = i_val4;
      }
    }
    else {
      while (i_val5 = i_val3, i_val7 < i_val5) {
        i_val3 = i_val7;
        if (4 < i_val7) {
          i_val3 = *(int *)(i_val5 * 0x10 + i_val2);
        }
      }
    }
    i_val3 = i_val5;
    if (((i_val5 != 4) || (i_val1 = handle[2], i_val1 != handle[3])) || (i_val1 < 5))
    goto LAB_080cdcbe;
  }
  else {
    i_val1 = i_val3;
    if (i_val3 == 9) {
      if (*(char *)(i_val6 + 0x27c) == '\0') {
        i_val3 = 0;
      }
    }
    else {
      while (i_val3 = i_val1, i_val5 < i_val3) {
        i_val1 = i_val5;
        if (0xd < i_val5) {
          i_val1 = *(int *)(i_val3 * 0x10 + i_val2);
        }
      }
    }
    if (((i_val3 != 0xd) || (i_val1 = handle[2], i_val1 != handle[4])) || (i_val1 < 0xe))
    goto LAB_080cdcbe;
  }
  i_val3 = i_val1;
LAB_080cdcbe:
  if (i_val3 != i_val4) {
    handle[2] = i_val4;
    handle[1] = i_val3;
  }
  return i_val3;
}

// =============================================================================
// Function: M4A_Routine_080CDCD0 @ 0x080CDCD0
// =============================================================================
undefined8 M4A_Routine_080CDCD0(int *handle)

{
  int i_val1;
  int i_val2;
  int i_val3;
  int i_val4;
  int i_val5;
  int i_val6;
  int i_val7;
  
  i_val7 = *(int *)(*handle + 0x78);
  i_val6 = *(int *)(i_val7 + 0x298);
  handle[3] = i_val6;
  i_val1 = *(int *)(*handle + 0x7c);
  i_val5 = *(int *)(i_val1 + 0x298) + 9;
  handle[4] = i_val5;
  i_val4 = handle[1];
  i_val2 = gRomData_0811788C + 0xc;
  i_val3 = *(int *)(i_val4 * 0x10 + i_val2);
  if (i_val3 < 9) {
    if (i_val3 == 0) {
      if (*(char *)(i_val7 + 0x27c) == '\0') {
        i_val3 = 9;
      }
    }
    else if (i_val6 < i_val3) {
      if (i_val4 == 0x11) {
        i_val3 = 1;
      }
      else {
        for (; i_val3 < 9; i_val3 = *(int *)(i_val3 * 0x10 + i_val2)) {
        }
      }
    }
  }
  else if (i_val3 == 9) {
    if (*(char *)(i_val1 + 0x27c) == '\0') {
      i_val3 = 0;
    }
  }
  else if (i_val5 < i_val3) {
    if (i_val5 < 0xe) {
      i_val3 = 1;
    }
    else {
      for (; 8 < i_val3; i_val3 = *(int *)(i_val3 * 0x10 + i_val2)) {
      }
    }
  }
  if ((i_val3 == 10) && (handle[2] == 0xe)) {
    i_val3 = 0xe;
  }
  if (i_val3 != i_val4) {
    handle[2] = i_val4;
    handle[1] = i_val3;
  }
  return i_val3;
}

// =============================================================================
// Function: M4A_Routine_080CDD7C @ 0x080CDD7C
// =============================================================================
undefined8 M4A_Routine_080CDD7C(int *handle)

{
  int i_val1;
  int i_val2;
  
  i_val2 = 10;
  if (handle[1] < 9) {
    i_val1 = *(int *)(*handle + 0x7c);
  }
  else {
    i_val1 = *(int *)(*handle + 0x78);
    i_val2 = 1;
  }
  if (i_val1 == 0) {
    i_val2 = handle[1];
  }
  if (i_val2 != handle[1]) {
    handle[2] = handle[1];
    handle[1] = i_val2;
  }
  return i_val2;
}

// =============================================================================
// Function: M4A_Routine_080CDDAC @ 0x080CDDAC
// =============================================================================
undefined4 M4A_Routine_080CDDAC(int *handle,int channel)

{
  
  handle[3] = *(int *)(*(int *)(*handle + 0x78) + 0x298);
  handle[4] = *(int *)(*(int *)(*handle + 0x7c) + 0x298) + 9;
  handle[2] = handle[1];
  handle[1] = channel;
  return;
}

// =============================================================================
// Function: M4A_Routine_080CDDD4 @ 0x080CDDD4
// =============================================================================
undefined4 M4A_Routine_080CDDD4(int *handle)

{
  undefined2 u_val1;
  undefined4 u_val2;
  int *p_int3;
  int i_val4;
  int *p_int5;
  undefined4 *p_uint6;
  undefined4 *p_uint7;
  undefined4 *p_uint8;
  int i_val9;
  undefined4 *p_uint10;
  undefined4 u_val11;
  undefined4 stack_val_90;
  undefined4 stack_val_8c;
  undefined4 stack_val_88;
  int stack_val_84;
  undefined4 stack_val_80;
  int stack_val_7c;
  uint stack_val_78;
  int stack_val_74;
  undefined2 stack_val_70;
  int stack_val_6c;
  undefined2 stack_val_68;
  int stack_ints_64 [4];
  undefined4 stack_val_54;
  undefined4 stack_val_50;
  undefined4 stack_val_4c;
  undefined4 stack_val_48;
  byte stack_val_44;
  byte stack_val_43;
  int stack_val_40;
  int stack_val_3c;
  int stack_val_38;
  int stack_val_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  undefined4 *puStack_24;
  
  *(char *)(handle + 0x22) = '\x01';
  M4A_Routine_080CE120(&stack_val_44,*handle,handle[1]);
  *(ushort *)(handle + 0x15) = (ushort)stack_val_44;
  *(ushort *)((int)handle + 0x56) = (ushort)stack_val_43;
  stack_val_90 = 0;
  stack_val_8c = 0;
  stack_val_88 = (uint)stack_val_88._2_2_ << 0x10;
  stack_val_84 = 0;
  stack_val_80 = (uint)stack_val_80._2_2_ << 0x10;
  stack_val_7c = 0;
  stack_val_78 = stack_val_78 & 0xffffff00;
  if ((char)handle[0x22] != '\0') {
    if (*(int *)(*handle + 0x88) == 3) {
      Animal_Routine_0805E8F0(handle + 0x16);
    }
    _call_via_r3(&stack_val_74,(int *)handle[0x16],
                    *(undefined2 *)(handle[0x17] + (uint)*(ushort *)(handle + 0x19) * 4),
                    *(undefined4 *)(*(int *)handle[0x16] + 0x10));
    stack_val_8c = handle[0x1c];
    stack_val_84 = handle[0x1e];
    stack_val_80 = handle[0x1f];
    stack_val_7c = handle[0x20];
    stack_val_78 = handle[0x21];
    stack_val_90 = handle[0x15];
    stack_val_88._2_2_ = (ushort)((uint)handle[0x1d] >> 0x10);
    stack_val_88 = CONCAT22(stack_val_88._2_2_,1);
    u_val1 = HW_Routine_080074C0(handle + 7,handle[8]);
    stack_val_8c = CONCAT22(stack_val_8c._2_2_,u_val1);
    u_val1 = HW_Routine_08007D4C(handle + 5,handle[6]);
    stack_val_8c = CONCAT22(u_val1,(undefined2)stack_val_8c);
    stack_val_78 = CONCAT31(stack_val_78._1_3_,1);
    u_val2 = HW_GetSpriteAttr2Offset(*handle);
    u_val1 = 0;
    if (stack_val_74 != 0) {
      u_val1 = stack_val_70;
    }
    piStack_30 = handle + 7;
    Animal_Routine_0805E99C(u_val2,stack_val_74,u_val1,&stack_val_90);
    p_int3 = (int *)HW_GetSpriteAttr0Offset(*handle);
    i_val9 = stack_val_6c;
    i_val4 = HW_Routine_08007D4C(handle + 5,handle[6]);
    u_val1 = 0;
    if (stack_val_6c != 0) {
      u_val1 = stack_val_68;
    }
    piStack_28 = p_int3;
    HW_Routine_08008F0C(&stack_val_54,i_val9,i_val4 * 0x20 + 0x06010000,u_val1);
    p_uint7 = (undefined4 *)p_int3[1];
    if (p_uint7 == (undefined4 *)p_int3[3]) {
      stack_val_3c = 1;
      stack_val_40 = (int)p_uint7 - *piStack_28 >> 4;
      p_int3 = &stack_val_40;
      if (stack_val_40 == 0) {
        p_int3 = &stack_val_3c;
      }
      if (stack_val_40 + *p_int3 == 0) {
        puStack_24 = (undefined4 *)0x0;
        i_val9 = 0;
      }
      else {
        i_val9 = (stack_val_40 + *p_int3) * 0x10;
        puStack_24 = (undefined4 *)runtime_malloc_aligned(i_val9);
        if (puStack_24 == (undefined4 *)0x0) {
          puStack_24 = (undefined4 *)VTable_Routine_080D3BC0(i_val9);
        }
      }
      piStack_2c = stack_ints_64;
      p_uint8 = puStack_24;
      for (p_uint6 = (undefined4 *)*piStack_28; p_uint6 != p_uint7; p_uint6 = p_uint6 + 4) {
        if (p_uint8 != (undefined4 *)0x0) {
          u_val2 = p_uint6[1];
          u_val11 = p_uint6[2];
          *p_uint8 = *p_uint6;
          p_uint8[1] = u_val2;
          p_uint8[2] = u_val11;
          p_uint8[3] = p_uint6[3];
        }
        p_uint8 = p_uint8 + 4;
      }
      i_val4 = stack_val_3c;
      if (stack_val_3c == 1) {
        if (p_uint8 != (undefined4 *)0x0) {
          *p_uint8 = stack_val_54;
          p_uint8[1] = stack_val_50;
          p_uint8[2] = stack_val_4c;
          p_uint8[3] = stack_val_48;
        }
        p_uint8 = p_uint8 + 4;
      }
      else {
        for (; i_val4 != 0; i_val4 = i_val4 + -1) {
          if (p_uint8 != (undefined4 *)0x0) {
            *p_uint8 = stack_val_54;
            p_uint8[1] = stack_val_50;
            p_uint8[2] = stack_val_4c;
            p_uint8[3] = stack_val_48;
          }
          p_uint8 = p_uint8 + 4;
        }
      }
      for (i_val4 = *piStack_28; i_val4 != piStack_28[1]; i_val4 = i_val4 + 0x10) {
      }
      if (*piStack_28 != 0) {
        cpp_operator_delete();
      }
      *piStack_28 = (int)puStack_24;
      piStack_28[1] = (int)p_uint8;
      piStack_28[3] = (int)puStack_24 + i_val9;
    }
    else {
      if (p_uint7 != (undefined4 *)0x0) {
        *p_uint7 = stack_val_54;
        p_uint7[1] = stack_val_50;
        p_uint7[2] = stack_val_4c;
        p_uint7[3] = stack_val_48;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
      piStack_2c = stack_ints_64;
    }
    p_int3 = (int *)HW_GetSpriteAttr0Offset(*handle);
    i_val9 = stack_ints_64[0];
    i_val4 = HW_Routine_080074C0(piStack_30,piStack_30[1]);
    u_val1 = 0;
    if (stack_ints_64[0] != 0) {
      u_val1 = (undefined2)piStack_2c[1];
    }
    HW_Routine_08008F0C(&stack_val_54,i_val9,i_val4 * 0x20 + 0x05000200,u_val1);
    p_uint7 = (undefined4 *)p_int3[1];
    if (p_uint7 == (undefined4 *)p_int3[3]) {
      stack_val_34 = 1;
      stack_val_38 = (int)p_uint7 - *p_int3 >> 4;
      p_int5 = &stack_val_38;
      if (stack_val_38 == 0) {
        p_int5 = &stack_val_34;
      }
      if (stack_val_38 + *p_int5 == 0) {
        p_uint6 = (undefined4 *)0x0;
        i_val9 = 0;
      }
      else {
        i_val9 = (stack_val_38 + *p_int5) * 0x10;
        p_uint6 = (undefined4 *)runtime_malloc_aligned(i_val9);
        if (p_uint6 == (undefined4 *)0x0) {
          p_uint6 = (undefined4 *)VTable_Routine_080D3BC0(i_val9);
        }
      }
      p_uint10 = p_uint6;
      for (p_uint8 = (undefined4 *)*p_int3; p_uint8 != p_uint7; p_uint8 = p_uint8 + 4) {
        if (p_uint10 != (undefined4 *)0x0) {
          u_val2 = p_uint8[1];
          u_val11 = p_uint8[2];
          *p_uint10 = *p_uint8;
          p_uint10[1] = u_val2;
          p_uint10[2] = u_val11;
          p_uint10[3] = p_uint8[3];
        }
        p_uint10 = p_uint10 + 4;
      }
      i_val4 = stack_val_34;
      if (stack_val_34 == 1) {
        if (p_uint10 != (undefined4 *)0x0) {
          *p_uint10 = stack_val_54;
          p_uint10[1] = stack_val_50;
          p_uint10[2] = stack_val_4c;
          p_uint10[3] = stack_val_48;
        }
        p_uint10 = p_uint10 + 4;
      }
      else {
        for (; i_val4 != 0; i_val4 = i_val4 + -1) {
          if (p_uint10 != (undefined4 *)0x0) {
            *p_uint10 = stack_val_54;
            p_uint10[1] = stack_val_50;
            p_uint10[2] = stack_val_4c;
            p_uint10[3] = stack_val_48;
          }
          p_uint10 = p_uint10 + 4;
        }
      }
      for (i_val4 = *p_int3; i_val4 != p_int3[1]; i_val4 = i_val4 + 0x10) {
      }
      puStack_24 = p_uint6;
      if (*p_int3 != 0) {
        cpp_operator_delete();
      }
      *p_int3 = (int)puStack_24;
      p_int3[1] = (int)p_uint10;
      p_int3[3] = (int)puStack_24 + i_val9;
    }
    else {
      if (p_uint7 != (undefined4 *)0x0) {
        *p_uint7 = stack_val_54;
        p_uint7[1] = stack_val_50;
        p_uint7[2] = stack_val_4c;
        p_uint7[3] = stack_val_48;
      }
      p_int3[1] = p_int3[1] + 0x10;
    }
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080CE120 @ 0x080CE120
// =============================================================================
undefined8 M4A_Routine_080CE120(undefined4 *handle,int channel,int param,undefined4 val)

{
  undefined4 stack_val_18;
  undefined4 stack_val_14;
  undefined4 stack_val_10;
  undefined4 stack_val_c;
  
  if (param == 0) {
    if (*(int *)(channel + 0x78) != 0) {
      M4A_Routine_080CC144(&stack_val_18);
      val = stack_val_18;
    }
  }
  else if (param == 9) {
    if (*(int *)(channel + 0x7c) != 0) {
      M4A_Routine_080CD558(&stack_val_14);
      val = stack_val_14;
    }
  }
  else if (param < 9) {
    if (*(int *)(channel + 0x78) != 0) {
      M4A_Routine_080CC134(&stack_val_10,*(int *)(channel + 0x78),param + -1);
      val = stack_val_10;
    }
  }
  else if (*(int *)(channel + 0x7c) != 0) {
    M4A_Routine_080CD534(&stack_val_c,*(int *)(channel + 0x7c),param + -10);
    val = stack_val_c;
  }
  *handle = val;
  return handle;
}

// =============================================================================
// Function: M4A_Routine_080CE184 @ 0x080CE184
// =============================================================================
undefined8 M4A_Routine_080CE184(undefined4 handle,int channel,int param)

{
  int i_val1;
  
  if (channel < 9) {
    i_val1 = param * 8 + -1;
  }
  else {
    i_val1 = param * 8 + -10;
  }
  return channel + i_val1;
}

// =============================================================================
// Function: M4A_Routine_080CE19C @ 0x080CE19C
// =============================================================================
undefined8 M4A_Routine_080CE19C(int handle)

{
  
  M4A_Routine_080CD578();
  *(undefined4 *)(handle + 4) = gRomData_080E85DC;
  *(undefined4 *)(handle + 0x8c) = 0;
  *(undefined4 *)(handle + 0x90) = 0;
  *(undefined4 *)(handle + 0x94) = 0;
  return handle;
}

// =============================================================================
// Function: M4A_Routine_080CE1C4 @ 0x080CE1C4
// =============================================================================
undefined8 M4A_Routine_080CE1C4(undefined4 handle,undefined4 channel,int param)

{
  int item_id;
  undefined4 u_val2;
  undefined4 sub_ret_val;
  undefined4 saved_r6;
  int saved_r10;
  undefined2 *in_stack_0000003c;
  undefined2 *in_stack_00000040;
  undefined2 *in_stack_00000044;
  undefined2 *in_stack_00000048;
  int *in_stack_0000004c;
  int *in_stack_00000050;
  int in_stack_00000054;
  undefined4 in_stack_00000074;
  
  item_id = Item_GetId();
  if (item_id - 5U < 0x29) {
    switch(*(uint *)(PTR_case_080CE1E4_080ce1e0 + (item_id - 5U) * 4) & 0xfffffffe) {
    case 0x80ce1e4:
      for (item_id = *in_stack_00000050; item_id != in_stack_00000050[1]; item_id = item_id + 0x10) {
      }
      if (*in_stack_00000050 != 0) {
        cpp_operator_delete();
      }
      *in_stack_00000050 = in_stack_00000054;
      in_stack_00000050[1] = param;
      in_stack_00000050[3] = in_stack_00000054 + saved_r10;
      *in_stack_00000044 = 0xe8;
      *in_stack_00000048 = 0x28;
      *in_stack_0000003c = 0xe8;
      *in_stack_00000040 = 0x50;
      M4A_Routine_080CE510(saved_r6,*in_stack_0000004c + 1,0x0600F0F6,0x20);
      M4A_Routine_080CE480(saved_r6,0x0600F0F8,0x2d,1);
      M4A_Routine_080CE510(saved_r6,8,0x0600F0FA,0x20);
      return CONCAT44(sub_ret_val,in_stack_00000074);
    case 0x80ce288:
      u_val2 = 1;
      goto LAB_080ce28e;
    }
  }
  u_val2 = 0;
LAB_080ce28e:
  return u_val2;
}

// =============================================================================
// Function: M4A_Routine_080CE294 @ 0x080CE294
// =============================================================================
undefined4 M4A_Routine_080CE294(int handle)

{
  
  M4A_Routine_080CD620();
  handle = handle + 0x80;
  Animal_Routine_08050E98(handle,1);
  Animal_Routine_08050E98(handle,2);
  Animal_Routine_08050E98(handle,4);
  Animal_Routine_08050E98(handle,8);
  return;
}

// =============================================================================
// Function: M4A_Routine_080CE2C4 @ 0x080CE2C4
// =============================================================================
undefined4 M4A_Routine_080CE2C4(int handle)

{
  
  if (*(int *)(handle + 0x8c) != 0) {
    M4A_Routine_080CDDD4();
  }
  if (*(int *)(handle + 0x90) != 0) {
    M4A_Routine_080CECE8();
  }
  if (*(int *)(handle + 0x94) != 0) {
    M4A_Routine_080CE790();
  }
  M4A_Routine_080CD8A0(handle);
  return;
}

// =============================================================================
// Function: M4A_Routine_080CE2FC @ 0x080CE2FC
// =============================================================================
undefined8 M4A_Routine_080CE2FC(undefined4 *handle,undefined4 channel)

{
  undefined4 u_val1;
  int i_val2;
  undefined4 *p_uint3;
  
  *handle = channel;
  HW_Routine_08007874(handle + 1);
  u_val1 = HW_Routine_08007B54(handle + 1,2);
  handle[2] = u_val1;
  HW_Routine_08007874(handle + 3);
  u_val1 = HW_Routine_08007B54(handle + 3,2);
  handle[4] = u_val1;
  HW_Routine_08007128(handle + 5);
  u_val1 = HW_Routine_0800736C(handle + 5);
  handle[6] = u_val1;
  p_uint3 = handle + 7;
  Animal_Routine_0805E6CC(p_uint3,gRomGfx_08527094);
  *(undefined2 *)(handle + 0x13) = 0;
  *(undefined2 *)((int)handle + 0x4e) = 0;
  Animal_Routine_0805E824(handle + 0x14,p_uint3,0,0x100);
  *(undefined2 *)(handle + 0x19) = 0;
  *(undefined2 *)((int)handle + 0x66) = 0;
  *(undefined2 *)(handle + 0x1a) = 0;
  *(undefined2 *)((int)handle + 0x6a) = 0;
  *(undefined2 *)(handle + 0x1b) = 0;
  handle[0x1c] = 0;
  *(undefined1 *)(handle + 0x1d) = 0;
  *(undefined1 *)((int)handle + 0x75) = 0;
  handle[0x1e] = 0;
  *(undefined1 *)(handle + 0x1f) = 0;
  *(undefined1 *)(handle + 0x20) = 0;
  *(undefined2 *)(handle + 0x21) = 0;
  *(undefined2 *)((int)handle + 0x86) = 0;
  Animal_Routine_0805E824(handle + 0x22,p_uint3,1,0x100);
  *(undefined2 *)(handle + 0x27) = 0;
  *(undefined2 *)((int)handle + 0x9e) = 0;
  *(undefined2 *)(handle + 0x28) = 0;
  *(undefined2 *)((int)handle + 0xa2) = 0;
  *(undefined2 *)(handle + 0x29) = 0;
  handle[0x2a] = 0;
  *(undefined1 *)(handle + 0x2b) = 0;
  *(undefined1 *)((int)handle + 0xad) = 0;
  handle[0x2c] = 0;
  *(undefined1 *)(handle + 0x2d) = 0;
  *(undefined1 *)(handle + 0x2e) = 0;
  handle[0x2f] = 0;
  handle[0x31] = 0;
  i_val2 = runtime_malloc_aligned(0xc);
  if (i_val2 == 0) {
    i_val2 = VTable_Routine_080D3BC0(0xc);
  }
  *(int *)i_val2 = i_val2;
  *(int *)(i_val2 + 4) = i_val2;
  handle[0x31] = i_val2;
  return handle;
}

// =============================================================================
// Function: M4A_Routine_080CE480 @ 0x080CE480
// =============================================================================
undefined4
M4A_Routine_080CE480(undefined4 *handle,undefined4 channel,undefined2 param,undefined4 val,
             undefined4 arg_5,undefined2 arg_6,undefined4 arg_7)

{
  undefined4 u_val1;
  int i_val2;
  int i_val3;
  int *p_int4;
  undefined4 *p_uint5;
  
  u_val1 = Dispatcher_Routine_080005D4(0x20);
  i_val2 = ScriptEngine_Routine_0804EA58(u_val1,channel,param,val,arg_5,arg_6,arg_7);
  i_val3 = handle[0x31];
  p_int4 = (int *)runtime_malloc_aligned(0xc);
  if (p_int4 == (int *)0x0) {
    p_int4 = (int *)VTable_Routine_080D3BC0(0xc);
  }
  if (p_int4 != (int *)0xfffffff8) {
    p_int4[2] = i_val2;
  }
  p_uint5 = *(undefined4 **)(i_val3 + 4);
  *p_int4 = i_val3;
  p_int4[1] = (int)p_uint5;
  *p_uint5 = p_int4;
  *(int **)(i_val3 + 4) = p_int4;
  i_val3 = HW_GetPaletteBankOffset(*handle);
  _call_via_r2(i_val3,i_val2,*(undefined4 *)(*(int *)(i_val3 + 8) + 0x10));
  return;
}

// =============================================================================
// Function: M4A_Routine_080CE510 @ 0x080CE510
// =============================================================================
undefined4
M4A_Routine_080CE510(undefined4 *handle,undefined4 channel,undefined4 param,undefined2 val,
             undefined2 arg_5,undefined4 arg_6)

{
  undefined4 u_val1;
  int i_val2;
  int i_val3;
  int *p_int4;
  undefined4 *p_uint5;
  
  u_val1 = Dispatcher_Routine_080005D4(0x1c);
  i_val2 = ScriptEngine_Routine_0804EE64(u_val1,channel,param,val,arg_5,arg_6);
  i_val3 = handle[0x31];
  p_int4 = (int *)runtime_malloc_aligned(0xc);
  if (p_int4 == (int *)0x0) {
    p_int4 = (int *)VTable_Routine_080D3BC0(0xc);
  }
  if (p_int4 != (int *)0xfffffff8) {
    p_int4[2] = i_val2;
  }
  p_uint5 = *(undefined4 **)(i_val3 + 4);
  *p_int4 = i_val3;
  p_int4[1] = (int)p_uint5;
  *p_uint5 = p_int4;
  *(int **)(i_val3 + 4) = p_int4;
  i_val3 = HW_GetPaletteBankOffset(*handle);
  _call_via_r2(i_val3,i_val2,*(undefined4 *)(*(int *)(i_val3 + 8) + 0x10));
  return;
}

// =============================================================================
// Function: M4A_Routine_080CE598 @ 0x080CE598
// =============================================================================
undefined4 M4A_Routine_080CE598(undefined4 *handle)

{
  int *p_int1;
  int i_val2;
  undefined4 *p_uint3;
  undefined4 *p_uint4;
  undefined2 u_val5;
  int i_val6;
  undefined4 u_val7;
  undefined4 *p_uint8;
  undefined4 u_val9;
  undefined1 stack_buf_74 [16];
  int stack_val_64;
  undefined2 stack_val_60;
  undefined4 stack_val_54;
  undefined4 stack_val_50;
  undefined4 stack_val_4c;
  undefined4 stack_val_48;
  int stack_val_44;
  int stack_val_40;
  undefined4 *puStack_3c;
  undefined2 *puStack_38;
  undefined4 *puStack_34;
  undefined2 *puStack_30;
  int *piStack_2c;
  int *piStack_28;
  undefined4 *puStack_24;
  
  _call_via_r3(stack_buf_74,(int *)handle[0x14],
                  *(undefined2 *)(handle[0x15] + (uint)*(ushort *)(handle + 0x17) * 4),
                  *(undefined4 *)(*(int *)handle[0x14] + 0x10));
  p_int1 = (int *)HW_GetSpriteAttr0Offset(*handle);
  i_val6 = stack_val_64;
  i_val2 = HW_Routine_080074C0(handle + 5,handle[6]);
  u_val5 = 0;
  if (stack_val_64 != 0) {
    u_val5 = stack_val_60;
  }
  piStack_28 = p_int1;
  HW_Routine_08008F0C(&stack_val_54,i_val6,i_val2 * 0x20 + 0x05000200,u_val5);
  p_uint3 = (undefined4 *)p_int1[1];
  if (p_uint3 == (undefined4 *)p_int1[3]) {
    stack_val_40 = 1;
    stack_val_44 = (int)p_uint3 - *piStack_28 >> 4;
    p_int1 = &stack_val_44;
    if (stack_val_44 == 0) {
      p_int1 = &stack_val_40;
    }
    if (stack_val_44 + *p_int1 == 0) {
      puStack_24 = (undefined4 *)0x0;
      i_val6 = 0;
    }
    else {
      i_val6 = (stack_val_44 + *p_int1) * 0x10;
      puStack_24 = (undefined4 *)runtime_malloc_aligned(i_val6);
      if (puStack_24 == (undefined4 *)0x0) {
        puStack_24 = (undefined4 *)VTable_Routine_080D3BC0(i_val6);
      }
    }
    puStack_34 = handle + 0x13;
    puStack_30 = (undefined2 *)((int)handle + 0x4e);
    puStack_3c = handle + 0x21;
    puStack_38 = (undefined2 *)((int)handle + 0x86);
    piStack_2c = handle + 0x2f;
    p_uint8 = puStack_24;
    for (p_uint4 = (undefined4 *)*piStack_28; p_uint4 != p_uint3; p_uint4 = p_uint4 + 4) {
      if (p_uint8 != (undefined4 *)0x0) {
        u_val7 = p_uint4[1];
        u_val9 = p_uint4[2];
        *p_uint8 = *p_uint4;
        p_uint8[1] = u_val7;
        p_uint8[2] = u_val9;
        p_uint8[3] = p_uint4[3];
      }
      p_uint8 = p_uint8 + 4;
    }
    i_val2 = stack_val_40;
    if (stack_val_40 == 1) {
      if (p_uint8 != (undefined4 *)0x0) {
        *p_uint8 = stack_val_54;
        p_uint8[1] = stack_val_50;
        p_uint8[2] = stack_val_4c;
        p_uint8[3] = stack_val_48;
      }
      p_uint8 = p_uint8 + 4;
    }
    else {
      for (; i_val2 != 0; i_val2 = i_val2 + -1) {
        if (p_uint8 != (undefined4 *)0x0) {
          *p_uint8 = stack_val_54;
          p_uint8[1] = stack_val_50;
          p_uint8[2] = stack_val_4c;
          p_uint8[3] = stack_val_48;
        }
        p_uint8 = p_uint8 + 4;
      }
    }
    for (i_val2 = *piStack_28; i_val2 != piStack_28[1]; i_val2 = i_val2 + 0x10) {
    }
    if (*piStack_28 != 0) {
      cpp_operator_delete();
    }
    *piStack_28 = (int)puStack_24;
    piStack_28[1] = (int)p_uint8;
    piStack_28[3] = (int)puStack_24 + i_val6;
  }
  else {
    if (p_uint3 != (undefined4 *)0x0) {
      *p_uint3 = stack_val_54;
      p_uint3[1] = stack_val_50;
      p_uint3[2] = stack_val_4c;
      p_uint3[3] = stack_val_48;
    }
    piStack_28[1] = piStack_28[1] + 0x10;
    puStack_34 = handle + 0x13;
    puStack_30 = (undefined2 *)((int)handle + 0x4e);
    puStack_3c = handle + 0x21;
    puStack_38 = (undefined2 *)((int)handle + 0x86);
    piStack_2c = handle + 0x2f;
  }
  *(undefined2 *)puStack_34 = 0xe8;
  *puStack_30 = 0x28;
  *(undefined2 *)puStack_3c = 0xe8;
  *puStack_38 = 0x50;
  M4A_Routine_080CE510(handle,*piStack_2c + 1,0x0600F0F6,0x20,0,0x20);
  M4A_Routine_080CE480(handle,0x0600F0F8,0x2d,1,1,0,0x20);
  M4A_Routine_080CE510(handle,8,0x0600F0FA,0x20,0,0x20);
  return;
}

// =============================================================================
// Function: M4A_Routine_080CE790 @ 0x080CE790
// =============================================================================
undefined4 M4A_Routine_080CE790(int *handle)

{
  undefined2 u_val1;
  undefined4 u_val2;
  int i_val3;
  int *p_int4;
  undefined4 *p_uint5;
  int *p_int6;
  undefined4 *p_uint7;
  undefined4 *p_uint8;
  int i_val9;
  undefined4 *p_uint10;
  undefined4 u_val11;
  int stack_val_84;
  undefined4 stack_val_80;
  undefined4 stack_val_7c;
  int stack_val_78;
  uint stack_val_74;
  int stack_val_70;
  uint stack_val_6c;
  int stack_val_68;
  undefined2 stack_val_64;
  int stack_val_60;
  undefined2 stack_val_5c;
  undefined4 stack_val_48;
  undefined4 stack_val_44;
  undefined4 stack_val_40;
  undefined4 stack_val_3c;
  int stack_val_38;
  int stack_val_34;
  int stack_val_30;
  int stack_val_2c;
  int *piStack_28;
  undefined4 *puStack_24;
  
  *(char *)(handle + 0x20) = '\x01';
  *(undefined1 *)(handle + 0x2e) = 1;
  stack_val_84 = 0;
  stack_val_80 = 0;
  stack_val_7c = stack_val_7c & 0xffff0000;
  stack_val_78 = 0;
  stack_val_74 = stack_val_74 & 0xffff0000;
  stack_val_70 = 0;
  stack_val_6c = stack_val_6c & 0xffffff00;
  if ((char)handle[0x20] != '\0') {
    if (*(int *)(*handle + 0x88) == 3) {
      Animal_Routine_0805E8F0(handle + 0x14);
    }
    _call_via_r3(&stack_val_68,(int *)handle[0x14],
                    *(undefined2 *)(handle[0x15] + (uint)*(ushort *)(handle + 0x17) * 4),
                    *(undefined4 *)(*(int *)handle[0x14] + 0x10));
    stack_val_80 = handle[0x1a];
    stack_val_78 = handle[0x1c];
    stack_val_74 = handle[0x1d];
    stack_val_70 = handle[0x1e];
    stack_val_6c = handle[0x1f];
    stack_val_84 = handle[0x13];
    stack_val_7c._2_2_ = (undefined2)((uint)handle[0x1b] >> 0x10);
    stack_val_7c = CONCAT22(stack_val_7c._2_2_,1);
    u_val1 = HW_Routine_080074C0(handle + 5,handle[6]);
    stack_val_80 = CONCAT22(stack_val_80._2_2_,u_val1);
    u_val1 = HW_Routine_08007D4C(handle + 1,handle[2]);
    stack_val_80 = CONCAT22(u_val1,(undefined2)stack_val_80);
    stack_val_6c = CONCAT31(stack_val_6c._1_3_,1);
    u_val2 = HW_GetSpriteAttr2Offset(*handle);
    u_val1 = 0;
    if (stack_val_68 != 0) {
      u_val1 = stack_val_64;
    }
    Animal_Routine_0805E99C(u_val2,stack_val_68,u_val1,&stack_val_84);
    p_int6 = (int *)HW_GetSpriteAttr0Offset(*handle);
    i_val9 = stack_val_60;
    i_val3 = HW_Routine_08007D4C(handle + 1,handle[2]);
    u_val1 = 0;
    if (stack_val_60 != 0) {
      u_val1 = stack_val_5c;
    }
    piStack_28 = p_int6;
    HW_Routine_08008F0C(&stack_val_48,i_val9,i_val3 * 0x20 + 0x06010000,u_val1);
    p_uint7 = (undefined4 *)p_int6[1];
    if (p_uint7 == (undefined4 *)p_int6[3]) {
      stack_val_34 = 1;
      stack_val_38 = (int)p_uint7 - *piStack_28 >> 4;
      p_int6 = &stack_val_38;
      if (stack_val_38 == 0) {
        p_int6 = &stack_val_34;
      }
      puStack_24 = p_uint7;
      if (stack_val_38 + *p_int6 == 0) {
        p_uint7 = (undefined4 *)0x0;
        i_val9 = 0;
      }
      else {
        i_val9 = (stack_val_38 + *p_int6) * 0x10;
        p_uint7 = (undefined4 *)runtime_malloc_aligned(i_val9);
        if (p_uint7 == (undefined4 *)0x0) {
          p_uint7 = (undefined4 *)VTable_Routine_080D3BC0(i_val9);
        }
      }
      p_uint8 = p_uint7;
      for (p_uint5 = (undefined4 *)*piStack_28; p_uint5 != puStack_24; p_uint5 = p_uint5 + 4) {
        if (p_uint8 != (undefined4 *)0x0) {
          u_val2 = p_uint5[1];
          u_val11 = p_uint5[2];
          *p_uint8 = *p_uint5;
          p_uint8[1] = u_val2;
          p_uint8[2] = u_val11;
          p_uint8[3] = p_uint5[3];
        }
        p_uint8 = p_uint8 + 4;
      }
      i_val3 = stack_val_34;
      if (stack_val_34 == 1) {
        if (p_uint8 != (undefined4 *)0x0) {
          *p_uint8 = stack_val_48;
          p_uint8[1] = stack_val_44;
          p_uint8[2] = stack_val_40;
          p_uint8[3] = stack_val_3c;
        }
        p_uint8 = p_uint8 + 4;
      }
      else {
        for (; i_val3 != 0; i_val3 = i_val3 + -1) {
          if (p_uint8 != (undefined4 *)0x0) {
            *p_uint8 = stack_val_48;
            p_uint8[1] = stack_val_44;
            p_uint8[2] = stack_val_40;
            p_uint8[3] = stack_val_3c;
          }
          p_uint8 = p_uint8 + 4;
        }
      }
      for (i_val3 = *piStack_28; i_val3 != piStack_28[1]; i_val3 = i_val3 + 0x10) {
      }
      if (*piStack_28 != 0) {
        cpp_operator_delete();
      }
      *piStack_28 = (int)p_uint7;
      piStack_28[1] = (int)p_uint8;
      piStack_28[3] = i_val9 + (int)p_uint7;
    }
    else {
      if (p_uint7 != (undefined4 *)0x0) {
        *p_uint7 = stack_val_48;
        p_uint7[1] = stack_val_44;
        p_uint7[2] = stack_val_40;
        p_uint7[3] = stack_val_3c;
      }
      piStack_28[1] = piStack_28[1] + 0x10;
    }
  }
  if ((char)handle[0x2e] != '\0') {
    if (*(int *)(*handle + 0x88) == 3) {
      Animal_Routine_0805E8F0(handle + 0x22);
    }
    p_int6 = (int *)handle[0x22];
    _call_via_r3(&stack_val_68,p_int6,
                    *(undefined2 *)(handle[0x23] + (uint)*(ushort *)(handle + 0x25) * 4),
                    *(undefined4 *)(*p_int6 + 0x10));
    stack_val_80 = handle[0x28];
    stack_val_78 = handle[0x2a];
    stack_val_74 = handle[0x2b];
    stack_val_70 = handle[0x2c];
    stack_val_6c = handle[0x2d];
    stack_val_84 = handle[0x21];
    stack_val_7c._2_2_ = (undefined2)((uint)handle[0x29] >> 0x10);
    stack_val_7c = CONCAT22(stack_val_7c._2_2_,1);
    u_val1 = HW_Routine_080074C0(handle + 5,handle[6]);
    stack_val_80 = CONCAT22(stack_val_80._2_2_,u_val1);
    u_val1 = HW_Routine_08007D4C(handle + 3,handle[4]);
    stack_val_80 = CONCAT22(u_val1,(undefined2)stack_val_80);
    stack_val_6c = CONCAT31(stack_val_6c._1_3_,1);
    u_val2 = HW_GetSpriteAttr2Offset(*handle);
    u_val1 = 0;
    if (stack_val_68 != 0) {
      u_val1 = stack_val_64;
    }
    Animal_Routine_0805E99C(u_val2,stack_val_68,u_val1,&stack_val_84);
    p_int6 = (int *)HW_GetSpriteAttr0Offset(*handle);
    i_val9 = stack_val_60;
    i_val3 = HW_Routine_08007D4C(handle + 3,handle[4]);
    u_val1 = 0;
    if (stack_val_60 != 0) {
      u_val1 = stack_val_5c;
    }
    HW_Routine_08008F0C(&stack_val_48,i_val9,i_val3 * 0x20 + 0x06010000,u_val1);
    p_uint7 = (undefined4 *)p_int6[1];
    if (p_uint7 == (undefined4 *)p_int6[3]) {
      stack_val_2c = 1;
      stack_val_30 = (int)p_uint7 - *p_int6 >> 4;
      p_int4 = &stack_val_30;
      if (stack_val_30 == 0) {
        p_int4 = &stack_val_2c;
      }
      if (stack_val_30 + *p_int4 == 0) {
        p_uint5 = (undefined4 *)0x0;
        i_val9 = 0;
      }
      else {
        i_val9 = (stack_val_30 + *p_int4) * 0x10;
        p_uint5 = (undefined4 *)runtime_malloc_aligned(i_val9);
        if (p_uint5 == (undefined4 *)0x0) {
          p_uint5 = (undefined4 *)VTable_Routine_080D3BC0(i_val9);
        }
      }
      p_uint10 = p_uint5;
      for (p_uint8 = (undefined4 *)*p_int6; p_uint8 != p_uint7; p_uint8 = p_uint8 + 4) {
        if (p_uint10 != (undefined4 *)0x0) {
          u_val2 = p_uint8[1];
          u_val11 = p_uint8[2];
          *p_uint10 = *p_uint8;
          p_uint10[1] = u_val2;
          p_uint10[2] = u_val11;
          p_uint10[3] = p_uint8[3];
        }
        p_uint10 = p_uint10 + 4;
      }
      i_val3 = stack_val_2c;
      if (stack_val_2c == 1) {
        if (p_uint10 != (undefined4 *)0x0) {
          *p_uint10 = stack_val_48;
          p_uint10[1] = stack_val_44;
          p_uint10[2] = stack_val_40;
          p_uint10[3] = stack_val_3c;
        }
        p_uint10 = p_uint10 + 4;
      }
      else {
        for (; i_val3 != 0; i_val3 = i_val3 + -1) {
          if (p_uint10 != (undefined4 *)0x0) {
            *p_uint10 = stack_val_48;
            p_uint10[1] = stack_val_44;
            p_uint10[2] = stack_val_40;
            p_uint10[3] = stack_val_3c;
          }
          p_uint10 = p_uint10 + 4;
        }
      }
      for (i_val3 = *p_int6; i_val3 != p_int6[1]; i_val3 = i_val3 + 0x10) {
      }
      puStack_24 = p_uint5;
      if (*p_int6 != 0) {
        cpp_operator_delete();
      }
      *p_int6 = (int)puStack_24;
      p_int6[1] = (int)p_uint10;
      p_int6[3] = (int)puStack_24 + i_val9;
    }
    else {
      if (p_uint7 != (undefined4 *)0x0) {
        *p_uint7 = stack_val_48;
        p_uint7[1] = stack_val_44;
        p_uint7[2] = stack_val_40;
        p_uint7[3] = stack_val_3c;
      }
      p_int6[1] = p_int6[1] + 0x10;
    }
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080CEB5C @ 0x080CEB5C
// =============================================================================
undefined4 M4A_Routine_080CEB5C(int handle,int channel)

{
  
  *(int *)(handle + 0xbc) = channel;
  M4A_Routine_080CE510(handle,channel + 1,0x0600F0F6,0x20,0,0x20);
  return;
}

// =============================================================================
// Function: M4A_Routine_080CEB80 @ 0x080CEB80
// =============================================================================
undefined8 M4A_Routine_080CEB80(int handle)

{
  uint u_val1;
  
  u_val1 = *(uint *)(handle + 0xbc);
  if (u_val1 < 7) {
    u_val1 = u_val1 + 1;
  }
  else {
    u_val1 = 0;
  }
  *(uint *)(handle + 0xbc) = u_val1;
  M4A_Routine_080CE510(handle,*(int *)(handle + 0xbc) + 1,0x0600F0F6,0x20,0,0x20);
  return *(int *)(handle + 0xbc);
}

// =============================================================================
// Function: M4A_Routine_080CEBC0 @ 0x080CEBC0
// =============================================================================
undefined8 M4A_Routine_080CEBC0(int handle)

{
  int i_val1;
  
  i_val1 = *(int *)(handle + 0xbc);
  if (i_val1 == 0) {
    i_val1 = 7;
  }
  else {
    i_val1 = i_val1 + -1;
  }
  *(int *)(handle + 0xbc) = i_val1;
  M4A_Routine_080CE510(handle,*(int *)(handle + 0xbc) + 1,0x0600F0F6,0x20,0,0x20);
  return *(int *)(handle + 0xbc);
}

// =============================================================================
// Function: M4A_Routine_080CEC00 @ 0x080CEC00
// =============================================================================
undefined8 M4A_Routine_080CEC00(undefined4 *handle,undefined4 channel)

{
  undefined4 u_val1;
  
  *handle = channel;
  Animal_Routine_0805E6CC(handle + 1,gRomGfx_08754C0C);
  *(undefined2 *)(handle + 0xd) = 0;
  *(undefined2 *)((int)handle + 0x36) = 0;
  Animal_Routine_0805E824(handle + 0xe,handle + 1,1,0x100);
  *(undefined2 *)(handle + 0x13) = 0;
  *(undefined2 *)((int)handle + 0x4e) = 0;
  *(undefined2 *)(handle + 0x14) = 0;
  *(undefined2 *)((int)handle + 0x52) = 0;
  *(undefined2 *)(handle + 0x15) = 0;
  handle[0x16] = 0;
  *(undefined1 *)(handle + 0x17) = 0;
  *(undefined1 *)((int)handle + 0x5d) = 0;
  handle[0x18] = 0;
  *(undefined1 *)(handle + 0x19) = 0;
  *(undefined1 *)(handle + 0x1a) = 0;
  HW_Routine_08007874(handle + 0x1b);
  u_val1 = HW_Routine_08007B54(handle + 0x1b,4);
  handle[0x1c] = u_val1;
  HW_Routine_08007128(handle + 0x1d);
  u_val1 = HW_Routine_0800736C(handle + 0x1d);
  handle[0x1e] = u_val1;
  handle[0x1f] = 0x12;
  handle[0x20] = 0;
  *(undefined1 *)(handle + 0x21) = 0;
  return handle;
}

// =============================================================================
// Function: M4A_Routine_080CEC84 @ 0x080CEC84
// =============================================================================
undefined4 M4A_Routine_080CEC84(undefined4 *handle,undefined4 channel,undefined4 param)

{
  int i_val1;
  byte stack_val_18;
  byte stack_val_17;
  
  *(undefined1 *)(handle + 0x21) = 1;
  *(undefined1 *)(handle + 0x1a) = 1;
  do {
    i_val1 = Animal_Routine_0805E8F0(handle + 0xe);
  } while (-1 < i_val1 * 0x20000000);
  M4A_Routine_080CE120(&stack_val_18,*handle,channel);
  *(ushort *)(handle + 0xd) = stack_val_18 + 8;
  *(ushort *)((int)handle + 0x36) = (ushort)stack_val_17;
  handle[0x1f] = channel;
  handle[0x20] = param;
  return;
}

// =============================================================================
// Function: M4A_Routine_080CFA38 @ 0x080CFA38
// =============================================================================
undefined8 M4A_Routine_080CFA38(undefined4 handle,undefined1 *channel,undefined4 param)

{
  char c_char1;
  int i_val2;
  undefined4 u_val3;
  uint u_val4;
  uint u_val5;
  undefined1 *p_uint6;
  undefined4 stack_val_28;
  undefined1 waypoint_coords [4];
  undefined1 stack_val_20;
  undefined1 stack_val_1f;
  
  *channel = 0;
  stack_val_28 = param;
  i_val2 = Farmer_Routine_0800F09C(&stack_val_28);
  if (i_val2 == 0) {
    c_char1 = Farmer_Routine_0800F11C(&stack_val_28);
    if (c_char1 == '\0') {
      Farmer_Routine_0800F0A4(waypoint_coords,&stack_val_28);
      p_uint6 = (undefined1 *)Item_Routine_0800DDD4(waypoint_coords);
      goto LAB_080cfb18;
    }
    Farmer_Routine_0800F0A4(waypoint_coords,&stack_val_28);
    u_val3 = Item_Routine_0800DCB8(waypoint_coords);
  }
  else {
    p_uint6 = (undefined1 *)0x0;
    if (i_val2 != 1) goto LAB_080cfb18;
    c_char1 = Farmer_Routine_0800F11C(&stack_val_28);
    if (c_char1 == '\0') {
      stack_val_1f = Farmer_Routine_0800F0E8(&stack_val_28);
      p_uint6 = (undefined1 *)Item_Routine_0800DFD4();
      goto LAB_080cfb18;
    }
    stack_val_20 = Farmer_Routine_0800F0E8(&stack_val_28);
    u_val3 = Item_Routine_0800DF58();
  }
  u_val4 = gba_strlen();
  if (99 < u_val4) {
    u_val4 = 99;
  }
  gba_memcpy(channel,u_val3,u_val4);
  channel[u_val4] = 0;
  u_val3 = *gRomData_08117AA4;
  i_val2 = gba_strlen(channel);
  u_val4 = 99 - i_val2;
  p_uint6 = channel;
  if (u_val4 != 0) {
    u_val5 = gba_strlen(u_val3);
    if (u_val4 < u_val5) {
      u_val5 = u_val4;
    }
    gba_memcpy(channel + i_val2,u_val3,u_val5);
    (channel + i_val2)[u_val5] = 0;
  }
LAB_080cfb18:
  return p_uint6;
}

// =============================================================================
// Function: M4A_Routine_080CFB28 @ 0x080CFB28
// =============================================================================
undefined8 M4A_Routine_080CFB28(int handle)

{
  int i_val1;
  int i_val2;
  
  NPC_Routine_080A4A94();
  *(undefined4 *)(handle + 0x90) = gRomData_080E85E8;
  i_val1 = handle + 0x94;
  i_val2 = 0x53;
  do {
    Farm_Routine_08009F8C(i_val1);
    i_val1 = i_val1 + 4;
    i_val2 = i_val2 + -1;
  } while (i_val2 != -1);
  return handle;
}

// =============================================================================
// Function: M4A_Routine_080CFC7C @ 0x080CFC7C
// =============================================================================
undefined4 M4A_Routine_080CFC7C(int handle,int *channel)

{
  int *p_int1;
  undefined4 *p_uint2;
  int i_val3;
  undefined4 *p_uint4;
  undefined4 *p_uint5;
  int i_val6;
  int i_val7;
  undefined4 u_val8;
  undefined4 u_val9;
  undefined4 stack_val_44;
  undefined4 stack_val_40;
  undefined4 stack_val_3c;
  undefined4 stack_val_38;
  int stack_val_34;
  int stack_val_30;
  int stack_val_2c;
  int stack_val_28;
  undefined4 *puStack_24;
  
  NPC_Routine_080A5EA0();
  if (*(int *)(handle + 4) == 0x3e) {
    HW_Routine_08008F0C(&stack_val_44,gRomGfx_086D5508,0x06005FC0,0xe60);
    p_uint4 = (undefined4 *)channel[1];
    if (p_uint4 == (undefined4 *)channel[3]) {
      stack_val_30 = 1;
      p_uint5 = (undefined4 *)*channel;
      stack_val_34 = (int)p_uint4 - (int)p_uint5 >> 4;
      p_int1 = &stack_val_34;
      if (stack_val_34 == 0) {
        p_int1 = &stack_val_30;
      }
      if (stack_val_34 + *p_int1 == 0) {
        p_uint2 = (undefined4 *)0x0;
        i_val7 = 0;
        puStack_24 = p_uint2;
      }
      else {
        i_val7 = (stack_val_34 + *p_int1) * 0x10;
        p_uint2 = (undefined4 *)runtime_malloc_aligned(i_val7);
        if (p_uint2 == (undefined4 *)0x0) {
          p_uint2 = (undefined4 *)VTable_Routine_080D3BC0(i_val7);
        }
        p_uint5 = (undefined4 *)*channel;
        puStack_24 = p_uint2;
      }
      for (; p_uint5 != p_uint4; p_uint5 = p_uint5 + 4) {
        if (p_uint2 != (undefined4 *)0x0) {
          u_val8 = p_uint5[1];
          u_val9 = p_uint5[2];
          *p_uint2 = *p_uint5;
          p_uint2[1] = u_val8;
          p_uint2[2] = u_val9;
          p_uint2[3] = p_uint5[3];
        }
        p_uint2 = p_uint2 + 4;
      }
      i_val3 = stack_val_30;
      if (stack_val_30 == 1) {
        if (p_uint2 != (undefined4 *)0x0) {
          *p_uint2 = stack_val_44;
          p_uint2[1] = stack_val_40;
          p_uint2[2] = stack_val_3c;
          p_uint2[3] = stack_val_38;
        }
        p_uint2 = p_uint2 + 4;
      }
      else {
        for (; i_val3 != 0; i_val3 = i_val3 + -1) {
          if (p_uint2 != (undefined4 *)0x0) {
            *p_uint2 = stack_val_44;
            p_uint2[1] = stack_val_40;
            p_uint2[2] = stack_val_3c;
            p_uint2[3] = stack_val_38;
          }
          p_uint2 = p_uint2 + 4;
        }
      }
      i_val6 = *channel;
      for (i_val3 = i_val6; i_val3 != channel[1]; i_val3 = i_val3 + 0x10) {
      }
      if (i_val6 != 0) {
        cpp_operator_delete(i_val6);
      }
      *channel = (int)puStack_24;
      channel[1] = (int)p_uint2;
      channel[3] = (int)puStack_24 + i_val7;
    }
    else {
      if (p_uint4 != (undefined4 *)0x0) {
        *p_uint4 = stack_val_44;
        p_uint4[1] = stack_val_40;
        p_uint4[2] = stack_val_3c;
        p_uint4[3] = stack_val_38;
      }
      channel[1] = channel[1] + 0x10;
    }
    HW_Routine_08008F0C(&stack_val_44,gRomGfx_08698E14,0x06006E20,0x11e0);
    p_uint4 = (undefined4 *)channel[1];
    if (p_uint4 == (undefined4 *)channel[3]) {
      stack_val_28 = 1;
      p_uint5 = (undefined4 *)*channel;
      stack_val_2c = (int)p_uint4 - (int)p_uint5 >> 4;
      p_int1 = &stack_val_2c;
      if (stack_val_2c == 0) {
        p_int1 = &stack_val_28;
      }
      if (stack_val_2c + *p_int1 == 0) {
        p_uint2 = (undefined4 *)0x0;
        i_val7 = 0;
        puStack_24 = p_uint2;
      }
      else {
        i_val7 = (stack_val_2c + *p_int1) * 0x10;
        p_uint2 = (undefined4 *)runtime_malloc_aligned(i_val7);
        if (p_uint2 == (undefined4 *)0x0) {
          p_uint2 = (undefined4 *)VTable_Routine_080D3BC0(i_val7);
        }
        p_uint5 = (undefined4 *)*channel;
        puStack_24 = p_uint2;
      }
      for (; p_uint5 != p_uint4; p_uint5 = p_uint5 + 4) {
        if (p_uint2 != (undefined4 *)0x0) {
          u_val8 = p_uint5[1];
          u_val9 = p_uint5[2];
          *p_uint2 = *p_uint5;
          p_uint2[1] = u_val8;
          p_uint2[2] = u_val9;
          p_uint2[3] = p_uint5[3];
        }
        p_uint2 = p_uint2 + 4;
      }
      i_val3 = stack_val_28;
      if (stack_val_28 == 1) {
        if (p_uint2 != (undefined4 *)0x0) {
          *p_uint2 = stack_val_44;
          p_uint2[1] = stack_val_40;
          p_uint2[2] = stack_val_3c;
          p_uint2[3] = stack_val_38;
        }
        p_uint2 = p_uint2 + 4;
      }
      else {
        for (; i_val3 != 0; i_val3 = i_val3 + -1) {
          if (p_uint2 != (undefined4 *)0x0) {
            *p_uint2 = stack_val_44;
            p_uint2[1] = stack_val_40;
            p_uint2[2] = stack_val_3c;
            p_uint2[3] = stack_val_38;
          }
          p_uint2 = p_uint2 + 4;
        }
      }
      i_val6 = *channel;
      for (i_val3 = i_val6; i_val3 != channel[1]; i_val3 = i_val3 + 0x10) {
      }
      if (i_val6 != 0) {
        cpp_operator_delete(i_val6);
      }
      *channel = (int)puStack_24;
      channel[1] = (int)p_uint2;
      channel[3] = (int)puStack_24 + i_val7;
    }
    else {
      if (p_uint4 != (undefined4 *)0x0) {
        *p_uint4 = stack_val_44;
        p_uint4[1] = stack_val_40;
        p_uint4[2] = stack_val_3c;
        p_uint4[3] = stack_val_38;
      }
      channel[1] = channel[1] + 0x10;
    }
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080CFEA8 @ 0x080CFEA8
// =============================================================================
undefined4 M4A_Routine_080CFEA8(int handle,int channel,int param,undefined4 val,int arg_5)

{
  byte b_flag1;
  int i_val2;
  uint u_val3;
  byte *pbVar4;
  byte *pbVar5;
  
  i_val2 = Map_GetMapData(*(undefined4 *)(handle + 4));
  u_val3 = (uint)*(ushort *)(i_val2 + 0x20);
  i_val2 = FieldPlot_GetTileGraphic(val);
  if (i_val2 != 0) {
    gba_memcpy(param * u_val3 * 2 + channel * 2 + *(int *)(handle + 0x10),i_val2,4);
    gba_memcpy((param + 1) * u_val3 * 2 + channel * 2 + *(int *)(handle + 0x10),i_val2 + 4,4);
    *(undefined1 *)(handle + 0x29) = 1;
  }
  if (arg_5 != 0) {
    i_val2 = channel * 2;
    gba_memcpy((param + -1) * u_val3 * 2 + i_val2 + *(int *)(handle + 0x18),arg_5,4);
    gba_memcpy(param * u_val3 * 2 + i_val2 + *(int *)(handle + 0x14),arg_5 + 4,4);
    gba_memcpy(u_val3 * (param + 1) * 2 + i_val2 + *(int *)(handle + 0x14),arg_5 + 8,4);
    *(undefined1 *)(handle + 0x29) = 1;
  }
  b_flag1 = FieldPlot_IsTilled(val);
  pbVar5 = (byte *)((channel + param * u_val3) * 4 + *(int *)(handle + 0x2c));
  pbVar4 = (byte *)((u_val3 * (param + 1) + channel) * 4 + *(int *)(handle + 0x2c));
  b_flag1 = b_flag1 & 1;
  pbVar4[4] = pbVar4[4] & 0xfe | b_flag1;
  *pbVar4 = *pbVar4 & 0xfe | b_flag1;
  pbVar5[4] = pbVar5[4] & 0xfe | b_flag1;
  *pbVar5 = *pbVar5 & 0xfe | b_flag1;
  return;
}

// =============================================================================
// Function: M4A_Routine_080CFFC0 @ 0x080CFFC0
// =============================================================================
undefined4 M4A_Routine_080CFFC0(int handle,int channel,int param,undefined4 *val)

{
  bool b_flag1;
  undefined4 u_val2;
  int i_val3;
  int i_val4;
  int i_val5;
  int i_val6;
  int i_val7;
  int i_val8;
  
  *(undefined4 *)(handle + 0x94 + (channel + param * 0xc) * 4) = *val;
  i_val3 = param + -1;
  b_flag1 = false;
  if ((((-1 < channel) && (-1 < i_val3)) && (channel < 0xc)) && (i_val3 < 7)) {
    b_flag1 = true;
  }
  if (b_flag1) {
    i_val3 = handle + 0x94 + (channel + i_val3 * 0xc) * 4;
  }
  else {
    i_val3 = 0;
  }
  i_val8 = handle + 0x94;
  i_val4 = param + -1;
  i_val7 = channel << 1;
  if (i_val3 != 0) {
    i_val3 = (channel + i_val4 * 0xc) * 4 + i_val8;
    b_flag1 = false;
    if (((-1 < channel) && (-1 < param)) && ((channel < 0xc && (param < 7)))) {
      b_flag1 = true;
    }
    if (b_flag1) {
      i_val7 = i_val8 + (channel + param * 0xc) * 4;
    }
    else {
      i_val7 = 0;
    }
    i_val6 = param + -2;
    b_flag1 = false;
    if (((-1 < channel) && (-1 < i_val6)) && ((channel < 0xc && (i_val6 < 7)))) {
      b_flag1 = true;
    }
    if (b_flag1) {
      i_val6 = i_val8 + (channel + i_val6 * 0xc) * 4;
    }
    else {
      i_val6 = 0;
    }
    u_val2 = FieldPlot_ResolveBorderTile(i_val3,i_val7,i_val6);
    i_val7 = channel * 2;
    M4A_Routine_080CFEA8(handle,i_val7,i_val4 * 2 + 7,i_val3,u_val2);
  }
  i_val3 = (channel + param * 0xc) * 4 + i_val8;
  i_val6 = param + 1;
  b_flag1 = false;
  if ((((-1 < channel) && (-1 < i_val6)) && (channel < 0xc)) && (i_val6 < 7)) {
    b_flag1 = true;
  }
  if (b_flag1) {
    i_val5 = i_val8 + (channel + i_val6 * 0xc) * 4;
  }
  else {
    i_val5 = 0;
  }
  b_flag1 = false;
  if (((-1 < channel) && (-1 < i_val4)) && ((channel < 0xc && (i_val4 < 7)))) {
    b_flag1 = true;
  }
  if (b_flag1) {
    i_val4 = i_val8 + (channel + i_val4 * 0xc) * 4;
  }
  else {
    i_val4 = 0;
  }
  u_val2 = FieldPlot_ResolveBorderTile(i_val3,i_val5,i_val4);
  M4A_Routine_080CFEA8(handle,i_val7,param * 2 + 7,i_val3,u_val2);
  b_flag1 = false;
  if (((-1 < channel) && (-1 < i_val6)) && ((channel < 0xc && (i_val6 < 7)))) {
    b_flag1 = true;
  }
  if (b_flag1) {
    i_val3 = i_val8 + (channel + i_val6 * 0xc) * 4;
  }
  else {
    i_val3 = 0;
  }
  if (i_val3 != 0) {
    i_val3 = (channel + i_val6 * 0xc) * 4 + i_val8;
    i_val4 = param + 2;
    b_flag1 = false;
    if ((((-1 < channel) && (-1 < i_val4)) && (channel < 0xc)) && (i_val4 < 7)) {
      b_flag1 = true;
    }
    if (b_flag1) {
      i_val4 = i_val8 + (channel + i_val4 * 0xc) * 4;
    }
    else {
      i_val4 = 0;
    }
    b_flag1 = false;
    if (((-1 < channel) && (-1 < param)) && ((channel < 0xc && (param < 7)))) {
      b_flag1 = true;
    }
    if (b_flag1) {
      i_val8 = i_val8 + (channel + param * 0xc) * 4;
    }
    else {
      i_val8 = 0;
    }
    u_val2 = FieldPlot_ResolveBorderTile(i_val3,i_val4,i_val8);
    M4A_Routine_080CFEA8(handle,i_val7,i_val6 * 2 + 7,i_val3,u_val2);
  }
  return;
}

// =============================================================================
// Function: runtime_malloc_aligned @ 0x080D01F8
// =============================================================================
undefined8 runtime_malloc_aligned(int arg_1)

{
  uint u_val1;
  uint *p_uint2;
  uint u_val3;
  uint u_val4;
  
  u_val4 = arg_1 + 3U & 0xfffffffc;
  p_uint2 = (uint *)*gIWRAM_030418;
  if (p_uint2 != (uint *)0x0) {
    do {
      if ((p_uint2[1] == 0) && (u_val1 = *p_uint2, u_val4 <= u_val1)) {
        if (u_val4 + 0x20 <= u_val1) {
          u_val3 = (int)p_uint2 + u_val4 + 0x10;
          *(uint *)((int)p_uint2 + u_val4 + 0x10) = (u_val1 - 0x10) - u_val4;
          *(undefined4 *)((int)p_uint2 + u_val4 + 0x14) = 0;
          *(uint **)((int)p_uint2 + u_val4 + 0x18) = p_uint2;
          *(uint *)((int)p_uint2 + u_val4 + 0x1c) = p_uint2[3];
          if (p_uint2[3] != 0) {
            *(uint *)(p_uint2[3] + 8) = u_val3;
          }
          *p_uint2 = u_val4;
          p_uint2[3] = u_val3;
        }
        p_uint2[1] = 1;
        break;
      }
      p_uint2 = (uint *)p_uint2[3];
    } while (p_uint2 != (uint *)0x0);
    if (p_uint2 != (uint *)0x0) {
      p_uint2 = p_uint2 + 4;
      goto LAB_080d025a;
    }
  }
  p_uint2 = (uint *)0x0;
LAB_080d025a:
  return p_uint2;
}

// =============================================================================
// Function: cpp_operator_delete @ 0x080D0260
// =============================================================================
undefined4 cpp_operator_delete(int arg_1)

{
  int *p_int1;
  int *p_int2;
  
  if (arg_1 != 0) {
    p_int2 = (int *)(arg_1 + -0x10);
    p_int1 = *(int **)(arg_1 + -8);
    if ((p_int1 != (int *)0x0) && (p_int1[1] == 0)) {
      *p_int1 = *p_int1 + 0x10 + *p_int2;
      p_int1[3] = *(int *)(arg_1 + -4);
      p_int2 = p_int1;
      if (*(int *)(arg_1 + -4) != 0) {
        *(int **)(*(int *)(arg_1 + -4) + 8) = p_int1;
      }
    }
    p_int1 = (int *)p_int2[3];
    if ((p_int1 != (int *)0x0) && (p_int1[1] == 0)) {
      *p_int2 = *p_int2 + 0x10 + *p_int1;
      p_int2[3] = p_int1[3];
      if (p_int1[3] != 0) {
        *(int **)(p_int1[3] + 8) = p_int2;
      }
    }
    p_int2[1] = 0;
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080D02B8 @ 0x080D02B8
// =============================================================================
undefined8 M4A_Routine_080D02B8(int handle)

{
  undefined4 u_val1;
  
  if (handle == 0) {
    u_val1 = 0;
  }
  else {
    u_val1 = *(undefined4 *)(handle + -0x10);
  }
  return u_val1;
}

// =============================================================================
// Function: M4A_Routine_080D02CC @ 0x080D02CC
// =============================================================================
undefined4 M4A_Routine_080D02CC(undefined4 *handle)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = gIWRAM_030420;
  *gIWRAM_030420 = (int)handle;
  *handle = 0;
  M4A_Routine_080D0B88();
  i_val2 = *p_int1;
  *(undefined4 *)(i_val2 + 4) = 0;
  *(undefined4 *)(i_val2 + 8) = 0;
  return;
}

// =============================================================================
// Function: M4A_Routine_080D02F0 @ 0x080D02F0
// =============================================================================
undefined4 M4A_Routine_080D02F0(void)

{
  int *p_int1;
  int stack_ints_24 [8];
  undefined4 stack_val_4;
  
  p_int1 = (int *)*gIWRAM_030420;
  stack_ints_24[0] = *p_int1;
  if (stack_ints_24[0] == 0) {
    *p_int1 = 1;
    p_int1[5] = 0;
    p_int1[6] = 0;
    p_int1[7] = 0;
    p_int1[8] = 1;
    p_int1[0x60] = 0;
    p_int1[0x61] = 0;
    p_int1[0x5f] = 0;
    p_int1[3] = 0;
    p_int1[4] = 0;
    M4A_Routine_080D0BA8(stack_ints_24);
    M4A_Routine_080D0B14(0,0);
    M4A_Routine_080D0ABC();
  }
  return stack_val_4;
}

// =============================================================================
// Function: M4A_Routine_080D0340 @ 0x080D0340
// =============================================================================
undefined4 M4A_Routine_080D0340(void)

{
  
  if (*(int *)*gIWRAM_030420 != 0) {
    *(int *)*gIWRAM_030420 = 0;
    M4A_Routine_080D0AE0();
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080D035C @ 0x080D035C
// =============================================================================
undefined4 M4A_Routine_080D035C(void)

{
  int *p_int1;
  int i_val2;
  int *p_int3;
  
  p_int1 = gIWRAM_030420;
  p_int3 = (int *)*gIWRAM_030420;
  if (*p_int3 != 0) {
    p_int3[7] = p_int3[0x61];
    if (*(int *)*gIWRAM_03041C == 0) {
      i_val2 = M4A_Routine_080D0C10();
      if ((i_val2 == 0) && (*(int *)(*p_int1 + 0x180) == 0)) {
        M4A_Routine_080D0BE0();
        *(undefined4 *)(*p_int1 + 0x10) = 0;
      }
      else {
        i_val2 = *gIWRAM_030420;
        if (*(int *)(i_val2 + 0x14) != 0) {
          *(undefined4 *)(i_val2 + 0x14) = 0;
          *(undefined4 *)(i_val2 + 0x18) = *(undefined4 *)(i_val2 + 0x180);
          *(undefined4 *)(i_val2 + 0x180) = 0;
          M4A_Routine_080D0C2C();
        }
      }
    }
    i_val2 = *gIWRAM_030420;
    *(int *)(i_val2 + 0xc) = *(int *)(i_val2 + 0xc) + 1;
    if (10 < *(uint *)(i_val2 + 0xc)) {
      *(undefined4 *)(i_val2 + 0xc) = 0;
      if (*(int *)*gIWRAM_03041C != 0) {
        if (*(int *)*gIWRAM_03041C == 1) {
          M4A_Routine_080D0B14(1,0);
        }
        else {
          M4A_Routine_080D0B14(1,1);
        }
      }
    }
    p_int1 = gIWRAM_030420;
    i_val2 = *gIWRAM_030420;
    *(int *)(i_val2 + 0x10) = *(int *)(i_val2 + 0x10) + 1;
    if ((1 < *(uint *)*gIWRAM_03041C) && (0xb4 < *(uint *)(i_val2 + 0x10))) {
      M4A_Routine_080D0A94(0xb);
      i_val2 = *p_int1;
      *(undefined4 *)(i_val2 + 0x14) = 0;
      *(undefined4 *)(i_val2 + 0x18) = 10;
      *(undefined4 *)(i_val2 + 0x180) = 0;
      M4A_Routine_080D0C2C();
    }
    return;
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080D0454 @ 0x080D0454
// =============================================================================
undefined4 M4A_Routine_080D0454(void)

{
  int *p_int1;
  undefined4 temp_buf_28 [4];
  int stack_val_18;
  undefined4 stack_val_10;
  undefined2 stack_val_c;
  
  p_int1 = gIWRAM_030420;
  *(undefined4 *)(*gIWRAM_030420 + 0x14) = 1;
  temp_buf_28[0] = 1;
  M4A_Routine_080D0BA8(temp_buf_28);
  temp_buf_28[0] = 3;
  stack_val_18 = *p_int1 + 0x24;
  stack_val_10 = 2;
  stack_val_c = 0;
  M4A_Routine_080D0BA8(temp_buf_28);
  return;
}

// =============================================================================
// Function: M4A_Routine_080D0490 @ 0x080D0490
// =============================================================================
undefined4 M4A_Routine_080D0490(undefined4 handle,int channel)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = gIWRAM_030420;
  *(undefined4 *)(*gIWRAM_030420 + 0x14) = 2;
  M4A_Routine_080D0BA8();
  M4A_Routine_080D0BA8();
  i_val2 = *p_int1;
  *(undefined4 *)(i_val2 + 0x1c) = 0;
  *(uint *)(i_val2 + 0x20) = channel + 1U >> 1;
  *(undefined4 *)(i_val2 + 0x184) = 0;
  return;
}

// =============================================================================
// Function: M4A_Routine_080D04F4 @ 0x080D04F4
// =============================================================================
undefined4 M4A_Routine_080D04F4(undefined4 handle,int channel)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = gIWRAM_030420;
  *(undefined4 *)(*gIWRAM_030420 + 0x14) = 3;
  M4A_Routine_080D0BA8();
  M4A_Routine_080D0BA8();
  i_val2 = *p_int1;
  *(undefined4 *)(i_val2 + 0x1c) = 0;
  *(uint *)(i_val2 + 0x20) = channel + 1U >> 1;
  *(undefined4 *)(i_val2 + 0x184) = 0;
  return;
}

// =============================================================================
// Function: M4A_Routine_080D0558 @ 0x080D0558
// =============================================================================
undefined4 M4A_Routine_080D0558(undefined4 handle,int channel,undefined4 param,int val)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = gIWRAM_030420;
  *(undefined4 *)(*gIWRAM_030420 + 0x14) = 4;
  M4A_Routine_080D0BA8();
  M4A_Routine_080D0BA8();
  M4A_Routine_080D0BA8();
  i_val2 = *p_int1;
  *(undefined4 *)(i_val2 + 0x1c) = 0;
  *(uint *)(i_val2 + 0x20) = (channel + 1U >> 1) + (val + 1U >> 1);
  *(undefined4 *)(i_val2 + 0x184) = 0;
  return;
}

// =============================================================================
// Function: M4A_Routine_080D05DC @ 0x080D05DC
// =============================================================================
undefined4 M4A_Routine_080D05DC(void)

{
  int *p_int1;
  int i_val2;
  undefined4 temp_buf_30 [4];
  int stack_val_20;
  undefined4 stack_val_18;
  undefined2 stack_val_14;
  
  p_int1 = gIWRAM_030420;
  i_val2 = *gIWRAM_030420;
  *(undefined4 *)(i_val2 + 0x14) = 5;
  if (*(int *)(i_val2 + 0x30) != 0) {
    temp_buf_30[0] = 1;
    M4A_Routine_080D0BA8(temp_buf_30);
  }
  temp_buf_30[0] = 4;
  stack_val_20 = *p_int1 + 0x24;
  stack_val_18 = 2;
  stack_val_14 = 0;
  M4A_Routine_080D0BA8();
  temp_buf_30[0] = 3;
  stack_val_20 = *p_int1 + 0x2c;
  stack_val_18 = 2;
  stack_val_14 = 0;
  M4A_Routine_080D0BA8();
  temp_buf_30[0] = 2;
  stack_val_20 = *p_int1 + 0x28;
  stack_val_18 = 2;
  stack_val_14 = 0;
  M4A_Routine_080D0BA8();
  return;
}

// =============================================================================
// Function: M4A_Routine_080D0644 @ 0x080D0644
// =============================================================================
undefined4 M4A_Routine_080D0644(undefined4 handle,undefined4 channel)

{
  int *p_int1;
  
  p_int1 = gIWRAM_030420;
  *(char *)(*gIWRAM_030420 + 0x28) = (char)handle;
  *(char *)(*p_int1 + 0x29) = (char)((uint)handle >> 8);
  *(char *)(*p_int1 + 0x2a) = (char)((uint)handle >> 0x10);
  *(char *)(*p_int1 + 0x2b) = (char)((uint)handle >> 0x18);
  *(undefined4 *)(*p_int1 + 0x30) = channel;
  M4A_Routine_080D05DC();
  return;
}

// =============================================================================
// Function: M4A_Routine_080D06A8 @ 0x080D06A8
// =============================================================================
undefined4 M4A_Routine_080D06A8(void)

{
  
  M4A_Routine_080D0A94(0xb);
  return;
}

// =============================================================================
// Function: M4A_Routine_080D06B4 @ 0x080D06B4
// =============================================================================
undefined8 M4A_Routine_080D06B4(void)

{
  
  return (uint)(*(int *)(*gIWRAM_030420 + 0x14) == 0);
}

// =============================================================================
// Function: M4A_Routine_080D06DC @ 0x080D06DC
// =============================================================================
undefined8 M4A_Routine_080D06DC(void)

{
  undefined4 u_val1;
  int i_val2;
  
  i_val2 = *(int *)(*gIWRAM_030420 + 0x20);
  if (i_val2 == 0) {
    u_val1 = 0;
  }
  else {
    u_val1 = math_divsi3(*(int *)(*gIWRAM_030420 + 0x1c) * 100,i_val2);
  }
  return u_val1;
}

// =============================================================================
// Function: M4A_Routine_080D0704 @ 0x080D0704
// =============================================================================
undefined4 M4A_Routine_080D0704(void)

{
  ushort u_val1;
  int i_val2;
  undefined4 stack_val_10;
  
  i_val2 = 0;
  u_val1 = *((void *)0x04000140);
  if (*(int *)(*gIWRAM_030420 + 0x17c) == 0) {
    if ((u_val1 & 2) != 0) {
      stack_val_10 = *((void *)0x04000150);
      i_val2 = M4A_Routine_080D078C(&stack_val_10);
    }
    if ((i_val2 == 0) && ((u_val1 & 4) != 0)) {
      i_val2 = M4A_Routine_080D091C();
    }
    if ((u_val1 & 1) != 0) {
      M4A_Routine_080D0A14();
    }
  }
  if (i_val2 != 0) {
    *((void *)0x04000158) = 0;
    M4A_Routine_080D0A54(i_val2);
  }
  *((void *)0x04000140) = u_val1;
  i_val2 = *gIWRAM_030420;
  *(undefined4 *)(i_val2 + 0xc) = 0;
  *(undefined4 *)(i_val2 + 0x10) = 0;
  return;
}

// =============================================================================
// Function: M4A_Routine_080D078C @ 0x080D078C
// =============================================================================
undefined8 M4A_Routine_080D078C(int *handle)

{
  int *p_int1;
  int i_val2;
  char *p_char3;
  undefined4 u_val4;
  byte b_flag5;
  int i_val6;
  uint stack_val_14;
  
  p_int1 = gIWRAM_03041C;
  if (4 < *(uint *)*gIWRAM_03041C) {
    u_val4 = 9;
    goto LAB_080d0912;
  }
  switch(*(uint *)(*(uint *)*gIWRAM_03041C * 4 + gInlineTable_080D07B4) & 0xfffffffe) {
  case 0x80d07c8:
    if ((1 < *(uint *)(*gIWRAM_03041C + 4)) && (*(uint *)(*gIWRAM_03041C + 4) == 2)) {
      if (*handle != *(int *)(*gIWRAM_030420 + 8)) {
        u_val4 = 1;
        goto LAB_080d0912;
      }
      *((void *)0x04000158) = 0x30;
LAB_080d07f2:
      M4A_Routine_080D0A74();
    }
    break;
  case 0x80d07fc:
    i_val6 = *gIWRAM_03041C;
    i_val2 = *(int *)(i_val6 + 4);
    if (i_val2 == 1) {
LAB_080d0836:
      u_val4 = 7;
      goto LAB_080d0912;
    }
    if (i_val2 == 0) {
      if ((char)*handle == 'B') {
        if ((uint)*(ushort *)((int)handle + 2) != *(uint *)(i_val6 + 0x18)) {
LAB_080d0860:
          u_val4 = 4;
          goto LAB_080d0912;
        }
        b_flag5 = 0x43;
        goto LAB_080d08ec;
      }
      if ((char)*handle == 'A') {
        u_val4 = 5;
        goto LAB_080d0912;
      }
    }
    else if (i_val2 == 2) {
      if ((char)*handle == 'F') goto LAB_080d07f2;
      goto LAB_080d0836;
    }
    break;
  case 0x80d083a:
    i_val6 = *gIWRAM_03041C;
    i_val2 = *(int *)(i_val6 + 4);
    if (i_val2 == 1) {
      if (*(uint *)(i_val6 + 8) < *(uint *)(i_val6 + 0x18)) {
        if (((char)*handle == 'D') &&
           ((uint)*(byte *)((int)handle + 1) == (*(uint *)(i_val6 + 8) & 0xff))) {
          p_char3 = (char *)(*(int *)(i_val6 + 8) * 2 + *(int *)(i_val6 + 0x10));
          *p_char3 = *(char *)((int)handle + 2);
          p_char3[1] = *(char *)((int)handle + 3);
          i_val2 = *p_int1;
          *(short *)(i_val2 + 0x1c) =
               *(short *)(*(int *)(i_val2 + 8) * 2 + *(int *)(i_val2 + 0x10)) +
               *(short *)(i_val2 + 0x1c);
          *(int *)(i_val2 + 8) = *(int *)(i_val2 + 8) + 1;
          *(int *)(*gIWRAM_030420 + 0x184) = *(int *)(*gIWRAM_030420 + 0x184) + 1;
          break;
        }
      }
      else if ((char)*handle == 'E') {
        if (*(short *)(i_val6 + 0x1c) != *(short *)((int)handle + 2)) {
          u_val4 = 3;
          goto LAB_080d0912;
        }
        b_flag5 = 0x46;
        goto LAB_080d08ec;
      }
LAB_080d0908:
      u_val4 = 8;
      goto LAB_080d0912;
    }
    if (i_val2 == 0) {
      if ((char)*handle == 'A') {
        if ((uint)*(ushort *)((int)handle + 2) != *(uint *)(i_val6 + 0x18)) goto LAB_080d0860;
        b_flag5 = 0x43;
LAB_080d08ec:
        stack_val_14 = (uint)b_flag5;
        *((void *)0x04000154) = stack_val_14;
        *(int *)(i_val6 + 4) = *(int *)(i_val6 + 4) + 1;
      }
      else if ((char)*handle == 'B') {
        u_val4 = 6;
        goto LAB_080d0912;
      }
    }
    else if (i_val2 == 2) goto LAB_080d0908;
  }
  u_val4 = 0;
LAB_080d0912:
  return u_val4;
}

// =============================================================================
// Function: M4A_Routine_080D091C @ 0x080D091C
// =============================================================================
undefined8 M4A_Routine_080D091C(void)

{
  undefined4 u_val1;
  int i_val2;
  undefined1 *p_uint3;
  int *p_int4;
  undefined4 stack_val_10;
  
  if (*(uint *)*gIWRAM_03041C < 5) {
    switch(*(uint *)(*(uint *)*gIWRAM_03041C * 4 + gInlineTable_080D0940) & 0xfffffffe) {
    case 0x80d0954:
      i_val2 = *gIWRAM_03041C;
      if (*(int *)(i_val2 + 4) == 1) {
        *(int *)(i_val2 + 4) = *(int *)(i_val2 + 4) + 1;
      }
      break;
    case 0x80d0964:
      p_int4 = (int *)*gIWRAM_03041C;
      if (p_int4[1] == 1) {
        if ((uint)p_int4[2] < (uint)p_int4[6]) {
          p_uint3 = (undefined1 *)(p_int4[2] * 2 + p_int4[4]);
          stack_val_10._0_3_ = CONCAT12(*p_uint3,CONCAT11((char)p_int4[2],0x44));
          stack_val_10 = CONCAT13(p_uint3[1],(undefined3)stack_val_10);
          *(short *)(p_int4 + 7) = *(short *)(p_int4[2] * 2 + p_int4[4]) + (short)p_int4[7];
          *((void *)0x04000154) = stack_val_10;
          p_int4[2] = p_int4[2] + 1;
          if (*p_int4 != 4) {
            *(int *)(*gIWRAM_030420 + 0x184) = *(int *)(*gIWRAM_030420 + 0x184) + 1;
          }
        }
        else {
          stack_val_10._0_3_ = CONCAT12((char)(short)p_int4[7],0x45);
          stack_val_10 = CONCAT13((char)((ushort)(short)p_int4[7] >> 8),(undefined3)stack_val_10);
          *((void *)0x04000154) = stack_val_10;
          p_int4[1] = p_int4[1] + 1;
        }
      }
      break;
    case 0x80d09f4:
      if ((1 < *(uint *)(*gIWRAM_03041C + 4)) && (*(uint *)(*gIWRAM_03041C + 4) == 2)) {
        M4A_Routine_080D0A74();
      }
    }
    u_val1 = 0;
  }
  else {
    u_val1 = 9;
  }
  return u_val1;
}

// =============================================================================
// Function: M4A_Routine_080D0A14 @ 0x080D0A14
// =============================================================================
undefined4 M4A_Routine_080D0A14(void)

{
  undefined4 *p_uint1;
  int *p_int2;
  
  p_uint1 = ((void *)0x04000154);
  p_int2 = (int *)*gIWRAM_03041C;
  if ((*p_int2 == 1) && ((uint)p_int2[1] < 3)) {
    *((void *)0x04000154) = *(undefined4 *)(*gIWRAM_030420 + 4);
    *(undefined2 *)(p_uint1 + 1) = 0x20;
    p_int2[1] = p_int2[1] + 1;
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080D0A94 @ 0x080D0A94
// =============================================================================
undefined4 M4A_Routine_080D0A94(void)

{
  int *p_int1;
  
  p_int1 = gIWRAM_030420;
  *(undefined4 *)(*gIWRAM_030420 + 0x17c) = 1;
  M4A_Routine_080D0A54();
  *(undefined4 *)(*p_int1 + 0x17c) = 0;
  return;
}

// =============================================================================
// Function: M4A_Routine_080D0ABC @ 0x080D0ABC
// =============================================================================
undefined4 M4A_Routine_080D0ABC(void)

{
  undefined2 u_val1;
  undefined2 *p_uint2;
  
  p_uint2 = REG_IME;
  u_val1 = *REG_IME;
  *REG_IME = 0;
  *REG_IE = *REG_IE | 0x80;
  *p_uint2 = u_val1;
  return;
}

// =============================================================================
// Function: M4A_Routine_080D0AE0 @ 0x080D0AE0
// =============================================================================
undefined4 M4A_Routine_080D0AE0(void)

{
  undefined2 u_val1;
  undefined2 *p_uint2;
  
  p_uint2 = REG_IME;
  u_val1 = *REG_IME;
  *REG_IME = 0;
  *REG_IE = (ushort)0xFF7F & *REG_IE;
  *REG_IF = 0x80;
  *p_uint2 = u_val1;
  return;
}

// =============================================================================
// Function: M4A_Routine_080D0B14 @ 0x080D0B14
// =============================================================================
undefined4 M4A_Routine_080D0B14(int handle,int channel)

{
  undefined2 u_val1;
  undefined4 *p_uint2;
  
  u_val1 = *REG_IME;
  *REG_IME = 0;
  if (handle != 0) {
    *((void *)0x04000134) = 0x8000;
  }
  *((void *)0x04000134) = 0xc000;
  if (channel == 0) {
    *((void *)0x04000158) = 0;
  }
  else {
    *((void *)0x04000158) = 0x30;
  }
  p_uint2 = ((void *)0x04000154);
  *((void *)0x04000154) = 0;
  *(undefined2 *)(p_uint2 + -5) = 0x47;
  *(undefined2 *)((int)p_uint2 + 0xae) = 0x80;
  *REG_IME = u_val1;
  return;
}

// =============================================================================
// Function: M4A_Routine_080D0BA8 @ 0x080D0BA8
// =============================================================================
undefined4 M4A_Routine_080D0BA8(undefined4 *handle)

{
  undefined4 u_val1;
  undefined4 u_val2;
  int i_val3;
  
  i_val3 = *gIWRAM_030420;
  u_val1 = math_modsi3(*(int *)(i_val3 + 0x38) + 1,10);
  *(undefined4 *)(i_val3 + 0x38) = u_val1;
  handle[1] = 0;
  handle[2] = 0;
  i_val3 = i_val3 + *(int *)(i_val3 + 0x38) * 0x20;
  u_val1 = handle[1];
  u_val2 = handle[2];
  *(undefined4 *)(i_val3 + 0x3c) = *handle;
  *(undefined4 *)(i_val3 + 0x40) = u_val1;
  *(undefined4 *)(i_val3 + 0x44) = u_val2;
  u_val1 = handle[4];
  u_val2 = handle[5];
  *(undefined4 *)(i_val3 + 0x48) = handle[3];
  *(undefined4 *)(i_val3 + 0x4c) = u_val1;
  *(undefined4 *)(i_val3 + 0x50) = u_val2;
  u_val1 = handle[7];
  *(undefined4 *)(i_val3 + 0x54) = handle[6];
  *(undefined4 *)(i_val3 + 0x58) = u_val1;
  return;
}

// =============================================================================
// Function: M4A_Routine_080D0BE0 @ 0x080D0BE0
// =============================================================================
undefined4 M4A_Routine_080D0BE0(void)

{
  int i_val1;
  int i_val2;
  
  i_val2 = *gIWRAM_030420;
  if (*(int *)(i_val2 + 0x34) != *(int *)(i_val2 + 0x38)) {
    i_val1 = math_modsi3(*(int *)(i_val2 + 0x34) + 1,10);
    *(int *)(i_val2 + 0x34) = i_val1;
    *gIWRAM_03041C = i_val2 + i_val1 * 0x20 + 0x3c;
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080D0C10 @ 0x080D0C10
// =============================================================================
undefined8 M4A_Routine_080D0C10(void)

{
  
  return (uint)(*(int *)(*gIWRAM_030420 + 0x34) == *(int *)(*gIWRAM_030420 + 0x38));
}

// =============================================================================
// Function: M4A_Routine_080D0C2C @ 0x080D0C2C
// =============================================================================
undefined4 M4A_Routine_080D0C2C(void)

{
  int i_val1;
  int i_val2;
  
  i_val2 = *gIWRAM_030420;
  i_val1 = math_modsi3(*(int *)(i_val2 + 0x34) + 1,10);
  *(int *)(i_val2 + 0x38) = i_val1;
  *(undefined4 *)(i_val2 + 0x3c + i_val1 * 0x20) = 0;
  *(int *)(i_val2 + 0x34) = *(int *)(i_val2 + 0x38);
  *gIWRAM_03041C = i_val2 + *(int *)(i_val2 + 0x38) * 0x20 + 0x3c;
  return;
}

// =============================================================================
// Function: M4A_Routine_080D0CB4 @ 0x080D0CB4
// =============================================================================
undefined8 M4A_Routine_080D0CB4(int handle,char *channel)

{
  undefined4 u_val1;
  
  u_val1 = 0;
  if ((*channel == *(char *)(handle + 2)) && (channel[1] == *(char *)(handle + 3))) {
    u_val1 = 1;
  }
  return u_val1;
}

// =============================================================================
// Function: M4A_Routine_080D0CD4 @ 0x080D0CD4
// =============================================================================
undefined8 M4A_Routine_080D0CD4(uint handle)

{
  int i_val1;
  uint u_val2;
  
  if (handle <= 0xFFFF) {
    u_val2 = (int)(handle & 0xff00) >> 8;
    if (((((handle & 0xff) - 0x40 < 0xbd) && (0x80 < u_val2)) && (u_val2 < 0xeb)) &&
       (0x3f < u_val2 - 0xa0)) {
      if (u_val2 < 0xa0) {
        i_val1 = -0x81;
      }
      else {
        i_val1 = -0xc1;
      }
      i_val1 = (u_val2 + i_val1) * 0xbd + ((handle & 0xff) - 0x40);
      goto LAB_080d0d22;
    }
  }
  i_val1 = -1;
LAB_080d0d22:
  return i_val1;
}

// =============================================================================
// Function: M4A_Routine_080D0D28 @ 0x080D0D28
// =============================================================================
undefined8 M4A_Routine_080D0D28(int handle,int channel)

{
  undefined4 u_val1;
  int i_val2;
  int i_val3;
  int i_val4;
  
  i_val4 = 0;
  if (channel - 0xb1U < 0x13) {
    switch(*(uint *)(PTR_case_080D0D4C_080d0d48 + (channel - 0xb1U) * 4) & 0xfffffffe) {
    case 0x80d0d4c:
    case 0x80d0d98:
      u_val1 = gRomData_08117B20;
      break;
    case 0x80d0da0:
      u_val1 = gRomData_08117B2C;
      break;
    case 0x80d0da8:
      u_val1 = gRomData_08117B38;
      break;
    case 0x80d0db0:
      u_val1 = gRomData_08117B44;
      break;
    case 0x80d0db8:
      u_val1 = gRomData_08117B50;
      break;
    case 0x80d0dc0:
      u_val1 = gRomData_08117B5C;
      break;
    case 0x80d0dc8:
      u_val1 = gRomData_08117B68;
      break;
    case 0x80d0dd0:
      u_val1 = gRomData_08117B74;
      break;
    case 0x80d0dd8:
      u_val1 = gRomData_08117B80;
      break;
    case 0x80d0de0:
      u_val1 = gRomData_08117B8C;
      break;
    case 0x80d0de8:
      u_val1 = gRomData_08117B98;
      break;
    case 0x80d0df0:
      u_val1 = gRomData_08117BA4;
      break;
    case 0x80d0df8:
      u_val1 = gRomData_08117BB0;
      break;
    case 0x80d0e00:
      u_val1 = gRomData_08117BBC;
      break;
    case 0x80d0e08:
      u_val1 = gRomData_08117BC8;
      break;
    case 0x80d0e20:
      goto case_080D0E20;
    }
    _call_via_r2(u_val1,handle,gIWRAM_03085C);
    i_val2 = 1;
  }
  else {
case_080D0E20:
    i_val3 = -1;
    if (0 < channel) {
      if (channel < 0x100) {
        i_val4 = 1;
        i_val3 = (int)*(short *)(channel * 2 + gRomGfx_084FA7A0);
      }
      else if ((channel <= 0xFFFF) &&
              (i_val2 = M4A_Routine_080D0CD4(channel), i_val3 = -1, -1 < i_val2)) {
        i_val3 = (int)*(short *)(i_val2 * 2 + gRomGfx_08523290);
        i_val4 = 2;
      }
    }
    if (handle != 0) {
      if (i_val3 < 0) {
        gba_memset(handle,0,0x80);
      }
      else if (i_val4 == 1) {
        _call_via_r2(i_val3 * 0xc + gRomGfx_084F90CC,handle,gIWRAM_03085C);
      }
      else {
        _call_via_r2(i_val3 * 0x18 + gRomGfx_084FA9A0,handle,gIWRAM_030714);
      }
    }
    i_val2 = 0;
    if (-1 < i_val3) {
      i_val2 = i_val4;
    }
  }
  return i_val2;
}

// =============================================================================
// Function: M4A_Routine_080D0EC0 @ 0x080D0EC0
// =============================================================================
longlong M4A_Routine_080D0EC0(void)

{
  
  return 0;
}

// =============================================================================
// Function: M4A_Routine_080D0F60 @ 0x080D0F60
// =============================================================================
uint M4A_Routine_080D0F60(uint handle,uint channel,undefined4 param,uint val)

{
  uint u_val1;
  
  for (; (channel < 0x10000000 && (channel < handle)); channel = channel << 4) {
    val = val << 4;
  }
  for (; (channel < 0x80000000 && (channel < handle)); channel = channel << 1) {
    val = val << 1;
  }
  while( true ) {
    u_val1 = 0;
    if (channel <= handle) {
      handle = handle - channel;
    }
    if (channel >> 1 <= handle) {
      handle = handle - (channel >> 1);
      u_val1 = val >> 1 | val << 0x1f;
    }
    if (channel >> 2 <= handle) {
      handle = handle - (channel >> 2);
      u_val1 = u_val1 | val >> 2 | val << 0x1e;
    }
    if (channel >> 3 <= handle) {
      handle = handle - (channel >> 3);
      u_val1 = u_val1 | val << 0x1d;
    }
    if ((handle == 0) || (val >> 4 == 0)) break;
    channel = channel >> 4;
    val = val >> 4;
  }
  u_val1 = u_val1 & 0xe0000000;
  if (u_val1 != 0) {
    if ((u_val1 & val << 0x1d) != 0) {
      handle = handle + (channel >> 3);
    }
    if ((u_val1 & (val >> 2 | val << 0x1e)) != 0) {
      handle = handle + (channel >> 2);
    }
    if ((u_val1 & (val >> 1 | val << 0x1f)) != 0) {
      handle = handle + (channel >> 1);
    }
    return handle;
  }
  return handle;
}

// =============================================================================
// Function: Unpack_BuildHuffmanTree @ 0x080D10F0
// =============================================================================
void Unpack_BuildHuffmanTree(void)

{
  bool b_flag1;
  undefined4 *p_uint2;
  int i_val3;
  uint saved_r4;
  int i_val4;
  uint u_val5;
  uint u_val6;
  int i_val7;
  uint u_val8;
  int saved_r7;
  int i_val9;
  uint u_val10;
  
  p_uint2 = (undefined4 *)(saved_r7 + 0x20);
  i_val9 = 1 << (saved_r4 & 0xff);
  do {
    *p_uint2 = 0xffffffff;
    p_uint2[1] = 0xffffffff;
    p_uint2 = p_uint2 + 2;
    i_val7 = i_val9 + -2;
    b_flag1 = 1 < i_val9;
    i_val9 = i_val7;
  } while (i_val7 != 0 && b_flag1);
  i_val9 = 0x20;
  u_val6 = 0;
  u_val10 = 0;
  i_val7 = saved_r4 << 1;
  do {
    u_val6 = u_val6 << 1;
    Unpack_ReadBits();
    for (u_val5 = saved_r4; u_val5 != 0; u_val5 = u_val5 - 1) {
      i_val3 = 0x20;
      for (u_val8 = u_val10; u_val8 != 0; u_val8 = u_val8 - 1) {
        i_val4 = (u_val6 >> (u_val8 & 0xff) & 1) * 2 + i_val3;
        i_val3 = (int)*(short *)(saved_r7 + i_val4);
        if (i_val3 < 0) {
          i_val3 = i_val9 + 4;
          *(short *)(saved_r7 + i_val4) = (short)i_val3;
          i_val9 = i_val3;
        }
      }
      Unpack_ReadBits();
      *(ushort *)(saved_r7 + (u_val6 & 1) * 2 + i_val3) = ~(ushort)saved_r4;
      u_val6 = u_val6 + 1;
    }
    u_val10 = u_val10 + 1;
    i_val7 = i_val7 + -1;
  } while (i_val7 != 0);
  return;
}

// =============================================================================
// Function: Unpack_ReadHuff4 @ 0x080D116E
// =============================================================================
void Unpack_ReadHuff4(void)

{
  M4A_Routine_080D1186();
  M4A_Routine_080D1186();
  return;
}

// =============================================================================
// Function: Unpack_ReadHuff8 @ 0x080D117E
// =============================================================================
void Unpack_ReadHuff8(void)

{
  M4A_Routine_080D1186();
  return;
}

// =============================================================================
// Function: Unpack_ReadBits @ 0x080D11A4
// =============================================================================
int Unpack_ReadBits(int arg_1,undefined4 arg_2,undefined4 arg_3,int arg_4)

{
  int saved_r4;
  
  if (-1 < arg_4 - saved_r4) {
    return arg_1;
  }
  return arg_1 + 4;
}

// =============================================================================
// Function: Unpack_CompType4_Raw @ 0x080D1204
// =============================================================================
void Unpack_CompType4_Raw(undefined4 arg_1,int arg_2)

{
  int sub_ret_val;
  short saved_r4;
  int saved_r8;
  code *saved_r9;
  short saved_r10;
  
  arg_2 = saved_r8 - arg_2;
  do {
    (*saved_r9)();
    if (-1 < (sub_ret_val + 1) * -0x80000000) {
      saved_r4 = saved_r4 * 0x100 + saved_r10;
      *(short *)(sub_ret_val + 1) = saved_r4;
    }
    arg_2 = arg_2 + -1;
    saved_r10 = saved_r4;
  } while (arg_2 != 0);
  return;
}

// =============================================================================
// Function: Unpack_CompType0_LZ @ 0x080D1224
// =============================================================================
void Unpack_CompType0_LZ(void)

{
  short s_val1;
  int sub_ret_val;
  short *psVar2;
  int i_val3;
  short *saved_r8;
  code *saved_r9;
  short saved_r10;
  short s_val4;
  
  M4A_Routine_080D14EC();
  do {
    Unpack_ReadBits();
    Unpack_ReadBits();
    i_val3 = 7;
    s_val1 = 6;
    s_val4 = saved_r10;
    do {
      saved_r10 = s_val1;
      (*saved_r9)();
      psVar2 = (short *)(sub_ret_val + 1);
      if (-1 < (int)psVar2 * -0x80000000) {
        saved_r10 = saved_r10 * 0x100 + s_val4;
        *psVar2 = saved_r10;
      }
      i_val3 = i_val3 + -1;
      s_val1 = saved_r10;
      s_val4 = saved_r10;
    } while (i_val3 != 0);
  } while (psVar2 < saved_r8);
  return;
}

// =============================================================================
// Function: Unpack_CompType1_LZ @ 0x080D129A
// =============================================================================
void Unpack_CompType1_LZ(undefined4 arg_1,undefined4 arg_2,uint arg_3,int arg_4)

{
  bool b_flag1;
  byte b_flag2;
  uint u_val3;
  uint *p_uint4;
  ushort *sub_ret_val;
  ushort *p_uint5;
  undefined2 *p_uint6;
  uint u_val7;
  ushort *p_uint8;
  int i_val9;
  int i_val10;
  int saved_r7;
  undefined2 *saved_r8;
  code *saved_r9;
  uint saved_r10;
  undefined8 u_val11;
  
  p_uint4 = (uint *)M4A_Routine_080D14EC();
  u_val7 = gRomTable_080D12DE;
  while( true ) {
    i_val9 = arg_4 + -1;
    if (arg_4 + -1 < 0) {
      arg_3 = *p_uint4;
      p_uint4 = p_uint4 + 1;
      i_val9 = arg_4 + 0x1f;
    }
    arg_4 = i_val9;
    u_val3 = arg_3 & 0x80000000;
    arg_3 = arg_3 << 1;
    if (u_val3 != 0) break;
    u_val11 = (*saved_r9)(p_uint4);
    p_uint4 = (uint *)u_val11;
    p_uint6 = (undefined2 *)((int)((ulonglong)u_val11 >> 0x20) + 1);
    if (-1 < (int)p_uint6 * -0x80000000) {
      u_val7 = u_val7 * 0x100 + saved_r10;
      *p_uint6 = (short)u_val7;
    }
    saved_r10 = u_val7;
    if (saved_r8 <= p_uint6) {
      return;
    }
  }
  Unpack_ReadBits();
  b_flag2 = *(byte *)(saved_r7 + 0xe);
  Unpack_ReadBits();
  u_val7 = (uint)*(ushort *)(saved_r7 + 0xc) + (uint)b_flag2;
  Unpack_ReadBits();
  i_val9 = 7;
  if (u_val7 == 1) {
    if (-1 < (int)sub_ret_val << 0x1f) {
      u_val7 = (uint)(*sub_ret_val >> 8) | (uint)(*sub_ret_val >> 8) << 8;
      p_uint5 = sub_ret_val;
      do {
        p_uint5 = p_uint5 + 1;
        i_val10 = i_val9;
LAB_080d14de:
        *p_uint5 = (ushort)u_val7;
        i_val9 = i_val10 + -2;
      } while (i_val9 != 0 && 1 < i_val10);
      return;
    }
    u_val7 = saved_r10 << 8 | saved_r10;
    p_uint5 = (ushort *)((int)sub_ret_val + 1);
    i_val10 = 8;
    goto LAB_080d14de;
  }
  if ((u_val7 & 1) == 0) {
    p_uint8 = (ushort *)((int)sub_ret_val - u_val7);
    p_uint5 = sub_ret_val;
    if (((uint)p_uint8 & 1) != 0) {
      p_uint8 = (ushort *)((int)p_uint8 + 1);
      p_uint5 = (ushort *)((int)sub_ret_val + 1);
      *p_uint5 = *p_uint8 & 0xff00 | (ushort)saved_r10;
      i_val9 = 6;
    }
    do {
      p_uint8 = p_uint8 + 1;
      p_uint5 = p_uint5 + 1;
      *p_uint5 = *p_uint8;
      i_val10 = i_val9 + -2;
      b_flag1 = 1 < i_val9;
      i_val9 = i_val10;
    } while (i_val10 != 0 && b_flag1);
    return;
  }
  p_uint8 = (ushort *)((int)sub_ret_val - u_val7);
  p_uint5 = sub_ret_val;
  if (((uint)p_uint8 & 1) != 0) {
    p_uint8 = (ushort *)((int)p_uint8 + 1);
    saved_r10 = (uint)(*p_uint8 >> 8);
    p_uint5 = (ushort *)((int)sub_ret_val + 1);
    i_val9 = 6;
  }
  p_uint6 = (undefined2 *)((int)p_uint5 + -1);
  do {
    p_uint8 = p_uint8 + 1;
    u_val7 = (uint)*p_uint8 << 8 | saved_r10;
    p_uint6 = p_uint6 + 1;
    *p_uint6 = (short)u_val7;
    saved_r10 = u_val7 >> 0x10;
    i_val10 = i_val9 + -2;
    b_flag1 = 1 < i_val9;
    i_val9 = i_val10;
  } while (i_val10 != 0 && b_flag1);
  return;
}

// =============================================================================
// Function: Unpack_CompType2_LZ @ 0x080D12EC
// =============================================================================
void Unpack_CompType2_LZ(undefined4 arg_1,undefined4 arg_2,uint arg_3,int arg_4)

{
  bool b_flag1;
  byte b_flag2;
  uint u_val3;
  uint *p_uint4;
  ushort *sub_ret_val;
  ushort *p_uint5;
  undefined2 *p_uint6;
  uint u_val7;
  ushort *p_uint8;
  int i_val9;
  int i_val10;
  int saved_r7;
  undefined2 *saved_r8;
  code *saved_r9;
  uint saved_r10;
  undefined8 u_val11;
  
  p_uint4 = (uint *)M4A_Routine_080D14EC();
  u_val7 = gRomTable_080D1388;
  while( true ) {
    i_val10 = arg_4 + -1;
    if (arg_4 + -1 < 0) {
      arg_3 = *p_uint4;
      p_uint4 = p_uint4 + 1;
      i_val10 = arg_4 + 0x1f;
    }
    arg_4 = i_val10;
    u_val3 = arg_3 & 0x80000000;
    arg_3 = arg_3 << 1;
    if (u_val3 != 0) break;
    u_val11 = (*saved_r9)(p_uint4);
    p_uint4 = (uint *)u_val11;
    p_uint6 = (undefined2 *)((int)((ulonglong)u_val11 >> 0x20) + 1);
    if (-1 < (int)p_uint6 * -0x80000000) {
      u_val7 = u_val7 * 0x100 + saved_r10;
      *p_uint6 = (short)u_val7;
    }
    saved_r10 = u_val7;
    if (saved_r8 <= p_uint6) {
      return;
    }
  }
  Unpack_ReadBits();
  b_flag2 = *(byte *)(saved_r7 + 0x12);
  Unpack_ReadBits();
  u_val7 = (uint)*(ushort *)(saved_r7 + 0x10) + (uint)b_flag2;
  Unpack_ReadBits();
  i_val10 = 7;
  if (u_val7 == 1) {
    if ((int)sub_ret_val << 0x1f < 0) {
      u_val7 = saved_r10 << 8 | saved_r10;
      p_uint5 = (ushort *)((int)sub_ret_val + 1);
      i_val9 = 8;
      while( true ) {
        *p_uint5 = (ushort)u_val7;
        i_val10 = i_val9 + -2;
        if (i_val10 == 0 || i_val9 < 2) break;
LAB_080d14dc:
        p_uint5 = p_uint5 + 1;
        i_val9 = i_val10;
      }
      return;
    }
    u_val7 = (uint)(*sub_ret_val >> 8) | (uint)(*sub_ret_val >> 8) << 8;
    p_uint5 = sub_ret_val;
    goto LAB_080d14dc;
  }
  if ((u_val7 & 1) == 0) {
    p_uint8 = (ushort *)((int)sub_ret_val - u_val7);
    p_uint5 = sub_ret_val;
    if (((uint)p_uint8 & 1) != 0) {
      p_uint8 = (ushort *)((int)p_uint8 + 1);
      p_uint5 = (ushort *)((int)sub_ret_val + 1);
      *p_uint5 = *p_uint8 & 0xff00 | (ushort)saved_r10;
      i_val10 = 6;
    }
    do {
      p_uint8 = p_uint8 + 1;
      p_uint5 = p_uint5 + 1;
      *p_uint5 = *p_uint8;
      i_val9 = i_val10 + -2;
      b_flag1 = 1 < i_val10;
      i_val10 = i_val9;
    } while (i_val9 != 0 && b_flag1);
    return;
  }
  p_uint8 = (ushort *)((int)sub_ret_val - u_val7);
  p_uint5 = sub_ret_val;
  if (((uint)p_uint8 & 1) != 0) {
    p_uint8 = (ushort *)((int)p_uint8 + 1);
    saved_r10 = (uint)(*p_uint8 >> 8);
    p_uint5 = (ushort *)((int)sub_ret_val + 1);
    i_val10 = 6;
  }
  p_uint6 = (undefined2 *)((int)p_uint5 + -1);
  do {
    p_uint8 = p_uint8 + 1;
    u_val7 = (uint)*p_uint8 << 8 | saved_r10;
    p_uint6 = p_uint6 + 1;
    *p_uint6 = (short)u_val7;
    saved_r10 = u_val7 >> 0x10;
    i_val9 = i_val10 + -2;
    b_flag1 = 1 < i_val10;
    i_val10 = i_val9;
  } while (i_val9 != 0 && b_flag1);
  return;
}

// =============================================================================
// Function: Unpack_CompType3_LZ @ 0x080D139C
// =============================================================================
void Unpack_CompType3_LZ(undefined4 arg_1,undefined4 arg_2,uint arg_3,int arg_4)

{
  byte b_flag1;
  ushort u_val2;
  uint u_val3;
  uint *p_uint4;
  ushort *p_uint5;
  ushort saved_r4;
  ushort *p_uint6;
  int i_val7;
  int saved_r7;
  ushort *saved_r8;
  code *saved_r9;
  undefined8 u_val8;
  
  p_uint4 = (uint *)M4A_Routine_080D14EC();
  do {
    i_val7 = arg_4 + -1;
    if (arg_4 + -1 < 0) {
      arg_3 = *p_uint4;
      p_uint4 = p_uint4 + 1;
      i_val7 = arg_4 + 0x1f;
    }
    arg_4 = i_val7;
    u_val3 = arg_3 & 0x80000000;
    arg_3 = arg_3 << 1;
    if (u_val3 == 0) {
      (*saved_r9)();
      u_val8 = (*saved_r9)();
      p_uint4 = (uint *)u_val8;
      saved_r4 = saved_r4 << 8 | saved_r4;
      p_uint5 = (ushort *)((int)((ulonglong)u_val8 >> 0x20) + 2);
      *p_uint5 = saved_r4;
    }
    else {
      Unpack_ReadBits(p_uint4);
      b_flag1 = *(byte *)(saved_r7 + 0xe);
      Unpack_ReadBits();
      u_val2 = *(ushort *)(saved_r7 + 0xc);
      u_val8 = Unpack_ReadBits();
      p_uint5 = (ushort *)((ulonglong)u_val8 >> 0x20);
      p_uint4 = (uint *)u_val8;
      i_val7 = 5;
      p_uint6 = p_uint5 + -((uint)u_val2 + (uint)b_flag1);
      do {
        p_uint6 = p_uint6 + 1;
        saved_r4 = *p_uint6;
        p_uint5 = p_uint5 + 1;
        *p_uint5 = saved_r4;
        i_val7 = i_val7 + -1;
      } while (i_val7 != 0);
    }
  } while (p_uint5 < saved_r8);
  return;
}

// =============================================================================
// Function: M4A_Routine_080D145E @ 0x080D145E
// =============================================================================
void M4A_Routine_080D145E(undefined4 handle,ushort *channel)

{
  bool b_flag1;
  undefined2 *p_uint2;
  uint u_val3;
  uint saved_r5;
  ushort *p_uint4;
  int saved_r6;
  int i_val5;
  int i_val6;
  uint saved_r10;
  
  if (saved_r5 == 1) {
    if ((int)channel << 0x1f < 0) {
      u_val3 = saved_r10 << 8 | saved_r10;
      channel = (ushort *)((int)channel + 1);
      i_val6 = saved_r6 + 1;
      while( true ) {
        *channel = (ushort)u_val3;
        saved_r6 = i_val6 + -2;
        if (saved_r6 == 0 || i_val6 < 2) break;
LAB_080d14dc:
        channel = channel + 1;
        i_val6 = saved_r6;
      }
      return;
    }
    u_val3 = (uint)(*channel >> 8) | (uint)(*channel >> 8) << 8;
    goto LAB_080d14dc;
  }
  if ((saved_r5 & 1) == 0) {
    p_uint4 = (ushort *)((int)channel - saved_r5);
    i_val6 = saved_r6;
    if (((uint)p_uint4 & 1) != 0) {
      p_uint4 = (ushort *)((int)p_uint4 + 1);
      channel = (ushort *)((int)channel + 1);
      *channel = *p_uint4 & 0xff00 | (ushort)saved_r10;
      i_val6 = saved_r6 + -1;
      if (saved_r6 + -1 == 0) {
        return;
      }
    }
    do {
      p_uint4 = p_uint4 + 1;
      channel = channel + 1;
      *channel = *p_uint4;
      i_val5 = i_val6 + -2;
      b_flag1 = 1 < i_val6;
      i_val6 = i_val5;
    } while (i_val5 != 0 && b_flag1);
    return;
  }
  p_uint4 = (ushort *)((int)channel - saved_r5);
  if (((uint)p_uint4 & 1) != 0) {
    p_uint4 = (ushort *)((int)p_uint4 + 1);
    saved_r10 = (uint)(*p_uint4 >> 8);
    channel = (ushort *)((int)channel + 1);
    saved_r6 = saved_r6 + -1;
    if (saved_r6 == 0) {
      return;
    }
  }
  p_uint2 = (undefined2 *)((int)channel + -1);
  do {
    p_uint4 = p_uint4 + 1;
    u_val3 = (uint)*p_uint4 << 8 | saved_r10;
    p_uint2 = p_uint2 + 1;
    *p_uint2 = (short)u_val3;
    saved_r10 = u_val3 >> 0x10;
    i_val6 = saved_r6 + -2;
    b_flag1 = 1 < saved_r6;
    saved_r6 = i_val6;
  } while (i_val6 != 0 && b_flag1);
  return;
}

// =============================================================================
// Function: M4A_Routine_080D14EC @ 0x080D14EC
// =============================================================================
void M4A_Routine_080D14EC(void)

{
  int saved_r5;
  short s_val1;
  int saved_r7;
  
  s_val1 = 1;
  do {
    Unpack_ReadBits();
    *(undefined1 *)(saved_r7 + 6) = 5;
    *(short *)(saved_r7 + 4) = s_val1;
    saved_r7 = saved_r7 + 4;
    s_val1 = s_val1 + 0x20;
    saved_r5 = saved_r5 + -1;
  } while (saved_r5 != 0);
  return;
}

// =============================================================================
// Function: M4A_Routine_080D1F20 @ 0x080D1F20
// =============================================================================
undefined8 M4A_Routine_080D1F20(int handle,int channel,byte *param)

{
  byte b_flag1;
  byte b_flag2;
  bool b_flag3;
  byte *pbVar4;
  byte b_flag5;
  int i_val6;
  byte b_flag7;
  byte *pbVar8;
  byte *pbVar9;
  uint u_val10;
  uint u_val11;
  uint u_val12;
  int i_val13;
  byte *pbVar14;
  byte *pbVar15;
  uint u_val16;
  undefined4 u_val17;
  undefined4 saved_r9;
  bool b_flag18;
  
  i_val6 = *gIWRAM_037FF0;
  param[4] = *(byte *)(handle + gRomData_08139CFC);
  pbVar8 = *(byte **)(param + 0x40);
  if (*pbVar8 < 0x80) {
    param[5] = *pbVar8;
    pbVar9 = pbVar8 + 1;
    if (*pbVar9 < 0x80) {
      param[6] = *pbVar9;
      pbVar9 = pbVar8 + 2;
      if (*pbVar9 < 0x80) {
        param[4] = param[4] + *pbVar9;
        pbVar9 = pbVar8 + 3;
      }
    }
    *(byte **)(param + 0x40) = pbVar9;
  }
  b_flag5 = 0;
  pbVar8 = param + 0x24;
  b_flag1 = *pbVar8;
  if ((b_flag1 & 0xc0) == 0) {
    b_flag7 = param[5];
  }
  else {
    b_flag7 = param[5];
    u_val10 = (uint)b_flag7;
    if ((b_flag1 & 0x40) != 0) {
      u_val10 = (uint)*(byte *)(*(int *)(param + 0x2c) + u_val10);
    }
    pbVar8 = (byte *)(u_val10 * 0xc + *(int *)(param + 0x28));
    if ((*pbVar8 & 0xc0) != 0) goto LAB_080d2106;
    if ((b_flag1 & 0x80) != 0) {
      if ((pbVar8[3] & 0x80) != 0) {
        b_flag5 = (pbVar8[3] + 0x40) * '\x02';
      }
      b_flag7 = pbVar8[1];
    }
  }
  u_val10 = (uint)param[0x1d] + (uint)*(byte *)(channel + 9);
  if (0xff < u_val10) {
    u_val10 = 0xff;
  }
  b_flag1 = *pbVar8;
  if ((b_flag1 & 7) == 0) {
    b_flag3 = false;
    pbVar15 = (byte *)(i_val6 + 0x50);
    u_val11 = (uint)*(byte *)(i_val6 + 6);
    u_val16 = u_val10;
    pbVar9 = param;
    pbVar4 = (byte *)0x0;
    do {
      pbVar14 = pbVar15;
      if ((*pbVar15 & 199) == 0) goto LAB_080d2060;
      pbVar14 = pbVar4;
      if ((*pbVar15 & 0x40) == 0) {
        if (!b_flag3) goto LAB_080d2038;
        goto LAB_080d2054;
      }
      if (b_flag3) {
LAB_080d2038:
        u_val12 = (uint)pbVar15[0x13];
        if (u_val12 < u_val16) {
          u_val16 = u_val12;
          pbVar4 = *(byte **)(pbVar15 + 0x2c);
          goto LAB_080d2052;
        }
        if (u_val12 <= u_val16) {
          pbVar4 = *(byte **)(pbVar15 + 0x2c);
          b_flag18 = pbVar9 <= pbVar4;
          if ((pbVar9 < pbVar4) || (pbVar4 = pbVar9, b_flag18)) goto LAB_080d2052;
        }
      }
      else {
        b_flag3 = true;
        u_val16 = (uint)pbVar15[0x13];
        pbVar4 = *(byte **)(pbVar15 + 0x2c);
LAB_080d2052:
        pbVar9 = pbVar4;
        pbVar14 = pbVar15;
      }
LAB_080d2054:
      pbVar15 = pbVar15 + 0x40;
      u_val12 = u_val11 - 1;
      b_flag18 = 0 < (int)u_val11;
      u_val11 = u_val12;
      pbVar4 = pbVar14;
    } while (u_val12 != 0 && b_flag18);
    if (pbVar14 == (byte *)0x0) goto LAB_080d2106;
  }
  else {
    if (*(int *)(i_val6 + 0x1c) == 0) goto LAB_080d2106;
    pbVar14 = (byte *)(*(int *)(i_val6 + 0x1c) + ((b_flag1 & 7) - 1) * 0x40);
    if (((((*pbVar14 & 199) != 0) && ((*pbVar14 & 0x40) == 0)) && (u_val10 <= pbVar14[0x13])) &&
       ((pbVar14[0x13] != u_val10 || (*(byte **)(pbVar14 + 0x2c) < param)))) goto LAB_080d2106;
  }
LAB_080d2060:
  M4A_Routine_080D262C(pbVar14);
  pbVar14[0x30] = 0;
  pbVar14[0x31] = 0;
  pbVar14[0x32] = 0;
  pbVar14[0x33] = 0;
  i_val13 = *(int *)(param + 0x20);
  *(int *)(pbVar14 + 0x34) = i_val13;
  if (i_val13 != 0) {
    *(byte **)(i_val13 + 0x30) = pbVar14;
  }
  *(byte **)(param + 0x20) = pbVar14;
  *(byte **)(pbVar14 + 0x2c) = param;
  b_flag2 = param[0x1b];
  param[0x1c] = b_flag2;
  if (b_flag2 != 0) {
    M4A_Routine_080D2160(b_flag2,param);
  }
  M4A_Routine_080D2BF8(channel,param);
  *(undefined4 *)(pbVar14 + 0x10) = *(undefined4 *)(param + 4);
  pbVar14[0x13] = (byte)u_val10;
  pbVar14[8] = b_flag7;
  pbVar14[0x14] = b_flag5;
  pbVar14[1] = *pbVar8;
  u_val17 = *(undefined4 *)(pbVar8 + 4);
  *(undefined4 *)(pbVar14 + 0x24) = u_val17;
  *(undefined4 *)(pbVar14 + 4) = *(undefined4 *)(pbVar8 + 8);
  *(undefined2 *)(pbVar14 + 0xc) = *(undefined2 *)(param + 0x1e);
  M4A_Routine_080D1EF0();
  i_val13 = (uint)pbVar14[8] + (int)(char)param[8];
  if (i_val13 < 0) {
    i_val13 = 0;
  }
  if ((b_flag1 & 7) == 0) {
    u_val17 = M4A_Routine_080D21B0(u_val17,i_val13,param[9]);
  }
  else {
    pbVar14[0x1e] = pbVar8[2];
    b_flag5 = pbVar8[3];
    if (((b_flag5 & 0x80) != 0) || ((b_flag5 & 0x70) == 0)) {
      b_flag5 = 8;
    }
    pbVar14[0x1f] = b_flag5;
    u_val17 = M4A_Routine_080D1E9C(b_flag1 & 7,i_val13,param[9],*(undefined4 *)(i_val6 + 0x30));
  }
  *(undefined4 *)(pbVar14 + 0x20) = u_val17;
  *pbVar14 = 0x80;
  *param = *param & 0xf0;
LAB_080d2106:
  return (saved_r9);
}

// =============================================================================
// Function: M4A_Routine_080D22CC @ 0x080D22CC
// =============================================================================
undefined4 M4A_Routine_080D22CC(void)

{
  
  M4A_Routine_080D15A4();
  return;
}

// =============================================================================
// Function: M4A_Routine_080D2304 @ 0x080D2304
// =============================================================================
undefined4 M4A_Routine_080D2304(uint handle)

{
  int *p_int1;
  int *p_int2;
  int i_val3;
  
  p_int1 = (int *)((handle & 0xffff) * 8 + gRomData_0813ABF0);
  p_int2 = *(int **)((uint)*(ushort *)(p_int1 + 1) * 0xc + gRomData_0813ABB4);
  i_val3 = *p_int1;
  if (*p_int2 == i_val3) {
    if (((short)p_int2[1] == 0) || (p_int2[1] < 0)) {
      M4A_Routine_080D2A0C(p_int2,*p_int2);
    }
  }
  else {
    M4A_Routine_080D2A0C(p_int2,i_val3);
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080D2350 @ 0x080D2350
// =============================================================================
undefined4 M4A_Routine_080D2350(uint handle)

{
  int *p_int1;
  int *p_int2;
  int i_val3;
  
  p_int1 = (int *)((handle & 0xffff) * 8 + gRomData_0813ABF0);
  p_int2 = *(int **)((uint)*(ushort *)(p_int1 + 1) * 0xc + gRomData_0813ABB4);
  i_val3 = *p_int1;
  if (*p_int2 == i_val3) {
    if ((short)p_int2[1] == 0) {
      M4A_Routine_080D2A0C(p_int2,*p_int2);
    }
    else if (p_int2[1] < 0) {
      M4A_Routine_080D2218(p_int2);
    }
  }
  else {
    M4A_Routine_080D2A0C(p_int2,i_val3);
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080D240C @ 0x080D240C
// =============================================================================
undefined4 M4A_Routine_080D240C(void)

{
  uint u_val1;
  undefined4 *p_uint2;
  
  p_uint2 = gRomData_0813ABB4;
  for (u_val1 = 0x5 & 0xffff; u_val1 != 0; u_val1 = u_val1 - 1) {
    M4A_Routine_080D2AF0(*p_uint2);
    p_uint2 = p_uint2 + 3;
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080D2438 @ 0x080D2438
// =============================================================================
undefined4 M4A_Routine_080D2438(void)

{
  
  M4A_Routine_080D2218();
  return;
}

// =============================================================================
// Function: M4A_Routine_080D2444 @ 0x080D2444
// =============================================================================
undefined4 M4A_Routine_080D2444(void)

{
  uint u_val1;
  undefined4 *p_uint2;
  
  p_uint2 = gRomData_0813ABB4;
  for (u_val1 = 0x5 & 0xffff; u_val1 != 0; u_val1 = u_val1 - 1) {
    M4A_Routine_080D2218(*p_uint2);
    p_uint2 = p_uint2 + 3;
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080D2470 @ 0x080D2470
// =============================================================================
undefined4 M4A_Routine_080D2470(undefined4 handle,undefined2 channel)

{
  
  M4A_Routine_080D2234(handle,channel);
  return;
}

// =============================================================================
// Function: M4A_Routine_080D24C8 @ 0x080D24C8
// =============================================================================
undefined4 M4A_Routine_080D24C8(int handle)

{
  byte *pbVar1;
  uint u_val2;
  
  u_val2 = (uint)*(byte *)(handle + 8);
  pbVar1 = *(byte **)(handle + 0x2c);
  if (u_val2 != 0) {
    do {
      if (((*pbVar1 & 0x80) != 0) && ((*pbVar1 & 0x40) != 0)) {
        M4A_Routine_080D2640(pbVar1);
        *pbVar1 = 0x80;
        pbVar1[0xf] = 2;
        pbVar1[0x13] = 0x40;
        pbVar1[0x19] = 0x16;
        pbVar1[0x24] = 1;
      }
      u_val2 = u_val2 - 1;
      pbVar1 = pbVar1 + 0x50;
    } while (0 < (int)u_val2);
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080D2510 @ 0x080D2510
// =============================================================================
undefined4 M4A_Routine_080D2510(int handle)

{
  undefined2 *p_uint1;
  undefined1 *p_uint2;
  int i_val3;
  int *p_int4;
  int i_val5;
  undefined4 stack_val_14;
  
  *REG_SOUND1CNT_X = 0x8f;
  p_uint1 = REG_SOUND1CNT_L;
  *REG_SOUND1CNT_L = 0;
  p_uint2 = ((void *)0x04000063);
  *((void *)0x04000063) = 8;
  p_uint2[6] = 8;
  p_uint2[0x16] = 8;
  p_uint2[2] = 0x80;
  p_uint2[10] = 0x80;
  p_uint2[0x1a] = 0x80;
  p_uint2[0xd] = 0;
  *(undefined1 *)p_uint1 = 0x77;
  p_int4 = (int *)*gIWRAM_037FF0;
  i_val5 = *p_int4;
  if (i_val5 == 0x68736D53) {
    *p_int4 = i_val5 + 1;
    i_val3 = gEWRAM_021C30;
    *(undefined4 *)(gEWRAM_021C30 + 0x20) = gRomTable_080D34CD;
    *(undefined4 *)(i_val3 + 0x44) = gRomTable_080D2189;
    *(undefined4 *)(i_val3 + 0x4c) = gRomTable_080D219D;
    *(undefined4 *)(i_val3 + 0x70) = gRomTable_080D3625;
    *(undefined4 *)(i_val3 + 0x74) = gRomTable_080D2121;
    *(undefined4 *)(i_val3 + 0x78) = gRomTable_080D274D;
    *(undefined4 *)(i_val3 + 0x7c) = gRomTable_080D1EAD;
    *(undefined4 *)(i_val3 + 0x80) = gRomTable_080D2B31;
    *(undefined4 *)(i_val3 + 0x84) = gRomTable_080D2BF9;
    p_int4[7] = handle;
    p_int4[10] = gRomTable_080D2E0D;
    p_int4[0xb] = gRomTable_080D2D55;
    p_int4[0xc] = gRomTable_080D2CAD;
    *(char *)(p_int4 + 3) = (char)0x50;
    stack_val_14 = 0;
    CpuSet(&stack_val_14,handle,0x05000040);
    *(undefined1 *)(handle + 1) = 1;
    *(undefined1 *)(handle + 0x1c) = 0x11;
    *(undefined1 *)(handle + 0x41) = 2;
    *(undefined1 *)(handle + 0x5c) = 0x22;
    *(undefined1 *)(handle + 0x81) = 3;
    *(undefined1 *)(handle + 0x9c) = 0x44;
    *(undefined1 *)(handle + 0xc1) = 4;
    *(undefined1 *)(handle + 0xdc) = 0x88;
    *p_int4 = i_val5;
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080D262C @ 0x080D262C
// =============================================================================
undefined4 M4A_Routine_080D262C(undefined4 handle)

{
  
  _call_via_r1(handle,*gEWRAM_021CB8);
  return;
}

// =============================================================================
// Function: M4A_Routine_080D2640 @ 0x080D2640
// =============================================================================
undefined4 M4A_Routine_080D2640(undefined4 handle)

{
  
  _call_via_r1(handle,*gEWRAM_021CBC);
  return;
}

// =============================================================================
// Function: M4A_Routine_080D2654 @ 0x080D2654
// =============================================================================
undefined4 M4A_Routine_080D2654(undefined4 *handle)

{
  undefined2 *p_uint1;
  undefined4 *p_uint2;
  undefined4 u_val3;
  undefined4 stack_val_10;
  
  *handle = 0;
  if ((*REG_DMA1CNT_L & 0x2000000) != 0) {
    *REG_DMA1CNT_L = 0x84400004;
  }
  if ((*REG_DMA2CNT_L & 0x2000000) != 0) {
    *REG_DMA2CNT_L = 0x84400004;
  }
  p_uint1 = REG_DMA1CNT_H;
  *REG_DMA1CNT_H = 0x400;
  p_uint1[6] = 0x400;
  p_uint1 = REG_SOUND1CNT_X;
  *REG_SOUND1CNT_X = 0x8f;
  p_uint1[-1] = (short)0xA90E;
  *((void *)0x04000089) = *((void *)0x04000089) & 0x3f | 0x40;
  p_uint2 = REG_DMA1SAD;
  *REG_DMA1SAD = handle + 0xd4;
  p_uint2[1] = REG_SOUNDCNT_L;
  p_uint2[3] = handle + 0x260;
  p_uint2[4] = REG_SOUNDCNT_X;
  *gIWRAM_037FF0 = handle;
  stack_val_10 = 0;
  CpuSet(&stack_val_10,handle,0x050003EC);
  *(undefined1 *)((int)handle + 6) = 8;
  *(undefined1 *)((int)handle + 7) = 0xf;
  handle[0xe] = gRomTable_080D1F21;
  u_val3 = gRomTable_080D3745;
  handle[10] = gRomTable_080D3745;
  handle[0xb] = u_val3;
  handle[0xc] = u_val3;
  handle[0xf] = u_val3;
  u_val3 = gEWRAM_021C30;
  M4A_Routine_080D1A34(gEWRAM_021C30);
  handle[0xd] = u_val3;
  M4A_Routine_080D274C(0x40000);
  *handle = 0x68736D53;
  return;
}

// =============================================================================
// Function: M4A_Routine_080D27F0 @ 0x080D27F0
// =============================================================================
undefined4 M4A_Routine_080D27F0(uint handle)

{
  int *p_int1;
  int i_val2;
  int *p_int3;
  
  p_int3 = (int *)*gIWRAM_037FF0;
  if (*p_int3 == 0x68736D53) {
    *p_int3 = *p_int3 + 1;
    if ((handle & 0xff) != 0) {
      *(byte *)((int)p_int3 + 5) = (byte)handle & 0x7f;
    }
    if ((handle & 0xf00) != 0) {
      *(char *)((int)p_int3 + 6) = (char)((handle & 0xf00) >> 8);
      i_val2 = 0xc;
      p_int1 = p_int3 + 0x14;
      do {
        *(undefined1 *)p_int1 = 0;
        i_val2 = i_val2 + -1;
        p_int1 = p_int1 + 0x10;
      } while (i_val2 != 0);
    }
    if ((handle & 0xf000) != 0) {
      *(char *)((int)p_int3 + 7) = (char)((handle & 0xf000) >> 0xc);
    }
    if ((handle & 0xb00000) != 0) {
      *((void *)0x04000089) = *((void *)0x04000089) & 0x3f | (byte)((handle & 0x300000) >> 0xe);
    }
    if ((handle & 0xf0000) != 0) {
      M4A_Routine_080D28DC();
      M4A_Routine_080D274C(handle & 0xf0000);
    }
    *p_int3 = 0x68736D53;
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080D28DC @ 0x080D28DC
// =============================================================================
undefined4 M4A_Routine_080D28DC(void)

{
  undefined2 *p_uint1;
  int *p_int2;
  undefined4 stack_val_8;
  undefined4 stack_val_4;
  
  p_int2 = (int *)*gIWRAM_037FF0;
  if ((uint)(*p_int2 + 0x978C92AD) < 2) {
    *p_int2 = *p_int2 + 10;
    if ((*REG_DMA1CNT_L & 0x2000000) != 0) {
      *REG_DMA1CNT_L = 0x84400004;
    }
    if ((*REG_DMA2CNT_L & 0x2000000) != 0) {
      *REG_DMA2CNT_L = 0x84400004;
    }
    p_uint1 = REG_DMA1CNT_H;
    *REG_DMA1CNT_H = 0x400;
    p_uint1[6] = 0x400;
    stack_val_8 = 0;
    CpuSet(&stack_val_8,p_int2 + 0xd4,0x05000318);
  }
  return stack_val_4;
}

// =============================================================================
// Function: M4A_Routine_080D2958 @ 0x080D2958
// =============================================================================
undefined4 M4A_Routine_080D2958(void)

{
  undefined2 *p_uint1;
  int *p_int2;
  int i_val3;
  
  p_uint1 = REG_DMA1CNT_H;
  p_int2 = (int *)*gIWRAM_037FF0;
  i_val3 = *p_int2;
  if (i_val3 != 0x68736D53) {
    *REG_DMA1CNT_H = 0xb600;
    p_uint1[6] = 0xb600;
    *(undefined1 *)(p_int2 + 1) = 0;
    *p_int2 = i_val3 + -10;
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080D2994 @ 0x080D2994
// =============================================================================
undefined4 M4A_Routine_080D2994(int handle,undefined1 *channel,byte param)

{
  int i_val1;
  int *p_int2;
  
  if (param != 0) {
    if (0x10 < param) {
      param = 0x10;
    }
    p_int2 = (int *)*gIWRAM_037FF0;
    if (*p_int2 == 0x68736D53) {
      *p_int2 = *p_int2 + 1;
      M4A_Routine_080D2640(handle);
      *(undefined1 **)(handle + 0x2c) = channel;
      *(byte *)(handle + 8) = param;
      *(undefined4 *)(handle + 4) = 0x80000000;
      for (; param != 0; param = param - 1) {
        *channel = 0;
        channel = channel + 0x50;
      }
      if (p_int2[8] != 0) {
        *(int *)(handle + 0x38) = p_int2[8];
        *(int *)(handle + 0x3c) = p_int2[9];
        p_int2[8] = 0;
      }
      p_int2[9] = handle;
      p_int2[8] = gRomTable_080D1C45;
      i_val1 = 0x68736D53;
      *p_int2 = 0x68736D53;
      *(int *)(handle + 0x34) = i_val1;
    }
  }
  return;
}

// =============================================================================
// Function: M4A_Routine_080D2A0C @ 0x080D2A0C
// =============================================================================
void M4A_Routine_080D2A0C(int *handle,byte *channel)

{
  byte b_flag1;
  undefined1 *p_uint2;
  int loop_i;
  
  if ((handle[0xd] != 0x68736D53) ||
     (((b_flag1 = channel[2], *(char *)((int)handle + 0xb) != '\0' &&
       (((*handle != 0 && ((*(byte *)handle[0xb] & 0x40) != 0)) ||
        (((short)handle[1] != 0 && (-1 < handle[1])))))) &&
      (b_flag1 = channel[2], b_flag1 < *(byte *)((int)handle + 9))))) goto LAB_080d2ae2;
  handle[0xd] = handle[0xd] + 1;
  handle[1] = 0;
  *handle = (int)channel;
  handle[0xc] = *(int *)(channel + 4);
  *(byte *)((int)handle + 9) = b_flag1;
  handle[3] = 0;
  *(undefined2 *)(handle + 7) = 0x96;
  *(undefined2 *)(handle + 8) = 0x96;
  *(undefined2 *)((int)handle + 0x1e) = 0x100;
  *(undefined2 *)((int)handle + 0x22) = 0;
  *(undefined2 *)(handle + 9) = 0;
  loop_i = 0;
  p_uint2 = (undefined1 *)handle[0xb];
  if (*channel == 0) {
LAB_080d2aae:
    if (loop_i < (int)(uint)*(byte *)(handle + 2)) {
      do {
        M4A_Routine_080D1EAC(handle,p_uint2);
        *p_uint2 = 0;
        loop_i = loop_i + 1;
        p_uint2 = p_uint2 + 0x50;
      } while (loop_i < (int)(uint)*(byte *)(handle + 2));
    }
  }
  else if ((char)handle[2] != '\0') {
    do {
      M4A_Routine_080D1EAC(handle,p_uint2);
      *p_uint2 = 0xc0;
      *(undefined4 *)(p_uint2 + 0x20) = 0;
      *(undefined4 *)(p_uint2 + 0x40) = *(undefined4 *)(channel + loop_i * 4 + 8);
      loop_i = loop_i + 1;
      p_uint2 = p_uint2 + 0x50;
      if ((int)(uint)*channel <= loop_i) break;
    } while (loop_i < (int)(uint)*(byte *)(handle + 2));
    goto LAB_080d2aae;
  }
  if ((channel[3] & 0x80) != 0) {
    M4A_Routine_080D27F0(channel[3]);
  }
  handle[0xd] = 0x68736D53;
LAB_080d2ae2:
  return;
}

// =============================================================================
// Function: M4A_Routine_080D2DA4 @ 0x080D2DA4
// =============================================================================
undefined4 M4A_Routine_080D2DA4(int handle)

{
  byte b_flag1;
  byte b_flag2;
  undefined1 u_val3;
  uint u_val4;
  
  b_flag1 = *(byte *)(handle + 2);
  b_flag2 = *(byte *)(handle + 3);
  if (b_flag1 < b_flag2) {
    if (b_flag2 >> 1 < b_flag1) goto LAB_080d2dd0;
    *(undefined1 *)(handle + 0x1b) = 0xf0;
LAB_080d2dde:
    u_val4 = (uint)*(byte *)(handle + 3) + (uint)*(byte *)(handle + 2) >> 4;
    *(char *)(handle + 10) = (char)u_val4;
    if (u_val4 < 0x10) goto LAB_080d2df0;
    u_val3 = 0xf;
  }
  else {
    if (b_flag2 <= b_flag1 >> 1) {
      *(undefined1 *)(handle + 0x1b) = 0xf;
      goto LAB_080d2dde;
    }
LAB_080d2dd0:
    *(undefined1 *)(handle + 0x1b) = 0xff;
    u_val3 = (undefined1)((uint)*(byte *)(handle + 3) + (uint)*(byte *)(handle + 2) >> 4);
  }
  *(undefined1 *)(handle + 10) = u_val3;
LAB_080d2df0:
  *(char *)(handle + 0x19) =
       (char)((int)((uint)*(byte *)(handle + 10) * (uint)*(byte *)(handle + 6) + 0xf) >> 4);
  *(byte *)(handle + 0x1b) = *(byte *)(handle + 0x1c) & *(byte *)(handle + 0x1b);
  return;
}

// =============================================================================
// Function: M4A_Routine_080D2E0C @ 0x080D2E0C
// =============================================================================
undefined4 M4A_Routine_080D2E0C(void)

{
  undefined4 *p_uint1;
  byte b_flag2;
  int i_val3;
  byte *pbVar4;
  int i_val5;
  uint u_val6;
  byte *pbVar7;
  byte *sub_ret_val;
  uint u_val8;
  byte *pbVar9;
  undefined4 *p_uint10;
  byte *pbVar11;
  byte *pbVar12;
  uint u_val13;
  byte b_flag14;
  uint stack_val_3c;
  byte *pbStack_34;
  byte *pbStack_30;
  byte *pbStack_2c;
  
  i_val3 = *gIWRAM_037FF0;
  if (*(char *)(i_val3 + 10) == '\0') {
    *(undefined1 *)(i_val3 + 10) = 0xe;
  }
  else {
    *(char *)(i_val3 + 10) = *(char *)(i_val3 + 10) + -1;
  }
  u_val13 = 1;
  pbVar12 = *(byte **)(i_val3 + 0x1c);
  do {
    b_flag2 = *pbVar12;
    pbVar7 = (byte *)(uint)b_flag2;
    if ((b_flag2 & 199) != 0) {
      pbStack_34 = ((void *)0x04000061);
      pbStack_30 = ((void *)0x04000069);
      pbVar11 = ((void *)0x04000068);
      if (u_val13 == 2) {
LAB_080d2ec4:
        pbStack_2c = pbStack_34 + 0xb;
        pbVar9 = pbStack_30 + 4;
      }
      else {
        pbStack_34 = ((void *)0x04000071);
        pbStack_30 = ((void *)0x04000079);
        pbVar11 = ((void *)0x04000078);
        if ((int)u_val13 < 3) {
          if (u_val13 != 1) goto LAB_080d2ec4;
          pbStack_34 = ((void *)0x04000060);
          pbStack_30 = ((void *)0x04000063);
          pbStack_2c = ((void *)0x04000060) + 4;
          pbVar9 = ((void *)0x04000063) + 2;
          pbVar11 = ((void *)0x04000062);
        }
        else {
          if (u_val13 != 3) goto LAB_080d2ec4;
          pbStack_34 = ((void *)0x04000070);
          pbStack_30 = ((void *)0x04000073);
          pbStack_2c = ((void *)0x04000070) + 4;
          pbVar9 = ((void *)0x04000073) + 2;
          pbVar11 = ((void *)0x04000072);
        }
      }
      stack_val_3c = (uint)*(byte *)(i_val3 + 10);
      b_flag14 = *pbStack_30;
      pbVar4 = (byte *)(uint)b_flag14;
      if ((b_flag2 & 0x80) == 0) {
        if ((b_flag2 & 4) == 0) {
          pbVar11 = pbVar12 + 0x40;
          if ((b_flag2 & 0x40) == 0) goto LAB_080d3034;
          if ((b_flag2 & 3) == 0) goto LAB_080d3034;
          pbVar11 = (byte *)0x0;
          *pbVar12 = b_flag2 & 0xfc;
          pbVar12[0xb] = pbVar12[7];
          if (pbVar12[7] == 0) {
LAB_080d3066:
            i_val5 = (uint)pbVar12[10] * (uint)pbVar12[0xc] + 0xff;
            pbVar7 = (byte *)0x0;
            pbVar12[9] = (byte)((uint)i_val5 >> 8);
            if ((i_val5 >> 8 & 0xffU) != 0) {
              *pbVar12 = *pbVar12 | 4;
              pbVar12[0x1d] = pbVar12[0x1d] | 1;
              if (u_val13 != 3) {
                b_flag14 = 8;
              }
              goto LAB_080d313a;
            }
            goto LAB_080d2fe6;
          }
          pbVar7 = (byte *)(uint)pbVar12[0x1d];
          pbVar12[0x1d] = pbVar12[0x1d] | 1;
          if (u_val13 != 3) {
            pbVar11 = (byte *)(uint)pbVar12[7];
            pbVar4 = pbVar11;
          }
          goto LAB_080d3128;
        }
        b_flag2 = pbVar12[0xd];
        pbVar12[0xd] = (byte)(b_flag2 - 1);
        pbVar7 = (byte *)(u_val13 + 1);
        if (0 < (int)((b_flag2 - 1) * 0x1000000)) goto LAB_080d313a;
LAB_080d2fe6:
        M4A_Routine_080D2D54(u_val13 & 0xff,pbVar7);
        *pbVar12 = 0;
      }
      else {
        pbVar7 = pbVar12 + 0x40;
        if ((b_flag2 & 0x40) != 0) goto LAB_080d2fe6;
        *pbVar12 = 3;
        pbVar12[0x1d] = 3;
        M4A_Routine_080D2DA4(pbVar12);
        if (u_val13 == 2) {
LAB_080d2f34:
          *pbVar11 = pbVar12[0x1e] + (char)*(undefined4 *)(pbVar12 + 0x24) * '@';
LAB_080d2f94:
          pbVar4 = (byte *)(pbVar12[4] + 8);
          b_flag2 = 0;
          if (pbVar12[0x1e] != 0) {
            b_flag2 = 0x40;
          }
LAB_080d2fa2:
          pbVar12[0x1a] = b_flag2;
        }
        else {
          if ((int)u_val13 < 3) {
            if (u_val13 == 1) {
              *pbStack_34 = pbVar12[0x1f];
              goto LAB_080d2f34;
            }
LAB_080d2f88:
            *pbVar11 = pbVar12[0x1e];
            *pbStack_2c = (byte)(*(int *)(pbVar12 + 0x24) << 3);
            goto LAB_080d2f94;
          }
          if (u_val13 != 3) goto LAB_080d2f88;
          if (*(int *)(pbVar12 + 0x24) != *(int *)(pbVar12 + 0x28)) {
            *pbStack_34 = 0x40;
            p_uint1 = REG_SOUND3CNT_L;
            p_uint10 = *(undefined4 **)(pbVar12 + 0x24);
            *REG_SOUND3CNT_L = *p_uint10;
            p_uint1[1] = p_uint10[1];
            p_uint1[2] = p_uint10[2];
            p_uint1[3] = p_uint10[3];
            *(undefined4 **)(pbVar12 + 0x28) = p_uint10;
          }
          *pbStack_34 = b_flag2 & 0x40;
          *pbVar11 = pbVar12[0x1e];
          if (pbVar12[0x1e] != 0) {
            b_flag2 = 0xc0;
            goto LAB_080d2fa2;
          }
          pbVar12[0x1a] = 0x80;
        }
        pbVar11 = (byte *)0x0;
        pbVar12[0xb] = pbVar12[4];
        pbVar7 = pbVar12 + 0x40;
        if (pbVar12[4] == 0) goto LAB_080d30fa;
        pbVar12[9] = 0;
LAB_080d3128:
        b_flag14 = (byte)pbVar4;
        pbVar12[0xb] = pbVar12[0xb] - 1;
        if (stack_val_3c == 0) {
          stack_val_3c = 0xffffffff;
LAB_080d3034:
          b_flag14 = (byte)pbVar4;
          if (pbVar12[0xb] == 0) {
            if (u_val13 == 3) {
              pbVar7 = (byte *)(uint)pbVar12[0x1d];
              pbVar12[0x1d] = pbVar12[0x1d] | 1;
            }
            M4A_Routine_080D2DA4(pbVar12,pbVar7,pbVar11);
            pbVar11 = (byte *)(uint)*pbVar12;
            if ((*pbVar12 & 3) == 0) {
              b_flag2 = pbVar12[9];
              pbVar12[9] = (byte)(b_flag2 - 1);
              pbVar7 = 0x00ff;
              if (0 < (int)((b_flag2 - 1) * 0x1000000)) {
                b_flag2 = pbVar12[7];
                goto LAB_080d3126;
              }
              goto LAB_080d3066;
            }
            pbVar7 = sub_ret_val;
            if (((uint)pbVar11 & 3) == 1) {
LAB_080d309e:
              pbVar12[9] = pbVar12[0x19];
              b_flag2 = 7;
            }
            else if (((uint)pbVar11 & 3) == 2) {
              b_flag2 = pbVar12[9];
              pbVar12[9] = (byte)(b_flag2 - 1);
              i_val5 = (b_flag2 - 1) * 0x1000000;
              pbVar11 = (byte *)(uint)pbVar12[0x19];
              pbVar7 = (byte *)((int)pbVar11 * 0x1000000);
              if (i_val5 + (int)pbVar11 * -0x1000000 == 0 || i_val5 < (int)pbVar7) {
LAB_080d30be:
                b_flag14 = (byte)pbVar4;
                if (pbVar12[6] != 0) {
                  *pbVar12 = *pbVar12 - 1;
                  pbVar11 = (byte *)(uint)pbVar12[0x1d];
                  pbVar12[0x1d] = pbVar12[0x1d] | 1;
                  if (u_val13 != 3) {
                    pbVar4 = &SupervisorCall;
                  }
                  goto LAB_080d309e;
                }
                *pbVar12 = *pbVar12 & 0xfc;
                goto LAB_080d3066;
              }
              b_flag2 = pbVar12[5];
            }
            else {
              b_flag2 = pbVar12[9];
              pbVar12[9] = (byte)(b_flag2 + 1);
              pbVar7 = 0x00ff;
              pbVar11 = (byte *)(uint)pbVar12[10];
              if (pbVar11 <= (byte *)(b_flag2 + 1 & 0xff)) {
LAB_080d30fa:
                pbVar11 = (byte *)0x0;
                *pbVar12 = *pbVar12 - 1;
                pbVar12[0xb] = pbVar12[5];
                pbVar7 = (byte *)0x0;
                if (pbVar12[5] == 0) goto LAB_080d30be;
                pbVar7 = (byte *)(uint)pbVar12[0x1d];
                pbVar12[0x1d] = pbVar12[0x1d] | 1;
                pbVar12[9] = pbVar12[10];
                if (u_val13 != 3) {
                  pbVar11 = (byte *)(uint)pbVar12[5];
                  pbVar4 = pbVar11;
                }
                goto LAB_080d3128;
              }
              b_flag2 = pbVar12[4];
            }
LAB_080d3126:
            pbVar12[0xb] = b_flag2;
          }
          goto LAB_080d3128;
        }
LAB_080d313a:
        if ((pbVar12[0x1d] & 2) != 0) {
          if (((int)u_val13 < 4) && ((pbVar12[1] & 8) != 0)) {
            if (*((void *)0x04000089) < 0x40) {
              u_val6 = *(int *)(pbVar12 + 0x20) + 2;
              u_val8 = 0x7FC;
            }
            else {
              if (0x7f < *((void *)0x04000089)) goto LAB_080d317a;
              u_val6 = *(int *)(pbVar12 + 0x20) + 1;
              u_val8 = 0x7FE;
            }
            *(uint *)(pbVar12 + 0x20) = u_val6 & u_val8;
          }
LAB_080d317a:
          if (u_val13 == 4) {
            *pbStack_2c = (byte)*(undefined4 *)(pbVar12 + 0x20) | *pbStack_2c & 8;
          }
          else {
            *pbStack_2c = (byte)*(undefined4 *)(pbVar12 + 0x20);
          }
          b_flag2 = pbVar12[0x21] + (pbVar12[0x1a] & 0xc0);
          pbVar12[0x1a] = b_flag2;
          *pbVar9 = b_flag2;
        }
        if ((pbVar12[0x1d] & 1) != 0) {
          *((void *)0x04000081) = *((void *)0x04000081) & ~pbVar12[0x1c] | pbVar12[0x1b];
          if (u_val13 == 3) {
            *pbStack_30 = *(byte *)((uint)pbVar12[9] + gRomData_08139CEC);
            if ((pbVar12[0x1a] & 0x80) != 0) {
              *pbStack_34 = 0x80;
              *pbVar9 = pbVar12[0x1a];
              pbVar12[0x1a] = pbVar12[0x1a] & 0x7f;
            }
          }
          else {
            *pbStack_30 = pbVar12[9] * '\x10' + (b_flag14 & 0xf);
            *pbVar9 = pbVar12[0x1a] | 0x80;
            if ((u_val13 == 1) && ((*pbStack_34 & 8) == 0)) {
              *pbVar9 = pbVar12[0x1a] | 0x80;
            }
          }
        }
      }
      pbVar12[0x1d] = 0;
    }
    u_val13 = u_val13 + 1;
    pbVar12 = pbVar12 + 0x40;
    if (4 < (int)u_val13) {
      return;
    }
  } while( true );
}

