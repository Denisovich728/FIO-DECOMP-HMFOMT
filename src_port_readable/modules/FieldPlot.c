/* FIO-DECOMP-HMFOMT :: Port Readable Module: FieldPlot (22 functions) */
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

/* 0x08009F8C (60B) | FieldPlot_Ctor (orig: func_08009F8C) | origin: pure | domain: FieldPlot | EXACT / stanhash_elf */
/* FieldPlot_Ctor @ 0x08009F8C mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FieldPlot_Ctor @ 0x08009F8C  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 FieldPlot_Ctor(uint *self)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(undefined1 *)self = 0;
  *(byte *)((int)self + 1) = *(byte *)((int)self + 1) & 0xf0;
  *self = *self & _DAT_08009fc4;
  bVar1 = FieldPlot_Sub_0800A014(self);
  *(byte *)((int)self + 2) = *(byte *)((int)self + 2) & 0xf1 | (bVar1 & 7) << 1;
  return CONCAT44(in_lr,self);
}

/* 0x08009FC8 (76B) | FieldPlot_Ctor_9FC8 (orig: func_08009FC8) | origin: pure | domain: FieldPlot | EXACT / stanhash_elf */
/* FieldPlot_Ctor_9FC8 @ 0x08009FC8 mode=THUMB size=0x4C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FieldPlot_Ctor_9FC8 @ 0x08009FC8  mode=THUMB  size=0x4C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 FieldPlot_Ctor_9FC8(uint *self,byte param_2,char param_3,byte param_4)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(byte *)self = param_3 << 2 | param_2 & 3;
  *(byte *)((int)self + 1) = *(byte *)((int)self + 1) & 0xf0 | param_4 & 0xf;
  *self = *self & _DAT_0800a010;
  bVar1 = FieldPlot_Sub_0800A014(self);
  *(byte *)((int)self + 2) = *(byte *)((int)self + 2) & 0xf1 | (bVar1 & 7) << 1;
  return CONCAT44(in_lr,self);
}

/* 0x0800A014 (104B) | FieldPlot_Sub_0800A014 (orig: func_0800A014) | origin: pure | domain: FieldPlot | HIGH / stanhash_elf_class */
/* FieldPlot_Sub_0800A014 @ 0x0800A014 mode=THUMB size=0x68 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FieldPlot_Sub_0800A014 @ 0x0800A014  mode=THUMB  size=0x68  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 FieldPlot_Sub_0800A014(uint *self)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = 1;
  if (((*self & 0xfff) >> 8 != 0) && (uVar1 = ((*self & 0xff) >> 2) - 0x1a, uVar1 < 0xd)) {
    switch(*(uint *)(PTR_case_0800A03C_0800a038 + uVar1 * 4) & 0xfffffffe) {
    case 0x800a03c:
    case 0x800a070:
      uVar2 = 6;
      break;
    case 0x800a074:
      uVar2 = 3;
    }
  }
  return CONCAT44(in_lr,uVar2);
}

/* 0x0800A07C (40B) | FieldPlot_Sub_0800A07C (orig: func_0800A07C) | origin: pure | domain: FieldPlot | HIGH / stanhash_elf_class */
/* FieldPlot_Sub_0800A07C @ 0x0800A07C mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FieldPlot_Sub_0800A07C @ 0x0800A07C  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 FieldPlot_Sub_0800A07C(uint *self)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = (*self & 0xfff) >> 8;
  if (((uVar1 < 2) || (8 < uVar1)) || ((*self & 0xff) >> 2 == 0x14)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

/* 0x0800A0A4 (124B) | FieldPlot_Sub_0800A0A4 (orig: func_0800A0A4) | origin: pure | domain: FieldPlot | HIGH / stanhash_elf_class */
/* FieldPlot_Sub_0800A0A4 @ 0x0800A0A4 mode=THUMB size=0x7C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FieldPlot_Sub_0800A0A4 @ 0x0800A0A4  mode=THUMB  size=0x90  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 FieldPlot_Sub_0800A0A4(uint *self)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = (*self & 0xfff) >> 8;
  if (((uVar1 < 8) || (uVar1 != 8)) || (uVar1 = ((*self & 0xff) >> 2) - 0x1b, 0xb < uVar1)) {
    uVar2 = 0;
  }
  else {
    switch(*(uint *)(PTR_case_0800A0D0_0800a0cc + uVar1 * 4) & 0xfffffffe) {
    case 0x800a0d0:
    case 0x800a100:
      uVar2 = 0x3cc;
      break;
    case 0x800a106:
      uVar2 = _DAT_0800a10c;
      break;
    case 0x800a110:
      uVar2 = _DAT_0800a114;
    }
  }
  return CONCAT44(in_lr,uVar2);
}

/* 0x0800A134 (92B) | FieldPlot_Sub_0800A134 (orig: func_0800A134) | origin: pure | domain: FieldPlot | HIGH / stanhash_elf_class */
/* FieldPlot_Sub_0800A134 @ 0x0800A134 mode=THUMB size=0x5C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FieldPlot_Sub_0800A134 @ 0x0800A134  mode=THUMB  size=0x5C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 FieldPlot_Sub_0800A134(uint *self,char param_2,int param_3)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(byte *)self = (byte)*self & 3 | param_2 << 2;
  *(byte *)((int)self + 1) = *(byte *)((int)self + 1) & 0xf0 | (byte)param_3 & 0xf;
  bVar1 = FieldPlot_Sub_0800A014(self);
  *(byte *)((int)self + 2) = *(byte *)((int)self + 2) & 0xf1 | (bVar1 & 7) << 1;
  if ((param_3 == 8) && ((*self & 3) != 3)) {
    *(byte *)self = (byte)*self & 0xfc;
  }
  return in_lr;
}

/* 0x0800A190 (168B) | FieldPlot_Sub_0800A190 (orig: func_0800A190) | origin: pure | domain: FieldPlot | HIGH / stanhash_elf_class */
/* FieldPlot_Sub_0800A190 @ 0x0800A190 mode=THUMB size=0xA8 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FieldPlot_Sub_0800A190 @ 0x0800A190  mode=THUMB  size=0xA8  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 FieldPlot_Sub_0800A190(uint *self,char param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  uVar2 = *self;
  if ((uVar2 & 3) == 0) {
    if ((uVar2 & 0xfff) >> 8 == 0) {
      bVar1 = 2;
      if (param_2 != '\0') {
        bVar1 = 1;
      }
      *(byte *)self = (byte)*self & 0xfc | bVar1;
      *(byte *)((int)self + 1) = *(byte *)((int)self + 1) & 0xf0;
      iVar3 = 1;
    }
    if (iVar3 == 1) {
      uVar2 = func_0x080d11e4();
      uVar2 = uVar2 & 0xff;
      if (uVar2 < 10) {
        iVar3 = 2;
      }
      else if (uVar2 - 10 < 3) {
        iVar3 = 4;
      }
      else if (uVar2 - 0xd < 5) {
        iVar3 = 3;
      }
    }
  }
  else if ((uVar2 & 3) - 1 < 2) {
    uVar2 = (uVar2 & 0xfff) >> 8;
    if (uVar2 == 7) {
      bVar1 = 2;
      if (param_2 != '\0') {
        bVar1 = 1;
      }
      *(byte *)self = (byte)*self & 0xfc | bVar1;
    }
    else if ((7 < uVar2) || (uVar2 != 1)) goto LAB_0800a230;
    *(byte *)((int)self + 1) = *(byte *)((int)self + 1) & 0xf0;
    iVar3 = 1;
  }
LAB_0800a230:
  return CONCAT44(in_lr,iVar3);
}

/* 0x0800A238 (260B) | FieldPlot_Sub_0800A238 (orig: func_0800A238) | origin: pure | domain: FieldPlot | HIGH / stanhash_elf_class */
/* FieldPlot_Sub_0800A238 @ 0x0800A238 mode=THUMB size=0x104 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FieldPlot_Sub_0800A238 @ 0x0800A238  mode=THUMB  size=0x104  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 FieldPlot_Sub_0800A238(uint *self,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = *self;
  if ((uVar2 & 0xfff) >> 8 == 0) {
    if ((uVar2 & 3) - 1 < 2) {
      *(byte *)self = (byte)*self & 0xfc;
    }
    uVar1 = 1;
    goto LAB_0800a336;
  }
  uVar2 = ((uVar2 & 0xff) >> 2) - 0x16;
  if (0x10 < uVar2) goto case_0800A2BC;
  switch(*(uint *)(PTR_case_0800A278_0800a274 + uVar2 * 4) & 0xfffffffe) {
  case 0x800a278:
  case 0x800a2bc:
case_0800A2BC:
    uVar1 = 0;
    goto LAB_0800a336;
  case 0x800a2c0:
    iVar3 = 0;
    uVar1 = 3;
    break;
  case 0x800a2c6:
    iVar3 = 0;
    uVar1 = 5;
    break;
  case 0x800a2cc:
    iVar3 = 0;
    uVar1 = 6;
    break;
  case 0x800a2d2:
    iVar3 = 3;
    uVar1 = 4;
    break;
  case 0x800a2d8:
    iVar3 = 1;
    uVar1 = 7;
    break;
  case 0x800a2de:
    iVar3 = 2;
    uVar1 = 8;
  }
  uVar2 = param_2 - iVar3;
  if (0 < (int)uVar2) {
    if ((*self & 0xfffff) >> 0x11 <= uVar2) {
      *(byte *)((int)self + 2) = *(byte *)((int)self + 2) & 0xf1;
      *(byte *)((int)self + 1) = *(byte *)((int)self + 1) & 0xf0;
      if ((*self & 3) != 3) {
        *(byte *)self = (byte)*self & 0xfc;
      }
      goto LAB_0800a336;
    }
    *(byte *)((int)self + 2) =
         *(byte *)((int)self + 2) & 0xf1 |
         (byte)((((*self & 0xfffff) >> 0x11) - uVar2 & 7) << 1);
  }
  uVar1 = 2;
LAB_0800a336:
  return CONCAT44(in_lr,uVar1);
}

/* 0x0800A33C (140B) | FieldPlot_Sub_0800A33C (orig: func_0800A33C) | origin: pure | domain: FieldPlot | HIGH / stanhash_elf_class */
/* FieldPlot_Sub_0800A33C @ 0x0800A33C mode=THUMB size=0x8C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FieldPlot_Sub_0800A33C @ 0x0800A33C  mode=THUMB  size=0xFC  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 FieldPlot_Sub_0800A33C(uint *self,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*self & 0xfff) >> 8 == 0) {
LAB_0800a360:
    uVar2 = 0;
  }
  else {
    uVar1 = (*self & 0xff) >> 2;
    if (uVar1 == 0x17) {
      iVar3 = 0;
      uVar2 = 1;
    }
    else {
      if (((uVar1 < 0x17) || (0x1e < uVar1)) || (uVar1 < 0x1b)) goto LAB_0800a360;
      iVar3 = 1;
      uVar2 = 2;
    }
    uVar1 = param_2 - iVar3;
    if (0 < (int)uVar1) {
      if ((*self & 0xfffff) >> 0x11 <= uVar1) {
        *(byte *)((int)self + 2) = *(byte *)((int)self + 2) & 0xf1;
        *(byte *)((int)self + 1) = *(byte *)((int)self + 1) & 0xf0;
        if ((*self & 3) != 3) {
          *(byte *)self = (byte)*self & 0xfc;
        }
        goto LAB_0800a3c2;
      }
      *(byte *)((int)self + 2) =
           *(byte *)((int)self + 2) & 0xf1 |
           (byte)((((*self & 0xfffff) >> 0x11) - uVar1 & 7) << 1);
    }
    uVar2 = 3;
  }
LAB_0800a3c2:
  return CONCAT44(in_lr,uVar2);
}

/* 0x0800A438 (40B) | FieldPlot_Sub_0800A438 (orig: func_0800A438) | origin: pure | domain: FieldPlot | HIGH / stanhash_elf_class */
/* FieldPlot_Sub_0800A438 @ 0x0800A438 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FieldPlot_Sub_0800A438 @ 0x0800A438  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 FieldPlot_Sub_0800A438(uint *self)

{
  undefined4 in_lr;
  bool bVar1;
  
  bVar1 = (*self & 3) == 1;
  if (bVar1) {
    *(byte *)self = (byte)*self & 0xfc | 2;
  }
  return CONCAT44(in_lr,(uint)bVar1);
}

/* 0x0800A460 (68B) | FieldPlot_Sub_0800A460 (orig: func_0800A460) | origin: pure | domain: FieldPlot | HIGH / stanhash_elf_class */
/* FieldPlot_Sub_0800A460 @ 0x0800A460 mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FieldPlot_Sub_0800A460 @ 0x0800A460  mode=THUMB  size=0x44  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 FieldPlot_Sub_0800A460(uint *self,char param_2)

{
  undefined4 in_lr;
  
  if (((*self & 3) - 1 < 2) && ((*self & 0xfff) >> 8 == 0)) {
    *(byte *)((int)self + 1) = *(byte *)((int)self + 1) & 0xf0 | 1;
    *(byte *)self = (byte)*self & 3 | param_2 << 2;
    *self = *self & _DAT_0800a4a0;
  }
  return in_lr;
}

/* 0x0800A4A4 (548B) | FieldPlot_Ctor_A4A4 (orig: func_0800A4A4) | origin: pure | domain: FieldPlot | HIGH / vtable_algebra */
/* FieldPlot_Ctor_A4A4 @ 0x0800A4A4 mode=THUMB size=0x224 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FieldPlot_Ctor_A4A4 @ 0x0800A4A4  mode=THUMB  size=0x224  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 FieldPlot_Ctor_A4A4(undefined **self,uint *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  uint3 uStack_14;
  undefined1 auStack_10 [4];
  
  iVar4 = _DAT_0800a680;
  uVar3 = *param_2;
  uVar2 = (uVar3 & 0xfff) >> 8;
  if (uVar2 == 5) {
    uVar2 = ((uVar3 & 0xff) >> 2) - 2;
    if (uVar2 < 0x13) {
      switch(*(uint *)(PTR_case_0800A4D8_0800a4d4 + uVar2 * 4) & 0xfffffffe) {
      case 0x800a4d8:
        self = &PTR_case_0800A918_0800a894;
      case 0x800a524:
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0 | 2;
        uVar2 = *param_2 & _DAT_0800a540 | 0x4000;
        break;
      case 0x800a544:
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0 | 3;
        uVar2 = *param_2 & _DAT_0800a560 | 0x6000;
        break;
      case 0x800a564:
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0 | 4;
        uVar2 = *param_2 & _DAT_0800a580 | 0x6000;
        break;
      case 0x800a584:
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0 | 4;
        uVar2 = *param_2 & _DAT_0800a5a0 | 0xb000;
        break;
      case 0x800a5a4:
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0 | 4;
        uVar2 = *param_2 & _DAT_0800a5c0 | 0xf000;
        break;
      case 0x800a5c4:
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0 | 3;
        uVar2 = *param_2 & _DAT_0800a5e0 | 0x6000;
        break;
      case 0x800a5e4:
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0 | 2;
        uVar2 = *param_2 & _DAT_0800a600 | 0x3000;
        break;
      case 0x800a604:
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0 | 4;
        uVar2 = *param_2 & _DAT_0800a620 | 0x5000;
        break;
      case 0x800a624:
        goto case_0800A624;
      case 0x800a678:
        goto case_0800A678;
      }
    }
    else {
case_0800A624:
      *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0;
      uVar2 = *param_2 & _DAT_0800a63c;
    }
    *param_2 = uVar2;
    iVar4 = _DAT_0800a640;
LAB_0800a662:
    uVar2 = (*param_2 & 0xff) >> 2;
    sVar1 = *(short *)(uVar2 * 0xc + iVar4 + 10);
    if (sVar1 != 0xff) {
      if (uVar2 < 0xf) {
        func_0x0800dca8(&uStack_14);
        RucksackItem_Ctor(self,(uint)uStack_14);
      }
      else {
        func_0x0800df50(auStack_10,sVar1);
        RucksackItem_Ctor_F040(self,auStack_10[0]);
      }
      goto LAB_0800a6be;
    }
  }
  else if (uVar2 == 8) {
    if (*(short *)(((uVar3 & 0xff) >> 2) * 0xc + _DAT_0800a680 + 10) != 0xff) {
      *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0;
    }
    goto LAB_0800a662;
  }
case_0800A678:
  func_0x0800efec(self);
LAB_0800a6be:
  return CONCAT44(in_lr,self);
}

/* 0x0800A6C8 (44B) | FieldPlot_Sub_0800A6C8 (orig: func_0800A6C8) | origin: pure | domain: FieldPlot | HIGH / stanhash_elf_class */
/* FieldPlot_Sub_0800A6C8 @ 0x0800A6C8 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FieldPlot_Sub_0800A6C8 @ 0x0800A6C8  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 FieldPlot_Sub_0800A6C8(uint *self,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((((*self & 0xfff) >> 8 == 0) && (iVar1 = func_0x0800df54(param_2), 0x30 < iVar1)) &&
     ((iVar1 < 0x33 || ((iVar1 < 0x5b && (0x58 < iVar1)))))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

/* 0x0800A6F4 (152B) | FieldPlot_Sub_0800A6F4 (orig: func_0800A6F4) | origin: pure | domain: FieldPlot | HIGH / stanhash_elf_class */
/* FieldPlot_Sub_0800A6F4 @ 0x0800A6F4 mode=THUMB size=0x98 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FieldPlot_Sub_0800A6F4 @ 0x0800A6F4  mode=THUMB  size=0x98  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 FieldPlot_Sub_0800A6F4(uint *self,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  undefined4 in_lr;
  
  cVar1 = FieldPlot_Sub_0800A6C8();
  if (cVar1 != '\0') {
    iVar3 = func_0x0800df54(param_2);
    if (iVar3 == 0x32) {
      bVar4 = (byte)*self & 3;
      bVar2 = 0x5c;
    }
    else if (iVar3 < 0x33) {
      if (iVar3 != 0x31) {
        return in_lr;
      }
      bVar4 = (byte)*self & 3;
      bVar2 = 0x58;
    }
    else if (iVar3 == 0x59) {
      bVar4 = (byte)*self & 3;
      bVar2 = 0x60;
    }
    else {
      if (iVar3 != 0x5a) {
        return in_lr;
      }
      bVar4 = (byte)*self & 3;
      bVar2 = 0x68;
    }
    *(byte *)self = bVar4 | bVar2;
    *(byte *)((int)self + 1) = *(byte *)((int)self + 1) & 0xf0 | 8;
    if ((*self & 3) != 3) {
      *(byte *)self = (byte)*self & 0xfc;
    }
    bVar2 = FieldPlot_Sub_0800A014(self);
    *(byte *)((int)self + 2) = *(byte *)((int)self + 2) & 0xf1 | (bVar2 & 7) << 1;
  }
  return in_lr;
}

/* 0x0800A78C (36B) | FieldPlot_Sub_0800A78C (orig: func_0800A78C) | origin: pure | domain: FieldPlot | HIGH / stanhash_elf_class */
/* FieldPlot_Sub_0800A78C @ 0x0800A78C mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FieldPlot_Sub_0800A78C @ 0x0800A78C  mode=THUMB  size=0x24  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 FieldPlot_Sub_0800A78C(uint *self)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((((*self & 0xfff) >> 8 == 0) || (uVar1 = (*self & 0xff) >> 2, 0x26 < uVar1)) ||
     (uVar1 < 0x1b)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

/* 0x0800A7B0 (856B) | FieldPlot_DayUpdate (orig: func_0800A7B0) | origin: pure | domain: FieldPlot | EXACT / stanhash_elf */
/* FieldPlot_DayUpdate @ 0x0800A7B0 mode=THUMB size=0x358 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FieldPlot_DayUpdate @ 0x0800A7B0  mode=THUMB  size=0x358  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 FieldPlot_DayUpdate(uint *self,int param_2,byte *param_3)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  if (((*self & 0xfff) >> 8 == 1) && (uVar1 = (*self & 0xff) >> 2, uVar1 < 0x14)) {
    switch(*(uint *)(PTR_case_0800A7DC_0800a7d8 + uVar1 * 4) & 0xfffffffe) {
    case 0x800a7dc:
      break;
    case 0x800a836:
      if ((*param_3 & 3) == 1) goto LAB_0800a856;
      goto LAB_0800a84c;
    case 0x800a842:
      if ((*param_3 & 3) != 2) goto LAB_0800a84c;
      goto LAB_0800a856;
    }
    if ((*param_3 & 3) != 0) {
LAB_0800a84c:
      *(byte *)((int)self + 1) = *(byte *)((int)self + 1) & 0xf0;
    }
  }
LAB_0800a856:
  if (((*self & 0xfff) >> 8 == 0) || (uVar1 = (*self & 0xff) >> 2, 0x26 < uVar1)) {
case_0800A9B2:
    if ((*self & 3) == 2) {
      *(byte *)self = (byte)*self & 0xfc | 1;
    }
  }
  else {
    switch(*(uint *)(PTR_case_0800A87C_0800a878 + uVar1 * 4) & 0xfffffffe) {
    case 0x800a87c:
      break;
    case 0x800a94c:
      if (((*param_3 & 3) == 3) || (uVar1 = *self, (uVar1 & 0xfff) >> 8 == 5))
      goto case_0800A9B2;
      uVar5 = _DAT_0800a9f0 & uVar1;
      uVar1 = uVar5 | (((uVar1 & 0x1ffff) >> 0xc) + 1 & 0x1f) << 0xc;
      *self = uVar1;
      uVar5 = (uVar5 & 0xfff) >> 8;
      if (uVar5 == 7) {
        uVar5 = 1;
      }
      goto LAB_0800a97e;
    case 0x800a9b2:
      goto case_0800A9B2;
    }
    uVar5 = *self;
    uVar1 = (uVar5 & 0xfff) >> 8;
    if ((uVar1 == 0) || (4 < uVar1)) goto case_0800A9B2;
    if ((uVar5 & 3) == 2) {
      uVar4 = _DAT_0800a948 & uVar5;
      uVar1 = uVar4 | (((uVar5 & 0x1ffff) >> 0xc) + 1 & 0x1f) << 0xc;
      *self = uVar1;
      uVar5 = (uVar4 & 0xfff) >> 8;
LAB_0800a97e:
      iVar3 = ((uVar1 & 0xff) >> 2) * 0x54;
      if (uVar5 != *(uint *)(((uVar1 & 0x1ffff) >> 0xc) * 4 + iVar3 + _DAT_0800a9f4)) {
        *(byte *)((int)self + 1) =
             *(byte *)((int)self + 1) & 0xf0 |
             (byte)*(undefined4 *)(((uVar1 & 0x1ffff) >> 0xc) * 4 + iVar3 + _DAT_0800a9f4) & 0xf;
      }
      goto case_0800A9B2;
    }
  }
  pbVar2 = _DAT_0800aa00;
  if ((param_2 != 3) &&
     (((param_2 < 4 || (pbVar2 = _DAT_0800aa30, param_2 != 4)) &&
      (pbVar2 = (byte *)((*param_3 & 3) * 0x10 + _DAT_0800a9f8), param_2 == 0)))) {
    pbVar2 = pbVar2 + 8;
  }
  uVar5 = *self;
  uVar1 = (uVar5 & 0xfff) >> 8;
  if (uVar1 == 0) {
    uVar5 = uVar5 & 3;
    if ((uVar5 == 0) || (uVar5 == 3)) {
      iVar3 = func_0x080d11e4();
      uVar1 = iVar3 >> 3 & 0xff;
      uVar5 = (uint)pbVar2[4];
      if (uVar5 <= uVar1) {
        if (uVar1 < pbVar2[5] + uVar5) {
          uVar6 = 0x16;
        }
        else {
          if ((uint)pbVar2[6] + (uint)pbVar2[5] + uVar5 <= uVar1) goto LAB_0800aad2;
          uVar6 = 0x17;
        }
        goto LAB_0800aab6;
      }
    }
    else {
      if (uVar5 != 1) goto LAB_0800aad2;
      iVar3 = func_0x080d11e4();
      uVar1 = iVar3 >> 3 & 0xff;
      uVar5 = (uint)pbVar2[1];
      if (uVar1 < uVar5) {
        func_0x0800a120(self,0);
        goto LAB_0800aad2;
      }
      if (pbVar2[2] + uVar5 <= uVar1) {
        if (uVar1 < (uint)pbVar2[3] + (uint)pbVar2[2] + uVar5) {
          FieldPlot_Sub_0800A134(self,0x16,8);
        }
        goto LAB_0800aad2;
      }
    }
    uVar6 = 0x15;
  }
  else {
    if (uVar1 == 1) {
      iVar3 = func_0x080d11e4();
      if ((iVar3 >> 3 & 0xffU) < (uint)pbVar2[7]) {
        *(byte *)((int)self + 1) = *(byte *)((int)self + 1) & 0xf0;
      }
      goto LAB_0800aad2;
    }
    if (((uVar5 & 0xff) >> 2 != 0x18) ||
       (iVar3 = func_0x080d11e4(), (uint)*pbVar2 <= (iVar3 >> 3 & 0xffU))) goto LAB_0800aad2;
    uVar6 = 0x19;
  }
LAB_0800aab6:
  FieldPlot_Sub_0800A134(self,uVar6,8);
LAB_0800aad2:
  if (param_2 == 0) {
    if ((*self & 3) == 2) {
      func_0x0800a120(self,1);
    }
  }
  else if ((*self & 3) == 1) {
    func_0x0800a120(self,2);
  }
  return in_lr;
}

/* 0x0800AB08 (1048B) | FieldPlot_Sub_0800AB08 (orig: func_0800AB08) | origin: pure | domain: FieldPlot | HIGH / stanhash_elf_class */
/* FieldPlot_Sub_0800AB08 @ 0x0800AB08 mode=THUMB size=0x418 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FieldPlot_Sub_0800AB08 @ 0x0800AB08  mode=THUMB  size=0x418  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 FieldPlot_Sub_0800AB08(uint *self,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (param_2 == 1) {
    uVar3 = *self;
    if ((uVar3 & 0xfff) >> 8 == 0) {
      return in_lr;
    }
    uVar2 = (uVar3 & 0xff) >> 2;
    if (0x26 < uVar2) {
      return in_lr;
    }
    switch(*(uint *)(PTR_case_0800AC7C_0800ac78 + uVar2 * 4) & 0xfffffffe) {
    case 0x800ac7c:
      break;
    case 0x800ae16:
case_0800AE16:
      *(byte *)((int)self + 1) = *(byte *)((int)self + 1) & 0xf0;
      *(byte *)self = (byte)*self & 0xfc | 1;
    case 0x800af1a:
      goto case_0800AF1A;
    }
    if ((uVar3 & 0xfff) >> 8 != 1) goto LAB_0800adf8;
LAB_0800adec:
    *(byte *)((int)self + 1) = *(byte *)((int)self + 1) & 0xf0;
  }
  else {
    if (param_2 < 2) {
      if (param_2 != 0) {
        return in_lr;
      }
      func_0x0800a120(self,0);
      if (((*self & 0xfff) >> 8 != 0) && (uVar3 = (*self & 0xff) >> 2, uVar3 < 0x27)) {
        switch(*(uint *)(PTR_case_0800AB54_0800ab50 + uVar3 * 4) & 0xfffffffe) {
        case 0x800ab54:
          self = (uint *)&stack0x00000090;
        case 0x800abf0:
          *(byte *)((int)self + 1) = *(byte *)((int)self + 1) & 0xf0 | 7;
          *(byte *)self = (byte)*self & 0xfc | 1;
          *self = *self & _DAT_0800ac18;
          break;
        case 0x800ac1c:
          *(byte *)((int)self + 1) = *(byte *)((int)self + 1) & 0xf0;
        }
      }
      if ((_DAT_0800ac50 & (ushort)*self) != 0) {
        return in_lr;
      }
      iVar1 = func_0x080d11e4();
      if (9 < (iVar1 >> 3 & 0xffU)) {
        return in_lr;
      }
      FieldPlot_Sub_0800A134(self,0x15,8);
      return in_lr;
    }
    if (param_2 != 2) {
      if (param_2 != 3) {
        return in_lr;
      }
      *(byte *)self = (byte)*self | 3;
      if ((*self & 0xfff) >> 8 == 0) {
        return in_lr;
      }
      uVar3 = (*self & 0xff) >> 2;
      if (0x26 < uVar3) {
        return in_lr;
      }
      switch(*(uint *)(PTR_case_0800AE58_0800ae54 + uVar3 * 4) & 0xfffffffe) {
      case 0x800ae58:
        break;
      case 0x800af10:
        *(byte *)((int)self + 1) = *(byte *)((int)self + 1) & 0xf0;
        return in_lr;
      case 0x800af1a:
        return in_lr;
      }
      *(byte *)((int)self + 1) = *(byte *)((int)self + 1) & 0xf0 | 7;
      *self = *self & _DAT_0800af0c;
      return in_lr;
    }
    uVar3 = *self;
    if ((uVar3 & 0xfff) >> 8 == 0) {
      return in_lr;
    }
    uVar2 = (uVar3 & 0xff) >> 2;
    if (0x26 < uVar2) {
      return in_lr;
    }
    switch(*(uint *)(PTR_case_0800AD48_0800ad44 + uVar2 * 4) & 0xfffffffe) {
    case 0x800ad48:
      break;
    case 0x800ae16:
      goto case_0800AE16;
    case 0x800af1a:
      goto case_0800AF1A;
    }
    if ((uVar3 & 0xfff) >> 8 == 1) goto LAB_0800adec;
LAB_0800adf8:
    *(byte *)((int)self + 1) = *(byte *)((int)self + 1) & 0xf0 | 6;
  }
  *(byte *)self = (byte)*self & 0xfc | 1;
case_0800AF1A:
  return in_lr;
}

/* 0x0800AF20 (60B) | FieldPlot_Sub_0800AF20 (orig: func_0800AF20) | origin: pure | domain: FieldPlot | HIGH / stanhash_elf_class */
/* FieldPlot_Sub_0800AF20 @ 0x0800AF20 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FieldPlot_Sub_0800AF20 @ 0x0800AF20  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 FieldPlot_Sub_0800AF20(uint *self)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = *self & 3;
  uVar2 = _DAT_0800af48;
  if (uVar1 != 1) {
    if (uVar1 < 2) {
      uVar2 = _DAT_0800af40;
      if (uVar1 == 0) goto LAB_0800af56;
    }
    else {
      uVar2 = _DAT_0800af50;
      if (uVar1 == 2) goto LAB_0800af56;
    }
    uVar2 = 0;
  }
LAB_0800af56:
  return CONCAT44(in_lr,uVar2);
}

/* 0x0800AF5C (384B) | FieldPlot_Ctor_AF5C (orig: func_0800AF5C) | origin: pure | domain: FieldPlot | HIGH / vtable_algebra */
/* FieldPlot_Ctor_AF5C @ 0x0800AF5C mode=THUMB size=0x180 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* FieldPlot_Ctor_AF5C @ 0x0800AF5C  mode=THUMB  size=0x180  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 FieldPlot_Ctor_AF5C(uint *self,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  puVar6 = &stack0xffffffec;
  uVar3 = (*self & 0xff) >> 2;
  uVar5 = 0xff;
  uVar1 = (*self & 0xfff) >> 8;
  iVar2 = _DAT_0800af8c;
  if ((uVar1 == 0) || (iVar2 = _DAT_0800af98, uVar1 == 1)) goto LAB_0800b0d4;
  if (uVar3 == 0x14) {
    if (uVar1 == 7) {
      uVar5 = 0xc;
    }
    else {
      if (uVar1 == 4) {
        uVar5 = 4;
      }
      else if (uVar1 < 5) {
        if (uVar1 == 3) {
          uVar5 = 0;
        }
      }
      else if (uVar1 == 5) {
        uVar5 = 8;
      }
      if ((((param_2 == (uint *)0x0) || ((*param_2 & 0xff) >> 2 != 0x14)) ||
          (uVar1 = (*param_2 & 0xfff) >> 8, uVar1 == 7)) ||
         (uVar4 = (*self & 0xfff) >> 8, uVar1 < uVar4)) {
        if (((param_3 == (uint *)0x0) || ((*param_3 & 0xff) >> 2 != 0x14)) ||
           ((uVar1 = (*param_3 & 0xfff) >> 8, uVar1 == 7 || (uVar1 < (*self & 0xfff) >> 8))))
        goto case_0800B0CC;
        uVar5 = uVar5 + 1;
      }
      else if (((param_3 == (uint *)0x0) || ((*param_3 & 0xff) >> 2 != 0x14)) ||
              ((uVar1 = (*param_3 & 0xfff) >> 8, uVar1 == 7 || (uVar1 < uVar4)))) {
        uVar5 = uVar5 + 2;
      }
      else {
        uVar5 = uVar5 + 3;
      }
      uVar5 = uVar5 & 0xff;
    }
  }
  else if (uVar1 - 2 < 7) {
    switch(*(uint *)(PTR_case_0800AFB8_0800afb4 + (uVar1 - 2) * 4) & 0xfffffffe) {
    case 0x800afb8:
      puVar6 = &stack0x0000000c;
    case 0x800afd4:
      uVar5 = (uint)*(byte *)(((*self & 0xff) >> 2) * 0xc + _DAT_0800af88 + 4);
      break;
    case 0x800afe6:
      uVar5 = (uint)*(byte *)(((*self & 0xff) >> 2) * 0xc + _DAT_0800af88 + 5);
      break;
    case 0x800aff8:
      uVar5 = (uint)*(byte *)(((*self & 0xff) >> 2) * 0xc + _DAT_0800af88 + 6);
      break;
    case 0x800b00a:
      uVar5 = (uint)*(byte *)(((*self & 0xff) >> 2) * 0xc + _DAT_0800af88 + 7);
      break;
    case 0x800b01c:
      uVar5 = (uint)*(byte *)(((*self & 0xff) >> 2) * 0xc + _DAT_0800af88 + 8);
      break;
    case 0x800b02e:
      uVar5 = 1;
      if ((*self & 3) != 3) {
        uVar5 = 0;
      }
    }
  }
case_0800B0CC:
  iVar2 = uVar5 * 0xc + *(int *)(uVar3 * 0xc + _DAT_0800af88);
LAB_0800b0d4:
  return CONCAT44(*(undefined4 *)(puVar6 + 0x10),iVar2);
}

/* 0x080AD938 (12B) | FieldPlot_Sub_080AD938 (orig: func_080AD938) | origin: pure | domain: FieldPlot | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 FieldPlot_Sub_080CFFC0();
void FieldPlot_Sub_080AD938(int arg0) {
  FieldPlot_Sub_080CFFC0(*(u32 *)(arg0 + 4));
}

/* 0x080CFEA8 (280B) | FieldPlot_Sub_080CFEA8 (orig: func_080CFEA8) | origin: wip | domain: FieldPlot | MEDIUM / graph_algebra */
void FieldPlot_Sub_080CFEA8(int self,int param_2,int param_3,u32 param_4,int param_5) {
  int bVar1;
  int iVar2;
  u32 uVar3;
  u8 *pbVar4;
  u8 *pbVar5;
  uVar3 = (u32)*(u16 *)(iVar2 + 0x20);
  iVar2 = Code_809E804_GetMapData(*(u32 *)(self + 4));
  iVar2 = FieldPlot_Sub_0800AF20(param_4);
  if (iVar2 != 0) {
    LibC_memcpy(param_3 * uVar3 * 2 + param_2 * 2 + *(int *)(self + 0x10),iVar2,4);
    LibC_memcpy((param_3 + 1) * uVar3 * 2 + param_2 * 2 + *(int *)(self + 0x10),iVar2 + 4,4);
    *(u8 *)(self + 0x29) = 1;
  }
  if (param_5 != 0) {
    iVar2 = param_2 * 2;
    LibC_memcpy((param_3 + -1) * uVar3 * 2 + iVar2 + *(int *)(self + 0x18),param_5,4);
    LibC_memcpy(param_3 * uVar3 * 2 + iVar2 + *(int *)(self + 0x14),param_5 + 4,4);
    LibC_memcpy(uVar3 * (param_3 + 1) * 2 + iVar2 + *(u32 *)(0x14 + self),param_5 + 8,4);
    *(u8 *)(self + 0x29) = 1;
  }
  bVar1 = FieldPlot_Sub_0800A07C(param_4);
  pbVar5 = (u8 *)((param_2 + param_3 * uVar3) * 4 + *(int *)(self + 0x2c));
  pbVar4 = (s16)(u8 *)((uVar3 * (param_3 + 1) + param_2) * 4 + *(int *)(self + 0x2c));
  bVar1 = bVar1 & 1;
  pbVar4[4] = pbVar4[4] & 0xfe | bVar1;
  *pbVar4 = *pbVar4 & 0xfe | bVar1;
  pbVar5[4] = pbVar5[4] & 0xfe | bVar1;
  *pbVar5 = *pbVar5 & 0xfe | bVar1;
}

