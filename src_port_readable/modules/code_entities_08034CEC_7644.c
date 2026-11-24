/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_08034CEC_7644 (5 functions) */
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

/* 0x0803A320 (20B) | code_entities_08034CEC_7644_Sub_0803A320 (orig: func_0803A320) | origin: pure | domain: code_entities_08034CEC_7644 | MEDIUM / graph_algebra */
extern const s16 g_080F16D2[]; s16 code_entities_08034CEC_7644_Sub_0803A320(void *a, s16 b) { return g_080F16D2[b]; }

/* 0x0803A334 (28B) | code_entities_08034CEC_7644_Sub_0803A334 (orig: func_0803A334) | origin: pure | domain: code_entities_08034CEC_7644 | MEDIUM / graph_algebra */
extern const s16 g_080F16D2[]; s16 code_entities_08034CEC_7644_Sub_0803A334(void *a, s16 b) { return g_080F16D2[(b + 0x40) & 0xff]; }

/* 0x080DDC24 (36B) | code_entities_08034CEC_7644_vfunc_14 (orig: func_080DDC24) | origin: pure | domain: code_entities_08034CEC_7644 | HIGH / vtable_algebra */
struct B { u8 f:4; u32 x; u16 y, z; };
void code_entities_08034CEC_7644_vfunc_14(u8 *arg0, struct B *arg1) {
    arg1->f = 5;
    arg1->x = *(u32 *)(arg0 + 0x50);
    arg1->y = *(u16 *)(arg0 + 0x54);
    arg1->z = *(u16 *)(arg0 + 0x56);
}

/* 0x080DDC48 (48B) | code_entities_08034CEC_7644_vfunc_10 (orig: func_080DDC48) | origin: pure | domain: code_entities_08034CEC_7644 | HIGH / vtable_algebra */
void hardware_Sub_08039F90(u8 *, u32, u32, u32, int, int, int, int);
void code_entities_08034CEC_7644_vfunc_10(u8 *a, u32 b, u32 c, u32 d) {
    hardware_Sub_08039F90(a, b, c, d, *(s16 *)(a + 0x54), *(s16 *)(a + 0x56), *(int *)(a + 0x68) >> 16, 2);
}

/* 0x080DDE68 (12B) | code_entities_08034CEC_7644_vfunc_08 (orig: func_080DDE68) | origin: pure | domain: code_entities_08034CEC_7644 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_entities_08034CEC_76BC_Dtor();
void code_entities_08034CEC_7644_vfunc_08(void) {
  code_entities_08034CEC_76BC_Dtor();
}

