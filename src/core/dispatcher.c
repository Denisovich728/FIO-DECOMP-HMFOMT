// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: DISPATCHER_AND_SRAM (32 functions)
// Description: Central call dispatcher, GBA BIOS indirect handlers and SRAM save proxies
// =============================================================================

#include "../../include/global.h"

// =============================================================================
// Function: SramProxy_ReadSaveData @ 0x080002E0
// =============================================================================
u32 SramProxy_ReadSaveData(undefined4 arg_1)

{
  ushort *p_uint1;
  undefined4 u_val2;
  int i_val3;
  undefined1 stack_buf_34 [32];
  uint stack_val_14;
  uint stack_val_10;
  
  SramProxy_ReadBlock(arg_1,stack_buf_34,0,0x20);
  p_uint1 = gIWRAM_SramBuffer;
  stack_val_14 = (uint)*gIWRAM_SramBuffer;
  if (stack_val_14 == 0) {
    SramProxy_ReadBlock(arg_1,&stack_val_14,0x20,4);
    stack_val_10 = (uint)*p_uint1;
    if ((stack_val_10 == 0) && (SramProxy_ReadBlock(arg_1,&stack_val_10,0x24,4), *p_uint1 == 0)) {
      u_val2 = 0;
      i_val3 = gba_memcmp(stack_buf_34,gRomData_080E862C,0x20);
      if ((i_val3 == 0) && (((stack_val_14 & 3) == stack_val_14 && (stack_val_10 < 2)))) {
        u_val2 = 1;
      }
      goto LAB_0800034c;
    }
  }
  u_val2 = 0;
LAB_0800034c:
  return u_val2;
}

// =============================================================================
// Function: SramProxy_WriteSaveData @ 0x08000358
// =============================================================================
void SramProxy_WriteSaveData(undefined4 arg_1)

{
  ushort *p_uint1;
  uint stack_val_10;
  
  SramProxy_WriteBlock(arg_1,0,gRomData_080E862C,0x20);
  p_uint1 = gIWRAM_SramBuffer;
  stack_val_10 = (uint)*gIWRAM_SramBuffer;
  if (stack_val_10 == 0) {
    SramProxy_WriteBlock(arg_1,0x20,&stack_val_10,4);
    if (*p_uint1 == 0) {
      SramProxy_WriteBlock(arg_1,0x24,&stack_val_10,4);
    }
  }
  return;
}

// =============================================================================
// Function: SramProxy_VerifyChecksum @ 0x080003A0
// =============================================================================
u32 SramProxy_VerifyChecksum(undefined4 arg_1)

{
  char c_char1;
  undefined4 stack_val_c;
  
  c_char1 = SramProxy_ReadSaveData();
  if (c_char1 != '\0') {
    stack_val_c = 0;
    SramProxy_ReadBlock(arg_1,&stack_val_c,0x20,4);
    if (*gIWRAM_SramBuffer == 0) goto LAB_080003d2;
  }
  stack_val_c = 0;
LAB_080003d2:
  return stack_val_c;
}

// =============================================================================
// Function: SramProxy_ReadSaveSlot @ 0x080003E8
// =============================================================================
void SramProxy_ReadSaveSlot(undefined4 arg_1,uint arg_2)

{
  uint stack_val_10;
  
  stack_val_10 = 0;
  SramProxy_ReadBlock(arg_1,&stack_val_10,0x20,4);
  if (*gIWRAM_SramBuffer == 0) {
    stack_val_10 = stack_val_10 | 1 << (arg_2 & 0xff);
    SramProxy_WriteBlock(arg_1,0x20,&stack_val_10,4);
  }
  return;
}

// =============================================================================
// Function: SramProxy_WriteSaveSlot @ 0x0800042C
// =============================================================================
void SramProxy_WriteSaveSlot(undefined4 arg_1,uint arg_2)

