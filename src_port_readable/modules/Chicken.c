/* FIO-DECOMP-HMFOMT :: Port Readable Module: Chicken (7 functions) */
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

/* 0x0809BC64 (40B) | Chicken_Ctor (orig: func_0809BC64) | origin: pure | domain: Chicken | EXACT / stanhash_elf */
/* Chicken_Ctor @ 0x0809BC64 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Chicken_Ctor @ 0x0809BC64  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Chicken_Ctor(int self)

{
  undefined4 in_lr;
  
  Livestock_Ctor(self);
  *(undefined4 *)(self + 0x24) = 0;
  *(undefined2 *)(self + 0x28) = 0;
  *(undefined1 *)(self + 0x2a) = 0;
  return CONCAT44(in_lr,self);
}

/* 0x0809BC8C (32B) | Chicken_Ctor_BC8C (orig: func_0809BC8C) | origin: pure | domain: Chicken | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Livestock_Ctor_B4A4();
u32 Chicken_Ctor_BC8C(int arg0) {
  Livestock_Ctor_B4A4();
  *(u32 *)(arg0 + 0x24) = 0;
  *(u16 *)(arg0 + 0x28) = 0;
  *(u8 *)(arg0 + 0x2a) = 0;
  return arg0;
}

/* 0x0809BCAC (20B) | Chicken_GetGrowthStage (orig: func_0809BCAC) | origin: pure | domain: Chicken | EXACT / stanhash_elf */
/* Chicken_GetGrowthStage @ 0x0809BCAC mode=THUMB size=0x14 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Chicken_GetGrowthStage @ 0x0809BCAC  mode=THUMB  size=0x14  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Chicken_GetGrowthStage(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = func_0x0809b220();
  return CONCAT44(in_lr,(uint)(6 < uVar1));
}

/* 0x0809BCC0 (48B) | Chicken_Sub_0809BCC0 (orig: func_0809BCC0) | origin: pure | domain: Chicken | HIGH / stanhash_elf_class */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0809B504();
extern u32 func_0809B50C();
extern u32 Chicken_GetGrowthStage();
u32 Chicken_Sub_0809BCC0(u32 arg0) {
  char val;
  int val2;
  u32 val3;
  val3 = 0;
  val2 = Chicken_GetGrowthStage();
  if (((val2 == 1) && (val = func_0809B50C(arg0), val == '\0')) &&
     (val = func_0809B504(arg0), val == '\0')) {
    val3 = 1;
  }
  return val3;
}

/* 0x0809BCF0 (12B) | Chicken_SetFed (orig: func_0809BCF0) | origin: pure | domain: Chicken | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Livestock_SetFed();
void Chicken_SetFed(void) {
  Livestock_SetFed();
}

/* 0x0809BCFC (36B) | Chicken_ConsumeProduct (orig: func_0809BCFC) | origin: pure | domain: Chicken | EXACT / stanhash_elf */
/* Chicken_ConsumeProduct @ 0x0809BCFC mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Chicken_ConsumeProduct @ 0x0809BCFC  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Chicken_ConsumeProduct(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
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

/* 0x0809BD38 (16B) | Chicken_DayUpdate (orig: func_0809BD38) | origin: pure | domain: Chicken | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Livestock_DayUpdate();
void Chicken_DayUpdate(u32 arg0) {
  Livestock_DayUpdate(arg0,0x08103660);
}

