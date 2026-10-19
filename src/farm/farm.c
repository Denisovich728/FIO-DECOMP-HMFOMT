// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: FARM_SIMULATION (75 functions)
// Description: Farm state manager, field grid (43x25), soil tilling, watering and crop growth
// =============================================================================

#include "../../include/farm/farm.h"

// =============================================================================
// Function: GBA_Bios_CpuCopyBlock @ 0x0800901C
// =============================================================================
void GBA_Bios_CpuCopyBlock(int *arg_1)

{
  uint u_val1;
  undefined1 **ppuVar2;
  int i_val3;
  uint u_val4;
  int i_val5;
  undefined1 *puStack_1c;
  uint stack_val_18;
  
  ppuVar2 = (undefined1 **)arg_1[1];
  if (*arg_1 == 1) {
    ppuVar2 = &puStack_1c;
    puStack_1c = (undefined1 *)arg_1[1];
  }
  u_val4 = arg_1[3];
  i_val5 = arg_1[2];
  if ((u_val4 & 0x4000000) == 0) {
    CpuSet(ppuVar2,i_val5,u_val4);
  }
  else {
    u_val1 = 0xFFFF & u_val4 & 7;
    i_val3 = (0xFFFF & u_val4) - u_val1;
    if ((i_val3 != 0) || (u_val1 == 0)) {
      stack_val_18 = u_val1;
      CpuFastSet(ppuVar2,i_val5,u_val4 - u_val1);
      i_val5 = i_val5 + i_val3 * 4;
      if ((u_val4 & 0x1000000) == 0) {
        ppuVar2 = (undefined1 **)((int)ppuVar2 + i_val3 * 4);
      }
      if (stack_val_18 == 0) {
        return;
      }
    }
    CpuSet(ppuVar2,i_val5,u_val4 - i_val3);
  }
  return;
}

// =============================================================================
// Function: GBA_Bios_CpuCopyDescriptorList @ 0x08009094
// =============================================================================
void GBA_Bios_CpuCopyDescriptorList(int *arg_1,int *arg_2)

{
  uint u_val1;
  int i_val2;
  undefined1 **ppuVar3;
  int i_val4;
  uint u_val5;
  undefined1 *puStack_24;
  int stack_val_20;
  
  do {
    if (arg_1 == arg_2) {
      return;
    }
    ppuVar3 = (undefined1 **)arg_1[1];
    if (*arg_1 == 1) {
      ppuVar3 = &puStack_24;
      puStack_24 = (undefined1 *)arg_1[1];
    }
    u_val5 = arg_1[3];
    i_val2 = arg_1[2];
    if ((u_val5 & 0x4000000) == 0) {
      CpuSet(ppuVar3,i_val2,u_val5);
    }
    else {
      u_val1 = 0xFFFF & u_val5 & 7;
      i_val4 = (0xFFFF & u_val5) - u_val1;
      if ((i_val4 != 0) || (u_val1 == 0)) {
        stack_val_20 = i_val2;
        CpuFastSet(ppuVar3,i_val2,u_val5 - u_val1);
        i_val2 = stack_val_20 + i_val4 * 4;
        if ((u_val5 & 0x1000000) == 0) {
          ppuVar3 = (undefined1 **)((int)ppuVar3 + i_val4 * 4);
        }
        if (u_val1 == 0) goto LAB_08009116;
      }
      CpuSet(ppuVar3,i_val2,u_val5 - i_val4);
    }
LAB_08009116:
    arg_1 = arg_1 + 4;
  } while( true );
}

// =============================================================================
// Function: Farm_Routine_08009140 @ 0x08009140
// =============================================================================
u32 Farm_Routine_08009140(undefined2 *arg_1)

{
  undefined2 u_val1;
  
  u_val1 = Farm_Routine_0800912C();
  *arg_1 = u_val1;
  return arg_1;
}

// =============================================================================
// Function: Farm_Routine_08009158 @ 0x08009158
// =============================================================================
void Farm_Routine_08009158(undefined2 *arg_1)

{
  undefined2 u_val1;
  
  u_val1 = Farm_Routine_0800912C();
  *arg_1 = u_val1;
  return;
}

// =============================================================================
// Function: Farm_Routine_08009168 @ 0x08009168
// =============================================================================
u32 Farm_Routine_08009168(undefined2 *arg_1)

{
  
  Farm_Routine_08009140();
  arg_1[2] = *arg_1;
  return arg_1;
}

// =============================================================================
// Function: Farm_Routine_0800917C @ 0x0800917C
// =============================================================================
u32 Farm_Routine_0800917C(undefined2 *arg_1)

{
  
  Farm_Routine_08009154();
  arg_1[2] = *arg_1;
  return arg_1;
}

// =============================================================================
// Function: Input_PollTriggers @ 0x08009190
// =============================================================================
void Input_PollTriggers(ushort *arg_1)

{
  ushort u_val1;
  ushort u_val2;
  
  u_val1 = *arg_1;
  u_val2 = Farm_Routine_08009158();
  arg_1[2] = u_val2 & ~u_val1;
  return;
}

// =============================================================================
// Function: Input_InitKeypadState @ 0x080091A4
// =============================================================================
u32 Input_InitKeypadState(int arg_1,undefined2 arg_2,undefined2 arg_3)

{
  undefined2 *p_uint1;
  
  Farm_Routine_08009168();
  *(undefined2 *)(arg_1 + 8) = *(undefined2 *)(arg_1 + 4);
  *(undefined2 *)(arg_1 + 10) = arg_2;
  *(undefined2 *)(arg_1 + 0xc) = arg_3;
  for (p_uint1 = (undefined2 *)(arg_1 + 0xe); p_uint1 != (undefined2 *)(arg_1 + 0x22);
      p_uint1 = p_uint1 + 1) {
    *p_uint1 = 0;
  }
  return arg_1;
}

// =============================================================================
// Function: Input_InitDefault @ 0x080091E8
// =============================================================================
u32 Input_InitDefault(int arg_1)

{
  undefined2 *p_uint1;
  
  Farm_Routine_0800917C();
  *(undefined2 *)(arg_1 + 8) = *(undefined2 *)(arg_1 + 4);
  *(undefined2 *)(arg_1 + 10) = 0x1e;
  *(undefined2 *)(arg_1 + 0xc) = 4;
  for (p_uint1 = (undefined2 *)(arg_1 + 0xe); p_uint1 != (undefined2 *)(arg_1 + 0x22);
      p_uint1 = p_uint1 + 1) {
    *p_uint1 = 0;
  }
  return arg_1;
}

// =============================================================================
// Function: Farm_Routine_08009224 @ 0x08009224
// =============================================================================
u32 Farm_Routine_08009224(int arg_1,undefined2 arg_2,undefined2 arg_3,undefined4 arg_4)

{
  undefined2 *p_uint1;
  
  Farm_Routine_0800917C(arg_1,arg_4);
  *(undefined2 *)(arg_1 + 8) = *(undefined2 *)(arg_1 + 4);
  *(undefined2 *)(arg_1 + 10) = arg_2;
  *(undefined2 *)(arg_1 + 0xc) = arg_3;
  for (p_uint1 = (undefined2 *)(arg_1 + 0xe); p_uint1 != (undefined2 *)(arg_1 + 0x22);
      p_uint1 = p_uint1 + 1) {
    *p_uint1 = 0;
  }
  return arg_1;
}

// =============================================================================
// Function: Input_ProcessAutoRepeat @ 0x08009268
// =============================================================================
u32 Input_ProcessAutoRepeat(ushort *arg_1)

{
  ushort u_val1;
  ushort u_val2;
  ushort u_val3;
  ushort u_val4;
  uint u_val5;
  ushort *p_uint6;
  uint u_val7;
  uint u_val8;
  
  u_val5 = Input_PollTriggers();
  u_val1 = *arg_1;
  u_val2 = arg_1[6];
  u_val3 = arg_1[5];
  u_val8 = 0;
  u_val7 = 0x200;
  p_uint6 = arg_1 + 0x10;
  do {
    if ((u_val1 & u_val7) != 0) {
      if ((u_val5 & u_val7) == 0) {
        u_val4 = *p_uint6;
        if ((int)(short)u_val4 == (uint)u_val3) {
          u_val8 = u_val8 | u_val7;
          u_val4 = u_val4 - u_val2;
        }
        else {
          u_val4 = u_val4 + 1;
        }
      }
      else {
        u_val8 = u_val8 | u_val7;
        u_val4 = 0;
      }
      *p_uint6 = u_val4;
    }
    p_uint6 = p_uint6 + -1;
    u_val7 = u_val7 >> 1;
  } while (u_val7 != 0);
  arg_1[4] = (ushort)u_val8;
  return u_val8;
}

// =============================================================================
// Function: Farm_Routine_080092C8 @ 0x080092C8
// =============================================================================
void Farm_Routine_080092C8(ushort *arg_1,ushort arg_2)

