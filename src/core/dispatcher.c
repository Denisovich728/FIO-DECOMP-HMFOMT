// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: DISPATCHER_AND_SRAM (32 functions)
// Description: Central call dispatcher, GBA BIOS indirect handlers and SRAM save proxies
// =============================================================================

#include "../../include/global.h"

// =============================================================================
// Function: SramProxy_ReadSaveData @ 0x080002E0
// =============================================================================
undefined8 SramProxy_ReadSaveData(undefined4 arg_1)

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
undefined4 SramProxy_WriteSaveData(undefined4 arg_1)

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
undefined8 SramProxy_VerifyChecksum(undefined4 arg_1)

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
undefined4 SramProxy_ReadSaveSlot(undefined4 arg_1,uint arg_2)

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
undefined4 SramProxy_WriteSaveSlot(undefined4 arg_1,uint arg_2)

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
undefined4 SramProxy_FlushSlotBuffer(undefined4 arg_1,undefined4 arg_2)

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
undefined8 SramProxy_VerifySlotChecksum(undefined4 arg_1)

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
undefined4 Interrupt_InitVBlank(void)

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
ulonglong Interrupt_EnableHBlank(int arg_1)

{
  undefined4 u_val1;
  
  u_val1 = _call_via_r1(arg_1 << 0x10,gIWRAM_030A1C);
  return ((u32)(u_val1) & 0xffff);
}

// =============================================================================
// Function: Interrupt_SetMasterEnable @ 0x0800050C
// =============================================================================
ulonglong Interrupt_SetMasterEnable(undefined2 arg_1)

{
  undefined4 u_val1;
  
  *REG_IF = arg_1;
  u_val1 = Interrupt_EnableHBlank();
  return ((u32)(u_val1) & 0xffff);
}

// =============================================================================
// Function: Interrupt_WaitForVBlank @ 0x08000528
// =============================================================================
ulonglong Interrupt_WaitForVBlank(undefined2 arg_1)

{
  undefined4 u_val1;
  
  u_val1 = _call_via_r1(arg_1,gIWRAM_030A1C);
  return ((u32)(u_val1) & 0xffff);
}

// =============================================================================
// Function: Interrupt_SetCallback @ 0x08000540
// =============================================================================
ulonglong Interrupt_SetCallback(undefined4 arg_1,undefined2 arg_2)

{
  undefined4 u_val1;
  
  u_val1 = M4A_Routine_080D101C(arg_1,arg_2);
  return ((u32)(u_val1) & 0xffff);
}

// =============================================================================
// Function: Interrupt_ClearPending @ 0x08000554
// =============================================================================
undefined4 Interrupt_ClearPending(undefined2 arg_1)

{
  
  IntrWait(0,arg_1);
  return;
}

// =============================================================================
// Function: Interrupt_DisableFlag @ 0x08000568
// =============================================================================
undefined4 Interrupt_DisableFlag(undefined2 arg_1)

{
  
  IntrWait(1,arg_1);
  return;
}

// =============================================================================
// Function: Dispatcher_Routine_08000584 @ 0x08000584
// =============================================================================
void Dispatcher_Routine_08000584(void)

{
  Dispatcher_Routine_080005D4();
  return;
}

// =============================================================================
// Function: Dispatcher_Routine_08000590 @ 0x08000590
// =============================================================================
undefined4 Dispatcher_Routine_08000590(void)

{
  
  Dispatcher_Routine_08000608();
  return;
}

// =============================================================================
// Function: Dispatcher_Routine_0800059C @ 0x0800059C
// =============================================================================
void Dispatcher_Routine_0800059C(undefined4 arg_1)

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
// Function: Dispatcher_Routine_080005D4 @ 0x080005D4
// =============================================================================
undefined8 Dispatcher_Routine_080005D4(void)

{
  int i_val1;
  
  i_val1 = Dispatcher_Routine_0800059C();
  if (i_val1 == 0) {
    i_val1 = 0;
  }
  return i_val1;
}

// =============================================================================
// Function: Dispatcher_Routine_080005E4 @ 0x080005E4
// =============================================================================
void Dispatcher_Routine_080005E4(void)

{
  Dispatcher_Routine_080005D4();
  return;
}

// =============================================================================
// Function: Dispatcher_Routine_080005F0 @ 0x080005F0
// =============================================================================
void Dispatcher_Routine_080005F0(void)

{
  Dispatcher_Routine_0800059C();
  return;
}

// =============================================================================
// Function: Dispatcher_Routine_080005FC @ 0x080005FC
// =============================================================================
void Dispatcher_Routine_080005FC(void)

{
  Dispatcher_Routine_080005F0();
  return;
}

// =============================================================================
// Function: Dispatcher_Routine_08000608 @ 0x08000608
// =============================================================================
undefined4 Dispatcher_Routine_08000608(void)

{
  
  cpp_operator_delete();
  return;
}

// =============================================================================
// Function: Dispatcher_Routine_08000614 @ 0x08000614
// =============================================================================
undefined4 Dispatcher_Routine_08000614(void)

{
  
  Dispatcher_Routine_08000608();
  return;
}

// =============================================================================
// Function: Dispatcher_Routine_08000620 @ 0x08000620
// =============================================================================
undefined4 Dispatcher_Routine_08000620(void)

{
  
  cpp_operator_delete();
  return;
}

// =============================================================================
// Function: Dispatcher_Routine_0800062C @ 0x0800062C
// =============================================================================
undefined4 Dispatcher_Routine_0800062C(void)

{
  
  Dispatcher_Routine_08000620();
  return;
}

// =============================================================================
// Function: SramProxy_LoadGlobalSettings @ 0x08000640
// =============================================================================
undefined8 SramProxy_LoadGlobalSettings(undefined4 arg_1)

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
undefined8 SramProxy_SaveGlobalSettings(undefined4 arg_1)

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
undefined8 SramProxy_WriteBlock(undefined4 arg_1,uint arg_2,undefined4 arg_3,int arg_4)

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
undefined8 SramProxy_ReadBlock(undefined4 arg_1,undefined4 arg_2,uint arg_3,int arg_4)

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
undefined4 SramProxy_CalculateChecksum(undefined4 arg_1,ushort arg_2)

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
undefined4 SramProxy_VerifyBufferParity(undefined4 *arg_1,uint arg_2)

{
  
  *arg_1 = gRomData_080E59CC;
  if ((arg_2 & 1) != 0) {
    Dispatcher_Routine_08000608(arg_1);
  }
  return;
}

