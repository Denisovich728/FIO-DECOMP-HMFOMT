/* FIO-DECOMP-HMFOMT :: Port Readable Module: Barn (51 functions) */
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

/* 0x0800CDBC (156B) | Barn_Ctor (orig: func_0800CDBC) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_Ctor @ 0x0800CDBC mode=THUMB size=0x9C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_Ctor @ 0x0800CDBC  mode=THUMB  size=0xB8  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Barn_Ctor(uint *self)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(byte *)self = (byte)*self & 0xfe;
  *(ushort *)self = (ushort)_DAT_0800ce48 & (ushort)*self;
  *(byte *)((int)self + 1) = *(byte *)((int)self + 1) & 0xe7;
  *self = *self & _DAT_0800ce4c;
  *(byte *)((int)self + 3) = *(byte *)((int)self + 3) & 0x1f;
  *(ushort *)(self + 1) = (ushort)_DAT_0800ce50 & (ushort)self[1];
  self[1] = self[1] & _DAT_0800ce54;
  *(byte *)(self + 3) = 0;
  *(byte *)(self + 7) = 0;
  puVar2 = self + 0xb;
  iVar3 = 0xf;
  do {
    func_0x0800d9fc(puVar2);
    puVar2 = puVar2 + 0xf;
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  pbVar1 = (byte *)((int)self + 7);
  iVar3 = 2;
  do {
    *pbVar1 = 0xff;
    iVar3 = iVar3 + -1;
    pbVar1 = pbVar1 + 1;
  } while (0 < iVar3);
  return CONCAT44(in_lr,self);
}

/* 0x0800CE74 (40B) | Barn_GetCapacity (orig: func_0800CE74) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_GetCapacity @ 0x0800CE74 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_GetCapacity @ 0x0800CE74  mode=THUMB  size=0x34  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Barn_GetCapacity(byte *self)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_c;
  uint auStack_8 [2];
  
  uStack_c = 0x10;
  auStack_8[0] = (*self & 1) * 8 + 8;
  puVar1 = &uStack_c;
  if (auStack_8[0] < 0x10) {
    puVar1 = auStack_8;
  }
  return CONCAT44(in_lr,*puVar1);
}

/* 0x0800CEA8 (44B) | Barn_HasBushelForStall (orig: func_0800CEA8) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_HasBushelForStall @ 0x0800CEA8 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_HasBushelForStall @ 0x0800CEA8  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Barn_HasBushelForStall(uint *self,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = Barn_GetCapacity();
  if (param_2 < uVar1) {
    uVar1 = -((*self & 0x1fffffff) >> 0xd & 1 << (param_2 & 0xff)) >> 0x1f;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0800CED4 (44B) | Barn_HasBushelForPregnancyStall (orig: func_0800CED4) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_HasBushelForPregnancyStall @ 0x0800CED4 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_HasBushelForPregnancyStall @ 0x0800CED4  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Barn_HasBushelForPregnancyStall(int self,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = func_0x0800ce9c();
  if (param_2 < uVar1) {
    uVar1 = -((*(byte *)(self + 3) & 0x7f) >> 5 & 1 << (param_2 & 0xff)) >> 0x1f;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0800CF10 (40B) | Barn_GetCow (orig: func_0800CF10) | origin: pure | domain: Barn | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 Barn_GetCapacity();
u32 Barn_GetCow(int arg0, u32 arg1) {
  if (arg1 < Barn_GetCapacity()) {
    return Barn_AsCow(arg0 + 0x2c + (arg1 * 0x3c));
  }
  return 0;
}

/* 0x0800CF38 (40B) | Barn_GetSheep (orig: func_0800CF38) | origin: pure | domain: Barn | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 Barn_GetCapacity();
u32 Barn_GetSheep(int arg0, u32 arg1) {
  if (arg1 < Barn_GetCapacity()) {
    return Barn_AsSheep(arg0 + 0x2c + (arg1 * 0x3c));
  }
  return 0;
}

/* 0x0800CF60 (40B) | Barn_GetBarnAnimal (orig: func_0800CF60) | origin: pure | domain: Barn | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 Barn_GetCapacity();
u32 Barn_GetBarnAnimal(int arg0, u32 arg1) {
  if (arg1 < Barn_GetCapacity()) {
    return Barn_AsBarnAnimal(arg0 + 0x2c + (arg1 * 0x3c));
  }
  return 0;
}

/* 0x0800CF88 (60B) | Barn_GetNextFreeStall (orig: func_0800CF88) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_GetNextFreeStall @ 0x0800CF88 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_GetNextFreeStall @ 0x0800CF88  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Barn_GetNextFreeStall(int self,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = Barn_GetCapacity();
  if (param_2 < uVar2) {
    self = param_2 * 0x3c + 0x2c + self;
    do {
      cVar1 = func_0x0800da08(self);
      if (cVar1 != '\0') goto LAB_0800cfbe;
      self = self + 0x3c;
      param_2 = param_2 + 1;
    } while (param_2 < uVar2);
  }
  param_2 = 0xffffffff;
LAB_0800cfbe:
  return CONCAT44(in_lr,param_2);
}

/* 0x0800CFC4 (48B) | Barn_CountCows (orig: func_0800CFC4) | origin: pure | domain: Barn | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Barn_GetCapacity();
extern u32 Barn_AsCow();
u32 Barn_CountCows(int arg0) {
  u32 val;
  int val2;
  u32 val3;
  int val4;
  val = Barn_GetCapacity();
  val4 = 0;
  val3 = 0;
  if (val3 < val) {
    arg0 = arg0 + 0x2c;
    do {
      val2 = Barn_AsCow(arg0);
      if (val2 != 0) {
        val4 = val4 + 1;
      }
      arg0 = arg0 + 0x3c;
      val3 = val3 + 1;
    } while (val3 < val);
  }
  return val4;
}

/* 0x0800CFF4 (48B) | Barn_CountSheeps (orig: func_0800CFF4) | origin: pure | domain: Barn | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Barn_GetCapacity();
extern u32 Barn_AsSheep();
u32 Barn_CountSheeps(int arg0) {
  u32 val;
  int val2;
  u32 val3;
  int val4;
  val = Barn_GetCapacity();
  val4 = 0;
  val3 = 0;
  if (val3 < val) {
    arg0 = arg0 + 0x2c;
    do {
      val2 = Barn_AsSheep(arg0);
      if (val2 != 0) {
        val4 = val4 + 1;
      }
      arg0 = arg0 + 0x3c;
      val3 = val3 + 1;
    } while (val3 < val);
  }
  return val4;
}

/* 0x0800D024 (52B) | Barn_CountBarnAnimals (orig: func_0800D024) | origin: pure | domain: Barn | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Barn_GetCapacity();
extern u32 func_0800DA08();
u32 Barn_CountBarnAnimals(int arg0) {
  char val;
  u32 val2;
  u32 val3;
  int val4;
  val2 = Barn_GetCapacity();
  val4 = 0;
  val3 = 0;
  if (val3 < val2) {
    arg0 = arg0 + 0x2c;
    do {
      val = func_0800DA08(arg0);
      if (val == '\0') {
        val4 = val4 + 1;
      }
      arg0 = arg0 + 0x3c;
      val3 = val3 + 1;
    } while (val3 < val2);
  }
  return val4;
}

/* 0x0800D058 (28B) | Barn_Sub_0800D058 (orig: func_0800D058) | origin: pure | domain: Barn | HIGH / stanhash_elf_class */
/* Barn_Sub_0800D058 @ 0x0800D058 mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_Sub_0800D058 @ 0x0800D058  mode=THUMB  size=0x1C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Barn_Sub_0800D058(int self)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(self + 3) < '\0') {
    uVar1 = *(byte *)(self + 4) & 0xf;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0800D074 (76B) | Barn_Sub_0800D074 (orig: func_0800D074) | origin: pure | domain: Barn | HIGH / stanhash_elf_class */
