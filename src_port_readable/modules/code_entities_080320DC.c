/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_entities_080320DC (2 functions) */
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

/* 0x08032900 (52B) | code_entities_080320DC_Sub_08032900 (orig: func_08032900) | origin: wip | domain: code_entities_080320DC | HIGH / stanhash_map_tu */
u32 code_entities_080320DC_Sub_08032900(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    s8 r0 = param_1;
    u32 r1 = param_2;
    s16 r2 = param_3;
    u32 r3 = param_4;
    register u32 r5, r7;
    if ((u16)r0 != 2) goto loc_0803292C;
    r0 = 0xFFFFFEF0;
    r1 = (s16)r1 + r0;
    r0 = 0x000002AF;
    if (r1 > r0) goto loc_08032928;
    if ((u8)r2 <= 0xaf) goto loc_08032928;
    r0 -= 0x60;
    if (r2 > r0) goto loc_08032928;
    r0 = 1;
    goto loc_0803292E;
    r0 = r0;
    r7 = r5 << 0xa;
    r0 = r0;
loc_08032928:
    r0 = 2;
    goto loc_0803292E;
loc_0803292C:
    r0 = 0;
loc_0803292E:
    return r1;
}

/* 0x08034BFC (68B) | code_entities_080320DC_Sub_08034BFC (orig: func_08034BFC) | origin: wip | domain: code_entities_080320DC | HIGH / stanhash_map_tu */
void code_entities_080320DC_Sub_08034BFC(int param_1, int param_2, u32 param_3, int param_4) {
  u32 tmp_a1;
  tmp_a1 = *(u16 *)(param_2 * 2 + 0x080F14F0);
  code_0803EE94_Sub_0805E860(0xb4 + param_1, tmp_a1);
  *(u8 *)(param_1 + 200) = 1;
  *(u8 *)(0xca + param_1) = 0;
  *(u8 *)(param_1 + 0xcb) = 1;
  *(u16 *)(0xcc + param_1) = param_3;
  *(u16 *)(param_1 + 0xce) = param_4;
  *(u16 *)(0xd0 + param_1) = 0x3c;
}

