/* Pending CFG->C Lift: code_0803EE94_8028 (5 functions) */
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

/* 0x080943E4 (104B) | code_0803EE94_8028_vfunc_68 (orig: func_080943E4) | origin: pending_asm | domain: code_0803EE94_8028 | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_080943E4 @ 0x080943E4 (104 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r1)
 * Fields : +0x00:u32(R), +0x08:u32(W), +0x10:u32(W), +0x3C:u32(R), +0x40:u32(R), +0x44:u32(R), +0x48:u32(R)
 * Callees: func_080D3910
 * CFG Structure:
 *   L_080943E4: if (!=) goto L_080943F6
 *   L_080943F6: call _call_via_r1(); if (==) goto L_08094440
 *   L_08094420: call _call_via_r1(); if (==) goto L_0809443C
 *   L_08094440: return
 * ========================================================================== */
extern void func_080D3910(void);
void func_080943E4(void) {

    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	cmp r1, #1\n"
        "	bne _L_080943F6\n"
        "	ldr r0, [r4]\n"
        "	ldr r1, [r0, #0x3c]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "_L_080943F6:\n"
        "	ldr r0, [r4]\n"
        "	ldr r1, [r0, #0x40]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_08094440\n"
        "	ldr r0, [r4]\n"
        "	ldr r1, [r0, #0x48]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_08094420\n"
        "	ldr r0, .Lpool_0809441C\n"
        "	b _L_0809443E\n"
        "	.align 2, 0\n"
        ".Lpool_0809441C:\n"
        "	.word 0x08100A04\n"
        "_L_08094420:\n"
        "	ldr r0, [r4]\n"
        "	ldr r1, [r0, #0x44]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_0809443C\n"
        "	mov r0, #1\n"
        "	str r0, [r4, #0x10]\n"
        "	ldr r0, .Lpool_08094438\n"
        "	b _L_0809443E\n"
        "	.align 2, 0\n"
        ".Lpool_08094438:\n"
        "	.word 0x081009DC\n"
        "_L_0809443C:\n"
        "	ldr r0, =0x08100914\n"
        "_L_0809443E:\n"
        "	str r0, [r4, #8]\n"
        "_L_08094440:\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "lr", "memory"
    );
}

/* 0x0809446C (60B) | code_0803EE94_8028_vfunc_7C (orig: func_0809446C) | origin: pending_asm | domain: code_0803EE94_8028 | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_0809446C @ 0x0809446C (60 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r1)
 * Fields : +0x00:u32(R), +0x08:u32(W), +0x40:u32(R), +0x48:u32(R)
 * Callees: func_080D3910
 * CFG Structure:
 *   L_0809446C: call _call_via_r1(); if (==) goto L_0809449C
 *   L_0809449C: return
 * ========================================================================== */
extern void func_080D3910(void);
void func_0809446C(void) {

    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	ldr r0, [r4]\n"
        "	ldr r1, [r0, #0x40]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_0809449C\n"
        "	ldr r0, [r4]\n"
        "	ldr r1, [r0, #0x48]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_08094498\n"
        "	ldr r0, .Lpool_08094494\n"
        "	b _L_0809449A\n"
        "	.align 2, 0\n"
        ".Lpool_08094494:\n"
        "	.word 0x08100A04\n"
        "_L_08094498:\n"
        "	ldr r0, =0x0810093C\n"
        "_L_0809449A:\n"
        "	str r0, [r4, #8]\n"
        "_L_0809449C:\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "lr", "memory"
    );
}

/* 0x080944A8 (64B) | code_0803EE94_8028_vfunc_8C (orig: func_080944A8) | origin: pending_asm | domain: code_0803EE94_8028 | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_080944A8 @ 0x080944A8 (64 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r1, _call_via_r3)
 * Fields : +0x00:u32(R), +0x08:u32(W), +0x14:u32(R), +0x18:u32(R), +0x38:u32(R), +0x50:u32(R)
 * Callees: func_080D3910, func_080D3918
 * CFG Structure:
 *   L_080944A8: call _call_via_r1(); if (==) goto L_080944D2
 *   L_080944D2: call _call_via_r3()
 *   L_080944E0: return
 * ========================================================================== */
extern void func_080D3910(void);
extern void func_080D3918(void);
void func_080944A8(void) {

    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	ldr r1, [r4, #0x14]\n"
        "	ldr r0, [r4, #0x18]\n"
        "	str r0, [r1, #8]\n"
        "	ldr r0, [r4]\n"
        "	ldr r1, [r0, #0x50]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_080944D2\n"
        "	ldr r0, [r4]\n"
        "	ldr r3, [r0, #0x38]\n"
        "	add r0, r4, #0\n"
        "	mov r1, #0\n"
        "	mov r2, #0\n"
        "	bl func_080D3918\n"
        "	b _L_080944E0\n"
        "_L_080944D2:\n"
        "	ldr r0, [r4]\n"
        "	ldr r3, [r0, #0x38]\n"
        "	add r0, r4, #0\n"
        "	mov r1, #1\n"
        "	mov r2, #0\n"
        "	bl func_080D3918\n"
        "_L_080944E0:\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "lr", "memory"
    );
}