/* Barn_Sub_0800D074 @ 0x0800D074 mode=THUMB size=0x4C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_Sub_0800D074 @ 0x0800D074  mode=THUMB  size=0x5C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Barn_Sub_0800D074(short *self,undefined4 param_2,uint param_3)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  undefined4 in_lr;
  
  uVar1 = Barn_GetCapacity(param_2);
  if (uVar1 <= param_3) {
    param_3 = func_0x080d0f4e(param_3);
  }
  sVar2 = ((ushort)param_3 & 3) * 0x28;
  if (param_3 < 8) {
    sVar2 = sVar2 + 0xd8;
  }
  else {
    sVar2 = sVar2 + 0x1c8;
  }
  sVar3 = 0x90;
  if ((param_3 & 7) < 4) {
    sVar3 = 0x68;
  }
  *self = sVar2;
  self[1] = sVar3;
  return CONCAT44(in_lr,self);
}

/* 0x0800D0D0 (136B) | Barn_GetFreePregnancyStall (orig: func_0800D0D0) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_GetFreePregnancyStall @ 0x0800D0D0 mode=THUMB size=0x88 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_GetFreePregnancyStall @ 0x0800D0D0  mode=THUMB  size=0x88  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Barn_GetFreePregnancyStall(int self)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar2 = Barn_GetCapacity();
  iVar3 = Barn_CountBarnAnimals(self);
  iVar2 = iVar2 - iVar3;
  if (iVar2 < 1) {
LAB_0800d0ec:
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = 0xffffffff;
    uVar4 = func_0x0800ce9c(self);
    uVar7 = 0;
    if (uVar4 != 0) {
      do {
        pcVar6 = (char *)(self + 7 + uVar7);
        if (((*pcVar6 == -1) || (iVar3 = Barn_AsBarnAnimal(self + *pcVar6 * 0x3c + 0x2c), iVar3 == 0)
            ) || (cVar1 = func_0x0809b8b0(), cVar1 == '\0')) {
          if (uVar5 == 0xffffffff) {
            uVar5 = uVar7;
          }
        }
        else {
          iVar2 = iVar2 + -1;
          if (iVar2 < 1) goto LAB_0800d0ec;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar4);
    }
  }
  return CONCAT44(in_lr,uVar5);
}

/* 0x0800D158 (92B) | Barn_IsReadyToGiveBirth (orig: func_0800D158) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_IsReadyToGiveBirth @ 0x0800D158 mode=THUMB size=0x5C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_IsReadyToGiveBirth @ 0x0800D158  mode=THUMB  size=0x5C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Barn_IsReadyToGiveBirth(int self,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  uVar1 = func_0x0800ce9c();
  if ((((param_2 < uVar1) && (uVar1 = (uint)*(char *)(self + 7 + param_2), -1 < (int)uVar1)) &&
      (uVar2 = Barn_GetCapacity(self), uVar1 < uVar2)) &&
     (iVar3 = Barn_AsBarnAnimal(self + uVar1 * 0x3c + 0x2c), iVar3 != 0)) {
    uVar4 = 0;
    uVar1 = BarnAnimal_GetDaysPregnantHealthy();
    if ((0x14 < uVar1) || (uVar1 = BarnAnimal_GetDaysPregnant(iVar3), 0x1d < uVar1)) {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return CONCAT44(in_lr,uVar4);
}

/* 0x0800D1B4 (36B) | Barn_GetPregnancyStallLinkedStall (orig: func_0800D1B4) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_GetPregnancyStallLinkedStall @ 0x0800D1B4 mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_GetPregnancyStallLinkedStall @ 0x0800D1B4  mode=THUMB  size=0x24  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Barn_GetPregnancyStallLinkedStall(int self,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = func_0x0800ce9c();
  if (param_2 < uVar1) {
    iVar2 = (int)*(char *)(self + 7 + param_2);
  }
  else {
    iVar2 = -1;
  }
  return CONCAT44(in_lr,iVar2);
}

/* 0x0800D1D8 (36B) | Barn_Sub_0800D1D8 (orig: func_0800D1D8) | origin: pure | domain: Barn | HIGH / stanhash_elf_class */
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 func_0800D0C0();
u32 *Barn_Sub_0800D1D8(u32 *arg0) {
  struct { u16 a; u16 b; } local_buf;
  func_0800D0C0(&local_buf);
  local_buf.a += 0x20;
  *arg0 = *(u32 *)&local_buf;
  return arg0;
}

