/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7C40 (2 functions) */
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

/* 0x0807E4D4 (52B) | code_0803EE94_7C40_Ctor (orig: func_0807E4D4) | origin: pure | domain: code_0803EE94_7C40 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_809E804_8570_Ctor();

struct S_0807E4D4 {
    u32 unk0;
    u32 unk4;
    u8 pad8[0x6A4 - 8];
    u8 unk6a4;
    u8 pad6a5[0x708 - 0x6a5];
    u32 unk708;
    u8 unk70c;
};

s32 code_0803EE94_7C40_Ctor(struct S_0807E4D4 *p) {
    code_809E804_8570_Ctor();
    p->unk4 = 0x080E7C40;
    p->unk6a4 = 0;
    p->unk708 = 0;
    p->unk70c = 0;
    return (s32)p;
}

/* 0x0807E508 (20B) | code_0803EE94_7C40_Ctor_E508 (orig: func_0807E508) | origin: pure | domain: code_0803EE94_7C40 | HIGH / vtable_algebra */
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
extern u32 code_809E804_8570_Dtor();
void code_0803EE94_7C40_Ctor_E508(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    r2 = 0x080E7C40;
    *(u32 *)(r0 + 4) = r2;
    r0 = code_809E804_8570_Dtor(r0, r1, r2, r3);
    return r0;
}

