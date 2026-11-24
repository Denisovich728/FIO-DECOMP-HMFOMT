/* FIO-DECOMP-HMFOMT :: Port Readable Module: Npc (14 functions) */
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

/* 0x0809E2D4 (88B) | Npc_Ctor (orig: func_0809E2D4) | origin: pure | domain: Npc | EXACT / stanhash_elf */
/* Npc_Ctor @ 0x0809E2D4 mode=THUMB size=0x58 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Npc_Ctor @ 0x0809E2D4  mode=THUMB  size=0x58  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
void Npc_Ctor(undefined4 *self,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *self = *param_2;
  self[1] = uVar1;
  *(undefined1 *)(self + 2) = 0x32;
  *(undefined1 *)((int)self + 9) = 0;
  *(byte *)((int)self + 10) = *(byte *)((int)self + 10) & 0xfe;
  *(undefined2 *)(self + 4) = 0;
  *(short *)((int)self + 0x12) = (short)_DAT_0809e320;
  *(byte *)(self + 3) = *(byte *)(self + 3) & 0xe0;
  *(ushort *)(self + 3) = (ushort)_DAT_0809e324 & *(ushort *)(self + 3);
  *(byte *)((int)self + 0xd) = *(byte *)((int)self + 0xd) & 0x83;
  self[3] = self[3] & _DAT_0809e328;
  return;
}

/* 0x0809E32C (16B) | Npc_GetLocation (orig: func_0809E32C) | origin: pure | domain: Npc | EXACT / stanhash_elf */
/* Npc_GetLocation @ 0x0809E32C mode=THUMB size=0x10 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Npc_GetLocation @ 0x0809E32C  mode=THUMB  size=0x44  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
void Npc_GetLocation(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}

/* 0x0809E370 (28B) | Npc_AddFriendship (orig: func_0809E370) | origin: pure | domain: Npc | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
void Npc_AddFriendship(int arg0,int arg1) {
  u32 val;
  val = (u32)*(u8 *)(arg0 + 8) + arg1;
  if ((int)val < 0) {
    val = 0;
  }
  else if (0xff < val) {
    val = 0xff;
  }
  *(char *)(arg0 + 8) = (char)val;
}

/* 0x0809E38C (12B) | Npc_SubtractFriendship (orig: func_0809E38C) | origin: pure | domain: Npc | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 Npc_AddFriendship();
void Npc_SubtractFriendship(u32 arg0,int arg1) {
  Npc_AddFriendship(arg0,-arg1);
}

/* 0x0809E39C (48B) | Npc_SetSpokenTo (orig: func_0809E39C) | origin: pure | domain: Npc | EXACT / stanhash_elf */
/* Npc_SetSpokenTo @ 0x0809E39C mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Npc_SetSpokenTo @ 0x0809E39C  mode=THUMB  size=0x4C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Npc_SetSpokenTo(int param_1)

{
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 10) & 1) == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  }
  else {
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x60;
  }
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xe0;
  return in_lr;
}

/* 0x0809E3E8 (112B) | Npc_DayUpdate (orig: func_0809E3E8) | origin: pure | domain: Npc | EXACT / stanhash_elf */
/* Npc_DayUpdate @ 0x0809E3E8 mode=THUMB size=0x70 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* Npc_DayUpdate @ 0x0809E3E8  mode=THUMB  size=0x70  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 Npc_DayUpdate(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 9);
  if (((int)((uint)bVar1 * 0x4000000) < 0) || ((char)bVar1 < '\0')) {
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xe0;
  }
  else {
    uVar2 = bVar1 & 0x1f;
    if (uVar2 < 0x1f) {
      *(byte *)(param_1 + 9) = bVar1 & 0xe0 | (char)uVar2 + 1U & 0x1f;
    }
    if (param_2 < 10) {
      Npc_SubtractFriendship(param_1,1);
    }
  }
  if ((int)((uint)*(byte *)(param_1 + 9) * 0x4000000) < 0) {
    Npc_AddFriendship(param_1,1);
  }
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0x1f;
  return in_lr;
}

/* 0x0809EAF8 (40B) | Npc_Sub_0809EAF8 (orig: func_0809EAF8) | origin: pure | domain: Npc | MEDIUM / graph_algebra */
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
extern u32 Npc_DayUpdate();
extern u32 func_080D0ED0();
extern u32 LibC_rand();
void Npc_Sub_0809EAF8(int arg0) {
  u8 val;
  Npc_DayUpdate(arg0, func_080D0ED0(LibC_rand(), 100));
  val = *(u8 *)(arg0 + 0x25);
  if (val < 0xff) {
    *(u8 *)(arg0 + 0x25) = val + 1;
  }
}

