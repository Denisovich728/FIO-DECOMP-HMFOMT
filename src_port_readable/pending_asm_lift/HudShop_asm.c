/* Pending CFG->C Lift: HudShop (3 functions) */
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

/* 0x08050C70 (64B) | HudShop_Sub_08050C70 (orig: func_08050C70) | origin: pending_asm | domain: HudShop | HEURISTIC / semantic_bank */
/* ==========================================================================
 * [FSM-LIFTER] func_08050C70 @ 0x08050C70 (64 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u8(W)
 * Callees: func_080D3A84
 * CFG Structure:
 *   L_08050C70: call func_080D3A84(); return
 * ========================================================================== */
extern void func_080D3A84(void);
int func_08050C70(void) {
    u32 sp0, sp1, sp2;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2));
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	add r2, sp, #8\n"
        "	mov r0, #0\n"
        "	strb r0, [r2]\n"
        "	mov r0, sp\n"
        "	sub r2, r2, r0\n"
        "	mov r1, #0\n"
        "	bl func_080D3A84\n"
        "	mov r0, sp\n"
        "	add r0, #2\n"
        "	mov r2, #1\n"
        "	strb r2, [r0]\n"
        "	mov r1, sp\n"
        "	add r1, #3\n"
        "	mov r0, #0x15\n"
        "	strb r0, [r1]\n"
        "	mov r0, sp\n"
        "	add r0, #7\n"
        "	strb r2, [r0]\n"
        "	add r1, r4, #0\n"
        "	mov r0, sp\n"
        "	ldm r0!, {r2, r3}\n"
        "	stm r1!, {r2, r3}\n"
        "	add r0, r4, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "lr", "memory"
    );
    return __ret;
}

/* 0x0805F9C8 (44B) | HudShop_Sub_0805F9C8 (orig: func_0805F9C8) | origin: pending_asm | domain: HudShop | HEURISTIC / semantic_bank */
/* ==========================================================================
 * [FSM-LIFTER] func_0805F9C8 @ 0x0805F9C8 (44 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(W), +0x10:u32(R)
 * Callees: func_08050DA0, func_08050E68
 * CFG Structure:
 *   L_0805F9C8: call func_08050E68(); call func_08050DA0(); goto L_0805FB9C
 * ========================================================================== */
extern void func_08050DA0(void);
extern void func_08050E68(void);
void func_0805F9C8(void) {
    __asm__ volatile(
        "	push {r2, r4, r5, lr}\n"
        "	lsr r7, r1, #0x20\n"
        "	ldr r0, [r7, #0x10]\n"
        "	.hword 0x4909\n"
        "	bl func_08050E68\n"
        "	ldr r0, [r7, #0x10]\n"
        "	.hword 0x4908\n"
        "	.hword 0x4B08\n"
        "	add r2, r7, r3\n"
        "	bl func_08050DA0\n"
        "	.hword 0x4807\n"
        "	add r1, r7, r0\n"
        "	mov r0, #6\n"
        "	strh r0, [r1]\n"
        "	.hword 0x4A06\n"
        "	add r1, r7, r2\n"
        "	mov r0, #0x11\n"
        "	strh r0, [r1]\n"
        "	.hword 0xE0D4\n"
        "	.hword 0x0000\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* 0x0805F9F8 (56B) | HudShop_Sub_0805F9F8 (orig: func_0805F9F8) | origin: pending_asm | domain: HudShop | HEURISTIC / semantic_bank */
/* ==========================================================================
 * [FSM-LIFTER] func_0805F9F8 @ 0x0805F9F8 (56 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(W), +0x10:u32(R), +0x40:u32(W)
 * Callees: func_08050DA0, func_08050E68
 * CFG Structure:
 *   L_0805F9F8: call func_08050E68(); call func_08050DA0(); goto L_0805FB9C
 * ========================================================================== */
extern void func_08050DA0(void);
extern void func_08050E68(void);
void func_0805F9F8(void) {
    __asm__ volatile(
        "	push {r2, r6, lr}\n"
        "	lsr r7, r1, #0x20\n"
        "	str r0, [r5, #0x40]\n"
        "	lsl r0, r0, #0\n"
        "	str r6, [r4, #0x40]\n"
        "	lsl r0, r0, #0\n"
        "	str r4, [r4, #0x40]\n"
        "	lsl r0, r0, #0\n"
        "	ldr r0, [r7, #0x10]\n"
        "	.hword 0x4909\n"
        "	bl func_08050E68\n"
        "	ldr r0, [r7, #0x10]\n"
        "	.hword 0x4908\n"
        "	.hword 0x4B08\n"
        "	add r2, r7, r3\n"
        "	bl func_08050DA0\n"
        "	.hword 0x4807\n"
        "	add r1, r7, r0\n"
        "	mov r0, #6\n"
        "	strh r0, [r1]\n"
        "	.hword 0x4A06\n"
        "	add r1, r7, r2\n"
        "	mov r0, #0x12\n"
        "	strh r0, [r1]\n"
        "	.hword 0xE0B6\n"
        "	.hword 0x0000\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

