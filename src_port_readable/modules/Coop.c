/* FIO-DECOMP-HMFOMT :: Port Readable Module: Coop (35 functions) */
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

/* 0x0800C450 (260B) | Coop_Ctor (orig: func_0800C450) | origin: pure | domain: Coop | EXACT / stanhash_elf */
/* Coop_Ctor @ 0x0800C450 mode=THUMB size=0x104 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Coop_Ctor @ 0x0800C450  mode=THUMB  size=0x120  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Coop_Ctor(uint *self)

{
  ushort uVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 in_lr;
  
  *(byte *)self = (byte)*self & 0xfe;
  *(ushort *)self = (ushort)_DAT_0800c548 & (ushort)*self;
  *(byte *)((int)self + 1) = *(byte *)((int)self + 1) & 0xf7;
  *self = *self & _DAT_0800c54c;
  *(byte *)((int)self + 2) = *(byte *)((int)self + 2) & 0xef;
  *(byte *)((int)self + 3) = 0;
  *(byte *)(self + 1) = (byte)self[1] & 0xfc;
  *(byte *)(self + 2) = 0;
  puVar3 = self + 6;
  iVar4 = 7;
  do {
    *(byte *)puVar3 = (byte)*puVar3 & 0xfe;
    uVar2 = _DAT_0800c550;
    puVar3 = puVar3 + 0xc;
    iVar4 = iVar4 + -1;
  } while (iVar4 != -1);
  puVar3 = self + 0x66;
  iVar4 = 7;
  do {
    uVar1 = (ushort)uVar2;
    *(ushort *)puVar3 = uVar1 & (ushort)*puVar3 | 0x234;
    *(byte *)((int)puVar3 + 1) = *(byte *)((int)puVar3 + 1) & 3;
    *(ushort *)((int)puVar3 + 2) = uVar1 & *(ushort *)((int)puVar3 + 2);
    *(byte *)((int)puVar3 + 3) = *(byte *)((int)puVar3 + 3) & 3;
    *(ushort *)(puVar3 + 1) = uVar1 & (ushort)puVar3[1];
    *(byte *)((int)puVar3 + 6) = *(byte *)((int)puVar3 + 6) & 0xf8;
    puVar3 = puVar3 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != -1);
  puVar3 = self + 0x76;
  iVar4 = 1;
  do {
    *(byte *)puVar3 = (byte)*puVar3 & 0xf8;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != -1);
  return CONCAT44(in_lr,self);
}

/* 0x0800C570 (40B) | Coop_GetCapacity (orig: func_0800C570) | origin: pure | domain: Coop | EXACT / stanhash_elf */
/* Coop_GetCapacity @ 0x0800C570 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Coop_GetCapacity @ 0x0800C570  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Coop_GetCapacity(byte *self)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_c;
  uint auStack_8 [2];
  
  uStack_c = 8;
  auStack_8[0] = (*self & 1) * 4 + 4;
  puVar1 = &uStack_c;
  if (auStack_8[0] < 8) {
    puVar1 = auStack_8;
  }
  return CONCAT44(in_lr,*puVar1);
}

/* 0x0800C598 (44B) | Coop_HasBushelForEnt (orig: func_0800C598) | origin: pure | domain: Coop | EXACT / stanhash_elf */
/* Coop_HasBushelForEnt @ 0x0800C598 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Coop_HasBushelForEnt @ 0x0800C598  mode=THUMB  size=0x34  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Coop_HasBushelForEnt(uint *self,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = Coop_GetCapacity();
  if (param_2 < uVar1) {
    uVar1 = -((*self & 0xfffff) >> 0xc & 1 << (param_2 & 0xff)) >> 0x1f;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0800C5CC (40B) | Coop_GetChicken (orig: func_0800C5CC) | origin: pure | domain: Coop | EXACT / stanhash_elf */
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
extern u32 Coop_GetCapacity();
extern u32 Coop_GetChicken_CCB8();
u32 Coop_GetChicken(u8 *arg0,int arg1) {
  u32 val;
  u32 val2;
  val = Coop_GetCapacity();
  if (!((u32)arg1 < val)) {
    val2 = 0;
  } else {
    val2 = Coop_GetChicken_CCB8(arg0 + (arg1 * 0x30 + 0x18));
  }
  return val2;
}

