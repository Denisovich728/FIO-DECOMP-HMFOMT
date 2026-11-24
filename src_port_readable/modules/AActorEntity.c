/* FIO-DECOMP-HMFOMT :: Port Readable Module: AActorEntity (14 functions) */
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

/* 0x080320DC (64B) | AActorEntity_Ctor (orig: func_080320DC) | origin: pure | domain: AActorEntity | EXACT / stanhash_elf */
/* AActorEntity_Ctor @ 0x080320DC mode=THUMB size=0x40 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* AActorEntity_Ctor @ 0x080320DC  mode=THUMB  size=0x40  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8
AActorEntity_Ctor(int self,undefined4 param_2,int param_3,undefined1 param_4,undefined4 param_5)

{
  undefined4 in_lr;
  
  AEntity_Ctor();
  *(undefined4 *)(self + 0x14) = _DAT_08032118;
  *(undefined4 *)(self + 0x18) = 0;
  *(undefined4 *)(self + 0x1c) = 0;
  *(undefined1 *)(self + 0x20) = *(undefined1 *)(param_3 + 6);
  *(undefined1 *)(self + 0x21) = param_4;
  func_0x08032300(self + 0x28);
  AActorEntity_SetAnim(self,param_5);
  return CONCAT44(in_lr,self);
}

/* 0x0803211C (84B) | AActorEntity_SetLocation (orig: func_0803211C) | origin: pure | domain: AActorEntity | EXACT / stanhash_elf */
/* AActorEntity_SetLocation @ 0x0803211C mode=THUMB size=0x54 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* AActorEntity_SetLocation @ 0x0803211C  mode=THUMB  size=0x54  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 AActorEntity_SetLocation(int param_1,ushort *param_2)

{
  undefined4 in_lr;
  
  AEntity_SetLocation(param_1,*param_2 & 0x3ff,
                (int)(short)((ushort)((param_2[1] & _DAT_0803216c) << 6) |
                            (ushort)(*(byte *)((int)param_2 + 1) >> 2)),
                (int)(short)((ushort)((param_2[2] & _DAT_0803216c) << 6) |
                            (ushort)(*(byte *)((int)param_2 + 3) >> 2)));
  if (*(char *)(param_1 + 0x20) != (char)param_2[3]) {
    AActorEntity_SetAnimFacing(param_1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return in_lr;
}

/* 0x08032170 (40B) | AActorEntity_GetLocation (orig: func_08032170) | origin: pure | domain: AActorEntity | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AEntity_GetLocation();
extern u32 LibC_memcpy();
u32 AActorEntity_GetLocation(int arg0,int arg1) {
  u8 val;
  u8 auStack_14 [8];
  AEntity_GetLocation(auStack_14);
  val = *(u8 *)(arg1 + 0x20);
  LibC_memcpy(arg0,auStack_14,6);
  *(u8 *)(arg0 + 6) = val;
  return arg0;
}

/* 0x08032198 (24B) | AActorEntity_SetAnimFacing (orig: func_08032198) | origin: pure | domain: AActorEntity | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AActorEntity_RefreshSprite();
void AActorEntity_SetAnimFacing(int arg0,u8 arg1) {
  *(u8 *)(arg0 + 0x20) = arg1;
  AActorEntity_RefreshSprite(arg0,(u32)*(u16 *)(arg0 + 0x22) + (u32)*(u8 *)(arg0 + 0x20));
}

/* 0x080321B0 (24B) | AActorEntity_SetAnim (orig: func_080321B0) | origin: pure | domain: AActorEntity | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AActorEntity_RefreshSprite();
void AActorEntity_SetAnim(int arg0,u16 arg1) {
  *(u16 *)(arg0 + 0x22) = arg1;
  AActorEntity_RefreshSprite(arg0,(u32)*(u16 *)(arg0 + 0x22) + (u32)*(u8 *)(arg0 + 0x20));
}

/* 0x080321C8 (64B) | AActorEntity_RefreshSprite (orig: func_080321C8) | origin: pure | domain: AActorEntity | EXACT / stanhash_elf */
/* AActorEntity_RefreshSprite @ 0x080321C8 mode=THUMB size=0x40 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* AActorEntity_RefreshSprite @ 0x080321C8  mode=THUMB  size=0x40  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 AActorEntity_RefreshSprite(undefined4 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = param_1[4];
  if (iVar3 != 0) {
    code_0803EE94_Sub_0805E860(iVar3 + 0x30);
    *(undefined1 *)(iVar3 + 0x44) = 1;
    *(undefined1 *)(iVar3 + 0x46) = 0;
    *(undefined1 *)(iVar3 + 0x47) = 1;
  }
  uVar2 = func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x68));
  uVar1 = code_entities_Sub_08032090(uVar2,param_2);
  *(undefined2 *)(param_1 + 9) = uVar1;
  *(undefined2 *)((int)param_1 + 0x26) = uVar1;
  return in_lr;
}

/* 0x08032208 (248B) | AActorEntity_Sub_08032208 (orig: func_08032208) | origin: pure | domain: AActorEntity | HIGH / stanhash_elf_class */
/* AActorEntity_Sub_08032208 @ 0x08032208 mode=THUMB size=0xF8 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* AActorEntity_Sub_08032208 @ 0x08032208  mode=THUMB  size=0x100  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 AActorEntity_Sub_08032208(undefined4 *param_1)

{
  undefined2 uVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 in_lr;
  undefined1 auStack_48 [12];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  short sStack_2c;
  short sStack_2a;
  short sStack_28;
  short sStack_26;
  int iStack_24;
  
  if ((param_1[6] == 0) && (param_1[7] == 0)) {
    return in_lr;
  }
  piVar8 = (int *)*param_1;
  uVar1 = *(undefined2 *)(param_1 + 1);
  iVar7 = param_1[2];
  iVar6 = param_1[3];
  iVar5 = param_1[6] + iVar7;
  iVar9 = iVar6 + param_1[7];
  if (iVar5 < 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = func_0x080d3914(piVar8,uVar1,*(undefined4 *)(*piVar8 + 0x2c));
    iVar4 = iVar4 * 0x10000;
    if (iVar5 <= iVar4) goto LAB_08032252;
  }
  iVar5 = iVar4;
LAB_08032252:
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  else {
    iVar4 = func_0x080d3914(piVar8,uVar1,*(undefined4 *)(*piVar8 + 0x30));
    if (iVar4 * 0x10000 < iVar9) {
      iVar9 = iVar4 * 0x10000;
    }
  }
  iStack_24 = (iVar5 >> 0x10) - (iVar7 >> 0x10);
  sVar2 = (short)((uint)iVar9 >> 0x10) - (short)((uint)iVar6 >> 0x10);
  func_0x080d3914(&uStack_3c,param_1,*(undefined4 *)(param_1[5] + 0xc));
  uStack_34 = uStack_3c;
  uStack_30 = uStack_38;
  func_0x080d3918(auStack_48,piVar8,uVar1,*(undefined4 *)(*piVar8 + 0x34));
  cVar3 = code_entities_Sub_080AC070(auStack_48,&uStack_34);
  if (cVar3 == '\0') {
    sStack_2c = (short)iStack_24 + (short)uStack_34;
    sStack_2a = uStack_34._2_2_ + sVar2;
    sStack_28 = (short)iStack_24 + (short)uStack_30;
    sStack_26 = uStack_30._2_2_ + sVar2;
    cVar3 = code_entities_Sub_080AC070(auStack_48);
    if (cVar3 == '\x01') {
      return in_lr;
    }
  }
  param_1[2] = iVar5;
  param_1[3] = iVar9;
  return in_lr;
}

/* 0x080324B8 (4B) | AActorEntity_vfunc_34 (orig: func_080324B8) | origin: pure | domain: AActorEntity | HIGH / vtable_algebra */
u32 AActorEntity_vfunc_34(void) {
    return 0;
}

