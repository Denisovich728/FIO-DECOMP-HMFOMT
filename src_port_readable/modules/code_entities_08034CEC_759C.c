/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_08034CEC_759C (3 functions) */
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

/* 0x080DD3A8 (44B) | code_entities_08034CEC_759C_vfunc_10 (orig: func_080DD3A8) | origin: pure | domain: code_entities_08034CEC_759C | HIGH / vtable_algebra */
void hardware_Sub_08039F90(u8 *, u32, u32, u32, int, int, int, int);
void code_entities_08034CEC_759C_vfunc_10(u8 *a, u32 b, u32 c, u32 d) {
    hardware_Sub_08039F90(a, b, c, d, *(s16 *)(a + 0x54), *(s16 *)(a + 0x56), 0, 2);
}

/* 0x080DD3D4 (48B) | code_entities_08034CEC_759C_vfunc_0C (orig: func_080DD3D4) | origin: pure | domain: code_entities_08034CEC_759C | HIGH / vtable_algebra */
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
extern u32 code_0803EE94_Sub_0805E8F0();
void code_entities_08034CEC_759C_vfunc_0C(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    u32 r1 = arg1;
    u32 r2 = arg2;
    u32 r3 = arg3;
    u32 r4;
    r4 = r0 + 0;
    r1 = r4 + 0;
    r1 += 0x47;
    r0 = *(u8 *)(r1);
    if (r0 != 0) goto loc_080DD3F8;
    r0 = r4 + 0;
    r0 += 0x30;
    r0 = code_0803EE94_Sub_0805E8F0(r0, r1, r2, r3);
    r0 = r0 << 0x1e;
    if ((int)r0 >= 0) goto loc_080DD3FC;
    r1 = r4 + 0;
    r1 += 0x44;
    r0 = 1;
    goto loc_080DD3FA;
loc_080DD3F8:
    r0 = 0;
loc_080DD3FA:
    *(u8 *)(r1) = r0;
loc_080DD3FC:
    return r0;
}

/* 0x080DD404 (12B) | code_entities_08034CEC_759C_vfunc_08 (orig: func_080DD404) | origin: pure | domain: code_entities_08034CEC_759C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_08034CEC_76BC_Dtor();
void code_entities_08034CEC_759C_vfunc_08(void) {
  code_entities_08034CEC_76BC_Dtor();
}

