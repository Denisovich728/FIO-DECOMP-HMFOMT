/* FIO-DECOMP-HMFOMT :: Port Readable Module: BarnAnimal (6 functions) */
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

/* 0x0809B828 (72B) | BarnAnimal_Ctor (orig: func_0809B828) | origin: pure | domain: BarnAnimal | EXACT / stanhash_elf */
/* BarnAnimal_Ctor @ 0x0809B828 mode=THUMB size=0x48 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* BarnAnimal_Ctor @ 0x0809B828  mode=THUMB  size=0x48  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 BarnAnimal_Ctor(int self)

{
  undefined4 in_lr;
  
  Livestock_Ctor(self);
  *(byte *)(self + 0x24) = *(byte *)(self + 0x24) & 0xc0;
  *(ushort *)(self + 0x24) = (ushort)_DAT_0809b86c & *(ushort *)(self + 0x24);
  *(undefined4 *)(self + 0x28) = 0;
  *(undefined2 *)(self + 0x2c) = 0;
  *(undefined1 *)(self + 0x2e) = 0;
  return CONCAT44(in_lr,self);
}

/* 0x0809B870 (64B) | BarnAnimal_Ctor_B870 (orig: func_0809B870) | origin: pure | domain: BarnAnimal | EXACT / stanhash_elf */
/* BarnAnimal_Ctor_B870 @ 0x0809B870 mode=THUMB size=0x40 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* BarnAnimal_Ctor_B870 @ 0x0809B870  mode=THUMB  size=0x4C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 BarnAnimal_Ctor_B870(int self)

{
  undefined4 in_lr;
  
  Livestock_Ctor_B4A4();
  *(byte *)(self + 0x24) = *(byte *)(self + 0x24) & 0xc0;
  *(ushort *)(self + 0x24) = (ushort)_DAT_0809b8ac & *(ushort *)(self + 0x24);
  *(undefined4 *)(self + 0x28) = 0;
  *(undefined2 *)(self + 0x2c) = 0;
  *(undefined1 *)(self + 0x2e) = 0;
  return CONCAT44(in_lr,self);
}

/* 0x0809B8BC (24B) | BarnAnimal_GetDaysPregnant (orig: func_0809B8BC) | origin: pure | domain: BarnAnimal | EXACT / stanhash_elf */
/* BarnAnimal_GetDaysPregnant @ 0x0809B8BC mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* BarnAnimal_GetDaysPregnant @ 0x0809B8BC  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 BarnAnimal_GetDaysPregnant(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(byte *)(param_1 + 0x24) & 0x3f) >> 1;
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0809B8D4 (28B) | BarnAnimal_GetDaysPregnantHealthy (orig: func_0809B8D4) | origin: pure | domain: BarnAnimal | EXACT / stanhash_elf */
/* BarnAnimal_GetDaysPregnantHealthy @ 0x0809B8D4 mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* BarnAnimal_GetDaysPregnantHealthy @ 0x0809B8D4  mode=THUMB  size=0x1C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 BarnAnimal_GetDaysPregnantHealthy(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(ushort *)(param_1 + 0x24) & 0x7ff) >> 6;
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0809B8F0 (12B) | BarnAnimal_SetFed (orig: func_0809B8F0) | origin: pure | domain: BarnAnimal | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Livestock_SetFed();
void BarnAnimal_SetFed(void) {
  Livestock_SetFed();
}

/* 0x0809B970 (100B) | BarnAnimal_DayUpdate (orig: func_0809B970) | origin: pure | domain: BarnAnimal | EXACT / stanhash_elf */
/* BarnAnimal_DayUpdate @ 0x0809B970 mode=THUMB size=0x64 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* BarnAnimal_DayUpdate @ 0x0809B970  mode=THUMB  size=0x64  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 BarnAnimal_DayUpdate(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  Livestock_DayUpdate();
  cVar2 = func_0x0809b8b0(param_1);
  if (cVar2 != '\0') {
    bVar1 = *(byte *)(param_1 + 0x24);
    uVar3 = (bVar1 & 0x3f) >> 1;
    if (uVar3 < 0x1f) {
      *(byte *)(param_1 + 0x24) = bVar1 & 0xc1 | (byte)((uVar3 + 1 & 0x1f) << 1);
    }
    cVar2 = func_0x0809b50c(param_1);
    if (cVar2 == '\0') {
      uVar3 = (*(ushort *)(param_1 + 0x24) & 0x7ff) >> 6;
      if (uVar3 < 0x1f) {
        *(ushort *)(param_1 + 0x24) =
             (ushort)_DAT_0809b9d0 & *(ushort *)(param_1 + 0x24) | (ushort)((uVar3 + 1 & 0x1f) << 6)
        ;
      }
    }
  }
  return in_lr;
}

