/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_08034CEC_7218 (13 functions) */
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

/* 0x08037244 (12B) | code_entities_08034CEC_7218_SetField_0x34 (orig: func_08037244) | origin: pure | domain: code_entities_08034CEC_7218 | MEDIUM / tu_interp */
void code_entities_08034CEC_7218_SetField_0x34(u8 *arg0, u32 *arg1) {
    u32 b = arg1[1];
    u32 a = arg1[0];
    *(u32 *)(arg0 + 52) = a;
    *(u32 *)(arg0 + 56) = b;
}

/* 0x08037430 (4B) | code_entities_08034CEC_7218_vfunc_34 (orig: func_08037430) | origin: pure | domain: code_entities_08034CEC_7218 | HIGH / vtable_algebra */
u16 code_entities_08034CEC_7218_vfunc_34(u8 *arg0) {
    return *(u16 *)(arg0 + 60);
}

/* 0x08037434 (40B) | code_entities_08034CEC_7218_vfunc_10 (orig: func_08037434) | origin: pure | domain: code_entities_08034CEC_7218 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AEntity_vfunc_10();
extern u32 func_080D3910();
void code_entities_08034CEC_7218_vfunc_10(int arg0) {
  if (*(char *)(arg0 + 0x40) == '\0') {
    func_080D3910(arg0,*(u32 *)(*(int *)(arg0 + 0x14) + 0x3c));
  }
  *(u16 *)(arg0 + 0x3e) = 0;
  AEntity_vfunc_10(arg0);
}

/* 0x0803745C (20B) | code_entities_08034CEC_7218_vfunc_14 (orig: func_0803745C) | origin: pure | domain: code_entities_08034CEC_7218 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AEntity_vfunc_14();
void code_entities_08034CEC_7218_vfunc_14(int arg0) {
  AEntity_vfunc_14();
  *(u8 *)(arg0 + 0x40) = 0;
}

/* 0x08037470 (36B) | code_entities_08034CEC_7218_vfunc_0C (orig: func_08037470) | origin: pure | domain: code_entities_08034CEC_7218 | HIGH / vtable_algebra */
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
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
unsigned long long code_entities_08034CEC_7218_vfunc_0C(short *arg0, int arg1) {
  int val;
  int val2;
  val = *(short *)(arg1 + 10);
  val2 = *(short *)(arg1 + 0xe);
  *arg0 = val + -7;
  arg0[1] = val2 + -9;
  arg0[2] = val + 7;
  arg0[3] = val2 + 5;
}

/* 0x08037958 (128B) | code_entities_08034CEC_7218_vfunc_40 (orig: func_08037958) | origin: wip | domain: code_entities_08034CEC_7218 | HIGH / vtable_algebra */
u32 code_entities_08034CEC_7218_vfunc_40(int self) {
  u8 bVar1;
  int iVar2;
  int iVar3;
  u32 uVar4;
  u32 uVar5;
  int iVar6;
  iVar6 = 0x080F1638;
  iVar2 = code_809E804_Sub_080AB82C(0x080F1638,3);
  iVar6 = iVar2 * 4 + iVar6;
  iVar3 = code_809E804_Sub_080AB788((u32)*(u8 *)(iVar6 + 2) * 0x3c);
  bVar1 = *(u8 *)(iVar6 + 1);
  iVar6 = code_809E804_Sub_080AB788(4);
  if (((iVar6 != 0) && (iVar6 != 3)) &&
     (uVar4 = code_809E804_Sub_080AB7A4(*(u8 *)(self + 0x20)), *(u8 *)(self + 0x20) != uVar4)) {
    AActorEntity_SetAnimFacing(self);
  }
  uVar5 = code_entities_08034CEC_7218_Sub_08037A48(self,iVar2);
  code_entities_08034CEC_Sub_08037098(self,uVar5);
  uVar4 = code_entities_08034CEC_7218_Sub_08037A38(self,iVar2);
  if (*(u16 *)(self + 0x22) != uVar4) {
    AActorEntity_SetAnim(self);
  }
  return ((u32)bVar1 * 0x3c + iVar3);
}

