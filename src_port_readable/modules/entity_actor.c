/* FIO-DECOMP-HMFOMT :: Port Readable Module: entity_actor (10 functions) */
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

/* 0x08032308 (52B) | entity_actor_Sub_08032308 (orig: func_08032308) | origin: pure | domain: entity_actor | HIGH / stanhash_map_tu */
/* entity_actor_Sub_08032308 @ 0x08032308 mode=THUMB size=0x34 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* entity_actor_Sub_08032308 @ 0x08032308  mode=THUMB  size=0x34  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 entity_actor_Sub_08032308(int param_1,int param_2,int param_3)

{
  undefined4 in_lr;
  
  *(int *)(param_1 + 8) = (int)*(short *)(param_1 + 10) << 0x10;
  if ((param_3 == 0) || (param_2 == *(short *)(param_1 + 10))) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    if (param_3 < 0) {
      param_3 = -param_3;
    }
    *(int *)(param_1 + 0x28) = param_3;
    *(short *)(param_1 + 0x2c) = (short)param_2;
    *(undefined1 *)(param_1 + 0x2e) = 0;
  }
  return in_lr;
}

/* 0x0803233C (52B) | entity_actor_Sub_0803233C (orig: func_0803233C) | origin: pure | domain: entity_actor | HIGH / stanhash_map_tu */
/* entity_actor_Sub_0803233C @ 0x0803233C mode=THUMB size=0x34 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* entity_actor_Sub_0803233C @ 0x0803233C  mode=THUMB  size=0x34  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 entity_actor_Sub_0803233C(int param_1,int param_2,int param_3)

{
  undefined4 in_lr;
  
  *(int *)(param_1 + 0xc) = (int)*(short *)(param_1 + 0xe) << 0x10;
  if ((param_3 == 0) || (param_2 == *(short *)(param_1 + 0xe))) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    if (param_3 < 0) {
      param_3 = -param_3;
    }
    *(int *)(param_1 + 0x28) = param_3;
    *(short *)(param_1 + 0x2c) = (short)param_2;
    *(undefined1 *)(param_1 + 0x2e) = 1;
  }
  return in_lr;
}

/* 0x08032370 (20B) | entity_actor_Sub_08032370 (orig: func_08032370) | origin: pure | domain: entity_actor | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 entity_actor_Sub_08032370(int arg0) {
  return ((u32)(*(int *)(arg0 + 0x28) == 0));
}

/* 0x08032384 (68B) | entity_actor_Sub_08032384 (orig: func_08032384) | origin: pure | domain: entity_actor | HIGH / stanhash_map_tu */
/* entity_actor_Sub_08032384 @ 0x08032384 mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* entity_actor_Sub_08032384 @ 0x08032384  mode=THUMB  size=0x44  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 entity_actor_Sub_08032384(int param_1,undefined4 param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    code_0803EE94_Sub_0805E860(iVar2 + 0x70);
    *(undefined1 *)(iVar2 + 0x84) = 1;
    *(undefined1 *)(iVar2 + 0x86) = 0;
    *(undefined1 *)(iVar2 + 0x87) = 1;
    bVar1 = 1;
    if (param_3 != '\0') {
      bVar1 = 2;
    }
    *(byte *)(iVar2 + 0x8a) = *(byte *)(iVar2 + 0x8a) & 0xfc | bVar1;
  }
  return in_lr;
}

/* 0x080323C8 (24B) | entity_actor_Sub_080323C8 (orig: func_080323C8) | origin: pure | domain: entity_actor | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
void entity_actor_Sub_080323C8(int arg0) {
  s8 *mem_ptr;
  if (*(int *)(arg0 + 0x10) != 0) {
    mem_ptr = (u8 *)(*(int *)(arg0 + 0x10) + 0x8a);
    *mem_ptr = *mem_ptr & 0xfc;
  }
}

/* 0x080323E0 (16B) | entity_actor_SetField_0x00 (orig: func_080323E0) | origin: pure | domain: entity_actor | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
void entity_actor_SetField_0x00(int arg0, s32 arg1) {
  if (*(int *)(arg0 + 0x10) != 0) {
    *(u8 *)(*(int *)(arg0 + 0x10) + 0x88) = arg1;
  }
}

/* 0x080323F0 (28B) | entity_actor_Sub_080323F0 (orig: func_080323F0) | origin: pure | domain: entity_actor | HIGH / stanhash_map_tu */
/* entity_actor_Sub_080323F0 @ 0x080323F0 mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* entity_actor_Sub_080323F0 @ 0x080323F0  mode=THUMB  size=0x1C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 entity_actor_Sub_080323F0(int param_1,char param_2)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    pbVar1 = (byte *)(*(int *)(param_1 + 0x10) + 0x8a);
    *pbVar1 = *pbVar1 & 3 | param_2 << 2;
  }
  return in_lr;
}

/* 0x0803240C (32B) | entity_actor_vfunc_0C (orig: func_0803240C) | origin: pure | domain: entity_actor | HIGH / vtable_algebra */
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
unsigned long long entity_actor_vfunc_0C(short *arg0, int arg1) {
  int val;
  int val2;
  val = *(short *)(arg1 + 10);
  val2 = *(short *)(arg1 + 0xe);
  *arg0 = val + -7;
  arg0[1] = val2 + -4;
  arg0[2] = val + 7;
  arg0[3] = val2 + 5;
}