{
  ushort u_val1;
  ushort u_val2;
  ushort *p_uint3;
  uint u_val4;
  
  u_val1 = *arg_1;
  u_val4 = 0x200;
  p_uint3 = arg_1 + 0x10;
  u_val2 = arg_1[5];
  do {
    if ((u_val1 & u_val4) != 0) {
      *p_uint3 = *p_uint3 + (arg_2 - u_val2);
    }
    p_uint3 = p_uint3 + -1;
    u_val4 = u_val4 >> 1;
  } while (u_val4 != 0);
  arg_1[5] = arg_2;
  return;
}

// =============================================================================
// Function: Fade_Init @ 0x08009300
// =============================================================================
u32 Fade_Init(int *arg_1,undefined4 arg_2)

{
  undefined4 *p_uint1;
  
  p_uint1 = (undefined4 *)CppRuntime_OperatorNewArray(0x10);
  *p_uint1 = arg_2;
  *(undefined2 *)(p_uint1 + 1) = 0;
  p_uint1[2] = 0;
  *(undefined1 *)(p_uint1 + 3) = 0;
  *(undefined2 *)((int)p_uint1 + 0xe) = 0;
  *arg_1 = (int)p_uint1;
  return arg_1;
}

// =============================================================================
// Function: Fade_Deinit @ 0x08009324
// =============================================================================
void Fade_Deinit(undefined4 *arg_1,uint arg_2)

{
  
  CppRuntime_FreeMemory(*arg_1);
  if ((arg_2 & 1) != 0) {
    CppRuntime_FreeMemory(arg_1);
  }
  return;
}

// =============================================================================
// Function: Fade_StartFadeOut @ 0x0800934C
// =============================================================================
void Fade_StartFadeOut(int *arg_1,short arg_2,undefined4 arg_3,int arg_4)

{
  int i_val1;
  
  i_val1 = *arg_1;
  if (arg_2 < 0) {
    arg_2 = -arg_2;
  }
  *(short *)(i_val1 + 4) = -arg_2;
  *(undefined4 *)(i_val1 + 8) = arg_3;
  *(byte *)(i_val1 + 0xc) =
       (byte)((byte)((uint)-arg_4 >> 0x18) | (byte)((uint)arg_4 >> 0x18)) >> 7;
  *(short *)(i_val1 + 0xe) = (short)0xFFFF;
  return;
}

// =============================================================================
// Function: Fade_StartFadeIn @ 0x08009378
// =============================================================================
void Fade_StartFadeIn(int *arg_1,short arg_2,undefined4 arg_3,int arg_4)

{
  int i_val1;
  
  i_val1 = *arg_1;
  if (arg_2 < 0) {
    arg_2 = -arg_2;
  }
  *(short *)(i_val1 + 4) = arg_2;
  *(undefined4 *)(i_val1 + 8) = arg_3;
  *(byte *)(i_val1 + 0xc) =
       (byte)((byte)((uint)-arg_4 >> 0x18) | (byte)((uint)arg_4 >> 0x18)) >> 7;
  *(undefined2 *)(i_val1 + 0xe) = 0;
  return;
}

// =============================================================================
// Function: Fade_UpdateFrame @ 0x080093AC
// =============================================================================
u32 Fade_UpdateFrame(undefined4 *arg_1)

{
  short s_val1;
  int i_val2;
  ushort *p_uint3;
  undefined4 u_val4;
  short *psVar5;
  uint u_val6;
  uint u_val7;
  int *p_int8;
  ushort u_val9;
  int i_val10;
  
  p_int8 = (int *)*arg_1;
  i_val10 = (int)(short)p_int8[1];
  if (i_val10 == 0) {
    u_val4 = 0;
    goto LAB_0800949e;
  }
  u_val7 = (uint)*(ushort *)((int)p_int8 + 0xe);
  i_val2 = p_int8[2];
  if (i_val2 != 0) {
    u_val9 = 0;
    if (i_val2 == 1) {
      u_val9 = 0x80;
    }
    else if (i_val2 == 2) {
      u_val9 = 0xc0;
    }
    i_val2 = *p_int8;
    p_uint3 = ((void *)0x04000050);
    if (i_val2 != 0) {
      p_uint3 = (ushort *)(i_val2 + 0x50);
    }
    *p_uint3 = (ushort)0xFF3F & *p_uint3 | u_val9;
    psVar5 = ((void *)0x04000054);
    if (i_val2 != 0) {
      psVar5 = (short *)(i_val2 + 0x54);
    }
    if (0xFFFE < u_val7) {
      s_val1 = 0x10;
    }
    else if (u_val7 == 0) {
      s_val1 = 0;
    }
    else {
      s_val1 = (short)(u_val7 * 0xf >> 0x10) + 1;
    }
    *psVar5 = s_val1;
  }
  if ((char)p_int8[3] != '\0') {
    if (0xFFFE < u_val7) {
      u_val6 = 0xf;
    }
    else if (u_val7 == 0) {
      u_val6 = 0;
    }
    else {
      u_val6 = (u_val7 * 0xe >> 0x10) + 1;
    }
    u_val6 = u_val6 | u_val6 << 4;
    p_uint3 = ((void *)0x0400004C);
    if (*p_int8 != 0) {
      p_uint3 = (ushort *)(*p_int8 + 0x4c);
    }
    *p_uint3 = (ushort)u_val6 | (ushort)(u_val6 << 8);
  }
  if (i_val10 < 0) {
    if (u_val7 == 0) goto LAB_08009478;
  }
  else if (u_val7 == 0xFFFF) {
LAB_08009478:
    u_val4 = 0;
    *(undefined2 *)(p_int8 + 1) = 0;
    goto LAB_0800949e;
  }
  i_val10 = u_val7 + i_val10;
  if (i_val10 < 0) {
    i_val10 = 0;
  }
  else if (0xFFFF < i_val10) {
    i_val10 = 0xFFFF;
  }
  *(short *)((int)p_int8 + 0xe) = (short)i_val10;
  u_val4 = 1;
LAB_0800949e:
  return u_val4;
}

// =============================================================================
// Function: Fade_Update @ 0x080094AC
// =============================================================================
void Fade_Update(int arg_1)

{
  Fade_UpdateFrame(arg_1 + 0xc);
  return;
}

// =============================================================================
// Function: Farm_Routine_080094B8 @ 0x080094B8
// =============================================================================
void Farm_Routine_080094B8(int arg_1,undefined4 arg_2)

{
  
  *(undefined4 *)(arg_1 + 8) = gRomData_080E5B80;
  Fade_Deinit(arg_1 + 0xc,2);
  Farm_Routine_080098AC(arg_1,arg_2);
  return;
}

// =============================================================================
// Function: Fade_IsActive @ 0x080094E0
// =============================================================================
u32 Fade_IsActive(int arg_1)

{
  short s_val1;
  
  s_val1 = Farm_Routine_080094A4(arg_1 + 0xc);
  return (uint)(-(int)s_val1 | (int)s_val1) >> 0x1f;
}

// =============================================================================
// Function: Farm_Routine_080094F8 @ 0x080094F8
// =============================================================================
u32 Farm_Routine_080094F8(int arg_1)

{
  short s_val1;
  
  s_val1 = Farm_Routine_080094A4(arg_1 + 0xc);
  return (int)s_val1;
}

// =============================================================================
// Function: Farm_Routine_08009508 @ 0x08009508
// =============================================================================
u32 Farm_Routine_08009508(int arg_1,short arg_2)

{
  short s_val1;
  
  s_val1 = Farm_Routine_080093A0(arg_1 + 0xc,(int)arg_2);
  return (int)s_val1;
}

// =============================================================================
// Function: Farm_Routine_0800951C @ 0x0800951C
// =============================================================================
void Farm_Routine_0800951C(int arg_1,short arg_2)

{
  
  Fade_StartFadeIn(arg_1 + 0xc,(int)arg_2);
  return;
}

// =============================================================================
// Function: Farm_Routine_0800952C @ 0x0800952C
// =============================================================================
void Farm_Routine_0800952C(int arg_1,short arg_2)

{
  
  Fade_StartFadeOut(arg_1 + 0xc,(int)arg_2);
  return;
}

// =============================================================================
// Function: Farm_Routine_0800953C @ 0x0800953C
// =============================================================================
void Farm_Routine_0800953C(int arg_1)

{
  Farm_Routine_08009344(arg_1 + 0xc);
  return;
}

// =============================================================================
// Function: Farm_Routine_08009548 @ 0x08009548
// =============================================================================
u32 Farm_Routine_08009548(undefined4 *arg_1)

{
  
  *arg_1 = 0;
  arg_1[1] = 0;
  arg_1[2] = gRomData_080E5B80;
  Fade_Init(arg_1 + 3);
  return arg_1;
}

