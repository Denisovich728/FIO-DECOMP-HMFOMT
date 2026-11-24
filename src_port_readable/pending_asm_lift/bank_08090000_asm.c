/* Pending CFG->C Lift: bank_08090000 (4 functions) */
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

/* 0x08090F58 (116B) | code_0803EE94_7DBC_Dtor (orig: func_08090F58) | origin: pending_asm | domain: code_0803EE94_7DBC | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_08090F58 @ 0x08090F58 (116 bytes)
 * Role   : C++ Virtual Deleting Destructor ~Class(this, int __in_chrg) [vtable: 0x080E5A28, 0x080E7DBC]
 * Fields : +0x00:u32(R), +0x04:u32(RW), +0x08:u32(R)
 * Callees: func_08000608, func_08007184, func_080073E0, func_080079E8, func_08007C28, func_080D3914, func_080E3504
 * CFG Structure:
 *   L_08090F58: if (==) goto L_08090F7A
 *   L_08090F7A: if (==) goto L_08090FB6
 *   L_08090FB6: call func_080E3504(); return
 * ========================================================================== */
extern void func_08000608(void);
extern void func_08007184(void);
extern void func_080073E0(void);
extern void func_080079E8(void);
extern void func_08007C28(void);
extern void func_080D3914(void);
extern void func_080E3504(void);
void func_08090F58(void) {
    int r7_var;
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r7, r1, #0\n"
        "	ldr r0, =0x080E7DBC\n"
        "	str r0, [r6, #4]\n"
        "	mov r1, #0x88\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r6, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_08090F7A\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_08090F7A:\n"
        "	mov r1, #0x86\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r6, r1\n"
        "	ldr r5, [r0]\n"
        "	cmp r5, #0\n"
        "	beq _L_08090FB6\n"
        "	add r4, r5, #0\n"
        "	add r4, #0x74\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	ldr r0, =0x080E5A28\n"
        "	str r0, [r5, #4]\n"
        "	add r0, r5, #0\n"
        "	bl func_08000608\n"
        "_L_08090FB6:\n"
        "	add r0, r6, #0\n"
        "	add r1, r7, #0\n"
        "	bl func_080E3504\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* 0x0809323C (204B) | code_0803EE94_7F0C_Create (orig: func_0809323C) | origin: pending_asm | domain: code_0803EE94_7F0C | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_0809323C @ 0x0809323C (204 bytes)
 * Role   : C++ Factory / Constructor with operator new (func_080005D4) [vtable: 0x080E7DF4, 0x080E7F00, 0x080E7F0C]
 * Fields : +0x00:u32(W), +0x00:u8(W), +0x04:u32(W), +0x08:u32(W)
 * Callees: func_080005D4, func_0800770C, func_08007714, func_0800835C, func_08008364, func_08008444, func_08008B54, func_08050CC0, func_0809424C, func_080947BC
 * CFG Structure:
 *   L_0809323C: call func_08008444(); call func_0809424C(); call func_080D02CC(); call func_080E3A9C(); call func_080005D4(); call func_080947BC()
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_0800770C(void);
extern void func_08007714(void);
extern void func_0800835C(void);
extern void func_08008364(void);
extern void func_08008444(void);
extern void func_08008B54(void);
extern void func_08050CC0(void);
extern void func_0809424C(void);
extern void func_080947BC(void);
extern void func_080D02CC(void);
extern void func_080E3A9C(void);
int func_0809323C(void) {
    u32 sp0, sp1, sp2, sp3, sp4;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4));
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	add r5, r1, #0\n"
        "	bl func_08008444\n"
        "	add r4, r7, #0\n"
        "	add r4, #8\n"
        "	add r0, r4, #0\n"
        "	bl func_0809424C\n"
        "	ldr r0, =0x080E7F0C\n"
        "	str r0, [r7, #8]\n"
        "	add r0, r7, #0\n"
        "	add r0, #0x38\n"
        "	bl func_080D02CC\n"
        "	add r0, r4, #0\n"
        "	mov r1, #0\n"
        "	bl func_080E3A9C\n"
        "	ldr r0, =0x080E7DF4\n"
        "	str r0, [r7, #8]\n"
        "	ldr r0, =0x080E7F00\n"
        "	str r0, [r7, #4]\n"
        "	mov r1, #0xe2\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r7, r1\n"
        "	mov r6, #1\n"
        "	str r6, [r0]\n"
        "	mov r0, #0x4c\n"
        "	bl func_080005D4\n"
        "	add r1, r5, #0\n"
        "	bl func_080947BC\n"
        "	mov r2, #0xe4\n"
        "	lsl r2, r2, #1\n"
        "	add r1, r7, r2\n"
        "	str r0, [r1]\n"
        "	mov r1, #0xe6\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r7, r1\n"
        "	str r5, [r0]\n"
        "	add r0, sp, #0xc\n"
        "	bl func_0800835C\n"
        "	add r4, sp, #0x10\n"
        "	add r0, r4, #0\n"
        "	bl func_0800770C\n"
        "	mov r2, #0xe8\n"
        "	lsl r2, r2, #1\n"
        "	add r0, r7, r2\n"
        "	mov r5, #0\n"
        "	str r5, [sp]\n"
        "	add r1, sp, #0xc\n"
        "	str r1, [sp, #4]\n"
        "	str r4, [sp, #8]\n"
        "	mov r1, #0\n"
        "	mov r2, #0x1d\n"
        "	mov r3, #0\n"
        "	bl func_08050CC0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007714\n"
        "	add r0, sp, #0xc\n"
        "	mov r1, #2\n"
        "	bl func_08008364\n"
        "	mov r2, #0xea\n"
        "	lsl r2, r2, #1\n"
        "	add r0, r7, r2\n"
        "	mov r1, #1\n"
        "	bl func_08008B54\n"
        "	mov r1, #0xf0\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r7, r1\n"
        "	strb r5, [r0]\n"
        "	mov r2, #0xfa\n"
        "	lsl r2, r2, #2\n"
        "	add r0, r7, r2\n"
        "	str r5, [r0]\n"
        "	mov r1, #0xfb\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r7, r1\n"
        "	strb r6, [r0]\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* 0x08094F6C (584B) | code_0803EE94_824C_Sub_08094F6C (orig: func_08094F6C) | origin: pending_asm | domain: code_0803EE94_824C | MEDIUM / graph_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_08094F6C @ 0x08094F6C (584 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u16(W), +0x00:u32(RW), +0x00:u8(RW), +0x04:u32(W), +0x08:u32(R)
 * Callees: func_08008724, func_080951B4, func_080958C0, func_08095D80, func_080962F0, func_080972AC, func_08097AE4, func_080D3914
 * CFG Structure:
 *   L_08094F6C: call func_08008724()
 *   L_08094F86: if (<= (u)) goto L_08094F94
 *   L_08094FC8: if (!=) goto L_08094FD4
 *   L_08094FD4: if (!=) goto L_08094FFA
 *   L_08094FFA: goto L_080950B4
 *   L_08095020: call func_080951B4(); if (!=) goto L_08095034
 *   L_08095034: if (==) goto L_0809503A
 *   L_0809503A: goto L_08095176
 *   L_08095048: call func_080958C0(); if (!=) goto L_0809505C
 *   L_0809505C: if (!=) goto L_08095068
 *   L_08095068: if (==) goto L_0809506E
 * ========================================================================== */
