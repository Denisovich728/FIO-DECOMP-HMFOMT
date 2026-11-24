/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_linkonce_76F8 (18 functions) */
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

/* 0x0809E968 (32B) | code_linkonce_76F8_Sub_0809E968 (orig: func_0809E968) | origin: pure | domain: code_linkonce_76F8 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_linkonce_76F8_Sub_080E3E9C();
u32 code_linkonce_76F8_Sub_0809E968(int arg0,u32 arg1) {
  u32 val;
  val = code_linkonce_76F8_Sub_080E3E9C(arg0,arg0 + 0x38U,arg1);
  val = val ^ arg0 + 0x38U;
  return ((-val | val) >> 0x1f);
}

/* 0x080DE220 (32B) | code_linkonce_76F8_Dtor (orig: func_080DE220) | origin: pure | domain: code_linkonce_76F8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
void code_linkonce_76F8_Dtor(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E76F8;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080DE240 (32B) | code_linkonce_76F8_vfunc_0C (orig: func_080DE240) | origin: pure | domain: code_linkonce_76F8 | HIGH / vtable_algebra */
extern void LibC_strcpy();
u8 *code_linkonce_76F8_vfunc_0C(u8 *arg0) {
    u8 buf[32];
    buf[0] = 0;
    *arg0 = 0;
    LibC_strcpy(arg0 + 4, buf);
    return arg0;
}

/* 0x080DE260 (32B) | code_linkonce_76F8_Dtor_E260 (orig: func_080DE260) | origin: pure | domain: code_linkonce_76F8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
void code_linkonce_76F8_Dtor_E260(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E76F8;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080E11EC (684B) | code_linkonce_76F8_Ctor (orig: func_080E11EC) | origin: wip | domain: code_linkonce_76F8 | HIGH / vtable_algebra */
void code_linkonce_76F8_Ctor(int self,u32 param_2) {
  u32 uVar1;
  int iVar2;
  int iVar3;
  *(u32 *)(self + 0x000023A0) = 0x080E76F8;
  if (self != -0x548) {
    iVar3 = self + 0x558;
    while (self + 0x548 != iVar3) {
      iVar2 = iVar3 + -8;
      hardware_Sub_080073E0(iVar2,*(u32 *)(iVar3 + -4));
      hardware_Sub_08007184(iVar2,2);
      iVar3 = iVar2;
    }
  }
  hardware_Sub_08007C28(self + 0x540,*(u32 *)(self + 0x544));
  hardware_Sub_080079E8(self + 0x540,2);
  if ((self != -0x500) && (iVar3 = self + 0x540, self + 0x500 != self + 0x540)) {
    do {
      iVar2 = iVar3 + -0x10;
      hardware_Sub_080073E0(iVar3 + -8,*(u32 *)(iVar3 + -4));
      hardware_Sub_08007184(iVar3 + -8,2);
      hardware_Sub_08007C28(iVar2,*(u32 *)(iVar3 + -0xc));
      hardware_Sub_080079E8(iVar2,2);
      iVar3 = iVar2;
    } while (self + 0x500 != iVar2);
  }
  hardware_Sub_080073E0(self + 0x4f8,*(u32 *)(self + 0x4fc));
  hardware_Sub_08007184(self + 0x4f8,2);
  hardware_Sub_08007C28(self + 0x4f0,*(u32 *)(self + 0x4f4));
  hardware_Sub_080079E8(self + 0x4f0,2);
  hardware_Sub_080073E0(self + 0x4e8,*(u32 *)(self + 0x4ec));
  hardware_Sub_08007184(self + 0x4e8,2);
  hardware_Sub_08007C28(self + 0x4e0,*(u32 *)(self + 0x4e4));
  hardware_Sub_080079E8(self + 0x4e0,2);
  hardware_Sub_080073E0(self + 0x4d8,*(u32 *)(self + 0x4dc));
  hardware_Sub_08007184(self + 0x4d8,2);
  hardware_Sub_08007C28(self + 0x4d0,*(u32 *)(self + 0x4d4));
  hardware_Sub_080079E8(self + 0x4d0,2);
  hardware_Sub_08007C28(self + 0x4c8,*(u32 *)(self + 0x4cc));
  hardware_Sub_080079E8(self + 0x4c8,2);
  hardware_Sub_080073E0(self + 0x4c0,*(u32 *)(self + 0x4c4));
  hardware_Sub_08007184(self + 0x4c0,2);
  hardware_Sub_08007C28(self + 0x4b8,*(u32 *)(self + 0x4bc));
  hardware_Sub_080079E8(self + 0x4b8,2);
  hardware_Sub_080073E0(self + 0x4b0,*(u32 *)(self + 0x4b4));
  hardware_Sub_08007184(self + 0x4b0,2);
  hardware_Sub_08007C28(self + 0x4a8,*(u32 *)(self + 0x4ac));
  hardware_Sub_080079E8(self + 0x4a8,2);
  hardware_Sub_080073E0(self + 0x4a0,*(u32 *)(self + 0x4a4));
  hardware_Sub_08007184(self + 0x4a0,2);
  hardware_Sub_08007C28(self + 0x498,*(u32 *)(self + 0x49c));
  hardware_Sub_080079E8(self + 0x498,2);
  hardware_Sub_080073E0(self + 0x490,*(u32 *)(self + 0x494));
  hardware_Sub_08007184(self + 0x490,2);
  hardware_Sub_08007C28(self + 0x488,*(u32 *)(self + 0x48c));
  hardware_Sub_080079E8(self + 0x488,2);
  hardware_Sub_080073E0(self + 0x480,*(u32 *)(self + 0x484));
  hardware_Sub_08007184(self + 0x480,2);
  hardware_Sub_08007C28(self + 0x478,*(u32 *)(self + 0x47c));
  hardware_Sub_080079E8(self + 0x478,2);
  hardware_Sub_080073E0(self + 0x470,*(u32 *)(self + 0x474));
  hardware_Sub_08007184(self + 0x470,2);
  hardware_Sub_08007C28(self + 0x468,*(u32 *)(self + 0x46c));
  hardware_Sub_080079E8(self + 0x468,2);
  uVar1 = 0x080E5A28;
  *(u32 *)(self + 0x1d0) = 0x080E5A28;
  *(u32 *)(self + 0x1a0) = uVar1;
  *(u32 *)(self + 0x170) = uVar1;
  *(u32 *)(self + 0x140) = uVar1;
  *(u32 *)(self + 0x110) = uVar1;
  *(u32 *)(self + 0xe0) = uVar1;
  *(u32 *)(self + 0xb0) = uVar1;
  *(u32 *)(self + 0x80) = uVar1;
  *(u32 *)(self + 0x50) = uVar1;
  *(u32 *)(self + 0x20) = uVar1;
  if (*(int *)(self + 0x10) != 0) {
    SpriteAnimEngine_5A28_Wrap_Dtor_0D0C(*(int *)(self + 0x10),3);
  }
  hardware_Dtor(self,param_2);
}