/* 0x0800C5F4 (60B) | Coop_GetNextFreeEnt (orig: func_0800C5F4) | origin: pure | domain: Coop | EXACT / stanhash_elf */
/* Coop_GetNextFreeEnt @ 0x0800C5F4 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Coop_GetNextFreeEnt @ 0x0800C5F4  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Coop_GetNextFreeEnt(int self,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = Coop_GetCapacity();
  if (param_2 < uVar2) {
    self = param_2 * 0x30 + 0x18 + self;
    do {
      cVar1 = func_0x0800ccac(self);
      if (cVar1 != '\0') goto LAB_0800c62a;
      self = self + 0x30;
      param_2 = param_2 + 1;
    } while (param_2 < uVar2);
  }
  param_2 = 0xffffffff;
LAB_0800c62a:
  return CONCAT44(in_lr,param_2);
}

/* 0x0800C630 (48B) | Coop_CountChickens (orig: func_0800C630) | origin: pure | domain: Coop | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Coop_GetCapacity();
extern u32 Coop_GetChicken_CCB8();
u32 Coop_CountChickens(int arg0) {
  u32 val;
  int val2;
  u32 val3;
  int val4;
  val = Coop_GetCapacity();
  val4 = 0;
  val3 = 0;
  if (val3 < val) {
    arg0 = arg0 + 0x18;
    do {
      val2 = Coop_GetChicken_CCB8(arg0);
      if (val2 != 0) {
        val4 = val4 + 1;
      }
      arg0 = arg0 + 0x30;
      val3 = val3 + 1;
    } while (val3 < val);
  }
  return val4;
}

/* 0x0800C660 (24B) | Coop_GetIncubatorCapacity (orig: func_0800C660) | origin: pure | domain: Coop | EXACT / stanhash_elf */
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
u32 Coop_GetIncubatorCapacity(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    r1 = *(u8 *)(r0);
    r0 = 1;
    r0 &= r1;
    r1 = 2;
    if (r0 != 0) goto loc_0800C670;
    r1 = 1;
loc_0800C670:
    r0 = r1 + 0;
    return r1;
}

/* 0x0800C678 (40B) | Coop_IsIncubatorOccupied (orig: func_0800C678) | origin: pure | domain: Coop | EXACT / stanhash_elf */
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
extern u32 Coop_GetIncubatorCapacity();
extern u32 func_0800CD38();
u32 Coop_IsIncubatorOccupied(u8 *arg0,int arg1) {
  u32 val;
  u32 val2;
  val = Coop_GetIncubatorCapacity();
  if (!((u32)arg1 < val)) {
    val2 = 0;
  } else {
    val2 = func_0800CD38(arg0 + (arg1 * 4 + 0x1d8));
  }
  return val2;
}

/* 0x0800C6A0 (56B) | Coop_GetEgg (orig: func_0800C6A0) | origin: pure | domain: Coop | EXACT / stanhash_elf */
/* Coop_GetEgg @ 0x0800C6A0 mode=THUMB size=0x38 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Coop_GetEgg @ 0x0800C6A0  mode=THUMB  size=0x38  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Coop_GetEgg(int self,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = Coop_GetCapacity();
  if ((param_2 < uVar1) &&
     (uVar1 = (uint)*(ushort *)(self + param_2 * 8 + 0x198) * 0x400000,
     uVar1 < _DAT_0800c6cc || uVar1 - _DAT_0800c6cc == 0)) {
    self = self + param_2 * 8 + 0x198;
  }
  else {
    self = 0;
  }
  return CONCAT44(in_lr,self);
}

/* 0x0800C6D8 (24B) | Coop_GetUnkEnt (orig: func_0800C6D8) | origin: pure | domain: Coop | EXACT / stanhash_elf */
/* Coop_GetUnkEnt @ 0x0800C6D8 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Coop_GetUnkEnt @ 0x0800C6D8  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Coop_GetUnkEnt(int self)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((int)((uint)*(byte *)(self + 2) * 0x8000000) < 0) {
    uVar1 = (uint)(*(byte *)(self + 2) >> 5);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0800C6F0 (48B) | Coop_Wrap_GetCapacity (orig: func_0800C6F0) | origin: pure | domain: Coop | MEDIUM / graph_algebra */