// =============================================================================
// Function: Farm_Routine_0800956C @ 0x0800956C
// =============================================================================
void Farm_Routine_0800956C(undefined4 arg_1)

{
  ushort u_val1;
  
  u_val1 = Interrupt_WaitForVBlank(1);
  Farm_Routine_08009984(arg_1);
  if ((u_val1 & 1) != 0) {
    Interrupt_EnableHBlank();
  }
  return;
}

// =============================================================================
// Function: Farm_Routine_0800959C @ 0x0800959C
// =============================================================================
void Farm_Routine_0800959C(int arg_1,undefined4 arg_2)

{
  
  *(undefined4 *)(arg_1 + 8) = gRomData_080E5B90;
  Farm_Routine_0800956C(arg_1);
  Farm_Routine_080098DC(arg_1,arg_2);
  return;
}

// =============================================================================
// Function: Farm_Routine_080095C0 @ 0x080095C0
// =============================================================================
void Farm_Routine_080095C0(undefined4 arg_1,undefined4 arg_2)

{
  ushort u_val1;
  
  u_val1 = Interrupt_WaitForVBlank(1);
  Farm_Routine_08009940(arg_1,arg_2);
  if ((u_val1 & 1) != 0) {
    Interrupt_EnableHBlank();
  }
  return;
}

// =============================================================================
// Function: Farm_Routine_080095FC @ 0x080095FC
// =============================================================================
void Farm_Routine_080095FC(undefined4 arg_1,undefined4 arg_2)

{
  ushort u_val1;
  
  u_val1 = Interrupt_WaitForVBlank(1);
  Farm_Routine_08009968(arg_1,arg_2);
  if ((u_val1 & 1) != 0) {
    Interrupt_EnableHBlank();
  }
  return;
}

// =============================================================================
// Function: Farm_Routine_08009638 @ 0x08009638
// =============================================================================
void Farm_Routine_08009638(undefined4 arg_1,undefined4 arg_2)

{
  ushort u_val1;
  
  u_val1 = Interrupt_WaitForVBlank(1);
  Farm_Routine_080099B0(arg_1,arg_2);
  if ((u_val1 & 1) != 0) {
    Interrupt_EnableHBlank();
  }
  return;
}

// =============================================================================
// Function: Farm_Routine_08009674 @ 0x08009674
// =============================================================================
void Farm_Routine_08009674(undefined4 arg_1,undefined4 arg_2)

{
  ushort u_val1;
  
  u_val1 = Interrupt_WaitForVBlank(1);
  Farm_Routine_080099D4(arg_1,arg_2);
  if ((u_val1 & 1) != 0) {
    Interrupt_EnableHBlank();
  }
  return;
}

// =============================================================================
// Function: GBA_Display_InitRegsBuffer @ 0x080096B0
// =============================================================================
u32 GBA_Display_InitRegsBuffer(undefined4 *arg_1)

{
  undefined2 stack_buf_c [2];
  
  stack_buf_c[0] = 0;
  CpuSet(stack_buf_c,arg_1,0x0100002B);
  *arg_1 = 0x80;
  *(undefined2 *)(arg_1 + 8) = 0x100;
  *(undefined2 *)((int)arg_1 + 0x22) = 0;
  *(undefined2 *)(arg_1 + 9) = 0;
  *(undefined2 *)((int)arg_1 + 0x26) = 0x100;
  *(undefined2 *)(arg_1 + 0xc) = 0x100;
  *(undefined2 *)((int)arg_1 + 0x32) = 0;
  *(undefined2 *)(arg_1 + 0xd) = 0;
  *(undefined2 *)((int)arg_1 + 0x36) = 0x100;
  return arg_1;
}

// =============================================================================
// Function: GBA_Display_FlushRegs @ 0x080096F0
// =============================================================================
void GBA_Display_FlushRegs(int arg_1)

{
  
  GBA_DMA3_FastCopy(arg_1,0x4000000,0x54);
  *((void *)0x04000054) = *(undefined2 *)(arg_1 + 0x54);
  return;
}

// =============================================================================
// Function: GBA_Display_ApplyScrollAndBlend @ 0x08009710
// =============================================================================
void GBA_Display_ApplyScrollAndBlend(int arg_1)

{
  
  CpuFastSet(arg_1,0x4000000,0x10);
  CpuSet(arg_1 + 0x40,REG_BLDCNT,((void *)0x04000005));
  *REG_BG1HOFS = *(undefined2 *)(arg_1 + 0x14);
  return;
}

// =============================================================================
// Function: OAM_InitSpriteBuffer @ 0x08009744
// =============================================================================
u32 OAM_InitSpriteBuffer(byte *arg_1,byte arg_2,byte arg_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  arg_1[1] = arg_2 & 0x7f;
  *arg_1 = arg_2 & 0x7f;
  arg_1[3] = arg_3 & 0x1f;
  arg_1[2] = arg_3 & 0x1f;
  pbVar1 = arg_1 + 4;
  pbVar2 = arg_1 + 0x404;
  do {
    pbVar1[1] = 2;
    pbVar1 = pbVar1 + 8;
  } while (pbVar1 != pbVar2);
  return arg_1;
}

// =============================================================================
// Function: OAM_DMA_FlushBuffer @ 0x0800977C
// =============================================================================
void OAM_DMA_FlushBuffer(int arg_1)

{
  
  GBA_DMA3_FastCopy(arg_1 + 4,0x7000000,0x400);
  return;
}

// =============================================================================
// Function: OAM_CpuFastSet_FlushBuffer @ 0x08009790
// =============================================================================
void OAM_CpuFastSet_FlushBuffer(int arg_1)

{
  
  CpuFastSet(arg_1 + 4,0x7000000,0x100);
  return;
}

// =============================================================================
// Function: Farm_Routine_080097A4 @ 0x080097A4
// =============================================================================
void Farm_Routine_080097A4(byte *arg_1)

{
  byte b_flag1;
  ushort u_val2;
  undefined4 *p_uint3;
  uint u_val4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *p_uint7;
  uint u_val8;
  
  u_val4 = 0xFFF;
  pbVar6 = arg_1 + 4;
  p_uint7 = (undefined4 *)0x7000000;
  b_flag1 = *arg_1;
  u_val8 = 0;
  do {
    p_uint3 = 0x07000400;
    for (pbVar5 = arg_1 + 4; 0x07000400 = p_uint3, pbVar5 != arg_1 + (uint)b_flag1 * 8 + 4;
        pbVar5 = pbVar5 + 8) {
      u_val2 = *(ushort *)(pbVar5 + 4);
      if ((u_val2 & 0xc00) == u_val8) {
        *p_uint7 = *(undefined4 *)pbVar5;
        *(ushort *)(p_uint7 + 1) = u_val2;
        *(undefined2 *)((int)p_uint7 + 6) = *(undefined2 *)(pbVar6 + 6);
        pbVar6 = pbVar6 + 8;
        p_uint7 = p_uint7 + 2;
      }
      p_uint3 = 0x07000400;
    }
    u_val8 = u_val8 + 0x400;
  } while (u_val8 <= u_val4);
  for (; p_uint7 != p_uint3; p_uint7 = p_uint7 + 2) {
    *p_uint7 = 0x200;
    *(undefined2 *)((int)p_uint7 + 6) = *(undefined2 *)(pbVar6 + 6);
    pbVar6 = pbVar6 + 8;
  }
  return;
}

// =============================================================================
// Function: Farm_Routine_08009834 @ 0x08009834
// =============================================================================
void Farm_Routine_08009834(byte *arg_1)

{
  byte b_flag1;
  byte b_flag2;
  byte *pbVar3;
  
  b_flag1 = *arg_1;
  b_flag2 = arg_1[1];
  if ((uint)b_flag2 < (uint)b_flag1) {
    pbVar3 = arg_1 + (uint)b_flag2 * 8 + 4;
    do {
      pbVar3[1] = 2;
      pbVar3 = pbVar3 + 8;
    } while (pbVar3 != arg_1 + (uint)b_flag1 * 8 + 4);
  }
  *arg_1 = b_flag2;
  arg_1[2] = arg_1[3];
  return;
}

// =============================================================================
// Function: Farm_Routine_08009864 @ 0x08009864
// =============================================================================
void Farm_Routine_08009864(undefined4 arg_1)

{
  
  OAM_DMA_FlushBuffer();
  Farm_Routine_08009834(arg_1);
  return;
}

// =============================================================================
// Function: Farm_Routine_08009878 @ 0x08009878
// =============================================================================
void Farm_Routine_08009878(int arg_1)

{
  
  CpuFastSet(arg_1 + 4,0x7000000,0x100);
  Farm_Routine_08009834(arg_1);
  return;
}

// =============================================================================
// Function: Farm_Routine_08009898 @ 0x08009898
// =============================================================================
void Farm_Routine_08009898(undefined4 arg_1)

{
  
  Farm_Routine_080097A4();
  Farm_Routine_08009834(arg_1);
  return;
}