/* 0x080E1498 (32B) | code_linkonce_76F8_Dtor_1498 (orig: func_080E1498) | origin: pure | domain: code_linkonce_76F8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
void code_linkonce_76F8_Dtor_1498(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E76F8;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080E1824 (32B) | code_linkonce_76F8_Dtor_1824 (orig: func_080E1824) | origin: pure | domain: code_linkonce_76F8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
void code_linkonce_76F8_Dtor_1824(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E76F8;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080E18A4 (192B) | code_linkonce_76F8_Ctor_18A4 (orig: func_080E18A4) | origin: pure | domain: code_linkonce_76F8 | HIGH / vtable_algebra */
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
extern u32 hardware_Sub_08007184();
extern u32 hardware_Sub_080073E0();
extern u32 hardware_Sub_080079E8();
extern u32 hardware_Sub_08007C28();
extern u32 hardware_Dtor();
extern u32 SpriteAnimEngine_5A28_Wrap_Dtor_0D0C();
void code_linkonce_76F8_Ctor_18A4(int arg0,u32 arg1) {
  u32 val;
  u32 *sub;
  *(u32 *)(arg0 + 0x00000AEC) = 0x080E76F8;
  sub = (u32 *)(arg0 + 0x144);
  hardware_Sub_080073E0(sub, sub[1]);
  hardware_Sub_08007184(sub,2);
  sub = (u32 *)(arg0 + 0x13c);
  hardware_Sub_08007C28(sub, sub[1]);
  hardware_Sub_080079E8(sub,2);
  sub = (u32 *)(arg0 + 0x134);
  hardware_Sub_080073E0(sub, sub[1]);
  hardware_Sub_08007184(sub,2);
  sub = (u32 *)(arg0 + 300);
  hardware_Sub_08007C28(sub, sub[1]);
  hardware_Sub_080079E8(sub,2);
  sub = (u32 *)(arg0 + 0x124);
  hardware_Sub_080073E0(sub, sub[1]);
  hardware_Sub_08007184(sub,2);
  sub = (u32 *)(arg0 + 0x11c);
  hardware_Sub_08007C28(sub, sub[1]);
  hardware_Sub_080079E8(sub,2);
  val = 0x080E5A28;
  *(u32 *)(arg0 + 0x50) = 0x080E5A28;
  *(u32 *)(arg0 + 0x20) = val;
  if (*(int *)(arg0 + 0x10) != 0) {
    SpriteAnimEngine_5A28_Wrap_Dtor_0D0C(*(int *)(arg0 + 0x10),3);
  }
  hardware_Dtor(arg0,arg1);
}

