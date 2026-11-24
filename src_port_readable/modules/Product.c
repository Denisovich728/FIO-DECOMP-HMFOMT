/* FIO-DECOMP-HMFOMT :: Port Readable Module: Product (5 functions) */
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

/* 0x0800E0FC (76B) | Product_Ctor (orig: func_0800E0FC) | origin: pure | domain: Product | EXACT / stanhash_elf */
/* Product_Ctor @ 0x0800E0FC mode=THUMB size=0x4C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Product_Ctor @ 0x0800E0FC  mode=THUMB  size=0x4C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Product_Ctor(undefined1 *self,undefined4 param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 uStack_c;
  
  *self = 0x67;
  uStack_c = param_2;
  uVar1 = func_0x0800dcb4(&uStack_c);
  iVar3 = 0;
  piVar2 = _DAT_0800e118;
  while ((*piVar2 * 0x10000 < 0 || (*(byte *)((int)piVar2 + 2) != uVar1))) {
    iVar3 = iVar3 + 1;
    if (0x66 < iVar3) goto LAB_0800e138;
    piVar2 = (int *)(iVar3 * 4 + _DAT_0800e144);
  }
  *self = (char)iVar3;
LAB_0800e138:
  return CONCAT44(in_lr,self);
}

/* 0x0800E148 (76B) | Product_Ctor_E148 (orig: func_0800E148) | origin: pure | domain: Product | EXACT / stanhash_elf */
/* Product_Ctor_E148 @ 0x0800E148 mode=THUMB size=0x4C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Product_Ctor_E148 @ 0x0800E148  mode=THUMB  size=0x50  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Product_Ctor_E148(undefined1 *self,undefined1 param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  undefined1 auStack_c [4];
  
  *self = 0x67;
  auStack_c[0] = param_2;
  uVar1 = func_0x0800df54(auStack_c);
  iVar3 = 0;
  piVar2 = _DAT_0800e164;
  while ((-1 < *piVar2 * 0x10000 || (*(byte *)((int)piVar2 + 2) != uVar1))) {
    iVar3 = iVar3 + 1;
    if (0x66 < iVar3) goto LAB_0800e184;
    piVar2 = (int *)(iVar3 * 4 + _DAT_0800e190);
  }
  *self = (char)iVar3;
LAB_0800e184:
  return CONCAT44(in_lr,self);
}

/* 0x0800E198 (40B) | Product_GetPrice (orig: func_0800E198) | origin: pure | domain: Product | EXACT / stanhash_elf */
/* Product_GetPrice @ 0x0800E198 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Product_GetPrice @ 0x0800E198  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Product_GetPrice(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0x67) {
    uVar1 = *(ushort *)((uint)*param_1 * 4 + _DAT_0800e1bc) & 0x7fff;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0800E1C0 (84B) | Product_GetName (orig: func_0800E1C0) | origin: pure | domain: Product | EXACT / stanhash_elf */
/* Product_GetName @ 0x0800E1C0 mode=THUMB size=0x54 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Product_GetName @ 0x0800E1C0  mode=THUMB  size=0x54  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Product_GetName(byte *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  
  uVar1 = _DAT_0800e210;
  if (*param_1 < 0x67) {
    piVar2 = (int *)((uint)*param_1 * 4 + _DAT_0800e1f0);
    if (*piVar2 * 0x10000 < 0) {
      func_0x0800df50(auStack_c,*(undefined1 *)((int)piVar2 + 2));
      uVar1 = Article_GetName(auStack_c);
    }
    else {
      func_0x0800dca8(auStack_10,*(undefined1 *)((int)piVar2 + 2));
      uVar1 = Food_GetName(auStack_10);
    }
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0800E214 (84B) | Product_GetIconId (orig: func_0800E214) | origin: pure | domain: Product | EXACT / stanhash_elf */
/* Product_GetIconId @ 0x0800E214 mode=THUMB size=0x54 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Product_GetIconId @ 0x0800E214  mode=THUMB  size=0x54  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Product_GetIconId(byte *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  
  if (*param_1 < 0x67) {
    piVar2 = (int *)((uint)*param_1 * 4 + _DAT_0800e244);
    if (*piVar2 * 0x10000 < 0) {
      func_0x0800df50(auStack_c,*(undefined1 *)((int)piVar2 + 2));
      uVar1 = Article_GetIconId(auStack_c);
    }
    else {
      func_0x0800dca8(auStack_10,*(undefined1 *)((int)piVar2 + 2));
      uVar1 = Food_GetIconId(auStack_10);
    }
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

