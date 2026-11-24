/* FIO-DECOMP-HMFOMT :: Port Readable Module: ToolChest (7 functions) */
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

/* 0x0800B2EC (284B) | ToolChest_Ctor (orig: func_0800B2EC) | origin: pure | domain: ToolChest | EXACT / stanhash_elf */
/* ToolChest_Ctor @ 0x0800B2EC mode=THUMB size=0x11C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* ToolChest_Ctor @ 0x0800B2EC  mode=THUMB  size=0x124  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 ToolChest_Ctor(int self)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  undefined1 auStack_38 [4];
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined1 uStack_30;
  undefined1 auStack_2f [3];
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  
  iVar2 = 0x3f;
  puStack_2c = &uStack_31;
  puStack_28 = &uStack_30;
  puStack_24 = auStack_2f;
  iVar1 = self;
  do {
    ToolStack_Ctor(iVar1);
    iVar1 = iVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  func_0x0800db2c(&uStack_34,0);
  ToolStack_Ctor_DBE0(auStack_38,uStack_34,1);
  LibC_memcpy(self,auStack_38,2);
  func_0x0800db2c(&uStack_33,0x10);
  ToolStack_Ctor_DBE0(auStack_38,uStack_33,1);
  LibC_memcpy(self + 2,auStack_38,2);
  func_0x0800db2c(&uStack_32,8);
  ToolStack_Ctor_DBE0(auStack_38,uStack_32,1);
  LibC_memcpy(self + 4,auStack_38,2);
  func_0x0800db2c(puStack_2c,0x18);
  ToolStack_Ctor_DBE0(auStack_38,uStack_31,1);
  LibC_memcpy(self + 6,auStack_38,2);
  func_0x0800db2c(puStack_28,0x20);
  ToolStack_Ctor_DBE0(auStack_38,uStack_30,1);
  LibC_memcpy(self + 8,auStack_38,2);
  func_0x0800db2c(puStack_24,0x4c);
  ToolStack_Ctor_DBE0(auStack_38,auStack_2f[0],1);
  LibC_memcpy(self + 10,auStack_38,2);
  return CONCAT44(in_lr,self);
}

/* 0x0800B410 (100B) | ToolChest_GetAvailableSpaceFor (orig: func_0800B410) | origin: pure | domain: ToolChest | EXACT / stanhash_elf */
/* ToolChest_GetAvailableSpaceFor @ 0x0800B410 mode=THUMB size=0x64 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* ToolChest_GetAvailableSpaceFor @ 0x0800B410  mode=THUMB  size=0x64  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 ToolChest_GetAvailableSpaceFor(int self,int param_2)

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
    cVar1 = ToolStack_IsEmpty(self);
    if (cVar1 == '\0') {
      auStack_1c[0] = ToolStack_GetTool(self);
      iVar2 = func_0x0800db30(auStack_1c);
      if (iVar2 == param_2) {
        iVar2 = ToolStack_GetAmount(self);
        iVar3 = (iVar3 + 99) - iVar2;
      }
    }
    else {
      iVar3 = iVar3 + 99;
    }
  }
  return CONCAT44(in_lr,iVar3);
}

/* 0x0800B474 (92B) | ToolChest_GetAmountOf (orig: func_0800B474) | origin: pure | domain: ToolChest | EXACT / stanhash_elf */
/* ToolChest_GetAmountOf @ 0x0800B474 mode=THUMB size=0x5C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* ToolChest_GetAmountOf @ 0x0800B474  mode=THUMB  size=0x5C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 ToolChest_GetAmountOf(int self,int param_2)

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
    cVar1 = ToolStack_IsEmpty(self);
    if (cVar1 == '\0') {
      auStack_1c[0] = ToolStack_GetTool(self);
      iVar2 = func_0x0800db30(auStack_1c);
      if (iVar2 == param_2) {
        iVar2 = ToolStack_GetAmount(self);
        iVar4 = iVar4 + iVar2;
      }
    }
  }
  return CONCAT44(in_lr,iVar4);
}

/* 0x0800B4D0 (48B) | ToolChest_GetFirstFreeSlot (orig: func_0800B4D0) | origin: pure | domain: ToolChest | EXACT / stanhash_elf */
/* ToolChest_GetFirstFreeSlot @ 0x0800B4D0 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* ToolChest_GetFirstFreeSlot @ 0x0800B4D0  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 ToolChest_GetFirstFreeSlot(int self)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  iVar2 = self + 0x80;
  for (; self != iVar2; self = self + 2) {
    cVar1 = ToolStack_IsEmpty(self);
    if (cVar1 != '\0') goto LAB_0800b4fa;
    iVar3 = iVar3 + 1;
  }
  iVar3 = -1;
LAB_0800b4fa:
  return CONCAT44(in_lr,iVar3);
}

/* 0x0800B500 (68B) | ToolChest_GetLastFreeSlot (orig: func_0800B500) | origin: pure | domain: ToolChest | EXACT / stanhash_elf */
/* ToolChest_GetLastFreeSlot @ 0x0800B500 mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* ToolChest_GetLastFreeSlot @ 0x0800B500  mode=THUMB  size=0x44  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 ToolChest_GetLastFreeSlot(int self)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int iStack_c;
  
  iVar2 = 0x3f;
  for (iStack_c = self + 0x80; iStack_c != self; iStack_c = iStack_c + -2) {
    cVar1 = ToolStack_IsEmpty(iStack_c + -2);
    if (cVar1 != '\0') goto LAB_0800b53a;
    iVar2 = iVar2 + -1;
  }
  iVar2 = -1;
LAB_0800b53a:
  return CONCAT44(in_lr,iVar2);
}

/* 0x0800B544 (92B) | ToolChest_GetFirstSlotWith (orig: func_0800B544) | origin: pure | domain: ToolChest | EXACT / stanhash_elf */
/* ToolChest_GetFirstSlotWith @ 0x0800B544 mode=THUMB size=0x5C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* ToolChest_GetFirstSlotWith @ 0x0800B544  mode=THUMB  size=0x64  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 ToolChest_GetFirstSlotWith(int self,int param_2)

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
    cVar1 = ToolStack_IsEmpty(self);
    if (cVar1 == '\0') {
      auStack_1c[0] = ToolStack_GetTool(self);
      iVar2 = func_0x0800db30(auStack_1c);
      if (iVar2 == param_2) goto LAB_0800b592;
    }
    iVar4 = iVar4 + 1;
  }
  iVar4 = -1;
LAB_0800b592:
  return CONCAT44(in_lr,iVar4);
}

/* 0x0800B5A8 (184B) | ToolChest_AddAmountOf (orig: func_0800B5A8) | origin: pure | domain: ToolChest | EXACT / stanhash_elf */
/* ToolChest_AddAmountOf @ 0x0800B5A8 mode=THUMB size=0xB8 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* ToolChest_AddAmountOf @ 0x0800B5A8  mode=THUMB  size=0xB8  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 ToolChest_AddAmountOf(int self,int param_2,uint param_3)

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
  
  if (param_2 < 0x51) {
    iVar5 = self + 0x80;
    for (; (param_3 != 0 && (self != iVar5)); self = self + 2) {
      uStack_24 = param_3;
      cVar1 = ToolStack_IsEmpty(self);
      if (cVar1 == '\0') {
        auStack_1b[0] = ToolStack_GetTool(self);
        iVar2 = func_0x0800db30(auStack_1b);
        if (iVar2 == param_2) {
          iVar2 = ToolStack_GetAmount(self);
          uStack_18 = 99U - iVar2;
          puVar4 = &uStack_24;
          if (99U - iVar2 < uStack_24) {
            puVar4 = &uStack_18;
          }
          uVar3 = *puVar4;
          ToolStack_AddAmount(self,uVar3);
          goto LAB_0800b646;
        }
      }
      else {
        uStack_20 = 99;
        puVar4 = &uStack_24;
        if (99 < uStack_24) {
          puVar4 = &uStack_20;
        }
        uVar3 = *puVar4;
        func_0x0800db2c(&uStack_1c,param_2);
        ToolStack_Ctor_DBE0(auStack_28,uStack_1c,uVar3);
        LibC_memcpy(self,auStack_28,2);
LAB_0800b646:
        uStack_24 = uStack_24 - uVar3;
      }
      param_3 = uStack_24;
    }
  }
  return CONCAT44(in_lr,param_3);
}