// =============================================================================
// Function: Farm_Routine_080098AC @ 0x080098AC
// =============================================================================
void Farm_Routine_080098AC(undefined4 *arg_1,uint arg_2)

{
  undefined4 *p_uint1;
  
  arg_1[2] = gRomData_080E5BE8;
  p_uint1 = (undefined4 *)*arg_1;
  if (p_uint1 != (undefined4 *)0x0) {
    *p_uint1 = arg_1[1];
    *(undefined4 **)arg_1[1] = p_uint1;
  }
  if ((arg_2 & 1) != 0) {
    CppRuntime_FreeMemory(arg_1);
  }
  return;
}

// =============================================================================
// Function: Farm_Routine_08009908 @ 0x08009908
// =============================================================================
u32 Farm_Routine_08009908(int arg_1)

{
  char c_char1;
  int i_val2;
  int pos_y;
  
  pos_y = *(int *)(arg_1 + 0xc);
  while (i_val2 = pos_y, i_val2 != arg_1 + 0x10) {
    pos_y = *(int *)(i_val2 + 4);
    c_char1 = _call_via_r1(i_val2,*(undefined4 *)(*(int *)(i_val2 + 8) + 8));
    if (c_char1 == '\0') {
      _call_via_r2(arg_1,i_val2,*(undefined4 *)(*(int *)(arg_1 + 8) + 0x14));
    }
  }
  return 1;
}

// =============================================================================
// Function: Farm_Routine_08009940 @ 0x08009940
// =============================================================================
void Farm_Routine_08009940(int arg_1,undefined4 *arg_2)

{
  undefined4 *p_uint1;
  
  p_uint1 = (undefined4 *)*arg_2;
  if (p_uint1 != (undefined4 *)0x0) {
    *p_uint1 = arg_2[1];
    *(undefined4 **)arg_2[1] = p_uint1;
  }
  p_uint1 = *(undefined4 **)(arg_1 + 0x10);
  *p_uint1 = arg_2;
  *arg_2 = p_uint1;
  arg_2[1] = arg_1 + 0x10;
  *(undefined4 **)(arg_1 + 0x10) = arg_2 + 1;
  return;
}

// =============================================================================
// Function: Farm_Routine_08009968 @ 0x08009968
// =============================================================================
void Farm_Routine_08009968(undefined4 arg_1,undefined4 *arg_2)

{
  undefined4 *p_uint1;
  
  p_uint1 = (undefined4 *)*arg_2;
  if (p_uint1 != (undefined4 *)0x0) {
    *p_uint1 = arg_2[1];
    *(undefined4 **)arg_2[1] = p_uint1;
    *arg_2 = 0;
    arg_2[1] = 0;
  }
  return;
}

// =============================================================================
// Function: Farm_Routine_08009984 @ 0x08009984
// =============================================================================
void Farm_Routine_08009984(int arg_1)

{
  undefined4 *p_uint1;
  undefined4 *p_uint2;
  
  p_uint1 = *(undefined4 **)(arg_1 + 0xc);
  while (p_uint1 != (undefined4 *)(arg_1 + 0x10)) {
    p_uint2 = (undefined4 *)p_uint1[1];
    *p_uint1 = 0;
    p_uint1[1] = 0;
    p_uint1 = p_uint2;
  }
  *(int *)(arg_1 + 0xc) = arg_1 + 0x10;
  *(int *)(arg_1 + 0x10) = arg_1 + 0xc;
  return;
}

// =============================================================================
// Function: Farm_Routine_080099EC @ 0x080099EC
// =============================================================================
u32 Farm_Routine_080099EC(int arg_1)

{
  
  return (uint)(*(int *)(arg_1 + 0xc) == arg_1 + 0x10);
}

// =============================================================================
// Function: Farm_Routine_08009A48 @ 0x08009A48
// =============================================================================
u32 Farm_Routine_08009A48(int arg_1,undefined4 arg_2)

{
  uint u_val1;
  int i_val2;
  int i_val3;
  
  u_val1 = gba_strlen(arg_2);
  if (0xc < u_val1) {
    u_val1 = 0xc;
  }
  gba_memcpy(arg_1,arg_2,u_val1);
  *(undefined1 *)(arg_1 + u_val1) = 0;
  *(ushort *)(arg_1 + 0x10) = (ushort)0xFFFFFC00 & *(ushort *)(arg_1 + 0x10);
  *(byte *)(arg_1 + 0x11) = *(byte *)(arg_1 + 0x11) & 0xeb | 8;
  ShippingBin_Init(arg_1 + 0x40);
  Coop_Init(arg_1 + 0x1e0);
  Barn_Init(arg_1 + 0x3fc);
  Stable_Init(arg_1 + 0x5DC);
  i_val2 = arg_1 + 0x9C8;
  i_val3 = 0x432;
  do {
    Farm_Routine_08009F8C(i_val2);
    i_val2 = i_val2 + 4;
    i_val3 = i_val3 + -1;
  } while (i_val3 != -1);
  return arg_1;
}

// =============================================================================
// Function: Farm_GetFieldState @ 0x08009B00
// =============================================================================
u32 Farm_GetFieldState(int arg_1)

{
  int i_val1;
  
  i_val1 = 0;
  if ((int)((uint)*(byte *)(arg_1 + 0x11) * 0x20000000) < 0) {
    i_val1 = arg_1 + 0x14;
  }
  return i_val1;
}

// =============================================================================
// Function: Farm_HasPlantedCrop @ 0x08009B20
// =============================================================================
u32 Farm_HasPlantedCrop(int arg_1)

{
  undefined4 u_val1;
  uint *p_uint2;
  uint loop_i;
  int i_val4;
  uint u_val5;
  
  u_val5 = 0;
  i_val4 = 0;
  do {
    loop_i = 0;
    p_uint2 = (uint *)(i_val4 + arg_1 + 0x9C8);
    do {
      if (((*p_uint2 & 0xfff) >> 8 != 0) && ((*p_uint2 & 0xff) >> 2 == 0x1a)) {
        u_val1 = 1;
        goto LAB_08009b5a;
      }
      p_uint2 = p_uint2 + 1;
      loop_i = loop_i + 1;
    } while (loop_i < 0x2b);
    i_val4 = i_val4 + 0xac;
    u_val5 = u_val5 + 1;
    if (0x18 < u_val5) {
      u_val1 = 0;
LAB_08009b5a:
      return u_val1;
    }
  } while( true );
}

// =============================================================================
// Function: Farm_AddLumber @ 0x08009B68
// =============================================================================
void Farm_AddLumber(int arg_1,int arg_2)

{
  uint *p_uint1;
  uint stack_val_14;
  uint stack_val_10;
  
  stack_val_14 = 0x3E7;
  stack_val_10 = (*(ushort *)(arg_1 + 0x10) & 0x3ff) + arg_2;
  p_uint1 = &stack_val_14;
  if (stack_val_10 < 0x3E7) {
    p_uint1 = &stack_val_10;
  }
  *(ushort *)(arg_1 + 0x10) =
       (ushort)0xFFFFFC00 & *(ushort *)(arg_1 + 0x10) | (ushort)*p_uint1 & (ushort)0x3FF
  ;
  return;
}

// =============================================================================
// Function: Farm_TakeLumber @ 0x08009BAC
// =============================================================================
void Farm_TakeLumber(int arg_1,uint arg_2)

{
  ushort u_val1;
  
  u_val1 = *(ushort *)(arg_1 + 0x10);
  if (arg_2 < (u_val1 & 0x3ff)) {
    u_val1 = (ushort)0xFFFFFC00 & u_val1 |
            (short)(u_val1 & 0x3ff) - (short)arg_2 & (ushort)0x3FF;
  }
  else {
    u_val1 = (ushort)0xFFFFFC00 & u_val1;
  }
  *(ushort *)(arg_1 + 0x10) = u_val1;
  return;
}

// =============================================================================
// Function: Farm_Routine_08009BE4 @ 0x08009BE4
// =============================================================================
void Farm_Routine_08009BE4(int arg_1,int arg_2)

{
  undefined4 u_val1;
  
  if (-1 < (int)((uint)*(byte *)(arg_1 + 0x11) * 0x20000000)) {
    if (arg_1 + 0x14 != 0) {
      VTable_Routine_080D684C(arg_1 + 0x14);
      *(undefined1 *)(arg_1 + 0x30) = *(undefined1 *)(arg_2 + 0x1c);
      *(byte *)(arg_1 + 0x31) =
           *(byte *)(arg_1 + 0x31) & 0xfc | *(byte *)(arg_2 + 0x1d) & 1 |
           *(byte *)(arg_2 + 0x1d) & 2;
      *(undefined4 *)(arg_1 + 0x34) = *(undefined4 *)(arg_2 + 0x20);
      u_val1 = *(undefined4 *)(arg_2 + 0x28);
      *(undefined4 *)(arg_1 + 0x38) = *(undefined4 *)(arg_2 + 0x24);
      *(undefined4 *)(arg_1 + 0x3c) = u_val1;
    }
    *(byte *)(arg_1 + 0x11) = *(byte *)(arg_1 + 0x11) | 4;
  }
  return;
}