{
  uint stack_val_10;
  
  stack_val_10 = 0;
  SramProxy_ReadBlock(arg_1,&stack_val_10,0x20,4);
  if (*gIWRAM_SramBuffer == 0) {
    stack_val_10 = stack_val_10 & ~(1 << (arg_2 & 0xff));
    SramProxy_WriteBlock(arg_1,0x20,&stack_val_10,4);
  }
  return;
}

// =============================================================================
// Function: SramProxy_FlushSlotBuffer @ 0x08000470
// =============================================================================
u32 SramProxy_FlushSlotBuffer(undefined4 arg_1,undefined4 arg_2)

{
  undefined4 stack_val_8;
  undefined4 stack_val_4;
  
  stack_val_8 = arg_2;
  SramProxy_WriteBlock(arg_1,0x24,&stack_val_8,4);
  return stack_val_4;
}

// =============================================================================
// Function: SramProxy_VerifySlotChecksum @ 0x08000488
// =============================================================================
u32 SramProxy_VerifySlotChecksum(undefined4 arg_1)

{
  char c_char1;
  undefined4 stack_val_c;
  
  c_char1 = SramProxy_ReadSaveData();
  if (c_char1 != '\0') {
    stack_val_c = 0;
    SramProxy_ReadBlock(arg_1,&stack_val_c,0x24,4);
    if (*gIWRAM_SramBuffer == 0) goto LAB_080004ba;
  }
  stack_val_c = 0;
LAB_080004ba:
  return stack_val_c;
}

// =============================================================================
// Function: Interrupt_InitVBlank @ 0x080004C4
// =============================================================================
void Interrupt_InitVBlank(void)

{
  uint loop_i;
  
  Interrupt_WaitForVBlank(0xFFFF);
  *gIWRAM_037FFC = gIWRAM_030958;
  loop_i = 0;
  do {
    M4A_Routine_080D100C(loop_i,0);
    loop_i = loop_i + 1;
  } while (loop_i < 0xe);
  return;
}

// =============================================================================
// Function: Interrupt_EnableHBlank @ 0x080004F4
// =============================================================================
u32 Interrupt_EnableHBlank(int arg_1)

{
  undefined4 u_val1;
  
  u_val1 = _call_via_r1(arg_1 << 0x10,gIWRAM_030A1C);
  return ((u32)(u_val1) & 0xffff);
}

// =============================================================================
// Function: Interrupt_SetMasterEnable @ 0x0800050C
// =============================================================================
u32 Interrupt_SetMasterEnable(undefined2 arg_1)

{
  undefined4 u_val1;
  
  *REG_IF = arg_1;
  u_val1 = Interrupt_EnableHBlank();
  return ((u32)(u_val1) & 0xffff);
}

// =============================================================================
// Function: Interrupt_WaitForVBlank @ 0x08000528
// =============================================================================
u32 Interrupt_WaitForVBlank(undefined2 arg_1)

{
  undefined4 u_val1;
  
  u_val1 = _call_via_r1(arg_1,gIWRAM_030A1C);
  return ((u32)(u_val1) & 0xffff);
}

// =============================================================================
// Function: Interrupt_SetCallback @ 0x08000540
// =============================================================================
u32 Interrupt_SetCallback(undefined4 arg_1,undefined2 arg_2)

{
  undefined4 u_val1;
  
  u_val1 = M4A_Routine_080D101C(arg_1,arg_2);
  return ((u32)(u_val1) & 0xffff);
}

// =============================================================================
// Function: Interrupt_ClearPending @ 0x08000554
// =============================================================================
void Interrupt_ClearPending(undefined2 arg_1)

{
  
  IntrWait(0,arg_1);
  return;
}

// =============================================================================
// Function: Interrupt_DisableFlag @ 0x08000568
// =============================================================================
void Interrupt_DisableFlag(undefined2 arg_1)

{
  
  IntrWait(1,arg_1);
  return;
}

// =============================================================================
// Function: CppRuntime_OperatorNew @ 0x08000584
// =============================================================================
void CppRuntime_OperatorNew(void)

{
  CppRuntime_OperatorNewArray();
  return;
}