/* 0x080E1964 (32B) | code_linkonce_76F8_Dtor_1964 (orig: func_080E1964) | origin: pure | domain: code_linkonce_76F8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
void code_linkonce_76F8_Dtor_1964(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E76F8;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080E19F8 (48B) | code_linkonce_76F8_Ctor_19F8 (orig: func_080E19F8) | origin: pure | domain: code_linkonce_76F8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Dtor();
extern u32 SpriteAnimEngine_5A28_Wrap_Dtor_0D0C();
void code_linkonce_76F8_Ctor_19F8(int arg0,u32 arg1) {
  *(u32 *)(arg0 + 0x00006428) = 0x080E76F8;
  if (*(int *)(arg0 + 0x10) != 0) {
    SpriteAnimEngine_5A28_Wrap_Dtor_0D0C(*(int *)(arg0 + 0x10),3);
  }
  hardware_Dtor(arg0,arg1);
}

/* 0x080E1A28 (32B) | code_linkonce_76F8_Dtor_1A28 (orig: func_080E1A28) | origin: pure | domain: code_linkonce_76F8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
void code_linkonce_76F8_Dtor_1A28(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E76F8;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080E3C3C (344B) | code_linkonce_76F8_Ctor_3C3C (orig: func_080E3C3C) | origin: pure | domain: code_linkonce_76F8 | HIGH / vtable_algebra */
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
extern u32 hardware_Sub_08007184();
extern u32 hardware_Sub_080073E0();
extern u32 hardware_Sub_080079E8();
extern u32 hardware_Sub_08007C28();
extern u32 hardware_Dtor();
extern u32 SpriteAnimEngine_5A28_Wrap_Dtor_0D0C();
extern u32 func_080D3914();
void code_linkonce_76F8_Ctor_3C3C(int arg0,u32 arg1) {
  int val2;
  u32 val;
  u32 *sub;
  register int r_zero = r_zero;
  *(u32 *)(arg0 + 0x000033D8) = 0x080E76F8;
  sub = (u32 *)(arg0 + 0x328);
  hardware_Sub_08007C28(sub, sub[1]);
  hardware_Sub_080079E8(sub,2);
  sub = (u32 *)(arg0 + 800);
  hardware_Sub_080073E0(sub, sub[1]);
  hardware_Sub_08007184(sub,2);
  sub = (u32 *)(arg0 + 0x318);
  hardware_Sub_08007C28(sub, sub[1]);
  hardware_Sub_080079E8(sub,2);
  sub = (u32 *)(arg0 + 0x310);
  hardware_Sub_08007C28(sub, sub[1]);
  hardware_Sub_080079E8(sub,2);
  sub = (u32 *)(arg0 + 0x308);
  hardware_Sub_080073E0(sub, sub[1]);
  hardware_Sub_08007184(sub,2);
  sub = (u32 *)(arg0 + 0x300);
  hardware_Sub_08007C28(sub, sub[1]);
  hardware_Sub_080079E8(sub,2);
  sub = (u32 *)(arg0 + 0x2f8);
  hardware_Sub_080073E0(sub, sub[1]);
  hardware_Sub_08007184(sub,2);
  sub = (u32 *)(arg0 + 0x2f0);
  hardware_Sub_08007C28(sub, sub[1]);
  hardware_Sub_080079E8(sub,2);
  sub = (u32 *)(arg0 + 0x2e8);
  hardware_Sub_080073E0(sub, sub[1]);
  hardware_Sub_08007184(sub,2);
  sub = (u32 *)(arg0 + 0x2e0);
  hardware_Sub_08007C28(sub, sub[1]);
  hardware_Sub_080079E8(sub,2);
  *(u32 *)(arg0 + 0x128) = 0x080E5A28;
  val = 0x080E5A28;
  *(u32 *)(arg0 + 0xf8) = val;
  *(u32 *)(arg0 + 200) = val;
  *(u32 *)(arg0 + 0x98) = val;
  SpriteAnimEngine_5A28_Wrap_Dtor_0D0C(arg0 + 0x80,2);
  val2 = *(int *)(arg0 + 0x7c);
  if (val2 != 0) {
    func_080D3914(val2,3,*(u32 *)(*(int *)(val2 + 0x210) + 8));
  }
  val2 = *(int *)(arg0 + 0x78);
  if (val2 != 0) {
    func_080D3914(val2,3,*(u32 *)(*(u32 *)(val2 + 0x210) + 8));
  }
  *(u32 *)(arg0 + 0x10) = val;
  hardware_Dtor(arg0,arg1);
}