// =============================================================================
// Function: Farm_Routine_08009C3C @ 0x08009C3C
// =============================================================================
void Farm_Routine_08009C3C(int arg_1)

{
  int i_val1;
  
  i_val1 = 0;
  if ((int)((uint)*(byte *)(arg_1 + 0x11) * 0x20000000) < 0) {
    i_val1 = arg_1 + 0x14;
  }
  return i_val1;
}

// =============================================================================
// Function: Farm_Routine_08009FC8 @ 0x08009FC8
// =============================================================================
u32 Farm_Routine_08009FC8(uint *arg_1,byte arg_2,char arg_3,byte arg_4)

{
  byte b_flag1;
  
  *(byte *)arg_1 = arg_3 << 2 | arg_2 & 3;
  *(byte *)((int)arg_1 + 1) = *(byte *)((int)arg_1 + 1) & 0xf0 | arg_4 & 0xf;
  *arg_1 = *arg_1 & 0xFFFE0FFF;
  b_flag1 = FieldPlot_GetState(arg_1);
  *(byte *)((int)arg_1 + 2) = *(byte *)((int)arg_1 + 2) & 0xf1 | (b_flag1 & 7) << 1;
  return arg_1;
}

// =============================================================================
// Function: FieldPlot_GetState @ 0x0800A014
// =============================================================================
u32 FieldPlot_GetState(uint *arg_1)

{
  uint u_val1;
  undefined4 u_val2;
  
  u_val2 = 1;
  if (((*arg_1 & 0xfff) >> 8 != 0) && (u_val1 = ((*arg_1 & 0xff) >> 2) - 0x1a, u_val1 < 0xd)) {
    switch(*(uint *)(PTR_case_0800A03C_0800a038 + u_val1 * 4) & 0xfffffffe) {
    case 0x800a03c:
    case 0x800a070:
      u_val2 = 6;
      break;
    case 0x800a074:
      u_val2 = 3;
    }
  }
  return u_val2;
}

// =============================================================================
// Function: FieldPlot_IsTilled @ 0x0800A07C
// =============================================================================
u32 FieldPlot_IsTilled(uint *arg_1)

{
  uint u_val1;
  undefined4 u_val2;
  
  u_val1 = (*arg_1 & 0xfff) >> 8;
  if (((u_val1 < 2) || (8 < u_val1)) || ((*arg_1 & 0xff) >> 2 == 0x14)) {
    u_val2 = 0;
  }
  else {
    u_val2 = 1;
  }
  return u_val2;
}

// =============================================================================
// Function: FieldPlot_GetCropType @ 0x0800A0A4
// =============================================================================
u32 FieldPlot_GetCropType(uint *arg_1)

{
  uint u_val1;
  undefined4 u_val2;
  
  u_val1 = (*arg_1 & 0xfff) >> 8;
  if (((u_val1 < 8) || (u_val1 != 8)) || (u_val1 = ((*arg_1 & 0xff) >> 2) - 0x1b, 0xb < u_val1)) {
    u_val2 = 0;
  }
  else {
    switch(*(uint *)(PTR_case_0800A0D0_0800a0cc + u_val1 * 4) & 0xfffffffe) {
    case 0x800a0d0:
    case 0x800a100:
      u_val2 = 0x3cc;
      break;
    case 0x800a106:
      u_val2 = 0x3CB;
      break;
    case 0x800a110:
      u_val2 = 0x3CA;
    }
  }
  return u_val2;
}

// =============================================================================
// Function: FieldPlot_SetCropAndStage @ 0x0800A134
// =============================================================================
void FieldPlot_SetCropAndStage(uint *arg_1,char arg_2,int arg_3)

{
  byte b_flag1;
  
  *(byte *)arg_1 = (byte)*arg_1 & 3 | arg_2 << 2;
  *(byte *)((int)arg_1 + 1) = *(byte *)((int)arg_1 + 1) & 0xf0 | (byte)arg_3 & 0xf;
  b_flag1 = FieldPlot_GetState(arg_1);
  *(byte *)((int)arg_1 + 2) = *(byte *)((int)arg_1 + 2) & 0xf1 | (b_flag1 & 7) << 1;
  if ((arg_3 == 8) && ((*arg_1 & 3) != 3)) {
    *(byte *)arg_1 = (byte)*arg_1 & 0xfc;
  }
  return;
}

// =============================================================================
// Function: FieldPlot_TillSoil @ 0x0800A190
// =============================================================================
u32 FieldPlot_TillSoil(uint *arg_1,char arg_2)

{
  byte b_flag1;
  uint u_val2;
  int i_val3;
  
  i_val3 = 0;
  u_val2 = *arg_1;
  if ((u_val2 & 3) == 0) {
    if ((u_val2 & 0xfff) >> 8 == 0) {
      b_flag1 = 2;
      if (arg_2 != '\0') {
        b_flag1 = 1;
      }
      *(byte *)arg_1 = (byte)*arg_1 & 0xfc | b_flag1;
      *(byte *)((int)arg_1 + 1) = *(byte *)((int)arg_1 + 1) & 0xf0;
      i_val3 = 1;
    }
    if (i_val3 == 1) {
      u_val2 = math_rand();
      u_val2 = u_val2 & 0xff;
      if (u_val2 < 10) {
        i_val3 = 2;
      }
      else if (u_val2 - 10 < 3) {
        i_val3 = 4;
      }
      else if (u_val2 - 0xd < 5) {
        i_val3 = 3;
      }
    }
  }
  else if ((u_val2 & 3) - 1 < 2) {
    u_val2 = (u_val2 & 0xfff) >> 8;
    if (u_val2 == 7) {
      b_flag1 = 2;
      if (arg_2 != '\0') {
        b_flag1 = 1;
      }
      *(byte *)arg_1 = (byte)*arg_1 & 0xfc | b_flag1;
    }
    else if ((7 < u_val2) || (u_val2 != 1)) goto LAB_0800a230;
    *(byte *)((int)arg_1 + 1) = *(byte *)((int)arg_1 + 1) & 0xf0;
    i_val3 = 1;
  }
LAB_0800a230:
  return i_val3;
}

// =============================================================================
// Function: FieldPlot_PlantSeeds @ 0x0800A238
// =============================================================================
u32 FieldPlot_PlantSeeds(uint *arg_1,int arg_2)

{
  undefined4 u_val1;
  uint u_val2;
  int i_val3;
  
  u_val2 = *arg_1;
  if ((u_val2 & 0xfff) >> 8 == 0) {
    if ((u_val2 & 3) - 1 < 2) {
      *(byte *)arg_1 = (byte)*arg_1 & 0xfc;
    }
    u_val1 = 1;
    goto LAB_0800a336;
  }
  u_val2 = ((u_val2 & 0xff) >> 2) - 0x16;
  if (0x10 < u_val2) goto case_0800A2BC;
  switch(*(uint *)(PTR_case_0800A278_0800a274 + u_val2 * 4) & 0xfffffffe) {
  case 0x800a278:
  case 0x800a2bc:
case_0800A2BC:
    u_val1 = 0;
    goto LAB_0800a336;
  case 0x800a2c0:
    i_val3 = 0;
    u_val1 = 3;
    break;
  case 0x800a2c6:
    i_val3 = 0;
    u_val1 = 5;
    break;
  case 0x800a2cc:
    i_val3 = 0;
    u_val1 = 6;
    break;
  case 0x800a2d2:
    i_val3 = 3;
    u_val1 = 4;
    break;
  case 0x800a2d8:
    i_val3 = 1;
    u_val1 = 7;
    break;
  case 0x800a2de:
    i_val3 = 2;
    u_val1 = 8;
  }
  u_val2 = arg_2 - i_val3;
  if (0 < (int)u_val2) {
    if ((*arg_1 & 0xfffff) >> 0x11 <= u_val2) {
      *(byte *)((int)arg_1 + 2) = *(byte *)((int)arg_1 + 2) & 0xf1;
      *(byte *)((int)arg_1 + 1) = *(byte *)((int)arg_1 + 1) & 0xf0;
      if ((*arg_1 & 3) != 3) {
        *(byte *)arg_1 = (byte)*arg_1 & 0xfc;
      }
      goto LAB_0800a336;
    }
    *(byte *)((int)arg_1 + 2) =
         *(byte *)((int)arg_1 + 2) & 0xf1 |
         (byte)((((*arg_1 & 0xfffff) >> 0x11) - u_val2 & 7) << 1);
  }
  u_val1 = 2;
LAB_0800a336:
  return u_val1;
}

