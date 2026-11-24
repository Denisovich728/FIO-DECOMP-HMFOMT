/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7D4C (2 functions) */
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

/* 0x080882AC (88B) | code_0803EE94_7D4C_Ctor (orig: func_080882AC) | origin: pure | domain: code_0803EE94_7D4C | HIGH / vtable_algebra */
extern void code_809E804_85DC_Ctor();
extern u32 FarmHouse_GetFridge_C048();
int code_0803EE94_7D4C_Ctor(int self, u32 param_2) {
    register u32 z;
    register u8 *p98;
    u32 *pfc;
    u32 *p104;
    int sub;
    code_809E804_85DC_Ctor(self, param_2);
    *(u32 *)(self + 4) = 0x080E7D4C;
    p98 = (u8 *)(self + 0x98);
    
    z = 0;
    *p98 = z;
    pfc = (u32 *)(self + 0xfc);
    sub = *(int *)(self + 8);
    *pfc = sub + 0x1c2c;
    *(u32 *)(self + 0x100) = sub + 0x1c38;
    p104 = (u32 *)(self + 0x104);
    *p104 = FarmHouse_GetFridge_C048(sub + 500);
    *(u32 *)(self + 0x108) = z;
    return self;
}

/* 0x08088304 (20B) | code_0803EE94_7D4C_Ctor_8304 (orig: func_08088304) | origin: pure | domain: code_0803EE94_7D4C | HIGH / vtable_algebra */
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
extern u32 SpriteAnimEngine_5A28_Dtor_3504();
void code_0803EE94_7D4C_Ctor_8304(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    r2 = 0x080E7D4C;
    *(u32 *)(r0 + 4) = r2;
    r0 = SpriteAnimEngine_5A28_Dtor_3504(r0, r1, r2, r3);
    return r0;
}