/* Coop_Wrap_GetCapacity @ 0x0800C6F0 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Coop_Wrap_GetCapacity @ 0x0800C6F0  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Coop_Wrap_GetCapacity(short *self,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = Coop_GetCapacity(param_2);
  if (uVar1 <= param_3) {
    param_3 = func_0x080d0f4e(param_3);
  }
  *self = (short)param_3 * 0x18 + 0x88;
  self[1] = 0x60;
  return CONCAT44(in_lr,self);
}

/* 0x0800C720 (40B) | Coop_ShouldHatch (orig: func_0800C720) | origin: pure | domain: Coop | EXACT / stanhash_elf */
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
extern u32 Coop_GetIncubatorCapacity();
extern u32 Coop_ShouldHatch_CD58();
u32 Coop_ShouldHatch(u8 *arg0,int arg1) {
  u32 val;
  u32 val2;
  val = Coop_GetIncubatorCapacity();
  if (!((u32)arg1 < val)) {
    val2 = 0;
  } else {
    val2 = Coop_ShouldHatch_CD58(arg0 + (arg1 * 4 + 0x1d8));
  }
  return val2;
}

/* 0x0800C76C (40B) | Coop_Upgrade (orig: func_0800C76C) | origin: pure | domain: Coop | EXACT / stanhash_elf */
/* Coop_Upgrade @ 0x0800C76C mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Coop_Upgrade @ 0x0800C76C  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Coop_Upgrade(byte *self)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *self;
  if ((bVar1 & 1) == 0) {
    *self = bVar1 & 0xfe | 1U - (char)((int)((uint)bVar1 << 0x1f) >> 0x1f) & 1;
  }
  return in_lr;
}

/* 0x0800C794 (68B) | Coop_AddStoredBushels (orig: func_0800C794) | origin: pure | domain: Coop | EXACT / stanhash_elf */
/* Coop_AddStoredBushels @ 0x0800C794 mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Coop_AddStoredBushels @ 0x0800C794  mode=THUMB  size=0x80  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Coop_AddStoredBushels(ushort *self,int param_2)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_14;
  uint uStack_10;
  
  uStack_14 = _DAT_0800c7cc;
  uStack_10 = ((*self & 0x7ff) >> 1) + param_2;
  puVar1 = &uStack_14;
  if (uStack_10 < _DAT_0800c7cc) {
    puVar1 = &uStack_10;
  }
  *self = (ushort)_DAT_0800c7d4 & *self | (ushort)((*puVar1 & _DAT_0800c7d0) << 1);
  return in_lr;
}

/* 0x0800C7D8 (60B) | Coop_SubtractStoredBushels (orig: func_0800C7D8) | origin: pure | domain: Coop | EXACT / stanhash_elf */
/* Coop_SubtractStoredBushels @ 0x0800C7D8 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* 0x0800C814 (60B) | Coop_SetEntBushel (orig: func_0800C814) | origin: pure | domain: Coop | EXACT / stanhash_elf */
/* Coop_SetEntBushel @ 0x0800C814 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Coop_SetEntBushel @ 0x0800C814  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Coop_SetEntBushel(uint *self,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = Coop_GetCapacity();
  if (param_2 < uVar1) {
    uVar1 = (*self & 0xfffff) >> 0xc;
    uVar2 = 1 << (param_2 & 0xff);
    if ((uVar1 & uVar2) == 0) {
      *self = _DAT_0800c84c & *self | (uVar1 | uVar2 & 0xff) << 0xc;
    }
  }
  return in_lr;
}

/* 0x0800C850 (56B) | Coop_ClearEntBushel (orig: func_0800C850) | origin: pure | domain: Coop | EXACT / stanhash_elf */
/* Coop_ClearEntBushel @ 0x0800C850 mode=THUMB size=0x38 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Coop_ClearEntBushel @ 0x0800C850  mode=THUMB  size=0x44  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Coop_ClearEntBushel(uint *self,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = Coop_GetCapacity();
  if (param_2 < uVar1) {
    uVar1 = (*self & 0xfffff) >> 0xc;
    uVar2 = 1 << (param_2 & 0xff);
    if ((uVar1 & uVar2) != 0) {
      *self = _DAT_0800c884 & *self | (uVar1 & ~uVar2) << 0xc;
    }
  }
  return in_lr;
}

/* 0x0800C894 (40B) | Coop_GetChicken_C894 (orig: func_0800C894) | origin: pure | domain: Coop | EXACT / stanhash_elf */
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
extern u32 Coop_GetCapacity();
extern u32 Coop_GetChicken_CCD0();
u32 Coop_GetChicken_C894(u8 *arg0,int arg1) {
  u32 val;
  u32 val2;
  val = Coop_GetCapacity();
  if (!((u32)arg1 < val)) {
    val2 = 0;
  } else {
    val2 = Coop_GetChicken_CCD0(arg0 + (arg1 * 0x30 + 0x18));
  }
  return val2;
}

