/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entity_08020018 (2 functions) */
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

/* 0x08020018 (32B) | code_entity_08020018_Sub_08020018 (orig: func_08020018) | origin: pure | domain: code_entity_08020018 | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 LibGcc_udivsi3();
u32 code_entity_08020018_Sub_08020018(int arg0) {
  int val;
  val = LibGcc_udivsi3(arg0 * arg0 * 0x1b0,0x0000F424);
  return val + 0x30;
}

/* 0x08020038 (40B) | code_entity_08020018_Ctor (orig: func_08020038) | origin: pure | domain: code_entity_08020018 | HIGH / vtable_algebra */
/* code_entity_08020018_Ctor @ 0x08020038 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* code_entity_08020018_Ctor @ 0x08020038  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 code_entity_08020018_Ctor(int self)

{
  undefined4 in_lr;
  
  AActorEntity_Ctor();
  *(undefined4 *)(self + 0x14) = _DAT_0802005c;
  *(undefined1 *)(self + 0x30) = 0;
  return CONCAT44(in_lr,self);
}

