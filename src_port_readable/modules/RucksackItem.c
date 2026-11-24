/* FIO-DECOMP-HMFOMT :: Port Readable Module: RucksackItem (6 functions) */
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

/* 0x0800F004 (60B) | RucksackItem_Ctor (orig: func_0800F004) | origin: pure | domain: RucksackItem | EXACT / stanhash_elf */
/* RucksackItem_Ctor @ 0x0800F004 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* RucksackItem_Ctor @ 0x0800F004  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 RucksackItem_Ctor(byte *self,undefined4 param_2)

{
  byte bVar1;
  undefined4 in_lr;
  undefined4 uStack_c;
  
  *self = *self & 0xfc;
  uStack_c = param_2;
  bVar1 = func_0x0800dcb4(&uStack_c);
  self[1] = bVar1;
  bVar1 = Food_GetStaminaBonus(&uStack_c);
  self[2] = bVar1;
  bVar1 = Food_GetFatigueBonus(&uStack_c);
  self[3] = bVar1;
  return CONCAT44(in_lr,self);
}

/* 0x0800F040 (44B) | RucksackItem_Ctor_F040 (orig: func_0800F040) | origin: pure | domain: RucksackItem | EXACT / stanhash_elf */
/* RucksackItem_Ctor_F040 @ 0x0800F040 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* RucksackItem_Ctor_F040 @ 0x0800F040  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 RucksackItem_Ctor_F040(byte *self,undefined1 param_2)

{
  byte bVar1;
  undefined4 in_lr;
  undefined1 auStack_c [4];
  
  *self = *self & 0xfd | 1;
  auStack_c[0] = param_2;
  bVar1 = func_0x0800df54(auStack_c);
  self[1] = bVar1;
  return CONCAT44(in_lr,self);
}

/* 0x0800F06C (48B) | RucksackItem_IsEmpty (orig: func_0800F06C) | origin: pure | domain: RucksackItem | EXACT / stanhash_elf */
/* RucksackItem_IsEmpty @ 0x0800F06C mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* RucksackItem_IsEmpty @ 0x0800F06C  mode=THUMB  size=0x38  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 RucksackItem_IsEmpty(byte *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*param_1 & 1) == 0) {
    uVar1 = 0;
    if (param_1[1] < 0xab) goto LAB_0800f098;
  }
  else {
    if ((*param_1 & 1) != 1) {
      uVar1 = 1;
      goto LAB_0800f098;
    }
    uVar1 = 0;
    if (param_1[1] < 0x5f) goto LAB_0800f098;
  }
  uVar1 = 1;
LAB_0800f098:
  return CONCAT44(in_lr,uVar1);
}

/* 0x0800F0A4 (68B) | RucksackItem_GetFood (orig: func_0800F0A4) | origin: pure | domain: RucksackItem | EXACT / stanhash_elf */
/* RucksackItem_GetFood @ 0x0800F0A4 mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* RucksackItem_GetFood @ 0x0800F0A4  mode=THUMB  size=0x44  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 RucksackItem_GetFood(undefined4 param_1,byte *param_2)

{
  undefined4 in_lr;
  undefined1 auStack_10 [4];
  
  if ((*param_2 & 1) == 0) {
    func_0x0800dca8(auStack_10,param_2[1]);
    Food_AddBonuses(auStack_10,(int)(char)param_2[2],(int)(char)param_2[3]);
    LibC_memcpy(param_1,auStack_10,3);
  }
  else {
    func_0x0800dca8(param_1,0xab);
  }
  return CONCAT44(in_lr,param_1);
}

/* 0x0800F0E8 (52B) | RucksackItem_GetArticle (orig: func_0800F0E8) | origin: pure | domain: RucksackItem | EXACT / stanhash_elf */
/* RucksackItem_GetArticle @ 0x0800F0E8 mode=THUMB size=0x34 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* RucksackItem_GetArticle @ 0x0800F0E8  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 RucksackItem_GetArticle(byte *param_1)

{
  undefined4 in_lr;
  byte bStack_c;
  byte abStack_b [3];
  
  if ((*param_1 & 1) == 0) {
    func_0x0800df50(&bStack_c,0x5f);
  }
  else {
    func_0x0800df50(abStack_b,param_1[1]);
    bStack_c = abStack_b[0];
  }
  return CONCAT44(in_lr,(uint)bStack_c);
}

/* 0x0800F124 (76B) | RucksackItem_TryWrap (orig: func_0800F124) | origin: pure | domain: RucksackItem | EXACT / stanhash_elf */
/* RucksackItem_TryWrap @ 0x0800F124 mode=THUMB size=0x4C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

