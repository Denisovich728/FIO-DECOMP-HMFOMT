/* FIO-DECOMP-HMFOMT :: Port Readable Module: Dog (4 functions) */
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

/* 0x0809B9D4 (184B) | Dog_Ctor (orig: func_0809B9D4) | origin: pure | domain: Dog | EXACT / stanhash_elf */
/* Dog_Ctor @ 0x0809B9D4 mode=THUMB size=0xB8 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Dog_Ctor @ 0x0809B9D4  mode=THUMB  size=0xB8  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Dog_Ctor(int self,undefined4 param_2)

{
  ushort uVar1;
  undefined4 in_lr;
  undefined1 auStack_28 [6];
  undefined1 uStack_22;
  ushort uStack_20;
  ushort uStack_1e;
  ushort uStack_1c;
  
  uVar1 = (ushort)_DAT_0809ba84;
  uStack_20 = uVar1 & uStack_20 & 0x3ff | 0xf802;
  uStack_1e = uVar1 & uStack_1e & 0x3ff | 0x4805;
  uStack_1c = uVar1 & uStack_1c | 1;
  LibC_memcpy(auStack_28,&uStack_20,6);
  uStack_22 = 0;
  Pet_Ctor(self,param_2,auStack_28,1);
  *(undefined4 *)(self + 0x20) = 0;
  *(ushort *)(self + 0x2c) = uVar1 & *(ushort *)(self + 0x2c);
  *(byte *)(self + 0x2d) = *(byte *)(self + 0x2d) & 0xe3;
  *(uint *)(self + 0x2c) = *(uint *)(self + 0x2c) & _DAT_0809ba88 | 0x14000;
  *(undefined2 *)(self + 0x24) = 0;
  *(undefined1 *)(self + 0x26) = 0;
  return CONCAT44(in_lr,self);
}

/* 0x0809BA8C (168B) | Dog_Ctor_BA8C (orig: func_0809BA8C) | origin: pure | domain: Dog | EXACT / stanhash_elf */
/* Dog_Ctor_BA8C @ 0x0809BA8C mode=THUMB size=0xA8 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Dog_Ctor_BA8C @ 0x0809BA8C  mode=THUMB  size=0xA8  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Dog_Ctor_BA8C(int self)

{
  ushort uVar1;
  undefined4 in_lr;
  undefined1 auStack_24 [6];
  undefined1 uStack_1e;
  ushort uStack_1c;
  ushort uStack_1a;
  ushort uStack_18;
  
  uVar1 = (ushort)_DAT_0809bb2c;
  uStack_1c = uVar1 & uStack_1c & 0x3ff | 0xf802;
  uStack_1a = uVar1 & uStack_1a & 0x3ff | 0x4805;
  uStack_18 = uVar1 & uStack_18 | 1;
  LibC_memcpy(auStack_24,&uStack_1c,6);
  uStack_1e = 0;
  Pet_Ctor_B350(self,auStack_24,1);
  *(undefined4 *)(self + 0x20) = 0;
  *(ushort *)(self + 0x2c) = uVar1 & *(ushort *)(self + 0x2c);
  *(byte *)(self + 0x2d) = *(byte *)(self + 0x2d) & 0xe3;
  *(uint *)(self + 0x2c) = *(uint *)(self + 0x2c) & _DAT_0809bb30;
  *(undefined2 *)(self + 0x24) = 0;
  *(undefined1 *)(self + 0x26) = 0;
  return CONCAT44(in_lr,self);
}

/* 0x0809BB34 (20B) | Dog_GetGrowthStage (orig: func_0809BB34) | origin: pure | domain: Dog | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0809B220();
u32 Dog_GetGrowthStage(void) {
  u32 val;
  val = func_0809B220();
  return ((u32)(0x3b < val));
}

/* 0x0809BBA8 (40B) | Dog_DayUpdate (orig: func_0809BBA8) | origin: pure | domain: Dog | EXACT / stanhash_elf */
/* Dog_DayUpdate @ 0x0809BBA8 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Dog_DayUpdate @ 0x0809BBA8  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Dog_DayUpdate(int self)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)(self + 0x2d);
  Pet_DayUpdate(self,-(*pbVar1 & 0x1c) >> 0x1f);
  *pbVar1 = *pbVar1 & 0xe3;
  return in_lr;
}

