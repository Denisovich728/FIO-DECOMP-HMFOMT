/* FIO-DECOMP-HMFOMT :: Port Readable Module: Pet (5 functions) */
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

/* 0x0809B32C (36B) | Pet_Ctor (orig: func_0809B32C) | origin: pure | domain: Pet | EXACT / stanhash_elf */
/* Pet_Ctor @ 0x0809B32C mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Pet_Ctor @ 0x0809B32C  mode=THUMB  size=0x24  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Pet_Ctor(int self)

{
  undefined4 in_lr;
  
  Animal_Ctor();
  *(undefined1 *)(self + 0x1c) = 0;
  *(byte *)(self + 0x1d) = *(byte *)(self + 0x1d) & 0xfc;
  return CONCAT44(in_lr,self);
}

/* 0x0809B350 (36B) | Pet_Ctor_B350 (orig: func_0809B350) | origin: pure | domain: Pet | EXACT / stanhash_elf */
/* Pet_Ctor_B350 @ 0x0809B350 mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Pet_Ctor_B350 @ 0x0809B350  mode=THUMB  size=0x38  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Pet_Ctor_B350(int self)

{
  undefined4 in_lr;
  
  Animal_Ctor_B1A4();
  *(undefined1 *)(self + 0x1c) = 0;
  *(byte *)(self + 0x1d) = *(byte *)(self + 0x1d) & 0xfc;
  return CONCAT44(in_lr,self);
}

/* 0x0809B388 (28B) | Pet_AddAdequacy (orig: func_0809B388) | origin: pure | domain: Pet | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
void Pet_AddAdequacy(int arg0,int arg1) {
  u32 val;
  val = (u32)*(u8 *)(arg0 + 0x1c) + arg1;
  if ((int)val < 0) {
    val = 0;
  }
  else if (0xfa < val) {
    val = 0xfa;
  }
  *(char *)(arg0 + 0x1c) = (char)val;
}

/* 0x0809B3A4 (12B) | Pet_SubtractAdequacy (orig: func_0809B3A4) | origin: pure | domain: Pet | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Pet_AddAdequacy();
void Pet_SubtractAdequacy(u32 arg0,int arg1) {
  Pet_AddAdequacy(arg0,-arg1);
}

/* 0x0809B3C8 (140B) | Pet_DayUpdate (orig: func_0809B3C8) | origin: pure | domain: Pet | EXACT / stanhash_elf */
/* Pet_DayUpdate @ 0x0809B3C8 mode=THUMB size=0x8C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Pet_DayUpdate @ 0x0809B3C8  mode=THUMB  size=0x8C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Pet_DayUpdate(int param_1,char param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  cVar1 = func_0x0809b230();
  cVar2 = func_0x0809b238(param_1);
  Animal_DayUpdate(param_1);
  if ((((param_2 == '\0') && (cVar1 == '\0')) && (cVar2 == '\0')) &&
     (((*(byte *)(param_1 + 0x1d) & 1) == 0 &&
      (-1 < (int)((uint)*(byte *)(param_1 + 0x1d) * 0x40000000))))) {
    uVar3 = func_0x080d11e4();
    iVar4 = func_0x080d0ed0(uVar3,100);
    if (iVar4 < 0x1e) {
      Animal_SubtractAffection(param_1,1);
    }
  }
  if ((*(byte *)(param_1 + 0x1d) & 1) != 0) {
    Pet_AddAdequacy(param_1,1);
    *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) & 0xfe;
  }
  if ((int)((uint)*(byte *)(param_1 + 0x1d) * 0x40000000) < 0) {
    Animal_AddAffection(param_1,1);
    *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) & 0xfd;
  }
  return in_lr;
}

