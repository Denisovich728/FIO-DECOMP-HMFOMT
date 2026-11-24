/* FIO-DECOMP-HMFOMT :: Port Readable Module: CppRuntime (8 functions) */
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

/* 0x080005D4 (16B) | CppRuntime_builtin_new (orig: func_080005D4) | origin: pure | domain: CppRuntime | EXACT / runtime_bios */
/* CppRuntime_builtin_new @ 0x080005D4 mode=THUMB size=0x10 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* CppRuntime_builtin_new @ 0x080005D4  mode=THUMB  size=0x10  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 CppRuntime_builtin_new(void)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = Memory_alloc();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return CONCAT44(in_lr,iVar1);
}

/* 0x080005E4 (12B) | CppRuntime_builtin_vec_new (orig: func_080005E4) | origin: pure | domain: CppRuntime | EXACT / runtime_bios */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
u32 CppRuntime_builtin_vec_new(void) {
  return CppRuntime_builtin_new();
}

/* 0x080005F0 (12B) | CppRuntime_op_new_nothrow (orig: func_080005F0) | origin: pure | domain: CppRuntime | EXACT / runtime_bios */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Memory_alloc();
u32 CppRuntime_op_new_nothrow(void) {
  return Memory_alloc();
}

/* 0x080005FC (12B) | CppRuntime_op_vec_new_nothrow (orig: func_080005FC) | origin: pure | domain: CppRuntime | EXACT / runtime_bios */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_op_new_nothrow();
u32 CppRuntime_op_vec_new_nothrow(void) {
  return CppRuntime_op_new_nothrow();
}

/* 0x08000608 (12B) | CppRuntime_builtin_delete (orig: func_08000608) | origin: pure | domain: CppRuntime | EXACT / runtime_bios */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 LibC_free();
void CppRuntime_builtin_delete(void) {
  LibC_free();
}

/* 0x08000614 (12B) | CppRuntime_builtin_vec_delete (orig: func_08000614) | origin: pure | domain: CppRuntime | EXACT / runtime_bios */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
void CppRuntime_builtin_vec_delete(void) {
  CppRuntime_builtin_delete();
}

/* 0x08000620 (12B) | CppRuntime_op_delete_nothrow (orig: func_08000620) | origin: pure | domain: CppRuntime | EXACT / runtime_bios */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 LibC_free();
void CppRuntime_op_delete_nothrow(void) {
  LibC_free();
}

/* 0x0800062C (12B) | CppRuntime_op_vec_delete_nothrow (orig: func_0800062C) | origin: pure | domain: CppRuntime | EXACT / runtime_bios */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_op_delete_nothrow();
void CppRuntime_op_vec_delete_nothrow(void) {
  CppRuntime_op_delete_nothrow();
}

