/* Pending CFG->C Lift: LibC (3 functions) */
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

/* 0x080D11E4 (20B) | LibC_rand (orig: func_080D11E4) | origin: pending_asm | domain: LibC | EXACT / runtime_bios */
/* ==========================================================================
 * [FSM-LIFTER] func_080D11E4 @ 0x080D11E4 (20 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW)
 * CFG Structure:
 *   L_080D11E4: return
 * ========================================================================== */
void func_080D11E4(void) {
    __asm__ volatile(
        "	add r0, pc, #0x10\n"
        "	ldm r0!, {r1, r2, r3}\n"
        "	ldr r0, [r1]\n"
        "	mul r0, r2\n"
        "	add r0, r0, r3\n"
        "	str r0, [r1]\n"
        "	lsl r0, r0, #1\n"
        "	lsr r0, r0, #1\n"
        "	bx lr\n"
        "	.hword 0x0000\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* 0x080D3ADC (76B) | LibC_strcat (orig: func_080D3ADC) | origin: pending_asm | domain: LibC | EXACT / runtime_bios */
/* ==========================================================================
 * [FSM-LIFTER] func_080D3ADC @ 0x080D3ADC (76 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x00:u8(R)
 * Callees: func_080D3B28
 * CFG Structure:
 *   L_080D3ADC: if (!=) goto L_080D3B12
 *   L_080D3B08: if (==) goto L_080D3B00
 *   L_080D3B12: if (!=) goto L_080D3B10
 * ========================================================================== */
extern void func_080D3B28(void);
int func_080D3ADC(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r2, r0, #0\n"
        "	add r6, r1, #0\n"
        "	add r4, r2, #0\n"
        "	mov r0, #3\n"
        "	and r0, r4\n"
        "	cmp r0, #0\n"
        "	bne _L_080D3B12\n"
        "	ldr r1, [r4]\n"
        "	ldr r5, .Lpool_080D3AF8\n"
        "	add r0, r1, r5\n"
        "	bic r0, r1\n"
        "	ldr r3, .Lpool_080D3AFC\n"
        "	b _L_080D3B08\n"
        "	.align 2, 0\n"
        ".Lpool_080D3AF8:\n"
        "	.word 0xFEFEFEFF\n"
        ".Lpool_080D3AFC:\n"
        "	.word 0x80808080\n"
        "_L_080D3B00:\n"
        "	add r2, #4\n"
        "	ldr r1, [r2]\n"
        "	add r0, r1, r5\n"
        "	bic r0, r1\n"
        "_L_080D3B08:\n"
        "	and r0, r3\n"
        "	cmp r0, #0\n"
        "	beq _L_080D3B00\n"
        "	b _L_080D3B12\n"
        "_L_080D3B10:\n"
        "	add r2, #1\n"
        "_L_080D3B12:\n"
        "	ldrb r0, [r2]\n"
        "	cmp r0, #0\n"
        "	bne _L_080D3B10\n"
        "	add r0, r2, #0\n"
        "	add r1, r6, #0\n"
        "	bl func_080D3B28\n"
        "	add r0, r4, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* 0x080D3B78 (72B) | LibC_strlen (orig: func_080D3B78) | origin: pending_asm | domain: LibC | EXACT / runtime_bios */
/* ==========================================================================
 * [FSM-LIFTER] func_080D3B78 @ 0x080D3B78 (72 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x00:u8(R)
 * CFG Structure:
 *   L_080D3B78: if (!=) goto L_080D3BB0
 *   L_080D3BA4: if (==) goto L_080D3B9C
 *   L_080D3BB0: if (!=) goto L_080D3BAE
 * ========================================================================== */
int func_080D3B78(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r1, r0, #0\n"
        "	add r5, r1, #0\n"
        "	mov r0, #3\n"
        "	and r0, r1\n"
        "	cmp r0, #0\n"
        "	bne _L_080D3BB0\n"
        "	add r2, r1, #0\n"
        "	ldr r1, [r2]\n"
        "	ldr r4, .Lpool_080D3B94\n"
        "	add r0, r1, r4\n"
        "	bic r0, r1\n"
        "	ldr r3, .Lpool_080D3B98\n"
        "	b _L_080D3BA4\n"
        "	.align 2, 0\n"
        ".Lpool_080D3B94:\n"
        "	.word 0xFEFEFEFF\n"
        ".Lpool_080D3B98:\n"
        "	.word 0x80808080\n"
        "_L_080D3B9C:\n"
        "	add r2, #4\n"
        "	ldr r1, [r2]\n"
        "	add r0, r1, r4\n"
        "	bic r0, r1\n"
        "_L_080D3BA4:\n"
        "	and r0, r3\n"
        "	cmp r0, #0\n"
        "	beq _L_080D3B9C\n"
        "	add r1, r2, #0\n"
        "	b _L_080D3BB0\n"
        "_L_080D3BAE:\n"
        "	add r1, #1\n"
        "_L_080D3BB0:\n"
        "	ldrb r0, [r1]\n"
        "	cmp r0, #0\n"
        "	bne _L_080D3BAE\n"
        "	sub r0, r1, r5\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
    return __ret;
}

