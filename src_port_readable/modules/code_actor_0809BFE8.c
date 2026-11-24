/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_actor_0809BFE8 (6 functions) */
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

/* 0x0809C060 (4B) | code_actor_0809BFE8_Sub_0809C060 (orig: func_0809C060) | origin: pure | domain: code_actor_0809BFE8 | HIGH / stanhash_map_tu */
/* code_actor_0809BFE8_Sub_0809C060 @ 0x0809C060 mode=THUMB size=0x4 (importado de Stan: actor_0809BFE8) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: actor_0809BFE8 */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* 0x0809C068 (48B) | code_actor_0809BFE8_Sub_0809C068 (orig: func_0809C068) | origin: pure | domain: code_actor_0809BFE8 | HIGH / stanhash_map_tu */
/* code_actor_0809BFE8_Sub_0809C068 @ 0x0809C068 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* code_actor_0809BFE8_Sub_0809C068 @ 0x0809C068  mode=THUMB  size=0x6C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 code_actor_0809BFE8_Sub_0809C068(int param_1,int param_2)

{
  undefined4 in_lr;
  
  param_2 = (*(byte *)(param_1 + 8) & 0x7f) - param_2;
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (100 < param_2) {
    param_2 = 100;
  }
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0x80 | (byte)param_2 & 0x7f;
  return in_lr;
}

/* 0x0809C0A0 (12B) | code_actor_0809BFE8_SetField_0x10 (orig: func_0809C0A0) | origin: pure | domain: code_actor_0809BFE8 | HIGH / stanhash_map_tu */
void code_actor_0809BFE8_SetField_0x10(u32 *arg0, u32 *arg1) {
    arg0[4] = arg1[0];
    arg0[3] = 1;
}

/* 0x0809C0AC (16B) | code_actor_0809BFE8_SetField_0x10_C0AC (orig: func_0809C0AC) | origin: pure | domain: code_actor_0809BFE8 | HIGH / stanhash_map_tu */
void code_actor_0809BFE8_SetField_0x10_C0AC(u32 *arg0, u32 *arg1) {
    u32 y = arg1[1], x = arg1[0];
    arg0[4] = x;
    arg0[5] = y;
    arg0[3] = 2;
}

/* 0x0809C0BC (12B) | code_actor_0809BFE8_SetField_0x10_C0BC (orig: func_0809C0BC) | origin: pure | domain: code_actor_0809BFE8 | HIGH / stanhash_map_tu */
void code_actor_0809BFE8_SetField_0x10_C0BC(u32 *arg0, u32 *arg1) {
    arg0[4] = arg1[0];
    arg0[3] = 3;
}

/* 0x0809C38C (48B) | code_actor_0809BFE8_Sub_0809C38C (orig: func_0809C38C) | origin: pure | domain: code_actor_0809BFE8 | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 code_actor_0809BFE8_Sub_0809C38C(int arg0) {
  u32 val;
  val = 0;
  if ((((*(char *)(arg0 + 7) != '\0') && (*(char *)(arg0 + 6) != '\0')) &&
      (*(char *)(arg0 + 8) != '\0')) &&
     ((*(char *)(arg0 + 9) != '\0' && (*(char *)(arg0 + 10) != '\0')))) {
    val = -(u32)*(u8 *)(arg0 + 0xb) >> 0x1f;
  }
  return val;
}

