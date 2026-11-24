/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_08034CEC_72A0 (8 functions) */
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

/* 0x0803763C (168B) | code_entities_08034CEC_72A0_vfunc_40 (orig: func_0803763C) | origin: wip | domain: code_entities_08034CEC_72A0 | HIGH / vtable_algebra */
u32 code_entities_08034CEC_72A0_vfunc_40(u32 *self) {
  u8 bVar1;
  int iVar2;
  int iVar3;
  u32 uVar4;
  u32 uVar5;
  int iVar6;
  iVar2 = func_080D3910((int *)*self,*(u32 *)(*(int *)*self + 0x144));
  iVar6 = (u32)(0xe < (*(u8 *)(iVar2 + 10) & 0x1f) - 6) * 0x1c + 0x080F156C;
  iVar2 = code_809E804_Sub_080AB82C(iVar6,7);
  iVar6 = iVar6 + iVar2 * 4;
  iVar3 = code_809E804_Sub_080AB788((u32)*(u8 *)(iVar6 + 2) * 0x3c);
  bVar1 = *(u8 *)(iVar6 + 1);
  iVar6 = code_809E804_Sub_080AB788(4);
  if (((iVar6 != 0) && (iVar6 != 3)) &&
     (uVar4 = code_809E804_Sub_080AB7A4(*(u8 *)(self + 8)), *(u8 *)(self + 8) != uVar4)) {
    AActorEntity_SetAnimFacing(self);
  }
  uVar5 = code_entities_08034CEC_72A0_Sub_080377D4(self,iVar2);
  code_entities_08034CEC_Sub_08037098(self,uVar5);
  uVar4 = code_entities_08034CEC_72A0_Sub_080377C4(self,iVar2);
  if (*(u16 *)((int)self + 0x22) != uVar4) {
    AActorEntity_SetAnim(self);
  }
  return ((u32)bVar1 * 0x3c + iVar3);
}

/* 0x080376E4 (48B) | code_entities_08034CEC_72A0_vfunc_30 (orig: func_080376E4) | origin: pure | domain: code_entities_08034CEC_72A0 | HIGH / vtable_algebra */
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
u32 code_entities_08034CEC_72A0_vfunc_30(u32 arg0) {
  u32 val;
  val = CppRuntime_builtin_new(0x8c);
  return code_entities_080320DC_68B4_Ctor(val, arg0, 4, 0xc, 2, 0xc, 0, (struct _s1){0});
}

/* 0x08037714 (176B) | code_entities_08034CEC_72A0_vfunc_3C (orig: func_08037714) | origin: wip | domain: code_entities_08034CEC_72A0 | HIGH / vtable_algebra */
void code_entities_08034CEC_72A0_vfunc_3C(u32 *self) {
  int *piVar1;
  u32 uVar2;
  u8 auStack_18 [8];
  piVar1 = (int *)func_080D3910((int *)*self,*(u32 *)(*(int *)*self + 0x144));
  if ((*(u8 *)((int)piVar1 + 10) & 0x1f) - 6 < 10) {
    uVar2 = ((*(u8 *)((int)piVar1 + 9) & 0x7f) >> 2) +
            (*(u8 *)((int)piVar1 + 9) & 3) * 0x1e + ((*(u8 *)(piVar1 + 2) & 7) + 6) * 0x78;
    if (6 < uVar2) {
      uVar2 = LibGcc_umodsi3(uVar2,7);
    }
    if (((uVar2 & 7) != 1) && (*piVar1 == 0)) {
      game_state_Sub_080A1890(auStack_18,*(u8 *)(self + 0x11) & 3);
      AActorEntity_SetLocation(self,auStack_18);
      uVar2 = code_entities_08034CEC_72A0_Sub_080377C4(self,0);
      if (*(u16 *)((int)self + 0x22) == uVar2) {
      }
      AActorEntity_SetAnim(self);
    }
  }
  AEntity_SetMap(self,0x234);
}

/* 0x080377C4 (16B) | code_entities_08034CEC_72A0_Sub_080377C4 (orig: func_080377C4) | origin: pure | domain: code_entities_08034CEC_72A0 | MEDIUM / graph_algebra */
extern const u16 g_080F15A4[];
u16 code_entities_08034CEC_72A0_Sub_080377C4(void *arg0, u32 arg1) {
    return g_080F15A4[arg1];
}

/* 0x080377D4 (20B) | code_entities_08034CEC_72A0_Sub_080377D4 (orig: func_080377D4) | origin: pure | domain: code_entities_08034CEC_72A0 | MEDIUM / graph_algebra */
int code_entities_08034CEC_72A0_Sub_080377D4(int arg0, int arg1) {
    switch (arg1) {
    case 1: return 32768;
    default: return 0;
    }
}

/* 0x08037AD0 (120B) | code_entities_08034CEC_72A0_Create (orig: func_08037AD0) | origin: wip | domain: code_entities_08034CEC_72A0 | HIGH / vtable_algebra */
u32 code_entities_08034CEC_72A0_Create(u32 self,u32 param_2,u8 param_3) {
  u32 iVar1;
  u16 uStack_1a;
  u16 uStack_1c;
  u16 uStack_18;
  register u16 uStack_16;
  iVar1 = CppRuntime_builtin_new(0x48);
  AEntity_7328_Ctor(iVar1,self,param_2,0x2ac,0xb);
  *(u32 *)(iVar1 + 0x14) = 0x080E72A0;
  *(u8 *)(iVar1 + 0x44) = *(s8 *)(iVar1 + 0x44) & 0xfc | param_3 & 3;
  uStack_1c = 0x398;
  uStack_1a = 0x120;
  uStack_18 = 0x4e0;
  uStack_16 = 0x128;
  code_entities_08034CEC_7218_SetField_0x34(iVar1,&uStack_1c);
  return iVar1;
}

/* 0x08037C08 (96B) | code_entities_08034CEC_72A0_Ctor (orig: func_08037C08) | origin: wip | domain: code_entities_08034CEC_72A0 | HIGH / vtable_algebra */
u32 code_entities_08034CEC_72A0_Ctor(int self, u8 param_2, s16 param_3, u8 param_4) {
    u16 uStack_10;
    u16 uStack_e;
  u16 uStack_14;
  register u16 uStack_12;
  AEntity_7328_Ctor(self,param_2,param_3,0x2ac,0xb);
  *(u32 *)(self + 0x14) = 0x080E72A0;
  *(u8 *)(self + 0x44) = *(s16 *)(self + 0x44) & 0xfc | param_4 & 3;
  uStack_14 = 0x398;
  uStack_12 = 0x120;
  uStack_10 = 0x4e0;
  uStack_e = 0x128;
  code_entities_08034CEC_7218_SetField_0x34(self,&uStack_14);
  return self;
}

/* 0x080DCB64 (12B) | code_entities_08034CEC_72A0_vfunc_08 (orig: func_080DCB64) | origin: pure | domain: code_entities_08034CEC_72A0 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AEntity_7328_Dtor();
void code_entities_08034CEC_72A0_vfunc_08(void) {
  AEntity_7328_Dtor();
}