/* 0x0800C8BC (60B) | Coop_InsertChicken (orig: func_0800C8BC) | origin: pure | domain: Coop | EXACT / stanhash_elf */
/* Coop_InsertChicken @ 0x0800C8BC mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Coop_InsertChicken @ 0x0800C8BC  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Coop_InsertChicken(int self,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  while (iVar2 = Coop_GetNextFreeEnt(self,iVar2), -1 < iVar2) {
    cVar1 = Coop_Insert(self + iVar2 * 0x30 + 0x18,param_2);
    if (cVar1 != '\0') goto LAB_0800c8f2;
    iVar2 = iVar2 + 1;
  }
  iVar2 = -1;
LAB_0800c8f2:
  return CONCAT44(in_lr,iVar2);
}

/* 0x0800C8F8 (36B) | Coop_Remove (orig: func_0800C8F8) | origin: pure | domain: Coop | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Coop_GetCapacity();
extern u32 Coop_Remove_CD20();
void Coop_Remove(u8 *arg0,int arg1) {
  u32 val;
  val = Coop_GetCapacity();
  if ((u32)arg1 < val) {
    Coop_Remove_CD20(arg0 + (arg1 * 0x30 + 0x18));
  }
}

/* 0x0800C91C (120B) | Coop_RemoveAndRememberUnk (orig: func_0800C91C) | origin: pure | domain: Coop | EXACT / stanhash_elf */
/* Coop_RemoveAndRememberUnk @ 0x0800C91C mode=THUMB size=0x78 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Coop_RemoveAndRememberUnk @ 0x0800C91C  mode=THUMB  size=0x78  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Coop_RemoveAndRememberUnk(int self,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar1 = Coop_GetChicken_C894();
  if (iVar1 != 0) {
    uVar2 = func_0x0809b220();
    if (((*(byte *)(self + 4) & 3) << 8 | (uint)*(byte *)(self + 3)) < uVar2) {
      *(char *)(self + 3) = (char)uVar2;
      *(byte *)(self + 4) = *(byte *)(self + 4) & 0xfc | (byte)(uVar2 >> 8) & 3;
      uVar3 = Animal_GetName(iVar1);
      uVar2 = func_0x080d3b78();
      if (0xc < uVar2) {
        uVar2 = 0xc;
      }
      LibC_memcpy(self + 8,uVar3,uVar2);
      *(undefined1 *)(self + 8 + uVar2) = 0;
    }
    Coop_Remove(self,param_2);
  }
  return in_lr;
}

/* 0x0800C994 (36B) | Coop_BeginIncubation (orig: func_0800C994) | origin: pure | domain: Coop | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Coop_GetIncubatorCapacity();
extern u32 func_0800CD78();
void Coop_BeginIncubation(u8 *arg0,int arg1) {
  u32 val;
  val = Coop_GetIncubatorCapacity();
  if ((u32)arg1 < val) {
    func_0800CD78(arg0 + (arg1 * 4 + 0x1d8));
  }
}

/* 0x0800C9B8 (52B) | Coop_Wrap_GetCapacity_C9B8 (orig: func_0800C9B8) | origin: pure | domain: Coop | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Coop_GetCapacity();
void Coop_Wrap_GetCapacity_C9B8(int arg0,u32 arg1) {
  u32 val;
  s16 *mem_ptr;
  val = Coop_GetCapacity();
  if (arg1 < val) {
    mem_ptr = (u16 *)(arg0 + arg1 * 8 + 0x198);
    *mem_ptr = (u16)0xFFFFFC00 & *mem_ptr | 0x234;
  }
}

/* 0x0800C9EC (400B) | Coop_DayUpdate (orig: func_0800C9EC) | origin: pure | domain: Coop | EXACT / stanhash_elf */
/* Coop_DayUpdate @ 0x0800C9EC mode=THUMB size=0x190 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Coop_DayUpdate @ 0x0800C9EC  mode=THUMB  size=0x190  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Coop_DayUpdate(uint *self)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 in_lr;
  uint uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [8];
  uint uStack_28;
  undefined1 *puStack_24;
  
  uVar7 = *self;
  uVar4 = ((uVar7 & 0xfffff) >> 0xc & _DAT_0800caa8) + ((uVar7 & 0xfffff) >> 0xd & _DAT_0800caa8);
  uVar4 = (uVar4 & _DAT_0800caac) + (uVar4 >> 2 & _DAT_0800caac);
  uVar4 = (uVar4 & _DAT_0800cab0) + (uVar4 >> 4 & _DAT_0800cab0);
  uVar4 = (uVar4 & _DAT_0800cab4) + (uVar4 >> 8 & _DAT_0800cab4) & _DAT_0800cab8;
  *self = uVar7 & _DAT_0800cabc;
  uStack_28 = Coop_GetCapacity(self);
  uVar7 = 0;
  if (uStack_28 != 0) {
    puStack_24 = auStack_30;
    puVar9 = self + 0x66;
    puVar8 = self + 6;
    do {
      cVar2 = func_0x0800ccac(puVar8);
      if ((cVar2 == '\0') && (iVar5 = Coop_GetChicken_CCD0(puVar8), iVar5 != 0)) {
        if (((int)((uint)*(byte *)((int)self + 2) * 0x8000000) < 0) &&
           (uVar7 == *(byte *)((int)self + 2) >> 5)) {
LAB_0800caa0:
          Chicken_SetFed(iVar5);
        }
        else {
          cVar2 = func_0x0809b4fc(iVar5);
          if (cVar2 == '\0') {
            iVar6 = Chicken_GetGrowthStage(iVar5);
            if (iVar6 == 0) goto LAB_0800caa0;
            if ((uVar4 != 0) && (Actor_Ctor_B114(&uStack_38,iVar5), (uStack_38 & 0x3ff) == 0x11)) {
              uVar4 = uVar4 - 1;
              Chicken_SetFed(iVar5);
            }
          }
        }
        Chicken_DayUpdate(iVar5);
        cVar2 = Chicken_Sub_0809BCC0(iVar5);
        if (cVar2 != '\0') {
          Actor_Ctor_B114(puStack_24,iVar5);
          bVar3 = Chicken_ConsumeProduct(iVar5);
          LibC_memcpy(&uStack_38,puStack_24,6);
          bVar1 = uStack_34._2_1_ & 0xf8;
          uStack_34._0_3_ = CONCAT12(bVar1 | bVar3 & 7,(undefined2)uStack_34);
          *puVar9 = uStack_38;
          puVar9[1] = uStack_34;
        }
      }
      puVar9 = puVar9 + 2;
      puVar8 = puVar8 + 0xc;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uStack_28);
  }
  uVar4 = Coop_GetIncubatorCapacity(self);
  uVar7 = 0;
  if (uVar4 != 0) {
    self = self + 0x76;
    do {
      cVar2 = func_0x0800cd38(self);
      if (cVar2 != '\0') {
        Coop_DayUpdate_CD88(self);
      }
      self = self + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  return in_lr;
}

/* 0x0800CB7C (68B) | Coop_Sub_0800CB7C (orig: func_0800CB7C) | origin: pure | domain: Coop | HIGH / stanhash_elf_class */
/* Coop_Sub_0800CB7C @ 0x0800CB7C mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Coop_Sub_0800CB7C @ 0x0800CB7C  mode=THUMB  size=0x50  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Coop_Sub_0800CB7C(int self,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = Coop_GetCapacity();
  if (uVar2 <= param_2) {
    param_2 = func_0x080d0f4e(param_2);
  }
  cVar1 = func_0x0800ccac(self + param_2 * 0x30 + 0x18);
  if (cVar1 == '\0') {
    *(byte *)(self + 2) = *(byte *)(self + 2) & 0x1f | 0x10 | (byte)(param_2 << 5);
  }
  return in_lr;
}

/* 0x0800CBCC (224B) | Coop_AttemptHatch (orig: func_0800CBCC) | origin: pure | domain: Coop | EXACT / stanhash_elf */
/* Coop_AttemptHatch @ 0x0800CBCC mode=THUMB size=0xE0 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Coop_AttemptHatch @ 0x0800CBCC  mode=THUMB  size=0xEC  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Coop_AttemptHatch(int self,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  undefined1 auStack_60 [6];
  undefined1 uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  ushort uStack_54;
  undefined1 auStack_50 [44];
  uint uStack_24;
  undefined4 uStack_20;
  
  cVar4 = Coop_ShouldHatch();
  if (cVar4 == '\0') {
    uVar5 = 0xffffffff;
  }
  else {
    func_0x0800cdb0(self + param_2 * 4 + 0x1d8);
    func_0x0800c748(&uStack_24,self,param_2);
    uStack_20 = uStack_24;
    uVar3 = uStack_20;
    uStack_20._0_2_ = (ushort)uStack_24;
    uStack_20._2_2_ = (ushort)(uStack_24 >> 0x10);
    uVar2 = (ushort)_DAT_0800cca8;
    uVar1 = uVar2 & uStack_58;
    uStack_58._1_1_ = (byte)(uVar1 >> 8);
    uStack_58 = CONCAT11(uStack_58._1_1_ & 3 | (byte)((uStack_24 & 0x3f) << 2),(char)uVar1) | 0x11;
    uVar1 = uVar2 & uStack_56 | (ushort)uStack_20 >> 6;
    uStack_56._1_1_ = (byte)(uVar1 >> 8);
    uStack_56 = CONCAT11(uStack_56._1_1_ & 3 | (byte)((uStack_20._2_2_ & 0x3f) << 2),(char)uVar1);
    uStack_54 = uVar2 & uStack_54 | uStack_20._2_2_ >> 6;
    uStack_20 = uVar3;
    LibC_memcpy(auStack_60,&uStack_58,6);
    uStack_5a = 3;
    Chicken_Ctor_BC8C(auStack_50,auStack_60,0,0);
    uVar5 = func_0x080d11e4();
    uVar5 = func_0x080d0ed0(uVar5,10);
    Animal_AddAffection(auStack_50,uVar5);
    uVar5 = Coop_InsertChicken(self,auStack_50);
  }
  return CONCAT44(in_lr,uVar5);
}

/* 0x0800CCB8 (24B) | Coop_GetChicken_CCB8 (orig: func_0800CCB8) | origin: pure | domain: Coop | EXACT / stanhash_elf */
/* Coop_GetChicken_CCB8 @ 0x0800CCB8 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Coop_GetChicken_CCB8 @ 0x0800CCB8  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Coop_GetChicken_CCB8(byte *self)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)0x0;
  if ((*self & 1) != 0) {
    pbVar1 = self + 4;
  }
  return CONCAT44(in_lr,pbVar1);
}

/* 0x0800CCD0 (24B) | Coop_GetChicken_CCD0 (orig: func_0800CCD0) | origin: pure | domain: Coop | EXACT / stanhash_elf */
/* Coop_GetChicken_CCD0 @ 0x0800CCD0 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Coop_GetChicken_CCD0 @ 0x0800CCD0  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Coop_GetChicken_CCD0(byte *self)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)0x0;
  if ((*self & 1) != 0) {
    pbVar1 = self + 4;
  }
  return CONCAT44(in_lr,pbVar1);
}

/* 0x0800CCE8 (56B) | Coop_Insert (orig: func_0800CCE8) | origin: pure | domain: Coop | EXACT / stanhash_elf */
/* Coop_Insert @ 0x0800CCE8 mode=THUMB size=0x38 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Coop_Insert @ 0x0800CCE8  mode=THUMB  size=0x38  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Coop_Insert(byte *self,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*self & 1) == 0) {
    if (self + 4 != (byte *)0x0) {
      Coop_as_9LivestockRC9Livestock(self + 4);
      *(undefined4 *)(self + 0x28) = *(undefined4 *)(param_2 + 0x24);
      *(undefined4 *)(self + 0x2c) = *(undefined4 *)(param_2 + 0x28);
    }
    *self = *self | 1;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0800CD20 (24B) | Coop_Remove_CD20 (orig: func_0800CD20) | origin: pure | domain: Coop | EXACT / stanhash_elf */
