/* Pending CFG->C Lift: NpcSystem (1 functions) */
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

/* 0x080A1B38 (348B) | NpcSystem_Sub_080A1B38 (orig: func_080A1B38) | origin: pending_asm | domain: NpcSystem | HIGH / fomt_studio_table */
/* ==========================================================================
 * [FSM-LIFTER] func_080A1B38 @ 0x080A1B38 (348 bytes)
 * Role   : C/C++ Switch Dispatcher (19 jump-table cases)
 * Fields : +0x00:u32(RW), +0x00:u8(R)
 * Callees: func_0800DCA8, func_0800DF50, func_0800EFEC, func_0800F004, func_0800F040, func_080A1C94, func_080A1D20
 * CFG Structure:
 *   L_080A1B38: call func_0800EFEC(); call func_080A1D20(); if (>= (s)) goto L_080A1B62
 *   L_080A1B62: if (<= (s)) goto L_080A1B74
 *   L_080A1B74: if (> (s)) goto L_080A1C26
 *   L_080A1BC8: goto L_080A1BFE
 *   L_080A1BCC: goto L_080A1BFE
 *   L_080A1BD0: goto L_080A1BFE
 *   L_080A1BD4: goto L_080A1BFE
 *   L_080A1BD8: goto L_080A1BFE
 *   L_080A1BDC: goto L_080A1BFE
 *   L_080A1BE0: goto L_080A1BFE
 *   L_080A1BE4: goto L_080A1BFE
 *   L_080A1BE8: goto L_080A1BFE
 * ========================================================================== */
