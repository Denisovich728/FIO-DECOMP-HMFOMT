/* FIO-DECOMP-HMFOMT :: Port Readable Module: AEntity (23 functions) */
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

/* 0x0801FD78 (72B) | AEntity_Ctor (orig: func_0801FD78) | origin: pure | domain: AEntity | EXACT / stanhash_elf */
/* AEntity_Ctor @ 0x0801FD78 mode=THUMB size=0x48 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* AEntity_Ctor @ 0x0801FD78  mode=THUMB  size=0x48  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
void AEntity_Ctor(undefined4 *self,undefined4 param_2,ushort *param_3)

{
  uint uVar1;
  
  self[5] = _DAT_0801fdb8;
  *self = param_2;
  *(ushort *)(self + 1) = *param_3 & 0x3ff;
  *(undefined1 *)((int)self + 6) = 0;
  uVar1 = _DAT_0801fdbc;
  self[2] = ((param_3[1] & _DAT_0801fdbc) << 6 | (uint)(*(byte *)((int)param_3 + 1) >> 2)) <<
               0x10;
  self[3] = ((param_3[2] & uVar1) << 6 | (uint)(*(byte *)((int)param_3 + 3) >> 2)) << 0x10;
  self[4] = 0;
  return;
}

/* 0x0801FDC0 (96B) | AEntity_vfunc_10 (orig: func_0801FDC0) | origin: pure | domain: AEntity | EXACT / stanhash_elf */
/* AEntity_vfunc_10 @ 0x0801FDC0 mode=THUMB size=0x60 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* AEntity_vfunc_10 @ 0x0801FDC0  mode=THUMB  size=0x60  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 AEntity_vfunc_10(undefined4 *self)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = self[4];
  if ((iVar2 != 0) && (iVar2 != 0)) {
    func_0x080d3914(iVar2,3,*(undefined4 *)(*(int *)(iVar2 + 4) + 8));
  }
  self[4] = 0;
  uVar1 = func_0x080d3910((int *)*self,*(undefined4 *)(*(int *)*self + 0x14));
  if (uVar1 == *(ushort *)(self + 1)) {
    iVar2 = func_0x080d3910(self,*(undefined4 *)(self[5] + 0x30));
    iVar3 = self[4];
    if ((iVar2 != iVar3) && (iVar3 != 0)) {
      func_0x080d3914(iVar3,3,*(undefined4 *)(*(int *)(iVar3 + 4) + 8));
    }
    self[4] = iVar2;
  }
  return in_lr;
}

/* 0x0801FE20 (40B) | AEntity_vfunc_14 (orig: func_0801FE20) | origin: pure | domain: AEntity | EXACT / stanhash_elf */
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
extern u32 func_080D3914();
/* paridad 95.26% preset agbcc_O2 (thumb-symbolic-lifter) */
void AEntity_vfunc_14(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    register u32 r4, r5, r6, r7;
    r4 = r0 + 0;
    r4 += 0x10;
    r5 = 0;
    r1 = *(u32 *)(r0 + 0x10);
    if (r5 == r1) goto loc_0801FE3E;
    if (r1 == 0) goto loc_0801FE3E;
    r0 = *(u32 *)(r1 + 4);
    r2 = *(u32 *)(r0 + 8);
    r0 = r1 + 0;
    r1 = 3;
    r0 = func_080D3914(r0, r1, r2, r3);
loc_0801FE3E:
    *(u32 *)(r4) = r5;
    return r0;
    r0 = r0;
    return r0;
}

/* 0x0801FE48 (24B) | AEntity_vfunc_1C (orig: func_0801FE48) | origin: pure | domain: AEntity | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3914();
void AEntity_vfunc_1C(int arg0,u32 arg1) {
  int val;
  val = *(int *)(arg0 + 0x10);
  if (val != 0) {
    func_080D3914(val,arg1,*(u32 *)(*(int *)(val + 4) + 0x10));
  }
}

/* 0x0801FE60 (24B) | AEntity_vfunc_2C (orig: func_0801FE60) | origin: pure | domain: AEntity | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
void AEntity_vfunc_2C(int arg0) {
  int val;
  val = *(int *)(arg0 + 0x10);
  if (val != 0) {
    func_080D3910(val,*(u32 *)(*(int *)(val + 4) + 0xc));
  }
}

/* 0x0801FE78 (28B) | AEntity_SetLocation (orig: func_0801FE78) | origin: pure | domain: AEntity | EXACT / stanhash_elf */
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
extern u32 AEntity_SetMap();
void AEntity_SetLocation(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    register u32 r4, r5, r6;
    r6 = r0 + 0;
    r4 = r2 + 0;
    r5 = r3 + 0;
    r0 = AEntity_SetMap(r0, r1, r2, r3);
    r4 = r4 << 0x10;
    *(u32 *)(r6 + 8) = r4;
    r5 = r5 << 0x10;
    *(u32 *)(r6 + 0xc) = r5;
    return r0;
}

