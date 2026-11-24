/* Pending CFG->C Lift: farmer (1 functions) */
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

/* 0x0807A708 (368B) | farmer_Sub_0807A708 (orig: func_0807A708) | origin: pending_asm | domain: farmer | MEDIUM / graph_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_0807A708 @ 0x0807A708 (368 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u8(RW), +0x01:u8(RW), +0x02:u8(RW), +0x08:u32(R)
 * Callees: func_08009AF4, func_0800E4E0
 * CFG Structure:
 *   L_0807A708: if (!=) goto L_0807A730
 *   L_0807A732: if (==) goto L_0807A73C
 *   L_0807A73C: if (> (u)) goto L_0807A74E
 *   L_0807A74E: if (!=) goto L_0807A794
 *   L_0807A75E: call func_0800E4E0()
 *   L_0807A774: if (> (s)) goto L_0807A7CC
 *   L_0807A794: if (!=) goto L_0807A7D0
 *   L_0807A7A2: call func_08009AF4()
 *   L_0807A7B6: if (> (s)) goto L_0807A7CC
 *   L_0807A7CC: goto L_0807A84C
 *   L_0807A7D0: if (!=) goto L_0807A84C
 * ========================================================================== */
extern void func_08009AF4(void);
extern void func_0800E4E0(void);
void func_0807A708(void) {
    u32 sp0;
    int r7_var;
    __asm__ volatile("" : : "m"(sp0));
    __asm__ volatile(
        "	mov r8, r0\n"
        "	add r3, r1, #0\n"
        "	add r5, r2, #0\n"
        "	mov r0, #0\n"
        "	mov ip, r0\n"
        "	mov r1, sp\n"
        "	ldrb r0, [r3]\n"
        "	strb r0, [r1]\n"
        "	ldrb r0, [r3, #1]\n"
        "	strb r0, [r1, #1]\n"
        "	mov r0, sp\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	bne _L_0807A730\n"
        "	b _L_0807A866\n"
        "_L_0807A730:\n"
        "	mov sb, sp\n"
        "_L_0807A732:\n"
        "	mov r1, sb\n"
        "	ldrb r0, [r1]\n"
        "	cmp r0, #0x3c\n"
        "	beq _L_0807A73C\n"
        "	b _L_0807A83C\n"
        "_L_0807A73C:\n"
        "	ldrb r1, [r1, #1]\n"
        "	add r0, r1, #0\n"
        "	sub r0, #0x30\n"
        "	lsl r0, r0, #0x18\n"
        "	lsr r0, r0, #0x18\n"
        "	cmp r0, #9\n"
        "	bhi _L_0807A74E\n"
        "	add r3, #5\n"
        "	b _L_0807A848\n"
        "_L_0807A74E:\n"
        "	add r0, r1, #0\n"
        "	cmp r0, #0x70\n"
        "	bne _L_0807A794\n"
        "	mov r4, #0\n"
        "	add r7, r3, #3\n"
        "	mov r6, ip\n"
        "	add r6, #1\n"
        "	b _L_0807A774\n"
        "_L_0807A75E:\n"
        "	mov r2, r8\n"
        "	ldr r0, [r2, #8]\n"
        "	ldr r1, .Lpool_0807A790\n"
        "	add r0, r0, r1\n"
        "	bl func_0800E4E0\n"
        "	add r0, r0, r4\n"
        "	ldrb r0, [r0]\n"
        "	strb r0, [r5]\n"
        "	add r5, #1\n"
        "	add r4, #1\n"
        "_L_0807A774:\n"
        "	cmp r4, #0xc\n"
        "	bgt _L_0807A7CC\n"
        "	mov r2, r8\n"
        "	ldr r0, [r2, #8]\n"
        "	ldr r1, .Lpool_0807A790\n"
        "	add r0, r0, r1\n"
        "	bl func_0800E4E0\n"
        "	add r0, r0, r4\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	bne _L_0807A75E\n"
        "	b _L_0807A7CC\n"
        "	.align 2, 0\n"
        ".Lpool_0807A790:\n"
        "	.word 0x00001BD8\n"
        "_L_0807A794:\n"
        "	cmp r0, #0x66\n"
        "	bne _L_0807A7D0\n"
        "	mov r4, #0\n"
        "	add r7, r3, #3\n"
        "	mov r6, ip\n"
        "	add r6, #1\n"
        "	b _L_0807A7B6\n"
        "_L_0807A7A2:\n"
        "	mov r2, r8\n"
        "	ldr r0, [r2, #8]\n"
        "	add r0, #0x14\n"
        "	bl func_08009AF4\n"
        "	add r0, r0, r4\n"
        "	ldrb r0, [r0]\n"
        "	strb r0, [r5]\n"
        "	add r5, #1\n"
        "	add r4, #1\n"
        "_L_0807A7B6:\n"
        "	cmp r4, #0xc\n"
        "	bgt _L_0807A7CC\n"
        "	mov r1, r8\n"
        "	ldr r0, [r1, #8]\n"
        "	add r0, #0x14\n"
        "	bl func_08009AF4\n"
        "	add r0, r0, r4\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	bne _L_0807A7A2\n"
        "_L_0807A7CC:\n"
        "	add r3, r7, #0\n"
        "	b _L_0807A84C\n"
        "_L_0807A7D0:\n"
        "	mov r6, ip\n"
        "	add r6, #1\n"
        "	cmp r0, #0x63\n"
        "	bne _L_0807A84C\n"
        "	ldrb r0, [r3, #2]\n"
        "	mov r2, sb\n"
        "	strb r0, [r2, #2]\n"
        "	mov r2, #0\n"
        "	lsl r0, r0, #0x18\n"
        "	lsr r0, r0, #0x18\n"
        "	cmp r0, #0x70\n"
        "	bne _L_0807A7F4\n"
        "	mov r1, r8\n"
        "	ldr r0, [r1, #8]\n"
        "	ldr r1, .Lpool_0807A7F0\n"
        "	b _L_0807A810\n"
        "	.align 2, 0\n"
        ".Lpool_0807A7F0:\n"
        "	.word 0x000021F0\n"
        "_L_0807A7F4:\n"
        "	cmp r0, #0x66\n"
        "	bne _L_0807A804\n"
        "	mov r2, r8\n"
        "	ldr r0, [r2, #8]\n"
        "	ldr r1, .Lpool_0807A800\n"
        "	b _L_0807A810\n"
        "	.align 2, 0\n"
        ".Lpool_0807A800:\n"
        "	.word 0x000021E0\n"
        "_L_0807A804:\n"
        "	cmp r0, #0x73\n"
        "	bne _L_0807A812\n"
        "	mov r2, r8\n"
        "	ldr r0, [r2, #8]\n"
        "	mov r1, #0x88\n"
        "	lsl r1, r1, #6\n"
        "_L_0807A810:\n"
        "	add r2, r0, r1\n"
        "_L_0807A812:\n"
        "	add r1, r3, #4\n"
        "	mov r6, ip\n"
        "	add r6, #1\n"
        "	cmp r2, #0\n"
        "	beq _L_0807A838\n"
        "	ldrb r0, [r2]\n"
        "	cmp r0, #0\n"
        "	beq _L_0807A838\n"
        "	add r3, r2, #0\n"
        "	add r3, #0x10\n"
        "_L_0807A826:\n"
        "	ldrb r0, [r2]\n"
        "	strb r0, [r5]\n"
        "	add r5, #1\n"
        "	add r2, #1\n"
        "	cmp r2, r3\n"
        "	bgt _L_0807A838\n"
        "	ldrb r0, [r2]\n"
        "	cmp r0, #0\n"
        "	bne _L_0807A826\n"
        "_L_0807A838:\n"
        "	add r3, r1, #0\n"
        "	b _L_0807A84C\n"
        "_L_0807A83C:\n"
        "	strb r0, [r5]\n"
        "	mov r2, sb\n"
        "	ldrb r0, [r2, #1]\n"
        "	strb r0, [r5, #1]\n"
        "	add r5, #2\n"
        "	add r3, #2\n"
        "_L_0807A848:\n"
        "	mov r6, ip\n"
        "	add r6, #1\n"
        "_L_0807A84C:\n"
        "	mov ip, r6\n"
        "	cmp r6, #0xd\n"
        "	bgt _L_0807A866\n"
        "	ldrb r1, [r3]\n"
        "	mov r0, sb\n"
        "	strb r1, [r0]\n"
        "	ldrb r0, [r3, #1]\n"
        "	mov r2, sb\n"
        "	strb r0, [r2, #1]\n"
        "	lsl r1, r1, #0x18\n"
        "	cmp r1, #0\n"
        "	beq _L_0807A866\n"
        "	b _L_0807A732\n"
        "_L_0807A866:\n"
        "	mov r0, #0\n"
        "	strb r0, [r5]\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

