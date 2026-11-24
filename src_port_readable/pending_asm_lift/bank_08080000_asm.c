/* Pending CFG->C Lift: bank_08080000 (3 functions) */
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

/* 0x08081108 (68B) | Article_Sub_08081108 (orig: func_08081108) | origin: pending_asm | domain: Article | MEDIUM / graph_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_08081108 @ 0x08081108 (68 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R)
 * Callees: func_0800DF50, func_0800DFD4, func_080CABEC
 * CFG Structure:
 *   L_08081108: if (==) goto L_08081138
 *   L_08081138: call func_080CABEC()
 *   L_08081140: return
 * ========================================================================== */
extern void func_0800DF50(void);
extern void func_0800DFD4(void);
extern void func_080CABEC(void);
void func_08081108(void) {
    u32 sp0;
    __asm__ volatile("" : : "m"(sp0));
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	add r0, r1, #0\n"
        "	cmp r0, #0xa\n"
        "	beq _L_08081138\n"
        "	ldr r1, .Lpool_08081134\n"
        "	lsl r0, r0, #3\n"
        "	add r0, r0, r1\n"
        "	ldr r1, [r0]\n"
        "	mov r0, sp\n"
        "	bl func_0800DF50\n"
        "	mov r0, sp\n"
        "	bl func_0800DFD4\n"
        "	add r1, r0, #0\n"
        "	add r0, r4, #0\n"
        "	bl func_080CABEC\n"
        "	b _L_08081140\n"
        "	.align 2, 0\n"
        ".Lpool_08081134:\n"
        "	.word 0x080FE8FC\n"
        "_L_08081138:\n"
        "	ldr r1, =0x080FE974\n"
        "	add r0, r4, #0\n"
        "	bl func_080CABEC\n"
        "_L_08081140:\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "lr", "memory"
    );
}

/* 0x08082C14 (96B) | Tool_Sub_08082C14 (orig: func_08082C14) | origin: pending_asm | domain: Tool | MEDIUM / graph_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_08082C14 @ 0x08082C14 (96 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R)
 * Callees: func_0800DB2C, func_0800DB8C, func_080CABEC
 * CFG Structure:
 *   L_08082C14: if (==) goto L_08082C4A
 *   L_08082C44: if (> (s)) goto L_08082C6C
 *   L_08082C4A: call func_0800DB2C(); call func_0800DB8C(); call func_080CABEC(); goto L_08082C6C
 *   L_08082C64: call func_080CABEC()
 *   L_08082C6C: return
 * ========================================================================== */
extern void func_0800DB2C(void);
extern void func_0800DB8C(void);
extern void func_080CABEC(void);
void func_08082C14(void) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5;
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5));
    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	lsl r0, r1, #2\n"
        "	add r0, r0, r1\n"
        "	lsl r0, r0, #2\n"
        "	ldr r1, .Lpool_08082C40\n"
        "	add r2, r0, r1\n"
        "	mov r1, sp\n"
        "	add r0, r2, #0\n"
        "	ldm r0!, {r3, r4, r6}\n"
        "	stm r1!, {r3, r4, r6}\n"
        "	ldm r0!, {r3, r4}\n"
        "	stm r1!, {r3, r4}\n"
        "	ldr r0, [sp, #0xc]\n"
        "	cmp r0, #1\n"
        "	beq _L_08082C4A\n"
        "	cmp r0, #1\n"
        "	bgt _L_08082C44\n"
        "	cmp r0, #0\n"
        "	beq _L_08082C64\n"
        "	b _L_08082C6C\n"
        "	.align 2, 0\n"
        ".Lpool_08082C40:\n"
        "	.word 0x080FED8C\n"
        "_L_08082C44:\n"
        "	cmp r0, #3\n"
        "	bgt _L_08082C6C\n"
        "	b _L_08082C64\n"
        "_L_08082C4A:\n"
        "	add r4, sp, #0x14\n"
        "	ldr r1, [r2]\n"
        "	add r0, r4, #0\n"
        "	bl func_0800DB2C\n"
        "	add r0, r4, #0\n"
        "	bl func_0800DB8C\n"
        "	add r1, r0, #0\n"
        "	add r0, r5, #0\n"
        "	bl func_080CABEC\n"
        "	b _L_08082C6C\n"
        "_L_08082C64:\n"
        "	ldr r1, [sp, #0x10]\n"
        "	add r0, r5, #0\n"
        "	bl func_080CABEC\n"
        "_L_08082C6C:\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
}