/* 0x080379D8 (44B) | code_entities_08034CEC_7218_vfunc_30 (orig: func_080379D8) | origin: pure | domain: code_entities_08034CEC_7218 | HIGH / vtable_algebra */
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
u32 code_entities_08034CEC_7218_vfunc_30(u32 arg0) {
  u32 val;
  val = CppRuntime_builtin_new(0x8c);
  return code_entities_080320DC_68B4_Ctor(val, arg0, 2, 0x1b, 0, 8, 0, (struct _s1){0});
}

/* 0x08037A04 (52B) | code_entities_08034CEC_7218_vfunc_3C (orig: func_08037A04) | origin: pure | domain: code_entities_08034CEC_7218 | HIGH / vtable_algebra */
extern void game_state_Sub_080A19EC();
extern void AActorEntity_SetLocation();
extern u32 code_entities_08034CEC_7218_Sub_08037A38();
extern void AActorEntity_SetAnim();
void code_entities_08034CEC_7218_vfunc_3C(int arg0) {
    u8 buf[8];
    u32 v;
    game_state_Sub_080A19EC(buf);
    AActorEntity_SetLocation(arg0, buf);
    v = code_entities_08034CEC_7218_Sub_08037A38(arg0, 0);
    if (*(u16 *)(arg0 + 0x22) != v) {
        AActorEntity_SetAnim(arg0, v);
    }
}

/* 0x08037A38 (16B) | code_entities_08034CEC_7218_Sub_08037A38 (orig: func_08037A38) | origin: pure | domain: code_entities_08034CEC_7218 | MEDIUM / graph_algebra */
extern const u16 g_080F1644[];
u16 code_entities_08034CEC_7218_Sub_08037A38(void *arg0, u32 arg1) {
    return g_080F1644[arg1];
}

/* 0x08037A48 (20B) | code_entities_08034CEC_7218_Sub_08037A48 (orig: func_08037A48) | origin: pure | domain: code_entities_08034CEC_7218 | MEDIUM / graph_algebra */
int code_entities_08034CEC_7218_Sub_08037A48(int arg0, int arg1) {
    switch (arg1) {
    case 1: return 32768;
    default: return 0;
    }
}

/* 0x08037B80 (56B) | code_entities_08034CEC_7218_Create (orig: func_08037B80) | origin: pure | domain: code_entities_08034CEC_7218 | HIGH / vtable_algebra */
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
static inline int ctor_037b80(int val, u32 arg0, u32 arg1) {
  AEntity_7328_Ctor(val,arg0,arg1,0x00000207,10);
  *(u32 *)(val + 0x14) = 0x080E7218;
  return val;
}
u32 code_entities_08034CEC_7218_Create(u32 arg0,u32 arg1) {
  int val;
  return ctor_037b80((int)CppRuntime_builtin_new(0x44), arg0, arg1);
}

/* 0x08037BB8 (40B) | code_entities_08034CEC_7218_Ctor (orig: func_08037BB8) | origin: pure | domain: code_entities_08034CEC_7218 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AEntity_7328_Ctor();

u32 code_entities_08034CEC_7218_Ctor(u32 *arg0, u32 a1, u32 a2) {
  AEntity_7328_Ctor(arg0, a1, a2, 0x207, 10);
  arg0[5] = 0x080E7218;
  return (u32)arg0;
}

/* 0x080DCB4C (12B) | code_entities_08034CEC_7218_vfunc_08 (orig: func_080DCB4C) | origin: pure | domain: code_entities_08034CEC_7218 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AEntity_7328_Dtor();
void code_entities_08034CEC_7218_vfunc_08(void) {
  AEntity_7328_Dtor();
}

