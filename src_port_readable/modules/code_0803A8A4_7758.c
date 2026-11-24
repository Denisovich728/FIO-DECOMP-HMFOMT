/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803A8A4_7758 (2 functions) */
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

/* 0x0803BF14 (100B) | code_0803A8A4_7758_Ctor (orig: func_0803BF14) | origin: wip | domain: code_0803A8A4_7758 | HIGH / vtable_algebra */
u32 code_0803A8A4_7758_Ctor(u16 self, u32 param_2, u32 param_3, u8 param_4) {
    register u32 r0 = self;
    register u32 r1 = param_2;
    register u32 r2 = param_3;
    register u32 r3 = param_4;
    register u32 r4, r5, r6, r7;
    *(s32 *)(r0 + 0x18) = r4;
    r4 = 0;
    *(int *)(r0) = r4;
    *(u32 *)(r0 + 4) = r4;
    r4 = 0x080E7758;
    *(u32 *)(r0 + 8) = r4;
    *(u32 *)(r0 + 0xc) = r1;
    *(u32 *)(r0 + 0x10) = (u16)r2;
    *(u32 *)(r0 + 0x14) = r3;
    r1 = 0x1f;
    r6 &= r1;
    r2 = *(u8 *)(r0 + 0x1c);
    r1 = 0x20;
    r1 &= r2;
    r1 |= r6;
    *(u8 *)(r0 + 0x1c) = r1;
    r2 = 0x000003FF;
    r1 = r2 + 0;
    r5 &= r1;
    r5 = r5 << 5;
    r2 = *(u16 *)(r0 + 0x1c);
    r1 = 0xFFFF801F;
    r1 &= r2;
    r1 |= r5;
    *(u16 *)(r0 + 0x1c) = r1;
    r7 &= r1;
    r1 = 0xf;
    r3 = r7 << 0xf;
    r1 = *(u32 *)(r0 + 0x1c);
    r2 = 0xFFF87FFF;
    r1 &= r2;
    r1 |= r3;
    *(u32 *)(r0 + 0x1c) = r1;
    return r1;
}

/* 0x080E0A7C (12B) | code_0803A8A4_7758_vfunc_0C (orig: func_080E0A7C) | origin: pure | domain: code_0803A8A4_7758 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Dtor_98AC();
void code_0803A8A4_7758_vfunc_0C(void) {
  hardware_Dtor_98AC();
}