/* 0x0809EB20 (44B) | Npc_Sub_0809EB20 (orig: func_0809EB20) | origin: pure | domain: Npc | MEDIUM / tu_interp */
extern u32 LibC_strlen();
extern void LibC_memcpy();
void Npc_Sub_0809EB20(u8 *arg0, u8 *arg1) {
    u32 len;
    u8 *dst = arg0 + 0x14;
    len = LibC_strlen(arg1);
    if (len > 0xc) {
        len = 0xc;
    }
    LibC_memcpy(dst, arg1, len);
    dst[len] = 0;
}

/* 0x0809EB4C (28B) | Npc_Wrap_Ctor (orig: func_0809EB4C) | origin: pure | domain: Npc | MEDIUM / graph_algebra */
struct S { u8 pad[0x14]; u8 a; u8 b:1; }; void Npc_Ctor(void *); struct S *Npc_Wrap_Ctor(struct S *s) { Npc_Ctor(s); s->a = 0; s->b = 0; return s; }

/* 0x0809EBEC (92B) | Npc_Sub_0809EBEC (orig: func_0809EBEC) | origin: wip | domain: Npc | MEDIUM / graph_algebra */
void Npc_Sub_0809EBEC(int param_1) {
  s8 tmp_a0;
  tmp_a0 = (s16)LibC_rand();
  LibC_rand();
  func_080D0ED0(tmp_a0, 0x64);
  Npc_DayUpdate();
}

/* 0x0809EC48 (72B) | Npc_Wrap_GetLocation (orig: func_0809EC48) | origin: wip | domain: Npc | MEDIUM / graph_algebra */
void Npc_Wrap_GetLocation(int param_1) {
  u8 bVar1;
  u16 auStack_10 [4];
  Npc_GetLocation(auStack_10,param_1);
  auStack_10[0] = auStack_10[0] & 0x3ff;
  if (auStack_10[0] == 0x11) {
LAB_0809ec80:
    bVar1 = *(u8 *)(param_1 + 0x15) | 1;
  }
  else {
    if (auStack_10[0] < 0x12) {
      if (auStack_10[0] == 7) goto LAB_0809ec80;
    }
    else if ((auStack_10[0] == 0x1d) || (auStack_10[0] == 0x25)) goto LAB_0809ec80;
    bVar1 = *(u8 *)(param_1 + 0x15) & 0xfe;
  }
  *(u8 *)(param_1 + 0x15) = bVar1;
}

/* 0x0809EC90 (72B) | Npc_Wrap_Ctor_EC90 (orig: func_0809EC90) | origin: wip | domain: Npc | MEDIUM / graph_algebra */
u32 Npc_Wrap_Ctor_EC90(u8 *param_1) {
  u32 val;
  val = Npc_Ctor();
  *(u8 *)(param_1 + 0x14) = 0x40;
  *(s16 *)(param_1 + 0x14) = 0xFFFFFE3F;
  *(u8 *)(param_1 + 0x15) = 3;
  return param_1;
}

/* 0x0809EE4C (64B) | Npc_Sub_0809EE4C (orig: func_0809EE4C) | origin: wip | domain: Npc | MEDIUM / graph_algebra */
void Npc_Sub_0809EE4C(int param_1) {
  s8 tmp_a0;
  tmp_a0 = LibC_rand();
  LibC_rand();
  func_080D0ED0(tmp_a0, 0x64);
  Npc_DayUpdate();
}

/* 0x0809EE8C (24B) | Npc_Wrap_Ctor_EE8C (orig: func_0809EE8C) | origin: pure | domain: Npc | MEDIUM / graph_algebra */
struct S { u8 pad[0x14]; u16 f14; u8 f16; };
extern "C" void Npc_Ctor(void *);
extern "C" S *Npc_Wrap_Ctor_EE8C(S *s) {
    Npc_Ctor(s);
    s->f14 = 0;
    s->f16 = 0;
    return s;
}