/* 0x080E3D94 (32B) | code_linkonce_76F8_Dtor_3D94 (orig: func_080E3D94) | origin: pure | domain: code_linkonce_76F8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
void code_linkonce_76F8_Dtor_3D94(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E76F8;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080E3DB4 (116B) | code_linkonce_76F8_Sub_080E3DB4 (orig: func_080E3DB4) | origin: wip | domain: code_linkonce_76F8 | MEDIUM / tu_interp */
u32 code_linkonce_76F8_Sub_080E3DB4(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    register u32 r0 = param_1;
    register u32 r1 = param_2;
    register u32 r2 = param_3;
    register u32 r3 = param_4;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r5 = r1 + 0;
    r4 = r2 + 0;
    r3 = r0 + 0;
    r0 = r5 - r3;
    r2 = (int)r0 >> 3;
    if ((int)r2 <= 0) goto loc_080E3DEC;
    r1 = *(u16 *)(r4);
loc_080E3DC6:
    r0 = *(u16 *)(r3);
    if (r0 == r1) goto loc_080E3E1C;
    r3 += 2;
    r0 = *(u16 *)(r3);
    if (r0 == r1) goto loc_080E3E1C;
    r3 += 2;
    r0 = *(u16 *)(r3);
    if (r0 == r1) goto loc_080E3E1C;
    r3 += 2;
    r0 = *(u16 *)(r3);
    if (r0 == r1) goto loc_080E3E1C;
    r3 += 2;
    r2 -= 1;
    if ((int)r2 > 0) goto loc_080E3DC6;
loc_080E3DEC:
    r0 = r5 - r3;
    r0 = (int)r0 >> 1;
    if (r0 == 1) goto loc_080E3E14;
    if ((int)r0 <= 1) goto loc_080E3E20;
    if (r0 == 2) goto loc_080E3E0A;
    if (r0 != 3) goto loc_080E3E20;
    r0 = *(u16 *)(r3);
    r1 = *(u16 *)(r4);
    if (r0 == r1) goto loc_080E3E1C;
    r3 += 2;
loc_080E3E0A:
    r0 = *(u16 *)(r3);
    r1 = *(u16 *)(r4);
    if (r0 == r1) goto loc_080E3E1C;
    r3 += 2;
loc_080E3E14:
    r0 = *(u16 *)(r3);
    r4 = *(u16 *)(r4);
    if (r0 != r4) goto loc_080E3E20;
loc_080E3E1C:
    r0 = r3 + 0;
    goto loc_080E3E22;
loc_080E3E20:
    r0 = r5 + 0;
loc_080E3E22:
    return r1;
}

