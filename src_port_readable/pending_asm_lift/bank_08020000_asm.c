/* Pending CFG->C Lift: bank_08020000 (1 functions) */
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

/* 0x0802BD50 (280B) | code_entities_65F4_vfunc_44 (orig: func_0802BD50) | origin: pending_asm | domain: code_entities_65F4 | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_0802BD50 @ 0x0802BD50 (280 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r1)
 * Fields : +0x00:u16(W), +0x00:u32(R), +0x00:u8(RW), +0x01:u8(W), +0x04:u32(W), +0x08:u32(W), +0x10:u32(R), +0x14:u32(W), +0x64:u32(R), +0x68:u32(R)
 * Callees: func_0802BC48, func_080321B0, func_0805E850, func_080D3910
 * CFG Structure:
 *   L_0802BD50: if (==) goto L_0802BDCA
 *   L_0802BDA2: call _call_via_r1()
 *   L_0802BDB6: call func_0805E850()
 *   L_0802BDCA: if (==) goto L_0802BE16
 *   L_0802BDE6: if (==) goto L_0802BDF0
 *   L_0802BDF0: goto L_0802BE38
 *   L_0802BE04: goto L_0802BE38
 *   L_0802BE16: goto L_0802BE36
 *   L_0802BE3A: call func_0802BC48(); call func_080321B0(); return
 * ========================================================================== */
extern void func_0802BC48(void);
extern void func_080321B0(void);
extern void func_0805E850(void);
extern void func_080D3910(void);
void func_0802BD50(void) {
    int r7_var;
    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	lsl r1, r1, #0x10\n"
        "	lsr r6, r1, #0x10\n"
        "	mov sb, r6\n"
        "	lsl r2, r2, #0x18\n"
        "	lsr r3, r2, #0x18\n"
        "	add r0, #0x56\n"
        "	mov r1, #0\n"
        "	mov r8, r1\n"
        "	mov r2, #0\n"
        "	strh r6, [r0]\n"
        "	sub r0, #0x1e\n"
        "	mov r7, #1\n"
        "	strb r7, [r0]\n"
        "	mov r1, r8\n"
        "	strb r1, [r0, #1]\n"
        "	mov r1, #0xa8\n"
        "	lsl r1, r1, #0xd\n"
        "	str r2, [r0, #4]\n"
        "	str r2, [r0, #8]\n"
        "	str r1, [r0, #0x14]\n"
        "	ldr r4, [r5, #0x10]\n"
        "	cmp r4, #0\n"
        "	beq _L_0802BDCA\n"
        "	cmp r3, #0\n"
        "	bne _L_0802BDA2\n"
        "	ldr r0, [r4]\n"
        "	ldr r0, [r0]\n"
        "	ldr r1, [r0]\n"
        "	ldr r1, [r1, #0x64]\n"
        "	bl func_080D3910\n"
        "	add r1, r0, #0\n"
        "	add r0, r4, #0\n"
        "	add r0, #0xb4\n"
        "	add r2, r6, #0\n"
        "	b _L_0802BDB6\n"
        "_L_0802BDA2:\n"
        "	ldr r0, [r4]\n"
        "	ldr r0, [r0]\n"
        "	ldr r1, [r0]\n"
        "	ldr r1, [r1, #0x68]\n"
        "	bl func_080D3910\n"
        "	add r1, r0, #0\n"
        "	add r0, r4, #0\n"
        "	add r0, #0xb4\n"
        "	mov r2, sb\n"
        "_L_0802BDB6:\n"
        "	bl func_0805E850\n"
        "	add r0, r4, #0\n"
        "	add r0, #0xc8\n"
        "	strb r7, [r0]\n"
        "	add r0, #2\n"
        "	mov r1, r8\n"
        "	strb r1, [r0]\n"
        "	add r0, #1\n"
        "	strb r7, [r0]\n"
        "_L_0802BDCA:\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x34\n"
        "	mov r4, #0\n"
        "	mov r1, #3\n"
        "	strb r1, [r0]\n"
        "	sub r0, #0x14\n"
        "	ldrb r3, [r0]\n"
        "	cmp r3, #1\n"
        "	beq _L_0802BE16\n"
        "	cmp r3, #1\n"
        "	bgt _L_0802BDE6\n"
        "	cmp r3, #0\n"
        "	beq _L_0802BE28\n"
        "	b _L_0802BE3A\n"
        "_L_0802BDE6:\n"
        "	cmp r3, #2\n"
        "	beq _L_0802BDF0\n"
        "	cmp r3, #3\n"
        "	beq _L_0802BE04\n"
        "	b _L_0802BE3A\n"
        "_L_0802BDF0:\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x38\n"
        "	ldr r1, .Lpool_0802BE00\n"
        "	mov r2, #0xc0\n"
        "	lsl r2, r2, #0xc\n"
        "	str r1, [r0, #4]\n"
        "	str r4, [r0, #8]\n"
        "	b _L_0802BE38\n"
        "	.align 2, 0\n"
        ".Lpool_0802BE00:\n"
        "	.word 0xFFF60000\n"
        "_L_0802BE04:\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x38\n"
        "	mov r1, #0xa0\n"
        "	lsl r1, r1, #0xc\n"
        "	mov r2, #0xc0\n"
        "	lsl r2, r2, #0xc\n"
        "	str r1, [r0, #4]\n"
        "	str r4, [r0, #8]\n"
        "	b _L_0802BE38\n"
        "_L_0802BE16:\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x38\n"
        "	ldr r1, .Lpool_0802BE24\n"
        "	mov r2, #0xc0\n"
        "	lsl r2, r2, #0xc\n"
        "	str r4, [r0, #4]\n"
        "	b _L_0802BE36\n"
        "	.align 2, 0\n"
        ".Lpool_0802BE24:\n"
        "	.word 0xFFF60000\n"
        "_L_0802BE28:\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x38\n"
        "	mov r1, #0xa0\n"
        "	lsl r1, r1, #0xc\n"
        "	mov r2, #0xc0\n"
        "	lsl r2, r2, #0xc\n"
        "	str r3, [r0, #4]\n"
        "_L_0802BE36:\n"
        "	str r1, [r0, #8]\n"
        "_L_0802BE38:\n"
        "	str r2, [r0, #0x14]\n"
        "_L_0802BE3A:\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x58\n"
        "	mov r4, #1\n"
        "	strb r4, [r0]\n"
        "	add r0, r5, #0\n"
        "	bl func_0802BC48\n"
        "	add r1, r0, #0\n"
        "	lsl r1, r1, #0x10\n"
        "	lsr r1, r1, #0x10\n"
        "	add r0, r5, #0\n"
        "	bl func_080321B0\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x54\n"
        "	strb r4, [r0]\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

