/* Pending CFG->C Lift: code_0803EE94_7DF4 (9 functions) */
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

/* 0x08093308 (92B) | code_0803EE94_7DF4_Ctor (orig: func_08093308) | origin: pending_asm | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_08093308 @ 0x08093308 (92 bytes)
 * Role   : C++ Class Constructor / Polymorphic Method [vtable: 0x080E7DF4, 0x080E7F00, 0x080E7F0C]
 * Fields : +0x00:u32(R), +0x04:u32(W), +0x08:u32(W)
 * Callees: func_080086BC, func_08050D0C, func_08094268, func_08094814, func_080D02EC
 * CFG Structure:
 *   L_08093308: call func_08050D0C(); if (==) goto L_08093334
 *   L_08093334: call func_080D02EC(); call func_08094268(); call func_080086BC(); return
 * ========================================================================== */
extern void func_080086BC(void);
extern void func_08050D0C(void);
extern void func_08094268(void);
extern void func_08094814(void);
extern void func_080D02EC(void);
void func_08093308(void) {

    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	add r6, r1, #0\n"
        "	ldr r0, =0x080E7DF4\n"
        "	str r0, [r5, #8]\n"
        "	ldr r0, =0x080E7F00\n"
        "	str r0, [r5, #4]\n"
        "	mov r1, #0xe8\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r5, r1\n"
        "	mov r1, #2\n"
        "	bl func_08050D0C\n"
        "	mov r1, #0xe4\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_08093334\n"
        "	mov r1, #3\n"
        "	bl func_08094814\n"
        "_L_08093334:\n"
        "	add r4, r5, #0\n"
        "	add r4, #8\n"
        "	ldr r0, =0x080E7F0C\n"
        "	str r0, [r5, #8]\n"
        "	bl func_080D02EC\n"
        "	add r0, r4, #0\n"
        "	mov r1, #0\n"
        "	bl func_08094268\n"
        "	add r0, r5, #0\n"
        "	add r1, r6, #0\n"
        "	bl func_080086BC\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
}

/* 0x080D078C (400B) | code_0803EE94_7DF4_HW_IO_0x158 (orig: func_080D078C) | origin: pending_asm | domain: code_0803EE94_7DF4 | MEDIUM / tu_interp */
/* ==========================================================================
 * [FSM-LIFTER] func_080D078C @ 0x080D078C (400 bytes)
 * Role   : C/C++ Switch Dispatcher (5 jump-table cases)
 * Fields : +0x00:u16(W), +0x00:u32(RW), +0x00:u8(RW), +0x01:u8(RW), +0x02:u8(RW), +0x03:u8(RW), +0x04:u32(RW), +0x08:u32(RW), +0x10:u32(R), +0x18:u32(R), +0x1C:u16(RW)
 * Callees: func_080D0A74
 * CFG Structure:
 *   L_080D078C: if (<= (u)) goto L_080D07A0
 *   L_080D07C8: if (> (u)) goto L_080D07D2
 *   L_080D07D2: if (==) goto L_080D07D8
 *   L_080D07D8: if (==) goto L_080D07EC
 *   L_080D07F2: call func_080D0A74(); goto L_080D0910
 *   L_080D07FC: if (==) goto L_080D0836
 *   L_080D080E: if (!=) goto L_080D0828
 *   L_080D0828: if (!=) goto L_080D0910
 *   L_080D0830: if (==) goto L_080D07F2
 *   L_080D0836: goto L_080D0912
 * ========================================================================== */