/* 0x08035978 (208B) | entity_actor_Sub_08035978 (orig: func_08035978) | origin: wip | domain: entity_actor | MEDIUM / graph_algebra */
u32 entity_actor_Sub_08035978(u32 *param_1) {
  char cVar1;
  int iVar2;
  u32 uVar3;
  int iVar4;
  u32 uVar5;
  int *piVar6;
  u16 *puVar7;
  int iVar8;
  cVar1 = func_080D3910(param_1,*(u32 *)(param_1[5] + 0x28));
  if (((cVar1 == '\0') && (param_1[0xe] != 0)) &&
     (puVar7 = *(u16 **)((u32)*(u8 *)(param_1 + 0xf) * 4 + *(int *)(param_1[0xe] + 8)),
     puVar7 != (u16 *)0x0)) {
    uVar3 = (u32)*(u8 *)((int)param_1 + 0x3d);
    if (uVar3 < *puVar7) {
      iVar8 = *(int *)(puVar7 + 2) + uVar3 * 8;
      piVar6 = *(int **)(iVar8 + 4);
      if (piVar6 != (int *)0x0) {
        iVar2 = func_080D3910((int *)*param_1,*(u32 *)(*(int *)*param_1 + 0x144));
        uVar3 = *(u16 *)(iVar2 + 10) & 0x1f;
        iVar4 = uVar3 - 6;
        if (iVar4 < 0) {
          iVar4 = uVar3 + 0x12;
        }
        if ((*piVar6 == 0) || (*(u16 *)(piVar6 + 1) == 0)) {
LAB_08035a20:
          uVar5 = 0;
          if ((*puVar7 <= (u16)(*(u8 *)((int)param_1 + 0x3d) + 1)) ||
             (iVar4 * 0x3c + ((*(char *)(iVar2 + 10) & 0x7ff) >> 5) < (u32)*(short *)(iVar8 + 8)
             )) goto LAB_08035a3c;
        }
        else {
          if (*(u16 *)(piVar6 + 1) <= (u16)*(u8 *)((int)param_1 + 0x3e)) goto LAB_08035a3a;
          if ((int)((u32)*(u8 *)((int)piVar6 + 0xb) * 0x8000000) < 0) goto LAB_08035a20;
          uVar5 = 0;
          if ((int)(u32)*(u16 *)(param_1 + 0x10) < 0x000002EE) goto LAB_08035a3c;
        }
        uVar5 = 1;
        goto LAB_08035a3c;
      }
    }
  }
LAB_08035a3a:
  uVar5 = 0;
LAB_08035a3c:
  return uVar5;
}

/* 0x08035A48 (152B) | entity_actor_Sub_08035A48 (orig: func_08035A48) | origin: wip | domain: entity_actor | MEDIUM / graph_algebra */
void entity_actor_Sub_08035A48(int param_1,u16 *param_2) {
    int iVar2;
  register char cVar1;
  if (*(u16 *)(param_1 + 4) == (*param_2 & 0x3ff)) {
    iVar2 = (int)(short)((u16)((param_2[1] & 0x000003FF) << 6) |
                        (u16)(*(u8 *)((int)1 + param_2) >> 2)) - (int)*(short *)(param_1 + 10);
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < 0x98) {
      iVar2 = (s8)(int)(short)((u16)((param_2[2] & 0x000003FF) << 6) |
                          (u16)(*(u8 *)((int)param_2 + 3) >> 2)) -
              (int)*(short *)(param_1 + 0xe);
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if (((iVar2 < 0x70) && (cVar1 = entity_actor_Sub_08035978(param_1), cVar1 == '\0')) &&
         (cVar1 = (u16)func_080D3910(param_1,*(u32 *)(*(int *)(param_1 + 0x14) + 0x28)),
         cVar1 == '\0')) {
        entity_actor_Sub_08032384(param_1,2,0);
        *(u8 *)(param_1 + 0x3f) = 0x78;
        func_080D3914(param_1,1,*(u32 *)(*(u32 *)(param_1 + 0x14) + 0x3c));
      }
    }
  }
}

