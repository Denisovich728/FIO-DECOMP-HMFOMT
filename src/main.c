// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: MAIN (3 functions)
// Description: Boot vectors, crt0 startup and AgbMain primary loop
// =============================================================================

#include "../include/global.h"

// =============================================================================
// Function: GBA_Header_Boot @ 0x08000000
// =============================================================================
/* GBA Cartridge Boot Vector */

void GBA_Header_Boot(void)

{
  uint u_val1;
  int *p_int2;
  code *init_func;
  bool b_flag3;
  
  software_interrupt(0x10000);
  REG_DMA3DAD = uRam0800015c;
  u_val1 = (iRam08000160 - uRam0800015c) + 3 >> 2;
  if (u_val1 != 0) {
    REG_DMA3SAD = uRam08000164;
    Ram040000dc = u_val1 | 0x84000000;
  }
  (*pcRam08000170)(_ASSET_BLOCK_08000168,iRam0800016c - _ASSET_BLOCK_08000168);
  p_int2 = piRam08000174 + 1;
  b_flag3 = *piRam08000174 == 0;
  while( true ) {
    if (!b_flag3) {
      init_func = (code *)*p_int2;
      b_flag3 = init_func == (code *)0x0;
      p_int2 = p_int2 + 1;
    }
    if (!b_flag3) break;
    if (b_flag3) {
      (*pcRam08000178)();
      return;
    }
  }
  (*init_func)();
  return;
}

// =============================================================================
// Function: crt0_entry @ 0x080000C0
// =============================================================================
/* C Runtime Entry Point */

void crt0_entry(void)

{
  uint u_val1;
  int *p_int2;
  code *init_func;
  bool b_flag3;
  
  software_interrupt(0x10000);
  REG_DMA3DAD = uRam0800015c;
  u_val1 = (iRam08000160 - uRam0800015c) + 3 >> 2;
  if (u_val1 != 0) {
    REG_DMA3SAD = uRam08000164;
    Ram040000dc = u_val1 | 0x84000000;
  }
  (*pcRam08000170)(_ASSET_BLOCK_08000168,iRam0800016c - _ASSET_BLOCK_08000168);
  p_int2 = piRam08000174 + 1;
  b_flag3 = *piRam08000174 == 0;
  while( true ) {
    if (!b_flag3) {
      init_func = (code *)*p_int2;
      b_flag3 = init_func == (code *)0x0;
      p_int2 = p_int2 + 1;
    }
    if (!b_flag3) break;
    if (b_flag3) {
      (*pcRam08000178)();
      return;
    }
  }
  (*init_func)();
  return;
}

// =============================================================================
// Function: MainLoop_Callback @ 0x08000240
// =============================================================================
void MainLoop_Callback(void)

{
  ushort u_val1;
  ushort u_val2;
  int i_val3;
  
  Interrupt_WaitForVBlank(0xFFFF);
  i_val3 = REG_DMA0SAD;
  REG_DISPCNT = 0x80;
  REG_SOUNDCNT_X._0_1_ = 0;
  u_val1 = *REG_KEYINPUT;
  while ((~u_val1 & 0xf) != 0) {
    u_val1 = *REG_KEYINPUT;
  }
  u_val1 = (ushort)0xC5FF;
  *(ushort *)(REG_DMA0SAD + 10) = u_val1 & *(ushort *)(REG_DMA0SAD + 10);
  u_val2 = (ushort)0x7FFF;
  *(ushort *)(i_val3 + 10) = u_val2 & *(ushort *)(i_val3 + 10);
  *(ushort *)(i_val3 + 0x16) = u_val1 & *(ushort *)(i_val3 + 0x16);
  *(ushort *)(i_val3 + 0x16) = u_val2 & *(ushort *)(i_val3 + 0x16);
  *(ushort *)(i_val3 + 0x22) = u_val1 & *(ushort *)(i_val3 + 0x22);
  *(ushort *)(i_val3 + 0x22) = u_val2 & *(ushort *)(i_val3 + 0x22);
  i_val3 = REG_DMA3SAD;
  *(ushort *)(REG_DMA3SAD + 10) = u_val1 & *(ushort *)(REG_DMA3SAD + 10);
  *(ushort *)(i_val3 + 10) = u_val2 & *(ushort *)(i_val3 + 10);
  Interrupt_DisableMaster(0xff);
  do {
  } while( true );
}

