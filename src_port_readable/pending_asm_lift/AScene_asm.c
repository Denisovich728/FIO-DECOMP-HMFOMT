/* Pending CFG->C Lift: AScene (1 functions) */
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

/* 0x0803B718 (296B) | AScene_AutoPtrFactory (orig: func_0803B718) | origin: pending_asm | domain: AScene | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_0803B718 @ 0x0803B718 (296 bytes)
 * Role   : C++ Factory / Constructor with operator new (func_080005D4) [vtable: 0x080E59CC, 0x080E7708, 0x080E7714, 0x080E7728, 0x080E7738]
 * Fields : +0x00:u16(W), +0x00:u32(RW), +0x00:u8(W), +0x04:u32(RW), +0x08:u32(RW)
 * Callees: func_080005D4, func_08008444, func_08008B54, func_0803EE94, func_080D3914
 * CFG Structure:
 *   L_0803B718: call func_080005D4(); call func_08008444(); call func_0803EE94(); call func_08008B54(); call func_08008B54(); call func_08008B54()
 *   L_0803B7FE: if (==) goto L_0803B81C
 *   L_0803B81C: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08008444(void);
extern void func_08008B54(void);
extern void func_0803EE94(void);
extern void func_080D3914(void);
int func_0803B718(void) {
    u32 sp0, sp1, sp2, sp3, sp4;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4));
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	add r4, r1, #0\n"
        "	mov r0, #0xe9\n"
        "	lsl r0, r0, #2\n"
        "	bl func_080005D4\n"
        "	add r5, r0, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r6, #0\n"
        "	str r6, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	ldr r4, [r4, #8]\n"
        "	ldr r0, =0x080E59CC\n"
        "	str r0, [r5]\n"
        "	ldr r0, =0x080E7738\n"
        "	add r1, r5, #0\n"
        "	stm r1!, {r0}\n"
        "	add r0, r1, #0\n"
        "	bl func_08008444\n"
        "	add r0, r5, #0\n"
        "	add r0, #0xc\n"
        "	bl func_0803EE94\n"
        "	ldr r0, =0x080E7708\n"
        "	str r0, [r5, #8]\n"
        "	mov r0, #0xd6\n"
        "	lsl r0, r0, #2\n"
        "	add r1, r5, r0\n"
        "	ldr r0, =0x080E7714\n"
        "	str r0, [r1]\n"
        "	ldr r0, =0x080E7728\n"
        "	str r0, [r5]\n"
        "	mov r0, #0xd7\n"
        "	lsl r0, r0, #2\n"
        "	add r1, r5, r0\n"
        "	ldr r0, [sp, #4]\n"
        "	str r6, [sp, #4]\n"
        "	str r0, [r1]\n"
        "	mov r1, #0xd8\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r5, r1\n"
        "	str r4, [r0]\n"
        "	add r1, #8\n"
        "	add r0, r5, r1\n"
        "	str r6, [r0]\n"
        "	add r1, #4\n"
        "	add r0, r5, r1\n"
        "	str r6, [r0]\n"
        "	add r1, #4\n"
        "	add r0, r5, r1\n"
        "	str r6, [r0]\n"
        "	add r1, #4\n"
        "	add r0, r5, r1\n"
        "	mov r1, #0\n"
        "	bl func_08008B54\n"
        "	mov r1, #0xde\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r5, r1\n"
        "	mov r1, #1\n"
        "	bl func_08008B54\n"
        "	mov r1, #0xdf\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r5, r1\n"
        "	mov r1, #2\n"
        "	bl func_08008B54\n"
        "	mov r1, #0xe0\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r5, r1\n"
        "	mov r1, #3\n"
        "	bl func_08008B54\n"
        "	mov r1, #0xe1\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r5, r1\n"
        "	mov r1, #4\n"
        "	bl func_08008B54\n"
        "	mov r1, #0xe2\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r5, r1\n"
        "	str r6, [r0]\n"
        "	str r6, [r0, #4]\n"
        "	add r1, #8\n"
        "	add r0, r5, r1\n"
        "	str r6, [r0, #4]\n"
        "	add r1, #8\n"
        "	add r0, r5, r1\n"
        "	mov r2, #0\n"
        "	strh r6, [r0]\n"
        "	add r1, #4\n"
        "	add r0, r5, r1\n"
        "	str r6, [r0]\n"
        "	mov r0, #0xe8\n"
        "	lsl r0, r0, #2\n"
        "	add r1, r5, r0\n"
        "	mov r0, #1\n"
        "	strb r0, [r1]\n"
        "	ldr r1, =0x000003A1\n"
        "	add r0, r5, r1\n"
        "	strb r2, [r0]\n"
        "	ldr r1, [sp, #4]\n"
        "	cmp r1, #0\n"
        "	beq _L_0803B7FE\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_0803B7FE:\n"
        "	str r5, [sp]\n"
        "	mov r0, sp\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [sp, #0x10]\n"
        "	str r6, [r0]\n"
        "	str r5, [r7]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_0803B81C\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_0803B81C:\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

