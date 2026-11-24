/* Pending CFG->C Lift: bank_080C0000 (1 functions) */
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

/* 0x080CD578 (168B) | code_809E804_85A0_Ctor (orig: func_080CD578) | origin: pending_asm | domain: code_809E804_85A0 | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_080CD578 @ 0x080CD578 (168 bytes)
 * Role   : C++ Class Constructor / Polymorphic Method [vtable: 0x080E85A0]
 * Fields : +0x00:u16(W), +0x00:u8(W), +0x02:u16(W), +0x04:u16(W), +0x04:u32(W), +0x06:u16(W), +0x08:u16(W), +0x08:u32(W), +0x0C:u32(W), +0x10:u8(W), +0x11:u8(W), +0x14:u32(W)
 * Callees: func_0800770C, func_08007714, func_0800835C, func_08008364, func_08008444, func_08008B54, func_08050CC0, func_0805E6CC, func_0805E824
 * CFG Structure:
 *   L_080CD578: call func_08008444(); call func_08008B54(); call func_0805E6CC(); call func_0805E824(); call func_0800835C(); call func_0800770C()
 * ========================================================================== */
extern void func_0800770C(void);
extern void func_08007714(void);
extern void func_0800835C(void);
extern void func_08008364(void);
extern void func_08008444(void);
extern void func_08008B54(void);
extern void func_08050CC0(void);
extern void func_0805E6CC(void);
extern void func_0805E824(void);
int func_080CD578(void) {
    u32 sp0, sp1, sp2, sp3, sp4;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4));
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	add r4, r1, #0\n"
        "	bl func_08008444\n"
        "	ldr r0, =0x080E85A0\n"
        "	str r0, [r7, #4]\n"
        "	str r4, [r7, #8]\n"
        "	add r0, r7, #0\n"
        "	add r0, #0xc\n"
        "	mov r1, #1\n"
        "	bl func_08008B54\n"
        "	add r6, r7, #0\n"
        "	add r6, #0x10\n"
        "	ldr r1, =0x08754C0C\n"
        "	add r0, r6, #0\n"
        "	bl func_0805E6CC\n"
        "	add r0, r7, #0\n"
        "	add r0, #0x40\n"
        "	mov r5, #0\n"
        "	mov r4, #0\n"
        "	strh r4, [r0]\n"
        "	strh r4, [r0, #2]\n"
        "	add r0, #4\n"
        "	add r1, r6, #0\n"
        "	mov r2, #0\n"
        "	mov r3, #0x80\n"
        "	lsl r3, r3, #1\n"
        "	bl func_0805E824\n"
        "	add r0, r7, #0\n"
        "	add r0, #0x58\n"
        "	strh r4, [r0]\n"
        "	strh r4, [r0, #2]\n"
        "	strh r4, [r0, #4]\n"
        "	strh r4, [r0, #6]\n"
        "	strh r4, [r0, #8]\n"
        "	str r4, [r0, #0xc]\n"
        "	strb r5, [r0, #0x10]\n"
        "	strb r5, [r0, #0x11]\n"
        "	str r4, [r0, #0x14]\n"
        "	strb r5, [r0, #0x18]\n"
        "	add r0, #0x1c\n"
        "	strb r5, [r0]\n"
        "	str r4, [r7, #0x78]\n"
        "	str r4, [r7, #0x7c]\n"
        "	add r0, sp, #0xc\n"
        "	bl func_0800835C\n"
        "	add r5, sp, #0x10\n"
        "	add r0, r5, #0\n"
        "	bl func_0800770C\n"
        "	add r0, r7, #0\n"
        "	add r0, #0x80\n"
        "	str r4, [sp]\n"
        "	add r1, sp, #0xc\n"
        "	str r1, [sp, #4]\n"
        "	str r5, [sp, #8]\n"
        "	mov r1, #0\n"
        "	mov r2, #0x1d\n"
        "	mov r3, #0\n"
        "	bl func_08050CC0\n"
        "	add r0, r5, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007714\n"
        "	add r0, sp, #0xc\n"
        "	mov r1, #2\n"
        "	bl func_08008364\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