// =============================================================================
// Function: FieldPlot_StrikeWithHammer @ 0x0800A33C
// =============================================================================
u32 FieldPlot_StrikeWithHammer(uint *arg_1,int arg_2)

{
  uint u_val1;
  undefined4 u_val2;
  int i_val3;
  
  if ((*arg_1 & 0xfff) >> 8 == 0) {
LAB_0800a360:
    u_val2 = 0;
  }
  else {
    u_val1 = (*arg_1 & 0xff) >> 2;
    if (u_val1 == 0x17) {
      i_val3 = 0;
      u_val2 = 1;
    }
    else {
      if (((u_val1 < 0x17) || (0x1e < u_val1)) || (u_val1 < 0x1b)) goto LAB_0800a360;
      i_val3 = 1;
      u_val2 = 2;
    }
    u_val1 = arg_2 - i_val3;
    if (0 < (int)u_val1) {
      if ((*arg_1 & 0xfffff) >> 0x11 <= u_val1) {
        *(byte *)((int)arg_1 + 2) = *(byte *)((int)arg_1 + 2) & 0xf1;
        *(byte *)((int)arg_1 + 1) = *(byte *)((int)arg_1 + 1) & 0xf0;
        if ((*arg_1 & 3) != 3) {
          *(byte *)arg_1 = (byte)*arg_1 & 0xfc;
        }
        goto LAB_0800a3c2;
      }
      *(byte *)((int)arg_1 + 2) =
           *(byte *)((int)arg_1 + 2) & 0xf1 |
           (byte)((((*arg_1 & 0xfffff) >> 0x11) - u_val1 & 7) << 1);
    }
    u_val2 = 3;
  }
LAB_0800a3c2:
  return u_val2;
}

// =============================================================================
// Function: FieldPlot_ChopBranch @ 0x0800A3C8
// =============================================================================
u32 FieldPlot_ChopBranch(uint *arg_1)

{
  uint u_val1;
  undefined4 u_val2;
  uint u_val3;
  uint u_val4;
  
  u_val4 = *arg_1;
  u_val3 = (u_val4 & 0xfff) >> 8;
  if (u_val3 != 0) {
    u_val1 = (u_val4 & 0xff) >> 2;
    if (u_val1 == 0x14) {
      if (u_val3 == 5) {
        *(byte *)((int)arg_1 + 1) = *(byte *)((int)arg_1 + 1) & 0xf0 | 7;
        *arg_1 = *arg_1 & 0xFFFE0FFF;
        u_val2 = 1;
        goto LAB_0800a432;
      }
    }
    else if ((u_val1 == 0x15) ||
            (((u_val4 & 3) - 1 < 2 &&
             ((((u_val3 == 6 || (u_val3 == 2)) || (u_val3 == 3)) || ((u_val3 == 4 || (u_val3 == 5))))))))
    {
      *(byte *)((int)arg_1 + 1) = *(byte *)((int)arg_1 + 1) & 0xf0;
      u_val2 = 2;
      goto LAB_0800a432;
    }
  }
  u_val2 = 0;
LAB_0800a432:
  return u_val2;
}

// =============================================================================
// Function: FieldPlot_ClearWeeds @ 0x0800A438
// =============================================================================
u32 FieldPlot_ClearWeeds(uint *arg_1)

{
  bool b_flag1;
  
  b_flag1 = (*arg_1 & 3) == 1;
  if (b_flag1) {
    *(byte *)arg_1 = (byte)*arg_1 & 0xfc | 2;
  }
  return (uint)b_flag1;
}

// =============================================================================
// Function: FieldPlot_SetDebris @ 0x0800A460
// =============================================================================
void FieldPlot_SetDebris(uint *arg_1,char arg_2)

{
  
  if (((*arg_1 & 3) - 1 < 2) && ((*arg_1 & 0xfff) >> 8 == 0)) {
    *(byte *)((int)arg_1 + 1) = *(byte *)((int)arg_1 + 1) & 0xf0 | 1;
    *(byte *)arg_1 = (byte)*arg_1 & 3 | arg_2 << 2;
    *arg_1 = *arg_1 & 0xFFFE0FFF;
  }
  return;
}

// =============================================================================
// Function: FieldPlot_HarvestCrop @ 0x0800A4A4
// =============================================================================
u32 FieldPlot_HarvestCrop(undefined **arg_1,uint *arg_2)

{
  short s_val1;
  uint u_val2;
  uint u_val3;
  int i_val4;
  uint3 stack_val_14;
  undefined1 temp_coords [4];
  
  i_val4 = gRomData_080E93F8;
  u_val3 = *arg_2;
  u_val2 = (u_val3 & 0xfff) >> 8;
  if (u_val2 == 5) {
    u_val2 = ((u_val3 & 0xff) >> 2) - 2;
    if (u_val2 < 0x13) {
      switch(*(uint *)(PTR_case_0800A4D8_0800a4d4 + u_val2 * 4) & 0xfffffffe) {
      case 0x800a4d8:
        arg_1 = &PTR_case_0800A918_0800a894;
      case 0x800a524:
        *(byte *)((int)arg_2 + 1) = *(byte *)((int)arg_2 + 1) & 0xf0 | 2;
        u_val2 = *arg_2 & 0xFFFE0FFF | 0x4000;
        break;
      case 0x800a544:
        *(byte *)((int)arg_2 + 1) = *(byte *)((int)arg_2 + 1) & 0xf0 | 3;
        u_val2 = *arg_2 & 0xFFFE0FFF | 0x6000;
        break;
      case 0x800a564:
        *(byte *)((int)arg_2 + 1) = *(byte *)((int)arg_2 + 1) & 0xf0 | 4;
        u_val2 = *arg_2 & 0xFFFE0FFF | 0x6000;
        break;
      case 0x800a584:
        *(byte *)((int)arg_2 + 1) = *(byte *)((int)arg_2 + 1) & 0xf0 | 4;
        u_val2 = *arg_2 & 0xFFFE0FFF | 0xb000;
        break;
      case 0x800a5a4:
        *(byte *)((int)arg_2 + 1) = *(byte *)((int)arg_2 + 1) & 0xf0 | 4;
        u_val2 = *arg_2 & 0xFFFE0FFF | 0xf000;
        break;
      case 0x800a5c4:
        *(byte *)((int)arg_2 + 1) = *(byte *)((int)arg_2 + 1) & 0xf0 | 3;
        u_val2 = *arg_2 & 0xFFFE0FFF | 0x6000;
        break;
      case 0x800a5e4:
        *(byte *)((int)arg_2 + 1) = *(byte *)((int)arg_2 + 1) & 0xf0 | 2;
        u_val2 = *arg_2 & 0xFFFE0FFF | 0x3000;
        break;
      case 0x800a604:
        *(byte *)((int)arg_2 + 1) = *(byte *)((int)arg_2 + 1) & 0xf0 | 4;
        u_val2 = *arg_2 & 0xFFFE0FFF | 0x5000;
        break;
      case 0x800a624:
        goto case_0800A624;
      case 0x800a678:
        goto case_0800A678;
      }
    }
    else {
case_0800A624:
      *(byte *)((int)arg_2 + 1) = *(byte *)((int)arg_2 + 1) & 0xf0;
      u_val2 = *arg_2 & 0xFFFE0FFF;
    }
    *arg_2 = u_val2;
    i_val4 = gRomData_080E93F8;
LAB_0800a662:
    u_val2 = (*arg_2 & 0xff) >> 2;
    s_val1 = *(short *)(u_val2 * 0xc + i_val4 + 10);
    if (s_val1 != 0xff) {
      if (u_val2 < 0xf) {
        Item_SetIdAndClearQuality(&stack_val_14);
        Farmer_Routine_0800F004(arg_1,(uint)stack_val_14);
      }
      else {
        Item_SetQuality(temp_coords,s_val1);
        Farmer_Routine_0800F040(arg_1,temp_coords[0]);
      }
      goto LAB_0800a6be;
    }
  }
  else if (u_val2 == 8) {
    if (*(short *)(((u_val3 & 0xff) >> 2) * 0xc + gRomData_080E93F8 + 10) != 0xff) {
      *(byte *)((int)arg_2 + 1) = *(byte *)((int)arg_2 + 1) & 0xf0;
    }
    goto LAB_0800a662;
  }
case_0800A678:
  Farmer_Routine_0800EFEC(arg_1);
LAB_0800a6be:
  return arg_1;
}

// =============================================================================
// Function: FieldPlot_CanPlaceItem @ 0x0800A6C8
// =============================================================================
u32 FieldPlot_CanPlaceItem(uint *arg_1,undefined4 arg_2)

{
  int i_val1;
  undefined4 u_val2;
  
  if ((((*arg_1 & 0xfff) >> 8 == 0) && (i_val1 = Item_GetQuality(arg_2), 0x30 < i_val1)) &&
     ((i_val1 < 0x33 || ((i_val1 < 0x5b && (0x58 < i_val1)))))) {
    u_val2 = 1;
  }
  else {
    u_val2 = 0;
  }
  return u_val2;
}