/* 0x080944E8 (116B) | code_0803EE94_8028_vfunc_90 (orig: func_080944E8) | origin: pending_asm | domain: code_0803EE94_8028 | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_080944E8 @ 0x080944E8 (116 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r1)
 * Fields : +0x00:u32(R), +0x08:u32(W), +0x0C:u8(W), +0x10:u32(W), +0x40:u32(R), +0x48:u32(R), +0x54:u32(R), +0x58:u32(R)
 * Callees: func_080D3910
 * CFG Structure:
 *   L_080944E8: call _call_via_r1(); if (==) goto L_08094550
 *   L_08094514: call _call_via_r1(); if (==) goto L_08094548
 *   L_0809453C: goto L_0809454E
 *   L_08094550: return
 * ========================================================================== */
extern void func_080D3910(void);
void func_080944E8(void) {

    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	ldr r0, [r4]\n"
        "	ldr r1, [r0, #0x40]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_08094550\n"
        "	ldr r0, [r4]\n"
        "	ldr r1, [r0, #0x48]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_08094514\n"
        "	ldr r0, .Lpool_08094510\n"
        "	b _L_0809454E\n"
        "	.align 2, 0\n"
        ".Lpool_08094510:\n"
        "	.word 0x08100A04\n"
        "_L_08094514:\n"
        "	ldr r0, [r4]\n"
        "	ldr r1, [r0, #0x54]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_08094548\n"
        "	ldr r0, [r4]\n"
        "	ldr r1, [r0, #0x58]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_0809453C\n"
        "	ldr r0, .Lpool_08094538\n"
        "	b _L_0809454E\n"
        "	.align 2, 0\n"
        ".Lpool_08094538:\n"
        "	.word 0x08100964\n"
        "_L_0809453C:\n"
        "	mov r0, #1\n"
        "	strb r0, [r4, #0xc]\n"
        "	ldr r0, .Lpool_08094544\n"
        "	b _L_0809454E\n"
        "	.align 2, 0\n"
        ".Lpool_08094544:\n"
        "	.word 0x0810098C\n"
        "_L_08094548:\n"
        "	mov r0, #3\n"
        "	str r0, [r4, #0x10]\n"
        "	ldr r0, =0x081009DC\n"
        "_L_0809454E:\n"
        "	str r0, [r4, #8]\n"
        "_L_08094550:\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "lr", "memory"
    );
}

/* 0x080945B0 (152B) | code_0803EE94_8028_vfunc_B8 (orig: func_080945B0) | origin: pending_asm | domain: code_0803EE94_8028 | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_080945B0 @ 0x080945B0 (152 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r1)
 * Fields : +0x00:u32(R), +0x08:u32(W), +0x0C:u8(R), +0x10:u32(W), +0x3C:u32(R), +0x40:u32(R), +0x44:u32(R), +0x48:u32(R), +0x5C:u32(R)
 * Callees: func_080D3910
 * CFG Structure:
 *   L_080945B0: if (!=) goto L_080945C2
 *   L_080945C2: call _call_via_r1(); if (==) goto L_0809463C
 *   L_080945EC: call _call_via_r1(); if (==) goto L_08094608
 *   L_08094608: if (!=) goto L_0809461C
 *   L_0809461C: call _call_via_r1(); if (!=) goto L_08094638
 *   L_0809463C: return
 * ========================================================================== */
extern void func_080D3910(void);
void func_080945B0(void) {

    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	cmp r1, #1\n"
        "	bne _L_080945C2\n"
        "	ldr r0, [r4]\n"
        "	ldr r1, [r0, #0x3c]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "_L_080945C2:\n"
        "	ldr r0, [r4]\n"
        "	ldr r1, [r0, #0x40]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_0809463C\n"
        "	ldr r0, [r4]\n"
        "	ldr r1, [r0, #0x48]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_080945EC\n"
        "	ldr r0, .Lpool_080945E8\n"
        "	b _L_0809463A\n"
        "	.align 2, 0\n"
        ".Lpool_080945E8:\n"
        "	.word 0x08100A04\n"
        "_L_080945EC:\n"
        "	ldr r0, [r4]\n"
        "	ldr r1, [r0, #0x44]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_08094608\n"
        "	mov r0, #1\n"
        "	str r0, [r4, #0x10]\n"
        "	ldr r0, .Lpool_08094604\n"
        "	b _L_0809463A\n"
        "	.align 2, 0\n"
        ".Lpool_08094604:\n"
        "	.word 0x081009DC\n"
        "_L_08094608:\n"
        "	ldrb r0, [r4, #0xc]\n"
        "	cmp r0, #0\n"
        "	bne _L_0809461C\n"
        "	mov r0, #1\n"
        "	str r0, [r4, #0x10]\n"
        "	ldr r0, .Lpool_08094618\n"
        "	b _L_0809463A\n"
        "	.align 2, 0\n"
        ".Lpool_08094618:\n"
        "	.word 0x081009DC\n"
        "_L_0809461C:\n"
        "	ldr r0, [r4]\n"
        "	ldr r1, [r0, #0x5c]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08094638\n"
        "	mov r0, #2\n"
        "	str r0, [r4, #0x10]\n"
        "	ldr r0, .Lpool_08094634\n"
        "	b _L_0809463A\n"
        "	.align 2, 0\n"
        ".Lpool_08094634:\n"
        "	.word 0x081009DC\n"
        "_L_08094638:\n"
        "	ldr r0, =0x081009B4\n"
        "_L_0809463A:\n"
        "	str r0, [r4, #8]\n"
        "_L_0809463C:\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "lr", "memory"
    );
}