/* 0x080CFFC0 (544B) | FieldPlot_Sub_080CFFC0 (orig: func_080CFFC0) | origin: wip | domain: FieldPlot | MEDIUM / graph_algebra */
void FieldPlot_Sub_080CFFC0(int self,int param_2,int param_3,u32 *param_4) {
  bool bVar1;
  u32 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  *(u32 *)(self + 0x94 + (param_2 + param_3 * 0xc) * 4) = *param_4;
  iVar3 = param_3 + -1;
  bVar1 = false;
  if ((((-1 < param_2) && (-1 < iVar3)) && (param_2 < 0xc)) && (iVar3 < 7)) {
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = self + 0x94 + (param_2 + iVar3 * 0xc) * 4;
  }
  else {
    iVar3 = 0;
  }
  iVar8 = self + 0x94;
  iVar4 = param_3 + -1;
  iVar7 = param_2 << 1;
  if (iVar3 != 0) {
    iVar3 = (param_2 + iVar4 * 0xc) * 4 + iVar8;
    bVar1 = false;
    if (((-1 < param_2) && (-1 < param_3)) && ((param_2 < 0xc && (param_3 < 7)))) {
      bVar1 = true;
    }
    if (bVar1) {
      iVar7 = iVar8 + (param_2 + param_3 * 0xc) * 4;
    }
    else {
      iVar7 = 0;
    }
    iVar6 = param_3 + -2;
    bVar1 = false;
    if (((-1 < param_2) && (-1 < iVar6)) && ((param_2 < 0xc && (iVar6 < 7)))) {
      bVar1 = true;
    }
    if (bVar1) {
      iVar6 = iVar8 + (param_2 + iVar6 * 0xc) * 4;
    }
    else {
      iVar6 = 0;
    }
    uVar2 = FieldPlot_Ctor_AF5C(iVar3,iVar7,iVar6);
    iVar7 = param_2 * 2;
    FieldPlot_Sub_080CFEA8(self,iVar7,iVar4 * 2 + 7,iVar3,uVar2);
  }
  iVar3 = (param_2 + param_3 * 0xc) * 4 + iVar8;
  iVar6 = param_3 + 1;
  bVar1 = false;
  if ((((-1 < param_2) && (-1 < iVar6)) && (param_2 < 0xc)) && (iVar6 < 7)) {
    bVar1 = true;
  }
  if (bVar1) {
    iVar5 = iVar8 + (param_2 + iVar6 * 0xc) * 4;
  }
  else {
    iVar5 = 0;
  }
  bVar1 = false;
  if (((-1 < param_2) && (-1 < iVar4)) && ((param_2 < 0xc && (iVar4 < 7)))) {
    bVar1 = true;
  }
  if (bVar1) {
    iVar4 = iVar8 + (param_2 + iVar4 * 0xc) * 4;
  }
  else {
    iVar4 = 0;
  }
  uVar2 = FieldPlot_Ctor_AF5C(iVar3,iVar5,iVar4);
  FieldPlot_Sub_080CFEA8(self,iVar7,param_3 * 2 + 7,iVar3,uVar2);
  bVar1 = false;
  if (((-1 < param_2) && (-1 < iVar6)) && ((param_2 < 0xc && (iVar6 < 7)))) {
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = iVar8 + (param_2 + iVar6 * 0xc) * 4;
  }
  else {
    iVar3 = 0;
  }
  if (iVar3 != 0) {
    iVar3 = (param_2 + iVar6 * 0xc) * 4 + iVar8;
    iVar4 = param_3 + 2;
    bVar1 = false;
    if ((((-1 < param_2) && (-1 < iVar4)) && (param_2 < 0xc)) && (iVar4 < 7)) {
      bVar1 = true;
    }
    if (bVar1) {
      iVar4 = iVar8 + (param_2 + iVar4 * 0xc) * 4;
    }
    else {
      iVar4 = 0;
    }
    bVar1 = false;
    if (((-1 < param_2) && (-1 < param_3)) && ((param_2 < 0xc && (param_3 < 7)))) {
      bVar1 = true;
    }
    if (bVar1) {
      iVar8 = iVar8 + (param_2 + param_3 * 0xc) * 4;
    }
    else {
      iVar8 = 0;
    }
    uVar2 = FieldPlot_Ctor_AF5C(iVar3,iVar4,iVar8);
    FieldPlot_Sub_080CFEA8(self,iVar7,iVar6 * 2 + 7,iVar3,uVar2);
  }
}

