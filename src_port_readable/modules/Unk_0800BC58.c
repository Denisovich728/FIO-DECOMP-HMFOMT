/* FIO-DECOMP-HMFOMT :: Port Readable Module: Unk_0800BC58 (6 functions) */
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

/* 0x0800BCB0 (32B) | Unk_0800BC58_Mark_Letter_As_Read (orig: func_0800BCB0) | origin: pure | domain: Unk_0800BC58 | EXACT / fomt_studio_dispatch */
#define true 1
#define false 0
#define NULL ((void *)0)
void Unk_0800BC58_Mark_Letter_As_Read(int arg0,int arg1) {
  u32 val;
  u32 *mem_ptr;
  val = arg1 - 0x4d;
  if (val < 0x3c) {
    mem_ptr = (u32 *)(arg0 + (val >> 5) * 4);
    *mem_ptr = *mem_ptr | 1 << (val & 0x1f);
  }
}

/* 0x0800BCD0 (68B) | Unk_0800BC58_Func0F9 (orig: func_0800BCD0) | origin: pure | domain: Unk_0800BC58 | HIGH / fomt_studio_dispatch */
/* Unk_0800BC58_Func0F9 @ 0x0800BCD0 mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Unk_0800BC58_Func0F9 @ 0x0800BCD0  mode=THUMB  size=0x44  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Unk_0800BC58_Func0F9(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 in_lr;
  
  uVar1 = param_2 - 0x4d;
  if (uVar1 < 0x3c) {
    puVar2 = (uint *)(param_1 + (uVar1 >> 5) * 4);
    *puVar2 = *puVar2 & ~(1 << (uVar1 & 0x1f));
    puVar2 = (uint *)(param_1 + 8 + (uVar1 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << (uVar1 & 0x1f);
  }
  return in_lr;
}

/* 0x0800BD14 (44B) | Unk_0800BC58_Func0F6 (orig: func_0800BD14) | origin: pure | domain: Unk_0800BC58 | HIGH / fomt_studio_dispatch */
/* Unk_0800BC58_Func0F6 @ 0x0800BD14 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Unk_0800BC58_Func0F6 @ 0x0800BD14  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Unk_0800BC58_Func0F6(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = param_2 - 0x4d;
  uVar1 = 0;
  if (uVar2 < 0x3c) {
    uVar1 = *(uint *)(param_1 + (uVar2 >> 5) * 4) & 1 << (uVar2 & 0x1f);
    uVar1 = (-uVar1 | uVar1) >> 0x1f;
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0800BD40 (44B) | Unk_0800BC58_Schedule_Next_Event (orig: func_0800BD40) | origin: pure | domain: Unk_0800BC58 | EXACT / fomt_studio_dispatch */
/* Unk_0800BC58_Schedule_Next_Event @ 0x0800BD40 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Unk_0800BC58_Schedule_Next_Event @ 0x0800BD40  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Unk_0800BC58_Schedule_Next_Event(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = param_2 - 0x4d;
  uVar1 = 0;
  if (uVar2 < 0x3c) {
    uVar1 = *(uint *)(param_1 + 8 + (uVar2 >> 5) * 4) & 1 << (uVar2 & 0x1f);
    uVar1 = (-uVar1 | uVar1) >> 0x1f;
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0800BD6C (128B) | Unk_0800BC58_Func0FA (orig: func_0800BD6C) | origin: pure | domain: Unk_0800BC58 | HIGH / fomt_studio_dispatch */
/* Unk_0800BC58_Func0FA @ 0x0800BD6C mode=THUMB size=0x80 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Unk_0800BC58_Func0FA @ 0x0800BD6C  mode=THUMB  size=0x80  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Unk_0800BC58_Func0FA(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  puVar1 = param_1 + 2;
  iVar3 = 0;
  do {
    uVar2 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = (uVar2 & _DAT_0800bdd8) + (uVar2 >> 1 & _DAT_0800bdd8);
    uVar2 = (uVar2 & _DAT_0800bddc) + (uVar2 >> 2 & _DAT_0800bddc);
    uVar2 = (uVar2 & _DAT_0800bde0) + (uVar2 >> 4 & _DAT_0800bde0);
    uVar2 = (uVar2 & _DAT_0800bde4) + (uVar2 >> 8 & _DAT_0800bde4);
    iVar3 = iVar3 + (uVar2 & _DAT_0800bde8) + (uVar2 >> 0x10 & _DAT_0800bde8);
  } while (param_1 != puVar1);
  return CONCAT44(in_lr,iVar3);
}

/* 0x0800BDEC (132B) | Unk_0800BC58_Print_TV_Message (orig: func_0800BDEC) | origin: pure | domain: Unk_0800BC58 | EXACT / fomt_studio_dispatch */
/* Unk_0800BC58_Print_TV_Message @ 0x0800BDEC mode=THUMB size=0x84 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Unk_0800BC58_Print_TV_Message @ 0x0800BDEC  mode=THUMB  size=0x130  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Unk_0800BC58_Print_TV_Message(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  puVar2 = (uint *)(param_1 + 8);
  iVar3 = 0;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    uVar1 = (uVar1 & _DAT_0800be5c) + (uVar1 >> 1 & _DAT_0800be5c);
    uVar1 = (uVar1 & _DAT_0800be60) + (uVar1 >> 2 & _DAT_0800be60);
    uVar1 = (uVar1 & _DAT_0800be64) + (uVar1 >> 4 & _DAT_0800be64);
    uVar1 = (uVar1 & _DAT_0800be68) + (uVar1 >> 8 & _DAT_0800be68);
    iVar3 = iVar3 + (uVar1 & _DAT_0800be6c) + (uVar1 >> 0x10 & _DAT_0800be6c);
  } while (puVar2 != (uint *)(param_1 + 0x10));
  return CONCAT44(in_lr,iVar3);
}