extern void func_08008724(void);
extern void func_080951B4(void);
extern void func_080958C0(void);
extern void func_08095D80(void);
extern void func_080962F0(void);
extern void func_080972AC(void);
extern void func_08097AE4(void);
extern void func_080D3914(void);
int func_08094F6C(void) {
    u32 sp0, sp1, sp2;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2));
    __asm__ volatile(
        "	mov r8, r0\n"
        "	add r4, r1, #0\n"
        "	add r0, r4, #0\n"
        "	bl func_08008724\n"
        "	mov r7, #0\n"
        "	add r0, sp, #4\n"
        "	mov sb, r0\n"
        "_L_08094F86:\n"
        "	ldr r1, .Lpool_08094FA0\n"
        "	add r0, r4, r1\n"
        "	mov r2, #0\n"
        "	ldrsh r0, [r0, r2]\n"
        "	cmp r0, #7\n"
        "	bls _L_08094F94\n"
        "	b _L_08095176\n"
        "_L_08094F94:\n"
        "	lsl r0, r0, #2\n"
        "	ldr r1, .Lpool_08094FA4\n"
        "	add r0, r0, r1\n"
        "	ldr r0, [r0]\n"
        "	mov pc, r0\n"
        "	.align 2, 0\n"
        ".Lpool_08094FA0:\n"
        "	.word 0x000033D0\n"
        ".Lpool_08094FA4:\n"
        "	.word _Ljt_08094FA8\n"
        "_Ljt_08094FA8:\n"
        "	.word _L_08094FC8\n"
        "	.word _L_08095020\n"
        "	.word _L_08095048\n"
        "	.word _L_08095074\n"
        "	.word _L_080950C0\n"
        "	.word _L_080950F4\n"
        "	.word _L_08095138\n"
        "	.word _L_08095138\n"
        "_L_08094FC8:\n"
        "	ldr r1, .Lpool_08095010\n"
        "	add r0, r4, r1\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	bne _L_08094FD4\n"
        "	b _L_080950E4\n"
        "_L_08094FD4:\n"
        "	ldr r1, .Lpool_08095014\n"
        "	add r0, r4, r1\n"
        "	mov r5, #0\n"
        "	strb r5, [r0]\n"
        "	mov r2, #0xda\n"
        "	lsl r2, r2, #2\n"
        "	add r1, r4, r2\n"
        "	ldrb r0, [r1]\n"
        "	lsr r3, r0, #3\n"
        "	ldr r0, .Lpool_08095018\n"
        "	add r2, r4, r0\n"
        "	strb r3, [r2]\n"
        "	ldrb r0, [r1]\n"
        "	mov r1, #7\n"
        "	and r0, r1\n"
        "	cmp r0, #0\n"
        "	bne _L_08094FFA\n"
        "	sub r0, r3, #1\n"
        "	strb r0, [r2]\n"
        "_L_08094FFA:\n"
        "	mov r2, #0xd9\n"
        "	lsl r2, r2, #2\n"
        "	add r0, r4, r2\n"
        "	strb r5, [r0]\n"
        "	add r2, #1\n"
        "	add r0, r4, r2\n"
        "	strb r1, [r0]\n"
        "	ldr r0, .Lpool_0809501C\n"
        "	add r1, r4, r0\n"
        "	b _L_080950B4\n"
        "	.align 2, 0\n"
        ".Lpool_08095010:\n"
        "	.word 0x0000035E\n"
        ".Lpool_08095014:\n"
        "	.word 0x00000366\n"
        ".Lpool_08095018:\n"
        "	.word 0x00000367\n"
        ".Lpool_0809501C:\n"
        "	.word 0x000033D0\n"
        "_L_08095020:\n"
        "	add r0, r4, #0\n"
        "	bl func_080951B4\n"
        "	lsl r0, r0, #0x10\n"
        "	asr r1, r0, #0x10\n"
        "	mov r0, #1\n"
        "	neg r0, r0\n"
        "	cmp r1, r0\n"
        "	bne _L_08095034\n"
        "	mov r7, #1\n"
        "_L_08095034:\n"
        "	cmp r1, #1\n"
        "	beq _L_0809503A\n"
        "	b _L_08095176\n"
        "_L_0809503A:\n"
        "	ldr r2, .Lpool_08095044\n"
        "	add r1, r4, r2\n"
        "	mov r0, #2\n"
        "	strh r0, [r1]\n"
        "	b _L_08095176\n"
        "	.align 2, 0\n"
        ".Lpool_08095044:\n"
        "	.word 0x000033D0\n"
        "_L_08095048:\n"
        "	add r0, r4, #0\n"
        "	bl func_080958C0\n"
        "	lsl r0, r0, #0x10\n"
        "	asr r2, r0, #0x10\n"
        "	mov r0, #1\n"
        "	neg r0, r0\n"
        "	cmp r2, r0\n"
        "	bne _L_0809505C\n"
        "	mov r7, #1\n"
        "_L_0809505C:\n"
        "	cmp r2, #1\n"
        "	bne _L_08095068\n"
        "	ldr r0, .Lpool_08095070\n"
        "	add r1, r4, r0\n"
        "	mov r0, #3\n"
        "	strh r0, [r1]\n"
        "_L_08095068:\n"
        "	cmp r2, #2\n"
        "	beq _L_0809506E\n"
        "	b _L_08095176\n"
        "_L_0809506E:\n"
        "	b _L_080950B0\n"
        "	.align 2, 0\n"
        ".Lpool_08095070:\n"
        "	.word 0x000033D0\n"
        "_L_08095074:\n"
        "	add r0, r4, #0\n"
        "	bl func_08095D80\n"
        "	lsl r0, r0, #0x10\n"
        "	asr r2, r0, #0x10\n"
        "	mov r0, #1\n"
        "	neg r0, r0\n"
        "	cmp r2, r0\n"
        "	bne _L_08095088\n"
        "	mov r7, #1\n"
        "_L_08095088:\n"
        "	cmp r2, #1\n"
        "	bne _L_08095094\n"
        "	ldr r0, .Lpool_080950A8\n"
        "	add r1, r4, r0\n"
        "	mov r0, #4\n"
        "	strh r0, [r1]\n"
        "_L_08095094:\n"
        "	cmp r2, #2\n"
        "	bne _L_08095176\n"
        "	ldr r1, .Lpool_080950AC\n"
        "	add r0, r4, r1\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	bne _L_080950B0\n"
        "	mov r7, #1\n"
        "	b _L_08095176\n"
        "	.align 2, 0\n"
        ".Lpool_080950A8:\n"
        "	.word 0x000033D0\n"
        ".Lpool_080950AC:\n"
        "	.word 0x0000035E\n"
        "_L_080950B0:\n"
        "	ldr r2, .Lpool_080950BC\n"
        "	add r1, r4, r2\n"
        "_L_080950B4:\n"
        "	mov r0, #1\n"
        "	strh r0, [r1]\n"
        "	b _L_08095176\n"
        "	.align 2, 0\n"
        ".Lpool_080950BC:\n"
        "	.word 0x000033D0\n"
        "_L_080950C0:\n"
        "	add r0, r4, #0\n"
        "	bl func_080962F0\n"
        "	lsl r0, r0, #0x10\n"
        "	asr r2, r0, #0x10\n"
        "	mov r0, #1\n"
        "	neg r0, r0\n"
        "	cmp r2, r0\n"
        "	bne _L_080950D4\n"
        "	mov r7, #1\n"
        "_L_080950D4:\n"
        "	cmp r2, #1\n"
        "	bne _L_080950E0\n"
        "	ldr r0, .Lpool_080950F0\n"
        "	add r1, r4, r0\n"
        "	mov r0, #5\n"
        "	strh r0, [r1]\n"
        "_L_080950E0:\n"
        "	cmp r2, #2\n"
        "	bne _L_08095176\n"
        "_L_080950E4:\n"
        "	ldr r2, .Lpool_080950F0\n"
        "	add r1, r4, r2\n"
        "	mov r0, #3\n"
        "	strh r0, [r1]\n"
        "	b _L_08095176\n"
        "	.align 2, 0\n"
        ".Lpool_080950F0:\n"
        "	.word 0x000033D0\n"
        "_L_080950F4:\n"
        "	add r0, r4, #0\n"
        "	bl func_080972AC\n"
        "	lsl r0, r0, #0x10\n"
        "	asr r2, r0, #0x10\n"
        "	mov r0, #1\n"
        "	neg r0, r0\n"
        "	cmp r2, r0\n"
        "	bne _L_08095108\n"
        "	mov r7, #1\n"
        "_L_08095108:\n"
        "	cmp r2, #1\n"
        "	bne _L_08095114\n"
        "	ldr r0, .Lpool_08095134\n"
        "	add r1, r4, r0\n"
        "	mov r0, #4\n"
        "	strh r0, [r1]\n"
        "_L_08095114:\n"
        "	cmp r2, #2\n"
        "	bne _L_08095120\n"
        "	ldr r0, .Lpool_08095134\n"
        "	add r1, r4, r0\n"
        "	mov r0, #3\n"
        "	strh r0, [r1]\n"
        "_L_08095120:\n"
        "	cmp r2, #3\n"
        "	bne _L_08095126\n"
        "	mov r7, #1\n"
        "_L_08095126:\n"
        "	cmp r2, #4\n"
        "	bne _L_08095176\n"
        "	ldr r2, .Lpool_08095134\n"
        "	add r1, r4, r2\n"
        "	mov r0, #6\n"
        "	strh r0, [r1]\n"
        "	b _L_08095176\n"
        "	.align 2, 0\n"
        ".Lpool_08095134:\n"
        "	.word 0x000033D0\n"
        "_L_08095138:\n"
        "	ldr r0, .Lpool_08095170\n"
        "	add r5, r4, r0\n"
        "	mov r1, #0\n"
        "	ldrsh r0, [r5, r1]\n"
        "	mov r6, #6\n"
        "	eor r0, r6\n"
        "	neg r1, r0\n"
        "	orr r1, r0\n"
        "	lsr r1, r1, #0x1f\n"
        "	add r0, r4, #0\n"
        "	bl func_08097AE4\n"
        "	lsl r0, r0, #0x10\n"
        "	asr r1, r0, #0x10\n"
        "	mov r0, #1\n"
        "	neg r0, r0\n"
        "	cmp r1, r0\n"
        "	bne _L_0809515E\n"
        "	mov r7, #1\n"
        "_L_0809515E:\n"
        "	cmp r1, #1\n"
        "	bne _L_08095176\n"
        "	mov r2, #0\n"
        "	ldrsh r0, [r5, r2]\n"
        "	cmp r0, #6\n"
        "	bne _L_08095174\n"
        "	mov r0, #7\n"
        "	strh r0, [r5]\n"
        "	b _L_08095176\n"
        "	.align 2, 0\n"
        ".Lpool_08095170:\n"
        "	.word 0x000033D0\n"
        "_L_08095174:\n"
        "	strh r6, [r5]\n"
        "_L_08095176:\n"
        "	cmp r7, #1\n"
        "	beq _L_0809517C\n"
        "	b _L_08094F86\n"
        "_L_0809517C:\n"
        "	mov r1, #0\n"
        "	str r1, [sp]\n"
        "	mov r0, sp\n"
        "	str r0, [sp, #4]\n"
        "	mov r2, sb\n"
        "	str r1, [r2, #4]\n"
        "	ldr r0, [sp, #4]\n"
        "	str r1, [r0]\n"
        "	mov r0, r8\n"
        "	str r1, [r0]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080951A2\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080951A2:\n"
        "	mov r0, r8\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* 0x0809E1B4 (288B) | SpriteRender_Sub_0809E1B4 (orig: func_0809E1B4) | origin: pending_asm | domain: SpriteRender | HEURISTIC / semantic_bank */
/* ==========================================================================
 * [FSM-LIFTER] func_0809E1B4 @ 0x0809E1B4 (288 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(R), +0x00:u8(RW)
 * Callees: func_0800E924, func_0809D418, func_0809D470, func_0809D79C, func_0809D7D8
 * CFG Structure:
 *   L_0809E1B4: call func_0800E924(); if (<= (s)) goto L_0809E258
 *   L_0809E200: if (>= (s)) goto L_0809E200
 *   L_0809E228: if (>= (s)) goto L_0809E228
 *   L_0809E258: call func_0800E924(); call func_0809D418()
 *   L_0809E282: if (>= (s)) goto L_0809E282
 *   L_0809E2AA: if (>= (s)) goto L_0809E2AA
 *   L_0809E2BA: return
 * ========================================================================== */
extern void func_0800E924(void);
extern void func_0809D418(void);
extern void func_0809D470(void);
extern void func_0809D79C(void);
extern void func_0809D7D8(void);
void func_0809E1B4(void) {
    u32 sp0, sp1, sp2, sp3;
    int r7_var;
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	add r6, r1, #0\n"
        "	ldr r0, .Lpool_0809E23C\n"
        "	add r5, r2, r0\n"
        "	mov r0, sp\n"
        "	add r1, r5, #0\n"
        "	bl func_0800E924\n"
        "	mov r0, sp\n"
        "	ldrh r0, [r0]\n"
        "	lsl r0, r0, #0x16\n"
        "	ldr r1, .Lpool_0809E240\n"
        "	cmp r0, r1\n"
        "	ble _L_0809E258\n"
        "	add r4, sp, #8\n"
        "	add r0, r4, #0\n"
        "	add r1, r5, #0\n"
        "	bl func_0800E924\n"
        "	ldrh r0, [r4]\n"
        "	lsl r0, r0, #0x16\n"
        "	lsr r0, r0, #0x16\n"
        "	ldr r1, .Lpool_0809E244\n"
        "	add r4, r0, r1\n"
        "	add r0, r7, #0\n"
        "	add r1, r4, #0\n"
        "	bl func_0809D79C\n"
        "	add r2, r0, #0\n"
        "	ldr r1, .Lpool_0809E248\n"
        "	lsl r0, r2, #2\n"
        "	add r0, r0, r2\n"
        "	lsl r0, r0, #1\n"
        "	add r2, r0, r1\n"
        "	ldr r5, .Lpool_0809E24C\n"
        "	mov r3, #4\n"
        "_L_0809E200:\n"
        "	ldm r5!, {r0}\n"
        "	add r0, r6, r0\n"
        "	ldrb r1, [r2]\n"
        "	strb r1, [r0]\n"
        "	add r2, #1\n"
        "	sub r3, #1\n"
        "	cmp r3, #0\n"
        "	bge _L_0809E200\n"
        "	add r0, r7, #0\n"
        "	add r1, r4, #0\n"
        "	bl func_0809D7D8\n"
        "	add r2, r0, #0\n"
        "	ldr r1, .Lpool_0809E250\n"
        "	lsl r0, r2, #3\n"
        "	sub r0, r0, r2\n"
        "	lsl r0, r0, #1\n"
        "	add r2, r0, r1\n"
        "	ldr r4, .Lpool_0809E254\n"
        "	mov r3, #9\n"
        "_L_0809E228:\n"
        "	ldm r4!, {r0}\n"
        "	add r0, r6, r0\n"
        "	ldrb r1, [r2]\n"
        "	strb r1, [r0]\n"
        "	add r2, #1\n"
        "	sub r3, #1\n"
        "	cmp r3, #0\n"
        "	bge _L_0809E228\n"
        "	b _L_0809E2BA\n"
        "	.align 2, 0\n"
        ".Lpool_0809E23C:\n"
        "	.word 0x00001BD8\n"
        ".Lpool_0809E240:\n"
        "	.word 0x4CC00000\n"
        ".Lpool_0809E244:\n"
        "	.word 0xFFFFFECC\n"
        ".Lpool_0809E248:\n"
        "	.word 0x08103B38\n"
        ".Lpool_0809E24C:\n"
        "	.word 0x08103B10\n"
        ".Lpool_0809E250:\n"
        "	.word 0x08103C74\n"
        ".Lpool_0809E254:\n"
        "	.word 0x08103C3C\n"
        "_L_0809E258:\n"
        "	add r4, sp, #8\n"
        "	add r0, r4, #0\n"
        "	add r1, r5, #0\n"
        "	bl func_0800E924\n"
        "	ldrh r0, [r4]\n"
        "	lsl r0, r0, #0x16\n"
        "	lsr r0, r0, #0x16\n"
        "	add r4, r0, #0\n"
        "	sub r4, #0x34\n"
        "	add r0, r7, #0\n"
        "	add r1, r4, #0\n"
        "	bl func_0809D418\n"
        "	add r2, r0, #0\n"
        "	ldr r1, =0x08103F98\n"
        "	lsl r0, r2, #2\n"
        "	add r0, r0, r2\n"
        "	add r2, r0, r1\n"
        "	ldr r5, =0x08103F84\n"
        "	mov r3, #9\n"
        "_L_0809E282:\n"
        "	ldm r5!, {r0}\n"
        "	add r0, r6, r0\n"
        "	ldrb r1, [r2]\n"
        "	strb r1, [r0]\n"
        "	add r2, #1\n"
        "	sub r3, #1\n"
        "	cmp r3, #0\n"
        "	bge _L_0809E282\n"
        "	add r0, r7, #0\n"
        "	add r1, r4, #0\n"
        "	bl func_0809D470\n"
        "	add r2, r0, #0\n"
        "	ldr r1, =0x0810400C\n"
        "	lsl r0, r2, #2\n"
        "	add r0, r0, r2\n"
        "	lsl r0, r0, #1\n"
        "	add r2, r0, r1\n"
        "	ldr r4, =0x08103FE4\n"
        "	mov r3, #0xd\n"
        "_L_0809E2AA:\n"
        "	ldm r4!, {r0}\n"
        "	add r0, r6, r0\n"
        "	ldrb r1, [r2]\n"
        "	strb r1, [r0]\n"
        "	add r2, #1\n"
        "	sub r3, #1\n"
        "	cmp r3, #0\n"
        "	bge _L_0809E2AA\n"
        "_L_0809E2BA:\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

