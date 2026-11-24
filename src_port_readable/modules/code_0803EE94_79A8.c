/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_79A8 (1 functions) */
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

/* 0x080E1844 (96B) | code_0803EE94_79A8_vfunc_0C (orig: func_080E1844) | origin: pure | domain: code_0803EE94_79A8 | HIGH / vtable_algebra */
extern u32 LibC_strlen();
extern void LibC_memcpy();
extern void LibC_strcpy();
struct Item20 { u8 d[0x14]; };
extern struct Item20 g_080FB000[];
u8 *code_0803EE94_79A8_vfunc_0C(u8 *arg0, int arg1, int arg2) {
    u8 buf[32];
    if (arg2 == 0xff) {
        struct Item20 *src = &g_080FB000[*(int *)(arg1 + 4)];
        u32 len = LibC_strlen(src);
        if (len > 0x1f) {
            len = 0x1f;
        }
        LibC_memcpy(buf, src, len);
        buf[len] = 0;
        *arg0 = 1;
        LibC_strcpy(arg0 + 4, buf);
    } else {
        buf[0] = 0;
        *arg0 = 0;
        LibC_strcpy(arg0 + 4, buf);
    }
    return arg0;
}

