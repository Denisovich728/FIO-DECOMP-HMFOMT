// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: DISPATCHER_AND_SRAM (32 functions)
// Description: Central call dispatcher, GBA BIOS indirect handlers and SRAM save proxies
// =============================================================================

#include "../../include/global.h"

// =============================================================================
// Function: SramProxy_ReadSaveData @ 0x080002E0
// =============================================================================
undefined8 SramProxy_ReadSaveData(undefined4 param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  undefined1 auStack_34 [32];
  uint uStack_14;
  uint uStack_10;
  
  SramProxy_ReadBlock(param_1,auStack_34,0,0x20);
  puVar1 = gIWRAM_SramBuffer;
  uStack_14 = (uint)*gIWRAM_SramBuffer;
  if (uStack_14 == 0) {
    SramProxy_ReadBlock(param_1,&uStack_14,0x20,4);
    uStack_10 = (uint)*puVar1;
    if ((uStack_10 == 0) && (SramProxy_ReadBlock(param_1,&uStack_10,0x24,4), *puVar1 == 0)) {
      uVar2 = 0;
      iVar3 = gba_memcmp(auStack_34,gRomData_080E862C,0x20);
      if ((iVar3 == 0) && (((uStack_14 & 3) == uStack_14 && (uStack_10 < 2)))) {
        uVar2 = 1;
      }
      goto LAB_0800034c;
    }
  }
  uVar2 = 0;
LAB_0800034c:
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: SramProxy_WriteSaveData @ 0x08000358
// =============================================================================
undefined4 SramProxy_WriteSaveData(undefined4 param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  uint uStack_10;
  
  SramProxy_WriteBlock(param_1,0,gRomData_080E862C,0x20);
  puVar1 = gIWRAM_SramBuffer;
  uStack_10 = (uint)*gIWRAM_SramBuffer;
  if (uStack_10 == 0) {
    SramProxy_WriteBlock(param_1,0x20,&uStack_10,4);
    if (*puVar1 == 0) {
      SramProxy_WriteBlock(param_1,0x24,&uStack_10,4);
    }
  }
  return in_lr;
}

// =============================================================================
// Function: SramProxy_VerifyChecksum @ 0x080003A0
// =============================================================================
undefined8 SramProxy_VerifyChecksum(undefined4 param_1)

{
  char cVar1;
  undefined4 in_lr;
  undefined4 uStack_c;
  
  cVar1 = SramProxy_ReadSaveData();
  if (cVar1 != '\0') {
    uStack_c = 0;
    SramProxy_ReadBlock(param_1,&uStack_c,0x20,4);
    if (*gIWRAM_SramBuffer == 0) goto LAB_080003d2;
  }
  uStack_c = 0;
LAB_080003d2:
  return CONCAT44(in_lr,uStack_c);
}

// =============================================================================
// Function: SramProxy_ReadSaveSlot @ 0x080003E8
// =============================================================================
undefined4 SramProxy_ReadSaveSlot(undefined4 param_1,uint param_2)

{
  undefined4 in_lr;
  uint uStack_10;
  
  uStack_10 = 0;
  SramProxy_ReadBlock(param_1,&uStack_10,0x20,4);
  if (*gIWRAM_SramBuffer == 0) {
    uStack_10 = uStack_10 | 1 << (param_2 & 0xff);
    SramProxy_WriteBlock(param_1,0x20,&uStack_10,4);
  }
  return in_lr;
}

// =============================================================================
// Function: SramProxy_WriteSaveSlot @ 0x0800042C
// =============================================================================
undefined4 SramProxy_WriteSaveSlot(undefined4 param_1,uint param_2)

{
  undefined4 in_lr;
  uint uStack_10;
  
  uStack_10 = 0;
  SramProxy_ReadBlock(param_1,&uStack_10,0x20,4);
  if (*gIWRAM_SramBuffer == 0) {
    uStack_10 = uStack_10 & ~(1 << (param_2 & 0xff));
    SramProxy_WriteBlock(param_1,0x20,&uStack_10,4);
  }
  return in_lr;
}

// =============================================================================
// Function: SramProxy_FlushSlotBuffer @ 0x08000470
// =============================================================================
undefined4 SramProxy_FlushSlotBuffer(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_lr;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_2;
  uStack_4 = in_lr;
  SramProxy_WriteBlock(param_1,0x24,&uStack_8,4);
  return uStack_4;
}

// =============================================================================
// Function: SramProxy_VerifySlotChecksum @ 0x08000488
// =============================================================================
undefined8 SramProxy_VerifySlotChecksum(undefined4 param_1)

{
  char cVar1;
  undefined4 in_lr;
  undefined4 uStack_c;
  
  cVar1 = SramProxy_ReadSaveData();
  if (cVar1 != '\0') {
    uStack_c = 0;
    SramProxy_ReadBlock(param_1,&uStack_c,0x24,4);
    if (*gIWRAM_SramBuffer == 0) goto LAB_080004ba;
  }
  uStack_c = 0;
LAB_080004ba:
  return CONCAT44(in_lr,uStack_c);
}

// =============================================================================
// Function: Interrupt_InitVBlank @ 0x080004C4
// =============================================================================
undefined4 Interrupt_InitVBlank(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  Interrupt_WaitForVBlank(0xFFFF);
  *gIWRAM_037FFC = gIWRAM_030958;
  uVar1 = 0;
  do {
    M4A_Routine_080D100C(uVar1,0);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0xe);
  return in_lr;
}

// =============================================================================
// Function: Interrupt_EnableHBlank @ 0x080004F4
// =============================================================================
ulonglong Interrupt_EnableHBlank(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = _call_via_r1(param_1 << 0x10,gIWRAM_030A1C);
  return CONCAT44(in_lr,uVar1) & 0xffffffff0000ffff;
}

// =============================================================================
// Function: Interrupt_SetMasterEnable @ 0x0800050C
// =============================================================================
ulonglong Interrupt_SetMasterEnable(undefined2 param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *REG_IF = param_1;
  uVar1 = Interrupt_EnableHBlank();
  return CONCAT44(in_lr,uVar1) & 0xffffffff0000ffff;
}

// =============================================================================
// Function: Interrupt_WaitForVBlank @ 0x08000528
// =============================================================================
ulonglong Interrupt_WaitForVBlank(undefined2 param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = _call_via_r1(param_1,gIWRAM_030A1C);
  return CONCAT44(in_lr,uVar1) & 0xffffffff0000ffff;
}

// =============================================================================
// Function: Interrupt_SetCallback @ 0x08000540
// =============================================================================
ulonglong Interrupt_SetCallback(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = M4A_Routine_080D101C(param_1,param_2);
  return CONCAT44(in_lr,uVar1) & 0xffffffff0000ffff;
}

// =============================================================================
// Function: Interrupt_ClearPending @ 0x08000554
// =============================================================================
undefined4 Interrupt_ClearPending(undefined2 param_1)

{
  undefined4 in_lr;
  
  IntrWait(0,param_1);
  return in_lr;
}

// =============================================================================
// Function: Interrupt_DisableFlag @ 0x08000568
// =============================================================================
undefined4 Interrupt_DisableFlag(undefined2 param_1)

{
  undefined4 in_lr;
  
  IntrWait(1,param_1);
  return in_lr;
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
  undefined4 in_lr;
  
  Dispatcher_Routine_08000608();
  return in_lr;
}

// =============================================================================
// Function: Dispatcher_Routine_0800059C @ 0x0800059C
// =============================================================================
void Dispatcher_Routine_0800059C(undefined4 param_1)

{
  int iVar1;
  
  do {
    iVar1 = runtime_malloc_aligned(param_1);
    if (iVar1 != 0) {
LAB_080005be:
      return iVar1;
    }
    if (*gIWRAM_0304C0 == 0) {
      iVar1 = 0;
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
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = Dispatcher_Routine_0800059C();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return CONCAT44(in_lr,iVar1);
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
  undefined4 in_lr;
  
  cpp_operator_delete();
  return in_lr;
}

// =============================================================================
// Function: Dispatcher_Routine_08000614 @ 0x08000614
// =============================================================================
undefined4 Dispatcher_Routine_08000614(void)

{
  undefined4 in_lr;
  
  Dispatcher_Routine_08000608();
  return in_lr;
}

// =============================================================================
// Function: Dispatcher_Routine_08000620 @ 0x08000620
// =============================================================================
undefined4 Dispatcher_Routine_08000620(void)

{
  undefined4 in_lr;
  
  cpp_operator_delete();
  return in_lr;
}

// =============================================================================
// Function: Dispatcher_Routine_0800062C @ 0x0800062C
// =============================================================================
undefined4 Dispatcher_Routine_0800062C(void)

{
  undefined4 in_lr;
  
  Dispatcher_Routine_08000620();
  return in_lr;
}

// =============================================================================
// Function: SramProxy_LoadGlobalSettings @ 0x08000640
// =============================================================================
undefined8 SramProxy_LoadGlobalSettings(undefined4 param_1)

{
  undefined4 in_lr;
  
  if (*gIWRAM_030402 == '\0') {
    *gIWRAM_030402 = '\x01';
    *gIWRAM_SramBuffer = 0;
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: SramProxy_SaveGlobalSettings @ 0x08000664
// =============================================================================
undefined8 SramProxy_SaveGlobalSettings(undefined4 param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined1 auStack_18 [8];
  
  uVar1 = 0;
  do {
    auStack_18[uVar1] = 0xff;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 8);
  uVar1 = 0;
  do {
    SramProxy_WriteBlock(param_1,uVar1,auStack_18,8);
    uVar1 = uVar1 + 8;
  } while (uVar1 < 0x8000);
  return CONCAT44(in_lr,1);
}

// =============================================================================
// Function: SramProxy_WriteBlock @ 0x080006A4
// =============================================================================
undefined8 SramProxy_WriteBlock(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = 0;
  *gIWRAM_SramBuffer = 0;
  if (param_4 != 0) {
    iVar2 = VTable_Routine_080D38D4(param_3,param_2 | 0xe000000);
    if (iVar2 != 0) {
      SramProxy_CalculateChecksum(param_1,0x100);
    }
    uVar1 = (uint)(iVar2 == 0);
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: SramProxy_ReadBlock @ 0x080006E4
// =============================================================================
undefined8 SramProxy_ReadBlock(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 in_lr;
  
  *gIWRAM_SramBuffer = 0;
  if (param_4 != 0) {
    VTable_Routine_080D379C(param_3 | 0xe000000,param_2);
  }
  return CONCAT44(in_lr,(uint)(param_4 != 0));
}

// =============================================================================
// Function: SramProxy_SetWaitstates @ 0x08000714
// =============================================================================
void SramProxy_SetWaitstates(int param_1)

{
  M4A_Routine_080D100C((*(byte *)(param_1 + 4) & 3) + 3);
  return;
}

// =============================================================================
// Function: SramProxy_CalculateChecksum @ 0x08000728
// =============================================================================
undefined4 SramProxy_CalculateChecksum(undefined4 param_1,ushort param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 in_lr;
  
  if (param_2 == 0x10) {
    uVar2 = *gIWRAM_SramBuffer;
    uVar3 = 0x10;
    puVar1 = gIWRAM_SramBuffer;
  }
  else if (param_2 < 0x11) {
    if (param_2 == 2) {
      uVar2 = *gIWRAM_SramBuffer;
      uVar3 = 2;
      puVar1 = gIWRAM_SramBuffer;
    }
    else if (param_2 < 3) {
      if (param_2 != 1) {
        return in_lr;
      }
      uVar2 = *gIWRAM_SramBuffer;
      uVar3 = 1;
      puVar1 = gIWRAM_SramBuffer;
    }
    else if (param_2 == 4) {
      uVar2 = *gIWRAM_SramBuffer;
      uVar3 = 4;
      puVar1 = gIWRAM_SramBuffer;
    }
    else {
      if (param_2 != 8) {
        return in_lr;
      }
      uVar2 = *gIWRAM_SramBuffer;
      uVar3 = 8;
      puVar1 = gIWRAM_SramBuffer;
    }
  }
  else if (param_2 == 0x80) {
    uVar2 = *gIWRAM_SramBuffer;
    uVar3 = 0x80;
    puVar1 = gIWRAM_SramBuffer;
  }
  else {
    if (0x80 < param_2) {
      if ((param_2 != 0x100) && (param_2 != 0x200)) {
        return in_lr;
      }
      *gIWRAM_SramBuffer = param_2 | *gIWRAM_SramBuffer;
      return in_lr;
    }
    if (param_2 == 0x20) {
      uVar2 = *gIWRAM_SramBuffer;
      uVar3 = 0x20;
      puVar1 = gIWRAM_SramBuffer;
    }
    else {
      if (param_2 != 0x40) {
        return in_lr;
      }
      uVar2 = *gIWRAM_SramBuffer;
      uVar3 = 0x40;
      puVar1 = gIWRAM_SramBuffer;
    }
  }
  *puVar1 = uVar2 | uVar3;
  return in_lr;
}

// =============================================================================
// Function: SramProxy_VerifyBufferParity @ 0x080007EC
// =============================================================================
undefined4 SramProxy_VerifyBufferParity(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  *param_1 = gRomData_080E59CC;
  if ((param_2 & 1) != 0) {
    Dispatcher_Routine_08000608(param_1);
  }
  return in_lr;
}