// =============================================================================
// Function: FieldPlot_PlaceItem @ 0x0800A6F4
// =============================================================================
void FieldPlot_PlaceItem(uint *arg_1,undefined4 arg_2)

{
  char c_char1;
  byte b_flag2;
  int i_val3;
  byte b_flag4;
  
  c_char1 = FieldPlot_CanPlaceItem();
  if (c_char1 != '\0') {
    i_val3 = Item_GetQuality(arg_2);
    if (i_val3 == 0x32) {
      b_flag4 = (byte)*arg_1 & 3;
      b_flag2 = 0x5c;
    }
    else if (i_val3 < 0x33) {
      if (i_val3 != 0x31) {
        return;
      }
      b_flag4 = (byte)*arg_1 & 3;
      b_flag2 = 0x58;
    }
    else if (i_val3 == 0x59) {
      b_flag4 = (byte)*arg_1 & 3;
      b_flag2 = 0x60;
    }
    else {
      if (i_val3 != 0x5a) {
        return;
      }
      b_flag4 = (byte)*arg_1 & 3;
      b_flag2 = 0x68;
    }
    *(byte *)arg_1 = b_flag4 | b_flag2;
    *(byte *)((int)arg_1 + 1) = *(byte *)((int)arg_1 + 1) & 0xf0 | 8;
    if ((*arg_1 & 3) != 3) {
      *(byte *)arg_1 = (byte)*arg_1 & 0xfc;
    }
    b_flag2 = FieldPlot_GetState(arg_1);
    *(byte *)((int)arg_1 + 2) = *(byte *)((int)arg_1 + 2) & 0xf1 | (b_flag2 & 7) << 1;
  }
  return;
}

// =============================================================================
// Function: FieldPlot_IsPassable @ 0x0800A78C
// =============================================================================
u32 FieldPlot_IsPassable(uint *arg_1)

{
  uint u_val1;
  undefined4 u_val2;
  
  if ((((*arg_1 & 0xfff) >> 8 == 0) || (u_val1 = (*arg_1 & 0xff) >> 2, 0x26 < u_val1)) ||
     (u_val1 < 0x1b)) {
    u_val2 = 0;
  }
  else {
    u_val2 = 1;
  }
  return u_val2;
}

// =============================================================================
// Function: Farm_Routine_0800A7B0 @ 0x0800A7B0
// =============================================================================
void Farm_Routine_0800A7B0(uint *arg_1,int arg_2,byte *arg_3)

{
  uint u_val1;
  byte *pbVar2;
  int i_val3;
  uint u_val4;
  uint u_val5;
  undefined4 u_val6;
  
  if (((*arg_1 & 0xfff) >> 8 == 1) && (u_val1 = (*arg_1 & 0xff) >> 2, u_val1 < 0x14)) {
    switch(*(uint *)(PTR_case_0800A7DC_0800a7d8 + u_val1 * 4) & 0xfffffffe) {
    case 0x800a7dc:
      break;
    case 0x800a836:
      if ((*arg_3 & 3) == 1) goto LAB_0800a856;
      goto LAB_0800a84c;
    case 0x800a842:
      if ((*arg_3 & 3) != 2) goto LAB_0800a84c;
      goto LAB_0800a856;
    }
    if ((*arg_3 & 3) != 0) {
LAB_0800a84c:
      *(byte *)((int)arg_1 + 1) = *(byte *)((int)arg_1 + 1) & 0xf0;
    }
  }
LAB_0800a856:
  if (((*arg_1 & 0xfff) >> 8 == 0) || (u_val1 = (*arg_1 & 0xff) >> 2, 0x26 < u_val1)) {
case_0800A9B2:
    if ((*arg_1 & 3) == 2) {
      *(byte *)arg_1 = (byte)*arg_1 & 0xfc | 1;
    }
  }
  else {
    switch(*(uint *)(PTR_case_0800A87C_0800a878 + u_val1 * 4) & 0xfffffffe) {
    case 0x800a87c:
      break;
    case 0x800a94c:
      if (((*arg_3 & 3) == 3) || (u_val1 = *arg_1, (u_val1 & 0xfff) >> 8 == 5))
      goto case_0800A9B2;
      u_val5 = 0xFFFE0FFF & u_val1;
      u_val1 = u_val5 | (((u_val1 & 0x1ffff) >> 0xc) + 1 & 0x1f) << 0xc;
      *arg_1 = u_val1;
      u_val5 = (u_val5 & 0xfff) >> 8;
      if (u_val5 == 7) {
        u_val5 = 1;
      }
      goto LAB_0800a97e;
    case 0x800a9b2:
      goto case_0800A9B2;
    }
    u_val5 = *arg_1;
    u_val1 = (u_val5 & 0xfff) >> 8;
    if ((u_val1 == 0) || (4 < u_val1)) goto case_0800A9B2;
    if ((u_val5 & 3) == 2) {
      u_val4 = 0xFFFE0FFF & u_val5;
      u_val1 = u_val4 | (((u_val5 & 0x1ffff) >> 0xc) + 1 & 0x1f) << 0xc;
      *arg_1 = u_val1;
      u_val5 = (u_val4 & 0xfff) >> 8;
LAB_0800a97e:
      i_val3 = ((u_val1 & 0xff) >> 2) * 0x54;
      if (u_val5 != *(uint *)(((u_val1 & 0x1ffff) >> 0xc) * 4 + i_val3 + gRomData_080E8D14)) {
        *(byte *)((int)arg_1 + 1) =
             *(byte *)((int)arg_1 + 1) & 0xf0 |
             (byte)*(undefined4 *)(((u_val1 & 0x1ffff) >> 0xc) * 4 + i_val3 + gRomData_080E8D14) & 0xf;
      }
      goto case_0800A9B2;
    }
  }
  pbVar2 = gRomData_080E8D04;
  if ((arg_2 != 3) &&
     (((arg_2 < 4 || (pbVar2 = gRomData_080E8D0C, arg_2 != 4)) &&
      (pbVar2 = (byte *)((*arg_3 & 3) * 0x10 + gRomData_080E8CC4), arg_2 == 0)))) {
    pbVar2 = pbVar2 + 8;
  }
  u_val5 = *arg_1;
  u_val1 = (u_val5 & 0xfff) >> 8;
  if (u_val1 == 0) {
    u_val5 = u_val5 & 3;
    if ((u_val5 == 0) || (u_val5 == 3)) {
      i_val3 = math_rand();
      u_val1 = i_val3 >> 3 & 0xff;
      u_val5 = (uint)pbVar2[4];
      if (u_val5 <= u_val1) {
        if (u_val1 < pbVar2[5] + u_val5) {
          u_val6 = 0x16;
        }
        else {
          if ((uint)pbVar2[6] + (uint)pbVar2[5] + u_val5 <= u_val1) goto LAB_0800aad2;
          u_val6 = 0x17;
        }
        goto LAB_0800aab6;
      }
    }
    else {
      if (u_val5 != 1) goto LAB_0800aad2;
      i_val3 = math_rand();
      u_val1 = i_val3 >> 3 & 0xff;
      u_val5 = (uint)pbVar2[1];
      if (u_val1 < u_val5) {
        FieldPlot_WaterPlot(arg_1,0);
        goto LAB_0800aad2;
      }
      if (pbVar2[2] + u_val5 <= u_val1) {
        if (u_val1 < (uint)pbVar2[3] + (uint)pbVar2[2] + u_val5) {
          FieldPlot_SetCropAndStage(arg_1,0x16,8);
        }
        goto LAB_0800aad2;
      }
    }
    u_val6 = 0x15;
  }
  else {
    if (u_val1 == 1) {
      i_val3 = math_rand();
      if ((i_val3 >> 3 & 0xffU) < (uint)pbVar2[7]) {
        *(byte *)((int)arg_1 + 1) = *(byte *)((int)arg_1 + 1) & 0xf0;
      }
      goto LAB_0800aad2;
    }
    if (((u_val5 & 0xff) >> 2 != 0x18) ||
       (i_val3 = math_rand(), (uint)*pbVar2 <= (i_val3 >> 3 & 0xffU))) goto LAB_0800aad2;
    u_val6 = 0x19;
  }
LAB_0800aab6:
  FieldPlot_SetCropAndStage(arg_1,u_val6,8);
LAB_0800aad2:
  if (arg_2 == 0) {
    if ((*arg_1 & 3) == 2) {
      FieldPlot_WaterPlot(arg_1,1);
    }
  }
  else if ((*arg_1 & 3) == 1) {
    FieldPlot_WaterPlot(arg_1,2);
  }
  return;
}

// =============================================================================
// Function: FieldPlot_SeasonChangeClear @ 0x0800AB08
// =============================================================================
void FieldPlot_SeasonChangeClear(uint *arg_1,int arg_2)

