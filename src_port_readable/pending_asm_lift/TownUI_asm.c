/* Pending CFG->C Lift: TownUI (1 functions) */
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

/* 0x0803A870 (48B) | TownUI_Sub_0803A870 (orig: func_0803A870) | origin: pending_asm | domain: TownUI | HEURISTIC / semantic_bank */
/* ==========================================================================
 * [FSM-LIFTER] func_0803A870 @ 0x0803A870 (48 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u8(W), +0x04:u16(RW)
 * Callees: func_0805E860
 * CFG Structure:
 *   L_0803A870: if (==) goto L_0803A898
 *   L_0803A898: return
 * ========================================================================== */
extern void func_0805E860(void);
void func_0803A870(void) {

    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	add r5, r1, #0\n"
        "	ldrh r0, [r4, #4]\n"
        "	cmp r0, r5\n"
        "	beq _L_0803A898\n"
        "	add r0, r4, #0\n"
        "	add r0, #0x30\n"
        "	bl func_0805E860\n"
        "	add r0, r4, #0\n"
        "	add r0, #0x44\n"
        "	mov r2, #0\n"
        "	mov r1, #1\n"
        "	strb r1, [r0]\n"
        "	add r0, #2\n"
        "	strb r2, [r0]\n"
        "	add r0, #1\n"
        "	strb r1, [r0]\n"
        "	strh r5, [r4, #4]\n"
        "_L_0803A898:\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
}