/* 0x0800D214 (40B) | Barn_Upgrade (orig: func_0800D214) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_Upgrade @ 0x0800D214 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_Upgrade @ 0x0800D214  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Barn_Upgrade(byte *self)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *self;
  if ((bVar1 & 1) == 0) {
    *self = bVar1 & 0xfe | 1U - (char)((int)((uint)bVar1 << 0x1f) >> 0x1f) & 1;
  }
  return in_lr;
}

/* 0x0800D23C (68B) | Barn_AddStoredBushels (orig: func_0800D23C) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_AddStoredBushels @ 0x0800D23C mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_AddStoredBushels @ 0x0800D23C  mode=THUMB  size=0x80  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Barn_AddStoredBushels(ushort *self,int param_2)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_14;
  uint uStack_10;
  
  uStack_14 = _DAT_0800d274;
  uStack_10 = ((*self & 0x7ff) >> 1) + param_2;
  puVar1 = &uStack_14;
  if (uStack_10 < _DAT_0800d274) {
    puVar1 = &uStack_10;
  }
  *self = (ushort)_DAT_0800d27c & *self | (ushort)((*puVar1 & _DAT_0800d278) << 1);
  return in_lr;
}

/* 0x0800D280 (60B) | Barn_SubtractStoredBushels (orig: func_0800D280) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_SubtractStoredBushels @ 0x0800D280 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* 0x0800D2BC (64B) | Barn_SetBushelForStall (orig: func_0800D2BC) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_SetBushelForStall @ 0x0800D2BC mode=THUMB size=0x40 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_SetBushelForStall @ 0x0800D2BC  mode=THUMB  size=0x40  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Barn_SetBushelForStall(uint *self,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = Barn_GetCapacity();
  if (param_2 < uVar1) {
    uVar1 = (*self & 0x1fffffff) >> 0xd;
    uVar2 = 1 << (param_2 & 0xff);
    if ((uVar1 & uVar2) == 0) {
      *self = _DAT_0800d2f8 & *self | ((uVar1 | uVar2) & _DAT_0800d2f4) << 0xd;
    }
  }
  return in_lr;
}

/* 0x0800D2FC (56B) | Barn_ClearBushelForStall (orig: func_0800D2FC) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_ClearBushelForStall @ 0x0800D2FC mode=THUMB size=0x38 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_ClearBushelForStall @ 0x0800D2FC  mode=THUMB  size=0x38  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Barn_ClearBushelForStall(uint *self,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = Barn_GetCapacity();
  if (param_2 < uVar1) {
    uVar1 = (*self & 0x1fffffff) >> 0xd;
    uVar2 = 1 << (param_2 & 0xff);
    if ((uVar1 & uVar2) != 0) {
      *self = _DAT_0800d330 & *self | (uVar1 & ~uVar2) << 0xd;
    }
  }
  return in_lr;
}

/* 0x0800D334 (56B) | Barn_SetBushelForPregnancyStall (orig: func_0800D334) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_SetBushelForPregnancyStall @ 0x0800D334 mode=THUMB size=0x38 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_SetBushelForPregnancyStall @ 0x0800D334  mode=THUMB  size=0x38  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Barn_SetBushelForPregnancyStall(int self,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = func_0x0800ce9c();
  if (param_2 < uVar1) {
    uVar1 = (*(byte *)(self + 3) & 0x7f) >> 5;
    uVar2 = 1 << (param_2 & 0xff);
    if ((uVar1 & uVar2) == 0) {
      *(byte *)(self + 3) = *(byte *)(self + 3) & 0x9f | (byte)((uVar1 | uVar2 & 3) << 5);
    }
  }
  return in_lr;
}

/* 0x0800D36C (52B) | Barn_ClearBushelForPregnancyStall (orig: func_0800D36C) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_ClearBushelForPregnancyStall @ 0x0800D36C mode=THUMB size=0x34 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_ClearBushelForPregnancyStall @ 0x0800D36C  mode=THUMB  size=0x34  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Barn_ClearBushelForPregnancyStall(int self,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = func_0x0800ce9c();
  if (param_2 < uVar1) {
    uVar1 = (*(byte *)(self + 3) & 0x7f) >> 5;
    uVar2 = 1 << (param_2 & 0xff);
    if ((uVar1 & uVar2) != 0) {
      *(byte *)(self + 3) = *(byte *)(self + 3) & 0x9f | (byte)((uVar1 & ~uVar2) << 5);
    }
  }
  return in_lr;
}

/* 0x0800D3A0 (24B) | Barn_Sub_0800D3A0 (orig: func_0800D3A0) | origin: pure | domain: Barn | HIGH / stanhash_elf_class */
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
void Barn_Sub_0800D3A0(u8 *p) {
  if ((s32)(p[1] << 28) >= 0) {
    u32 v = 8;
    v |= p[1];
    p[1] = v;
  }
}

