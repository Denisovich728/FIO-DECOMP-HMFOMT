/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0800E2E4 (4 functions) */
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

/* 0x0800E2E4 (32B) | code_0800E2E4_Sub_0800E2E4 (orig: func_0800E2E4) | origin: pure | domain: code_0800E2E4 | HIGH / stanhash_map_tu */
/* code_0800E2E4_Sub_0800E2E4 @ 0x0800E2E4 mode=THUMB size=0x20 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* code_0800E2E4_Sub_0800E2E4 @ 0x0800E2E4  mode=THUMB  size=0x20  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 code_0800E2E4_Sub_0800E2E4(uint param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = _DAT_0800e2f0;
  if (param_1 < 4) {
    iVar1 = param_1 * 7 + _DAT_0800e300;
  }
  return CONCAT44(in_lr,iVar1);
}

/* 0x0800E304 (32B) | code_0800E2E4_Sub_0800E304 (orig: func_0800E304) | origin: pure | domain: code_0800E2E4 | HIGH / stanhash_map_tu */
/* code_0800E2E4_Sub_0800E304 @ 0x0800E304 mode=THUMB size=0x20 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* code_0800E2E4_Sub_0800E304 @ 0x0800E304  mode=THUMB  size=0x20  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 code_0800E2E4_Sub_0800E304(uint param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = _DAT_0800e310;
  if (param_1 < 7) {
    iVar1 = param_1 * 5 + _DAT_0800e320;
  }
  return CONCAT44(in_lr,iVar1);
}

/* 0x0800E324 (48B) | code_0800E2E4_Sub_0800E324 (orig: func_0800E324) | origin: pure | domain: code_0800E2E4 | HIGH / stanhash_map_tu */
/* code_0800E2E4_Sub_0800E324 @ 0x0800E324 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* code_0800E2E4_Sub_0800E324 @ 0x0800E324  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
ulonglong code_0800E2E4_Sub_0800E324(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (((*(byte *)(param_1 + 1) & 0x7f) >> 2 == 0) && ((*(ushort *)(param_1 + 2) & 0x1f) < 6)) {
    uVar1 = (*(byte *)(param_1 + 1) & 3) - 1;
  }
  else {
    uVar1 = (uint)*(byte *)(param_1 + 1);
  }
  return CONCAT44(in_lr,uVar1) & 0xffffffff00000003;
}

/* 0x080AAF3C (96B) | code_0800E2E4_Sub_080AAF3C (orig: func_080AAF3C) | origin: pure | domain: code_0800E2E4 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800BF14();
extern u32 func_0800C560();
extern u32 func_0800CE64();
extern u32 code_0800E2E4_Sub_0800E324();
extern u32 code_0803A8A4_Sub_0803A8A4();
u32 code_0800E2E4_Sub_080AAF3C(u32 *arg0) {
  u32 val;
  u32 val2;
  u32 val3;
  u32 val4;
  int *mem_ptr;
  mem_ptr = arg0 + 0x25;
  val = code_0800E2E4_Sub_0800E324(*mem_ptr + 0x10);
  val2 = func_0800BF14(*mem_ptr + 500);
  val3 = func_0800C560(*mem_ptr + 0x410);
  val4 = func_0800CE64(*mem_ptr + 0x5f0);
  return code_0803A8A4_Sub_0803A8A4(*arg0,val,val2,val3,val4);
}