extern void func_080D0A74(void);
int func_080D078C(void) {
    u32 sp0, sp1;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1));
    __asm__ volatile(
        "	add r3, r0, #0\n"
        "	ldr r0, .Lpool_080D07AC\n"
        "	ldr r2, [r0]\n"
        "	ldr r1, [r2]\n"
        "	add r5, r0, #0\n"
        "	cmp r1, #4\n"
        "	bls _L_080D07A0\n"
        "	b _L_080D090C\n"
        "_L_080D07A0:\n"
        "	ldr r0, [r2]\n"
        "	lsl r0, r0, #2\n"
        "	ldr r1, .Lpool_080D07B0\n"
        "	add r0, r0, r1\n"
        "	ldr r0, [r0]\n"
        "	mov pc, r0\n"
        "	.align 2, 0\n"
        ".Lpool_080D07AC:\n"
        "	.word 0x0300041C\n"
        ".Lpool_080D07B0:\n"
        "	.word _Ljt_080D07B4\n"
        "_Ljt_080D07B4:\n"
        "	.word _L_080D0910\n"
        "	.word _L_080D07C8\n"
        "	.word _L_080D07FC\n"
        "	.word _L_080D083A\n"
        "	.word _L_080D07FC\n"
        "_L_080D07C8:\n"
        "	ldr r0, [r5]\n"
        "	ldr r0, [r0, #4]\n"
        "	cmp r0, #1\n"
        "	bhi _L_080D07D2\n"
        "	b _L_080D0910\n"
        "_L_080D07D2:\n"
        "	cmp r0, #2\n"
        "	beq _L_080D07D8\n"
        "	b _L_080D0910\n"
        "_L_080D07D8:\n"
        "	ldr r0, .Lpool_080D07E8\n"
        "	ldr r0, [r0]\n"
        "	ldr r1, [r3]\n"
        "	ldr r0, [r0, #8]\n"
        "	cmp r1, r0\n"
        "	beq _L_080D07EC\n"
        "	mov r0, #1\n"
        "	b _L_080D0912\n"
        "	.align 2, 0\n"
        ".Lpool_080D07E8:\n"
        "	.word 0x03000420\n"
        "_L_080D07EC:\n"
        "	ldr r1, .Lpool_080D07F8\n"
        "	mov r0, #0x30\n"
        "	strh r0, [r1]\n"
        "_L_080D07F2:\n"
        "	bl func_080D0A74\n"
        "	b _L_080D0910\n"
        "	.align 2, 0\n"
        ".Lpool_080D07F8:\n"
        "	.word 0x04000158\n"
        "_L_080D07FC:\n"
        "	ldr r4, [r5]\n"
        "	ldr r0, [r4, #4]\n"
        "	cmp r0, #1\n"
        "	beq _L_080D0836\n"
        "	cmp r0, #1\n"
        "	blo _L_080D080E\n"
        "	cmp r0, #2\n"
        "	beq _L_080D0830\n"
        "	b _L_080D0910\n"
        "_L_080D080E:\n"
        "	ldrb r0, [r3]\n"
        "	cmp r0, #0x42\n"
        "	bne _L_080D0828\n"
        "	ldrb r0, [r3, #2]\n"
        "	ldrb r1, [r3, #3]\n"
        "	lsl r1, r1, #8\n"
        "	orr r0, r1\n"
        "	ldr r1, [r4, #0x18]\n"
        "	cmp r0, r1\n"
        "	bne _L_080D0860\n"
        "	mov r1, sp\n"
        "	mov r2, #0x43\n"
        "	b _L_080D08EC\n"
        "_L_080D0828:\n"
        "	cmp r0, #0x41\n"
        "	bne _L_080D0910\n"
        "	mov r0, #5\n"
        "	b _L_080D0912\n"
        "_L_080D0830:\n"
        "	ldrb r0, [r3]\n"
        "	cmp r0, #0x46\n"
        "	beq _L_080D07F2\n"
        "_L_080D0836:\n"
        "	mov r0, #7\n"
        "	b _L_080D0912\n"
        "_L_080D083A:\n"
        "	ldr r4, [r5]\n"
        "	ldr r0, [r4, #4]\n"
        "	cmp r0, #1\n"
        "	beq _L_080D0872\n"
        "	cmp r0, #1\n"
        "	blo _L_080D084C\n"
        "	cmp r0, #2\n"
        "	beq _L_080D0908\n"
        "	b _L_080D0910\n"
        "_L_080D084C:\n"
        "	ldrb r0, [r3]\n"
        "	cmp r0, #0x41\n"
        "	bne _L_080D086A\n"
        "	ldrb r0, [r3, #2]\n"
        "	ldrb r1, [r3, #3]\n"
        "	lsl r1, r1, #8\n"
        "	orr r0, r1\n"
        "	ldr r1, [r4, #0x18]\n"
        "	cmp r0, r1\n"
        "	beq _L_080D0864\n"
        "_L_080D0860:\n"
        "	mov r0, #4\n"
        "	b _L_080D0912\n"
        "_L_080D0864:\n"
        "	mov r1, sp\n"
        "	mov r2, #0x43\n"
        "	b _L_080D08EC\n"
        "_L_080D086A:\n"
        "	cmp r0, #0x42\n"
        "	bne _L_080D0910\n"
        "	mov r0, #6\n"
        "	b _L_080D0912\n"
        "_L_080D0872:\n"
        "	ldr r1, [r4, #8]\n"
        "	ldr r0, [r4, #0x18]\n"
        "	cmp r1, r0\n"
        "	bhs _L_080D08D0\n"
        "	ldrb r0, [r3]\n"
        "	cmp r0, #0x44\n"
        "	bne _L_080D0908\n"
        "	ldrb r0, [r3, #1]\n"
        "	ldr r1, [r4, #8]\n"
        "	mov r2, #0xff\n"
        "	and r1, r2\n"
        "	cmp r0, r1\n"
        "	bne _L_080D0908\n"
        "	ldr r0, [r4, #8]\n"
        "	lsl r0, r0, #1\n"
        "	ldr r1, [r4, #0x10]\n"
        "	add r0, r0, r1\n"
        "	ldrb r1, [r3, #2]\n"
        "	strb r1, [r0]\n"
        "	ldrb r1, [r3, #3]\n"
        "	strb r1, [r0, #1]\n"
        "	ldr r2, [r5]\n"
        "	ldr r0, [r2, #8]\n"
        "	lsl r0, r0, #1\n"
        "	ldr r1, [r2, #0x10]\n"
        "	add r0, r0, r1\n"
        "	ldrb r1, [r0]\n"
        "	ldrb r0, [r0, #1]\n"
        "	lsl r0, r0, #8\n"
        "	orr r1, r0\n"
        "	ldrh r0, [r2, #0x1c]\n"
        "	add r1, r1, r0\n"
        "	strh r1, [r2, #0x1c]\n"
        "	ldr r0, [r2, #8]\n"
        "	add r0, #1\n"
        "	str r0, [r2, #8]\n"
        "	ldr r0, .Lpool_080D08CC\n"
        "	ldr r1, [r0]\n"
        "	mov r0, #0xc2\n"
        "	lsl r0, r0, #1\n"
        "	add r1, r1, r0\n"
        "	ldr r0, [r1]\n"
        "	add r0, #1\n"
        "	str r0, [r1]\n"
        "	b _L_080D0910\n"
        "	.align 2, 0\n"
        ".Lpool_080D08CC:\n"
        "	.word 0x03000420\n"
        "_L_080D08D0:\n"
        "	ldrb r0, [r3]\n"
        "	cmp r0, #0x45\n"
        "	bne _L_080D0908\n"
        "	ldrb r0, [r3, #2]\n"
        "	ldrb r1, [r3, #3]\n"
        "	lsl r1, r1, #8\n"
        "	orr r0, r1\n"
        "	ldrh r1, [r4, #0x1c]\n"
        "	cmp r1, r0\n"
        "	beq _L_080D08E8\n"
        "	mov r0, #3\n"
        "	b _L_080D0912\n"
        "_L_080D08E8:\n"
        "	mov r1, sp\n"
        "	mov r2, #0x46\n"
        "_L_080D08EC:\n"
        "	mov r0, #0\n"
        "	strb r2, [r1]\n"
        "	strb r0, [r1, #1]\n"
        "	strb r0, [r1, #2]\n"
        "	strb r0, [r1, #3]\n"
        "	ldr r1, .Lpool_080D0904\n"
        "	ldr r0, [sp]\n"
        "	str r0, [r1]\n"
        "	ldr r0, [r4, #4]\n"
        "	add r0, #1\n"
        "	str r0, [r4, #4]\n"
        "	b _L_080D0910\n"
        "	.align 2, 0\n"
        ".Lpool_080D0904:\n"
        "	.word 0x04000154\n"
        "_L_080D0908:\n"
        "	mov r0, #8\n"
        "	b _L_080D0912\n"
        "_L_080D090C:\n"
        "	mov r0, #9\n"
        "	b _L_080D0912\n"
        "_L_080D0910:\n"
        "	mov r0, #0\n"
        "_L_080D0912:\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
    return __ret;
}

