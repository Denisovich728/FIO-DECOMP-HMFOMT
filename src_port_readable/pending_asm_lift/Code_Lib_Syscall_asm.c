/* Pending CFG->C Lift: Code_Lib_Syscall (7 functions) */
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

/* 0x08063E04 (84B) | Code_Lib_Syscall_Sub_08063E04 (orig: func_08063E04) | origin: pending_asm | domain: Code_Lib_Syscall | MEDIUM / graph_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_08063E04 @ 0x08063E04 (84 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(W), +0x02:u16(W)
 * Callees: func_0804E7A0, func_0804E8F0
 * CFG Structure:
 *   L_08063E04: if (<= (u)) goto L_08063E12
 *   L_08063E12: call func_0804E7A0(); call func_0804E8F0()
 *   L_08063E50: return
 * ========================================================================== */
extern void func_0804E7A0(void);
extern void func_0804E8F0(void);
int func_08063E04(void) {
    u32 sp0, sp1, sp2;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2));
    __asm__ volatile(
        "	add r7, r2, #0\n"
        "	cmp r1, #0xf\n"
        "	bls _L_08063E12\n"
        "	mov r0, #0\n"
        "	b _L_08063E50\n"
        "_L_08063E12:\n"
        "	lsl r4, r1, #1\n"
        "	add r4, r4, r1\n"
        "	lsl r4, r4, #6\n"
        "	add r4, r4, r1\n"
        "	lsl r4, r4, #2\n"
        "	add r4, r4, r0\n"
        "	add r1, sp, #4\n"
        "	mov r5, #0xc\n"
        "	mov r6, #2\n"
        "	add r0, r1, #0\n"
        "	strh r5, [r0]\n"
        "	strh r6, [r1, #2]\n"
        "	ldr r0, [sp, #4]\n"
        "	mov r1, #0x97\n"
        "	lsl r1, r1, #5\n"
        "	add r4, r4, r1\n"
        "	add r1, r4, #0\n"
        "	mov r2, #0\n"
        "	bl func_0804E7A0\n"
        "	add r0, sp, #8\n"
        "	strh r5, [r0]\n"
        "	strh r6, [r0, #2]\n"
        "	ldr r0, [sp, #8]\n"
        "	str r7, [sp]\n"
        "	add r1, r4, #0\n"
        "	mov r2, #0\n"
        "	mov r3, #0\n"
        "	bl func_0804E8F0\n"
        "	add r0, r4, #0\n"
        "_L_08063E50:\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* 0x080D3748 (4B) | Code_Lib_Syscall_ArcTan2 (orig: func_080D3748) | origin: pending_asm | domain: Code_Lib_Syscall | EXACT / stanhash_elf */
/* ==========================================================================
 * [FSM-LIFTER] func_080D3748 @ 0x080D3748 (4 bytes)
 * Role   : Thumb Function / Method
 * CFG Structure:
 *   L_080D3748: return
 * ========================================================================== */
void func_080D3748(void) {
    __asm__ volatile(
        "	svc #0xa\n"
        "	bx lr\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* 0x080D374C (4B) | Code_Lib_Syscall_CpuFastSet (orig: func_080D374C) | origin: pending_asm | domain: Code_Lib_Syscall | EXACT / stanhash_elf */
/* ==========================================================================
 * [FSM-LIFTER] func_080D374C @ 0x080D374C (4 bytes)
 * Role   : Thumb Function / Method
 * CFG Structure:
 *   L_080D374C: return
 * ========================================================================== */
void func_080D374C(void) {
    __asm__ volatile(
        "	svc #0xc\n"
        "	bx lr\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* 0x080D3750 (4B) | Code_Lib_Syscall_CpuSet (orig: func_080D3750) | origin: pending_asm | domain: Code_Lib_Syscall | EXACT / stanhash_elf */
/* ==========================================================================
 * [FSM-LIFTER] func_080D3750 @ 0x080D3750 (4 bytes)
 * Role   : Thumb Function / Method
 * CFG Structure:
 *   L_080D3750: return
 * ========================================================================== */
void func_080D3750(void) {
    __asm__ volatile(
        "	svc #0xb\n"
        "	bx lr\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* 0x080D3754 (8B) | Code_Lib_Syscall_IntrWait (orig: func_080D3754) | origin: pending_asm | domain: Code_Lib_Syscall | EXACT / stanhash_elf */
/* ==========================================================================
 * [FSM-LIFTER] func_080D3754 @ 0x080D3754 (8 bytes)
 * Role   : Thumb Function / Method
 * CFG Structure:
 *   L_080D3754: return
 * ========================================================================== */
void func_080D3754(void) {
    __asm__ volatile(
        "	mov r2, #0\n"
        "	svc #4\n"
        "	bx lr\n"
        "	.hword 0x0000\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* 0x080D375C (24B) | Code_Lib_Syscall_SoftReset (orig: func_080D375C) | origin: pending_asm | domain: Code_Lib_Syscall | EXACT / stanhash_elf */
/* ==========================================================================
 * [FSM-LIFTER] func_080D375C @ 0x080D375C (24 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u8(W)
 * CFG Structure:
 * ========================================================================== */
void func_080D375C(void) {
    __asm__ volatile(
        "	ldr r3, .Lpool_080D376C\n"
        "	mov r2, #0\n"
        "	strb r2, [r3]\n"
        "	ldr r1, .Lpool_080D3770\n"
        "	mov sp, r1\n"
        "	svc #1\n"
        "	svc #0\n"
        "	lsl r0, r0, #0\n"
        ".Lpool_080D376C:\n"
        "	.word 0x04000208\n"
        ".Lpool_080D3770:\n"
        "	.word 0x03007F00\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* 0x080D3774 (4B) | Code_Lib_Syscall_Sqrt (orig: func_080D3774) | origin: pending_asm | domain: Code_Lib_Syscall | EXACT / stanhash_elf */
/* ==========================================================================
 * [FSM-LIFTER] func_080D3774 @ 0x080D3774 (4 bytes)
 * Role   : Thumb Function / Method
 * CFG Structure:
 *   L_080D3774: return
 * ========================================================================== */
void func_080D3774(void) {
    __asm__ volatile(
        "	svc #8\n"
        "	bx lr\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