/* Coop_Remove_CD20 @ 0x0800CD20 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Coop_Remove_CD20 @ 0x0800CD20  mode=THUMB  size=0x20  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Coop_Remove_CD20(byte *self)

{
  undefined4 in_lr;
  
  if ((*self & 1) != 0) {
    *self = *self & 0xfe;
  }
  return in_lr;
}

/* 0x0800CD40 (24B) | Coop_GetDaysLeft (orig: func_0800CD40) | origin: pure | domain: Coop | EXACT / stanhash_elf */
/* Coop_GetDaysLeft @ 0x0800CD40 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Coop_GetDaysLeft @ 0x0800CD40  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Coop_GetDaysLeft(uint *self)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((int)(*self * 0x20000000) < 0) {
    uVar1 = *self & 3;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

/* 0x0800CD58 (32B) | Coop_ShouldHatch_CD58 (orig: func_0800CD58) | origin: pure | domain: Coop | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 Coop_ShouldHatch_CD58(u8 *arg0) {
  u32 val;
  val = 0;
  if ((*(int *)arg0 * 0x20000000 < 0) && ((*arg0 & 3) == 0)) {
    val = 1;
  }
  return val;
}

/* 0x0800CD88 (40B) | Coop_DayUpdate_CD88 (orig: func_0800CD88) | origin: pure | domain: Coop | EXACT / stanhash_elf */
/* Coop_DayUpdate_CD88 @ 0x0800CD88 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Coop_DayUpdate_CD88 @ 0x0800CD88  mode=THUMB  size=0x34  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Coop_DayUpdate_CD88(byte *self)

{
  undefined4 in_lr;
  
  if ((*self & 3) != 0) {
    *self = *self & 0xfc | ((byte)*(undefined4 *)self & 3) - 1 & 3;
  }
  return in_lr;
}

/* 0x08069EF4 (32B) | Coop_Wrap_CountChickens (orig: func_08069EF4) | origin: pure | domain: Coop | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Coop_CountChickens();
u32 Coop_Wrap_CountChickens(int arg0) {
  u32 val;
  val = Coop_CountChickens(*(u32 *)(arg0 + 0x120) + 0x410);
  return (((u32)(-val | val)) >> 0x1f);
}

/* 0x080D7C40 (188B) | Coop_as_9LivestockRC9Livestock (orig: func_080D7C40) | origin: pure | domain: Coop | EXACT / stanhash_elf */
/* Coop_as_9LivestockRC9Livestock @ 0x080D7C40 mode=THUMB size=0xBC (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Coop_as_9LivestockRC9Livestock @ 0x080D7C40  mode=THUMB  size=0xBC  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Coop_as_9LivestockRC9Livestock(int self,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 in_lr;
  
  Farm_as_6AnimalRC6Animal();
  *(undefined1 *)(self + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)(self + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  uVar2 = (ushort)_DAT_080d7cf4;
  *(ushort *)(self + 0x1e) =
       uVar2 & *(ushort *)(self + 0x1e) | *(ushort *)(param_2 + 0x1e) & 0x1ff;
  uVar1 = *(ushort *)(param_2 + 0x20);
  uVar3 = (ushort)_DAT_080d7cf8;
  *(byte *)(self + 0x1f) = *(byte *)(self + 0x1f) & 1 | *(byte *)(param_2 + 0x1f) & 0xfe;
  *(ushort *)(self + 0x20) = uVar2 & *(ushort *)(self + 0x20) | uVar1 & uVar3 & uVar3;
  return CONCAT44(in_lr,self);
}