// =============================================================================
// Function: CppRuntime_OperatorDelete @ 0x08000590
// =============================================================================
void CppRuntime_OperatorDelete(void)

{
  
  CppRuntime_FreeMemory();
  return;
}

// =============================================================================
// Function: CppRuntime_AllocateMemory @ 0x0800059C
// =============================================================================
void CppRuntime_AllocateMemory(undefined4 arg_1)

{
  int i_val1;
  
  do {
    i_val1 = runtime_malloc_aligned(arg_1);
    if (i_val1 != 0) {
LAB_080005be:
      return i_val1;
    }
    if (*gIWRAM_0304C0 == 0) {
      i_val1 = 0;
      goto LAB_080005be;
    }
    VTable_Routine_080D390C();
  } while( true );
}

// =============================================================================
// Function: CppRuntime_OperatorNewArray @ 0x080005D4
// =============================================================================
u32 CppRuntime_OperatorNewArray(void)

{
  int i_val1;
  
  i_val1 = CppRuntime_AllocateMemory();
  if (i_val1 == 0) {
    i_val1 = 0;
  }
  return i_val1;
}

// =============================================================================
// Function: CppRuntime_OperatorNewArray_Stub @ 0x080005E4
// =============================================================================
void CppRuntime_OperatorNewArray_Stub(void)

{
  CppRuntime_OperatorNewArray();
  return;
}

// =============================================================================
// Function: CppRuntime_AllocateMemory_NoThrow @ 0x080005F0
// =============================================================================
void CppRuntime_AllocateMemory_NoThrow(void)

{
  CppRuntime_AllocateMemory();
  return;
}

// =============================================================================
// Function: CppRuntime_OperatorNewArray_NoThrow @ 0x080005FC
// =============================================================================
void CppRuntime_OperatorNewArray_NoThrow(void)

{
  CppRuntime_AllocateMemory_NoThrow();
  return;
}

// =============================================================================
// Function: CppRuntime_FreeMemory @ 0x08000608
// =============================================================================
void CppRuntime_FreeMemory(void)

{
  
  cpp_operator_delete();
  return;
}

// =============================================================================
// Function: CppRuntime_OperatorDeleteArray @ 0x08000614
// =============================================================================
void CppRuntime_OperatorDeleteArray(void)

{
  
  CppRuntime_FreeMemory();
  return;
}

// =============================================================================
// Function: CppRuntime_FreeMemory_NoThrow @ 0x08000620
// =============================================================================
void CppRuntime_FreeMemory_NoThrow(void)

{
  
  cpp_operator_delete();
  return;
}

// =============================================================================
// Function: CppRuntime_OperatorDeleteArray_NoThrow @ 0x0800062C
// =============================================================================
void CppRuntime_OperatorDeleteArray_NoThrow(void)

{
  
  CppRuntime_FreeMemory_NoThrow();
  return;
}

// =============================================================================
// Function: SramProxy_LoadGlobalSettings @ 0x08000640
// =============================================================================
u32 SramProxy_LoadGlobalSettings(undefined4 arg_1)

{
  
  if (*gIWRAM_030402 == '\0') {
    *gIWRAM_030402 = '\x01';
    *gIWRAM_SramBuffer = 0;
  }
  return arg_1;
}

// =============================================================================
// Function: SramProxy_SaveGlobalSettings @ 0x08000664
// =============================================================================
u32 SramProxy_SaveGlobalSettings(undefined4 arg_1)

{
  uint u_val1;
  undefined1 temp_buf_18 [8];
  
  u_val1 = 0;
  do {
    temp_buf_18[u_val1] = 0xff;
    u_val1 = u_val1 + 1 & 0xff;
  } while (u_val1 < 8);
  u_val1 = 0;
  do {
    SramProxy_WriteBlock(arg_1,u_val1,temp_buf_18,8);
    u_val1 = u_val1 + 8;
  } while (u_val1 < 0x8000);
  return 1;
}

// =============================================================================
// Function: SramProxy_WriteBlock @ 0x080006A4
// =============================================================================
u32 SramProxy_WriteBlock(undefined4 arg_1,uint arg_2,undefined4 arg_3,int arg_4)