/* 0x080E3E28 (116B) | code_linkonce_76F8_Sub_080E3E28 (orig: func_080E3E28) | origin: wip | domain: code_linkonce_76F8 | MEDIUM / tu_interp */
u32 code_linkonce_76F8_Sub_080E3E28(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    register u32 r0 = param_1;
    register u32 r1 = param_2;
    register u32 r2 = param_3;
    register u32 r3 = param_4;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r5 = r1 + 0;
    r4 = r2 + 0;
    r3 = r0 + 0;
    r0 = r5 - r3;
    r2 = (int)r0 >> 3;
    if ((int)r2 <= 0) goto loc_080E3E60;
    r1 = *(u16 *)(r4);
loc_080E3E3A:
    r0 = *(u16 *)(r3);
    if (r0 == r1) goto loc_080E3E90;
    r3 += 2;
    r0 = *(u16 *)(r3);
    if (r0 == r1) goto loc_080E3E90;
    r3 += 2;
    r0 = *(u16 *)(r3);
    if (r0 == r1) goto loc_080E3E90;
    r3 += 2;
    r0 = *(u16 *)(r3);
    if (r0 == r1) goto loc_080E3E90;
    r3 += 2;
    r2 -= 1;
    if ((int)r2 > 0) goto loc_080E3E3A;
loc_080E3E60:
    r0 = r5 - r3;
    r0 = (int)r0 >> 1;
    if (r0 == 1) goto loc_080E3E88;
    if ((int)r0 <= 1) goto loc_080E3E94;
    if (r0 == 2) goto loc_080E3E7E;
    if (r0 != 3) goto loc_080E3E94;
    r0 = *(u16 *)(r3);
    r1 = *(u16 *)(r4);
    if (r0 == r1) goto loc_080E3E90;
    r3 += 2;
loc_080E3E7E:
    r0 = *(u16 *)(r3);
    r1 = *(u16 *)(r4);
    if (r0 == r1) goto loc_080E3E90;
    r3 += 2;
loc_080E3E88:
    r0 = *(u16 *)(r3);
    r4 = *(u16 *)(r4);
    if (r0 != r4) goto loc_080E3E94;
loc_080E3E90:
    r0 = r3 + 0;
    goto loc_080E3E96;
loc_080E3E94:
    r0 = r5 + 0;
loc_080E3E96:
    return r1;
}

/* 0x080E3E9C (164B) | code_linkonce_76F8_Sub_080E3E9C (orig: func_080E3E9C) | origin: wip | domain: code_linkonce_76F8 | MEDIUM / tu_interp */
u32 code_linkonce_76F8_Sub_080E3E9C(int param_1,int param_2,u32 param_3) {
  char cVar1;
  int iVar2;
  int iVar3;
  for (iVar3 = param_2 - param_1 >> 5; iVar2 = param_1, 0 < iVar3; iVar3 = iVar3 + -1) {
    cVar1 = code_linkonce_76F8_Sub_0809E8E4(param_1,param_3);
    if (cVar1 != '\0') goto LAB_080e3f3a;
    cVar1 = code_linkonce_76F8_Sub_0809E8E4(param_1 + 8,param_3);
    iVar2 = param_1 + 8;
    if (cVar1 != '\0') goto LAB_080e3f3a;
    cVar1 = code_linkonce_76F8_Sub_0809E8E4(param_1 + 0x10,param_3);
    iVar2 = param_1 + 0x10;
    if (cVar1 != '\0') goto LAB_080e3f3a;
    cVar1 = code_linkonce_76F8_Sub_0809E8E4(param_1 + 0x18,param_3);
    iVar2 = param_1 + 0x18;
    if (cVar1 != '\0') goto LAB_080e3f3a;
    param_1 = param_1 + 0x20;
  }
  iVar3 = param_2 - param_1 >> 3;
  if (iVar3 == 1) {
LAB_080e3f26:
    cVar1 = code_linkonce_76F8_Sub_0809E8E4(iVar2,param_3);
    if (cVar1 != '\0') goto LAB_080e3f3a;
  }
  else if (1 < iVar3) {
    if (iVar3 != 2) {
      if (iVar3 != 3) goto LAB_080e3f38;
      cVar1 = code_linkonce_76F8_Sub_0809E8E4(param_1,param_3);
      if (cVar1 != '\0') goto LAB_080e3f3a;
      iVar2 = param_1 + 8;
    }
    cVar1 = code_linkonce_76F8_Sub_0809E8E4(iVar2,param_3);
    if (cVar1 != '\0') goto LAB_080e3f3a;
    iVar2 = iVar2 + 8;
    goto LAB_080e3f26;
  }
LAB_080e3f38:
  iVar2 = param_2;
LAB_080e3f3a:
  return iVar2;
}

