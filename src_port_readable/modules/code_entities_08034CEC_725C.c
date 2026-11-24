/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_08034CEC_725C (8 functions) */
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

/* 0x080377E8 (164B) | code_entities_08034CEC_725C_vfunc_40 (orig: func_080377E8) | origin: wip | domain: code_entities_08034CEC_725C | HIGH / vtable_algebra */
u32 code_entities_08034CEC_725C_vfunc_40(u32 *self) {
  u8 bVar1;
  int iVar2;
  int iVar3;
  u32 uVar4;
  u32 uVar5;
  int iVar6;
  iVar2 = func_080D3910((int *)*self,*(u32 *)(*(int *)*self + 0x144));
  iVar6 = (u32)(0xe < (*(u8 *)(iVar2 + 10) & 0x1f) - 6) * 0x34 + 0x080F15B4;
  iVar2 = code_809E804_Sub_080AB82C(iVar6,0xd);
  iVar6 = iVar6 + iVar2 * 4;
  iVar3 = code_809E804_Sub_080AB788((u32)*(u8 *)(iVar6 + 2) * 0x3c);
  bVar1 = *(u8 *)(iVar6 + 1);
  iVar6 = code_809E804_Sub_080AB788(4);
  if (((iVar6 != 0) && (iVar6 != 3)) &&
     (uVar4 = code_809E804_Sub_080AB7A4(*(u8 *)(self + 8)), *(u8 *)(self + 8) != uVar4)) {
    AActorEntity_SetAnimFacing(self);
  }
  uVar5 = code_entities_08034CEC_725C_Sub_080378FC(self,iVar2);
  code_entities_08034CEC_Sub_08037098(self,uVar5);
  uVar4 = code_entities_08034CEC_725C_Sub_080378EC(self,iVar2);
  if (*(u16 *)((int)self + 0x22) != uVar4) {
    AActorEntity_SetAnim(self);
  }
  return ((u32)bVar1 * 0x3c + iVar3);
}

/* 0x0803788C (44B) | code_entities_08034CEC_725C_vfunc_30 (orig: func_0803788C) | origin: pure | domain: code_entities_08034CEC_725C | HIGH / vtable_algebra */
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
extern u32 CppRuntime_builtin_new();
struct __attribute__((packed)) _s1 { u8 a; };
u32 code_entities_080320DC_68B4_Ctor(u32, u32, u32, u32, u32, u32, u32, struct _s1);
/* paridad 90.3% preset agbcc_O2 */
u32 code_entities_08034CEC_725C_vfunc_30(u32 arg0) {
  u32 val;
  val = CppRuntime_builtin_new(0x8c);
  return code_entities_080320DC_68B4_Ctor(val, arg0, 2, 0x1b, 0, 8, 0, (struct _s1){0});
}

/* 0x080378B8 (52B) | code_entities_08034CEC_725C_vfunc_3C (orig: func_080378B8) | origin: pure | domain: code_entities_08034CEC_725C | HIGH / vtable_algebra */
extern void game_state_Sub_080A198C();
extern void AActorEntity_SetLocation();
extern u32 code_entities_08034CEC_725C_Sub_080378EC();
extern void AActorEntity_SetAnim();
void code_entities_08034CEC_725C_vfunc_3C(int arg0) {
    u8 buf[8];
    u32 v;
    game_state_Sub_080A198C(buf);
    AActorEntity_SetLocation(arg0, buf);
    v = code_entities_08034CEC_725C_Sub_080378EC(arg0, 0);
    if (*(u16 *)(arg0 + 0x22) != v) {
        AActorEntity_SetAnim(arg0, v);
    }
}

/* 0x080378EC (16B) | code_entities_08034CEC_725C_Sub_080378EC (orig: func_080378EC) | origin: pure | domain: code_entities_08034CEC_725C | MEDIUM / graph_algebra */
extern const u16 g_080F161C[];
u16 code_entities_08034CEC_725C_Sub_080378EC(void *arg0, u32 arg1) {
    return g_080F161C[arg1];
}

/* 0x080378FC (92B) | code_entities_08034CEC_725C_Sub_080378FC (orig: func_080378FC) | origin: wip | domain: code_entities_08034CEC_725C | MEDIUM / graph_algebra */
void * code_entities_08034CEC_725C_Sub_080378FC(u32 param_1,u32 param_2) {
  u32 uVar1;

  if (0xc < param_2) goto case_08037944;
  switch(*(u32 *)(((const u32 *)0x0803790c) + param_2 * 4) & 0xfffffffe) {
  case 0x8037910:
  case 0x8037944:
case_08037944:
    uVar1 = 0;
    break;
  case 0x8037948:
    uVar1 = 0x8000;
    break;
  case 0x803794e:
    uVar1 = 0x10000;
  }
  return (void *)uVar1;
}

/* 0x08037B48 (56B) | code_entities_08034CEC_725C_Create (orig: func_08037B48) | origin: pure | domain: code_entities_08034CEC_725C | HIGH / vtable_algebra */
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
extern u32 CppRuntime_builtin_new();
extern u32 AEntity_7328_Ctor();
static inline int ctor_037b48(int val, u32 arg0, u32 arg1) {
  AEntity_7328_Ctor(val,arg0,arg1,0x00000379,0xc);
  *(u32 *)(val + 0x14) = 0x080E725C;
  return val;
}
u32 code_entities_08034CEC_725C_Create(u32 arg0,u32 arg1) {
  int val;
  return ctor_037b48((int)CppRuntime_builtin_new(0x44), arg0, arg1);
}

/* 0x08037BE0 (40B) | code_entities_08034CEC_725C_Ctor (orig: func_08037BE0) | origin: pure | domain: code_entities_08034CEC_725C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AEntity_7328_Ctor();

u32 code_entities_08034CEC_725C_Ctor(u32 *arg0, u32 a1, u32 a2) {
  AEntity_7328_Ctor(arg0, a1, a2, 0x379, 12);
  arg0[5] = 0x080E725C;
  return (u32)arg0;
}

/* 0x080DCB58 (12B) | code_entities_08034CEC_725C_vfunc_08 (orig: func_080DCB58) | origin: pure | domain: code_entities_08034CEC_725C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AEntity_7328_Dtor();
void code_entities_08034CEC_725C_vfunc_08(void) {
  AEntity_7328_Dtor();
}

