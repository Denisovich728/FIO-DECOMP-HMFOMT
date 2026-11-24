/* FIO-DECOMP-HMFOMT :: Port Readable Module: Shelf (7 functions) */
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

/* 0x0800B8E4 (36B) | Shelf_Ctor (orig: func_0800B8E4) | origin: pure | domain: Shelf | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 ArticleStack_Ctor();
u32 Shelf_Ctor(int arg0) {
  int val2;
  register int val;
  val = arg0;
  val2 = 0x3f;
  do {
    ArticleStack_Ctor(val);
    val = (u32)2 + val;
    val2 = val2 + -1;
  } while (val2 != -1);
  return arg0;
}

/* 0x0800B910 (100B) | Shelf_GetAvailableSpaceFor (orig: func_0800B910) | origin: pure | domain: Shelf | EXACT / stanhash_elf */
/* Shelf_GetAvailableSpaceFor @ 0x0800B910 mode=THUMB size=0x64 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Shelf_GetAvailableSpaceFor @ 0x0800B910  mode=THUMB  size=0x64  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Shelf_GetAvailableSpaceFor(int self,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar3 = 0;
  iVar4 = self + 0x80;
  for (; self != iVar4; self = self + 2) {
    cVar1 = ArticleStack_IsEmpty(self);
    if (cVar1 == '\0') {
      auStack_1c[0] = ArticleStack_GetArticle(self);
      iVar2 = func_0x0800df54(auStack_1c);
      if (iVar2 == param_2) {
        iVar2 = ArticleStack_GetAmount(self);
        iVar3 = (iVar3 + 99) - iVar2;
      }
    }
    else {
      iVar3 = iVar3 + 99;
    }
  }
  return CONCAT44(in_lr,iVar3);
}

/* 0x0800B974 (92B) | Shelf_GetAmountOf (orig: func_0800B974) | origin: pure | domain: Shelf | EXACT / stanhash_elf */
/* Shelf_GetAmountOf @ 0x0800B974 mode=THUMB size=0x5C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Shelf_GetAmountOf @ 0x0800B974  mode=THUMB  size=0x5C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Shelf_GetAmountOf(int self,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar4 = 0;
  iVar3 = self + 0x80;
  for (; self != iVar3; self = self + 2) {
    cVar1 = ArticleStack_IsEmpty(self);
    if (cVar1 == '\0') {
      auStack_1c[0] = ArticleStack_GetArticle(self);
      iVar2 = func_0x0800df54(auStack_1c);
      if (iVar2 == param_2) {
        iVar2 = ArticleStack_GetAmount(self);
        iVar4 = iVar4 + iVar2;
      }
    }
  }
  return CONCAT44(in_lr,iVar4);
}

/* 0x0800B9D0 (48B) | Shelf_GetFirstFreeSlot (orig: func_0800B9D0) | origin: pure | domain: Shelf | EXACT / stanhash_elf */
/* Shelf_GetFirstFreeSlot @ 0x0800B9D0 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Shelf_GetFirstFreeSlot @ 0x0800B9D0  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Shelf_GetFirstFreeSlot(int self)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  iVar2 = self + 0x80;
  for (; self != iVar2; self = self + 2) {
    cVar1 = ArticleStack_IsEmpty(self);
    if (cVar1 != '\0') goto LAB_0800b9fa;
    iVar3 = iVar3 + 1;
  }
  iVar3 = -1;
LAB_0800b9fa:
  return CONCAT44(in_lr,iVar3);
}

/* 0x0800BA00 (68B) | Shelf_GetLastFreeSlot (orig: func_0800BA00) | origin: pure | domain: Shelf | EXACT / stanhash_elf */
/* Shelf_GetLastFreeSlot @ 0x0800BA00 mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Shelf_GetLastFreeSlot @ 0x0800BA00  mode=THUMB  size=0x44  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Shelf_GetLastFreeSlot(int self)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int iStack_c;
  
  iVar2 = 0x3f;
  for (iStack_c = self + 0x80; iStack_c != self; iStack_c = iStack_c + -2) {
    cVar1 = ArticleStack_IsEmpty(iStack_c + -2);
    if (cVar1 != '\0') goto LAB_0800ba3a;
    iVar2 = iVar2 + -1;
  }
  iVar2 = -1;
LAB_0800ba3a:
  return CONCAT44(in_lr,iVar2);
}

/* 0x0800BA44 (92B) | Shelf_GetFirstSlotWith (orig: func_0800BA44) | origin: pure | domain: Shelf | EXACT / stanhash_elf */
/* Shelf_GetFirstSlotWith @ 0x0800BA44 mode=THUMB size=0x5C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Shelf_GetFirstSlotWith @ 0x0800BA44  mode=THUMB  size=0x64  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Shelf_GetFirstSlotWith(int self,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar4 = 0;
  iVar3 = self + 0x80;
  for (; self != iVar3; self = self + 2) {
    cVar1 = ArticleStack_IsEmpty(self);
    if (cVar1 == '\0') {
      auStack_1c[0] = ArticleStack_GetArticle(self);
      iVar2 = func_0x0800df54(auStack_1c);
      if (iVar2 == param_2) goto LAB_0800ba92;
    }
    iVar4 = iVar4 + 1;
  }
  iVar4 = -1;
LAB_0800ba92:
  return CONCAT44(in_lr,iVar4);
}

/* 0x0800BAA8 (184B) | Shelf_AddAmountOf (orig: func_0800BAA8) | origin: pure | domain: Shelf | EXACT / stanhash_elf */
/* Shelf_AddAmountOf @ 0x0800BAA8 mode=THUMB size=0xB8 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Shelf_AddAmountOf @ 0x0800BAA8  mode=THUMB  size=0xD4  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Shelf_AddAmountOf(int self,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 in_lr;
  undefined1 auStack_28 [4];
  uint uStack_24;
  uint uStack_20;
  undefined1 uStack_1c;
  undefined1 auStack_1b [3];
  uint uStack_18;
  
  if (param_2 < 0x5f) {
    iVar5 = self + 0x80;
    for (; (param_3 != 0 && (self != iVar5)); self = self + 2) {
      uStack_24 = param_3;
      cVar1 = ArticleStack_IsEmpty(self);
      if (cVar1 == '\0') {
        auStack_1b[0] = ArticleStack_GetArticle(self);
        iVar2 = func_0x0800df54(auStack_1b);
        if (iVar2 == param_2) {
          iVar2 = ArticleStack_GetAmount(self);
          uStack_18 = 99U - iVar2;
          puVar4 = &uStack_24;
          if (99U - iVar2 < uStack_24) {
            puVar4 = &uStack_18;
          }
          uVar3 = *puVar4;
          ArticleStack_AddAmount(self,uVar3);
          goto LAB_0800bb46;
        }
      }
      else {
        uStack_20 = 99;
        puVar4 = &uStack_24;
        if (99 < uStack_24) {
          puVar4 = &uStack_20;
        }
        uVar3 = *puVar4;
        func_0x0800df50(&uStack_1c,param_2);
        ArticleStack_Ctor_E028(auStack_28,uStack_1c,uVar3);
        LibC_memcpy(self,auStack_28,2);
LAB_0800bb46:
        uStack_24 = uStack_24 - uVar3;
      }
      param_3 = uStack_24;
    }
  }
  return CONCAT44(in_lr,param_3);
}