/* 0x080D091C (248B) | code_0803EE94_7DF4_HW_IO_0x154 (orig: func_080D091C) | origin: pending_asm | domain: code_0803EE94_7DF4 | MEDIUM / tu_interp */
/* ==========================================================================
 * [FSM-LIFTER] func_080D091C @ 0x080D091C (248 bytes)
 * Role   : C/C++ Switch Dispatcher (5 jump-table cases)
 * Fields : +0x00:u32(RW), +0x00:u8(RW), +0x01:u8(RW), +0x02:u8(W), +0x03:u8(W), +0x04:u32(RW), +0x08:u32(RW), +0x10:u32(R), +0x18:u32(R), +0x1C:u16(RW)
 * Callees: func_080D0A74
 * CFG Structure:
 *   L_080D091C: if (> (u)) goto L_080D0A06
 *   L_080D0954: if (!=) goto L_080D0A0A
 *   L_080D0964: if (!=) goto L_080D0A0A
 *   L_080D09D0: goto L_080D0A0A
 *   L_080D09F4: if (<= (u)) goto L_080D0A0A
 *   L_080D0A06: goto L_080D0A0C
 *   L_080D0A0C: return
 * ========================================================================== */
extern void func_080D0A74(void);
int func_080D091C(void) {
    u32 sp0;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0));
    __asm__ volatile(
        "	ldr r0, .Lpool_080D0938\n"
        "	ldr r2, [r0]\n"
        "	ldr r1, [r2]\n"
        "	add r3, r0, #0\n"
        "	cmp r1, #4\n"
        "	bhi _L_080D0A06\n"
        "	ldr r0, [r2]\n"
        "	lsl r0, r0, #2\n"
        "	ldr r1, .Lpool_080D093C\n"
        "	add r0, r0, r1\n"
        "	ldr r0, [r0]\n"
        "	mov pc, r0\n"
        "	.align 2, 0\n"
        ".Lpool_080D0938:\n"
        "	.word 0x0300041C\n"
        ".Lpool_080D093C:\n"
        "	.word _Ljt_080D0940\n"
        "_Ljt_080D0940:\n"
        "	.word _L_080D0A0A\n"
        "	.word _L_080D0954\n"
        "	.word _L_080D0964\n"
        "	.word _L_080D09F4\n"
        "	.word _L_080D0964\n"
        "_L_080D0954:\n"
        "	ldr r1, [r3]\n"
        "	ldr r0, [r1, #4]\n"
        "	cmp r0, #1\n"
        "	bne _L_080D0A0A\n"
        "	ldr r0, [r1, #4]\n"
        "	add r0, #1\n"
        "	str r0, [r1, #4]\n"
        "	b _L_080D0A0A\n"
        "_L_080D0964:\n"
        "	ldr r5, [r3]\n"
        "	ldr r0, [r5, #4]\n"
        "	cmp r0, #1\n"
        "	bne _L_080D0A0A\n"
        "	ldr r1, [r5, #8]\n"
        "	ldr r0, [r5, #0x18]\n"
        "	cmp r1, r0\n"
        "	bhs _L_080D09D0\n"
        "	ldr r1, [r5, #8]\n"
        "	mov r2, sp\n"
        "	mov r3, #0x44\n"
        "	ldr r4, [r5, #8]\n"
        "	lsl r1, r1, #1\n"
        "	ldr r0, [r5, #0x10]\n"
        "	add r1, r1, r0\n"
        "	strb r3, [r2]\n"
        "	strb r4, [r2, #1]\n"
        "	ldrb r0, [r1]\n"
        "	strb r0, [r2, #2]\n"
        "	ldrb r0, [r1, #1]\n"
        "	strb r0, [r2, #3]\n"
        "	ldr r0, [r5, #8]\n"
        "	lsl r0, r0, #1\n"
        "	ldr r1, [r5, #0x10]\n"
        "	add r0, r0, r1\n"
        "	ldrb r1, [r0]\n"
        "	ldrb r0, [r0, #1]\n"
        "	lsl r0, r0, #8\n"
        "	orr r1, r0\n"
        "	ldrh r0, [r5, #0x1c]\n"
        "	add r1, r1, r0\n"
        "	strh r1, [r5, #0x1c]\n"
        "	ldr r1, .Lpool_080D09C8\n"
        "	ldr r0, [sp]\n"
        "	str r0, [r1]\n"
        "	ldr r0, [r5, #8]\n"
        "	add r0, #1\n"
        "	str r0, [r5, #8]\n"
        "	ldr r0, [r5]\n"
        "	cmp r0, #4\n"
        "	beq _L_080D0A0A\n"
        "	ldr r0, .Lpool_080D09CC\n"
        "	ldr r1, [r0]\n"
        "	mov r0, #0xc2\n"
        "	lsl r0, r0, #1\n"
        "	add r1, r1, r0\n"
        "	ldr r0, [r1]\n"
        "	add r0, #1\n"
        "	str r0, [r1]\n"
        "	b _L_080D0A0A\n"
        "	.align 2, 0\n"
        ".Lpool_080D09C8:\n"
        "	.word 0x04000154\n"
        ".Lpool_080D09CC:\n"
        "	.word 0x03000420\n"
        "_L_080D09D0:\n"
        "	ldrh r2, [r5, #0x1c]\n"
        "	mov r1, sp\n"
        "	mov r0, #0x45\n"
        "	strb r0, [r1]\n"
        "	mov r0, #0\n"
        "	strb r0, [r1, #1]\n"
        "	strb r2, [r1, #2]\n"
        "	lsr r2, r2, #8\n"
        "	strb r2, [r1, #3]\n"
        "	ldr r1, .Lpool_080D09F0\n"
        "	ldr r0, [sp]\n"
        "	str r0, [r1]\n"
        "	ldr r0, [r5, #4]\n"
        "	add r0, #1\n"
        "	str r0, [r5, #4]\n"
        "	b _L_080D0A0A\n"
        "	.align 2, 0\n"
        ".Lpool_080D09F0:\n"
        "	.word 0x04000154\n"
        "_L_080D09F4:\n"
        "	ldr r0, [r3]\n"
        "	ldr r0, [r0, #4]\n"
        "	cmp r0, #1\n"
        "	bls _L_080D0A0A\n"
        "	cmp r0, #2\n"
        "	bne _L_080D0A0A\n"
        "	bl func_080D0A74\n"
        "	b _L_080D0A0A\n"
        "_L_080D0A06:\n"
        "	mov r0, #9\n"
        "	b _L_080D0A0C\n"
        "_L_080D0A0A:\n"
        "	mov r0, #0\n"
        "_L_080D0A0C:\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
    return __ret;
}

