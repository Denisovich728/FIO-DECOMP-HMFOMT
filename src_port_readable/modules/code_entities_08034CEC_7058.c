/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_08034CEC_7058 (3 functions) */
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

/* 0x08035DD8 (60B) | code_entities_08034CEC_7058_Ctor (orig: func_08035DD8) | origin: wip | domain: code_entities_08034CEC_7058 | HIGH / vtable_algebra */
u32 code_entities_08034CEC_7058_Ctor(char self, s16 param_2, u32 param_3, u32 param_4) {
    u32 r1;
    s16 r2;
    u32 r3;
    u32 r4;
    register u32 r0 = self;
    r1 = param_2;
    r2 = param_3;
    r3 = param_4;
    r0 = 0x080F77FC;
    r4 = r0 + 0;
    r0 = 0x000009A1;
    r0 += 4;
    r0 = r4 + 0;
    r0 = 0x00000403;
    r0 = func_08034CEC(r0, r1, r2, r3);
    r0 = 0x080E7058;
    *(u32 *)(r4 + 0x14) = r0;
    r0 = r4 + 0;
    return r1;
}

/* 0x08035E14 (44B) | code_entities_08034CEC_7058_vfunc_30 (orig: func_08035E14) | origin: pure | domain: code_entities_08034CEC_7058 | HIGH / vtable_algebra */
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
u32 code_entities_08034CEC_7058_vfunc_30(u32 arg0) {
  u32 val;
  val = CppRuntime_builtin_new(0x8c);
  return code_entities_080320DC_68B4_Ctor(val, arg0, 4, 0x1b, 1, 0, 0, (struct _s1){0});
}

/* 0x080DCB04 (12B) | code_entities_08034CEC_7058_vfunc_08 (orig: func_080DCB04) | origin: pure | domain: code_entities_08034CEC_7058 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 ANpcEntity_Dtor();
void code_entities_08034CEC_7058_vfunc_08(void) {
  ANpcEntity_Dtor();
}

