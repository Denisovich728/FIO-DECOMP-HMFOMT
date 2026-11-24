/* FIO-DECOMP-HMFOMT :: Port Readable Module: ShippingBin (8 functions) */
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

/* 0x0800B0DC (68B) | ShippingBin_Ctor (orig: func_0800B0DC) | origin: pure | domain: ShippingBin | EXACT / stanhash_elf */
/* ShippingBin_Ctor @ 0x0800B0DC mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* ShippingBin_Ctor @ 0x0800B0DC  mode=THUMB  size=0x48  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 ShippingBin_Ctor(undefined4 *self)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  *self = 0;
  iVar4 = 0x66;
  puVar2 = self;
  do {
    puVar2 = puVar2 + 1;
    func_0x0800b26c(puVar2);
    iVar1 = _DAT_0800b11c;
    iVar4 = iVar4 + -1;
  } while (iVar4 != -1);
  uVar3 = 0;
  do {
    S_ForceEnableDisplay(self + *(byte *)(uVar3 + iVar1) + 1);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x16);
  return CONCAT44(in_lr,self);
}

/* 0x0800B124 (28B) | ShippingBin_IsDisplayEnabled (orig: func_0800B124) | origin: pure | domain: ShippingBin | EXACT / stanhash_elf */
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
extern u32 func_0800B280();
s32 ShippingBin_IsDisplayEnabled(u8 *arg0,int arg1) {
  u32 val;
  if (!(0x67 > arg1)) {
    val = 0;
  } else {
    val = func_0800B280(arg0 + ((arg1 << 2) + 4));
  }
  return val;
}

/* 0x0800B140 (28B) | ShippingBin_GetAmountShipped (orig: func_0800B140) | origin: pure | domain: ShippingBin | EXACT / stanhash_elf */
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
extern u32 S_GetAmountShipped();
u32 ShippingBin_GetAmountShipped(u8 *arg0,int arg1) {
  u32 val;
  if (!(0x67 > arg1)) {
    val = 0;
  } else {
    val = S_GetAmountShipped(arg0 + ((arg1 << 2) + 4));
  }
  return val;
}

/* 0x0800B15C (48B) | ShippingBin_HasShippedOneOfEachProduct (orig: func_0800B15C) | origin: pure | domain: ShippingBin | EXACT / stanhash_elf */
/* ShippingBin_HasShippedOneOfEachProduct @ 0x0800B15C mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* ShippingBin_HasShippedOneOfEachProduct @ 0x0800B15C  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 ShippingBin_HasShippedOneOfEachProduct(int self)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  while( true ) {
    self = self + 4;
    cVar1 = func_0x0800b280(self);
    if ((cVar1 == '\0') || (iVar2 = S_GetAmountShipped(self), iVar2 == 0)) break;
    uVar4 = uVar4 + 1;
    if (0x66 < uVar4) {
      uVar3 = 1;
LAB_0800b186:
      return CONCAT44(in_lr,uVar3);
    }
  }
  uVar3 = 0;
  goto LAB_0800b186;
}

/* 0x0800B18C (64B) | ShippingBin_HasShippedOneOfEachCrop (orig: func_0800B18C) | origin: pure | domain: ShippingBin | EXACT / stanhash_elf */
/* ShippingBin_HasShippedOneOfEachCrop @ 0x0800B18C mode=THUMB size=0x40 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* ShippingBin_HasShippedOneOfEachCrop @ 0x0800B18C  mode=THUMB  size=0x40  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 ShippingBin_HasShippedOneOfEachCrop(int self)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  while( true ) {
    iVar3 = self + (uint)*(byte *)(uVar4 + _DAT_0800b1b8) * 4 + 4;
    cVar1 = func_0x0800b280(iVar3);
    if ((cVar1 == '\0') || (iVar3 = S_GetAmountShipped(iVar3), iVar3 == 0)) break;
    uVar4 = uVar4 + 1;
    if (0xe < uVar4) {
      uVar2 = 1;
LAB_0800b1c4:
      return CONCAT44(in_lr,uVar2);
    }
  }
  uVar2 = 0;
  goto LAB_0800b1c4;
}

/* 0x0800B1CC (64B) | ShippingBin_HasShippedOneOfEachMineral (orig: func_0800B1CC) | origin: pure | domain: ShippingBin | EXACT / stanhash_elf */
/* ShippingBin_HasShippedOneOfEachMineral @ 0x0800B1CC mode=THUMB size=0x40 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* ShippingBin_HasShippedOneOfEachMineral @ 0x0800B1CC  mode=THUMB  size=0x40  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 ShippingBin_HasShippedOneOfEachMineral(int self)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  while( true ) {
    iVar3 = self + (uint)*(byte *)(uVar4 + _DAT_0800b1f8) * 4 + 4;
    cVar1 = func_0x0800b280(iVar3);
    if ((cVar1 == '\0') || (iVar3 = S_GetAmountShipped(iVar3), iVar3 == 0)) break;
    uVar4 = uVar4 + 1;
    if (0x13 < uVar4) {
      uVar2 = 1;
LAB_0800b204:
      return CONCAT44(in_lr,uVar2);
    }
  }
  uVar2 = 0;
  goto LAB_0800b204;
}

/* 0x0800B20C (64B) | ShippingBin_Ship (orig: func_0800B20C) | origin: pure | domain: ShippingBin | EXACT / stanhash_elf */
/* ShippingBin_Ship @ 0x0800B20C mode=THUMB size=0x40 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* ShippingBin_Ship @ 0x0800B20C  mode=THUMB  size=0x48  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 ShippingBin_Ship(int *self,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar1 = Product_GetPrice(param_2);
  if (uVar1 != 0) {
    iVar2 = func_0x0800e194(param_2);
    S_ShipOne(self + iVar2 + 1);
    uVar3 = _DAT_0800b248 - *self;
    if (uVar1 < uVar3) {
      uVar3 = uVar1;
    }
    *self = *self + uVar3;
  }
  return in_lr;
}

/* 0x0800B254 (24B) | ShippingBin_ForceEnableDisplay (orig: func_0800B254) | origin: pure | domain: ShippingBin | EXACT / stanhash_elf */
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
extern u32 S_ForceEnableDisplay();
void ShippingBin_ForceEnableDisplay(u8 *arg0,int arg1) {
  if (arg1 < 0x67) {
    S_ForceEnableDisplay(arg0 + (arg1 * 4 + 4));
  }
}

