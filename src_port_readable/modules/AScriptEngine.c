/* FIO-DECOMP-HMFOMT :: Port Readable Module: AScriptEngine (8 functions) */
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

/* 0x0803EE94 (52B) | AScriptEngine_Ctor (orig: func_0803EE94) | origin: pure | domain: AScriptEngine | EXACT / stanhash_elf */
/* AScriptEngine_Ctor @ 0x0803EE94 mode=THUMB size=0x34 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* AScriptEngine_Ctor @ 0x0803EE94  mode=THUMB  size=0x34  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 AScriptEngine_Ctor(undefined4 *self)

{
  undefined4 in_lr;
  
  self[0xd3] = _DAT_0803eec4;
  *self = 0;
  self[0x6d] = 0;
  LibC_memset(self + 9,0,400);
  return CONCAT44(in_lr,self);
}

/* 0x0803EEC8 (36B) | AScriptEngine_Dtor (orig: func_0803EEC8) | origin: pure | domain: AScriptEngine | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
void AScriptEngine_Dtor(int arg0,u32 arg1) {
  *(u32 *)(arg0 + 0x34c) = 0x080E7810;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x0803EEEC (236B) | AScriptEngine_Load (orig: func_0803EEEC) | origin: pure | domain: AScriptEngine | EXACT / stanhash_elf */
/* AScriptEngine_Load @ 0x0803EEEC mode=THUMB size=0xEC (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* 0x0803EFD8 (84B) | AScriptEngine_vfunc_0C (orig: func_0803EFD8) | origin: pure | domain: AScriptEngine | HIGH / vtable_algebra */
/* AScriptEngine_vfunc_0C @ 0x0803EFD8 mode=THUMB size=0x54 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* 0x0803F048 (60B) | AScriptEngine_Operand32 (orig: func_0803F048) | origin: pure | domain: AScriptEngine | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0803F03C();
u32 AScriptEngine_Operand32(int arg0,int arg1) {
  char val;
  int val2;
  val = func_0803F03C();
  arg1 = arg1 + *(int *)(arg0 + 4);
  val2 = (u32)*(u8 *)(arg1 + 1) + (u32)*(u8 *)(arg1 + 2) * 0x100 +
          (u32)*(u8 *)(arg1 + 3) * 0x10000 + (u32)*(u8 *)(arg1 + 4) * 0x1000000;
  if (val != '\0') {
    val2 = val2 + *(int *)(arg0 + 0x348);
  }
  return val2;
}

/* 0x0803F084 (48B) | AScriptEngine_Operand16 (orig: func_0803F084) | origin: pure | domain: AScriptEngine | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0803F03C();
u32 AScriptEngine_Operand16(int arg0,int arg1) {
  char val;
  int val2;
  val = func_0803F03C();
  arg1 = arg1 + *(int *)(arg0 + 4);
  val2 = (u32)*(u8 *)(arg1 + 1) + (u32)*(u8 *)(arg1 + 2) * 0x100;
  if (val != '\0') {
    val2 = val2 + *(int *)(arg0 + 0x348);
  }
  return val2;
}

/* 0x0803F0B4 (40B) | AScriptEngine_Operand8 (orig: func_0803F0B4) | origin: pure | domain: AScriptEngine | EXACT / stanhash_elf */
/* AScriptEngine_Operand8 @ 0x0803F0B4 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* 0x0803F7E0 (36B) | AScriptEngine_GetString (orig: func_0803F7E0) | origin: pure | domain: AScriptEngine | EXACT / stanhash_elf */
/* AScriptEngine_GetString @ 0x0803F7E0 mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* AScriptEngine_GetString @ 0x0803F7E0  mode=THUMB  size=0x24  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 AScriptEngine_GetString(int self,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = _DAT_0803f7f0;
  if (param_2 <= *(uint *)(self + 0x10)) {
    iVar1 = *(int *)(self + 0x18) + *(int *)(param_2 * 4 + *(int *)(self + 0x14));
  }
  return CONCAT44(in_lr,iVar1);
}

