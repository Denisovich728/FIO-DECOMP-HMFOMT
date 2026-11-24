/* FIO-DECOMP-HMFOMT :: Port Readable Module: Article (5 functions) */
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

/* 0x0800DF58 (44B) | Article_GetName (orig: func_0800DF58) | origin: pure | domain: Article | EXACT / stanhash_elf */
/* Article_GetName @ 0x0800DF58 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Article_GetName @ 0x0800DF58  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Article_GetName(byte *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = _DAT_0800df6c;
  if (*param_1 < 0x5f) {
    uVar1 = *(undefined4 *)((uint)*param_1 * 0xc + _DAT_0800df80);
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0800DF84 (44B) | Article_GetIconId (orig: func_0800DF84) | origin: pure | domain: Article | EXACT / stanhash_elf */
/* Article_GetIconId @ 0x0800DF84 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Article_GetIconId @ 0x0800DF84  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Article_GetIconId(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = _DAT_0800df98;
  if (*param_1 < 0x5f) {
    uVar1 = (uint)*(ushort *)((uint)*param_1 * 0xc + _DAT_0800dfac + 4);
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0800DFB0 (36B) | Article_CanBeDiscarded (orig: func_0800DFB0) | origin: pure | domain: Article | EXACT / stanhash_elf */
/* Article_CanBeDiscarded @ 0x0800DFB0 mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Article_CanBeDiscarded @ 0x0800DFB0  mode=THUMB  size=0x60  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Article_CanBeDiscarded(byte *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  bVar1 = *param_1;
  if (bVar1 < 0x40) {
    if ((bVar1 < 0x3b) && ((0x27 < bVar1 || (bVar1 < 0x25)))) {
LAB_0800dfca:
      uVar2 = 1;
      goto LAB_0800dfd0;
    }
  }
  else if (bVar1 != 0x5e) goto LAB_0800dfca;
  uVar2 = 0;
LAB_0800dfd0:
  return CONCAT44(in_lr,uVar2);
}

/* 0x0800DFD4 (60B) | Article_GetDesc (orig: func_0800DFD4) | origin: pure | domain: Article | EXACT / stanhash_elf */
/* Article_GetDesc @ 0x0800DFD4 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* 0x080840F4 (308B) | Article_Sub_080840F4 (orig: func_080840F4) | origin: wip | domain: Article | MEDIUM / graph_algebra */
void Article_Sub_080840F4(int param_1,u32 param_2) {
  u32 uVar1;
  u32 uVar2;
  u32 *puVar3;
  u8 *puVar4;
  int iVar5;
  int iVar6;
  u32 uVar7;
  u8 uStack_20;
  u8 auStack_1f [3];
  uVar7 = 0x080FF83C;
  iVar6 = param_1 + 0x00006170;
  uVar1 = LibC_strlen(0x080FF83C);
  if (0x7f < uVar1) {
    uVar1 = 0x7f;
  }
  LibC_memcpy(iVar6,uVar7,uVar1);
  *(u8 *)(iVar6 + uVar1) = 0;
  puVar3 = (u32 *)(param_2 * 0x14 + 0x080FF6A8);
  uVar7 = puVar3[4];
  if (0x13 < param_2) {
  }
  switch(*(u32 *)(param_2 * 4 + 0x0808415C) & 0xfffffffe) {
  case 0x80841ac:
    puVar4 = &uStack_20;
    uVar7 = 0x59;
    break;
  case 0x80841b4:
    puVar4 = auStack_1f;
    uVar7 = 0x5a;
    break;
  case 0x80841c8:
    goto case_080841C8;
  case 0x80841d2:
    iVar5 = param_1 + 0x00006170;
    iVar6 = LibC_strlen(iVar5,puVar3 + 5,*puVar3,param_2 * 4,*puVar3,puVar3[1],puVar3[2],
                            puVar3[3]);
    iVar5 = iVar5 + iVar6;
    uVar1 = 0x7f - iVar6;
    if (uVar1 != 0) {
      uVar2 = LibC_strlen(uVar7);
      if (uVar1 < uVar2) {
        uVar2 = uVar1;
      }
      LibC_memcpy(iVar5,uVar7,uVar2);
      *(u8 *)(iVar5 + uVar2) = 0;
    }
    code_0803EE94_78C0_Sub_080CABEC(param_1,param_1 + 0x00006170);
  }
  func_0800DF50(puVar4,uVar7);
  uVar7 = Article_GetDesc(puVar4);
case_080841C8:
  code_0803EE94_78C0_Sub_080CABEC(param_1,uVar7);
}

