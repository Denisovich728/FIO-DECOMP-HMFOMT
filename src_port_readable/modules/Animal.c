/* FIO-DECOMP-HMFOMT :: Port Readable Module: Animal (9 functions) */
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

/* 0x0809B12C (120B) | Animal_Ctor (orig: func_0809B12C) | origin: pure | domain: Animal | EXACT / stanhash_elf */
/* Animal_Ctor @ 0x0809B12C mode=THUMB size=0x78 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Animal_Ctor @ 0x0809B12C  mode=THUMB  size=0x78  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Animal_Ctor(int self,undefined4 param_2,undefined4 param_3,ushort param_4)

{
  uint uVar1;
  undefined4 in_lr;
  
  Actor_Ctor(self,param_3);
  uVar1 = func_0x080d3b78(param_2);
  if (0xc < uVar1) {
    uVar1 = 0xc;
  }
  LibC_memcpy(self + 8,param_2,uVar1);
  *(undefined1 *)(self + 8 + uVar1) = 0;
  *(ushort *)(self + 0x18) =
       (ushort)_DAT_0809b19c & *(ushort *)(self + 0x18) | param_4 & (ushort)_DAT_0809b198;
  *(byte *)(self + 0x19) = *(byte *)(self + 0x19) & 0xe3;
  *(uint *)(self + 0x18) = *(uint *)(self + 0x18) & _DAT_0809b1a0;
  return CONCAT44(in_lr,self);
}

/* 0x0809B1A4 (80B) | Animal_Ctor_B1A4 (orig: func_0809B1A4) | origin: pure | domain: Animal | EXACT / stanhash_elf */
/* Animal_Ctor_B1A4 @ 0x0809B1A4 mode=THUMB size=0x50 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Animal_Ctor_B1A4 @ 0x0809B1A4  mode=THUMB  size=0x50  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Animal_Ctor_B1A4(int self,undefined4 param_2,ushort param_3)

{
  undefined4 in_lr;
  
  Actor_Ctor();
  *(undefined1 *)(self + 8) = 0;
  *(ushort *)(self + 0x18) =
       (ushort)_DAT_0809b1ec & *(ushort *)(self + 0x18) | param_3 & (ushort)_DAT_0809b1e8;
  *(byte *)(self + 0x19) = *(byte *)(self + 0x19) & 0xe3;
  *(uint *)(self + 0x18) = *(uint *)(self + 0x18) & _DAT_0809b1f0;
  return CONCAT44(in_lr,self);
}

/* 0x0809B1F4 (36B) | Animal_GetName (orig: func_0809B1F4) | origin: pure | domain: Animal | EXACT / stanhash_elf */
/* Animal_GetName @ 0x0809B1F4 mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Animal_GetName @ 0x0809B1F4  mode=THUMB  size=0x4C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Animal_GetName(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = _DAT_0809b20c;
  if (*(char *)(param_1 + 8) != '\0') {
    iVar1 = param_1 + 8;
  }
  return CONCAT44(in_lr,iVar1);
}

/* 0x0809B240 (44B) | Animal_SetName (orig: func_0809B240) | origin: pure | domain: Animal | EXACT / stanhash_elf */
/* Animal_SetName @ 0x0809B240 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Animal_SetName @ 0x0809B240  mode=THUMB  size=0x38  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Animal_SetName(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = func_0x080d3b78(param_2);
  if (0xc < uVar1) {
    uVar1 = 0xc;
  }
  LibC_memcpy(param_1 + 8,param_2,uVar1);
  *(undefined1 *)(param_1 + 8 + uVar1) = 0;
  return in_lr;
}

/* 0x0809B278 (24B) | Animal_SetBrushed (orig: func_0809B278) | origin: pure | domain: Animal | EXACT / stanhash_elf */
/* Animal_SetBrushed @ 0x0809B278 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Animal_SetBrushed @ 0x0809B278  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Animal_SetBrushed(int param_1)

{
  undefined4 in_lr;
  
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x19) * 0x10000000)) {
    *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 8;
  }
  return in_lr;
}

/* 0x0809B290 (24B) | Animal_SetTalkedTo (orig: func_0809B290) | origin: pure | domain: Animal | EXACT / stanhash_elf */
/* Animal_SetTalkedTo @ 0x0809B290 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Animal_SetTalkedTo @ 0x0809B290  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Animal_SetTalkedTo(int param_1)

{
  undefined4 in_lr;
  
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x19) * 0x8000000)) {
    *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 0x10;
  }
  return in_lr;
}

/* 0x0809B2A8 (52B) | Animal_AddAffection (orig: func_0809B2A8) | origin: pure | domain: Animal | EXACT / stanhash_elf */
/* Animal_AddAffection @ 0x0809B2A8 mode=THUMB size=0x34 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Animal_AddAffection @ 0x0809B2A8  mode=THUMB  size=0x34  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Animal_AddAffection(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = ((*(uint *)(param_1 + 0x18) & 0x1fffff) >> 0xd) + param_2;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if (0xfa < uVar1) {
    uVar1 = 0xfa;
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & _DAT_0809b2d8 | (uVar1 & 0xff) << 0xd;
  return in_lr;
}

/* 0x0809B2DC (12B) | Animal_SubtractAffection (orig: func_0809B2DC) | origin: pure | domain: Animal | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Animal_AddAffection();
void Animal_SubtractAffection(u32 arg0,int arg1) {
  Animal_AddAffection(arg0,-arg1);
}

/* 0x0809B2E8 (68B) | Animal_DayUpdate (orig: func_0809B2E8) | origin: pure | domain: Animal | EXACT / stanhash_elf */
/* Animal_DayUpdate @ 0x0809B2E8 mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Animal_DayUpdate @ 0x0809B2E8  mode=THUMB  size=0x44  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Animal_DayUpdate(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)(param_1 + 0x18) & 0x3ff;
  if (uVar1 <= _DAT_0809b320) {
    *(ushort *)(param_1 + 0x18) =
         (ushort)_DAT_0809b328 & *(ushort *)(param_1 + 0x18) |
         (short)uVar1 + 1U & (ushort)_DAT_0809b324;
  }
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xe7;
  return in_lr;
}