{
  int i_val1;
  uint u_val2;
  uint u_val3;
  
  if (arg_2 == 1) {
    u_val3 = *arg_1;
    if ((u_val3 & 0xfff) >> 8 == 0) {
      return;
    }
    u_val2 = (u_val3 & 0xff) >> 2;
    if (0x26 < u_val2) {
      return;
    }
    switch(*(uint *)(PTR_case_0800AC7C_0800ac78 + u_val2 * 4) & 0xfffffffe) {
    case 0x800ac7c:
      break;
    case 0x800ae16:
case_0800AE16:
      *(byte *)((int)arg_1 + 1) = *(byte *)((int)arg_1 + 1) & 0xf0;
      *(byte *)arg_1 = (byte)*arg_1 & 0xfc | 1;
    case 0x800af1a:
      goto case_0800AF1A;
    }
    if ((u_val3 & 0xfff) >> 8 != 1) goto LAB_0800adf8;
LAB_0800adec:
    *(byte *)((int)arg_1 + 1) = *(byte *)((int)arg_1 + 1) & 0xf0;
  }
  else {
    if (arg_2 < 2) {
      if (arg_2 != 0) {
        return;
      }
      FieldPlot_WaterPlot(arg_1,0);
      if (((*arg_1 & 0xfff) >> 8 != 0) && (u_val3 = (*arg_1 & 0xff) >> 2, u_val3 < 0x27)) {
        switch(*(uint *)(PTR_case_0800AB54_0800ab50 + u_val3 * 4) & 0xfffffffe) {
        case 0x800ab54:
          arg_1 = (uint *)&stack0x00000090;
        case 0x800abf0:
          *(byte *)((int)arg_1 + 1) = *(byte *)((int)arg_1 + 1) & 0xf0 | 7;
          *(byte *)arg_1 = (byte)*arg_1 & 0xfc | 1;
          *arg_1 = *arg_1 & 0xFFFE0FFF;
          break;
        case 0x800ac1c:
          *(byte *)((int)arg_1 + 1) = *(byte *)((int)arg_1 + 1) & 0xf0;
        }
      }
      if ((0xF03 & (ushort)*arg_1) != 0) {
        return;
      }
      i_val1 = math_rand();
      if (9 < (i_val1 >> 3 & 0xffU)) {
        return;
      }
      FieldPlot_SetCropAndStage(arg_1,0x15,8);
      return;
    }
    if (arg_2 != 2) {
      if (arg_2 != 3) {
        return;
      }
      *(byte *)arg_1 = (byte)*arg_1 | 3;
      if ((*arg_1 & 0xfff) >> 8 == 0) {
        return;
      }
      u_val3 = (*arg_1 & 0xff) >> 2;
      if (0x26 < u_val3) {
        return;
      }
      switch(*(uint *)(PTR_case_0800AE58_0800ae54 + u_val3 * 4) & 0xfffffffe) {
      case 0x800ae58:
        break;
      case 0x800af10:
        *(byte *)((int)arg_1 + 1) = *(byte *)((int)arg_1 + 1) & 0xf0;
        return;
      case 0x800af1a:
        return;
      }
      *(byte *)((int)arg_1 + 1) = *(byte *)((int)arg_1 + 1) & 0xf0 | 7;
      *arg_1 = *arg_1 & 0xFFFE0FFF;
      return;
    }
    u_val3 = *arg_1;
    if ((u_val3 & 0xfff) >> 8 == 0) {
      return;
    }
    u_val2 = (u_val3 & 0xff) >> 2;
    if (0x26 < u_val2) {
      return;
    }
    switch(*(uint *)(PTR_case_0800AD48_0800ad44 + u_val2 * 4) & 0xfffffffe) {
    case 0x800ad48:
      break;
    case 0x800ae16:
      goto case_0800AE16;
    case 0x800af1a:
      goto case_0800AF1A;
    }
    if ((u_val3 & 0xfff) >> 8 == 1) goto LAB_0800adec;
LAB_0800adf8:
    *(byte *)((int)arg_1 + 1) = *(byte *)((int)arg_1 + 1) & 0xf0 | 6;
  }
  *(byte *)arg_1 = (byte)*arg_1 & 0xfc | 1;
case_0800AF1A:
  return;
}

// =============================================================================
// Function: FieldPlot_GetTileGraphic @ 0x0800AF20
// =============================================================================
u32 FieldPlot_GetTileGraphic(uint *arg_1)

{
  uint u_val1;
  undefined4 u_val2;
  
  u_val1 = *arg_1 & 3;
  u_val2 = gRomGfx_086D6520;
  if (u_val1 != 1) {
    if (u_val1 < 2) {
      u_val2 = gRomGfx_086D6518;
      if (u_val1 == 0) goto LAB_0800af56;
    }
    else {
      u_val2 = gRomGfx_086D6528;
      if (u_val1 == 2) goto LAB_0800af56;
    }
    u_val2 = 0;
  }
LAB_0800af56:
  return u_val2;
}

// =============================================================================
// Function: FieldPlot_ResolveBorderTile @ 0x0800AF5C
// =============================================================================
u32 FieldPlot_ResolveBorderTile(uint *arg_1,uint *arg_2,uint *arg_3)

{
  uint u_val1;
  int i_val2;
  uint u_val3;
  uint u_val4;
  uint u_val5;
  undefined1 *p_uint6;
  
  p_uint6 = &stack0xffffffec;
  u_val3 = (*arg_1 & 0xff) >> 2;
  u_val5 = 0xff;
  u_val1 = (*arg_1 & 0xfff) >> 8;
  i_val2 = gRomGfx_086D6458;
  if ((u_val1 == 0) || (i_val2 = gRomGfx_086D6608, u_val1 == 1)) goto LAB_0800b0d4;
  if (u_val3 == 0x14) {
    if (u_val1 == 7) {
      u_val5 = 0xc;
    }
    else {
      if (u_val1 == 4) {
        u_val5 = 4;
      }
      else if (u_val1 < 5) {
        if (u_val1 == 3) {
          u_val5 = 0;
        }
      }
      else if (u_val1 == 5) {
        u_val5 = 8;
      }
      if ((((arg_2 == (uint *)0x0) || ((*arg_2 & 0xff) >> 2 != 0x14)) ||
          (u_val1 = (*arg_2 & 0xfff) >> 8, u_val1 == 7)) ||
         (u_val4 = (*arg_1 & 0xfff) >> 8, u_val1 < u_val4)) {
        if (((arg_3 == (uint *)0x0) || ((*arg_3 & 0xff) >> 2 != 0x14)) ||
           ((u_val1 = (*arg_3 & 0xfff) >> 8, u_val1 == 7 || (u_val1 < (*arg_1 & 0xfff) >> 8))))
        goto case_0800B0CC;
        u_val5 = u_val5 + 1;
      }
      else if (((arg_3 == (uint *)0x0) || ((*arg_3 & 0xff) >> 2 != 0x14)) ||
              ((u_val1 = (*arg_3 & 0xfff) >> 8, u_val1 == 7 || (u_val1 < u_val4)))) {
        u_val5 = u_val5 + 2;
      }
      else {
        u_val5 = u_val5 + 3;
      }
      u_val5 = u_val5 & 0xff;
    }
  }
  else if (u_val1 - 2 < 7) {
    switch(*(uint *)(PTR_case_0800AFB8_0800afb4 + (u_val1 - 2) * 4) & 0xfffffffe) {
    case 0x800afb8:
      p_uint6 = &stack0x0000000c;
    case 0x800afd4:
      u_val5 = (uint)*(byte *)(((*arg_1 & 0xff) >> 2) * 0xc + gRomData_080E93F8 + 4);
      break;
    case 0x800afe6:
      u_val5 = (uint)*(byte *)(((*arg_1 & 0xff) >> 2) * 0xc + gRomData_080E93F8 + 5);
      break;
    case 0x800aff8:
      u_val5 = (uint)*(byte *)(((*arg_1 & 0xff) >> 2) * 0xc + gRomData_080E93F8 + 6);
      break;
    case 0x800b00a:
      u_val5 = (uint)*(byte *)(((*arg_1 & 0xff) >> 2) * 0xc + gRomData_080E93F8 + 7);
      break;
    case 0x800b01c:
      u_val5 = (uint)*(byte *)(((*arg_1 & 0xff) >> 2) * 0xc + gRomData_080E93F8 + 8);
      break;
    case 0x800b02e:
      u_val5 = 1;
      if ((*arg_1 & 3) != 3) {
        u_val5 = 0;
      }
    }
  }
case_0800B0CC:
  i_val2 = u_val5 * 0xc + *(int *)(u_val3 * 0xc + gRomData_080E93F8);
LAB_0800b0d4:
  return CONCAT44(*(undefined4 *)(p_uint6 + 0x10),i_val2);
}

