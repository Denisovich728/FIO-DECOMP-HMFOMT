/* FIO-DECOMP-HMFOMT :: Port Readable Module: Cow (7 functions) */
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

/* 0x0809BD48 (40B) | Cow_Ctor (orig: func_0809BD48) | origin: pure | domain: Cow | EXACT / stanhash_elf */
/* Cow_Ctor @ 0x0809BD48 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Cow_Ctor @ 0x0809BD48  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Cow_Ctor(int self)

{
  undefined4 in_lr;
  
  BarnAnimal_Ctor(self);
  *(byte *)(self + 0x34) = *(byte *)(self + 0x34) & 0xfe;
  return CONCAT44(in_lr,self);
}

/* 0x0809BD70 (32B) | Cow_Ctor_BD70 (orig: func_0809BD70) | origin: pure | domain: Cow | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 BarnAnimal_Ctor_B870();
u32 Cow_Ctor_BD70(int arg0) {
  BarnAnimal_Ctor_B870();
  *(u8 *)(arg0 + 0x34) = *(s8 *)(arg0 + 0x34) & 0xfe;
  return arg0;
}

/* 0x0809BD90 (48B) | Cow_GetGrowthStage (orig: func_0809BD90) | origin: pure | domain: Cow | EXACT / stanhash_elf */
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
extern u32 func_0809B220();
extern u32 func_0809B4F4();
u32 Cow_GetGrowthStage(u32 arg0) {
  u32 val = func_0809B4F4();
  u32 val2 = func_0809B220(arg0);
  if (val <= 13 && val2 <= 19)
    return 0;
  if (val <= 20 && val2 <= 33)
    return 1;
  return 2;
}

/* 0x0809BDC0 (72B) | Cow_CanBeMilked (orig: func_0809BDC0) | origin: pure | domain: Cow | EXACT / stanhash_elf */
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
extern u32 func_0809B504();
extern u32 func_0809B50C();
extern u32 func_0809B8B0();
extern u32 Cow_GetGrowthStage();
u32 Cow_CanBeMilked(int arg0) {
  char val;
  int val2;
  u32 val3;
  val3 = 0;
  if (((((((u32)(*(u8 *)(arg0 + 0x34)) << 31) >> 31) == 0) && (val = func_0809B8B0(arg0), val == '\0'))
      && (val = func_0809B50C(arg0), val == '\0')) &&
     ((val = func_0809B504(arg0), val == '\0' &&
      (val2 = Cow_GetGrowthStage(arg0), val2 == 2)))) {
    val3 = 1;
  }
  return (val3);
}

/* 0x0809BE08 (48B) | Cow_CanBeMadePregnant (orig: func_0809BE08) | origin: pure | domain: Cow | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0809B50C();
extern u32 func_0809B8B0();
extern u32 Cow_GetGrowthStage();
u32 Cow_CanBeMadePregnant(u32 arg0) {
  char val;
  int val2;
  u32 val3;
  val3 = 0;
  val = func_0809B8B0();
  if (((val == '\0') && (val = func_0809B50C(arg0), val == '\0')) &&
     (val2 = Cow_GetGrowthStage(arg0), val2 == 2)) {
    val3 = 1;
  }
  return val3;
}

/* 0x0809BE44 (48B) | Cow_ConsumeProduct (orig: func_0809BE44) | origin: pure | domain: Cow | EXACT / stanhash_elf */
/* Cow_ConsumeProduct @ 0x0809BE44 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Cow_ConsumeProduct @ 0x0809BE44  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Cow_ConsumeProduct(int self)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(byte *)(self + 0x34) = *(byte *)(self + 0x34) | 1;
  iVar1 = Livestock_GetProductRank();
  if (iVar1 == 4) {
    uVar2 = func_0x080d11e4();
    iVar3 = func_0x080d0ed0(uVar2,0xff);
    iVar1 = 5;
    if (iVar3 != 0) {
      iVar1 = 4;
    }
  }
  return CONCAT44(in_lr,iVar1);
}

/* 0x0809BE74 (32B) | Cow_DayUpdate (orig: func_0809BE74) | origin: pure | domain: Cow | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 BarnAnimal_DayUpdate();
void Cow_DayUpdate(int arg0) {
  BarnAnimal_DayUpdate(arg0,0x08103680);
  *(u8 *)(arg0 + 0x34) = *(s8 *)(arg0 + 0x34) & 0xfe;
}