/* 0x0801FE94 (144B) | AEntity_GetLocation (orig: func_0801FE94) | origin: pure | domain: AEntity | EXACT / stanhash_elf */
/* AEntity_GetLocation @ 0x0801FE94 mode=THUMB size=0x90 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* AEntity_GetLocation @ 0x0801FE94  mode=THUMB  size=0xA4  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
void AEntity_GetLocation(ushort *self,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar1 = *(ushort *)(param_2 + 10);
  uVar2 = *(ushort *)(param_2 + 0xe);
  uVar4 = (ushort)_DAT_0801ff1c;
  uVar3 = (ushort)_DAT_0801ff20;
  *self = uVar3 & *self | *(ushort *)(param_2 + 4) & uVar4;
  *(byte *)((int)self + 1) = *(byte *)((int)self + 1) & 3 | (byte)((uVar1 & 0x3f) << 2);
  self[1] = uVar3 & self[1] | uVar1 >> 6 & uVar4;
  *(byte *)((int)self + 3) = *(byte *)((int)self + 3) & 3 | (byte)((uVar2 & 0x3f) << 2);
  self[2] = uVar3 & self[2] | uVar2 >> 6 & uVar4;
  return;
}

/* 0x0801FF38 (28B) | AEntity_SetMap (orig: func_0801FF38) | origin: pure | domain: AEntity | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
void AEntity_SetMap(int arg0,u32 arg1) {
  if (*(u16 *)(arg0 + 4) != arg1) {
    *(short *)(arg0 + 4) = (short)arg1;
    func_080D3910(arg0,*(u32 *)(*(int *)(arg0 + 0x14) + 0x10));
  }
}

/* 0x0801FF54 (24B) | AEntity_vfunc_18 (orig: func_0801FF54) | origin: pure | domain: AEntity | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
void AEntity_vfunc_18(int arg0) {
  int val;
  val = *(int *)(arg0 + 0x10);
  if (val != 0) {
    func_080D3910(val,*(u32 *)(*(int *)(val + 4) + 0xc));
  }
}

/* 0x0801FF84 (16B) | AEntity_PutOutOfTown (orig: func_0801FF84) | origin: pure | domain: AEntity | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AEntity_SetMap();
void AEntity_PutOutOfTown(u32 arg0) {
  AEntity_SetMap(arg0,0x234);
}

/* 0x0801FF98 (60B) | AEntity_SetLocation_FF98 (orig: func_0801FF98) | origin: pure | domain: AEntity | EXACT / stanhash_elf */
/* AEntity_SetLocation_FF98 @ 0x0801FF98 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* AEntity_SetLocation_FF98 @ 0x0801FF98  mode=THUMB  size=0x4C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 AEntity_SetLocation_FF98(undefined4 self,ushort *param_2)

{
  undefined4 in_lr;
  
  AEntity_SetLocation(self,*param_2 & 0x3ff,
                (int)(short)((ushort)((param_2[1] & _DAT_0801ffd0) << 6) |
                            (ushort)(*(byte *)((int)param_2 + 1) >> 2)),
                (int)(short)((ushort)((param_2[2] & _DAT_0801ffd0) << 6) |
                            (ushort)(*(byte *)((int)param_2 + 3) >> 2)));
  return in_lr;
}

/* 0x0801FFE4 (52B) | AEntity_Dtor (orig: func_0801FFE4) | origin: pure | domain: AEntity | EXACT / stanhash_elf */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
extern u32 func_080D3914();
void AEntity_Dtor(int arg0,u32 arg1) {
  int val;
  *(u32 *)(arg0 + 0x14) = 0x080E6250;
  val = *(int *)(arg0 + 0x10);
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x08033B24 (88B) | AEntity_Sub_08033B24 (orig: func_08033B24) | origin: wip | domain: AEntity | MEDIUM / graph_algebra */
u32 AEntity_Sub_08033B24(u32 *self) {
    u32 uVar3;
    u8 abStack_20 [8];
    u8 auStack_18 [8];
  int uVar1;
  register u32 uVar2;
  if ((*(u8 *)(self[0xe] + (u32)*(u8 *)(self + 0xc) * 8) && 0xf) == 0) {
    uVar3 = *self;
    AEntity_GetLocation(auStack_18,self);
    uVar2 = (s8)func_0809E65C(self[0xd]);
    AEntity_Sub_080330F4(abStack_20,self[0xf],uVar3,auStack_18,uVar2,self[0xe]);
    uVar1 = (u32)((abStack_20[0] && 0xf) == 0);
  }
  else {
    uVar1 = 0;
  }
  return (uVar1);
}

/* 0x08034260 (120B) | AEntity_Sub_08034260 (orig: func_08034260) | origin: wip | domain: AEntity | MEDIUM / graph_algebra */
u32 AEntity_Sub_08034260(u32 *self) {
    u32 uVar2;
    u8 abStack_28 [8];
    u8 auStack_20 [8];
    u32 uStack_18;
  register u32 uVar1;
  if (*(char *)((int)self + 0x41) == '\0') {
    uVar2 = (s16)*self;
    AEntity_GetLocation(auStack_20,self);
    uVar1 = func_0809E65C(self[0xd]);
    AEntity_Sub_080330F4(abStack_28,self[0xf],uVar2,auStack_20,uVar1,self[0xe]);
    if ((abStack_28[0] && 0xf) == 0) {
      *(char *)((int)self + 0x41) = '\x01';
      uVar1 = 0;
    }
    else {
      AEntity_Sub_0809E988(self[0xe],*(u8 *)(self + 0xc),abStack_28);
      uStack_18 = uStack_18 && 0xFFFF0000;
      func_0809E7E4(self[0xd],&uStack_18);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

/* 0x0809E988 (12B) | AEntity_Sub_0809E988 (orig: func_0809E988) | origin: pure | domain: AEntity | MEDIUM / graph_algebra */
struct S { u8 x[8]; }; void AEntity_Sub_0809E988(struct S *a, int b, struct S *c) { a[b] = *c; }

/* 0x080DC628 (52B) | AEntity_Dtor_C628 (orig: func_080DC628) | origin: pure | domain: AEntity | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
extern u32 func_080D3914();
void AEntity_Dtor_C628(int arg0,u32 arg1) {
  int val;
  *(u32 *)(arg0 + 0x14) = 0x080E6250;
  val = *(int *)(arg0 + 0x10);
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080DC6F0 (52B) | AEntity_Dtor_C6F0 (orig: func_080DC6F0) | origin: pure | domain: AEntity | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
extern u32 func_080D3914();
void AEntity_Dtor_C6F0(int arg0,u32 arg1) {
  int val;
  *(u32 *)(arg0 + 0x14) = 0x080E6250;
  val = *(int *)(arg0 + 0x10);
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080DC7CC (52B) | AEntity_Dtor_C7CC (orig: func_080DC7CC) | origin: pure | domain: AEntity | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
extern u32 func_080D3914();
void AEntity_Dtor_C7CC(int arg0,u32 arg1) {
  int val;
  *(u32 *)(arg0 + 0x14) = 0x080E6250;
  val = *(int *)(arg0 + 0x10);
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080DC800 (52B) | AEntity_Dtor_C800 (orig: func_080DC800) | origin: pure | domain: AEntity | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
extern u32 func_080D3914();
void AEntity_Dtor_C800(int arg0,u32 arg1) {
  int val;
  *(u32 *)(arg0 + 0x14) = 0x080E6250;
  val = *(int *)(arg0 + 0x10);
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080DC8C4 (52B) | AEntity_Dtor_C8C4 (orig: func_080DC8C4) | origin: pure | domain: AEntity | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
extern u32 func_080D3914();
void AEntity_Dtor_C8C4(int arg0,u32 arg1) {
  int val;
  *(u32 *)(arg0 + 0x14) = 0x080E6250;
  val = *(int *)(arg0 + 0x10);
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080DCE60 (52B) | AEntity_Dtor_CE60 (orig: func_080DCE60) | origin: pure | domain: AEntity | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
extern u32 func_080D3914();
void AEntity_Dtor_CE60(int arg0,u32 arg1) {
  int val;
  *(u32 *)(arg0 + 0x14) = 0x080E6250;
  val = *(int *)(arg0 + 0x10);
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080DCEEC (52B) | AEntity_Dtor_CEEC (orig: func_080DCEEC) | origin: pure | domain: AEntity | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
extern u32 func_080D3914();
void AEntity_Dtor_CEEC(int arg0,u32 arg1) {
  int val;
  *(u32 *)(arg0 + 0x14) = 0x080E6250;
  val = *(int *)(arg0 + 0x10);
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080E4510 (52B) | AEntity_Dtor_4510 (orig: func_080E4510) | origin: pure | domain: AEntity | HIGH / vtable_algebra */
extern void CppRuntime_builtin_delete();
extern void func_080D3914();
void AEntity_Dtor_4510(int arg0, u32 arg1) {
    int val;
    *(u32 *)(arg0 + 0x14) = 0x080E6250;
    val = *(int *)(arg0 + 0x10);
    if (val != 0) {
        func_080D3914(val, 3, *(u32 *)(*(int *)(val + 4) + 8));
    }
    if ((arg1 & 1) != 0) {
        CppRuntime_builtin_delete(arg0);
    }
}

