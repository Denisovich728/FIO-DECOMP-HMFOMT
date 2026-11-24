/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7B2C (2 functions) */
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

/* 0x08070C24 (100B) | code_0803EE94_7B2C_Ctor (orig: func_08070C24) | origin: wip | domain: code_0803EE94_7B2C | HIGH / vtable_algebra */
u32 code_0803EE94_7B2C_Ctor(s16 self) {
  u32 val;
  u32 z_pair;
  val = code_0803EE94_7B88_Create();
  *(u32 *)((self + 0x000005B4)) = 0x080E7B2C;
  *(u32 *)((self + (0xb7 << 3))) = (u16)*(s8 *)((self + (0xb7 << 3)));
  *(u8 *)((self + (0xb7 << 3)) + 4) = 0;
  *(u8 *)((self + (0xb7 << 3)) + 0x24) = (z_pair = 0);
  *(u8 *)(((self + (0xb7 << 3)) + 0x28)) = z_pair;
  return ((self + (0xb7 << 3)) + 0x28);
}

/* 0x08070C88 (28B) | code_0803EE94_7B2C_Ctor_0C88 (orig: func_08070C88) | origin: pure | domain: code_0803EE94_7B2C | HIGH / vtable_algebra */
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
extern u32 code_0803EE94_7B88_Dtor();
void code_0803EE94_7B2C_Ctor_0C88(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    r2 = 0x000005B4;
    r3 = r0 + r2;
    r2 = 0x080E7B2C;
    *(u32 *)(r3) = r2;
    r0 = code_0803EE94_7B88_Dtor(r0, r1, r2, r3);
    return r0;
}