/* 0x08082CEC (612B) | code_0803EE94_7CF4_Sub_08082CEC (orig: func_08082CEC) | origin: pending_asm | domain: code_0803EE94_7CF4 | MEDIUM / graph_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_08082CEC @ 0x08082CEC (612 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u16(W), +0x00:u32(RW), +0x04:u32(W), +0x08:u32(RW), +0x10:u32(R)
 * Callees: func_080005D4, func_08008724, func_08008918, func_08008940, func_08009300, func_0800934C, func_0800C560, func_0800C5C4, func_0800CE64, func_0800CF00
 * CFG Structure:
 *   L_08082CEC: call func_08008724(); call func_080C85A0(); if (> (u)) goto L_08082D22
 *   L_08082D22: call func_08082C74(); if (==) goto L_08082D50
 *   L_08082D50: call func_08082C74(); if (==) goto L_08082D7E
 *   L_08082D7E: call func_08082C74(); if (==) goto L_08082DAC
 *   L_08082DAC: call func_0800C560(); if (==) goto L_08082DEA
 *   L_08082DEA: call func_0800CE64(); if (==) goto L_08082E5E
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08008724(void);
extern void func_08008918(void);
extern void func_08008940(void);
extern void func_08009300(void);
extern void func_0800934C(void);
extern void func_0800C560(void);
extern void func_0800C5C4(void);
extern void func_0800CE64(void);
extern void func_0800CF00(void);
extern void func_0800CF08(void);
extern void func_0808268C(void);
extern void func_08082C14(void);
extern void func_08082C74(void);
extern void func_080C85A0(void);
extern void func_080D3914(void);
void func_08082CEC(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, r7, lr}\n"
        "	mov r7, sb\n"
        "	mov r6, r8\n"
        "	push {r6, r7}\n"
        "	sub sp, #0x50\n"
        "	add r7, r0, #0\n"
        "	bl func_08008724\n"
        "	add r0, r7, #0\n"
        "	bl func_080C85A0\n"
        "	mov r0, #0xa9\n"
        "	lsl r0, r0, #2\n"
        "	add r1, r7, r0\n"
        "	ldr r0, [r1]\n"
        "	cmp r0, #0x27\n"
        "	bhi _L_08082D22\n"
        "	lsl r0, r0, #2\n"
        "	add r0, #4\n"
        "	add r2, r1, r0\n"
        "	cmp r2, #0\n"
        "	beq _L_08082D1C\n"
        "	mov r0, #0\n"
        "	str r0, [r2]\n"
        "_L_08082D1C:\n"
        "	ldr r0, [r1]\n"
        "	add r0, #1\n"
        "	str r0, [r1]\n"
        "_L_08082D22:\n"
        "	add r0, r7, #0\n"
        "	mov r1, #0x46\n"
        "	bl func_08082C74\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_08082D50\n"
        "	mov r2, #0xa9\n"
        "	lsl r2, r2, #2\n"
        "	add r1, r7, r2\n"
        "	ldr r0, [r1]\n"
        "	cmp r0, #0x27\n"
        "	bhi _L_08082D50\n"
        "	lsl r0, r0, #2\n"
        "	add r0, #4\n"
        "	add r2, r1, r0\n"
        "	cmp r2, #0\n"
        "	beq _L_08082D4A\n"
        "	mov r0, #1\n"
        "	str r0, [r2]\n"
        "_L_08082D4A:\n"
        "	ldr r0, [r1]\n"
        "	add r0, #1\n"
        "	str r0, [r1]\n"
        "_L_08082D50:\n"
        "	add r0, r7, #0\n"
        "	mov r1, #0x47\n"
        "	bl func_08082C74\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_08082D7E\n"
        "	mov r3, #0xa9\n"
        "	lsl r3, r3, #2\n"
        "	add r1, r7, r3\n"
        "	ldr r0, [r1]\n"
        "	cmp r0, #0x27\n"
        "	bhi _L_08082D7E\n"
        "	lsl r0, r0, #2\n"
        "	add r0, #4\n"
        "	add r2, r1, r0\n"
        "	cmp r2, #0\n"
        "	beq _L_08082D78\n"
        "	mov r0, #2\n"
        "	str r0, [r2]\n"
        "_L_08082D78:\n"
        "	ldr r0, [r1]\n"
        "	add r0, #1\n"
        "	str r0, [r1]\n"
        "_L_08082D7E:\n"
        "	add r0, r7, #0\n"
        "	mov r1, #0x48\n"
        "	bl func_08082C74\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_08082DAC\n"
        "	mov r4, #0xa9\n"
        "	lsl r4, r4, #2\n"
        "	add r1, r7, r4\n"
        "	ldr r0, [r1]\n"
        "	cmp r0, #0x27\n"
        "	bhi _L_08082DAC\n"
        "	lsl r0, r0, #2\n"
        "	add r0, #4\n"
        "	add r2, r1, r0\n"
        "	cmp r2, #0\n"
        "	beq _L_08082DA6\n"
        "	mov r0, #3\n"
        "	str r0, [r2]\n"
        "_L_08082DA6:\n"
        "	ldr r0, [r1]\n"
        "	add r0, #1\n"
        "	str r0, [r1]\n"
        "_L_08082DAC:\n"
        "	ldr r0, [r7, #8]\n"
        "	mov r5, #0x82\n"
        "	lsl r5, r5, #3\n"
        "	add r0, r0, r5\n"
        "	bl func_0800C560\n"
        "	cmp r0, #0\n"
        "	beq _L_08082DEA\n"
        "	ldr r0, [r7, #8]\n"
        "	add r0, r0, r5\n"
        "	bl func_0800C5C4\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08082DEA\n"
        "	mov r6, #0xa9\n"
        "	lsl r6, r6, #2\n"
        "	add r1, r7, r6\n"
        "	ldr r0, [r1]\n"
        "	cmp r0, #0x27\n"
        "	bhi _L_08082DEA\n"
        "	lsl r0, r0, #2\n"
        "	add r0, #4\n"
        "	add r2, r1, r0\n"
        "	cmp r2, #0\n"
        "	beq _L_08082DE4\n"
        "	mov r0, #4\n"
        "	str r0, [r2]\n"
        "_L_08082DE4:\n"
        "	ldr r0, [r1]\n"
        "	add r0, #1\n"
        "	str r0, [r1]\n"
        "_L_08082DEA:\n"
        "	ldr r0, [r7, #8]\n"
        "	mov r1, #0xbe\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r0, r1\n"
        "	bl func_0800CE64\n"
        "	cmp r0, #0\n"
        "	beq _L_08082E5E\n"
        "	ldr r0, [r7, #8]\n"
        "	mov r2, #0xbe\n"
        "	lsl r2, r2, #3\n"
        "	add r0, r0, r2\n"
        "	bl func_0800CF00\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08082E2C\n"
        "	mov r3, #0xa9\n"
        "	lsl r3, r3, #2\n"
        "	add r1, r7, r3\n"
        "	ldr r0, [r1]\n"
        "	cmp r0, #0x27\n"
        "	bhi _L_08082E2C\n"
        "	lsl r0, r0, #2\n"
        "	add r0, #4\n"
        "	add r2, r1, r0\n"
        "	cmp r2, #0\n"
        "	beq _L_08082E26\n"
        "	mov r0, #5\n"
        "	str r0, [r2]\n"
        "_L_08082E26:\n"
        "	ldr r0, [r1]\n"
        "	add r0, #1\n"
        "	str r0, [r1]\n"
        "_L_08082E2C:\n"
        "	ldr r0, [r7, #8]\n"
        "	mov r4, #0xbe\n"
        "	lsl r4, r4, #3\n"
        "	add r0, r0, r4\n"
        "	bl func_0800CF08\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08082E5E\n"
        "	mov r5, #0xa9\n"
        "	lsl r5, r5, #2\n"
        "	add r1, r7, r5\n"
        "	ldr r0, [r1]\n"
        "	cmp r0, #0x27\n"
        "	bhi _L_08082E5E\n"
        "	lsl r0, r0, #2\n"
        "	add r0, #4\n"
        "	add r2, r1, r0\n"
        "	cmp r2, #0\n"
        "	beq _L_08082E58\n"
        "	mov r0, #6\n"
        "	str r0, [r2]\n"
        "_L_08082E58:\n"
        "	ldr r0, [r1]\n"
        "	add r0, #1\n"
        "	str r0, [r1]\n"
        "_L_08082E5E:\n"
        "	mov r6, #0xa9\n"
        "	lsl r6, r6, #2\n"
        "	add r1, r7, r6\n"
        "	ldr r0, [r1]\n"
        "	cmp r0, #0x27\n"
        "	bhi _L_08082E7E\n"
        "	lsl r0, r0, #2\n"
        "	add r0, #4\n"
        "	add r2, r1, r0\n"
        "	cmp r2, #0\n"
        "	beq _L_08082E78\n"
        "	mov r0, #7\n"
        "	str r0, [r2]\n"
        "_L_08082E78:\n"
        "	ldr r0, [r1]\n"
        "	add r0, #1\n"
        "	str r0, [r1]\n"
        "_L_08082E7E:\n"
        "	mov r0, #0xa9\n"
        "	lsl r0, r0, #2\n"
        "	add r1, r7, r0\n"
        "	ldr r0, [r1]\n"
        "	cmp r0, #0x27\n"
        "	bhi _L_08082E9E\n"
        "	lsl r0, r0, #2\n"
        "	add r0, #4\n"
        "	add r2, r1, r0\n"
        "	cmp r2, #0\n"
        "	beq _L_08082E98\n"
        "	mov r0, #8\n"
        "	str r0, [r2]\n"
        "_L_08082E98:\n"
        "	ldr r0, [r1]\n"
        "	add r0, #1\n"
        "	str r0, [r1]\n"
        "_L_08082E9E:\n"
        "	mov r2, #0xa9\n"
        "	lsl r2, r2, #2\n"
        "	add r1, r7, r2\n"
        "	ldr r0, [r1]\n"
        "	cmp r0, #0x27\n"
        "	bhi _L_08082EBE\n"
        "	lsl r0, r0, #2\n"
        "	add r0, #4\n"
        "	add r2, r1, r0\n"
        "	cmp r2, #0\n"
        "	beq _L_08082EB8\n"
        "	mov r0, #9\n"
        "	str r0, [r2]\n"
        "_L_08082EB8:\n"
        "	ldr r0, [r1]\n"
        "	add r0, #1\n"
        "	str r0, [r1]\n"
        "_L_08082EBE:\n"
        "	mov r3, #0xa9\n"
        "	lsl r3, r3, #2\n"
        "	add r1, r7, r3\n"
        "	ldr r0, [r1]\n"
        "	cmp r0, #0x27\n"
        "	bhi _L_08082EDE\n"
        "	lsl r0, r0, #2\n"
        "	add r0, #4\n"
        "	add r2, r1, r0\n"
        "	cmp r2, #0\n"
        "	beq _L_08082ED8\n"
        "	mov r0, #0xa\n"
        "	str r0, [r2]\n"
        "_L_08082ED8:\n"
        "	ldr r0, [r1]\n"
        "	add r0, #1\n"
        "	str r0, [r1]\n"
        "_L_08082EDE:\n"
        "	add r0, r7, #0\n"
        "	bl func_0808268C\n"
        "	ldr r0, [r7, #0x10]\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r0, r7\n"
        "	mov r4, #0xaa\n"
        "	lsl r4, r4, #2\n"
        "	add r0, r0, r4\n"
        "	ldr r1, [r0]\n"
        "	add r0, r7, #0\n"
        "	bl func_08082C14\n"
        "	add r0, r7, #0\n"
        "	bl func_08008918\n"
        "	add r6, sp, #0x24\n"
        "	mov r1, #0x3f\n"
        "	strh r1, [r6]\n"
        "	add r0, #0x50\n"
        "	strh r1, [r0]\n"
        "	mov r0, #0x10\n"
        "	bl func_080005D4\n"
        "	add r4, r0, #0\n"
        "	add r0, r7, #0\n"
        "	bl func_08008918\n"
        "	add r1, r0, #0\n"
        "	mov r0, #0\n"
        "	str r0, [r4]\n"
        "	str r0, [r4, #4]\n"
        "	ldr r0, [pc, #0x64]\n"
        "	str r0, [r4, #8]\n"
        "	add r5, r4, #0\n"
        "	add r5, #0xc\n"
        "	add r0, r5, #0\n"
        "	bl func_08009300\n"
        "	str r4, [sp, #0x28]\n"
        "	ldr r1, [pc, #0x58]\n"
        "	add r0, r5, #0\n"
        "	mov r2, #1\n"
        "	mov r3, #1\n"
        "	bl func_0800934C\n"
        "	add r0, r7, #0\n"
        "	bl func_08008940\n"
        "	ldr r2, [r0, #8]\n"
        "	ldr r1, [sp, #0x28]\n"
        "	ldr r2, [r2, #0x10]\n"
        "	bl func_080D3914\n"
        "	mov r5, #0\n"
        "	mov r8, r5\n"
        "	mov sb, r6\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

