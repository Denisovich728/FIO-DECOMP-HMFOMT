/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_08034CEC_74BC (3 functions) */
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

/* 0x0803930C (4B) | code_entities_08034CEC_74BC_vfunc_0C (orig: func_0803930C) | origin: pure | domain: code_entities_08034CEC_74BC | HIGH / vtable_algebra */
u32 code_entities_08034CEC_74BC_vfunc_0C(void) {
    return 1;
}

/* 0x0809C098 (4B) | code_entities_08034CEC_74BC_SetField_0x0C (orig: func_0809C098) | origin: pure | domain: code_entities_08034CEC_74BC | MEDIUM / graph_algebra */
/* code_entities_08034CEC_74BC_SetField_0x0C @ 0x0809C098 mode=THUMB size=0x4 (importado de Stan: actor_0809BFE8) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: actor_0809BFE8 */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* 0x0809C0D4 (112B) | code_entities_08034CEC_74BC_Sub_0809C0D4 (orig: func_0809C0D4) | origin: wip | domain: code_entities_08034CEC_74BC | MEDIUM / graph_algebra */
void code_entities_08034CEC_74BC_Sub_0809C0D4(int param_1) {
  u16 uVar1;
  u8 auStack_24 [6];
  u8 uStack_1e;
  u16 uStack_1c;
  u16 uStack_1a;
  u16 uStack_18;
  u8 auStack_14 [4];
  uVar1 = (u16)0xFFFFFC00;
  uStack_1c = uVar1 & uStack_1c & 0x3ff | 0x234;
  uStack_1a = uVar1 & uStack_1a & 0x3ff;
  uStack_18 = uVar1 & uStack_18;
  LibC_memcpy(auStack_24,&uStack_1c,6);
  uStack_1e = 0;
  func_0809B124(param_1,auStack_24);
  code_entities_08034CEC_74BC_SetField_0x0C(param_1,auStack_14);
  *(u8 *)(param_1 + 8) = *(u8 *)(param_1 + 8) & 0x80 | 100;
}

