/* FIO-DECOMP-HMFOMT :: Port Readable Module: FoodStack (7 functions) */
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

/* 0x0800DE68 (24B) | FoodStack_Ctor (orig: func_0800DE68) | origin: pure | domain: FoodStack | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800DCA8();
u32 FoodStack_Ctor(int arg0) {
  func_0800DCA8(arg0,0xab);
  *(u8 *)(arg0 + 3) = 0;
  return arg0;
}

/* 0x0800DE80 (56B) | FoodStack_Ctor_DE80 (orig: func_0800DE80) | origin: pure | domain: FoodStack | EXACT / stanhash_elf */
/* FoodStack_Ctor_DE80 @ 0x0800DE80 mode=THUMB size=0x38 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FoodStack_Ctor_DE80 @ 0x0800DE80  mode=THUMB  size=0x38  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 FoodStack_Ctor_DE80(int self,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  uint *puVar2;
  undefined4 in_lr;
  undefined4 uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  uStack_14 = param_2;
  uStack_c = param_3;
  LibC_memcpy(self,&uStack_14,3);
  if (uStack_c == 0) {
    uVar1 = 1;
  }
  else {
    uStack_10 = 99;
    puVar2 = &uStack_10;
    if (uStack_c < 99) {
      puVar2 = &uStack_c;
    }
    uVar1 = (undefined1)*puVar2;
  }
  *(undefined1 *)(self + 3) = uVar1;
  return CONCAT44(in_lr,self);
}

/* 0x0800DEB8 (36B) | FoodStack_GetFood (orig: func_0800DEB8) | origin: pure | domain: FoodStack | EXACT / stanhash_elf */
/* FoodStack_GetFood @ 0x0800DEB8 mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FoodStack_GetFood @ 0x0800DEB8  mode=THUMB  size=0x24  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 FoodStack_GetFood(undefined4 param_1,int param_2)

{
  undefined4 in_lr;
  
  if (*(char *)(param_2 + 3) == '\0') {
    func_0x0800dca8(param_1,0xab);
  }
  else {
    LibC_memcpy(param_1,param_2,3);
  }
  return CONCAT44(in_lr,param_1);
}

/* 0x0800DEDC (20B) | FoodStack_IsEmpty (orig: func_0800DEDC) | origin: pure | domain: FoodStack | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 FoodStack_IsEmpty(int arg0) {
  return ((u32)(*(char *)(arg0 + 3) == '\0'));
}

/* 0x0800DEF0 (20B) | FoodStack_GetAmount (orig: func_0800DEF0) | origin: pure | domain: FoodStack | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 FoodStack_GetAmount(int arg0) {
  u8 val;
  if (*(char *)(arg0 + 3) == '\0') {
    val = 0;
  }
  else {
    val = (u32)*(s32 *)(arg0 + 3);
  }
  return val;
}

/* 0x0800DF04 (48B) | FoodStack_AddAmount (orig: func_0800DF04) | origin: pure | domain: FoodStack | EXACT / stanhash_elf */
/* FoodStack_AddAmount @ 0x0800DF04 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FoodStack_AddAmount @ 0x0800DF04  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 FoodStack_AddAmount(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_10;
  uint uStack_c;
  
  if (*(char *)(param_1 + 3) != '\0') {
    uStack_10 = 99;
    uStack_c = (uint)*(byte *)(param_1 + 3) + param_2;
    puVar1 = &uStack_10;
    if (uStack_c < 99) {
      puVar1 = &uStack_c;
    }
    *(char *)(param_1 + 3) = (char)*puVar1;
  }
  return in_lr;
}

/* 0x0800DF34 (28B) | FoodStack_SubtractAmount (orig: func_0800DF34) | origin: wip | domain: FoodStack | EXACT / stanhash_elf */
void FoodStack_SubtractAmount(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    register u32 r1 = param_2;
    register u32 r0 = param_1;
    register u32 r2 = param_3;
    register u32 r3 = param_4;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r2 = r0 + 0;
    r0 = *(u8 *)(r2 + 3);
    if (r0 == 0) goto loc_0800DF4A;
    if (r0 > r1) goto loc_0800DF46;
    r0 = 0;
    goto loc_0800DF48;
loc_0800DF46:
    r0 = r0 - r1;
loc_0800DF48:
    *(u8 *)(r2 + 3) = r0;
loc_0800DF4A:
    return r0;
    r0 = r0;
    return r0;
}

