/* Pending CFG->C Lift: bank_08050000 (2 functions) */
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

/* 0x08050342 (90B) | code_0803EE94_78F0_Ctor (orig: func_08050342) | origin: pending_asm | domain: code_0803EE94_78F0 | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_08050342 @ 0x08050342 (90 bytes)
 * Role   : C++ Class Constructor / Polymorphic Method [vtable: 0x080E78F0]
 * Fields : +0x00:u16(RW), +0x00:u32(R), +0x00:u8(R), +0x04:u32(R), +0x08:u32(R), +0x14:u32(R)
 * Callees: func_080D3914
 * CFG Structure:
 *   L_08050342: if (!=) goto L_08050382
 *   L_08050382: return
 * ========================================================================== */
extern void func_080D3914(void);
void func_08050342(void) {
    __asm__ volatile(
        "	ldrb r0, [r7]\n"
        "	lsl r0, r0, #0x1e\n"
        "	lsr r0, r0, #0x1e\n"
        "	mov r1, #0x80\n"
        "	lsl r1, r1, #1\n"
        "	lsl r1, r0\n"
        "	mov r3, #0xc0\n"
        "	lsl r3, r3, #7\n"
        "	add r0, r3, #0\n"
        "	orr r1, r0\n"
        "	ldr r4, [sp, #0x7c]\n"
        "	ldrh r0, [r4]\n"
        "	bic r0, r1\n"
        "	strh r0, [r4]\n"
        "	ldr r0, [r7, #4]\n"
        "	cmp r0, #1\n"
        "	bne _L_08050382\n"
        "	mov r5, #0x98\n"
        "	lsl r5, r5, #1\n"
        "	add r3, r7, r5\n"
        "	ldr r1, [r3]\n"
        "	neg r0, r1\n"
        "	orr r0, r1\n"
        "	cmp r0, #0\n"
        "	bge _L_08050382\n"
        "	ldr r6, [sp, #0xdc]\n"
        "	ldr r0, [r6, #8]\n"
        "	ldr r2, [r0, #0x14]\n"
        "	add r0, r6, #0\n"
        "	add r1, r3, #0\n"
        "	bl func_080D3914\n"
        "_L_08050382:\n"
        "	ldr r0, [r7, #8]\n"
        "	.hword 0x4904\n"
        "	str r1, [sp]\n"
        "	add sp, #0xb8\n"
        "	pop {r3, r4, r5}\n"
        "	mov r8, r3\n"
        "	mov sb, r4\n"
        "	mov sl, r5\n"
        "	pop {r4, r5, r6, r7}\n"
        "	pop {r1}\n"
        "	bx r1\n"
        ".Lpool_08050398:\n"
        "	.word 0x080E78F0\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* 0x0805CF70 (512B) | code_0803EE94_799C_Create (orig: func_0805CF70) | origin: pending_asm | domain: code_0803EE94_799C | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_0805CF70 @ 0x0805CF70 (512 bytes)
 * Role   : C++ Factory / Constructor with operator new (func_080005D4) [vtable: 0x080E799C, 0x080E79A8]
 * Fields : +0x00:u16(W), +0x00:u32(RW), +0x00:u8(W), +0x02:u16(W), +0x04:u16(W), +0x04:u32(W), +0x06:u16(W), +0x08:u16(W), +0x08:u32(RW), +0x0C:u32(RW), +0x10:u32(W), +0x10:u8(W)
 * Callees: func_080005D4, func_08007128, func_0800736C, func_0800770C, func_08007714, func_08007874, func_08007B54, func_0800835C, func_08008364, func_080084DC
 * CFG Structure:
 *   L_0805CF70: call func_080084DC(); call func_080005D4(); call func_0800835C(); call func_0800770C(); call func_08050CC0(); call func_08007714()
 *   L_0805D13C: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08007128(void);
extern void func_0800736C(void);
extern void func_0800770C(void);
extern void func_08007714(void);
extern void func_08007874(void);
extern void func_08007B54(void);
extern void func_0800835C(void);
extern void func_08008364(void);
extern void func_080084DC(void);
extern void func_08008B54(void);
extern void func_08050CC0(void);
extern void func_0805E6CC(void);
extern void func_0805E824(void);
int func_0805CF70(void) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5));
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	add r4, r1, #0\n"
        "	add r1, sp, #0x14\n"
        "	mov r0, #0x1e\n"
        "	mov r2, #1\n"
        "	mov r3, #0\n"
        "	mov r8, r3\n"
        "	mov r5, #0\n"
        "	strh r0, [r1]\n"
        "	strh r2, [r1, #2]\n"
        "	add r0, r7, #0\n"
        "	bl func_080084DC\n"
        "	ldr r0, =0x080E799C\n"
        "	str r0, [r7, #4]\n"
        "	str r4, [r7, #8]\n"
        "	str r5, [r7, #0xc]\n"
        "	mov r0, #4\n"
        "	bl func_080005D4\n"
        "	add r6, r0, #0\n"
        "	add r0, sp, #0xc\n"
        "	bl func_0800835C\n"
        "	add r4, sp, #0x10\n"
        "	add r0, r4, #0\n"
        "	bl func_0800770C\n"
        "	ldr r0, [r7, #0xc]\n"
        "	str r0, [sp]\n"
        "	add r0, sp, #0xc\n"
        "	str r0, [sp, #4]\n"
        "	str r4, [sp, #8]\n"
        "	add r0, r6, #0\n"
        "	mov r1, #0\n"
        "	mov r2, #0x1f\n"
        "	mov r3, #0\n"
        "	bl func_08050CC0\n"
        "	str r0, [r7, #0x10]\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007714\n"
        "	add r0, sp, #0xc\n"
        "	mov r1, #2\n"
        "	bl func_08008364\n"
        "	add r0, r7, #0\n"
        "	add r0, #0x14\n"
        "	mov r1, #1\n"
        "	bl func_08008B54\n"
        "	add r0, r7, #0\n"
        "	add r0, #0x18\n"
        "	mov r1, #0\n"
        "	bl func_08008B54\n"
        "	add r0, r7, #0\n"
        "	add r0, #0x1c\n"
        "	mov r1, #2\n"
        "	bl func_08008B54\n"
        "	add r4, r7, #0\n"
        "	add r4, #0x20\n"
        "	ldr r1, =0x08527094\n"
        "	add r0, r4, #0\n"
        "	bl func_0805E6CC\n"
        "	add r6, r7, #0\n"
        "	add r6, #0x50\n"
        "	ldr r1, =0x08728208\n"
        "	add r0, r6, #0\n"
        "	bl func_0805E6CC\n"
        "	add r0, r7, #0\n"
        "	add r0, #0x80\n"
        "	add r1, r4, #0\n"
        "	mov r2, #0\n"
        "	mov r3, #0x80\n"
        "	lsl r3, r3, #1\n"
        "	bl func_0805E824\n"
        "	add r0, r7, #0\n"
        "	add r0, #0x94\n"
        "	strh r5, [r0]\n"
        "	strh r5, [r0, #2]\n"
        "	strh r5, [r0, #4]\n"
        "	strh r5, [r0, #6]\n"
        "	strh r5, [r0, #8]\n"
        "	str r5, [r0, #0xc]\n"
        "	mov r1, r8\n"
        "	strb r1, [r0, #0x10]\n"
        "	strb r1, [r0, #0x11]\n"
        "	str r5, [r0, #0x14]\n"
        "	strb r1, [r0, #0x18]\n"
        "	add r0, #0x1c\n"
        "	strb r1, [r0]\n"
        "	add r0, #4\n"
        "	add r1, r4, #0\n"
        "	mov r2, #1\n"
        "	mov r3, #0x80\n"
        "	lsl r3, r3, #1\n"
        "	bl func_0805E824\n"
        "	add r0, r7, #0\n"
        "	add r0, #0xc8\n"
        "	strh r5, [r0]\n"
        "	strh r5, [r0, #2]\n"
        "	strh r5, [r0, #4]\n"
        "	strh r5, [r0, #6]\n"
        "	strh r5, [r0, #8]\n"
        "	str r5, [r0, #0xc]\n"
        "	mov r3, r8\n"
        "	strb r3, [r0, #0x10]\n"
        "	strb r3, [r0, #0x11]\n"
        "	str r5, [r0, #0x14]\n"
        "	strb r3, [r0, #0x18]\n"
        "	add r0, #0x1c\n"
        "	strb r3, [r0]\n"
        "	add r0, #4\n"
        "	add r1, r6, #0\n"
        "	mov r2, #0\n"
        "	mov r3, #0x80\n"
        "	lsl r3, r3, #1\n"
        "	bl func_0805E824\n"
        "	add r0, r7, #0\n"
        "	add r0, #0xfc\n"
        "	strh r5, [r0]\n"
        "	strh r5, [r0, #2]\n"
        "	strh r5, [r0, #4]\n"
        "	strh r5, [r0, #6]\n"
        "	strh r5, [r0, #8]\n"
        "	str r5, [r0, #0xc]\n"
        "	mov r1, r8\n"
        "	strb r1, [r0, #0x10]\n"
        "	strb r1, [r0, #0x11]\n"
        "	str r5, [r0, #0x14]\n"
        "	strb r1, [r0, #0x18]\n"
        "	mov r3, #0x8c\n"
        "	lsl r3, r3, #1\n"
        "	add r0, r7, r3\n"
        "	strb r1, [r0]\n"
        "	mov r0, #0x8e\n"
        "	lsl r0, r0, #1\n"
        "	add r4, r7, r0\n"
        "	add r0, r4, #0\n"
        "	bl func_08007874\n"
        "	add r0, r4, #0\n"
        "	mov r1, #7\n"
        "	bl func_08007B54\n"
        "	str r0, [r4, #4]\n"
        "	mov r1, #0x92\n"
        "	lsl r1, r1, #1\n"
        "	add r4, r7, r1\n"
        "	add r0, r4, #0\n"
        "	bl func_08007128\n"
        "	add r0, r4, #0\n"
        "	bl func_0800736C\n"
        "	str r0, [r4, #4]\n"
        "	mov r3, #0x96\n"
        "	lsl r3, r3, #1\n"
        "	add r4, r7, r3\n"
        "	add r0, r4, #0\n"
        "	bl func_08007874\n"
        "	add r0, r4, #0\n"
        "	mov r1, #4\n"
        "	bl func_08007B54\n"
        "	str r0, [r4, #4]\n"
        "	mov r0, #0x9a\n"
        "	lsl r0, r0, #1\n"
        "	add r4, r7, r0\n"
        "	add r0, r4, #0\n"
        "	bl func_08007128\n"
        "	add r0, r4, #0\n"
        "	bl func_0800736C\n"
        "	str r0, [r4, #4]\n"
        "	mov r1, #0x9e\n"
        "	lsl r1, r1, #1\n"
        "	add r4, r7, r1\n"
        "	add r0, r4, #0\n"
        "	bl func_08007874\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007B54\n"
        "	str r0, [r4, #4]\n"
        "	mov r3, #0xa2\n"
        "	lsl r3, r3, #1\n"
        "	add r4, r7, r3\n"
        "	add r0, r4, #0\n"
        "	bl func_08007128\n"
        "	add r0, r4, #0\n"
        "	bl func_0800736C\n"
        "	str r0, [r4, #4]\n"
        "	ldr r0, =0x00000AEC\n"
        "	add r1, r7, r0\n"
        "	ldr r0, =0x080E79A8\n"
        "	str r0, [r1]\n"
        "	str r5, [r1, #4]\n"
        "	mov r1, #0xad\n"
        "	lsl r1, r1, #4\n"
        "	add r2, r7, r1\n"
        "	ldr r0, [r7, #8]\n"
        "	ldr r3, =0x00002C48\n"
        "	add r0, r0, r3\n"
        "	ldr r0, [r0]\n"
        "	lsl r0, r0, #0xd\n"
        "	lsr r0, r0, #0xf\n"
        "	str r0, [r2]\n"
        "	ldr r1, =0x0001869F\n"
        "	cmp r0, r1\n"
        "	ble _L_0805D13C\n"
        "	str r1, [r2]\n"
        "_L_0805D13C:\n"
        "	mov r1, #0xa6\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r7, r1\n"
        "	strh r5, [r0]\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

