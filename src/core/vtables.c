// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: RUNTIME_AND_VTABLES (427 functions)
// Description: C++ runtime stubs, virtual method tables (VTables) and system utilities
// =============================================================================

#include "../../include/global.h"

// =============================================================================
// Function: VTable_Routine_080D3778 @ 0x080D3778
// =============================================================================
void VTable_Routine_080D3778(undefined1 *instance,undefined1 *arg1,int arg2)

{
  int i_val1;
  
  i_val1 = arg2 + -1;
  if (arg2 != 0) {
    do {
      *arg1 = *instance;
      instance = instance + 1;
      arg1 = arg1 + 1;
      i_val1 = i_val1 + -1;
    } while (i_val1 != -1);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D379C @ 0x080D379C
// =============================================================================
void VTable_Routine_080D379C(undefined4 instance,undefined4 arg1,undefined4 arg2)

{
  uint u_val1;
  undefined2 *p_uint2;
  undefined2 *p_uint3;
  undefined2 stack_val_90;
  
  p_uint2 = &stack_val_90;
  *REG_WAITCNT = *REG_WAITCNT & (ushort)0xFFFC | 3;
  p_uint3 = (undefined2 *)(gRomTable_080D3779 & 0xfffffffe);
  for (u_val1 = (gRomTable_080D379D - gRomTable_080D3779) * 0x8000; u_val1 >> 0x10 != 0;
      u_val1 = ((u_val1 >> 0x10) - 1) * 0x10000) {
    *p_uint2 = *p_uint3;
    p_uint3 = p_uint3 + 1;
    p_uint2 = p_uint2 + 1;
  }
  _call_via_r3(instance,arg1,arg2,(int)&stack_val_90 + 1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080D3800 @ 0x080D3800
// =============================================================================
void VTable_Routine_080D3800(undefined1 *instance,undefined1 *arg1,int arg2)

{
  
  *REG_WAITCNT = *REG_WAITCNT & (ushort)0xFFFC | 3;
  while (arg2 = arg2 + -1, arg2 != -1) {
    *arg1 = *instance;
    instance = instance + 1;
    arg1 = arg1 + 1;
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D3840 @ 0x080D3840
// =============================================================================
u32 VTable_Routine_080D3840(char *instance,char *arg1,int arg2)

{
  char c_char1;
  int i_val2;
  
  i_val2 = arg2 + -1;
  if (arg2 != 0) {
    do {
      c_char1 = *instance;
      instance = instance + 1;
      if (*arg1 != c_char1) goto LAB_080d3868;
      i_val2 = i_val2 + -1;
      arg1 = arg1 + 1;
    } while (i_val2 != -1);
  }
  arg1 = (char *)0x0;
LAB_080d3868:
  return arg1;
}

// =============================================================================
// Function: VTable_Routine_080D3870 @ 0x080D3870
// =============================================================================
void VTable_Routine_080D3870(undefined4 instance,undefined4 arg1,undefined4 arg2)

{
  uint u_val1;
  undefined2 *p_uint2;
  undefined2 *p_uint3;
  undefined2 stack_val_d0;
  
  p_uint2 = &stack_val_d0;
  *REG_WAITCNT = *REG_WAITCNT & (ushort)0xFFFC | 3;
  p_uint3 = (undefined2 *)(gRomTable_080D3841 & 0xfffffffe);
  for (u_val1 = (gRomTable_080D3871 - gRomTable_080D3841) * 0x8000; u_val1 >> 0x10 != 0;
      u_val1 = ((u_val1 >> 0x10) - 1) * 0x10000) {
    *p_uint2 = *p_uint3;
    p_uint3 = p_uint3 + 1;
    p_uint2 = p_uint2 + 1;
  }
  _call_via_r3(instance,arg1,arg2,(int)&stack_val_d0 + 1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080D38D4 @ 0x080D38D4
// =============================================================================
u32 VTable_Routine_080D38D4(undefined4 instance,undefined4 arg1,undefined4 arg2,int arg3)

{
  byte b_flag1;
  
  for (b_flag1 = 0; b_flag1 < 3; b_flag1 = b_flag1 + 1) {
    VTable_Routine_080D3800(instance,arg1,arg2);
    arg3 = VTable_Routine_080D3870(instance,arg1,arg2);
    if (arg3 == 0) break;
  }
  return arg3;
}

// =============================================================================
// Function: gba_memcmp @ 0x080D3948
// =============================================================================
u32 gba_memcmp(byte *arg_1,byte *arg_2,uint arg_3)

{
  int i_val1;
  
  if ((3 < arg_3) && ((((uint)arg_1 | (uint)arg_2) & 3) == 0)) {
    do {
      if (*(int *)arg_1 != *(int *)arg_2) break;
      arg_1 = arg_1 + 4;
      arg_2 = arg_2 + 4;
      arg_3 = arg_3 - 4;
    } while (3 < arg_3);
  }
  do {
    if (arg_3 == 0) {
      i_val1 = 0;
LAB_080d398e:
      return i_val1;
    }
    if ((uint)*arg_1 != (uint)*arg_2) {
      i_val1 = (uint)*arg_1 - (uint)*arg_2;
      goto LAB_080d398e;
    }
    arg_1 = arg_1 + 1;
    arg_2 = arg_2 + 1;
    arg_3 = arg_3 - 1;
  } while( true );
}

// =============================================================================
// Function: gba_memcpy @ 0x080D3994
// =============================================================================
u32 gba_memcpy(undefined4 *arg_1,undefined4 *arg_2,uint arg_3)

{
  undefined4 u_val1;
  undefined4 *p_uint2;
  undefined4 *p_uint3;
  
  p_uint2 = arg_1;
  if ((0xf < arg_3) && ((((uint)arg_2 | (uint)arg_1) & 3) == 0)) {
    do {
      *p_uint2 = *arg_2;
      p_uint2[1] = arg_2[1];
      p_uint3 = arg_2 + 3;
      p_uint2[2] = arg_2[2];
      arg_2 = arg_2 + 4;
      p_uint2[3] = *p_uint3;
      p_uint2 = p_uint2 + 4;
      arg_3 = arg_3 - 0x10;
    } while (0xf < arg_3);
    for (; 3 < arg_3; arg_3 = arg_3 - 4) {
      u_val1 = *arg_2;
      arg_2 = arg_2 + 1;
      *p_uint2 = u_val1;
      p_uint2 = p_uint2 + 1;
    }
  }
  while (arg_3 = arg_3 - 1, arg_3 != 0xffffffff) {
    *(undefined1 *)p_uint2 = *(undefined1 *)arg_2;
    arg_2 = (undefined4 *)((int)arg_2 + 1);
    p_uint2 = (undefined4 *)((int)p_uint2 + 1);
  }
  return arg_1;
}

// =============================================================================
// Function: gba_memmove @ 0x080D39F8
// =============================================================================
u32 gba_memmove(undefined4 *arg_1,undefined4 *arg_2,uint arg_3)

{
  undefined4 *p_uint1;
  undefined4 u_val2;
  undefined1 *p_uint3;
  undefined4 *p_uint4;
  
  if ((arg_2 < arg_1) && (p_uint1 = (undefined4 *)((int)arg_2 + arg_3), arg_1 < p_uint1)) {
    p_uint3 = (undefined1 *)((int)arg_1 + arg_3);
    while (arg_3 = arg_3 - 1, arg_3 != 0xffffffff) {
      p_uint3 = p_uint3 + -1;
      p_uint1 = (undefined4 *)((int)p_uint1 + -1);
      *p_uint3 = *(undefined1 *)p_uint1;
    }
  }
  else {
    p_uint1 = arg_1;
    if ((0xf < arg_3) && ((((uint)arg_2 | (uint)arg_1) & 3) == 0)) {
      do {
        *p_uint1 = *arg_2;
        p_uint1[1] = arg_2[1];
        p_uint4 = arg_2 + 3;
        p_uint1[2] = arg_2[2];
        arg_2 = arg_2 + 4;
        p_uint1[3] = *p_uint4;
        p_uint1 = p_uint1 + 4;
        arg_3 = arg_3 - 0x10;
      } while (0xf < arg_3);
      for (; 3 < arg_3; arg_3 = arg_3 - 4) {
        u_val2 = *arg_2;
        arg_2 = arg_2 + 1;
        *p_uint1 = u_val2;
        p_uint1 = p_uint1 + 1;
      }
    }
    while (arg_3 = arg_3 - 1, arg_3 != 0xffffffff) {
      *(undefined1 *)p_uint1 = *(undefined1 *)arg_2;
      arg_2 = (undefined4 *)((int)arg_2 + 1);
      p_uint1 = (undefined4 *)((int)p_uint1 + 1);
    }
  }
  return arg_1;
}

// =============================================================================
// Function: gba_memset @ 0x080D3A84
// =============================================================================
u32 gba_memset(uint *arg_1,uint arg_2,uint arg_3)

{
  uint u_val1;
  uint *p_uint2;
  
  p_uint2 = arg_1;
  if ((3 < arg_3) && (((uint)arg_1 & 3) == 0)) {
    arg_2 = arg_2 & 0xff;
    u_val1 = arg_2 << 8 | arg_2;
    u_val1 = u_val1 | u_val1 << 0x10;
    for (; 0xf < arg_3; arg_3 = arg_3 - 0x10) {
      *p_uint2 = u_val1;
      p_uint2[1] = u_val1;
      p_uint2[2] = u_val1;
      p_uint2[3] = u_val1;
      p_uint2 = p_uint2 + 4;
    }
    for (; 3 < arg_3; arg_3 = arg_3 - 4) {
      *p_uint2 = u_val1;
      p_uint2 = p_uint2 + 1;
    }
  }
  while (arg_3 != 0) {
    *(char *)p_uint2 = (char)arg_2;
    p_uint2 = (uint *)((int)p_uint2 + 1);
    arg_3 = arg_3 - 1;
  }
  return arg_1;
}

// =============================================================================
// Function: gba_strcat @ 0x080D3ADC
// =============================================================================
u32 gba_strcat(uint *arg_1,undefined4 arg_2)

{
  uint u_val1;
  uint *p_uint2;
  
  p_uint2 = arg_1;
  if (((uint)arg_1 & 3) == 0) {
    u_val1 = *arg_1 + 0xFEFEFEFF & ~*arg_1;
    while ((u_val1 & 0x80808080) == 0) {
      p_uint2 = p_uint2 + 1;
      u_val1 = *p_uint2 + 0xFEFEFEFF & ~*p_uint2;
    }
  }
  for (; (char)*p_uint2 != '\0'; p_uint2 = (uint *)((int)p_uint2 + 1)) {
  }
  gba_strcpy(p_uint2,arg_2);
  return arg_1;
}

// =============================================================================
// Function: gba_strcpy @ 0x080D3B28
// =============================================================================
u32 gba_strcpy(uint *arg_1,uint *arg_2)

{
  uint u_val1;
  int i_val2;
  uint u_val3;
  uint *p_uint4;
  
  u_val1 = 0x80808080;
  i_val2 = 0xFEFEFEFF;
  p_uint4 = arg_1;
  if ((((uint)arg_2 | (uint)arg_1) & 3) == 0) {
    u_val3 = *arg_2 + 0xFEFEFEFF & ~*arg_2;
    while ((u_val3 & u_val1) == 0) {
      u_val3 = *arg_2;
      arg_2 = arg_2 + 1;
      *p_uint4 = u_val3;
      p_uint4 = p_uint4 + 1;
      u_val3 = *arg_2 + i_val2 & ~*arg_2;
    }
  }
  do {
    u_val1 = *arg_2;
    *(char *)p_uint4 = (char)u_val1;
    arg_2 = (uint *)((int)arg_2 + 1);
    p_uint4 = (uint *)((int)p_uint4 + 1);
  } while ((char)u_val1 != '\0');
  return arg_1;
}

// =============================================================================
// Function: gba_strlen @ 0x080D3B78
// =============================================================================
u32 gba_strlen(uint *arg_1)

{
  uint u_val1;
  uint *p_uint2;
  
  p_uint2 = arg_1;
  if (((uint)arg_1 & 3) == 0) {
    u_val1 = *arg_1 + 0xFEFEFEFF & ~*arg_1;
    while ((u_val1 & 0x80808080) == 0) {
      p_uint2 = p_uint2 + 1;
      u_val1 = *p_uint2 + 0xFEFEFEFF & ~*p_uint2;
    }
  }
  for (; (char)*p_uint2 != '\0'; p_uint2 = (uint *)((int)p_uint2 + 1)) {
  }
  return (int)p_uint2 - (int)arg_1;
}

// =============================================================================
// Function: VTable_Routine_080D3BC0 @ 0x080D3BC0
// =============================================================================
void VTable_Routine_080D3BC0(undefined4 instance)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = gIWRAM_030CD4;
  do {
    if (*p_int1 == 0) {
      do {
      } while( true );
    }
    VTable_Routine_080D390C();
    i_val2 = runtime_malloc_aligned(instance);
  } while (i_val2 == 0);
  return;
}

// =============================================================================
// Function: VTable_Routine_080D3BE8 @ 0x080D3BE8
// =============================================================================
u32 VTable_Routine_080D3BE8(undefined4 *instance)

{
  undefined4 u_val1;
  
  CppRuntime_OperatorNewArray(4);
  u_val1 = HW_Routine_08004C48();
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D3C24 @ 0x080D3C24
// =============================================================================
u32 VTable_Routine_080D3C24(undefined4 *instance)

{
  undefined4 u_val1;
  
  CppRuntime_OperatorNewArray(8);
  u_val1 = HW_Routine_08004B58();
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D3C60 @ 0x080D3C60
// =============================================================================
void VTable_Routine_080D3C60(void)

{
  
  Scene_Destructor();
  return;
}

// =============================================================================
// Function: VTable_Routine_080D3C6C @ 0x080D3C6C
// =============================================================================
void VTable_Routine_080D3C6C(void)

{
  
  Scene_Destructor();
  return;
}

// =============================================================================
// Function: VTable_Routine_080D3C78 @ 0x080D3C78
// =============================================================================
void VTable_Routine_080D3C78(int instance,undefined4 arg1)

{
  undefined4 u_val1;
  int i_val2;
  
  i_val2 = instance + 0x6D20;
  HW_Routine_080073E0(i_val2,*(undefined4 *)(i_val2 + 4));
  HW_Routine_08007184(i_val2,2);
  i_val2 = instance + 0x6D18;
  HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val2 + 4));
  HW_Routine_080079E8(i_val2,2);
  i_val2 = instance + 0x6D10;
  HW_Routine_080073E0(i_val2,*(undefined4 *)(i_val2 + 4));
  HW_Routine_08007184(i_val2,2);
  i_val2 = instance + 0x6D08;
  HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val2 + 4));
  HW_Routine_080079E8(i_val2,2);
  HW_Routine_080073E0(instance + 0x6d00,*(undefined4 *)(instance + 0x6d04));
  HW_Routine_08007184(instance + 0x6d00,2);
  i_val2 = instance + 0x6CF8;
  HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val2 + 4));
  HW_Routine_080079E8(i_val2,2);
  i_val2 = instance + 0x6CF0;
  HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val2 + 4));
  HW_Routine_080079E8(i_val2,2);
  i_val2 = instance + 0x6CE8;
  HW_Routine_080073E0(i_val2,*(undefined4 *)(i_val2 + 4));
  HW_Routine_08007184(i_val2,2);
  i_val2 = instance + 0x6CE0;
  HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val2 + 4));
  HW_Routine_080079E8(i_val2,2);
  i_val2 = instance + 0x6CD8;
  HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val2 + 4));
  HW_Routine_080079E8(i_val2,2);
  i_val2 = instance + 0x6CD0;
  HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val2 + 4));
  HW_Routine_080079E8(i_val2,2);
  i_val2 = instance + 0x6CC8;
  HW_Routine_080073E0(i_val2,*(undefined4 *)(i_val2 + 4));
  HW_Routine_08007184(i_val2,2);
  i_val2 = instance + 0x6CC0;
  HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val2 + 4));
  HW_Routine_080079E8(i_val2,2);
  i_val2 = instance + 0x6CB8;
  HW_Routine_080073E0(i_val2,*(undefined4 *)(i_val2 + 4));
  HW_Routine_08007184(i_val2,2);
  i_val2 = instance + 0x6CB0;
  HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val2 + 4));
  HW_Routine_080079E8(i_val2,2);
  i_val2 = instance + 0x6CA8;
  HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val2 + 4));
  HW_Routine_080079E8(i_val2,2);
  i_val2 = instance + 0x6CA0;
  HW_Routine_080073E0(i_val2,*(undefined4 *)(i_val2 + 4));
  HW_Routine_08007184(i_val2,2);
  i_val2 = instance + 0x6C98;
  HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val2 + 4));
  HW_Routine_080079E8(i_val2,2);
  i_val2 = instance + 0x6C90;
  HW_Routine_080073E0(i_val2,*(undefined4 *)(i_val2 + 4));
  HW_Routine_08007184(i_val2,2);
  i_val2 = instance + 0x6C88;
  HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val2 + 4));
  HW_Routine_080079E8(i_val2,2);
  HW_Routine_080073E0(instance + 0x6c80,*(undefined4 *)(instance + 0x6c84));
  HW_Routine_08007184(instance + 0x6c80,2);
  i_val2 = instance + 0x6C78;
  HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val2 + 4));
  HW_Routine_080079E8(i_val2,2);
  HW_Routine_08007184(instance + 0x6C74,2);
  HW_Routine_080079E8(instance + 0x6C70,2);
  u_val1 = gRomData_080E5A28;
  *(undefined4 *)(instance + 0x6A70) = gRomData_080E5A28;
  i_val2 = 0x6A40;
  *(undefined4 *)(instance + 0x6A40) = u_val1;
  *(undefined4 *)(instance + i_val2 + -0x30) = u_val1;
  HW_Routine_080086BC(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080D3ED4 @ 0x080D3ED4
// =============================================================================
void VTable_Routine_080D3ED4(undefined4 *instance,uint arg1)

{
  
  *instance = gRomData_080E5A28;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D3EF4 @ 0x080D3EF4
// =============================================================================
u32 VTable_Routine_080D3EF4(undefined4 *instance,int arg1)

{
  undefined4 *p_uint1;
  undefined4 u_val2;
  ushort *p_uint3;
  int i_val4;
  int i_val5;
  
  p_uint1 = (undefined4 *)CppRuntime_OperatorNewArray(0x554);
  u_val2 = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  *p_uint1 = gRomData_080E5BF8;
  p_uint1[1] = u_val2;
  ScriptEngine_StartEventScript(p_uint1 + 2);
  *(undefined1 *)(p_uint1 + 0xd9) = 0;
  *(undefined1 *)(p_uint1 + 0xdb) = 0;
  p_uint1[0xdc] = 0x1d;
  p_uint3 = (ushort *)(p_uint1 + 0xdd);
  *(byte *)p_uint3 = (byte)*p_uint3 & 0xe0 | 6;
  *p_uint3 = (ushort)0xFFFFF81F & *p_uint3;
  p_uint1[0xde] = 0;
  p_uint1[0xe3] = 0;
  p_uint1[0x134] = 0;
  i_val4 = (int)p_uint1 + 0x4DC;
  i_val5 = 5;
  do {
    VTable_Routine_080D4130(i_val4);
    i_val4 = i_val4 + 0xc;
    i_val5 = i_val5 + -1;
  } while (i_val5 != -1);
  i_val4 = (int)p_uint1 + 0x524;
  i_val5 = 3;
  do {
    VTable_Routine_080D40CC(i_val4);
    i_val4 = i_val4 + 0xc;
    i_val5 = i_val5 + -1;
  } while (i_val5 != -1);
  *gIWRAM_PedometerStepCount = p_uint1;
  *instance = p_uint1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D4004 @ 0x080D4004
// =============================================================================
u32 VTable_Routine_080D4004(undefined4 *instance)

{
  undefined4 u_val1;
  
  CppRuntime_OperatorNewArray(8);
  u_val1 = Scene_Routine_080036F8();
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D4040 @ 0x080D4040
// =============================================================================
void VTable_Routine_080D4040(void)

{
  
  Scene_Destructor();
  return;
}

// =============================================================================
// Function: VTable_Routine_080D404C @ 0x080D404C
// =============================================================================
void VTable_Routine_080D404C(int instance,undefined4 arg1)

{
  
  if (*(int *)(instance + 4) != 0) {
    VTable_Routine_080D4480(*(int *)(instance + 4),3);
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080D406C @ 0x080D406C
// =============================================================================
void VTable_Routine_080D406C(int instance,undefined4 arg1)

{
  int *p_int1;
  
  HW_Routine_080073E0(instance + 0x54,*(undefined4 *)(instance + 0x58));
  HW_Routine_08007184(instance + 0x54,2);
  HW_Routine_08007C28(instance + 0x4c,*(undefined4 *)(instance + 0x50));
  HW_Routine_080079E8(instance + 0x4c,2);
  *(undefined4 *)(instance + 0x1c) = gRomData_080E5A28;
  Animal_Routine_08050D0C(instance + 0x10,2);
  p_int1 = *(int **)(instance + 0xc);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  HW_Routine_080086BC(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080D40CC @ 0x080D40CC
// =============================================================================
u32 VTable_Routine_080D40CC(int instance)

{
  ushort u_val1;
  ushort stack_val_1c;
  ushort stack_val_1a;
  ushort stack_val_18;
  
  u_val1 = (ushort)0xFFFFFC00;
  stack_val_1c = u_val1 & stack_val_1c & 0x3ff | 0x234;
  stack_val_1a = u_val1 & stack_val_1a & 0x3ff;
  stack_val_18 = u_val1 & stack_val_18;
  gba_memcpy(instance,&stack_val_1c,6);
  *(undefined1 *)(instance + 6) = 0;
  *(undefined2 *)(instance + 8) = 0;
  *(undefined2 *)(instance + 10) = 0;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D4130 @ 0x080D4130
// =============================================================================
void VTable_Routine_080D4130(byte *instance)

{
  ushort u_val1;
  
  *instance = *instance & 0xfc;
  u_val1 = (ushort)0xFFFFFC00;
  *(ushort *)(instance + 2) = u_val1 & *(ushort *)(instance + 2) | 0x234;
  instance[3] = instance[3] & 3;
  *(ushort *)(instance + 4) = u_val1 & *(ushort *)(instance + 4);
  instance[5] = instance[5] & 3;
  *(ushort *)(instance + 6) = u_val1 & *(ushort *)(instance + 6);
  return;
}

// =============================================================================
// Function: VTable_Routine_080D4178 @ 0x080D4178
// =============================================================================
u32 VTable_Routine_080D4178(uint *instance,uint *arg1)

{
  byte b_flag1;
  byte *pbVar2;
  uint u_val3;
  byte *pbVar4;
  int i_val5;
  undefined4 u_val6;
  uint u_val7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 u_val10;
  
  b_flag1 = (byte)*arg1;
  *(byte *)instance =
       (byte)*instance & 0xe0 | b_flag1 & 1 | b_flag1 & 2 | b_flag1 & 4 | b_flag1 & 8 | b_flag1 & 0x10;
  *(ushort *)instance = (ushort)0xFFFFE01F & (ushort)*instance | (ushort)*arg1 & 0x1fe0;
  *instance = *instance & 0xFFFC1FFF | *arg1 & 0x3e000;
  *(ushort *)((int)instance + 2) =
       (ushort)0xFFFFFE03 & *(ushort *)((int)instance + 2) | *(ushort *)((int)arg1 + 2) & 0x1fc
  ;
  *(byte *)((int)instance + 3) =
       *(byte *)((int)instance + 3) & 1 | *(byte *)((int)arg1 + 3) & 0x7e |
       *(byte *)((int)arg1 + 3) & 0x80;
  *(byte *)(instance + 1) = (byte)instance[1] & 0xfe | (byte)arg1[1] & 1;
  u_val3 = arg1[3];
  u_val7 = arg1[4];
  instance[2] = arg1[2];
  instance[3] = u_val3;
  instance[4] = u_val7;
  VTable_Routine_080D64C8(instance + 5,arg1 + 5);
  VTable_Routine_080D6B40((byte *)((int)instance + 0x1AA8),(byte *)((int)arg1 + 0x1AA8));
  VTable_Routine_080D68C0((byte *)((int)instance + 0x1BD8),(byte *)((int)arg1 + 0x1BD8));
  VTable_Routine_080D67C8((byte *)((int)instance + 0x1C70),(byte *)((int)arg1 + 0x1C70));
  instance[0x728] = 0;
  u_val3 = arg1[0x728];
  pbVar2 = (byte *)((int)arg1 + 0x1CA4);
  pbVar8 = pbVar2 + u_val3;
  pbVar4 = (byte *)((int)instance + 0x1CA4);
  for (; pbVar2 != pbVar8; pbVar2 = pbVar2 + 1) {
    if (pbVar4 != (byte *)0x0) {
      *pbVar4 = *pbVar2;
    }
    pbVar4 = pbVar4 + 1;
  }
  instance[0x728] = u_val3;
  gba_memcpy(instance + 0x731,arg1 + 0x731,6);
  gba_memcpy((byte *)((int)instance + 0x1CCC),(byte *)((int)arg1 + 0x1CCC),6);
  VTable_Routine_080D60B0((byte *)((int)instance + 0x1CD4),(byte *)((int)arg1 + 0x1CD4));
  VTable_Routine_080D44D4((byte *)((int)instance + 0x214C),(byte *)((int)arg1 + 0x214C));
  pbVar9 = (byte *)((int)instance + 0x21CC);
  pbVar2 = (byte *)(0x21CC + (int)arg1);
  *(undefined4 *)pbVar9 = *(undefined4 *)pbVar2;
  *(undefined4 *)(pbVar9 + 4) = *(undefined4 *)(pbVar2 + 4);
  pbVar8 = (byte *)((int)instance + 0x21D4);
  i_val5 = 7;
  pbVar4 = (byte *)((int)arg1 + 0x21D4);
  do {
    *pbVar8 = *pbVar4;
    pbVar8 = pbVar8 + 1;
    pbVar4 = pbVar4 + 1;
    i_val5 = i_val5 + -1;
  } while (i_val5 != -1);
  pbVar8 = pbVar9 + 0x10;
  i_val5 = 3;
  pbVar4 = pbVar2 + 0x10;
  do {
    *pbVar8 = *pbVar4;
    pbVar8 = pbVar8 + 1;
    pbVar4 = pbVar4 + 1;
    i_val5 = i_val5 + -1;
  } while (i_val5 != -1);
  gba_strcpy(pbVar9 + 0x14,pbVar2 + 0x14);
  gba_strcpy(pbVar9 + 0x24,pbVar2 + 0x24);
  gba_strcpy(pbVar9 + 0x34,pbVar2 + 0x34);
  *(undefined4 *)((int)instance + 0x2210) = *(undefined4 *)((int)arg1 + 0x2210);
  gba_memcpy((byte *)((int)instance + 0x2214),(byte *)((int)arg1 + 0x2214),
                0xA08);
  pbVar2 = (byte *)((int)instance + 0x2C1C);
  pbVar4 = (byte *)((int)arg1 + 0x2C1C);
  u_val6 = *(undefined4 *)(pbVar4 + 4);
  u_val10 = *(undefined4 *)(pbVar4 + 8);
  *(undefined4 *)pbVar2 = *(undefined4 *)pbVar4;
  *(undefined4 *)(pbVar2 + 4) = u_val6;
  *(undefined4 *)(pbVar2 + 8) = u_val10;
  u_val6 = *(undefined4 *)(pbVar4 + 0x10);
  u_val10 = *(undefined4 *)(pbVar4 + 0x14);
  *(undefined4 *)(pbVar2 + 0xc) = *(undefined4 *)(pbVar4 + 0xc);
  *(undefined4 *)(pbVar2 + 0x10) = u_val6;
  *(undefined4 *)(pbVar2 + 0x14) = u_val10;
  u_val6 = *(undefined4 *)(pbVar4 + 0x1c);
  u_val10 = *(undefined4 *)(pbVar4 + 0x20);
  *(undefined4 *)(pbVar2 + 0x18) = *(undefined4 *)(pbVar4 + 0x18);
  *(undefined4 *)(pbVar2 + 0x1c) = u_val6;
  *(undefined4 *)(pbVar2 + 0x20) = u_val10;
  u_val6 = *(undefined4 *)(pbVar4 + 0x28);
  u_val10 = *(undefined4 *)(pbVar4 + 0x2c);
  *(undefined4 *)(pbVar2 + 0x24) = *(undefined4 *)(pbVar4 + 0x24);
  *(undefined4 *)(pbVar2 + 0x28) = u_val6;
  *(undefined4 *)(pbVar2 + 0x2c) = u_val10;
  pbVar4 = (byte *)((int)instance + 0x2C4C);
  pbVar2 = (byte *)((int)arg1 + 0x2C4C);
  u_val6 = *(undefined4 *)(pbVar2 + 4);
  u_val10 = *(undefined4 *)(pbVar2 + 8);
  *(undefined4 *)pbVar4 = *(undefined4 *)pbVar2;
  *(undefined4 *)(pbVar4 + 4) = u_val6;
  *(undefined4 *)(pbVar4 + 8) = u_val10;
  u_val6 = *(undefined4 *)(pbVar2 + 0x10);
  u_val10 = *(undefined4 *)(pbVar2 + 0x14);
  *(undefined4 *)(pbVar4 + 0xc) = *(undefined4 *)(pbVar2 + 0xc);
  *(undefined4 *)(pbVar4 + 0x10) = u_val6;
  *(undefined4 *)(pbVar4 + 0x14) = u_val10;
  u_val6 = *(undefined4 *)(pbVar2 + 0x1c);
  u_val10 = *(undefined4 *)(pbVar2 + 0x20);
  *(undefined4 *)(pbVar4 + 0x18) = *(undefined4 *)(pbVar2 + 0x18);
  *(undefined4 *)(pbVar4 + 0x1c) = u_val6;
  *(undefined4 *)(pbVar4 + 0x20) = u_val10;
  *(undefined4 *)(pbVar4 + 0x24) = *(undefined4 *)(pbVar2 + 0x24);
  pbVar4 = (byte *)((int)instance + 0x2C74);
  pbVar2 = (byte *)((int)arg1 + 0x2C74);
  u_val6 = *(undefined4 *)(pbVar2 + 4);
  u_val10 = *(undefined4 *)(pbVar2 + 8);
  *(undefined4 *)pbVar4 = *(undefined4 *)pbVar2;
  *(undefined4 *)(pbVar4 + 4) = u_val6;
  *(undefined4 *)(pbVar4 + 8) = u_val10;
  gba_memcpy(instance + 0xb20,arg1 + 0xb20,0x1d8);
  gba_memcpy((byte *)((int)instance + 0x2E58),(byte *)((int)arg1 + 0x2E58),0x628)
  ;
  u_val3 = arg1[0xd21];
  u_val7 = arg1[0xd22];
  instance[0xd20] = arg1[0xd20];
  instance[0xd21] = u_val3;
  instance[0xd22] = u_val7;
  u_val3 = arg1[0xd24];
  instance[0xd23] = arg1[0xd23];
  instance[0xd24] = u_val3;
  pbVar2 = (byte *)((int)instance + 0x3494);
  pbVar4 = (byte *)((int)arg1 + 0x3494);
  u_val6 = *(undefined4 *)(pbVar4 + 4);
  u_val10 = *(undefined4 *)(pbVar4 + 8);
  *(undefined4 *)pbVar2 = *(undefined4 *)pbVar4;
  *(undefined4 *)(pbVar2 + 4) = u_val6;
  *(undefined4 *)(pbVar2 + 8) = u_val10;
  u_val6 = *(undefined4 *)(pbVar4 + 0x10);
  u_val10 = *(undefined4 *)(pbVar4 + 0x14);
  *(undefined4 *)(pbVar2 + 0xc) = *(undefined4 *)(pbVar4 + 0xc);
  *(undefined4 *)(pbVar2 + 0x10) = u_val6;
  *(undefined4 *)(pbVar2 + 0x14) = u_val10;
  u_val6 = *(undefined4 *)(pbVar4 + 0x1c);
  u_val10 = *(undefined4 *)(pbVar4 + 0x20);
  *(undefined4 *)(pbVar2 + 0x18) = *(undefined4 *)(pbVar4 + 0x18);
  *(undefined4 *)(pbVar2 + 0x1c) = u_val6;
  *(undefined4 *)(pbVar2 + 0x20) = u_val10;
  u_val6 = *(undefined4 *)(pbVar4 + 0x28);
  u_val10 = *(undefined4 *)(pbVar4 + 0x2c);
  *(undefined4 *)(pbVar2 + 0x24) = *(undefined4 *)(pbVar4 + 0x24);
  *(undefined4 *)(pbVar2 + 0x28) = u_val6;
  *(undefined4 *)(pbVar2 + 0x2c) = u_val10;
  *(byte *)((int)instance + 0x34C4) = *(byte *)((int)arg1 + 0x34C4);
  *(byte *)((int)instance + 0x34C5) = *(byte *)((int)arg1 + 0x34C5);
  pbVar4 = (byte *)((int)instance + 0x34C8);
  pbVar2 = (byte *)((int)arg1 + 0x34C8);
  u_val6 = *(undefined4 *)(pbVar2 + 4);
  u_val10 = *(undefined4 *)(pbVar2 + 8);
  *(undefined4 *)pbVar4 = *(undefined4 *)pbVar2;
  *(undefined4 *)(pbVar4 + 4) = u_val6;
  *(undefined4 *)(pbVar4 + 8) = u_val10;
  *(undefined4 *)(pbVar4 + 0xc) = *(undefined4 *)(pbVar2 + 0xc);
  *(undefined4 *)((int)instance + 0x34D8) = *(undefined4 *)((int)arg1 + 0x34D8);
  pbVar2 = (byte *)((int)instance + 0x34DC);
  pbVar4 = (byte *)((int)arg1 + 0x34DC);
  u_val6 = *(undefined4 *)(pbVar4 + 4);
  u_val10 = *(undefined4 *)(pbVar4 + 8);
  *(undefined4 *)pbVar2 = *(undefined4 *)pbVar4;
  *(undefined4 *)(pbVar2 + 4) = u_val6;
  *(undefined4 *)(pbVar2 + 8) = u_val10;
  u_val6 = *(undefined4 *)(pbVar4 + 0x10);
  u_val10 = *(undefined4 *)(pbVar4 + 0x14);
  *(undefined4 *)(pbVar2 + 0xc) = *(undefined4 *)(pbVar4 + 0xc);
  *(undefined4 *)(pbVar2 + 0x10) = u_val6;
  *(undefined4 *)(pbVar2 + 0x14) = u_val10;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D4480 @ 0x080D4480
// =============================================================================
void VTable_Routine_080D4480(int instance,uint arg1)

{
  undefined *p_uint1;
  
  for (p_uint1 = (undefined *)(instance + 0x1CA4);
      p_uint1 != (undefined *)
                ((int)(0x1ca0 + instance) + *(int *)(0x1ca0 + instance) + 4);
      p_uint1 = p_uint1 + 1) {
  }
  VTable_Routine_080D6B00(instance + 0x1C38,2);
  VTable_Routine_080D6C08(instance + 0x1AA8,2);
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D44D4 @ 0x080D44D4
// =============================================================================
u32 VTable_Routine_080D44D4(int *instance,int *arg1)

{
  byte b_flag1;
  byte mood_byte;
  ushort u_val3;
  ushort u_val4;
  int *p_int5;
  int i_val6;
  ushort *p_uint7;
  ushort *p_uint8;
  int *p_int9;
  
  *instance = 0;
  i_val6 = *arg1;
  p_int9 = arg1 + 1;
  p_int5 = (int *)(i_val6 * 2 + (int)p_int9);
  if (p_int5 != p_int9) {
    gba_memmove(instance + 1,p_int9,(int)p_int5 - (int)p_int9);
  }
  *instance = i_val6;
  *(short *)(instance + 3) = (short)arg1[3];
  *(undefined1 *)((int)instance + 0xe) = *(undefined1 *)((int)arg1 + 0xe);
  *(undefined1 *)((int)instance + 0xf) = *(undefined1 *)((int)arg1 + 0xf);
  *(char *)(instance + 4) = (char)arg1[4];
  b_flag1 = *(byte *)((int)arg1 + 0x11);
  *(byte *)((int)instance + 0x11) =
       b_flag1 & 1 | *(byte *)((int)instance + 0x11) & 0x80 | b_flag1 & 2 | b_flag1 & 4 | b_flag1 & 8 |
       b_flag1 & 0x10 | b_flag1 & 0x60;
  instance[4] = instance[4] & 0xFFFE7FFF | arg1[4] & 0x18000U;
  b_flag1 = *(byte *)((int)arg1 + 0x12);
  *(byte *)((int)instance + 0x12) =
       *(byte *)((int)instance + 0x12) & 0x81 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x60;
  *(ushort *)((int)instance + 0x12) =
       (ushort)0xFFFFFE7F & *(ushort *)((int)instance + 0x12) |
       *(ushort *)((int)arg1 + 0x12) & 0x180;
  b_flag1 = *(byte *)((int)arg1 + 0x13);
  mood_byte = *(byte *)(arg1 + 5);
  *(byte *)((int)instance + 0x13) =
       *(byte *)((int)instance + 0x13) & 1 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x60 | b_flag1 & 0x80;
  b_flag1 = *(byte *)(arg1 + 5);
  *(byte *)(instance + 5) =
       *(byte *)(instance + 5) & 0x80 | mood_byte & 1 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x60;
  *(ushort *)(instance + 5) =
       (ushort)0xFFFFFE7F & *(ushort *)(instance + 5) | *(ushort *)(arg1 + 5) & 0x180;
  b_flag1 = *(byte *)((int)arg1 + 0x15);
  *(byte *)((int)instance + 0x15) =
       *(byte *)((int)instance + 0x15) & 0x81 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x60;
  instance[5] = instance[5] & 0xFFFE7FFF | arg1[5] & 0x18000U;
  b_flag1 = *(byte *)((int)arg1 + 0x16);
  *(byte *)((int)instance + 0x16) =
       *(byte *)((int)instance + 0x16) & 0x81 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x60;
  *(ushort *)((int)instance + 0x16) =
       (ushort)0xFFFFFE7F & *(ushort *)((int)instance + 0x16) |
       *(ushort *)((int)arg1 + 0x16) & 0x180;
  b_flag1 = *(byte *)((int)arg1 + 0x17);
  mood_byte = *(byte *)(arg1 + 6);
  *(byte *)((int)instance + 0x17) =
       *(byte *)((int)instance + 0x17) & 1 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x60 | b_flag1 & 0x80;
  b_flag1 = *(byte *)(arg1 + 6);
  *(byte *)(instance + 6) =
       mood_byte & 1 | *(byte *)(instance + 6) & 0x80 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x60;
  *(ushort *)(instance + 6) =
       (ushort)0xFFFFFE7F & *(ushort *)(instance + 6) | *(ushort *)(arg1 + 6) & 0x180;
  b_flag1 = *(byte *)((int)arg1 + 0x19);
  *(byte *)((int)instance + 0x19) =
       *(byte *)((int)instance + 0x19) & 0x81 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x60;
  instance[6] = instance[6] & 0xFFFE7FFF | arg1[6] & 0x18000U;
  b_flag1 = *(byte *)((int)arg1 + 0x1a);
  *(byte *)((int)instance + 0x1a) =
       *(byte *)((int)instance + 0x1a) & 0x81 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x60;
  *(ushort *)((int)instance + 0x1a) =
       (ushort)0xFFFFFE7F & *(ushort *)((int)instance + 0x1a) |
       *(ushort *)((int)arg1 + 0x1a) & 0x180;
  b_flag1 = *(byte *)((int)arg1 + 0x1b);
  mood_byte = *(byte *)(arg1 + 7);
  *(byte *)((int)instance + 0x1b) =
       *(byte *)((int)instance + 0x1b) & 1 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x60 | b_flag1 & 0x80;
  b_flag1 = *(byte *)(arg1 + 7);
  *(byte *)(instance + 7) =
       mood_byte & 1 | *(byte *)(instance + 7) & 0x80 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x60;
  *(ushort *)(instance + 7) =
       (ushort)0xFFFFFE7F & *(ushort *)(instance + 7) | *(ushort *)(arg1 + 7) & 0x180;
  b_flag1 = *(byte *)((int)arg1 + 0x1d);
  *(byte *)((int)instance + 0x1d) =
       *(byte *)((int)instance + 0x1d) & 0x81 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x60;
  instance[7] = instance[7] & 0xFFFE7FFF | arg1[7] & 0x18000U;
  b_flag1 = *(byte *)((int)arg1 + 0x1e);
  *(byte *)((int)instance + 0x1e) =
       *(byte *)((int)instance + 0x1e) & 0x81 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x60;
  *(ushort *)((int)instance + 0x1e) =
       (ushort)0xFFFFFE7F & *(ushort *)((int)instance + 0x1e) |
       *(ushort *)((int)arg1 + 0x1e) & 0x180;
  b_flag1 = *(byte *)((int)arg1 + 0x1f);
  mood_byte = *(byte *)(arg1 + 8);
  *(byte *)((int)instance + 0x1f) =
       *(byte *)((int)instance + 0x1f) & 1 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x60 | b_flag1 & 0x80;
  b_flag1 = *(byte *)(arg1 + 8);
  *(byte *)(instance + 8) =
       mood_byte & 1 | *(byte *)(instance + 8) & 0x80 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x60;
  *(ushort *)(instance + 8) =
       (ushort)0xFFFFFE7F & *(ushort *)(instance + 8) | *(ushort *)(arg1 + 8) & 0x180;
  b_flag1 = *(byte *)((int)arg1 + 0x21);
  *(byte *)((int)instance + 0x21) =
       *(byte *)((int)instance + 0x21) & 0x81 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x60;
  instance[8] = instance[8] & 0xFFFE7FFF | arg1[8] & 0x18000U;
  b_flag1 = *(byte *)((int)arg1 + 0x22);
  *(byte *)((int)instance + 0x22) =
       *(byte *)((int)instance + 0x22) & 0x81 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x20 |
       b_flag1 & 0x40;
  b_flag1 = *(byte *)(arg1 + 9);
  *(byte *)((int)instance + 0x23) =
       *(byte *)((int)instance + 0x23) & 0xf | *(byte *)((int)arg1 + 0x23) & 0xf0;
  mood_byte = *(byte *)(arg1 + 9);
  *(byte *)(instance + 9) = *(byte *)(instance + 9) & 0x80 | b_flag1 & 7 | mood_byte & 0x18 | mood_byte & 0x60;
  *(ushort *)(instance + 9) =
       (ushort)0xFFFFFE7F & *(ushort *)(instance + 9) | *(ushort *)(arg1 + 9) & 0x180;
  b_flag1 = *(byte *)((int)arg1 + 0x25);
  *(byte *)((int)instance + 0x25) =
       *(byte *)((int)instance + 0x25) & 1 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x60 | b_flag1 & 0x80;
  *(undefined1 *)((int)instance + 0x26) = *(undefined1 *)((int)arg1 + 0x26);
  *(undefined1 *)((int)instance + 0x27) = *(undefined1 *)((int)arg1 + 0x27);
  *(char *)(instance + 10) = (char)arg1[10];
  *(undefined1 *)((int)instance + 0x29) = *(undefined1 *)((int)arg1 + 0x29);
  b_flag1 = *(byte *)((int)arg1 + 0x2a);
  *(byte *)((int)instance + 0x2a) =
       b_flag1 & 1 | *(byte *)((int)instance + 0x2a) & 0x80 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x60;
  *(ushort *)((int)instance + 0x2a) =
       (ushort)0xFFFFFE7F & *(ushort *)((int)instance + 0x2a) |
       *(ushort *)((int)arg1 + 0x2a) & 0x180;
  b_flag1 = *(byte *)((int)arg1 + 0x2b);
  *(byte *)((int)instance + 0x2b) =
       *(byte *)((int)instance + 0x2b) & 1 | b_flag1 & 6 | b_flag1 & 8 | b_flag1 & 0x30 | b_flag1 & 0xc0;
  *(char *)(instance + 0xb) = (char)arg1[0xb];
  b_flag1 = *(byte *)((int)arg1 + 0x2d);
  *(byte *)((int)instance + 0x2d) =
       *(byte *)((int)instance + 0x2d) & 0xc0 | b_flag1 & 3 | b_flag1 & 0xc | b_flag1 & 0x30;
  instance[0xb] = instance[0xb] & 0xFFFC3FFF | arg1[0xb] & 0x3c000U;
  b_flag1 = *(byte *)((int)arg1 + 0x2e);
  *(byte *)((int)instance + 0x2e) =
       *(byte *)((int)instance + 0x2e) & 3 | b_flag1 & 4 | b_flag1 & 0x18 | b_flag1 & 0x60 | b_flag1 & 0x80;
  b_flag1 = *(byte *)(arg1 + 0xc);
  *(undefined1 *)((int)instance + 0x2f) = *(undefined1 *)((int)arg1 + 0x2f);
  mood_byte = *(byte *)(arg1 + 0xc);
  *(byte *)(instance + 0xc) = b_flag1 & 1 | mood_byte & 6 | mood_byte & 0x18 | mood_byte & 0x60 | mood_byte & 0x80;
  *(undefined1 *)((int)instance + 0x31) = *(undefined1 *)((int)arg1 + 0x31);
  *(undefined1 *)((int)instance + 0x32) = *(undefined1 *)((int)arg1 + 0x32);
  *(undefined1 *)((int)instance + 0x33) = *(undefined1 *)((int)arg1 + 0x33);
  *(char *)(instance + 0xd) = (char)arg1[0xd];
  *(undefined1 *)((int)instance + 0x35) = *(undefined1 *)((int)arg1 + 0x35);
  b_flag1 = *(byte *)((int)arg1 + 0x36);
  *(byte *)((int)instance + 0x36) =
       *(byte *)((int)instance + 0x36) & 0x80 | b_flag1 & 3 | b_flag1 & 4 | b_flag1 & 0x18 | b_flag1 & 0x60;
  *(ushort *)((int)instance + 0x36) =
       (ushort)0xFFFFFE7F & *(ushort *)((int)instance + 0x36) |
       *(ushort *)((int)arg1 + 0x36) & 0x180;
  b_flag1 = *(byte *)((int)arg1 + 0x37);
  mood_byte = *(byte *)(arg1 + 0xe);
  *(byte *)((int)instance + 0x37) =
       *(byte *)((int)instance + 0x37) & 1 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x60 | b_flag1 & 0x80;
  b_flag1 = *(byte *)(arg1 + 0xe);
  *(byte *)(instance + 0xe) = mood_byte & 1 | b_flag1 & 2 | b_flag1 & 0xc | b_flag1 & 0x30 | b_flag1 & 0xc0;
  *(undefined1 *)((int)instance + 0x39) = *(undefined1 *)((int)arg1 + 0x39);
  b_flag1 = *(byte *)((int)arg1 + 0x3a);
  *(byte *)((int)instance + 0x3a) =
       *(byte *)((int)instance + 0x3a) & 0x80 | b_flag1 & 3 | b_flag1 & 0x1c | b_flag1 & 0x60;
  *(ushort *)((int)instance + 0x3a) =
       (ushort)0xFFFFFE7F & *(ushort *)((int)instance + 0x3a) |
       *(ushort *)((int)arg1 + 0x3a) & 0x180;
  b_flag1 = *(byte *)((int)arg1 + 0x3b);
  mood_byte = *(byte *)(arg1 + 0xf);
  *(byte *)((int)instance + 0x3b) =
       *(byte *)((int)instance + 0x3b) & 1 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x60 | b_flag1 & 0x80;
  b_flag1 = *(byte *)(arg1 + 0xf);
  *(byte *)(instance + 0xf) =
       mood_byte & 1 | *(byte *)(instance + 0xf) & 0x80 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x60;
  *(ushort *)(instance + 0xf) =
       (ushort)0xFFFFFC7F & *(ushort *)(instance + 0xf) | *(ushort *)(arg1 + 0xf) & 0x380;
  *(byte *)((int)instance + 0x3d) =
       *(byte *)((int)instance + 0x3d) & 0xc3 | *(byte *)((int)arg1 + 0x3d) & 0xc |
       *(byte *)((int)arg1 + 0x3d) & 0x30;
  instance[0xf] = instance[0xf] & 0xFFFC3FFF | arg1[0xf] & 0x3c000U;
  b_flag1 = *(byte *)((int)arg1 + 0x3e);
  *(byte *)((int)instance + 0x3e) =
       *(byte *)((int)instance + 0x3e) & 3 | b_flag1 & 0xc | b_flag1 & 0x30 | b_flag1 & 0xc0;
  p_uint7 = (ushort *)(arg1 + 0x10);
  u_val3 = *p_uint7;
  *(undefined1 *)((int)instance + 0x3f) = *(undefined1 *)((int)arg1 + 0x3f);
  p_uint8 = (ushort *)(instance + 0x10);
  b_flag1 = (byte)*p_uint7;
  *(byte *)p_uint8 = (byte)u_val3 & 1 | (byte)*p_uint8 & 0x80 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x60
  ;
  *p_uint8 = (ushort)0xFFFFFE7F & *p_uint8 | *p_uint7 & 0x180;
  *(byte *)((int)instance + 0x41) =
       *(byte *)((int)instance + 0x41) & 0xe1 | *(byte *)((int)arg1 + 0x41) & 6 |
       *(byte *)((int)arg1 + 0x41) & 0x18;
  instance[0x10] = instance[0x10] & 0xFFFE1FFF | arg1[0x10] & 0x1e000U;
  b_flag1 = *(byte *)((int)arg1 + 0x42);
  *(byte *)((int)instance + 0x42) =
       *(byte *)((int)instance + 0x42) & 1 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x20 | b_flag1 & 0xc0;
  *(undefined1 *)((int)instance + 0x43) = *(undefined1 *)((int)arg1 + 0x43);
  *(char *)(instance + 0x11) = (char)arg1[0x11];
  *(undefined1 *)((int)instance + 0x45) = *(undefined1 *)((int)arg1 + 0x45);
  *(undefined1 *)((int)instance + 0x46) = *(undefined1 *)((int)arg1 + 0x46);
  *(undefined1 *)((int)instance + 0x47) = *(undefined1 *)((int)arg1 + 0x47);
  *(char *)(instance + 0x12) = (char)arg1[0x12];
  *(undefined1 *)((int)instance + 0x49) = *(undefined1 *)((int)arg1 + 0x49);
  *(undefined1 *)((int)instance + 0x4a) = *(undefined1 *)((int)arg1 + 0x4a);
  *(undefined1 *)((int)instance + 0x4b) = *(undefined1 *)((int)arg1 + 0x4b);
  *(char *)(instance + 0x13) = (char)arg1[0x13];
  b_flag1 = *(byte *)((int)arg1 + 0x4d);
  *(byte *)((int)instance + 0x4d) =
       *(byte *)((int)instance + 0x4d) & 0x80 | b_flag1 & 3 | b_flag1 & 4 | b_flag1 & 8 | b_flag1 & 0x10 |
       b_flag1 & 0x20 | b_flag1 & 0x40;
  instance[0x13] = instance[0x13] & 0xFFFE7FFF | arg1[0x13] & 0x18000U;
  b_flag1 = *(byte *)((int)arg1 + 0x4e);
  p_uint8 = (ushort *)((int)instance + 0x4e);
  *(byte *)p_uint8 = *(byte *)p_uint8 & 0x81 | b_flag1 & 2 | b_flag1 & 0xc | b_flag1 & 0x10 | b_flag1 & 0x60;
  *p_uint8 = (ushort)0xFFFFFE7F & *p_uint8 | *(ushort *)((int)arg1 + 0x4e) & 0x180;
  b_flag1 = *(byte *)((int)arg1 + 0x4f);
  mood_byte = *(byte *)(arg1 + 0x14);
  *(byte *)((int)instance + 0x4f) =
       *(byte *)((int)instance + 0x4f) & 1 | b_flag1 & 0xe | b_flag1 & 0x30 | b_flag1 & 0x40 | b_flag1 & 0x80
  ;
  b_flag1 = *(byte *)(arg1 + 0x14);
  *(byte *)(instance + 0x14) = mood_byte & 3 | b_flag1 & 0xc | b_flag1 & 0x10 | b_flag1 & 0x60 | b_flag1 & 0x80;
  *(undefined1 *)((int)instance + 0x51) = *(undefined1 *)((int)arg1 + 0x51);
  b_flag1 = *(byte *)((int)arg1 + 0x52);
  p_uint8 = (ushort *)((int)instance + 0x52);
  *(byte *)p_uint8 = b_flag1 & 1 | *(byte *)p_uint8 & 0xc0 | b_flag1 & 6 | b_flag1 & 8 | b_flag1 & 0x30;
  *p_uint8 = (ushort)0xFFFFFE3F & *p_uint8 | *(ushort *)((int)arg1 + 0x52) & 0x1c0;
  b_flag1 = *(byte *)((int)arg1 + 0x53);
  *(byte *)((int)instance + 0x53) =
       *(byte *)((int)instance + 0x53) & 1 | b_flag1 & 6 | b_flag1 & 8 | b_flag1 & 0x30 | b_flag1 & 0xc0;
  *(char *)(instance + 0x15) = (char)arg1[0x15];
  *(undefined1 *)((int)instance + 0x55) = *(undefined1 *)((int)arg1 + 0x55);
  *(undefined1 *)((int)instance + 0x56) = *(undefined1 *)((int)arg1 + 0x56);
  b_flag1 = *(byte *)(arg1 + 0x16);
  *(undefined1 *)((int)instance + 0x57) = *(undefined1 *)((int)arg1 + 0x57);
  mood_byte = *(byte *)(arg1 + 0x16);
  *(byte *)(instance + 0x16) =
       b_flag1 & 1 | mood_byte & 2 | mood_byte & 0xc | mood_byte & 0x10 | mood_byte & 0x60 | mood_byte & 0x80;
  b_flag1 = *(byte *)((int)arg1 + 0x59);
  *(byte *)((int)instance + 0x59) =
       *(byte *)((int)instance + 0x59) & 0x80 | b_flag1 & 3 | b_flag1 & 4 | b_flag1 & 0x18 | b_flag1 & 0x60;
  instance[0x16] = instance[0x16] & 0xFFFC7FFF | arg1[0x16] & 0x38000U;
  b_flag1 = *(byte *)((int)arg1 + 0x5a);
  p_uint8 = (ushort *)((int)instance + 0x5a);
  *(byte *)p_uint8 =
       *(byte *)p_uint8 & 0x83 | b_flag1 & 4 | b_flag1 & 8 | b_flag1 & 0x10 | b_flag1 & 0x20 | b_flag1 & 0x40;
  *p_uint8 = (ushort)0xFFFFFE7F & *p_uint8 | *(ushort *)((int)arg1 + 0x5a) & 0x180;
  b_flag1 = *(byte *)((int)arg1 + 0x5b);
  mood_byte = *(byte *)(arg1 + 0x17);
  *(byte *)((int)instance + 0x5b) =
       *(byte *)((int)instance + 0x5b) & 1 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0x60 | b_flag1 & 0x80;
  b_flag1 = *(byte *)(arg1 + 0x17);
  *(byte *)(instance + 0x17) = mood_byte & 1 | b_flag1 & 6 | b_flag1 & 0x18 | b_flag1 & 0xe0;
  *(undefined1 *)((int)instance + 0x5d) = *(undefined1 *)((int)arg1 + 0x5d);
  *(undefined1 *)((int)instance + 0x5e) = *(undefined1 *)((int)arg1 + 0x5e);
  *(undefined1 *)((int)instance + 0x5f) = *(undefined1 *)((int)arg1 + 0x5f);
  *(char *)(instance + 0x18) = (char)arg1[0x18];
  *(undefined1 *)((int)instance + 0x61) = *(undefined1 *)((int)arg1 + 0x61);
  *(undefined1 *)((int)instance + 0x62) = *(undefined1 *)((int)arg1 + 0x62);
  *(undefined1 *)((int)instance + 99) = *(undefined1 *)((int)arg1 + 99);
  *(char *)(instance + 0x19) = (char)arg1[0x19];
  *(undefined1 *)((int)instance + 0x65) = *(undefined1 *)((int)arg1 + 0x65);
  *(undefined1 *)((int)instance + 0x66) = *(undefined1 *)((int)arg1 + 0x66);
  *(undefined1 *)((int)instance + 0x67) = *(undefined1 *)((int)arg1 + 0x67);
  b_flag1 = (byte)*(ushort *)(arg1 + 0x1a);
  p_uint8 = (ushort *)(instance + 0x1a);
  *(byte *)p_uint8 = (byte)*p_uint8 & 0xc0 | b_flag1 & 3 | b_flag1 & 0xc | b_flag1 & 0x30;
  u_val3 = (ushort)0xFFFFC03F;
  *p_uint8 = u_val3 & *p_uint8 | *(ushort *)(arg1 + 0x1a) & 0x3fc0;
  instance[0x1a] = instance[0x1a] & 0xFFC03FFF | arg1[0x1a] & 0x3fc000U;
  *(ushort *)((int)instance + 0x6a) =
       u_val3 & *(ushort *)((int)instance + 0x6a) | *(ushort *)((int)arg1 + 0x6a) & 0x3fc0;
  u_val4 = *(ushort *)(arg1 + 0x1b);
  *(byte *)((int)instance + 0x6b) =
       *(byte *)((int)instance + 0x6b) & 0x3f | *(byte *)((int)arg1 + 0x6b) & 0xc0;
  p_uint8 = (ushort *)(instance + 0x1b);
  *(byte *)p_uint8 = (byte)*p_uint8 & 0xc0 | (byte)u_val4 & 0x3f;
  *p_uint8 = u_val3 & *p_uint8 | *(ushort *)(arg1 + 0x1b) & 0x3fc0;
  instance[0x1b] = instance[0x1b] & 0xFFC03FFF | arg1[0x1b] & 0x3fc000U;
  *(ushort *)((int)instance + 0x6e) =
       u_val3 & *(ushort *)((int)instance + 0x6e) | *(ushort *)((int)arg1 + 0x6e) & 0x3fc0;
  u_val4 = *(ushort *)(arg1 + 0x1c);
  *(byte *)((int)instance + 0x6f) =
       *(byte *)((int)instance + 0x6f) & 0x3f | *(byte *)((int)arg1 + 0x6f) & 0xc0;
  p_uint8 = (ushort *)(instance + 0x1c);
  *(byte *)p_uint8 = (byte)*p_uint8 & 0xc0 | (byte)u_val4 & 0x3f;
  *p_uint8 = u_val3 & *p_uint8 | *(ushort *)(arg1 + 0x1c) & 0x3fc0;
  instance[0x1c] = instance[0x1c] & 0xFFC03FFF | arg1[0x1c] & 0x3fc000U;
  *(ushort *)((int)instance + 0x72) =
       u_val3 & *(ushort *)((int)instance + 0x72) | *(ushort *)((int)arg1 + 0x72) & 0x3fc0;
  u_val3 = *(ushort *)(arg1 + 0x1d);
  *(byte *)((int)instance + 0x73) =
       *(byte *)((int)instance + 0x73) & 0x3f | *(byte *)((int)arg1 + 0x73) & 0xc0;
  p_uint8 = (ushort *)(instance + 0x1d);
  *(byte *)p_uint8 = (byte)*p_uint8 & 0xc0 | (byte)u_val3 & 0x3f;
  *p_uint8 = (ushort)0xFFFFFE3F & *p_uint8 | *(ushort *)(arg1 + 0x1d) & 0x1c0;
  b_flag1 = *(byte *)((int)arg1 + 0x75);
  *(byte *)((int)instance + 0x75) =
       *(byte *)((int)instance + 0x75) & 1 | b_flag1 & 6 | b_flag1 & 8 | b_flag1 & 0x10 | b_flag1 & 0x20 |
       b_flag1 & 0x40 | b_flag1 & 0x80;
  b_flag1 = *(byte *)((int)arg1 + 0x76);
  p_uint8 = (ushort *)((int)instance + 0x76);
  *(byte *)p_uint8 =
       b_flag1 & 1 | *(byte *)p_uint8 & 0x80 | b_flag1 & 2 | b_flag1 & 4 | b_flag1 & 8 | b_flag1 & 0x10 |
       b_flag1 & 0x20 | b_flag1 & 0x40;
  *p_uint8 = (ushort)0xFFFFF87F & *p_uint8 | *(ushort *)((int)arg1 + 0x76) & 0x780;
  b_flag1 = *(byte *)(arg1 + 0x1e);
  *(byte *)((int)instance + 0x77) =
       *(byte *)((int)instance + 0x77) & 7 | *(byte *)((int)arg1 + 0x77) & 0x78 |
       *(byte *)((int)arg1 + 0x77) & 0x80;
  mood_byte = *(byte *)(arg1 + 0x1e);
  *(byte *)(instance + 0x1e) =
       b_flag1 & 7 | mood_byte & 8 | mood_byte & 0x10 | mood_byte & 0x20 | mood_byte & 0x40 | mood_byte & 0x80;
  *(undefined1 *)((int)instance + 0x79) = *(undefined1 *)((int)arg1 + 0x79);
  p_uint8 = (ushort *)((int)instance + 0x7a);
  *(byte *)p_uint8 = *(byte *)((int)arg1 + 0x7a) & 1 | *(byte *)p_uint8 & 0xfe;
  *p_uint8 = (ushort)0xFFFFFE01 & *p_uint8 | *(ushort *)((int)arg1 + 0x7a) & 0x1fe;
  b_flag1 = *(byte *)((int)arg1 + 0x7b);
  *(byte *)((int)instance + 0x7b) =
       *(byte *)((int)instance + 0x7b) & 1 | b_flag1 & 2 | b_flag1 & 4 | b_flag1 & 8 | b_flag1 & 0x10 |
       b_flag1 & 0x20 | b_flag1 & 0x40 | b_flag1 & 0x80;
  *(char *)(instance + 0x1f) = (char)arg1[0x1f];
  *(undefined1 *)((int)instance + 0x7d) = *(undefined1 *)((int)arg1 + 0x7d);
  b_flag1 = *(byte *)((int)arg1 + 0x7e);
  p_uint8 = (ushort *)((int)instance + 0x7e);
  *(byte *)p_uint8 =
       *(byte *)p_uint8 & 0x80 | b_flag1 & 3 | b_flag1 & 4 | b_flag1 & 8 | b_flag1 & 0x10 | b_flag1 & 0x20 |
       b_flag1 & 0x40;
  *p_uint8 = (ushort)0xFFFFFC7F & *p_uint8 | *(ushort *)((int)arg1 + 0x7e) & 0x380;
  *(byte *)((int)instance + 0x7f) =
       *(byte *)((int)instance + 0x7f) & 3 | *(byte *)((int)arg1 + 0x7f) & 0xfc;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D60B0 @ 0x080D60B0
// =============================================================================
u32 VTable_Routine_080D60B0(uint *instance,uint *arg1)

{
  byte *pbVar1;
  byte *pbVar2;
  uint u_val3;
  undefined4 u_val4;
  uint u_val5;
  undefined4 u_val6;
  
  *(byte *)instance = (byte)*instance & 0xc0 | (byte)*arg1 & 0x3f;
  *(ushort *)instance = (ushort)0xFFFFE03F & (ushort)*instance | (ushort)*arg1 & 0x1fc0;
  *instance = *instance & 0xFFE01FFF | *arg1 & 0x1fe000;
  *(byte *)((int)instance + 2) =
       *(byte *)((int)instance + 2) & 0xdf | *(byte *)((int)arg1 + 2) & 0x20;
  *(ushort *)((int)instance + 2) =
       (ushort)0xFFFFFE3F & *(ushort *)((int)instance + 2) | *(ushort *)((int)arg1 + 2) & 0x1c0
  ;
  *(byte *)((int)instance + 3) =
       *(byte *)((int)instance + 3) & 0xe1 | *(byte *)((int)arg1 + 3) & 2 |
       *(byte *)((int)arg1 + 3) & 0x1c;
  u_val3 = arg1[2];
  u_val5 = arg1[3];
  instance[1] = arg1[1];
  instance[2] = u_val3;
  instance[3] = u_val5;
  u_val3 = arg1[5];
  instance[4] = arg1[4];
  instance[5] = u_val3;
  gba_strcpy(instance + 6,arg1 + 6);
  *(byte *)(instance + 10) = (byte)arg1[10];
  *(byte *)((int)instance + 0x29) = *(byte *)((int)arg1 + 0x29);
  *(byte *)((int)instance + 0x2a) =
       *(byte *)((int)instance + 0x2a) & 0xfe | *(byte *)((int)arg1 + 0x2a) & 1;
  instance[0xb] = arg1[0xb];
  u_val3 = arg1[0xd];
  instance[0xc] = arg1[0xc];
  instance[0xd] = u_val3;
  u_val3 = arg1[0xf];
  instance[0xe] = arg1[0xe];
  instance[0xf] = u_val3;
  u_val3 = arg1[0x11];
  instance[0x10] = arg1[0x10];
  instance[0x11] = u_val3;
  u_val3 = arg1[0x13];
  instance[0x12] = arg1[0x12];
  instance[0x13] = u_val3;
  u_val3 = arg1[0x15];
  instance[0x14] = arg1[0x14];
  instance[0x15] = u_val3;
  u_val3 = arg1[0x17];
  instance[0x16] = arg1[0x16];
  instance[0x17] = u_val3;
  u_val3 = arg1[0x19];
  instance[0x18] = arg1[0x18];
  instance[0x19] = u_val3;
  u_val3 = arg1[0x1b];
  instance[0x1a] = arg1[0x1a];
  instance[0x1b] = u_val3;
  u_val3 = arg1[0x1d];
  u_val5 = arg1[0x1e];
  instance[0x1c] = arg1[0x1c];
  instance[0x1d] = u_val3;
  instance[0x1e] = u_val5;
  u_val3 = arg1[0x20];
  instance[0x1f] = arg1[0x1f];
  instance[0x20] = u_val3;
  u_val3 = arg1[0x22];
  u_val5 = arg1[0x23];
  instance[0x21] = arg1[0x21];
  instance[0x22] = u_val3;
  instance[0x23] = u_val5;
  u_val3 = arg1[0x25];
  instance[0x24] = arg1[0x24];
  instance[0x25] = u_val3;
  u_val3 = arg1[0x27];
  u_val5 = arg1[0x28];
  instance[0x26] = arg1[0x26];
  instance[0x27] = u_val3;
  instance[0x28] = u_val5;
  u_val3 = arg1[0x2a];
  u_val5 = arg1[0x2b];
  instance[0x29] = arg1[0x29];
  instance[0x2a] = u_val3;
  instance[0x2b] = u_val5;
  u_val3 = arg1[0x2d];
  u_val5 = arg1[0x2e];
  instance[0x2c] = arg1[0x2c];
  instance[0x2d] = u_val3;
  instance[0x2e] = u_val5;
  u_val3 = arg1[0x30];
  instance[0x2f] = arg1[0x2f];
  instance[0x30] = u_val3;
  u_val3 = arg1[0x32];
  u_val5 = arg1[0x33];
  instance[0x31] = arg1[0x31];
  instance[0x32] = u_val3;
  instance[0x33] = u_val5;
  u_val3 = arg1[0x35];
  instance[0x34] = arg1[0x34];
  instance[0x35] = u_val3;
  u_val3 = arg1[0x37];
  u_val5 = arg1[0x38];
  instance[0x36] = arg1[0x36];
  instance[0x37] = u_val3;
  instance[0x38] = u_val5;
  u_val3 = arg1[0x3a];
  u_val5 = arg1[0x3b];
  instance[0x39] = arg1[0x39];
  instance[0x3a] = u_val3;
  instance[0x3b] = u_val5;
  u_val3 = arg1[0x3d];
  u_val5 = arg1[0x3e];
  instance[0x3c] = arg1[0x3c];
  instance[0x3d] = u_val3;
  instance[0x3e] = u_val5;
  u_val3 = arg1[0x40];
  instance[0x3f] = arg1[0x3f];
  instance[0x40] = u_val3;
  u_val3 = arg1[0x42];
  u_val5 = arg1[0x43];
  instance[0x41] = arg1[0x41];
  instance[0x42] = u_val3;
  instance[0x43] = u_val5;
  u_val3 = arg1[0x45];
  instance[0x44] = arg1[0x44];
  instance[0x45] = u_val3;
  u_val3 = arg1[0x47];
  u_val5 = arg1[0x48];
  instance[0x46] = arg1[0x46];
  instance[0x47] = u_val3;
  instance[0x48] = u_val5;
  u_val3 = arg1[0x4a];
  instance[0x49] = arg1[0x49];
  instance[0x4a] = u_val3;
  u_val3 = arg1[0x4c];
  u_val5 = arg1[0x4d];
  instance[0x4b] = arg1[0x4b];
  instance[0x4c] = u_val3;
  instance[0x4d] = u_val5;
  u_val3 = arg1[0x4f];
  instance[0x4e] = arg1[0x4e];
  instance[0x4f] = u_val3;
  u_val3 = arg1[0x51];
  u_val5 = arg1[0x52];
  instance[0x50] = arg1[0x50];
  instance[0x51] = u_val3;
  instance[0x52] = u_val5;
  u_val3 = arg1[0x54];
  instance[0x53] = arg1[0x53];
  instance[0x54] = u_val3;
  u_val3 = arg1[0x56];
  u_val5 = arg1[0x57];
  instance[0x55] = arg1[0x55];
  instance[0x56] = u_val3;
  instance[0x57] = u_val5;
  u_val3 = arg1[0x59];
  u_val5 = arg1[0x5a];
  instance[0x58] = arg1[0x58];
  instance[0x59] = u_val3;
  instance[0x5a] = u_val5;
  u_val3 = arg1[0x5c];
  u_val5 = arg1[0x5d];
  instance[0x5b] = arg1[0x5b];
  instance[0x5c] = u_val3;
  instance[0x5d] = u_val5;
  u_val3 = arg1[0x5f];
  instance[0x5e] = arg1[0x5e];
  instance[0x5f] = u_val3;
  u_val3 = arg1[0x61];
  u_val5 = arg1[0x62];
  instance[0x60] = arg1[0x60];
  instance[0x61] = u_val3;
  instance[0x62] = u_val5;
  u_val3 = arg1[100];
  instance[99] = arg1[99];
  instance[100] = u_val3;
  u_val3 = arg1[0x66];
  u_val5 = arg1[0x67];
  instance[0x65] = arg1[0x65];
  instance[0x66] = u_val3;
  instance[0x67] = u_val5;
  u_val3 = arg1[0x69];
  instance[0x68] = arg1[0x68];
  instance[0x69] = u_val3;
  u_val3 = arg1[0x6b];
  u_val5 = arg1[0x6c];
  instance[0x6a] = arg1[0x6a];
  instance[0x6b] = u_val3;
  instance[0x6c] = u_val5;
  u_val3 = arg1[0x6e];
  instance[0x6d] = arg1[0x6d];
  instance[0x6e] = u_val3;
  u_val3 = arg1[0x70];
  u_val5 = arg1[0x71];
  instance[0x6f] = arg1[0x6f];
  instance[0x70] = u_val3;
  instance[0x71] = u_val5;
  u_val3 = arg1[0x73];
  instance[0x72] = arg1[0x72];
  instance[0x73] = u_val3;
  u_val3 = arg1[0x75];
  u_val5 = arg1[0x76];
  instance[0x74] = arg1[0x74];
  instance[0x75] = u_val3;
  instance[0x76] = u_val5;
  u_val3 = arg1[0x78];
  instance[0x77] = arg1[0x77];
  instance[0x78] = u_val3;
  u_val3 = arg1[0x7a];
  u_val5 = arg1[0x7b];
  instance[0x79] = arg1[0x79];
  instance[0x7a] = u_val3;
  instance[0x7b] = u_val5;
  u_val3 = arg1[0x7d];
  u_val5 = arg1[0x7e];
  instance[0x7c] = arg1[0x7c];
  instance[0x7d] = u_val3;
  instance[0x7e] = u_val5;
  u_val3 = arg1[0x80];
  u_val5 = arg1[0x81];
  instance[0x7f] = arg1[0x7f];
  instance[0x80] = u_val3;
  instance[0x81] = u_val5;
  u_val3 = arg1[0x83];
  instance[0x82] = arg1[0x82];
  instance[0x83] = u_val3;
  u_val3 = arg1[0x85];
  u_val5 = arg1[0x86];
  instance[0x84] = arg1[0x84];
  instance[0x85] = u_val3;
  instance[0x86] = u_val5;
  u_val3 = arg1[0x88];
  u_val5 = arg1[0x89];
  instance[0x87] = arg1[0x87];
  instance[0x88] = u_val3;
  instance[0x89] = u_val5;
  u_val3 = arg1[0x8b];
  u_val5 = arg1[0x8c];
  instance[0x8a] = arg1[0x8a];
  instance[0x8b] = u_val3;
  instance[0x8c] = u_val5;
  u_val3 = arg1[0x8e];
  instance[0x8d] = arg1[0x8d];
  instance[0x8e] = u_val3;
  u_val3 = arg1[0x90];
  u_val5 = arg1[0x91];
  instance[0x8f] = arg1[0x8f];
  instance[0x90] = u_val3;
  instance[0x91] = u_val5;
  u_val3 = arg1[0x93];
  instance[0x92] = arg1[0x92];
  instance[0x93] = u_val3;
  u_val3 = arg1[0x95];
  u_val5 = arg1[0x96];
  instance[0x94] = arg1[0x94];
  instance[0x95] = u_val3;
  instance[0x96] = u_val5;
  u_val3 = arg1[0x98];
  instance[0x97] = arg1[0x97];
  instance[0x98] = u_val3;
  u_val3 = arg1[0x9a];
  u_val5 = arg1[0x9b];
  instance[0x99] = arg1[0x99];
  instance[0x9a] = u_val3;
  instance[0x9b] = u_val5;
  u_val3 = arg1[0x9d];
  u_val5 = arg1[0x9e];
  instance[0x9c] = arg1[0x9c];
  instance[0x9d] = u_val3;
  instance[0x9e] = u_val5;
  u_val3 = arg1[0xa0];
  u_val5 = arg1[0xa1];
  instance[0x9f] = arg1[0x9f];
  instance[0xa0] = u_val3;
  instance[0xa1] = u_val5;
  u_val3 = arg1[0xa3];
  instance[0xa2] = arg1[0xa2];
  instance[0xa3] = u_val3;
  u_val3 = arg1[0xa5];
  u_val5 = arg1[0xa6];
  instance[0xa4] = arg1[0xa4];
  instance[0xa5] = u_val3;
  instance[0xa6] = u_val5;
  u_val3 = arg1[0xa8];
  u_val5 = arg1[0xa9];
  instance[0xa7] = arg1[0xa7];
  instance[0xa8] = u_val3;
  instance[0xa9] = u_val5;
  u_val3 = arg1[0xab];
  u_val5 = arg1[0xac];
  instance[0xaa] = arg1[0xaa];
  instance[0xab] = u_val3;
  instance[0xac] = u_val5;
  u_val3 = arg1[0xae];
  instance[0xad] = arg1[0xad];
  instance[0xae] = u_val3;
  u_val3 = arg1[0xb0];
  u_val5 = arg1[0xb1];
  instance[0xaf] = arg1[0xaf];
  instance[0xb0] = u_val3;
  instance[0xb1] = u_val5;
  u_val3 = arg1[0xb3];
  instance[0xb2] = arg1[0xb2];
  instance[0xb3] = u_val3;
  u_val3 = arg1[0xb5];
  u_val5 = arg1[0xb6];
  instance[0xb4] = arg1[0xb4];
  instance[0xb5] = u_val3;
  instance[0xb6] = u_val5;
  u_val3 = arg1[0xb8];
  instance[0xb7] = arg1[0xb7];
  instance[0xb8] = u_val3;
  u_val3 = arg1[0xba];
  u_val5 = arg1[0xbb];
  instance[0xb9] = arg1[0xb9];
  instance[0xba] = u_val3;
  instance[0xbb] = u_val5;
  u_val3 = arg1[0xbd];
  u_val5 = arg1[0xbe];
  instance[0xbc] = arg1[0xbc];
  instance[0xbd] = u_val3;
  instance[0xbe] = u_val5;
  u_val3 = arg1[0xc0];
  u_val5 = arg1[0xc1];
  instance[0xbf] = arg1[0xbf];
  instance[0xc0] = u_val3;
  instance[0xc1] = u_val5;
  u_val3 = arg1[0xc3];
  instance[0xc2] = arg1[0xc2];
  instance[0xc3] = u_val3;
  u_val3 = arg1[0xc5];
  u_val5 = arg1[0xc6];
  instance[0xc4] = arg1[0xc4];
  instance[0xc5] = u_val3;
  instance[0xc6] = u_val5;
  u_val3 = arg1[200];
  u_val5 = arg1[0xc9];
  instance[199] = arg1[199];
  instance[200] = u_val3;
  instance[0xc9] = u_val5;
  u_val3 = arg1[0xcb];
  u_val5 = arg1[0xcc];
  instance[0xca] = arg1[0xca];
  instance[0xcb] = u_val3;
  instance[0xcc] = u_val5;
  u_val3 = arg1[0xce];
  instance[0xcd] = arg1[0xcd];
  instance[0xce] = u_val3;
  u_val3 = arg1[0xd0];
  u_val5 = arg1[0xd1];
  instance[0xcf] = arg1[0xcf];
  instance[0xd0] = u_val3;
  instance[0xd1] = u_val5;
  u_val3 = arg1[0xd3];
  u_val5 = arg1[0xd4];
  instance[0xd2] = arg1[0xd2];
  instance[0xd3] = u_val3;
  instance[0xd4] = u_val5;
  u_val3 = arg1[0xd6];
  u_val5 = arg1[0xd7];
  instance[0xd5] = arg1[0xd5];
  instance[0xd6] = u_val3;
  instance[0xd7] = u_val5;
  u_val3 = arg1[0xd9];
  u_val5 = arg1[0xda];
  instance[0xd8] = arg1[0xd8];
  instance[0xd9] = u_val3;
  instance[0xda] = u_val5;
  u_val3 = arg1[0xdc];
  u_val5 = arg1[0xdd];
  instance[0xdb] = arg1[0xdb];
  instance[0xdc] = u_val3;
  instance[0xdd] = u_val5;
  u_val3 = arg1[0xdf];
  u_val5 = arg1[0xe0];
  instance[0xde] = arg1[0xde];
  instance[0xdf] = u_val3;
  instance[0xe0] = u_val5;
  u_val3 = arg1[0xe2];
  u_val5 = arg1[0xe3];
  instance[0xe1] = arg1[0xe1];
  instance[0xe2] = u_val3;
  instance[0xe3] = u_val5;
  u_val3 = arg1[0xe5];
  u_val5 = arg1[0xe6];
  instance[0xe4] = arg1[0xe4];
  instance[0xe5] = u_val3;
  instance[0xe6] = u_val5;
  u_val3 = arg1[0xe8];
  u_val5 = arg1[0xe9];
  instance[0xe7] = arg1[0xe7];
  instance[0xe8] = u_val3;
  instance[0xe9] = u_val5;
  u_val3 = arg1[0xeb];
  u_val5 = arg1[0xec];
  instance[0xea] = arg1[0xea];
  instance[0xeb] = u_val3;
  instance[0xec] = u_val5;
  u_val3 = arg1[0xee];
  u_val5 = arg1[0xef];
  instance[0xed] = arg1[0xed];
  instance[0xee] = u_val3;
  instance[0xef] = u_val5;
  u_val3 = arg1[0xf1];
  u_val5 = arg1[0xf2];
  instance[0xf0] = arg1[0xf0];
  instance[0xf1] = u_val3;
  instance[0xf2] = u_val5;
  u_val3 = arg1[0xf4];
  u_val5 = arg1[0xf5];
  instance[0xf3] = arg1[0xf3];
  instance[0xf4] = u_val3;
  instance[0xf5] = u_val5;
  u_val3 = arg1[0xf7];
  u_val5 = arg1[0xf8];
  instance[0xf6] = arg1[0xf6];
  instance[0xf7] = u_val3;
  instance[0xf8] = u_val5;
  u_val3 = arg1[0xfa];
  u_val5 = arg1[0xfb];
  instance[0xf9] = arg1[0xf9];
  instance[0xfa] = u_val3;
  instance[0xfb] = u_val5;
  u_val3 = arg1[0xfd];
  u_val5 = arg1[0xfe];
  instance[0xfc] = arg1[0xfc];
  instance[0xfd] = u_val3;
  instance[0xfe] = u_val5;
  u_val3 = arg1[0x100];
  u_val5 = arg1[0x101];
  instance[0xff] = arg1[0xff];
  instance[0x100] = u_val3;
  instance[0x101] = u_val5;
  u_val3 = arg1[0x103];
  u_val5 = arg1[0x104];
  instance[0x102] = arg1[0x102];
  instance[0x103] = u_val3;
  instance[0x104] = u_val5;
  pbVar1 = (byte *)((int)instance + 0x414);
  pbVar2 = (byte *)((int)arg1 + 0x414);
  u_val4 = *(undefined4 *)(pbVar2 + 4);
  u_val6 = *(undefined4 *)(pbVar2 + 8);
  *(undefined4 *)pbVar1 = *(undefined4 *)pbVar2;
  *(undefined4 *)(pbVar1 + 4) = u_val4;
  *(undefined4 *)(pbVar1 + 8) = u_val6;
  u_val4 = *(undefined4 *)(pbVar2 + 0x10);
  u_val6 = *(undefined4 *)(pbVar2 + 0x14);
  *(undefined4 *)(pbVar1 + 0xc) = *(undefined4 *)(pbVar2 + 0xc);
  *(undefined4 *)(pbVar1 + 0x10) = u_val4;
  *(undefined4 *)(pbVar1 + 0x14) = u_val6;
  u_val4 = *(undefined4 *)(pbVar2 + 0x1c);
  u_val6 = *(undefined4 *)(pbVar2 + 0x20);
  *(undefined4 *)(pbVar1 + 0x18) = *(undefined4 *)(pbVar2 + 0x18);
  *(undefined4 *)(pbVar1 + 0x1c) = u_val4;
  *(undefined4 *)(pbVar1 + 0x20) = u_val6;
  gba_memcpy(instance + 0x10e,arg1 + 0x10e,0x38);
  instance[0x11c] = arg1[0x11c];
  *(byte *)((int)instance + 0x474) = *(byte *)((int)arg1 + 0x474);
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D64C8 @ 0x080D64C8
// =============================================================================
u32 VTable_Routine_080D64C8(int instance,int arg1)

{
  byte b_flag1;
  undefined4 u_val2;
  int i_val3;
  undefined4 *p_uint4;
  undefined4 *p_uint5;
  
  gba_strcpy();
  *(ushort *)(instance + 0x10) =
       (ushort)0xFFFFFC00 & *(ushort *)(instance + 0x10) | *(ushort *)(arg1 + 0x10) & 0x3ff;
  b_flag1 = *(byte *)(arg1 + 0x11);
  *(byte *)(instance + 0x11) =
       *(byte *)(instance + 0x11) & 0xe3 | b_flag1 & 4 | b_flag1 & 8 | b_flag1 & 0x10;
  p_uint5 = (undefined4 *)(instance + 0x14);
  i_val3 = 10;
  p_uint4 = (undefined4 *)(arg1 + 0x14);
  do {
    u_val2 = *p_uint4;
    p_uint4 = p_uint4 + 1;
    *p_uint5 = u_val2;
    p_uint5 = p_uint5 + 1;
    i_val3 = i_val3 + -1;
  } while (i_val3 != -1);
  gba_memcpy(instance + 0x40,arg1 + 0x40,0x1a0);
  gba_memcpy(instance + 0x1e0,arg1 + 0x1e0,0x21c);
  VTable_Routine_080D66A4(instance + 0x3fc,arg1 + 0x3fc);
  VTable_Routine_080D657C(instance + 0x5DC,arg1 + 0x5DC);
  gba_memcpy(instance + 0x9C8,arg1 + 0x9C8,0x10CC);
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D657C @ 0x080D657C
// =============================================================================
u32 VTable_Routine_080D657C(uint *instance,uint *arg1)

{
  byte *pbVar1;
  byte *pbVar2;
  int i_val3;
  uint *p_uint4;
  
  *(byte *)instance = (byte)*instance & 0xfe | (byte)*arg1 & 1;
  *(ushort *)instance =
       (ushort)0xFFFFF801 & (ushort)*instance | (ushort)0x7FE & (ushort)*arg1;
  *(byte *)((int)instance + 1) =
       *(byte *)((int)instance + 1) & 0xe7 | *(byte *)((int)arg1 + 1) & 8 |
       *(byte *)((int)arg1 + 1) & 0x10;
  *instance = *instance & 0xE0001FFF | *arg1 & 0x1FFFE000;
  *(byte *)((int)instance + 3) =
       *(byte *)((int)instance + 3) & 0x1f | *(byte *)((int)arg1 + 3) & 0x60 |
       *(byte *)((int)arg1 + 3) & 0x80;
  *(byte *)(instance + 1) = (byte)instance[1] & 0xf0 | (byte)arg1[1] & 0xf;
  *(ushort *)(instance + 1) =
       (ushort)0xFFFFC00F & (ushort)instance[1] | (ushort)0x3FF0 & (ushort)arg1[1];
  instance[1] = instance[1] & 0xFF003FFF | arg1[1] & 0x00FFC000;
  pbVar2 = (byte *)((int)instance + 7);
  i_val3 = 1;
  pbVar1 = (byte *)((int)arg1 + 7);
  do {
    *pbVar2 = *pbVar1;
    pbVar2 = pbVar2 + 1;
    pbVar1 = pbVar1 + 1;
    i_val3 = i_val3 + -1;
  } while (i_val3 != -1);
  gba_strcpy(instance + 3,arg1 + 3);
  gba_strcpy(instance + 7,arg1 + 7);
  p_uint4 = instance + 0xb;
  i_val3 = 0xf;
  arg1 = arg1 + 0xb;
  do {
    gba_memcpy(p_uint4,arg1,0x3c);
    p_uint4 = p_uint4 + 0xf;
    arg1 = arg1 + 0xf;
    i_val3 = i_val3 + -1;
  } while (i_val3 != -1);
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D66A4 @ 0x080D66A4
// =============================================================================
u32 VTable_Routine_080D66A4(uint *instance,uint *arg1)

{
  uint *p_uint1;
  uint *p_uint2;
  uint u_val3;
  uint u_val4;
  int i_val5;
  
  *(byte *)instance = (byte)*instance & 0xfe | (byte)*arg1 & 1;
  *(ushort *)instance =
       (ushort)0xFFFFF801 & (ushort)*instance | (ushort)0x7FE & (ushort)*arg1;
  *(byte *)((int)instance + 1) = *(byte *)((int)instance + 1) & 0xf7 | *(byte *)((int)arg1 + 1) & 8
  ;
  *instance = *instance & 0xFFF00FFF | *arg1 & 0xff000;
  *(byte *)((int)instance + 2) =
       *(byte *)((int)instance + 2) & 0xf | *(byte *)((int)arg1 + 2) & 0x10 |
       *(byte *)((int)arg1 + 2) & 0xe0;
  u_val3 = arg1[1];
  *(byte *)((int)instance + 3) = *(byte *)((int)arg1 + 3);
  *(byte *)(instance + 1) = (byte)instance[1] & 0xfc | (byte)u_val3 & 3;
  gba_strcpy(instance + 2,arg1 + 2);
  p_uint2 = instance + 6;
  i_val5 = 7;
  p_uint1 = arg1 + 6;
  do {
    u_val3 = p_uint1[1];
    u_val4 = p_uint1[2];
    *p_uint2 = *p_uint1;
    p_uint2[1] = u_val3;
    p_uint2[2] = u_val4;
    u_val3 = p_uint1[4];
    u_val4 = p_uint1[5];
    p_uint2[3] = p_uint1[3];
    p_uint2[4] = u_val3;
    p_uint2[5] = u_val4;
    u_val3 = p_uint1[7];
    u_val4 = p_uint1[8];
    p_uint2[6] = p_uint1[6];
    p_uint2[7] = u_val3;
    p_uint2[8] = u_val4;
    u_val3 = p_uint1[10];
    u_val4 = p_uint1[0xb];
    p_uint2[9] = p_uint1[9];
    p_uint2[10] = u_val3;
    p_uint2[0xb] = u_val4;
    p_uint2 = p_uint2 + 0xc;
    p_uint1 = p_uint1 + 0xc;
    i_val5 = i_val5 + -1;
  } while (i_val5 != -1);
  p_uint1 = instance + 0x66;
  i_val5 = 7;
  p_uint2 = arg1 + 0x66;
  do {
    u_val3 = p_uint2[1];
    *p_uint1 = *p_uint2;
    p_uint1[1] = u_val3;
    p_uint1 = p_uint1 + 2;
    p_uint2 = p_uint2 + 2;
    i_val5 = i_val5 + -1;
  } while (i_val5 != -1);
  p_uint2 = instance + 0x76;
  i_val5 = 1;
  arg1 = arg1 + 0x76;
  do {
    u_val3 = *arg1;
    arg1 = arg1 + 1;
    *p_uint2 = u_val3;
    p_uint2 = p_uint2 + 1;
    i_val5 = i_val5 + -1;
  } while (i_val5 != -1);
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D67C8 @ 0x080D67C8
// =============================================================================
u32 VTable_Routine_080D67C8(int instance,int arg1)

{
  undefined4 u_val1;
  
  VTable_Routine_080D684C();
  *(undefined1 *)(instance + 0x1c) = *(undefined1 *)(arg1 + 0x1c);
  *(byte *)(instance + 0x1d) =
       *(byte *)(instance + 0x1d) & 0xfc | *(byte *)(arg1 + 0x1d) & 1 |
       *(byte *)(arg1 + 0x1d) & 2;
  *(undefined4 *)(instance + 0x20) = *(undefined4 *)(arg1 + 0x20);
  u_val1 = *(undefined4 *)(arg1 + 0x28);
  *(undefined4 *)(instance + 0x24) = *(undefined4 *)(arg1 + 0x24);
  *(undefined4 *)(instance + 0x28) = u_val1;
  *(ushort *)(instance + 0x2c) =
       (ushort)0xFFFFFC00 & *(ushort *)(instance + 0x2c) | *(ushort *)(arg1 + 0x2c) & 0x3ff;
  *(byte *)(instance + 0x2d) = *(byte *)(instance + 0x2d) & 0xe3 | *(byte *)(arg1 + 0x2d) & 0x1c;
  *(uint *)(instance + 0x2c) =
       *(uint *)(instance + 0x2c) & 0xFFE01FFF | *(uint *)(arg1 + 0x2c) & 0x1fe000;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D684C @ 0x080D684C
// =============================================================================
u32 VTable_Routine_080D684C(undefined4 *instance,undefined4 *arg1)

{
  byte b_flag1;
  undefined4 u_val2;
  
  u_val2 = arg1[1];
  *instance = *arg1;
  instance[1] = u_val2;
  gba_strcpy(instance + 2,arg1 + 2);
  *(ushort *)(instance + 6) =
       (ushort)0xFFFFFC00 & *(ushort *)(instance + 6) | *(ushort *)(arg1 + 6) & 0x3ff;
  b_flag1 = *(byte *)((int)arg1 + 0x19);
  *(byte *)((int)instance + 0x19) =
       *(byte *)((int)instance + 0x19) & 0xe3 | b_flag1 & 4 | b_flag1 & 8 | b_flag1 & 0x10;
  instance[6] = instance[6] & 0xFFE01FFF | arg1[6] & 0x1fe000;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D68C0 @ 0x080D68C0
// =============================================================================
u32 VTable_Routine_080D68C0(int instance,int arg1)

{
  byte b_flag1;
  ushort u_val2;
  ushort u_val3;
  uint u_val4;
  int i_val5;
  undefined4 *p_uint6;
  undefined4 u_val7;
  undefined4 *p_uint8;
  uint u_val9;
  ushort *p_uint10;
  
  gba_strcpy();
  gba_strcpy(instance + 0x10,arg1 + 0x10);
  *(undefined1 *)(instance + 0x20) = *(undefined1 *)(arg1 + 0x20);
  u_val7 = *(undefined4 *)(arg1 + 0x28);
  *(undefined4 *)(instance + 0x24) = *(undefined4 *)(arg1 + 0x24);
  *(undefined4 *)(instance + 0x28) = u_val7;
  p_uint8 = (undefined4 *)(instance + 0x2c);
  i_val5 = 5;
  p_uint6 = (undefined4 *)(arg1 + 0x2c);
  do {
    u_val7 = *p_uint6;
    p_uint6 = p_uint6 + 1;
    *p_uint8 = u_val7;
    p_uint8 = p_uint8 + 1;
    i_val5 = i_val5 + -1;
  } while (i_val5 != -1);
  b_flag1 = *(byte *)(arg1 + 0x44);
  p_uint10 = (ushort *)(instance + 0x44);
  *(byte *)p_uint10 =
       *(byte *)p_uint10 & 0x80 | b_flag1 & 0xf | b_flag1 & 0x10 | b_flag1 & 0x20 | b_flag1 & 0x40;
  u_val2 = (ushort)0xFFFF807F;
  *p_uint10 = u_val2 & *p_uint10 | *(ushort *)(arg1 + 0x44) & 0x7f80;
  *(uint *)(instance + 0x44) =
       *(uint *)(instance + 0x44) & 0xFF807FFF | *(uint *)(arg1 + 0x44) & 0x7f8000;
  *(ushort *)(instance + 0x46) =
       u_val2 & *(ushort *)(instance + 0x46) | *(ushort *)(arg1 + 0x46) & 0x7f80;
  u_val4 = 0x1FFFFFFF;
  u_val9 = *(uint *)(arg1 + 0x48);
  *(byte *)(instance + 0x47) = *(byte *)(instance + 0x47) & 0x7f | *(byte *)(arg1 + 0x47) & 0x80;
  *(uint *)(instance + 0x48) = *(uint *)(instance + 0x48) & 0xe0000000 | u_val9 & u_val4;
  *(byte *)(instance + 0x4b) = *(byte *)(instance + 0x4b) & 0x1f | *(byte *)(arg1 + 0x4b) & 0xe0;
  p_uint10 = (ushort *)(instance + 0x4c);
  *(byte *)p_uint10 = *(byte *)p_uint10 & 0x80 | *(byte *)(arg1 + 0x4c) & 0x7f;
  *p_uint10 = u_val2 & *p_uint10 | *(ushort *)(arg1 + 0x4c) & 0x7f80;
  u_val2 = *(ushort *)(arg1 + 0x50);
  u_val3 = (ushort)0x1FFF;
  *(uint *)(instance + 0x4c) =
       *(uint *)(instance + 0x4c) & 0x7FFF | *(uint *)(arg1 + 0x4c) & 0xffff8000;
  *(ushort *)(instance + 0x50) =
       (ushort)0xFFFFE000 & *(ushort *)(instance + 0x50) | u_val2 & u_val3 & u_val3;
  *(byte *)(instance + 0x51) = *(byte *)(instance + 0x51) & 0x1f | *(byte *)(arg1 + 0x51) & 0xe0;
  u_val7 = *(undefined4 *)(arg1 + 0x58);
  *(undefined4 *)(instance + 0x54) = *(undefined4 *)(arg1 + 0x54);
  *(undefined4 *)(instance + 0x58) = u_val7;
  gba_memcpy(instance + 0x5c,arg1 + 0x5c,2);
  VTable_Routine_080D6A80(instance + 0x60,arg1 + 0x60);
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D6A80 @ 0x080D6A80
// =============================================================================
u32 VTable_Routine_080D6A80(int *instance,int *arg1)

{
  int *p_int1;
  int i_val2;
  int *p_int3;
  int *p_int4;
  
  *instance = 0;
  i_val2 = *arg1;
  p_int3 = arg1 + 1;
  p_int1 = p_int3 + i_val2;
  p_int4 = instance;
  for (; p_int3 != p_int1; p_int3 = p_int3 + 1) {
    p_int4 = p_int4 + 1;
    if (p_int4 != (int *)0x0) {
      *p_int4 = *p_int3;
    }
  }
  *instance = i_val2;
  instance[9] = 0;
  i_val2 = arg1[9];
  arg1 = arg1 + 10;
  p_int4 = (int *)(i_val2 * 2 + (int)arg1);
  p_int3 = instance + 10;
  for (; arg1 != p_int4; arg1 = (int *)((int)arg1 + 2)) {
    if (p_int3 != (int *)0x0) {
      gba_memcpy(p_int3,arg1,2);
    }
    p_int3 = (int *)((int)p_int3 + 2);
  }
  instance[9] = i_val2;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D6B00 @ 0x080D6B00
// =============================================================================
void VTable_Routine_080D6B00(int *instance,uint arg1)

{
  int *p_int1;
  
  for (p_int1 = instance + 10; p_int1 != (int *)((int)instance + instance[9] * 2 + 0x28);
      p_int1 = (int *)((int)p_int1 + 2)) {
  }
  p_int1 = instance;
  do {
    p_int1 = p_int1 + 1;
  } while (p_int1 != instance + *instance + 1);
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D6B40 @ 0x080D6B40
// =============================================================================
u32 VTable_Routine_080D6B40(undefined4 *instance,undefined4 *arg1)

{
  undefined4 *p_uint1;
  undefined4 u_val2;
  undefined4 *p_uint3;
  undefined4 *p_uint4;
  int i_val5;
  
  *instance = *arg1;
  *(byte *)(instance + 1) =
       *(byte *)(instance + 1) & 0xfc | *(byte *)(arg1 + 1) & 1 | *(byte *)(arg1 + 1) & 2;
  instance[2] = 0;
  i_val5 = arg1[2];
  p_uint1 = arg1 + 3;
  p_uint4 = p_uint1 + i_val5 * 2;
  p_uint3 = instance + 3;
  for (; p_uint1 != p_uint4; p_uint1 = p_uint1 + 2) {
    if (p_uint3 != (undefined4 *)0x0) {
      u_val2 = p_uint1[1];
      *p_uint3 = *p_uint1;
      p_uint3[1] = u_val2;
    }
    p_uint3 = p_uint3 + 2;
  }
  instance[2] = i_val5;
  instance[0x3f] = 0;
  i_val5 = arg1[0x3f];
  p_uint1 = arg1 + 0x40;
  p_uint4 = p_uint1 + i_val5 * 2;
  p_uint3 = instance + 0x40;
  for (; p_uint1 != p_uint4; p_uint1 = p_uint1 + 2) {
    if (p_uint3 != (undefined4 *)0x0) {
      u_val2 = p_uint1[1];
      *p_uint3 = *p_uint1;
      p_uint3[1] = u_val2;
    }
    p_uint3 = p_uint3 + 2;
  }
  instance[0x3f] = i_val5;
  u_val2 = arg1[0x49];
  instance[0x48] = arg1[0x48];
  instance[0x49] = u_val2;
  u_val2 = arg1[0x4b];
  instance[0x4a] = arg1[0x4a];
  instance[0x4b] = u_val2;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D6C08 @ 0x080D6C08
// =============================================================================
void VTable_Routine_080D6C08(int instance,uint arg1)

{
  int *p_int1;
  int i_val2;
  
  for (p_int1 = (int *)(instance + 0x100);
      p_int1 != (int *)(instance + 0xfc) + *(int *)(instance + 0xfc) * 2 + 1; p_int1 = p_int1 + 2) {
  }
  for (i_val2 = instance + 0xc; i_val2 != instance + *(int *)(instance + 8) * 8 + 0xc; i_val2 = i_val2 + 8)
  {
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D6C58 @ 0x080D6C58
// =============================================================================
void VTable_Routine_080D6C58(undefined4 *instance,int arg1)

{
  undefined1 u_val1;
  undefined4 *p_uint2;
  undefined4 u_val3;
  ushort *p_uint4;
  int i_val5;
  int i_val6;
  undefined4 stack_val_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  puStack_24 = instance;
  p_uint2 = (undefined4 *)CppRuntime_OperatorNewArray(0x554);
  u_val1 = *(undefined1 *)(arg1 + 0x24);
  *p_uint2 = gRomData_080E5BF8;
  u_val3 = CppRuntime_OperatorNewArray(0x34F4);
  u_val3 = Farmer_Routine_08010358(u_val3,arg1 + 4,arg1 + 0x14,u_val1,arg1 + 0x28);
  p_uint2[1] = u_val3;
  ScriptEngine_StartEventScript(p_uint2 + 2);
  *(undefined1 *)(p_uint2 + 0xd9) = 1;
  p_uint2[0xda] = 0xab;
  *(undefined1 *)(p_uint2 + 0xdb) = 0;
  p_uint2[0xdc] = 0x1d;
  p_uint4 = (ushort *)(p_uint2 + 0xdd);
  *(byte *)p_uint4 = (byte)*p_uint4 & 0xe0 | 6;
  *p_uint4 = (ushort)0xFFFFF81F & *p_uint4;
  p_uint2[0xde] = 0;
  p_uint2[0xe3] = 0;
  p_uint2[0x134] = 0;
  i_val5 = (int)p_uint2 + 0x4DC;
  i_val6 = 5;
  do {
    VTable_Routine_080D4130(i_val5);
    i_val5 = i_val5 + 0xc;
    i_val6 = i_val6 + -1;
  } while (i_val6 != -1);
  i_val5 = (int)p_uint2 + 0x524;
  i_val6 = 3;
  do {
    VTable_Routine_080D40CC(i_val5);
    i_val5 = i_val5 + 0xc;
    i_val6 = i_val6 + -1;
  } while (i_val6 != -1);
  *gIWRAM_PedometerStepCount = p_uint2;
  puStack_2c = &stack_val_30;
  *puStack_24 = p_uint2;
  stack_val_30 = 0;
  puStack_28 = p_uint2;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D6D8C @ 0x080D6D8C
// =============================================================================
void VTable_Routine_080D6D8C(void)

{
  
  Scene_Destructor();
  return;
}

// =============================================================================
// Function: VTable_Routine_080D6D98 @ 0x080D6D98
// =============================================================================
u32 VTable_Routine_080D6D98(int instance,int arg1,int arg2)

{
  int *p_int1;
  
  p_int1 = (int *)(instance + arg1 * 4 + -4);
  *p_int1 = arg2;
  while (p_int1 != (int *)instance) {
    p_int1[-1] = (int)p_int1;
    p_int1 = p_int1 + -1;
  }
  return p_int1;
}

// =============================================================================
// Function: VTable_Routine_080D6DB8 @ 0x080D6DB8
// =============================================================================
void VTable_Routine_080D6DB8(int *instance,uint arg1)

{
  int i_val1;
  int i_val2;
  undefined4 u_val3;
  int i_val4;
  int i_val5;
  int i_val6;
  int i_val7;
  
  i_val5 = *instance;
  if ((uint)(instance[3] - i_val5 >> 3) < arg1) {
    i_val6 = instance[1];
    i_val1 = i_val6 - i_val5;
    if (i_val5 == 0) {
      if (arg1 == 0) {
        i_val4 = 0;
        i_val7 = 0;
      }
      else {
        i_val7 = arg1 * 8;
        i_val4 = runtime_malloc_aligned(i_val7);
        if (i_val4 == 0) {
          i_val4 = VTable_Routine_080D3BC0(i_val7);
        }
      }
    }
    else {
      if (arg1 == 0) {
        i_val2 = 0;
        i_val7 = 0;
        i_val4 = i_val2;
      }
      else {
        i_val7 = arg1 * 8;
        i_val2 = runtime_malloc_aligned(i_val7);
        i_val4 = i_val2;
        if (i_val2 == 0) {
          i_val2 = VTable_Routine_080D3BC0(i_val7);
          i_val4 = i_val2;
        }
      }
      for (; i_val5 != i_val6; i_val5 = i_val5 + 8) {
        if (i_val2 != 0) {
          GBA_PaletteManager_Init(i_val2);
          u_val3 = HW_Routine_0800745C(i_val2,*(undefined4 *)(i_val5 + 4));
          *(undefined4 *)(i_val2 + 4) = u_val3;
        }
        i_val2 = i_val2 + 8;
      }
      i_val6 = instance[1];
      for (i_val5 = *instance; i_val5 != i_val6; i_val5 = i_val5 + 8) {
        HW_Routine_080073E0(i_val5,*(undefined4 *)(i_val5 + 4));
        HW_Routine_08007184(i_val5,2);
      }
      if (*instance != 0) {
        cpp_operator_delete();
      }
    }
    *instance = i_val4;
    instance[1] = (i_val1 >> 3) * 8 + i_val4;
    instance[3] = i_val7 + i_val4;
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D6ECC @ 0x080D6ECC
// =============================================================================
void VTable_Routine_080D6ECC(undefined1 *instance)

{
  
  VTable_Routine_080D6EAC(instance + 4);
  VTable_Routine_080D6EAC(instance + 0x20);
  *instance = 1;
  instance[1] = 0;
  return;
}

// =============================================================================
// Function: VTable_Routine_080D6EEC @ 0x080D6EEC
// =============================================================================
void VTable_Routine_080D6EEC(undefined1 *instance)

{
  
  VTable_Routine_080D6ECC(instance + 4);
  VTable_Routine_080D6ECC(instance + 0x40);
  *instance = 1;
  instance[1] = 0;
  return;
}

// =============================================================================
// Function: VTable_Routine_080D6F3C @ 0x080D6F3C
// =============================================================================
void VTable_Routine_080D6F3C(undefined1 *instance)

{
  
  VTable_Routine_080D6F1C(instance + 0x20);
  VTable_Routine_080D6F1C(instance + 4);
  *instance = 0;
  instance[1] = 1;
  return;
}

// =============================================================================
// Function: VTable_Routine_080D6F5C @ 0x080D6F5C
// =============================================================================
void VTable_Routine_080D6F5C(undefined1 *instance)

{
  
  VTable_Routine_080D6F3C(instance + 0x40);
  VTable_Routine_080D6F3C(instance + 4);
  *instance = 0;
  instance[1] = 1;
  return;
}

// =============================================================================
// Function: VTable_Routine_080D6F7C @ 0x080D6F7C
// =============================================================================
void VTable_Routine_080D6F7C(undefined1 *instance,uint arg1,uint arg2)

{
  undefined1 u_val1;
  uint u_val2;
  uint *p_uint3;
  uint stack_val_14;
  uint stack_val_10;
  
  stack_val_14 = arg2;
  if ((arg1 < 0x40) && (arg2 != 0)) {
    if ((arg1 == 0) && (0x3f < arg2)) {
      VTable_Routine_080D6E98();
    }
    else {
      if (arg1 < 0x20) {
        stack_val_10 = 0x20 - arg1;
        p_uint3 = &stack_val_14;
        if (0x20 - arg1 < arg2) {
          p_uint3 = &stack_val_10;
        }
        *(uint *)(instance + 4) =
             *(uint *)(instance + 4) | (1 << (*p_uint3 & 0xff)) + -1 << (arg1 & 0xff);
      }
      if (0x20 < arg1 + arg2) {
        u_val2 = 0;
        if (0x1f < arg1) {
          u_val2 = arg1 - 0x20;
        }
        *(uint *)(instance + 8) =
             *(uint *)(instance + 8) |
             (1 << (((arg1 + arg2) - 0x20) - u_val2 & 0xff)) + -1 << (u_val2 & 0xff);
      }
      u_val1 = 0;
      if ((*(int *)(instance + 4) == -1) && (*(int *)(instance + 8) == -1)) {
        u_val1 = 1;
      }
      *instance = u_val1;
      instance[1] = 0;
    }
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D7014 @ 0x080D7014
// =============================================================================
void VTable_Routine_080D7014(byte *instance,uint arg1,uint arg2)

{
  byte b_flag1;
  int i_val2;
  uint *p_uint3;
  uint stack_val_14;
  uint stack_val_10;
  
  stack_val_14 = arg2;
  if ((arg1 < 0x80) && (arg2 != 0)) {
    if ((arg1 == 0) && (0x7f < arg2)) {
      VTable_Routine_080D6EAC(instance);
    }
    else {
      if (arg1 < 0x40) {
        stack_val_10 = 0x40 - arg1;
        p_uint3 = &stack_val_14;
        if (0x40 - arg1 < arg2) {
          p_uint3 = &stack_val_10;
        }
        VTable_Routine_080D6F7C(instance + 4,arg1,*p_uint3);
      }
      if (0x40 < arg1 + stack_val_14) {
        i_val2 = 0;
        if (0x3f < arg1) {
          i_val2 = arg1 - 0x40;
        }
        VTable_Routine_080D6F7C(instance + 0x10,i_val2,((arg1 + stack_val_14) - 0x40) - i_val2);
      }
      b_flag1 = 0;
      if (instance[4] != 0) {
        b_flag1 = (byte)(-(uint)instance[0x10] >> 0x1f);
      }
      *instance = b_flag1;
      instance[1] = 0;
    }
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D7094 @ 0x080D7094
// =============================================================================
void VTable_Routine_080D7094(byte *instance,uint arg1,uint arg2)

{
  byte b_flag1;
  int i_val2;
  uint *p_uint3;
  uint stack_val_14;
  uint stack_val_10;
  
  stack_val_14 = arg2;
  if ((arg1 < 0x100) && (arg2 != 0)) {
    if ((arg1 == 0) && (0xff < arg2)) {
      VTable_Routine_080D6ECC(instance);
    }
    else {
      if (arg1 < 0x80) {
        stack_val_10 = 0x80 - arg1;
        p_uint3 = &stack_val_14;
        if (0x80 - arg1 < arg2) {
          p_uint3 = &stack_val_10;
        }
        VTable_Routine_080D7014(instance + 4,arg1,*p_uint3);
      }
      if (0x80 < arg1 + stack_val_14) {
        i_val2 = 0;
        if (0x7f < arg1) {
          i_val2 = arg1 - 0x80;
        }
        VTable_Routine_080D7014(instance + 0x20,i_val2,((arg1 + stack_val_14) - 0x80) - i_val2);
      }
      b_flag1 = 0;
      if (instance[4] != 0) {
        b_flag1 = (byte)(-(uint)instance[0x20] >> 0x1f);
      }
      *instance = b_flag1;
      instance[1] = 0;
    }
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D7118 @ 0x080D7118
// =============================================================================
void VTable_Routine_080D7118(byte *instance,uint arg1,uint arg2)

{
  byte b_flag1;
  int i_val2;
  uint *p_uint3;
  uint stack_val_14;
  uint stack_val_10;
  
  stack_val_14 = arg2;
  if ((arg1 <= 0x1FF) && (arg2 != 0)) {
    if ((arg1 == 0) && (0x1FF < arg2)) {
      VTable_Routine_080D6EEC(instance);
    }
    else {
      if (arg1 < 0x100) {
        stack_val_10 = 0x100 - arg1;
        p_uint3 = &stack_val_14;
        if (0x100 - arg1 < arg2) {
          p_uint3 = &stack_val_10;
        }
        VTable_Routine_080D7094(instance + 4,arg1,*p_uint3);
      }
      if (0x100 < arg1 + stack_val_14) {
        i_val2 = 0;
        if (0xff < arg1) {
          i_val2 = arg1 + 0xFFFFFF00;
        }
        VTable_Routine_080D7094(instance + 0x40,i_val2,((arg1 + stack_val_14) - 0x100) - i_val2);
      }
      b_flag1 = 0;
      if (instance[4] != 0) {
        b_flag1 = (byte)(-(uint)instance[0x40] >> 0x1f);
      }
      *instance = b_flag1;
      instance[1] = 0;
    }
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D71AC @ 0x080D71AC
// =============================================================================
void VTable_Routine_080D71AC(undefined1 *instance,uint arg1,uint arg2)

{
  undefined1 u_val1;
  uint u_val2;
  uint *p_uint3;
  uint stack_val_14;
  uint stack_val_10;
  
  stack_val_14 = arg2;
  if ((arg1 < 0x40) && (arg2 != 0)) {
    if ((arg1 == 0) && (0x3f < arg2)) {
      VTable_Routine_080D6F0C();
    }
    else {
      if (arg1 < 0x20) {
        stack_val_10 = 0x20 - arg1;
        p_uint3 = &stack_val_14;
        if (0x20 - arg1 < arg2) {
          p_uint3 = &stack_val_10;
        }
        *(uint *)(instance + 4) =
             *(uint *)(instance + 4) & ~((1 << (*p_uint3 & 0xff)) + -1 << (arg1 & 0xff));
      }
      if (0x20 < arg1 + arg2) {
        u_val2 = 0;
        if (0x1f < arg1) {
          u_val2 = arg1 - 0x20;
        }
        *(uint *)(instance + 8) =
             *(uint *)(instance + 8) &
             ~((1 << (((arg1 + arg2) - 0x20) - u_val2 & 0xff)) + -1 << (u_val2 & 0xff));
      }
      *instance = 0;
      u_val1 = 0;
      if ((*(int *)(instance + 4) == 0) && (*(int *)(instance + 8) == 0)) {
        u_val1 = 1;
      }
      instance[1] = u_val1;
    }
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D7240 @ 0x080D7240
// =============================================================================
void VTable_Routine_080D7240(undefined1 *instance,uint arg1,uint arg2)

{
  byte b_flag1;
  int i_val2;
  uint *p_uint3;
  uint stack_val_18;
  uint stack_val_14;
  
  stack_val_18 = arg2;
  if ((arg1 < 0x80) && (arg2 != 0)) {
    if ((arg1 == 0) && (0x7f < arg2)) {
      VTable_Routine_080D6F1C(instance);
    }
    else {
      if (arg1 < 0x40) {
        stack_val_14 = 0x40 - arg1;
        p_uint3 = &stack_val_18;
        if (0x40 - arg1 < arg2) {
          p_uint3 = &stack_val_14;
        }
        VTable_Routine_080D71AC(instance + 4,arg1,*p_uint3);
      }
      if (0x40 < arg1 + stack_val_18) {
        i_val2 = 0;
        if (0x3f < arg1) {
          i_val2 = arg1 - 0x40;
        }
        VTable_Routine_080D71AC(instance + 0x10,i_val2,((arg1 + stack_val_18) - 0x40) - i_val2);
      }
      *instance = 0;
      b_flag1 = 0;
      if (instance[5] != '\0') {
        b_flag1 = (byte)(-(uint)(byte)instance[0x11] >> 0x1f);
      }
      instance[1] = b_flag1;
    }
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D72C4 @ 0x080D72C4
// =============================================================================
void VTable_Routine_080D72C4(undefined1 *instance,uint arg1,uint arg2)

{
  byte b_flag1;
  int i_val2;
  uint *p_uint3;
  uint stack_val_18;
  uint stack_val_14;
  
  stack_val_18 = arg2;
  if ((arg1 < 0x100) && (arg2 != 0)) {
    if ((arg1 == 0) && (0xff < arg2)) {
      VTable_Routine_080D6F3C(instance);
    }
    else {
      if (arg1 < 0x80) {
        stack_val_14 = 0x80 - arg1;
        p_uint3 = &stack_val_18;
        if (0x80 - arg1 < arg2) {
          p_uint3 = &stack_val_14;
        }
        VTable_Routine_080D7240(instance + 4,arg1,*p_uint3);
      }
      if (0x80 < arg1 + stack_val_18) {
        i_val2 = 0;
        if (0x7f < arg1) {
          i_val2 = arg1 - 0x80;
        }
        VTable_Routine_080D7240(instance + 0x20,i_val2,((arg1 + stack_val_18) - 0x80) - i_val2);
      }
      *instance = 0;
      b_flag1 = 0;
      if (instance[5] != '\0') {
        b_flag1 = (byte)(-(uint)(byte)instance[0x21] >> 0x1f);
      }
      instance[1] = b_flag1;
    }
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D734C @ 0x080D734C
// =============================================================================
void VTable_Routine_080D734C(undefined1 *instance,uint arg1,uint arg2)

{
  byte b_flag1;
  int i_val2;
  uint *p_uint3;
  uint stack_val_18;
  uint stack_val_14;
  
  stack_val_18 = arg2;
  if ((arg1 <= 0x1FF) && (arg2 != 0)) {
    if ((arg1 == 0) && (0x1FF < arg2)) {
      VTable_Routine_080D6F5C(instance);
    }
    else {
      if (arg1 < 0x100) {
        stack_val_14 = 0x100 - arg1;
        p_uint3 = &stack_val_18;
        if (0x100 - arg1 < arg2) {
          p_uint3 = &stack_val_14;
        }
        VTable_Routine_080D72C4(instance + 4,arg1,*p_uint3);
      }
      if (0x100 < arg1 + stack_val_18) {
        i_val2 = 0;
        if (0xff < arg1) {
          i_val2 = arg1 + 0xFFFFFF00;
        }
        VTable_Routine_080D72C4(instance + 0x40,i_val2,((arg1 + stack_val_18) - 0x100) - i_val2);
      }
      *instance = 0;
      b_flag1 = 0;
      if (instance[5] != '\0') {
        b_flag1 = (byte)(-(uint)(byte)instance[0x41] >> 0x1f);
      }
      instance[1] = b_flag1;
    }
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D73E4 @ 0x080D73E4
// =============================================================================
u32 VTable_Routine_080D73E4(int *instance,uint arg1)

{
  uint u_val1;
  undefined1 u_val2;
  int *p_int3;
  int loop_i;
  
  if (arg1 < 6) {
    loop_i = 0;
    p_int3 = instance;
    do {
      p_int3 = p_int3 + 1;
      if ((*p_int3 != -1) && (u_val1 = HW_Routine_080077DC(p_int3,arg1), u_val1 < 0x20)) {
        *(undefined1 *)((int)instance + 1) = 0;
        u_val2 = 0;
        if ((instance[1] == -1) && (instance[2] == -1)) {
          u_val2 = 1;
        }
        *(undefined1 *)instance = u_val2;
        u_val1 = loop_i << 5 | u_val1;
        goto LAB_080d7474;
      }
      loop_i = loop_i + 1;
    } while (loop_i < 2);
  }
  else if ((arg1 == 6) && (*(char *)((int)instance + 1) != '\0')) {
    VTable_Routine_080D6E98(instance);
    u_val1 = 0;
    goto LAB_080d7474;
  }
  u_val1 = 0x40;
LAB_080d7474:
  return u_val1;
}

// =============================================================================
// Function: VTable_Routine_080D7480 @ 0x080D7480
// =============================================================================
u32 VTable_Routine_080D7480(byte *instance,uint arg1)

{
  uint u_val1;
  byte b_flag2;
  int loop_i;
  byte *pbVar4;
  
  if (arg1 < 7) {
    loop_i = 0;
    pbVar4 = instance + 4;
    do {
      if ((*pbVar4 == 0) && (u_val1 = VTable_Routine_080D73E4(pbVar4,arg1), u_val1 < 0x40)) {
        instance[1] = 0;
        b_flag2 = 0;
        if (instance[4] != 0) {
          b_flag2 = (byte)(-(uint)instance[0x10] >> 0x1f);
        }
        *instance = b_flag2;
        u_val1 = loop_i << 6 | u_val1;
        goto LAB_080d74e8;
      }
      pbVar4 = pbVar4 + 0xc;
      loop_i = loop_i + 1;
    } while (loop_i < 2);
  }
  else if ((arg1 == 7) && (instance[1] != 0)) {
    VTable_Routine_080D6EAC(instance);
    u_val1 = 0;
    goto LAB_080d74e8;
  }
  u_val1 = 0x80;
LAB_080d74e8:
  return u_val1;
}

// =============================================================================
// Function: VTable_Routine_080D74F0 @ 0x080D74F0
// =============================================================================
u32 VTable_Routine_080D74F0(byte *instance,uint arg1)

{
  uint u_val1;
  byte b_flag2;
  int loop_i;
  byte *pbVar4;
  
  if (arg1 < 8) {
    loop_i = 0;
    pbVar4 = instance + 4;
    do {
      if ((*pbVar4 == 0) && (u_val1 = VTable_Routine_080D7480(pbVar4,arg1), u_val1 < 0x80)) {
        instance[1] = 0;
        b_flag2 = 0;
        if (instance[4] != 0) {
          b_flag2 = (byte)(-(uint)instance[0x20] >> 0x1f);
        }
        *instance = b_flag2;
        u_val1 = loop_i << 7 | u_val1;
        goto LAB_080d755e;
      }
      pbVar4 = pbVar4 + 0x1c;
      loop_i = loop_i + 1;
    } while (loop_i < 2);
  }
  else if ((arg1 == 8) && (instance[1] != 0)) {
    VTable_Routine_080D6ECC(instance);
    u_val1 = 0;
    goto LAB_080d755e;
  }
  u_val1 = 0x100;
LAB_080d755e:
  return u_val1;
}

// =============================================================================
// Function: VTable_Routine_080D7568 @ 0x080D7568
// =============================================================================
u32 VTable_Routine_080D7568(byte *instance,uint arg1)

{
  uint u_val1;
  byte b_flag2;
  int loop_i;
  byte *pbVar4;
  
  if (arg1 < 9) {
    loop_i = 0;
    pbVar4 = instance + 4;
    do {
      if ((*pbVar4 == 0) && (u_val1 = VTable_Routine_080D74F0(pbVar4,arg1), u_val1 < 0x100)) {
        instance[1] = 0;
        b_flag2 = 0;
        if (instance[4] != 0) {
          b_flag2 = (byte)(-(uint)instance[0x40] >> 0x1f);
        }
        *instance = b_flag2;
        u_val1 = loop_i << 8 | u_val1;
        goto LAB_080d75d6;
      }
      pbVar4 = pbVar4 + 0x3c;
      loop_i = loop_i + 1;
    } while (loop_i < 2);
  }
  else if ((arg1 == 9) && (instance[1] != 0)) {
    VTable_Routine_080D6EEC(instance);
    u_val1 = 0;
    goto LAB_080d75d6;
  }
  u_val1 = 0x200;
LAB_080d75d6:
  return u_val1;
}

// =============================================================================
// Function: VTable_Routine_080D75E0 @ 0x080D75E0
// =============================================================================
void VTable_Routine_080D75E0(undefined1 *instance,uint arg1,uint arg2)

{
  undefined1 u_val1;
  undefined1 *p_uint2;
  
  if (arg2 < 6) {
    p_uint2 = instance + 4;
    if ((arg1 & 0x20) != 0) {
      p_uint2 = instance + 8;
    }
    HW_Routine_08007844(p_uint2);
    *instance = 0;
    u_val1 = 0;
    if ((*(int *)(instance + 4) == 0) && (*(int *)(instance + 8) == 0)) {
      u_val1 = 1;
    }
    instance[1] = u_val1;
  }
  else if (arg2 == 6) {
    VTable_Routine_080D6F0C(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D7634 @ 0x080D7634
// =============================================================================
void VTable_Routine_080D7634(undefined1 *instance,uint arg1,uint arg2)

{
  byte b_flag1;
  undefined1 *p_uint2;
  
  if (arg2 < 7) {
    p_uint2 = instance + 4;
    if ((arg1 & 0x40) != 0) {
      p_uint2 = instance + 0x10;
    }
    VTable_Routine_080D75E0(p_uint2);
    *instance = 0;
    b_flag1 = 0;
    if (instance[5] != '\0') {
      b_flag1 = (byte)(-(uint)(byte)instance[0x11] >> 0x1f);
    }
    instance[1] = b_flag1;
  }
  else if (arg2 == 7) {
    VTable_Routine_080D6F1C(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D7678 @ 0x080D7678
// =============================================================================
void VTable_Routine_080D7678(undefined1 *instance,uint arg1,uint arg2)

{
  byte b_flag1;
  undefined1 *p_uint2;
  
  if (arg2 < 8) {
    p_uint2 = instance + 4;
    if ((arg1 & 0x80) != 0) {
      p_uint2 = instance + 0x20;
    }
    VTable_Routine_080D7634(p_uint2);
    *instance = 0;
    b_flag1 = 0;
    if (instance[5] != '\0') {
      b_flag1 = (byte)(-(uint)(byte)instance[0x21] >> 0x1f);
    }
    instance[1] = b_flag1;
  }
  else if (arg2 == 8) {
    VTable_Routine_080D6F3C(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D76C0 @ 0x080D76C0
// =============================================================================
void VTable_Routine_080D76C0(undefined1 *instance,uint arg1,uint arg2)

{
  byte b_flag1;
  undefined1 *p_uint2;
  
  if (arg2 < 9) {
    p_uint2 = instance + 4;
    if ((arg1 & 0x100) != 0) {
      p_uint2 = instance + 0x40;
    }
    VTable_Routine_080D7678(p_uint2);
    *instance = 0;
    b_flag1 = 0;
    if (instance[5] != '\0') {
      b_flag1 = (byte)(-(uint)(byte)instance[0x41] >> 0x1f);
    }
    instance[1] = b_flag1;
  }
  else if (arg2 == 9) {
    VTable_Routine_080D6F5C(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D770C @ 0x080D770C
// =============================================================================
u32 VTable_Routine_080D770C(int instance,int arg1,int arg2)

{
  int *p_int1;
  
  p_int1 = (int *)(instance + arg1 * 8 + -8);
  *p_int1 = arg2;
  while (p_int1 != (int *)instance) {
    p_int1[-2] = (int)p_int1;
    p_int1 = p_int1 + -2;
  }
  return p_int1;
}

// =============================================================================
// Function: VTable_Routine_080D772C @ 0x080D772C
// =============================================================================
void VTable_Routine_080D772C(int *instance,uint arg1)

{
  int i_val1;
  int i_val2;
  undefined4 u_val3;
  int i_val4;
  int i_val5;
  int i_val6;
  int i_val7;
  
  i_val5 = *instance;
  if ((uint)(instance[3] - i_val5 >> 3) < arg1) {
    i_val6 = instance[1];
    i_val1 = i_val6 - i_val5;
    if (i_val5 == 0) {
      if (arg1 == 0) {
        i_val4 = 0;
        i_val7 = 0;
      }
      else {
        i_val7 = arg1 * 8;
        i_val4 = runtime_malloc_aligned(i_val7);
        if (i_val4 == 0) {
          i_val4 = VTable_Routine_080D3BC0(i_val7);
        }
      }
    }
    else {
      if (arg1 == 0) {
        i_val2 = 0;
        i_val7 = 0;
        i_val4 = i_val2;
      }
      else {
        i_val7 = arg1 * 8;
        i_val2 = runtime_malloc_aligned(i_val7);
        i_val4 = i_val2;
        if (i_val2 == 0) {
          i_val2 = VTable_Routine_080D3BC0(i_val7);
          i_val4 = i_val2;
        }
      }
      for (; i_val5 != i_val6; i_val5 = i_val5 + 8) {
        if (i_val2 != 0) {
          GBA_ObjAttr_Init(i_val2);
          u_val3 = HW_Routine_08007CD8(i_val2,*(undefined4 *)(i_val5 + 4));
          *(undefined4 *)(i_val2 + 4) = u_val3;
        }
        i_val2 = i_val2 + 8;
      }
      i_val6 = instance[1];
      for (i_val5 = *instance; i_val5 != i_val6; i_val5 = i_val5 + 8) {
        HW_Routine_08007C28(i_val5,*(undefined4 *)(i_val5 + 4));
        HW_Routine_080079E8(i_val5,2);
      }
      if (*instance != 0) {
        cpp_operator_delete();
      }
    }
    *instance = i_val4;
    instance[1] = (i_val1 >> 3) * 8 + i_val4;
    instance[3] = i_val7 + i_val4;
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D780C @ 0x080D780C
// =============================================================================
longlong VTable_Routine_080D780C(int instance)

{
  
  GBA_Display_FlushRegs(*(undefined4 *)(instance + 0xc));
  return 0;
}

// =============================================================================
// Function: VTable_Routine_080D781C @ 0x080D781C
// =============================================================================
longlong VTable_Routine_080D781C(int instance)

{
  
  Farm_Routine_08009864(*(undefined4 *)(instance + 0xc));
  return 0;
}

// =============================================================================
// Function: VTable_Routine_080D782C @ 0x080D782C
// =============================================================================
longlong VTable_Routine_080D782C(int instance)

{
  int i_val1;
  int *p_int2;
  
  p_int2 = *(int **)(instance + 0xc);
  i_val1 = *p_int2;
  if (i_val1 != p_int2[1]) {
    HW_Routine_08008FE4(i_val1,i_val1 + (p_int2[1] - i_val1 >> 4) * 0x10);
    for (i_val1 = *p_int2; i_val1 != p_int2[1]; i_val1 = i_val1 + 0x10) {
    }
    p_int2[1] = *p_int2;
  }
  return 0;
}

// =============================================================================
// Function: VTable_Routine_080D7868 @ 0x080D7868
// =============================================================================
void VTable_Routine_080D7868(void)

{
  
  Farm_Routine_080098AC();
  return;
}

// =============================================================================
// Function: VTable_Routine_080D7874 @ 0x080D7874
// =============================================================================
void VTable_Routine_080D7874(void)

{
  
  Farm_Routine_080098AC();
  return;
}

// =============================================================================
// Function: VTable_Routine_080D7880 @ 0x080D7880
// =============================================================================
void VTable_Routine_080D7880(void)

{
  
  Farm_Routine_080098AC();
  return;
}

// =============================================================================
// Function: VTable_Routine_080D788C @ 0x080D788C
// =============================================================================
void VTable_Routine_080D788C(undefined4 instance)

{
  ushort u_val1;
  
  u_val1 = Interrupt_WaitForVBlank(1);
  Farm_Routine_08009984(instance);
  if ((u_val1 & 1) != 0) {
    Interrupt_EnableHBlank();
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D78BC @ 0x080D78BC
// =============================================================================
void VTable_Routine_080D78BC(int instance,undefined4 arg1)

{
  
  *(undefined4 *)(instance + 8) = gRomData_080E5B90;
  Farm_Routine_0800956C(instance);
  Farm_Routine_080098DC(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080D78E0 @ 0x080D78E0
// =============================================================================
void VTable_Routine_080D78E0(void)

{
  
  _call_via_r1(*(int *)*_ASSET_BLOCK_080D78F4,
                  *(undefined4 *)(*(int *)(*(int *)*_ASSET_BLOCK_080D78F4 + 8) + 8));
  return;
}

// =============================================================================
// Function: VTable_Routine_080D7990 @ 0x080D7990
// =============================================================================
void VTable_Routine_080D7990(undefined4 instance,undefined4 arg1)

{
  ushort u_val1;
  
  u_val1 = Interrupt_WaitForVBlank(1);
  Farm_Routine_08009940(instance,arg1);
  if ((u_val1 & 1) != 0) {
    Interrupt_EnableHBlank();
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D79F8 @ 0x080D79F8
// =============================================================================
void VTable_Routine_080D79F8(undefined4 instance,undefined4 arg1)

{
  ushort u_val1;
  
  u_val1 = Interrupt_WaitForVBlank(1);
  Farm_Routine_08009968(instance,arg1);
  if ((u_val1 & 1) != 0) {
    Interrupt_EnableHBlank();
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D7A34 @ 0x080D7A34
// =============================================================================
void VTable_Routine_080D7A34(undefined4 instance,undefined4 arg1)

{
  ushort u_val1;
  
  u_val1 = Interrupt_WaitForVBlank(1);
  Farm_Routine_080099B0(instance,arg1);
  if ((u_val1 & 1) != 0) {
    Interrupt_EnableHBlank();
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D7A70 @ 0x080D7A70
// =============================================================================
void VTable_Routine_080D7A70(undefined4 instance,undefined4 arg1)

{
  ushort u_val1;
  
  u_val1 = Interrupt_WaitForVBlank(1);
  Farm_Routine_080099D4(instance,arg1);
  if ((u_val1 & 1) != 0) {
    Interrupt_EnableHBlank();
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D7AAC @ 0x080D7AAC
// =============================================================================
void VTable_Routine_080D7AAC(undefined4 *instance,uint arg1)

{
  
  instance[1] = gRomData_080E5B54;
  *gIWRAM_030410 = *instance;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D7B04 @ 0x080D7B04
// =============================================================================
void VTable_Routine_080D7B04(undefined4 *instance,uint arg1)

{
  
  instance[1] = gRomData_080E5B54;
  *gIWRAM_030410 = *instance;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D7B2C @ 0x080D7B2C
// =============================================================================
void VTable_Routine_080D7B2C(void)

{
  
  Farm_Routine_080098AC();
  return;
}

// =============================================================================
// Function: VTable_Routine_080D7B38 @ 0x080D7B38
// =============================================================================
void VTable_Routine_080D7B38(void)

{
  
  Farm_Routine_080098AC();
  return;
}

// =============================================================================
// Function: VTable_Routine_080D7B44 @ 0x080D7B44
// =============================================================================
void VTable_Routine_080D7B44(void)

{
  
  Farm_Routine_080098AC();
  return;
}

// =============================================================================
// Function: VTable_Routine_080D7B50 @ 0x080D7B50
// =============================================================================
u32 VTable_Routine_080D7B50(int instance,int arg1)

{
  undefined4 u_val1;
  
  VTable_Routine_080D7C40();
  *(byte *)(instance + 0x24) =
       *(byte *)(instance + 0x24) & 0xc0 | *(byte *)(arg1 + 0x24) & 1 |
       *(byte *)(arg1 + 0x24) & 0x3e;
  *(ushort *)(instance + 0x24) =
       (ushort)0xFFFFF83F & *(ushort *)(instance + 0x24) | *(ushort *)(arg1 + 0x24) & 0x7c0;
  *(undefined4 *)(instance + 0x28) = *(undefined4 *)(arg1 + 0x28);
  u_val1 = *(undefined4 *)(arg1 + 0x30);
  *(undefined4 *)(instance + 0x2c) = *(undefined4 *)(arg1 + 0x2c);
  *(undefined4 *)(instance + 0x30) = u_val1;
  *(byte *)(instance + 0x34) = *(byte *)(instance + 0x34) & 0xf8 | *(byte *)(arg1 + 0x34) & 7;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D7BC4 @ 0x080D7BC4
// =============================================================================
u32 VTable_Routine_080D7BC4(int instance,int arg1)

{
  undefined4 u_val1;
  
  VTable_Routine_080D7C40();
  *(byte *)(instance + 0x24) =
       *(byte *)(instance + 0x24) & 0xc0 | *(byte *)(arg1 + 0x24) & 1 |
       *(byte *)(arg1 + 0x24) & 0x3e;
  *(ushort *)(instance + 0x24) =
       (ushort)0xFFFFF83F & *(ushort *)(instance + 0x24) | *(ushort *)(arg1 + 0x24) & 0x7c0;
  *(undefined4 *)(instance + 0x28) = *(undefined4 *)(arg1 + 0x28);
  u_val1 = *(undefined4 *)(arg1 + 0x30);
  *(undefined4 *)(instance + 0x2c) = *(undefined4 *)(arg1 + 0x2c);
  *(undefined4 *)(instance + 0x30) = u_val1;
  *(byte *)(instance + 0x34) = *(byte *)(instance + 0x34) & 0xfe | *(byte *)(arg1 + 0x34) & 1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D7C40 @ 0x080D7C40
// =============================================================================
u32 VTable_Routine_080D7C40(int instance,int arg1)

{
  ushort u_val1;
  ushort u_val2;
  ushort u_val3;
  
  VTable_Routine_080D684C();
  *(undefined1 *)(instance + 0x1c) = *(undefined1 *)(arg1 + 0x1c);
  *(undefined1 *)(instance + 0x1d) = *(undefined1 *)(arg1 + 0x1d);
  u_val2 = (ushort)0xFFFFFE00;
  *(ushort *)(instance + 0x1e) =
       u_val2 & *(ushort *)(instance + 0x1e) | *(ushort *)(arg1 + 0x1e) & 0x1ff;
  u_val1 = *(ushort *)(arg1 + 0x20);
  u_val3 = (ushort)0x1FF;
  *(byte *)(instance + 0x1f) = *(byte *)(instance + 0x1f) & 1 | *(byte *)(arg1 + 0x1f) & 0xfe;
  *(ushort *)(instance + 0x20) = u_val2 & *(ushort *)(instance + 0x20) | u_val1 & u_val3 & u_val3;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D7CFC @ 0x080D7CFC
// =============================================================================
u32 VTable_Routine_080D7CFC(int *instance,int *arg1,int arg2)

{
  int i_val1;
  int i_val2;
  int *p_int3;
  int i_val4;
  int *p_int5;
  
  i_val1 = arg1[1];
  p_int5 = arg1 + 2;
  p_int3 = arg1;
  for (i_val4 = (int)arg1 + ((*arg1 * 4 + 4) - (int)p_int5) >> 2; 0 < i_val4; i_val4 = i_val4 + -1
      ) {
    p_int3 = p_int3 + 1;
    i_val2 = *p_int5;
    p_int5 = p_int5 + 1;
    *p_int3 = i_val2;
  }
  arg1[*arg1] = arg2;
  *instance = i_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D7D40 @ 0x080D7D40
// =============================================================================
u32 VTable_Routine_080D7D40(int *instance,int *arg1,int arg2)

{
  int i_val1;
  int *p_int2;
  int i_val3;
  int *p_int4;
  
  i_val1 = arg1[*arg1];
  p_int2 = arg1 + *arg1 + 1;
  p_int4 = p_int2 + -1;
  for (i_val3 = (int)p_int4 - (int)(arg1 + 1) >> 2; 0 < i_val3; i_val3 = i_val3 + -1) {
    p_int2 = p_int2 + -1;
    p_int4 = p_int4 + -1;
    *p_int2 = *p_int4;
  }
  arg1[1] = arg2;
  *instance = i_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D7D88 @ 0x080D7D88
// =============================================================================
u32 VTable_Routine_080D7D88(undefined4 instance,int *arg1,undefined4 arg2)

{
  int i_val1;
  int *p_int2;
  int i_val3;
  undefined1 temp_buf_20 [4];
  
  p_int2 = arg1 + 1;
  gba_memcpy(temp_buf_20,p_int2,2);
  i_val3 = (int)arg1 + 6;
  for (i_val1 = *arg1 * 2 + -2 >> 1; 0 < i_val1; i_val1 = i_val1 + -1) {
    gba_memcpy(p_int2,i_val3,2);
    i_val3 = i_val3 + 2;
    p_int2 = (int *)((int)p_int2 + 2);
  }
  gba_memcpy((int)arg1 + *arg1 * 2 + 2,arg2,2);
  gba_memcpy(instance,temp_buf_20,2);
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D7DF4 @ 0x080D7DF4
// =============================================================================
u32 VTable_Routine_080D7DF4(undefined4 instance,int *arg1,undefined4 arg2)

{
  int i_val1;
  int i_val2;
  int i_val3;
  undefined1 temp_buf_20 [4];
  
  gba_memcpy(temp_buf_20,(int)arg1 + *arg1 * 2 + 2,2);
  i_val1 = (int)arg1 + *arg1 * 2 + 4;
  i_val3 = i_val1 + -2;
  for (i_val2 = i_val3 - (int)(arg1 + 1) >> 1; 0 < i_val2; i_val2 = i_val2 + -1) {
    i_val1 = i_val1 + -2;
    i_val3 = i_val3 + -2;
    gba_memcpy(i_val1,i_val3,2);
  }
  gba_memcpy(arg1 + 1,arg2,2);
  gba_memcpy(instance,temp_buf_20,2);
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D7E64 @ 0x080D7E64
// =============================================================================
void VTable_Routine_080D7E64(int *instance,uint arg1)

{
  int *p_int1;
  int *p_int2;
  
  for (p_int1 = instance + 0x57; p_int1 != instance + 0x56 + instance[0x56] * 2 + 1;
      p_int1 = p_int1 + 2) {
  }
  p_int2 = instance + 1;
  for (p_int1 = instance + 6; p_int1 != instance + instance[5] * 2 + 6; p_int1 = p_int1 + 2) {
  }
  for (; p_int2 != instance + *instance * 2 + 1; p_int2 = p_int2 + 2) {
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D7ECC @ 0x080D7ECC
// =============================================================================
u32 VTable_Routine_080D7ECC(ushort *instance,int arg1,uint *arg2)

{
  int i_val1;
  int i_val2;
  
  i_val1 = arg1 - (int)instance >> 3;
  if (0 < i_val1) {
    do {
      i_val2 = i_val1 >> 1;
      if ((uint)instance[i_val2 * 4] <= *arg2) {
        instance = instance + i_val2 * 4 + 4;
        i_val2 = (i_val1 - i_val2) + -1;
      }
      i_val1 = i_val2;
    } while (0 < i_val2);
  }
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080D7F08 @ 0x080D7F08
// =============================================================================
void VTable_Routine_080D7F08(int instance)

{
  int i_val1;
  uint u_val2;
  
  u_val2 = 1;
  do {
    i_val1 = _call_via_r2(*(int **)(instance + 0xa8),u_val2,
                            *(undefined4 *)(**(int **)(instance + 0xa8) + 0x40));
    if (i_val1 != 0) {
      _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 0x14) + 0x3c));
    }
    u_val2 = u_val2 + 1;
  } while (u_val2 < 0x24);
  return;
}

// =============================================================================
// Function: VTable_Routine_080D7F3C @ 0x080D7F3C
// =============================================================================
void VTable_Routine_080D7F3C(int instance)

{
  
  _call_via_r1(*(int **)(instance + 0xa8),*(undefined4 *)(**(int **)(instance + 0xa8) + 0x124));
  *(undefined4 *)(instance + 0x9c) = 2;
  return;
}

// =============================================================================
// Function: VTable_Routine_080D7F60 @ 0x080D7F60
// =============================================================================
void VTable_Routine_080D7F60(int instance)

{
  
  if (*(int *)(instance + 0xac) != 0) {
    Animal_Routine_08050E8C();
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D7F74 @ 0x080D7F74
// =============================================================================
void VTable_Routine_080D7F74(int instance)

{
  
  if (*(int *)(instance + 0xac) != 0) {
    Animal_Routine_08050E5C();
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D7F88 @ 0x080D7F88
// =============================================================================
void VTable_Routine_080D7F88(int instance)

{
  
  if (*(int *)(instance + 0xac) != 0) {
    Animal_Routine_08050E74();
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080D7F9C @ 0x080D7F9C
// =============================================================================
undefined4
VTable_Routine_080D7F9C(int instance,int arg1,int arg2,uint arg3,uint arg_5,undefined1 arg_6)

{
  ushort u_val1;
  ushort u_val2;
  ushort u_val3;
  int i_val4;
  undefined2 stack_val_38;
  undefined2 stack_val_36;
  ushort stack_val_34;
  undefined1 stack_val_32;
  undefined2 stack_val_30;
  undefined2 stack_val_2e;
  ushort stack_val_2c;
  int stack_val_28;
  int stack_val_24;
  
  stack_val_28 = instance;
  stack_val_24 = arg1;
  if (arg1 < 0x4a) {
    i_val4 = _call_via_r2(*(int **)(instance + 0xa8),arg1,
                            *(undefined4 *)(**(int **)(instance + 0xa8) + 0x40));
    if (i_val4 != 0) {
      u_val3 = (ushort)0x3FF;
      u_val2 = (ushort)0xFFFFFC00;
      u_val1 = u_val2 & stack_val_30 | (ushort)arg2 & u_val3;
      stack_val_30._1_1_ = (byte)(u_val1 >> 8);
      stack_val_30 = CONCAT11(stack_val_30._1_1_ & 3 | (byte)((arg3 & 0x3f) << 2),(char)u_val1);
      u_val1 = u_val2 & stack_val_2e | (ushort)((arg3 & 0xffff) >> 6) & u_val3;
      stack_val_2e._1_1_ = (byte)(u_val1 >> 8);
      stack_val_2e = CONCAT11(stack_val_2e._1_1_ & 3 | (byte)((arg_5 & 0x3f) << 2),(char)u_val1);
      stack_val_2c = u_val2 & stack_val_2c | (ushort)((arg_5 & 0xffff) >> 6) & u_val3;
      gba_memcpy(&stack_val_38,&stack_val_30,6);
      stack_val_32 = arg_6;
      Entity_Routine_0803211C(i_val4,&stack_val_38);
      _call_via_r1(i_val4,*(undefined4 *)(*(int *)(i_val4 + 0x14) + 0x20));
    }
  }
  else {
    i_val4 = _call_via_r2(*(int **)(instance + 0xa8),arg1,
                            *(undefined4 *)(**(int **)(instance + 0xa8) + 0x40));
    if (i_val4 != 0) {
      u_val3 = (ushort)0x3FF;
      u_val2 = (ushort)0xFFFFFC00;
      u_val1 = u_val2 & stack_val_38 | (ushort)arg2 & u_val3;
      stack_val_38._1_1_ = (byte)(u_val1 >> 8);
      stack_val_38 = CONCAT11(stack_val_38._1_1_ & 3 | (byte)((arg3 & 0x3f) << 2),(char)u_val1);
      u_val1 = u_val2 & stack_val_36 | (ushort)((arg3 & 0xffff) >> 6) & u_val3;
      stack_val_36._1_1_ = (byte)(u_val1 >> 8);
      stack_val_36 = CONCAT11(stack_val_36._1_1_ & 3 | (byte)((arg_5 & 0x3f) << 2),(char)u_val1);
      stack_val_34 = u_val2 & stack_val_34 | (ushort)((arg_5 & 0xffff) >> 6) & u_val3;
      Farmer_Routine_0801FE78(i_val4,stack_val_38 & 0x3ff,
                    (int)(short)((ushort)((stack_val_36 & 0x3FF) << 6) |
                                (ushort)(arg3 & 0x3f)),
                    (int)(short)((ushort)((stack_val_34 & 0x3FF) << 6) |
                                (ushort)(arg_5 & 0x3f)));
      _call_via_r1(i_val4,*(undefined4 *)(*(int *)(i_val4 + 0x14) + 0x20));
    }
  }
  if (stack_val_24 == 0) {
    if (arg2 == 0x19) {
      NPC_Routine_080A0A90(*(int *)(stack_val_28 + 0x8c) + 0x1CD4);
    }
    i_val4 = 0;
    if (arg2 - 0x35U < 0xff) {
      i_val4 = arg2 + -0x34;
    }
    else if ((uint)(0xFFFFFECB + arg2) < 0xff) {
      i_val4 = 0xFFFFFECC + arg2;
    }
    if (0 < i_val4) {
      Farmer_Routine_0800EECC(*(int *)(stack_val_28 + 0x8c) + 0x1BD8);
    }
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DB0EC @ 0x080DB0EC
// =============================================================================
void VTable_Routine_080DB0EC(int *instance,uint arg1)

{
  int i_val1;
  int *p_int2;
  
  instance[0x3d] = gRomData_080E5C08;
  CppRuntime_FreeMemory(instance[0x3c]);
  if (instance[0x34] != 0) {
    cpp_operator_delete();
  }
  i_val1 = instance[0x2e];
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 4) + 8));
  }
  i_val1 = instance[0x2d];
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 4) + 8));
  }
  p_int2 = (int *)instance[0x2c];
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  if (instance[0x2b] != 0) {
    Animal_Routine_08050D0C(instance[0x2b],3);
  }
  p_int2 = (int *)instance[0x2a];
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = (int *)instance[0x29];
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  if (instance[0x28] != 0) {
    Fade_Deinit(instance[0x28],3);
  }
  Farm_Routine_080098DC(instance + 0x1b,2);
  HW_Routine_08008A68(instance + 0x1a,2);
  for (i_val1 = *instance; i_val1 != instance[1]; i_val1 = i_val1 + 0x10) {
  }
  if (*instance != 0) {
    cpp_operator_delete();
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DB1E4 @ 0x080DB1E4
// =============================================================================
u32 VTable_Routine_080DB1E4(undefined4 *instance,int arg1)

{
  int pos_y;
  undefined4 u_val2;
  undefined4 temp_buf_20 [3];
  
  pos_y = *(int *)(arg1 + 0xc);
  temp_buf_20[0] = *(undefined4 *)(arg1 + 8);
  *(undefined4 *)(arg1 + 8) = 0;
  u_val2 = CppRuntime_OperatorNewArray(8);
  u_val2 = Animal_Routine_0807865C(u_val2,*(undefined4 *)(arg1 + 4),temp_buf_20,pos_y == 2);
  *instance = u_val2;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DB238 @ 0x080DB238
// =============================================================================
u32 VTable_Routine_080DB238(undefined4 *instance,undefined4 *arg1)

{
  int i_val1;
  undefined4 u_val2;
  undefined4 *p_uint3;
  undefined4 stack_val_34;
  uint stack_val_30;
  undefined4 stack_val_2c;
  undefined4 stack_val_28;
  uint stack_val_24;
  undefined4 stack_val_20;
  
  stack_val_34 = 0x2a;
  i_val1 = arg1[4];
  if (i_val1 == 1) {
    stack_val_34 = 5;
  }
  else {
    p_uint3 = arg1;
    if (1 < i_val1) {
      if (i_val1 == 2) {
        stack_val_30 = CONCAT31(stack_val_30._1_3_,*(char *)(arg1 + 1));
        p_uint3 = &stack_val_34;
        if (*(char *)(arg1 + 1) != '\0') {
          stack_val_30 = stack_val_30 & 0xFF0000FF | (*(ushort *)((int)arg1 + 6) & 0x3ff) << 8;
          stack_val_2c = CONCAT22((short)((uint)arg1[2] >> 10),
                               (ushort)((*(ushort *)(arg1 + 2) & 0x3FF) << 6) |
                               (ushort)(*(byte *)((int)arg1 + 7) >> 2));
          p_uint3 = &stack_val_34;
        }
      }
      goto LAB_080db2ae;
    }
    if (i_val1 != 0) goto LAB_080db2ae;
    stack_val_34 = 1;
  }
  stack_val_30 = stack_val_24;
  stack_val_2c = stack_val_20;
  p_uint3 = &stack_val_28;
  stack_val_28 = stack_val_34;
LAB_080db2ae:
  u_val2 = CppRuntime_OperatorNewArray(8,p_uint3);
  u_val2 = Farmer_Routine_08011DC4(u_val2,arg1[3],&stack_val_34);
  *instance = u_val2;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DB2EC @ 0x080DB2EC
// =============================================================================
void VTable_Routine_080DB2EC(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 8);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DB314 @ 0x080DB314
// =============================================================================
void VTable_Routine_080DB314(void)

{
  
  Scene_Destructor();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DB320 @ 0x080DB320
// =============================================================================
u32 VTable_Routine_080DB320(undefined4 *instance,int arg1)

{
  undefined4 *p_uint1;
  undefined4 u_val2;
  undefined4 u_val3;
  
  p_uint1 = (undefined4 *)CppRuntime_OperatorNewArray(0xc);
  u_val3 = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val2 = *(undefined4 *)(arg1 + 8);
  *p_uint1 = gRomData_080E5E84;
  p_uint1[1] = u_val3;
  p_uint1[2] = u_val2;
  *instance = p_uint1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DB36C @ 0x080DB36C
// =============================================================================
void VTable_Routine_080DB36C(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DB394 @ 0x080DB394
// =============================================================================
u32 VTable_Routine_080DB394(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_0805FCD0(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8));
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DB3DC @ 0x080DB3DC
// =============================================================================
void VTable_Routine_080DB3DC(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DB404 @ 0x080DB404
// =============================================================================
u32 VTable_Routine_080DB404(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(8);
  u_val1 = Animal_Routine_0806D8C8(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8),*(undefined4 *)(arg1 + 0xc)
                       );
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DB44C @ 0x080DB44C
// =============================================================================
void VTable_Routine_080DB44C(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DB474 @ 0x080DB474
// =============================================================================
u32 VTable_Routine_080DB474(undefined4 *instance,int arg1)

{
  undefined1 u_val1;
  undefined4 *p_uint2;
  undefined4 u_val3;
  undefined4 u_val4;
  undefined4 u_val5;
  
  p_uint2 = (undefined4 *)CppRuntime_OperatorNewArray(0x14);
  u_val5 = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = *(undefined1 *)(arg1 + 0x10);
  u_val3 = *(undefined4 *)(arg1 + 8);
  u_val4 = *(undefined4 *)(arg1 + 0xc);
  *p_uint2 = gRomData_080E82C8;
  p_uint2[1] = u_val5;
  p_uint2[2] = u_val3;
  p_uint2[3] = u_val4;
  *(undefined1 *)(p_uint2 + 4) = u_val1;
  *instance = p_uint2;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DB4C8 @ 0x080DB4C8
// =============================================================================
void VTable_Routine_080DB4C8(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DB4F0 @ 0x080DB4F0
// =============================================================================
u32 VTable_Routine_080DB4F0(undefined4 *instance,int arg1)

{
  undefined4 *p_uint1;
  undefined4 u_val2;
  undefined4 u_val3;
  undefined4 u_val4;
  
  p_uint1 = (undefined4 *)CppRuntime_OperatorNewArray(0x10);
  u_val4 = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val2 = *(undefined4 *)(arg1 + 8);
  u_val3 = *(undefined4 *)(arg1 + 0xc);
  *p_uint1 = gRomData_080E8288;
  p_uint1[1] = u_val4;
  p_uint1[2] = u_val2;
  p_uint1[3] = u_val3;
  *instance = p_uint1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DB540 @ 0x080DB540
// =============================================================================
void VTable_Routine_080DB540(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DB568 @ 0x080DB568
// =============================================================================
u32 VTable_Routine_080DB568(undefined4 *instance,int arg1)

{
  undefined4 *p_uint1;
  undefined4 u_val2;
  undefined4 u_val3;
  undefined4 u_val4;
  
  p_uint1 = (undefined4 *)CppRuntime_OperatorNewArray(0x10);
  u_val4 = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val2 = *(undefined4 *)(arg1 + 8);
  u_val3 = *(undefined4 *)(arg1 + 0xc);
  *p_uint1 = gRomData_080E8298;
  p_uint1[1] = u_val4;
  p_uint1[2] = u_val2;
  p_uint1[3] = u_val3;
  *instance = p_uint1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DB5B8 @ 0x080DB5B8
// =============================================================================
void VTable_Routine_080DB5B8(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DB5E0 @ 0x080DB5E0
// =============================================================================
u32 VTable_Routine_080DB5E0(undefined4 *instance,int arg1)

{
  undefined4 *p_uint1;
  undefined4 u_val2;
  undefined4 u_val3;
  undefined4 u_val4;
  
  p_uint1 = (undefined4 *)CppRuntime_OperatorNewArray(0x10);
  u_val4 = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val2 = *(undefined4 *)(arg1 + 8);
  u_val3 = *(undefined4 *)(arg1 + 0xc);
  *p_uint1 = gRomData_080E82A8;
  p_uint1[1] = u_val4;
  p_uint1[2] = u_val2;
  p_uint1[3] = u_val3;
  *instance = p_uint1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DB630 @ 0x080DB630
// =============================================================================
void VTable_Routine_080DB630(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DB658 @ 0x080DB658
// =============================================================================
u32 VTable_Routine_080DB658(undefined4 *instance,int arg1)

{
  undefined4 *p_uint1;
  undefined4 u_val2;
  undefined4 u_val3;
  
  p_uint1 = (undefined4 *)CppRuntime_OperatorNewArray(0xc);
  u_val3 = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val2 = *(undefined4 *)(arg1 + 8);
  *p_uint1 = gRomData_080E82B8;
  p_uint1[1] = u_val3;
  p_uint1[2] = u_val2;
  *instance = p_uint1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DB6A4 @ 0x080DB6A4
// =============================================================================
void VTable_Routine_080DB6A4(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DB6CC @ 0x080DB6CC
// =============================================================================
u32 VTable_Routine_080DB6CC(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = NPC_Routine_080A3744(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8));
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DB714 @ 0x080DB714
// =============================================================================
void VTable_Routine_080DB714(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DB73C @ 0x080DB73C
// =============================================================================
u32 VTable_Routine_080DB73C(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_0808AB38(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8));
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DB784 @ 0x080DB784
// =============================================================================
void VTable_Routine_080DB784(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DB7AC @ 0x080DB7AC
// =============================================================================
u32 VTable_Routine_080DB7AC(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_0808ECD8(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8));
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DB7F4 @ 0x080DB7F4
// =============================================================================
void VTable_Routine_080DB7F4(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DB81C @ 0x080DB81C
// =============================================================================
u32 VTable_Routine_080DB81C(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_08090E54(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8));
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DB864 @ 0x080DB864
// =============================================================================
void VTable_Routine_080DB864(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DB88C @ 0x080DB88C
// =============================================================================
u32 VTable_Routine_080DB88C(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_0808C56C(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8));
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DB8D4 @ 0x080DB8D4
// =============================================================================
void VTable_Routine_080DB8D4(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DB8FC @ 0x080DB8FC
// =============================================================================
u32 VTable_Routine_080DB8FC(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_0805218C(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8));
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DB944 @ 0x080DB944
// =============================================================================
void VTable_Routine_080DB944(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DB96C @ 0x080DB96C
// =============================================================================
u32 VTable_Routine_080DB96C(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_08057DD8(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8),*(undefined1 *)(arg1 + 0xc)
                       );
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DB9B4 @ 0x080DB9B4
// =============================================================================
void VTable_Routine_080DB9B4(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DB9DC @ 0x080DB9DC
// =============================================================================
u32 VTable_Routine_080DB9DC(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_0805E624(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8));
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DBA24 @ 0x080DBA24
// =============================================================================
void VTable_Routine_080DBA24(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DBA4C @ 0x080DBA4C
// =============================================================================
u32 VTable_Routine_080DBA4C(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_0805CEB8(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8),*(undefined1 *)(arg1 + 0xc)
                       );
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DBA94 @ 0x080DBA94
// =============================================================================
void VTable_Routine_080DBA94(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DBABC @ 0x080DBABC
// =============================================================================
u32 VTable_Routine_080DBABC(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_0809A4D4(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8),*(undefined1 *)(arg1 + 0xc)
                       );
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DBB04 @ 0x080DBB04
// =============================================================================
void VTable_Routine_080DBB04(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DBB2C @ 0x080DBB2C
// =============================================================================
u32 VTable_Routine_080DBB2C(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_0807B038(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8),*(undefined4 *)(arg1 + 0xc)
                       );
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DBB74 @ 0x080DBB74
// =============================================================================
void VTable_Routine_080DBB74(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DBB9C @ 0x080DBB9C
// =============================================================================
u32 VTable_Routine_080DBB9C(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_08081A40(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8));
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DBBE4 @ 0x080DBBE4
// =============================================================================
void VTable_Routine_080DBBE4(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DBC0C @ 0x080DBC0C
// =============================================================================
u32 VTable_Routine_080DBC0C(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 temp_buf_18 [3];
  
  temp_buf_18[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_08077C40(u_val1,temp_buf_18);
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DBC50 @ 0x080DBC50
// =============================================================================
void VTable_Routine_080DBC50(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DBC78 @ 0x080DBC78
// =============================================================================
u32 VTable_Routine_080DBC78(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_080931B0(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8));
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DBCC0 @ 0x080DBCC0
// =============================================================================
void VTable_Routine_080DBCC0(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DBCE8 @ 0x080DBCE8
// =============================================================================
u32 VTable_Routine_080DBCE8(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0x14);
  u_val1 = Animal_Routine_08088168(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8),*(undefined4 *)(arg1 + 0xc)
                       );
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DBD30 @ 0x080DBD30
// =============================================================================
void VTable_Routine_080DBD30(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DBD58 @ 0x080DBD58
// =============================================================================
u32 VTable_Routine_080DBD58(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0x14);
  u_val1 = Animal_Routine_0807D070(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8),*(undefined4 *)(arg1 + 0xc)
                       );
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DBDA0 @ 0x080DBDA0
// =============================================================================
void VTable_Routine_080DBDA0(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DBDC8 @ 0x080DBDC8
// =============================================================================
u32 VTable_Routine_080DBDC8(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_08080D94(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8));
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DBE10 @ 0x080DBE10
// =============================================================================
void VTable_Routine_080DBE10(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DBE38 @ 0x080DBE38
// =============================================================================
u32 VTable_Routine_080DBE38(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_0807F580(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8));
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DBE80 @ 0x080DBE80
// =============================================================================
void VTable_Routine_080DBE80(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DBEA8 @ 0x080DBEA8
// =============================================================================
u32 VTable_Routine_080DBEA8(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_08082114(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8));
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DBEF0 @ 0x080DBEF0
// =============================================================================
void VTable_Routine_080DBEF0(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DBF18 @ 0x080DBF18
// =============================================================================
u32 VTable_Routine_080DBF18(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_0808045C(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8));
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DBF60 @ 0x080DBF60
// =============================================================================
void VTable_Routine_080DBF60(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DBF88 @ 0x080DBF88
// =============================================================================
u32 VTable_Routine_080DBF88(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_080854F4(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8));
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DBFD0 @ 0x080DBFD0
// =============================================================================
void VTable_Routine_080DBFD0(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DBFF8 @ 0x080DBFF8
// =============================================================================
u32 VTable_Routine_080DBFF8(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_0807EE14(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8));
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DC040 @ 0x080DC040
// =============================================================================
void VTable_Routine_080DC040(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC068 @ 0x080DC068
// =============================================================================
u32 VTable_Routine_080DC068(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 temp_buf_20 [3];
  
  temp_buf_20[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0x20);
  u_val1 = Animal_Routine_08083A7C(u_val1,temp_buf_20,*(undefined4 *)(arg1 + 8),
                        *(undefined1 *)(arg1 + 0x1c),*(undefined4 *)(arg1 + 0xc),
                        *(undefined4 *)(arg1 + 0x10),*(undefined4 *)(arg1 + 0x14),
                        *(undefined4 *)(arg1 + 0x18));
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DC0C0 @ 0x080DC0C0
// =============================================================================
void VTable_Routine_080DC0C0(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC0E8 @ 0x080DC0E8
// =============================================================================
u32 VTable_Routine_080DC0E8(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_0807E438(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8),*(undefined4 *)(arg1 + 0xc)
                       );
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DC130 @ 0x080DC130
// =============================================================================
void VTable_Routine_080DC130(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC158 @ 0x080DC158
// =============================================================================
u32 VTable_Routine_080DC158(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_0807DD38(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8));
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DC1A0 @ 0x080DC1A0
// =============================================================================
void VTable_Routine_080DC1A0(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC1C8 @ 0x080DC1C8
// =============================================================================
void VTable_Routine_080DC1C8(void)

{
  
  Scene_Destructor();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC1D4 @ 0x080DC1D4
// =============================================================================
u32 VTable_Routine_080DC1D4(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 8);
  *(undefined4 *)(arg1 + 8) = 0;
  u_val1 = CppRuntime_OperatorNewArray(8);
  u_val1 = SaveLoadScreen_Deinit(u_val1,*(undefined4 *)(arg1 + 4),stack_buf_1c);
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DC21C @ 0x080DC21C
// =============================================================================
void VTable_Routine_080DC21C(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 8);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC244 @ 0x080DC244
// =============================================================================
u32 VTable_Routine_080DC244(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(8);
  u_val1 = Farmer_Routine_08011DC4(u_val1,*(undefined4 *)(arg1 + 4),arg1 + 8);
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DC288 @ 0x080DC288
// =============================================================================
void VTable_Routine_080DC288(void)

{
  
  Scene_Destructor();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC294 @ 0x080DC294
// =============================================================================
void VTable_Routine_080DC294(undefined4 instance)

{
  
  ScriptEngine_Routine_0803F878(*gIWRAM_PedometerStepCount + 8);
  VTable_Routine_080D7F3C(instance);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC2B4 @ 0x080DC2B4
// =============================================================================
void VTable_Routine_080DC2B4(int instance,ushort arg1,uint arg2,uint arg3)

{
  ushort u_val1;
  ushort u_val2;
  ushort u_val3;
  undefined2 stack_val_2c;
  undefined2 stack_val_2a;
  ushort stack_val_28;
  int stack_val_24;
  
  u_val3 = (ushort)0x3FF;
  u_val2 = (ushort)0xFFFFFC00;
  u_val1 = u_val2 & stack_val_2c | arg1 & u_val3;
  stack_val_2c._1_1_ = (byte)(u_val1 >> 8);
  stack_val_2c = CONCAT11(stack_val_2c._1_1_ & 3 | (byte)((arg2 & 0x3f) << 2),(char)u_val1);
  u_val1 = u_val2 & stack_val_2a | (ushort)((arg2 & 0xffff) >> 6) & u_val3;
  stack_val_2a._1_1_ = (byte)(u_val1 >> 8);
  stack_val_2a = CONCAT11(stack_val_2a._1_1_ & 3 | (byte)((arg3 & 0x3f) << 2),(char)u_val1);
  stack_val_28 = u_val2 & stack_val_28 | (ushort)((arg3 & 0xffff) >> 6) & u_val3;
  stack_val_24 = instance;
  _call_via_r3(*(int **)(instance + 0xa8),&stack_val_2c,1,
                  *(undefined4 *)(**(int **)(instance + 0xa8) + 0xb4));
  VTable_Routine_080D7F08(stack_val_24);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC360 @ 0x080DC360
// =============================================================================
undefined4
VTable_Routine_080DC360(int instance,undefined4 arg1,undefined4 arg2,undefined4 arg3,
             undefined4 arg_5)

{
  undefined4 u_val1;
  
  u_val1 = _call_via_r1(*(int **)(instance + 0xa8),
                          *(undefined4 *)(**(int **)(instance + 0xa8) + 0x14));
  VTable_Routine_080D7F9C(instance,arg1,u_val1,arg2,arg3,arg_5);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC3A0 @ 0x080DC3A0
// =============================================================================
u32 VTable_Routine_080DC3A0(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  int i_val2;
  undefined1 temp_buf_30 [12];
  int *piStack_24;
  int **ppiStack_20;
  undefined4 stack_val_1c;
  
  piStack_24 = (int *)0x0;
  Animal_Routine_08093A58(temp_buf_30,&piStack_24,*(undefined4 *)(arg1 + 8));
  Animal_Routine_08093AD4(&piStack_24,temp_buf_30);
  if (piStack_24 != (int *)0x0) {
    _call_via_r2(piStack_24,3,*(undefined4 *)(*piStack_24 + 8));
  }
  i_val2 = *(int *)(arg1 + 4);
  u_val1 = Animal_Routine_08093AC8(temp_buf_30);
  *(undefined4 *)(i_val2 + 0xc) = u_val1;
  stack_val_1c = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  piStack_24 = (int *)0x0;
  *instance = stack_val_1c;
  ppiStack_20 = &piStack_24;
  Animal_Routine_08093A88(temp_buf_30,2);
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DC404 @ 0x080DC404
// =============================================================================
void VTable_Routine_080DC404(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  SramProxy_VerifyBufferParity(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC42C @ 0x080DC42C
// =============================================================================
u32 VTable_Routine_080DC42C(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 8);
  *(undefined4 *)(arg1 + 8) = 0;
  u_val1 = CppRuntime_OperatorNewArray(8);
  u_val1 = Animal_Routine_080701BC(u_val1,*(undefined4 *)(arg1 + 4),stack_buf_1c);
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DC474 @ 0x080DC474
// =============================================================================
void VTable_Routine_080DC474(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 8);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC49C @ 0x080DC49C
// =============================================================================
u32 VTable_Routine_080DC49C(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_080755EC(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8));
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DC4E4 @ 0x080DC4E4
// =============================================================================
void VTable_Routine_080DC4E4(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC50C @ 0x080DC50C
// =============================================================================
u32 VTable_Routine_080DC50C(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_08069E14(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8),*(undefined1 *)(arg1 + 0xc)
                       );
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DC554 @ 0x080DC554
// =============================================================================
void VTable_Routine_080DC554(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC57C @ 0x080DC57C
// =============================================================================
void VTable_Routine_080DC57C(undefined4 instance,int arg1)

{
  int i_val1;
  
  while (i_val1 = arg1, i_val1 != 0) {
    VTable_Routine_080DC57C(instance,*(undefined4 *)(i_val1 + 0xc));
    arg1 = *(int *)(i_val1 + 8);
    if (i_val1 != 0) {
      cpp_operator_delete(i_val1);
    }
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC5A8 @ 0x080DC5A8
// =============================================================================
void VTable_Routine_080DC5A8(void)

{
  
  NPC_Routine_080A47B4();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC5B4 @ 0x080DC5B4
// =============================================================================
void VTable_Routine_080DC5B4(undefined4 *instance,uint arg1)

{
  
  *instance = gRomData_080E61A0;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC5D4 @ 0x080DC5D4
// =============================================================================
void VTable_Routine_080DC5D4(undefined4 *instance,uint arg1)

{
  
  *instance = gRomData_080E61A0;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC5F4 @ 0x080DC5F4
// =============================================================================
void VTable_Routine_080DC5F4(int instance,uint arg1)

{
  
  NPC_Routine_080A47B4(instance + 0x48,2);
  NPC_Routine_080A47B4(instance + 8,2);
  *(undefined4 *)(instance + 4) = gRomData_080E65E0;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC628 @ 0x080DC628
// =============================================================================
void VTable_Routine_080DC628(int instance,uint arg1)

{
  int i_val1;
  
  *(undefined4 *)(instance + 0x14) = gRomData_080E6250;
  i_val1 = *(int *)(instance + 0x10);
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 4) + 8));
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC65C @ 0x080DC65C
// =============================================================================
void VTable_Routine_080DC65C(int instance,uint arg1)

{
  
  *(undefined4 *)(instance + 4) = gRomData_080E65E0;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC67C @ 0x080DC67C
// =============================================================================
u32 VTable_Routine_080DC67C(char *instance,char *arg1,char *arg2)

{
  char c_char1;
  char *p_char2;
  int i_val3;
  
  i_val3 = (int)arg1 - (int)instance >> 2;
  if (0 < i_val3) {
    c_char1 = *arg2;
    do {
      p_char2 = instance;
      if ((((*instance == c_char1) || (p_char2 = instance + 1, instance[1] == c_char1)) ||
          (p_char2 = instance + 2, instance[2] == c_char1)) ||
         (p_char2 = instance + 3, instance[3] == c_char1)) goto LAB_080dc6e2;
      instance = instance + 4;
      i_val3 = i_val3 + -1;
    } while (0 < i_val3);
  }
  i_val3 = (int)arg1 - (int)instance;
  if (i_val3 == 1) {
LAB_080dc6da:
    p_char2 = instance;
    if (*instance != *arg2) goto LAB_080dc6e8;
  }
  else {
    if (i_val3 < 2) goto LAB_080dc6e8;
    if (i_val3 == 2) {
LAB_080dc6d0:
      p_char2 = instance;
      if (*instance != *arg2) {
        instance = instance + 1;
        goto LAB_080dc6da;
      }
    }
    else {
      if (i_val3 != 3) goto LAB_080dc6e8;
      p_char2 = instance;
      if (*instance != *arg2) {
        instance = instance + 1;
        goto LAB_080dc6d0;
      }
    }
  }
LAB_080dc6e2:
  arg1 = p_char2;
LAB_080dc6e8:
  return arg1;
}

// =============================================================================
// Function: VTable_Routine_080DC6F0 @ 0x080DC6F0
// =============================================================================
void VTable_Routine_080DC6F0(int instance,uint arg1)

{
  int i_val1;
  
  *(undefined4 *)(instance + 0x14) = gRomData_080E6250;
  i_val1 = *(int *)(instance + 0x10);
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 4) + 8));
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC724 @ 0x080DC724
// =============================================================================
void VTable_Routine_080DC724(int instance,uint arg1)

{
  
  NPC_Routine_080A47B4(instance + 0x8c,2);
  NPC_Routine_080A47B4(instance + 0x48,2);
  NPC_Routine_080A47B4(instance + 8,2);
  *(undefined4 *)(instance + 4) = gRomData_080E65E0;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC764 @ 0x080DC764
// =============================================================================
void VTable_Routine_080DC764(int instance,uint arg1)

{
  int i_val1;
  int *p_int2;
  
  i_val1 = *(int *)(instance + 0xcc);
  for (p_int2 = (int *)(instance + 0xd0); p_int2 != (int *)(instance + 0xcc) + i_val1 * 0x12 + 1;
      p_int2 = p_int2 + 0x12) {
    NPC_Routine_080A47B4(p_int2 + 1,2);
  }
  NPC_Routine_080A47B4(instance + 0x8c,2);
  NPC_Routine_080A47B4(instance + 0x48,2);
  NPC_Routine_080A47B4(instance + 8,2);
  *(undefined4 *)(instance + 4) = gRomData_080E65E0;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC7CC @ 0x080DC7CC
// =============================================================================
void VTable_Routine_080DC7CC(int instance,uint arg1)

{
  int i_val1;
  
  *(undefined4 *)(instance + 0x14) = gRomData_080E6250;
  i_val1 = *(int *)(instance + 0x10);
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 4) + 8));
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC800 @ 0x080DC800
// =============================================================================
void VTable_Routine_080DC800(int instance,uint arg1)

{
  int i_val1;
  
  *(undefined4 *)(instance + 0x14) = gRomData_080E6250;
  i_val1 = *(int *)(instance + 0x10);
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 4) + 8));
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC834 @ 0x080DC834
// =============================================================================
void VTable_Routine_080DC834(void)

{
  
  NPC_Routine_080A47B4();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC840 @ 0x080DC840
// =============================================================================
u32 VTable_Routine_080DC840(undefined4 *instance,undefined4 *arg1)

{
  undefined4 u_val1;
  undefined4 *p_uint2;
  int i_val3;
  
  instance[9] = gRomData_080E82D8;
  *instance = *arg1;
  GBA_ObjAttr_Init(instance + 1);
  u_val1 = HW_Routine_08007CD8(instance + 1,arg1[2]);
  instance[2] = u_val1;
  *(undefined2 *)(instance + 3) = *(undefined2 *)(arg1 + 3);
  instance[4] = 0;
  i_val3 = arg1[4];
  arg1 = arg1 + 5;
  p_uint2 = (undefined4 *)((int)arg1 + i_val3);
  if (p_uint2 != arg1) {
    gba_memmove(instance + 5,arg1,(int)p_uint2 - (int)arg1);
  }
  instance[4] = i_val3;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DC890 @ 0x080DC890
// =============================================================================
void VTable_Routine_080DC890(int instance,uint arg1)

{
  
  NPC_Routine_080A47B4(instance + 0x48,2);
  NPC_Routine_080A47B4(instance + 8,2);
  *(undefined4 *)(instance + 4) = gRomData_080E65E0;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC8C4 @ 0x080DC8C4
// =============================================================================
void VTable_Routine_080DC8C4(int instance,uint arg1)

{
  int i_val1;
  
  *(undefined4 *)(instance + 0x14) = gRomData_080E6250;
  i_val1 = *(int *)(instance + 0x10);
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 4) + 8));
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC8F8 @ 0x080DC8F8
// =============================================================================
void VTable_Routine_080DC8F8(int instance,uint arg1)

{
  
  NPC_Routine_080A47B4(instance + 0x48,2);
  NPC_Routine_080A47B4(instance + 8,2);
  *(undefined4 *)(instance + 4) = gRomData_080E65E0;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC92C @ 0x080DC92C
// =============================================================================
void VTable_Routine_080DC92C(int instance,uint arg1)

{
  
  NPC_Routine_080A47B4(instance + 0x8c,2);
  NPC_Routine_080A47B4(instance + 0x48,2);
  NPC_Routine_080A47B4(instance + 8,2);
  *(undefined4 *)(instance + 4) = gRomData_080E65E0;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC96C @ 0x080DC96C
// =============================================================================
u32 VTable_Routine_080DC96C(ushort *instance,int arg1,uint *arg2)

{
  int i_val1;
  int i_val2;
  
  i_val1 = arg1 - (int)instance >> 3;
  if (0 < i_val1) {
    do {
      i_val2 = i_val1 >> 1;
      if ((uint)instance[i_val2 * 4] <= *arg2) {
        instance = instance + i_val2 * 4 + 4;
        i_val2 = (i_val1 - i_val2) + -1;
      }
      i_val1 = i_val2;
    } while (0 < i_val2);
  }
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DC9A8 @ 0x080DC9A8
// =============================================================================
void VTable_Routine_080DC9A8(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC9B4 @ 0x080DC9B4
// =============================================================================
void VTable_Routine_080DC9B4(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC9C0 @ 0x080DC9C0
// =============================================================================
void VTable_Routine_080DC9C0(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC9CC @ 0x080DC9CC
// =============================================================================
void VTable_Routine_080DC9CC(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC9D8 @ 0x080DC9D8
// =============================================================================
void VTable_Routine_080DC9D8(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC9E4 @ 0x080DC9E4
// =============================================================================
void VTable_Routine_080DC9E4(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC9F0 @ 0x080DC9F0
// =============================================================================
void VTable_Routine_080DC9F0(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DC9FC @ 0x080DC9FC
// =============================================================================
void VTable_Routine_080DC9FC(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCA08 @ 0x080DCA08
// =============================================================================
void VTable_Routine_080DCA08(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCA14 @ 0x080DCA14
// =============================================================================
void VTable_Routine_080DCA14(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCA20 @ 0x080DCA20
// =============================================================================
void VTable_Routine_080DCA20(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCA2C @ 0x080DCA2C
// =============================================================================
void VTable_Routine_080DCA2C(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCA38 @ 0x080DCA38
// =============================================================================
void VTable_Routine_080DCA38(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCA44 @ 0x080DCA44
// =============================================================================
void VTable_Routine_080DCA44(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCA50 @ 0x080DCA50
// =============================================================================
void VTable_Routine_080DCA50(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCA5C @ 0x080DCA5C
// =============================================================================
void VTable_Routine_080DCA5C(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCA68 @ 0x080DCA68
// =============================================================================
void VTable_Routine_080DCA68(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCA74 @ 0x080DCA74
// =============================================================================
void VTable_Routine_080DCA74(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCA80 @ 0x080DCA80
// =============================================================================
void VTable_Routine_080DCA80(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCA8C @ 0x080DCA8C
// =============================================================================
void VTable_Routine_080DCA8C(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCA98 @ 0x080DCA98
// =============================================================================
void VTable_Routine_080DCA98(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCAA4 @ 0x080DCAA4
// =============================================================================
void VTable_Routine_080DCAA4(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCAB0 @ 0x080DCAB0
// =============================================================================
void VTable_Routine_080DCAB0(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCABC @ 0x080DCABC
// =============================================================================
void VTable_Routine_080DCABC(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCAC8 @ 0x080DCAC8
// =============================================================================
void VTable_Routine_080DCAC8(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCAD4 @ 0x080DCAD4
// =============================================================================
void VTable_Routine_080DCAD4(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCAE0 @ 0x080DCAE0
// =============================================================================
void VTable_Routine_080DCAE0(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCAEC @ 0x080DCAEC
// =============================================================================
void VTable_Routine_080DCAEC(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCAF8 @ 0x080DCAF8
// =============================================================================
void VTable_Routine_080DCAF8(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCB04 @ 0x080DCB04
// =============================================================================
void VTable_Routine_080DCB04(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCB10 @ 0x080DCB10
// =============================================================================
void VTable_Routine_080DCB10(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCB1C @ 0x080DCB1C
// =============================================================================
void VTable_Routine_080DCB1C(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCB28 @ 0x080DCB28
// =============================================================================
void VTable_Routine_080DCB28(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCB34 @ 0x080DCB34
// =============================================================================
void VTable_Routine_080DCB34(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCB40 @ 0x080DCB40
// =============================================================================
void VTable_Routine_080DCB40(void)

{
  
  Entity_Routine_08034DB0();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCB4C @ 0x080DCB4C
// =============================================================================
void VTable_Routine_080DCB4C(void)

{
  
  Entity_Routine_08037048();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCB58 @ 0x080DCB58
// =============================================================================
void VTable_Routine_080DCB58(void)

{
  
  Entity_Routine_08037048();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCB64 @ 0x080DCB64
// =============================================================================
void VTable_Routine_080DCB64(void)

{
  
  Entity_Routine_08037048();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCB70 @ 0x080DCB70
// =============================================================================
void VTable_Routine_080DCB70(void)

{
  
  Entity_Routine_08037048();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCB7C @ 0x080DCB7C
// =============================================================================
u32 VTable_Routine_080DCB7C(uint *instance,int *arg1,uint arg2)

{
  byte b_flag1;
  undefined2 u_val2;
  undefined4 u_val3;
  int i_val4;
  int i_val5;
  int i_val6;
  int i_val7;
  undefined4 u_val8;
  undefined1 stack_buf_84 [4];
  undefined1 stack_buf_80 [64];
  int stack_val_40;
  ushort stack_val_3c;
  undefined4 stack_val_38;
  undefined1 stack_val_34;
  undefined1 stack_buf_33 [3];
  uint stack_val_30;
  uint stack_val_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  
  stack_val_30 = arg2 & 0xff;
  *instance = 0;
  u_val3 = _call_via_r1(arg1,*(undefined4 *)(*arg1 + 0x7c));
  if (stack_val_30 == 0) {
    u_val2 = *gRomData_080F1684;
  }
  else {
    u_val2 = *(undefined2 *)(gRomData_080F1684 + 2);
  }
  stack_buf_84[0] = 0;
  NPC_Routine_080A4A00(stack_buf_80,u_val3,u_val2,arg1,6,0x1d);
  stack_val_40 = 0x640000;
  stack_val_3c = 300;
  stack_val_38 = 0x2666;
  stack_val_34 = *(undefined1 *)(gRomData_080F1684 + 2);
  stack_buf_33[0] = 1;
  puStack_24 = stack_buf_84;
  if (*instance < 5) {
    if (instance + *instance * 0x14 + 1 != (uint *)0x0) {
      VTable_Routine_080DCD2C(instance + *instance * 0x14 + 1,stack_buf_80);
    }
    *instance = *instance + 1;
  }
  NPC_Routine_080A47B4(stack_buf_80,2);
  stack_val_2c = 0;
  puStack_28 = stack_buf_33;
  do {
    u_val3 = math_rand();
    i_val4 = math_umodsi3(u_val3,3);
    u_val3 = math_rand();
    i_val5 = math_modsi3(u_val3,0x1e0);
    i_val7 = gRomData_080F1672;
    u_val3 = math_rand();
    i_val6 = math_umodsi3(u_val3,3);
    b_flag1 = *(byte *)(i_val6 + i_val7);
    u_val3 = math_rand();
    i_val7 = math_umodsi3(u_val3,3);
    u_val3 = *(undefined4 *)(i_val7 * 4 + gRomData_080F1678);
    u_val8 = _call_via_r1(arg1,*(undefined4 *)(*arg1 + 0x7c));
    if (stack_val_30 == 0) {
      u_val2 = *(undefined2 *)(i_val4 * 8 + gRomData_080F1684);
    }
    else {
      u_val2 = gRomData_080F1684[i_val4 * 4 + 1];
    }
    *puStack_24 = 0;
    NPC_Routine_080A4A00(stack_buf_80,u_val8,u_val2,arg1,6,0x1d);
    stack_val_40 = i_val5 << 0x10;
    stack_val_3c = (ushort)b_flag1;
    stack_val_34 = *(undefined1 *)(i_val4 * 8 + gRomData_080F1684 + 4);
    *puStack_28 = 1;
    stack_val_38 = u_val3;
    if (*instance < 5) {
      if (instance + *instance * 0x14 + 1 != (uint *)0x0) {
        VTable_Routine_080DCD2C(instance + *instance * 0x14 + 1,stack_buf_80);
      }
      *instance = *instance + 1;
    }
    NPC_Routine_080A47B4(stack_buf_80,2);
    stack_val_2c = stack_val_2c + 1;
  } while (stack_val_2c < 4);
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DCD2C @ 0x080DCD2C
// =============================================================================
u32 VTable_Routine_080DCD2C(int instance,int arg1)

{
  undefined4 u_val1;
  undefined4 u_val2;
  
  VTable_Routine_080DC840();
  *(undefined4 *)(instance + 0x24) = gRomData_080E681C;
  u_val1 = *(undefined4 *)(arg1 + 0x2c);
  u_val2 = *(undefined4 *)(arg1 + 0x30);
  *(undefined4 *)(instance + 0x28) = *(undefined4 *)(arg1 + 0x28);
  *(undefined4 *)(instance + 0x2c) = u_val1;
  *(undefined4 *)(instance + 0x30) = u_val2;
  u_val1 = *(undefined4 *)(arg1 + 0x38);
  *(undefined4 *)(instance + 0x34) = *(undefined4 *)(arg1 + 0x34);
  *(undefined4 *)(instance + 0x38) = u_val1;
  *(undefined1 *)(instance + 0x3c) = *(undefined1 *)(arg1 + 0x3c);
  *(undefined1 *)(instance + 0x3d) = *(undefined1 *)(arg1 + 0x3d);
  *(undefined1 *)(instance + 0x3e) = *(undefined1 *)(arg1 + 0x3e);
  *(undefined1 *)(instance + 0x3f) = *(undefined1 *)(arg1 + 0x3f);
  *(undefined4 *)(instance + 0x40) = *(undefined4 *)(arg1 + 0x40);
  *(undefined2 *)(instance + 0x44) = *(undefined2 *)(arg1 + 0x44);
  *(undefined4 *)(instance + 0x48) = *(undefined4 *)(arg1 + 0x48);
  *(undefined1 *)(instance + 0x4c) = *(undefined1 *)(arg1 + 0x4c);
  *(undefined1 *)(instance + 0x4d) = *(undefined1 *)(arg1 + 0x4d);
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DCDB0 @ 0x080DCDB0
// =============================================================================
void VTable_Routine_080DCDB0(int instance,uint arg1)

{
  int *p_int1;
  int pos_x;
  int *p_int3;
  
  p_int1 = *(int **)(instance + 0x14);
  if (p_int1 != (int *)0x0) {
    pos_x = *p_int1;
    for (p_int3 = p_int1 + 1; p_int3 != p_int1 + pos_x * 0x14 + 1; p_int3 = p_int3 + 0x14) {
      NPC_Routine_080A47B4(p_int3,2);
    }
    CppRuntime_FreeMemory(p_int1);
  }
  p_int1 = *(int **)(instance + 0x10);
  if (p_int1 != (int *)0x0) {
    pos_x = *p_int1;
    for (p_int3 = p_int1 + 1; p_int3 != p_int1 + pos_x * 0x10 + 1; p_int3 = p_int3 + 0x10) {
      _call_via_r2(p_int3,2,*(undefined4 *)(p_int3[9] + 8));
    }
    CppRuntime_FreeMemory(p_int1);
  }
  pos_x = *(int *)(instance + 0xc);
  if (pos_x != 0) {
    NPC_Routine_080A47B4(pos_x,2);
    CppRuntime_FreeMemory(pos_x);
  }
  pos_x = *(int *)(instance + 8);
  if (pos_x != 0) {
    NPC_Routine_080A47B4(pos_x,2);
    CppRuntime_FreeMemory(pos_x);
  }
  *(undefined4 *)(instance + 4) = gRomData_080E65E0;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCE60 @ 0x080DCE60
// =============================================================================
void VTable_Routine_080DCE60(int instance,uint arg1)

{
  int i_val1;
  
  *(undefined4 *)(instance + 0x14) = gRomData_080E6250;
  i_val1 = *(int *)(instance + 0x10);
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 4) + 8));
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCE94 @ 0x080DCE94
// =============================================================================
void VTable_Routine_080DCE94(int instance,uint arg1)

{
  
  NPC_Routine_080A47B4(instance + 8,2);
  *(undefined4 *)(instance + 4) = gRomData_080E65E0;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCEC0 @ 0x080DCEC0
// =============================================================================
void VTable_Routine_080DCEC0(int instance,uint arg1)

{
  
  NPC_Routine_080A47B4(instance + 8,2);
  *(undefined4 *)(instance + 4) = gRomData_080E65E0;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCEEC @ 0x080DCEEC
// =============================================================================
void VTable_Routine_080DCEEC(int instance,uint arg1)

{
  int i_val1;
  
  *(undefined4 *)(instance + 0x14) = gRomData_080E6250;
  i_val1 = *(int *)(instance + 0x10);
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 4) + 8));
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCF20 @ 0x080DCF20
// =============================================================================
void VTable_Routine_080DCF20(int instance,uint arg1)

{
  
  NPC_Routine_080A47B4(instance + 8,2);
  *(undefined4 *)(instance + 4) = gRomData_080E65E0;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DCFCC @ 0x080DCFCC
// =============================================================================
void VTable_Routine_080DCFCC(int instance)

{
  
  Farmer_Routine_0801FE20();
  *(undefined1 *)(instance + 0x1c) = 0;
  return;
}

// =============================================================================
// Function: VTable_Routine_080DD3A8 @ 0x080DD3A8
// =============================================================================
void VTable_Routine_080DD3A8(void)

{
  
  Entity_Routine_08039F90();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DD3D4 @ 0x080DD3D4
// =============================================================================
void VTable_Routine_080DD3D4(int instance)

{
  char c_char1;
  int i_val2;
  char *p_char3;
  
  p_char3 = (char *)(instance + 0x47);
  if (*p_char3 == '\0') {
    i_val2 = Animal_Routine_0805E8F0(instance + 0x30);
    if (-1 < i_val2 * 0x40000000) {
      return;
    }
    p_char3 = (char *)(instance + 0x44);
    c_char1 = '\x01';
  }
  else {
    c_char1 = '\0';
  }
  *p_char3 = c_char1;
  return;
}

// =============================================================================
// Function: VTable_Routine_080DD404 @ 0x080DD404
// =============================================================================
void VTable_Routine_080DD404(void)

{
  
  Entity_Routine_08039F50();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DD434 @ 0x080DD434
// =============================================================================
void VTable_Routine_080DD434(void)

{
  
  Entity_Routine_08039F90();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DD460 @ 0x080DD460
// =============================================================================
void VTable_Routine_080DD460(int instance)

{
  char c_char1;
  short s_val2;
  int i_val3;
  char *p_char4;
  
  c_char1 = *(char *)(instance + 0x62);
  if (c_char1 == '\0') {
    i_val3 = math_rand();
    if ((i_val3 >> 4 & 3U) != 0) {
      Entity_Routine_0803A350(instance,0xcf);
    }
    s_val2 = NPC_Routine_080AB788(2);
    *(short *)(instance + 0x60) = (s_val2 + 6) * 0x3c;
    c_char1 = '\x01';
  }
  else {
    if ((c_char1 != '\x01') ||
       (i_val3 = *(ushort *)(instance + 0x60) - 1, *(ushort *)(instance + 0x60) = (ushort)i_val3,
       -1 < i_val3 * 0x10000)) goto LAB_080dd4b8;
    c_char1 = '\0';
  }
  *(char *)(instance + 0x62) = c_char1;
LAB_080dd4b8:
  p_char4 = (char *)(instance + 0x47);
  if (*p_char4 == '\0') {
    i_val3 = Animal_Routine_0805E8F0(instance + 0x30);
    if (-1 < i_val3 * 0x40000000) {
      return;
    }
    p_char4 = (char *)(instance + 0x44);
    c_char1 = '\x01';
  }
  else {
    c_char1 = '\0';
  }
  *p_char4 = c_char1;
  return;
}

// =============================================================================
// Function: VTable_Routine_080DD4E4 @ 0x080DD4E4
// =============================================================================
void VTable_Routine_080DD4E4(void)

{
  
  Entity_Routine_08039F50();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DD514 @ 0x080DD514
// =============================================================================
void VTable_Routine_080DD514(void)

{
  
  Entity_Routine_08039F90();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DD540 @ 0x080DD540
// =============================================================================
void VTable_Routine_080DD540(int instance)

{
  int i_val1;
  uint u_val2;
  
  i_val1 = Entity_Routine_0803A180(instance,instance + 0x50,0x10000);
  if ((i_val1 != 0) &&
     (u_val2 = *(int *)(instance + 0x50) + 0x9A9, *(ushort *)(instance + 4) != u_val2)) {
    Animal_Routine_0805E860(instance + 0x30,u_val2);
    *(undefined1 *)(instance + 0x44) = 1;
    *(undefined1 *)(instance + 0x46) = 0;
    *(undefined1 *)(instance + 0x47) = 1;
    *(short *)(instance + 4) = (short)u_val2;
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DD588 @ 0x080DD588
// =============================================================================
void VTable_Routine_080DD588(void)

{
  
  Entity_Routine_08039F50();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DD5B8 @ 0x080DD5B8
// =============================================================================
void VTable_Routine_080DD5B8(void)

{
  
  Entity_Routine_08039F90();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DD5E4 @ 0x080DD5E4
// =============================================================================
void VTable_Routine_080DD5E4(undefined4 *instance)

{
  short s_val1;
  short s_val2;
  int i_val3;
  short *psVar4;
  int *p_int5;
  int i_val6;
  uint u_val7;
  short *psVar8;
  undefined4 stack_val_68;
  undefined4 stack_val_64;
  undefined4 stack_val_60;
  undefined4 stack_val_5c;
  undefined4 stack_val_58;
  undefined4 stack_val_54;
  undefined4 stack_val_50;
  undefined4 stack_val_48;
  undefined4 stack_val_44;
  undefined4 stack_val_40;
  undefined4 stack_val_3c;
  undefined4 stack_val_38;
  undefined4 stack_val_34;
  undefined4 stack_val_30;
  undefined4 stack_val_2c;
  undefined4 stack_val_28;
  undefined4 stack_val_24;
  
  p_int5 = (int *)*instance;
  i_val3 = _call_via_r2(p_int5,0,*(undefined4 *)(*p_int5 + 0x40));
  if (i_val3 != 0) {
    s_val1 = *(short *)(i_val3 + 10);
    s_val2 = *(short *)(i_val3 + 0xe);
    psVar4 = (short *)(instance + 0x15);
    i_val3 = (int)s_val1 - (int)*psVar4;
    if (i_val3 < 0) {
      i_val3 = -i_val3;
    }
    if (i_val3 < 0x10) {
      psVar8 = (short *)((int)instance + 0x56);
      i_val3 = (int)s_val2 - (int)*psVar8;
      if (i_val3 < 0) {
        i_val3 = -i_val3;
      }
      if (i_val3 < 0x10) {
        _call_via_r3(&stack_val_68,p_int5,0,*(undefined4 *)(*p_int5 + 0x34));
        stack_val_28 = CONCAT22(*psVar8 + -8,*psVar4 + -8);
        stack_val_24 = CONCAT22(*psVar8 + 8,*psVar4 + 8);
        stack_val_5c = 0x21;
        stack_val_58 = 0xffffffdf;
        stack_val_54 = 0xffffffdf;
        stack_val_50 = 0x21;
        stack_val_48 = stack_val_68;
        stack_val_44 = stack_val_64;
        stack_val_40 = stack_val_60;
        stack_val_3c = stack_val_28;
        stack_val_38 = stack_val_24;
        stack_val_34 = 0x20;
        stack_val_30 = 0;
        stack_val_2c = 0;
        i_val6 = instance[0x14];
        i_val3 = NPC_Routine_080ABE58((int)*psVar4,(int)*psVar8,(int)s_val1,(int)s_val2,&stack_val_5c,i_val6);
        instance[0x14] = i_val3;
        if (((i_val6 != i_val3) || (*(char *)((int)instance + 0x62) == '\0')) &&
           (u_val7 = i_val3 + 0x8F9, *(ushort *)(instance + 1) != u_val7)) {
          Animal_Routine_0805E860(instance + 0xc,u_val7);
          *(undefined1 *)(instance + 0x11) = 1;
          *(undefined1 *)((int)instance + 0x46) = 0;
          *(undefined1 *)((int)instance + 0x47) = 1;
          *(short *)(instance + 1) = (short)u_val7;
        }
        *(char *)((int)instance + 0x62) = '\x01';
        *(undefined2 *)(instance + 0x18) = 0x3c;
      }
    }
  }
  i_val3 = Entity_Routine_0803A180(instance,instance + 0x14,0x8000);
  if (i_val3 != 0) {
    if (*(char *)((int)instance + 0x62) == '\0') {
      u_val7 = instance[0x14] + 0x8F5;
      if (*(ushort *)(instance + 1) == u_val7) {
        return;
      }
      Animal_Routine_0805E860(instance + 0xc,u_val7);
      *(undefined1 *)(instance + 0x11) = 1;
      *(undefined1 *)((int)instance + 0x46) = 0;
    }
    else {
      u_val7 = instance[0x14] + 0x8F9;
      if (*(ushort *)(instance + 1) == u_val7) {
        return;
      }
      Animal_Routine_0805E860(instance + 0xc,u_val7);
      *(undefined1 *)(instance + 0x11) = 1;
      *(undefined1 *)((int)instance + 0x46) = 0;
    }
    *(undefined1 *)((int)instance + 0x47) = 1;
    *(short *)(instance + 1) = (short)u_val7;
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DD788 @ 0x080DD788
// =============================================================================
void VTable_Routine_080DD788(void)

{
  
  Entity_Routine_08039F50();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DD7B8 @ 0x080DD7B8
// =============================================================================
void VTable_Routine_080DD7B8(void)

{
  
  Entity_Routine_08039F90();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DD7E4 @ 0x080DD7E4
// =============================================================================
void VTable_Routine_080DD7E4(int instance)

{
  int i_val1;
  uint u_val2;
  
  i_val1 = Entity_Routine_0803A180(instance,instance + 0x50,0x8000);
  if (i_val1 != 0) {
    if (*(char *)(instance + 0x62) == '\0') {
      u_val2 = *(int *)(instance + 0x50) + 0x658;
      if (*(ushort *)(instance + 4) == u_val2) {
        return;
      }
      Animal_Routine_0805E860(instance + 0x30,u_val2);
      *(undefined1 *)(instance + 0x44) = 1;
      *(undefined1 *)(instance + 0x46) = 0;
    }
    else {
      u_val2 = *(int *)(instance + 0x50) + 0x65C;
      if (*(ushort *)(instance + 4) == u_val2) {
        return;
      }
      Animal_Routine_0805E860(instance + 0x30,u_val2);
      *(undefined1 *)(instance + 0x44) = 1;
      *(undefined1 *)(instance + 0x46) = 0;
    }
    *(undefined1 *)(instance + 0x47) = 1;
    *(short *)(instance + 4) = (short)u_val2;
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DD860 @ 0x080DD860
// =============================================================================
void VTable_Routine_080DD860(void)

{
  
  Entity_Routine_08039F50();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DD890 @ 0x080DD890
// =============================================================================
void VTable_Routine_080DD890(void)

{
  
  Entity_Routine_08039F90();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DD8BC @ 0x080DD8BC
// =============================================================================
void VTable_Routine_080DD8BC(int instance)

{
  int i_val1;
  uint u_val2;
  
  i_val1 = Entity_Routine_0803A180(instance,instance + 0x50,0x8000);
  if (i_val1 != 0) {
    if (*(char *)(instance + 0x62) == '\0') {
      u_val2 = *(int *)(instance + 0x50) + 0x877;
      if (*(ushort *)(instance + 4) == u_val2) {
        return;
      }
      Animal_Routine_0805E860(instance + 0x30,u_val2);
      *(undefined1 *)(instance + 0x44) = 1;
      *(undefined1 *)(instance + 0x46) = 0;
    }
    else {
      u_val2 = *(int *)(instance + 0x50) + 0x87B;
      if (*(ushort *)(instance + 4) == u_val2) {
        return;
      }
      Animal_Routine_0805E860(instance + 0x30,u_val2);
      *(undefined1 *)(instance + 0x44) = 1;
      *(undefined1 *)(instance + 0x46) = 0;
    }
    *(undefined1 *)(instance + 0x47) = 1;
    *(short *)(instance + 4) = (short)u_val2;
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DD938 @ 0x080DD938
// =============================================================================
void VTable_Routine_080DD938(void)

{
  
  Entity_Routine_08039F50();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DD944 @ 0x080DD944
// =============================================================================
void VTable_Routine_080DD944(int instance,byte *arg1)

{
  
  *arg1 = *arg1 & 0xf0 | 6;
  *(undefined4 *)(arg1 + 4) = *(undefined4 *)(instance + 0x50);
  *(undefined2 *)(arg1 + 8) = *(undefined2 *)(instance + 0x54);
  *(undefined2 *)(arg1 + 10) = *(undefined2 *)(instance + 0x56);
  arg1[0xc] = *(byte *)(instance + 0x78) & 0xf | *(char *)(instance + 0x79) << 4;
  return;
}

// =============================================================================
// Function: VTable_Routine_080DD994 @ 0x080DD994
// =============================================================================
void VTable_Routine_080DD994(undefined4 instance)

{
  
  Entity_Routine_08039F90(instance);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DD9CC @ 0x080DD9CC
// =============================================================================
void VTable_Routine_080DD9CC(int instance)

{
  ushort u_val1;
  uint u_val2;
  char c_char3;
  short s_val4;
  int i_val5;
  undefined4 u_val6;
  int i_val7;
  ushort *p_uint8;
  int i_val9;
  byte *pbVar10;
  int i_val11;
  int i_val12;
  int i_val13;
  
  c_char3 = *(char *)(instance + 0x62);
  if (c_char3 == '\x01') {
    i_val7 = *(ushort *)(instance + 0x60) - 1;
    *(ushort *)(instance + 0x60) = (ushort)i_val7;
    i_val7 = i_val7 * 0x10000 >> 0x10;
    if (-1 < i_val7) {
      if (0x168 < i_val7) {
        p_uint8 = (ushort *)(instance + 0x86);
        u_val1 = *p_uint8;
        *p_uint8 = (ushort)(u_val1 - 1);
        if ((int)((u_val1 - 1) * 0x10000) < 1) {
          *p_uint8 = 0x168;
          i_val7 = math_rand();
          if ((i_val7 >> 4 & 3U) != 0) {
            Entity_Routine_0803A350(instance,0xce);
          }
        }
      }
      goto LAB_080ddbd6;
    }
    c_char3 = '\x02';
  }
  else {
    if ('\x01' < c_char3) {
      if (c_char3 == '\x02') {
        pbVar10 = (byte *)(instance + 0x79);
        if (*pbVar10 == 0xff) {
          *pbVar10 = *(char *)(instance + 0x78) + 1U & 3;
        }
        Entity_Routine_0803A144(instance,instance + 100,(int)(char)*pbVar10);
        i_val7 = *(short *)(instance + 0x68) * 0x10000;
        *(int *)(instance + 0x6c) = i_val7;
        i_val11 = *(short *)(instance + 0x6a) * 0x10000;
        *(int *)(instance + 0x70) = i_val11;
        *(int *)(instance + 0x7c) = i_val7 - *(int *)(instance + 0x58);
        i_val11 = i_val11 - *(int *)(instance + 0x5c);
        *(int *)(instance + 0x80) = i_val11;
        i_val5 = *(int *)(instance + 0x7c);
        i_val7 = i_val5;
        if (i_val5 < 0) {
          i_val7 = -i_val5;
        }
        i_val13 = i_val7 >> 0x11;
        i_val9 = i_val11;
        if (i_val11 < 0) {
          i_val9 = -i_val11;
        }
        i_val12 = i_val9 >> 0x11;
        if (i_val12 < i_val13) {
          if (i_val5 < 0) {
            *(undefined4 *)(instance + 0x50) = 2;
          }
          else {
            *(undefined4 *)(instance + 0x50) = 3;
          }
          u_val6 = math_udivsi3(*(undefined4 *)(instance + 0x7c),i_val13);
          *(undefined4 *)(instance + 0x7c) = u_val6;
          u_val6 = math_udivsi3(*(undefined4 *)(instance + 0x80),i_val13);
          *(undefined4 *)(instance + 0x80) = u_val6;
          *(short *)(instance + 0x60) = (short)(i_val7 >> 0x11);
        }
        else {
          *(uint *)(instance + 0x50) = (uint)(i_val11 < 0);
          u_val6 = math_udivsi3(*(undefined4 *)(instance + 0x7c),i_val12);
          *(undefined4 *)(instance + 0x7c) = u_val6;
          u_val6 = math_udivsi3(*(undefined4 *)(instance + 0x80),i_val12);
          *(undefined4 *)(instance + 0x80) = u_val6;
          *(short *)(instance + 0x60) = (short)(i_val9 >> 0x11);
        }
        u_val2 = 0x2A9;
        if (*(ushort *)(instance + 4) != 0x2A9) {
          Animal_Routine_0805E860(instance + 0x30,0x2A9);
          *(undefined1 *)(instance + 0x44) = 1;
          *(undefined1 *)(instance + 0x46) = 0;
          *(undefined1 *)(instance + 0x47) = 1;
          *(short *)(instance + 4) = (short)u_val2;
        }
        *(undefined1 *)(instance + 0x62) = 3;
        *(undefined1 *)(instance + 0x84) = 8;
      }
      else if (c_char3 != '\x03') goto LAB_080ddbd6;
      *(int *)(instance + 0x58) = *(int *)(instance + 0x58) + *(int *)(instance + 0x7c);
      *(int *)(instance + 0x5c) = *(int *)(instance + 0x5c) + *(int *)(instance + 0x80);
      i_val7 = *(ushort *)(instance + 0x60) - 1;
      *(ushort *)(instance + 0x60) = (ushort)i_val7;
      if (i_val7 * 0x10000 < 1) {
        *(undefined1 *)(instance + 0x78) = *(undefined1 *)(instance + 0x79);
        *(undefined1 *)(instance + 0x79) = 0xff;
        *(undefined4 *)(instance + 0x58) = *(undefined4 *)(instance + 0x6c);
        *(undefined4 *)(instance + 0x5c) = *(undefined4 *)(instance + 0x70);
        *(undefined1 *)(instance + 0x62) = 0;
        *(undefined1 *)(instance + 0x84) = 0xf8;
        if (*(short *)(instance + 4) != 0x2a4) {
          Animal_Routine_0805E860(instance + 0x30,0x2a4);
          *(undefined1 *)(instance + 0x44) = 1;
          *(undefined1 *)(instance + 0x46) = 0;
          *(undefined1 *)(instance + 0x47) = 1;
          *(undefined2 *)(instance + 4) = 0x2a4;
        }
      }
      goto LAB_080ddbd6;
    }
    if (c_char3 != '\0') goto LAB_080ddbd6;
    s_val4 = NPC_Routine_080AB788(2);
    *(short *)(instance + 0x60) = (s_val4 + 0x1e) * 0x3c;
    *(undefined2 *)(instance + 0x86) = 0;
    c_char3 = '\x01';
  }
  *(char *)(instance + 0x62) = c_char3;
LAB_080ddbd6:
  *(short *)(instance + 0x54) = (short)((uint)*(undefined4 *)(instance + 0x58) >> 0x10);
  *(short *)(instance + 0x56) = (short)((uint)*(undefined4 *)(instance + 0x5c) >> 0x10);
  if (*(char *)(instance + 0x47) == '\0') {
    i_val7 = Animal_Routine_0805E8F0(instance + 0x30);
    if (i_val7 * 0x40000000 < 0) {
      *(undefined1 *)(instance + 0x44) = 1;
    }
  }
  else {
    *(char *)(instance + 0x47) = '\0';
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DDC18 @ 0x080DDC18
// =============================================================================
void VTable_Routine_080DDC18(void)

{
  
  Entity_Routine_08039F50();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DDC48 @ 0x080DDC48
// =============================================================================
void VTable_Routine_080DDC48(void)

{
  
  Entity_Routine_08039F90();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DDC78 @ 0x080DDC78
// =============================================================================
void VTable_Routine_080DDC78(int instance)

{
  char c_char1;
  short s_val2;
  int i_val3;
  ushort *p_uint4;
  int i_val5;
  uint u_val6;
  ushort u_val7;
  
  u_val6 = 0x205;
  c_char1 = *(char *)(instance + 0x62);
  if (c_char1 == '\x01') {
    p_uint4 = (ushort *)(instance + 100);
    u_val7 = *p_uint4 & 0xff0;
    if ((*p_uint4 & 0xff0) == 0) {
      if (*(ushort *)(instance + 4) != 0x205) {
        Animal_Routine_0805E860(instance + 0x30,0x205);
        *(undefined1 *)(instance + 0x44) = 1;
        *(char *)(instance + 0x46) = (char)u_val7;
        *(undefined1 *)(instance + 0x47) = 1;
LAB_080ddd8e:
        *(short *)(instance + 4) = (short)u_val6;
      }
    }
    else if ((u_val7 == 0x800) && (u_val6 = 0x204, *(short *)(instance + 4) != 0x204)) {
      Animal_Routine_0805E860(instance + 0x30,0x204);
      *(undefined1 *)(instance + 0x44) = 1;
      *(undefined1 *)(instance + 0x46) = 0;
      *(undefined1 *)(instance + 0x47) = 1;
      goto LAB_080ddd8e;
    }
    s_val2 = Entity_Routine_0803A320(instance,(int)((uint)*p_uint4 << 0x10) >> 0x14 & 0xff);
    i_val3 = Entity_Routine_0803A334(instance,((int)((uint)*p_uint4 << 0x10) >> 0x14 & 0x7fU) << 1);
    *p_uint4 = *(short *)(instance + 0x66) + *p_uint4;
    i_val5 = *(int *)(instance + 0x58) + s_val2 * 0x40;
    *(int *)(instance + 0x58) = i_val5;
    *(int *)(instance + 0x5c) = *(int *)(instance + 0x5c) + ((i_val3 << 0x10) >> 10);
    *(short *)(instance + 0x54) = (short)((uint)i_val5 >> 0x10);
    *(short *)(instance + 0x56) = (short)((uint)*(undefined4 *)(instance + 0x5c) >> 0x10);
    if (0x0007FFFF < *(int *)(instance + 0x68)) goto LAB_080dde1e;
    i_val3 = *(int *)(instance + 0x68) + 0x2000;
  }
  else {
    if (c_char1 < '\x02') {
      if (c_char1 == '\0') {
        i_val3 = math_rand();
        i_val3 = (i_val3 >> 8 & 1U) + 1;
        *(char *)(instance + 0x62) = (char)i_val3;
        if (i_val3 == 1) {
          s_val2 = NPC_Routine_080AB788(4);
          *(short *)(instance + 0x60) = s_val2 * 0x100 + 0x100;
          i_val3 = math_rand();
          *(short *)(instance + 100) = (short)((i_val3 >> 8 & 1U) << 0xb);
        }
        else {
          s_val2 = NPC_Routine_080AB788(2);
          *(short *)(instance + 0x60) = s_val2 * 0x3c + 0xb4;
        }
        s_val2 = NPC_Routine_080AB788(2);
        *(short *)(instance + 0x66) = s_val2 * 4 + 0xc;
      }
      goto LAB_080dde1e;
    }
    if ((c_char1 != '\x02') || (*(int *)(instance + 0x68) < 1)) goto LAB_080dde1e;
    i_val3 = *(int *)(instance + 0x68) + 0xFFFFE000;
  }
  *(int *)(instance + 0x68) = i_val3;
LAB_080dde1e:
  i_val3 = *(ushort *)(instance + 0x60) - 1;
  *(ushort *)(instance + 0x60) = (ushort)i_val3;
  if (i_val3 * 0x10000 < 0) {
    *(undefined1 *)(instance + 0x62) = 0;
  }
  if (*(char *)(instance + 0x47) == '\0') {
    i_val3 = Animal_Routine_0805E8F0(instance + 0x30);
    if (i_val3 * 0x40000000 < 0) {
      *(undefined1 *)(instance + 0x44) = 1;
    }
  }
  else {
    *(char *)(instance + 0x47) = '\0';
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DDE68 @ 0x080DDE68
// =============================================================================
void VTable_Routine_080DDE68(void)

{
  
  Entity_Routine_08039F50();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DDE98 @ 0x080DDE98
// =============================================================================
void VTable_Routine_080DDE98(void)

{
  
  Entity_Routine_08039F90();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DDEC4 @ 0x080DDEC4
// =============================================================================
void VTable_Routine_080DDEC4(int instance)

{
  int i_val1;
  uint u_val2;
  
  i_val1 = Entity_Routine_0803A180(instance,instance + 0x50,0x2000);
  if ((i_val1 != 0) &&
     (u_val2 = *(int *)(instance + 0x50) + 0x806, *(ushort *)(instance + 4) != u_val2)) {
    Animal_Routine_0805E860(instance + 0x30,u_val2);
    *(undefined1 *)(instance + 0x44) = 1;
    *(undefined1 *)(instance + 0x46) = 0;
    *(undefined1 *)(instance + 0x47) = 1;
    *(short *)(instance + 4) = (short)u_val2;
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DDF0C @ 0x080DDF0C
// =============================================================================
void VTable_Routine_080DDF0C(void)

{
  
  Entity_Routine_08039F50();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DDF3C @ 0x080DDF3C
// =============================================================================
void VTable_Routine_080DDF3C(void)

{
  
  Entity_Routine_08039F90();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DDF68 @ 0x080DDF68
// =============================================================================
void VTable_Routine_080DDF68(int instance)

{
  int i_val1;
  uint u_val2;
  
  i_val1 = Entity_Routine_0803A180(instance,instance + 0x50,0x4000);
  if ((i_val1 != 0) &&
     (u_val2 = *(int *)(instance + 0x50) + 0x3DB, *(ushort *)(instance + 4) != u_val2)) {
    Animal_Routine_0805E860(instance + 0x30,u_val2);
    *(undefined1 *)(instance + 0x44) = 1;
    *(undefined1 *)(instance + 0x46) = 0;
    *(undefined1 *)(instance + 0x47) = 1;
    *(short *)(instance + 4) = (short)u_val2;
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DDFB0 @ 0x080DDFB0
// =============================================================================
void VTable_Routine_080DDFB0(void)

{
  
  Entity_Routine_08039F50();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DDFE0 @ 0x080DDFE0
// =============================================================================
void VTable_Routine_080DDFE0(void)

{
  
  Entity_Routine_08039F90();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DE00C @ 0x080DE00C
// =============================================================================
void VTable_Routine_080DE00C(int instance)

{
  int i_val1;
  uint u_val2;
  
  i_val1 = Entity_Routine_0803A180(instance,instance + 0x50,0x8000);
  if ((i_val1 != 0) && (u_val2 = *(int *)(instance + 0x50) + 0x10, *(ushort *)(instance + 4) != u_val2))
  {
    Animal_Routine_0805E860(instance + 0x30,u_val2);
    *(undefined1 *)(instance + 0x44) = 1;
    *(undefined1 *)(instance + 0x46) = 0;
    *(undefined1 *)(instance + 0x47) = 1;
    *(short *)(instance + 4) = (short)u_val2;
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DE050 @ 0x080DE050
// =============================================================================
void VTable_Routine_080DE050(void)

{
  
  Entity_Routine_08039F50();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DE080 @ 0x080DE080
// =============================================================================
void VTable_Routine_080DE080(void)

{
  
  Entity_Routine_08039F90();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DE0AC @ 0x080DE0AC
// =============================================================================
void VTable_Routine_080DE0AC(int instance)

{
  int i_val1;
  uint u_val2;
  
  i_val1 = Entity_Routine_0803A180(instance,instance + 0x50,0x8000);
  if (i_val1 != 0) {
    if (*(char *)(instance + 0x62) == '\0') {
      u_val2 = *(int *)(instance + 0x50) + 0x9B6;
      if (*(ushort *)(instance + 4) == u_val2) {
        return;
      }
      Animal_Routine_0805E860(instance + 0x30,u_val2);
      *(undefined1 *)(instance + 0x44) = 1;
      *(undefined1 *)(instance + 0x46) = 0;
    }
    else {
      u_val2 = *(int *)(instance + 0x50) + 0x9BA;
      if (*(ushort *)(instance + 4) == u_val2) {
        return;
      }
      Animal_Routine_0805E860(instance + 0x30,u_val2);
      *(undefined1 *)(instance + 0x44) = 1;
      *(undefined1 *)(instance + 0x46) = 0;
    }
    *(undefined1 *)(instance + 0x47) = 1;
    *(short *)(instance + 4) = (short)u_val2;
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DE128 @ 0x080DE128
// =============================================================================
void VTable_Routine_080DE128(void)

{
  
  Entity_Routine_08039F50();
  return;
}

// =============================================================================
// Function: VTable_Routine_080DE134 @ 0x080DE134
// =============================================================================
void VTable_Routine_080DE134(undefined4 *instance,undefined4 *arg1)

{
  int i_val1;
  undefined4 u_val2;
  undefined4 u_val3;
  int *p_int4;
  undefined4 u_val5;
  
  u_val2 = *(undefined4 *)*instance;
  u_val3 = arg1[2];
  u_val5 = *arg1;
  i_val1 = instance[2];
  for (p_int4 = instance + 3; p_int4 != instance + i_val1 + 3; p_int4 = p_int4 + 1) {
    if (*p_int4 != 0) {
      _call_via_r4(*p_int4,u_val2,u_val3,u_val5);
    }
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DE184 @ 0x080DE184
// =============================================================================
void VTable_Routine_080DE184(int instance)

{
  int pos_x;
  int i_val2;
  int *p_int3;
  
  pos_x = *(int *)(instance + 8);
  for (p_int3 = (int *)(instance + 0xc); p_int3 != (int *)(pos_x * 4 + instance + 0xc);
      p_int3 = p_int3 + 1) {
    i_val2 = *p_int3;
    if (i_val2 != 0) {
      _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 0x4c) + 0xc));
    }
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DE1B4 @ 0x080DE1B4
// =============================================================================
void VTable_Routine_080DE1B4(int instance,uint arg1)

{
  int i_val1;
  undefined4 stack_val_18;
  
  *(undefined4 *)(instance + 4) = gRomData_080E76D4;
  for (stack_val_18 = *(int *)(instance + 8) * 4 + instance + 0xc; stack_val_18 != instance + 0xc;
      stack_val_18 = stack_val_18 + -4) {
    i_val1 = *(int *)(stack_val_18 + -4);
    if (i_val1 != 0) {
      _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 0x4c) + 8));
    }
  }
  *(undefined4 *)(instance + 4) = gRomData_080E65E0;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DE220 @ 0x080DE220
// =============================================================================
void VTable_Routine_080DE220(undefined4 *instance,uint arg1)

{
  
  *instance = gRomData_080E76F8;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DE240 @ 0x080DE240
// =============================================================================
u32 VTable_Routine_080DE240(undefined1 *instance)

{
  
  *instance = 0;
  gba_strcpy(instance + 4);
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080DE260 @ 0x080DE260
// =============================================================================
void VTable_Routine_080DE260(undefined4 *instance,uint arg1)

{
  
  *instance = gRomData_080E76F8;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080DE280 @ 0x080DE280
// =============================================================================
void VTable_Routine_080DE280(int instance)

{
  
  VTable_Routine_080E0908(instance + -4);
  return;
}

// =============================================================================
// Function: VTable_Routine_080DE28C @ 0x080DE28C
// =============================================================================
void VTable_Routine_080DE28C(int instance)

{
  
  VTable_Routine_080E0908(instance + -0xc);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E0094 @ 0x080E0094
// =============================================================================
void VTable_Routine_080E0094(undefined4 instance,int arg1)

{
  short s_val1;
  undefined2 *p_uint2;
  int *p_int3;
  undefined4 u_val4;
  undefined4 u_val5;
  int **ppiVar6;
  int **ppiVar7;
  int i_val8;
  int ***pppiVar9;
  int *p_int10;
  int ***pppiVar11;
  int *p_int12;
  int i_val13;
  int *p_int14;
  int i_val15;
  int *p_int16;
  int i_val17;
  int i_val18;
  int stack_val_c0;
  int **ppiStack_bc;
  int *piStack_b8;
  int stack_val_b4;
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
  int ***apppiStack_64 [2];
  undefined4 stack_val_5c;
  int stack_val_58;
  int stack_val_54;
  undefined4 stack_val_50;
  int *piStack_4c;
  int *piStack_48;
  int *piStack_44;
  int *piStack_40;
  int *piStack_3c;
  int ***pppiStack_38;
  int stack_val_34;
  int *piStack_30;
  int *piStack_2c;
  int ***pppiStack_28;
  int **ppiStack_24;
  
  i_val17 = arg1 + 4;
  stack_val_50 = instance;
  HW_Routine_08008724(i_val17);
  p_uint2 = (undefined2 *)HW_GetSpriteAttr1Offset(i_val17);
  stack_val_c0._0_2_ = 0x1040;
  *p_uint2 = 0x1040;
  i_val17 = HW_GetSpriteAttr1Offset(i_val17);
  stack_val_c0 = CONCAT22(stack_val_c0._2_2_,0x3f);
  *(undefined2 *)(i_val17 + 0x50) = 0x3f;
  p_int16 = (int *)(arg1 + 0x388);
  stack_val_94 = arg1 + 0x378;
  piStack_4c = &stack_val_94;
  p_int14 = *(int **)(arg1 + 0x38c);
  if (p_int14 == *(int **)(arg1 + 0x394)) {
    stack_val_8c = 1;
    stack_val_90 = (int)p_int14 - *p_int16 >> 2;
    p_int12 = &stack_val_90;
    if (stack_val_90 == 0) {
      p_int12 = &stack_val_8c;
    }
    if (stack_val_90 + *p_int12 == 0) {
      p_int12 = (int *)0x0;
      i_val17 = 0;
    }
    else {
      i_val17 = (stack_val_90 + *p_int12) * 4;
      p_int12 = (int *)runtime_malloc_aligned(i_val17);
      if (p_int12 == (int *)0x0) {
        p_int12 = (int *)VTable_Routine_080D3BC0(i_val17);
      }
    }
    p_int10 = (int *)*p_int16;
    p_int3 = p_int12;
    if (p_int14 != p_int10) {
      i_val13 = gba_memmove(p_int12,p_int10,(int)p_int14 - (int)p_int10);
      p_int3 = (int *)(i_val13 + ((int)p_int14 - (int)p_int10));
    }
    i_val18 = *p_int16;
    piStack_30 = &stack_val_7c;
    piStack_2c = &stack_val_70;
    stack_val_34 = arg1 + 0xc;
    pppiStack_38 = &ppiStack_bc;
    pppiStack_28 = (int ***)apppiStack_64;
    for (i_val13 = stack_val_8c; i_val13 != 0; i_val13 = i_val13 + -1) {
      *p_int3 = *piStack_4c;
      p_int3 = p_int3 + 1;
    }
    if (i_val18 != 0) {
      cpp_operator_delete(i_val18);
    }
    *p_int16 = (int)p_int12;
    *(int **)(arg1 + 0x38c) = p_int3;
    *(int *)(arg1 + 0x394) = i_val17 + (int)p_int12;
  }
  else {
    if (p_int14 != (int *)0x0) {
      *p_int14 = arg1 + 0x378;
    }
    *(int *)(arg1 + 0x38c) = *(int *)(arg1 + 0x38c) + 4;
    piStack_30 = &stack_val_7c;
    piStack_2c = &stack_val_70;
    stack_val_34 = arg1 + 0xc;
    pppiStack_38 = &ppiStack_bc;
    pppiStack_28 = (int ***)apppiStack_64;
  }
  i_val17 = arg1 + 4;
  p_int16 = (int *)(arg1 + 0x388);
  stack_val_88 = arg1 + 0x37c;
  piStack_48 = &stack_val_88;
  p_int14 = *(int **)(arg1 + 0x38c);
  if (p_int14 == *(int **)(arg1 + 0x394)) {
    stack_val_80 = 1;
    stack_val_84 = (int)p_int14 - *p_int16 >> 2;
    p_int12 = &stack_val_84;
    if (stack_val_84 == 0) {
      p_int12 = &stack_val_80;
    }
    if (stack_val_84 + *p_int12 == 0) {
      p_int12 = (int *)0x0;
      i_val13 = 0;
    }
    else {
      i_val13 = (stack_val_84 + *p_int12) * 4;
      p_int12 = (int *)runtime_malloc_aligned(i_val13);
      if (p_int12 == (int *)0x0) {
        p_int12 = (int *)VTable_Routine_080D3BC0(i_val13);
      }
    }
    p_int10 = (int *)*p_int16;
    p_int3 = p_int12;
    if (p_int14 != p_int10) {
      i_val18 = gba_memmove(p_int12,p_int10,(int)p_int14 - (int)p_int10);
      p_int3 = (int *)(i_val18 + ((int)p_int14 - (int)p_int10));
    }
    i_val8 = *p_int16;
    for (i_val18 = stack_val_80; i_val18 != 0; i_val18 = i_val18 + -1) {
      *p_int3 = *piStack_48;
      p_int3 = p_int3 + 1;
    }
    if (i_val8 != 0) {
      cpp_operator_delete(i_val8);
    }
    *p_int16 = (int)p_int12;
    *(int **)(arg1 + 0x38c) = p_int3;
    *(int *)(arg1 + 0x394) = i_val13 + (int)p_int12;
  }
  else {
    if (p_int14 != (int *)0x0) {
      *p_int14 = arg1 + 0x37c;
    }
    *(int *)(arg1 + 0x38c) = *(int *)(arg1 + 0x38c) + 4;
  }
  p_int16 = (int *)(arg1 + 0x388);
  stack_val_7c = arg1 + 0x380;
  piStack_44 = piStack_30;
  p_int14 = *(int **)(arg1 + 0x38c);
  if (p_int14 == *(int **)(arg1 + 0x394)) {
    stack_val_74 = 1;
    stack_val_78 = (int)p_int14 - *p_int16 >> 2;
    p_int12 = &stack_val_78;
    if (stack_val_78 == 0) {
      p_int12 = &stack_val_74;
    }
    if (stack_val_78 + *p_int12 == 0) {
      p_int12 = (int *)0x0;
      i_val13 = 0;
    }
    else {
      i_val13 = (stack_val_78 + *p_int12) * 4;
      p_int12 = (int *)runtime_malloc_aligned(i_val13);
      if (p_int12 == (int *)0x0) {
        p_int12 = (int *)VTable_Routine_080D3BC0(i_val13);
      }
    }
    p_int10 = (int *)*p_int16;
    p_int3 = p_int12;
    if (p_int14 != p_int10) {
      i_val18 = gba_memmove(p_int12,p_int10,(int)p_int14 - (int)p_int10);
      p_int3 = (int *)(i_val18 + ((int)p_int14 - (int)p_int10));
    }
    i_val8 = *p_int16;
    for (i_val18 = stack_val_74; i_val18 != 0; i_val18 = i_val18 + -1) {
      *p_int3 = *piStack_44;
      p_int3 = p_int3 + 1;
    }
    if (i_val8 != 0) {
      cpp_operator_delete(i_val8);
    }
    *p_int16 = (int)p_int12;
    *(int **)(arg1 + 0x38c) = p_int3;
    *(int *)(arg1 + 0x394) = i_val13 + (int)p_int12;
  }
  else {
    if (p_int14 != (int *)0x0) {
      *p_int14 = arg1 + 0x380;
    }
    *(int *)(arg1 + 0x38c) = *(int *)(arg1 + 0x38c) + 4;
  }
  p_int16 = (int *)(arg1 + 0x388);
  stack_val_70 = arg1 + 900;
  piStack_40 = piStack_2c;
  p_int14 = *(int **)(arg1 + 0x38c);
  if (p_int14 == *(int **)(arg1 + 0x394)) {
    stack_val_68 = 1;
    stack_val_6c = (int)p_int14 - *p_int16 >> 2;
    p_int12 = &stack_val_6c;
    if (stack_val_6c == 0) {
      p_int12 = &stack_val_68;
    }
    if (stack_val_6c + *p_int12 == 0) {
      p_int12 = (int *)0x0;
      i_val13 = 0;
    }
    else {
      i_val13 = (stack_val_6c + *p_int12) * 4;
      p_int12 = (int *)runtime_malloc_aligned(i_val13);
      if (p_int12 == (int *)0x0) {
        p_int12 = (int *)VTable_Routine_080D3BC0(i_val13);
      }
    }
    p_int10 = (int *)*p_int16;
    p_int3 = p_int12;
    if (p_int14 != p_int10) {
      i_val18 = gba_memmove(p_int12,p_int10,(int)p_int14 - (int)p_int10);
      p_int3 = (int *)(i_val18 + ((int)p_int14 - (int)p_int10));
    }
    i_val8 = *p_int16;
    for (i_val18 = stack_val_68; i_val18 != 0; i_val18 = i_val18 + -1) {
      *p_int3 = *piStack_40;
      p_int3 = p_int3 + 1;
    }
    if (i_val8 != 0) {
      cpp_operator_delete(i_val8);
    }
    *p_int16 = (int)p_int12;
    *(int **)(arg1 + 0x38c) = p_int3;
    *(int *)(arg1 + 0x394) = i_val13 + (int)p_int12;
  }
  else {
    if (p_int14 != (int *)0x0) {
      *p_int14 = arg1 + 900;
    }
    *(int *)(arg1 + 0x38c) = *(int *)(arg1 + 0x38c) + 4;
  }
  ScriptEngine_Routine_0803EEEC(stack_val_34,
                *(undefined4 *)
                 (PTR_case_080F89D4_080e0534 +
                 (uint)*(ushort *)(PTR_case_080F19AE_080e0538 + *(int *)(arg1 + 0x360) * 2) * 4))
  ;
  *(undefined4 *)(arg1 + 0x364) = 0;
  NPC_Routine_080AD724(pppiStack_38);
  pppiVar11 = pppiStack_38;
  ppiVar6 = ppiStack_bc;
  apppiStack_64[0] = pppiStack_38;
  pppiStack_28[1] = ppiStack_bc;
  *pppiVar11 = (int **)0x0;
  pppiVar11 = *(int ****)(arg1 + 0x368);
  if (((int ***)ppiVar6 != pppiVar11) && (pppiVar11 != (int ***)0x0)) {
    _call_via_r2(pppiVar11,3,(*pppiVar11)[2]);
  }
  *(int ***)(arg1 + 0x368) = ppiVar6;
  if ((int ***)ppiStack_bc != (int ***)0x0) {
    _call_via_r2(ppiStack_bc,3,(int *)(*ppiStack_bc)[2]);
  }
  u_val4 = CppRuntime_OperatorNewArray(4);
  u_val5 = HW_GetSpriteAttr1Offset(i_val17);
  ppiVar6 = (int **)Fade_Init(u_val4,u_val5);
  i_val13 = 0x370;
  pppiVar11 = (int ***)(arg1 + 0x370);
  ppiVar7 = *pppiVar11;
  if ((ppiVar6 != ppiVar7) && (ppiVar7 != (int **)0x0)) {
    Fade_Deinit(ppiVar7,3);
  }
  *pppiVar11 = ppiVar6;
  do {
    i_val18 = 0x80e0451;
    HW_Routine_080088B8(i_val17);
    if (*(int *)(arg1 + 0x364) != 1) {
      i_val18 = 0x80e0463;
      i_val8 = HW_Routine_080088DC(i_val17);
      if ((*(ushort *)(i_val8 + 8) & 8) != 0) {
        pppiVar11 = (int ***)(arg1 + 0x370);
        i_val18 = 0x80e0479;
        s_val1 = Farm_Routine_080094A4(*pppiVar11);
        if (-1 < (-(int)s_val1 | (int)s_val1)) {
          if (*(int *)(arg1 + 0x36c) == 0) {
LAB_080e04a2:
            i_val13 = 1;
            i_val18 = 0x80e04af;
            Fade_StartFadeIn(*pppiVar11,0x889,1);
            *(int *)(arg1 + 0x364) = 1;
          }
          else {
            i_val18 = 0x80e0495;
            i_val8 = Animal_Routine_08050D34();
            if (i_val8 != 1) {
              i_val18 = 0x80e049f;
              i_val8 = Animal_Routine_08050D34(*(int *)(arg1 + 0x36c));
              if (i_val8 != 2) goto LAB_080e04a2;
            }
          }
        }
      }
    }
    p_int14 = (int *)0x36c;
    if (*(int *)(arg1 + 0x36c) != 0) {
      i_val13 = HW_Routine_080088DC(i_val17);
      i_val8 = *(int *)(arg1 + 0x36c);
      pppiVar11 = (int ***)&piStack_b8;
      Input_InitDefault(pppiVar11,(uint)*(ushort *)(i_val13 + 8) & (0xFFFFFF00 | 0xf7));
      p_int14 = (int *)HW_GetSpriteAttr2Offset(i_val17);
      i_val13 = HW_GetSpriteAttr1Offset(i_val17);
      u_val4 = HW_GetPaletteBankOffset(i_val17);
      u_val5 = HW_Routine_0800894C(i_val17);
      i_val18 = 0x80e0519;
      Animal_Routine_08050D3C(i_val8,pppiVar11,p_int14,i_val13,u_val4,u_val5,arg1 + 0x380);
    }
    i_val8 = 0;
    i_val15 = 0x364;
    if (*(uint *)(arg1 + 0x364) < 0xc) {
      p_int16 = (int *)gRomData_080E0548[*(uint *)(arg1 + 0x364)];
      switch((uint)p_int16 & 0xfffffffe) {
      case 0x80f19ae:
        UNK_0x0378 = p_int14;
        pppiVar11[0x1d][5] = p_int14;
        i_val13 = p_int16[5];
        *(char *)(i_val13 + 9) = (char)p_int16;
        *(char *)((int)p_int16 + 0x15) = (char)p_int16;
        p_int16[5] = *(int *)(i_val13 + 0x34);
        i_val8 = p_int16[0x1d];
        piRam06c80014 = p_int16;
        *(int **)((int)p_int16 * 2 + 0x14) = p_int16;
        *(undefined1 *)(i_val13 + 1) = 0;
        *(undefined4 *)((int)p_int16 * 2 + 0x14) = 0x80f1aa0;
        i_val17 = p_int16[0x19];
        *(char *)(i_val13 + 0xd) = (char)i_val8;
        uRam080f1d58 = 0x80f1aa0;
        *(char *)(i_val17 + 0x15) = (char)i_val13;
        iRam00070014 = p_int16[5];
        *(int *)((iRam00070014 - (*(int *)(p_int16[0x1d] + 0x44) - (int)p_int16)) + 0x14) =
             iRam00070014;
        i_val17 = *(int *)(sRam08161c2c + 0x44) + 0x24;
        *(int *)(i_val17 * 2) = iRam00070014;
        *(char *)(p_int16 + -6) = (char)i_val17;
        _NotUsed = 0;
        i_val17 = 0x80f250f;
        (*(code *)(i_val18 + 4000))(0,0,0);
        i_val13 = 0x80f279d;
        (*(code *)(i_val17 + 0xfe0))(0,0,0);
        _NotUsed = 0;
        (*(code *)(i_val13 + 4000))(0,0,0,0);
        break;
      case 0x80f89d4:
        do {
          *p_int16 = i_val15;
          p_int16[1] = (int)pppiVar11;
          p_int16[2] = arg1;
          *gRomData_080E0548 = 0;
          gRomData_080E0548[1] = i_val15;
          gRomData_080E0548[2] = i_val8;
          gRomData_080E0548[3] = i_val13;
          gRomData_080E0548[4] = (int)pppiVar11;
          gRomData_080E0548[5] = arg1;
          gRomData_080E0548[6] = i_val13;
          gRomData_080E0548[7] = i_val15;
          gRomData_080E0548[8] = (int)pppiVar11;
          gRomData_080E0548[9] = i_val8;
          gRomData_080E0548[10] = arg1;
          i_val13 = (int)pppiVar11 << 3;
          i_val15 = i_val15 << 0x10;
          i_val8 = (int)pppiVar11 << 7;
          p_int16 = (int *)((int)pppiVar11 << 3);
          gRomData_080E0548 = p_int16;
          arg1 = _UndefinedInstruction;
        } while( true );
      }
      do {
      } while( true );
    }
    stack_val_5c = HW_Routine_080088DC(i_val17);
    _call_via_r2(*(int **)(arg1 + 0x368),&stack_val_5c,
                    *(undefined4 *)(**(int **)(arg1 + 0x368) + 0xc));
    if (*(char *)(arg1 + 0x3a0) == '\0') {
      i_val13 = HW_GetSpriteAttr0Offset(i_val17);
      pppiVar11 = (int ***)HW_GetSpriteAttr1Offset(i_val17);
      ppiVar6 = (int **)HW_GetSpriteAttr2Offset(i_val17);
      stack_val_b4 = HW_GetPaletteBankOffset(i_val17);
      stack_val_c0 = i_val13;
      ppiStack_bc = (int **)pppiVar11;
      piStack_b8 = (int *)ppiVar6;
      _call_via_r2(*(int **)(arg1 + 0x368),&stack_val_c0,
                      *(undefined4 *)(**(int **)(arg1 + 0x368) + 0x10));
    }
    else {
      p_int14 = (int *)HW_GetSpriteAttr0Offset(i_val17);
      pppiVar11 = 0x3A1;
      u_val4 = 0xFFFF;
      if (*(char *)(arg1 + (int)0x3A1) != '\0') {
        u_val4 = 0;
      }
      HW_Routine_08008F60(&stack_val_c0,u_val4,0x5000000,2);
      piStack_3c = &stack_val_c0;
      p_int16 = (int *)p_int14[1];
      if (p_int16 == (int *)p_int14[3]) {
        stack_val_54 = 1;
        stack_val_58 = (int)p_int16 - *p_int14 >> 4;
        p_int12 = &stack_val_58;
        if (stack_val_58 == 0) {
          p_int12 = &stack_val_54;
        }
        if (stack_val_58 + *p_int12 == 0) {
          pppiVar9 = (int ***)0x0;
          i_val13 = 0;
        }
        else {
          i_val13 = (stack_val_58 + *p_int12) * 0x10;
          pppiVar9 = (int ***)runtime_malloc_aligned(i_val13);
          if (pppiVar9 == (int ***)0x0) {
            pppiVar9 = (int ***)VTable_Routine_080D3BC0(i_val13);
          }
        }
        pppiVar11 = pppiVar9;
        for (p_int12 = (int *)*p_int14; p_int12 != p_int16; p_int12 = p_int12 + 4) {
          if (pppiVar11 != (int ***)0x0) {
            ppiVar6 = (int **)p_int12[1];
            ppiVar7 = (int **)p_int12[2];
            *pppiVar11 = (int **)*p_int12;
            pppiVar11[1] = ppiVar6;
            pppiVar11[2] = ppiVar7;
            pppiVar11[3] = (int **)p_int12[3];
          }
          pppiVar11 = pppiVar11 + 4;
        }
        i_val18 = stack_val_54;
        if (stack_val_54 == 1) {
          if (pppiVar11 != (int ***)0x0) {
            ppiVar6 = (int **)piStack_3c[1];
            ppiVar7 = (int **)piStack_3c[2];
            *pppiVar11 = (int **)*piStack_3c;
            pppiVar11[1] = ppiVar6;
            pppiVar11[2] = ppiVar7;
            pppiVar11[3] = (int **)piStack_3c[3];
          }
          pppiVar11 = pppiVar11 + 4;
        }
        else {
          for (; i_val18 != 0; i_val18 = i_val18 + -1) {
            if (pppiVar11 != (int ***)0x0) {
              ppiVar6 = (int **)piStack_3c[1];
              ppiVar7 = (int **)piStack_3c[2];
              *pppiVar11 = (int **)*piStack_3c;
              pppiVar11[1] = ppiVar6;
              pppiVar11[2] = ppiVar7;
              pppiVar11[3] = (int **)piStack_3c[3];
            }
            pppiVar11 = pppiVar11 + 4;
          }
        }
        for (i_val18 = *p_int14; i_val18 != p_int14[1]; i_val18 = i_val18 + 0x10) {
        }
        ppiStack_24 = (int **)pppiVar9;
        if (*p_int14 != 0) {
          cpp_operator_delete();
        }
        *p_int14 = (int)ppiStack_24;
        p_int14[1] = (int)pppiVar11;
        p_int14[3] = (int)ppiStack_24 + i_val13;
      }
      else {
        if (p_int16 != (int *)0x0) {
          *p_int16 = stack_val_c0;
          p_int16[1] = (int)ppiStack_bc;
          p_int16[2] = (int)piStack_b8;
          p_int16[3] = stack_val_b4;
        }
        p_int14[1] = p_int14[1] + 0x10;
      }
    }
    i_val13 = 0x370;
    Fade_UpdateFrame(*(undefined4 *)(arg1 + 0x370));
    HW_Routine_080087C8(i_val17);
  } while( true );
}

// =============================================================================
// Function: VTable_Routine_080E09B0 @ 0x080E09B0
// =============================================================================
void VTable_Routine_080E09B0(void)

{
  
  SramProxy_VerifyBufferParity();
  return;
}

// =============================================================================
// Function: VTable_Routine_080E09BC @ 0x080E09BC
// =============================================================================
void VTable_Routine_080E09BC(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E09E4 @ 0x080E09E4
// =============================================================================
void VTable_Routine_080E09E4(int instance,undefined4 arg1)

{
  uint u_val1;
  
  u_val1 = *(uint *)(instance + 0x1c0);
  if (u_val1 < 100) {
    *(undefined4 *)(instance + 0x30 + u_val1 * 4) = arg1;
    *(uint *)(instance + 0x1c0) = u_val1 + 1;
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E0A08 @ 0x080E0A08
// =============================================================================
u32 VTable_Routine_080E0A08(int instance)

{
  uint u_val1;
  undefined4 u_val2;
  uint u_val3;
  uint *p_uint4;
  uint *p_uint5;
  uint *p_uint6;
  uint *p_uint7;
  
  p_uint5 = *(uint **)(instance + 0xc);
  p_uint4 = *(uint **)(instance + 0x10);
  if (*(char *)(instance + 0x15) == '\0') {
    CpuFastSet(p_uint5,p_uint4,(uint)*(byte *)(instance + 0x14) << 3);
    u_val2 = 0;
  }
  else {
    p_uint6 = p_uint4 + (uint)*(byte *)(instance + 0x14) * 8;
    u_val1 = *(byte *)(instance + 0x16) ^ 1;
    *(char *)(instance + 0x16) = (char)u_val1;
    u_val3 = 0x0F0F0F0F << ((u_val1 & 0x3f) << 2);
    u_val1 = ~u_val3;
    do {
      *p_uint4 = *p_uint5 & u_val3;
      p_uint4[1] = p_uint5[1] & u_val1;
      p_uint4[2] = p_uint5[2] & u_val3;
      p_uint4[3] = p_uint5[3] & u_val1;
      p_uint4[4] = p_uint5[4] & u_val3;
      p_uint4[5] = p_uint5[5] & u_val1;
      p_uint7 = p_uint5 + 7;
      p_uint4[6] = p_uint5[6] & u_val3;
      p_uint5 = p_uint5 + 8;
      p_uint4[7] = *p_uint7 & u_val1;
      p_uint4 = p_uint4 + 8;
    } while (p_uint4 != p_uint6);
    u_val2 = 1;
  }
  return u_val2;
}

// =============================================================================
// Function: VTable_Routine_080E0A7C @ 0x080E0A7C
// =============================================================================
void VTable_Routine_080E0A7C(void)

{
  
  Farm_Routine_080098AC();
  return;
}

// =============================================================================
// Function: VTable_Routine_080E0A88 @ 0x080E0A88
// =============================================================================
void VTable_Routine_080E0A88(void)

{
  
  Farm_Routine_080098AC();
  return;
}

// =============================================================================
// Function: VTable_Routine_080E0C38 @ 0x080E0C38
// =============================================================================
void VTable_Routine_080E0C38(undefined4 *instance,uint arg1)

{
  undefined4 *p_uint1;
  int i_val3;
  int *p_int4;
  undefined4 *p_uint2;
  
  if ((instance != (undefined4 *)0xfffffc74) && (instance + 0xe3 != instance + 0x107)) {
    p_uint1 = instance + 0x107;
    do {
      p_uint2 = p_uint1 + -6;
      _call_via_r2(p_uint2,0,*(undefined4 *)(p_uint1[-4] + 0xc));
      p_uint1 = p_uint2;
    } while (instance + 0xe3 != p_uint2);
  }
  if (instance != (undefined4 *)0xfffffc8c) {
    p_uint1 = instance + 0xe3;
    while (instance + 0xdd != p_uint1) {
      p_uint2 = p_uint1 + -2;
      HW_Routine_08007C28(p_uint2,p_uint1[-1]);
      HW_Routine_080079E8(p_uint2,2);
      p_uint1 = p_uint2;
    }
  }
  if (instance != (undefined4 *)0xffffffac) {
    p_int4 = instance + 0x1c;
    while (instance + 0x15 != p_int4) {
      p_int4 = p_int4 + -1;
      i_val3 = *p_int4;
      if (i_val3 != 0) {
        Farm_Routine_080098AC(i_val3 + 8,2);
        HW_Routine_08007C28(i_val3,*(undefined4 *)(i_val3 + 4));
        HW_Routine_080079E8(i_val3,2);
        CppRuntime_FreeMemory(i_val3);
      }
    }
  }
  i_val3 = instance[0x14];
  if (i_val3 != 0) {
    Farm_Routine_080098AC(i_val3 + 8,2);
    HW_Routine_08007C28(i_val3,*(undefined4 *)(i_val3 + 4));
    HW_Routine_080079E8(i_val3,2);
    CppRuntime_FreeMemory(i_val3);
  }
  Farm_Routine_080098AC(instance + 0xe,2);
  HW_Routine_080073E0(instance + 0xc,instance[0xd]);
  HW_Routine_08007184(instance + 0xc,2);
  *instance = gRomData_080E5A28;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E0D50 @ 0x080E0D50
// =============================================================================
longlong VTable_Routine_080E0D50(int instance)

{
  
  GBA_DMA3_FastCopy(*(undefined4 *)(instance + 0xc),*(undefined4 *)(instance + 0x10),
                *(undefined4 *)(instance + 0x14));
  return 0;
}

// =============================================================================
// Function: VTable_Routine_080E0D64 @ 0x080E0D64
// =============================================================================
void VTable_Routine_080E0D64(void)

{
  
  Farm_Routine_080098AC();
  return;
}

// =============================================================================
// Function: VTable_Routine_080E0D70 @ 0x080E0D70
// =============================================================================
void VTable_Routine_080E0D70(undefined4 *instance,uint arg1)

{
  undefined4 u_val1;
  
  Farm_Routine_080098AC(instance + 0xd0,2);
  HW_Routine_08007C28(instance + 0xce,instance[0xcf]);
  HW_Routine_080079E8(instance + 0xce,2);
  Farm_Routine_080098AC(instance + 199,2);
  HW_Routine_08007C28(instance + 0xc5,instance[0xc6]);
  HW_Routine_080079E8(instance + 0xc5,2);
  Farm_Routine_080098AC(instance + 0xbf,2);
  HW_Routine_080073E0(instance + 0xbd,instance[0xbe]);
  HW_Routine_08007184(instance + 0xbd,2);
  Farm_Routine_080098AC(instance + 0xb6,2);
  HW_Routine_08007C28(instance + 0xb4,instance[0xb5]);
  HW_Routine_080079E8(instance + 0xb4,2);
  Farm_Routine_080098AC(instance + 0xad,2);
  HW_Routine_08007C28(instance + 0xaa,instance[0xab]);
  HW_Routine_080079E8(instance + 0xaa,2);
  Farm_Routine_080098AC(instance + 100,2);
  HW_Routine_08007C28(instance + 0x61,instance[0x62]);
  HW_Routine_080079E8(instance + 0x61,2);
  Farm_Routine_080098AC(instance + 0x1a,2);
  HW_Routine_080073E0(instance + 0x18,instance[0x19]);
  HW_Routine_08007184(instance + 0x18,2);
  u_val1 = gRomData_080E5A28;
  instance[0xc] = gRomData_080E5A28;
  *instance = u_val1;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E0E80 @ 0x080E0E80
// =============================================================================
u32 VTable_Routine_080E0E80(byte *instance,int arg1,uint *arg2)

{
  int i_val1;
  int i_val2;
  
  i_val1 = arg1 - (int)instance;
  while (i_val2 = i_val1, 0 < i_val2) {
    i_val1 = i_val2 >> 1;
    if ((uint)instance[i_val1] < *arg2) {
      instance = instance + i_val1 + 1;
      i_val1 = (i_val2 - i_val1) + -1;
    }
  }
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E0EB4 @ 0x080E0EB4
// =============================================================================
u32 VTable_Routine_080E0EB4(int *instance,int arg1,int *arg2)

{
  int i_val1;
  int i_val2;
  
  i_val1 = arg1 - (int)instance >> 3;
  if (0 < i_val1) {
    do {
      i_val2 = i_val1 >> 1;
      if (instance[i_val2 * 2] < *arg2) {
        instance = instance + i_val2 * 2 + 2;
        i_val2 = (i_val1 - i_val2) + -1;
      }
      i_val1 = i_val2;
    } while (0 < i_val2);
  }
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E0EF0 @ 0x080E0EF0
// =============================================================================
void VTable_Routine_080E0EF0(void)

{
  
  ScriptEngine_Routine_0803EEC8();
  return;
}

// =============================================================================
// Function: VTable_Routine_080E0EFC @ 0x080E0EFC
// =============================================================================
void VTable_Routine_080E0EFC(uint instance,int arg1)

{
  uint u_val1;
  char *p_char2;
  
  p_char2 = (char *)(arg1 + 1);
  u_val1 = 10;
  if (9 < instance) {
    p_char2 = (char *)(arg1 + 2);
    do {
      u_val1 = u_val1 * 10;
      if (instance < u_val1) break;
      p_char2 = p_char2 + 1;
    } while (u_val1 < 0x19999999 || u_val1 - 0x19999999 == 0);
  }
  *p_char2 = '\0';
  do {
    p_char2 = p_char2 + -1;
    u_val1 = math_divsi3(instance,10);
    *p_char2 = (char)instance + (char)u_val1 * -10 + '0';
    instance = u_val1;
  } while (u_val1 != 0);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E0F48 @ 0x080E0F48
// =============================================================================
longlong VTable_Routine_080E0F48(int instance)

{
  int *p_int1;
  int *p_int2;
  int *p_int3;
  
  p_int3 = *(int **)(instance + 0xc);
  if (*p_int3 != 0) {
    p_int2 = p_int3 + 1;
    GBA_Bios_CpuCopyDescriptorList(p_int2,p_int2 + *p_int3 * 4);
    for (p_int1 = p_int2; p_int1 != p_int3 + *p_int3 * 4 + 1; p_int1 = p_int1 + 4) {
    }
    *p_int3 = *p_int3 - ((int)(p_int3 + *p_int3 * 4 + 1) - (int)p_int2 >> 4);
  }
  return 0;
}

// =============================================================================
// Function: VTable_Routine_080E0F90 @ 0x080E0F90
// =============================================================================
longlong VTable_Routine_080E0F90(int instance)

{
  int pos_y;
  int i_val2;
  int i_val3;
  int loop_i;
  int i_val5;
  int *p_int6;
  int i_val7;
  
  pos_y = *(int *)(instance + 0xc);
  loop_i = 0;
  do {
    i_val7 = 0;
    i_val2 = loop_i * 4;
    loop_i = loop_i + 1;
    do {
      p_int6 = (int *)(*(int *)(i_val2 + pos_y + 8) + i_val7 * 0x10);
      if ((char)p_int6[3] != '\0') {
        if ((-p_int6[2] | p_int6[2]) < 0) {
          i_val5 = *p_int6;
          i_val3 = GBA_Vram_AllocateTileBlock(p_int6 + 1);
          CpuFastSet(i_val5 + 4,i_val3 * 0x20 + 0x06010000,0x40);
        }
        *(undefined1 *)(p_int6 + 3) = 0;
      }
      i_val7 = i_val7 + 1;
    } while (i_val7 < 7);
  } while (loop_i < 3);
  if (*(char *)(pos_y + 0x19) != '\0') {
    *(undefined1 *)(pos_y + 0x19) = 0;
  }
  if (*(char *)(pos_y + 0x1a) != '\0') {
    *(undefined1 *)(pos_y + 0x1a) = 0;
  }
  return 0;
}

// =============================================================================
// Function: VTable_Routine_080E1018 @ 0x080E1018
// =============================================================================
void VTable_Routine_080E1018(void)

{
  
  Farm_Routine_080098AC();
  return;
}

// =============================================================================
// Function: VTable_Routine_080E1024 @ 0x080E1024
// =============================================================================
void VTable_Routine_080E1024(void)

{
  
  Farm_Routine_080098AC();
  return;
}

// =============================================================================
// Function: VTable_Routine_080E1030 @ 0x080E1030
// =============================================================================
void VTable_Routine_080E1030(void)

{
  
  Farm_Routine_080098AC();
  return;
}

// =============================================================================
// Function: VTable_Routine_080E103C @ 0x080E103C
// =============================================================================
void VTable_Routine_080E103C(undefined4 *instance,uint arg1)

{
  
  *instance = gRomData_080E78F0;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E105C @ 0x080E105C
// =============================================================================
void VTable_Routine_080E105C(undefined4 *instance,uint arg1)

{
  undefined4 *p_uint1;
  undefined4 *p_uint2;
  int *p_int3;
  
  if ((instance != (undefined4 *)0xfffffff8) && (p_int3 = instance + 5, instance + 2 != p_int3)) {
    do {
      p_int3 = p_int3 + -1;
      p_uint2 = (undefined4 *)*p_int3;
      if (p_uint2 != (undefined4 *)0x0) {
        p_uint1 = p_uint2 + 0x1c;
        while (p_uint2 != p_uint1) {
          HW_Routine_08007C28(p_uint1 + -3,p_uint1[-2]);
          HW_Routine_080079E8(p_uint1 + -3,2);
          CppRuntime_FreeMemory(p_uint1[-4]);
          p_uint1 = p_uint1 + -4;
        }
        CppRuntime_FreeMemory(p_uint2);
      }
    } while (instance + 2 != p_int3);
  }
  *instance = gRomData_080E7908;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E10E0 @ 0x080E10E0
// =============================================================================
void VTable_Routine_080E10E0(void)

{
  
  Farm_Routine_080098AC();
  return;
}

// =============================================================================
// Function: VTable_Routine_080E10F8 @ 0x080E10F8
// =============================================================================
void VTable_Routine_080E10F8(undefined4 *instance,uint arg1)

{
  
  *instance = gRomData_080E78F0;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E1128 @ 0x080E1128
// =============================================================================
void VTable_Routine_080E1128(undefined4 *instance,uint arg1)

{
  
  *instance = gRomData_080E7908;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E1148 @ 0x080E1148
// =============================================================================
void VTable_Routine_080E1148(int instance,undefined4 arg1)

{
  
  HW_Routine_080073E0(instance + 0xb0,*(undefined4 *)(instance + 0xb4));
  HW_Routine_08007184(instance + 0xb0,2);
  HW_Routine_08007C28(instance + 0xa8,*(undefined4 *)(instance + 0xac));
  HW_Routine_080079E8(instance + 0xa8,2);
  *(undefined4 *)(instance + 0x10) = gRomData_080E5A28;
  HW_Routine_080086BC(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E118C @ 0x080E118C
// =============================================================================
u32 VTable_Routine_080E118C(undefined1 *instance,int arg1,int arg2)

{
  undefined4 u_val1;
  uint u_val2;
  undefined1 stack_buf_34 [32];
  undefined1 facing_buffer [4];
  
  if (arg2 == 0xff) {
    Item_SetQuality(facing_buffer,*(undefined2 *)(arg1 + 4));
    u_val1 = Item_Routine_0800DF58(facing_buffer);
    u_val2 = gba_strlen();
    if (0x1f < u_val2) {
      u_val2 = 0x1f;
    }
    gba_memcpy(stack_buf_34,u_val1,u_val2);
    stack_buf_34[u_val2] = 0;
    *instance = 1;
    gba_strcpy(instance + 4,stack_buf_34);
  }
  else {
    stack_buf_34[0] = 0;
    *instance = 0;
    gba_strcpy(instance + 4);
  }
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E11EC @ 0x080E11EC
// =============================================================================
void VTable_Routine_080E11EC(int instance,undefined4 arg1)

{
  undefined4 u_val1;
  int i_val2;
  int i_val3;
  
  *(undefined4 *)(instance + 0x23A0) = gRomData_080E76F8;
  if (instance != -0x548) {
    i_val3 = instance + 0x558;
    while (instance + 0x548 != i_val3) {
      i_val2 = i_val3 + -8;
      HW_Routine_080073E0(i_val2,*(undefined4 *)(i_val3 + -4));
      HW_Routine_08007184(i_val2,2);
      i_val3 = i_val2;
    }
  }
  HW_Routine_08007C28(instance + 0x540,*(undefined4 *)(instance + 0x544));
  HW_Routine_080079E8(instance + 0x540,2);
  if ((instance != -0x500) && (i_val3 = instance + 0x540, instance + 0x500 != instance + 0x540)) {
    do {
      i_val2 = i_val3 + -0x10;
      HW_Routine_080073E0(i_val3 + -8,*(undefined4 *)(i_val3 + -4));
      HW_Routine_08007184(i_val3 + -8,2);
      HW_Routine_08007C28(i_val2,*(undefined4 *)(i_val3 + -0xc));
      HW_Routine_080079E8(i_val2,2);
      i_val3 = i_val2;
    } while (instance + 0x500 != i_val2);
  }
  HW_Routine_080073E0(instance + 0x4f8,*(undefined4 *)(instance + 0x4fc));
  HW_Routine_08007184(instance + 0x4f8,2);
  HW_Routine_08007C28(instance + 0x4f0,*(undefined4 *)(instance + 0x4f4));
  HW_Routine_080079E8(instance + 0x4f0,2);
  HW_Routine_080073E0(instance + 0x4e8,*(undefined4 *)(instance + 0x4ec));
  HW_Routine_08007184(instance + 0x4e8,2);
  HW_Routine_08007C28(instance + 0x4e0,*(undefined4 *)(instance + 0x4e4));
  HW_Routine_080079E8(instance + 0x4e0,2);
  HW_Routine_080073E0(instance + 0x4d8,*(undefined4 *)(instance + 0x4dc));
  HW_Routine_08007184(instance + 0x4d8,2);
  HW_Routine_08007C28(instance + 0x4d0,*(undefined4 *)(instance + 0x4d4));
  HW_Routine_080079E8(instance + 0x4d0,2);
  HW_Routine_08007C28(instance + 0x4c8,*(undefined4 *)(instance + 0x4cc));
  HW_Routine_080079E8(instance + 0x4c8,2);
  HW_Routine_080073E0(instance + 0x4c0,*(undefined4 *)(instance + 0x4c4));
  HW_Routine_08007184(instance + 0x4c0,2);
  HW_Routine_08007C28(instance + 0x4b8,*(undefined4 *)(instance + 0x4bc));
  HW_Routine_080079E8(instance + 0x4b8,2);
  HW_Routine_080073E0(instance + 0x4b0,*(undefined4 *)(instance + 0x4b4));
  HW_Routine_08007184(instance + 0x4b0,2);
  HW_Routine_08007C28(instance + 0x4a8,*(undefined4 *)(instance + 0x4ac));
  HW_Routine_080079E8(instance + 0x4a8,2);
  HW_Routine_080073E0(instance + 0x4a0,*(undefined4 *)(instance + 0x4a4));
  HW_Routine_08007184(instance + 0x4a0,2);
  HW_Routine_08007C28(instance + 0x498,*(undefined4 *)(instance + 0x49c));
  HW_Routine_080079E8(instance + 0x498,2);
  HW_Routine_080073E0(instance + 0x490,*(undefined4 *)(instance + 0x494));
  HW_Routine_08007184(instance + 0x490,2);
  HW_Routine_08007C28(instance + 0x488,*(undefined4 *)(instance + 0x48c));
  HW_Routine_080079E8(instance + 0x488,2);
  HW_Routine_080073E0(instance + 0x480,*(undefined4 *)(instance + 0x484));
  HW_Routine_08007184(instance + 0x480,2);
  HW_Routine_08007C28(instance + 0x478,*(undefined4 *)(instance + 0x47c));
  HW_Routine_080079E8(instance + 0x478,2);
  HW_Routine_080073E0(instance + 0x470,*(undefined4 *)(instance + 0x474));
  HW_Routine_08007184(instance + 0x470,2);
  HW_Routine_08007C28(instance + 0x468,*(undefined4 *)(instance + 0x46c));
  HW_Routine_080079E8(instance + 0x468,2);
  u_val1 = gRomData_080E5A28;
  *(undefined4 *)(instance + 0x1d0) = gRomData_080E5A28;
  *(undefined4 *)(instance + 0x1a0) = u_val1;
  *(undefined4 *)(instance + 0x170) = u_val1;
  *(undefined4 *)(instance + 0x140) = u_val1;
  *(undefined4 *)(instance + 0x110) = u_val1;
  *(undefined4 *)(instance + 0xe0) = u_val1;
  *(undefined4 *)(instance + 0xb0) = u_val1;
  *(undefined4 *)(instance + 0x80) = u_val1;
  *(undefined4 *)(instance + 0x50) = u_val1;
  *(undefined4 *)(instance + 0x20) = u_val1;
  if (*(int *)(instance + 0x10) != 0) {
    Animal_Routine_08050D0C(*(int *)(instance + 0x10),3);
  }
  HW_Routine_080086BC(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E1498 @ 0x080E1498
// =============================================================================
void VTable_Routine_080E1498(undefined4 *instance,uint arg1)

{
  
  *instance = gRomData_080E76F8;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E14B8 @ 0x080E14B8
// =============================================================================
u32 VTable_Routine_080E14B8(undefined1 *instance,int arg1,int arg2)

{
  undefined1 *p_uint1;
  uint u_val2;
  int pos_x;
  undefined4 u_val4;
  undefined1 temp_buf_3c [40];
  
  if (5 < arg2 - 0xfaU) {
    temp_buf_3c[8] = 0;
    *instance = 0;
    gba_strcpy(instance + 4);
    goto LAB_080e15b6;
  }
  switch(*(uint *)((arg2 - 0xfaU) * 4 + gRomData_080E14D8) & 0xfffffffe) {
  case 0x80e14d8:
  case 0x80e14f0:
    ScriptEngine_Routine_0804EC84(*(undefined4 *)(arg1 + 0x14),temp_buf_3c,0);
    p_uint1 = temp_buf_3c + 8;
    u_val2 = gba_strlen(temp_buf_3c);
    if (0x1f < u_val2) {
      u_val2 = 0x1f;
    }
    gba_memcpy(p_uint1,temp_buf_3c,u_val2);
    p_uint1[u_val2] = 0;
    *instance = 1;
    gba_strcpy(instance + 4,p_uint1);
    goto LAB_080e15b6;
  case 0x80e1528:
    pos_x = *(int *)(arg1 + 4);
    break;
  case 0x80e152c:
    pos_x = *(int *)(arg1 + 8);
    break;
  case 0x80e1530:
    pos_x = *(int *)(arg1 + 0xc);
    break;
  case 0x80e1534:
    pos_x = *(int *)(arg1 + 0x10);
    break;
  case 0x80e1588:
    goto case_080E1588;
  }
  if (pos_x == 0x80) {
case_080E1588:
    u_val4 = *(undefined4 *)(arg1 + 0x18);
    u_val2 = gba_strlen(u_val4);
    if (0x1f < u_val2) {
      u_val2 = 0x1f;
    }
    gba_memcpy(temp_buf_3c,u_val4,u_val2);
    temp_buf_3c[u_val2] = 0;
    *instance = 1;
    gba_strcpy(instance + 4,temp_buf_3c);
  }
  else {
    p_uint1 = temp_buf_3c + 8;
    pos_x = pos_x * 0xd + gRomData_080FA796;
    u_val2 = gba_strlen(pos_x);
    if (0x1f < u_val2) {
      u_val2 = 0x1f;
    }
    gba_memcpy(p_uint1,pos_x,u_val2);
    p_uint1[u_val2] = 0;
    *instance = 1;
    gba_strcpy(instance + 4,p_uint1);
  }
LAB_080e15b6:
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E1824 @ 0x080E1824
// =============================================================================
void VTable_Routine_080E1824(undefined4 *instance,uint arg1)

{
  
  *instance = gRomData_080E76F8;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E1844 @ 0x080E1844
// =============================================================================
u32 VTable_Routine_080E1844(undefined1 *instance,int arg1,int arg2)

{
  uint u_val1;
  int i_val2;
  undefined1 temp_buf_30 [32];
  
  if (arg2 == 0xff) {
    i_val2 = *(int *)(arg1 + 4) * 0x14 + gRomData_080FB000;
    u_val1 = gba_strlen(i_val2);
    if (0x1f < u_val1) {
      u_val1 = 0x1f;
    }
    gba_memcpy(temp_buf_30,i_val2,u_val1);
    temp_buf_30[u_val1] = 0;
    *instance = 1;
    gba_strcpy(instance + 4,temp_buf_30);
  }
  else {
    temp_buf_30[0] = 0;
    *instance = 0;
    gba_strcpy(instance + 4);
  }
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E18A4 @ 0x080E18A4
// =============================================================================
void VTable_Routine_080E18A4(int instance,undefined4 arg1)

{
  undefined4 u_val1;
  
  *(undefined4 *)(instance + 0xAEC) = gRomData_080E76F8;
  HW_Routine_080073E0(instance + 0x144,*(undefined4 *)(instance + 0x148));
  HW_Routine_08007184(instance + 0x144,2);
  HW_Routine_08007C28(instance + 0x13c,*(undefined4 *)(instance + 0x140));
  HW_Routine_080079E8(instance + 0x13c,2);
  HW_Routine_080073E0(instance + 0x134,*(undefined4 *)(instance + 0x138));
  HW_Routine_08007184(instance + 0x134,2);
  HW_Routine_08007C28(instance + 300,*(undefined4 *)(instance + 0x130));
  HW_Routine_080079E8(instance + 300,2);
  HW_Routine_080073E0(instance + 0x124,*(undefined4 *)(instance + 0x128));
  HW_Routine_08007184(instance + 0x124,2);
  HW_Routine_08007C28(instance + 0x11c,*(undefined4 *)(instance + 0x120));
  HW_Routine_080079E8(instance + 0x11c,2);
  u_val1 = gRomData_080E5A28;
  *(undefined4 *)(instance + 0x50) = gRomData_080E5A28;
  *(undefined4 *)(instance + 0x20) = u_val1;
  if (*(int *)(instance + 0x10) != 0) {
    Animal_Routine_08050D0C(*(int *)(instance + 0x10),3);
  }
  HW_Routine_080086BC(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E1964 @ 0x080E1964
// =============================================================================
void VTable_Routine_080E1964(undefined4 *instance,uint arg1)

{
  
  *instance = gRomData_080E76F8;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E1984 @ 0x080E1984
// =============================================================================
void VTable_Routine_080E1984(undefined4 *instance,uint arg1)

{
  
  *instance = gRomData_080E5A28;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E19A4 @ 0x080E19A4
// =============================================================================
u32 VTable_Routine_080E19A4(undefined1 *instance,int arg1,int arg2)

{
  uint u_val1;
  undefined4 u_val2;
  undefined1 temp_buf_30 [32];
  
  if (arg2 == 0xff) {
    u_val2 = *(undefined4 *)(arg1 + 4);
    u_val1 = gba_strlen(u_val2);
    if (0x1f < u_val1) {
      u_val1 = 0x1f;
    }
    gba_memcpy(temp_buf_30,u_val2,u_val1);
    temp_buf_30[u_val1] = 0;
    *instance = 1;
    gba_strcpy(instance + 4,temp_buf_30);
  }
  else {
    temp_buf_30[0] = 0;
    *instance = 0;
    gba_strcpy(instance + 4);
  }
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E19F8 @ 0x080E19F8
// =============================================================================
void VTable_Routine_080E19F8(int instance,undefined4 arg1)

{
  
  *(undefined4 *)(instance + _ASSET_BLOCK_080E1A20) = gRomData_080E76F8;
  if (*(int *)(instance + 0x10) != 0) {
    Animal_Routine_08050D0C(*(int *)(instance + 0x10),3);
  }
  HW_Routine_080086BC(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E1A48 @ 0x080E1A48
// =============================================================================
u32 VTable_Routine_080E1A48(void)

{
  
  Animal_Routine_08076EA8();
  return 1;
}

// =============================================================================
// Function: VTable_Routine_080E1A54 @ 0x080E1A54
// =============================================================================
void VTable_Routine_080E1A54(int instance)

{
  
  *(undefined4 *)(instance + 0x9C4) = gRomData_080E5A28;
  Animal_Routine_08076E0C();
  return;
}

// =============================================================================
// Function: VTable_Routine_080E1A70 @ 0x080E1A70
// =============================================================================
u32 VTable_Routine_080E1A70(undefined4 *instance)

{
  byte b_flag1;
  byte *pbVar2;
  short *psVar3;
  uint *p_uint4;
  uint loop_i;
  undefined4 stack_val_34;
  undefined2 stack_val_30;
  undefined4 stack_val_2c;
  undefined2 stack_val_28;
  short *psStack_24;
  
  Animal_Routine_08076EA8();
  loop_i = 0;
  if (*(short *)((int)instance + 0x1268) + 0x30 < (int)*(short *)(instance + 0x164)) {
    psVar3 = (short *)((int)instance + 0x1268);
    do {
      psVar3 = psVar3 + 8;
      loop_i = loop_i + 1;
    } while (*psVar3 + 0x30 < (int)*(short *)(instance + 0x164));
  }
  psStack_24 = (short *)((int)instance + 0x163C);
  if (loop_i < *(uint *)((int)instance + 0x1264)) {
    p_uint4 = (uint *)(0x1264 + (int)instance);
    psVar3 = (short *)(loop_i * 0x10 + 0x1268 + (int)instance);
    do {
      if ((int)*psVar3 <= *(short *)(instance + 0x164) + 0xa0) {
        pbVar2 = (byte *)HW_GetSpriteAttr2Offset(*instance);
        ScriptEngine_Routine_0804EA94(&stack_val_34,*(undefined4 *)(psVar3 + 2),
                      (int)*psVar3 - (int)*(short *)(instance + 0x164),0x10,2,1,1,0);
        b_flag1 = *pbVar2;
        if (b_flag1 < 0x80) {
          *(undefined4 *)(pbVar2 + (uint)b_flag1 * 8 + 4) = stack_val_34;
          *(undefined2 *)(pbVar2 + (uint)b_flag1 * 8 + 4 + 4) = stack_val_30;
          *pbVar2 = b_flag1 + 1;
        }
      }
      psVar3 = psVar3 + 8;
      loop_i = loop_i + 1;
    } while (loop_i < *p_uint4);
  }
  loop_i = 0;
  if (*psStack_24 + 0x30 < (int)*(short *)(instance + 0x164)) {
    psVar3 = (short *)((int)instance + 0x163C);
    do {
      psVar3 = psVar3 + 8;
      loop_i = loop_i + 1;
    } while (*psVar3 + 0x30 < (int)*(short *)(instance + 0x164));
  }
  if (loop_i < *(uint *)((int)instance + 0x1638)) {
    p_uint4 = (uint *)(0x1638 + (int)instance);
    psVar3 = (short *)(loop_i * 0x10 + 0x163C + (int)instance);
    do {
      if ((int)*psVar3 <= *(short *)(instance + 0x164) + 0xa0) {
        pbVar2 = (byte *)HW_GetSpriteAttr2Offset(*instance);
        ScriptEngine_Routine_0804EA94(&stack_val_2c,*(undefined4 *)(psVar3 + 2),
                      (int)*psVar3 - (int)*(short *)(instance + 0x164),5,1,1,0,0);
        b_flag1 = *pbVar2;
        if (b_flag1 < 0x80) {
          *(undefined4 *)(pbVar2 + (uint)b_flag1 * 8 + 4) = stack_val_2c;
          *(undefined2 *)(pbVar2 + (uint)b_flag1 * 8 + 4 + 4) = stack_val_28;
          *pbVar2 = b_flag1 + 1;
        }
      }
      psVar3 = psVar3 + 8;
      loop_i = loop_i + 1;
    } while (loop_i < *p_uint4);
  }
  return 1;
}

// =============================================================================
// Function: VTable_Routine_080E1C18 @ 0x080E1C18
// =============================================================================
void VTable_Routine_080E1C18(int instance,undefined4 arg1)

{
  int *p_int1;
  
  for (p_int1 = (int *)(instance + 0x163C);
      p_int1 != (int *)(instance + 0x1638) + *(int *)(instance + 0x1638) * 4 + 1;
      p_int1 = p_int1 + 4) {
  }
  for (p_int1 = (int *)(instance + 0x1268);
      p_int1 != (int *)(instance + 0x1264) + *(int *)(instance + 0x1264) * 4 + 1;
      p_int1 = p_int1 + 4) {
  }
  Animal_Routine_08076E0C(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E1C70 @ 0x080E1C70
// =============================================================================
u32 VTable_Routine_080E1C70(undefined4 *instance)

{
  byte b_flag1;
  byte *pbVar2;
  short *psVar3;
  uint *p_uint4;
  uint loop_i;
  undefined4 stack_val_28;
  undefined2 stack_val_24;
  
  Animal_Routine_08076EA8();
  loop_i = 0;
  if (*(short *)((int)instance + 0x2168) + 0x30 < (int)*(short *)(instance + 0x164)) {
    psVar3 = (short *)((int)instance + 0x2168);
    do {
      psVar3 = psVar3 + 8;
      loop_i = loop_i + 1;
    } while (*psVar3 + 0x30 < (int)*(short *)(instance + 0x164));
  }
  if (loop_i < *(uint *)((int)instance + 0x2164)) {
    p_uint4 = (uint *)(0x2164 + (int)instance);
    psVar3 = (short *)(loop_i * 0x10 + 0x2168 + (int)instance);
    do {
      if ((int)*psVar3 <= *(short *)(instance + 0x164) + 0xa0) {
        pbVar2 = (byte *)HW_GetSpriteAttr2Offset(*instance);
        ScriptEngine_Routine_0804EA94(&stack_val_28,*(undefined4 *)(psVar3 + 2),
                      (int)*psVar3 - (int)*(short *)(instance + 0x164),5,1,1,0,0);
        b_flag1 = *pbVar2;
        if (b_flag1 < 0x80) {
          *(undefined4 *)(pbVar2 + (uint)b_flag1 * 8 + 4) = stack_val_28;
          *(undefined2 *)(pbVar2 + (uint)b_flag1 * 8 + 4 + 4) = stack_val_24;
          *pbVar2 = b_flag1 + 1;
        }
      }
      psVar3 = psVar3 + 8;
      loop_i = loop_i + 1;
    } while (loop_i < *p_uint4);
  }
  return 1;
}

// =============================================================================
// Function: VTable_Routine_080E1D54 @ 0x080E1D54
// =============================================================================
void VTable_Routine_080E1D54(int instance,undefined4 arg1)

{
  int *p_int1;
  
  for (p_int1 = (int *)(instance + 0x2168);
      p_int1 != (int *)(instance + 0x2164) + *(int *)(instance + 0x2164) * 4 + 1;
      p_int1 = p_int1 + 4) {
  }
  Animal_Routine_08076E0C(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E1D8C @ 0x080E1D8C
// =============================================================================
void VTable_Routine_080E1D8C(void)

{
  
  Animal_Routine_08076E0C();
  return;
}

// =============================================================================
// Function: VTable_Routine_080E1D98 @ 0x080E1D98
// =============================================================================
void VTable_Routine_080E1D98(void)

{
  
  Animal_Routine_08076E0C();
  return;
}

// =============================================================================
// Function: VTable_Routine_080E1DA4 @ 0x080E1DA4
// =============================================================================
void VTable_Routine_080E1DA4(void)

{
  
  Animal_Routine_08076E0C();
  return;
}

// =============================================================================
// Function: VTable_Routine_080E1DB0 @ 0x080E1DB0
// =============================================================================
void VTable_Routine_080E1DB0(void)

{
  
  Animal_Routine_08076E0C();
  return;
}

// =============================================================================
// Function: VTable_Routine_080E1DBC @ 0x080E1DBC
// =============================================================================
u32 VTable_Routine_080E1DBC(void)

{
  
  Animal_Routine_08076EA8();
  return 1;
}

// =============================================================================
// Function: VTable_Routine_080E1DC8 @ 0x080E1DC8
// =============================================================================
void VTable_Routine_080E1DC8(void)

{
  
  Animal_Routine_08076E0C();
  return;
}

// =============================================================================
// Function: VTable_Routine_080E1DD4 @ 0x080E1DD4
// =============================================================================
void VTable_Routine_080E1DD4(int instance,undefined4 arg1)

{
  int *p_int1;
  int pos_x;
  
  for (p_int1 = (int *)(instance + 0x128);
      p_int1 != (int *)(instance + 0x124) + *(int *)(instance + 0x124) * 2 + 1; p_int1 = p_int1 + 2) {
  }
  *(undefined4 *)(instance + 0xc) = gRomData_080E5A28;
  pos_x = *(int *)(instance + 8);
  if (pos_x != 0) {
    _call_via_r2(pos_x,3,*(undefined4 *)(*(int *)(pos_x + 0x5B4) + 8));
  }
  HW_Routine_080086BC(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E1E28 @ 0x080E1E28
// =============================================================================
void VTable_Routine_080E1E28(int instance,undefined4 arg1)

{
  undefined4 u_val1;
  int *p_int2;
  int vel_y;
  int i_val4;
  int vel_x;
  int *p_int6;
  
  if ((instance + 0x4120 != 0) &&
     (vel_y = instance + 0x4120 + 0x50, instance + 0x4120 != vel_y)) {
    vel_x = instance + 0x4120;
    do {
      i_val4 = vel_y + -8;
      HW_Routine_080073E0(i_val4,*(undefined4 *)(vel_y + -4));
      HW_Routine_08007184(i_val4,2);
      vel_y = i_val4;
    } while (vel_x != i_val4);
  }
  p_int6 = (int *)(instance + 0x3FA8);
  p_int2 = (int *)(0x3EA4 + instance);
  if ((instance + 0x40D0 != 0) && (instance + 0x40D0 != instance + 0x4120)) {
    vel_x = instance + 0x40D0;
    vel_y = instance + 0x4120;
    do {
      i_val4 = vel_y + -8;
      HW_Routine_08007C28(i_val4,*(undefined4 *)(vel_y + -4));
      HW_Routine_080079E8(i_val4,2);
      vel_y = i_val4;
    } while (vel_x != i_val4);
  }
  vel_y = instance + 0x40C8;
  HW_Routine_080073E0(vel_y,*(undefined4 *)(vel_y + 4));
  HW_Routine_08007184(vel_y,2);
  vel_y = instance + 0x40C0;
  HW_Routine_08007C28(vel_y,*(undefined4 *)(vel_y + 4));
  HW_Routine_080079E8(vel_y,2);
  vel_y = instance + 0x40B8;
  HW_Routine_080073E0(vel_y,*(undefined4 *)(vel_y + 4));
  HW_Routine_08007184(vel_y,2);
  vel_y = instance + 0x40B0;
  HW_Routine_08007C28(vel_y,*(undefined4 *)(vel_y + 4));
  HW_Routine_080079E8(vel_y,2);
  for (; p_int6 != (int *)(instance + 0x3FA4) + *(int *)(instance + 0x3FA4) * 3 + 1;
      p_int6 = p_int6 + 3) {
  }
  for (; p_int2 != (int *)(instance + 0x3EA0) + *(int *)(instance + 0x3EA0) * 4 + 1;
      p_int2 = p_int2 + 4) {
  }
  Animal_Routine_08050D0C(instance + 0x134,2);
  u_val1 = gRomData_080E5A28;
  *(undefined4 *)(instance + 0x54) = gRomData_080E5A28;
  *(undefined4 *)(instance + 0x24) = u_val1;
  vel_y = *(int *)(instance + 0x1c);
  if (vel_y != 0) {
    Animal_Routine_08075DEC(vel_y + 0x28,2);
    for (vel_x = *(int *)(vel_y + 0x18); vel_x != *(int *)(vel_y + 0x1c); vel_x = vel_x + 0x40) {
    }
    if (*(int *)(vel_y + 0x18) != 0) {
      cpp_operator_delete();
    }
    CppRuntime_FreeMemory(vel_y);
  }
  p_int6 = *(int **)(instance + 8);
  if (p_int6 != (int *)0x0) {
    _call_via_r2(p_int6,3,*(undefined4 *)(*p_int6 + 8));
  }
  HW_Routine_080086BC(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E1FAC @ 0x080E1FAC
// =============================================================================
void VTable_Routine_080E1FAC(int instance,undefined4 arg1)

{
  
  HW_Routine_080073E0(instance + 0x30,*(undefined4 *)(instance + 0x34));
  HW_Routine_08007184(instance + 0x30,2);
  HW_Routine_08007C28(instance + 0x28,*(undefined4 *)(instance + 0x2c));
  HW_Routine_080079E8(instance + 0x28,2);
  HW_Routine_080073E0(instance + 0x20,*(undefined4 *)(instance + 0x24));
  HW_Routine_08007184(instance + 0x20,2);
  HW_Routine_08007C28(instance + 0x18,*(undefined4 *)(instance + 0x1c));
  HW_Routine_080079E8(instance + 0x18,2);
  if (*(int *)(instance + 0xc) != 0) {
    Animal_Routine_08050D0C(*(int *)(instance + 0xc),3);
  }
  HW_Routine_080086BC(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E2018 @ 0x080E2018
// =============================================================================
void VTable_Routine_080E2018(int instance,undefined4 arg1)

{
  undefined4 u_val1;
  int *p_int2;
  int i_val3;
  
  if (instance != -0xe0) {
    i_val3 = instance + 0x1a0;
    while (instance + 0xe0 != i_val3) {
      i_val3 = i_val3 + -0x30;
      VTable_Routine_080E20C0(i_val3,0);
    }
  }
  for (i_val3 = *(int *)(instance + 0xd0); i_val3 != *(int *)(instance + 0xd4); i_val3 = i_val3 + 0x1c) {
  }
  if (*(int *)(instance + 0xd0) != 0) {
    cpp_operator_delete();
  }
  u_val1 = gRomData_080E5A28;
  *(undefined4 *)(instance + 0xa0) = gRomData_080E5A28;
  *(undefined4 *)(instance + 0x20) = u_val1;
  Animal_Routine_080756D0(instance + 0x18,2);
  p_int2 = *(int **)(instance + 0xc);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  HW_Routine_080086BC(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E20C0 @ 0x080E20C0
// =============================================================================
void VTable_Routine_080E20C0(int *instance,uint arg1)

{
  
  if (instance[8] != 0) {
    cpp_operator_delete();
  }
  if (instance[4] != 0) {
    cpp_operator_delete();
  }
  if (*instance != 0) {
    cpp_operator_delete();
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E20F8 @ 0x080E20F8
// =============================================================================
void VTable_Routine_080E20F8(void)

{
  
  Animal_Routine_08070C88();
  return;
}

// =============================================================================
// Function: VTable_Routine_080E2104 @ 0x080E2104
// =============================================================================
void VTable_Routine_080E2104(void)

{
  
  Animal_Routine_08070C88();
  return;
}

// =============================================================================
// Function: VTable_Routine_080E2110 @ 0x080E2110
// =============================================================================
void VTable_Routine_080E2110(void)

{
  
  Animal_Routine_08070C88();
  return;
}

// =============================================================================
// Function: VTable_Routine_080E211C @ 0x080E211C
// =============================================================================
void VTable_Routine_080E211C(int instance,undefined4 arg1)

{
  int *p_int1;
  int pos_x;
  
  for (p_int1 = (int *)(instance + 0x128);
      p_int1 != (int *)(instance + 0x124) + *(int *)(instance + 0x124) * 2 + 1; p_int1 = p_int1 + 2) {
  }
  *(undefined4 *)(instance + 0xc) = gRomData_080E5A28;
  pos_x = *(int *)(instance + 8);
  if (pos_x != 0) {
    _call_via_r2(pos_x,3,*(undefined4 *)(*(int *)(pos_x + 0x5B4) + 8));
  }
  HW_Routine_080086BC(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E2170 @ 0x080E2170
// =============================================================================
void VTable_Routine_080E2170(int instance,int *arg1)

{
  int i_val1;
  int pos_y;
  
  pos_y = *(int *)(instance + 0xc);
  *(undefined4 *)(instance + 0xc) = *(undefined4 *)(pos_y + 8);
  if (*(int *)(pos_y + 8) != 0) {
    *(int *)(*(int *)(pos_y + 8) + 4) = instance;
  }
  *(undefined4 *)(pos_y + 4) = *(undefined4 *)(instance + 4);
  if (instance == *arg1) {
    *arg1 = pos_y;
  }
  else {
    i_val1 = *(int *)(instance + 4);
    if (instance == *(int *)(i_val1 + 8)) {
      *(int *)(i_val1 + 8) = pos_y;
    }
    else {
      *(int *)(i_val1 + 0xc) = pos_y;
    }
  }
  *(int *)(pos_y + 8) = instance;
  *(int *)(instance + 4) = pos_y;
  return;
}

// =============================================================================
// Function: VTable_Routine_080E21A8 @ 0x080E21A8
// =============================================================================
void VTable_Routine_080E21A8(int instance,int *arg1)

{
  int i_val1;
  int pos_x;
  
  pos_x = *(int *)(instance + 8);
  *(undefined4 *)(instance + 8) = *(undefined4 *)(pos_x + 0xc);
  if (*(int *)(pos_x + 0xc) != 0) {
    *(int *)(*(int *)(pos_x + 0xc) + 4) = instance;
  }
  *(undefined4 *)(pos_x + 4) = *(undefined4 *)(instance + 4);
  if (instance == *arg1) {
    *arg1 = pos_x;
  }
  else {
    i_val1 = *(int *)(instance + 4);
    if (instance == *(int *)(i_val1 + 0xc)) {
      *(int *)(i_val1 + 0xc) = pos_x;
    }
    else {
      *(int *)(i_val1 + 8) = pos_x;
    }
  }
  *(int *)(pos_x + 0xc) = instance;
  *(int *)(instance + 4) = pos_x;
  return;
}

// =============================================================================
// Function: VTable_Routine_080E21E0 @ 0x080E21E0
// =============================================================================
void VTable_Routine_080E21E0(undefined1 *instance,undefined4 *arg1)

{
  char c_char1;
  char *p_char2;
  undefined1 *p_uint3;
  char *p_char4;
  
  *instance = 0;
  if (instance != (undefined1 *)*arg1) {
    p_char4 = *(char **)(instance + 4);
    c_char1 = *p_char4;
    while (c_char1 == '\0') {
      p_char2 = *(char **)(*(int *)(p_char4 + 4) + 8);
      if (p_char4 == p_char2) {
        p_char2 = *(char **)(*(int *)(p_char4 + 4) + 0xc);
        if ((p_char2 == (char *)0x0) || (*p_char2 != '\0')) {
          p_uint3 = *(undefined1 **)(instance + 4);
          if (instance == *(undefined1 **)(p_uint3 + 0xc)) {
            VTable_Routine_080E2170(p_uint3,arg1);
            instance = p_uint3;
          }
          **(undefined1 **)(instance + 4) = 1;
          **(undefined1 **)(*(int *)(instance + 4) + 4) = 0;
          VTable_Routine_080E21A8(*(undefined4 *)(*(int *)(instance + 4) + 4),arg1);
        }
        else {
LAB_080e2242:
          *p_char4 = '\x01';
          *p_char2 = '\x01';
          **(undefined1 **)(*(int *)(instance + 4) + 4) = 0;
          instance = *(undefined1 **)(*(int *)(instance + 4) + 4);
        }
      }
      else {
        if ((p_char2 != (char *)0x0) && (*p_char2 == '\0')) goto LAB_080e2242;
        p_uint3 = *(undefined1 **)(instance + 4);
        if (instance == *(undefined1 **)(p_uint3 + 8)) {
          VTable_Routine_080E21A8(p_uint3,arg1);
          instance = p_uint3;
        }
        **(undefined1 **)(instance + 4) = 1;
        **(undefined1 **)(*(int *)(instance + 4) + 4) = 0;
        VTable_Routine_080E2170(*(undefined4 *)(*(int *)(instance + 4) + 4),arg1);
      }
      if (instance == (undefined1 *)*arg1) break;
      p_char4 = *(char **)(instance + 4);
      c_char1 = *p_char4;
    }
  }
  *(undefined1 *)*arg1 = 1;
  return;
}

// =============================================================================
// Function: VTable_Routine_080E2294 @ 0x080E2294
// =============================================================================
u32 VTable_Routine_080E2294(int *instance,int arg1,int arg2,int arg3,uint *arg_5,int arg_6)

{
  int i_val1;
  int i_val2;
  
  if ((arg3 == *(int *)(arg1 + 4)) ||
     ((arg_6 == 0 && ((arg2 != 0 || (*arg_5 < *(uint *)(arg3 + 0x10))))))) {
    i_val1 = runtime_malloc_aligned(0x18);
    if (i_val1 == 0) {
      i_val1 = VTable_Routine_080D3BC0(0x18);
    }
    if (i_val1 != -0x10) {
      *(uint *)(i_val1 + 0x10) = *arg_5;
      *(uint *)(i_val1 + 0x14) = arg_5[1];
    }
    *(int *)(arg3 + 8) = i_val1;
    i_val2 = *(int *)(arg1 + 4);
    if (arg3 == i_val2) {
      *(int *)(arg3 + 4) = i_val1;
      *(int *)(*(int *)(arg1 + 4) + 0xc) = i_val1;
    }
    else if (arg3 == *(int *)(i_val2 + 8)) {
      *(int *)(i_val2 + 8) = i_val1;
    }
  }
  else {
    i_val1 = runtime_malloc_aligned(0x18);
    if (i_val1 == 0) {
      i_val1 = VTable_Routine_080D3BC0(0x18);
    }
    if (i_val1 != -0x10) {
      *(uint *)(i_val1 + 0x10) = *arg_5;
      *(uint *)(i_val1 + 0x14) = arg_5[1];
    }
    *(int *)(arg3 + 0xc) = i_val1;
    if (arg3 == *(int *)(*(int *)(arg1 + 4) + 0xc)) {
      *(int *)(*(int *)(arg1 + 4) + 0xc) = i_val1;
    }
  }
  *(int *)(i_val1 + 4) = arg3;
  *(undefined4 *)(i_val1 + 8) = 0;
  *(undefined4 *)(i_val1 + 0xc) = 0;
  VTable_Routine_080E21E0(i_val1,*(int *)(arg1 + 4) + 4);
  *(int *)(arg1 + 8) = *(int *)(arg1 + 8) + 1;
  *instance = i_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E2354 @ 0x080E2354
// =============================================================================
u32 VTable_Routine_080E2354(char *instance)

{
  char *p_char1;
  bool b_flag2;
  
  if ((*instance == '\0') && (*(char **)(*(int *)(instance + 4) + 4) == instance)) {
    p_char1 = *(char **)(instance + 0xc);
  }
  else {
    p_char1 = *(char **)(instance + 8);
    if (p_char1 == (char *)0x0) {
      do {
        p_char1 = *(char **)(instance + 4);
        b_flag2 = instance == *(char **)(p_char1 + 8);
        instance = p_char1;
      } while (b_flag2);
    }
    else {
      for (; *(int *)(p_char1 + 0xc) != 0; p_char1 = *(char **)(p_char1 + 0xc)) {
      }
    }
  }
  return p_char1;
}

// =============================================================================
// Function: VTable_Routine_080E2390 @ 0x080E2390
// =============================================================================
u32 VTable_Routine_080E2390(int *instance,int arg1,uint *arg2)

{
  int i_val1;
  int pos_x;
  bool b_flag3;
  int stack_val_24;
  int stack_val_20;
  int stack_val_1c;
  
  i_val1 = *(int *)(arg1 + 4);
  b_flag3 = true;
  if (*(int *)(i_val1 + 4) != 0) {
    pos_x = *(int *)(i_val1 + 4);
    do {
      i_val1 = pos_x;
      b_flag3 = *arg2 < *(uint *)(i_val1 + 0x10);
      if (b_flag3) {
        pos_x = *(int *)(i_val1 + 8);
      }
      else {
        pos_x = *(int *)(i_val1 + 0xc);
      }
    } while (pos_x != 0);
  }
  stack_val_24 = i_val1;
  if (b_flag3) {
    stack_val_20 = *(int *)(*(int *)(arg1 + 4) + 8);
    if (i_val1 != stack_val_20) {
      stack_val_24 = VTable_Routine_080E2354(i_val1);
      goto LAB_080e2400;
    }
    VTable_Routine_080E2294(&stack_val_1c,arg1,0,i_val1,arg2,0);
  }
  else {
LAB_080e2400:
    if (*arg2 <= *(uint *)(stack_val_24 + 0x10)) {
      *instance = stack_val_24;
      *(undefined1 *)(instance + 1) = 0;
      goto LAB_080e2434;
    }
    VTable_Routine_080E2294(&stack_val_20,arg1,0,i_val1,arg2,0);
    stack_val_1c = stack_val_20;
  }
  *instance = stack_val_1c;
  *(undefined1 *)(instance + 1) = 1;
LAB_080e2434:
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E2444 @ 0x080E2444
// =============================================================================
u32 VTable_Routine_080E2444(int *instance,int arg1,int *arg2,uint *arg3)

{
  int i_val1;
  int i_val2;
  int pos_y;
  bool b_flag4;
  bool b_flag5;
  int stack_val_2c;
  int stack_val_28;
  int stack_ints_24 [2];
  
  i_val2 = *arg2;
  if (i_val2 == *(int *)(*(int *)(arg1 + 4) + 8)) {
    if (*(int *)(arg1 + 8) != 0) {
      if (*arg3 < *(uint *)(i_val2 + 0x10)) {
LAB_080e2548:
        VTable_Routine_080E2294(instance,arg1,i_val2,i_val2,arg3,0);
        goto LAB_080e25ea;
      }
      if (*arg3 <= *(uint *)(i_val2 + 0x10)) {
        *instance = i_val2;
        goto LAB_080e25ea;
      }
      stack_val_2c = i_val2;
      i_val1 = VTable_Routine_080E2B28(i_val2);
      stack_val_2c = i_val1;
      if (i_val1 == *(int *)(arg1 + 4)) {
        pos_y = *arg2;
        i_val2 = pos_y;
      }
      else {
        if (*(uint *)(i_val1 + 0x10) <= *arg3) goto LAB_080e25dc;
        pos_y = *arg2;
        i_val2 = pos_y;
        if (*(int *)(pos_y + 0xc) != 0) goto LAB_080e25c2;
      }
LAB_080e25b2:
      VTable_Routine_080E2294(instance,arg1,0,pos_y,arg3,i_val2);
      goto LAB_080e25ea;
    }
    VTable_Routine_080E2390(&stack_val_2c,arg1,arg3);
  }
  else if (i_val2 == *(int *)(arg1 + 4)) {
    pos_y = *(int *)(i_val2 + 0xc);
    if (*(uint *)(pos_y + 0x10) < *arg3) goto LAB_080e25b2;
    VTable_Routine_080E2390(&stack_val_2c,arg1,arg3);
  }
  else {
    stack_val_2c = i_val2;
    pos_y = VTable_Routine_080E2354(i_val2);
    i_val2 = *arg2;
    b_flag4 = *arg3 < *(uint *)(i_val2 + 0x10);
    stack_val_2c = pos_y;
    if ((b_flag4) && (*(uint *)(pos_y + 0x10) < *arg3)) {
      if (*(int *)(pos_y + 0xc) != 0) goto LAB_080e2548;
      i_val1 = 0;
      i_val2 = pos_y;
LAB_080e25ca:
      VTable_Routine_080E2294(instance,arg1,i_val1,pos_y,arg3,i_val2);
      goto LAB_080e25ea;
    }
    stack_val_28 = *arg2;
    i_val1 = VTable_Routine_080E2B28();
    b_flag5 = !b_flag4;
    stack_val_28 = i_val1;
    if (!b_flag4) {
      pos_y = *arg2;
      b_flag5 = *(uint *)(pos_y + 0x10) < *arg3;
      if ((b_flag5) && ((i_val1 == *(int *)(arg1 + 4) || (*arg3 < *(uint *)(i_val1 + 0x10))))) {
        i_val2 = pos_y;
        if (*(int *)(pos_y + 0xc) == 0) goto LAB_080e25b2;
LAB_080e25c2:
        pos_y = i_val1;
        i_val2 = 0;
        goto LAB_080e25ca;
      }
    }
    if (b_flag4 == b_flag5) {
      stack_val_2c = *arg2;
    }
    else {
LAB_080e25dc:
      VTable_Routine_080E2390(stack_ints_24,arg1,arg3);
      stack_val_2c = stack_ints_24[0];
    }
  }
  *instance = stack_val_2c;
LAB_080e25ea:
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E25FC @ 0x080E25FC
// =============================================================================
u32 VTable_Routine_080E25FC(char *instance,undefined4 *arg1,undefined4 *arg2,undefined4 *arg3)

{
  char c_char1;
  char *p_char2;
  char *p_char3;
  int pos_x;
  char *p_char5;
  char *p_char6;
  char *p_char7;
  char *p_char8;
  
  p_char3 = *(char **)(instance + 8);
  p_char2 = instance;
  if (p_char3 == (char *)0x0) {
LAB_080e2624:
    p_char3 = *(char **)(p_char2 + 0xc);
    p_char8 = p_char2;
  }
  else {
    p_char2 = *(char **)(instance + 0xc);
    p_char8 = instance;
    if (p_char2 != (char *)0x0) {
      for (; *(int *)(p_char2 + 8) != 0; p_char2 = *(char **)(p_char2 + 8)) {
      }
      goto LAB_080e2624;
    }
  }
  if (p_char8 == instance) {
    p_char2 = *(char **)(p_char8 + 4);
    if (p_char3 != (char *)0x0) {
      *(char **)(p_char3 + 4) = p_char2;
    }
    if ((char *)*arg1 == p_char8) {
      *arg1 = p_char3;
    }
    else {
      pos_x = *(int *)(p_char8 + 4);
      if (*(char **)(pos_x + 8) == p_char8) {
        *(char **)(pos_x + 8) = p_char3;
      }
      else {
        *(char **)(pos_x + 0xc) = p_char3;
      }
    }
    if ((char *)*arg2 == instance) {
      if (*(int *)(instance + 0xc) == 0) {
        *arg2 = *(undefined4 *)(instance + 4);
      }
      else {
        pos_x = *(int *)(p_char3 + 8);
        p_char5 = p_char3;
        while (pos_x != 0) {
          p_char5 = *(char **)(p_char5 + 8);
          pos_x = *(int *)(p_char5 + 8);
        }
        *arg2 = p_char5;
      }
    }
    if ((char *)*arg3 == instance) {
      if (*(int *)(instance + 8) == 0) {
        *arg3 = *(undefined4 *)(instance + 4);
      }
      else {
        pos_x = *(int *)(p_char3 + 0xc);
        p_char5 = p_char3;
        while (pos_x != 0) {
          p_char5 = *(char **)(p_char5 + 0xc);
          pos_x = *(int *)(p_char5 + 0xc);
        }
        *arg3 = p_char5;
      }
    }
  }
  else {
    *(char **)(*(int *)(instance + 8) + 4) = p_char8;
    *(undefined4 *)(p_char8 + 8) = *(undefined4 *)(instance + 8);
    p_char2 = p_char8;
    if (p_char8 != *(char **)(instance + 0xc)) {
      p_char2 = *(char **)(p_char8 + 4);
      if (p_char3 != (char *)0x0) {
        *(char **)(p_char3 + 4) = p_char2;
      }
      *(char **)(*(int *)(p_char8 + 4) + 8) = p_char3;
      *(undefined4 *)(p_char8 + 0xc) = *(undefined4 *)(instance + 0xc);
      *(char **)(*(int *)(instance + 0xc) + 4) = p_char8;
    }
    if ((char *)*arg1 == instance) {
      *arg1 = p_char8;
    }
    else {
      pos_x = *(int *)(instance + 4);
      if (*(char **)(pos_x + 8) == instance) {
        *(char **)(pos_x + 8) = p_char8;
      }
      else {
        *(char **)(pos_x + 0xc) = p_char8;
      }
    }
    *(undefined4 *)(p_char8 + 4) = *(undefined4 *)(instance + 4);
    c_char1 = *p_char8;
    *p_char8 = *instance;
    *instance = c_char1;
    p_char8 = instance;
  }
  if (*p_char8 == '\0') {
LAB_080e27f0:
    return p_char8;
  }
LAB_080e27d6:
  p_char5 = p_char2;
  if ((p_char3 == (char *)*arg1) || ((p_char3 != (char *)0x0 && (*p_char3 != '\x01'))))
  goto LAB_080e27e8;
  p_char2 = *(char **)(p_char5 + 8);
  if (p_char3 == p_char2) {
    p_char2 = *(char **)(p_char5 + 0xc);
    if (*p_char2 == '\0') {
      *p_char2 = '\x01';
      *p_char5 = '\0';
      VTable_Routine_080E2170(p_char5,arg1);
      p_char2 = *(char **)(p_char5 + 0xc);
    }
    p_char7 = *(char **)(p_char2 + 8);
    if (((p_char7 != (char *)0x0) && (p_char6 = *(char **)(p_char2 + 0xc), *p_char7 != '\x01')) ||
       ((p_char6 = *(char **)(p_char2 + 0xc), p_char6 != (char *)0x0 && (*p_char6 != '\x01')))) {
      if ((p_char6 == (char *)0x0) || (*p_char6 == '\x01')) {
        if (p_char7 != (char *)0x0) {
          *p_char7 = '\x01';
        }
        *p_char2 = '\0';
        VTable_Routine_080E21A8(p_char2,arg1);
        p_char2 = *(char **)(p_char5 + 0xc);
      }
      *p_char2 = *p_char5;
      *p_char5 = '\x01';
      if (*(undefined1 **)(p_char2 + 0xc) != (undefined1 *)0x0) {
        **(undefined1 **)(p_char2 + 0xc) = 1;
      }
      VTable_Routine_080E2170(p_char5,arg1);
      goto LAB_080e27e8;
    }
  }
  else {
    if (*p_char2 == '\0') {
      *p_char2 = '\x01';
      *p_char5 = '\0';
      VTable_Routine_080E21A8(p_char5,arg1);
      p_char2 = *(char **)(p_char5 + 8);
    }
    p_char7 = *(char **)(p_char2 + 0xc);
    if (((p_char7 != (char *)0x0) && (p_char6 = *(char **)(p_char2 + 8), *p_char7 != '\x01')) ||
       ((p_char6 = *(char **)(p_char2 + 8), p_char6 != (char *)0x0 && (*p_char6 != '\x01')))) {
      if ((p_char6 == (char *)0x0) || (*p_char6 == '\x01')) {
        if (p_char7 != (char *)0x0) {
          *p_char7 = '\x01';
        }
        *p_char2 = '\0';
        VTable_Routine_080E2170(p_char2,arg1);
        p_char2 = *(char **)(p_char5 + 8);
      }
      *p_char2 = *p_char5;
      *p_char5 = '\x01';
      if (*(undefined1 **)(p_char2 + 8) != (undefined1 *)0x0) {
        **(undefined1 **)(p_char2 + 8) = 1;
      }
      VTable_Routine_080E21A8(p_char5,arg1);
LAB_080e27e8:
      if (p_char3 != (char *)0x0) {
        *p_char3 = '\x01';
      }
      goto LAB_080e27f0;
    }
  }
  *p_char2 = '\0';
  p_char2 = *(char **)(p_char5 + 4);
  p_char3 = p_char5;
  goto LAB_080e27d6;
}

// =============================================================================
// Function: VTable_Routine_080E27FC @ 0x080E27FC
// =============================================================================
u32 VTable_Routine_080E27FC(int *instance,int arg1,int arg2,int arg3,uint *arg_5,int arg_6)

{
  int i_val1;
  int i_val2;
  
  if ((arg3 == *(int *)(arg1 + 4)) ||
     ((arg_6 == 0 && ((arg2 != 0 || (*arg_5 < *(uint *)(arg3 + 0x10))))))) {
    i_val1 = runtime_malloc_aligned(0x18);
    if (i_val1 == 0) {
      i_val1 = VTable_Routine_080D3BC0(0x18);
    }
    if (i_val1 != -0x10) {
      *(uint *)(i_val1 + 0x10) = *arg_5;
      *(uint *)(i_val1 + 0x14) = arg_5[1];
    }
    *(int *)(arg3 + 8) = i_val1;
    i_val2 = *(int *)(arg1 + 4);
    if (arg3 == i_val2) {
      *(int *)(arg3 + 4) = i_val1;
      *(int *)(*(int *)(arg1 + 4) + 0xc) = i_val1;
    }
    else if (arg3 == *(int *)(i_val2 + 8)) {
      *(int *)(i_val2 + 8) = i_val1;
    }
  }
  else {
    i_val1 = runtime_malloc_aligned(0x18);
    if (i_val1 == 0) {
      i_val1 = VTable_Routine_080D3BC0(0x18);
    }
    if (i_val1 != -0x10) {
      *(uint *)(i_val1 + 0x10) = *arg_5;
      *(uint *)(i_val1 + 0x14) = arg_5[1];
    }
    *(int *)(arg3 + 0xc) = i_val1;
    if (arg3 == *(int *)(*(int *)(arg1 + 4) + 0xc)) {
      *(int *)(*(int *)(arg1 + 4) + 0xc) = i_val1;
    }
  }
  *(int *)(i_val1 + 4) = arg3;
  *(undefined4 *)(i_val1 + 8) = 0;
  *(undefined4 *)(i_val1 + 0xc) = 0;
  VTable_Routine_080E21E0(i_val1,*(int *)(arg1 + 4) + 4);
  *(int *)(arg1 + 8) = *(int *)(arg1 + 8) + 1;
  *instance = i_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E28BC @ 0x080E28BC
// =============================================================================
u32 VTable_Routine_080E28BC(int *instance,int arg1,uint *arg2)

{
  int i_val1;
  int pos_x;
  bool b_flag3;
  int stack_val_24;
  int stack_val_20;
  int stack_val_1c;
  
  i_val1 = *(int *)(arg1 + 4);
  b_flag3 = true;
  if (*(int *)(i_val1 + 4) != 0) {
    pos_x = *(int *)(i_val1 + 4);
    do {
      i_val1 = pos_x;
      b_flag3 = *arg2 < *(uint *)(i_val1 + 0x10);
      if (b_flag3) {
        pos_x = *(int *)(i_val1 + 8);
      }
      else {
        pos_x = *(int *)(i_val1 + 0xc);
      }
    } while (pos_x != 0);
  }
  stack_val_24 = i_val1;
  if (b_flag3) {
    stack_val_20 = *(int *)(*(int *)(arg1 + 4) + 8);
    if (i_val1 != stack_val_20) {
      stack_val_24 = VTable_Routine_080E2354(i_val1);
      goto LAB_080e292c;
    }
    VTable_Routine_080E27FC(&stack_val_1c,arg1,0,i_val1,arg2,0);
  }
  else {
LAB_080e292c:
    if (*arg2 <= *(uint *)(stack_val_24 + 0x10)) {
      *instance = stack_val_24;
      *(undefined1 *)(instance + 1) = 0;
      goto LAB_080e2960;
    }
    VTable_Routine_080E27FC(&stack_val_20,arg1,0,i_val1,arg2,0);
    stack_val_1c = stack_val_20;
  }
  *instance = stack_val_1c;
  *(undefined1 *)(instance + 1) = 1;
LAB_080e2960:
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E2970 @ 0x080E2970
// =============================================================================
u32 VTable_Routine_080E2970(int *instance,int arg1,int *arg2,uint *arg3)

{
  int i_val1;
  int i_val2;
  int pos_y;
  bool b_flag4;
  bool b_flag5;
  int stack_val_2c;
  int stack_val_28;
  int stack_ints_24 [2];
  
  i_val2 = *arg2;
  if (i_val2 == *(int *)(*(int *)(arg1 + 4) + 8)) {
    if (*(int *)(arg1 + 8) != 0) {
      if (*arg3 < *(uint *)(i_val2 + 0x10)) {
LAB_080e2a74:
        VTable_Routine_080E27FC(instance,arg1,i_val2,i_val2,arg3,0);
        goto LAB_080e2b16;
      }
      if (*arg3 <= *(uint *)(i_val2 + 0x10)) {
        *instance = i_val2;
        goto LAB_080e2b16;
      }
      stack_val_2c = i_val2;
      i_val1 = VTable_Routine_080E2B28(i_val2);
      stack_val_2c = i_val1;
      if (i_val1 == *(int *)(arg1 + 4)) {
        pos_y = *arg2;
        i_val2 = pos_y;
      }
      else {
        if (*(uint *)(i_val1 + 0x10) <= *arg3) goto LAB_080e2b08;
        pos_y = *arg2;
        i_val2 = pos_y;
        if (*(int *)(pos_y + 0xc) != 0) goto LAB_080e2aee;
      }
LAB_080e2ade:
      VTable_Routine_080E27FC(instance,arg1,0,pos_y,arg3,i_val2);
      goto LAB_080e2b16;
    }
    VTable_Routine_080E28BC(&stack_val_2c,arg1,arg3);
  }
  else if (i_val2 == *(int *)(arg1 + 4)) {
    pos_y = *(int *)(i_val2 + 0xc);
    if (*(uint *)(pos_y + 0x10) < *arg3) goto LAB_080e2ade;
    VTable_Routine_080E28BC(&stack_val_2c,arg1,arg3);
  }
  else {
    stack_val_2c = i_val2;
    pos_y = VTable_Routine_080E2354(i_val2);
    i_val2 = *arg2;
    b_flag4 = *arg3 < *(uint *)(i_val2 + 0x10);
    stack_val_2c = pos_y;
    if ((b_flag4) && (*(uint *)(pos_y + 0x10) < *arg3)) {
      if (*(int *)(pos_y + 0xc) != 0) goto LAB_080e2a74;
      i_val1 = 0;
      i_val2 = pos_y;
LAB_080e2af6:
      VTable_Routine_080E27FC(instance,arg1,i_val1,pos_y,arg3,i_val2);
      goto LAB_080e2b16;
    }
    stack_val_28 = *arg2;
    i_val1 = VTable_Routine_080E2B28();
    b_flag5 = !b_flag4;
    stack_val_28 = i_val1;
    if (!b_flag4) {
      pos_y = *arg2;
      b_flag5 = *(uint *)(pos_y + 0x10) < *arg3;
      if ((b_flag5) && ((i_val1 == *(int *)(arg1 + 4) || (*arg3 < *(uint *)(i_val1 + 0x10))))) {
        i_val2 = pos_y;
        if (*(int *)(pos_y + 0xc) == 0) goto LAB_080e2ade;
LAB_080e2aee:
        pos_y = i_val1;
        i_val2 = 0;
        goto LAB_080e2af6;
      }
    }
    if (b_flag4 == b_flag5) {
      stack_val_2c = *arg2;
    }
    else {
LAB_080e2b08:
      VTable_Routine_080E28BC(stack_ints_24,arg1,arg3);
      stack_val_2c = stack_ints_24[0];
    }
  }
  *instance = stack_val_2c;
LAB_080e2b16:
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E2B28 @ 0x080E2B28
// =============================================================================
u32 VTable_Routine_080E2B28(int instance)

{
  int pos_y;
  int pos_x;
  
  pos_y = *(int *)(instance + 0xc);
  if (pos_y == 0) {
    do {
      pos_y = instance;
      instance = *(int *)(pos_y + 4);
    } while (pos_y == *(int *)(instance + 0xc));
    if (*(int *)(pos_y + 0xc) != instance) {
      pos_y = instance;
    }
  }
  else {
    pos_x = *(int *)(pos_y + 8);
    while (pos_x != 0) {
      pos_y = *(int *)(pos_y + 8);
      pos_x = *(int *)(pos_y + 8);
    }
  }
  return pos_y;
}

// =============================================================================
// Function: VTable_Routine_080E2B5C @ 0x080E2B5C
// =============================================================================
void VTable_Routine_080E2B5C(undefined4 instance,int arg1)

{
  int i_val1;
  
  while (i_val1 = arg1, i_val1 != 0) {
    VTable_Routine_080E2B5C(instance,*(undefined4 *)(i_val1 + 0xc));
    arg1 = *(int *)(i_val1 + 8);
    if (i_val1 != 0) {
      cpp_operator_delete(i_val1);
    }
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E2B88 @ 0x080E2B88
// =============================================================================
void VTable_Routine_080E2B88(undefined4 instance,int arg1)

{
  int i_val1;
  
  while (i_val1 = arg1, i_val1 != 0) {
    VTable_Routine_080E2B88(instance,*(undefined4 *)(i_val1 + 0xc));
    arg1 = *(int *)(i_val1 + 8);
    if (i_val1 != 0) {
      cpp_operator_delete(i_val1);
    }
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E2BB4 @ 0x080E2BB4
// =============================================================================
void VTable_Routine_080E2BB4(int instance,byte *arg1,undefined4 *arg2,int arg3,int arg_5)

{
  byte b_flag1;
  int i_val2;
  uint u_val3;
  uint *p_uint4;
  uint u_val5;
  int i_val6;
  int i_val7;
  uint u_val8;
  uint u_val9;
  uint u_val10;
  uint *p_uint11;
  uint u_val12;
  uint u_val13;
  char cStack_48;
  ushort stack_val_44;
  
  i_val2 = arg2[2];
  i_val7 = arg2[4];
  p_uint11 = (uint *)*arg2;
  u_val3 = 0;
  if (p_uint11 != (uint *)0x0) {
    u_val3 = (uint)*(ushort *)(arg2 + 1);
  }
  p_uint4 = p_uint11 + u_val3 * 2;
  while (p_uint11 != p_uint4) {
    u_val3 = *p_uint11;
    u_val8 = p_uint11[1];
    p_uint11 = p_uint11 + 2;
    u_val12 = ((int)(u_val3 << 7) >> 0x17) + arg3;
    if ((int)u_val12 < 0xf0) {
      cStack_48 = (char)u_val3;
      u_val13 = cStack_48 + arg_5;
      if ((((int)u_val13 < 0xa0) &&
          (u_val9 = ((u_val3 & 0xffff) >> 0xe) * 4 + (u_val3 >> 0x1e),
          u_val9 = (int)(uint)*(byte *)((u_val9 >> 1) + gRomData_080FC066) >> ((u_val9 & 1) << 2),
          0 < (int)(u_val12 + (8 << (u_val9 & 3))))) && (0 < (int)((8 << (u_val9 >> 2 & 3)) + u_val13)))
      {
        u_val5 = i_val2 + (u_val8 & 0x3ff) * 0x20;
        u_val9 = *(uint *)(instance + 8);
        u_val10 = *(uint *)(*(uint *)(instance + 8) + 4);
        while (u_val10 != 0) {
          if (*(uint *)(u_val10 + 0x10) < u_val5) {
            u_val10 = *(uint *)(u_val10 + 0xc);
          }
          else {
            u_val9 = u_val10;
            u_val10 = *(uint *)(u_val10 + 8);
          }
        }
        if ((u_val9 == *(uint *)(instance + 8)) || (u_val5 < *(uint *)(u_val9 + 0x10))) {
          u_val9 = *(uint *)(instance + 8);
        }
        u_val10 = *(uint *)(instance + 8) ^ u_val9;
        if ((int)(-u_val10 | u_val10) < 0) {
          i_val6 = GBA_Vram_AllocateTileBlock(instance,*(undefined4 *)(u_val9 + 0x14));
        }
        else {
          i_val6 = -1;
        }
        if (-1 < i_val6) {
          u_val5 = i_val7 + ((u_val8 & 0xffff) >> 0xc) * 0x20;
          u_val9 = *(uint *)(instance + 0x1c);
          u_val10 = *(uint *)(*(uint *)(instance + 0x1c) + 4);
          while (u_val10 != 0) {
            if (*(uint *)(u_val10 + 0x10) < u_val5) {
              u_val10 = *(uint *)(u_val10 + 0xc);
            }
            else {
              u_val9 = u_val10;
              u_val10 = *(uint *)(u_val10 + 8);
            }
          }
          if ((u_val9 == *(uint *)(instance + 0x1c)) || (u_val5 < *(uint *)(u_val9 + 0x10))) {
            u_val9 = *(uint *)(instance + 0x1c);
          }
          u_val10 = *(uint *)(instance + 0x1c) ^ u_val9;
          if ((int)(-u_val10 | u_val10) < 0) {
            u_val9 = HW_Routine_080074C0(instance + 0x14,*(undefined4 *)(u_val9 + 0x14));
          }
          else {
            u_val9 = 0xffffffff;
          }
          if (-1 < (int)u_val9) {
            stack_val_44 = ((ushort)u_val8 & (ushort)0xFFFFFC00 | (ushort)i_val6 & 0x3ff) &
                        (ushort)0xFFFF0FFF | (ushort)((u_val9 & 0xf) << 0xc);
            b_flag1 = *arg1;
            if (b_flag1 < 0x80) {
              *(uint *)(arg1 + (uint)b_flag1 * 8 + 4) =
                   (u_val3 & 0xFFFFFF00 | u_val13 & 0xff) & 0xFE00FFFF |
                   (u_val12 & 0x1FF) << 0x10;
              *(ushort *)((int)(arg1 + (uint)b_flag1 * 8 + 4) + 4) = stack_val_44;
              *arg1 = b_flag1 + 1;
            }
          }
        }
      }
    }
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E2DC8 @ 0x080E2DC8
// =============================================================================
u32 VTable_Routine_080E2DC8(int instance)

{
  undefined1 *p_uint1;
  
  GBA_ObjAttr_Init();
  *(undefined4 *)(instance + 8) = 0;
  p_uint1 = (undefined1 *)runtime_malloc_aligned(0x18);
  if (p_uint1 == (undefined1 *)0x0) {
    p_uint1 = (undefined1 *)VTable_Routine_080D3BC0(0x18);
  }
  *(undefined1 **)(instance + 8) = p_uint1;
  *(undefined4 *)(instance + 0xc) = 0;
  *(undefined4 *)(instance + 0x10) = 0;
  *p_uint1 = 0;
  *(undefined4 *)(p_uint1 + 4) = 0;
  *(int *)(*(int *)(instance + 8) + 8) = *(int *)(instance + 8);
  *(int *)(*(int *)(instance + 8) + 0xc) = *(int *)(instance + 8);
  GBA_PaletteManager_Init(instance + 0x14);
  *(undefined4 *)(instance + 0x1c) = 0;
  p_uint1 = (undefined1 *)runtime_malloc_aligned(0x18);
  if (p_uint1 == (undefined1 *)0x0) {
    p_uint1 = (undefined1 *)VTable_Routine_080D3BC0(0x18);
  }
  *(undefined1 **)(instance + 0x1c) = p_uint1;
  *(undefined4 *)(instance + 0x20) = 0;
  *(undefined4 *)(instance + 0x24) = 0;
  *p_uint1 = 0;
  *(undefined4 *)(p_uint1 + 4) = 0;
  *(int *)(*(int *)(instance + 0x1c) + 8) = *(int *)(instance + 0x1c);
  *(int *)(*(int *)(instance + 0x1c) + 0xc) = *(int *)(instance + 0x1c);
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E2E34 @ 0x080E2E34
// =============================================================================
void VTable_Routine_080E2E34(int instance,undefined4 arg1)

{
  int pos_x;
  
  *(undefined4 *)(instance + 0xc) = gRomData_080E5A28;
  pos_x = *(int *)(instance + 8);
  if (pos_x != 0) {
    _call_via_r2(pos_x,3,*(undefined4 *)(*(int *)(pos_x + 0x5B4) + 8));
  }
  HW_Routine_080086BC(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E2E6C @ 0x080E2E6C
// =============================================================================
void VTable_Routine_080E2E6C(void)

{
  
  HW_Routine_080086BC();
  return;
}

// =============================================================================
// Function: VTable_Routine_080E2E78 @ 0x080E2E78
// =============================================================================
void VTable_Routine_080E2E78(undefined4 instance,int arg1)

{
  int i_val1;
  
  while (i_val1 = arg1, i_val1 != 0) {
    VTable_Routine_080E2E78(instance,*(undefined4 *)(i_val1 + 0xc));
    arg1 = *(int *)(i_val1 + 8);
    if (i_val1 != 0) {
      cpp_operator_delete(i_val1);
    }
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E2EA4 @ 0x080E2EA4
// =============================================================================
u32 VTable_Routine_080E2EA4(int *instance,int arg1,int arg2,int arg3,byte *arg_5,int arg_6)

{
  int i_val1;
  int i_val2;
  bool b_flag3;
  
  if (arg3 != *(int *)(arg1 + 4)) {
    if (arg_6 != 0) {
LAB_080e2f1e:
      i_val1 = runtime_malloc_aligned(0x18);
      if (i_val1 == 0) {
        i_val1 = VTable_Routine_080D3BC0(0x18);
      }
      if (i_val1 != -0x10) {
        *(undefined4 *)(i_val1 + 0x10) = *(undefined4 *)arg_5;
        *(byte *)(i_val1 + 0x14) = arg_5[4];
      }
      *(int *)(arg3 + 0xc) = i_val1;
      if (arg3 == *(int *)(*(int *)(arg1 + 4) + 0xc)) {
        *(int *)(*(int *)(arg1 + 4) + 0xc) = i_val1;
      }
      goto LAB_080e2f50;
    }
    if (arg2 == 0) {
      b_flag3 = false;
      if ((*arg_5 < *(byte *)(arg3 + 0x10)) ||
         ((*arg_5 <= *(byte *)(arg3 + 0x10) && (arg_5[1] < *(byte *)(arg3 + 0x11))))) {
        b_flag3 = true;
      }
      if (!b_flag3) goto LAB_080e2f1e;
    }
  }
  i_val1 = runtime_malloc_aligned(0x18);
  if (i_val1 == 0) {
    i_val1 = VTable_Routine_080D3BC0(0x18);
  }
  if (i_val1 != -0x10) {
    *(undefined4 *)(i_val1 + 0x10) = *(undefined4 *)arg_5;
    *(byte *)(i_val1 + 0x14) = arg_5[4];
  }
  *(int *)(arg3 + 8) = i_val1;
  i_val2 = *(int *)(arg1 + 4);
  if (arg3 == i_val2) {
    *(int *)(arg3 + 4) = i_val1;
    *(int *)(*(int *)(arg1 + 4) + 0xc) = i_val1;
  }
  else if (arg3 == *(int *)(i_val2 + 8)) {
    *(int *)(i_val2 + 8) = i_val1;
  }
LAB_080e2f50:
  *(int *)(i_val1 + 4) = arg3;
  *(undefined4 *)(i_val1 + 8) = 0;
  *(undefined4 *)(i_val1 + 0xc) = 0;
  VTable_Routine_080E21E0(i_val1,*(int *)(arg1 + 4) + 4);
  *(int *)(arg1 + 8) = *(int *)(arg1 + 8) + 1;
  *instance = i_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E2F74 @ 0x080E2F74
// =============================================================================
u32 VTable_Routine_080E2F74(int *instance,int arg1,byte *arg2)

{
  bool b_flag1;
  int pos_x;
  int i_val3;
  int stack_val_28;
  int stack_val_24;
  int stack_val_20;
  
  i_val3 = *(int *)(arg1 + 4);
  b_flag1 = true;
  if (*(int *)(i_val3 + 4) != 0) {
    pos_x = *(int *)(i_val3 + 4);
    do {
      i_val3 = pos_x;
      b_flag1 = false;
      if ((*arg2 < *(byte *)(i_val3 + 0x10)) ||
         ((*arg2 <= *(byte *)(i_val3 + 0x10) && (arg2[1] < *(byte *)(i_val3 + 0x11))))) {
        b_flag1 = true;
      }
      if (b_flag1) {
        pos_x = *(int *)(i_val3 + 8);
      }
      else {
        pos_x = *(int *)(i_val3 + 0xc);
      }
    } while (pos_x != 0);
  }
  stack_val_28 = i_val3;
  if (b_flag1) {
    stack_val_24 = *(int *)(*(int *)(arg1 + 4) + 8);
    if (i_val3 != stack_val_24) {
      stack_val_28 = VTable_Routine_080E2354(i_val3);
      goto LAB_080e2ff6;
    }
    VTable_Routine_080E2EA4(&stack_val_20,arg1,0,i_val3,arg2,0);
  }
  else {
LAB_080e2ff6:
    b_flag1 = false;
    if ((*(byte *)(stack_val_28 + 0x10) < *arg2) ||
       ((*(byte *)(stack_val_28 + 0x10) <= *arg2 && (*(byte *)(stack_val_28 + 0x11) < arg2[1])))) {
      b_flag1 = true;
    }
    if (!b_flag1) {
      *instance = stack_val_28;
      *(bool *)(instance + 1) = b_flag1;
      goto LAB_080e3042;
    }
    VTable_Routine_080E2EA4(&stack_val_24,arg1,0,i_val3,arg2,0);
    stack_val_20 = stack_val_24;
  }
  *instance = stack_val_20;
  *(undefined1 *)(instance + 1) = 1;
LAB_080e3042:
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E3054 @ 0x080E3054
// =============================================================================
u32 VTable_Routine_080E3054(int *instance,int arg1,int *arg2,byte *arg3)

{
  byte b_flag1;
  int i_val2;
  bool b_flag3;
  byte b_flag4;
  int i_val5;
  byte b_flag6;
  int i_val7;
  int stack_val_38;
  int stack_val_34;
  int stack_ints_30 [2];
  byte stack_val_28;
  char cStack_24;
  
  i_val5 = *arg2;
  if (i_val5 == *(int *)(*(int *)(arg1 + 4) + 8)) {
    if (*(int *)(arg1 + 8) == 0) {
      VTable_Routine_080E2F74(&stack_val_38,arg1,arg3);
    }
    else {
      b_flag3 = false;
      b_flag4 = *arg3;
      if ((b_flag4 < *(byte *)(i_val5 + 0x10)) ||
         ((b_flag4 <= *(byte *)(i_val5 + 0x10) && (arg3[1] < *(byte *)(i_val5 + 0x11))))) {
        b_flag3 = true;
      }
      if (b_flag3) {
        i_val2 = i_val5;
        i_val7 = 0;
LAB_080e32a2:
        VTable_Routine_080E2EA4(instance,arg1,i_val5,i_val2,arg3,i_val7);
        goto LAB_080e32d4;
      }
      b_flag3 = false;
      if ((*(byte *)(i_val5 + 0x10) < b_flag4) ||
         ((*(byte *)(i_val5 + 0x10) <= b_flag4 && (*(byte *)(i_val5 + 0x11) < arg3[1])))) {
        b_flag3 = true;
      }
      if (!b_flag3) {
        *instance = i_val5;
        goto LAB_080e32d4;
      }
      stack_val_38 = i_val5;
      i_val5 = VTable_Routine_080E2B28(i_val5);
      stack_val_38 = i_val5;
      if (i_val5 == *(int *)(arg1 + 4)) {
        i_val7 = *arg2;
        i_val2 = i_val7;
LAB_080e317e:
        VTable_Routine_080E2EA4(instance,arg1,0,i_val7,arg3,i_val2);
        goto LAB_080e32d4;
      }
      b_flag3 = false;
      if ((*arg3 < *(byte *)(i_val5 + 0x10)) ||
         ((*arg3 <= *(byte *)(i_val5 + 0x10) && (arg3[1] < *(byte *)(i_val5 + 0x11))))) {
        b_flag3 = true;
      }
      if (b_flag3) {
        i_val7 = *arg2;
        i_val2 = i_val7;
        if (*(int *)(i_val7 + 0xc) != 0) {
          i_val2 = i_val5;
          i_val7 = 0;
          goto LAB_080e32a2;
        }
        goto LAB_080e317e;
      }
LAB_080e32c6:
      VTable_Routine_080E2F74(stack_ints_30,arg1,arg3);
      stack_val_38 = stack_ints_30[0];
    }
  }
  else {
    if (i_val5 == *(int *)(arg1 + 4)) {
      b_flag3 = false;
      b_flag4 = *(byte *)(*(int *)(i_val5 + 0xc) + 0x10);
      if ((b_flag4 < *arg3) ||
         ((b_flag4 <= *arg3 && (*(byte *)(*(int *)(i_val5 + 0xc) + 0x11) < arg3[1])))) {
        b_flag3 = true;
      }
      if (b_flag3) {
        i_val7 = *(int *)(*(int *)(arg1 + 4) + 0xc);
        i_val2 = *arg2;
        goto LAB_080e317e;
      }
      VTable_Routine_080E2F74(&stack_val_38,arg1,arg3);
      goto LAB_080e32d2;
    }
    stack_val_38 = i_val5;
    i_val2 = VTable_Routine_080E2354(i_val5);
    b_flag6 = 0;
    b_flag4 = *(byte *)(*arg2 + 0x10);
    if ((*arg3 < b_flag4) || ((*arg3 <= b_flag4 && (arg3[1] < *(byte *)(*arg2 + 0x11))))) {
      b_flag6 = 1;
    }
    stack_val_38 = i_val2;
    if (b_flag6 != 0) {
      b_flag3 = false;
      if ((*(byte *)(i_val2 + 0x10) < *arg3) ||
         ((*(byte *)(i_val2 + 0x10) <= *arg3 && (*(byte *)(i_val2 + 0x11) < arg3[1])))) {
        b_flag3 = true;
      }
      if (!b_flag3) goto LAB_080e31fe;
      if (*(int *)(i_val2 + 0xc) == 0) {
LAB_080e3298:
        i_val5 = 0;
        i_val7 = i_val2;
        goto LAB_080e32a2;
      }
      i_val5 = *arg2;
LAB_080e32aa:
      VTable_Routine_080E2EA4(instance,arg1,i_val5,i_val5,arg3,0);
      goto LAB_080e32d4;
    }
LAB_080e31fe:
    stack_val_34 = *arg2;
    i_val5 = VTable_Routine_080E2B28();
    b_flag4 = b_flag6 ^ 1;
    stack_val_34 = i_val5;
    if (b_flag6 == 0) {
      i_val2 = *arg2;
      stack_val_28 = 0;
      b_flag1 = *arg3;
      if ((*(byte *)(i_val2 + 0x10) < b_flag1) ||
         ((*(byte *)(i_val2 + 0x10) <= b_flag1 && (*(byte *)(i_val2 + 0x11) < arg3[1])))) {
        stack_val_28 = 1;
      }
      b_flag4 = stack_val_28;
      if (stack_val_28 != 0) {
        if (i_val5 != *(int *)(arg1 + 4)) {
          cStack_24 = '\0';
          if ((b_flag1 < *(byte *)(i_val5 + 0x10)) ||
             ((b_flag1 <= *(byte *)(i_val5 + 0x10) && (arg3[1] < *(byte *)(i_val5 + 0x11))))) {
            cStack_24 = '\x01';
          }
          if (cStack_24 == '\0') goto LAB_080e32bc;
        }
        if (*(int *)(i_val2 + 0xc) == 0) goto LAB_080e3298;
        goto LAB_080e32aa;
      }
    }
LAB_080e32bc:
    if (b_flag6 != b_flag4) goto LAB_080e32c6;
    stack_val_38 = *arg2;
  }
LAB_080e32d2:
  *instance = stack_val_38;
LAB_080e32d4:
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E32E8 @ 0x080E32E8
// =============================================================================
void VTable_Routine_080E32E8(int instance,undefined4 arg1)

{
  undefined4 u_val1;
  int i_val2;
  int *p_int3;
  
  if (*(int *)(instance + 0x1e4) != 0) {
    VTable_Routine_080E2E78(instance + 0x1dc,*(undefined4 *)(*(int *)(instance + 0x1e0) + 4));
    *(int *)(*(int *)(instance + 0x1e0) + 8) = *(int *)(instance + 0x1e0);
    *(undefined4 *)(*(int *)(instance + 0x1e0) + 4) = 0;
    *(int *)(*(int *)(instance + 0x1e0) + 0xc) = *(int *)(instance + 0x1e0);
    *(undefined4 *)(instance + 0x1e4) = 0;
  }
  if (*(int *)(instance + 0x1e0) != 0) {
    cpp_operator_delete();
  }
  for (i_val2 = *(int *)(instance + 0x1cc); i_val2 != *(int *)(instance + 0x1d0); i_val2 = i_val2 + 0x1c)
  {
  }
  if (*(int *)(instance + 0x1cc) != 0) {
    cpp_operator_delete();
  }
  u_val1 = gRomData_080E5A28;
  *(undefined4 *)(instance + 0x19c) = gRomData_080E5A28;
  *(undefined4 *)(instance + 0x28) = u_val1;
  Animal_Routine_080756D0(instance + 0x20,2);
  ScriptEngine_Routine_0803C7A0(instance + 0x1c,2);
  Animal_Routine_08050D0C(instance + 0x18,2);
  p_int3 = *(int **)(instance + 0xc);
  if (p_int3 != (int *)0x0) {
    _call_via_r2(p_int3,3,*(undefined4 *)(*p_int3 + 8));
  }
  HW_Routine_080086BC(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E3398 @ 0x080E3398
// =============================================================================
u32 VTable_Routine_080E3398(uint *instance,int arg1,uint *arg2)

{
  int i_val1;
  int i_val2;
  
  i_val1 = arg1 - (int)instance >> 2;
  while (i_val2 = i_val1, 0 < i_val2) {
    i_val1 = i_val2 >> 1;
    if (instance[i_val1] < *arg2) {
      instance = instance + i_val1 + 1;
      i_val1 = (i_val2 - i_val1) + -1;
    }
  }
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E33D0 @ 0x080E33D0
// =============================================================================
void VTable_Routine_080E33D0(int instance,undefined4 arg1)

{
  undefined4 u_val1;
  int i_val2;
  
  if (*(int *)(instance + 0xa60) != 0) {
    cpp_operator_delete();
  }
  i_val2 = instance + 0x838;
  HW_Routine_080073E0(i_val2,*(undefined4 *)(i_val2 + 4));
  HW_Routine_08007184(i_val2,2);
  HW_Routine_08007C28(instance + 0x830,*(undefined4 *)(instance + 0x834));
  HW_Routine_080079E8(instance + 0x830,2);
  i_val2 = instance + 0x828;
  HW_Routine_080073E0(i_val2,*(undefined4 *)(i_val2 + 4));
  HW_Routine_08007184(i_val2,2);
  HW_Routine_08007C28(instance + 0x820,*(undefined4 *)(instance + 0x824));
  HW_Routine_080079E8(instance + 0x820,2);
  i_val2 = instance + 0x818;
  HW_Routine_080073E0(i_val2,*(undefined4 *)(i_val2 + 4));
  HW_Routine_08007184(i_val2,2);
  HW_Routine_08007C28(instance + 0x810,*(undefined4 *)(instance + 0x814));
  HW_Routine_080079E8(instance + 0x810,2);
  u_val1 = gRomData_080E5A28;
  i_val2 = 0x744;
  *(undefined4 *)(instance + 0x744) = gRomData_080E5A28;
  *(undefined4 *)(instance + i_val2 + -0x30) = u_val1;
  HW_Routine_080086BC(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E3494 @ 0x080E3494
// =============================================================================
u32 VTable_Routine_080E3494(undefined4 *instance,int arg1)

{
  undefined4 u_val1;
  undefined4 stack_buf_1c [3];
  
  stack_buf_1c[0] = *(undefined4 *)(arg1 + 4);
  *(undefined4 *)(arg1 + 4) = 0;
  u_val1 = CppRuntime_OperatorNewArray(0xc);
  u_val1 = Animal_Routine_08092570(u_val1,stack_buf_1c,*(undefined4 *)(arg1 + 8),*(undefined1 *)(arg1 + 0xc)
                       );
  *instance = u_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E34DC @ 0x080E34DC
// =============================================================================
void VTable_Routine_080E34DC(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  Scene_Destructor(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E3504 @ 0x080E3504
// =============================================================================
void VTable_Routine_080E3504(int instance,undefined4 arg1)

{
  int i_val1;
  
  if (*(int *)(instance + 0x94) != 0) {
    M4A_Routine_080CE3DC(*(int *)(instance + 0x94),3);
  }
  i_val1 = *(int *)(instance + 0x90);
  if (i_val1 != 0) {
    HW_Routine_080073E0(i_val1 + 0x74,*(undefined4 *)(i_val1 + 0x78));
    HW_Routine_08007184(i_val1 + 0x74,2);
    HW_Routine_08007C28(i_val1 + 0x6c,*(undefined4 *)(i_val1 + 0x70));
    HW_Routine_080079E8(i_val1 + 0x6c,2);
    *(undefined4 *)(i_val1 + 4) = gRomData_080E5A28;
    CppRuntime_FreeMemory(i_val1);
  }
  i_val1 = *(int *)(instance + 0x8c);
  if (i_val1 != 0) {
    *(undefined4 *)(i_val1 + 0x24) = gRomData_080E5A28;
    HW_Routine_080073E0(i_val1 + 0x1c,*(undefined4 *)(i_val1 + 0x20));
    HW_Routine_08007184(i_val1 + 0x1c,2);
    HW_Routine_08007C28(i_val1 + 0x14,*(undefined4 *)(i_val1 + 0x18));
    HW_Routine_080079E8(i_val1 + 0x14,2);
    CppRuntime_FreeMemory(i_val1);
  }
  Animal_Routine_08050D0C(instance + 0x80,2);
  i_val1 = *(int *)(instance + 0x7c);
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 0x210) + 8));
  }
  i_val1 = *(int *)(instance + 0x78);
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 0x210) + 8));
  }
  *(undefined4 *)(instance + 0x10) = gRomData_080E5A28;
  HW_Routine_080086BC(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E3A9C @ 0x080E3A9C
// =============================================================================
void VTable_Routine_080E3A9C(int instance,uint arg1)

{
  int i_val1;
  
  if (4 < arg1) {
    return;
  }
  switch(*(uint *)(arg1 * 4 + gRomData_080E3AB4) & 0xfffffffe) {
  case 0x80e3ab4:
    instance = instance + -0x48;
  case 0x80e3ac8:
    *(undefined1 *)(instance + 0x1b8) = 0;
    return;
  case 0x80e3ad4:
    *(undefined1 *)(instance + 0x1b8) = 1;
    i_val1 = _ASSET_BLOCK_080E3AE4;
    break;
  case 0x80e3ae8:
    *(undefined1 *)(instance + 0x1b8) = 1;
    i_val1 = 0x1B9;
    *(undefined1 *)(instance + 0x1B9) = 1;
    *(undefined1 *)(instance + i_val1 + 1) = 1;
    i_val1 = 0x1BB;
    break;
  case 0x80e3b10:
    *(undefined1 *)(instance + 0x1b8) = 1;
    i_val1 = 0x1B9;
    *(undefined1 *)(instance + 0x1B9) = 1;
    *(undefined1 *)(instance + i_val1 + 1) = 0;
    *(undefined1 *)(instance + 0x1BB) = 1;
    return;
  case 0x80e3b38:
    *(undefined1 *)(instance + 0x1b8) = 1;
    *(undefined1 *)(instance + 0x1b9) = 1;
    *(undefined1 *)(instance + 0x1ba) = 0;
    i_val1 = 0x1bb;
  }
  *(undefined1 *)(instance + i_val1) = 0;
  return;
}

// =============================================================================
// Function: VTable_Routine_080E3B80 @ 0x080E3B80
// =============================================================================
u32 VTable_Routine_080E3B80(undefined1 *instance,int arg1,int arg2)

{
  uint u_val1;
  int i_val2;
  undefined1 stack_buf_38 [32];
  undefined1 temp_buf_18 [4];
  undefined1 facing_buffer [4];
  
  if (arg2 == 0xf1) {
    i_val2 = (uint)*(byte *)(arg1 + 7) * 0x1d + gRomData_08100BD7;
LAB_080e3bf6:
    u_val1 = gba_strlen(i_val2);
    if (0x1f < u_val1) {
      u_val1 = 0x1f;
    }
    gba_memcpy(stack_buf_38,i_val2,u_val1);
    stack_buf_38[u_val1] = 0;
    *instance = 1;
    gba_strcpy(instance + 4,stack_buf_38);
  }
  else {
    if (arg2 < 0xf2) {
      if (arg2 == 0xf0) {
        i_val2 = (uint)*(byte *)(arg1 + 6) * 0x1d + gRomData_08100AD2;
        goto LAB_080e3bf6;
      }
    }
    else if (arg2 == 0xff) {
      if (*(ushort *)(arg1 + 4) < 0xac) {
        Item_SetIdAndClearQuality(temp_buf_18,*(ushort *)(arg1 + 4) - 1);
        i_val2 = Item_GetFoodName(temp_buf_18);
      }
      else {
        Item_SetQuality(facing_buffer,*(ushort *)(arg1 + 4) - 0xac);
        i_val2 = Item_Routine_0800DF58(facing_buffer);
      }
      goto LAB_080e3bf6;
    }
    stack_buf_38[0] = 0;
    *instance = 0;
    gba_strcpy(instance + 4);
  }
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E3C3C @ 0x080E3C3C
// =============================================================================
void VTable_Routine_080E3C3C(int instance,undefined4 arg1)

{
  undefined4 u_val1;
  int i_val2;
  
  *(undefined4 *)(instance + 0x33D8) = gRomData_080E76F8;
  HW_Routine_08007C28(instance + 0x328,*(undefined4 *)(instance + 0x32c));
  HW_Routine_080079E8(instance + 0x328,2);
  HW_Routine_080073E0(instance + 800,*(undefined4 *)(instance + 0x324));
  HW_Routine_08007184(instance + 800,2);
  HW_Routine_08007C28(instance + 0x318,*(undefined4 *)(instance + 0x31c));
  HW_Routine_080079E8(instance + 0x318,2);
  HW_Routine_08007C28(instance + 0x310,*(undefined4 *)(instance + 0x314));
  HW_Routine_080079E8(instance + 0x310,2);
  HW_Routine_080073E0(instance + 0x308,*(undefined4 *)(instance + 0x30c));
  HW_Routine_08007184(instance + 0x308,2);
  HW_Routine_08007C28(instance + 0x300,*(undefined4 *)(instance + 0x304));
  HW_Routine_080079E8(instance + 0x300,2);
  HW_Routine_080073E0(instance + 0x2f8,*(undefined4 *)(instance + 0x2fc));
  HW_Routine_08007184(instance + 0x2f8,2);
  HW_Routine_08007C28(instance + 0x2f0,*(undefined4 *)(instance + 0x2f4));
  HW_Routine_080079E8(instance + 0x2f0,2);
  HW_Routine_080073E0(instance + 0x2e8,*(undefined4 *)(instance + 0x2ec));
  HW_Routine_08007184(instance + 0x2e8,2);
  HW_Routine_08007C28(instance + 0x2e0,*(undefined4 *)(instance + 0x2e4));
  HW_Routine_080079E8(instance + 0x2e0,2);
  u_val1 = gRomData_080E5A28;
  *(undefined4 *)(instance + 0x128) = gRomData_080E5A28;
  *(undefined4 *)(instance + 0xf8) = u_val1;
  *(undefined4 *)(instance + 200) = u_val1;
  *(undefined4 *)(instance + 0x98) = u_val1;
  Animal_Routine_08050D0C(instance + 0x80,2);
  i_val2 = *(int *)(instance + 0x7c);
  if (i_val2 != 0) {
    _call_via_r2(i_val2,3,*(undefined4 *)(*(int *)(i_val2 + 0x210) + 8));
  }
  i_val2 = *(int *)(instance + 0x78);
  if (i_val2 != 0) {
    _call_via_r2(i_val2,3,*(undefined4 *)(*(int *)(i_val2 + 0x210) + 8));
  }
  *(undefined4 *)(instance + 0x10) = u_val1;
  HW_Routine_080086BC(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E3D94 @ 0x080E3D94
// =============================================================================
void VTable_Routine_080E3D94(undefined4 *instance,uint arg1)

{
  
  *instance = gRomData_080E76F8;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E3DB4 @ 0x080E3DB4
// =============================================================================
u32 VTable_Routine_080E3DB4(short *instance,short *arg1,short *arg2)

{
  short s_val1;
  short *psVar2;
  int i_val3;
  
  i_val3 = (int)arg1 - (int)instance >> 3;
  if (0 < i_val3) {
    s_val1 = *arg2;
    do {
      psVar2 = instance;
      if ((((*instance == s_val1) || (psVar2 = instance + 1, instance[1] == s_val1)) ||
          (psVar2 = instance + 2, instance[2] == s_val1)) ||
         (psVar2 = instance + 3, instance[3] == s_val1)) goto LAB_080e3e1c;
      instance = instance + 4;
      i_val3 = i_val3 + -1;
    } while (0 < i_val3);
  }
  i_val3 = (int)arg1 - (int)instance >> 1;
  if (i_val3 == 1) {
LAB_080e3e14:
    psVar2 = instance;
    if (*instance != *arg2) goto LAB_080e3e22;
  }
  else {
    if (i_val3 < 2) goto LAB_080e3e22;
    if (i_val3 == 2) {
LAB_080e3e0a:
      psVar2 = instance;
      if (*instance != *arg2) {
        instance = instance + 1;
        goto LAB_080e3e14;
      }
    }
    else {
      if (i_val3 != 3) goto LAB_080e3e22;
      psVar2 = instance;
      if (*instance != *arg2) {
        instance = instance + 1;
        goto LAB_080e3e0a;
      }
    }
  }
LAB_080e3e1c:
  arg1 = psVar2;
LAB_080e3e22:
  return arg1;
}

// =============================================================================
// Function: VTable_Routine_080E3E28 @ 0x080E3E28
// =============================================================================
u32 VTable_Routine_080E3E28(short *instance,short *arg1,short *arg2)

{
  short s_val1;
  short *psVar2;
  int i_val3;
  
  i_val3 = (int)arg1 - (int)instance >> 3;
  if (0 < i_val3) {
    s_val1 = *arg2;
    do {
      psVar2 = instance;
      if ((((*instance == s_val1) || (psVar2 = instance + 1, instance[1] == s_val1)) ||
          (psVar2 = instance + 2, instance[2] == s_val1)) ||
         (psVar2 = instance + 3, instance[3] == s_val1)) goto LAB_080e3e90;
      instance = instance + 4;
      i_val3 = i_val3 + -1;
    } while (0 < i_val3);
  }
  i_val3 = (int)arg1 - (int)instance >> 1;
  if (i_val3 == 1) {
LAB_080e3e88:
    psVar2 = instance;
    if (*instance != *arg2) goto LAB_080e3e96;
  }
  else {
    if (i_val3 < 2) goto LAB_080e3e96;
    if (i_val3 == 2) {
LAB_080e3e7e:
      psVar2 = instance;
      if (*instance != *arg2) {
        instance = instance + 1;
        goto LAB_080e3e88;
      }
    }
    else {
      if (i_val3 != 3) goto LAB_080e3e96;
      psVar2 = instance;
      if (*instance != *arg2) {
        instance = instance + 1;
        goto LAB_080e3e7e;
      }
    }
  }
LAB_080e3e90:
  arg1 = psVar2;
LAB_080e3e96:
  return arg1;
}

// =============================================================================
// Function: VTable_Routine_080E3E9C @ 0x080E3E9C
// =============================================================================
u32 VTable_Routine_080E3E9C(int instance,int arg1,undefined4 arg2)

{
  char c_char1;
  int i_val2;
  int i_val3;
  
  for (i_val3 = arg1 - instance >> 5; i_val2 = instance, 0 < i_val3; i_val3 = i_val3 + -1) {
    c_char1 = NPC_Routine_0809E8E4(instance,arg2);
    if (c_char1 != '\0') goto LAB_080e3f3a;
    c_char1 = NPC_Routine_0809E8E4(instance + 8,arg2);
    i_val2 = instance + 8;
    if (c_char1 != '\0') goto LAB_080e3f3a;
    c_char1 = NPC_Routine_0809E8E4(instance + 0x10,arg2);
    i_val2 = instance + 0x10;
    if (c_char1 != '\0') goto LAB_080e3f3a;
    c_char1 = NPC_Routine_0809E8E4(instance + 0x18,arg2);
    i_val2 = instance + 0x18;
    if (c_char1 != '\0') goto LAB_080e3f3a;
    instance = instance + 0x20;
  }
  i_val3 = arg1 - instance >> 3;
  if (i_val3 == 1) {
LAB_080e3f26:
    c_char1 = NPC_Routine_0809E8E4(i_val2,arg2);
    if (c_char1 != '\0') goto LAB_080e3f3a;
  }
  else if (1 < i_val3) {
    if (i_val3 != 2) {
      if (i_val3 != 3) goto LAB_080e3f38;
      c_char1 = NPC_Routine_0809E8E4(instance,arg2);
      if (c_char1 != '\0') goto LAB_080e3f3a;
      i_val2 = instance + 8;
    }
    c_char1 = NPC_Routine_0809E8E4(i_val2,arg2);
    if (c_char1 != '\0') goto LAB_080e3f3a;
    i_val2 = i_val2 + 8;
    goto LAB_080e3f26;
  }
LAB_080e3f38:
  i_val2 = arg1;
LAB_080e3f3a:
  return i_val2;
}

// =============================================================================
// Function: VTable_Routine_080E3F40 @ 0x080E3F40
// =============================================================================
u32 VTable_Routine_080E3F40(undefined1 *instance,int arg1,int arg2)

{
  char c_char1;
  undefined4 u_val2;
  uint u_val3;
  undefined4 u_val4;
  undefined1 *p_uint5;
  undefined1 *p_uint6;
  undefined1 stack_buf_54 [64];
  
  u_val2 = gRomData_08104940;
  u_val4 = gRomData_08104938;
  if (arg2 == 0xf1) {
    if (*(char *)(arg1 + 4) < '\n') {
      stack_buf_54[0] = 0x81;
      stack_buf_54[1] = 0x40;
      ScriptEngine_Routine_0804EC84((int)*(char *)(arg1 + 4),stack_buf_54 + 2,0);
    }
    else {
      ScriptEngine_Routine_0804EC84((int)*(char *)(arg1 + 4),stack_buf_54,0);
    }
    p_uint5 = stack_buf_54 + 0x20;
    u_val3 = gba_strlen(stack_buf_54);
    p_uint6 = stack_buf_54;
    if (0x1f < u_val3) {
      u_val3 = 0x1f;
      p_uint6 = stack_buf_54;
    }
LAB_080e406c:
    gba_memcpy(p_uint5,p_uint6,u_val3);
    p_uint5[u_val3] = 0;
    *instance = 1;
    gba_strcpy(instance + 4,p_uint5);
  }
  else {
    if (arg2 < 0xf2) {
      if (arg2 == 0xf0) {
        c_char1 = *(char *)(arg1 + 5);
        if (c_char1 == '\x01') {
          u_val3 = gba_strlen(gRomData_08104940);
          if (0x1f < u_val3) {
            u_val3 = 0x1f;
          }
          gba_memcpy(stack_buf_54,u_val2,u_val3);
          stack_buf_54[u_val3] = 0;
          *instance = 1;
LAB_080e4006:
          gba_strcpy(instance + 4,stack_buf_54);
          goto LAB_080e4094;
        }
        if (c_char1 < '\x02') {
          if (c_char1 == '\0') {
            u_val3 = gba_strlen(gRomData_08104938);
            if (0x1f < u_val3) {
              u_val3 = 0x1f;
            }
            gba_memcpy(stack_buf_54,u_val4,u_val3);
            stack_buf_54[u_val3] = 0;
            *instance = 1;
            gba_strcpy(instance + 4);
            goto LAB_080e4094;
          }
        }
        else {
          u_val4 = gRomData_08104948;
          if ((c_char1 == '\x02') || (u_val4 = gRomData_08104950, c_char1 == '\x03')) {
            u_val3 = gba_strlen(u_val4);
            if (0x1f < u_val3) {
              u_val3 = 0x1f;
            }
            gba_memcpy(stack_buf_54,u_val4,u_val3);
            stack_buf_54[u_val3] = 0;
            *instance = 1;
            goto LAB_080e4006;
          }
        }
      }
    }
    else if (arg2 == 0xf2) {
      p_uint5 = stack_buf_54 + 8;
      p_uint6 = *(undefined1 **)(arg1 + 8);
      u_val3 = gba_strlen(p_uint6);
      if (0x1f < u_val3) {
        u_val3 = 0x1f;
      }
      goto LAB_080e406c;
    }
    stack_buf_54[0] = 0;
    *instance = 0;
    gba_strcpy(instance + 4);
  }
LAB_080e4094:
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E4190 @ 0x080E4190
// =============================================================================
void VTable_Routine_080E4190(undefined4 *instance,uint arg1)

{
  
  *instance = gRomData_080E76F8;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E41B0 @ 0x080E41B0
// =============================================================================
void VTable_Routine_080E41B0(int instance,undefined4 arg1)

{
  int *p_int1;
  int i_val2;
  
  p_int1 = *(int **)(instance + 8);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  i_val2 = *(int *)(instance + 4);
  if (i_val2 != 0) {
    _call_via_r2(i_val2,3,*(undefined4 *)(*(int *)(i_val2 + 4) + 8));
  }
  SramProxy_VerifyBufferParity(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E41E8 @ 0x080E41E8
// =============================================================================
void VTable_Routine_080E41E8(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  SramProxy_VerifyBufferParity(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E4210 @ 0x080E4210
// =============================================================================
void VTable_Routine_080E4210(int instance,undefined4 arg1)

{
  int *p_int1;
  
  p_int1 = *(int **)(instance + 4);
  if (p_int1 != (int *)0x0) {
    _call_via_r2(p_int1,3,*(undefined4 *)(*p_int1 + 8));
  }
  SramProxy_VerifyBufferParity(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E4238 @ 0x080E4238
// =============================================================================
void VTable_Routine_080E4238(void)

{
  
  Farm_Routine_080098AC();
  return;
}

// =============================================================================
// Function: VTable_Routine_080E4244 @ 0x080E4244
// =============================================================================
u32 VTable_Routine_080E4244(int *instance,int arg1,int arg2,int arg3,int *arg_5,int arg_6)

{
  int i_val1;
  int i_val2;
  
  if ((arg3 == *(int *)(arg1 + 4)) ||
     ((arg_6 == 0 && ((arg2 != 0 || (*arg_5 < *(int *)(arg3 + 0x10))))))) {
    i_val1 = runtime_malloc_aligned(0x18);
    if (i_val1 == 0) {
      i_val1 = VTable_Routine_080D3BC0(0x18);
    }
    if (i_val1 != -0x10) {
      *(int *)(i_val1 + 0x10) = *arg_5;
      *(int *)(i_val1 + 0x14) = arg_5[1];
    }
    *(int *)(arg3 + 8) = i_val1;
    i_val2 = *(int *)(arg1 + 4);
    if (arg3 == i_val2) {
      *(int *)(arg3 + 4) = i_val1;
      *(int *)(*(int *)(arg1 + 4) + 0xc) = i_val1;
    }
    else if (arg3 == *(int *)(i_val2 + 8)) {
      *(int *)(i_val2 + 8) = i_val1;
    }
  }
  else {
    i_val1 = runtime_malloc_aligned(0x18);
    if (i_val1 == 0) {
      i_val1 = VTable_Routine_080D3BC0(0x18);
    }
    if (i_val1 != -0x10) {
      *(int *)(i_val1 + 0x10) = *arg_5;
      *(int *)(i_val1 + 0x14) = arg_5[1];
    }
    *(int *)(arg3 + 0xc) = i_val1;
    if (arg3 == *(int *)(*(int *)(arg1 + 4) + 0xc)) {
      *(int *)(*(int *)(arg1 + 4) + 0xc) = i_val1;
    }
  }
  *(int *)(i_val1 + 4) = arg3;
  *(undefined4 *)(i_val1 + 8) = 0;
  *(undefined4 *)(i_val1 + 0xc) = 0;
  VTable_Routine_080E21E0(i_val1,*(int *)(arg1 + 4) + 4);
  *(int *)(arg1 + 8) = *(int *)(arg1 + 8) + 1;
  *instance = i_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E4304 @ 0x080E4304
// =============================================================================
u32 VTable_Routine_080E4304(int *instance,int arg1,int *arg2)

{
  bool b_flag1;
  int i_val2;
  int pos_x;
  int stack_val_24;
  int stack_val_20;
  int stack_val_1c;
  
  i_val2 = *(int *)(arg1 + 4);
  b_flag1 = true;
  if (*(int *)(i_val2 + 4) != 0) {
    pos_x = *(int *)(i_val2 + 4);
    do {
      i_val2 = pos_x;
      b_flag1 = *arg2 < *(int *)(i_val2 + 0x10);
      if (b_flag1) {
        pos_x = *(int *)(i_val2 + 8);
      }
      else {
        pos_x = *(int *)(i_val2 + 0xc);
      }
    } while (pos_x != 0);
  }
  stack_val_24 = i_val2;
  if (b_flag1) {
    stack_val_20 = *(int *)(*(int *)(arg1 + 4) + 8);
    if (i_val2 != stack_val_20) {
      stack_val_24 = VTable_Routine_080E2354(i_val2);
      goto LAB_080e4374;
    }
    VTable_Routine_080E4244(&stack_val_1c,arg1,0,i_val2,arg2,0);
  }
  else {
LAB_080e4374:
    if (*arg2 <= *(int *)(stack_val_24 + 0x10)) {
      *instance = stack_val_24;
      *(undefined1 *)(instance + 1) = 0;
      goto LAB_080e43a8;
    }
    VTable_Routine_080E4244(&stack_val_20,arg1,0,i_val2,arg2,0);
    stack_val_1c = stack_val_20;
  }
  *instance = stack_val_1c;
  *(undefined1 *)(instance + 1) = 1;
LAB_080e43a8:
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E43B8 @ 0x080E43B8
// =============================================================================
void VTable_Routine_080E43B8(int instance,undefined4 arg1)

{
  
  if (*(int *)(instance + 0xac) != 0) {
    VTable_Routine_080DC57C(instance + 0xa4,*(undefined4 *)(*(int *)(instance + 0xa8) + 4));
    *(int *)(*(int *)(instance + 0xa8) + 8) = *(int *)(instance + 0xa8);
    *(undefined4 *)(*(int *)(instance + 0xa8) + 4) = 0;
    *(int *)(*(int *)(instance + 0xa8) + 0xc) = *(int *)(instance + 0xa8);
    *(undefined4 *)(instance + 0xac) = 0;
  }
  if (*(int *)(instance + 0xa8) != 0) {
    cpp_operator_delete();
  }
  NPC_Routine_080A4B6C(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E43FC @ 0x080E43FC
// =============================================================================
u32 VTable_Routine_080E43FC(int instance)

{
  undefined1 *p_uint1;
  
  *(undefined4 *)(instance + 0xc) = 0;
  p_uint1 = (undefined1 *)runtime_malloc_aligned(0x18);
  if (p_uint1 == (undefined1 *)0x0) {
    p_uint1 = (undefined1 *)VTable_Routine_080D3BC0(0x18);
  }
  *(undefined1 **)(instance + 0xc) = p_uint1;
  *(undefined4 *)(instance + 0x10) = 0;
  *(undefined4 *)(instance + 0x14) = 0;
  *p_uint1 = 0;
  *(undefined4 *)(p_uint1 + 4) = 0;
  *(int *)(*(int *)(instance + 0xc) + 8) = *(int *)(instance + 0xc);
  *(int *)(*(int *)(instance + 0xc) + 0xc) = *(int *)(instance + 0xc);
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E4438 @ 0x080E4438
// =============================================================================
u32 VTable_Routine_080E4438(undefined1 *instance,undefined1 *arg1)

{
  undefined4 *p_uint1;
  undefined4 *p_uint2;
  int i_val3;
  undefined1 *p_uint4;
  undefined4 u_val5;
  undefined4 u_val6;
  
  *instance = *arg1;
  instance[1] = arg1[1];
  p_uint2 = (undefined4 *)(instance + 4);
  i_val3 = 1;
  p_uint1 = (undefined4 *)(arg1 + 4);
  do {
    u_val5 = p_uint1[1];
    u_val6 = p_uint1[2];
    *p_uint2 = *p_uint1;
    p_uint2[1] = u_val5;
    p_uint2[2] = u_val6;
    u_val5 = p_uint1[4];
    u_val6 = p_uint1[5];
    p_uint2[3] = p_uint1[3];
    p_uint2[4] = u_val5;
    p_uint2[5] = u_val6;
    u_val5 = p_uint1[7];
    p_uint2[6] = p_uint1[6];
    p_uint2[7] = u_val5;
    p_uint2 = p_uint2 + 8;
    p_uint1 = p_uint1 + 8;
    i_val3 = i_val3 + -1;
  } while (i_val3 != -1);
  p_uint4 = instance + 0x44;
  i_val3 = 1;
  arg1 = arg1 + 0x44;
  do {
    if (arg1 != p_uint4) {
      HW_Routine_08007C28(p_uint4,*(undefined4 *)(p_uint4 + 4));
      u_val5 = HW_Routine_08007CD8(p_uint4,*(undefined4 *)(arg1 + 4));
      *(undefined4 *)(p_uint4 + 4) = u_val5;
    }
    p_uint4 = p_uint4 + 8;
    arg1 = arg1 + 8;
    i_val3 = i_val3 + -1;
  } while (i_val3 != -1);
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E44B8 @ 0x080E44B8
// =============================================================================
void VTable_Routine_080E44B8(undefined4 *instance,uint arg1)

{
  
  NPC_Routine_080AC85C(instance + 1,2);
  *instance = gRomData_080E61A0;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E44E4 @ 0x080E44E4
// =============================================================================
void VTable_Routine_080E44E4(undefined4 instance)

{
  undefined4 u_val1;
  
  u_val1 = CppRuntime_OperatorNewArray(0x8c);
  Entity_Routine_080324BC(u_val1,instance,5,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E4510 @ 0x080E4510
// =============================================================================
void VTable_Routine_080E4510(int instance,uint arg1)

{
  int i_val1;
  
  *(undefined4 *)(instance + 0x14) = gRomData_080E6250;
  i_val1 = *(int *)(instance + 0x10);
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 4) + 8));
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E4544 @ 0x080E4544
// =============================================================================
void VTable_Routine_080E4544(undefined4 *instance,uint arg1)

{
  
  *instance = gRomData_080E61A0;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E4564 @ 0x080E4564
// =============================================================================
void VTable_Routine_080E4564(int instance,undefined4 arg1)

{
  int i_val1;
  int *p_int2;
  undefined4 *p_uint3;
  undefined4 *p_uint4;
  
  VTable_Routine_080E4860(instance + 0x888,2);
  Farm_Routine_080098AC(instance + 0x82C,2);
  Farm_Routine_080098AC(instance + 0x820,2);
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x7e8));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x7E4));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x7c0));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x7BC));
  if (instance != -0x708) {
    p_uint3 = (undefined4 *)(instance + 0x71c);
    if ((undefined4 *)(instance + 0x708) != p_uint3) {
      do {
        p_uint3 = p_uint3 + -1;
        CppRuntime_FreeMemory(*p_uint3);
      } while ((undefined4 *)(instance + 0x708) != p_uint3);
    }
  }
  if ((undefined4 *)(instance + 0x6F4) != (undefined4 *)0x0) {
    p_uint3 = (undefined4 *)(instance + 0x6F4 + 0x14);
    if ((undefined4 *)(instance + 0x6F4) != p_uint3) {
      p_uint4 = (undefined4 *)(instance + 0x6F4);
      do {
        p_uint3 = p_uint3 + -1;
        CppRuntime_FreeMemory(*p_uint3);
      } while (p_uint4 != p_uint3);
    }
  }
  if (instance != -0x6e0) {
    p_uint3 = (undefined4 *)(instance + 0x6f4);
    if ((undefined4 *)(instance + 0x6e0) != p_uint3) {
      do {
        p_uint3 = p_uint3 + -1;
        CppRuntime_FreeMemory(*p_uint3);
      } while ((undefined4 *)(instance + 0x6e0) != p_uint3);
    }
  }
  if ((undefined4 *)(instance + 0x62C) != (undefined4 *)0x0) {
    p_uint3 = (undefined4 *)(instance + 0x62C + 0x14);
    if ((undefined4 *)(instance + 0x62C) != p_uint3) {
      p_uint4 = (undefined4 *)(instance + 0x62C);
      do {
        p_uint3 = p_uint3 + -1;
        CppRuntime_FreeMemory(*p_uint3);
      } while (p_uint4 != p_uint3);
    }
  }
  if (instance != -0x618) {
    p_uint3 = (undefined4 *)(instance + 0x62c);
    if ((undefined4 *)(instance + 0x618) != p_uint3) {
      do {
        p_uint3 = p_uint3 + -1;
        CppRuntime_FreeMemory(*p_uint3);
      } while ((undefined4 *)(instance + 0x618) != p_uint3);
    }
  }
  if ((undefined4 *)(instance + 0x564) != (undefined4 *)0x0) {
    p_uint3 = (undefined4 *)(instance + 0x564 + 0x14);
    if ((undefined4 *)(instance + 0x564) != p_uint3) {
      p_uint4 = (undefined4 *)(instance + 0x564);
      do {
        p_uint3 = p_uint3 + -1;
        CppRuntime_FreeMemory(*p_uint3);
      } while (p_uint4 != p_uint3);
    }
  }
  if (instance != -0x550) {
    p_uint3 = (undefined4 *)(instance + 0x564);
    if ((undefined4 *)(instance + 0x550) != p_uint3) {
      do {
        p_uint3 = p_uint3 + -1;
        CppRuntime_FreeMemory(*p_uint3);
      } while ((undefined4 *)(instance + 0x550) != p_uint3);
    }
  }
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x52C));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x528));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x504));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x500));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x4DC));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x4d8));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x4B4));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x4b0));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x48C));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x488));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x464));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x460));
  i_val1 = *(int *)(instance + 0x43C);
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 8) + 0xc));
  }
  p_int2 = *(int **)(instance + 0x438);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x434);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x430);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x42C);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x428);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x424);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x420);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x41C);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  if (*(int *)(instance + 0x418) != 0) {
    Animal_Routine_08050D0C(*(int *)(instance + 0x418),3);
  }
  HW_Routine_080086BC(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E4860 @ 0x080E4860
// =============================================================================
void VTable_Routine_080E4860(int instance,uint arg1)

{
  
  HW_Routine_08007C28(instance + 0x50,*(undefined4 *)(instance + 0x54));
  HW_Routine_080079E8(instance + 0x50,2);
  HW_Routine_08007C28(instance + 0x48,*(undefined4 *)(instance + 0x4c));
  HW_Routine_080079E8(instance + 0x48,2);
  HW_Routine_08007C28(instance + 0x40,*(undefined4 *)(instance + 0x44));
  HW_Routine_080079E8(instance + 0x40,2);
  HW_Routine_08007C28(instance + 0x38,*(undefined4 *)(instance + 0x3c));
  HW_Routine_080079E8(instance + 0x38,2);
  HW_Routine_08007C28(instance + 0x30,*(undefined4 *)(instance + 0x34));
  HW_Routine_080079E8(instance + 0x30,2);
  HW_Routine_08007C28(instance + 0x28,*(undefined4 *)(instance + 0x2c));
  HW_Routine_080079E8(instance + 0x28,2);
  HW_Routine_08007C28(instance + 0x20,*(undefined4 *)(instance + 0x24));
  HW_Routine_080079E8(instance + 0x20,2);
  HW_Routine_08007C28(instance + 0x18,*(undefined4 *)(instance + 0x1c));
  HW_Routine_080079E8(instance + 0x18,2);
  HW_Routine_08007C28(instance + 0x10,*(undefined4 *)(instance + 0x14));
  HW_Routine_080079E8(instance + 0x10,2);
  HW_Routine_08007C28(instance + 8,*(undefined4 *)(instance + 0xc));
  HW_Routine_080079E8(instance + 8,2);
  HW_Routine_08007C28(instance,*(undefined4 *)(instance + 4));
  HW_Routine_080079E8(instance,2);
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E4940 @ 0x080E4940
// =============================================================================
void VTable_Routine_080E4940(int instance,undefined4 arg1)

{
  int i_val1;
  int *p_int2;
  undefined4 *p_uint3;
  undefined4 *p_uint4;
  int i_val5;
  undefined4 *p_uint6;
  int i_val7;
  
  if (((undefined4 *)(instance + 0xAEC) != (undefined4 *)0x0) &&
     (p_uint3 = (undefined4 *)(instance + 0xAEC + 0x28),
     (undefined4 *)(instance + 0xAEC) != p_uint3)) {
    p_uint6 = (undefined4 *)(instance + 0xAEC);
    do {
      p_uint3 = p_uint3 + -1;
      CppRuntime_FreeMemory(*p_uint3);
    } while (p_uint6 != p_uint3);
  }
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0xAC8));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0xAA4));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0xa80));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0xA7C));
  if (((undefined4 *)(instance + 0xA34) != (undefined4 *)0x0) &&
     (p_uint3 = (undefined4 *)(instance + 0xA34 + 8),
     (undefined4 *)(instance + 0xA34) != p_uint3)) {
    p_uint6 = (undefined4 *)(instance + 0xA34);
    do {
      p_uint3 = p_uint3 + -1;
      CppRuntime_FreeMemory(*p_uint3);
    } while (p_uint6 != p_uint3);
  }
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0xa30));
  if (((undefined4 *)(instance + 0x9E8) != (undefined4 *)0x0) &&
     (p_uint3 = (undefined4 *)(instance + 0x9E8 + 8),
     (undefined4 *)(instance + 0x9E8) != p_uint3)) {
    p_uint6 = (undefined4 *)(instance + 0x9E8);
    do {
      p_uint3 = p_uint3 + -1;
      CppRuntime_FreeMemory(*p_uint3);
    } while (p_uint6 != p_uint3);
  }
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x9E4));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x9c0));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x9BC));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x998));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x994));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x970));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x96C));
  if (((undefined4 *)(instance + 0x924) != (undefined4 *)0x0) &&
     (p_uint3 = (undefined4 *)(instance + 0x924 + 8),
     (undefined4 *)(instance + 0x924) != p_uint3)) {
    p_uint6 = (undefined4 *)(instance + 0x924);
    do {
      p_uint3 = p_uint3 + -1;
      CppRuntime_FreeMemory(*p_uint3);
    } while (p_uint6 != p_uint3);
  }
  if (((undefined4 *)(instance + 0x91C) != (undefined4 *)0x0) &&
     (p_uint3 = (undefined4 *)(instance + 0x91C + 8),
     (undefined4 *)(instance + 0x91C) != p_uint3)) {
    p_uint6 = (undefined4 *)(instance + 0x91C);
    do {
      p_uint3 = p_uint3 + -1;
      CppRuntime_FreeMemory(*p_uint3);
    } while (p_uint6 != p_uint3);
  }
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x8F8));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x8F4));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x8d0));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x8CC));
  if (((undefined4 *)(instance + 0x884) != (undefined4 *)0x0) &&
     (p_uint3 = (undefined4 *)(instance + 0x884 + 8),
     (undefined4 *)(instance + 0x884) != p_uint3)) {
    p_uint6 = (undefined4 *)(instance + 0x884);
    do {
      p_uint3 = p_uint3 + -1;
      CppRuntime_FreeMemory(*p_uint3);
    } while (p_uint6 != p_uint3);
  }
  if (((undefined4 *)(instance + 0x87C) != (undefined4 *)0x0) &&
     (p_uint3 = (undefined4 *)(instance + 0x87C + 8),
     (undefined4 *)(instance + 0x87C) != p_uint3)) {
    p_uint6 = (undefined4 *)(instance + 0x87C);
    do {
      p_uint3 = p_uint3 + -1;
      CppRuntime_FreeMemory(*p_uint3);
    } while (p_uint6 != p_uint3);
  }
  if ((instance != -0x7c8) &&
     (p_uint3 = (undefined4 *)(instance + 0x7dc), (undefined4 *)(instance + 0x7c8) != p_uint3)) {
    do {
      p_uint3 = p_uint3 + -1;
      CppRuntime_FreeMemory(*p_uint3);
    } while ((undefined4 *)(instance + 0x7c8) != p_uint3);
  }
  if (((undefined4 *)(instance + 0x7B4) != (undefined4 *)0x0) &&
     (p_uint3 = (undefined4 *)(instance + 0x7B4 + 0x14),
     (undefined4 *)(instance + 0x7B4) != p_uint3)) {
    p_uint6 = (undefined4 *)(instance + 0x7B4);
    do {
      p_uint3 = p_uint3 + -1;
      CppRuntime_FreeMemory(*p_uint3);
    } while (p_uint6 != p_uint3);
  }
  if (((undefined4 *)(instance + 0x7AC) != (undefined4 *)0x0) &&
     (p_uint3 = (undefined4 *)(instance + 0x7AC + 8),
     (undefined4 *)(instance + 0x7AC) != p_uint3)) {
    p_uint6 = (undefined4 *)(instance + 0x7AC);
    do {
      p_uint3 = p_uint3 + -1;
      CppRuntime_FreeMemory(*p_uint3);
    } while (p_uint6 != p_uint3);
  }
  if (((undefined4 *)(instance + 0x7A4) != (undefined4 *)0x0) &&
     (p_uint3 = (undefined4 *)(instance + 0x7A4 + 8),
     (undefined4 *)(instance + 0x7A4) != p_uint3)) {
    p_uint6 = (undefined4 *)(instance + 0x7A4);
    do {
      p_uint3 = p_uint3 + -1;
      CppRuntime_FreeMemory(*p_uint3);
    } while (p_uint6 != p_uint3);
  }
  i_val1 = *(int *)(instance + 0x7a0);
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 8) + 0xc));
  }
  p_int2 = *(int **)(instance + 0x79C);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x798);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x794);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x790);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x78C);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x788);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x784);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x780);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_uint3 = (undefined4 *)(instance + 0x77C);
  p_int2 = (int *)*p_uint3;
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_uint6 = (undefined4 *)(instance + 0x73C);
  if (p_uint6 != (undefined4 *)0x0) {
    while (p_uint6 != p_uint3) {
      p_uint4 = p_uint3 + -2;
      HW_Routine_080073E0(p_uint4,p_uint3[-1]);
      HW_Routine_08007184(p_uint4,2);
      p_uint3 = p_uint4;
    }
  }
  if ((instance + 0x72C != 0) &&
     (i_val1 = instance + 0x72C + 0x10, instance + 0x72C != i_val1)) {
    i_val7 = instance + 0x72C;
    do {
      i_val5 = i_val1 + -8;
      HW_Routine_080073E0(i_val5,*(undefined4 *)(i_val1 + -4));
      HW_Routine_08007184(i_val5,2);
      i_val1 = i_val5;
    } while (i_val7 != i_val5);
  }
  i_val1 = instance + 0x724;
  HW_Routine_080073E0(i_val1,*(undefined4 *)(i_val1 + 4));
  HW_Routine_08007184(i_val1,2);
  i_val1 = instance + 0x71C;
  HW_Routine_080073E0(i_val1,*(undefined4 *)(i_val1 + 4));
  HW_Routine_08007184(i_val1,2);
  if (*(int *)(instance + 0x718) != 0) {
    Animal_Routine_08050D0C(*(int *)(instance + 0x718),3);
  }
  HW_Routine_080086BC(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E4D50 @ 0x080E4D50
// =============================================================================
void VTable_Routine_080E4D50(int instance,undefined4 arg1)

{
  int i_val1;
  int *p_int2;
  
  VTable_Routine_080E4F34(instance + 0x5b0,2);
  Farm_Routine_080098AC(instance + 0x594,2);
  Farm_Routine_080098AC(instance + 0x588,2);
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x554));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x550));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x52C));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x528));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x504));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x500));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x4DC));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x4d8));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x4B4));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x4b0));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x48C));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x488));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x464));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x460));
  i_val1 = *(int *)(instance + 0x43C);
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 8) + 0xc));
  }
  p_int2 = *(int **)(instance + 0x438);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x434);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x430);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x42C);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x428);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x424);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x420);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x41C);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  if (*(int *)(instance + 0x418) != 0) {
    Animal_Routine_08050D0C(*(int *)(instance + 0x418),3);
  }
  HW_Routine_080086BC(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E4F34 @ 0x080E4F34
// =============================================================================
void VTable_Routine_080E4F34(int instance,uint arg1)

{
  
  HW_Routine_08007C28(instance + 0x40,*(undefined4 *)(instance + 0x44));
  HW_Routine_080079E8(instance + 0x40,2);
  HW_Routine_08007C28(instance + 0x38,*(undefined4 *)(instance + 0x3c));
  HW_Routine_080079E8(instance + 0x38,2);
  HW_Routine_08007C28(instance + 0x30,*(undefined4 *)(instance + 0x34));
  HW_Routine_080079E8(instance + 0x30,2);
  HW_Routine_08007C28(instance + 0x28,*(undefined4 *)(instance + 0x2c));
  HW_Routine_080079E8(instance + 0x28,2);
  HW_Routine_08007C28(instance + 0x20,*(undefined4 *)(instance + 0x24));
  HW_Routine_080079E8(instance + 0x20,2);
  HW_Routine_08007C28(instance + 0x18,*(undefined4 *)(instance + 0x1c));
  HW_Routine_080079E8(instance + 0x18,2);
  HW_Routine_08007C28(instance + 0x10,*(undefined4 *)(instance + 0x14));
  HW_Routine_080079E8(instance + 0x10,2);
  HW_Routine_08007C28(instance + 8,*(undefined4 *)(instance + 0xc));
  HW_Routine_080079E8(instance + 8,2);
  HW_Routine_08007C28(instance,*(undefined4 *)(instance + 4));
  HW_Routine_080079E8(instance,2);
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E4FF0 @ 0x080E4FF0
// =============================================================================
void VTable_Routine_080E4FF0(int instance,undefined4 arg1)

{
  int i_val1;
  int *p_int2;
  undefined4 *p_uint3;
  undefined4 *p_uint4;
  
  VTable_Routine_080E5324(instance + 0x83C,2);
  Farm_Routine_080098AC(instance + 0x830,2);
  Farm_Routine_080098AC(instance + 0x824,2);
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x7EC));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x7e8));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x7C4));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x7c0));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x79C));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x798));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x754));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x750));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x72C));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x728));
  if ((undefined4 *)(instance + 0x6A4) != (undefined4 *)0x0) {
    p_uint3 = (undefined4 *)(instance + 0x6A4 + 100);
    if ((undefined4 *)(instance + 0x6A4) != p_uint3) {
      p_uint4 = (undefined4 *)(instance + 0x6A4);
      do {
        p_uint3 = p_uint3 + -1;
        CppRuntime_FreeMemory(*p_uint3);
      } while (p_uint4 != p_uint3);
    }
  }
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x6a0));
  if ((undefined4 *)(instance + 0x61C) != (undefined4 *)0x0) {
    p_uint3 = (undefined4 *)(instance + 0x61C + 100);
    if ((undefined4 *)(instance + 0x61C) != p_uint3) {
      p_uint4 = (undefined4 *)(instance + 0x61C);
      do {
        p_uint3 = p_uint3 + -1;
        CppRuntime_FreeMemory(*p_uint3);
      } while (p_uint4 != p_uint3);
    }
  }
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x618));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x5F4));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x5f0));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x5CC));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x5c8));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x5A4));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x5a0));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x57C));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x578));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x554));
  CppRuntime_FreeMemory(*(undefined4 *)(instance + 0x550));
  i_val1 = *(int *)(instance + 0x544);
  if (i_val1 != 0) {
    _call_via_r2(i_val1,3,*(undefined4 *)(*(int *)(i_val1 + 8) + 0xc));
  }
  p_int2 = *(int **)(instance + 0x540);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x53C);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x538);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x534);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x530);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x52C);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x528);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x524);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  p_int2 = *(int **)(instance + 0x520);
  if (p_int2 != (int *)0x0) {
    _call_via_r2(p_int2,3,*(undefined4 *)(*p_int2 + 8));
  }
  if (*(int *)(instance + 0x51C) != 0) {
    Animal_Routine_08050D0C(*(int *)(instance + 0x51C),3);
  }
  HW_Routine_080086BC(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E52A0 @ 0x080E52A0
// =============================================================================
u32 VTable_Routine_080E52A0(int instance)

{
  
  GBA_ObjAttr_Init();
  *(undefined4 *)(instance + 4) = 0;
  GBA_ObjAttr_Init(instance + 8);
  *(undefined4 *)(instance + 0xc) = 0;
  GBA_ObjAttr_Init(instance + 0x10);
  *(undefined4 *)(instance + 0x14) = 0;
  GBA_ObjAttr_Init(instance + 0x18);
  *(undefined4 *)(instance + 0x1c) = 0;
  GBA_ObjAttr_Init(instance + 0x20);
  *(undefined4 *)(instance + 0x24) = 0;
  GBA_ObjAttr_Init(instance + 0x28);
  *(undefined4 *)(instance + 0x2c) = 0;
  GBA_ObjAttr_Init(instance + 0x30);
  *(undefined4 *)(instance + 0x34) = 0;
  GBA_ObjAttr_Init(instance + 0x38);
  *(undefined4 *)(instance + 0x3c) = 0;
  GBA_ObjAttr_Init(instance + 0x40);
  *(undefined4 *)(instance + 0x44) = 0;
  GBA_ObjAttr_Init(instance + 0x48);
  *(undefined4 *)(instance + 0x4c) = 0;
  GBA_ObjAttr_Init(instance + 0x50);
  *(undefined4 *)(instance + 0x54) = 0;
  GBA_ObjAttr_Init(instance + 0x58);
  *(undefined4 *)(instance + 0x5c) = 0;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E5324 @ 0x080E5324
// =============================================================================
void VTable_Routine_080E5324(int instance,uint arg1)

{
  
  HW_Routine_08007C28(instance + 0x58,*(undefined4 *)(instance + 0x5c));
  HW_Routine_080079E8(instance + 0x58,2);
  HW_Routine_08007C28(instance + 0x50,*(undefined4 *)(instance + 0x54));
  HW_Routine_080079E8(instance + 0x50,2);
  HW_Routine_08007C28(instance + 0x48,*(undefined4 *)(instance + 0x4c));
  HW_Routine_080079E8(instance + 0x48,2);
  HW_Routine_08007C28(instance + 0x40,*(undefined4 *)(instance + 0x44));
  HW_Routine_080079E8(instance + 0x40,2);
  HW_Routine_08007C28(instance + 0x38,*(undefined4 *)(instance + 0x3c));
  HW_Routine_080079E8(instance + 0x38,2);
  HW_Routine_08007C28(instance + 0x30,*(undefined4 *)(instance + 0x34));
  HW_Routine_080079E8(instance + 0x30,2);
  HW_Routine_08007C28(instance + 0x28,*(undefined4 *)(instance + 0x2c));
  HW_Routine_080079E8(instance + 0x28,2);
  HW_Routine_08007C28(instance + 0x20,*(undefined4 *)(instance + 0x24));
  HW_Routine_080079E8(instance + 0x20,2);
  HW_Routine_08007C28(instance + 0x18,*(undefined4 *)(instance + 0x1c));
  HW_Routine_080079E8(instance + 0x18,2);
  HW_Routine_08007C28(instance + 0x10,*(undefined4 *)(instance + 0x14));
  HW_Routine_080079E8(instance + 0x10,2);
  HW_Routine_08007C28(instance + 8,*(undefined4 *)(instance + 0xc));
  HW_Routine_080079E8(instance + 8,2);
  HW_Routine_08007C28(instance,*(undefined4 *)(instance + 4));
  HW_Routine_080079E8(instance,2);
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E5418 @ 0x080E5418
// =============================================================================
void VTable_Routine_080E5418(void)

{
  
  M4A_Routine_080CA6F4(*(undefined4 *)*gIWRAM_030414);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E542C @ 0x080E542C
// =============================================================================
u32 VTable_Routine_080E542C(undefined4 *instance,undefined4 *arg1)

{
  ushort u_val1;
  undefined4 u_val2;
  int i_val3;
  
  instance[5] = gRomData_080E857C;
  *instance = *arg1;
  u_val1 = Interrupt_WaitForVBlank(4);
  *(ushort *)(instance + 1) = u_val1 & 4;
  i_val3 = *gIWRAM_030414;
  *gIWRAM_030414 = (int)instance;
  instance[2] = i_val3;
  instance[3] = gRomData_080E8588;
  u_val2 = M4A_Routine_080D100C(2,gRomData_080E5419);
  instance[4] = u_val2;
  Interrupt_SetMasterEnable(4);
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E54C4 @ 0x080E54C4
// =============================================================================
void VTable_Routine_080E54C4(undefined4 instance,int arg1)

{
  int i_val1;
  
  while (i_val1 = arg1, i_val1 != 0) {
    VTable_Routine_080E54C4(instance,*(undefined4 *)(i_val1 + 0xc));
    arg1 = *(int *)(i_val1 + 8);
    if (i_val1 != 0) {
      cpp_operator_delete(i_val1);
    }
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E54F0 @ 0x080E54F0
// =============================================================================
u32 VTable_Routine_080E54F0(int *instance,int arg1,int arg2,int arg3,uint *arg_5,int arg_6)

{
  int i_val1;
  int i_val2;
  
  if ((arg3 == *(int *)(arg1 + 4)) ||
     ((arg_6 == 0 && ((arg2 != 0 || (*arg_5 < *(uint *)(arg3 + 0x10))))))) {
    i_val1 = runtime_malloc_aligned(0x18);
    if (i_val1 == 0) {
      i_val1 = VTable_Routine_080D3BC0(0x18);
    }
    if (i_val1 != -0x10) {
      *(uint *)(i_val1 + 0x10) = *arg_5;
      *(uint *)(i_val1 + 0x14) = arg_5[1];
    }
    *(int *)(arg3 + 8) = i_val1;
    i_val2 = *(int *)(arg1 + 4);
    if (arg3 == i_val2) {
      *(int *)(arg3 + 4) = i_val1;
      *(int *)(*(int *)(arg1 + 4) + 0xc) = i_val1;
    }
    else if (arg3 == *(int *)(i_val2 + 8)) {
      *(int *)(i_val2 + 8) = i_val1;
    }
  }
  else {
    i_val1 = runtime_malloc_aligned(0x18);
    if (i_val1 == 0) {
      i_val1 = VTable_Routine_080D3BC0(0x18);
    }
    if (i_val1 != -0x10) {
      *(uint *)(i_val1 + 0x10) = *arg_5;
      *(uint *)(i_val1 + 0x14) = arg_5[1];
    }
    *(int *)(arg3 + 0xc) = i_val1;
    if (arg3 == *(int *)(*(int *)(arg1 + 4) + 0xc)) {
      *(int *)(*(int *)(arg1 + 4) + 0xc) = i_val1;
    }
  }
  *(int *)(i_val1 + 4) = arg3;
  *(undefined4 *)(i_val1 + 8) = 0;
  *(undefined4 *)(i_val1 + 0xc) = 0;
  VTable_Routine_080E21E0(i_val1,*(int *)(arg1 + 4) + 4);
  *(int *)(arg1 + 8) = *(int *)(arg1 + 8) + 1;
  *instance = i_val1;
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E55B0 @ 0x080E55B0
// =============================================================================
u32 VTable_Routine_080E55B0(int *instance,int arg1,uint *arg2)

{
  int i_val1;
  int pos_x;
  bool b_flag3;
  int stack_val_24;
  int stack_val_20;
  int stack_val_1c;
  
  i_val1 = *(int *)(arg1 + 4);
  b_flag3 = true;
  if (*(int *)(i_val1 + 4) != 0) {
    pos_x = *(int *)(i_val1 + 4);
    do {
      i_val1 = pos_x;
      b_flag3 = *arg2 < *(uint *)(i_val1 + 0x10);
      if (b_flag3) {
        pos_x = *(int *)(i_val1 + 8);
      }
      else {
        pos_x = *(int *)(i_val1 + 0xc);
      }
    } while (pos_x != 0);
  }
  stack_val_24 = i_val1;
  if (b_flag3) {
    stack_val_20 = *(int *)(*(int *)(arg1 + 4) + 8);
    if (i_val1 != stack_val_20) {
      stack_val_24 = VTable_Routine_080E2354(i_val1);
      goto LAB_080e5620;
    }
    VTable_Routine_080E54F0(&stack_val_1c,arg1,0,i_val1,arg2,0);
  }
  else {
LAB_080e5620:
    if (*arg2 <= *(uint *)(stack_val_24 + 0x10)) {
      *instance = stack_val_24;
      *(undefined1 *)(instance + 1) = 0;
      goto LAB_080e5654;
    }
    VTable_Routine_080E54F0(&stack_val_20,arg1,0,i_val1,arg2,0);
    stack_val_1c = stack_val_20;
  }
  *instance = stack_val_1c;
  *(undefined1 *)(instance + 1) = 1;
LAB_080e5654:
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E5664 @ 0x080E5664
// =============================================================================
u32 VTable_Routine_080E5664(int *instance,int arg1,int *arg2,uint *arg3)

{
  int i_val1;
  int i_val2;
  int pos_y;
  bool b_flag4;
  bool b_flag5;
  int stack_val_2c;
  int stack_val_28;
  int stack_ints_24 [2];
  
  i_val2 = *arg2;
  if (i_val2 == *(int *)(*(int *)(arg1 + 4) + 8)) {
    if (*(int *)(arg1 + 8) != 0) {
      if (*arg3 < *(uint *)(i_val2 + 0x10)) {
LAB_080e5768:
        VTable_Routine_080E54F0(instance,arg1,i_val2,i_val2,arg3,0);
        goto LAB_080e580a;
      }
      if (*arg3 <= *(uint *)(i_val2 + 0x10)) {
        *instance = i_val2;
        goto LAB_080e580a;
      }
      stack_val_2c = i_val2;
      i_val1 = VTable_Routine_080E2B28(i_val2);
      stack_val_2c = i_val1;
      if (i_val1 == *(int *)(arg1 + 4)) {
        pos_y = *arg2;
        i_val2 = pos_y;
      }
      else {
        if (*(uint *)(i_val1 + 0x10) <= *arg3) goto LAB_080e57fc;
        pos_y = *arg2;
        i_val2 = pos_y;
        if (*(int *)(pos_y + 0xc) != 0) goto LAB_080e57e2;
      }
LAB_080e57d2:
      VTable_Routine_080E54F0(instance,arg1,0,pos_y,arg3,i_val2);
      goto LAB_080e580a;
    }
    VTable_Routine_080E55B0(&stack_val_2c,arg1,arg3);
  }
  else if (i_val2 == *(int *)(arg1 + 4)) {
    pos_y = *(int *)(i_val2 + 0xc);
    if (*(uint *)(pos_y + 0x10) < *arg3) goto LAB_080e57d2;
    VTable_Routine_080E55B0(&stack_val_2c,arg1,arg3);
  }
  else {
    stack_val_2c = i_val2;
    pos_y = VTable_Routine_080E2354(i_val2);
    i_val2 = *arg2;
    b_flag4 = *arg3 < *(uint *)(i_val2 + 0x10);
    stack_val_2c = pos_y;
    if ((b_flag4) && (*(uint *)(pos_y + 0x10) < *arg3)) {
      if (*(int *)(pos_y + 0xc) != 0) goto LAB_080e5768;
      i_val1 = 0;
      i_val2 = pos_y;
LAB_080e57ea:
      VTable_Routine_080E54F0(instance,arg1,i_val1,pos_y,arg3,i_val2);
      goto LAB_080e580a;
    }
    stack_val_28 = *arg2;
    i_val1 = VTable_Routine_080E2B28();
    b_flag5 = !b_flag4;
    stack_val_28 = i_val1;
    if (!b_flag4) {
      pos_y = *arg2;
      b_flag5 = *(uint *)(pos_y + 0x10) < *arg3;
      if ((b_flag5) && ((i_val1 == *(int *)(arg1 + 4) || (*arg3 < *(uint *)(i_val1 + 0x10))))) {
        i_val2 = pos_y;
        if (*(int *)(pos_y + 0xc) == 0) goto LAB_080e57d2;
LAB_080e57e2:
        pos_y = i_val1;
        i_val2 = 0;
        goto LAB_080e57ea;
      }
    }
    if (b_flag4 == b_flag5) {
      stack_val_2c = *arg2;
    }
    else {
LAB_080e57fc:
      VTable_Routine_080E55B0(stack_ints_24,arg1,arg3);
      stack_val_2c = stack_ints_24[0];
    }
  }
  *instance = stack_val_2c;
LAB_080e580a:
  return instance;
}

// =============================================================================
// Function: VTable_Routine_080E581C @ 0x080E581C
// =============================================================================
void VTable_Routine_080E581C(undefined4 *instance,uint arg1)

{
  
  instance[1] = gRomData_080E8594;
  *gIWRAM_030414 = *instance;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E5844 @ 0x080E5844
// =============================================================================
void VTable_Routine_080E5844(undefined4 *instance,uint arg1)

{
  
  instance[1] = gRomData_080E8594;
  *gIWRAM_030414 = *instance;
  if ((arg1 & 1) != 0) {
    CppRuntime_FreeMemory(instance);
  }
  return;
}

// =============================================================================
// Function: VTable_Routine_080E586C @ 0x080E586C
// =============================================================================
void VTable_Routine_080E586C(int instance)

{
  int i_val1;
  int *p_int2;
  int *p_int3;
  
  p_int2 = (int *)**(int **)(instance + 4);
  if (p_int2 != *(int **)(instance + 4)) {
    do {
      p_int3 = (int *)*p_int2;
      if (p_int2 != (int *)0x0) {
        cpp_operator_delete();
      }
      p_int2 = p_int3;
    } while (p_int3 != (int *)*(int *)(instance + 4));
  }
  i_val1 = *(int *)(instance + 4);
  *(int *)i_val1 = i_val1;
  *(int *)(i_val1 + 4) = i_val1;
  return;
}

// =============================================================================
// Function: VTable_Routine_080E5898 @ 0x080E5898
// =============================================================================
void VTable_Routine_080E5898(int instance,undefined4 arg1)

{
  int i_val1;
  int i_val2;
  int *p_int3;
  
  *(undefined4 *)(instance + 0x210) = gRomData_080E85AC;
  if ((instance != -0x2ec) && (instance + 0x2ec != instance + 0x32c)) {
    i_val2 = instance + 0x32c;
    do {
      i_val1 = i_val2 + -8;
      HW_Routine_080073E0(i_val1,*(undefined4 *)(i_val2 + -4));
      HW_Routine_08007184(i_val1,2);
      i_val2 = i_val1;
    } while (instance + 0x2ec != i_val1);
  }
  p_int3 = (int *)(instance + 0x218);
  if ((instance != -0x2ac) && (instance + 0x2ac != instance + 0x2ec)) {
    i_val2 = instance + 0x2ec;
    do {
      i_val1 = i_val2 + -8;
      HW_Routine_08007C28(i_val1,*(undefined4 *)(i_val2 + -4));
      HW_Routine_080079E8(i_val1,2);
      i_val2 = i_val1;
    } while (instance + 0x2ac != i_val1);
  }
  HW_Routine_080073E0(instance + 0x2a4,*(undefined4 *)(instance + 0x2a8));
  HW_Routine_08007184(instance + 0x2a4,2);
  HW_Routine_08007C28(instance + 0x29c,*(undefined4 *)(instance + 0x2a0));
  HW_Routine_080079E8(instance + 0x29c,2);
  for (; p_int3 != (int *)(instance + 0x214) + *(int *)(instance + 0x214) * 3 + 1; p_int3 = p_int3 + 3
      ) {
  }
  M4A_Routine_080CADF0(instance,arg1);
  return;
}

// =============================================================================
// Function: VTable_Routine_080E59C0 @ 0x080E59C0
// =============================================================================
void VTable_Routine_080E59C0(void)

{
  
  NPC_Routine_080A4B6C();
  return;
}