/* 0x08032B44 (20B) | AActorEntity_Wrap_SetAnim (orig: func_08032B44) | origin: pure | domain: AActorEntity | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AActorEntity_SetAnim();
void AActorEntity_Wrap_SetAnim(int arg0,u32 arg1) {
  if (*(u16 *)(arg0 + 0x22) != arg1) {
    AActorEntity_SetAnim(arg0);
  }
}

/* 0x08032B68 (24B) | AActorEntity_Wrap_SetAnimFacing (orig: func_08032B68) | origin: pure | domain: AActorEntity | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AActorEntity_SetAnimFacing();
void AActorEntity_Wrap_SetAnimFacing(int arg0,u32 arg1) {
  if (*(u8 *)(arg0 + 0x20) != arg1) {
    AActorEntity_SetAnimFacing(arg0);
  }
}

/* 0x08035908 (56B) | AActorEntity_Sub_08035908 (orig: func_08035908) | origin: pure | domain: AActorEntity | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AActorEntity_SetAnim();
extern u32 func_080D3910();
void AActorEntity_Sub_08035908(int arg0,u32 arg1) {
  char val;
  u32 val2;
  val2 = (u32)*(u16 *)(arg0 + 0x44);
  if (arg1 != val2) {
    *(u16 *)(arg0 + 0x44) = (u16)arg1;
    val = func_080D3910(arg0,*(u32 *)(*(int *)(arg0 + 0x14) + 0x28));
    if (((val == '\0') && (*(u16 *)(arg0 + 0x22) == val2)) &&
       (*(u16 *)(arg0 + 0x22) != arg1)) {
      AActorEntity_SetAnim(arg0,arg1);
    }
  }
}

/* 0x08035940 (56B) | AActorEntity_Sub_08035940 (orig: func_08035940) | origin: pure | domain: AActorEntity | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AActorEntity_SetAnim();
extern u32 func_080D3910();
void AActorEntity_Sub_08035940(int arg0,u32 arg1) {
  char val;
  u32 val2;
  val2 = (u32)*(u16 *)(arg0 + 0x46);
  if (arg1 != val2) {
    *(u16 *)(arg0 + 0x46) = (u16)arg1;
    val = func_080D3910(arg0,*(u32 *)(*(int *)(arg0 + 0x14) + 0x28));
    if (((val == '\0') && (*(u16 *)(arg0 + 0x22) == val2)) &&
       (*(u16 *)(arg0 + 0x22) != arg1)) {
      AActorEntity_SetAnim(arg0,arg1);
    }
  }
}

/* 0x08036768 (68B) | AActorEntity_Sub_08036768 (orig: func_08036768) | origin: wip | domain: AActorEntity | MEDIUM / graph_algebra */
void AActorEntity_Sub_08036768(int param_1) {
  u8 uVar2;
  int iVar1;
  iVar1 = 0x0000027B;
  uVar2 = 2;
  if ((*(s8 *)(*(int *)(param_1 + 0x34) + 0x00002181) && 3) == 1) {
    iVar1 = 0x0000027B + 0x18;
    uVar2 = 1;
  }
  AActorEntity_Sub_08035908(param_1,iVar1);
  AActorEntity_Sub_08035940(param_1,0x0000027F);
  *(u8 *)(0x21 + param_1) = uVar2;
}

/* 0x08036AB4 (76B) | AActorEntity_Sub_08036AB4 (orig: func_08036AB4) | origin: wip | domain: AActorEntity | MEDIUM / graph_algebra */
void AActorEntity_Sub_08036AB4(int param_1) {
  u16 uVar1;
  u32 uVar2;
  u32 uVar3;
    uVar2 = 0x000009D3;
  if (uVar1 != 0x11) {
    uVar3 = 0x000009D7;
  uVar1 = *(int *)(param_1 + 4);
    if (uVar1 < 0x12) {
      if (uVar1 != 7) goto LAB_08036ae4;
    }
    else if ((uVar1 != 0x1d) && (uVar1 != 0x25)) goto LAB_08036ae4;
  }
  uVar2 = 0x000009DF;
  uVar3 = 0x000009E3;
LAB_08036ae4:
  AActorEntity_Sub_08035908(param_1,uVar2);
  AActorEntity_Sub_08035940(param_1,uVar3);
}