/* 0x0800D3B8 (24B) | Barn_Sub_0800D3B8 (orig: func_0800D3B8) | origin: pure | domain: Barn | HIGH / stanhash_elf_class */
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
void Barn_Sub_0800D3B8(u8 *p) {
  if ((s32)(p[1] << 27) >= 0) {
    u32 v = 0x10;
    v |= p[1];
    p[1] = v;
  }
}

/* 0x0800D3D0 (40B) | Barn_GetCow_D3D0 (orig: func_0800D3D0) | origin: pure | domain: Barn | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 Barn_GetCapacity();
u32 Barn_GetCow_D3D0(int arg0, u32 arg1) {
  if (arg1 < Barn_GetCapacity()) {
    return Barn_AsCow_DA7C(arg0 + 0x2c + (arg1 * 0x3c));
  }
  return 0;
}

/* 0x0800D3F8 (40B) | Barn_GetSheep_D3F8 (orig: func_0800D3F8) | origin: pure | domain: Barn | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 Barn_GetCapacity();
u32 Barn_GetSheep_D3F8(int arg0, u32 arg1) {
  if (arg1 < Barn_GetCapacity()) {
    return Barn_AsSheep_DA98(arg0 + 0x2c + (arg1 * 0x3c));
  }
  return 0;
}

/* 0x0800D420 (40B) | Barn_GetBarnAnimal_D420 (orig: func_0800D420) | origin: pure | domain: Barn | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 Barn_GetCapacity();
u32 Barn_GetBarnAnimal_D420(int arg0, u32 arg1) {
  if (arg1 < Barn_GetCapacity()) {
    return Barn_AsBarnAnimal_DA64(arg0 + 0x2c + (arg1 * 0x3c));
  }
  return 0;
}

/* 0x0800D448 (60B) | Barn_InsertCow (orig: func_0800D448) | origin: pure | domain: Barn | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 Barn_GetNextFreeStall();
extern u32 Barn_InsertCow_DAB4();
int Barn_InsertCow(int arg0, u32 arg1) {
  int i = Barn_GetNextFreeStall(arg0, 0);
  while (i >= 0) {
    if ((u8)Barn_InsertCow_DAB4(arg0 + 0x2c + (i * 0x3c), arg1)) {
      return i;
    }
    i = Barn_GetNextFreeStall(arg0, i + 1);
  }
  return -1;
}

/* 0x0800D484 (60B) | Barn_InsertSheep (orig: func_0800D484) | origin: pure | domain: Barn | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 Barn_GetNextFreeStall();
extern u32 Barn_InsertSheep_DAE4();
int Barn_InsertSheep(int arg0, u32 arg1) {
  int i = Barn_GetNextFreeStall(arg0, 0);
  while (i >= 0) {
    if ((u8)Barn_InsertSheep_DAE4(arg0 + 0x2c + (i * 0x3c), arg1)) {
      return i;
    }
    i = Barn_GetNextFreeStall(arg0, i + 1);
  }
  return -1;
}

/* 0x0800D4C0 (20B) | Barn_Remove (orig: func_0800D4C0) | origin: pure | domain: Barn | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Barn_Remove_DB14();
void Barn_Remove(u8 *arg0,int arg1) {
  Barn_Remove_DB14(arg0 + (arg1 * 0x3c + 0x2c));
}

/* 0x0800D4D4 (220B) | Barn_RemoveAndRememberUnk (orig: func_0800D4D4) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_RemoveAndRememberUnk @ 0x0800D4D4 mode=THUMB size=0xDC (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_RemoveAndRememberUnk @ 0x0800D4D4  mode=THUMB  size=0xDC  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Barn_RemoveAndRememberUnk(int self,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar1 = Barn_GetBarnAnimal_D420();
  if (iVar1 != 0) {
    uVar2 = func_0x0809b220();
    iVar3 = Barn_GetCow_D3D0(self,param_2);
    if (iVar3 == 0) {
      if ((*(uint *)(self + 4) & 0xffffff) >> 0xe < uVar2) {
        *(uint *)(self + 4) =
             _DAT_0800d5ac & *(uint *)(self + 4) | (uVar2 & _DAT_0800d5a8) << 0xe;
        uVar4 = Animal_GetName(iVar1);
        uVar2 = func_0x080d3b78();
        if (0xc < uVar2) {
          uVar2 = 0xc;
        }
        LibC_memcpy(self + 0x1c,uVar4,uVar2);
        *(undefined1 *)(self + 0x1c + uVar2) = 0;
      }
    }
    else if ((*(ushort *)(self + 4) & 0x3fff) >> 4 < uVar2) {
      *(ushort *)(self + 4) =
           (ushort)_DAT_0800d54c & *(ushort *)(self + 4) | (ushort)((uVar2 & _DAT_0800d548) << 4)
      ;
      uVar4 = Animal_GetName(iVar1);
      uVar2 = func_0x080d3b78();
      if (0xc < uVar2) {
        uVar2 = 0xc;
      }
      LibC_memcpy(self + 0xc,uVar4,uVar2);
      *(undefined1 *)(self + 0xc + uVar2) = 0;
    }
    Barn_Remove(self,param_2);
  }
  return in_lr;
}

/* 0x0800D5B0 (604B) | Barn_DayUpdate (orig: func_0800D5B0) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_DayUpdate @ 0x0800D5B0 mode=THUMB size=0x25C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_DayUpdate @ 0x0800D5B0  mode=THUMB  size=0x25C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Barn_DayUpdate(uint *self)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  undefined4 in_lr;
  ushort auStack_40 [3];
  undefined1 uStack_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  ushort uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar6 = _DAT_0800d790;
  uVar5 = _DAT_0800d78c;
  uVar4 = _DAT_0800d788;
  uVar3 = _DAT_0800d784;
  uVar14 = _DAT_0800d780;
  uVar12 = *self;
  uVar8 = ((uVar12 & 0x1fffffff) >> 0xd & _DAT_0800d780) +
          ((uVar12 & 0x1fffffff) >> 0xe & _DAT_0800d780);
  uVar8 = (uVar8 & _DAT_0800d784) + (uVar8 >> 2 & _DAT_0800d784);
  uVar8 = (uVar8 & _DAT_0800d788) + (uVar8 >> 4 & _DAT_0800d788);
  uVar8 = (uVar8 & _DAT_0800d78c) + (uVar8 >> 8 & _DAT_0800d78c);
  uVar11 = uVar8 & _DAT_0800d790;
  uVar8 = uVar8 >> 0x10 & _DAT_0800d790;
  *self = uVar12 & _DAT_0800d794;
  iVar16 = uVar11 + uVar8 +
           (((*(byte *)((int)self + 3) & 0x7f) >> 5 & uVar14) +
            ((*(byte *)((int)self + 3) & 0x7f) >> 6 & uVar14) & uVar3 & uVar4 & uVar5 & uVar6);
  uStack_28 = func_0x0800ce9c(self);
  uVar14 = 0;
  if (uStack_28 != 0) {
    do {
      iVar9 = (int)*(char *)((int)self + uVar14 + 7);
      if (((-1 < iVar9) && (iVar9 = Barn_AsBarnAnimal_DA64(self + iVar9 * 0xf + 0xb), iVar9 != 0)) &&
         (cVar7 = func_0x0809b8b0(), cVar7 != '\0')) {
        if (((*(byte *)((int)self + 3) & 0x7f) >> 5 & 1 << (uVar14 & 0xff)) != 0) {
          iVar16 = iVar16 + -1;
          BarnAnimal_SetFed(iVar9);
        }
        func_0x0800d0c0(&uStack_30,self,uVar14);
        uStack_2c = uStack_30;
        uVar3 = uStack_2c;
        uStack_2c._0_2_ = (ushort)uStack_30;
        uStack_2c._2_2_ = (ushort)(uStack_30 >> 0x10);
        uVar2 = (ushort)_DAT_0800d798;
        uVar1 = uVar2 & uStack_38;
        uStack_38._1_1_ = (byte)(uVar1 >> 8);
        uStack_38 = CONCAT11(uStack_38._1_1_ & 3 | (byte)((uStack_30 & 0x3f) << 2),(char)uVar1) |
                    0x25;
        uVar1 = uVar2 & uStack_36 | (ushort)uStack_2c >> 6 & (ushort)_DAT_0800d79c;
        uStack_36._1_1_ = (byte)(uVar1 >> 8);
        uStack_36 = CONCAT11(uStack_36._1_1_ & 3 | (byte)((uStack_2c._2_2_ & 0x3f) << 2),(char)uVar1
                            );
        uStack_34 = uVar2 & uStack_34 | uStack_2c._2_2_ >> 6 & (ushort)_DAT_0800d79c;
        uStack_2c = uVar3;
        LibC_memcpy(auStack_40,&uStack_38,6);
        uStack_3a = 3;
        func_0x0809b124(iVar9,auStack_40);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uStack_28);
  }
  *(byte *)((int)self + 3) = *(byte *)((int)self + 3) & 0x9f;
  uStack_24 = Barn_GetCapacity(self);
  uVar14 = 0;
  if (uStack_24 != 0) {
    puVar15 = self + 0xb;
    do {
      cVar7 = func_0x0800da08(puVar15);
      if (cVar7 == '\0') {
        iVar9 = Barn_AsCow_DA7C(puVar15);
        iVar10 = Barn_AsSheep_DA98(puVar15);
        if ((iVar9 != 0) || (iVar10 != 0)) {
          iVar13 = iVar9;
          if (iVar9 == 0) {
            iVar13 = iVar10;
          }
          if ((*(char *)((int)self + 3) < '\0') && (uVar14 == ((byte)self[1] & 0xf))) {
            BarnAnimal_SetFed(iVar13);
          }
          else {
            cVar7 = func_0x0809b4fc(iVar13);
            if ((cVar7 == '\0') &&
               (((cVar7 = func_0x0809b8b0(iVar13), cVar7 == '\0' && (iVar16 != 0)) &&
                (Actor_Ctor_B114(auStack_40,iVar13), (auStack_40[0] & 0x3ff) == 0x25)))) {
              iVar16 = iVar16 + -1;
              BarnAnimal_SetFed(iVar13);
            }
          }
          if (iVar9 == 0) {
            Sheep_DayUpdate(iVar10);
          }
          else {
            Cow_DayUpdate(iVar9);
          }
        }
      }
      puVar15 = puVar15 + 0xf;
      uVar14 = uVar14 + 1;
    } while (uVar14 < uStack_24);
  }
  return in_lr;
}

/* 0x0800D80C (76B) | Barn_Sub_0800D80C (orig: func_0800D80C) | origin: pure | domain: Barn | HIGH / stanhash_elf_class */
/* Barn_Sub_0800D80C @ 0x0800D80C mode=THUMB size=0x4C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_Sub_0800D80C @ 0x0800D80C  mode=THUMB  size=0x58  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Barn_Sub_0800D80C(int self,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = Barn_GetCapacity();
  if (uVar2 <= param_2) {
    param_2 = func_0x080d0f4e(param_2);
  }
  cVar1 = func_0x0800da08(self + param_2 * 0x3c + 0x2c);
  if (cVar1 == '\0') {
    *(byte *)(self + 3) = *(byte *)(self + 3) | 0x80;
    *(byte *)(self + 4) = *(byte *)(self + 4) & 0xf0 | (byte)param_2 & 0xf;
  }
  return in_lr;
}

/* 0x0800D864 (68B) | Barn_MoveToPregnancyStall (orig: func_0800D864) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_MoveToPregnancyStall @ 0x0800D864 mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_MoveToPregnancyStall @ 0x0800D864  mode=THUMB  size=0x44  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Barn_MoveToPregnancyStall(int self,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = func_0x0800ce9c();
  if ((((param_2 < uVar2) && (uVar2 = Barn_GetCapacity(self), param_3 < uVar2)) &&
      (iVar3 = Barn_AsBarnAnimal_DA64(self + param_3 * 0x3c + 0x2c), iVar3 != 0)) &&
     (cVar1 = func_0x0809b8b0(), cVar1 != '\0')) {
    *(char *)(self + 7 + param_2) = (char)param_3;
  }
  return in_lr;
}

/* 0x0800D8A8 (364B) | Barn_AttemptBirth (orig: func_0800D8A8) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_AttemptBirth @ 0x0800D8A8 mode=THUMB size=0x16C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_AttemptBirth @ 0x0800D8A8  mode=THUMB  size=0x16C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Barn_AttemptBirth(int self,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 in_lr;
  undefined1 auStack_70 [6];
  undefined1 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  ushort uStack_64;
  undefined1 auStack_60 [56];
  uint uStack_28;
  undefined4 uStack_24;
  
  cVar3 = Barn_IsReadyToGiveBirth();
  if (cVar3 != '\0') {
    pcVar4 = (char *)(self + 7 + param_2);
    cVar3 = *pcVar4;
    *pcVar4 = -1;
    Barn_Sub_0800D1D8(&uStack_28,self,param_2);
    uStack_24 = uStack_28;
    uVar6 = uStack_24;
    uStack_24._0_2_ = (ushort)uStack_28;
    uStack_24._2_2_ = (ushort)(uStack_28 >> 0x10);
    uVar2 = (ushort)_DAT_0800d9a0;
    uVar1 = uVar2 & uStack_68;
    uStack_68._1_1_ = (byte)(uVar1 >> 8);
    uStack_68 = CONCAT11(uStack_68._1_1_ & 3 | (byte)((uStack_28 & 0x3f) << 2),(char)uVar1) | 0x25;
    uVar1 = uVar2 & uStack_66 | (ushort)uStack_24 >> 6;
    uStack_66._1_1_ = (byte)(uVar1 >> 8);
    uStack_66 = CONCAT11(uStack_66._1_1_ & 3 | (byte)((uStack_24._2_2_ & 0x3f) << 2),(char)uVar1);
    uStack_64 = uVar2 & uStack_64 | uStack_24._2_2_ >> 6;
    uStack_24 = uVar6;
    LibC_memcpy(auStack_70,&uStack_68,6);
    uStack_6a = 2;
    iVar8 = self + cVar3 * 0x3c + 0x2c;
    iVar5 = Barn_AsCow_DA7C(iVar8);
    if (iVar5 != 0) {
      func_0x0809b91c();
      Cow_Ctor_BD70(auStack_60,auStack_70,0,0);
      uVar6 = func_0x0809b228(iVar5);
      if (1 < uVar6 >> 1) {
        uVar7 = func_0x080d11e4();
        uVar7 = func_0x080d0f4e(uVar7,uVar6 >> 1);
        Animal_AddAffection(auStack_60,uVar7);
      }
      uVar7 = Barn_InsertCow(self,auStack_60);
      goto LAB_0800d9ec;
    }
    iVar5 = Barn_AsSheep_DA98(iVar8);
    if (iVar5 != 0) {
      func_0x0809b91c();
      Sheep_Ctor_BEBC(&uStack_68,auStack_70,0,0);
      uVar6 = func_0x0809b228(iVar5);
      if (1 < uVar6 >> 1) {
        uVar7 = func_0x080d11e4();
        uVar7 = func_0x080d0f4e(uVar7,uVar6 >> 1);
        Animal_AddAffection(&uStack_68,uVar7);
      }
      uVar7 = Barn_InsertSheep(self,&uStack_68);
      goto LAB_0800d9ec;
    }
  }
  uVar7 = 0xffffffff;
LAB_0800d9ec:
  return CONCAT44(in_lr,uVar7);
}

/* 0x0800DA14 (24B) | Barn_AsBarnAnimal (orig: func_0800DA14) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_AsBarnAnimal @ 0x0800DA14 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_AsBarnAnimal @ 0x0800DA14  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Barn_AsBarnAnimal(byte *self)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)0x0;
  if ((*self & 1) != 0) {
    pbVar1 = self + 4;
  }
  return CONCAT44(in_lr,pbVar1);
}

/* 0x0800DA2C (28B) | Barn_AsCow (orig: func_0800DA2C) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_AsCow @ 0x0800DA2C mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_AsCow @ 0x0800DA2C  mode=THUMB  size=0x1C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Barn_AsCow(byte *self)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)0x0;
  if (((*self & 1) != 0) && ((int)((uint)*self * 0x40000000) < 0)) {
    pbVar1 = self + 4;
  }
  return CONCAT44(in_lr,pbVar1);
}

/* 0x0800DA48 (28B) | Barn_AsSheep (orig: func_0800DA48) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_AsSheep @ 0x0800DA48 mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_AsSheep @ 0x0800DA48  mode=THUMB  size=0x1C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Barn_AsSheep(byte *self)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)0x0;
  if (((*self & 1) != 0) && (-1 < (int)((uint)*self * 0x40000000))) {
    pbVar1 = self + 4;
  }
  return CONCAT44(in_lr,pbVar1);
}

/* 0x0800DA64 (24B) | Barn_AsBarnAnimal_DA64 (orig: func_0800DA64) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_AsBarnAnimal_DA64 @ 0x0800DA64 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_AsBarnAnimal_DA64 @ 0x0800DA64  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Barn_AsBarnAnimal_DA64(byte *self)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)0x0;
  if ((*self & 1) != 0) {
    pbVar1 = self + 4;
  }
  return CONCAT44(in_lr,pbVar1);
}

/* 0x0800DA7C (28B) | Barn_AsCow_DA7C (orig: func_0800DA7C) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_AsCow_DA7C @ 0x0800DA7C mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_AsCow_DA7C @ 0x0800DA7C  mode=THUMB  size=0x1C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Barn_AsCow_DA7C(byte *self)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)0x0;
  if (((*self & 1) != 0) && ((int)((uint)*self * 0x40000000) < 0)) {
    pbVar1 = self + 4;
  }
  return CONCAT44(in_lr,pbVar1);
}

/* 0x0800DA98 (28B) | Barn_AsSheep_DA98 (orig: func_0800DA98) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_AsSheep_DA98 @ 0x0800DA98 mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_AsSheep_DA98 @ 0x0800DA98  mode=THUMB  size=0x1C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Barn_AsSheep_DA98(byte *self)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)0x0;
  if (((*self & 1) != 0) && (-1 < (int)((uint)*self * 0x40000000))) {
    pbVar1 = self + 4;
  }
  return CONCAT44(in_lr,pbVar1);
}

/* 0x0800DAB4 (48B) | Barn_InsertCow_DAB4 (orig: func_0800DAB4) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_InsertCow_DAB4 @ 0x0800DAB4 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_InsertCow_DAB4 @ 0x0800DAB4  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Barn_InsertCow_DAB4(byte *self)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*self & 1) == 0) {
    if (self != (byte *)0xfffffffc) {
      Barn_as_3CowRC3Cow();
    }
    *self = *self | 3;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0800DAE4 (48B) | Barn_InsertSheep_DAE4 (orig: func_0800DAE4) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_InsertSheep_DAE4 @ 0x0800DAE4 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_InsertSheep_DAE4 @ 0x0800DAE4  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Barn_InsertSheep_DAE4(byte *self)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*self & 1) == 0) {
    if (self != (byte *)0xfffffffc) {
      Barn_as_5SheepRC5Sheep();
    }
    uVar1 = 1;
    *self = *self & 0xfd | 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0800DB14 (24B) | Barn_Remove_DB14 (orig: func_0800DB14) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_Remove_DB14 @ 0x0800DB14 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_Remove_DB14 @ 0x0800DB14  mode=THUMB  size=0x20  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Barn_Remove_DB14(byte *self)

{
  undefined4 in_lr;
  
  if ((*self & 1) != 0) {
    *self = *self & 0xfe;
  }
  return in_lr;
}

/* 0x08069EB4 (32B) | Barn_Wrap_CountSheeps (orig: func_08069EB4) | origin: pure | domain: Barn | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Barn_CountSheeps();
u32 Barn_Wrap_CountSheeps(int arg0) {
  u32 val;
  val = Barn_CountSheeps(*(u32 *)(arg0 + 0x120) + 0x5f0);
  return (((u32)(-val | val)) >> 0x1f);
}

/* 0x08069ED4 (32B) | Barn_Wrap_CountCows (orig: func_08069ED4) | origin: pure | domain: Barn | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Barn_CountCows();
u32 Barn_Wrap_CountCows(int arg0) {
  u32 val;
  val = Barn_CountCows(*(u32 *)(arg0 + 0x120) + 0x5f0);
  return (((u32)(-val | val)) >> 0x1f);
}

/* 0x080869A0 (104B) | Barn_Sub_080869A0 (orig: func_080869A0) | origin: wip | domain: Barn | MEDIUM / graph_algebra */
u32 Barn_Sub_080869A0(int self) {
  char cVar1;
  int iVar2;
  u32 uVar3;
  u32 uVar4;
  int iVar5;
  iVar5 = 0;
  uVar4 = 0;
  do {
    uVar3 = Barn_GetCapacity(*(int *)(self + 8) + 0x5f0);
    if (uVar3 <= uVar4) {
      return iVar5;
    }
    iVar2 = Barn_GetCow_D3D0(*(int *)(self + 8) + 0x5f0,uVar4);
    if (iVar2 == 0) {
      iVar2 = Barn_GetSheep_D3F8(*(int *)(self + 8) + 0x5f0,uVar4);
      if (iVar2 != 0) {
        Barn_GetSheep_D3F8(*(int *)(self + 8) + 0x5f0,uVar4);
        goto LAB_080869e4;
      }
    }
    else {
      Barn_GetCow_D3D0(*(int *)(self + 8) + 0x5f0,uVar4);
LAB_080869e4:
      cVar1 = func_0809B8B0(self);
      if (cVar1 != '\0') {
        iVar5 = iVar5 + 1;
      }
    }
    uVar4 = uVar4 + 1;
  } while( true );
}

