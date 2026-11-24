/* FIO-DECOMP-HMFOMT :: Port Readable Module: Rucksack (30 functions) */
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

/* 0x0800F574 (100B) | Rucksack_Ctor (orig: func_0800F574) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_Ctor @ 0x0800F574 mode=THUMB size=0x64 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_Ctor @ 0x0800F574  mode=THUMB  size=0x64  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_Ctor(undefined4 *self)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  undefined4 uStack_1c;
  undefined1 auStack_18 [4];
  
  func_0x0800efec(&uStack_1c);
  *self = 0;
  iVar1 = 2;
  puVar2 = self;
  do {
    puVar2 = puVar2 + 1;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = uStack_1c;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *self = 2;
  ToolStack_Ctor(auStack_18);
  self[9] = 0;
  iVar1 = 2;
  puVar2 = self + 10;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      LibC_memcpy(puVar2,auStack_18,2);
    }
    iVar1 = iVar1 + -1;
    puVar2 = (undefined4 *)((int)puVar2 + 2);
  } while (iVar1 != 0);
  self[9] = 2;
  return CONCAT44(in_lr,self);
}

/* 0x0800F5D8 (32B) | Rucksack_GetUpgradeLevel (orig: func_0800F5D8) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_GetUpgradeLevel @ 0x0800F5D8 mode=THUMB size=0x20 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_GetUpgradeLevel @ 0x0800F5D8  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_GetUpgradeLevel(uint *self)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = *self;
  if ((uVar1 < 2) || (uVar1 < 4)) {
    uVar2 = 0;
  }
  else if (uVar1 < 8) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  return CONCAT44(in_lr,uVar2);
}

/* 0x0800F604 (48B) | Rucksack_HasNoItems (orig: func_0800F604) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_HasNoItems @ 0x0800F604 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_HasNoItems @ 0x0800F604  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_HasNoItems(int *self)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  piVar3 = self + *self + 1;
  do {
    self = self + 1;
    if (self == piVar3) {
      uVar2 = 1;
      goto LAB_0800f62c;
    }
    cVar1 = RucksackItem_IsEmpty(self);
  } while (cVar1 != '\0');
  uVar2 = 0;
LAB_0800f62c:
  return CONCAT44(in_lr,uVar2);
}

/* 0x0800F634 (52B) | Rucksack_GetFirstFreeItemSlot (orig: func_0800F634) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_GetFirstFreeItemSlot @ 0x0800F634 mode=THUMB size=0x34 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_GetFirstFreeItemSlot @ 0x0800F634  mode=THUMB  size=0x34  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_GetFirstFreeItemSlot(int *self)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  piVar2 = self + *self + 1;
  while (self = self + 1, self != piVar2) {
    cVar1 = RucksackItem_IsEmpty(self);
    if (cVar1 != '\0') goto LAB_0800f662;
    iVar3 = iVar3 + 1;
  }
  iVar3 = -1;
LAB_0800f662:
  return CONCAT44(in_lr,iVar3);
}

/* 0x0800F668 (76B) | Rucksack_GetLastFreeItemSlot (orig: func_0800F668) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_GetLastFreeItemSlot @ 0x0800F668 mode=THUMB size=0x4C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_GetLastFreeItemSlot @ 0x0800F668  mode=THUMB  size=0x4C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_GetLastFreeItemSlot(int *self)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int *piStack_c;
  
  iVar2 = *self;
  for (piStack_c = self + iVar2 + 1; iVar2 = iVar2 + -1, piStack_c != self + 1;
      piStack_c = piStack_c + -1) {
    cVar1 = RucksackItem_IsEmpty(piStack_c + -1);
    if (cVar1 != '\0') goto LAB_0800f6aa;
  }
  iVar2 = -1;
LAB_0800f6aa:
  return CONCAT44(in_lr,iVar2);
}

/* 0x0800F6B4 (96B) | Rucksack_GetFirstSlotWithFood (orig: func_0800F6B4) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_GetFirstSlotWithFood @ 0x0800F6B4 mode=THUMB size=0x60 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_GetFirstSlotWithFood @ 0x0800F6B4  mode=THUMB  size=0x60  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_GetFirstSlotWithFood(int *self,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_18 [4];
  
  iVar4 = 0;
  piVar3 = self + *self + 1;
  while (self = self + 1, self != piVar3) {
    cVar1 = RucksackItem_IsEmpty(self);
    if ((cVar1 == '\0') && (iVar2 = func_0x0800f09c(self), iVar2 == 0)) {
      RucksackItem_GetFood(auStack_18,self);
      iVar2 = func_0x0800dcb4(auStack_18);
      if (iVar2 == param_2) goto LAB_0800f70a;
    }
    iVar4 = iVar4 + 1;
  }
  iVar4 = -1;
LAB_0800f70a:
  return CONCAT44(in_lr,iVar4);
}

/* 0x0800F714 (104B) | Rucksack_GetFirstSlotWithArticle (orig: func_0800F714) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_GetFirstSlotWithArticle @ 0x0800F714 mode=THUMB size=0x68 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_GetFirstSlotWithArticle @ 0x0800F714  mode=THUMB  size=0x68  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_GetFirstSlotWithArticle(int *self,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar4 = 0;
  piVar3 = self + *self + 1;
  while (self = self + 1, self != piVar3) {
    cVar1 = RucksackItem_IsEmpty(self);
    if ((cVar1 == '\0') && (iVar2 = func_0x0800f09c(self), iVar2 == 1)) {
      auStack_1c[0] = RucksackItem_GetArticle(self);
      iVar2 = func_0x0800df54(auStack_1c);
      if (iVar2 == param_2) goto LAB_0800f770;
    }
    iVar4 = iVar4 + 1;
  }
  iVar4 = -1;
LAB_0800f770:
  return CONCAT44(in_lr,iVar4);
}

/* 0x0800F77C (48B) | Rucksack_GetEmptyItemSlotCount (orig: func_0800F77C) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_GetEmptyItemSlotCount @ 0x0800F77C mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_GetEmptyItemSlotCount @ 0x0800F77C  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_GetEmptyItemSlotCount(int *self)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  piVar2 = self + *self + 1;
  while (self = self + 1, self != piVar2) {
    cVar1 = RucksackItem_IsEmpty(self);
    if (cVar1 != '\0') {
      iVar3 = iVar3 + 1;
    }
  }
  return CONCAT44(in_lr,iVar3);
}

/* 0x0800F7AC (88B) | Rucksack_GetAmountOfFood (orig: func_0800F7AC) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_GetAmountOfFood @ 0x0800F7AC mode=THUMB size=0x58 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_GetAmountOfFood @ 0x0800F7AC  mode=THUMB  size=0x58  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_GetAmountOfFood(int *self,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_18 [4];
  
  iVar4 = 0;
  piVar3 = self + *self + 1;
  while (self = self + 1, self != piVar3) {
    cVar1 = RucksackItem_IsEmpty(self);
    if ((cVar1 == '\0') && (iVar2 = func_0x0800f09c(self), iVar2 == 0)) {
      RucksackItem_GetFood(auStack_18,self);
      iVar2 = func_0x0800dcb4(auStack_18);
      if (iVar2 == param_2) {
        iVar4 = iVar4 + 1;
      }
    }
  }
  return CONCAT44(in_lr,iVar4);
}

/* 0x0800F804 (100B) | Rucksack_GetAmountOfArticles (orig: func_0800F804) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_GetAmountOfArticles @ 0x0800F804 mode=THUMB size=0x64 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_GetAmountOfArticles @ 0x0800F804  mode=THUMB  size=0x70  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_GetAmountOfArticles(int *self,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar4 = 0;
  piVar3 = self + *self + 1;
  while (self = self + 1, self != piVar3) {
    cVar1 = RucksackItem_IsEmpty(self);
    if ((cVar1 == '\0') && (iVar2 = func_0x0800f09c(self), iVar2 == 1)) {
      auStack_1c[0] = RucksackItem_GetArticle(self);
      iVar2 = func_0x0800df54(auStack_1c);
      if (iVar2 == param_2) {
        iVar4 = iVar4 + 1;
      }
    }
  }
  return CONCAT44(in_lr,iVar4);
}

/* 0x0800F874 (52B) | Rucksack_HasNoTools (orig: func_0800F874) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_HasNoTools @ 0x0800F874 mode=THUMB size=0x34 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_HasNoTools @ 0x0800F874  mode=THUMB  size=0x34  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_HasNoTools(int self)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(self + 0x24);
  iVar4 = self + 0x28;
  do {
    if (iVar4 == iVar3 * 2 + self + 0x28) {
      uVar2 = 1;
LAB_0800f8a0:
      return CONCAT44(in_lr,uVar2);
    }
    cVar1 = ToolStack_IsEmpty(iVar4);
    if (cVar1 == '\0') {
      uVar2 = 0;
      goto LAB_0800f8a0;
    }
    iVar4 = iVar4 + 2;
  } while( true );
}

/* 0x0800F8A8 (56B) | Rucksack_GetFirstFreeToolSlot (orig: func_0800F8A8) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_GetFirstFreeToolSlot @ 0x0800F8A8 mode=THUMB size=0x38 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_GetFirstFreeToolSlot @ 0x0800F8A8  mode=THUMB  size=0x38  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_GetFirstFreeToolSlot(int self)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = 0;
  iVar2 = *(int *)(self + 0x24);
  for (iVar3 = self + 0x28; iVar3 != iVar2 * 2 + self + 0x28; iVar3 = iVar3 + 2) {
    cVar1 = ToolStack_IsEmpty(iVar3);
    if (cVar1 != '\0') goto LAB_0800f8da;
    iVar4 = iVar4 + 1;
  }
  iVar4 = -1;
LAB_0800f8da:
  return CONCAT44(in_lr,iVar4);
}

/* 0x0800F8E0 (76B) | Rucksack_GetLastFreeToolSlot (orig: func_0800F8E0) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_GetLastFreeToolSlot @ 0x0800F8E0 mode=THUMB size=0x4C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_GetLastFreeToolSlot @ 0x0800F8E0  mode=THUMB  size=0x4C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_GetLastFreeToolSlot(int self)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int iStack_c;
  
  iVar2 = *(int *)(self + 0x24);
  for (iStack_c = iVar2 * 2 + self + 0x28; iVar2 = iVar2 + -1, iStack_c != self + 0x28;
      iStack_c = iStack_c + -2) {
    cVar1 = ToolStack_IsEmpty(iStack_c + -2);
    if (cVar1 != '\0') goto LAB_0800f924;
  }
  iVar2 = -1;
LAB_0800f924:
  return CONCAT44(in_lr,iVar2);
}

/* 0x0800F92C (100B) | Rucksack_GetFirstSlotWithTool (orig: func_0800F92C) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_GetFirstSlotWithTool @ 0x0800F92C mode=THUMB size=0x64 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_GetFirstSlotWithTool @ 0x0800F92C  mode=THUMB  size=0x64  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_GetFirstSlotWithTool(int self,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar5 = 0;
  iVar3 = *(int *)(self + 0x24);
  for (iVar4 = self + 0x28; iVar4 != iVar3 * 2 + self + 0x28; iVar4 = iVar4 + 2) {
    cVar1 = ToolStack_IsEmpty(iVar4);
    if (cVar1 == '\0') {
      auStack_1c[0] = ToolStack_GetTool(iVar4);
      iVar2 = func_0x0800db30(auStack_1c);
      if (iVar2 == param_2) goto LAB_0800f982;
    }
    iVar5 = iVar5 + 1;
  }
  iVar5 = -1;
LAB_0800f982:
  return CONCAT44(in_lr,iVar5);
}

/* 0x0800F990 (108B) | Rucksack_GetAvailableSpaceForTool (orig: func_0800F990) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_GetAvailableSpaceForTool @ 0x0800F990 mode=THUMB size=0x6C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_GetAvailableSpaceForTool @ 0x0800F990  mode=THUMB  size=0x6C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_GetAvailableSpaceForTool(int self,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar5 = 0;
  iVar3 = *(int *)(self + 0x24);
  for (iVar4 = self + 0x28; iVar4 != iVar3 * 2 + self + 0x28; iVar4 = iVar4 + 2) {
    cVar1 = ToolStack_IsEmpty(iVar4);
    if (cVar1 == '\0') {
      auStack_1c[0] = ToolStack_GetTool(iVar4);
      iVar2 = func_0x0800db30(auStack_1c);
      if (iVar2 == param_2) {
        iVar2 = ToolStack_GetAmount(iVar4);
        iVar5 = (iVar5 + 99) - iVar2;
      }
    }
    else {
      iVar5 = iVar5 + 99;
    }
  }
  return CONCAT44(in_lr,iVar5);
}

/* 0x0800F9FC (100B) | Rucksack_GetAmountOfTool (orig: func_0800F9FC) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_GetAmountOfTool @ 0x0800F9FC mode=THUMB size=0x64 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_GetAmountOfTool @ 0x0800F9FC  mode=THUMB  size=0x64  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_GetAmountOfTool(int self,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar5 = 0;
  iVar3 = *(int *)(self + 0x24);
  for (iVar4 = self + 0x28; iVar4 != iVar3 * 2 + self + 0x28; iVar4 = iVar4 + 2) {
    cVar1 = ToolStack_IsEmpty(iVar4);
    if (cVar1 == '\0') {
      auStack_1c[0] = ToolStack_GetTool(iVar4);
      iVar2 = func_0x0800db30(auStack_1c);
      if (iVar2 == param_2) {
        iVar2 = ToolStack_GetAmount(iVar4);
        iVar5 = iVar5 + iVar2;
      }
    }
  }
  return CONCAT44(in_lr,iVar5);
}

/* 0x0800FA60 (636B) | Rucksack_Upgrade (orig: func_0800FA60) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_Upgrade @ 0x0800FA60 mode=THUMB size=0x27C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_Upgrade @ 0x0800FA60  mode=THUMB  size=0x284  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Rucksack_Upgrade(uint *self)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 in_lr;
  uint uStack_28;
  undefined1 *puStack_24;
  
  uVar1 = Rucksack_GetUpgradeLevel();
  if (uVar1 < 2) {
    uVar1 = 2 << (uVar1 + 1 & 0xff);
    func_0x0800efec(&uStack_28);
    uVar6 = *self;
    if (uVar1 < uVar6) {
      for (puVar7 = self + uVar1 + 1; puVar7 != self + uVar6 + 1; puVar7 = puVar7 + 1) {
      }
      *self = *self - ((int)(self + uVar6 + 1) - (int)(self + uVar1 + 1) >> 2);
    }
    else {
      uVar10 = uVar1 - uVar6;
      puVar7 = self + uVar6 + 1;
      if ((uVar10 != 0) && (uVar10 <= 8 - uVar6)) {
        uVar6 = uVar6 - ((int)puVar7 - (int)(self + 1) >> 2);
        if (uVar10 < uVar6) {
          puVar11 = puVar7 + -uVar10;
          puVar4 = puVar7;
          for (puVar8 = puVar11; puVar8 != puVar7; puVar8 = puVar8 + 1) {
            if (puVar4 != (uint *)0x0) {
              *puVar4 = *puVar8;
            }
            puVar4 = puVar4 + 1;
          }
          *self = *self + uVar10;
          puVar4 = puVar7;
          for (iVar9 = (int)puVar11 - (int)puVar7 >> 2; 0 < iVar9; iVar9 = iVar9 + -1) {
            puVar4 = puVar4 + -1;
            puVar11 = puVar11 + -1;
            *puVar4 = *puVar11;
          }
          for (; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar7 = uStack_28;
            puVar7 = puVar7 + 1;
          }
        }
        else {
          for (iVar9 = uVar10 - uVar6; iVar9 != 0; iVar9 = iVar9 + -1) {
            if (puVar7 != (uint *)0x0) {
              *puVar7 = uStack_28;
            }
            puVar7 = puVar7 + 1;
          }
          *self = *self + (uVar10 - uVar6);
          *self = *self + uVar6;
        }
      }
    }
    ToolStack_Ctor(&uStack_28);
    puVar7 = self + 9;
    uVar6 = *puVar7;
    if (uVar1 < uVar6) {
      iVar2 = uVar6 * 2 + 4 + (int)puVar7;
      iVar5 = (int)self + uVar1 * 2 + 0x28;
      for (iVar9 = iVar5; iVar9 != iVar2; iVar9 = iVar9 + 2) {
      }
      *puVar7 = *puVar7 - (iVar2 - iVar5 >> 1);
    }
    else {
      uVar1 = uVar1 - uVar6;
      iVar9 = uVar6 * 2 + 4 + (int)puVar7;
      if ((uVar1 != 0) && (uVar1 <= 8 - uVar6)) {
        uVar6 = uVar6 - (iVar9 - (int)(self + 10) >> 1);
        if (uVar1 < uVar6) {
          iVar3 = iVar9 + uVar1 * -2;
          iVar2 = iVar9;
          puStack_24 = (undefined1 *)&uStack_28;
          for (iVar5 = iVar3; iVar5 != iVar9; iVar5 = iVar5 + 2) {
            if (iVar2 != 0) {
              LibC_memcpy(iVar2,iVar5,2);
            }
            iVar2 = iVar2 + 2;
          }
          *puVar7 = *puVar7 + uVar1;
          iVar2 = iVar9;
          for (iVar5 = iVar3 - iVar9 >> 1; 0 < iVar5; iVar5 = iVar5 + -1) {
            iVar2 = iVar2 + -2;
            iVar3 = iVar3 + -2;
            LibC_memcpy(iVar2,iVar3,2);
          }
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            LibC_memcpy(iVar9,puStack_24,2);
            iVar9 = iVar9 + 2;
          }
        }
        else {
          puStack_24 = (undefined1 *)&uStack_28;
          for (iVar2 = uVar1 - uVar6; iVar2 != 0; iVar2 = iVar2 + -1) {
            if (iVar9 != 0) {
              LibC_memcpy(iVar9,puStack_24,2);
            }
            iVar9 = iVar9 + 2;
          }
          *puVar7 = *puVar7 + (uVar1 - uVar6);
          *puVar7 = *puVar7 + uVar6;
        }
      }
    }
  }
  return in_lr;
}

/* 0x0800FCE4 (60B) | Rucksack_ExtractItemAt (orig: func_0800FCE4) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_ExtractItemAt @ 0x0800FCE4 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_ExtractItemAt @ 0x0800FCE4  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_ExtractItemAt(undefined4 *self,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 in_lr;
  undefined4 uStack_10;
  
  puVar3 = (undefined4 *)(param_2 + param_3 * 4 + 4);
  cVar1 = RucksackItem_IsEmpty(puVar3);
  if (cVar1 == '\0') {
    uVar2 = *puVar3;
    func_0x0800efec(&uStack_10);
    *puVar3 = uStack_10;
    *self = uVar2;
  }
  else {
    func_0x0800efec(self);
  }
  return CONCAT44(in_lr,self);
}

/* 0x0800FD20 (24B) | Rucksack_CycleItemBack (orig: func_0800FD20) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_CycleItemBack @ 0x0800FD20 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_CycleItemBack @ 0x0800FD20  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_CycleItemBack(undefined4 self)

{
  undefined4 in_lr;
  
  Rucksack_push_back_t8FixedVec2Z12RucksackItemUl8G12RucksackItem();
  return CONCAT44(in_lr,self);
}

/* 0x0800FD38 (24B) | Rucksack_CycleItemFront (orig: func_0800FD38) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_CycleItemFront @ 0x0800FD38 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_CycleItemFront @ 0x0800FD38  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_CycleItemFront(undefined4 self)

{
  undefined4 in_lr;
  
  Rucksack_push_front_t8FixedVec2Z12RucksackItemUl8G12RucksackItem();
  return CONCAT44(in_lr,self);
}

/* 0x0800FD50 (116B) | Rucksack_AddAmountOfFood (orig: func_0800FD50) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_AddAmountOfFood @ 0x0800FD50 mode=THUMB size=0x74 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_AddAmountOfFood @ 0x0800FD50  mode=THUMB  size=0x74  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_AddAmountOfFood(int *self,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  int iStack_20;
  uint3 uStack_1c;
  
  if (param_2 < 0xab) {
    iVar2 = *self;
    piVar3 = self + 1;
    if ((param_3 != 0) && (piVar3 != self + iVar2 + 1)) {
      do {
        cVar1 = RucksackItem_IsEmpty(piVar3);
        if (cVar1 != '\0') {
          func_0x0800dca8(&uStack_1c,param_2);
          RucksackItem_Ctor(&iStack_20,(uint)uStack_1c);
          *piVar3 = iStack_20;
          param_3 = param_3 + -1;
        }
        piVar3 = piVar3 + 1;
      } while ((param_3 != 0) && (piVar3 != self + iVar2 + 1));
    }
  }
  return CONCAT44(in_lr,param_3);
}

/* 0x0800FDC4 (84B) | Rucksack_AddAmountOfArticle (orig: func_0800FDC4) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_AddAmountOfArticle @ 0x0800FDC4 mode=THUMB size=0x54 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_AddAmountOfArticle @ 0x0800FDC4  mode=THUMB  size=0x60  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_AddAmountOfArticle(int *self,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  int iStack_1c;
  undefined1 auStack_18 [4];
  
  if (param_2 < 0x5f) {
    piVar2 = self + *self + 1;
    while ((self = self + 1, param_3 != 0 && (self != piVar2))) {
      cVar1 = RucksackItem_IsEmpty(self);
      if (cVar1 != '\0') {
        func_0x0800df50(auStack_18,param_2);
        RucksackItem_Ctor_F040(&iStack_1c,auStack_18[0]);
        *self = iStack_1c;
        param_3 = param_3 + -1;
      }
    }
  }
  return CONCAT44(in_lr,param_3);
}

/* 0x0800FE24 (84B) | Rucksack_ExtractToolAt (orig: func_0800FE24) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 ToolStack_Ctor();
extern u32 ToolStack_IsEmpty();
extern u32 LibC_memcpy();
u32 Rucksack_ExtractToolAt(u32 arg0,int arg1,int arg2) {
  char val;
  int val2;
  u8 auStack_18 [4];
  u8 auStack_14 [4];
  val2 = arg2 * 2 + arg1 + 0x28;
  val = ToolStack_IsEmpty(val2);
  if (val == '\0') {
    LibC_memcpy(auStack_18,val2,2);
    ToolStack_Ctor(auStack_14);
    LibC_memcpy(val2,auStack_14,2);
    LibC_memcpy(arg0,auStack_18,2);
  }
  else {
    ToolStack_Ctor(arg0);
  }
  return arg0;
}

/* 0x0800FE78 (40B) | Rucksack_CycleToolBack (orig: func_0800FE78) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 LibC_memcpy();
extern u32 Rucksack_push_back_t8FixedVec2Z9ToolStackUl8G9ToolStack();
u32 Rucksack_CycleToolBack(u32 arg0,int arg1,u32 arg2) {
  u8 auStack_10 [4];
  LibC_memcpy(auStack_10,arg2,2);
  Rucksack_push_back_t8FixedVec2Z9ToolStackUl8G9ToolStack(arg0,arg1 + 0x24,auStack_10);
  return arg0;
}

/* 0x0800FEA0 (40B) | Rucksack_CycleToolFront (orig: func_0800FEA0) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 LibC_memcpy();
extern u32 Rucksack_push_front_t8FixedVec2Z9ToolStackUl8G9ToolStack();
u32 Rucksack_CycleToolFront(u32 arg0,int arg1,u32 arg2) {
  u8 auStack_10 [4];
  LibC_memcpy(auStack_10,arg2,2);
  Rucksack_push_front_t8FixedVec2Z9ToolStackUl8G9ToolStack(arg0,arg1 + 0x24,auStack_10);
  return arg0;
}

/* 0x0800FEC8 (196B) | Rucksack_AddAmountOfTool (orig: func_0800FEC8) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_AddAmountOfTool @ 0x0800FEC8 mode=THUMB size=0xC4 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_AddAmountOfTool @ 0x0800FEC8  mode=THUMB  size=0xC4  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_AddAmountOfTool(int self,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 in_lr;
  undefined1 auStack_28 [4];
  uint uStack_24;
  uint uStack_20;
  undefined1 uStack_1c;
  undefined1 auStack_1b [3];
  uint uStack_18;
  
  if (param_2 < 0x51) {
    iVar2 = *(int *)(self + 0x24);
    for (iVar6 = self + 0x28; (param_3 != 0 && (iVar6 != iVar2 * 2 + self + 0x28));
        iVar6 = iVar6 + 2) {
      uStack_24 = param_3;
      cVar1 = ToolStack_IsEmpty(iVar6);
      if (cVar1 == '\0') {
        auStack_1b[0] = ToolStack_GetTool(iVar6);
        iVar3 = func_0x0800db30(auStack_1b);
        if (iVar3 == param_2) {
          iVar3 = ToolStack_GetAmount(iVar6);
          uStack_18 = 99U - iVar3;
          puVar5 = &uStack_24;
          if (99U - iVar3 < uStack_24) {
            puVar5 = &uStack_18;
          }
          uVar4 = *puVar5;
          ToolStack_AddAmount(iVar6,uVar4);
          goto LAB_0800ff70;
        }
      }
      else {
        uStack_20 = 99;
        puVar5 = &uStack_24;
        if (99 < uStack_24) {
          puVar5 = &uStack_20;
        }
        uVar4 = *puVar5;
        func_0x0800db2c(&uStack_1c,param_2);
        ToolStack_Ctor_DBE0(auStack_28,uStack_1c,uVar4);
        LibC_memcpy(iVar6,auStack_28,2);
LAB_0800ff70:
        uStack_24 = uStack_24 - uVar4;
      }
      param_3 = uStack_24;
    }
  }
  return CONCAT44(in_lr,param_3);
}

/* 0x080D7CFC (68B) | Rucksack_push_back_t8FixedVec2Z12RucksackItemUl8G12RucksackItem (orig: func_080D7CFC) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_push_back_t8FixedVec2Z12RucksackItemUl8G12RucksackItem @ 0x080D7CFC mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_push_back_t8FixedVec2Z12RucksackItemUl8G12RucksackItem @ 0x080D7CFC  mode=THUMB  size=0x44  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_push_back_t8FixedVec2Z12RucksackItemUl8G12RucksackItem(int *self,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  
  iVar1 = param_2[1];
  piVar5 = param_2 + 2;
  piVar3 = param_2;
  for (iVar4 = (int)param_2 + ((*param_2 * 4 + 4) - (int)piVar5) >> 2; 0 < iVar4; iVar4 = iVar4 + -1
      ) {
    piVar3 = piVar3 + 1;
    iVar2 = *piVar5;
    piVar5 = piVar5 + 1;
    *piVar3 = iVar2;
  }
  param_2[*param_2] = param_3;
  *self = iVar1;
  return CONCAT44(in_lr,self);
}

/* 0x080D7D40 (72B) | Rucksack_push_front_t8FixedVec2Z12RucksackItemUl8G12RucksackItem (orig: func_080D7D40) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_push_front_t8FixedVec2Z12RucksackItemUl8G12RucksackItem @ 0x080D7D40 mode=THUMB size=0x48 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_push_front_t8FixedVec2Z12RucksackItemUl8G12RucksackItem @ 0x080D7D40  mode=THUMB  size=0x48  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_push_front_t8FixedVec2Z12RucksackItemUl8G12RucksackItem(int *self,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  iVar1 = param_2[*param_2];
  piVar2 = param_2 + *param_2 + 1;
  piVar4 = piVar2 + -1;
  for (iVar3 = (int)piVar4 - (int)(param_2 + 1) >> 2; 0 < iVar3; iVar3 = iVar3 + -1) {
    piVar2 = piVar2 + -1;
    piVar4 = piVar4 + -1;
    *piVar2 = *piVar4;
  }
  param_2[1] = param_3;
  *self = iVar1;
  return CONCAT44(in_lr,self);
}

/* 0x080D7D88 (108B) | Rucksack_push_back_t8FixedVec2Z9ToolStackUl8G9ToolStack (orig: func_080D7D88) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_push_back_t8FixedVec2Z9ToolStackUl8G9ToolStack @ 0x080D7D88 mode=THUMB size=0x6C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_push_back_t8FixedVec2Z9ToolStackUl8G9ToolStack @ 0x080D7D88  mode=THUMB  size=0x6C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_push_back_t8FixedVec2Z9ToolStackUl8G9ToolStack(undefined4 self,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  undefined1 auStack_20 [4];
  
  piVar2 = param_2 + 1;
  LibC_memcpy(auStack_20,piVar2,2);
  iVar3 = (int)param_2 + 6;
  for (iVar1 = *param_2 * 2 + -2 >> 1; 0 < iVar1; iVar1 = iVar1 + -1) {
    LibC_memcpy(piVar2,iVar3,2);
    iVar3 = iVar3 + 2;
    piVar2 = (int *)((int)piVar2 + 2);
  }
  LibC_memcpy((int)param_2 + *param_2 * 2 + 2,param_3,2);
  LibC_memcpy(self,auStack_20,2);
  return CONCAT44(in_lr,self);
}

/* 0x080D7DF4 (112B) | Rucksack_push_front_t8FixedVec2Z9ToolStackUl8G9ToolStack (orig: func_080D7DF4) | origin: pure | domain: Rucksack | EXACT / stanhash_elf */
/* Rucksack_push_front_t8FixedVec2Z9ToolStackUl8G9ToolStack @ 0x080D7DF4 mode=THUMB size=0x70 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Rucksack_push_front_t8FixedVec2Z9ToolStackUl8G9ToolStack @ 0x080D7DF4  mode=THUMB  size=0x70  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Rucksack_push_front_t8FixedVec2Z9ToolStackUl8G9ToolStack(undefined4 self,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined1 auStack_20 [4];
  
  LibC_memcpy(auStack_20,(int)param_2 + *param_2 * 2 + 2,2);
  iVar1 = (int)param_2 + *param_2 * 2 + 4;
  iVar3 = iVar1 + -2;
  for (iVar2 = iVar3 - (int)(param_2 + 1) >> 1; 0 < iVar2; iVar2 = iVar2 + -1) {
    iVar1 = iVar1 + -2;
    iVar3 = iVar3 + -2;
    LibC_memcpy(iVar1,iVar3,2);
  }
  LibC_memcpy(param_2 + 1,param_3,2);
  LibC_memcpy(self,auStack_20,2);
  return CONCAT44(in_lr,self);
}

