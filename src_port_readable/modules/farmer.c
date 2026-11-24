/* FIO-DECOMP-HMFOMT :: Port Readable Module: Farmer (1 functions) */
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

/* 0x0800E354 (396B) | Farmer_Ctor (orig: func_0800E354) | origin: pure | domain: Farmer | EXACT / stanhash_elf */
/* Farmer_Ctor @ 0x0800E354 mode=THUMB size=0x18C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Farmer_Ctor @ 0x0800E354  mode=THUMB  size=0x1B0  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Farmer_Ctor(int self,undefined4 param_2,undefined1 *param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 in_lr;
  ushort uStack_44;
  ushort uStack_42;
  ushort uStack_40;
  byte *pbStack_3c;
  byte *pbStack_38;
  ushort *puStack_34;
  byte *pbStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar2 = func_0x080d3b78(param_2);
  if (0xc < uVar2) {
    uVar2 = 0xc;
  }
  LibC_memcpy(self,param_2,uVar2);
  *(undefined1 *)(self + uVar2) = 0;
  *(undefined1 *)(self + 0x10) = 0;
  *(undefined1 *)(self + 0x20) = *param_3;
  uVar1 = (ushort)_DAT_0800e4cc;
  uStack_44 = uVar1 & uStack_44 & 0x3ff | 2;
  uStack_42 = uVar1 & uStack_42 & 0x3ff;
  uStack_40 = uVar1 & uStack_40;
  LibC_memcpy(self + 0x24,&uStack_44,6);
  *(undefined1 *)(self + 0x2a) = 0;
  iVar4 = self + 0x2c;
  iVar5 = 5;
  puVar6 = (ushort *)(self + 0x44);
  pbStack_3c = (byte *)(self + 0x47);
  pbStack_38 = (byte *)(self + 0x4b);
  puVar3 = (ushort *)(self + 0x4c);
  puStack_34 = (ushort *)(self + 0x50);
  pbStack_30 = (byte *)(self + 0x51);
  iStack_2c = self + 0x54;
  iStack_28 = self + 0x5c;
  iStack_24 = self + 0x60;
  do {
    func_0x0800ef44(iVar4);
    iVar4 = iVar4 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  *(byte *)puVar6 = *(byte *)puVar6 & 0x80;
  uVar1 = (ushort)_DAT_0800e4d0;
  *puVar6 = uVar1 & *puVar6 | 0x4b00;
  *(uint *)(self + 0x44) = *(uint *)(self + 0x44) & _DAT_0800e4d4;
  *(ushort *)(self + 0x46) = uVar1 & *(ushort *)(self + 0x46);
  *pbStack_3c = *pbStack_3c & 0x7f;
  *(uint *)(self + 0x48) = *(uint *)(self + 0x48) & 0xe0000000;
  *pbStack_38 = *pbStack_38 & 0x1f;
  *(byte *)puVar3 = *(byte *)puVar3 & 0x80;
  *puVar3 = uVar1 & *puVar3;
  *(uint *)(self + 0x4c) = *(uint *)(self + 0x4c) & _DAT_0800e4d8;
  *puStack_34 = (ushort)_DAT_0800e4dc & *puStack_34;
  *pbStack_30 = *pbStack_30 & 0x1f;
  func_0x0800f170(iStack_2c);
  ToolStack_Ctor(iStack_28);
  Rucksack_Ctor(iStack_24);
  return CONCAT44(in_lr,self);
}

