/* FIO-DECOMP-HMFOMT :: Port Readable Module: Livestock (6 functions) */
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

/* 0x0809B454 (80B) | Livestock_Ctor (orig: func_0809B454) | origin: pure | domain: Livestock | EXACT / stanhash_elf */
/* Livestock_Ctor @ 0x0809B454 mode=THUMB size=0x50 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Livestock_Ctor @ 0x0809B454  mode=THUMB  size=0x50  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Livestock_Ctor(int self)

{
  ushort uVar1;
  undefined4 in_lr;
  byte in_stack_00000000;
  
  Animal_Ctor();
  *(byte *)(self + 0x1c) = in_stack_00000000 & 0x1f;
  *(undefined1 *)(self + 0x1d) = 0;
  uVar1 = (ushort)_DAT_0809b4a0;
  *(ushort *)(self + 0x1e) = uVar1 & *(ushort *)(self + 0x1e);
  *(byte *)(self + 0x1f) = *(byte *)(self + 0x1f) & 1;
  *(ushort *)(self + 0x20) = uVar1 & *(ushort *)(self + 0x20);
  return CONCAT44(in_lr,self);
}

/* 0x0809B4A4 (80B) | Livestock_Ctor_B4A4 (orig: func_0809B4A4) | origin: pure | domain: Livestock | EXACT / stanhash_elf */
/* Livestock_Ctor_B4A4 @ 0x0809B4A4 mode=THUMB size=0x50 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Livestock_Ctor_B4A4 @ 0x0809B4A4  mode=THUMB  size=0x94  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Livestock_Ctor_B4A4(int self,undefined4 param_2,undefined4 param_3,byte param_4)

{
  ushort uVar1;
  undefined4 in_lr;
  
  Animal_Ctor_B1A4();
  *(byte *)(self + 0x1c) = param_4 & 0x1f;
  *(undefined1 *)(self + 0x1d) = 0;
  uVar1 = (ushort)_DAT_0809b4f0;
  *(ushort *)(self + 0x1e) = uVar1 & *(ushort *)(self + 0x1e);
  *(byte *)(self + 0x1f) = *(byte *)(self + 0x1f) & 1;
  *(ushort *)(self + 0x20) = uVar1 & *(ushort *)(self + 0x20);
  return CONCAT44(in_lr,self);
}

/* 0x0809B538 (68B) | Livestock_GetProductRank (orig: func_0809B538) | origin: pure | domain: Livestock | EXACT / stanhash_elf */
/* Livestock_GetProductRank @ 0x0809B538 mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Livestock_GetProductRank @ 0x0809B538  mode=THUMB  size=0x44  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Livestock_GetProductRank(undefined4 self)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar2 = func_0x0809b228();
  if (uVar2 < 0x65) {
    uVar3 = 0;
  }
  else if (uVar2 < 0xc9) {
    uVar3 = 1;
  }
  else {
    cVar1 = func_0x0809b218(self);
    if (cVar1 == '\0') {
      uVar3 = 2;
    }
    else {
      uVar2 = func_0x0809b524(self);
      if (_DAT_0809b56c < uVar2) {
        uVar3 = 4;
      }
      else {
        uVar3 = 3;
      }
    }
  }
  return CONCAT44(in_lr,uVar3);
}

/* 0x0809B57C (140B) | Livestock_AddOutdoorMinutes (orig: func_0809B57C) | origin: pure | domain: Livestock | EXACT / stanhash_elf */
/* Livestock_AddOutdoorMinutes @ 0x0809B57C mode=THUMB size=0x8C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Livestock_AddOutdoorMinutes @ 0x0809B57C  mode=THUMB  size=0xE0  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Livestock_AddOutdoorMinutes(int self,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 in_lr;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  
  uStack_24 = *(ushort *)(self + 0x1e) & 0x1ff;
  if (uStack_24 < 0x1ff) {
    uStack_24 = uStack_24 + param_2;
    uStack_20 = _DAT_0809b5fc;
    puVar2 = &uStack_24;
    if (_DAT_0809b5fc < uStack_24) {
      puVar2 = &uStack_20;
    }
    *(ushort *)(self + 0x1e) =
         (ushort)_DAT_0809b600 & *(ushort *)(self + 0x1e) |
         (ushort)*puVar2 & (ushort)_DAT_0809b5fc;
  }
  uVar1 = _DAT_0809b5fc;
  uStack_1c = (*(ushort *)(self + 0x20) & _DAT_0809b5fc) << 7 |
              (uint)(*(byte *)(self + 0x1f) >> 1);
  if (uStack_1c <= _DAT_0809b604) {
    uStack_1c = uStack_1c + param_2;
    uStack_18 = _DAT_0809b604 + 1;
    puVar2 = &uStack_1c;
    if (_DAT_0809b604 + 1 < uStack_1c) {
      puVar2 = &uStack_18;
    }
    uVar3 = *puVar2;
    *(byte *)(self + 0x1f) = *(byte *)(self + 0x1f) & 1 | (byte)((uVar3 & 0x7f) << 1);
    *(ushort *)(self + 0x20) =
         (ushort)_DAT_0809b600 & *(ushort *)(self + 0x20) | (ushort)(uVar3 >> 7) & (ushort)uVar1;
  }
  return in_lr;
}

/* 0x0809B65C (24B) | Livestock_SetFed (orig: func_0809B65C) | origin: pure | domain: Livestock | EXACT / stanhash_elf */
/* Livestock_SetFed @ 0x0809B65C mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Livestock_SetFed @ 0x0809B65C  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Livestock_SetFed(int self)

{
  undefined4 in_lr;
  
  if (-1 < (int)((uint)*(byte *)(self + 0x1c) * 0x4000000)) {
    *(byte *)(self + 0x1c) = *(byte *)(self + 0x1c) | 0x20;
  }
  return in_lr;
}

/* 0x0809B674 (436B) | Livestock_DayUpdate (orig: func_0809B674) | origin: pure | domain: Livestock | EXACT / stanhash_elf */
/* Livestock_DayUpdate @ 0x0809B674 mode=THUMB size=0x1B4 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Livestock_DayUpdate @ 0x0809B674  mode=THUMB  size=0x1B4  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Livestock_DayUpdate(int self,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 in_lr;
  
  Animal_DayUpdate();
  bVar1 = *(byte *)(self + 0x1c);
  uVar6 = (bVar1 & 0x3f) >> 5;
  if (uVar6 != 0) {
    uVar2 = bVar1 & 0x1f;
    if (uVar2 < 0x1f) {
      *(byte *)(self + 0x1c) = bVar1 & 0xe0 | (char)uVar2 + 1U & 0x1f;
    }
    *(byte *)(self + 0x1c) = *(byte *)(self + 0x1c) & 0xdf;
  }
  *(ushort *)(self + 0x1e) = (ushort)_DAT_0809b6dc & *(ushort *)(self + 0x1e);
  if ((int)((uint)*(byte *)(self + 0x1c) * 0x2000000) < 0) {
    if (uVar6 != 0) {
      uVar3 = func_0x080d11e4();
      iVar4 = func_0x080d0ed0(uVar3,100);
      if (iVar4 < (int)(uint)*param_2) {
        bVar1 = *(byte *)(self + 0x1c) & 0xbf;
LAB_0809b6fa:
        *(byte *)(self + 0x1c) = bVar1;
      }
    }
  }
  else if (uVar6 == 0) {
    uVar3 = func_0x080d11e4();
    iVar4 = func_0x080d0ed0(uVar3,100);
    if (iVar4 < (int)(uint)param_2[1]) {
      bVar1 = *(byte *)(self + 0x1c) | 0x40;
      goto LAB_0809b6fa;
    }
  }
  if ((int)((uint)*(byte *)(self + 0x1c) * 0x2000000) < 0) {
    uVar6 = (*(byte *)(self + 0x1d) & 0x1f) >> 2;
    if (uVar6 < 7) {
      bVar1 = *(byte *)(self + 0x1d) & 0xe3 | (byte)((uVar6 + 1 & 7) << 2);
      goto LAB_0809b728;
    }
  }
  else {
    bVar1 = *(byte *)(self + 0x1d) & 0xe3;
LAB_0809b728:
    *(byte *)(self + 0x1d) = bVar1;
  }
  if ((-1 < (char)*(byte *)(self + 0x1c)) &&
     ((int)((uint)*(byte *)(self + 0x1c) * 0x2000000) < 0)) {
    if ((*(byte *)(self + 0x1d) & 0x1c) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = ((*(byte *)(self + 0x1d) & 0x1f) >> 2) - 1;
    }
    if (6 < uVar6) {
      uVar6 = 6;
    }
    uVar3 = func_0x080d11e4();
    iVar4 = func_0x080d0ed0(uVar3,100);
    if (iVar4 < (int)(uint)param_2[uVar6 + 2]) {
      *(byte *)(self + 0x1c) = *(byte *)(self + 0x1c) | 0x80;
    }
  }
  if ((char)*(byte *)(self + 0x1c) < '\0') {
    bVar1 = *(byte *)(self + 0x1d) >> 5;
    if (6 < bVar1) goto LAB_0809b794;
    bVar1 = *(byte *)(self + 0x1d) & 0x1f | (bVar1 + 1) * ' ';
  }
  else {
    bVar1 = *(byte *)(self + 0x1d) & 0x1f;
  }
  *(byte *)(self + 0x1d) = bVar1;
LAB_0809b794:
  bVar1 = 0;
  if ((int)((uint)*(byte *)(self + 0x1c) * 0x1000000) < 0) {
    if ((*(byte *)(self + 0x1d) & 0xe0) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (*(byte *)(self + 0x1d) >> 5) - 1;
    }
    if (4 < uVar6) {
      uVar6 = 4;
    }
    uVar3 = func_0x080d11e4();
    iVar4 = func_0x080d0ed0(uVar3,100);
    if (iVar4 < (int)(uint)param_2[uVar6 + 9]) {
      bVar1 = 2;
    }
  }
  if (bVar1 == 0) {
    uVar6 = func_0x0809b220(self);
    pbVar5 = param_2 + 0x14;
    for (pbVar7 = param_2 + 0x10; (pbVar5 != param_2 + 0x20 && (*(ushort *)(pbVar7 + 4) <= uVar6));
        pbVar7 = pbVar7 + 4) {
      pbVar5 = pbVar7 + 8;
    }
    uVar3 = func_0x080d11e4();
    iVar4 = func_0x080d0ed0(uVar3,100);
    if (iVar4 < (int)(uint)pbVar7[2]) {
      bVar1 = 1;
    }
  }
  *(byte *)(self + 0x1d) = *(byte *)(self + 0x1d) & 0xfc | bVar1;
  return in_lr;
}