{
  uint u_val1;
  int i_val2;
  
  u_val1 = 0;
  *gIWRAM_SramBuffer = 0;
  if (arg_4 != 0) {
    i_val2 = VTable_Routine_080D38D4(arg_3,arg_2 | 0xe000000);
    if (i_val2 != 0) {
      SramProxy_CalculateChecksum(arg_1,0x100);
    }
    u_val1 = (uint)(i_val2 == 0);
  }
  return u_val1;
}

// =============================================================================
// Function: SramProxy_ReadBlock @ 0x080006E4
// =============================================================================
u32 SramProxy_ReadBlock(undefined4 arg_1,undefined4 arg_2,uint arg_3,int arg_4)

{
  
  *gIWRAM_SramBuffer = 0;
  if (arg_4 != 0) {
    VTable_Routine_080D379C(arg_3 | 0xe000000,arg_2);
  }
  return (uint)(arg_4 != 0);
}

// =============================================================================
// Function: SramProxy_SetWaitstates @ 0x08000714
// =============================================================================
void SramProxy_SetWaitstates(int arg_1)

{
  M4A_Routine_080D100C((*(byte *)(arg_1 + 4) & 3) + 3);
  return;
}

// =============================================================================
// Function: SramProxy_CalculateChecksum @ 0x08000728
// =============================================================================
void SramProxy_CalculateChecksum(undefined4 arg_1,ushort arg_2)

{
  ushort *p_uint1;
  ushort u_val2;
  ushort u_val3;
  
  if (arg_2 == 0x10) {
    u_val2 = *gIWRAM_SramBuffer;
    u_val3 = 0x10;
    p_uint1 = gIWRAM_SramBuffer;
  }
  else if (arg_2 < 0x11) {
    if (arg_2 == 2) {
      u_val2 = *gIWRAM_SramBuffer;
      u_val3 = 2;
      p_uint1 = gIWRAM_SramBuffer;
    }
    else if (arg_2 < 3) {
      if (arg_2 != 1) {
        return;
      }
      u_val2 = *gIWRAM_SramBuffer;
      u_val3 = 1;
      p_uint1 = gIWRAM_SramBuffer;
    }
    else if (arg_2 == 4) {
      u_val2 = *gIWRAM_SramBuffer;
      u_val3 = 4;
      p_uint1 = gIWRAM_SramBuffer;
    }
    else {
      if (arg_2 != 8) {
        return;
      }
      u_val2 = *gIWRAM_SramBuffer;
      u_val3 = 8;
      p_uint1 = gIWRAM_SramBuffer;
    }
  }
  else if (arg_2 == 0x80) {
    u_val2 = *gIWRAM_SramBuffer;
    u_val3 = 0x80;
    p_uint1 = gIWRAM_SramBuffer;
  }
  else {
    if (0x80 < arg_2) {
      if ((arg_2 != 0x100) && (arg_2 != 0x200)) {
        return;
      }
      *gIWRAM_SramBuffer = arg_2 | *gIWRAM_SramBuffer;
      return;
    }
    if (arg_2 == 0x20) {
      u_val2 = *gIWRAM_SramBuffer;
      u_val3 = 0x20;
      p_uint1 = gIWRAM_SramBuffer;
    }
    else {
      if (arg_2 != 0x40) {
        return;
      }
      u_val2 = *gIWRAM_SramBuffer;
      u_val3 = 0x40;
      p_uint1 = gIWRAM_SramBuffer;
    }
  }
  *p_uint1 = u_val2 | u_val3;
  return;
}

// =============================================================================
// Function: SramProxy_VerifyBufferParity @ 0x080007EC
// =============================================================================
void SramProxy_VerifyBufferParity(undefined4 *arg_1,uint arg_2)

{
  
  *arg_1 = gRomData_080E59CC;
  if ((arg_2 & 1) != 0) {
    CppRuntime_FreeMemory(arg_1);
  }
  return;
}

