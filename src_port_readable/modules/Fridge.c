/* FIO-DECOMP-HMFOMT :: Port Readable Module: Fridge (7 functions) */
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

/* 0x0800B660 (36B) | Fridge_Ctor (orig: func_0800B660) | origin: pure | domain: Fridge | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 FoodStack_Ctor();
u32 Fridge_Ctor(int arg0) {
  int val;
  int val2;
  val = arg0;
  val2 = 0x3f;
  do {
    FoodStack_Ctor(val);
    val = 4 + val;
    val2 = val2 + -1;
  } while (val2 != -1);
  return arg0;
}

/* 0x0800B68C (92B) | Fridge_GetAvailableSpaceFor (orig: func_0800B68C) | origin: pure | domain: Fridge | EXACT / stanhash_elf */
/* Fridge_GetAvailableSpaceFor @ 0x0800B68C mode=THUMB size=0x5C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Fridge_GetAvailableSpaceFor @ 0x0800B68C  mode=THUMB  size=0x5C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Fridge_GetAvailableSpaceFor(int self,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_18 [4];
  
  iVar3 = 0;
  iVar4 = self + 0x100;
  for (; self != iVar4; self = self + 4) {
    cVar1 = FoodStack_IsEmpty(self);
    if (cVar1 == '\0') {
      FoodStack_GetFood(auStack_18,self);
      iVar2 = func_0x0800dcb4(auStack_18);
      if (iVar2 == param_2) {
        iVar2 = FoodStack_GetAmount(self);
        iVar3 = (iVar3 + 99) - iVar2;
      }
    }
    else {
      iVar3 = iVar3 + 99;
    }
  }
  return CONCAT44(in_lr,iVar3);
}

/* 0x0800B6E8 (84B) | Fridge_GetAmountOf (orig: func_0800B6E8) | origin: pure | domain: Fridge | EXACT / stanhash_elf */
/* Fridge_GetAmountOf @ 0x0800B6E8 mode=THUMB size=0x54 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Fridge_GetAmountOf @ 0x0800B6E8  mode=THUMB  size=0x54  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Fridge_GetAmountOf(int self,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_18 [4];
  
  iVar4 = 0;
  iVar3 = self + 0x100;
  for (; self != iVar3; self = self + 4) {
    cVar1 = FoodStack_IsEmpty(self);
    if (cVar1 == '\0') {
      FoodStack_GetFood(auStack_18,self);
      iVar2 = func_0x0800dcb4(auStack_18);
      if (iVar2 == param_2) {
        iVar2 = FoodStack_GetAmount(self);
        iVar4 = iVar4 + iVar2;
      }
    }
  }
  return CONCAT44(in_lr,iVar4);
}

/* 0x0800B73C (52B) | Fridge_GetFirstFreeSlot (orig: func_0800B73C) | origin: pure | domain: Fridge | EXACT / stanhash_elf */
/* Fridge_GetFirstFreeSlot @ 0x0800B73C mode=THUMB size=0x34 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Fridge_GetFirstFreeSlot @ 0x0800B73C  mode=THUMB  size=0x34  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Fridge_GetFirstFreeSlot(int self)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  iVar2 = self + 0x100;
  for (; self != iVar2; self = self + 4) {
    cVar1 = FoodStack_IsEmpty(self);
    if (cVar1 != '\0') goto LAB_0800b768;
    iVar3 = iVar3 + 1;
  }
  iVar3 = -1;
LAB_0800b768:
  return CONCAT44(in_lr,iVar3);
}

/* 0x0800B770 (72B) | Fridge_GetLastFreeSlot (orig: func_0800B770) | origin: pure | domain: Fridge | EXACT / stanhash_elf */
/* Fridge_GetLastFreeSlot @ 0x0800B770 mode=THUMB size=0x48 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Fridge_GetLastFreeSlot @ 0x0800B770  mode=THUMB  size=0x48  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Fridge_GetLastFreeSlot(int self)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int iStack_c;
  
  iVar2 = 0x3f;
  for (iStack_c = self + 0x100; iStack_c != self; iStack_c = iStack_c + -4) {
    cVar1 = FoodStack_IsEmpty(iStack_c + -4);
    if (cVar1 != '\0') goto LAB_0800b7ae;
    iVar2 = iVar2 + -1;
  }
  iVar2 = -1;
LAB_0800b7ae:
  return CONCAT44(in_lr,iVar2);
}

/* 0x0800B7B8 (84B) | Fridge_GetFirstSlotWith (orig: func_0800B7B8) | origin: pure | domain: Fridge | EXACT / stanhash_elf */
/* Fridge_GetFirstSlotWith @ 0x0800B7B8 mode=THUMB size=0x54 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Fridge_GetFirstSlotWith @ 0x0800B7B8  mode=THUMB  size=0x5C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Fridge_GetFirstSlotWith(int self,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_18 [4];
  
  iVar4 = 0;
  iVar3 = self + 0x100;
  for (; self != iVar3; self = self + 4) {
    cVar1 = FoodStack_IsEmpty(self);
    if (cVar1 == '\0') {
      FoodStack_GetFood(auStack_18,self);
      iVar2 = func_0x0800dcb4(auStack_18);
      if (iVar2 == param_2) goto LAB_0800b802;
    }
    iVar4 = iVar4 + 1;
  }
  iVar4 = -1;
LAB_0800b802:
  return CONCAT44(in_lr,iVar4);
}

/* 0x0800B814 (208B) | Fridge_AddAmountOf (orig: func_0800B814) | origin: pure | domain: Fridge | EXACT / stanhash_elf */
/* Fridge_AddAmountOf @ 0x0800B814 mode=THUMB size=0xD0 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Fridge_AddAmountOf @ 0x0800B814  mode=THUMB  size=0xD0  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Fridge_AddAmountOf(undefined4 *self,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined4 uStack_2c;
  uint3 uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  if (param_2 < 0xab) {
    puVar3 = self + 0x40;
    for (; (param_3 != 0 && (self != puVar3)); self = self + 1) {
      uStack_24 = param_3;
      cVar1 = FoodStack_IsEmpty(self);
      if (cVar1 == '\0') {
        FoodStack_GetFood(&uStack_2c,self);
        iVar2 = func_0x0800dcb4(&uStack_2c);
        if (iVar2 == param_2) {
          iVar2 = FoodStack_GetAmount(self);
          uStack_1c = 99U - iVar2;
          puVar4 = &uStack_24;
          if (99U - iVar2 < uStack_24) {
            puVar4 = &uStack_1c;
          }
          uVar5 = *puVar4;
          FoodStack_AddAmount(self,uVar5);
          uStack_24 = uStack_24 - uVar5;
        }
      }
      else {
        uStack_20 = 99;
        puVar4 = &uStack_24;
        if (99 < uStack_24) {
          puVar4 = &uStack_20;
        }
        uVar5 = *puVar4;
        func_0x0800dca8(&uStack_28,param_2);
        FoodStack_Ctor_DE80(&uStack_2c,(uint)uStack_28,uVar5);
        *self = uStack_2c;
        uStack_24 = uStack_24 - uVar5;
      }
      param_3 = uStack_24;
    }
  }
  return CONCAT44(in_lr,param_3);
}