/* 0x080D7B50 (116B) | Barn_as_5SheepRC5Sheep (orig: func_080D7B50) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_as_5SheepRC5Sheep @ 0x080D7B50 mode=THUMB size=0x74 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_as_5SheepRC5Sheep @ 0x080D7B50  mode=THUMB  size=0x74  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Barn_as_5SheepRC5Sheep(int self,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  Coop_as_9LivestockRC9Livestock();
  *(byte *)(self + 0x24) =
       *(byte *)(self + 0x24) & 0xc0 | *(byte *)(param_2 + 0x24) & 1 |
       *(byte *)(param_2 + 0x24) & 0x3e;
  *(ushort *)(self + 0x24) =
       (ushort)_DAT_080d7bc0 & *(ushort *)(self + 0x24) | *(ushort *)(param_2 + 0x24) & 0x7c0;
  *(undefined4 *)(self + 0x28) = *(undefined4 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(self + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(self + 0x30) = uVar1;
  *(byte *)(self + 0x34) = *(byte *)(self + 0x34) & 0xf8 | *(byte *)(param_2 + 0x34) & 7;
  return CONCAT44(in_lr,self);
}

/* 0x080D7BC4 (124B) | Barn_as_3CowRC3Cow (orig: func_080D7BC4) | origin: pure | domain: Barn | EXACT / stanhash_elf */
/* Barn_as_3CowRC3Cow @ 0x080D7BC4 mode=THUMB size=0x7C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Barn_as_3CowRC3Cow @ 0x080D7BC4  mode=THUMB  size=0x7C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Barn_as_3CowRC3Cow(int self,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  Coop_as_9LivestockRC9Livestock();
  *(byte *)(self + 0x24) =
       *(byte *)(self + 0x24) & 0xc0 | *(byte *)(param_2 + 0x24) & 1 |
       *(byte *)(param_2 + 0x24) & 0x3e;
  *(ushort *)(self + 0x24) =
       (ushort)_DAT_080d7c3c & *(ushort *)(self + 0x24) | *(ushort *)(param_2 + 0x24) & 0x7c0;
  *(undefined4 *)(self + 0x28) = *(undefined4 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(self + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(self + 0x30) = uVar1;
  *(byte *)(self + 0x34) = *(byte *)(self + 0x34) & 0xfe | *(byte *)(param_2 + 0x34) & 1;
  return CONCAT44(in_lr,self);
}