extern void func_0800DCA8(void);
extern void func_0800DF50(void);
extern void func_0800EFEC(void);
extern void func_0800F004(void);
extern void func_0800F040(void);
extern void func_080A1C94(void);
extern void func_080A1D20(void);
int func_080A1B38(void) {
    u32 sp0, sp1, sp2, sp3;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	mov r8, r1\n"
        "	add r4, r2, #0\n"
        "	add r5, r3, #0\n"
        "	mov r0, sp\n"
        "	bl func_0800EFEC\n"
        "	mov r0, r8\n"
        "	add r1, r4, #0\n"
        "	add r2, r5, #0\n"
        "	ldr r3, [sp, #0x28]\n"
        "	bl func_080A1D20\n"
        "	add r6, r0, #0\n"
        "	cmp r6, #0\n"
        "	bge _L_080A1B62\n"
        "	b _L_080A1C82\n"
        "_L_080A1B62:\n"
        "	ldr r1, .Lpool_080A1B88\n"
        "	lsl r0, r6, #1\n"
        "	add r0, r0, r6\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r0, r1\n"
        "	ldr r0, [r0]\n"
        "	cmp r0, #0x12\n"
        "	ble _L_080A1B74\n"
        "	b _L_080A1C82\n"
        "_L_080A1B74:\n"
        "	cmp r0, #0xd\n"
        "	bgt _L_080A1C26\n"
        "	mov r1, #0x2a\n"
        "	cmp r0, #0xd\n"
        "	bhi _L_080A1BFE\n"
        "	lsl r0, r0, #2\n"
        "	ldr r1, .Lpool_080A1B8C\n"
        "	add r0, r0, r1\n"
        "	ldr r0, [r0]\n"
        "	mov pc, r0\n"
        "	.align 2, 0\n"
        ".Lpool_080A1B88:\n"
        "	.word 0x081043BC\n"
        ".Lpool_080A1B8C:\n"
        "	.word _Ljt_080A1B90\n"
        "_Ljt_080A1B90:\n"
        "	.word _L_080A1BC8\n"
        "	.word _L_080A1BCC\n"
        "	.word _L_080A1BD0\n"
        "	.word _L_080A1BD4\n"
        "	.word _L_080A1BD8\n"
        "	.word _L_080A1BDC\n"
        "	.word _L_080A1BE0\n"
        "	.word _L_080A1BE4\n"
        "	.word _L_080A1BE8\n"
        "	.word _L_080A1BEC\n"
        "	.word _L_080A1BF0\n"
        "	.word _L_080A1BF4\n"
        "	.word _L_080A1BF8\n"
        "	.word _L_080A1BFC\n"
        "_L_080A1BC8:\n"
        "	mov r1, #0x2a\n"
        "	b _L_080A1BFE\n"
        "_L_080A1BCC:\n"
        "	mov r1, #0x2b\n"
        "	b _L_080A1BFE\n"
        "_L_080A1BD0:\n"
        "	mov r1, #0x2c\n"
        "	b _L_080A1BFE\n"
        "_L_080A1BD4:\n"
        "	mov r1, #0x2d\n"
        "	b _L_080A1BFE\n"
        "_L_080A1BD8:\n"
        "	mov r1, #0x2e\n"
        "	b _L_080A1BFE\n"
        "_L_080A1BDC:\n"
        "	mov r1, #0x2f\n"
        "	b _L_080A1BFE\n"
        "_L_080A1BE0:\n"
        "	mov r1, #0x30\n"
        "	b _L_080A1BFE\n"
        "_L_080A1BE4:\n"
        "	mov r1, #0x31\n"
        "	b _L_080A1BFE\n"
        "_L_080A1BE8:\n"
        "	mov r1, #0x32\n"
        "	b _L_080A1BFE\n"
        "_L_080A1BEC:\n"
        "	mov r1, #0x33\n"
        "	b _L_080A1BFE\n"
        "_L_080A1BF0:\n"
        "	mov r1, #0x34\n"
        "	b _L_080A1BFE\n"
        "_L_080A1BF4:\n"
        "	mov r1, #0x35\n"
        "	b _L_080A1BFE\n"
        "_L_080A1BF8:\n"
        "	mov r1, #0x37\n"
        "	b _L_080A1BFE\n"
        "_L_080A1BFC:\n"
        "	mov r1, #0x28\n"
        "_L_080A1BFE:\n"
        "	add r5, sp, #4\n"
        "	add r4, sp, #8\n"
        "	add r0, r4, #0\n"
        "	bl func_0800DCA8\n"
        "	ldrb r1, [r4]\n"
        "	mov r0, sp\n"
        "	add r0, #9\n"
        "	ldrb r0, [r0]\n"
        "	lsl r0, r0, #8\n"
        "	orr r0, r1\n"
        "	mov r1, sp\n"
        "	add r1, #0xa\n"
        "	ldrb r1, [r1]\n"
        "	lsl r1, r1, #0x10\n"
        "	orr r1, r0\n"
        "	add r0, r5, #0\n"
        "	bl func_0800F004\n"
        "	b _L_080A1C74\n"
        "_L_080A1C26:\n"
        "	mov r1, #0\n"
        "	sub r0, #0xe\n"
        "	cmp r0, #4\n"
        "	bhi _L_080A1C62\n"
        "	lsl r0, r0, #2\n"
        "	ldr r1, .Lpool_080A1C38\n"
        "	add r0, r0, r1\n"
        "	ldr r0, [r0]\n"
        "	mov pc, r0\n"
        "	.align 2, 0\n"
        ".Lpool_080A1C38:\n"
        "	.word _Ljt_080A1C3C\n"
        "_Ljt_080A1C3C:\n"
        "	.word _L_080A1C50\n"
        "	.word _L_080A1C54\n"
        "	.word _L_080A1C58\n"
        "	.word _L_080A1C5C\n"
        "	.word _L_080A1C60\n"
        "_L_080A1C50:\n"
        "	mov r1, #0\n"
        "	b _L_080A1C62\n"
        "_L_080A1C54:\n"
        "	mov r1, #1\n"
        "	b _L_080A1C62\n"
        "_L_080A1C58:\n"
        "	mov r1, #2\n"
        "	b _L_080A1C62\n"
        "_L_080A1C5C:\n"
        "	mov r1, #4\n"
        "	b _L_080A1C62\n"
        "_L_080A1C60:\n"
        "	mov r1, #0x32\n"
        "_L_080A1C62:\n"
        "	add r5, sp, #4\n"
        "	add r4, sp, #0xc\n"
        "	add r0, r4, #0\n"
        "	bl func_0800DF50\n"
        "	ldrb r1, [r4]\n"
        "	add r0, r5, #0\n"
        "	bl func_0800F040\n"
        "_L_080A1C74:\n"
        "	ldr r0, [sp, #4]\n"
        "	str r0, [sp]\n"
        "	mov r0, r8\n"
        "	add r1, r6, #0\n"
        "	ldr r2, [sp, #0x28]\n"
        "	bl func_080A1C94\n"
        "_L_080A1C82:\n"
        "	ldr r0, [sp]\n"
        "	str r0, [r7]\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

