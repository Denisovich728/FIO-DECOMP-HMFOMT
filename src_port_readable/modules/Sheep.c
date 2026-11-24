/* FIO-DECOMP-HMFOMT :: Port Readable Module: Sheep (8 functions) */
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

/* 0x0809BE94 (40B) | Sheep_Ctor (orig: func_0809BE94) | origin: pure | domain: Sheep | EXACT / stanhash_elf */
/* Sheep_Ctor @ 0x0809BE94 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Sheep_Ctor @ 0x0809BE94  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Sheep_Ctor(int self)

{
  undefined4 in_lr;
  
  BarnAnimal_Ctor(self);
  *(byte *)(self + 0x34) = *(byte *)(self + 0x34) & 0xf8;
  return CONCAT44(in_lr,self);
}

/* 0x0809BEBC (32B) | Sheep_Ctor_BEBC (orig: func_0809BEBC) | origin: pure | domain: Sheep | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 BarnAnimal_Ctor_B870();
u32 Sheep_Ctor_BEBC(int arg0) {
  BarnAnimal_Ctor_B870();
  *(u8 *)(arg0 + 0x34) = *(s8 *)(arg0 + 0x34) & 0xf8;
  return arg0;
}

/* 0x0809BEDC (36B) | Sheep_GetGrowthStage (orig: func_0809BEDC) | origin: pure | domain: Sheep | EXACT / stanhash_elf */
/* Sheep_GetGrowthStage @ 0x0809BEDC mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Sheep_GetGrowthStage @ 0x0809BEDC  mode=THUMB  size=0x24  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Sheep_GetGrowthStage(undefined4 self)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar1 = func_0x0809b4f4();
  uVar2 = func_0x0809b220(self);
  if ((uVar1 < 0xe) && (uVar2 < 0x14)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return CONCAT44(in_lr,uVar3);
}

/* 0x0809BF00 (24B) | Sheep_IsSheared (orig: func_0809BF00) | origin: pure | domain: Sheep | EXACT / stanhash_elf */
/* Sheep_IsSheared @ 0x0809BF00 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Sheep_IsSheared @ 0x0809BF00  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Sheep_IsSheared(int self)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *(byte *)(self + 0x34) & 7;
  if ((*(byte *)(self + 0x34) & 7) != 0) {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0809BF18 (48B) | Sheep_CanBeSheared (orig: func_0809BF18) | origin: pure | domain: Sheep | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0809B8B0();
extern u32 Sheep_GetGrowthStage();
extern u32 Sheep_IsSheared();
u32 Sheep_CanBeSheared(u32 arg0) {
  char val;
  int val2;
  u32 val3;
  val3 = 0;
  val = func_0809B8B0();
  if (((val == '\0') && (val2 = Sheep_GetGrowthStage(arg0), val2 == 1)) &&
     (val = Sheep_IsSheared(arg0), val == '\0')) {
    val3 = 1;
  }
  return val3;
}

/* 0x0809BF48 (60B) | Sheep_CanBeMadePregnant (orig: func_0809BF48) | origin: pure | domain: Sheep | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0809B50C();
extern u32 func_0809B8B0();
extern u32 Sheep_GetGrowthStage();
extern u32 Sheep_IsSheared();
u32 Sheep_CanBeMadePregnant(u32 arg0) {
  char val;
  int val2;
  u32 val3;
  val3 = 0;
  val = func_0809B8B0();
  if ((((val == '\0') && (val = func_0809B50C(arg0), val == '\0')) &&
      (val2 = Sheep_GetGrowthStage(arg0), val2 == 1)) &&
     (val = Sheep_IsSheared(arg0), val == '\0')) {
    val3 = 1;
  }
  return val3;
}

/* 0x0809BF84 (48B) | Sheep_ConsumeProduct (orig: func_0809BF84) | origin: pure | domain: Sheep | EXACT / stanhash_elf */
/* Sheep_ConsumeProduct @ 0x0809BF84 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Sheep_ConsumeProduct @ 0x0809BF84  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Sheep_ConsumeProduct(int self)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(byte *)(self + 0x34) = *(byte *)(self + 0x34) | 7;
  iVar1 = Livestock_GetProductRank();
  if (iVar1 == 4) {
    uVar2 = func_0x080d11e4();
    iVar3 = func_0x080d0ed0(uVar2,0xff);
    iVar1 = 5;
    if (iVar3 != 0) {
      iVar1 = 4;
    }
  }
  return CONCAT44(in_lr,iVar1);
}

/* 0x0809BFB4 (52B) | Sheep_DayUpdate (orig: func_0809BFB4) | origin: pure | domain: Sheep | EXACT / stanhash_elf */
/* Sheep_DayUpdate @ 0x0809BFB4 mode=THUMB size=0x34 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Sheep_DayUpdate @ 0x0809BFB4  mode=THUMB  size=0x34  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Sheep_DayUpdate(int self)

{
  byte bVar1;
  undefined4 in_lr;
  
  BarnAnimal_DayUpdate(self,_DAT_0809bfe4);
  bVar1 = *(byte *)(self + 0x34);
  if ((bVar1 & 7) != 0) {
    *(byte *)(self + 0x34) = bVar1 & 0xf8 | (bVar1 & 7) - 1 & 7;
  }
  return in_lr;
}

