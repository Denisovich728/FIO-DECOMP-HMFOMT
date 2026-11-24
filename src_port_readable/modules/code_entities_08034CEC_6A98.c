/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_08034CEC_6A98 (5 functions) */
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

/* 0x08036B4C (52B) | code_entities_08034CEC_6A98_Ctor (orig: func_08036B4C) | origin: wip | domain: code_entities_08034CEC_6A98 | HIGH / vtable_algebra */
u32 code_entities_08034CEC_6A98_Ctor(int self) {
  func_08034CEC(self);
  *(u32 *)(self + 0x14) = 0x080E6A98;
  return self;
}

/* 0x08036B80 (48B) | code_entities_08034CEC_6A98_vfunc_30 (orig: func_08036B80) | origin: pure | domain: code_entities_08034CEC_6A98 | HIGH / vtable_algebra */
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
u32 code_entities_08034CEC_6A98_vfunc_30(u32 arg0) {
  u32 val;
  val = CppRuntime_builtin_new(0x8c);
  return code_entities_080320DC_68B4_Ctor(val, arg0, 4, 0x1b, 1, 2, 0, (struct _s1){0});
}

/* 0x08036BB0 (72B) | code_entities_08034CEC_6A98_vfunc_18 (orig: func_08036BB0) | origin: wip | domain: code_entities_08034CEC_6A98 | HIGH / vtable_algebra */
void code_entities_08034CEC_6A98_vfunc_18(u32 *self) {
  register short sVar2;
  register BOOL sVar1;
  sVar1 = *(short *)((int)self + 10);
  sVar2 = *(short *)((int)self + 0xe);
  npc_entity_vfunc_18(self);
  if (((*(s8 *)(self + 1) == 2) &&
      (((sVar1 != 0xf4 || (0xab != sVar2)) && (*(short *)((int)self + 10) == 0xf4)))) &&
     (*(short *)((int)self + 0xe) == 0xab)) {
    func_080D3910((int *)*self,*(u32 *)(*(int *)*self + 0x114));
  }
}

/* 0x08036BF8 (80B) | code_entities_08034CEC_6A98_vfunc_3C (orig: func_08036BF8) | origin: pure | domain: code_entities_08034CEC_6A98 | HIGH / vtable_algebra */
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
extern u32 npc_entity_vfunc_3C();
extern u32 func_080D3910();
void code_entities_08034CEC_6A98_vfunc_3C(u32 *arg0, int arg1) {
  u32 val2;
  register BOOL val;
  int x;
  int y;
  val = *(short *)((int)arg0 + 10);
  val2 = *(short *)((int)arg0 + 0xe);
  npc_entity_vfunc_3C(arg0, arg1);
  if ((arg1 > 1) && (*(u16 *)(1 + arg0) == 2) && (val != 0xf4 || val2 != 0xab)) {
    x = *(short *)((int)arg0 + 10);
    y = *(short *)((int)arg0 + 0xe);
    if (x == 0xf4 && y == 0xab) {
      func_080D3910((int *)*arg0, *(u32 *)(*(u32 *)*arg0 + 0x114));
    }
  }
}

/* 0x080DC9F0 (12B) | code_entities_08034CEC_6A98_vfunc_08 (orig: func_080DC9F0) | origin: pure | domain: code_entities_08034CEC_6A98 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 ANpcEntity_Dtor();
void code_entities_08034CEC_6A98_vfunc_08(void) {
  ANpcEntity_Dtor();
}

