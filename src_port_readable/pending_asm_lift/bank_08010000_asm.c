/* Pending CFG->C Lift: bank_08010000 (1 functions) */
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

/* 0x0801B498 (296B) | WorldState_Sub_0801B498 (orig: func_0801B498) | origin: pending_asm | domain: WorldState | HEURISTIC / semantic_bank */
/* ==========================================================================
 * [FSM-LIFTER] func_0801B498 @ 0x0801B498 (296 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u16(R), +0x00:u32(R), +0x01:u8(R), +0x02:u16(R), +0x03:u8(R), +0x04:u16(R), +0x0C:u32(R), +0x14:u32(R)
 * Callees: func_080D3914
 * CFG Structure:
 *   L_0801B4BC: if (==) goto L_0801B59C
 *   L_0801B546: if (>= (s)) goto L_0801B564
 *   L_0801B564: if (>= (s)) goto L_0801B57C
 *   L_0801B57C: if (>= (s)) goto L_0801B588
 *   L_0801B588: if (< (s)) goto L_0801B59C
 *   L_0801B59C: if (<= (u)) goto L_0801B4BC
 * ========================================================================== */
extern void func_080D3914(void);
int func_0801B498(void) {
    u32 sp0, sp1, sp2, sp3, sp4;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4));
    __asm__ volatile(
        "	add r7, r1, #0\n"
        "	mov sb, r2\n"
        "	mov r1, #0x64\n"
        "	str r1, [sp, #8]\n"
        "	mov r2, #1\n"
        "	str r2, [sp, #0xc]\n"
        "	add r3, r0, #0\n"
        "	add r3, #8\n"
        "	str r3, [sp, #0x10]\n"
        "	mov r8, sp\n"
        "	add r0, #0xc\n"
        "	mov sl, r0\n"
        "_L_0801B4BC:\n"
        "	mov r4, sl\n"
        "	ldr r5, [r4]\n"
        "	cmp r5, #0\n"
        "	beq _L_0801B59C\n"
        "	ldrh r0, [r7]\n"
        "	lsl r0, r0, #0x16\n"
        "	lsr r0, r0, #0x16\n"
        "	ldrh r1, [r5, #4]\n"
        "	cmp r0, r1\n"
        "	bne _L_0801B59C\n"
        "	ldr r1, [r5, #0x14]\n"
        "	mov r0, sp\n"
        "	ldr r2, [r1, #0xc]\n"
        "	add r1, r5, #0\n"
        "	bl func_080D3914\n"
        "	mov r3, sb\n"
        "	mov r4, #0\n"
        "	ldrsh r2, [r3, r4]\n"
        "	mov r1, r8\n"
        "	mov r3, #4\n"
        "	ldrsh r0, [r1, r3]\n"
        "	sub r2, r2, r0\n"
        "	mov r4, #0\n"
        "	ldrsh r0, [r1, r4]\n"
        "	mov r3, sb\n"
        "	mov r4, #4\n"
        "	ldrsh r1, [r3, r4]\n"
        "	sub r0, r0, r1\n"
        "	and r2, r0\n"
        "	mov r1, #2\n"
        "	ldrsh r0, [r3, r1]\n"
        "	mov r3, r8\n"
        "	mov r4, #6\n"
        "	ldrsh r1, [r3, r4]\n"
        "	sub r0, r0, r1\n"
        "	and r2, r0\n"
        "	mov r1, #2\n"
        "	ldrsh r0, [r3, r1]\n"
        "	mov r3, sb\n"
        "	mov r4, #6\n"
        "	ldrsh r1, [r3, r4]\n"
        "	sub r0, r0, r1\n"
        "	and r2, r0\n"
        "	cmp r2, #0\n"
        "	bge _L_0801B59C\n"
        "	ldr r0, [sp, #8]\n"
        "	cmp r0, #0x64\n"
        "	beq _L_0801B598\n"
        "	lsl r0, r0, #2\n"
        "	ldr r1, [sp, #0x10]\n"
        "	add r0, r1, r0\n"
        "	ldr r4, [r0]\n"
        "	mov r3, #0xa\n"
        "	ldrsh r2, [r4, r3]\n"
        "	ldrb r1, [r7, #1]\n"
        "	lsr r1, r1, #2\n"
        "	ldrh r0, [r7, #2]\n"
        "	ldr r3, =0x000003FF\n"
        "	mov ip, r3\n"
        "	and r0, r3\n"
        "	lsl r0, r0, #6\n"
        "	orr r0, r1\n"
        "	lsl r0, r0, #0x10\n"
        "	asr r6, r0, #0x10\n"
        "	sub r3, r2, r6\n"
        "	cmp r3, #0\n"
        "	bge _L_0801B546\n"
        "	neg r3, r3\n"
        "_L_0801B546:\n"
        "	mov r0, #0xe\n"
        "	ldrsh r2, [r4, r0]\n"
        "	ldrb r1, [r7, #3]\n"
        "	lsr r1, r1, #2\n"
        "	ldrh r0, [r7, #4]\n"
        "	mov r4, ip\n"
        "	and r0, r4\n"
        "	lsl r0, r0, #6\n"
        "	orr r0, r1\n"
        "	lsl r0, r0, #0x10\n"
        "	asr r4, r0, #0x10\n"
        "	sub r1, r2, r4\n"
        "	cmp r1, #0\n"
        "	bge _L_0801B564\n"
        "	neg r1, r1\n"
        "_L_0801B564:\n"
        "	add r0, r3, #0\n"
        "	mul r0, r3\n"
        "	add r2, r1, #0\n"
        "	mul r2, r1\n"
        "	add r1, r2, #0\n"
        "	add r2, r0, r1\n"
        "	mov r3, #0xa\n"
        "	ldrsh r0, [r5, r3]\n"
        "	sub r3, r0, r6\n"
        "	cmp r3, #0\n"
        "	bge _L_0801B57C\n"
        "	neg r3, r3\n"
        "_L_0801B57C:\n"
        "	mov r1, #0xe\n"
        "	ldrsh r0, [r5, r1]\n"
        "	sub r1, r0, r4\n"
        "	cmp r1, #0\n"
        "	bge _L_0801B588\n"
        "	neg r1, r1\n"
        "_L_0801B588:\n"
        "	add r0, r3, #0\n"
        "	mul r0, r3\n"
        "	add r3, r1, #0\n"
        "	mul r3, r1\n"
        "	add r1, r3, #0\n"
        "	add r0, r0, r1\n"
        "	cmp r2, r0\n"
        "	blt _L_0801B59C\n"
        "_L_0801B598:\n"
        "	ldr r4, [sp, #0xc]\n"
        "	str r4, [sp, #8]\n"
        "_L_0801B59C:\n"
        "	mov r0, #4\n"
        "	add sl, r0\n"
        "	ldr r1, [sp, #0xc]\n"
        "	add r1, #1\n"
        "	str r1, [sp, #0xc]\n"
        "	cmp r1, #0x63\n"
        "	bls _L_0801B4BC\n"
        "	ldr r0, [sp, #8]\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r10", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

