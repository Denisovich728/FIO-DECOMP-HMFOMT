/* FIO-DECOMP-HMFOMT :: Port Readable Module: Farm (9 functions) */
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

/* 0x08009A48 (148B) | Farm_Ctor (orig: func_08009A48) | origin: pure | domain: Farm | EXACT / stanhash_elf */
/* Farm_Ctor @ 0x08009A48 mode=THUMB size=0x94 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Farm_Ctor @ 0x08009A48  mode=THUMB  size=0xB8  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Farm_Ctor(int self,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar1 = func_0x080d3b78(param_2);
  if (0xc < uVar1) {
    uVar1 = 0xc;
  }
  LibC_memcpy(self,param_2,uVar1);
  *(undefined1 *)(self + uVar1) = 0;
  *(ushort *)(self + 0x10) = (ushort)_DAT_08009acc & *(ushort *)(self + 0x10);
  *(byte *)(self + 0x11) = *(byte *)(self + 0x11) & 0xeb | 8;
  ShippingBin_Ctor(self + 0x40);
  func_0x0800be70(self + 0x1e0);
  Coop_Ctor(self + 0x3fc);
  Barn_Ctor(self + _DAT_08009ad0);
  iVar2 = self + _DAT_08009ad4;
  iVar3 = _DAT_08009ad8;
  do {
    FieldPlot_Ctor(iVar2);
    iVar2 = iVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  return CONCAT44(in_lr,self);
}

/* 0x08009B00 (24B) | Farm_GetHorse (orig: func_08009B00) | origin: pure | domain: Farm | EXACT / stanhash_elf */
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
u32 Farm_GetHorse(int arg0) {
    return ((s32)(*(u8 *)(arg0 + 0x11) << 29) < 0) ? (arg0 + 0x14) : 0;
}

/* 0x08009B20 (64B) | Farm_Anim_Door_Close (orig: func_08009B20) | origin: pure | domain: Farm | EXACT / fomt_studio_dispatch */
/* Farm_Anim_Door_Close @ 0x08009B20 mode=THUMB size=0x40 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Farm_Anim_Door_Close @ 0x08009B20  mode=THUMB  size=0x48  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Farm_Anim_Door_Close(int self)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = 0;
  iVar4 = 0;
  do {
    uVar3 = 0;
    puVar2 = (uint *)(iVar4 + self + _DAT_08009b44);
    do {
      if (((*puVar2 & 0xfff) >> 8 != 0) && ((*puVar2 & 0xff) >> 2 == 0x1a)) {
        uVar1 = 1;
        goto LAB_08009b5a;
      }
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x2b);
    iVar4 = iVar4 + 0xac;
    uVar5 = uVar5 + 1;
    if (0x18 < uVar5) {
      uVar1 = 0;
LAB_08009b5a:
      return CONCAT44(in_lr,uVar1);
    }
  } while( true );
}

/* 0x08009B68 (68B) | Farm_Sub_08009B68 (orig: func_08009B68) | origin: pure | domain: Farm | HIGH / stanhash_elf_class */
/* Farm_Sub_08009B68 @ 0x08009B68 mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Farm_Sub_08009B68 @ 0x08009B68  mode=THUMB  size=0x7C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Farm_Sub_08009B68(int self,int param_2)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_14;
  uint uStack_10;
  
  uStack_14 = _DAT_08009ba0;
  uStack_10 = (*(ushort *)(self + 0x10) & 0x3ff) + param_2;
  puVar1 = &uStack_14;
  if (uStack_10 < _DAT_08009ba0) {
    puVar1 = &uStack_10;
  }
  *(ushort *)(self + 0x10) =
       (ushort)_DAT_08009ba8 & *(ushort *)(self + 0x10) | (ushort)*puVar1 & (ushort)_DAT_08009ba4
  ;
  return in_lr;
}

/* 0x08009BE4 (88B) | Farm_SetHorse (orig: func_08009BE4) | origin: pure | domain: Farm | EXACT / stanhash_elf */
/* Farm_SetHorse @ 0x08009BE4 mode=THUMB size=0x58 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Farm_SetHorse @ 0x08009BE4  mode=THUMB  size=0x58  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Farm_SetHorse(int self,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (-1 < (int)((uint)*(byte *)(self + 0x11) * 0x20000000)) {
    if (self + 0x14 != 0) {
      Farm_as_6AnimalRC6Animal(self + 0x14);
      *(undefined1 *)(self + 0x30) = *(undefined1 *)(param_2 + 0x1c);
      *(byte *)(self + 0x31) =
           *(byte *)(self + 0x31) & 0xfc | *(byte *)(param_2 + 0x1d) & 1 |
           *(byte *)(param_2 + 0x1d) & 2;
      *(undefined4 *)(self + 0x34) = *(undefined4 *)(param_2 + 0x20);
      uVar1 = *(undefined4 *)(param_2 + 0x28);
      *(undefined4 *)(self + 0x38) = *(undefined4 *)(param_2 + 0x24);
      *(undefined4 *)(self + 0x3c) = uVar1;
    }
    *(byte *)(self + 0x11) = *(byte *)(self + 0x11) | 4;
  }
  return in_lr;
}

/* 0x08009C3C (24B) | Farm_GetHorse_9C3C (orig: func_08009C3C) | origin: pure | domain: Farm | EXACT / stanhash_elf */
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
u32 Farm_GetHorse_9C3C(int arg0) {
    return ((s32)(*(u8 *)(arg0 + 0x11) << 29) < 0) ? (arg0 + 0x14) : 0;
}