/* 0x080E3F40 (192B) | code_linkonce_76F8_Sub_080E3F40 (orig: func_080E3F40) | origin: wip | domain: code_linkonce_76F8 | MEDIUM / tu_interp */
u32 code_linkonce_76F8_Sub_080E3F40(u8 *param_1,int param_2,int param_3) {
  char cVar1;
  u32 uVar2;
  u32 uVar3;
  u32 uVar4;
  u8 *puVar5;
  u8 *puVar6;
  u8 auStack_54 [64];
  uVar2 = 0x08104940;
  uVar4 = 0x08104938;
  if (param_3 == 0xf1) {
    if (*(char *)(param_2 + 4) < '\n') {
      auStack_54[0] = 0x81;
      auStack_54[1] = 0x40;
      code_0803EE94_Sub_0804EC84((int)*(char *)(param_2 + 4),auStack_54 + 2,0);
    }
    else {
      code_0803EE94_Sub_0804EC84((int)*(char *)(param_2 + 4),auStack_54,0);
    }
    puVar5 = auStack_54 + 0x20;
    uVar3 = LibC_strlen(auStack_54);
    puVar6 = auStack_54;
    if (0x1f < uVar3) {
      uVar3 = 0x1f;
      puVar6 = auStack_54;
    }
LAB_080e406c:
    LibC_memcpy(puVar5,puVar6,uVar3);
    puVar5[uVar3] = 0;
    *param_1 = 1;
    LibC_strcpy(param_1 + 4,puVar5);
  }
  else {
    if (param_3 < 0xf2) {
      if (param_3 == 0xf0) {
        cVar1 = *(char *)(param_2 + 5);
        if (cVar1 == '\x01') {
          uVar3 = LibC_strlen(0x08104940);
          if (0x1f < uVar3) {
            uVar3 = 0x1f;
          }
          LibC_memcpy(auStack_54,uVar2,uVar3);
          auStack_54[uVar3] = 0;
          *param_1 = 1;
LAB_080e4006:
          LibC_strcpy(param_1 + 4,auStack_54);
          goto LAB_080e4094;
        }
        if (cVar1 < '\x02') {
          if (cVar1 == '\0') {
            uVar3 = LibC_strlen(0x08104938);
            if (0x1f < uVar3) {
              uVar3 = 0x1f;
            }
            LibC_memcpy(auStack_54,uVar4,uVar3);
            auStack_54[uVar3] = 0;
            *param_1 = 1;
            LibC_strcpy(param_1 + 4);
            goto LAB_080e4094;
          }
        }
        else {
          uVar4 = 0x08104948;
          if ((cVar1 == '\x02') || (uVar4 = 0x08104950, cVar1 == '\x03')) {
            uVar3 = LibC_strlen(uVar4);
            if (0x1f < uVar3) {
              uVar3 = 0x1f;
            }
            LibC_memcpy(auStack_54,uVar4,uVar3);
            auStack_54[uVar3] = 0;
            *param_1 = 1;
            goto LAB_080e4006;
          }
        }
      }
    }
    else if (param_3 == 0xf2) {
      puVar5 = auStack_54 + 8;
      puVar6 = *(u8 **)(param_2 + 8);
      uVar3 = LibC_strlen(puVar6);
      if (0x1f < uVar3) {
        uVar3 = 0x1f;
      }
      goto LAB_080e406c;
    }
    auStack_54[0] = 0;
    *param_1 = 0;
    LibC_strcpy(param_1 + 4);
  }
LAB_080e4094:
  return param_1;
}

/* 0x080E4190 (32B) | code_linkonce_76F8_Dtor_4190 (orig: func_080E4190) | origin: pure | domain: code_linkonce_76F8 | HIGH / vtable_algebra */
void CppRuntime_builtin_delete(void *); void code_linkonce_76F8_Dtor_4190(u32 *a, int b) { *a = 0x080E76F8; if (b & 1) CppRuntime_builtin_delete(a); }

