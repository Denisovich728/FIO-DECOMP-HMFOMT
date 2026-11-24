/* Pending CFG->C Lift: PortraitEngine (2 functions) */
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

/* 0x080ADC30 (84B) | PortraitEngine_Create (orig: func_080ADC30) | origin: pending_asm | domain: PortraitEngine | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_080ADC30 @ 0x080ADC30 (84 bytes)
 * Role   : C++ Factory / Constructor with operator new (func_080005D4) [vtable: 0x080E5A28]
 * Fields : +0x00:u16(R), +0x00:u32(W), +0x0C:u32(R), +0x10:u32(R)
 * Callees: func_080005D4, func_0805E6CC, func_080D3918
 * CFG Structure:
 *   L_080ADC30: call func_080005D4(); call func_0805E6CC(); call _call_via_r3(); call _call_via_r3(); return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_0805E6CC(void);
extern void func_080D3918(void);
void func_080ADC30(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, lr}\n"
        "	mov r6, r8\n"
        "	push {r6}\n"
        "	sub sp, #0x38\n"
        "	mov r8, r0\n"
        "	add r5, r1, #0\n"
        "	mov r0, #0x20\n"
        "	bl func_080005D4\n"
        "	add r6, r0, #0\n"
        "	ldr r1, .Lpool_080ADC7C\n"
        "	mov r0, sp\n"
        "	bl func_0805E6CC\n"
        "	ldr r4, [sp]\n"
        "	add r0, sp, #0x30\n"
        "	ldr r3, [r4, #0xc]\n"
        "	mov r1, sp\n"
        "	add r2, r5, #0\n"
        "	bl func_080D3918\n"
        "	ldr r0, [sp, #0x30]\n"
        "	ldrh r2, [r0]\n"
        "	add r0, r6, #0\n"
        "	ldr r3, [r4, #0x10]\n"
        "	mov r1, sp\n"
        "	bl func_080D3918\n"
        "	ldr r0, .Lpool_080ADC80\n"
        "	str r0, [sp]\n"
        "	mov r0, r8\n"
        "	str r6, [r0]\n"
        "	add sp, #0x38\n"
        "	pop {r3}\n"
        "	mov r8, r3\n"
        "	pop {r4, r5, r6}\n"
        "	pop {r1}\n"
        "	bx r1\n"
        ".Lpool_080ADC7C:\n"
        "	.word 0x0852D984\n"
        ".Lpool_080ADC80:\n"
        "	.word 0x080E5A28\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* 0x080ADCA4 (100B) | PortraitEngine_Ctor (orig: func_080ADCA4) | origin: pending_asm | domain: PortraitEngine | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_080ADCA4 @ 0x080ADCA4 (100 bytes)
 * Role   : C++ Class Constructor / Polymorphic Method [vtable: 0x080E5A28]
 * Fields : +0x00:u16(R), +0x00:u32(R), +0x0C:u32(R), +0x10:u32(R)
 * Callees: func_0805E6CC, func_080D3918, func_080D3994
 * CFG Structure:
 *   L_080ADCA4: call func_0805E6CC(); call _call_via_r3(); call _call_via_r3(); call func_080D3994(); return
 * ========================================================================== */
extern void func_0805E6CC(void);
extern void func_080D3918(void);
extern void func_080D3994(void);
void func_080ADCA4(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, lr}\n"
        "	mov r6, r8\n"
        "	push {r6}\n"
        "	sub sp, #0x58\n"
        "	mov r8, r1\n"
        "	ldr r4, [r0]\n"
        "	ldr r1, .Lpool_080ADD00\n"
        "	add r0, sp, #0x20\n"
        "	bl func_0805E6CC\n"
        "	add r6, sp, #0x20\n"
        "	ldr r5, [sp, #0x20]\n"
        "	add r0, sp, #0x50\n"
        "	ldr r3, [r5, #0xc]\n"
        "	add r1, r6, #0\n"
        "	mov r2, r8\n"
        "	bl func_080D3918\n"
        "	ldr r0, [sp, #0x50]\n"
        "	ldrh r2, [r0]\n"
        "	mov r0, sp\n"
        "	ldr r3, [r5, #0x10]\n"
        "	add r1, r6, #0\n"
        "	bl func_080D3918\n"
        "	ldr r0, .Lpool_080ADD04\n"
        "	str r0, [sp, #0x20]\n"
        "	mov r0, sp\n"
        "	mov r1, sp\n"
        "	mov r2, #0x20\n"
        "	bl func_080D3994\n"
        "	mov r0, sp\n"
        "	ldm r0!, {r1, r2, r3}\n"
        "	stm r4!, {r1, r2, r3}\n"
        "	ldm r0!, {r1, r2, r3}\n"
        "	stm r4!, {r1, r2, r3}\n"
        "	ldm r0!, {r1, r2}\n"
        "	stm r4!, {r1, r2}\n"
        "	add sp, #0x58\n"
        "	pop {r3}\n"
        "	mov r8, r3\n"
        "	pop {r4, r5, r6}\n"
        "	pop {r0}\n"
        "	bx r0\n"
        "	.hword 0x0000\n"
        ".Lpool_080ADD00:\n"
        "	.word 0x0852D984\n"
        ".Lpool_080ADD04:\n"
        "	.word 0x080E5A28\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