/* 0x08009C6C (788B) | Farm_DayUpdate (orig: func_08009C6C) | origin: pure | domain: Farm | EXACT / stanhash_elf */
/* Farm_DayUpdate @ 0x08009C6C mode=THUMB size=0x314 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Farm_DayUpdate @ 0x08009C6C  mode=THUMB  size=0x320  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Farm_DayUpdate(int self,int param_2,byte *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 in_lr;
  int iStack_48;
  int iStack_44;
  int aiStack_40 [2];
  uint uStack_38;
  int *piStack_34;
  uint uStack_30;
  int *piStack_2c;
  uint uStack_28;
  int *piStack_24;
  
  *(byte *)(self + 0x11) = *(byte *)(self + 0x11) | 8;
  iVar4 = Farm_GetHorse_9C3C(self);
  if (iVar4 != 0) {
    Horse_DayUpdate();
  }
  FarmHouse_DayUpdate(self + 0x1e0,*param_3 & 3);
  Coop_DayUpdate(self + 0x3fc);
  Barn_DayUpdate(self + _DAT_08009d2c);
  uVar5 = self + _DAT_08009d34;
  uVar9 = _DAT_08009d30 + self;
  for (uVar10 = uVar9; uVar10 < uVar5; uVar10 = uVar10 + 4) {
    FieldPlot_DayUpdate(uVar10,param_2,param_3);
  }
  if (param_2 - 3U < 2) {
    uVar10 = func_0x080d11e4();
    uStack_38 = 0x23;
    if ((uVar10 & 1) != 0) {
      uStack_38 = 0x1f;
    }
    bVar3 = uStack_38 < 0x1b;
    uStack_30 = 0;
    piStack_24 = aiStack_40;
    piStack_34 = &iStack_48;
    do {
      if (bVar3) {
        uVar6 = func_0x080d11e4();
        iVar4 = func_0x080d0f4e(uVar6,0x2b);
        uVar6 = func_0x080d11e4();
        uVar8 = 0x19;
      }
      else {
        uVar6 = func_0x080d11e4();
        iVar4 = func_0x080d0f4e(uVar6,0x2a);
        uVar6 = func_0x080d11e4();
        uVar8 = 0x18;
      }
      iVar7 = func_0x080d0f4e(uVar6,uVar8);
      cVar2 = FieldPlot_Sub_0800A78C((iVar4 + iVar7 * 0x2b) * 4 + uVar9);
      if (cVar2 == '\0') {
        if (bVar3) {
LAB_08009da6:
          piVar1 = piStack_34;
          *piStack_34 = iVar4;
          piVar1[1] = iVar7;
          bVar3 = true;
          goto LAB_08009dbc;
        }
        cVar2 = FieldPlot_Sub_0800A78C((iVar4 + 1 + iVar7 * 0x2b) * 4 + uVar9);
        if (cVar2 == '\0') {
          iVar11 = (iVar7 + 1) * 0x2b;
          cVar2 = FieldPlot_Sub_0800A78C((iVar4 + iVar11) * 4 + uVar9);
          if ((cVar2 == '\0') &&
             (cVar2 = FieldPlot_Sub_0800A78C((iVar4 + 1 + iVar11) * 4 + uVar9), cVar2 == '\0'))
          goto LAB_08009da6;
        }
      }
      uStack_30 = uStack_30 + 1;
    } while (uStack_30 < 100);
    bVar3 = false;
LAB_08009dbc:
    uVar10 = uStack_38;
    if ((bVar3) &&
       (FieldPlot_Sub_0800A134((iStack_48 + iStack_44 * 0x2b) * 4 + uVar9,uStack_38,8), 0x1a < (int)uVar10))
    {
      FieldPlot_Sub_0800A134((iStack_48 + 1 + iStack_44 * 0x2b) * 4 + uVar9,uStack_38 + 1,8);
      FieldPlot_Sub_0800A134((iStack_48 + (iStack_44 + 1) * 0x2b) * 4 + uVar9,uStack_38 + 2,8);
      FieldPlot_Sub_0800A134((iStack_48 + 1 + (iStack_44 + 1) * 0x2b) * 4 + uVar9,uStack_38 + 3,8);
    }
    uVar10 = func_0x080d11e4();
    uStack_38 = 0x23;
    if ((uVar10 & 1) != 0) {
      uStack_38 = 0x1f;
    }
    piStack_2c = piStack_24;
    bVar3 = uStack_38 < 0x1b;
    uStack_28 = 0;
    do {
      if (bVar3) {
        uVar6 = func_0x080d11e4();
        iVar4 = func_0x080d0f4e(uVar6,0x2b);
        uVar6 = func_0x080d11e4();
        uVar8 = 0x19;
      }
      else {
        uVar6 = func_0x080d11e4();
        iVar4 = func_0x080d0f4e(uVar6,0x2a);
        uVar6 = func_0x080d11e4();
        uVar8 = 0x18;
      }
      iVar7 = func_0x080d0f4e(uVar6,uVar8);
      cVar2 = FieldPlot_Sub_0800A78C((iVar4 + iVar7 * 0x2b) * 4 + uVar9);
      if (cVar2 == '\0') {
        if (bVar3) {
LAB_08009ede:
          piVar1 = piStack_2c;
          *piStack_2c = iVar4;
          piVar1[1] = iVar7;
          bVar3 = true;
          goto LAB_08009ef4;
        }
        cVar2 = FieldPlot_Sub_0800A78C((iVar4 + 1 + iVar7 * 0x2b) * 4 + uVar9);
        if (cVar2 == '\0') {
          iVar11 = (iVar7 + 1) * 0x2b;
          cVar2 = FieldPlot_Sub_0800A78C((iVar4 + iVar11) * 4 + uVar9);
          if ((cVar2 == '\0') &&
             (cVar2 = FieldPlot_Sub_0800A78C((iVar4 + 1 + iVar11) * 4 + uVar9), cVar2 == '\0'))
          goto LAB_08009ede;
        }
      }
      uStack_28 = uStack_28 + 1;
    } while (uStack_28 < 100);
    bVar3 = false;
LAB_08009ef4:
    uVar10 = uStack_38;
    if ((bVar3) &&
       (FieldPlot_Sub_0800A134((aiStack_40[0] + piStack_24[1] * 0x2b) * 4 + uVar9,uStack_38,8),
       0x1a < (int)uVar10)) {
      FieldPlot_Sub_0800A134((aiStack_40[0] + 1 + piStack_24[1] * 0x2b) * 4 + uVar9,uStack_38 + 1,8);
      FieldPlot_Sub_0800A134((aiStack_40[0] + (piStack_24[1] + 1) * 0x2b) * 4 + uVar9,uStack_38 + 2,8);
      FieldPlot_Sub_0800A134((aiStack_40[0] + 1 + (piStack_24[1] + 1) * 0x2b) * 4 + uVar9,uStack_38 + 3,8);
    }
  }
  return in_lr;
}

/* 0x080D67C8 (132B) | Farm_Sub_080D67C8 (orig: func_080D67C8) | origin: wip | domain: Farm | MEDIUM / graph_algebra */
u32 Farm_Sub_080D67C8(int self,int param_2) {
  u32 uVar1;
  Farm_as_6AnimalRC6Animal();
  *(u8 *)(self + 0x1c) = *(u8 *)(param_2 + 0x1c);
  *(u8 *)(self + 0x1d) =
       *(u8 *)(self + 0x1d) & 0xfc | *(u8 *)(param_2 + 0x1d) & 1 |
       *(u8 *)(param_2 + 0x1d) & 2;
  *(u32 *)(self + 0x20) = *(u32 *)(param_2 + 0x20);
  uVar1 = *(u32 *)(param_2 + 0x28);
  *(u32 *)(self + 0x24) = *(u32 *)(param_2 + 0x24);
  *(u32 *)(self + 0x28) = uVar1;
  *(u16 *)(self + 0x2c) =
       (u16)0xFFFFFC00 & *(u16 *)(self + 0x2c) | *(u16 *)(param_2 + 0x2c) & 0x3ff;
  *(u8 *)(self + 0x2d) = *(u8 *)(self + 0x2d) & 0xe3 | *(u8 *)(param_2 + 0x2d) & 0x1c;
  *(u32 *)(self + 0x2c) =
       *(u32 *)(self + 0x2c) & 0xFFE01FFF | *(u32 *)(param_2 + 0x2c) & 0x1fe000;
  return self;
}

/* 0x080D684C (116B) | Farm_as_6AnimalRC6Animal (orig: func_080D684C) | origin: pure | domain: Farm | EXACT / stanhash_elf */
/* Farm_as_6AnimalRC6Animal @ 0x080D684C mode=THUMB size=0x74 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Farm_as_6AnimalRC6Animal @ 0x080D684C  mode=THUMB  size=0x74  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 Farm_as_6AnimalRC6Animal(undefined4 *self,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = param_2[1];
  *self = *param_2;
  self[1] = uVar2;
  func_0x080d3b28(self + 2,param_2 + 2);
  *(ushort *)(self + 6) =
       (ushort)_DAT_080d68b8 & *(ushort *)(self + 6) | *(ushort *)(param_2 + 6) & 0x3ff;
  bVar1 = *(byte *)((int)param_2 + 0x19);
  *(byte *)((int)self + 0x19) =
       *(byte *)((int)self + 0x19) & 0xe3 | bVar1 & 4 | bVar1 & 8 | bVar1 & 0x10;
  self[6] = self[6] & _DAT_080d68bc | param_2[6] & 0x1fe000;
  return CONCAT44(in_lr,self);
}