/* 0x080E36B4 (124B) | code_0803EE94_7DF4_vfunc_AC (orig: func_080E36B4) | origin: pending_asm | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_080E36B4 @ 0x080E36B4 (124 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW)
 * Callees: func_08050D34, func_08050DF0, func_08050E30
 * CFG Structure:
 *   L_080E36B4: if (==) goto L_080E36CC
 *   L_080E36CC: call func_08050D34(); if (!=) goto L_080E3726
 *   L_080E3700: call func_08050D34(); if (!=) goto L_080E3726
 *   L_080E3720: goto L_080E3726
 *   L_080E3726: return
 * ========================================================================== */
extern void func_08050D34(void);
extern void func_08050DF0(void);
extern void func_08050E30(void);
int func_080E36B4(void) {
    u32 sp0, sp1, sp2;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2));
    __asm__ volatile(
        "	mov r6, #0\n"
        "	mov r1, #0xf7\n"
        "	lsl r1, r1, #2\n"
        "	add r4, r0, r1\n"
        "	ldr r1, [r4]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E36CC\n"
        "	cmp r1, #1\n"
        "	beq _L_080E3700\n"
        "	b _L_080E3726\n"
        "_L_080E36CC:\n"
        "	mov r1, #0xe4\n"
        "	lsl r1, r1, #1\n"
        "	add r5, r0, r1\n"
        "	add r0, r5, #0\n"
        "	bl func_08050D34\n"
        "	cmp r0, #3\n"
        "	bne _L_080E3726\n"
        "	mov r0, #1\n"
        "	str r0, [r4]\n"
        "	ldr r1, .Lpool_080E36F4\n"
        "	ldr r2, .Lpool_080E36F8\n"
        "	ldr r3, .Lpool_080E36FC\n"
        "	str r6, [sp]\n"
        "	str r6, [sp, #4]\n"
        "	str r6, [sp, #8]\n"
        "	add r0, r5, #0\n"
        "	bl func_08050E30\n"
        "	b _L_080E3726\n"
        "	.align 2, 0\n"
        ".Lpool_080E36F4:\n"
        "	.word 0x08100588\n"
        ".Lpool_080E36F8:\n"
        "	.word 0x0810058C\n"
        ".Lpool_080E36FC:\n"
        "	.word 0x08100590\n"
        "_L_080E3700:\n"
        "	mov r1, #0xe4\n"
        "	lsl r1, r1, #1\n"
        "	add r4, r0, r1\n"
        "	add r0, r4, #0\n"
        "	bl func_08050D34\n"
        "	cmp r0, #3\n"
        "	bne _L_080E3726\n"
        "	add r0, r4, #0\n"
        "	bl func_08050DF0\n"
        "	cmp r0, #1\n"
        "	beq _L_080E3720\n"
        "	cmp r0, #2\n"
        "	beq _L_080E3724\n"
        "	b _L_080E3726\n"
        "_L_080E3720:\n"
        "	mov r6, #2\n"
        "	b _L_080E3726\n"
        "_L_080E3724:\n"
        "	mov r6, #3\n"
        "_L_080E3726:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* 0x080E3874 (60B) | code_0803EE94_7DF4_vfunc_5C (orig: func_080E3874) | origin: pending_asm | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_080E3874 @ 0x080E3874 (60 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r1)
 * Fields : +0x00:u32(R), +0x00:u8(R), +0x4C:u32(R)
 * Callees: func_080D3910
 * CFG Structure:
 *   L_080E3874: if (==) goto L_080E3896
 *   L_080E3892: goto L_080E38AA
 *   L_080E3896: call _call_via_r1(); if (!=) goto L_080E38A8
 *   L_080E38AA: return
 * ========================================================================== */
extern void func_080D3910(void);
void func_080E3874(void) {
    __asm__ volatile(
        "	push {lr}\n"
        "	add r2, r0, #0\n"
        "	mov r1, #0xdc\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r2, r1\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E3896\n"
        "	add r1, #3\n"
        "	add r0, r2, r1\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E3892\n"
        "	mov r0, #0\n"
        "	b _L_080E38AA\n"
        "_L_080E3892:\n"
        "	mov r0, #1\n"
        "	b _L_080E38AA\n"
        "_L_080E3896:\n"
        "	ldr r0, [r2]\n"
        "	ldr r1, [r0, #0x4c]\n"
        "	add r0, r2, #0\n"
        "	bl func_080D3910\n"
        "	mov r1, #0\n"
        "	cmp r0, #0\n"
        "	bne _L_080E38A8\n"
        "	mov r1, #1\n"
        "_L_080E38A8:\n"
        "	add r0, r1, #0\n"
        "_L_080E38AA:\n"
        "	pop {r1}\n"
        "	bx r1\n"
        "	.hword 0x0000\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* 0x080E38E0 (48B) | code_0803EE94_7DF4_vfunc_54 (orig: func_080E38E0) | origin: pending_asm | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_080E38E0 @ 0x080E38E0 (48 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r1)
 * Fields : +0x00:u32(R), +0x00:u8(R), +0x4C:u32(R)
 * Callees: func_080D3910
 * CFG Structure:
 *   L_080E38E0: if (==) goto L_080E38F8
 *   L_080E38F8: call _call_via_r1(); if (==) goto L_080E390A
 *   L_080E390C: return
 * ========================================================================== */
extern void func_080D3910(void);
void func_080E38E0(void) {
    __asm__ volatile(
        "	push {lr}\n"
        "	add r2, r0, #0\n"
        "	mov r1, #0xdc\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r2, r1\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E38F8\n"
        "	add r1, #1\n"
        "	add r0, r2, r1\n"
        "	ldrb r0, [r0]\n"
        "	b _L_080E390C\n"
        "_L_080E38F8:\n"
        "	ldr r0, [r2]\n"
        "	ldr r1, [r0, #0x4c]\n"
        "	add r0, r2, #0\n"
        "	bl func_080D3910\n"
        "	cmp r0, #0\n"
        "	beq _L_080E390A\n"
        "	mov r0, #0\n"
        "	b _L_080E390C\n"
        "_L_080E390A:\n"
        "	mov r0, #1\n"
        "_L_080E390C:\n"
        "	pop {r1}\n"
        "	bx r1\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* 0x080E3938 (92B) | code_0803EE94_7DF4_vfunc_48 (orig: func_080E3938) | origin: pending_asm | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_080E3938 @ 0x080E3938 (92 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r1)
 * Fields : +0x00:u32(R), +0x00:u8(R)
 * Callees: func_080D06D0, func_080D3910
 * CFG Structure:
 *   L_080E3938: if (==) goto L_080E397A
 *   L_080E397A: call func_080D06D0(); if (==) goto L_080E3986
 *   L_080E3986: goto L_080E398C
 *   L_080E398C: return
 * ========================================================================== */
extern void func_080D06D0(void);
extern void func_080D3910(void);
int func_080E3938(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	mov r1, #0xdc\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r4, r1\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E397A\n"
        "	ldr r0, [r4]\n"
        "	sub r1, #0xb4\n"
        "	add r0, r0, r1\n"
        "	ldr r1, [r0]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsr r0, r0, #8\n"
        "	mov r1, #1\n"
        "	and r1, r0\n"
        "	cmp r1, #0\n"
        "	bne _L_080E3986\n"
        "	ldr r0, [r4]\n"
        "	mov r1, #0x82\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r0, r1\n"
        "	ldr r1, [r0]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsr r0, r0, #8\n"
        "	mov r1, #2\n"
        "	and r1, r0\n"
        "	cmp r1, #0\n"
        "	bne _L_080E398A\n"
        "_L_080E397A:\n"
        "	bl func_080D06D0\n"
        "	cmp r0, #0\n"
        "	beq _L_080E3986\n"
        "	cmp r0, #0xb\n"
        "	bne _L_080E398A\n"
        "_L_080E3986:\n"
        "	mov r0, #0\n"
        "	b _L_080E398C\n"
        "_L_080E398A:\n"
        "	mov r0, #1\n"
        "_L_080E398C:\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "lr", "memory"
    );
    return __ret;
}

/* 0x080E3994 (88B) | code_0803EE94_7DF4_vfunc_44 (orig: func_080E3994) | origin: pending_asm | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_080E3994 @ 0x080E3994 (88 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r1)
 * Fields : +0x00:u32(R), +0x00:u8(R)
 * Callees: func_080D06D0, func_080D3910
 * CFG Structure:
 *   L_080E3994: if (==) goto L_080E39D6
 *   L_080E39D6: call func_080D06D0(); if (==) goto L_080E39E2
 *   L_080E39DE: goto L_080E39E4
 *   L_080E39E4: return
 * ========================================================================== */
extern void func_080D06D0(void);
extern void func_080D3910(void);
int func_080E3994(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	mov r1, #0xdc\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r4, r1\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E39D6\n"
        "	ldr r0, [r4]\n"
        "	sub r1, #0xb0\n"
        "	add r0, r0, r1\n"
        "	ldr r1, [r0]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsr r0, r0, #8\n"
        "	mov r1, #1\n"
        "	and r1, r0\n"
        "	cmp r1, #0\n"
        "	bne _L_080E39DE\n"
        "	ldr r0, [r4]\n"
        "	mov r1, #0x84\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r0, r1\n"
        "	ldr r1, [r0]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsr r0, r0, #8\n"
        "	mov r1, #2\n"
        "	and r1, r0\n"
        "	cmp r1, #0\n"
        "	bne _L_080E39DE\n"
        "_L_080E39D6:\n"
        "	bl func_080D06D0\n"
        "	cmp r0, #0xb\n"
        "	beq _L_080E39E2\n"
        "_L_080E39DE:\n"
        "	mov r0, #0\n"
        "	b _L_080E39E4\n"
        "_L_080E39E2:\n"
        "	mov r0, #1\n"
        "_L_080E39E4:\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "lr", "memory"
    );
    return __ret;
}

/* 0x080E39EC (88B) | code_0803EE94_7DF4_vfunc_40 (orig: func_080E39EC) | origin: pending_asm | domain: code_0803EE94_7DF4 | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_080E39EC @ 0x080E39EC (88 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r1)
 * Fields : +0x00:u32(R), +0x00:u8(R)
 * Callees: func_080D06B4, func_080D3910
 * CFG Structure:
 *   L_080E39EC: if (==) goto L_080E3A32
 *   L_080E3A2E: goto L_080E3A3E
 *   L_080E3A32: call func_080D06B4()
 *   L_080E3A3E: return
 * ========================================================================== */
extern void func_080D06B4(void);
extern void func_080D3910(void);
int func_080E39EC(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	mov r1, #0xdc\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r4, r1\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E3A32\n"
        "	ldr r0, [r4]\n"
        "	sub r1, #0xb0\n"
        "	add r0, r0, r1\n"
        "	ldr r1, [r0]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsr r0, r0, #8\n"
        "	mov r1, #1\n"
        "	and r1, r0\n"
        "	cmp r1, #0\n"
        "	bne _L_080E3A2E\n"
        "	ldr r0, [r4]\n"
        "	mov r1, #0x84\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r0, r1\n"
        "	ldr r1, [r0]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsr r0, r0, #8\n"
        "	mov r1, #2\n"
        "	and r1, r0\n"
        "	cmp r1, #0\n"
        "	beq _L_080E3A32\n"
        "_L_080E3A2E:\n"
        "	mov r0, #1\n"
        "	b _L_080E3A3E\n"
        "_L_080E3A32:\n"
        "	bl func_080D06B4\n"
        "	add r1, r0, #0\n"
        "	neg r0, r1\n"
        "	orr r0, r1\n"
        "	lsr r0, r0, #0x1f\n"
        "_L_080E3A3E:\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "lr", "memory"
    );
    return __ret;
}

