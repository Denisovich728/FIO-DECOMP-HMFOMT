/* ============================================================================
 * MODULE : 02_graphics_tilemap_oam.c
 * RANGE  : 0x08005000 .. 0x08012000 (49,860 bytes, 556 functions)
 * PURPOSE: Motor grafico 2D, descompresion LZ77/RL, tilesets, paletas y OAM
 * STATUS : 100% Zero-Diff Verified | Pure C/C++: 454 | Inline-CFG ASM: 102
 * ============================================================================ */
#include "fomt_zero_diff.h"

/* --- func_080050C8 @ 0x080050C8 (48B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080086BC();
extern u32 func_08050D0C();
void func_080050C8(int arg0,u32 arg1) {
  *(u32 *)(arg0 + 4) = 0x080E5A98;
  if (*(int *)(arg0 + 0x00001A2C) != 0) {
    func_08050D0C(*(int *)(arg0 + 0x00001A2C),3);
  }
  func_080086BC(arg0,arg1);
}

/* --- func_080050F8 @ 0x080050F8 (348B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080050F8 @ 0x080050F8 (348 bytes)
 * Role   : C++ Factory / Constructor with operator new (func_080005D4) [vtable: 0x080E5B80]
 * Fields : +0x00:u16(W), +0x00:u32(RW), +0x00:u8(R), +0x04:u32(W), +0x08:u32(RW), +0x0C:u32(R), +0x10:u32(R)
 * Callees: func_080005D4, func_08005254, func_08005260, func_08005278, func_08005800, func_080087C8, func_080088B8, func_080088D4, func_08008918, func_08008940
 * CFG Structure:
 *   L_080050F8: call func_08005254(); call func_08005260(); call func_08005278(); call func_08008918(); call func_080005D4(); call func_08008918()
 *   L_08005174: call func_080087C8(); call func_080088B8(); call func_080088D4(); if (==) goto L_080051BA
 *   L_080051A0: if (==) goto L_080051D4
 *   L_080051AA: if (< (s)) goto L_0800520A
 *   L_080051BA: call func_08005800(); if (==) goto L_0800520A
 *   L_080051D4: call func_08009378(); call func_08008940(); call _call_via_r2(); goto L_0800520A
 *   L_080051FC: if (< (s)) goto L_0800520A
 *   L_0800520A: if (==) goto L_08005174
 *   L_08005230: if (==) goto L_08005242
 *   L_08005242: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08005254(void);
extern void func_08005260(void);
extern void func_08005278(void);
extern void func_08005800(void);
extern void func_080087C8(void);
extern void func_080088B8(void);
extern void func_080088D4(void);
extern void func_08008918(void);
extern void func_08008940(void);
extern void func_08009300(void);
extern void func_0800934C(void);
extern void func_08009378(void);
extern void func_080D3914(void);
int func_080050F8(void) {
    u32 sp0, sp1, sp2, sp3, sp4;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4));
    __asm__ volatile(
        "	mov sb, r0\n"
        "	add r6, r1, #0\n"
        "	add r0, r6, #0\n"
        "	bl func_08005254\n"
        "	add r0, r6, #0\n"
        "	bl func_08005260\n"
        "	add r0, r6, #0\n"
        "	bl func_08005278\n"
        "	add r0, r6, #0\n"
        "	bl func_08008918\n"
        "	mov r1, sp\n"
        "	mov r2, #0x3f\n"
        "	strh r2, [r1]\n"
        "	add r0, #0x50\n"
        "	strh r2, [r0]\n"
        "	mov r0, #0x10\n"
        "	bl func_080005D4\n"
        "	add r4, r0, #0\n"
        "	add r0, r6, #0\n"
        "	bl func_08008918\n"
        "	add r1, r0, #0\n"
        "	mov r0, #0\n"
        "	str r0, [r4]\n"
        "	str r0, [r4, #4]\n"
        "	ldr r0, .Lpool_08005198\n"
        "	str r0, [r4, #8]\n"
        "	add r5, r4, #0\n"
        "	add r5, #0xc\n"
        "	add r0, r5, #0\n"
        "	bl func_08009300\n"
        "	str r4, [sp, #4]\n"
        "	ldr r1, .Lpool_0800519C\n"
        "	add r0, r5, #0\n"
        "	mov r2, #1\n"
        "	mov r3, #1\n"
        "	bl func_0800934C\n"
        "	add r0, r6, #0\n"
        "	bl func_08008940\n"
        "	ldr r2, [r0, #8]\n"
        "	ldr r1, [sp, #4]\n"
        "	ldr r2, [r2, #0x10]\n"
        "	bl func_080D3914\n"
        "	mov r4, #0\n"
        "	mov r5, #0\n"
        "	add r7, sp, #8\n"
        "	add r0, sp, #0xc\n"
        "	mov r8, r0\n"
        "_L_08005174:\n"
        "	add r0, r6, #0\n"
        "	bl func_080087C8\n"
        "	add r0, r6, #0\n"
        "	bl func_080088B8\n"
        "	add r0, r6, #0\n"
        "	bl func_080088D4\n"
        "	add r0, r4, #0\n"
        "	cmp r0, #1\n"
        "	beq _L_080051BA\n"
        "	cmp r0, #1\n"
        "	bgt _L_080051A0\n"
        "	cmp r0, #0\n"
        "	beq _L_080051AA\n"
        "	b _L_0800520A\n"
        "	.align 2, 0\n"
        ".Lpool_08005198:\n"
        "	.word 0x080E5B80\n"
        ".Lpool_0800519C:\n"
        "	.word 0x00000889\n"
        "_L_080051A0:\n"
        "	cmp r0, #2\n"
        "	beq _L_080051D4\n"
        "	cmp r0, #3\n"
        "	beq _L_080051FC\n"
        "	b _L_0800520A\n"
        "_L_080051AA:\n"
        "	ldr r0, [sp, #4]\n"
        "	ldr r1, [r0]\n"
        "	neg r0, r1\n"
        "	orr r0, r1\n"
        "	cmp r0, #0\n"
        "	blt _L_0800520A\n"
        "	mov r4, #1\n"
        "	b _L_0800520A\n"
        "_L_080051BA:\n"
        "	add r0, r6, #0\n"
        "	bl func_08005800\n"
        "	ldr r1, .Lpool_080051D0\n"
        "	add r0, r6, r1\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_0800520A\n"
        "	mov r4, #2\n"
        "	b _L_0800520A\n"
        "	.align 2, 0\n"
        ".Lpool_080051D0:\n"
        "	.word 0x00001A74\n"
        "_L_080051D4:\n"
        "	ldr r0, [sp, #4]\n"
        "	add r0, #0xc\n"
        "	ldr r1, .Lpool_080051F8\n"
        "	mov r2, #1\n"
        "	mov r3, #1\n"
        "	bl func_08009378\n"
        "	add r0, r6, #0\n"
        "	bl func_08008940\n"
        "	ldr r2, [r0, #8]\n"
        "	ldr r1, [sp, #4]\n"
        "	ldr r2, [r2, #0x10]\n"
        "	bl func_080D3914\n"
        "	mov r4, #3\n"
        "	b _L_0800520A\n"
        "	.align 2, 0\n"
        ".Lpool_080051F8:\n"
        "	.word 0x00000889\n"
        "_L_080051FC:\n"
        "	ldr r0, [sp, #4]\n"
        "	ldr r1, [r0]\n"
        "	neg r0, r1\n"
        "	orr r0, r1\n"
        "	cmp r0, #0\n"
        "	blt _L_0800520A\n"
        "	mov r5, #1\n"
        "_L_0800520A:\n"
        "	cmp r5, #0\n"
        "	beq _L_08005174\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #8]\n"
        "	str r7, [sp, #0xc]\n"
        "	mov r1, r8\n"
        "	str r0, [r1, #4]\n"
        "	str r0, [r7]\n"
        "	mov r1, sb\n"
        "	str r0, [r1]\n"
        "	ldr r1, [sp, #8]\n"
        "	cmp r1, #0\n"
        "	beq _L_08005230\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_08005230:\n"
        "	ldr r1, [sp, #4]\n"
        "	cmp r1, #0\n"
        "	beq _L_08005242\n"
        "	ldr r0, [r1, #8]\n"
        "	ldr r2, [r0, #0xc]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_08005242:\n"
        "	mov r0, sb\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_08005254 @ 0x08005254 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08008724();
void func_08005254(void) {
  func_08008724();
}

/* --- func_08005260 @ 0x08005260 (24B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08005260(u8 *arg0) {
    arg0[0x1A75] = 0;
    arg0[0x1A74] = 0;
}

/* --- func_08005278 @ 0x08005278 (1416B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08005278 @ 0x08005278 (1416 bytes)
 * Role   : C++ Class Constructor / Polymorphic Method [vtable: 0x080E8958, 0x080E8968, 0x080E8978, 0x080E8988]
 * Fields : +0x00:u16(W), +0x00:u32(RW), +0x02:u16(W), +0x04:u32(RW), +0x0A:u16(W), +0x0C:u16(W), +0x0C:u32(RW)
 * Callees: func_080088DC, func_08008910, func_08008918, func_08008920, func_08008940, func_0800894C, func_08008E64, func_08008EB8, func_08008F0C, func_0804E7A0
 * CFG Structure:
 *   L_08005278: call func_08008E64(); call func_08008E64(); call func_08008918(); call func_08008918(); call func_08008918(); call func_08051320()
 *   L_0800532E: call func_0804E7A0(); if (<= (u)) goto L_0800532E
 *   L_08005372: call func_0804E7A0(); if (<= (u)) goto L_08005372
 *   L_080053A0: call func_0804E8F0(); if (<= (u)) goto L_080053A0
 *   L_08005448: call func_08008910(); call func_08008F0C(); if (==) goto L_080054C8
 *   L_08005476: goto L_08005596
 *   L_080054C8: if (>= (u)) goto L_080054E2
 *   L_080054E2: if (==) goto L_08005500
 *   L_08005504: if (==) goto L_08005534
 *   L_0800551A: if (==) goto L_0800552A
 *   L_0800552A: if (!=) goto L_0800551A
 * ========================================================================== */
extern void func_080088DC(void);
extern void func_08008910(void);
extern void func_08008918(void);
extern void func_08008920(void);
extern void func_08008940(void);
extern void func_0800894C(void);
extern void func_08008E64(void);
extern void func_08008EB8(void);
extern void func_08008F0C(void);
extern void func_0804E7A0(void);
extern void func_0804E8F0(void);
extern void func_08050D3C(void);
extern void func_08051320(void);
extern void func_080D01F8(void);
extern void func_080D0260(void);
extern void func_080D3BC0(void);
void func_08005278(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, r7, lr}\n"
        "	mov r7, sl\n"
        "	mov r6, sb\n"
        "	mov r5, r8\n"
        "	push {r5, r6, r7}\n"
        "	sub sp, #0x94\n"
        "	mov sl, r0\n"
        "	ldr r0, .Lpool_08005488\n"
        "	ldr r0, [r0]\n"
        "	ldr r1, .Lpool_0800548C\n"
        "	ldr r2, .Lpool_08005490\n"
        "	ldr r2, [r2]\n"
        "	bl func_08008E64\n"
        "	ldr r0, .Lpool_08005494\n"
        "	ldr r0, [r0]\n"
        "	mov r1, #0xa0\n"
        "	lsl r1, r1, #0x13\n"
        "	mov r2, #0x20\n"
        "	bl func_08008E64\n"
        "	mov r0, sl\n"
        "	bl func_08008918\n"
        "	add r1, sp, #0xc\n"
        "	mov r3, #0xba\n"
        "	lsl r3, r3, #5\n"
        "	add r2, r3, #0\n"
        "	strh r2, [r1]\n"
        "	mov r4, #0\n"
        "	strh r2, [r0]\n"
        "	mov r0, sl\n"
        "	bl func_08008918\n"
        "	add r2, sp, #0xc\n"
        "	ldr r5, .Lpool_08005498\n"
        "	add r1, r5, #0\n"
        "	strh r1, [r2]\n"
        "	strh r1, [r0, #0xa]\n"
        "	mov r0, sl\n"
        "	bl func_08008918\n"
        "	add r2, sp, #0xc\n"
        "	ldr r7, .Lpool_0800549C\n"
        "	add r1, r7, #0\n"
        "	strh r1, [r2]\n"
        "	strh r1, [r0, #0xc]\n"
        "	ldr r0, .Lpool_080054A0\n"
        "	mov r1, #0x14\n"
        "	str r1, [sp]\n"
        "	mov r1, #0x96\n"
        "	lsl r1, r1, #2\n"
        "	str r1, [sp, #4]\n"
        "	str r4, [sp, #8]\n"
        "	mov r1, #0\n"
        "	mov r2, #0\n"
        "	mov r3, #0x1e\n"
        "	bl func_08051320\n"
        "	ldr r1, .Lpool_080054A4\n"
        "	mov r0, #0\n"
        "	mov r2, #0x20\n"
        "	bl func_08008EB8\n"
        "	mov r0, #0\n"
        "	mov r8, r0\n"
        "	add r5, sp, #0x20\n"
        "	add r1, sp, #0x24\n"
        "	mov sb, r1\n"
        "	mov r2, sp\n"
        "	add r2, #0x28\n"
        "	str r2, [sp, #0x64]\n"
        "	mov r3, sp\n"
        "	add r3, #0x2c\n"
        "	str r3, [sp, #0x68]\n"
        "	mov r4, sp\n"
        "	add r4, #0x30\n"
        "	str r4, [sp, #0x70]\n"
        "	mov r7, sp\n"
        "	add r7, #0x34\n"
        "	str r7, [sp, #0x74]\n"
        "	mov r0, sp\n"
        "	add r0, #0x38\n"
        "	str r0, [sp, #0x78]\n"
        "	mov r1, sp\n"
        "	add r1, #0x10\n"
        "	str r1, [sp, #0x5c]\n"
        "	mov r7, #0xc\n"
        "	mov r6, #2\n"
        "	mov r4, sl\n"
        "	add r4, #0xc\n"
        "_L_0800532E:\n"
        "	add r0, sp, #0x20\n"
        "	strh r7, [r0]\n"
        "	strh r6, [r5, #2]\n"
        "	ldr r0, [sp, #0x20]\n"
        "	add r1, r4, #0\n"
        "	mov r2, #0\n"
        "	bl func_0804E7A0\n"
        "	mov r2, #0xc1\n"
        "	lsl r2, r2, #2\n"
        "	add r4, r4, r2\n"
        "	mov r3, #1\n"
        "	add r8, r3\n"
        "	mov r0, r8\n"
        "	cmp r0, #3\n"
        "	bls _L_0800532E\n"
        "	mov r1, #0\n"
        "	mov r8, r1\n"
        "	ldr r7, .Lpool_080054A8\n"
        "	add r7, sl\n"
        "	mov r2, #0xfa\n"
        "	lsl r2, r2, #4\n"
        "	add r2, sl\n"
        "	str r2, [sp, #0x54]\n"
        "	ldr r3, .Lpool_080054AC\n"
        "	add r3, sl\n"
        "	str r3, [sp, #0x58]\n"
        "	ldr r4, .Lpool_080054B0\n"
        "	add r4, sl\n"
        "	str r4, [sp, #0x6c]\n"
        "	mov r6, #0xe\n"
        "	mov r5, #2\n"
        "	ldr r4, .Lpool_080054A8\n"
        "	add r4, sl\n"
        "_L_08005372:\n"
        "	add r0, sp, #0x24\n"
        "	strh r6, [r0]\n"
        "	mov r0, sb\n"
        "	strh r5, [r0, #2]\n"
        "	ldr r0, [sp, #0x24]\n"
        "	add r1, r4, #0\n"
        "	mov r2, #0\n"
        "	bl func_0804E7A0\n"
        "	mov r1, #0xe1\n"
        "	lsl r1, r1, #2\n"
        "	add r4, r4, r1\n"
        "	mov r2, #1\n"
        "	add r8, r2\n"
        "	mov r3, r8\n"
        "	cmp r3, #3\n"
        "	bls _L_08005372\n"
        "	mov r4, #0\n"
        "	mov r8, r4\n"
        "	mov r6, #0xc\n"
        "	mov r5, #2\n"
        "	mov r4, sl\n"
        "	add r4, #0xc\n"
        "_L_080053A0:\n"
        "	mov r0, r8\n"
        "	lsl r1, r0, #4\n"
        "	add r1, sl\n"
        "	ldr r2, .Lpool_080054B4\n"
        "	add r1, r1, r2\n"
        "	add r0, sp, #0x28\n"
        "	strh r6, [r0]\n"
        "	ldr r3, [sp, #0x64]\n"
        "	strh r5, [r3, #2]\n"
        "	ldr r0, [sp, #0x28]\n"
        "	str r1, [sp]\n"
        "	add r1, r4, #0\n"
        "	mov r2, #0\n"
        "	mov r3, #0\n"
        "	bl func_0804E8F0\n"
        "	mov r0, #0xc1\n"
        "	lsl r0, r0, #2\n"
        "	add r4, r4, r0\n"
        "	mov r1, #1\n"
        "	add r8, r1\n"
        "	mov r2, r8\n"
        "	cmp r2, #3\n"
        "	bls _L_080053A0\n"
        "	ldr r1, .Lpool_080054B8\n"
        "	mov r4, #0xe\n"
        "	mov r5, #2\n"
        "	add r0, sp, #0x2c\n"
        "	strh r4, [r0]\n"
        "	ldr r3, [sp, #0x68]\n"
        "	strh r5, [r3, #2]\n"
        "	ldr r0, [sp, #0x2c]\n"
        "	str r1, [sp]\n"
        "	add r1, r7, #0\n"
        "	mov r2, #0\n"
        "	mov r3, #0\n"
        "	bl func_0804E8F0\n"
        "	ldr r1, .Lpool_080054BC\n"
        "	add r0, sp, #0x30\n"
        "	strh r4, [r0]\n"
        "	ldr r7, [sp, #0x70]\n"
        "	strh r5, [r7, #2]\n"
        "	ldr r0, [sp, #0x30]\n"
        "	str r1, [sp]\n"
        "	ldr r1, [sp, #0x54]\n"
        "	mov r2, #0\n"
        "	mov r3, #0\n"
        "	bl func_0804E8F0\n"
        "	ldr r1, .Lpool_080054C0\n"
        "	add r0, sp, #0x34\n"
        "	strh r4, [r0]\n"
        "	ldr r0, [sp, #0x74]\n"
        "	strh r5, [r0, #2]\n"
        "	ldr r0, [sp, #0x34]\n"
        "	str r1, [sp]\n"
        "	ldr r1, [sp, #0x58]\n"
        "	mov r2, #0\n"
        "	mov r3, #0\n"
        "	bl func_0804E8F0\n"
        "	ldr r1, .Lpool_080054C4\n"
        "	add r0, sp, #0x38\n"
        "	strh r4, [r0]\n"
        "	ldr r2, [sp, #0x78]\n"
        "	strh r5, [r2, #2]\n"
        "	ldr r0, [sp, #0x38]\n"
        "	str r1, [sp]\n"
        "	ldr r1, [sp, #0x6c]\n"
        "	mov r2, #0\n"
        "	mov r3, #0\n"
        "	bl func_0804E8F0\n"
        "	mov r3, #0\n"
        "	mov r8, r3\n"
        "	ldr r4, [sp, #0x5c]\n"
        "	str r4, [sp, #0x4c]\n"
        "	mov r5, #0xc0\n"
        "	lsl r5, r5, #0x13\n"
        "	str r5, [sp, #0x84]\n"
        "	mov r7, sl\n"
        "	add r7, #0xc\n"
        "	str r7, [sp, #0x88]\n"
        "_L_08005448:\n"
        "	mov r0, sl\n"
        "	bl func_08008910\n"
        "	add r6, r0, #0\n"
        "	add r0, sp, #0x10\n"
        "	ldr r1, [sp, #0x88]\n"
        "	ldr r2, [sp, #0x84]\n"
        "	mov r3, #0xc0\n"
        "	lsl r3, r3, #2\n"
        "	bl func_08008F0C\n"
        "	ldr r1, [r6, #4]\n"
        "	ldr r0, [r6, #0xc]\n"
        "	cmp r1, r0\n"
        "	beq _L_080054C8\n"
        "	cmp r1, #0\n"
        "	beq _L_08005476\n"
        "	add r0, r1, #0\n"
        "	ldr r1, [sp, #0x4c]\n"
        "	ldm r1!, {r2, r3, r4}\n"
        "	stm r0!, {r2, r3, r4}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_08005476:\n"
        "	ldr r0, [r6, #4]\n"
        "	add r0, #0x10\n"
        "	str r0, [r6, #4]\n"
        "	mov r5, #0xc0\n"
        "	lsl r5, r5, #2\n"
        "	lsl r5, r5, #2\n"
        "	str r5, [sp, #0x60]\n"
        "	b _L_08005596\n"
        "	.hword 0x0000\n"
        ".Lpool_08005488:\n"
        "	.word 0x080F9F70\n"
        ".Lpool_0800548C:\n"
        "	.word 0x06004B00\n"
        ".Lpool_08005490:\n"
        "	.word 0x080F9F74\n"
        ".Lpool_08005494:\n"
        "	.word 0x080F9F78\n"
        ".Lpool_08005498:\n"
        "	.word 0x00001841\n"
        ".Lpool_0800549C:\n"
        "	.word 0x00001F01\n"
        ".Lpool_080054A0:\n"
        "	.word 0x0600F800\n"
        ".Lpool_080054A4:\n"
        "	.word 0x06FFC000\n"
        ".Lpool_080054A8:\n"
        "	.word 0x00000C1C\n"
        ".Lpool_080054AC:\n"
        "	.word 0x00001324\n"
        ".Lpool_080054B0:\n"
        "	.word 0x000016A8\n"
        ".Lpool_080054B4:\n"
        "	.word 0x00001A34\n"
        ".Lpool_080054B8:\n"
        "	.word 0x080E8958\n"
        ".Lpool_080054BC:\n"
        "	.word 0x080E8968\n"
        ".Lpool_080054C0:\n"
        "	.word 0x080E8978\n"
        ".Lpool_080054C4:\n"
        "	.word 0x080E8988\n"
        "_L_080054C8:\n"
        "	str r1, [sp, #0x8c]\n"
        "	mov r0, #1\n"
        "	str r0, [sp, #0x40]\n"
        "	ldr r0, [r6]\n"
        "	add r7, r1, #0\n"
        "	sub r0, r7, r0\n"
        "	asr r4, r0, #4\n"
        "	str r4, [sp, #0x3c]\n"
        "	add r1, sp, #0x40\n"
        "	add r0, sp, #0x3c\n"
        "	cmp r4, #1\n"
        "	bhs _L_080054E2\n"
        "	add r0, r1, #0\n"
        "_L_080054E2:\n"
        "	ldr r0, [r0]\n"
        "	add r0, r4, r0\n"
        "	cmp r0, #0\n"
        "	beq _L_08005500\n"
        "	lsl r4, r0, #4\n"
        "	add r0, r4, #0\n"
        "	bl func_080D01F8\n"
        "	mov sb, r4\n"
        "	cmp r0, #0\n"
        "	bne _L_08005504\n"
        "	mov r0, sb\n"
        "	bl func_080D3BC0\n"
        "	b _L_08005504\n"
        "_L_08005500:\n"
        "	mov r0, #0\n"
        "	mov sb, r0\n"
        "_L_08005504:\n"
        "	add r5, r0, #0\n"
        "	str r5, [sp, #0x90]\n"
        "	ldr r2, [r6]\n"
        "	add r3, r5, #0\n"
        "	mov r0, #0xc0\n"
        "	lsl r0, r0, #2\n"
        "	lsl r0, r0, #2\n"
        "	str r0, [sp, #0x60]\n"
        "	ldr r1, [sp, #0x8c]\n"
        "	cmp r2, r1\n"
        "	beq _L_08005534\n"
        "_L_0800551A:\n"
        "	cmp r3, #0\n"
        "	beq _L_0800552A\n"
        "	add r0, r3, #0\n"
        "	add r1, r2, #0\n"
        "	ldm r1!, {r4, r5, r7}\n"
        "	stm r0!, {r4, r5, r7}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_0800552A:\n"
        "	add r2, #0x10\n"
        "	add r3, #0x10\n"
        "	ldr r0, [sp, #0x8c]\n"
        "	cmp r2, r0\n"
        "	bne _L_0800551A\n"
        "_L_08005534:\n"
        "	add r5, r3, #0\n"
        "	ldr r0, [sp, #0x40]\n"
        "	cmp r0, #1\n"
        "	bne _L_08005550\n"
        "	cmp r5, #0\n"
        "	beq _L_0800554C\n"
        "	add r0, r5, #0\n"
        "	ldr r1, [sp, #0x4c]\n"
        "	ldm r1!, {r2, r3, r4}\n"
        "	stm r0!, {r2, r3, r4}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_0800554C:\n"
        "	add r5, #0x10\n"
        "	b _L_08005572\n"
        "_L_08005550:\n"
        "	add r3, r0, #0\n"
        "	add r2, r5, #0\n"
        "	cmp r3, #0\n"
        "	beq _L_08005570\n"
        "_L_08005558:\n"
        "	cmp r2, #0\n"
        "	beq _L_08005568\n"
        "	add r0, r2, #0\n"
        "	ldr r1, [sp, #0x4c]\n"
        "	ldm r1!, {r4, r5, r7}\n"
        "	stm r0!, {r4, r5, r7}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_08005568:\n"
        "	sub r3, #1\n"
        "	add r2, #0x10\n"
        "	cmp r3, #0\n"
        "	bne _L_08005558\n"
        "_L_08005570:\n"
        "	add r5, r2, #0\n"
        "_L_08005572:\n"
        "	ldr r2, [r6, #4]\n"
        "	ldr r0, [r6]\n"
        "	add r1, r0, #0\n"
        "	cmp r0, r2\n"
        "	beq _L_08005582\n"
        "_L_0800557C:\n"
        "	add r1, #0x10\n"
        "	cmp r1, r2\n"
        "	bne _L_0800557C\n"
        "_L_08005582:\n"
        "	cmp r0, #0\n"
        "	beq _L_0800558A\n"
        "	bl func_080D0260\n"
        "_L_0800558A:\n"
        "	ldr r0, [sp, #0x90]\n"
        "	add r0, sb\n"
        "	ldr r7, [sp, #0x90]\n"
        "	str r7, [r6]\n"
        "	str r5, [r6, #4]\n"
        "	str r0, [r6, #0xc]\n"
        "_L_08005596:\n"
        "	ldr r0, [sp, #0x84]\n"
        "	mov r1, #0xc0\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r0, r1\n"
        "	str r0, [sp, #0x84]\n"
        "	ldr r2, [sp, #0x88]\n"
        "	mov r3, #0xc1\n"
        "	lsl r3, r3, #2\n"
        "	add r2, r2, r3\n"
        "	str r2, [sp, #0x88]\n"
        "	mov r4, #1\n"
        "	add r8, r4\n"
        "	mov r5, r8\n"
        "	cmp r5, #3\n"
        "	bhi _L_080055B6\n"
        "	b _L_08005448\n"
        "_L_080055B6:\n"
        "	mov r7, #0\n"
        "	mov r8, r7\n"
        "	mov r0, sp\n"
        "	add r0, #0xc\n"
        "	str r0, [sp, #0x50]\n"
        "	mov r0, #0xc0\n"
        "	lsl r0, r0, #0x13\n"
        "	ldr r1, [sp, #0x60]\n"
        "	add r0, r1, r0\n"
        "	str r0, [sp, #0x7c]\n"
        "	ldr r2, .Lpool_08005608\n"
        "	add r2, sl\n"
        "	str r2, [sp, #0x80]\n"
        "_L_080055D0:\n"
        "	mov r0, sl\n"
        "	bl func_08008910\n"
        "	add r6, r0, #0\n"
        "	add r0, sp, #0xc\n"
        "	ldr r1, [sp, #0x80]\n"
        "	ldr r2, [sp, #0x7c]\n"
        "	mov r3, #0xe0\n"
        "	lsl r3, r3, #2\n"
        "	bl func_08008F0C\n"
        "	ldr r1, [r6, #4]\n"
        "	ldr r0, [r6, #0xc]\n"
        "	cmp r1, r0\n"
        "	beq _L_0800560C\n"
        "	cmp r1, #0\n"
        "	beq _L_080055FE\n"
        "	add r0, r1, #0\n"
        "	add r1, sp, #0xc\n"
        "	ldm r1!, {r3, r4, r5}\n"
        "	stm r0!, {r3, r4, r5}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_080055FE:\n"
        "	ldr r0, [r6, #4]\n"
        "	add r0, #0x10\n"
        "	str r0, [r6, #4]\n"
        "	b _L_080056CE\n"
        "	.hword 0x0000\n"
        ".Lpool_08005608:\n"
        "	.word 0x00000C1C\n"
        "_L_0800560C:\n"
        "	str r1, [sp, #0x8c]\n"
        "	mov r0, #1\n"
        "	str r0, [sp, #0x48]\n"
        "	ldr r0, [r6]\n"
        "	add r7, r1, #0\n"
        "	sub r0, r7, r0\n"
        "	asr r4, r0, #4\n"
        "	str r4, [sp, #0x44]\n"
        "	add r1, sp, #0x48\n"
        "	add r0, sp, #0x44\n"
        "	cmp r4, #1\n"
        "	bhs _L_08005626\n"
        "	add r0, r1, #0\n"
        "_L_08005626:\n"
        "	ldr r0, [r0]\n"
        "	add r0, r4, r0\n"
        "	cmp r0, #0\n"
        "	beq _L_08005644\n"
        "	lsl r4, r0, #4\n"
        "	add r0, r4, #0\n"
        "	bl func_080D01F8\n"
        "	mov sb, r4\n"
        "	cmp r0, #0\n"
        "	bne _L_08005648\n"
        "	mov r0, sb\n"
        "	bl func_080D3BC0\n"
        "	b _L_08005648\n"
        "_L_08005644:\n"
        "	mov r0, #0\n"
        "	mov sb, r0\n"
        "_L_08005648:\n"
        "	add r5, r0, #0\n"
        "	str r5, [sp, #0x90]\n"
        "	ldr r2, [r6]\n"
        "	add r3, r5, #0\n"
        "	b _L_08005666\n"
        "_L_08005652:\n"
        "	cmp r3, #0\n"
        "	beq _L_08005662\n"
        "	add r0, r3, #0\n"
        "	add r1, r2, #0\n"
        "	ldm r1!, {r4, r5, r7}\n"
        "	stm r0!, {r4, r5, r7}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_08005662:\n"
        "	add r2, #0x10\n"
        "	add r3, #0x10\n"
        "_L_08005666:\n"
        "	ldr r0, [sp, #0x8c]\n"
        "	cmp r2, r0\n"
        "	bne _L_08005652\n"
        "	add r5, r3, #0\n"
        "	ldr r0, [sp, #0x48]\n"
        "	cmp r0, #1\n"
        "	bne _L_08005688\n"
        "	cmp r5, #0\n"
        "	beq _L_08005684\n"
        "	add r0, r5, #0\n"
        "	ldr r1, [sp, #0x50]\n"
        "	ldm r1!, {r2, r3, r4}\n"
        "	stm r0!, {r2, r3, r4}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_08005684:\n"
        "	add r5, #0x10\n"
        "	b _L_080056AA\n"
        "_L_08005688:\n"
        "	add r3, r0, #0\n"
        "	add r2, r5, #0\n"
        "	cmp r3, #0\n"
        "	beq _L_080056A8\n"
        "_L_08005690:\n"
        "	cmp r2, #0\n"
        "	beq _L_080056A0\n"
        "	add r0, r2, #0\n"
        "	ldr r1, [sp, #0x50]\n"
        "	ldm r1!, {r4, r5, r7}\n"
        "	stm r0!, {r4, r5, r7}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_080056A0:\n"
        "	sub r3, #1\n"
        "	add r2, #0x10\n"
        "	cmp r3, #0\n"
        "	bne _L_08005690\n"
        "_L_080056A8:\n"
        "	add r5, r2, #0\n"
        "_L_080056AA:\n"
        "	ldr r2, [r6, #4]\n"
        "	ldr r0, [r6]\n"
        "	add r1, r0, #0\n"
        "	cmp r0, r2\n"
        "	beq _L_080056BA\n"
        "_L_080056B4:\n"
        "	add r1, #0x10\n"
        "	cmp r1, r2\n"
        "	bne _L_080056B4\n"
        "_L_080056BA:\n"
        "	cmp r0, #0\n"
        "	beq _L_080056C2\n"
        "	bl func_080D0260\n"
        "_L_080056C2:\n"
        "	ldr r0, [sp, #0x90]\n"
        "	add r0, sb\n"
        "	ldr r7, [sp, #0x90]\n"
        "	str r7, [r6]\n"
        "	str r5, [r6, #4]\n"
        "	str r0, [r6, #0xc]\n"
        "_L_080056CE:\n"
        "	ldr r0, [sp, #0x7c]\n"
        "	mov r1, #0xe0\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r0, r1\n"
        "	str r0, [sp, #0x7c]\n"
        "	ldr r2, [sp, #0x80]\n"
        "	mov r3, #0xe1\n"
        "	lsl r3, r3, #2\n"
        "	add r2, r2, r3\n"
        "	str r2, [sp, #0x80]\n"
        "	mov r4, #1\n"
        "	add r8, r4\n"
        "	mov r5, r8\n"
        "	cmp r5, #3\n"
        "	bhi _L_080056EE\n"
        "	b _L_080055D0\n"
        "_L_080056EE:\n"
        "	mov r0, #1\n"
        "	neg r0, r0\n"
        "	ldr r4, .Lpool_080057E8\n"
        "	mov r2, #0x80\n"
        "	lsl r2, r2, #4\n"
        "	add r1, r4, #0\n"
        "	bl func_08008EB8\n"
        "	mov r7, #0\n"
        "	mov r8, r7\n"
        "	mov r1, #0x64\n"
        "_L_08005704:\n"
        "	mov r5, #0\n"
        "	mov r2, r8\n"
        "	lsl r0, r2, #6\n"
        "	add r0, r0, r4\n"
        "_L_0800570C:\n"
        "	strh r1, [r0]\n"
        "	add r0, #2\n"
        "	add r5, #1\n"
        "	cmp r5, #0x1d\n"
        "	bls _L_0800570C\n"
        "	mov r3, #1\n"
        "	add r8, r3\n"
        "	mov r5, r8\n"
        "	cmp r5, #0x13\n"
        "	bls _L_08005704\n"
        "	mov r5, #2\n"
        "	ldr r6, .Lpool_080057EC\n"
        "_L_08005724:\n"
        "	mov r7, #0\n"
        "	mov r8, r7\n"
        "	lsl r1, r5, #1\n"
        "	add r4, r5, #0\n"
        "	add r4, #0x6c\n"
        "	add r3, r5, #0\n"
        "	add r3, #0x5e\n"
        "	ldr r0, .Lpool_080057F0\n"
        "	add r2, r1, r0\n"
        "_L_08005736:\n"
        "	strh r3, [r2]\n"
        "	add r0, r1, r6\n"
        "	strh r4, [r0]\n"
        "	add r4, #0x1c\n"
        "	add r3, #0x1c\n"
        "	add r2, #0xc0\n"
        "	add r1, #0xc0\n"
        "	mov r7, #1\n"
        "	add r8, r7\n"
        "	mov r0, r8\n"
        "	cmp r0, #3\n"
        "	bls _L_08005736\n"
        "	add r5, #1\n"
        "	cmp r5, #0xf\n"
        "	bls _L_08005724\n"
        "	mov r5, #0x10\n"
        "	ldr r1, .Lpool_080057F4\n"
        "	add r7, r1, #0\n"
        "	ldr r2, .Lpool_080057EC\n"
        "	mov sb, r2\n"
        "_L_0800575E:\n"
        "	mov r3, #0\n"
        "	mov r8, r3\n"
        "	lsl r1, r5, #1\n"
        "	add r6, r5, #1\n"
        "	add r0, r5, #0\n"
        "	add r0, #0xc\n"
        "	add r4, r0, r7\n"
        "	add r3, r5, r7\n"
        "	ldr r5, .Lpool_080057F0\n"
        "	add r2, r1, r5\n"
        "_L_08005772:\n"
        "	strh r3, [r2]\n"
        "	mov r5, sb\n"
        "	add r0, r1, r5\n"
        "	strh r4, [r0]\n"
        "	add r4, #0x18\n"
        "	add r3, #0x18\n"
        "	add r2, #0xc0\n"
        "	add r1, #0xc0\n"
        "	mov r0, #1\n"
        "	add r8, r0\n"
        "	mov r5, r8\n"
        "	cmp r5, #3\n"
        "	bls _L_08005772\n"
        "	add r5, r6, #0\n"
        "	cmp r5, #0x1b\n"
        "	bls _L_0800575E\n"
        "	ldr r0, .Lpool_080057F8\n"
        "	add r0, sl\n"
        "	ldr r0, [r0]\n"
        "	mov sb, r0\n"
        "	mov r0, sl\n"
        "	bl func_080088DC\n"
        "	mov r8, r0\n"
        "	mov r0, sl\n"
        "	bl func_08008920\n"
        "	add r6, r0, #0\n"
        "	mov r0, sl\n"
        "	bl func_08008918\n"
        "	add r5, r0, #0\n"
        "	mov r0, sl\n"
        "	bl func_08008940\n"
        "	add r4, r0, #0\n"
        "	mov r0, sl\n"
        "	bl func_0800894C\n"
        "	ldr r1, .Lpool_080057FC\n"
        "	add r1, sl\n"
        "	str r4, [sp]\n"
        "	str r0, [sp, #4]\n"
        "	str r1, [sp, #8]\n"
        "	mov r0, sb\n"
        "	mov r1, r8\n"
        "	add r2, r6, #0\n"
        "	add r3, r5, #0\n"
        "	bl func_08050D3C\n"
        "	add sp, #0x94\n"
        "	pop {r3, r4, r5}\n"
        "	mov r8, r3\n"
        "	mov sb, r4\n"
        "	mov sl, r5\n"
        "	pop {r4, r5, r6, r7}\n"
        "	pop {r0}\n"
        "	bx r0\n"
        "	.hword 0x0000\n"
        ".Lpool_080057E8:\n"
        "	.word 0x0600C000\n"
        ".Lpool_080057EC:\n"
        "	.word 0x0600C080\n"
        ".Lpool_080057F0:\n"
        "	.word 0x0600C040\n"
        ".Lpool_080057F4:\n"
        "	.word 0x0000FFF0\n"
        ".Lpool_080057F8:\n"
        "	.word 0x00001A2C\n"
        ".Lpool_080057FC:\n"
        "	.word 0x00001A30\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_08005800 @ 0x08005800 (396B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08005800 @ 0x08005800 (396 bytes)
 * Role   : C++ Class Constructor / Polymorphic Method [vtable: 0x080E8998, 0x080E89A4, 0x080E89A8]
 * Fields : +0x00:u32(R), +0x00:u8(RW)
 * Callees: func_080088DC, func_08008918, func_08008920, func_08008940, func_0800894C, func_08050D34, func_08050D3C, func_08050D5C, func_08050D74, func_08050DF0
 * CFG Structure:
 *   L_08005800: call func_08050D34(); call func_080088DC(); call func_08008920(); call func_08008918(); call func_08008940(); call func_0800894C()
 *   L_08005894: if (==) goto L_080058A6
 *   L_080058A6: call func_08050D5C(); goto L_08005974
 *   L_080058C0: if (> (s)) goto L_080058CE
 *   L_080058CE: if (==) goto L_08005910
 *   L_080058D2: call func_08050D74(); goto L_08005974
 *   L_080058E4: call func_08050E30(); goto L_08005974
 *   L_08005910: call func_08050DF0(); if (> (u)) goto L_08005974
 *   L_0800594C: goto L_08005974
 *   L_08005974: return
 * ========================================================================== */
extern void func_080088DC(void);
extern void func_08008918(void);
extern void func_08008920(void);
extern void func_08008940(void);
extern void func_0800894C(void);
extern void func_08050D34(void);
extern void func_08050D3C(void);
extern void func_08050D5C(void);
extern void func_08050D74(void);
extern void func_08050DF0(void);
extern void func_08050E30(void);
void func_08005800(void) {
    u32 sp0, sp1, sp2;
    int r7_var;
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2));
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	ldr r0, .Lpool_0800586C\n"
        "	add r4, r7, r0\n"
        "	ldr r0, [r4]\n"
        "	bl func_08050D34\n"
        "	add r6, r0, #0\n"
        "	ldr r4, [r4]\n"
        "	mov sb, r4\n"
        "	add r0, r7, #0\n"
        "	bl func_080088DC\n"
        "	mov r8, r0\n"
        "	add r0, r7, #0\n"
        "	bl func_08008920\n"
        "	mov sl, r0\n"
        "	add r0, r7, #0\n"
        "	bl func_08008918\n"
        "	add r5, r0, #0\n"
        "	add r0, r7, #0\n"
        "	bl func_08008940\n"
        "	add r4, r0, #0\n"
        "	add r0, r7, #0\n"
        "	bl func_0800894C\n"
        "	ldr r2, .Lpool_08005870\n"
        "	add r1, r7, r2\n"
        "	str r4, [sp]\n"
        "	str r0, [sp, #4]\n"
        "	str r1, [sp, #8]\n"
        "	mov r0, sb\n"
        "	mov r1, r8\n"
        "	mov r2, sl\n"
        "	add r3, r5, #0\n"
        "	bl func_08050D3C\n"
        "	cmp r0, #6\n"
        "	bls _L_08005860\n"
        "	b _L_08005974\n"
        "_L_08005860:\n"
        "	lsl r0, r0, #2\n"
        "	ldr r1, .Lpool_08005874\n"
        "	add r0, r0, r1\n"
        "	ldr r0, [r0]\n"
        "	mov pc, r0\n"
        "	.align 2, 0\n"
        ".Lpool_0800586C:\n"
        "	.word 0x00001A2C\n"
        ".Lpool_08005870:\n"
        "	.word 0x00001A30\n"
        ".Lpool_08005874:\n"
        "	.word _Ljt_08005878\n"
        "_Ljt_08005878:\n"
        "	.word _L_08005894\n"
        "	.word _L_08005974\n"
        "	.word _L_08005974\n"
        "	.word _L_080058C0\n"
        "	.word _L_08005974\n"
        "	.word _L_08005974\n"
        "	.word _L_08005974\n"
        "_L_08005894:\n"
        "	ldr r1, .Lpool_080058B4\n"
        "	add r0, r7, r1\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_080058A6\n"
        "	ldr r2, .Lpool_080058B8\n"
        "	add r1, r7, r2\n"
        "	mov r0, #1\n"
        "	strb r0, [r1]\n"
        "_L_080058A6:\n"
        "	ldr r1, .Lpool_080058BC\n"
        "	add r0, r7, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08050D5C\n"
        "	b _L_08005974\n"
        "	.align 2, 0\n"
        ".Lpool_080058B4:\n"
        "	.word 0x00001A75\n"
        ".Lpool_080058B8:\n"
        "	.word 0x00001A74\n"
        ".Lpool_080058BC:\n"
        "	.word 0x00001A2C\n"
        "_L_080058C0:\n"
        "	cmp r6, #5\n"
        "	bgt _L_080058CE\n"
        "	cmp r6, #4\n"
        "	bge _L_08005974\n"
        "	cmp r6, #1\n"
        "	beq _L_080058E4\n"
        "	b _L_080058D2\n"
        "_L_080058CE:\n"
        "	cmp r6, #6\n"
        "	beq _L_08005910\n"
        "_L_080058D2:\n"
        "	ldr r2, .Lpool_080058E0\n"
        "	add r0, r7, r2\n"
        "	ldr r0, [r0]\n"
        "	bl func_08050D74\n"
        "	b _L_08005974\n"
        "	.align 2, 0\n"
        ".Lpool_080058E0:\n"
        "	.word 0x00001A2C\n"
        "_L_080058E4:\n"
        "	ldr r1, .Lpool_08005900\n"
        "	add r0, r7, r1\n"
        "	ldr r0, [r0]\n"
        "	ldr r1, .Lpool_08005904\n"
        "	ldr r2, .Lpool_08005908\n"
        "	ldr r3, .Lpool_0800590C\n"
        "	mov r4, #0\n"
        "	str r4, [sp]\n"
        "	str r4, [sp, #4]\n"
        "	str r4, [sp, #8]\n"
        "	bl func_08050E30\n"
        "	b _L_08005974\n"
        "	.align 2, 0\n"
        ".Lpool_08005900:\n"
        "	.word 0x00001A2C\n"
        ".Lpool_08005904:\n"
        "	.word 0x080E8998\n"
        ".Lpool_08005908:\n"
        "	.word 0x080E89A4\n"
        ".Lpool_0800590C:\n"
        "	.word 0x080E89A8\n"
        "_L_08005910:\n"
        "	ldr r2, .Lpool_08005928\n"
        "	add r0, r7, r2\n"
        "	ldr r0, [r0]\n"
        "	bl func_08050DF0\n"
        "	cmp r0, #6\n"
        "	bhi _L_08005974\n"
        "	lsl r0, r0, #2\n"
        "	ldr r1, .Lpool_0800592C\n"
        "	add r0, r0, r1\n"
        "	ldr r0, [r0]\n"
        "	mov pc, r0\n"
        "	.align 2, 0\n"
        ".Lpool_08005928:\n"
        "	.word 0x00001A2C\n"
        ".Lpool_0800592C:\n"
        "	.word _Ljt_08005930\n"
        "_Ljt_08005930:\n"
        "	.word _L_08005974\n"
        "	.word _L_0800594C\n"
        "	.word _L_08005964\n"
        "	.word _L_08005974\n"
        "	.word _L_08005974\n"
        "	.word _L_08005974\n"
        "	.word _L_08005974\n"
        "_L_0800594C:\n"
        "	ldr r1, .Lpool_0800595C\n"
        "	add r0, r7, r1\n"
        "	mov r1, #1\n"
        "	strb r1, [r0]\n"
        "	ldr r2, .Lpool_08005960\n"
        "	add r0, r7, r2\n"
        "	strb r1, [r0]\n"
        "	b _L_08005974\n"
        "	.align 2, 0\n"
        ".Lpool_0800595C:\n"
        "	.word 0x00001A75\n"
        ".Lpool_08005960:\n"
        "	.word 0x00001A76\n"
        "_L_08005964:\n"
        "	ldr r0, =0x00001A75\n"
        "	add r1, r7, r0\n"
        "	mov r2, #0\n"
        "	mov r0, #1\n"
        "	strb r0, [r1]\n"
        "	ldr r1, =0x00001A76\n"
        "	add r0, r7, r1\n"
        "	strb r2, [r0]\n"
        "_L_08005974:\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r10", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_0800598C @ 0x0800598C (68B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080005D4();
extern u32 func_08004EFC();
u32 func_0800598C(u32 *arg0,u32 arg1,u32 arg2,u32 arg3,
             u32 arg4) {
  u32 val;
  *arg0 = 0x080E5AA4;
  val = func_080005D4(0x00001A78);
  val = func_08004EFC(val,arg1,arg2,arg3,arg4);
  arg0[1] = val;
  return arg0;
}

/* --- func_080059D0 @ 0x080059D0 (48B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080007EC();
extern u32 func_080D3914();
void func_080059D0(u32 *arg0,u32 arg1) {
  int val;
  *arg0 = 0x080E5AA4;
  val = arg0[1];
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  func_080007EC(arg0,arg1);
}

/* --- func_08005A00 @ 0x08005A00 (60B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08005A00 @ 0x08005A00 (60 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(R), +0x08:u32(R)
 * Callees: func_080050F8, func_080D3914
 * CFG Structure:
 *   L_08005A00: call func_080050F8(); if (==) goto L_08005A30
 *   L_08005A30: return
 * ========================================================================== */
extern void func_080050F8(void);
extern void func_080D3914(void);
int func_08005A00(void) {
    u32 sp0, sp1, sp2;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2));
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	ldr r1, [r1, #4]\n"
        "	mov r0, sp\n"
        "	bl func_080050F8\n"
        "	ldr r2, [sp]\n"
        "	mov r0, sp\n"
        "	str r0, [sp, #4]\n"
        "	str r2, [sp, #8]\n"
        "	add r1, r0, #0\n"
        "	mov r0, #0\n"
        "	str r0, [r1]\n"
        "	str r2, [r4]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_08005A30\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_08005A30:\n"
        "	add r0, r4, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "lr", "memory"
    );
    return __ret;
}

/* --- func_08005A3C @ 0x08005A3C (16B) [PURE-C | agbcc_O2] --- */
#define NULL 0

u8 func_08005A3C(u32 *arg0) {
    return *(u8 *)(arg0[1] + 0x1A76);
}

/* --- func_08005A58 @ 0x08005A58 (224B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_08008444();
extern void func_08008B54();
extern int func_080005D4();
extern void func_0800835C();
extern void func_0800770C();
extern int func_08050CC0();
extern void func_08007714();
extern void func_08008364();
int func_08005A58(int param_1, int param_2, int param_3) {
    u32 sp0, sp1, sp2, sp3, sp4;
    int r7_var;
    register int r6 asm("r6");
    register int r5 asm("r5");
    register int r4 asm("r4");
    register int ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4));
    __asm__ volatile(
        "add %2, r0, #0\n\t"
        "mov r8, r1\n\t"
        "add %0, r2, #0\n\t"
        "bl func_08008444\n\t"
        "ldr r0, =0x080E5AB4\n\t"
        "str r0, [%2, #4]\n\t"
        "mov r0, #7\n\t"
        "add %1, sp, #0x10\n\t"
        "mov r1, #1\n\t"
        "neg r1, r1\n"
        "_loop1_05A58:\n\t"
        "sub r0, #1\n\t"
        "cmp r0, r1\n\t"
        "bne _loop1_05A58\n\t"
        "ldr r1, =0x000045F0\n\t"
        "add r0, %2, r1\n\t"
        "mov r1, #1\n\t"
        "bl func_08008B54\n\t"
        "ldr r2, =0x000045F4\n\t"
        "add r0, %2, r2\n\t"
        "mov r1, #2\n\t"
        "bl func_08008B54\n\t"
        "mov r0, #4\n\t"
        "bl func_080005D4\n\t"
        "add %3, r0, #0\n\t"
        "add r0, sp, #0xc\n\t"
        "bl func_0800835C\n\t"
        "add r0, %1, #0\n\t"
        "bl func_0800770C\n\t"
        "mov r0, #0\n\t"
        "str r0, [sp]\n\t"
        "add r3, sp, #0xc\n\t"
        "str r3, [sp, #4]\n\t"
        "str %1, [sp, #8]\n\t"
        "add r0, %3, #0\n\t"
        "mov r1, #0\n\t"
        "mov r2, #0xf\n\t"
        "mov r3, #4\n\t"
        "bl func_08050CC0\n\t"
        "ldr %3, =0x000045F8\n\t"
        "add r1, %2, %3\n\t"
        "str r0, [r1]\n\t"
        "add r0, %1, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_08007714\n\t"
        "add r0, sp, #0xc\n\t"
        "mov r1, #2\n\t"
        "bl func_08008364\n\t"
        "ldr %1, =0x000045FC\n\t"
        "add r0, %2, %1\n\t"
        "mov r1, r8\n\t"
        "str r1, [r0]\n\t"
        "ldr r3, =0x0000461C\n\t"
        "add r2, %2, r3\n\t"
        "add r1, r2, #0\n\t"
        "ldr r0, =0x080E8BE4\n\t"
        "ldmia r0!, {r3, %3, %1}\n\t"
        "stmia r1!, {r3, %3, %1}\n\t"
        "ldrb r0, [r0]\n\t"
        "strb r0, [r1]\n\t"
        "cmp %0, #0\n\t"
        "beq _end_05A58\n\t"
        "mov r3, #0\n\t"
        "ldrb r0, [%0]\n\t"
        "cmp r0, #0\n\t"
        "beq _end_05A58\n\t"
        "add %3, r2, #0\n\t"
        "add r2, %0, #0\n"
        "_copy_loop_05A58:\n\t"
        "add r1, %3, r3\n\t"
        "ldrb r0, [r2]\n\t"
        "strb r0, [r1]\n\t"
        "add r2, #1\n\t"
        "add r3, #1\n\t"
        "cmp r3, #0xc\n\t"
        "bgt _end_05A58\n\t"
        "ldrb r0, [r2]\n\t"
        "cmp r0, #0\n\t"
        "bne _copy_loop_05A58\n"
        "_end_05A58:\n\t"
        "add r0, %2, #0"
        : "=l"(r7_var), "=l"(r6), "=l"(r5), "=l"(r4) : : "r0", "r1", "r2", "r3", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    __asm__ volatile("" : "=r"(ret));
    return ret;
}

/* --- func_08005B38 @ 0x08005B38 (48B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080086BC();
extern u32 func_08050D0C();
void func_08005B38(int arg0,u32 arg1) {
  *(u32 *)(arg0 + 4) = 0x080E5AB4;
  if (*(int *)(arg0 + 0x000045F8) != 0) {
    func_08050D0C(*(int *)(arg0 + 0x000045F8),3);
  }
  func_080086BC(arg0,arg1);
}

/* --- func_08005B68 @ 0x08005B68 (372B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08005B68 @ 0x08005B68 (372 bytes)
 * Role   : C++ Class Constructor / Polymorphic Method [vtable: 0x080E5B80]
 * Fields : +0x00:u16(W), +0x00:u32(RW), +0x00:u8(R), +0x04:u32(W), +0x08:u32(R), +0x10:u32(R)
 * Callees: func_08005CDC, func_080061A0, func_08006334, func_0800637C, func_080064E8, func_08006858, func_080068CC, func_08006CDC, func_08006ED8, func_08007874
 * CFG Structure:
 *   L_08005B68: call func_08008724(); call func_08007874(); call func_08007C28(); call func_08007B54(); call func_08007D4C(); call func_08005CDC()
 *   L_08005C0E: call func_080087C8(); if (< (s)) goto L_08005C0E
 *   L_08005C28: call func_080088B8(); call func_08006CDC(); call func_080068CC(); call func_0800637C(); call func_080064E8(); call func_08006858()
 *   L_08005C58: if (==) goto L_08005C28
 *   L_08005C88: call func_080087C8()
 *   L_08005C8E: if (< (s)) goto L_08005C88
 *   L_08005CB6: call func_080094B8(); call func_08007C28(); call func_080079E8(); return
 * ========================================================================== */
extern void func_08005CDC(void);
extern void func_080061A0(void);
extern void func_08006334(void);
extern void func_0800637C(void);
extern void func_080064E8(void);
extern void func_08006858(void);
extern void func_080068CC(void);
extern void func_08006CDC(void);
extern void func_08006ED8(void);
extern void func_08007874(void);
extern void func_080079E8(void);
extern void func_08007B54(void);
extern void func_08007C28(void);
extern void func_08007D4C(void);
extern void func_08008724(void);
extern void func_080087C8(void);
extern void func_080088B8(void);
extern void func_08008918(void);
extern void func_08008940(void);
extern void func_08009300(void);
extern void func_0800934C(void);
extern void func_08009378(void);
extern void func_080094B8(void);
extern void func_080D3914(void);
int func_08005B68(void) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5, sp6, sp7, sp8, sp9;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5), "m"(sp6), "m"(sp7), "m"(sp8), "m"(sp9));
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	add r6, r1, #0\n"
        "	add r0, r6, #0\n"
        "	bl func_08008724\n"
        "	mov r0, sp\n"
        "	bl func_08007874\n"
        "	mov r5, #0\n"
        "	str r5, [sp, #4]\n"
        "	mov r0, sp\n"
        "	mov r1, #0\n"
        "	bl func_08007C28\n"
        "	mov r0, sp\n"
        "	mov r1, #3\n"
        "	bl func_08007B54\n"
        "	add r1, r0, #0\n"
        "	str r1, [sp, #4]\n"
        "	mov r0, sp\n"
        "	bl func_08007D4C\n"
        "	add r4, r0, #0\n"
        "	add r0, r6, #0\n"
        "	bl func_08005CDC\n"
        "	add r0, r6, #0\n"
        "	add r1, r4, #0\n"
        "	bl func_080061A0\n"
        "	add r0, r6, #0\n"
        "	bl func_08006334\n"
        "	add r0, r6, #0\n"
        "	bl func_0800637C\n"
        "	add r0, r6, #0\n"
        "	bl func_08008918\n"
        "	add r1, sp, #8\n"
        "	mov r2, #0x3f\n"
        "	strh r2, [r1]\n"
        "	add r0, #0x50\n"
        "	strh r2, [r0]\n"
        "	add r0, r6, #0\n"
        "	bl func_08008918\n"
        "	add r1, r0, #0\n"
        "	add r4, sp, #0xc\n"
        "	str r5, [sp, #0xc]\n"
        "	str r5, [r4, #4]\n"
        "	ldr r0, .Lpool_08005C20\n"
        "	str r0, [sp, #0x14]\n"
        "	add r0, sp, #0x18\n"
        "	bl func_08009300\n"
        "	ldr r1, .Lpool_08005C24\n"
        "	add r0, sp, #0x18\n"
        "	mov r2, #1\n"
        "	mov r3, #1\n"
        "	bl func_0800934C\n"
        "	add r0, r6, #0\n"
        "	bl func_08008940\n"
        "	ldr r1, [r0, #8]\n"
        "	ldr r2, [r1, #0x10]\n"
        "	add r1, r4, #0\n"
        "	bl func_080D3914\n"
        "	ldr r0, [sp, #0xc]\n"
        "	neg r1, r0\n"
        "	orr r1, r0\n"
        "	mov r8, r4\n"
        "	add r5, sp, #0x1c\n"
        "	add r4, sp, #0x20\n"
        "	cmp r1, #0\n"
        "	bge _L_08005C58\n"
        "_L_08005C0E:\n"
        "	add r0, r6, #0\n"
        "	bl func_080087C8\n"
        "	ldr r0, [sp, #0xc]\n"
        "	neg r1, r0\n"
        "	orr r1, r0\n"
        "	cmp r1, #0\n"
        "	blt _L_08005C0E\n"
        "	b _L_08005C58\n"
        "	.align 2, 0\n"
        ".Lpool_08005C20:\n"
        "	.word 0x080E5B80\n"
        ".Lpool_08005C24:\n"
        "	.word 0x00000889\n"
        "_L_08005C28:\n"
        "	add r0, r6, #0\n"
        "	bl func_080088B8\n"
        "	add r0, r6, #0\n"
        "	bl func_08006CDC\n"
        "	add r0, r6, #0\n"
        "	bl func_080068CC\n"
        "	add r0, r6, #0\n"
        "	bl func_0800637C\n"
        "	add r0, r6, #0\n"
        "	bl func_080064E8\n"
        "	add r0, r6, #0\n"
        "	bl func_08006858\n"
        "	add r0, r6, #0\n"
        "	bl func_08006ED8\n"
        "	add r0, r6, #0\n"
        "	bl func_080087C8\n"
        "_L_08005C58:\n"
        "	ldr r1, .Lpool_08005C80\n"
        "	add r0, r6, r1\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_08005C28\n"
        "	ldr r1, .Lpool_08005C84\n"
        "	add r0, sp, #0x18\n"
        "	mov r2, #1\n"
        "	mov r3, #1\n"
        "	bl func_08009378\n"
        "	add r0, r6, #0\n"
        "	bl func_08008940\n"
        "	ldr r1, [r0, #8]\n"
        "	ldr r2, [r1, #0x10]\n"
        "	mov r1, r8\n"
        "	bl func_080D3914\n"
        "	b _L_08005C8E\n"
        "	.align 2, 0\n"
        ".Lpool_08005C80:\n"
        "	.word 0x00004636\n"
        ".Lpool_08005C84:\n"
        "	.word 0x00000889\n"
        "_L_08005C88:\n"
        "	add r0, r6, #0\n"
        "	bl func_080087C8\n"
        "_L_08005C8E:\n"
        "	ldr r1, [sp, #0xc]\n"
        "	neg r0, r1\n"
        "	orr r0, r1\n"
        "	cmp r0, #0\n"
        "	blt _L_08005C88\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #0x1c]\n"
        "	str r5, [sp, #0x20]\n"
        "	str r0, [r4, #4]\n"
        "	str r0, [r5]\n"
        "	str r0, [r7]\n"
        "	ldr r1, [sp, #0x1c]\n"
        "	cmp r1, #0\n"
        "	beq _L_08005CB6\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_08005CB6:\n"
        "	mov r0, r8\n"
        "	mov r1, #2\n"
        "	bl func_080094B8\n"
        "	ldr r1, [sp, #4]\n"
        "	mov r0, sp\n"
        "	bl func_08007C28\n"
        "	mov r0, sp\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_08005CDC @ 0x08005CDC (1220B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08005CDC @ 0x08005CDC (1220 bytes)
 * Role   : C++ Class Constructor / Polymorphic Method [vtable: 0x080E8BF4]
 * Fields : +0x00:u16(W), +0x00:u32(RW), +0x00:u8(W), +0x02:u16(W), +0x04:u32(RW), +0x0A:u16(W), +0x0C:u16(W), +0x0C:u32(RW)
 * Callees: func_080064E8, func_080088DC, func_08008910, func_08008918, func_08008920, func_08008940, func_0800894C, func_08008E64, func_08008EB8, func_08008F0C
 * CFG Structure:
 *   L_08005CDC: call func_08008E64(); call func_08008E64(); call func_08008918(); call func_08008918(); call func_08008918(); call func_08051320()
 *   L_08005D90: if (<= (u)) goto L_08005D90
 *   L_08005DA6: if (<= (u)) goto L_08005DA6
 *   L_08005DCA: if (<= (u)) goto L_08005DCA
 *   L_08005DF0: if (<= (u)) goto L_08005DF0
 *   L_08005E14: if (<= (u)) goto L_08005E14
 *   L_08005E40: if (<= (u)) goto L_08005E40
 *   L_08005E52: call func_08008EB8(); call func_0804E7A0(); call func_0804E8F0(); call func_08008910(); call func_08008F0C(); if (==) goto L_08005F1C
 *   L_08005EBE: goto L_08005FE0
 *   L_08005F1C: if (>= (u)) goto L_08005F34
 * ========================================================================== */
extern void func_080064E8(void);
extern void func_080088DC(void);
extern void func_08008910(void);
extern void func_08008918(void);
extern void func_08008920(void);
extern void func_08008940(void);
extern void func_0800894C(void);
extern void func_08008E64(void);
extern void func_08008EB8(void);
extern void func_08008F0C(void);
extern void func_0804E7A0(void);
extern void func_0804E8F0(void);
extern void func_08050D3C(void);
extern void func_08051320(void);
extern void func_080D01F8(void);
extern void func_080D0260(void);
extern void func_080D3BC0(void);
void func_08005CDC(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, r7, lr}\n"
        "	mov r7, sl\n"
        "	mov r6, sb\n"
        "	mov r5, r8\n"
        "	push {r5, r6, r7}\n"
        "	sub sp, #0x54\n"
        "	mov sl, r0\n"
        "	ldr r0, .Lpool_08005EC8\n"
        "	ldr r0, [r0]\n"
        "	ldr r1, .Lpool_08005ECC\n"
        "	ldr r2, .Lpool_08005ED0\n"
        "	ldr r2, [r2]\n"
        "	bl func_08008E64\n"
        "	ldr r0, .Lpool_08005ED4\n"
        "	ldr r0, [r0]\n"
        "	mov r1, #0xa0\n"
        "	lsl r1, r1, #0x13\n"
        "	mov r2, #0x20\n"
        "	bl func_08008E64\n"
        "	mov r0, sl\n"
        "	bl func_08008918\n"
        "	add r1, sp, #0xc\n"
        "	mov r3, #0xba\n"
        "	lsl r3, r3, #5\n"
        "	add r2, r3, #0\n"
        "	strh r2, [r1]\n"
        "	mov r4, #0\n"
        "	strh r2, [r0]\n"
        "	mov r0, sl\n"
        "	bl func_08008918\n"
        "	add r2, sp, #0xc\n"
        "	ldr r5, .Lpool_08005ED8\n"
        "	add r1, r5, #0\n"
        "	strh r1, [r2]\n"
        "	strh r1, [r0, #0xa]\n"
        "	mov r0, sl\n"
        "	bl func_08008918\n"
        "	add r2, sp, #0xc\n"
        "	ldr r7, .Lpool_08005EDC\n"
        "	add r1, r7, #0\n"
        "	strh r1, [r2]\n"
        "	strh r1, [r0, #0xc]\n"
        "	ldr r0, .Lpool_08005EE0\n"
        "	mov r1, #0x14\n"
        "	str r1, [sp]\n"
        "	mov r1, #0x96\n"
        "	lsl r1, r1, #2\n"
        "	str r1, [sp, #4]\n"
        "	str r4, [sp, #8]\n"
        "	mov r1, #0\n"
        "	mov r2, #0\n"
        "	mov r3, #0x1e\n"
        "	bl func_08051320\n"
        "	mov r0, #1\n"
        "	neg r0, r0\n"
        "	ldr r4, .Lpool_08005EE4\n"
        "	mov r2, #0x80\n"
        "	lsl r2, r2, #4\n"
        "	add r1, r4, #0\n"
        "	bl func_08008EB8\n"
        "	mov r1, #0\n"
        "	add r0, sp, #0x20\n"
        "	mov r8, r0\n"
        "	add r2, sp, #0x24\n"
        "	mov sb, r2\n"
        "	mov r3, sp\n"
        "	add r3, #0x10\n"
        "	str r3, [sp, #0x44]\n"
        "	mov r5, sp\n"
        "	add r5, #0x30\n"
        "	str r5, [sp, #0x48]\n"
        "	mov r7, sl\n"
        "	add r7, #0xc\n"
        "	ldr r0, .Lpool_08005EE8\n"
        "	add r0, sl\n"
        "	str r0, [sp, #0x40]\n"
        "	mov r2, #0xd1\n"
        "	lsl r2, r2, #1\n"
        "	add r6, r2, #0\n"
        "_L_08005D88:\n"
        "	mov r3, #0\n"
        "	lsl r2, r1, #6\n"
        "	add r5, r1, #1\n"
        "	add r0, r2, r4\n"
        "_L_08005D90:\n"
        "	strh r6, [r0]\n"
        "	add r0, #2\n"
        "	add r3, #1\n"
        "	cmp r3, #0x1d\n"
        "	bls _L_08005D90\n"
        "	add r1, r5, #0\n"
        "	cmp r1, #0x13\n"
        "	bls _L_08005D88\n"
        "	mov r3, #0xa\n"
        "	ldr r2, .Lpool_08005EEC\n"
        "	ldr r1, .Lpool_08005EF0\n"
        "_L_08005DA6:\n"
        "	strh r3, [r1]\n"
        "	add r0, r3, #0\n"
        "	add r0, #0x1e\n"
        "	strh r0, [r2]\n"
        "	add r2, #2\n"
        "	add r1, #2\n"
        "	add r3, #1\n"
        "	cmp r3, #0xf\n"
        "	bls _L_08005DA6\n"
        "	mov r3, #3\n"
        "	mov r4, #0xd2\n"
        "	lsl r4, r4, #1\n"
        "	add r5, r4, #0\n"
        "	mov r0, #0xe1\n"
        "	lsl r0, r0, #1\n"
        "	add r4, r0, #0\n"
        "	ldr r2, .Lpool_08005EF4\n"
        "	ldr r1, .Lpool_08005EF8\n"
        "_L_08005DCA:\n"
        "	add r0, r3, r5\n"
        "	strh r0, [r1]\n"
        "	add r0, r3, r4\n"
        "	strh r0, [r2]\n"
        "	add r2, #2\n"
        "	add r1, #2\n"
        "	add r3, #1\n"
        "	cmp r3, #0x1a\n"
        "	bls _L_08005DCA\n"
        "	mov r1, #4\n"
        "	ldr r4, .Lpool_08005EE4\n"
        "_L_08005DE0:\n"
        "	mov r3, #0\n"
        "	lsl r2, r1, #6\n"
        "	add r5, r1, #1\n"
        "	sub r1, #2\n"
        "	lsl r0, r1, #4\n"
        "	sub r0, r0, r1\n"
        "	lsl r1, r0, #1\n"
        "	add r2, r2, r4\n"
        "_L_08005DF0:\n"
        "	add r0, r1, r3\n"
        "	strh r0, [r2]\n"
        "	add r2, #2\n"
        "	add r3, #1\n"
        "	cmp r3, #0x1d\n"
        "	bls _L_08005DF0\n"
        "	add r1, r5, #0\n"
        "	cmp r1, #0xf\n"
        "	bls _L_08005DE0\n"
        "	mov r3, #0x12\n"
        "	mov r1, #0xf0\n"
        "	lsl r1, r1, #1\n"
        "	add r5, r1, #0\n"
        "	mov r2, #0xff\n"
        "	lsl r2, r2, #1\n"
        "	add r4, r2, #0\n"
        "	ldr r2, .Lpool_08005EFC\n"
        "	ldr r1, .Lpool_08005F00\n"
        "_L_08005E14:\n"
        "	add r0, r3, r5\n"
        "	strh r0, [r1]\n"
        "	add r0, r3, r4\n"
        "	strh r0, [r2]\n"
        "	add r2, #2\n"
        "	add r1, #2\n"
        "	add r3, #1\n"
        "	cmp r3, #0x1d\n"
        "	bls _L_08005E14\n"
        "	ldr r0, .Lpool_08005F04\n"
        "	add r0, sl\n"
        "	ldr r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_08005E52\n"
        "	mov r3, #1\n"
        "	ldr r4, .Lpool_08005F08\n"
        "	add r5, r4, #0\n"
        "	mov r0, #0x89\n"
        "	lsl r0, r0, #2\n"
        "	add r4, r0, #0\n"
        "	ldr r2, .Lpool_08005F0C\n"
        "	ldr r1, .Lpool_08005F10\n"
        "_L_08005E40:\n"
        "	add r0, r3, r5\n"
        "	strh r0, [r1]\n"
        "	add r0, r3, r4\n"
        "	strh r0, [r2]\n"
        "	add r2, #2\n"
        "	add r1, #2\n"
        "	add r3, #1\n"
        "	cmp r3, #9\n"
        "	bls _L_08005E40\n"
        "_L_08005E52:\n"
        "	ldr r1, .Lpool_08005F14\n"
        "	mov r0, #0\n"
        "	mov r2, #0x20\n"
        "	bl func_08008EB8\n"
        "	mov r4, #0x1e\n"
        "	mov r5, #2\n"
        "	add r0, sp, #0x20\n"
        "	strh r4, [r0]\n"
        "	mov r1, r8\n"
        "	strh r5, [r1, #2]\n"
        "	ldr r0, [sp, #0x20]\n"
        "	add r1, r7, #0\n"
        "	mov r2, #0\n"
        "	bl func_0804E7A0\n"
        "	ldr r1, .Lpool_08005F18\n"
        "	add r0, sp, #0x24\n"
        "	strh r4, [r0]\n"
        "	mov r2, sb\n"
        "	strh r5, [r2, #2]\n"
        "	ldr r0, [sp, #0x24]\n"
        "	str r1, [sp]\n"
        "	add r1, r7, #0\n"
        "	mov r2, #0x58\n"
        "	mov r3, #0\n"
        "	bl func_0804E8F0\n"
        "	mov r0, sl\n"
        "	bl func_08008910\n"
        "	mov r3, #0xf0\n"
        "	lsl r3, r3, #3\n"
        "	add r6, r0, #0\n"
        "	add r0, sp, #0x10\n"
        "	add r1, r7, #0\n"
        "	mov r2, #0xc0\n"
        "	lsl r2, r2, #0x13\n"
        "	bl func_08008F0C\n"
        "	ldr r3, [sp, #0x44]\n"
        "	mov r8, r3\n"
        "	ldr r1, [r6, #4]\n"
        "	ldr r0, [r6, #0xc]\n"
        "	cmp r1, r0\n"
        "	beq _L_08005F1C\n"
        "	cmp r1, #0\n"
        "	beq _L_08005EBE\n"
        "	add r0, r1, #0\n"
        "	mov r1, r8\n"
        "	ldm r1!, {r4, r5, r7}\n"
        "	stm r0!, {r4, r5, r7}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_08005EBE:\n"
        "	ldr r0, [r6, #4]\n"
        "	add r0, #0x10\n"
        "	str r0, [r6, #4]\n"
        "	b _L_08005FE0\n"
        "	.hword 0x0000\n"
        ".Lpool_08005EC8:\n"
        "	.word 0x080F9F70\n"
        ".Lpool_08005ECC:\n"
        "	.word 0x06004B00\n"
        ".Lpool_08005ED0:\n"
        "	.word 0x080F9F74\n"
        ".Lpool_08005ED4:\n"
        "	.word 0x080F9F78\n"
        ".Lpool_08005ED8:\n"
        "	.word 0x00001841\n"
        ".Lpool_08005EDC:\n"
        "	.word 0x00001F02\n"
        ".Lpool_08005EE0:\n"
        "	.word 0x0600F800\n"
        ".Lpool_08005EE4:\n"
        "	.word 0x0600C000\n"
        ".Lpool_08005EE8:\n"
        "	.word 0x000043B0\n"
        ".Lpool_08005EEC:\n"
        "	.word 0x0600C094\n"
        ".Lpool_08005EF0:\n"
        "	.word 0x0600C054\n"
        ".Lpool_08005EF4:\n"
        "	.word 0x0600C486\n"
        ".Lpool_08005EF8:\n"
        "	.word 0x0600C446\n"
        ".Lpool_08005EFC:\n"
        "	.word 0x0600C0A4\n"
        ".Lpool_08005F00:\n"
        "	.word 0x0600C064\n"
        ".Lpool_08005F04:\n"
        "	.word 0x000045FC\n"
        ".Lpool_08005F08:\n"
        "	.word 0x0000021B\n"
        ".Lpool_08005F0C:\n"
        "	.word 0x0600C082\n"
        ".Lpool_08005F10:\n"
        "	.word 0x0600C042\n"
        ".Lpool_08005F14:\n"
        "	.word 0x06FFC000\n"
        ".Lpool_08005F18:\n"
        "	.word 0x080E8BF4\n"
        "_L_08005F1C:\n"
        "	str r1, [sp, #0x4c]\n"
        "	mov r0, #1\n"
        "	str r0, [sp, #0x2c]\n"
        "	ldr r0, [r6]\n"
        "	sub r0, r1, r0\n"
        "	asr r4, r0, #4\n"
        "	str r4, [sp, #0x28]\n"
        "	add r1, sp, #0x2c\n"
        "	add r0, sp, #0x28\n"
        "	cmp r4, #1\n"
        "	bhs _L_08005F34\n"
        "	add r0, r1, #0\n"
        "_L_08005F34:\n"
        "	ldr r0, [r0]\n"
        "	add r0, r4, r0\n"
        "	cmp r0, #0\n"
        "	beq _L_08005F52\n"
        "	lsl r4, r0, #4\n"
        "	add r0, r4, #0\n"
        "	bl func_080D01F8\n"
        "	mov sb, r4\n"
        "	cmp r0, #0\n"
        "	bne _L_08005F56\n"
        "	mov r0, sb\n"
        "	bl func_080D3BC0\n"
        "	b _L_08005F56\n"
        "_L_08005F52:\n"
        "	mov r0, #0\n"
        "	mov sb, r0\n"
        "_L_08005F56:\n"
        "	add r5, r0, #0\n"
        "	str r5, [sp, #0x50]\n"
        "	ldr r2, [r6]\n"
        "	add r3, r5, #0\n"
        "	ldr r4, [sp, #0x4c]\n"
        "	cmp r2, r4\n"
        "	beq _L_08005F7E\n"
        "_L_08005F64:\n"
        "	cmp r3, #0\n"
        "	beq _L_08005F74\n"
        "	add r0, r3, #0\n"
        "	add r1, r2, #0\n"
        "	ldm r1!, {r4, r5, r7}\n"
        "	stm r0!, {r4, r5, r7}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_08005F74:\n"
        "	add r2, #0x10\n"
        "	add r3, #0x10\n"
        "	ldr r5, [sp, #0x4c]\n"
        "	cmp r2, r5\n"
        "	bne _L_08005F64\n"
        "_L_08005F7E:\n"
        "	add r5, r3, #0\n"
        "	ldr r0, [sp, #0x2c]\n"
        "	cmp r0, #1\n"
        "	bne _L_08005F9A\n"
        "	cmp r5, #0\n"
        "	beq _L_08005F96\n"
        "	add r0, r5, #0\n"
        "	mov r1, r8\n"
        "	ldm r1!, {r2, r3, r7}\n"
        "	stm r0!, {r2, r3, r7}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_08005F96:\n"
        "	add r5, #0x10\n"
        "	b _L_08005FBC\n"
        "_L_08005F9A:\n"
        "	add r3, r0, #0\n"
        "	add r2, r5, #0\n"
        "	cmp r3, #0\n"
        "	beq _L_08005FBA\n"
        "_L_08005FA2:\n"
        "	cmp r2, #0\n"
        "	beq _L_08005FB2\n"
        "	add r0, r2, #0\n"
        "	mov r1, r8\n"
        "	ldm r1!, {r4, r5, r7}\n"
        "	stm r0!, {r4, r5, r7}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_08005FB2:\n"
        "	sub r3, #1\n"
        "	add r2, #0x10\n"
        "	cmp r3, #0\n"
        "	bne _L_08005FA2\n"
        "_L_08005FBA:\n"
        "	add r5, r2, #0\n"
        "_L_08005FBC:\n"
        "	ldr r2, [r6, #4]\n"
        "	ldr r0, [r6]\n"
        "	add r1, r0, #0\n"
        "	cmp r0, r2\n"
        "	beq _L_08005FCC\n"
        "_L_08005FC6:\n"
        "	add r1, #0x10\n"
        "	cmp r1, r2\n"
        "	bne _L_08005FC6\n"
        "_L_08005FCC:\n"
        "	cmp r0, #0\n"
        "	beq _L_08005FD4\n"
        "	bl func_080D0260\n"
        "_L_08005FD4:\n"
        "	ldr r0, [sp, #0x50]\n"
        "	add r0, sb\n"
        "	ldr r1, [sp, #0x50]\n"
        "	str r1, [r6]\n"
        "	str r5, [r6, #4]\n"
        "	str r0, [r6, #0xc]\n"
        "_L_08005FE0:\n"
        "	mov r1, #0x8c\n"
        "	lsl r1, r1, #7\n"
        "	add r1, sl\n"
        "	mov r0, #0\n"
        "	str r0, [r1]\n"
        "	ldr r0, .Lpool_08006074\n"
        "	add r0, sl\n"
        "	mov r2, #1\n"
        "	mov r8, r2\n"
        "	mov r3, r8\n"
        "	strb r3, [r0]\n"
        "	mov r0, sl\n"
        "	bl func_080064E8\n"
        "	mov r5, #9\n"
        "	mov r6, #2\n"
        "	add r0, sp, #0x30\n"
        "	strh r5, [r0]\n"
        "	ldr r4, [sp, #0x48]\n"
        "	strh r6, [r4, #2]\n"
        "	ldr r0, [sp, #0x30]\n"
        "	ldr r4, [sp, #0x40]\n"
        "	add r1, r4, #0\n"
        "	mov r2, #0\n"
        "	bl func_0804E7A0\n"
        "	ldr r0, .Lpool_08006078\n"
        "	add r0, sl\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_08006032\n"
        "	add r0, sp, #0x34\n"
        "	strh r5, [r0]\n"
        "	strh r6, [r0, #2]\n"
        "	ldr r0, [sp, #0x34]\n"
        "	str r1, [sp]\n"
        "	add r1, r4, #0\n"
        "	mov r2, #0\n"
        "	mov r3, #0\n"
        "	bl func_0804E8F0\n"
        "_L_08006032:\n"
        "	mov r0, sl\n"
        "	bl func_08008910\n"
        "	mov r3, #0x90\n"
        "	lsl r3, r3, #2\n"
        "	add r6, r0, #0\n"
        "	mov r2, #0xf0\n"
        "	lsl r2, r2, #3\n"
        "	lsl r2, r2, #3\n"
        "	ldr r5, .Lpool_0800607C\n"
        "	add r2, r2, r5\n"
        "	add r0, sp, #0xc\n"
        "	ldr r1, [sp, #0x40]\n"
        "	bl func_08008F0C\n"
        "	add r7, sp, #0xc\n"
        "	mov sb, r7\n"
        "	ldr r1, [r6, #4]\n"
        "	ldr r0, [r6, #0xc]\n"
        "	cmp r1, r0\n"
        "	beq _L_08006080\n"
        "	cmp r1, #0\n"
        "	beq _L_0800606C\n"
        "	add r0, r1, #0\n"
        "	add r1, sp, #0xc\n"
        "	ldm r1!, {r2, r3, r4}\n"
        "	stm r0!, {r2, r3, r4}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_0800606C:\n"
        "	ldr r0, [r6, #4]\n"
        "	add r0, #0x10\n"
        "	str r0, [r6, #4]\n"
        "	b _L_08006142\n"
        ".Lpool_08006074:\n"
        "	.word 0x00004637\n"
        ".Lpool_08006078:\n"
        "	.word 0x000045FC\n"
        ".Lpool_0800607C:\n"
        "	.word 0x06000780\n"
        "_L_08006080:\n"
        "	str r1, [sp, #0x4c]\n"
        "	mov r5, r8\n"
        "	str r5, [sp, #0x3c]\n"
        "	ldr r0, [r6]\n"
        "	add r7, r1, #0\n"
        "	sub r0, r7, r0\n"
        "	asr r4, r0, #4\n"
        "	str r4, [sp, #0x38]\n"
        "	add r1, sp, #0x3c\n"
        "	add r0, sp, #0x38\n"
        "	cmp r4, #1\n"
        "	bhs _L_0800609A\n"
        "	add r0, r1, #0\n"
        "_L_0800609A:\n"
        "	ldr r0, [r0]\n"
        "	add r0, r4, r0\n"
        "	cmp r0, #0\n"
        "	beq _L_080060B8\n"
        "	lsl r4, r0, #4\n"
        "	add r0, r4, #0\n"
        "	bl func_080D01F8\n"
        "	mov r8, r4\n"
        "	cmp r0, #0\n"
        "	bne _L_080060BC\n"
        "	mov r0, r8\n"
        "	bl func_080D3BC0\n"
        "	b _L_080060BC\n"
        "_L_080060B8:\n"
        "	mov r0, #0\n"
        "	mov r8, r0\n"
        "_L_080060BC:\n"
        "	add r5, r0, #0\n"
        "	str r5, [sp, #0x50]\n"
        "	ldr r2, [r6]\n"
        "	add r3, r5, #0\n"
        "	b _L_080060DA\n"
        "_L_080060C6:\n"
        "	cmp r3, #0\n"
        "	beq _L_080060D6\n"
        "	add r0, r3, #0\n"
        "	add r1, r2, #0\n"
        "	ldm r1!, {r4, r5, r7}\n"
        "	stm r0!, {r4, r5, r7}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_080060D6:\n"
        "	add r2, #0x10\n"
        "	add r3, #0x10\n"
        "_L_080060DA:\n"
        "	ldr r0, [sp, #0x4c]\n"
        "	cmp r2, r0\n"
        "	bne _L_080060C6\n"
        "	add r5, r3, #0\n"
        "	ldr r0, [sp, #0x3c]\n"
        "	cmp r0, #1\n"
        "	bne _L_080060FC\n"
        "	cmp r5, #0\n"
        "	beq _L_080060F8\n"
        "	add r0, r5, #0\n"
        "	mov r1, sb\n"
        "	ldm r1!, {r2, r3, r4}\n"
        "	stm r0!, {r2, r3, r4}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_080060F8:\n"
        "	add r5, #0x10\n"
        "	b _L_0800611E\n"
        "_L_080060FC:\n"
        "	add r3, r0, #0\n"
        "	add r2, r5, #0\n"
        "	cmp r3, #0\n"
        "	beq _L_0800611C\n"
        "_L_08006104:\n"
        "	cmp r2, #0\n"
        "	beq _L_08006114\n"
        "	add r0, r2, #0\n"
        "	mov r1, sb\n"
        "	ldm r1!, {r4, r5, r7}\n"
        "	stm r0!, {r4, r5, r7}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_08006114:\n"
        "	sub r3, #1\n"
        "	add r2, #0x10\n"
        "	cmp r3, #0\n"
        "	bne _L_08006104\n"
        "_L_0800611C:\n"
        "	add r5, r2, #0\n"
        "_L_0800611E:\n"
        "	ldr r2, [r6, #4]\n"
        "	ldr r0, [r6]\n"
        "	add r1, r0, #0\n"
        "	cmp r0, r2\n"
        "	beq _L_0800612E\n"
        "_L_08006128:\n"
        "	add r1, #0x10\n"
        "	cmp r1, r2\n"
        "	bne _L_08006128\n"
        "_L_0800612E:\n"
        "	cmp r0, #0\n"
        "	beq _L_08006136\n"
        "	bl func_080D0260\n"
        "_L_08006136:\n"
        "	ldr r0, [sp, #0x50]\n"
        "	add r0, r8\n"
        "	ldr r7, [sp, #0x50]\n"
        "	str r7, [r6]\n"
        "	str r5, [r6, #4]\n"
        "	str r0, [r6, #0xc]\n"
        "_L_08006142:\n"
        "	ldr r0, .Lpool_08006198\n"
        "	add r0, sl\n"
        "	ldr r0, [r0]\n"
        "	mov sb, r0\n"
        "	mov r0, sl\n"
        "	bl func_080088DC\n"
        "	mov r8, r0\n"
        "	mov r0, sl\n"
        "	bl func_08008920\n"
        "	add r6, r0, #0\n"
        "	mov r0, sl\n"
        "	bl func_08008918\n"
        "	add r5, r0, #0\n"
        "	mov r0, sl\n"
        "	bl func_08008940\n"
        "	add r4, r0, #0\n"
        "	mov r0, sl\n"
        "	bl func_0800894C\n"
        "	ldr r1, .Lpool_0800619C\n"
        "	add r1, sl\n"
        "	str r4, [sp]\n"
        "	str r0, [sp, #4]\n"
        "	str r1, [sp, #8]\n"
        "	mov r0, sb\n"
        "	mov r1, r8\n"
        "	add r2, r6, #0\n"
        "	add r3, r5, #0\n"
        "	bl func_08050D3C\n"
        "	add sp, #0x54\n"
        "	pop {r3, r4, r5}\n"
        "	mov r8, r3\n"
        "	mov sb, r4\n"
        "	mov sl, r5\n"
        "	pop {r4, r5, r6, r7}\n"
        "	pop {r0}\n"
        "	bx r0\n"
        "	.hword 0x0000\n"
        ".Lpool_08006198:\n"
        "	.word 0x000045F8\n"
        ".Lpool_0800619C:\n"
        "	.word 0x000045F0\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080061A0 @ 0x080061A0 (404B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_08008EB8();
void func_080061A0(int param_1, int param_2) {
    int r7_var;
    register int r6 asm("r6");
    register int r5 asm("r5");
    register int r4 asm("r4");
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %1, r1, #0\n\t"
        "ldr r0, =0x00004608\n\t"
        "add r1, %0, r0\n\t"
        "mov r0, #0\n\t"
        "mov r2, #8\n\t"
        "bl func_08008EB8\n\t"
        "ldr r2, =0x00004614\n\t"
        "add r1, %0, r2\n\t"
        "mov r0, #0\n\t"
        "mov r2, #8\n\t"
        "bl func_08008EB8\n\t"
        "ldr %3, =0x0000460B\n\t"
        "add r3, %0, %3\n\t"
        "ldrb r2, [r3]\n\t"
        "mov r1, #0x3f\n\t"
        "add r0, r1, #0\n\t"
        "and r0, r2\n\t"
        "strb r0, [r3]\n\t"
        "ldr r0, =0x00004617\n\t"
        "add r3, %0, r0\n\t"
        "ldrb r2, [r3]\n\t"
        "add r0, r1, #0\n\t"
        "and r0, r2\n\t"
        "strb r0, [r3]\n\t"
        "ldr r2, =0x00004615\n\t"
        "add r3, %0, r2\n\t"
        "ldrb r0, [r3]\n\t"
        "and r1, r0\n\t"
        "mov r0, #0x80\n\t"
        "orr r1, r0\n\t"
        "strb r1, [r3]\n\t"
        "ldr r0, =0x00004609\n\t"
        "add %3, %0, r0\n\t"
        "ldrb r2, [%3]\n\t"
        "mov r1, #0xd\n\t"
        "neg r1, r1\n\t"
        "add r0, r1, #0\n\t"
        "and r0, r2\n\t"
        "mov r2, #4\n\t"
        "orr r0, r2\n\t"
        "strb r0, [%3]\n\t"
        "ldrb r0, [r3]\n\t"
        "and r1, r0\n\t"
        "orr r1, r2\n\t"
        "strb r1, [r3]\n\t"
        "ldr r2, =0x0000460C\n\t"
        "add %3, %0, r2\n\t"
        "ldr r0, =0x000003FF\n\t"
        "add %2, r0, #0\n\t"
        "add r2, %1, #0\n\t"
        "and r2, %2\n\t"
        "ldrh r3, [%3]\n\t"
        "ldr r1, =0xFFFFFC00\n\t"
        "add r0, r1, #0\n\t"
        "and r0, r3\n\t"
        "orr r0, r2\n\t"
        "strh r0, [%3]\n\t"
        "ldr %3, =0x00004618\n\t"
        "add r3, %0, %3\n\t"
        "and r2, %2\n\t"
        "ldrh r0, [r3]\n\t"
        "and r1, r0\n\t"
        "orr r1, r2\n\t"
        "strh r1, [r3]\n\t"
        "ldr r0, =0x0000460D\n\t"
        "add r3, %0, r0\n\t"
        "ldrb r2, [r3]\n\t"
        "mov r1, #0xf\n\t"
        "add r0, r1, #0\n\t"
        "and r0, r2\n\t"
        "mov %3, #0x40\n\t"
        "orr r0, %3\n\t"
        "strb r0, [r3]\n\t"
        "ldr r0, =0x00004619\n\t"
        "add r2, %0, r0\n\t"
        "ldrb r0, [r2]\n\t"
        "and r1, r0\n\t"
        "orr r1, %3\n\t"
        "strb r1, [r2]\n\t"
        "mov r3, #0\n\t"
        "lsl %1, %1, #5\n\t"
        "ldr r2, =0x88888888\n"
        "_loop_061A0:\n\t"
        "lsl r1, r3, #2\n\t"
        "add r1, %1, r1\n\t"
        "ldr %3, =0x06010000\n\t"
        "add r0, r1, %3\n\t"
        "str r2, [r0]\n\t"
        "add %3, #0x20\n\t"
        "add r0, r1, %3\n\t"
        "str r2, [r0]\n\t"
        "add %3, #0x20\n\t"
        "add r0, r1, %3\n\t"
        "str r2, [r0]\n\t"
        "add %3, #0x20\n\t"
        "add r0, r1, %3\n\t"
        "str r2, [r0]\n\t"
        "add %3, #0x20\n\t"
        "add r0, r1, %3\n\t"
        "str r2, [r0]\n\t"
        "add %3, #0x20\n\t"
        "add r0, r1, %3\n\t"
        "str r2, [r0]\n\t"
        "add %3, #0x20\n\t"
        "add r0, r1, %3\n\t"
        "str r2, [r0]\n\t"
        "ldr r0, =0x060100E0\n\t"
        "add r1, r1, r0\n\t"
        "str r2, [r1]\n\t"
        "add r0, r3, #1\n\t"
        "lsl r0, r0, #0x18\n\t"
        "lsr r3, r0, #0x18\n\t"
        "cmp r3, #7\n\t"
        "bls _loop_061A0\n\t"
        "ldr r1, =0x05000290\n\t"
        "ldr r2, =0x0000027F\n\t"
        "add r0, r2, #0\n\t"
        "strh r0, [r1]\n\t"
        "ldr %3, =0x00004616\n\t"
        "add r3, %0, %3\n\t"
        "ldrh r1, [r3]\n\t"
        "ldr r2, =0xFFFFFE00\n\t"
        "add r0, r2, #0\n\t"
        "and r0, r1\n\t"
        "mov r1, #0x90\n\t"
        "orr r0, r1\n\t"
        "strh r0, [r3]\n\t"
        "ldr r0, =0x00004614\n\t"
        "add r1, %0, r0\n\t"
        "mov %3, #8\n\t"
        "mov r0, #8\n\t"
        "strb r0, [r1]\n\t"
        "ldr r0, =0x0000460A\n\t"
        "add r1, %0, r0\n\t"
        "ldrh r0, [r1]\n\t"
        "and r2, r0\n\t"
        "strh r2, [r1]\n\t"
        "ldr r2, =0x00004608\n\t"
        "add r1, %0, r2\n\t"
        "mov r0, #0x20\n\t"
        "strb r0, [r1]\n\t"
        "ldr r0, =0x00004619\n\t"
        "add r3, %0, r0\n\t"
        "ldrb r2, [r3]\n\t"
        "mov r1, #0xd\n\t"
        "neg r1, r1\n\t"
        "add r0, r1, #0\n\t"
        "and r0, r2\n\t"
        "orr r0, %3\n\t"
        "strb r0, [r3]\n\t"
        "ldr r0, =0x0000460D\n\t"
        "add r2, %0, r0\n\t"
        "ldrb r0, [r2]\n\t"
        "and r1, r0\n\t"
        "orr r1, %3\n\t"
        "strb r1, [r2]"
        : "=l"(r7_var), "=l"(r6), "=l"(r5), "=l"(r4) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_08006334 @ 0x08006334 (72B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08006334 @ 0x08006334 (72 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(W), +0x00:u8(W)
 * CFG Structure:
 *   L_08006334: return
 * ========================================================================== */
void func_08006334(void) {
    __asm__ volatile(
        "	ldr r2, .Lpool_08006370\n"
        "	add r1, r0, r2\n"
        "	mov r2, #0\n"
        "	strb r2, [r1]\n"
        "	ldr r3, .Lpool_08006374\n"
        "	add r1, r0, r3\n"
        "	strb r2, [r1]\n"
        "	sub r3, #2\n"
        "	add r1, r0, r3\n"
        "	strb r2, [r1]\n"
        "	add r3, #1\n"
        "	add r1, r0, r3\n"
        "	strb r2, [r1]\n"
        "	sub r3, #0x32\n"
        "	add r1, r0, r3\n"
        "	strb r2, [r1]\n"
        "	sub r3, #1\n"
        "	add r1, r0, r3\n"
        "	strb r2, [r1]\n"
        "	sub r3, #4\n"
        "	add r1, r0, r3\n"
        "	str r2, [r1]\n"
        "	add r3, #0x10\n"
        "	add r1, r0, r3\n"
        "	strb r2, [r1]\n"
        "	ldr r1, .Lpool_08006378\n"
        "	add r0, r0, r1\n"
        "	str r2, [r0]\n"
        "	bx lr\n"
        "	.hword 0x0000\n"
        ".Lpool_08006370:\n"
        "	.word 0x00004639\n"
        ".Lpool_08006374:\n"
        "	.word 0x00004638\n"
        ".Lpool_08006378:\n"
        "	.word 0x0000463C\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_0800637C @ 0x0800637C (364B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_0800637C @ 0x0800637C (364 bytes)
 * Role   : C++ SGI STL Node Allocator / _Rb_tree / Container Template Method
 * Fields : +0x00:u16(W), +0x00:u32(RW), +0x02:u16(W), +0x04:u32(RW), +0x0C:u32(RW)
 * Callees: func_08008910, func_08008F0C, func_0804E7DC, func_0804E8F0, func_080D01F8, func_080D0260, func_080D3BC0
 * CFG Structure:
 *   L_0800637C: call func_0804E7DC(); call func_0804E8F0(); call func_08008910(); call func_08008F0C(); if (==) goto L_08006418
 *   L_08006408: goto L_080064D8
 *   L_08006418: if (>= (u)) goto L_08006430
 *   L_08006430: if (==) goto L_0800644E
 *   L_08006452: if (==) goto L_08006476
 *   L_0800645E: if (==) goto L_0800646E
 *   L_0800646E: if (!=) goto L_0800645E
 *   L_08006476: if (!=) goto L_08006492
 *   L_0800648E: goto L_080064B4
 *   L_08006492: if (==) goto L_080064B2
 *   L_0800649A: if (==) goto L_080064AA
 * ========================================================================== */
extern void func_08008910(void);
extern void func_08008F0C(void);
extern void func_0804E7DC(void);
extern void func_0804E8F0(void);
extern void func_080D01F8(void);
extern void func_080D0260(void);
extern void func_080D3BC0(void);
void func_0800637C(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, r7, lr}\n"
        "	mov r7, sl\n"
        "	mov r6, sb\n"
        "	mov r5, r8\n"
        "	push {r5, r6, r7}\n"
        "	sub sp, #0x30\n"
        "	add r5, r0, #0\n"
        "	mov r0, #0xf0\n"
        "	lsl r0, r0, #3\n"
        "	mov sb, r0\n"
        "	mov r1, #0x60\n"
        "	mov r2, #0x10\n"
        "	mov r3, #0\n"
        "	add r0, sp, #0x1c\n"
        "	mov r6, #0x1e\n"
        "	mov r4, #2\n"
        "	mov r8, r4\n"
        "	strh r6, [r0]\n"
        "	mov r7, r8\n"
        "	strh r7, [r0, #2]\n"
        "	ldr r0, [sp, #0x1c]\n"
        "	ldr r7, .Lpool_08006410\n"
        "	add r4, r5, r7\n"
        "	str r1, [sp]\n"
        "	str r2, [sp, #4]\n"
        "	str r3, [sp, #8]\n"
        "	add r1, r4, #0\n"
        "	mov r2, #0\n"
        "	bl func_0804E7DC\n"
        "	ldr r0, .Lpool_08006414\n"
        "	add r1, r5, r0\n"
        "	add r0, sp, #0x20\n"
        "	strh r6, [r0]\n"
        "	mov r2, r8\n"
        "	strh r2, [r0, #2]\n"
        "	ldr r0, [sp, #0x20]\n"
        "	str r1, [sp]\n"
        "	add r1, r4, #0\n"
        "	mov r2, #0x90\n"
        "	mov r3, #0\n"
        "	bl func_0804E8F0\n"
        "	add r0, r5, #0\n"
        "	bl func_08008910\n"
        "	add r6, r0, #0\n"
        "	mov r3, sb\n"
        "	lsl r2, r3, #3\n"
        "	mov r0, #0xc0\n"
        "	lsl r0, r0, #0x13\n"
        "	add r2, r2, r0\n"
        "	add r0, sp, #0xc\n"
        "	add r1, r4, #0\n"
        "	bl func_08008F0C\n"
        "	add r4, sp, #0xc\n"
        "	mov sb, r4\n"
        "	ldr r1, [r6, #4]\n"
        "	ldr r0, [r6, #0xc]\n"
        "	cmp r1, r0\n"
        "	beq _L_08006418\n"
        "	cmp r1, #0\n"
        "	beq _L_08006408\n"
        "	add r0, r1, #0\n"
        "	add r1, sp, #0xc\n"
        "	ldm r1!, {r2, r5, r7}\n"
        "	stm r0!, {r2, r5, r7}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_08006408:\n"
        "	ldr r0, [r6, #4]\n"
        "	add r0, #0x10\n"
        "	str r0, [r6, #4]\n"
        "	b _L_080064D8\n"
        ".Lpool_08006410:\n"
        "	.word 0x00003C2C\n"
        ".Lpool_08006414:\n"
        "	.word 0x0000461C\n"
        "_L_08006418:\n"
        "	mov sl, r1\n"
        "	mov r0, #1\n"
        "	str r0, [sp, #0x28]\n"
        "	ldr r0, [r6]\n"
        "	sub r0, r1, r0\n"
        "	asr r4, r0, #4\n"
        "	str r4, [sp, #0x24]\n"
        "	add r1, sp, #0x28\n"
        "	add r0, sp, #0x24\n"
        "	cmp r4, #1\n"
        "	bhs _L_08006430\n"
        "	add r0, r1, #0\n"
        "_L_08006430:\n"
        "	ldr r0, [r0]\n"
        "	add r0, r4, r0\n"
        "	cmp r0, #0\n"
        "	beq _L_0800644E\n"
        "	lsl r4, r0, #4\n"
        "	add r0, r4, #0\n"
        "	bl func_080D01F8\n"
        "	mov r8, r4\n"
        "	cmp r0, #0\n"
        "	bne _L_08006452\n"
        "	mov r0, r8\n"
        "	bl func_080D3BC0\n"
        "	b _L_08006452\n"
        "_L_0800644E:\n"
        "	mov r0, #0\n"
        "	mov r8, r0\n"
        "_L_08006452:\n"
        "	add r5, r0, #0\n"
        "	str r5, [sp, #0x2c]\n"
        "	ldr r2, [r6]\n"
        "	add r3, r5, #0\n"
        "	cmp r2, sl\n"
        "	beq _L_08006476\n"
        "_L_0800645E:\n"
        "	cmp r3, #0\n"
        "	beq _L_0800646E\n"
        "	add r0, r3, #0\n"
        "	add r1, r2, #0\n"
        "	ldm r1!, {r4, r5, r7}\n"
        "	stm r0!, {r4, r5, r7}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_0800646E:\n"
        "	add r2, #0x10\n"
        "	add r3, #0x10\n"
        "	cmp r2, sl\n"
        "	bne _L_0800645E\n"
        "_L_08006476:\n"
        "	add r5, r3, #0\n"
        "	ldr r0, [sp, #0x28]\n"
        "	cmp r0, #1\n"
        "	bne _L_08006492\n"
        "	cmp r5, #0\n"
        "	beq _L_0800648E\n"
        "	add r0, r5, #0\n"
        "	mov r1, sb\n"
        "	ldm r1!, {r2, r3, r4}\n"
        "	stm r0!, {r2, r3, r4}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_0800648E:\n"
        "	add r5, #0x10\n"
        "	b _L_080064B4\n"
        "_L_08006492:\n"
        "	add r3, r0, #0\n"
        "	add r2, r5, #0\n"
        "	cmp r3, #0\n"
        "	beq _L_080064B2\n"
        "_L_0800649A:\n"
        "	cmp r2, #0\n"
        "	beq _L_080064AA\n"
        "	add r0, r2, #0\n"
        "	mov r1, sb\n"
        "	ldm r1!, {r4, r5, r7}\n"
        "	stm r0!, {r4, r5, r7}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_080064AA:\n"
        "	sub r3, #1\n"
        "	add r2, #0x10\n"
        "	cmp r3, #0\n"
        "	bne _L_0800649A\n"
        "_L_080064B2:\n"
        "	add r5, r2, #0\n"
        "_L_080064B4:\n"
        "	ldr r2, [r6, #4]\n"
        "	ldr r0, [r6]\n"
        "	add r1, r0, #0\n"
        "	cmp r0, r2\n"
        "	beq _L_080064C4\n"
        "_L_080064BE:\n"
        "	add r1, #0x10\n"
        "	cmp r1, r2\n"
        "	bne _L_080064BE\n"
        "_L_080064C4:\n"
        "	cmp r0, #0\n"
        "	beq _L_080064CC\n"
        "	bl func_080D0260\n"
        "_L_080064CC:\n"
        "	ldr r0, [sp, #0x2c]\n"
        "	add r0, r8\n"
        "	ldr r7, [sp, #0x2c]\n"
        "	str r7, [r6]\n"
        "	str r5, [r6, #4]\n"
        "	str r0, [r6, #0xc]\n"
        "_L_080064D8:\n"
        "	add sp, #0x30\n"
        "	pop {r3, r4, r5}\n"
        "	mov r8, r3\n"
        "	mov sb, r4\n"
        "	mov sl, r5\n"
        "	pop {r4, r5, r6, r7}\n"
        "	pop {r0}\n"
        "	bx r0\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080064E8 @ 0x080064E8 (880B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080064E8 @ 0x080064E8 (880 bytes)
 * Role   : C++ Class Constructor / Polymorphic Method [vtable: 0x080E8997, 0x080E8BFC, 0x080E8C14]
 * Fields : +0x00:u16(W), +0x00:u32(RW), +0x00:u8(RW), +0x02:u16(W), +0x04:u32(RW), +0x0C:u32(RW)
 * Callees: func_08008910, func_08008F0C, func_0804E7A0, func_0804E8F0, func_080D01F8, func_080D0260, func_080D3BC0
 * CFG Structure:
 *   L_080064E8: if (!=) goto L_08006502
 *   L_08006524: call func_0804E7A0(); call func_0804E8F0(); call func_08008910(); call func_08008F0C(); if (==) goto L_080065DC
 *   L_080065BC: goto L_080066AE
 *   L_080065DC: if (>= (u)) goto L_080065F6
 *   L_080065F6: if (==) goto L_08006614
 *   L_08006618: if (==) goto L_0800664C
 *   L_08006632: if (==) goto L_08006642
 *   L_08006642: if (!=) goto L_08006632
 *   L_0800664C: if (!=) goto L_08006668
 *   L_08006664: goto L_0800668A
 * ========================================================================== */
extern void func_08008910(void);
extern void func_08008F0C(void);
extern void func_0804E7A0(void);
extern void func_0804E8F0(void);
extern void func_080D01F8(void);
extern void func_080D0260(void);
extern void func_080D3BC0(void);
void func_080064E8(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, r7, lr}\n"
        "	mov r7, sl\n"
        "	mov r6, sb\n"
        "	mov r5, r8\n"
        "	push {r5, r6, r7}\n"
        "	sub sp, #0x5c\n"
        "	mov sl, r0\n"
        "	ldr r0, .Lpool_080065D0\n"
        "	add r0, sl\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	bne _L_08006502\n"
        "	b _L_08006842\n"
        "_L_08006502:\n"
        "	mov r0, #1\n"
        "	mov r8, r0\n"
        "	mov r1, sp\n"
        "	add r1, #0x14\n"
        "	str r1, [sp, #0x40]\n"
        "	mov r2, sp\n"
        "	add r2, #0x18\n"
        "	str r2, [sp, #0x44]\n"
        "	mov r3, sp\n"
        "	add r3, #0x24\n"
        "	str r3, [sp, #0x48]\n"
        "	ldr r4, .Lpool_080065D4\n"
        "	add r4, sl\n"
        "	str r4, [sp, #0x50]\n"
        "	mov r6, sp\n"
        "	add r6, #4\n"
        "	str r6, [sp, #0x3c]\n"
        "_L_08006524:\n"
        "	mov r7, r8\n"
        "	lsl r4, r7, #4\n"
        "	sub r4, r4, r7\n"
        "	lsl r4, r4, #5\n"
        "	add r4, r8\n"
        "	lsl r4, r4, #2\n"
        "	mov r0, sl\n"
        "	add r1, r4, r0\n"
        "	add r0, sp, #0x14\n"
        "	mov r2, #0x1e\n"
        "	strh r2, [r0]\n"
        "	mov r6, #2\n"
        "	ldr r3, [sp, #0x40]\n"
        "	strh r6, [r3, #2]\n"
        "	ldr r0, [sp, #0x14]\n"
        "	add r1, #0xc\n"
        "	mov r2, #0\n"
        "	bl func_0804E7A0\n"
        "	mov r0, #0x8c\n"
        "	lsl r0, r0, #7\n"
        "	add r0, sl\n"
        "	ldr r3, [r0]\n"
        "	mov r7, sl\n"
        "	add r1, r4, r7\n"
        "	mov r0, r8\n"
        "	lsl r2, r0, #5\n"
        "	sub r2, r2, r0\n"
        "	mov r0, #0xba\n"
        "	mul r0, r3\n"
        "	add r2, r2, r0\n"
        "	ldr r0, .Lpool_080065D8\n"
        "	add r2, r2, r0\n"
        "	add r0, sp, #0x18\n"
        "	mov r3, #0x1e\n"
        "	strh r3, [r0]\n"
        "	ldr r7, [sp, #0x44]\n"
        "	strh r6, [r7, #2]\n"
        "	ldr r0, [sp, #0x18]\n"
        "	add r1, #0xc\n"
        "	str r2, [sp]\n"
        "	mov r2, #0\n"
        "	mov r3, #0\n"
        "	bl func_0804E8F0\n"
        "	mov r0, sl\n"
        "	bl func_08008910\n"
        "	add r4, sl\n"
        "	add r4, #0xc\n"
        "	mov r1, #0xf0\n"
        "	lsl r1, r1, #3\n"
        "	mov r2, r8\n"
        "	mul r2, r1\n"
        "	add r5, r0, #0\n"
        "	mov r3, #0xc0\n"
        "	lsl r3, r3, #0x13\n"
        "	add r2, r2, r3\n"
        "	add r0, sp, #4\n"
        "	add r1, r4, #0\n"
        "	mov r3, #0xf0\n"
        "	lsl r3, r3, #3\n"
        "	bl func_08008F0C\n"
        "	ldr r1, [r5, #4]\n"
        "	ldr r0, [r5, #0xc]\n"
        "	cmp r1, r0\n"
        "	beq _L_080065DC\n"
        "	cmp r1, #0\n"
        "	beq _L_080065BC\n"
        "	add r0, r1, #0\n"
        "	add r1, sp, #4\n"
        "	ldm r1!, {r4, r6, r7}\n"
        "	stm r0!, {r4, r6, r7}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_080065BC:\n"
        "	ldr r0, [r5, #4]\n"
        "	add r0, #0x10\n"
        "	str r0, [r5, #4]\n"
        "	mov r0, #1\n"
        "	add r8, r0\n"
        "	mov r1, #0xf0\n"
        "	lsl r1, r1, #3\n"
        "	lsl r1, r1, #3\n"
        "	str r1, [sp, #0x4c]\n"
        "	b _L_080066AE\n"
        ".Lpool_080065D0:\n"
        "	.word 0x00004637\n"
        ".Lpool_080065D4:\n"
        "	.word 0x000034A8\n"
        ".Lpool_080065D8:\n"
        "	.word 0x080E8997\n"
        "_L_080065DC:\n"
        "	str r1, [sp, #0x54]\n"
        "	mov r0, #1\n"
        "	str r0, [sp, #0x20]\n"
        "	ldr r0, [r5]\n"
        "	add r2, r1, #0\n"
        "	sub r0, r2, r0\n"
        "	asr r4, r0, #4\n"
        "	str r4, [sp, #0x1c]\n"
        "	add r1, sp, #0x20\n"
        "	add r0, sp, #0x1c\n"
        "	cmp r4, #1\n"
        "	bhs _L_080065F6\n"
        "	add r0, r1, #0\n"
        "_L_080065F6:\n"
        "	ldr r0, [r0]\n"
        "	add r0, r4, r0\n"
        "	cmp r0, #0\n"
        "	beq _L_08006614\n"
        "	lsl r4, r0, #4\n"
        "	add r0, r4, #0\n"
        "	bl func_080D01F8\n"
        "	mov sb, r4\n"
        "	cmp r0, #0\n"
        "	bne _L_08006618\n"
        "	mov r0, sb\n"
        "	bl func_080D3BC0\n"
        "	b _L_08006618\n"
        "_L_08006614:\n"
        "	mov r0, #0\n"
        "	mov sb, r0\n"
        "_L_08006618:\n"
        "	add r4, r0, #0\n"
        "	str r4, [sp, #0x58]\n"
        "	ldr r2, [r5]\n"
        "	add r3, r4, #0\n"
        "	mov r4, #1\n"
        "	add r8, r4\n"
        "	mov r6, #0xf0\n"
        "	lsl r6, r6, #3\n"
        "	lsl r6, r6, #3\n"
        "	str r6, [sp, #0x4c]\n"
        "	ldr r7, [sp, #0x54]\n"
        "	cmp r2, r7\n"
        "	beq _L_0800664C\n"
        "_L_08006632:\n"
        "	cmp r3, #0\n"
        "	beq _L_08006642\n"
        "	add r0, r3, #0\n"
        "	add r1, r2, #0\n"
        "	ldm r1!, {r4, r6, r7}\n"
        "	stm r0!, {r4, r6, r7}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_08006642:\n"
        "	add r2, #0x10\n"
        "	add r3, #0x10\n"
        "	ldr r0, [sp, #0x54]\n"
        "	cmp r2, r0\n"
        "	bne _L_08006632\n"
        "_L_0800664C:\n"
        "	add r4, r3, #0\n"
        "	ldr r0, [sp, #0x20]\n"
        "	cmp r0, #1\n"
        "	bne _L_08006668\n"
        "	cmp r4, #0\n"
        "	beq _L_08006664\n"
        "	add r0, r4, #0\n"
        "	ldr r1, [sp, #0x3c]\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_08006664:\n"
        "	add r4, #0x10\n"
        "	b _L_0800668A\n"
        "_L_08006668:\n"
        "	add r3, r0, #0\n"
        "	add r2, r4, #0\n"
        "	cmp r3, #0\n"
        "	beq _L_08006688\n"
        "_L_08006670:\n"
        "	cmp r2, #0\n"
        "	beq _L_08006680\n"
        "	add r0, r2, #0\n"
        "	ldr r1, [sp, #0x3c]\n"
        "	ldm r1!, {r4, r6, r7}\n"
        "	stm r0!, {r4, r6, r7}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_08006680:\n"
        "	sub r3, #1\n"
        "	add r2, #0x10\n"
        "	cmp r3, #0\n"
        "	bne _L_08006670\n"
        "_L_08006688:\n"
        "	add r4, r2, #0\n"
        "_L_0800668A:\n"
        "	ldr r2, [r5, #4]\n"
        "	ldr r0, [r5]\n"
        "	add r1, r0, #0\n"
        "	cmp r0, r2\n"
        "	beq _L_0800669A\n"
        "_L_08006694:\n"
        "	add r1, #0x10\n"
        "	cmp r1, r2\n"
        "	bne _L_08006694\n"
        "_L_0800669A:\n"
        "	cmp r0, #0\n"
        "	beq _L_080066A2\n"
        "	bl func_080D0260\n"
        "_L_080066A2:\n"
        "	ldr r0, [sp, #0x58]\n"
        "	add r0, sb\n"
        "	ldr r7, [sp, #0x58]\n"
        "	str r7, [r5]\n"
        "	str r4, [r5, #4]\n"
        "	str r0, [r5, #0xc]\n"
        "_L_080066AE:\n"
        "	mov r0, r8\n"
        "	cmp r0, #6\n"
        "	bhi _L_080066B6\n"
        "	b _L_08006524\n"
        "_L_080066B6:\n"
        "	mov r4, #0x1e\n"
        "	mov r5, #2\n"
        "	add r0, sp, #0x24\n"
        "	strh r4, [r0]\n"
        "	ldr r1, [sp, #0x48]\n"
        "	strh r5, [r1, #2]\n"
        "	ldr r0, [sp, #0x24]\n"
        "	ldr r1, [sp, #0x50]\n"
        "	mov r2, #0\n"
        "	bl func_0804E7A0\n"
        "	mov r0, #0x8c\n"
        "	lsl r0, r0, #7\n"
        "	add r0, sl\n"
        "	ldr r2, [r0]\n"
        "	cmp r2, #1\n"
        "	beq _L_080066F8\n"
        "	cmp r2, #1\n"
        "	bgt _L_080066E2\n"
        "	cmp r2, #0\n"
        "	beq _L_080066E8\n"
        "	b _L_0800672A\n"
        "_L_080066E2:\n"
        "	cmp r2, #2\n"
        "	beq _L_08006714\n"
        "	b _L_0800672A\n"
        "_L_080066E8:\n"
        "	ldr r1, .Lpool_080066F4\n"
        "	add r0, sp, #0x28\n"
        "	strh r4, [r0]\n"
        "	strh r5, [r0, #2]\n"
        "	ldr r0, [sp, #0x28]\n"
        "	b _L_08006702\n"
        ".Lpool_080066F4:\n"
        "	.word 0x080E8BFC\n"
        "_L_080066F8:\n"
        "	ldr r1, .Lpool_08006710\n"
        "	add r0, sp, #0x2c\n"
        "	strh r4, [r0]\n"
        "	strh r5, [r0, #2]\n"
        "	ldr r0, [sp, #0x2c]\n"
        "_L_08006702:\n"
        "	str r1, [sp]\n"
        "	ldr r1, [sp, #0x50]\n"
        "	mov r2, #0x18\n"
        "	mov r3, #0\n"
        "	bl func_0804E8F0\n"
        "	b _L_0800672A\n"
        ".Lpool_08006710:\n"
        "	.word 0x080E8C14\n"
        "_L_08006714:\n"
        "	ldr r1, .Lpool_08006770\n"
        "	add r0, sp, #0x30\n"
        "	strh r4, [r0]\n"
        "	strh r2, [r0, #2]\n"
        "	ldr r0, [sp, #0x30]\n"
        "	str r1, [sp]\n"
        "	ldr r1, [sp, #0x50]\n"
        "	mov r2, #0x18\n"
        "	mov r3, #0\n"
        "	bl func_0804E8F0\n"
        "_L_0800672A:\n"
        "	mov r0, sl\n"
        "	bl func_08008910\n"
        "	add r5, r0, #0\n"
        "	ldr r3, [sp, #0x4c]\n"
        "	mov r4, #0xf0\n"
        "	lsl r4, r4, #3\n"
        "	sub r2, r3, r4\n"
        "	mov r6, #0xc0\n"
        "	lsl r6, r6, #0x13\n"
        "	add r2, r2, r6\n"
        "	add r0, sp, #4\n"
        "	ldr r1, [sp, #0x50]\n"
        "	add r3, r4, #0\n"
        "	bl func_08008F0C\n"
        "	add r7, sp, #4\n"
        "	mov sb, r7\n"
        "	ldr r1, [r5, #4]\n"
        "	ldr r0, [r5, #0xc]\n"
        "	cmp r1, r0\n"
        "	beq _L_08006774\n"
        "	cmp r1, #0\n"
        "	beq _L_08006766\n"
        "	add r0, r1, #0\n"
        "	add r1, sp, #4\n"
        "	ldm r1!, {r2, r3, r4}\n"
        "	stm r0!, {r2, r3, r4}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_08006766:\n"
        "	ldr r0, [r5, #4]\n"
        "	add r0, #0x10\n"
        "	str r0, [r5, #4]\n"
        "	b _L_0800683A\n"
        "	.hword 0x0000\n"
        ".Lpool_08006770:\n"
        "	.word 0x080E8C14\n"
        "_L_08006774:\n"
        "	str r1, [sp, #0x54]\n"
        "	mov r0, #1\n"
        "	str r0, [sp, #0x38]\n"
        "	ldr r0, [r5]\n"
        "	add r6, r1, #0\n"
        "	sub r0, r6, r0\n"
        "	asr r4, r0, #4\n"
        "	str r4, [sp, #0x34]\n"
        "	add r1, sp, #0x38\n"
        "	add r0, sp, #0x34\n"
        "	cmp r4, #1\n"
        "	bhs _L_0800678E\n"
        "	add r0, r1, #0\n"
        "_L_0800678E:\n"
        "	ldr r0, [r0]\n"
        "	add r0, r4, r0\n"
        "	cmp r0, #0\n"
        "	beq _L_080067AC\n"
        "	lsl r4, r0, #4\n"
        "	add r0, r4, #0\n"
        "	bl func_080D01F8\n"
        "	mov r8, r4\n"
        "	cmp r0, #0\n"
        "	bne _L_080067B0\n"
        "	mov r0, r8\n"
        "	bl func_080D3BC0\n"
        "	b _L_080067B0\n"
        "_L_080067AC:\n"
        "	mov r0, #0\n"
        "	mov r8, r0\n"
        "_L_080067B0:\n"
        "	add r4, r0, #0\n"
        "	str r4, [sp, #0x58]\n"
        "	ldr r2, [r5]\n"
        "	add r3, r4, #0\n"
        "	ldr r7, [sp, #0x54]\n"
        "	cmp r2, r7\n"
        "	beq _L_080067D8\n"
        "_L_080067BE:\n"
        "	cmp r3, #0\n"
        "	beq _L_080067CE\n"
        "	add r0, r3, #0\n"
        "	add r1, r2, #0\n"
        "	ldm r1!, {r4, r6, r7}\n"
        "	stm r0!, {r4, r6, r7}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_080067CE:\n"
        "	add r2, #0x10\n"
        "	add r3, #0x10\n"
        "	ldr r0, [sp, #0x54]\n"
        "	cmp r2, r0\n"
        "	bne _L_080067BE\n"
        "_L_080067D8:\n"
        "	add r4, r3, #0\n"
        "	ldr r0, [sp, #0x38]\n"
        "	cmp r0, #1\n"
        "	bne _L_080067F4\n"
        "	cmp r4, #0\n"
        "	beq _L_080067F0\n"
        "	add r0, r4, #0\n"
        "	mov r1, sb\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_080067F0:\n"
        "	add r4, #0x10\n"
        "	b _L_08006816\n"
        "_L_080067F4:\n"
        "	add r3, r0, #0\n"
        "	add r2, r4, #0\n"
        "	cmp r3, #0\n"
        "	beq _L_08006814\n"
        "_L_080067FC:\n"
        "	cmp r2, #0\n"
        "	beq _L_0800680C\n"
        "	add r0, r2, #0\n"
        "	mov r1, sb\n"
        "	ldm r1!, {r4, r6, r7}\n"
        "	stm r0!, {r4, r6, r7}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_0800680C:\n"
        "	sub r3, #1\n"
        "	add r2, #0x10\n"
        "	cmp r3, #0\n"
        "	bne _L_080067FC\n"
        "_L_08006814:\n"
        "	add r4, r2, #0\n"
        "_L_08006816:\n"
        "	ldr r2, [r5, #4]\n"
        "	ldr r0, [r5]\n"
        "	add r1, r0, #0\n"
        "	cmp r0, r2\n"
        "	beq _L_08006826\n"
        "_L_08006820:\n"
        "	add r1, #0x10\n"
        "	cmp r1, r2\n"
        "	bne _L_08006820\n"
        "_L_08006826:\n"
        "	cmp r0, #0\n"
        "	beq _L_0800682E\n"
        "	bl func_080D0260\n"
        "_L_0800682E:\n"
        "	ldr r0, [sp, #0x58]\n"
        "	add r0, r8\n"
        "	ldr r7, [sp, #0x58]\n"
        "	str r7, [r5]\n"
        "	str r4, [r5, #4]\n"
        "	str r0, [r5, #0xc]\n"
        "_L_0800683A:\n"
        "	ldr r1, .Lpool_08006854\n"
        "	add r1, sl\n"
        "	mov r0, #0\n"
        "	strb r0, [r1]\n"
        "_L_08006842:\n"
        "	add sp, #0x5c\n"
        "	pop {r3, r4, r5}\n"
        "	mov r8, r3\n"
        "	mov sb, r4\n"
        "	mov sl, r5\n"
        "	pop {r4, r5, r6, r7}\n"
        "	pop {r0}\n"
        "	bx r0\n"
        "	.hword 0x0000\n"
        ".Lpool_08006854:\n"
        "	.word 0x00004637\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_08006858 @ 0x08006858 (116B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08006858 @ 0x08006858 (116 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(R), +0x00:u32(RW), +0x00:u8(RW), +0x04:u16(W)
 * Callees: func_08008920
 * CFG Structure:
 *   L_08006858: if (!=) goto L_0800688E
 *   L_0800688E: call func_08008920(); if (> (u)) goto L_080068B6
 *   L_080068B6: return
 * ========================================================================== */
extern void func_08008920(void);
void func_08006858(void) {

    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	ldr r1, =0x0000463C\n"
        "	add r0, r4, r1\n"
        "	ldr r0, [r0]\n"
        "	cmp r0, #0\n"
        "	bne _L_0800688E\n"
        "	add r0, r4, #0\n"
        "	bl func_08008920\n"
        "	add r3, r0, #0\n"
        "	ldr r5, =0x00004608\n"
        "	add r1, r4, r5\n"
        "	ldrb r2, [r3]\n"
        "	cmp r2, #0x7f\n"
        "	bhi _L_0800688E\n"
        "	lsl r0, r2, #3\n"
        "	add r0, #4\n"
        "	add r0, r3, r0\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "	add r5, #4\n"
        "	add r1, r4, r5\n"
        "	ldrh r1, [r1]\n"
        "	strh r1, [r0, #4]\n"
        "	add r0, r2, #1\n"
        "	strb r0, [r3]\n"
        "_L_0800688E:\n"
        "	add r0, r4, #0\n"
        "	bl func_08008920\n"
        "	add r3, r0, #0\n"
        "	ldr r0, =0x00004614\n"
        "	add r1, r4, r0\n"
        "	ldrb r2, [r3]\n"
        "	cmp r2, #0x7f\n"
        "	bhi _L_080068B6\n"
        "	lsl r0, r2, #3\n"
        "	add r0, #4\n"
        "	add r0, r3, r0\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "	ldr r5, =0x00004618\n"
        "	add r1, r4, r5\n"
        "	ldrh r1, [r1]\n"
        "	strh r1, [r0, #4]\n"
        "	add r0, r2, #1\n"
        "	strb r0, [r3]\n"
        "_L_080068B6:\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
}

/* --- func_080068CC @ 0x080068CC (296B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080068CC @ 0x080068CC (296 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(RW), +0x00:u8(RW)
 * CFG Structure:
 *   L_080068CC: if (> (s)) goto L_08006970
 *   L_08006970: if (<= (u)) goto L_0800698C
 *   L_0800697C: if (> (u)) goto L_0800697C
 *   L_080069CC: return
 * ========================================================================== */
void func_080068CC(void) {
    int r7_var;
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	ldr r1, .Lpool_08006948\n"
        "	add r0, r4, r1\n"
        "	ldrb r1, [r0]\n"
        "	lsl r1, r1, #3\n"
        "	add r1, #0x90\n"
        "	ldr r2, .Lpool_0800694C\n"
        "	add r3, r4, r2\n"
        "	ldr r0, .Lpool_08006950\n"
        "	add r7, r0, #0\n"
        "	and r1, r7\n"
        "	ldrh r2, [r3]\n"
        "	ldr r6, .Lpool_08006954\n"
        "	add r0, r6, #0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r3]\n"
        "	ldr r2, .Lpool_08006958\n"
        "	add r1, r4, r2\n"
        "	mov r0, #8\n"
        "	strb r0, [r1]\n"
        "	ldr r0, .Lpool_0800695C\n"
        "	add r5, r4, r0\n"
        "	mov r0, #0\n"
        "	ldrsb r0, [r5, r0]\n"
        "	cmp r0, #5\n"
        "	bgt _L_08006970\n"
        "	ldr r1, .Lpool_08006960\n"
        "	add r0, r4, r1\n"
        "	mov r1, #0\n"
        "	ldrsb r1, [r0, r1]\n"
        "	lsl r1, r1, #4\n"
        "	sub r2, #0xa\n"
        "	add r3, r4, r2\n"
        "	and r1, r7\n"
        "	ldrh r2, [r3]\n"
        "	add r0, r6, #0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r3]\n"
        "	mov r0, #0\n"
        "	ldrsb r0, [r5, r0]\n"
        "	lsl r0, r0, #4\n"
        "	add r0, #0x20\n"
        "	ldr r2, .Lpool_08006964\n"
        "	add r1, r4, r2\n"
        "	strb r0, [r1]\n"
        "	ldr r0, .Lpool_08006968\n"
        "	add r3, r4, r0\n"
        "	ldrb r2, [r3]\n"
        "	mov r1, #0x3f\n"
        "	add r0, r1, #0\n"
        "	and r0, r2\n"
        "	strb r0, [r3]\n"
        "	ldr r0, .Lpool_0800696C\n"
        "	add r2, r4, r0\n"
        "	ldrb r0, [r2]\n"
        "	and r1, r0\n"
        "	mov r0, #0x80\n"
        "	b _L_080069CC\n"
        "	.align 2, 0\n"
        ".Lpool_08006948:\n"
        "	.word 0x00004610\n"
        ".Lpool_0800694C:\n"
        "	.word 0x00004616\n"
        ".Lpool_08006950:\n"
        "	.word 0x000001FF\n"
        ".Lpool_08006954:\n"
        "	.word 0xFFFFFE00\n"
        ".Lpool_08006958:\n"
        "	.word 0x00004614\n"
        ".Lpool_0800695C:\n"
        "	.word 0x00004605\n"
        ".Lpool_08006960:\n"
        "	.word 0x00004604\n"
        ".Lpool_08006964:\n"
        "	.word 0x00004608\n"
        ".Lpool_08006968:\n"
        "	.word 0x0000460B\n"
        ".Lpool_0800696C:\n"
        "	.word 0x00004609\n"
        "_L_08006970:\n"
        "	mov r2, #0\n"
        "	ldr r1, =0x00004604\n"
        "	add r0, r4, r1\n"
        "	ldrb r1, [r0]\n"
        "	cmp r1, #4\n"
        "	bls _L_0800698C\n"
        "_L_0800697C:\n"
        "	sub r0, r1, #5\n"
        "	lsl r0, r0, #0x18\n"
        "	lsr r1, r0, #0x18\n"
        "	add r0, r2, #1\n"
        "	lsl r0, r0, #0x18\n"
        "	lsr r2, r0, #0x18\n"
        "	cmp r1, #4\n"
        "	bhi _L_0800697C\n"
        "_L_0800698C:\n"
        "	lsl r1, r2, #2\n"
        "	add r1, r1, r2\n"
        "	lsl r1, r1, #4\n"
        "	add r1, #0x18\n"
        "	ldr r2, =0x0000460A\n"
        "	add r3, r4, r2\n"
        "	ldr r2, =0x000001FF\n"
        "	add r0, r2, #0\n"
        "	and r1, r0\n"
        "	ldrh r2, [r3]\n"
        "	ldr r0, =0xFFFFFE00\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r3]\n"
        "	ldr r0, =0x00004608\n"
        "	add r1, r4, r0\n"
        "	mov r0, #0x88\n"
        "	strb r0, [r1]\n"
        "	ldr r1, =0x0000460B\n"
        "	add r3, r4, r1\n"
        "	ldrb r2, [r3]\n"
        "	mov r1, #0x3f\n"
        "	add r0, r1, #0\n"
        "	and r0, r2\n"
        "	mov r2, #0x80\n"
        "	orr r0, r2\n"
        "	strb r0, [r3]\n"
        "	ldr r0, =0x00004609\n"
        "	add r2, r4, r0\n"
        "	ldrb r0, [r2]\n"
        "	and r1, r0\n"
        "	mov r0, #0x40\n"
        "_L_080069CC:\n"
        "	orr r1, r0\n"
        "	strb r1, [r2]\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_080069F4 @ 0x080069F4 (412B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080069F4 @ 0x080069F4 (412 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u8(RW)
 * Callees: func_080088D4, func_08008B6C
 * CFG Structure:
 *   L_080069F4: call func_080088D4(); if (==) goto L_08006A60
 *   L_08006A30: if (==) goto L_08006A3C
 *   L_08006A3C: if (> (s)) goto L_08006A4C
 *   L_08006A4C: goto L_08006B8A
 *   L_08006A60: if (==) goto L_08006AC8
 *   L_08006A8A: if (!=) goto L_08006AA6
 *   L_08006AA6: if (!=) goto L_08006B8A
 *   L_08006AC8: if (==) goto L_08006B2C
 *   L_08006AFC: if (!=) goto L_08006B20
 *   L_08006B20: if (<= (s)) goto L_08006B8A
 *   L_08006B2C: if (==) goto L_08006B8A
 *   L_08006B60: if (!=) goto L_08006B80
 * ========================================================================== */
extern void func_080088D4(void);
extern void func_08008B6C(void);
void func_080069F4(void) {

    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	bl func_080088D4\n"
        "	add r1, r0, #0\n"
        "	mov r0, #0x40\n"
        "	and r0, r1\n"
        "	lsl r0, r0, #0x18\n"
        "	lsr r6, r0, #0x18\n"
        "	cmp r6, #0\n"
        "	beq _L_08006A60\n"
        "	ldr r1, .Lpool_08006A54\n"
        "	add r0, r4, r1\n"
        "	mov r1, #0xcb\n"
        "	bl func_08008B6C\n"
        "	ldr r3, .Lpool_08006A58\n"
        "	add r2, r4, r3\n"
        "	ldrb r0, [r2]\n"
        "	sub r0, #1\n"
        "	strb r0, [r2]\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bge _L_08006A30\n"
        "	mov r0, #6\n"
        "	strb r0, [r2]\n"
        "	ldr r0, .Lpool_08006A5C\n"
        "	add r1, r4, r0\n"
        "	mov r0, #0xc\n"
        "	strb r0, [r1]\n"
        "_L_08006A30:\n"
        "	ldrb r1, [r2]\n"
        "	mov r0, #0\n"
        "	ldrsb r0, [r2, r0]\n"
        "	cmp r0, #5\n"
        "	beq _L_08006A3C\n"
        "	b _L_08006B8A\n"
        "_L_08006A3C:\n"
        "	ldr r3, .Lpool_08006A5C\n"
        "	add r0, r4, r3\n"
        "	ldrb r0, [r0]\n"
        "	lsl r0, r0, #0x18\n"
        "	asr r0, r0, #0x18\n"
        "	cmp r0, #0xc\n"
        "	bgt _L_08006A4C\n"
        "	b _L_08006B8A\n"
        "_L_08006A4C:\n"
        "	sub r0, r1, #1\n"
        "	strb r0, [r2]\n"
        "	b _L_08006B8A\n"
        "	.align 2, 0\n"
        ".Lpool_08006A54:\n"
        "	.word 0x000045F4\n"
        ".Lpool_08006A58:\n"
        "	.word 0x00004605\n"
        ".Lpool_08006A5C:\n"
        "	.word 0x00004604\n"
        "_L_08006A60:\n"
        "	mov r0, #0x80\n"
        "	and r0, r1\n"
        "	lsl r0, r0, #0x18\n"
        "	lsr r5, r0, #0x18\n"
        "	cmp r5, #0\n"
        "	beq _L_08006AC8\n"
        "	ldr r1, .Lpool_08006ABC\n"
        "	add r0, r4, r1\n"
        "	mov r1, #0xcb\n"
        "	bl func_08008B6C\n"
        "	ldr r3, .Lpool_08006AC0\n"
        "	add r1, r4, r3\n"
        "	ldrb r0, [r1]\n"
        "	add r0, #1\n"
        "	strb r0, [r1]\n"
        "	lsl r0, r0, #0x18\n"
        "	asr r0, r0, #0x18\n"
        "	cmp r0, #6\n"
        "	ble _L_08006A8A\n"
        "	strb r6, [r1]\n"
        "_L_08006A8A:\n"
        "	ldrb r2, [r1]\n"
        "	mov r0, #0\n"
        "	ldrsb r0, [r1, r0]\n"
        "	cmp r0, #5\n"
        "	bne _L_08006AA6\n"
        "	ldr r3, .Lpool_08006AC4\n"
        "	add r0, r4, r3\n"
        "	ldrb r0, [r0]\n"
        "	lsl r0, r0, #0x18\n"
        "	asr r0, r0, #0x18\n"
        "	cmp r0, #0xc\n"
        "	ble _L_08006AA6\n"
        "	add r0, r2, #1\n"
        "	strb r0, [r1]\n"
        "_L_08006AA6:\n"
        "	ldr r1, .Lpool_08006AC0\n"
        "	add r0, r4, r1\n"
        "	ldrb r0, [r0]\n"
        "	lsl r0, r0, #0x18\n"
        "	asr r0, r0, #0x18\n"
        "	cmp r0, #6\n"
        "	bne _L_08006B8A\n"
        "	ldr r3, .Lpool_08006AC4\n"
        "	add r1, r4, r3\n"
        "	mov r0, #0xc\n"
        "	b _L_08006B88\n"
        "	.align 2, 0\n"
        ".Lpool_08006ABC:\n"
        "	.word 0x000045F4\n"
        ".Lpool_08006AC0:\n"
        "	.word 0x00004605\n"
        ".Lpool_08006AC4:\n"
        "	.word 0x00004604\n"
        "_L_08006AC8:\n"
        "	mov r0, #0x10\n"
        "	and r0, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_08006B2C\n"
        "	ldr r1, .Lpool_08006AF0\n"
        "	add r0, r4, r1\n"
        "	mov r1, #0xcb\n"
        "	bl func_08008B6C\n"
        "	ldr r0, .Lpool_08006AF4\n"
        "	add r3, r4, r0\n"
        "	mov r0, #0\n"
        "	ldrsb r0, [r3, r0]\n"
        "	cmp r0, #6\n"
        "	bne _L_08006AFC\n"
        "	ldr r3, .Lpool_08006AF8\n"
        "	add r1, r4, r3\n"
        "	mov r0, #0xc\n"
        "	b _L_08006B88\n"
        "	.align 2, 0\n"
        ".Lpool_08006AF0:\n"
        "	.word 0x000045F4\n"
        ".Lpool_08006AF4:\n"
        "	.word 0x00004605\n"
        ".Lpool_08006AF8:\n"
        "	.word 0x00004604\n"
        "_L_08006AFC:\n"
        "	ldr r0, .Lpool_08006B1C\n"
        "	add r1, r4, r0\n"
        "	ldrb r0, [r1]\n"
        "	add r2, r0, #1\n"
        "	strb r2, [r1]\n"
        "	mov r0, #0\n"
        "	ldrsb r0, [r3, r0]\n"
        "	cmp r0, #5\n"
        "	bne _L_08006B20\n"
        "	mov r0, #0\n"
        "	ldrsb r0, [r1, r0]\n"
        "	cmp r0, #0xc\n"
        "	ble _L_08006B8A\n"
        "	strb r5, [r1]\n"
        "	b _L_08006B8A\n"
        "	.align 2, 0\n"
        ".Lpool_08006B1C:\n"
        "	.word 0x00004604\n"
        "_L_08006B20:\n"
        "	lsl r0, r2, #0x18\n"
        "	asr r0, r0, #0x18\n"
        "	cmp r0, #0xe\n"
        "	ble _L_08006B8A\n"
        "	strb r5, [r1]\n"
        "	b _L_08006B8A\n"
        "_L_08006B2C:\n"
        "	mov r0, #0x20\n"
        "	and r0, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_08006B8A\n"
        "	ldr r1, .Lpool_08006B54\n"
        "	add r0, r4, r1\n"
        "	mov r1, #0xcb\n"
        "	bl func_08008B6C\n"
        "	ldr r0, .Lpool_08006B58\n"
        "	add r3, r4, r0\n"
        "	mov r0, #0\n"
        "	ldrsb r0, [r3, r0]\n"
        "	cmp r0, #6\n"
        "	bne _L_08006B60\n"
        "	ldr r3, .Lpool_08006B5C\n"
        "	add r1, r4, r3\n"
        "	mov r0, #0xc\n"
        "	b _L_08006B88\n"
        "	.align 2, 0\n"
        ".Lpool_08006B54:\n"
        "	.word 0x000045F4\n"
        ".Lpool_08006B58:\n"
        "	.word 0x00004605\n"
        ".Lpool_08006B5C:\n"
        "	.word 0x00004604\n"
        "_L_08006B60:\n"
        "	ldr r0, .Lpool_08006B7C\n"
        "	add r1, r4, r0\n"
        "	ldrb r0, [r1]\n"
        "	sub r2, r0, #1\n"
        "	strb r2, [r1]\n"
        "	mov r0, #0\n"
        "	ldrsb r0, [r3, r0]\n"
        "	cmp r0, #5\n"
        "	bne _L_08006B80\n"
        "	lsl r0, r2, #0x18\n"
        "	cmp r0, #0\n"
        "	bge _L_08006B8A\n"
        "	mov r0, #0xc\n"
        "	b _L_08006B88\n"
        "	.align 2, 0\n"
        ".Lpool_08006B7C:\n"
        "	.word 0x00004604\n"
        "_L_08006B80:\n"
        "	lsl r0, r2, #0x18\n"
        "	cmp r0, #0\n"
        "	bge _L_08006B8A\n"
        "	mov r0, #0xe\n"
        "_L_08006B88:\n"
        "	strb r0, [r1]\n"
        "_L_08006B8A:\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
}

/* --- func_08006B90 @ 0x08006B90 (152B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08006B90 @ 0x08006B90 (152 bytes)
 * Role   : C++ Class Constructor / Polymorphic Method [vtable: 0x080E89B6]
 * Fields : +0x00:u32(R), +0x00:u8(RW)
 * CFG Structure:
 *   L_08006B90: if (!=) goto L_08006BEC
 *   L_08006BF2: if (<= (u)) goto L_08006C12
 *   L_08006C12: return
 * ========================================================================== */
void func_08006B90(void) {
    u32 sp0;
    __asm__ volatile("" : : "m"(sp0));
    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	mov r4, sp\n"
        "	ldr r3, .Lpool_08006BDC\n"
        "	ldr r1, .Lpool_08006BE0\n"
        "	add r0, r5, r1\n"
        "	mov r1, #0\n"
        "	ldrsb r1, [r0, r1]\n"
        "	lsl r1, r1, #1\n"
        "	ldr r2, .Lpool_08006BE4\n"
        "	add r0, r5, r2\n"
        "	mov r2, #0\n"
        "	ldrsb r2, [r0, r2]\n"
        "	lsl r0, r2, #5\n"
        "	sub r0, r0, r2\n"
        "	add r1, r1, r0\n"
        "	mov r2, #0x8c\n"
        "	lsl r2, r2, #7\n"
        "	add r0, r5, r2\n"
        "	ldr r2, [r0]\n"
        "	mov r0, #0xba\n"
        "	mul r0, r2\n"
        "	add r1, r1, r0\n"
        "	add r1, r1, r3\n"
        "	ldrb r1, [r1]\n"
        "	strb r1, [r4]\n"
        "	ldr r3, .Lpool_08006BE8\n"
        "	add r2, r5, r3\n"
        "	ldrb r4, [r2]\n"
        "	add r3, #0xc\n"
        "	add r0, r5, r3\n"
        "	add r3, r0, r4\n"
        "	ldrb r0, [r3]\n"
        "	cmp r0, r1\n"
        "	bne _L_08006BEC\n"
        "	add r0, r4, #1\n"
        "	b _L_08006BF2\n"
        "	.align 2, 0\n"
        ".Lpool_08006BDC:\n"
        "	.word 0x080E89B6\n"
        ".Lpool_08006BE0:\n"
        "	.word 0x00004604\n"
        ".Lpool_08006BE4:\n"
        "	.word 0x00004605\n"
        ".Lpool_08006BE8:\n"
        "	.word 0x00004610\n"
        "_L_08006BEC:\n"
        "	strb r1, [r3]\n"
        "	ldrb r0, [r2]\n"
        "	add r0, #1\n"
        "_L_08006BF2:\n"
        "	strb r0, [r2]\n"
        "	ldr r0, =0x00004610\n"
        "	add r2, r5, r0\n"
        "	ldrb r0, [r2]\n"
        "	cmp r0, #0xb\n"
        "	bls _L_08006C12\n"
        "	ldr r3, =0x00004604\n"
        "	add r1, r5, r3\n"
        "	mov r0, #0xc\n"
        "	strb r0, [r1]\n"
        "	ldr r0, =0x00004605\n"
        "	add r1, r5, r0\n"
        "	mov r0, #6\n"
        "	strb r0, [r1]\n"
        "	mov r0, #0xb\n"
        "	strb r0, [r2]\n"
        "_L_08006C12:\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
}

/* --- func_08006C28 @ 0x08006C28 (56B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08006C28 @ 0x08006C28 (56 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u8(RW)
 * CFG Structure:
 *   L_08006C28: if (> (u)) goto L_08006C4A
 *   L_08006C38: if (<= (u)) goto L_08006C38
 *   L_08006C4A: return
 * ========================================================================== */
void func_08006C28(void) {

    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	lsl r1, r1, #0x18\n"
        "	lsr r1, r1, #0x18\n"
        "	cmp r1, #0xa\n"
        "	bhi _L_08006C4A\n"
        "	ldr r0, =0x0000461C\n"
        "	add r3, r4, r0\n"
        "_L_08006C38:\n"
        "	add r2, r3, r1\n"
        "	add r1, #1\n"
        "	add r0, r3, r1\n"
        "	ldrb r0, [r0]\n"
        "	strb r0, [r2]\n"
        "	lsl r1, r1, #0x18\n"
        "	lsr r1, r1, #0x18\n"
        "	cmp r1, #0xa\n"
        "	bls _L_08006C38\n"
        "_L_08006C4A:\n"
        "	ldr r0, =0x00004627\n"
        "	add r1, r4, r0\n"
        "	mov r0, #0x5f\n"
        "	strb r0, [r1]\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "lr", "memory"
    );
}

/* --- func_08006C60 @ 0x08006C60 (124B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern char *func_080D3B28();
int func_08006C60(int param_1) {
    int p1;
    register int r6 asm("r6");
    register int r5 asm("r5");
    register u8 *r4 asm("r4");
    register int ret asm("r0");
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "mov %1, #0\n\t"
        "mov %2, #0\n\t"
        "ldr r0, =0x00004629\n\t"
        "add %3, %0, r0\n\t"
        "sub r0, #0xd\n\t"
        "add r1, %0, r0\n\t"
        "add r0, %3, #0\n\t"
        "bl func_080D3B28\n\t"
        "mov r1, #0\n"
        "_loop1_6C60:\n\t"
        "add r0, %3, r1\n\t"
        "ldrb r0, [r0]\n\t"
        "cmp r0, #0x5f\n\t"
        "bne _chk20_6C60\n\t"
        "add %2, #1\n\t"
        "add r0, r1, #1\n\t"
        "b _next1_6C60\n\t"
        ".align 2, 0\n\t"
        ".ltorg\n"
        "_chk20_6C60:\n\t"
        "cmp r0, #0x20\n\t"
        "bne _not20_6C60\n\t"
        "add %2, #1\n"
        "_not20_6C60:\n\t"
        "add %1, r1, #1\n\t"
        "add r0, %1, #0\n"
        "_next1_6C60:\n\t"
        "add r1, r0, #0\n\t"
        "cmp r1, #0xb\n\t"
        "ble _loop1_6C60\n\t"
        "cmp %2, #0xc\n\t"
        "bne _repl_6C60\n\t"
        "mov %1, #0\n\t"
        "b _term_6C60\n"
        "_repl_6C60:\n\t"
        "mov r2, #0\n\t"
        "cmp r2, %1\n\t"
        "bge _term_6C60\n\t"
        "ldr r1, =0x00004629\n\t"
        "add r3, %0, r1\n\t"
        "mov %3, #0x20\n"
        "_loop2_6C60:\n\t"
        "add r1, r3, r2\n\t"
        "ldrb r0, [r1]\n\t"
        "cmp r0, #0x5f\n\t"
        "bne _next2_6C60\n\t"
        "strb %3, [r1]\n"
        "_next2_6C60:\n\t"
        "add r2, #1\n\t"
        "cmp r2, %1\n\t"
        "blt _loop2_6C60\n"
        "_term_6C60:\n\t"
        "ldr r1, =0x00004629\n\t"
        "add r0, %0, r1\n\t"
        "add r0, r0, %1\n\t"
        "mov r1, #0\n\t"
        "strb r1, [r0]\n\t"
        "neg r0, %1\n\t"
        "orr r0, %1\n\t"
        "lsr r0, r0, #0x1f"
        : "=l"(p1), "=l"(r6), "=l"(r5), "=l"(r4) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(p1), "+l"(p1), "+l"(p1));
    __asm__("" : "=r"(ret));
    return ret;
}

/* --- func_08006CDC @ 0x08006CDC (508B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08006CDC @ 0x08006CDC (508 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW), +0x00:u8(RW), +0x01:u8(R)
 * Callees: func_080069F4, func_08006B90, func_08006C28, func_08006C60, func_080088D4, func_08008B6C
 * CFG Structure:
 *   L_08006CDC: if (==) goto L_08006CEE
 *   L_08006CEE: call func_080069F4(); call func_080088D4(); if (==) goto L_08006DA6
 *   L_08006D34: if (> (s)) goto L_08006D5C
 *   L_08006D58: goto L_08006D78
 *   L_08006D5C: if (> (u)) goto L_08006D98
 *   L_08006D7A: call func_08008B6C(); goto L_08006EC8
 *   L_08006D98: call func_08006C60(); if (!=) goto L_08006E48
 *   L_08006DA6: if (==) goto L_08006E14
 *   L_08006DD0: if (!=) goto L_08006DDE
 * ========================================================================== */
extern void func_080069F4(void);
extern void func_08006B90(void);
extern void func_08006C28(void);
extern void func_08006C60(void);
extern void func_080088D4(void);
extern void func_08008B6C(void);
void func_08006CDC(void) {
    u32 sp0;
    int r7_var;
    __asm__ volatile("" : : "m"(sp0));
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	ldr r0, .Lpool_08006D2C\n"
        "	add r5, r4, r0\n"
        "	ldr r6, [r5]\n"
        "	cmp r6, #0\n"
        "	beq _L_08006CEE\n"
        "	b _L_08006EC8\n"
        "_L_08006CEE:\n"
        "	add r0, r4, #0\n"
        "	bl func_080069F4\n"
        "	add r0, r4, #0\n"
        "	bl func_080088D4\n"
        "	str r0, [sp]\n"
        "	mov r0, sp\n"
        "	ldrb r1, [r0]\n"
        "	mov r7, #1\n"
        "	add r0, r7, #0\n"
        "	and r0, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_08006DA6\n"
        "	ldr r1, .Lpool_08006D30\n"
        "	add r0, r4, r1\n"
        "	ldrb r0, [r0]\n"
        "	lsl r0, r0, #0x18\n"
        "	asr r0, r0, #0x18\n"
        "	cmp r0, #5\n"
        "	bgt _L_08006D34\n"
        "	sub r1, #0x11\n"
        "	add r0, r4, r1\n"
        "	mov r1, #0x6a\n"
        "	bl func_08008B6C\n"
        "	add r0, r4, #0\n"
        "	bl func_08006B90\n"
        "	b _L_08006EC8\n"
        "	.align 2, 0\n"
        ".Lpool_08006D2C:\n"
        "	.word 0x0000463C\n"
        ".Lpool_08006D30:\n"
        "	.word 0x00004605\n"
        "_L_08006D34:\n"
        "	ldr r1, .Lpool_08006D54\n"
        "	add r0, r4, r1\n"
        "	ldrb r1, [r0]\n"
        "	ldrb r0, [r0]\n"
        "	lsl r0, r0, #0x18\n"
        "	asr r0, r0, #0x18\n"
        "	cmp r0, #4\n"
        "	bgt _L_08006D5C\n"
        "	mov r0, #0x8c\n"
        "	lsl r0, r0, #7\n"
        "	add r1, r4, r0\n"
        "	ldr r0, [r1]\n"
        "	cmp r0, #2\n"
        "	bne _L_08006D58\n"
        "	str r6, [r1]\n"
        "	b _L_08006D7A\n"
        "	.align 2, 0\n"
        ".Lpool_08006D54:\n"
        "	.word 0x00004604\n"
        "_L_08006D58:\n"
        "	add r0, #1\n"
        "	b _L_08006D78\n"
        "_L_08006D5C:\n"
        "	sub r0, r1, #5\n"
        "	lsl r0, r0, #0x18\n"
        "	lsr r0, r0, #0x18\n"
        "	cmp r0, #4\n"
        "	bhi _L_08006D98\n"
        "	mov r0, #0x8c\n"
        "	lsl r0, r0, #7\n"
        "	add r1, r4, r0\n"
        "	ldr r0, [r1]\n"
        "	cmp r0, #0\n"
        "	bne _L_08006D76\n"
        "	mov r0, #2\n"
        "	b _L_08006D78\n"
        "_L_08006D76:\n"
        "	sub r0, #1\n"
        "_L_08006D78:\n"
        "	str r0, [r1]\n"
        "_L_08006D7A:\n"
        "	ldr r1, .Lpool_08006D90\n"
        "	add r0, r4, r1\n"
        "	mov r1, #1\n"
        "	strb r1, [r0]\n"
        "	ldr r1, .Lpool_08006D94\n"
        "	add r0, r4, r1\n"
        "	mov r1, #0xca\n"
        "	bl func_08008B6C\n"
        "	b _L_08006EC8\n"
        "	.align 2, 0\n"
        ".Lpool_08006D90:\n"
        "	.word 0x00004637\n"
        ".Lpool_08006D94:\n"
        "	.word 0x000045F4\n"
        "_L_08006D98:\n"
        "	add r0, r4, #0\n"
        "	bl func_08006C60\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08006E48\n"
        "	b _L_08006DE8\n"
        "_L_08006DA6:\n"
        "	mov r2, #2\n"
        "	add r0, r2, #0\n"
        "	and r0, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_08006E14\n"
        "	ldr r0, .Lpool_08006DC4\n"
        "	add r1, r4, r0\n"
        "	ldrb r0, [r1]\n"
        "	cmp r0, #0\n"
        "	beq _L_08006DC8\n"
        "	sub r0, #1\n"
        "	strb r0, [r1]\n"
        "	ldrb r1, [r1]\n"
        "	add r0, r4, #0\n"
        "	b _L_08006E00\n"
        "	.align 2, 0\n"
        ".Lpool_08006DC4:\n"
        "	.word 0x00004610\n"
        "_L_08006DC8:\n"
        "	mov r2, #0\n"
        "	mov r1, #0\n"
        "	ldr r0, .Lpool_08006DF4\n"
        "	add r3, r4, r0\n"
        "_L_08006DD0:\n"
        "	add r0, r3, r1\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0x5f\n"
        "	bne _L_08006DDE\n"
        "	add r0, r2, #1\n"
        "	lsl r0, r0, #0x18\n"
        "	lsr r2, r0, #0x18\n"
        "_L_08006DDE:\n"
        "	add r1, #1\n"
        "	cmp r1, #0xb\n"
        "	ble _L_08006DD0\n"
        "	cmp r2, #0xc\n"
        "	bne _L_08006DFC\n"
        "_L_08006DE8:\n"
        "	ldr r1, .Lpool_08006DF8\n"
        "	add r0, r4, r1\n"
        "	mov r1, #0xc7\n"
        "	bl func_08008B6C\n"
        "	b _L_08006EC8\n"
        "	.align 2, 0\n"
        ".Lpool_08006DF4:\n"
        "	.word 0x0000461C\n"
        ".Lpool_08006DF8:\n"
        "	.word 0x000045F4\n"
        "_L_08006DFC:\n"
        "	add r0, r4, #0\n"
        "	mov r1, #0\n"
        "_L_08006E00:\n"
        "	bl func_08006C28\n"
        "	ldr r1, .Lpool_08006E10\n"
        "	add r0, r4, r1\n"
        "	mov r1, #0x6c\n"
        "	bl func_08008B6C\n"
        "	b _L_08006EC8\n"
        "	.align 2, 0\n"
        ".Lpool_08006E10:\n"
        "	.word 0x000045F4\n"
        "_L_08006E14:\n"
        "	mov r0, #8\n"
        "	and r0, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_08006E78\n"
        "	ldr r1, .Lpool_08006E58\n"
        "	add r0, r4, r1\n"
        "	ldrb r0, [r0]\n"
        "	lsl r0, r0, #0x18\n"
        "	asr r0, r0, #0x18\n"
        "	cmp r0, #6\n"
        "	bne _L_08006E60\n"
        "	sub r1, #1\n"
        "	add r0, r4, r1\n"
        "	ldrb r0, [r0]\n"
        "	lsl r0, r0, #0x18\n"
        "	asr r0, r0, #0x18\n"
        "	cmp r0, #9\n"
        "	ble _L_08006E60\n"
        "	cmp r0, #0xe\n"
        "	bgt _L_08006E60\n"
        "	add r0, r4, #0\n"
        "	bl func_08006C60\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_08006E4A\n"
        "_L_08006E48:\n"
        "	str r7, [r5]\n"
        "_L_08006E4A:\n"
        "	ldr r1, .Lpool_08006E5C\n"
        "	add r0, r4, r1\n"
        "	mov r1, #0xc5\n"
        "	bl func_08008B6C\n"
        "	b _L_08006EC8\n"
        "	.align 2, 0\n"
        ".Lpool_08006E58:\n"
        "	.word 0x00004605\n"
        ".Lpool_08006E5C:\n"
        "	.word 0x000045F4\n"
        "_L_08006E60:\n"
        "	ldr r0, .Lpool_08006E70\n"
        "	add r1, r4, r0\n"
        "	mov r0, #0xc\n"
        "	strb r0, [r1]\n"
        "	ldr r0, .Lpool_08006E74\n"
        "	add r1, r4, r0\n"
        "	mov r0, #6\n"
        "	b _L_08006E90\n"
        "	.align 2, 0\n"
        ".Lpool_08006E70:\n"
        "	.word 0x00004604\n"
        ".Lpool_08006E74:\n"
        "	.word 0x00004605\n"
        "_L_08006E78:\n"
        "	mov r0, sp\n"
        "	ldrb r1, [r0, #1]\n"
        "	add r0, r2, #0\n"
        "	and r0, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_08006EA8\n"
        "	ldr r0, .Lpool_08006EA0\n"
        "	add r1, r4, r0\n"
        "	ldrb r0, [r1]\n"
        "	cmp r0, #0\n"
        "	beq _L_08006E92\n"
        "	sub r0, #1\n"
        "_L_08006E90:\n"
        "	strb r0, [r1]\n"
        "_L_08006E92:\n"
        "	ldr r1, .Lpool_08006EA4\n"
        "	add r0, r4, r1\n"
        "	mov r1, #0xcb\n"
        "	bl func_08008B6C\n"
        "	b _L_08006EC8\n"
        "	.align 2, 0\n"
        ".Lpool_08006EA0:\n"
        "	.word 0x00004610\n"
        ".Lpool_08006EA4:\n"
        "	.word 0x000045F4\n"
        "_L_08006EA8:\n"
        "	add r0, r7, #0\n"
        "	and r0, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_08006EC8\n"
        "	ldr r0, =0x00004610\n"
        "	add r1, r4, r0\n"
        "	ldrb r0, [r1]\n"
        "	cmp r0, #0xb\n"
        "	beq _L_08006EBE\n"
        "	add r0, #1\n"
        "	strb r0, [r1]\n"
        "_L_08006EBE:\n"
        "	ldr r1, =0x000045F4\n"
        "	add r0, r4, r1\n"
        "	mov r1, #0xcb\n"
        "	bl func_08008B6C\n"
        "_L_08006EC8:\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_08006ED8 @ 0x08006ED8 (416B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08006ED8 @ 0x08006ED8 (416 bytes)
 * Role   : C++ Class Constructor / Polymorphic Method [vtable: 0x080E8C2C, 0x080E8C44, 0x080E8C48]
 * Fields : +0x00:u32(RW), +0x00:u8(RW)
 * Callees: func_080088DC, func_08008918, func_08008920, func_08008940, func_0800894C, func_08050D34, func_08050D3C, func_08050D5C, func_08050D74, func_08050DF0
 * CFG Structure:
 *   L_08006ED8: if (!=) goto L_08006EF2
 *   L_08006EF2: call func_08050D34(); call func_080088DC(); call func_08008920(); call func_08008918(); call func_08008940(); call func_0800894C()
 *   L_08006F7C: if (==) goto L_08006F90
 *   L_08006F90: if (==) goto L_08006FB2
 *   L_08006FB2: call func_08050D5C(); goto L_08007064
 *   L_08006FD8: if (> (s)) goto L_08006FE6
 *   L_08006FE6: if (==) goto L_08007034
 *   L_08006FEA: call func_08050D74(); goto L_08007064
 *   L_08006FFC: if (!=) goto L_08007064
 *   L_08007034: call func_08050DF0(); if (==) goto L_08007050
 *   L_08007050: goto L_08007064
 * ========================================================================== */
extern void func_080088DC(void);
extern void func_08008918(void);
extern void func_08008920(void);
extern void func_08008940(void);
extern void func_0800894C(void);
extern void func_08050D34(void);
extern void func_08050D3C(void);
extern void func_08050D5C(void);
extern void func_08050D74(void);
extern void func_08050DF0(void);
extern void func_08050E30(void);
extern void func_080D3B28(void);
void func_08006ED8(void) {
    u32 sp0, sp1, sp2;
    int r7_var;
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2));
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	ldr r1, .Lpool_08006F50\n"
        "	add r0, r7, r1\n"
        "	ldr r0, [r0]\n"
        "	cmp r0, #0\n"
        "	bne _L_08006EF2\n"
        "	b _L_08007064\n"
        "_L_08006EF2:\n"
        "	ldr r2, .Lpool_08006F54\n"
        "	add r4, r7, r2\n"
        "	ldr r0, [r4]\n"
        "	bl func_08050D34\n"
        "	add r6, r0, #0\n"
        "	ldr r4, [r4]\n"
        "	mov sb, r4\n"
        "	add r0, r7, #0\n"
        "	bl func_080088DC\n"
        "	mov r8, r0\n"
        "	add r0, r7, #0\n"
        "	bl func_08008920\n"
        "	mov sl, r0\n"
        "	add r0, r7, #0\n"
        "	bl func_08008918\n"
        "	add r5, r0, #0\n"
        "	add r0, r7, #0\n"
        "	bl func_08008940\n"
        "	add r4, r0, #0\n"
        "	add r0, r7, #0\n"
        "	bl func_0800894C\n"
        "	ldr r2, .Lpool_08006F58\n"
        "	add r1, r7, r2\n"
        "	str r4, [sp]\n"
        "	str r0, [sp, #4]\n"
        "	str r1, [sp, #8]\n"
        "	mov r0, sb\n"
        "	mov r1, r8\n"
        "	mov r2, sl\n"
        "	add r3, r5, #0\n"
        "	bl func_08050D3C\n"
        "	cmp r0, #6\n"
        "	bls _L_08006F44\n"
        "	b _L_08007064\n"
        "_L_08006F44:\n"
        "	lsl r0, r0, #2\n"
        "	ldr r1, .Lpool_08006F5C\n"
        "	add r0, r0, r1\n"
        "	ldr r0, [r0]\n"
        "	mov pc, r0\n"
        "	.align 2, 0\n"
        ".Lpool_08006F50:\n"
        "	.word 0x0000463C\n"
        ".Lpool_08006F54:\n"
        "	.word 0x000045F8\n"
        ".Lpool_08006F58:\n"
        "	.word 0x000045F0\n"
        ".Lpool_08006F5C:\n"
        "	.word _Ljt_08006F60\n"
        "_Ljt_08006F60:\n"
        "	.word _L_08006F7C\n"
        "	.word _L_08007064\n"
        "	.word _L_08007064\n"
        "	.word _L_08006FD8\n"
        "	.word _L_08007064\n"
        "	.word _L_08007064\n"
        "	.word _L_08007064\n"
        "_L_08006F7C:\n"
        "	ldr r0, .Lpool_08006FC0\n"
        "	add r2, r7, r0\n"
        "	ldrb r0, [r2]\n"
        "	cmp r0, #0\n"
        "	beq _L_08006F90\n"
        "	ldr r0, .Lpool_08006FC4\n"
        "	add r1, r7, r0\n"
        "	mov r0, #0\n"
        "	str r0, [r1]\n"
        "	strb r0, [r2]\n"
        "_L_08006F90:\n"
        "	ldr r2, .Lpool_08006FC8\n"
        "	add r1, r7, r2\n"
        "	ldrb r0, [r1]\n"
        "	cmp r0, #0\n"
        "	beq _L_08006FB2\n"
        "	mov r0, #0\n"
        "	strb r0, [r1]\n"
        "	ldr r0, .Lpool_08006FCC\n"
        "	add r1, r7, r0\n"
        "	mov r0, #1\n"
        "	strb r0, [r1]\n"
        "	ldr r1, .Lpool_08006FD0\n"
        "	add r0, r7, r1\n"
        "	sub r2, #0x10\n"
        "	add r1, r7, r2\n"
        "	bl func_080D3B28\n"
        "_L_08006FB2:\n"
        "	ldr r1, .Lpool_08006FD4\n"
        "	add r0, r7, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08050D5C\n"
        "	b _L_08007064\n"
        "	.align 2, 0\n"
        ".Lpool_08006FC0:\n"
        "	.word 0x00004638\n"
        ".Lpool_08006FC4:\n"
        "	.word 0x0000463C\n"
        ".Lpool_08006FC8:\n"
        "	.word 0x00004639\n"
        ".Lpool_08006FCC:\n"
        "	.word 0x00004636\n"
        ".Lpool_08006FD0:\n"
        "	.word 0x0000461C\n"
        ".Lpool_08006FD4:\n"
        "	.word 0x000045F8\n"
        "_L_08006FD8:\n"
        "	cmp r6, #5\n"
        "	bgt _L_08006FE6\n"
        "	cmp r6, #4\n"
        "	bge _L_08007064\n"
        "	cmp r6, #1\n"
        "	beq _L_08006FFC\n"
        "	b _L_08006FEA\n"
        "_L_08006FE6:\n"
        "	cmp r6, #6\n"
        "	beq _L_08007034\n"
        "_L_08006FEA:\n"
        "	ldr r2, .Lpool_08006FF8\n"
        "	add r0, r7, r2\n"
        "	ldr r0, [r0]\n"
        "	bl func_08050D74\n"
        "	b _L_08007064\n"
        "	.align 2, 0\n"
        ".Lpool_08006FF8:\n"
        "	.word 0x000045F8\n"
        "_L_08006FFC:\n"
        "	ldr r1, .Lpool_08007020\n"
        "	add r0, r7, r1\n"
        "	ldr r0, [r0]\n"
        "	cmp r0, #1\n"
        "	bne _L_08007064\n"
        "	ldr r2, .Lpool_08007024\n"
        "	add r0, r7, r2\n"
        "	ldr r0, [r0]\n"
        "	ldr r1, .Lpool_08007028\n"
        "	ldr r2, .Lpool_0800702C\n"
        "	ldr r3, .Lpool_08007030\n"
        "	mov r4, #0\n"
        "	str r4, [sp]\n"
        "	str r4, [sp, #4]\n"
        "	str r4, [sp, #8]\n"
        "	bl func_08050E30\n"
        "	b _L_08007064\n"
        "	.align 2, 0\n"
        ".Lpool_08007020:\n"
        "	.word 0x0000463C\n"
        ".Lpool_08007024:\n"
        "	.word 0x000045F8\n"
        ".Lpool_08007028:\n"
        "	.word 0x080E8C2C\n"
        ".Lpool_0800702C:\n"
        "	.word 0x080E8C44\n"
        ".Lpool_08007030:\n"
        "	.word 0x080E8C48\n"
        "_L_08007034:\n"
        "	ldr r1, .Lpool_0800704C\n"
        "	add r0, r7, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08050DF0\n"
        "	add r2, r0, #0\n"
        "	cmp r2, #1\n"
        "	beq _L_08007050\n"
        "	cmp r2, #2\n"
        "	beq _L_0800705C\n"
        "	b _L_08007064\n"
        "	.align 2, 0\n"
        ".Lpool_0800704C:\n"
        "	.word 0x000045F8\n"
        "_L_08007050:\n"
        "	ldr r1, .Lpool_08007058\n"
        "	add r0, r7, r1\n"
        "	strb r2, [r0]\n"
        "	b _L_08007064\n"
        "	.align 2, 0\n"
        ".Lpool_08007058:\n"
        "	.word 0x00004639\n"
        "_L_0800705C:\n"
        "	ldr r2, =0x00004638\n"
        "	add r1, r7, r2\n"
        "	mov r0, #1\n"
        "	strb r0, [r1]\n"
        "_L_08007064:\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r10", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_08007078 @ 0x08007078 (44B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080005D4();
extern u32 func_08005A58();
u32 func_08007078(u32 *arg0,u32 arg1,u32 arg2) {
  u32 val;
  *arg0 = 0x080E5AC0;
  val = func_080005D4(0x00004640);
  val = func_08005A58(val,arg1,arg2);
  arg0[1] = val;
  return arg0;
}

/* --- func_080070A4 @ 0x080070A4 (48B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080007EC();
extern u32 func_080D3914();
void func_080070A4(u32 *arg0,u32 arg1) {
  int val;
  *arg0 = 0x080E5AC0;
  val = arg0[1];
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  func_080007EC(arg0,arg1);
}

/* --- func_080070D4 @ 0x080070D4 (60B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080070D4 @ 0x080070D4 (60 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(R), +0x08:u32(R)
 * Callees: func_08005B68, func_080D3914
 * CFG Structure:
 *   L_080070D4: call func_08005B68(); if (==) goto L_08007104
 *   L_08007104: return
 * ========================================================================== */
extern void func_08005B68(void);
extern void func_080D3914(void);
int func_080070D4(void) {
    u32 sp0, sp1, sp2;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2));
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	ldr r1, [r1, #4]\n"
        "	mov r0, sp\n"
        "	bl func_08005B68\n"
        "	ldr r2, [sp]\n"
        "	mov r0, sp\n"
        "	str r0, [sp, #4]\n"
        "	str r2, [sp, #8]\n"
        "	add r1, r0, #0\n"
        "	mov r0, #0\n"
        "	str r0, [r1]\n"
        "	str r2, [r4]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_08007104\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_08007104:\n"
        "	add r0, r4, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "lr", "memory"
    );
    return __ret;
}

/* --- func_08007110 @ 0x08007110 (12B) [PURE-C | agbcc_O2] --- */
#define NULL 0

u32 func_08007110(u32 *arg0) {
    return arg0[1] + 0x461C;
}

/* --- func_08007128 @ 0x08007128 (76B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080005D4();
extern u32 func_080D6D98();
/* paridad 97.7% preset agbcc_O2 */
u32 func_08007128(u32 arg0) {
  int *mem_ptr;
  u32 *mem_ptr2;
  u32 val;
  int val2;
  mem_ptr = 0x03000404;
  if (*(u32 *)0x03000404 == 0) {
    mem_ptr2 = (u32 *)func_080005D4(0x54);
    val = func_080D6D98(mem_ptr2 + 1,0x10,0);
    *mem_ptr2 = val;
    mem_ptr2[0x11] = 0;
    *(u16 *)(mem_ptr2 + 0x12) = 0;
    mem_ptr2[0x13] = 0;
    *(u8 *)(mem_ptr2 + 0x14) = 0;
    *(u8 *)((int)mem_ptr2 + 0x51) = 0;
    mem_ptr2[0x11] = 0;
    *mem_ptr = (int)mem_ptr2;
  }
  val2 = *mem_ptr;
  *(int *)(val2 + 0x4c) = *(int *)(val2 + 0x4c) + 1;
  return arg0;
}

/* --- func_08007174 @ 0x08007174 (4B) [PURE-C | agbcp_O2] --- */
/* func_08007174 @ 0x08007174 mode=THUMB size=0x4 (importado de Stan: hardware) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: hardware */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_08007184 @ 0x08007184 (56B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
/* paridad 96.8% preset agbcc_O2 */
void func_08007184(u32 arg0,u32 arg1) {
  int *mem_ptr;
  int val;
  int val2;
  mem_ptr = 0x03000404;
  val = *mem_ptr;
  val2 = *(int *)(val + 0x4c) + -1;
  *(int *)(val + 0x4c) = val2;
  if (val2 == 0) {
    if (val != 0) {
      func_08000608(val);
    }
    *mem_ptr = 0;
  }
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080071BC @ 0x080071BC (432B) [PURE-C | agbcp_O2] --- */
/* func_080071BC @ 0x080071BC mode=THUMB size=0x1B0 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080071BC @ 0x080071BC  mode=THUMB  size=0x1B0  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_080071BC(undefined4 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 in_lr;
  undefined1 uStack_2c;
  
  piVar6 = (int *)*_DAT_08007368;
  pbVar3 = (byte *)((int)piVar6 + 0x51);
  if (*pbVar3 != 0) {
    uVar5 = (uint)*(byte *)(piVar6 + 0x14);
    uVar8 = uVar5 + *pbVar3;
    if (uVar5 < uVar8) {
      piVar2 = piVar6 + uVar5 + 1;
      do {
        uVar1 = 0;
        if (uVar5 < 0x10) {
          uVar1 = piVar6[0x11] & 1 << (uVar5 & 0x1f);
          uVar1 = (-uVar1 | uVar1) >> 0x1f;
        }
        if (uVar1 != 0) {
          *piVar2 = *piVar6;
          *piVar6 = (int)piVar2;
          if (uVar5 < 0x10) {
            piVar6[0x11] = piVar6[0x11] & ~(1 << (uVar5 & 0x1f));
          }
        }
        piVar2 = piVar2 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar8);
    }
    *pbVar3 = 0;
  }
  if (param_3 != 0) {
    uVar5 = 0;
    piVar7 = piVar6 + 1;
    piVar2 = piVar7;
    do {
      uVar8 = 0;
      if (uVar5 < 0x10) {
        uVar8 = piVar6[0x11] & 1 << (uVar5 & 0x1f);
        uVar8 = (-uVar8 | uVar8) >> 0x1f;
      }
      if (((uVar8 != 0) && (param_2 <= uVar5)) && (uVar5 < param_3 + param_2)) {
        *(undefined2 *)((int)piVar7 + 2) = 0;
        *piVar7 = *piVar6;
        *piVar6 = (int)piVar2;
        if (uVar5 < 0x10) {
          piVar6[0x11] = piVar6[0x11] & ~(1 << (uVar5 & 0x1f));
        }
        *(short *)(piVar6 + 0x12) = (short)piVar6[0x12] + -1;
      }
      piVar7 = piVar7 + 1;
      piVar2 = piVar2 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x10);
    uVar8 = 0;
    uVar5 = (1 << (param_3 & 0xff)) + -1 << (param_2 & 0xff);
    do {
      piVar2 = (int *)*piVar6;
      if (piVar2 == (int *)0x0) break;
      *piVar6 = *piVar2;
      uVar1 = (int)piVar2 + (-4 - (int)piVar6) >> 2;
      if (uVar1 < 0x10) {
        piVar6[0x11] = piVar6[0x11] | 1 << (uVar1 & 0x1f);
      }
      uVar8 = uVar8 | 1 << (uVar1 & 0xff);
    } while ((uVar8 & uVar5) != uVar5);
    uVar1 = 0;
    uVar5 = ~uVar5;
    piVar2 = piVar6;
    if ((uVar8 & uVar5) != 0) {
      do {
        piVar2 = piVar2 + 1;
        uVar4 = 1 << (uVar1 & 0xff);
        if ((uVar8 & uVar4 & uVar5) != 0) {
          *piVar2 = *piVar6;
          *piVar6 = (int)piVar2;
          if (uVar1 < 0x10) {
            piVar6[0x11] = piVar6[0x11] & ~(1 << (uVar1 & 0x1f));
          }
          uVar8 = uVar8 & ~uVar4;
        }
        uVar1 = uVar1 + 1;
      } while (((uVar8 & uVar5) != 0) && (uVar1 < 0x10));
    }
    *(char *)(piVar6 + 0x14) = (char)param_2;
    uStack_2c = (undefined1)param_3;
    *(undefined1 *)((int)piVar6 + 0x51) = uStack_2c;
  }
  return in_lr;
}

/* --- func_0800736C @ 0x0800736C (116B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_0800736C @ 0x0800736C (116 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(RW), +0x00:u32(RW), +0x02:u16(RW), +0x44:u32(RW)
 * CFG Structure:
 *   L_0800736C: if (==) goto L_080073D4
 *   L_0800739A: if (<= (u)) goto L_080073B6
 *   L_080073B6: goto L_080073D6
 *   L_080073D6: return
 * ========================================================================== */
int func_0800736C(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	ldr r0, .Lpool_080073CC\n"
        "	ldr r2, [r0]\n"
        "	ldr r3, [r2]\n"
        "	add r5, r3, #0\n"
        "	cmp r3, #0\n"
        "	beq _L_080073D4\n"
        "	ldr r0, [r3]\n"
        "	str r0, [r2]\n"
        "	cmp r3, #0\n"
        "	beq _L_080073D4\n"
        "	sub r0, r3, #4\n"
        "	sub r0, r0, r2\n"
        "	asr r4, r0, #2\n"
        "	cmp r4, #0xf\n"
        "	bhi _L_0800739A\n"
        "	mov r0, #0x1f\n"
        "	and r0, r4\n"
        "	mov r1, #1\n"
        "	lsl r1, r0\n"
        "	ldr r0, [r2, #0x44]\n"
        "	orr r0, r1\n"
        "	str r0, [r2, #0x44]\n"
        "_L_0800739A:\n"
        "	add r1, r2, #0\n"
        "	add r1, #0x48\n"
        "	ldrh r0, [r1]\n"
        "	add r0, #1\n"
        "	strh r0, [r1]\n"
        "	mov r0, #1\n"
        "	strh r0, [r3]\n"
        "	add r1, #2\n"
        "	ldrh r0, [r1]\n"
        "	add r0, #1\n"
        "	ldr r2, .Lpool_080073D0\n"
        "	cmp r0, r2\n"
        "	bls _L_080073B6\n"
        "	mov r0, #1\n"
        "_L_080073B6:\n"
        "	strh r0, [r5, #2]\n"
        "	strh r0, [r1]\n"
        "	mov r1, #0xf\n"
        "	ldrh r0, [r5, #2]\n"
        "	and r0, r2\n"
        "	lsl r0, r0, #4\n"
        "	add r2, r4, #0\n"
        "	and r2, r1\n"
        "	orr r2, r0\n"
        "	b _L_080073D6\n"
        "	.align 2, 0\n"
        ".Lpool_080073CC:\n"
        "	.word 0x03000404\n"
        ".Lpool_080073D0:\n"
        "	.word 0x0000FFFF\n"
        "_L_080073D4:\n"
        "	mov r2, #0\n"
        "_L_080073D6:\n"
        "	add r0, r2, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
    return __ret;
}

/* --- func_080073E0 @ 0x080073E0 (124B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

void func_080073E0(int param_1, u32 param_2) {
    register u32 p2 asm("r4");
    register u32 r5 asm("r5");
    __asm__ volatile(
        "add %0, r1, #0\n\t"
        "ldr r0, =0x03000404\n\t"
        "ldr r3, [r0]\n\t"
        "cmp %0, #0\n\t"
        "beq _end_073E0\n\t"
        "lsl r0, %0, #0x1c\n\t"
        "lsr r2, r0, #0x1c\n\t"
        "add %1, r2, #0\n\t"
        "mov r0, #0\n\t"
        "cmp r2, #0xf\n\t"
        "bhi _chk_r0_073E0\n\t"
        "mov r0, #1\n\t"
        "lsl r0, r2\n\t"
        "ldr r1, [r3, #0x44]\n\t"
        "and r1, r0\n\t"
        "neg r0, r1\n\t"
        "orr r0, r1\n\t"
        "lsr r0, r0, #0x1f\n"
        "_chk_r0_073E0:\n\t"
        "cmp r0, #0\n\t"
        "beq _end_073E0\n\t"
        "lsl r0, r2, #2\n\t"
        "add r0, #4\n\t"
        "add r1, r3, r0\n\t"
        "mov r2, #0\n\t"
        "lsl r0, %0, #0xc\n\t"
        "lsr r0, r0, #0x10\n\t"
        "ldrh %0, [r1, #2]\n\t"
        "cmp r0, %0\n\t"
        "bne _chk_r2_073E0\n\t"
        "mov r2, #1\n"
        "_chk_r2_073E0:\n\t"
        "cmp r2, #0\n\t"
        "beq _end_073E0\n\t"
        "ldrh r0, [r1]\n\t"
        "sub r0, #1\n\t"
        "strh r0, [r1]\n\t"
        "lsl r0, r0, #0x10\n\t"
        "lsr r0, r0, #0x10\n\t"
        "cmp r0, #0\n\t"
        "bne _end_073E0\n\t"
        "strh r0, [r1, #2]\n\t"
        "ldr r0, [r3]\n\t"
        "str r0, [r1]\n\t"
        "str r1, [r3]\n\t"
        "cmp %1, #0xf\n\t"
        "bhi _dec_48_073E0\n\t"
        "mov r1, #1\n\t"
        "lsl r1, %1\n\t"
        "ldr r0, [r3, #0x44]\n\t"
        "bic r0, r1\n\t"
        "str r0, [r3, #0x44]\n"
        "_dec_48_073E0:\n\t"
        "add r1, r3, #0\n\t"
        "add r1, #0x48\n\t"
        "ldrh r0, [r1]\n\t"
        "sub r0, #1\n\t"
        "strh r0, [r1]\n"
        "_end_073E0:"
        : "=r"(p2), "=r"(r5) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_0800745C @ 0x0800745C (100B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_0800745C @ 0x0800745C (100 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(RW), +0x00:u32(R), +0x02:u16(R), +0x44:u32(R)
 * CFG Structure:
 *   L_0800745C: if (==) goto L_080074B6
 *   L_08007482: if (==) goto L_080074B6
 *   L_0800749A: if (==) goto L_080074B6
 *   L_080074B8: return
 * ========================================================================== */
int func_0800745C(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r3, r1, #0\n"
        "	ldr r0, .Lpool_080074B0\n"
        "	ldr r2, [r0]\n"
        "	cmp r3, #0\n"
        "	beq _L_080074B6\n"
        "	lsl r0, r3, #0x1c\n"
        "	lsr r1, r0, #0x1c\n"
        "	add r4, r1, #0\n"
        "	mov r0, #0\n"
        "	cmp r1, #0xf\n"
        "	bhi _L_08007482\n"
        "	mov r0, #1\n"
        "	lsl r0, r1\n"
        "	ldr r1, [r2, #0x44]\n"
        "	and r1, r0\n"
        "	neg r0, r1\n"
        "	orr r0, r1\n"
        "	lsr r0, r0, #0x1f\n"
        "_L_08007482:\n"
        "	cmp r0, #0\n"
        "	beq _L_080074B6\n"
        "	lsl r0, r4, #2\n"
        "	add r0, #4\n"
        "	add r1, r2, r0\n"
        "	mov r2, #0\n"
        "	lsl r0, r3, #0xc\n"
        "	lsr r0, r0, #0x10\n"
        "	ldrh r4, [r1, #2]\n"
        "	cmp r0, r4\n"
        "	bne _L_0800749A\n"
        "	mov r2, #1\n"
        "_L_0800749A:\n"
        "	cmp r2, #0\n"
        "	beq _L_080074B6\n"
        "	ldrh r2, [r1]\n"
        "	add r0, r2, #1\n"
        "	strh r0, [r1]\n"
        "	lsl r0, r0, #0x10\n"
        "	cmp r0, #0\n"
        "	beq _L_080074B4\n"
        "	add r0, r3, #0\n"
        "	b _L_080074B8\n"
        "	.align 2, 0\n"
        ".Lpool_080074B0:\n"
        "	.word 0x03000404\n"
        "_L_080074B4:\n"
        "	strh r2, [r1]\n"
        "_L_080074B6:\n"
        "	mov r0, #0\n"
        "_L_080074B8:\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "lr", "memory"
    );
    return __ret;
}

/* --- func_080074C0 @ 0x080074C0 (80B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080074C0 @ 0x080074C0 (80 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x06:u16(R), +0x44:u32(R)
 * CFG Structure:
 *   L_080074C0: if (==) goto L_08007502
 *   L_080074E6: if (==) goto L_08007502
 *   L_080074FC: if (!=) goto L_08007506
 *   L_08007506: return
 * ========================================================================== */
int func_080074C0(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r3, r1, #0\n"
        "	ldr r0, =0x03000404\n"
        "	ldr r4, [r0]\n"
        "	cmp r3, #0\n"
        "	beq _L_08007502\n"
        "	lsl r0, r3, #0x1c\n"
        "	lsr r2, r0, #0x1c\n"
        "	add r5, r2, #0\n"
        "	mov r0, #0\n"
        "	cmp r2, #0xf\n"
        "	bhi _L_080074E6\n"
        "	mov r0, #1\n"
        "	lsl r0, r2\n"
        "	ldr r1, [r4, #0x44]\n"
        "	and r1, r0\n"
        "	neg r0, r1\n"
        "	orr r0, r1\n"
        "	lsr r0, r0, #0x1f\n"
        "_L_080074E6:\n"
        "	cmp r0, #0\n"
        "	beq _L_08007502\n"
        "	lsl r1, r2, #2\n"
        "	add r1, r1, r4\n"
        "	mov r2, #0\n"
        "	lsl r0, r3, #0xc\n"
        "	lsr r0, r0, #0x10\n"
        "	ldrh r1, [r1, #6]\n"
        "	cmp r0, r1\n"
        "	bne _L_080074FC\n"
        "	mov r2, #1\n"
        "_L_080074FC:\n"
        "	add r0, r5, #0\n"
        "	cmp r2, #0\n"
        "	bne _L_08007506\n"
        "_L_08007502:\n"
        "	mov r0, #1\n"
        "	neg r0, r0\n"
        "_L_08007506:\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
    return __ret;
}

/* --- func_08007510 @ 0x08007510 (84B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08007510 @ 0x08007510 (84 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(R), +0x00:u32(R), +0x02:u16(R), +0x44:u32(R)
 * CFG Structure:
 *   L_08007510: if (==) goto L_0800755C
 *   L_08007536: if (==) goto L_0800755C
 *   L_0800754E: if (==) goto L_0800755C
 *   L_0800755E: return
 * ========================================================================== */
int func_08007510(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r2, r1, #0\n"
        "	ldr r0, .Lpool_08007558\n"
        "	ldr r3, [r0]\n"
        "	cmp r2, #0\n"
        "	beq _L_0800755C\n"
        "	lsl r0, r2, #0x1c\n"
        "	lsr r1, r0, #0x1c\n"
        "	add r4, r1, #0\n"
        "	mov r0, #0\n"
        "	cmp r1, #0xf\n"
        "	bhi _L_08007536\n"
        "	mov r0, #1\n"
        "	lsl r0, r1\n"
        "	ldr r1, [r3, #0x44]\n"
        "	and r1, r0\n"
        "	neg r0, r1\n"
        "	orr r0, r1\n"
        "	lsr r0, r0, #0x1f\n"
        "_L_08007536:\n"
        "	cmp r0, #0\n"
        "	beq _L_0800755C\n"
        "	lsl r0, r4, #2\n"
        "	add r0, #4\n"
        "	add r1, r3, r0\n"
        "	mov r3, #0\n"
        "	lsl r0, r2, #0xc\n"
        "	lsr r0, r0, #0x10\n"
        "	ldrh r2, [r1, #2]\n"
        "	cmp r0, r2\n"
        "	bne _L_0800754E\n"
        "	mov r3, #1\n"
        "_L_0800754E:\n"
        "	cmp r3, #0\n"
        "	beq _L_0800755C\n"
        "	ldrh r0, [r1]\n"
        "	b _L_0800755E\n"
        "	.align 2, 0\n"
        ".Lpool_08007558:\n"
        "	.word 0x03000404\n"
        "_L_0800755C:\n"
        "	mov r0, #0\n"
        "_L_0800755E:\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "lr", "memory"
    );
    return __ret;
}

/* --- func_08007578 @ 0x08007578 (404B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08007578 @ 0x08007578 (404 bytes)
 * Role   : C++ SGI STL Node Allocator / _Rb_tree / Container Template Method
 * Fields : +0x00:u32(RW), +0x00:u8(R), +0x04:u32(RW), +0x0C:u32(RW), +0x10:u32(W)
 * Callees: func_080005D4, func_08007128, func_08007184, func_0800736C, func_080073E0, func_0800745C, func_080D01F8, func_080D0260, func_080D3BC0, func_080D6DB8
 * CFG Structure:
 *   L_08007578: call func_080005D4(); call func_080D6DB8(); if (!=) goto L_080075B2
 *   L_080075B6: call func_08007128(); call func_0800736C(); if (==) goto L_080075EE
 *   L_080075E2: goto L_080076D6
 *   L_080075EE: if (>= (u)) goto L_08007606
 *   L_08007606: if (==) goto L_08007626
 *   L_08007622: goto L_0800762C
 *   L_0800762C: if (==) goto L_08007658
 *   L_0800763C: if (==) goto L_08007650
 *   L_08007650: if (!=) goto L_0800763C
 *   L_08007658: if (!=) goto L_0800767A
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08007128(void);
extern void func_08007184(void);
extern void func_0800736C(void);
extern void func_080073E0(void);
extern void func_0800745C(void);
extern void func_080D01F8(void);
extern void func_080D0260(void);
extern void func_080D3BC0(void);
extern void func_080D6DB8(void);
int func_08007578(void) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5, sp6, sp7;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5), "m"(sp6), "m"(sp7));
    __asm__ volatile(
        "	str r0, [sp, #0x14]\n"
        "	add r4, r1, #0\n"
        "	mov r0, #0x14\n"
        "	bl func_080005D4\n"
        "	add r7, r0, #0\n"
        "	mov r0, #0\n"
        "	str r0, [r7]\n"
        "	str r0, [r7, #4]\n"
        "	add r1, r7, #0\n"
        "	add r1, #8\n"
        "	str r0, [r1, #4]\n"
        "	ldrb r6, [r4]\n"
        "	add r0, r7, #0\n"
        "	add r1, r6, #0\n"
        "	bl func_080D6DB8\n"
        "	sub r0, r6, #1\n"
        "	lsl r0, r0, #0x18\n"
        "	lsr r6, r0, #0x18\n"
        "	cmp r6, #0xff\n"
        "	bne _L_080075B2\n"
        "	b _L_080076F2\n"
        "_L_080075B2:\n"
        "	add r0, sp, #4\n"
        "	mov sb, r0\n"
        "_L_080075B6:\n"
        "	mov r0, sb\n"
        "	bl func_08007128\n"
        "	mov r0, sb\n"
        "	bl func_0800736C\n"
        "	str r0, [sp, #8]\n"
        "	ldr r4, [r7, #4]\n"
        "	ldr r0, [r7, #0xc]\n"
        "	cmp r4, r0\n"
        "	beq _L_080075EE\n"
        "	cmp r4, #0\n"
        "	beq _L_080075E2\n"
        "	add r0, r4, #0\n"
        "	bl func_08007128\n"
        "	mov r2, sb\n"
        "	ldr r1, [r2, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_0800745C\n"
        "	str r0, [r4, #4]\n"
        "_L_080075E2:\n"
        "	ldr r0, [r7, #4]\n"
        "	add r0, #8\n"
        "	str r0, [r7, #4]\n"
        "	sub r6, #1\n"
        "	str r6, [sp, #0x1c]\n"
        "	b _L_080076D6\n"
        "_L_080075EE:\n"
        "	mov r8, r4\n"
        "	mov r0, #1\n"
        "	str r0, [sp, #0x10]\n"
        "	ldr r1, [r7]\n"
        "	sub r0, r4, r1\n"
        "	asr r4, r0, #3\n"
        "	str r4, [sp, #0xc]\n"
        "	add r2, sp, #0x10\n"
        "	add r0, sp, #0xc\n"
        "	cmp r4, #1\n"
        "	bhs _L_08007606\n"
        "	add r0, r2, #0\n"
        "_L_08007606:\n"
        "	ldr r0, [r0]\n"
        "	add r0, r4, r0\n"
        "	cmp r0, #0\n"
        "	beq _L_08007626\n"
        "	lsl r4, r0, #3\n"
        "	add r0, r4, #0\n"
        "	bl func_080D01F8\n"
        "	str r4, [sp, #0x18]\n"
        "	cmp r0, #0\n"
        "	bne _L_08007622\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3BC0\n"
        "_L_08007622:\n"
        "	ldr r1, [r7]\n"
        "	b _L_0800762C\n"
        "_L_08007626:\n"
        "	mov r0, #0\n"
        "	mov r2, #0\n"
        "	str r2, [sp, #0x18]\n"
        "_L_0800762C:\n"
        "	add r5, r0, #0\n"
        "	mov sl, r5\n"
        "	add r5, r1, #0\n"
        "	mov r4, sl\n"
        "	sub r6, #1\n"
        "	str r6, [sp, #0x1c]\n"
        "	cmp r5, r8\n"
        "	beq _L_08007658\n"
        "_L_0800763C:\n"
        "	cmp r4, #0\n"
        "	beq _L_08007650\n"
        "	add r0, r4, #0\n"
        "	bl func_08007128\n"
        "	ldr r1, [r5, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_0800745C\n"
        "	str r0, [r4, #4]\n"
        "_L_08007650:\n"
        "	add r5, #8\n"
        "	add r4, #8\n"
        "	cmp r5, r8\n"
        "	bne _L_0800763C\n"
        "_L_08007658:\n"
        "	add r5, r4, #0\n"
        "	ldr r0, [sp, #0x10]\n"
        "	cmp r0, #1\n"
        "	bne _L_0800767A\n"
        "	cmp r5, #0\n"
        "	beq _L_08007676\n"
        "	add r0, r5, #0\n"
        "	bl func_08007128\n"
        "	mov r0, sb\n"
        "	ldr r1, [r0, #4]\n"
        "	add r0, r5, #0\n"
        "	bl func_0800745C\n"
        "	str r0, [r5, #4]\n"
        "_L_08007676:\n"
        "	add r5, #8\n"
        "	b _L_080076A2\n"
        "_L_0800767A:\n"
        "	add r6, r0, #0\n"
        "	add r4, r5, #0\n"
        "	cmp r6, #0\n"
        "	beq _L_080076A0\n"
        "_L_08007682:\n"
        "	cmp r4, #0\n"
        "	beq _L_08007698\n"
        "	add r0, r4, #0\n"
        "	bl func_08007128\n"
        "	mov r2, sb\n"
        "	ldr r1, [r2, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_0800745C\n"
        "	str r0, [r4, #4]\n"
        "_L_08007698:\n"
        "	sub r6, #1\n"
        "	add r4, #8\n"
        "	cmp r6, #0\n"
        "	bne _L_08007682\n"
        "_L_080076A0:\n"
        "	add r5, r4, #0\n"
        "_L_080076A2:\n"
        "	ldr r6, [r7, #4]\n"
        "	ldr r4, [r7]\n"
        "	cmp r4, r6\n"
        "	beq _L_080076C0\n"
        "_L_080076AA:\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	add r4, #8\n"
        "	cmp r4, r6\n"
        "	bne _L_080076AA\n"
        "_L_080076C0:\n"
        "	ldr r0, [r7]\n"
        "	cmp r0, #0\n"
        "	beq _L_080076CA\n"
        "	bl func_080D0260\n"
        "_L_080076CA:\n"
        "	ldr r0, [sp, #0x18]\n"
        "	add r0, sl\n"
        "	mov r1, sl\n"
        "	str r1, [r7]\n"
        "	str r5, [r7, #4]\n"
        "	str r0, [r7, #0xc]\n"
        "_L_080076D6:\n"
        "	ldr r1, [sp, #8]\n"
        "	mov r0, sb\n"
        "	bl func_080073E0\n"
        "	mov r0, sb\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	ldr r2, [sp, #0x1c]\n"
        "	lsl r0, r2, #0x18\n"
        "	lsr r6, r0, #0x18\n"
        "	cmp r6, #0xff\n"
        "	beq _L_080076F2\n"
        "	b _L_080075B6\n"
        "_L_080076F2:\n"
        "	ldr r0, [r7]\n"
        "	str r0, [r7, #0x10]\n"
        "	ldr r0, [sp, #0x14]\n"
        "	str r7, [r0]\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r10", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_0800770C @ 0x0800770C (8B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_0800770C(u32 *arg0) {
    *arg0 = 0;
}

/* --- func_08007714 @ 0x08007714 (92B) [PURE-C | agbcc_O2] --- */
#define NULL 0

extern void func_080073E0();
extern void func_08007184();
extern void func_080D0260();
extern void func_08000608();
void func_08007714(u32 **param_1, int param_2) {
    u32 *p = *param_1;
    if (p != 0) {
        u32 *q = p;
        u32 end = q[1];
        u32 cur = q[0];
        for (; cur != end; cur += 8) {
            func_080073E0(cur, *(u32 *)(cur + 4));
            func_08007184(cur, 2);
        }
        if (q[0] != 0) {
            func_080D0260(q[0]);
        }
        func_08000608(q);
    }
    if (param_2 & 1) {
        func_08000608(param_1);
    }
}

/* --- func_08007770 @ 0x08007770 (108B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08007770 @ 0x08007770 (108 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x04:u32(RW), +0x10:u32(RW)
 * Callees: func_08007128, func_0800736C, func_0800745C, func_08007510
 * CFG Structure:
 *   L_08007770: if (==) goto L_080077BE
 *   L_0800778E: if (!=) goto L_08007798
 *   L_08007798: call func_08007510(); if (==) goto L_080077B8
 *   L_080077A8: call func_08007128(); call func_0800745C(); goto L_080077CA
 *   L_080077B8: goto L_080077A8
 *   L_080077BE: call func_08007128(); call func_0800736C()
 *   L_080077CA: return
 * ========================================================================== */
extern void func_08007128(void);
extern void func_0800736C(void);
extern void func_0800745C(void);
extern void func_08007510(void);
int func_08007770(void) {
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	ldr r1, [r1]\n"
        "	cmp r1, #0\n"
        "	beq _L_080077BE\n"
        "	add r6, r1, #0\n"
        "	ldr r0, [r6, #4]\n"
        "	mov r8, r0\n"
        "	ldr r4, [r6, #0x10]\n"
        "	cmp r4, r8\n"
        "	beq _L_080077A8\n"
        "	mov sb, r4\n"
        "_L_0800778E:\n"
        "	add r5, r4, #0\n"
        "	add r4, #8\n"
        "	cmp r4, r8\n"
        "	bne _L_08007798\n"
        "	ldr r4, [r6]\n"
        "_L_08007798:\n"
        "	ldr r1, [r5, #4]\n"
        "	add r0, r5, #0\n"
        "	bl func_08007510\n"
        "	cmp r0, #1\n"
        "	beq _L_080077B8\n"
        "	cmp r4, sb\n"
        "	bne _L_0800778E\n"
        "_L_080077A8:\n"
        "	add r0, r7, #0\n"
        "	bl func_08007128\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r7, #0\n"
        "	bl func_0800745C\n"
        "	b _L_080077CA\n"
        "_L_080077B8:\n"
        "	str r4, [r6, #0x10]\n"
        "	add r4, r5, #0\n"
        "	b _L_080077A8\n"
        "_L_080077BE:\n"
        "	add r0, r7, #0\n"
        "	bl func_08007128\n"
        "	add r0, r7, #0\n"
        "	bl func_0800736C\n"
        "_L_080077CA:\n"
        "	str r0, [r7, #4]\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080077DC @ 0x080077DC (104B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080077DC @ 0x080077DC (104 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW)
 * CFG Structure:
 *   L_080077DC: if (!=) goto L_080077EE
 *   L_080077EE: if (!=) goto L_0800783A
 *   L_080077FA: if (==) goto L_0800781A
 *   L_08007810: goto L_0800783C
 *   L_0800781A: if (> (u)) goto L_0800783A
 *   L_0800782A: if (==) goto L_08007810
 *   L_0800783C: return
 * ========================================================================== */
int func_080077DC(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	add r4, r1, #0\n"
        "	mov r1, #0\n"
        "	ldr r3, [r5]\n"
        "	add r0, r3, #1\n"
        "	cmp r0, #0\n"
        "	bne _L_080077EE\n"
        "	mov r1, #1\n"
        "_L_080077EE:\n"
        "	cmp r1, #0\n"
        "	bne _L_0800783A\n"
        "	mov r0, #0\n"
        "	cmp r3, #0\n"
        "	bne _L_080077FA\n"
        "	mov r0, #1\n"
        "_L_080077FA:\n"
        "	cmp r0, #0\n"
        "	beq _L_0800781A\n"
        "	mov r0, #1\n"
        "	add r1, r0, #0\n"
        "	lsl r1, r4\n"
        "	lsl r0, r1\n"
        "	sub r0, #1\n"
        "	orr r3, r0\n"
        "	str r3, [r5]\n"
        "	mov r0, #0\n"
        "	b _L_0800783C\n"
        "_L_08007810:\n"
        "	ldr r0, [r5]\n"
        "	orr r0, r1\n"
        "	str r0, [r5]\n"
        "	add r0, r4, #0\n"
        "	b _L_0800783C\n"
        "_L_0800781A:\n"
        "	cmp r4, #4\n"
        "	bhi _L_0800783A\n"
        "	mov r0, #1\n"
        "	add r2, r0, #0\n"
        "	lsl r2, r4\n"
        "	mov r4, #0\n"
        "	lsl r0, r2\n"
        "	sub r1, r0, #1\n"
        "_L_0800782A:\n"
        "	add r0, r3, #0\n"
        "	and r0, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_08007810\n"
        "	add r4, r4, r2\n"
        "	lsl r1, r2\n"
        "	cmp r1, #0\n"
        "	bne _L_0800782A\n"
        "_L_0800783A:\n"
        "	mov r0, #0x20\n"
        "_L_0800783C:\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
    return __ret;
}

/* --- func_08007844 @ 0x08007844 (48B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

void func_08007844(u32 *param_1, u32 param_2, u32 param_3) {
    register u32 *p1 asm("r3") = param_1;
    register u32 p2 asm("r4") = param_2;
    register u32 p3 asm("r2") = param_3;
    if (p3 <= 4) {
        register u32 r1 asm("r1") = 1;
        register u32 r0 asm("r0") = r1;
        __asm__(
            "lsl %0, %2\n\t"
            "lsl %1, %0\n\t"
            "sub %1, #1\n\t"
            "mov %0, #0x1f\n\t"
            "and %0, %3\n\t"
            "lsl %1, %0\n\t"
            "ldr %0, [%4]\n\t"
            "bic %0, %1"
            : "+r"(r0), "+r"(r1) : "r"(p3), "r"(p2), "r"(p1)
        );
        *p1 = r0;
    } else if (p3 == 5) {
        *p1 = 0;
    }
}

/* --- func_08007874 @ 0x08007874 (348B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08007874 @ 0x08007874 (348 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(W), +0x00:u32(RW), +0x00:u8(W), +0x01:u8(W), +0x20:u32(W)
 * Callees: func_080005D4, func_08007EC8, func_080D770C
 * CFG Structure:
 *   L_08007874: if (==) goto L_0800788C
 *   L_0800788C: call func_080005D4(); if (==) goto L_080078AC
 *   L_080078A6: if (!=) goto L_080078A6
 *   L_080078AC: call func_080D770C()
 *   L_0800793C: if (!=) goto L_0800793C
 *   L_08007980: if (!=) goto L_08007980
 *   L_08007986: call func_08007EC8()
 *   L_08007992: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08007EC8(void);
extern void func_080D770C(void);
void func_08007874(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, r7, lr}\n"
        "	mov r7, sl\n"
        "	mov r6, sb\n"
        "	mov r5, r8\n"
        "	push {r5, r6, r7}\n"
        "	sub sp, #0x30\n"
        "	str r0, [sp, #8]\n"
        "	ldr r0, .Lpool_080079B4\n"
        "	ldr r4, [r0]\n"
        "	cmp r4, #0\n"
        "	beq _L_0800788C\n"
        "	b _L_08007992\n"
        "_L_0800788C:\n"
        "	ldr r0, .Lpool_080079B8\n"
        "	bl func_080005D4\n"
        "	mov r8, r0\n"
        "	str r4, [sp]\n"
        "	mov r1, r8\n"
        "	add r1, #0x20\n"
        "	mov r2, sp\n"
        "	add r2, #4\n"
        "	str r2, [sp, #0x2c]\n"
        "	cmp r8, r1\n"
        "	beq _L_080078AC\n"
        "	mov r2, #0\n"
        "_L_080078A6:\n"
        "	stm r0!, {r2}\n"
        "	cmp r0, r1\n"
        "	bne _L_080078A6\n"
        "_L_080078AC:\n"
        "	mov r0, r8\n"
        "	add r0, #0x24\n"
        "	mov r1, #0x80\n"
        "	lsl r1, r1, #1\n"
        "	mov r2, #0\n"
        "	bl func_080D770C\n"
        "	mov r1, r8\n"
        "	str r0, [r1, #0x20]\n"
        "	ldr r1, .Lpool_080079BC\n"
        "	add r1, r8\n"
        "	mov r0, #0\n"
        "	strb r0, [r1]\n"
        "	mov r0, #1\n"
        "	strb r0, [r1, #1]\n"
        "	ldr r2, .Lpool_080079C0\n"
        "	add r2, r8\n"
        "	mov r4, #1\n"
        "	mov r0, r8\n"
        "	add r0, #0x20\n"
        "	str r0, [sp, #0x20]\n"
        "	str r1, [sp, #0xc]\n"
        "	mov r1, #0x92\n"
        "	lsl r1, r1, #4\n"
        "	add r1, r8\n"
        "	str r1, [sp, #0x10]\n"
        "	ldr r0, .Lpool_080079C4\n"
        "	add r0, r8\n"
        "	str r0, [sp, #0x14]\n"
        "	ldr r1, .Lpool_080079C8\n"
        "	add r1, r8\n"
        "	str r1, [sp, #0x18]\n"
        "	ldr r0, .Lpool_080079CC\n"
        "	add r0, r8\n"
        "	str r0, [sp, #0x1c]\n"
        "	mov r7, #0\n"
        "	mov ip, r4\n"
        "	mov r6, #1\n"
        "	neg r6, r6\n"
        "_L_080078FA:\n"
        "	strb r7, [r2]\n"
        "	mov r1, ip\n"
        "	strb r1, [r2, #1]\n"
        "	add r0, r2, #4\n"
        "	mov r3, #1\n"
        "	add r2, #0x7c\n"
        "	str r2, [sp, #0x28]\n"
        "	sub r4, #1\n"
        "	str r4, [sp, #0x24]\n"
        "_L_0800790C:\n"
        "	strb r7, [r0]\n"
        "	mov r2, ip\n"
        "	strb r2, [r0, #1]\n"
        "	add r2, r0, #4\n"
        "	mov r1, #1\n"
        "	add r0, #0x3c\n"
        "	mov sb, r0\n"
        "	sub r3, #1\n"
        "	mov sl, r3\n"
        "_L_0800791E:\n"
        "	strb r7, [r2]\n"
        "	mov r0, ip\n"
        "	strb r0, [r2, #1]\n"
        "	add r0, r2, #4\n"
        "	mov r3, #1\n"
        "	add r4, r2, #0\n"
        "	add r4, #0x1c\n"
        "	sub r5, r1, #1\n"
        "_L_0800792E:\n"
        "	strb r7, [r0]\n"
        "	mov r1, ip\n"
        "	strb r1, [r0, #1]\n"
        "	add r1, r0, #4\n"
        "	mov r2, #1\n"
        "	add r0, #0xc\n"
        "	sub r3, #1\n"
        "_L_0800793C:\n"
        "	stm r1!, {r7}\n"
        "	sub r2, #1\n"
        "	cmp r2, r6\n"
        "	bne _L_0800793C\n"
        "	cmp r3, r6\n"
        "	bne _L_0800792E\n"
        "	add r2, r4, #0\n"
        "	add r1, r5, #0\n"
        "	cmp r1, r6\n"
        "	bne _L_0800791E\n"
        "	mov r0, sb\n"
        "	mov r3, sl\n"
        "	cmp r3, r6\n"
        "	bne _L_0800790C\n"
        "	ldr r2, [sp, #0x28]\n"
        "	ldr r4, [sp, #0x24]\n"
        "	cmp r4, r6\n"
        "	bne _L_080078FA\n"
        "	mov r0, #0\n"
        "	ldr r2, [sp, #0x10]\n"
        "	strh r0, [r2]\n"
        "	ldr r1, [sp, #0x14]\n"
        "	str r0, [r1]\n"
        "	ldr r2, [sp, #0x18]\n"
        "	strh r0, [r2]\n"
        "	ldr r1, [sp, #0x1c]\n"
        "	strh r0, [r1]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, r8\n"
        "	ldr r2, [sp, #0x20]\n"
        "	cmp r8, r2\n"
        "	beq _L_08007986\n"
        "	ldr r1, [sp, #0x2c]\n"
        "	ldr r3, [r1]\n"
        "_L_08007980:\n"
        "	stm r0!, {r3}\n"
        "	cmp r0, r2\n"
        "	bne _L_08007980\n"
        "_L_08007986:\n"
        "	ldr r0, [sp, #0xc]\n"
        "	bl func_08007EC8\n"
        "	mov r2, r8\n"
        "	ldr r0, .Lpool_080079B4\n"
        "	str r2, [r0]\n"
        "_L_08007992:\n"
        "	ldr r0, .Lpool_080079B4\n"
        "	ldr r1, [r0]\n"
        "	ldr r2, .Lpool_080079C4\n"
        "	add r1, r1, r2\n"
        "	ldr r0, [r1]\n"
        "	add r0, #1\n"
        "	str r0, [r1]\n"
        "	ldr r0, [sp, #8]\n"
        "	add sp, #0x30\n"
        "	pop {r3, r4, r5}\n"
        "	mov r8, r3\n"
        "	mov sb, r4\n"
        "	mov sl, r5\n"
        "	pop {r4, r5, r6, r7}\n"
        "	pop {r1}\n"
        "	bx r1\n"
        "	.hword 0x0000\n"
        ".Lpool_080079B4:\n"
        "	.word 0x03000408\n"
        ".Lpool_080079B8:\n"
        "	.word 0x0000092C\n"
        ".Lpool_080079BC:\n"
        "	.word 0x00000824\n"
        ".Lpool_080079C0:\n"
        "	.word 0x00000828\n"
        ".Lpool_080079C4:\n"
        "	.word 0x00000924\n"
        ".Lpool_080079C8:\n"
        "	.word 0x00000928\n"
        ".Lpool_080079CC:\n"
        "	.word 0x0000092A\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080079E8 @ 0x080079E8 (64B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
/* paridad 97.2% preset agbcc_O2 */
void func_080079E8(u32 arg0,u32 arg1) {
  int *mem_ptr;
  int val;
  int val2;
  mem_ptr = 0x03000408;
  val = *(u32 *)0x03000408;
  val2 = *(int *)(val + 0x00000924) + -1;
  *(int *)(val + 0x00000924) = val2;
  if (val2 == 0) {
    if (val != 0) {
      func_08000608(val);
    }
    *mem_ptr = 0;
  }
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_08007A28 @ 0x08007A28 (300B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08007A28 @ 0x08007A28 (300 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(RW), +0x00:u32(RW), +0x01:u8(R), +0x04:u16(RW), +0x20:u32(RW)
 * Callees: func_08007EE8, func_08007F84, func_080080A0
 * CFG Structure:
 *   L_08007A28: if (==) goto L_08007A5A
 *   L_08007A5A: if (==) goto L_08007B32
 *   L_08007A8C: if (> (u)) goto L_08007AAA
 *   L_08007AAA: if (==) goto L_08007B04
 *   L_08007B04: if (==) goto L_08007B18
 *   L_08007B18: call func_08007EE8()
 *   L_08007B32: return
 * ========================================================================== */
extern void func_08007EE8(void);
extern void func_08007F84(void);
extern void func_080080A0(void);
void func_08007A28(void) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5;
    int r7_var;
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5));
    __asm__ volatile(
        "	str r1, [sp]\n"
        "	str r2, [sp, #4]\n"
        "	ldr r0, =0x03000408\n"
        "	ldr r5, [r0]\n"
        "	ldr r0, =0x0000092A\n"
        "	add r4, r5, r0\n"
        "	ldrh r0, [r4]\n"
        "	cmp r0, #0\n"
        "	beq _L_08007A5A\n"
        "	ldr r1, =0x00000824\n"
        "	add r0, r5, r1\n"
        "	ldr r2, =0x00000928\n"
        "	add r1, r5, r2\n"
        "	ldrh r1, [r1]\n"
        "	ldrh r2, [r4]\n"
        "	bl func_08007F84\n"
        "	mov r0, #0\n"
        "	strh r0, [r4]\n"
        "_L_08007A5A:\n"
        "	ldr r0, [sp, #4]\n"
        "	cmp r0, #0\n"
        "	beq _L_08007B32\n"
        "	ldr r1, [sp]\n"
        "	add r1, r1, r0\n"
        "	str r1, [sp, #8]\n"
        "	mov r7, #0\n"
        "	mov r2, #0x92\n"
        "	lsl r2, r2, #4\n"
        "	add r0, r5, r2\n"
        "	ldrh r1, [r0]\n"
        "	str r4, [sp, #0x14]\n"
        "	sub r2, #0xfc\n"
        "	add r2, r5, r2\n"
        "	str r2, [sp, #0xc]\n"
        "	ldr r2, =0x00000928\n"
        "	add r2, r5, r2\n"
        "	str r2, [sp, #0x10]\n"
        "	mov sl, r0\n"
        "	cmp r1, #0\n"
        "	beq _L_08007B18\n"
        "	mov r0, #0x24\n"
        "	add r0, r0, r5\n"
        "	mov r8, r0\n"
        "	mov r6, r8\n"
        "_L_08007A8C:\n"
        "	mov r0, #0\n"
        "	cmp r7, #0xff\n"
        "	bhi _L_08007AAA\n"
        "	lsr r1, r7, #5\n"
        "	lsl r1, r1, #2\n"
        "	add r1, r5, r1\n"
        "	mov r0, #0x1f\n"
        "	and r0, r7\n"
        "	mov r2, #1\n"
        "	lsl r2, r0\n"
        "	ldr r1, [r1]\n"
        "	and r1, r2\n"
        "	neg r0, r1\n"
        "	orr r0, r1\n"
        "	lsr r0, r0, #0x1f\n"
        "_L_08007AAA:\n"
        "	cmp r0, #0\n"
        "	beq _L_08007B04\n"
        "	ldrh r0, [r6]\n"
        "	lsl r4, r0, #0x16\n"
        "	lsr r3, r4, #0x16\n"
        "	ldrb r0, [r6, #1]\n"
        "	lsl r2, r0, #0x1a\n"
        "	lsr r1, r2, #0x1c\n"
        "	mov r0, #1\n"
        "	mov sb, r0\n"
        "	lsl r0, r1\n"
        "	add r0, r3, r0\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, r0\n"
        "	bhs _L_08007B04\n"
        "	ldr r0, [sp, #8]\n"
        "	cmp r3, r0\n"
        "	bhs _L_08007B04\n"
        "	add r1, r3, #0\n"
        "	lsr r2, r2, #0x1c\n"
        "	ldr r0, [sp, #0xc]\n"
        "	bl func_080080A0\n"
        "	mov r0, #0\n"
        "	strh r0, [r6, #4]\n"
        "	ldr r0, [r5, #0x20]\n"
        "	str r0, [r6]\n"
        "	mov r1, r8\n"
        "	str r1, [r5, #0x20]\n"
        "	cmp r7, #0xff\n"
        "	bhi _L_08007AFC\n"
        "	lsr r2, r7, #5\n"
        "	lsl r2, r2, #2\n"
        "	add r2, r5, r2\n"
        "	mov r0, #0x1f\n"
        "	and r0, r7\n"
        "	mov r1, sb\n"
        "	lsl r1, r0\n"
        "	ldr r0, [r2]\n"
        "	bic r0, r1\n"
        "	str r0, [r2]\n"
        "_L_08007AFC:\n"
        "	mov r2, sl\n"
        "	ldrh r0, [r2]\n"
        "	sub r0, #1\n"
        "	strh r0, [r2]\n"
        "_L_08007B04:\n"
        "	add r6, #8\n"
        "	mov r0, #8\n"
        "	add r8, r0\n"
        "	add r7, #1\n"
        "	mov r1, sl\n"
        "	ldrh r0, [r1]\n"
        "	cmp r0, #0\n"
        "	beq _L_08007B18\n"
        "	cmp r7, #0xff\n"
        "	bls _L_08007A8C\n"
        "_L_08007B18:\n"
        "	ldr r0, [sp, #0xc]\n"
        "	ldr r1, [sp]\n"
        "	ldr r2, [sp, #4]\n"
        "	bl func_08007EE8\n"
        "	mov r2, sp\n"
        "	ldrh r0, [r2]\n"
        "	ldr r2, [sp, #0x10]\n"
        "	strh r0, [r2]\n"
        "	mov r1, sp\n"
        "	ldrh r2, [r1, #4]\n"
        "	ldr r1, [sp, #0x14]\n"
        "	strh r2, [r1]\n"
        "_L_08007B32:\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r10", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_08007B54 @ 0x08007B54 (212B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08007B54 @ 0x08007B54 (212 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(RW), +0x00:u32(RW), +0x01:u8(RW), +0x02:u16(W), +0x04:u16(RW), +0x20:u32(RW)
 * Callees: func_08008020, func_080080A0
 * CFG Structure:
 *   L_08007B54: call func_08008020(); if (> (u)) goto L_08007B76
 *   L_08007B76: if (==) goto L_08007C1C
 *   L_08007BAA: if (<= (u)) goto L_08007BEA
 *   L_08007BEA: goto L_08007C1E
 *   L_08007C14: call func_080080A0()
 *   L_08007C1E: return
 * ========================================================================== */
extern void func_08008020(void);
extern void func_080080A0(void);
int func_08007B54(void) {
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r7, r1, #0\n"
        "	ldr r0, .Lpool_08007BFC\n"
        "	ldr r4, [r0]\n"
        "	ldr r0, .Lpool_08007C00\n"
        "	add r6, r4, r0\n"
        "	add r0, r6, #0\n"
        "	bl func_08008020\n"
        "	add r5, r0, #0\n"
        "	add r1, r5, #0\n"
        "	mov r0, #0\n"
        "	ldr r2, .Lpool_08007C04\n"
        "	mov ip, r2\n"
        "	cmp r5, ip\n"
        "	bhi _L_08007B76\n"
        "	mov r0, #1\n"
        "_L_08007B76:\n"
        "	cmp r0, #0\n"
        "	beq _L_08007C1C\n"
        "	add r2, r4, #0\n"
        "	add r2, #0x20\n"
        "	ldr r3, [r4, #0x20]\n"
        "	cmp r3, #0\n"
        "	beq _L_08007C14\n"
        "	ldr r0, [r3]\n"
        "	str r0, [r4, #0x20]\n"
        "	cmp r3, #0\n"
        "	beq _L_08007C14\n"
        "	sub r0, r3, #4\n"
        "	sub r0, r0, r2\n"
        "	asr r6, r0, #3\n"
        "	cmp r6, #0xff\n"
        "	bhi _L_08007BAA\n"
        "	lsr r2, r6, #5\n"
        "	lsl r2, r2, #2\n"
        "	add r2, r4, r2\n"
        "	mov r0, #0x1f\n"
        "	and r0, r6\n"
        "	mov r1, #1\n"
        "	lsl r1, r0\n"
        "	ldr r0, [r2]\n"
        "	orr r0, r1\n"
        "	str r0, [r2]\n"
        "_L_08007BAA:\n"
        "	mov r0, #0x92\n"
        "	lsl r0, r0, #4\n"
        "	add r1, r4, r0\n"
        "	ldrh r0, [r1]\n"
        "	add r0, #1\n"
        "	strh r0, [r1]\n"
        "	mov r2, ip\n"
        "	and r5, r2\n"
        "	ldrh r1, [r3]\n"
        "	ldr r0, .Lpool_08007C08\n"
        "	and r0, r1\n"
        "	orr r0, r5\n"
        "	strh r0, [r3]\n"
        "	mov r0, #0xf\n"
        "	and r7, r0\n"
        "	lsl r2, r7, #2\n"
        "	ldrb r1, [r3, #1]\n"
        "	mov r0, #0x3d\n"
        "	neg r0, r0\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	strb r0, [r3, #1]\n"
        "	mov r0, #1\n"
        "	strh r0, [r3, #2]\n"
        "	ldr r0, .Lpool_08007C0C\n"
        "	add r1, r4, r0\n"
        "	ldrh r0, [r1]\n"
        "	add r0, #1\n"
        "	ldr r2, .Lpool_08007C10\n"
        "	cmp r0, r2\n"
        "	bls _L_08007BEA\n"
        "	mov r0, #1\n"
        "_L_08007BEA:\n"
        "	strh r0, [r3, #4]\n"
        "	strh r0, [r1]\n"
        "	lsl r1, r6, #0x18\n"
        "	ldrh r0, [r3, #4]\n"
        "	and r0, r2\n"
        "	lsl r0, r0, #8\n"
        "	lsr r1, r1, #0x18\n"
        "	orr r1, r0\n"
        "	b _L_08007C1E\n"
        "	.align 2, 0\n"
        ".Lpool_08007BFC:\n"
        "	.word 0x03000408\n"
        ".Lpool_08007C00:\n"
        "	.word 0x00000824\n"
        ".Lpool_08007C04:\n"
        "	.word 0x000003FF\n"
        ".Lpool_08007C08:\n"
        "	.word 0xFFFFFC00\n"
        ".Lpool_08007C0C:\n"
        "	.word 0x00000922\n"
        ".Lpool_08007C10:\n"
        "	.word 0x0000FFFF\n"
        "_L_08007C14:\n"
        "	add r0, r6, #0\n"
        "	add r2, r7, #0\n"
        "	bl func_080080A0\n"
        "_L_08007C1C:\n"
        "	mov r1, #0\n"
        "_L_08007C1E:\n"
        "	add r0, r1, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_08007C28 @ 0x08007C28 (176B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08007C28 @ 0x08007C28 (176 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(RW), +0x00:u32(RW), +0x00:u8(R), +0x01:u8(R), +0x02:u16(RW), +0x04:u16(RW), +0x20:u32(RW)
 * Callees: func_080080A0
 * CFG Structure:
 *   L_08007C28: if (==) goto L_08007CC8
 *   L_08007C5A: if (==) goto L_08007CC8
 *   L_08007C76: if (==) goto L_08007CC8
 *   L_08007CC8: return
 * ========================================================================== */
extern void func_080080A0(void);
void func_08007C28(void) {
    u32 sp0;
    int r7_var;
    __asm__ volatile("" : : "m"(sp0));
    __asm__ volatile(
        "	add r3, r1, #0\n"
        "	ldr r0, =0x03000408\n"
        "	ldr r6, [r0]\n"
        "	cmp r3, #0\n"
        "	beq _L_08007CC8\n"
        "	str r3, [sp]\n"
        "	mov r0, sp\n"
        "	ldrb r5, [r0]\n"
        "	mov r0, #0\n"
        "	cmp r5, #0xff\n"
        "	bhi _L_08007C5A\n"
        "	lsr r1, r5, #5\n"
        "	lsl r1, r1, #2\n"
        "	add r1, r6, r1\n"
        "	mov r0, #0x1f\n"
        "	and r0, r5\n"
        "	mov r2, #1\n"
        "	lsl r2, r0\n"
        "	ldr r1, [r1]\n"
        "	and r1, r2\n"
        "	neg r0, r1\n"
        "	orr r0, r1\n"
        "	lsr r0, r0, #0x1f\n"
        "_L_08007C5A:\n"
        "	cmp r0, #0\n"
        "	beq _L_08007CC8\n"
        "	add r0, r6, #0\n"
        "	add r0, #0x20\n"
        "	lsl r1, r5, #3\n"
        "	add r1, #4\n"
        "	add r4, r0, r1\n"
        "	mov r1, #0\n"
        "	lsl r0, r3, #8\n"
        "	lsr r0, r0, #0x10\n"
        "	ldrh r2, [r4, #4]\n"
        "	cmp r0, r2\n"
        "	bne _L_08007C76\n"
        "	mov r1, #1\n"
        "_L_08007C76:\n"
        "	cmp r1, #0\n"
        "	beq _L_08007CC8\n"
        "	ldrh r0, [r4, #2]\n"
        "	sub r0, #1\n"
        "	strh r0, [r4, #2]\n"
        "	lsl r0, r0, #0x10\n"
        "	lsr r7, r0, #0x10\n"
        "	cmp r7, #0\n"
        "	bne _L_08007CC8\n"
        "	ldr r1, =0x00000824\n"
        "	add r0, r6, r1\n"
        "	ldrh r1, [r4]\n"
        "	lsl r1, r1, #0x16\n"
        "	lsr r1, r1, #0x16\n"
        "	ldrb r2, [r4, #1]\n"
        "	lsl r2, r2, #0x1a\n"
        "	lsr r2, r2, #0x1c\n"
        "	bl func_080080A0\n"
        "	strh r7, [r4, #4]\n"
        "	ldr r0, [r6, #0x20]\n"
        "	str r0, [r4]\n"
        "	str r4, [r6, #0x20]\n"
        "	cmp r5, #0xff\n"
        "	bhi _L_08007CBC\n"
        "	lsr r2, r5, #5\n"
        "	lsl r2, r2, #2\n"
        "	add r2, r6, r2\n"
        "	mov r0, #0x1f\n"
        "	and r5, r0\n"
        "	mov r1, #1\n"
        "	lsl r1, r5\n"
        "	ldr r0, [r2]\n"
        "	bic r0, r1\n"
        "	str r0, [r2]\n"
        "_L_08007CBC:\n"
        "	mov r2, #0x92\n"
        "	lsl r2, r2, #4\n"
        "	add r1, r6, r2\n"
        "	ldrh r0, [r1]\n"
        "	sub r0, #1\n"
        "	strh r0, [r1]\n"
        "_L_08007CC8:\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_08007CD8 @ 0x08007CD8 (116B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08007CD8 @ 0x08007CD8 (116 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x00:u8(R), +0x02:u16(RW), +0x04:u16(R)
 * CFG Structure:
 *   L_08007CD8: if (==) goto L_08007D42
 *   L_08007D0A: if (==) goto L_08007D42
 *   L_08007D26: if (==) goto L_08007D42
 *   L_08007D44: return
 * ========================================================================== */
int func_08007CD8(void) {
    u32 sp0;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0));
    __asm__ volatile(
        "	add r4, r1, #0\n"
        "	ldr r0, .Lpool_08007D3C\n"
        "	ldr r5, [r0]\n"
        "	cmp r4, #0\n"
        "	beq _L_08007D42\n"
        "	str r4, [sp]\n"
        "	mov r0, sp\n"
        "	ldrb r3, [r0]\n"
        "	mov r0, #0\n"
        "	cmp r3, #0xff\n"
        "	bhi _L_08007D0A\n"
        "	lsr r1, r3, #5\n"
        "	lsl r1, r1, #2\n"
        "	add r1, r5, r1\n"
        "	mov r0, #0x1f\n"
        "	and r0, r3\n"
        "	mov r2, #1\n"
        "	lsl r2, r0\n"
        "	ldr r1, [r1]\n"
        "	and r1, r2\n"
        "	neg r0, r1\n"
        "	orr r0, r1\n"
        "	lsr r0, r0, #0x1f\n"
        "_L_08007D0A:\n"
        "	cmp r0, #0\n"
        "	beq _L_08007D42\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x20\n"
        "	lsl r1, r3, #3\n"
        "	add r1, #4\n"
        "	add r1, r0, r1\n"
        "	mov r2, #0\n"
        "	lsl r0, r4, #8\n"
        "	lsr r0, r0, #0x10\n"
        "	ldrh r3, [r1, #4]\n"
        "	cmp r0, r3\n"
        "	bne _L_08007D26\n"
        "	mov r2, #1\n"
        "_L_08007D26:\n"
        "	cmp r2, #0\n"
        "	beq _L_08007D42\n"
        "	ldrh r2, [r1, #2]\n"
        "	add r0, r2, #1\n"
        "	strh r0, [r1, #2]\n"
        "	lsl r0, r0, #0x10\n"
        "	cmp r0, #0\n"
        "	beq _L_08007D40\n"
        "	add r0, r4, #0\n"
        "	b _L_08007D44\n"
        "	.align 2, 0\n"
        ".Lpool_08007D3C:\n"
        "	.word 0x03000408\n"
        "_L_08007D40:\n"
        "	strh r2, [r1, #2]\n"
        "_L_08007D42:\n"
        "	mov r0, #0\n"
        "_L_08007D44:\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
    return __ret;
}

/* --- func_08007D4C @ 0x08007D4C (108B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08007D4C @ 0x08007D4C (108 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(R), +0x00:u32(R), +0x00:u8(R), +0x04:u16(R)
 * CFG Structure:
 *   L_08007D4C: if (==) goto L_08007DAC
 *   L_08007D7E: if (==) goto L_08007DAC
 *   L_08007D9A: if (==) goto L_08007DAC
 *   L_08007DB0: return
 * ========================================================================== */
int func_08007D4C(void) {
    u32 sp0;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0));
    __asm__ volatile(
        "	add r4, r1, #0\n"
        "	ldr r0, .Lpool_08007DA8\n"
        "	ldr r5, [r0]\n"
        "	cmp r4, #0\n"
        "	beq _L_08007DAC\n"
        "	str r4, [sp]\n"
        "	mov r0, sp\n"
        "	ldrb r3, [r0]\n"
        "	mov r0, #0\n"
        "	cmp r3, #0xff\n"
        "	bhi _L_08007D7E\n"
        "	lsr r1, r3, #5\n"
        "	lsl r1, r1, #2\n"
        "	add r1, r5, r1\n"
        "	mov r0, #0x1f\n"
        "	and r0, r3\n"
        "	mov r2, #1\n"
        "	lsl r2, r0\n"
        "	ldr r1, [r1]\n"
        "	and r1, r2\n"
        "	neg r0, r1\n"
        "	orr r0, r1\n"
        "	lsr r0, r0, #0x1f\n"
        "_L_08007D7E:\n"
        "	cmp r0, #0\n"
        "	beq _L_08007DAC\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x20\n"
        "	lsl r1, r3, #3\n"
        "	add r1, #4\n"
        "	add r1, r0, r1\n"
        "	mov r2, #0\n"
        "	lsl r0, r4, #8\n"
        "	lsr r0, r0, #0x10\n"
        "	ldrh r3, [r1, #4]\n"
        "	cmp r0, r3\n"
        "	bne _L_08007D9A\n"
        "	mov r2, #1\n"
        "_L_08007D9A:\n"
        "	cmp r2, #0\n"
        "	beq _L_08007DAC\n"
        "	ldrh r0, [r1]\n"
        "	lsl r0, r0, #0x16\n"
        "	lsr r0, r0, #0x16\n"
        "	b _L_08007DB0\n"
        "	.align 2, 0\n"
        ".Lpool_08007DA8:\n"
        "	.word 0x03000408\n"
        "_L_08007DAC:\n"
        "	mov r0, #1\n"
        "	neg r0, r0\n"
        "_L_08007DB0:\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
    return __ret;
}

/* --- func_08007DB8 @ 0x08007DB8 (108B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08007DB8 @ 0x08007DB8 (108 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x00:u8(R), +0x01:u8(R), +0x04:u16(R)
 * CFG Structure:
 *   L_08007DB8: if (==) goto L_08007E18
 *   L_08007DEA: if (==) goto L_08007E18
 *   L_08007E06: if (==) goto L_08007E18
 *   L_08007E1A: return
 * ========================================================================== */
int func_08007DB8(void) {
    u32 sp0;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0));
    __asm__ volatile(
        "	add r4, r1, #0\n"
        "	ldr r0, .Lpool_08007E14\n"
        "	ldr r5, [r0]\n"
        "	cmp r4, #0\n"
        "	beq _L_08007E18\n"
        "	str r4, [sp]\n"
        "	mov r0, sp\n"
        "	ldrb r3, [r0]\n"
        "	mov r0, #0\n"
        "	cmp r3, #0xff\n"
        "	bhi _L_08007DEA\n"
        "	lsr r1, r3, #5\n"
        "	lsl r1, r1, #2\n"
        "	add r1, r5, r1\n"
        "	mov r0, #0x1f\n"
        "	and r0, r3\n"
        "	mov r2, #1\n"
        "	lsl r2, r0\n"
        "	ldr r1, [r1]\n"
        "	and r1, r2\n"
        "	neg r0, r1\n"
        "	orr r0, r1\n"
        "	lsr r0, r0, #0x1f\n"
        "_L_08007DEA:\n"
        "	cmp r0, #0\n"
        "	beq _L_08007E18\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x20\n"
        "	lsl r1, r3, #3\n"
        "	add r1, #4\n"
        "	add r1, r0, r1\n"
        "	mov r2, #0\n"
        "	lsl r0, r4, #8\n"
        "	lsr r0, r0, #0x10\n"
        "	ldrh r3, [r1, #4]\n"
        "	cmp r0, r3\n"
        "	bne _L_08007E06\n"
        "	mov r2, #1\n"
        "_L_08007E06:\n"
        "	cmp r2, #0\n"
        "	beq _L_08007E18\n"
        "	ldrb r0, [r1, #1]\n"
        "	lsl r0, r0, #0x1a\n"
        "	lsr r0, r0, #0x1c\n"
        "	b _L_08007E1A\n"
        "	.align 2, 0\n"
        ".Lpool_08007E14:\n"
        "	.word 0x03000408\n"
        "_L_08007E18:\n"
        "	mov r0, #0xb\n"
        "_L_08007E1A:\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
    return __ret;
}

/* --- func_08007E24 @ 0x08007E24 (104B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08007E24 @ 0x08007E24 (104 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x00:u8(R), +0x02:u16(R), +0x04:u16(R)
 * CFG Structure:
 *   L_08007E24: if (==) goto L_08007E80
 *   L_08007E56: if (==) goto L_08007E80
 *   L_08007E72: if (==) goto L_08007E80
 *   L_08007E82: return
 * ========================================================================== */
int func_08007E24(void) {
    u32 sp0;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0));
    __asm__ volatile(
        "	add r4, r1, #0\n"
        "	ldr r0, .Lpool_08007E7C\n"
        "	ldr r5, [r0]\n"
        "	cmp r4, #0\n"
        "	beq _L_08007E80\n"
        "	str r4, [sp]\n"
        "	mov r0, sp\n"
        "	ldrb r3, [r0]\n"
        "	mov r0, #0\n"
        "	cmp r3, #0xff\n"
        "	bhi _L_08007E56\n"
        "	lsr r1, r3, #5\n"
        "	lsl r1, r1, #2\n"
        "	add r1, r5, r1\n"
        "	mov r0, #0x1f\n"
        "	and r0, r3\n"
        "	mov r2, #1\n"
        "	lsl r2, r0\n"
        "	ldr r1, [r1]\n"
        "	and r1, r2\n"
        "	neg r0, r1\n"
        "	orr r0, r1\n"
        "	lsr r0, r0, #0x1f\n"
        "_L_08007E56:\n"
        "	cmp r0, #0\n"
        "	beq _L_08007E80\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x20\n"
        "	lsl r1, r3, #3\n"
        "	add r1, #4\n"
        "	add r1, r0, r1\n"
        "	mov r2, #0\n"
        "	lsl r0, r4, #8\n"
        "	lsr r0, r0, #0x10\n"
        "	ldrh r3, [r1, #4]\n"
        "	cmp r0, r3\n"
        "	bne _L_08007E72\n"
        "	mov r2, #1\n"
        "_L_08007E72:\n"
        "	cmp r2, #0\n"
        "	beq _L_08007E80\n"
        "	ldrh r0, [r1, #2]\n"
        "	b _L_08007E82\n"
        "	.align 2, 0\n"
        ".Lpool_08007E7C:\n"
        "	.word 0x03000408\n"
        "_L_08007E80:\n"
        "	mov r0, #0\n"
        "_L_08007E82:\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
    return __ret;
}

/* --- func_08007EA8 @ 0x08007EA8 (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 func_080D6EEC();
void func_08007EA8(u8 *arg0) {
  u8 zero;
  func_080D6EEC(arg0 + 4);
  func_080D6EEC(arg0 + 0x80);
  zero = 0;
  *arg0 = 1;
  arg0[1] = zero;
}

/* --- func_08007EC8 @ 0x08007EC8 (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D6F5C();
void func_08007EC8(u8 *arg0) {
  func_080D6F5C(arg0 + 0x80);
  func_080D6F5C(arg0 + 4);
  *arg0 = 0;
  arg0[1] = 1;
}

/* --- func_08007EE8 @ 0x08007EE8 (156B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_08007EA8();
extern void func_080D7118();
void func_08007EE8(int param_1, u32 param_2, u32 param_3) {
    u32 sp0, sp1;
    register int p1 asm("r5");
    register u32 p2 asm("r4");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1));
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %1, r1, #0\n\t"
        "str r2, [sp]\n\t"
        "ldr r1, =0x000003FF\n\t"
        "cmp %1, r1\n\t"
        "bhi _end_07EE8\n\t"
        "add r0, r2, #0\n\t"
        "cmp r0, #0\n\t"
        "beq _end_07EE8\n\t"
        "cmp %1, #0\n\t"
        "bne _chk1ff_07EE8\n\t"
        "cmp r0, r1\n\t"
        "bls _chk1ff_07EE8\n\t"
        "add r0, %0, #0\n\t"
        "bl func_08007EA8\n\t"
        "b _end_07EE8\n\t"
        ".align 2, 0\n\t"
        ".ltorg\n"
        "_chk1ff_07EE8:\n\t"
        "ldr r0, =0x000001FF\n\t"
        "cmp %1, r0\n\t"
        "bhi _chk200_07EE8\n\t"
        "add r0, #1\n\t"
        "sub r0, r0, %1\n\t"
        "str r0, [sp, #4]\n\t"
        "add r3, sp, #4\n\t"
        "ldr r1, [sp]\n\t"
        "mov r2, sp\n\t"
        "cmp r1, r0\n\t"
        "bls _load_r2_07EE8\n\t"
        "add r2, r3, #0\n"
        "_load_r2_07EE8:\n\t"
        "ldr r2, [r2]\n\t"
        "add r0, %0, #4\n\t"
        "add r1, %1, #0\n\t"
        "bl func_080D7118\n"
        "_chk200_07EE8:\n\t"
        "ldr r0, [sp]\n\t"
        "add r2, %1, r0\n\t"
        "mov r3, #0x80\n\t"
        "lsl r3, r3, #2\n\t"
        "cmp r2, r3\n\t"
        "bls _update_flags_07EE8\n\t"
        "ldr r0, =0x000001FF\n\t"
        "mov r1, #0\n\t"
        "cmp %1, r0\n\t"
        "bls _sub_07EE8\n\t"
        "ldr r0, =0xFFFFFE00\n\t"
        "add r1, %1, r0\n"
        "_sub_07EE8:\n\t"
        "sub r2, r2, r3\n\t"
        "sub r2, r2, r1\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x80\n\t"
        "bl func_080D7118\n"
        "_update_flags_07EE8:\n\t"
        "mov r1, #0\n\t"
        "ldrb r0, [%0, #4]\n\t"
        "cmp r0, #0\n\t"
        "beq _store_flags_07EE8\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x80\n\t"
        "ldrb r0, [r0]\n\t"
        "neg r0, r0\n\t"
        "lsr r1, r0, #0x1f\n"
        "_store_flags_07EE8:\n\t"
        "mov r0, #0\n\t"
        "strb r1, [%0]\n\t"
        "strb r0, [%0, #1]\n"
        "_end_07EE8:"
        : "=r"(p1), "=r"(p2) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_08007F84 @ 0x08007F84 (156B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_08007EC8();
extern void func_080D734C();
void func_08007F84(int param_1, u32 param_2, u32 param_3) {
    u32 sp0, sp1;
    register int p1 asm("r5");
    register u32 p2 asm("r4");
    register int r6 asm("r6");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1));
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %1, r1, #0\n\t"
        "str r2, [sp]\n\t"
        "ldr r1, =0x000003FF\n\t"
        "cmp %1, r1\n\t"
        "bhi _end_07F84\n\t"
        "add r0, r2, #0\n\t"
        "cmp r0, #0\n\t"
        "beq _end_07F84\n\t"
        "cmp %1, #0\n\t"
        "bne _chk1ff_07F84\n\t"
        "cmp r0, r1\n\t"
        "bls _chk1ff_07F84\n\t"
        "add r0, %0, #0\n\t"
        "bl func_08007EC8\n\t"
        "b _end_07F84\n\t"
        ".align 2, 0\n\t"
        ".ltorg\n"
        "_chk1ff_07F84:\n\t"
        "ldr r0, =0x000001FF\n\t"
        "add %2, %0, #4\n\t"
        "cmp %1, r0\n\t"
        "bhi _chk200_07F84\n\t"
        "add r0, #1\n\t"
        "sub r0, r0, %1\n\t"
        "str r0, [sp, #4]\n\t"
        "add r3, sp, #4\n\t"
        "ldr r1, [sp]\n\t"
        "mov r2, sp\n\t"
        "cmp r1, r0\n\t"
        "bls _load_r2_07F84\n\t"
        "add r2, r3, #0\n"
        "_load_r2_07F84:\n\t"
        "ldr r2, [r2]\n\t"
        "add r0, %2, #0\n\t"
        "add r1, %1, #0\n\t"
        "bl func_080D734C\n"
        "_chk200_07F84:\n\t"
        "ldr r0, [sp]\n\t"
        "add r2, %1, r0\n\t"
        "mov r3, #0x80\n\t"
        "lsl r3, r3, #2\n\t"
        "cmp r2, r3\n\t"
        "bls _update_flags_07F84\n\t"
        "ldr r0, =0x000001FF\n\t"
        "mov r1, #0\n\t"
        "cmp %1, r0\n\t"
        "bls _sub_07F84\n\t"
        "ldr r0, =0xFFFFFE00\n\t"
        "add r1, %1, r0\n"
        "_sub_07F84:\n\t"
        "sub r2, r2, r3\n\t"
        "sub r2, r2, r1\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x80\n\t"
        "bl func_080D734C\n"
        "_update_flags_07F84:\n\t"
        "mov r0, #0\n\t"
        "strb r0, [%0]\n\t"
        "mov r1, #0\n\t"
        "ldrb r0, [%2, #1]\n\t"
        "cmp r0, #0\n\t"
        "beq _store_flags_07F84\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x80\n\t"
        "ldrb r0, [r0, #1]\n\t"
        "neg r0, r0\n\t"
        "lsr r1, r0, #0x1f\n"
        "_store_flags_07F84:\n\t"
        "strb r1, [%0, #1]\n"
        "_end_07F84:"
        : "=r"(p1), "=r"(p2), "=r"(r6) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_08008020 @ 0x08008020 (128B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern u32 func_080D7568();
extern void func_08007EA8();
u32 func_08008020(int param_1, u32 param_2) {
    u32 sp0;
    register int p1 asm("r6");
    int r7_var;
    register int r4 asm("r4");
    register int r5 asm("r5");
    register u32 ret asm("r0");
    __asm__ volatile("" : : "m"(sp0));
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %1, r1, #0\n\t"
        "cmp %1, #9\n\t"
        "bhi _chk10_08020\n\t"
        "mov r3, #0\n\t"
        "add %2, %0, #4\n"
        "_loop_08020:\n\t"
        "ldrb %3, [%2]\n\t"
        "cmp %3, #0\n\t"
        "bne _next_08020\n\t"
        "add r0, %2, #0\n\t"
        "add r1, %1, #0\n\t"
        "str r3, [sp]\n\t"
        "bl func_080D7568\n\t"
        "add r2, r0, #0\n\t"
        "mov r1, #0\n\t"
        "ldr r0, =0x000001FF\n\t"
        "ldr r3, [sp]\n\t"
        "cmp r2, r0\n\t"
        "bhi _chk_ok_08020\n\t"
        "mov r1, #1\n"
        "_chk_ok_08020:\n\t"
        "cmp r1, #0\n\t"
        "beq _next_08020\n\t"
        "strb %3, [%0, #1]\n\t"
        "mov r1, #0\n\t"
        "ldrb r0, [%0, #4]\n\t"
        "cmp r0, #0\n\t"
        "beq _set_b0_08020\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x80\n\t"
        "ldrb r0, [r0]\n\t"
        "neg r0, r0\n\t"
        "lsr r1, r0, #0x1f\n"
        "_set_b0_08020:\n\t"
        "strb r1, [%0]\n\t"
        "lsl r0, r3, #9\n\t"
        "orr r0, r2\n\t"
        "b _end_08020\n\t"
        ".align 2, 0\n\t"
        ".ltorg\n"
        "_next_08020:\n\t"
        "add %2, #0x7c\n\t"
        "add r3, #1\n\t"
        "cmp r3, #1\n\t"
        "ble _loop_08020\n\t"
        "b _ret400_08020\n"
        "_chk10_08020:\n\t"
        "cmp %1, #0xa\n\t"
        "bne _ret400_08020\n\t"
        "ldrb r0, [%0, #1]\n\t"
        "cmp r0, #0\n\t"
        "beq _ret400_08020\n\t"
        "add r0, %0, #0\n\t"
        "bl func_08007EA8\n\t"
        "mov r0, #0\n\t"
        "b _end_08020\n"
        "_ret400_08020:\n\t"
        "mov r0, #0x80\n\t"
        "lsl r0, r0, #3\n"
        "_end_08020:"
        : "=l"(p1), "=l"(r7_var), "=l"(r4), "=l"(r5) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    __asm__("" : "=r"(ret));
    return ret;
}

/* --- func_080080A0 @ 0x080080A0 (76B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080D76C0();
extern void func_08007EC8();
void func_080080A0(int param_1, int param_2, u32 param_3) {
    register int p1 asm("r4");
    register int r5 asm("r5");
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "cmp r2, #9\n\t"
        "bhi _chk10_080A0\n\t"
        "mov r0, #0x80\n\t"
        "lsl r0, r0, #2\n\t"
        "and r0, r1\n\t"
        "add %1, %0, #4\n\t"
        "add r3, %1, #0\n\t"
        "cmp r0, #0\n\t"
        "beq _call_080A0\n\t"
        "add r3, %0, #0\n\t"
        "add r3, #0x80\n"
        "_call_080A0:\n\t"
        "add r0, r3, #0\n\t"
        "bl func_080D76C0\n\t"
        "mov r0, #0\n\t"
        "strb r0, [%0]\n\t"
        "mov r1, #0\n\t"
        "ldrb r0, [%1, #1]\n\t"
        "cmp r0, #0\n\t"
        "beq _store_080A0\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x80\n\t"
        "ldrb r0, [r0, #1]\n\t"
        "neg r0, r0\n\t"
        "lsr r1, r0, #0x1f\n"
        "_store_080A0:\n\t"
        "strb r1, [%0, #1]\n\t"
        "b _end_080A0\n"
        "_chk10_080A0:\n\t"
        "cmp r2, #0xa\n\t"
        "bne _end_080A0\n\t"
        "add r0, %0, #0\n\t"
        "bl func_08007EC8\n"
        "_end_080A0:"
        : "=r"(p1), "=r"(r5) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_080080F4 @ 0x080080F4 (156B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080080F4 @ 0x080080F4 (156 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u8(W), +0x01:u8(W)
 * CFG Structure:
 *   L_0800815A: if (!=) goto L_0800815A
 * ========================================================================== */
int func_080080F4(void) {
    u32 sp0, sp1;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1));
    __asm__ volatile(
        "	str r0, [sp]\n"
        "	mov r0, #0\n"
        "	ldr r1, [sp]\n"
        "	strb r0, [r1]\n"
        "	mov r0, #1\n"
        "	strb r0, [r1, #1]\n"
        "	add r1, #4\n"
        "	mov r3, #1\n"
        "	mov r7, #0\n"
        "	mov ip, r3\n"
        "	mov r6, #1\n"
        "	neg r6, r6\n"
        "_L_08008118:\n"
        "	strb r7, [r1]\n"
        "	mov r0, ip\n"
        "	strb r0, [r1, #1]\n"
        "	add r0, r1, #4\n"
        "	mov r2, #1\n"
        "	add r1, #0x7c\n"
        "	mov sl, r1\n"
        "	sub r3, #1\n"
        "	str r3, [sp, #4]\n"
        "_L_0800812A:\n"
        "	strb r7, [r0]\n"
        "	mov r1, ip\n"
        "	strb r1, [r0, #1]\n"
        "	add r1, r0, #4\n"
        "	mov r3, #1\n"
        "	add r0, #0x3c\n"
        "	mov r8, r0\n"
        "	sub r2, #1\n"
        "	mov sb, r2\n"
        "_L_0800813C:\n"
        "	strb r7, [r1]\n"
        "	mov r0, ip\n"
        "	strb r0, [r1, #1]\n"
        "	add r0, r1, #4\n"
        "	mov r2, #1\n"
        "	add r4, r1, #0\n"
        "	add r4, #0x1c\n"
        "	sub r5, r3, #1\n"
        "_L_0800814C:\n"
        "	strb r7, [r0]\n"
        "	mov r1, ip\n"
        "	strb r1, [r0, #1]\n"
        "	add r3, r0, #4\n"
        "	mov r1, #1\n"
        "	add r0, #0xc\n"
        "	sub r2, #1\n"
        "_L_0800815A:\n"
        "	stm r3!, {r7}\n"
        "	sub r1, #1\n"
        "	cmp r1, r6\n"
        "	bne _L_0800815A\n"
        "	cmp r2, r6\n"
        "	bne _L_0800814C\n"
        "	add r1, r4, #0\n"
        "	add r3, r5, #0\n"
        "	cmp r3, r6\n"
        "	bne _L_0800813C\n"
        "	mov r0, r8\n"
        "	mov r2, sb\n"
        "	cmp r2, r6\n"
        "	bne _L_0800812A\n"
        "	mov r1, sl\n"
        "	ldr r3, [sp, #4]\n"
        "	cmp r3, r6\n"
        "	bne _L_08008118\n"
        "	ldr r0, [sp]\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r10", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_08008190 @ 0x08008190 (460B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08008190 @ 0x08008190 (460 bytes)
 * Role   : C++ SGI STL Node Allocator / _Rb_tree / Container Template Method
 * Fields : +0x00:u32(RW), +0x00:u8(R), +0x04:u32(RW), +0x0C:u32(RW), +0x10:u32(W)
 * Callees: func_080005D4, func_08007874, func_080079E8, func_08007B54, func_08007C28, func_08007CD8, func_080D01F8, func_080D0260, func_080D3BC0, func_080D772C
 * CFG Structure:
 *   L_08008190: call func_080005D4()
 *   L_080081B2: if (!=) goto L_080081B2
 *   L_080081C8: call func_080D772C(); if (!=) goto L_080081F4
 *   L_080081F8: call func_08007874(); call func_08007B54(); if (==) goto L_08008232
 *   L_08008226: goto L_0800831A
 *   L_08008232: if (>= (u)) goto L_0800824A
 *   L_0800824A: if (==) goto L_0800826A
 *   L_08008266: goto L_08008270
 *   L_08008270: if (==) goto L_0800829C
 *   L_08008280: if (==) goto L_08008294
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08007874(void);
extern void func_080079E8(void);
extern void func_08007B54(void);
extern void func_08007C28(void);
extern void func_08007CD8(void);
extern void func_080D01F8(void);
extern void func_080D0260(void);
extern void func_080D3BC0(void);
extern void func_080D772C(void);
void func_08008190(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, r7, lr}\n"
        "	mov r7, sl\n"
        "	mov r6, sb\n"
        "	mov r5, r8\n"
        "	push {r5, r6, r7}\n"
        "	sub sp, #0x30\n"
        "	str r0, [sp, #0x14]\n"
        "	str r1, [sp, #0x18]\n"
        "	mov r0, #0xa0\n"
        "	bl func_080005D4\n"
        "	str r0, [sp, #0x1c]\n"
        "	add r1, r0, #0\n"
        "	mov r3, #7\n"
        "	mov r2, #0\n"
        "	mov r4, #1\n"
        "	neg r4, r4\n"
        "_L_080081B2:\n"
        "	str r2, [r1]\n"
        "	str r2, [r1, #4]\n"
        "	add r0, r1, #0\n"
        "	add r0, #8\n"
        "	str r2, [r0, #4]\n"
        "	add r1, #0x14\n"
        "	sub r3, #1\n"
        "	cmp r3, r4\n"
        "	bne _L_080081B2\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #0x20]\n"
        "_L_080081C8:\n"
        "	ldr r1, [sp, #0x18]\n"
        "	ldr r2, [sp, #0x20]\n"
        "	add r0, r1, r2\n"
        "	lsl r1, r2, #2\n"
        "	add r1, r1, r2\n"
        "	lsl r1, r1, #2\n"
        "	ldr r2, [sp, #0x1c]\n"
        "	add r7, r1, r2\n"
        "	ldrb r6, [r0]\n"
        "	add r0, r7, #0\n"
        "	add r1, r6, #0\n"
        "	bl func_080D772C\n"
        "	sub r0, r6, #1\n"
        "	lsl r0, r0, #0x18\n"
        "	lsr r6, r0, #0x18\n"
        "	ldr r0, [sp, #0x20]\n"
        "	add r0, #1\n"
        "	str r0, [sp, #0x24]\n"
        "	cmp r6, #0xff\n"
        "	bne _L_080081F4\n"
        "	b _L_08008336\n"
        "_L_080081F4:\n"
        "	add r1, sp, #4\n"
        "	mov sb, r1\n"
        "_L_080081F8:\n"
        "	mov r0, sb\n"
        "	bl func_08007874\n"
        "	mov r0, sb\n"
        "	ldr r1, [sp, #0x20]\n"
        "	bl func_08007B54\n"
        "	str r0, [sp, #8]\n"
        "	ldr r4, [r7, #4]\n"
        "	ldr r0, [r7, #0xc]\n"
        "	cmp r4, r0\n"
        "	beq _L_08008232\n"
        "	cmp r4, #0\n"
        "	beq _L_08008226\n"
        "	add r0, r4, #0\n"
        "	bl func_08007874\n"
        "	mov r2, sb\n"
        "	ldr r1, [r2, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007CD8\n"
        "	str r0, [r4, #4]\n"
        "_L_08008226:\n"
        "	ldr r0, [r7, #4]\n"
        "	add r0, #8\n"
        "	str r0, [r7, #4]\n"
        "	sub r6, #1\n"
        "	str r6, [sp, #0x28]\n"
        "	b _L_0800831A\n"
        "_L_08008232:\n"
        "	mov r8, r4\n"
        "	mov r0, #1\n"
        "	str r0, [sp, #0x10]\n"
        "	ldr r1, [r7]\n"
        "	sub r0, r4, r1\n"
        "	asr r4, r0, #3\n"
        "	str r4, [sp, #0xc]\n"
        "	add r2, sp, #0x10\n"
        "	add r0, sp, #0xc\n"
        "	cmp r4, #1\n"
        "	bhs _L_0800824A\n"
        "	add r0, r2, #0\n"
        "_L_0800824A:\n"
        "	ldr r0, [r0]\n"
        "	add r0, r4, r0\n"
        "	cmp r0, #0\n"
        "	beq _L_0800826A\n"
        "	lsl r4, r0, #3\n"
        "	add r0, r4, #0\n"
        "	bl func_080D01F8\n"
        "	str r4, [sp, #0x2c]\n"
        "	cmp r0, #0\n"
        "	bne _L_08008266\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3BC0\n"
        "_L_08008266:\n"
        "	ldr r1, [r7]\n"
        "	b _L_08008270\n"
        "_L_0800826A:\n"
        "	mov r0, #0\n"
        "	mov r2, #0\n"
        "	str r2, [sp, #0x2c]\n"
        "_L_08008270:\n"
        "	add r5, r0, #0\n"
        "	mov sl, r5\n"
        "	add r5, r1, #0\n"
        "	mov r4, sl\n"
        "	sub r6, #1\n"
        "	str r6, [sp, #0x28]\n"
        "	cmp r5, r8\n"
        "	beq _L_0800829C\n"
        "_L_08008280:\n"
        "	cmp r4, #0\n"
        "	beq _L_08008294\n"
        "	add r0, r4, #0\n"
        "	bl func_08007874\n"
        "	ldr r1, [r5, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007CD8\n"
        "	str r0, [r4, #4]\n"
        "_L_08008294:\n"
        "	add r5, #8\n"
        "	add r4, #8\n"
        "	cmp r5, r8\n"
        "	bne _L_08008280\n"
        "_L_0800829C:\n"
        "	add r5, r4, #0\n"
        "	ldr r0, [sp, #0x10]\n"
        "	cmp r0, #1\n"
        "	bne _L_080082BE\n"
        "	cmp r5, #0\n"
        "	beq _L_080082BA\n"
        "	add r0, r5, #0\n"
        "	bl func_08007874\n"
        "	mov r0, sb\n"
        "	ldr r1, [r0, #4]\n"
        "	add r0, r5, #0\n"
        "	bl func_08007CD8\n"
        "	str r0, [r5, #4]\n"
        "_L_080082BA:\n"
        "	add r5, #8\n"
        "	b _L_080082E6\n"
        "_L_080082BE:\n"
        "	add r6, r0, #0\n"
        "	add r4, r5, #0\n"
        "	cmp r6, #0\n"
        "	beq _L_080082E4\n"
        "_L_080082C6:\n"
        "	cmp r4, #0\n"
        "	beq _L_080082DC\n"
        "	add r0, r4, #0\n"
        "	bl func_08007874\n"
        "	mov r2, sb\n"
        "	ldr r1, [r2, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007CD8\n"
        "	str r0, [r4, #4]\n"
        "_L_080082DC:\n"
        "	sub r6, #1\n"
        "	add r4, #8\n"
        "	cmp r6, #0\n"
        "	bne _L_080082C6\n"
        "_L_080082E4:\n"
        "	add r5, r4, #0\n"
        "_L_080082E6:\n"
        "	ldr r6, [r7, #4]\n"
        "	ldr r4, [r7]\n"
        "	cmp r4, r6\n"
        "	beq _L_08008304\n"
        "_L_080082EE:\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	add r4, #8\n"
        "	cmp r4, r6\n"
        "	bne _L_080082EE\n"
        "_L_08008304:\n"
        "	ldr r0, [r7]\n"
        "	cmp r0, #0\n"
        "	beq _L_0800830E\n"
        "	bl func_080D0260\n"
        "_L_0800830E:\n"
        "	ldr r0, [sp, #0x2c]\n"
        "	add r0, sl\n"
        "	mov r1, sl\n"
        "	str r1, [r7]\n"
        "	str r5, [r7, #4]\n"
        "	str r0, [r7, #0xc]\n"
        "_L_0800831A:\n"
        "	ldr r1, [sp, #8]\n"
        "	mov r0, sb\n"
        "	bl func_08007C28\n"
        "	mov r0, sb\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	ldr r2, [sp, #0x28]\n"
        "	lsl r0, r2, #0x18\n"
        "	lsr r6, r0, #0x18\n"
        "	cmp r6, #0xff\n"
        "	beq _L_08008336\n"
        "	b _L_080081F8\n"
        "_L_08008336:\n"
        "	ldr r0, [r7]\n"
        "	str r0, [r7, #0x10]\n"
        "	ldr r0, [sp, #0x24]\n"
        "	str r0, [sp, #0x20]\n"
        "	cmp r0, #7\n"
        "	bhi _L_08008344\n"
        "	b _L_080081C8\n"
        "_L_08008344:\n"
        "	ldr r1, [sp, #0x1c]\n"
        "	ldr r2, [sp, #0x14]\n"
        "	str r1, [r2]\n"
        "	add r0, r2, #0\n"
        "	add sp, #0x30\n"
        "	pop {r3, r4, r5}\n"
        "	mov r8, r3\n"
        "	mov sb, r4\n"
        "	mov sl, r5\n"
        "	pop {r4, r5, r6, r7}\n"
        "	pop {r1}\n"
        "	bx r1\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_0800835C @ 0x0800835C (8B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_0800835C(u32 *arg0) {
    *arg0 = 0;
}

/* --- func_08008364 @ 0x08008364 (108B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_08007C28();
extern void func_080079E8();
extern void func_080D0260();
extern void func_08000608();
void func_08008364(int param_1, int param_2) {
    int r7_var;
    register int r6 asm("r6");
    register int r5 asm("r5");
    register int r4 asm("r4");
    __asm__ volatile(
        "mov r8, r0\n\t"
        "mov sb, r1\n\t"
        "ldr r0, [r0]\n\t"
        "cmp r0, #0\n\t"
        "beq _chk_sb_08364\n\t"
        "add %0, r0, #0\n\t"
        "add %2, %0, #0\n\t"
        "add %2, #0xa0\n"
        "_outer_loop_08364:\n\t"
        "cmp %0, %2\n\t"
        "beq _free_r7_08364\n\t"
        "sub %2, #0x14\n\t"
        "ldr %1, [%2, #4]\n\t"
        "ldr %3, [%2]\n\t"
        "cmp %3, %1\n\t"
        "beq _chk_free_08364\n"
        "_inner_loop_08364:\n\t"
        "ldr r1, [%3, #4]\n\t"
        "add r0, %3, #0\n\t"
        "bl func_08007C28\n\t"
        "add r0, %3, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_080079E8\n\t"
        "add %3, #8\n\t"
        "cmp %3, %1\n\t"
        "bne _inner_loop_08364\n"
        "_chk_free_08364:\n\t"
        "ldr r0, [%2]\n\t"
        "cmp r0, #0\n\t"
        "beq _outer_loop_08364\n\t"
        "bl func_080D0260\n\t"
        "b _outer_loop_08364\n"
        "_free_r7_08364:\n\t"
        "add r0, %0, #0\n\t"
        "bl func_08000608\n"
        "_chk_sb_08364:\n\t"
        "mov r0, #1\n\t"
        "mov r1, sb\n\t"
        "and r0, r1\n\t"
        "cmp r0, #0\n\t"
        "beq _end_08364\n\t"
        "mov r0, r8\n\t"
        "bl func_08000608\n"
        "_end_08364:"
        : "=l"(r7_var), "=l"(r6), "=l"(r5), "=l"(r4) : : "r0", "r1", "r2", "r3", "r8", "r9", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_080083D0 @ 0x080083D0 (116B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern int func_08007E24();
extern void func_08007874();
extern int func_08007CD8();
extern int func_08007B54();
int func_080083D0(int param_1, int *param_2, int param_3) {
    int r7_var;
    register int r6 asm("r6");
    register int r5 asm("r5");
    register int r4 asm("r4");
    register int ret asm("r0");
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %3, r2, #0\n\t"
        "ldr r1, [r1]\n\t"
        "cmp r1, #0\n\t"
        "beq _null_083D0\n\t"
        "lsl r0, %3, #2\n\t"
        "add r0, r0, %3\n\t"
        "lsl r0, r0, #2\n\t"
        "add %1, r0, r1\n\t"
        "ldr r0, [%1, #4]\n\t"
        "mov r8, r0\n\t"
        "ldr %3, [%1, #0x10]\n\t"
        "cmp %3, r8\n\t"
        "beq _fallback_083D0\n\t"
        "mov sb, %3\n"
        "_loop_083D0:\n\t"
        "add %2, %3, #0\n\t"
        "add %3, #8\n\t"
        "cmp %3, r8\n\t"
        "bne _test_083D0\n\t"
        "ldr %3, [%1]\n"
        "_test_083D0:\n\t"
        "ldr r1, [%2, #4]\n\t"
        "add r0, %2, #0\n\t"
        "bl func_08007E24\n\t"
        "cmp r0, #1\n\t"
        "beq _found_083D0\n\t"
        "cmp %3, sb\n\t"
        "bne _loop_083D0\n"
        "_fallback_083D0:\n\t"
        "add r0, %0, #0\n\t"
        "bl func_08007874\n\t"
        "ldr r1, [%3, #4]\n\t"
        "add r0, %0, #0\n\t"
        "bl func_08007CD8\n\t"
        "b _store_083D0\n"
        "_found_083D0:\n\t"
        "str %3, [%1, #0x10]\n\t"
        "add %3, %2, #0\n\t"
        "b _fallback_083D0\n"
        "_null_083D0:\n\t"
        "add r0, %0, #0\n\t"
        "bl func_08007874\n\t"
        "add r0, %0, #0\n\t"
        "add r1, %3, #0\n\t"
        "bl func_08007B54\n"
        "_store_083D0:\n\t"
        "str r0, [%0, #4]\n\t"
        "add r0, %0, #0"
        : "=l"(r7_var), "=l"(r6), "=l"(r5), "=l"(r4) : : "r0", "r1", "r2", "r3", "r8", "r9", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    __asm__ volatile("" : "=r"(ret));
    return ret;
}

/* --- func_08008444 @ 0x08008444 (152B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern int func_080005D4();
extern void func_080091A4();
extern void func_080096B0();
extern void func_08009744();
extern void func_08008980();
int func_08008444(int param_1) {
    u32 pad;
    register int p1 asm("r6") = param_1;
    register int r4 asm("r4");
    register int zero asm("r5");
    *(u32 *)(p1 + 4) = 0x080E5B00;
    r4 = func_080005D4(0x4b0);
    func_080091A4(r4, 0x1e, 4);
    zero = 0;
    __asm__("" : "+r"(zero));
    *(int *)(r4 + 0x24) = zero;
    *(int *)(r4 + 0x28) = zero;
    {
        register int p2c asm("r0") = r4 + 0x2c;
        __asm__("" : "+r"(p2c));
        *(int *)(p2c + 4) = zero;
        func_080096B0(p2c + 8);
    }
    func_08009744(r4 + 0x8c, 0, 0x20);
    func_08008980(r4 + 0x490);
    __asm__ volatile(
        "ldr r3, =0x00000494\n\t"
        "add r2, %0, r3\n\t"
        "str %1, [r2]\n\t"
        "str %1, [r2, #4]\n\t"
        "ldr r0, =0x080E5BB4\n\t"
        "str r0, [r2, #8]\n\t"
        "ldr r0, =0x000004A4\n\t"
        "add r1, %0, r0\n\t"
        "str r1, [r2, #0xc]\n\t"
        "str %1, [r1]\n\t"
        "str %1, [r1, #4]\n\t"
        "ldr r0, =0x080E5BD8\n\t"
        "str r0, [r1, #8]\n\t"
        "add r3, #0xc\n\t"
        "add r0, %0, r3\n\t"
        "str r0, [r2, #0x10]\n\t"
        "str r1, [r2, #0x14]\n\t"
        "ldrh r0, [%0, #0x38]\n\t"
        "mov r1, #8\n\t"
        "orr r0, r1\n\t"
        "strh r0, [%0, #0x38]\n\t"
        "ldr r1, =0x04000004\n\t"
        "strh r0, [r1]"
        : : "r"(r4), "r"(zero), "m"(pad) : "r0", "r1", "r2", "r3", "memory"
    );
    *(int *)p1 = r4;
    return p1;
}

/* --- func_080084DC @ 0x080084DC (152B) [PURE-C | agbcc_O1] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 func_080005D4();
extern u32 func_08008980();
extern u32 func_080091A4();
extern u32 func_080096B0();
extern u32 func_08009744();
/* paridad 93.2% preset agbcc_O1 */
u32 func_080084DC(int *arg0,u16 *arg1) {
  u8 dummy[4];
  u32 *p2c;
  int val;
  u16 val2;
  int val3;
  u32 *mem_ptr;
  u32 *mem_ptr2;
  arg0[1] = 0x080E5B00;
  val3 = func_080005D4(0x4b0);
  func_080091A4(val3,*arg1,arg1[1]);
  *(u32 *)(val3 + 0x24) = 0;
  *(u32 *)(val3 + 0x28) = 0;
  p2c = (u32 *)(val3 + 0x2c);
  p2c[1] = 0;
  func_080096B0(p2c + 2);
  func_08009744(val3 + 0x8c,0,0x20);
  func_08008980(val3 + 0x490);
  val = 0x00000494;
  mem_ptr2 = (u32 *)(val3 + 0x00000494);
  *mem_ptr2 = 0;
  mem_ptr2[1] = 0;
  mem_ptr2[2] = 0x080E5BB4;
  mem_ptr = (u32 *)(val3 + 0x000004A4);
  mem_ptr2[3] = mem_ptr;
  *mem_ptr = 0;
  mem_ptr[1] = 0;
  mem_ptr[2] = 0x080E5BD8;
  mem_ptr2[4] = val3 + val + 0xc;
  mem_ptr2[5] = mem_ptr;
  val2 = *(u16 *)(val3 + 0x38) | 8;
  *(u16 *)(val3 + 0x38) = val2;
  *(u16 *)0x04000004 = val2;
  *arg0 = val3;
  return arg0;
}

/* --- func_08008574 @ 0x08008574 (164B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern int func_080005D4();
extern void func_080091A4();
extern void func_080096B0();
extern void func_08009744();
extern void func_08008980();
int func_08008574(int param_1, u8 *param_2) {
    u32 pad;
    register int p1 asm("r6") = param_1;
    register int r4 asm("r4");
    register int zero asm("r5");
    __asm__ volatile("mov r8, %0" : : "r"(param_2) : "r8");
    *(u32 *)(p1 + 4) = 0x080E5B00;
    r4 = func_080005D4(0x4b0);
    func_080091A4(r4, 0x1e, 4);
    zero = 0;
    __asm__("" : "+r"(zero));
    *(int *)(r4 + 0x24) = zero;
    *(int *)(r4 + 0x28) = zero;
    {
        register int p2c asm("r0") = r4 + 0x2c;
        __asm__("" : "+r"(p2c));
        *(int *)(p2c + 4) = zero;
        func_080096B0(p2c + 8);
    }
    {
        register int a0 asm("r0") = r4 + 0x8c;
        register u8 *p2 asm("r2");
        register u32 a1 asm("r1");
        register u32 a2 asm("r2");
        __asm__(
            "mov %1, r8\n\t"
            "ldrb %2, [%1]\n\t"
            "ldrb %1, [%1, #1]"
            : "+r"(a0), "=&r"(p2), "=&r"(a1)
        );
        a2 = (u32)p2;
        func_08009744(a0, a1, a2);
    }
    {
        register int off asm("r3") = 0x490;
        __asm__("" : "+r"(off));
        func_08008980(r4 + off);
    }
    __asm__ volatile(
        "ldr r0, =0x00000494\n\t"
        "add r2, %0, r0\n\t"
        "str %1, [r2]\n\t"
        "str %1, [r2, #4]\n\t"
        "ldr r0, =0x080E5BB4\n\t"
        "str r0, [r2, #8]\n\t"
        "ldr r3, =0x000004A4\n\t"
        "add r1, %0, r3\n\t"
        "str r1, [r2, #0xc]\n\t"
        "str %1, [r1]\n\t"
        "str %1, [r1, #4]\n\t"
        "ldr r0, =0x080E5BD8\n\t"
        "str r0, [r1, #8]\n\t"
        "sub r3, #4\n\t"
        "add r0, %0, r3\n\t"
        "str r0, [r2, #0x10]\n\t"
        "str r1, [r2, #0x14]\n\t"
        "ldrh r0, [%0, #0x38]\n\t"
        "mov r1, #8\n\t"
        "orr r0, r1\n\t"
        "strh r0, [%0, #0x38]\n\t"
        "ldr r1, =0x04000004\n\t"
        "strh r0, [r1]"
        : : "r"(r4), "r"(zero), "m"(pad) : "r0", "r1", "r2", "r3", "memory"
    );
    *(int *)p1 = r4;
    return p1;
}

/* --- func_08008618 @ 0x08008618 (164B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern int func_080005D4();
extern void func_080091A4();
extern void func_080096B0();
extern void func_08009744();
extern void func_08008980();
int func_08008618(int param_1, u16 *param_2, u8 *param_3) {
    u32 pad;
    register int p1 asm("r6") = param_1;
    register u16 *p2 asm("r5") = param_2;
    register int r4 asm("r4");
    register int zero asm("r5");
    __asm__ volatile("mov r8, %0" : : "r"(param_3), "r"(p2) : "r8");
    *(u32 *)(p1 + 4) = 0x080E5B00;
    r4 = func_080005D4(0x4b0);
    func_080091A4(r4, p2[0], p2[1]);
    zero = 0;
    __asm__("" : "+r"(zero));
    *(int *)(r4 + 0x24) = zero;
    *(int *)(r4 + 0x28) = zero;
    {
        register int p2c asm("r0") = r4 + 0x2c;
        __asm__("" : "+r"(p2c));
        *(int *)(p2c + 4) = zero;
        func_080096B0(p2c + 8);
    }
    {
        register int a0 asm("r0") = r4 + 0x8c;
        register u8 *p3 asm("r2");
        register u32 a1 asm("r1");
        register u32 a2 asm("r2");
        __asm__(
            "mov %1, r8\n\t"
            "ldrb %2, [%1]\n\t"
            "ldrb %1, [%1, #1]"
            : "+r"(a0), "=&r"(p3), "=&r"(a1)
        );
        a2 = (u32)p3;
        func_08009744(a0, a1, a2);
    }
    {
        register int off asm("r3") = 0x490;
        __asm__("" : "+r"(off));
        func_08008980(r4 + off);
    }
    __asm__ volatile(
        "ldr r0, =0x00000494\n\t"
        "add r2, %0, r0\n\t"
        "str %1, [r2]\n\t"
        "str %1, [r2, #4]\n\t"
        "ldr r0, =0x080E5BB4\n\t"
        "str r0, [r2, #8]\n\t"
        "ldr r3, =0x000004A4\n\t"
        "add r1, %0, r3\n\t"
        "str r1, [r2, #0xc]\n\t"
        "str %1, [r1]\n\t"
        "str %1, [r1, #4]\n\t"
        "ldr r0, =0x080E5BD8\n\t"
        "str r0, [r1, #8]\n\t"
        "sub r3, #4\n\t"
        "add r0, %0, r3\n\t"
        "str r0, [r2, #0x10]\n\t"
        "str r1, [r2, #0x14]\n\t"
        "ldrh r0, [%0, #0x38]\n\t"
        "mov r1, #8\n\t"
        "orr r0, r1\n\t"
        "strh r0, [%0, #0x38]\n\t"
        "ldr r1, =0x04000004\n\t"
        "strh r0, [r1]"
        : : "r"(r4), "r"(zero), "m"(pad) : "r0", "r1", "r2", "r3", "memory"
    );
    *(int *)p1 = r4;
    return p1;
}

/* --- func_080086BC @ 0x080086BC (104B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080098DC();
extern void func_08008A68();
extern void func_080D0260();
extern void func_08000608();
void func_080086BC(int *param_1, int param_2) {
    register int *p1 asm("r5") = param_1;
    register int p2 asm("r6") = param_2;
    register int v asm("r0");
    p1[1] = 0x080E5B00;
    v = p1[0];
    __asm__("" : "+r"(v));
    if (v != 0) {
        register int r4 asm("r4") = v;
        __asm__("" : "+r"(r4));
        func_080098DC(r4 + 0x494, 2);
        func_08008A68(r4 + 0x490, 2);
        {
            register u32 *p24 asm("r0") = (u32 *)(r4 + 0x24);
            register u32 end asm("r2");
            register u32 cur asm("r1");
            register u32 v0 asm("r0");
            __asm__("" : "+r"(p24));
            end = p24[1];
            cur = *(u32 *)(r4 + 0x24);
            for (; cur != end; cur += 0x10) {
            }
            v0 = p24[0];
            __asm__("" : "+r"(v0));
            if (v0 != 0) {
                func_080D0260(v0);
            }
        }
        func_08000608(r4);
    }
    if (p2 & 1) {
        func_08000608(p1);
    }
}

/* --- func_08008724 @ 0x08008724 (80B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern int func_08008AE0();
extern void func_080D3914();
extern void func_08008AF0();
extern void func_080098AC();
void func_08008724(int param_1) {
    u32 sp0, sp1, sp2, sp3;
    register int r4 asm("r4");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "ldr %0, [r0]\n\t"
        "add r3, %0, #0\n\t"
        "add r3, #0x34\n\t"
        "mov r2, #0\n\t"
        "ldrh r0, [%0, #0x34]\n\t"
        "mov r1, #0x80\n\t"
        "orr r0, r1\n\t"
        "strh r0, [%0, #0x34]\n\t"
        "str r2, [sp]\n\t"
        "str r2, [sp, #4]\n\t"
        "ldr r0, =0x080E5AF0\n\t"
        "str r0, [sp, #8]\n\t"
        "str r3, [sp, #0xc]\n\t"
        "mov r0, #0x92\n\t"
        "lsl r0, r0, #3\n\t"
        "add %0, %0, r0\n\t"
        "add r0, %0, #0\n\t"
        "bl func_08008AE0\n\t"
        "ldr r1, [r0, #8]\n\t"
        "ldr r2, [r1, #0x10]\n\t"
        "mov r1, sp\n\t"
        "bl func_080D3914\n\t"
        "add r0, %0, #0\n\t"
        "bl func_08008AF0\n\t"
        "mov r0, sp\n\t"
        "mov r1, #2\n\t"
        "bl func_080098AC"
        : "=r"(r4) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_08008774 @ 0x08008774 (84B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern int func_08008AE0();
extern void func_080D3914();
extern void func_08008AF0();
extern void func_080098AC();
void func_08008774(int param_1) {
    u32 sp0, sp1, sp2, sp3;
    register int r4 asm("r4");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "ldr %0, [r0]\n\t"
        "add r3, %0, #0\n\t"
        "add r3, #0x34\n\t"
        "mov r2, #0\n\t"
        "ldrh r1, [%0, #0x34]\n\t"
        "ldr r0, =0x0000FF7F\n\t"
        "and r0, r1\n\t"
        "strh r0, [%0, #0x34]\n\t"
        "str r2, [sp]\n\t"
        "str r2, [sp, #4]\n\t"
        "ldr r0, =0x080E5AF0\n\t"
        "str r0, [sp, #8]\n\t"
        "str r3, [sp, #0xc]\n\t"
        "mov r0, #0x92\n\t"
        "lsl r0, r0, #3\n\t"
        "add %0, %0, r0\n\t"
        "add r0, %0, #0\n\t"
        "bl func_08008AE0\n\t"
        "ldr r1, [r0, #8]\n\t"
        "ldr r2, [r1, #0x10]\n\t"
        "mov r1, sp\n\t"
        "bl func_080D3914\n\t"
        "add r0, %0, #0\n\t"
        "bl func_08008AF0\n\t"
        "mov r0, sp\n\t"
        "mov r1, #2\n\t"
        "bl func_080098AC"
        : "=r"(r4) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_080087C8 @ 0x080087C8 (240B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080087C8 @ 0x080087C8 (240 bytes)
 * Role   : C++ Class Constructor / Polymorphic Method [vtable: 0x080E5AD0, 0x080E5AE0, 0x080E5AF0, 0x080E5BB4, 0x080E5BD8, 0x080E5BE8]
 * Fields : +0x00:u32(R), +0x04:u32(W), +0x08:u32(RW), +0x0C:u32(W), +0x10:u32(RW), +0x14:u32(RW)
 * Callees: func_08008AE0, func_08008AF0, func_080098AC, func_080098DC, func_08009940, func_080D3914
 * CFG Structure:
 *   L_080087C8: call func_08009940(); call func_08009940(); call func_08009940(); call func_08009940(); call func_08008AE0(); call _call_via_r2()
 * ========================================================================== */
extern void func_08008AE0(void);
extern void func_08008AF0(void);
extern void func_080098AC(void);
extern void func_080098DC(void);
extern void func_08009940(void);
extern void func_080D3914(void);
void func_080087C8(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, lr}\n"
        "	mov r6, r8\n"
        "	push {r6}\n"
        "	sub sp, #0x4c\n"
        "	ldr r5, [r0]\n"
        "	add r2, r5, #0\n"
        "	add r2, #0x34\n"
        "	ldr r3, .Lpool_0800889C\n"
        "	mov r1, #0\n"
        "	str r1, [sp]\n"
        "	str r1, [sp, #4]\n"
        "	ldr r0, .Lpool_080088A0\n"
        "	str r0, [sp, #8]\n"
        "	str r2, [sp, #0xc]\n"
        "	add r0, sp, #0x10\n"
        "	mov r8, r0\n"
        "	add r2, #0x58\n"
        "	str r1, [sp, #0x10]\n"
        "	str r1, [r0, #4]\n"
        "	ldr r0, .Lpool_080088A4\n"
        "	str r0, [sp, #0x18]\n"
        "	str r2, [sp, #0x1c]\n"
        "	add r6, sp, #0x20\n"
        "	sub r2, #0x68\n"
        "	str r1, [sp, #0x20]\n"
        "	str r1, [r6, #4]\n"
        "	ldr r0, .Lpool_080088A8\n"
        "	str r0, [sp, #0x28]\n"
        "	str r2, [sp, #0x2c]\n"
        "	add r4, sp, #0x30\n"
        "	str r1, [sp, #0x30]\n"
        "	str r1, [r4, #4]\n"
        "	ldr r0, .Lpool_080088AC\n"
        "	str r0, [sp, #0x38]\n"
        "	add r2, sp, #0x40\n"
        "	str r2, [r4, #0xc]\n"
        "	str r3, [sp, #0x48]\n"
        "	str r1, [sp, #0x40]\n"
        "	str r1, [r2, #4]\n"
        "	ldr r0, .Lpool_080088B0\n"
        "	str r0, [r2, #8]\n"
        "	add r0, sp, #0x3c\n"
        "	str r0, [r4, #0x10]\n"
        "	str r2, [r4, #0x14]\n"
        "	ldr r0, .Lpool_080088B4\n"
        "	add r1, r5, r0\n"
        "	add r0, r4, #0\n"
        "	bl func_08009940\n"
        "	add r0, r4, #0\n"
        "	mov r1, sp\n"
        "	bl func_08009940\n"
        "	add r0, r4, #0\n"
        "	add r1, r6, #0\n"
        "	bl func_08009940\n"
        "	add r0, r4, #0\n"
        "	mov r1, r8\n"
        "	bl func_08009940\n"
        "	mov r0, #0x92\n"
        "	lsl r0, r0, #3\n"
        "	add r5, r5, r0\n"
        "	add r0, r5, #0\n"
        "	bl func_08008AE0\n"
        "	ldr r1, [r0, #8]\n"
        "	ldr r2, [r1, #0x10]\n"
        "	add r1, r4, #0\n"
        "	bl func_080D3914\n"
        "	add r0, r5, #0\n"
        "	bl func_08008AF0\n"
        "	add r0, r5, #0\n"
        "	bl func_08008AE0\n"
        "	ldr r1, [r0, #8]\n"
        "	ldr r2, [r1, #0x14]\n"
        "	add r1, r4, #0\n"
        "	bl func_080D3914\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080098DC\n"
        "	add r0, r6, #0\n"
        "	mov r1, #2\n"
        "	bl func_080098AC\n"
        "	mov r0, r8\n"
        "	mov r1, #2\n"
        "	bl func_080098AC\n"
        "	mov r0, sp\n"
        "	mov r1, #2\n"
        "	bl func_080098AC\n"
        "	add sp, #0x4c\n"
        "	pop {r3}\n"
        "	mov r8, r3\n"
        "	pop {r4, r5, r6}\n"
        "	pop {r0}\n"
        "	bx r0\n"
        "	.hword 0x0000\n"
        ".Lpool_0800889C:\n"
        "	.word 0x080E5BE8\n"
        ".Lpool_080088A0:\n"
        "	.word 0x080E5AF0\n"
        ".Lpool_080088A4:\n"
        "	.word 0x080E5AE0\n"
        ".Lpool_080088A8:\n"
        "	.word 0x080E5AD0\n"
        ".Lpool_080088AC:\n"
        "	.word 0x080E5BB4\n"
        ".Lpool_080088B0:\n"
        "	.word 0x080E5BD8\n"
        ".Lpool_080088B4:\n"
        "	.word 0x00000494\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080088B8 @ 0x080088B8 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08009268();
void func_080088B8(u32 *arg0) {
  func_08009268(*arg0);
}

/* --- func_080088C4 @ 0x080088C4 (8B) [PURE-C | agbcc_O2] --- */
#define NULL 0

u16 func_080088C4(u16 **arg0) {
    return **arg0;
}

/* --- func_080088CC @ 0x080088CC (8B) [PURE-C | agbcc_O2] --- */
#define NULL 0

u16 func_080088CC(u8 **arg0) {
    return *(u16 *)(*arg0 + 4);
}

/* --- func_080088D4 @ 0x080088D4 (8B) [PURE-C | agbcc_O2] --- */
#define NULL 0

u16 func_080088D4(u8 **arg0) {
    return *(u16 *)(*arg0 + 8);
}

/* --- func_080088DC @ 0x080088DC (4B) [PURE-C | agbcc_O2] --- */
#define NULL 0

u32 func_080088DC(u32 *arg0) {
    return *arg0;
}

/* --- func_080088E0 @ 0x080088E0 (16B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080092C8();
void func_080088E0(u32 *arg0,u16 arg1) {
  func_080092C8(*arg0,arg1);
}

/* --- func_080088F0 @ 0x080088F0 (16B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080092FC();
void func_080088F0(u32 *arg0,u16 arg1) {
  func_080092FC(*arg0,arg1);
}

/* --- func_08008910 @ 0x08008910 (8B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void *func_08008910(u8 **arg0) {
    return *arg0 + 36;
}

/* --- func_08008918 @ 0x08008918 (8B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void *func_08008918(u8 **arg0) {
    return *arg0 + 52;
}

/* --- func_08008920 @ 0x08008920 (8B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void *func_08008920(u8 **arg0) {
    return *arg0 + 140;
}

/* --- func_08008940 @ 0x08008940 (12B) [PURE-C | agbcc_O2] --- */
#define NULL 0

u32 func_08008940(u32 *arg0) {
    return arg0[0] + 0x494;
}

/* --- func_0800894C @ 0x0800894C (20B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08008AE0();
u32 func_0800894C(int *arg0) {
  return func_08008AE0(*arg0 + 0x490);
}

/* --- func_0800896C @ 0x0800896C (20B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08008AE0();
u16 func_0800896C(uint32_t *ptr) {
    uint32_t temp = *ptr;
    uint16_t offset = 0x92 << 3;
    temp += offset;
    func_08008AE0(temp);
}

/* --- func_08008980 @ 0x08008980 (232B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08008980 @ 0x08008980 (232 bytes)
 * Role   : C++ Factory / Constructor with operator new (func_080005D4) [vtable: 0x080E5B0C, 0x080E5B18, 0x080E5B60, 0x080E5B70, 0x080E5B90, 0x080E5BB4, 0x080E5BD8]
 * Fields : +0x00:u32(W), +0x00:u8(W), +0x04:u32(W), +0x08:u32(W), +0x0C:u32(W), +0x10:u32(W), +0x14:u32(W), +0x1C:u32(W), +0x28:u32(W), +0x30:u32(W), +0x34:u32(W), +0x44:u32(W)
 * Callees: func_080005D4, func_08008D84, func_08008D9C, func_080095C0, func_080D78F8
 * CFG Structure:
 *   L_08008980: call func_080005D4(); call func_080D78F8(); call func_08008D9C(); if (==) goto L_08008A20
 *   L_08008A20: call func_080095C0(); call func_080095C0(); call func_080095C0(); return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08008D84(void);
extern void func_08008D9C(void);
extern void func_080095C0(void);
extern void func_080D78F8(void);
int func_08008980(void) {
    u32 sp0;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0));
    __asm__ volatile(
        "	mov sb, r0\n"
        "	mov r0, #0x6c\n"
        "	bl func_080005D4\n"
        "	add r6, r0, #0\n"
        "	mov r2, #0\n"
        "	str r2, [r6]\n"
        "	str r2, [r6, #4]\n"
        "	ldr r0, =0x080E5B70\n"
        "	str r0, [r6, #8]\n"
        "	add r5, r6, #0\n"
        "	add r5, #0xc\n"
        "	str r2, [r6, #0xc]\n"
        "	str r2, [r5, #4]\n"
        "	ldr r0, =0x080E5BB4\n"
        "	mov ip, r0\n"
        "	str r0, [r5, #8]\n"
        "	add r1, r6, #0\n"
        "	add r1, #0x1c\n"
        "	str r1, [r5, #0xc]\n"
        "	str r2, [r6, #0x1c]\n"
        "	str r2, [r1, #4]\n"
        "	ldr r4, =0x080E5BD8\n"
        "	str r4, [r1, #8]\n"
        "	add r0, r6, #0\n"
        "	add r0, #0x18\n"
        "	str r0, [r5, #0x10]\n"
        "	str r1, [r5, #0x14]\n"
        "	ldr r3, =0x080E5B90\n"
        "	str r3, [r5, #8]\n"
        "	mov r1, #0x28\n"
        "	add r1, r1, r6\n"
        "	mov r8, r1\n"
        "	str r2, [r6, #0x28]\n"
        "	str r2, [r1, #4]\n"
        "	ldr r0, =0x080E5B60\n"
        "	str r0, [r1, #8]\n"
        "	add r7, r6, #0\n"
        "	add r7, #0x34\n"
        "	str r2, [r6, #0x34]\n"
        "	str r2, [r7, #4]\n"
        "	mov r0, ip\n"
        "	str r0, [r7, #8]\n"
        "	add r1, r6, #0\n"
        "	add r1, #0x44\n"
        "	str r1, [r7, #0xc]\n"
        "	str r2, [r6, #0x44]\n"
        "	str r2, [r1, #4]\n"
        "	str r4, [r1, #8]\n"
        "	add r0, r6, #0\n"
        "	add r0, #0x40\n"
        "	str r0, [r7, #0x10]\n"
        "	str r1, [r7, #0x14]\n"
        "	str r3, [r7, #8]\n"
        "	add r0, #0x10\n"
        "	str r7, [sp]\n"
        "	mov r1, sp\n"
        "	bl func_080D78F8\n"
        "	ldr r0, =0x080E5B0C\n"
        "	str r0, [r7, #0x30]\n"
        "	ldr r0, =0x080E5B18\n"
        "	str r0, [r7, #8]\n"
        "	add r4, r6, #0\n"
        "	add r4, #0x68\n"
        "	bl func_08008D9C\n"
        "	mov r1, #1\n"
        "	eor r0, r1\n"
        "	strb r0, [r4]\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_08008A20\n"
        "	bl func_08008D84\n"
        "_L_08008A20:\n"
        "	add r0, r7, #0\n"
        "	add r1, r6, #0\n"
        "	bl func_080095C0\n"
        "	add r0, r7, #0\n"
        "	add r1, r5, #0\n"
        "	bl func_080095C0\n"
        "	add r0, r7, #0\n"
        "	mov r1, r8\n"
        "	bl func_080095C0\n"
        "	mov r1, sb\n"
        "	str r6, [r1]\n"
        "	mov r0, sb\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_08008A68 @ 0x08008A68 (120B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08008A68 @ 0x08008A68 (120 bytes)
 * Role   : C++ Virtual Deleting Destructor ~Class(this, int __in_chrg) [vtable: 0x080E5B0C, 0x080E5B18]
 * Fields : +0x00:u32(R), +0x00:u8(R), +0x08:u32(W), +0x30:u32(W)
 * Callees: func_08000608, func_08008D90, func_0800959C, func_080098AC, func_080D7944
 * CFG Structure:
 *   L_08008A68: if (==) goto L_08008AC2
 *   L_08008A82: call func_080D7944(); call func_0800959C(); call func_080098AC(); call func_0800959C(); call func_080098AC(); call func_08000608()
 *   L_08008AC2: if (==) goto L_08008AD0
 *   L_08008AD0: return
 * ========================================================================== */
extern void func_08000608(void);
extern void func_08008D90(void);
extern void func_0800959C(void);
extern void func_080098AC(void);
extern void func_080D7944(void);
void func_08008A68(void) {
    int r7_var;
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r7, r1, #0\n"
        "	ldr r5, [r6]\n"
        "	cmp r5, #0\n"
        "	beq _L_08008AC2\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x68\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_08008A82\n"
        "	bl func_08008D90\n"
        "_L_08008A82:\n"
        "	add r4, r5, #0\n"
        "	add r4, #0x34\n"
        "	ldr r0, =0x080E5B0C\n"
        "	str r0, [r4, #0x30]\n"
        "	ldr r0, =0x080E5B18\n"
        "	str r0, [r4, #8]\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x50\n"
        "	mov r1, #0\n"
        "	bl func_080D7944\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_0800959C\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x28\n"
        "	mov r1, #2\n"
        "	bl func_080098AC\n"
        "	add r0, r5, #0\n"
        "	add r0, #0xc\n"
        "	mov r1, #2\n"
        "	bl func_0800959C\n"
        "	add r0, r5, #0\n"
        "	mov r1, #2\n"
        "	bl func_080098AC\n"
        "	add r0, r5, #0\n"
        "	bl func_08000608\n"
        "_L_08008AC2:\n"
        "	mov r0, #1\n"
        "	and r0, r7\n"
        "	cmp r0, #0\n"
        "	beq _L_08008AD0\n"
        "	add r0, r6, #0\n"
        "	bl func_08000608\n"
        "_L_08008AD0:\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_08008AE0 @ 0x08008AE0 (8B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void *func_08008AE0(u8 **arg0) {
    return *arg0 + 12;
}

/* --- func_08008AF0 @ 0x08008AF0 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000568();
void func_08008AF0(void) {
  func_08000568(1);
}

/* --- func_08008AFC @ 0x08008AFC (16B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D2254();
extern u32 func_080D28DC();
void func_08008AFC(void) {
  func_080D2254();
  func_080D28DC();
}

/* --- func_08008B0C @ 0x08008B0C (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D1BF8();
u32 func_08008B0C(void) {
  func_080D1BF8();
  return 1;
}

/* --- func_08008B18 @ 0x08008B18 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D22CC();
u32 func_08008B18(void) {
  func_080D22CC();
  return 1;
}

/* --- func_08008B24 @ 0x08008B24 (48B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

struct E { u32 a, b, c; };
extern struct E g_0813ABB4[];
extern u32 func_080D0F4E();
u32 func_08008B24(u32 param_1) {
    register u32 p1 asm("r2") = param_1;
    register u32 r0 asm("r0");
    register u32 lim asm("r1");
    __asm__("ldr %0, =5\n\tlsl %0, %0, #16\n\tlsr %1, %0, #16" : "=r"(r0), "=r"(lim) : "r"(p1));
    if (p1 >= lim) {
        p1 = func_080D0F4E(p1);
    }
    __asm__(
        "ldr %0, =g_0813ABB4\n\t"
        "lsl %1, %2, #1\n\t"
        "add %1, %1, %2\n\t"
        "lsl %1, %1, #2\n\t"
        "add %1, %1, %0\n\t"
        "ldr %0, [%1]"
        : "=&r"(r0), "=&r"(lim) : "r"(p1)
    );
    return r0;
}

/* --- func_08008B54 @ 0x08008B54 (24B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08008B24();
u32 func_08008B54(u32 *arg0,u8 arg1) {
  u32 val;
  val = func_08008B24(arg1);
  *arg0 = val;
  return arg0;
}

/* --- func_08008B6C @ 0x08008B6C (28B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D2A0C();
struct s_0813ABF0 { u32 a; u32 b; };
extern const struct s_0813ABF0 g_0813ABF0[];
void func_08008B6C(u32 *arg0,u16 arg1) {
  func_080D2A0C(*arg0,g_0813ABF0[arg1].a);
}

/* --- func_08008B88 @ 0x08008B88 (40B) [PURE-C | agbcc_O2] --- */
#define NULL 0

struct Entry { int a; int b; };
extern struct Entry g_0813ABF0[];
extern void func_080D2A0C();
void func_08008B88(int **param_1, u16 param_2) {
    int p = g_0813ABF0[param_2].a;
    int *q = *param_1;
    if (*q != p || q[1] < 0) {
        func_080D2A0C(q, p);
    }
}

/* --- func_08008BB0 @ 0x08008BB0 (48B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08008BB0 @ 0x08008BB0 (48 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x04:u32(R)
 * Callees: func_080D2438, func_080D2A0C
 * CFG Structure:
 *   L_08008BB0: if (==) goto L_08008BD0
 *   L_08008BD0: if (>= (s)) goto L_08008BDC
 *   L_08008BDC: return
 * ========================================================================== */
extern void func_080D2438(void);
extern void func_080D2A0C(void);
void func_08008BB0(void) {
    __asm__ volatile(
        "	push {lr}\n"
        "	lsl r1, r1, #0x10\n"
        "	ldr r2, .Lpool_08008BCC\n"
        "	lsr r1, r1, #0xd\n"
        "	add r1, r1, r2\n"
        "	ldr r1, [r1]\n"
        "	ldr r2, [r0]\n"
        "	ldr r0, [r2]\n"
        "	cmp r0, r1\n"
        "	beq _L_08008BD0\n"
        "	add r0, r2, #0\n"
        "	bl func_080D2A0C\n"
        "	b _L_08008BDC\n"
        ".Lpool_08008BCC:\n"
        "	.word 0x0813ABF0\n"
        "_L_08008BD0:\n"
        "	ldr r0, [r2, #4]\n"
        "	cmp r0, #0\n"
        "	bge _L_08008BDC\n"
        "	add r0, r2, #0\n"
        "	bl func_080D2438\n"
        "_L_08008BDC:\n"
        "	pop {r0}\n"
        "	bx r0\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_08008BE0 @ 0x08008BE0 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D2AF0();
void func_08008BE0(u32 *arg0) {
  func_080D2AF0(*arg0);
}

/* --- func_08008BEC @ 0x08008BEC (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D2438();
void func_08008BEC(u32 *arg0) {
  func_080D2438(*arg0);
}

/* --- func_08008BF8 @ 0x08008BF8 (16B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D2470();
void func_08008BF8(u32 *arg0,u16 arg1) {
  func_080D2470(*arg0,arg1);
}

/* --- func_08008C08 @ 0x08008C08 (16B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D2480();
void func_08008C08(u32 *arg0,u16 arg1) {
  func_080D2480(*arg0,arg1);
}

/* --- func_08008C18 @ 0x08008C18 (16B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D24A0();
void func_08008C18(u32 *arg0,u16 arg1) {
  func_080D24A0(*arg0,arg1);
}

/* --- func_08008C28 @ 0x08008C28 (16B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3258();
void func_08008C28(u32 *arg0,u16 arg1) {
  func_080D3258(*arg0,arg1);
}

/* --- func_08008C38 @ 0x08008C38 (28B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3280();
void func_08008C38(u32 *arg0,u16 arg1,u16 arg2) {
  func_080D3280(*arg0,arg2,arg1);
}

/* --- func_08008C54 @ 0x08008C54 (28B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D32E8();
void func_08008C54(u32 *arg0,short arg1,u16 arg2) {
  func_080D32E8(*arg0,arg2,(int)arg1);
}

/* --- func_08008C70 @ 0x08008C70 (28B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D335C();
void func_08008C70(u32 *arg0, s8 arg1, u16 arg2) {
  func_080D335C(*arg0,arg2,(int)arg1);
}

/* --- func_08008C8C @ 0x08008C8C (28B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D33E4();
void func_08008C8C(u32 *arg0,u8 arg1,u16 arg2) {
  func_080D33E4(*arg0,arg2,arg1);
}

/* --- func_08008CA8 @ 0x08008CA8 (28B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3458();
void func_08008CA8(u32 *arg0,u8 arg1,u16 arg2) {
  func_080D3458(*arg0,arg2,arg1);
}

/* --- func_08008CC4 @ 0x08008CC4 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D24C8();
void func_08008CC4(u32 *arg0) {
  func_080D24C8(*arg0);
}

/* --- func_08008CD0 @ 0x08008CD0 (12B) [PURE-C | agbcc_O2] --- */
#define NULL 0

u32 func_08008CD0(u32 **a) { return ((*a)[1] >> 31) ^ 1; }

/* --- func_08008CFC @ 0x08008CFC (20B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08008B54();
u32 func_08008CFC(void) {
  u32 local_val;
  func_08008B54(&local_val, 0);
  return local_val;
}

/* --- func_08008D10 @ 0x08008D10 (28B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_08008B54();
u32 func_08008D10() {
    u32 sp0;
    register u32 r1 asm("r1");
    __asm__("ldr %0, =5\n\tlsl %0, %0, #24\n\tlsr %0, %0, #24" : "=r"(r1));
    func_08008B54(&sp0, r1);
    return sp0;
}

/* --- func_08008D3C @ 0x08008D3C (32B) [PURE-C | agbcc_O2] --- */
#define NULL 0

struct S { u32 a; u8 b; }; extern struct S g_0813ABF0[]; void func_08008B54(u32 *, u8); u32 func_08008D3C(u16 i) { u32 x; func_08008B54(&x, g_0813ABF0[i].b); return x; }

/* --- func_08008D84 @ 0x08008D84 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D2958();
void func_08008D84(void) {
  func_080D2958();
}

/* --- func_08008D90 @ 0x08008D90 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D28DC();
void func_08008D90(void) {
  func_080D28DC();
}

/* --- func_08008D9C @ 0x08008D9C (12B) [PURE-C | agbcc_O2] --- */
#define NULL 0

u32 func_08008D9C(void) {
    return *(u32 *)0x040000C4 >> 31;
}

/* --- func_08008DA8 @ 0x08008DA8 (16B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D22D8();
void func_08008DA8(u16 arg0) {
  func_080D22D8(arg0);
}

/* --- func_08008DB8 @ 0x08008DB8 (16B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D2304();
void func_08008DB8(u16 arg0) {
  func_080D2304(arg0);
}

/* --- func_08008DC8 @ 0x08008DC8 (16B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D2350();
void func_08008DC8(u16 arg0) {
  func_080D2350(arg0);
}

/* --- func_08008DD8 @ 0x08008DD8 (16B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D23A4();
void func_08008DD8(u16 arg0) {
  func_080D23A4(arg0);
}

/* --- func_08008DE8 @ 0x08008DE8 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D240C();
void func_08008DE8(void) {
  func_080D240C();
}

/* --- func_08008DF4 @ 0x08008DF4 (16B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D23D8();
void func_08008DF4(u16 arg0) {
  func_080D23D8(arg0);
}

/* --- func_08008E04 @ 0x08008E04 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D2444();
void func_08008E04(void) {
  func_080D2444();
}

/* --- func_08008E28 @ 0x08008E28 (60B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

u32 func_08008E28(u32 param_1, u32 param_2, u32 param_3) {
    register u32 ret asm("r0");
    if (param_3 != 0) {
        __asm__ volatile(
            "orr r1, r0\n\t"
            "orr r1, r2\n\t"
            "mov r0, #1\n\t"
            "and r0, r1\n\t"
            "cmp r0, #0\n\t"
            "bne _ret0_08E28\n\t"
            "mov r0, #3\n\t"
            "and r1, r0\n\t"
            "cmp r1, #0\n\t"
            "bne _half_08E28\n\t"
            "lsl r0, r2, #0xe\n\t"
            "lsr r2, r0, #0x10\n\t"
            "mov r0, #0x84\n\t"
            "lsl r0, r0, #0x18\n\t"
            "orr r2, r0\n\t"
            "b _end_08E28\n"
            "_half_08E28:\n\t"
            "lsl r0, r2, #0xf\n\t"
            "lsr r2, r0, #0x10\n\t"
            "mov r0, #0x80\n\t"
            "lsl r0, r0, #0x18\n\t"
            "orr r2, r0\n\t"
            "b _end_08E28\n"
            "_ret0_08E28:"
            : : : "r0", "r1", "r2", "lr"
        );
    }
    __asm__ volatile(
        "mov r2, #0\n"
        "_end_08E28:\n\t"
        "add %0, r2, #0"
        : "=r"(ret) : : "r2"
    );
    return ret;
}

/* --- func_08008E64 @ 0x08008E64 (84B) [PURE-C | agbcc_O1] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 func_080D0EBC();
void func_08008E64(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r4;
    if (arg0 == 0) return;
    if (arg1 == 0) return;
    r4 = arg0;
    if (arg2 == 0) goto loc_ea2;
    arg3 = r4;
    arg3 |= arg1;
    arg3 |= arg2;
    arg0 = 1;
    arg0 &= arg3;
    if (arg0 != 0) goto loc_ea2;
    arg0 = 3;
    arg3 &= arg0;
    if (arg3 != 0) goto loc_e96;
    arg0 = arg2 << 14;
    arg2 = (u32)arg0 >> 16;
    arg0 = 0x84;
    arg0 <<= 24;
    arg2 |= arg0;
    goto loc_ea4;
loc_e96:
    arg0 = arg2 << 15;
    arg2 = (u32)arg0 >> 16;
    arg0 = 0x80;
    arg0 <<= 24;
    arg2 |= arg0;
    goto loc_ea4;
loc_ea2:
    arg2 = 0;
loc_ea4:
    func_080D0EBC(r4, arg1, arg2, 0x040000D4);
}

/* --- func_08008EB8 @ 0x08008EB8 (84B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080D0EBC();
void func_08008EB8(u32 param_1, u32 param_2, u32 param_3) {
    u32 sp0 = param_1;
    register u32 p2 asm("r1") = param_2;
    register u32 p3 asm("r2") = param_3;
    if (p2 != 0) {
        if (p3 != 0) {
            register u32 or_v asm("r3") = p2 | p3;
            if ((or_v & 1) == 0) {
                register u32 m3 asm("r0") = 3;
                __asm__("and %0, %1" : "+r"(or_v) : "r"(m3));
                if (or_v == 0) {
                    register u32 tmp asm("r0") = p3 << 14;
                    __asm__("" : "+r"(tmp));
                    p3 = (tmp >> 16) | 0x84000000;
                } else {
                    register u32 tmp asm("r0") = p3 << 15;
                    __asm__("" : "+r"(tmp));
                    p3 = (tmp >> 16) | 0x80000000;
                }
            } else {
                p3 = 0;
            }
        } else {
            p3 = 0;
        }
        {
            register u32 bit24 asm("r0") = 0x01000000;
            __asm__("orr %0, %1" : "+r"(p3) : "r"(bit24));
        }
        func_080D0EBC(&sp0, p2, p3, 0x040000D4);
    }
}

/* --- func_08008F0C @ 0x08008F0C (84B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

u32 *func_08008F0C(u32 *param_1, u32 param_2, u32 param_3, u32 param_4) {
    register u32 *p1 asm("r4") = param_1;
    register u32 p2 asm("r5") = param_2;
    register u32 p3 asm("r2") = param_3;
    register u32 p4 asm("r3") = param_4;
    if (p2 != 0 && p3 != 0 && p4 != 0) {
        register u32 or_v asm("r1") = p2 | p3 | p4;
        if ((or_v & 1) == 0) {
            register u32 m3 asm("r0") = 3;
            __asm__("and %0, %1" : "+r"(or_v) : "r"(m3));
            if (or_v == 0) {
                register u32 tmp asm("r0") = p4 << 14;
                __asm__("" : "+r"(tmp));
                p4 = (tmp >> 16) | 0x84000000;
            } else {
                register u32 tmp asm("r0") = p4 << 15;
                __asm__("" : "+r"(tmp));
                p4 = (tmp >> 16) | 0x80000000;
            }
        } else {
            p4 = 0;
        }
    } else {
        p4 = 0;
    }
    p1[0] = 0;
    p1[1] = p2;
    p1[2] = p3;
    p1[3] = p4;
    return p1;
}

/* --- func_08008F60 @ 0x08008F60 (88B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

u32 *func_08008F60(u32 *param_1, u32 param_2, u32 param_3, u32 param_4) {
    register u32 *p1 asm("r4");
    register u32 p2 asm("r5");
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %1, r1, #0\n\t"
        "cmp r2, #0\n\t"
        "beq _zero1_08F60\n\t"
        "cmp r3, #0\n\t"
        "beq _zero3_08F60\n\t"
        "add r1, r2, #0\n\t"
        "orr r1, r3\n\t"
        "mov r0, #1\n\t"
        "and r0, r1\n\t"
        "cmp r0, #0\n\t"
        "bne _zero3_08F60\n\t"
        "mov r0, #3\n\t"
        "and r1, r0\n\t"
        "cmp r1, #0\n\t"
        "bne _half_08F60\n\t"
        "lsl r0, r3, #0xe\n\t"
        "lsr r3, r0, #0x10\n\t"
        "mov r0, #0x84\n\t"
        "lsl r0, r0, #0x18\n\t"
        "orr r3, r0\n\t"
        "b _orr_bit24_08F60\n"
        "_half_08F60:\n\t"
        "lsl r0, r3, #0xf\n\t"
        "lsr r3, r0, #0x10\n\t"
        "mov r0, #0x80\n\t"
        "lsl r0, r0, #0x18\n\t"
        "orr r3, r0\n\t"
        "b _orr_bit24_08F60\n"
        "_zero3_08F60:\n\t"
        "mov r3, #0\n"
        "_orr_bit24_08F60:\n\t"
        "mov r1, #0x80\n\t"
        "lsl r1, r1, #0x11\n\t"
        "orr r1, r3\n\t"
        "b _store_08F60\n"
        "_zero1_08F60:\n\t"
        "mov r1, #0\n"
        "_store_08F60:\n\t"
        "mov r0, #1\n\t"
        "str r0, [%0]\n\t"
        "str %1, [%0, #4]\n\t"
        "str r2, [%0, #8]\n\t"
        "str r1, [%0, #0xc]"
        : "=r"(p1), "=r"(p2) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
    return p1;
}

/* --- func_08008FB8 @ 0x08008FB8 (44B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D0EBC();
void func_08008FB8(int *arg0) {
  u8 *puStack_c;
  u8 **ppuVar1;
  ppuVar1 = (u8 **)arg0[1];
  if (*arg0 == 1) {
    puStack_c = (u8 *)arg0[1];
    ppuVar1 = &puStack_c;
  }
  func_080D0EBC(ppuVar1,arg0[2],arg0[3],0x040000D4);
}

/* --- func_08008FE4 @ 0x08008FE4 (56B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 func_080D0EBC();
void func_08008FE4(int *arg0, int *arg1) {
  int *end = arg1;
  u32 val = 0x040000D4;
  int *cur = arg0;
  u8 *puStack_14;
  u8 **ppuVar2;
  while (cur != end) {
    ppuVar2 = (u8 **)cur[1];
    if (*cur == 1) {
      puStack_14 = (u8 *)cur[1];
      ppuVar2 = &puStack_14;
    }
    func_080D0EBC(ppuVar2, cur[2], cur[3], val);
    cur += 4;
  }
}

/* --- func_0800901C @ 0x0800901C (120B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_0800901C @ 0x0800901C (120 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x04:u32(R), +0x08:u32(R), +0x0C:u32(R)
 * Callees: func_080D374C, func_080D3750
 * CFG Structure:
 *   L_0800901C: if (!=) goto L_0800902E
 *   L_0800902E: if (==) goto L_08009080
 *   L_0800904E: call func_080D374C(); if (!=) goto L_0800906C
 *   L_0800906C: if (==) goto L_0800908A
 *   L_08009070: call func_080D3750(); goto L_0800908A
 *   L_08009080: call func_080D3750()
 *   L_0800908A: return
 * ========================================================================== */
extern void func_080D374C(void);
extern void func_080D3750(void);
void func_0800901C(void) {
    u32 sp0, sp1;
    int r7_var;
    __asm__ volatile("" : : "m"(sp0), "m"(sp1));
    __asm__ volatile(
        "	add r1, r0, #0\n"
        "	ldr r4, [r1, #4]\n"
        "	ldr r0, [r1]\n"
        "	cmp r0, #1\n"
        "	bne _L_0800902E\n"
        "	str r4, [sp]\n"
        "	mov r4, sp\n"
        "_L_0800902E:\n"
        "	ldr r6, [r1, #0xc]\n"
        "	ldr r7, [r1, #8]\n"
        "	mov r0, #0x80\n"
        "	lsl r0, r0, #0x13\n"
        "	and r0, r6\n"
        "	cmp r0, #0\n"
        "	beq _L_08009080\n"
        "	ldr r5, .Lpool_0800907C\n"
        "	and r5, r6\n"
        "	mov r3, #7\n"
        "	and r3, r5\n"
        "	sub r5, r5, r3\n"
        "	cmp r5, #0\n"
        "	bne _L_0800904E\n"
        "	cmp r3, #0\n"
        "	bne _L_08009070\n"
        "_L_0800904E:\n"
        "	sub r2, r6, r3\n"
        "	add r0, r4, #0\n"
        "	add r1, r7, #0\n"
        "	str r3, [sp, #4]\n"
        "	bl func_080D374C\n"
        "	lsl r1, r5, #2\n"
        "	add r7, r7, r1\n"
        "	mov r0, #0x80\n"
        "	lsl r0, r0, #0x11\n"
        "	and r0, r6\n"
        "	ldr r3, [sp, #4]\n"
        "	cmp r0, #0\n"
        "	bne _L_0800906C\n"
        "	add r4, r4, r1\n"
        "_L_0800906C:\n"
        "	cmp r3, #0\n"
        "	beq _L_0800908A\n"
        "_L_08009070:\n"
        "	sub r2, r6, r5\n"
        "	add r0, r4, #0\n"
        "	add r1, r7, #0\n"
        "	bl func_080D3750\n"
        "	b _L_0800908A\n"
        "	.align 2, 0\n"
        ".Lpool_0800907C:\n"
        "	.word 0x0000FFFF\n"
        "_L_08009080:\n"
        "	add r0, r4, #0\n"
        "	add r1, r7, #0\n"
        "	add r2, r6, #0\n"
        "	bl func_080D3750\n"
        "_L_0800908A:\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_08009094 @ 0x08009094 (172B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08009094 @ 0x08009094 (172 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x04:u32(R), +0x08:u32(R), +0x0C:u32(R)
 * Callees: func_080D374C, func_080D3750
 * CFG Structure:
 *   L_08009094: if (==) goto L_0800911C
 *   L_080090A6: if (!=) goto L_080090B2
 *   L_080090B2: if (==) goto L_0800910C
 *   L_080090D6: call func_080D374C(); if (!=) goto L_080090F6
 *   L_080090F6: if (==) goto L_08009116
 *   L_080090FC: call func_080D3750(); goto L_08009116
 *   L_0800910C: call func_080D3750()
 *   L_08009116: if (!=) goto L_080090A6
 *   L_0800911C: return
 * ========================================================================== */
extern void func_080D374C(void);
extern void func_080D3750(void);
void func_08009094(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, r7, lr}\n"
        "	mov r7, sb\n"
        "	mov r6, r8\n"
        "	push {r6, r7}\n"
        "	sub sp, #8\n"
        "	mov sb, r1\n"
        "	add r7, r0, #0\n"
        "	cmp r7, sb\n"
        "	beq _L_0800911C\n"
        "_L_080090A6:\n"
        "	ldr r4, [r7, #4]\n"
        "	ldr r0, [r7]\n"
        "	cmp r0, #1\n"
        "	bne _L_080090B2\n"
        "	str r4, [sp]\n"
        "	mov r4, sp\n"
        "_L_080090B2:\n"
        "	ldr r6, [r7, #0xc]\n"
        "	ldr r3, [r7, #8]\n"
        "	mov r0, #0x80\n"
        "	lsl r0, r0, #0x13\n"
        "	and r0, r6\n"
        "	cmp r0, #0\n"
        "	beq _L_0800910C\n"
        "	ldr r5, .Lpool_08009108\n"
        "	and r5, r6\n"
        "	mov r0, #7\n"
        "	mov r8, r0\n"
        "	and r0, r5\n"
        "	mov r8, r0\n"
        "	sub r5, r5, r0\n"
        "	cmp r5, #0\n"
        "	bne _L_080090D6\n"
        "	cmp r0, #0\n"
        "	bne _L_080090FC\n"
        "_L_080090D6:\n"
        "	mov r0, r8\n"
        "	sub r2, r6, r0\n"
        "	add r0, r4, #0\n"
        "	add r1, r3, #0\n"
        "	str r3, [sp, #4]\n"
        "	bl func_080D374C\n"
        "	lsl r1, r5, #2\n"
        "	ldr r3, [sp, #4]\n"
        "	add r3, r3, r1\n"
        "	mov r0, #0x80\n"
        "	lsl r0, r0, #0x11\n"
        "	and r0, r6\n"
        "	cmp r0, #0\n"
        "	bne _L_080090F6\n"
        "	add r4, r4, r1\n"
        "_L_080090F6:\n"
        "	mov r0, r8\n"
        "	cmp r0, #0\n"
        "	beq _L_08009116\n"
        "_L_080090FC:\n"
        "	sub r2, r6, r5\n"
        "	add r0, r4, #0\n"
        "	add r1, r3, #0\n"
        "	bl func_080D3750\n"
        "	b _L_08009116\n"
        ".Lpool_08009108:\n"
        "	.word 0x0000FFFF\n"
        "_L_0800910C:\n"
        "	add r0, r4, #0\n"
        "	add r1, r3, #0\n"
        "	add r2, r6, #0\n"
        "	bl func_080D3750\n"
        "_L_08009116:\n"
        "	add r7, #0x10\n"
        "	cmp r7, sb\n"
        "	bne _L_080090A6\n"
        "_L_0800911C:\n"
        "	add sp, #8\n"
        "	pop {r3, r4}\n"
        "	mov r8, r3\n"
        "	mov sb, r4\n"
        "	pop {r4, r5, r6, r7}\n"
        "	pop {r0}\n"
        "	bx r0\n"
        "	.hword 0x0000\n"
        "	.hword 0x4802\n"
        "	.hword 0x8801\n"
        "	.hword 0x4802\n"
        "	.hword 0x4388\n"
        "	.hword 0x4770\n"
        "	.hword 0x0000\n"
        "	.hword 0x0130\n"
        "	.hword 0x0400\n"
        "	.hword 0x03FF\n"
        "	.hword 0x0000\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_08009140 @ 0x08009140 (20B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800912C();
u32 func_08009140(u16 *arg0) {
  u16 val;
  val = func_0800912C();
  *arg0 = val;
  return arg0;
}

/* --- func_08009154 @ 0x08009154 (4B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08009154(u16 *arg0, u16 arg1) {
    *arg0 = arg1;
}

/* --- func_08009158 @ 0x08009158 (16B) [PURE-C | old_agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800912C();
u32 func_08009158(u16 *arg0) {
  u16 val;
  val = func_0800912C();
  *arg0 = val;
  return;
}

/* --- func_08009168 @ 0x08009168 (20B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08009140();
u32 func_08009168(u16 *arg0) {
  func_08009140();
  arg0[2] = *arg0;
  return arg0;
}

/* --- func_0800917C @ 0x0800917C (20B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08009154();
u32 func_0800917C(u16 *arg0) {
  func_08009154();
  arg0[2] = *arg0;
  return arg0;
}

/* --- func_08009190 @ 0x08009190 (20B) [PURE-C | old_agbcc_O2] --- */
#define NULL 0

extern u16 func_08009158();
int func_08009190(u16 *arg0) {
    u16 v = *arg0;
    arg0[2] = func_08009158(arg0) & ~v;
}

/* --- func_080091A4 @ 0x080091A4 (68B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_08009168();
int func_080091A4(int param_1, int param_2, int param_3) {
    u32 sp0;
    register int p1 asm("r6");
    register int p2 asm("r4");
    register int p3 asm("r5");
    __asm__ volatile("" : : "m"(sp0));
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %1, r1, #0\n\t"
        "add %2, r2, #0\n\t"
        "lsl %1, %1, #0x10\n\t"
        "lsr %1, %1, #0x10\n\t"
        "lsl %2, %2, #0x10\n\t"
        "lsr %2, %2, #0x10\n\t"
        "bl func_08009168\n\t"
        "ldrh r0, [%0, #4]\n\t"
        "mov r1, #0\n\t"
        "strh r0, [%0, #8]\n\t"
        "strh %1, [%0, #0xa]\n\t"
        "strh %2, [%0, #0xc]\n\t"
        "str r1, [sp]\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0xe\n\t"
        "add r1, %0, #0\n\t"
        "add r1, #0x22\n\t"
        "cmp r0, r1\n\t"
        "beq _done_91A4\n\t"
        "mov r2, #0\n"
        "_loop_91A4:\n\t"
        "strh r2, [r0]\n\t"
        "add r0, #2\n\t"
        "cmp r0, r1\n\t"
        "bne _loop_91A4\n"
        "_done_91A4:"
        : "=r"(p1), "=r"(p2), "=r"(p3) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
    return p1;
}

/* --- func_080091E8 @ 0x080091E8 (60B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_0800917C();
int func_080091E8(int param_1, int param_2) {
    u32 sp0;
    register int p1 asm("r4");
    __asm__ volatile("" : : "m"(sp0));
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "bl func_0800917C\n\t"
        "ldrh r0, [%0, #4]\n\t"
        "mov r1, #0\n\t"
        "strh r0, [%0, #8]\n\t"
        "mov r0, #0x1e\n\t"
        "strh r0, [%0, #0xa]\n\t"
        "mov r0, #4\n\t"
        "strh r0, [%0, #0xc]\n\t"
        "str r1, [sp]\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0xe\n\t"
        "add r1, %0, #0\n\t"
        "add r1, #0x22\n\t"
        "cmp r0, r1\n\t"
        "beq _done_91E8\n\t"
        "mov r2, #0\n"
        "_loop_91E8:\n\t"
        "strh r2, [r0]\n\t"
        "add r0, #2\n\t"
        "cmp r0, r1\n\t"
        "bne _loop_91E8\n"
        "_done_91E8:"
        : "=r"(p1) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
    return p1;
}

/* --- func_08009224 @ 0x08009224 (68B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_0800917C();
int func_08009224(int param_1, int param_2, int param_3, int param_4) {
    u32 sp0;
    register int p1 asm("r6");
    register int p2 asm("r4");
    register int p3 asm("r5");
    __asm__ volatile("" : : "m"(sp0));
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %1, r1, #0\n\t"
        "add %2, r2, #0\n\t"
        "add r1, r3, #0\n\t"
        "lsl %1, %1, #0x10\n\t"
        "lsr %1, %1, #0x10\n\t"
        "lsl %2, %2, #0x10\n\t"
        "lsr %2, %2, #0x10\n\t"
        "bl func_0800917C\n\t"
        "ldrh r0, [%0, #4]\n\t"
        "mov r1, #0\n\t"
        "strh r0, [%0, #8]\n\t"
        "strh %1, [%0, #0xa]\n\t"
        "strh %2, [%0, #0xc]\n\t"
        "str r1, [sp]\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0xe\n\t"
        "add r1, %0, #0\n\t"
        "add r1, #0x22\n\t"
        "cmp r0, r1\n\t"
        "beq _done_9224\n\t"
        "mov r2, #0\n"
        "_loop_9224:\n\t"
        "strh r2, [r0]\n\t"
        "add r0, #2\n\t"
        "cmp r0, r1\n\t"
        "bne _loop_9224\n"
        "_done_9224:"
        : "=r"(p1), "=r"(p2), "=r"(p3) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
    return p1;
}

/* --- func_08009268 @ 0x08009268 (96B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08009268 @ 0x08009268 (96 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(RW), +0x08:u16(W), +0x0A:u16(R), +0x0C:u16(R)
 * Callees: func_08009190
 * CFG Structure:
 *   L_08009268: call func_08009190()
 *   L_08009288: if (==) goto L_080092B0
 *   L_080092A4: goto L_080092AE
 *   L_080092B0: if (!=) goto L_08009288
 * ========================================================================== */
extern void func_08009190(void);
int func_08009268(void) {
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	bl func_08009190\n"
        "	mov ip, r0\n"
        "	ldrh r0, [r4]\n"
        "	mov r8, r0\n"
        "	ldrh r6, [r4, #0xc]\n"
        "	ldrh r5, [r4, #0xa]\n"
        "	mov r3, #0\n"
        "	mov r2, #0x80\n"
        "	lsl r2, r2, #2\n"
        "	add r1, r4, #0\n"
        "	add r1, #0x20\n"
        "_L_08009288:\n"
        "	mov r0, r8\n"
        "	and r0, r2\n"
        "	cmp r0, #0\n"
        "	beq _L_080092B0\n"
        "	mov r0, ip\n"
        "	and r0, r2\n"
        "	cmp r0, #0\n"
        "	bne _L_080092AA\n"
        "	mov r7, #0\n"
        "	ldrsh r0, [r1, r7]\n"
        "	cmp r0, r5\n"
        "	beq _L_080092A4\n"
        "	add r0, #1\n"
        "	b _L_080092AE\n"
        "_L_080092A4:\n"
        "	orr r3, r2\n"
        "	sub r0, r0, r6\n"
        "	b _L_080092AE\n"
        "_L_080092AA:\n"
        "	orr r3, r2\n"
        "	mov r0, #0\n"
        "_L_080092AE:\n"
        "	strh r0, [r1]\n"
        "_L_080092B0:\n"
        "	sub r1, #2\n"
        "	lsr r2, r2, #1\n"
        "	cmp r2, #0\n"
        "	bne _L_08009288\n"
        "	strh r3, [r4, #8]\n"
        "	add r0, r3, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080092C8 @ 0x080092C8 (52B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
void func_080092C8(u16 *arg0,u16 arg1) {
  u16 val;
  u16 val2;
  u16 *mem_ptr;
  u32 val3;
  val = *arg0;
  val3 = 0x200;
  mem_ptr = arg0 + 0x10;
  val2 = arg0[5];
  do {
    if ((val & val3) != 0) {
      *mem_ptr = *mem_ptr + (arg1 - val2);
    }
    mem_ptr = mem_ptr + -1;
    val3 = val3 >> 1;
  } while (val3 != 0);
  arg0[5] = arg1;
}

/* --- func_080092FC @ 0x080092FC (4B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_080092FC(u8 *arg0, u16 arg1) {
    *(u16 *)(arg0 + 12) = arg1;
}

/* --- func_08009300 @ 0x08009300 (36B) [CFG-ASM (hermes:reg-zero-clobber+clean-c89) | agbcc_O1] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 func_080005D4();
u32 func_08009300(int *arg0, u32 arg1) {
  u32 *mem_ptr;
  register u32 z2 asm("r2");
  register u32 z1 asm("r1");
  mem_ptr = (u32 *)func_080005D4(0x10);
  *mem_ptr = arg1;
  z2 = 0;
  z1 = 0;
  *(u16 *)(mem_ptr + 1) = z1;
  mem_ptr[2] = z1;
  *(u8 *)(mem_ptr + 3) = z2;
  *(u16 *)((int)mem_ptr + 0xe) = z1;
  *arg0 = (int)mem_ptr;
  return (u32)arg0;
}

/* --- func_08009324 @ 0x08009324 (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
void func_08009324(u32 *arg0,u32 arg1) {
  func_08000608(*arg0);
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_08009344 @ 0x08009344 (8B) [PURE-C | agbcc_O2] --- */
#define NULL 0

u32 func_08009344(u32 **arg0, u32 arg1) {
    u32 *p = *arg0;
    u32 old = *p;
    *p = arg1;
    return old;
}

/* --- func_0800934C @ 0x0800934C (44B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

struct S { u32 p0; s16 a; u32 b; u8 c; u16 d; }; void func_0800934C(struct S **p, s16 a, u32 b, int c) { struct S *s = *p; register int v asm("r0") = a; u8 f; if (v < 0) v = -v; v = -v; f = ((u32)(-c | c)) >> 31; s->a = v; s->b = b; s->c = f; s->d = 0xFFFF; }

/* --- func_08009378 @ 0x08009378 (40B) [PURE-C | agbcc_O2] --- */
#define NULL 0

struct S { u32 p0; s16 a; u32 b; u8 c; u16 d; }; void func_08009378(struct S **p, s16 a, u32 b, int c) { struct S *s = *p; int v = a; u8 f; if (v < 0) v = -v; f = ((u32)(-c | c)) >> 31; s->a = v; s->b = b; s->c = f; s->d = 0; }

/* --- func_080093A0 @ 0x080093A0 (12B) [PURE-C | agbcc_O2] --- */
#define NULL 0

s16 func_080093A0(s16 **arg0, s16 arg1) {
    s16 *p = *arg0;
    s16 old = p[2];
    p[2] = arg1;
    return old;
}

/* --- func_080093AC @ 0x080093AC (256B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080093AC @ 0x080093AC (256 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(RW), +0x00:u32(R), +0x04:u16(W), +0x08:u32(R), +0x0C:u8(R), +0x0E:u16(RW)
 * CFG Structure:
 *   L_080093AC: if (==) goto L_0800949C
 *   L_080093D0: if (==) goto L_080093DC
 *   L_080093DE: if (==) goto L_080093FC
 *   L_080093FE: if (<= (u)) goto L_08009410
 *   L_08009410: if (!=) goto L_08009418
 *   L_08009422: if (==) goto L_08009460
 *   L_08009438: if (!=) goto L_08009440
 * ========================================================================== */
void func_080093AC(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, r7, lr}\n"
        "	ldr r5, [r0]\n"
        "	mov r0, #4\n"
        "	ldrsh r7, [r5, r0]\n"
        "	cmp r7, #0\n"
        "	beq _L_0800949C\n"
        "	ldrh r4, [r5, #0xe]\n"
        "	ldr r0, [r5, #8]\n"
        "	cmp r0, #0\n"
        "	beq _L_08009422\n"
        "	mov r6, #0\n"
        "	cmp r0, #1\n"
        "	beq _L_080093CE\n"
        "	cmp r0, #2\n"
        "	bne _L_080093D0\n"
        "	mov r6, #0xc0\n"
        "	b _L_080093D0\n"
        "_L_080093CE:\n"
        "	mov r6, #0x80\n"
        "_L_080093D0:\n"
        "	ldr r3, [r5]\n"
        "	cmp r3, #0\n"
        "	beq _L_080093DC\n"
        "	add r2, r3, #0\n"
        "	add r2, #0x50\n"
        "	b _L_080093DE\n"
        "_L_080093DC:\n"
        "	ldr r2, .Lpool_080093F4\n"
        "_L_080093DE:\n"
        "	ldrh r1, [r2]\n"
        "	ldr r0, .Lpool_080093F8\n"
        "	and r0, r1\n"
        "	orr r0, r6\n"
        "	strh r0, [r2]\n"
        "	cmp r3, #0\n"
        "	beq _L_080093FC\n"
        "	add r1, r3, #0\n"
        "	add r1, #0x54\n"
        "	b _L_080093FE\n"
        "	.hword 0x0000\n"
        ".Lpool_080093F4:\n"
        "	.word 0x04000050\n"
        ".Lpool_080093F8:\n"
        "	.word 0x0000FF3F\n"
        "_L_080093FC:\n"
        "	ldr r1, .Lpool_08009408\n"
        "_L_080093FE:\n"
        "	ldr r0, .Lpool_0800940C\n"
        "	cmp r4, r0\n"
        "	bls _L_08009410\n"
        "	mov r0, #0x10\n"
        "	b _L_08009420\n"
        ".Lpool_08009408:\n"
        "	.word 0x04000054\n"
        ".Lpool_0800940C:\n"
        "	.word 0x0000FFFE\n"
        "_L_08009410:\n"
        "	cmp r4, #0\n"
        "	bne _L_08009418\n"
        "	mov r0, #0\n"
        "	b _L_08009420\n"
        "_L_08009418:\n"
        "	lsl r0, r4, #4\n"
        "	sub r0, r0, r4\n"
        "	lsr r0, r0, #0x10\n"
        "	add r0, #1\n"
        "_L_08009420:\n"
        "	strh r0, [r1]\n"
        "_L_08009422:\n"
        "	ldrb r0, [r5, #0xc]\n"
        "	cmp r0, #0\n"
        "	beq _L_08009460\n"
        "	ldr r0, .Lpool_08009434\n"
        "	cmp r4, r0\n"
        "	bls _L_08009438\n"
        "	mov r1, #0xf\n"
        "	b _L_0800944A\n"
        "	.hword 0x0000\n"
        ".Lpool_08009434:\n"
        "	.word 0x0000FFFE\n"
        "_L_08009438:\n"
        "	cmp r4, #0\n"
        "	bne _L_08009440\n"
        "	mov r1, #0\n"
        "	b _L_0800944A\n"
        "_L_08009440:\n"
        "	lsl r0, r4, #3\n"
        "	sub r0, r0, r4\n"
        "	lsl r0, r0, #1\n"
        "	lsr r0, r0, #0x10\n"
        "	add r1, r0, #1\n"
        "_L_0800944A:\n"
        "	lsl r0, r1, #4\n"
        "	orr r1, r0\n"
        "	lsl r0, r1, #8\n"
        "	orr r1, r0\n"
        "	ldr r0, [r5]\n"
        "	cmp r0, #0\n"
        "	beq _L_0800945C\n"
        "	add r0, #0x4c\n"
        "	b _L_0800945E\n"
        "_L_0800945C:\n"
        "	ldr r0, .Lpool_0800946C\n"
        "_L_0800945E:\n"
        "	strh r1, [r0]\n"
        "_L_08009460:\n"
        "	cmp r7, #0\n"
        "	blt _L_08009474\n"
        "	ldr r0, .Lpool_08009470\n"
        "	cmp r4, r0\n"
        "	beq _L_08009478\n"
        "	b _L_0800947E\n"
        ".Lpool_0800946C:\n"
        "	.word 0x0400004C\n"
        ".Lpool_08009470:\n"
        "	.word 0x0000FFFF\n"
        "_L_08009474:\n"
        "	cmp r4, #0\n"
        "	bne _L_0800947E\n"
        "_L_08009478:\n"
        "	mov r0, #0\n"
        "	strh r0, [r5, #4]\n"
        "	b _L_0800949E\n"
        "_L_0800947E:\n"
        "	add r0, r4, r7\n"
        "	cmp r0, #0\n"
        "	bge _L_08009488\n"
        "	mov r0, #0\n"
        "	b _L_08009490\n"
        "_L_08009488:\n"
        "	ldr r1, .Lpool_08009498\n"
        "	cmp r0, r1\n"
        "	ble _L_08009490\n"
        "	add r0, r1, #0\n"
        "_L_08009490:\n"
        "	strh r0, [r5, #0xe]\n"
        "	mov r0, #1\n"
        "	b _L_0800949E\n"
        "	.hword 0x0000\n"
        ".Lpool_08009498:\n"
        "	.word 0x0000FFFF\n"
        "_L_0800949C:\n"
        "	mov r0, #0\n"
        "_L_0800949E:\n"
        "	pop {r4, r5, r6, r7}\n"
        "	pop {r1}\n"
        "	bx r1\n"
        "	.hword 0x6800\n"
        "	.hword 0x2104\n"
        "	.hword 0x5E40\n"
        "	.hword 0x4770\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080094AC @ 0x080094AC (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080093AC();
u32 func_080094AC(int arg0) {
  return func_080093AC(arg0 + 0xc);
}

/* --- func_080094B8 @ 0x080094B8 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08009324();
extern u32 func_080098AC();
void func_080094B8(int arg0,u32 arg1) {
  *(u32 *)(arg0 + 8) = 0x080E5B80;
  func_08009324(arg0 + 0xc,2);
  func_080098AC(arg0,arg1);
}

/* --- func_080094E0 @ 0x080094E0 (24B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080094A4();
u32 func_080094E0(int arg0) {
  short val;
  val = func_080094A4(arg0 + 0xc);
  return ((u32)(-(int)val | (int)val) >> 0x1f);
}

/* --- func_080094F8 @ 0x080094F8 (16B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080094A4();
s16 func_080094F8(int arg0) {
  int slot;
  s16 result;
  slot = arg0 + 0xc;
  result = func_080094A4(slot);
  return result;
}

/* --- func_08009508 @ 0x08009508 (20B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080093A0();
s16 func_08009508(int arg0, short arg1) {
  int local_a;
  s16 val;
  local_a = arg0 + 0xc;
  val = func_080093A0(local_a, (int)arg1);
  return val;
}

/* --- func_0800951C @ 0x0800951C (16B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08009378();
void func_0800951C(int arg0,short arg1) {
  func_08009378(arg0 + 0xc,(int)arg1);
}

/* --- func_0800952C @ 0x0800952C (16B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800934C();
void func_0800952C(int arg0,short arg1) {
  func_0800934C(arg0 + 0xc,(int)arg1);
}

/* --- func_0800953C @ 0x0800953C (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08009344();
u32 func_0800953C(int arg0) {
  return func_08009344(arg0 + 0xc);
}

/* --- func_08009548 @ 0x08009548 (36B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08009300();
u32 func_08009548(u32 *arg0) {
  *arg0 = 0;
  arg0[1] = 0;
  arg0[2] = 0x080E5B80;
  func_08009300(arg0 + 3);
  return arg0;
}

/* --- func_0800956C @ 0x0800956C (48B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern u32 func_08000528();
extern void func_08009984();
extern void func_080004F4();
void func_0800956C(u32 param_1) {
    u16 sp_lk;
    register u32 p1 asm("r6") = param_1;
    register u16 *sp_ptr asm("r5") = &sp_lk;
    register u32 mask asm("r4") = 1;
    u32 r0;
    __asm__("" : "+r"(p1), "+r"(sp_ptr), "+r"(mask));
    r0 = func_08000528(1);
    mask &= r0;
    *sp_ptr = mask;
    func_08009984(p1);
    {
        register u16 *sp_r1 asm("r1") = &sp_lk;
        __asm__("" : "+r"(sp_r1));
        if (*sp_r1 != 0) {
            func_080004F4();
        }
    }
}

/* --- func_0800959C @ 0x0800959C (36B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800956C();
extern u32 func_080098DC();
void func_0800959C(int arg0,u32 arg1) {
  *(u32 *)(arg0 + 8) = 0x080E5B90;
  func_0800956C(arg0);
  func_080098DC(arg0,arg1);
}

/* --- func_080095C0 @ 0x080095C0 (60B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern u32 func_08000528();
extern void func_08009940();
extern void func_080004F4();
void func_080095C0(u32 param_1, u32 param_2) {
    u16 sp_lk;
    register u32 p1 asm("r6") = param_1;
    register u32 p2 asm("r8") = param_2;
    register u16 *sp_ptr asm("r5") = &sp_lk;
    register u32 mask asm("r4") = 1;
    u32 r0;
    __asm__("" : "+r"(p1), "+r"(p2), "+r"(sp_ptr), "+r"(mask));
    r0 = func_08000528(1);
    mask &= r0;
    *sp_ptr = mask;
    func_08009940(p1, p2);
    {
        register u16 *sp_r1 asm("r1") = &sp_lk;
        __asm__("" : "+r"(sp_r1));
        if (*sp_r1 != 0) {
            func_080004F4();
        }
    }
}

/* --- func_080095FC @ 0x080095FC (60B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern u32 func_08000528();
extern void func_08009968();
extern void func_080004F4();
void func_080095FC(u32 param_1, u32 param_2) {
    u16 sp_lk;
    register u32 p1 asm("r6") = param_1;
    register u32 p2 asm("r8") = param_2;
    register u16 *sp_ptr asm("r5") = &sp_lk;
    register u32 mask asm("r4") = 1;
    u32 r0;
    __asm__("" : "+r"(p1), "+r"(p2), "+r"(sp_ptr), "+r"(mask));
    r0 = func_08000528(1);
    mask &= r0;
    *sp_ptr = mask;
    func_08009968(p1, p2);
    {
        register u16 *sp_r1 asm("r1") = &sp_lk;
        __asm__("" : "+r"(sp_r1));
        if (*sp_r1 != 0) {
            func_080004F4();
        }
    }
}

/* --- func_08009638 @ 0x08009638 (60B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern u32 func_08000528();
extern void func_080099B0();
extern void func_080004F4();
void func_08009638(u32 param_1, u32 param_2) {
    u16 sp_lk;
    register u32 p1 asm("r6") = param_1;
    register u32 p2 asm("r8") = param_2;
    register u16 *sp_ptr asm("r5") = &sp_lk;
    register u32 mask asm("r4") = 1;
    u32 r0;
    __asm__("" : "+r"(p1), "+r"(p2), "+r"(sp_ptr), "+r"(mask));
    r0 = func_08000528(1);
    mask &= r0;
    *sp_ptr = mask;
    func_080099B0(p1, p2);
    {
        register u16 *sp_r1 asm("r1") = &sp_lk;
        __asm__("" : "+r"(sp_r1));
        if (*sp_r1 != 0) {
            func_080004F4();
        }
    }
}

/* --- func_08009674 @ 0x08009674 (60B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern u32 func_08000528();
extern void func_080099D4();
extern void func_080004F4();
void func_08009674(u32 param_1, u32 param_2) {
    u16 sp_lk;
    register u32 p1 asm("r6") = param_1;
    register u32 p2 asm("r8") = param_2;
    register u16 *sp_ptr asm("r5") = &sp_lk;
    register u32 mask asm("r4") = 1;
    u32 r0;
    __asm__("" : "+r"(p1), "+r"(p2), "+r"(sp_ptr), "+r"(mask));
    r0 = func_08000528(1);
    mask &= r0;
    *sp_ptr = mask;
    func_080099D4(p1, p2);
    {
        register u16 *sp_r1 asm("r1") = &sp_lk;
        __asm__("" : "+r"(sp_r1));
        if (*sp_r1 != 0) {
            func_080004F4();
        }
    }
}

/* --- func_080096B0 @ 0x080096B0 (64B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080D3750();
int func_080096B0(int param_1) {
    u32 sp0;
    register int p1 asm("r4") = param_1;
    __asm__ volatile("" : : "m"(sp0));
    __asm__ volatile(
        "mov r1, sp\n\t"
        "mov r0, #0\n\t"
        "strh r0, [r1]\n\t"
        "ldr r2, =0x0100002B\n\t"
        "mov r0, sp\n\t"
        "add r1, %0, #0\n\t"
        "bl func_080D3750\n\t"
        "mov r0, #0x80\n\t"
        "str r0, [%0]\n\t"
        "mov r0, #0\n\t"
        "mov r1, #0x80\n\t"
        "lsl r1, r1, #1\n\t"
        "strh r1, [%0, #0x20]\n\t"
        "strh r0, [%0, #0x22]\n\t"
        "strh r0, [%0, #0x24]\n\t"
        "strh r1, [%0, #0x26]\n\t"
        "strh r1, [%0, #0x30]\n\t"
        "strh r0, [%0, #0x32]\n\t"
        "strh r0, [%0, #0x34]\n\t"
        "strh r1, [%0, #0x36]"
        : : "r"(p1) : "r0", "r1", "r2", "r3", "lr", "memory"
    );
    return p1;
}

/* --- func_080096F0 @ 0x080096F0 (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08008E64();
void func_080096F0(int arg0) {
  func_08008E64(arg0,0x4000000,0x54);
  *(u16 *)0x04000054 = *(u16 *)(arg0 + 0x54);
}

/* --- func_08009710 @ 0x08009710 (52B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D374C();
extern u32 func_080D3750();
void func_08009710(int arg0) {
  func_080D374C(arg0,0x4000000,0x10);
  func_080D3750(arg0 + 0x40,0x04000040,0x04000005);
  *(u16 *)0x04000014 = *(u16 *)(arg0 + 0x14);
}

/* --- func_08009744 @ 0x08009744 (56B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
u32 func_08009744(u8 *arg0,u8 arg1,u8 arg2) {
  u8 *mem_ptr;
  u8 *mem_ptr2;
  arg0[1] = arg1 & 0x7f;
  *arg0 = arg1 & 0x7f;
  arg0[3] = arg2 & 0x1f;
  arg0[2] = arg2 & 0x1f;
  mem_ptr = arg0 + 4;
  mem_ptr2 = arg0 + 0x00000404;
  do {
    mem_ptr[1] = 2;
    mem_ptr = mem_ptr + 8;
  } while (mem_ptr != mem_ptr2);
  return arg0;
}

/* --- func_0800977C @ 0x0800977C (20B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08008E64();
void func_0800977C(int arg0) {
  func_08008E64(arg0 + 4,0x7000000,0x400);
}

/* --- func_08009790 @ 0x08009790 (20B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D374C();
void func_08009790(int arg0) {
  func_080D374C(arg0 + 4,0x7000000,0x100);
}

/* --- func_080097A4 @ 0x080097A4 (144B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

void func_080097A4(int param_1) {
    int r7_var;
    register int r6 asm("r6");
    register int r5 asm("r5");
    register int r4 asm("r4");
    __asm__ volatile(
        "mov sl, r0\n\t"
        "mov r3, sl\n\t"
        "add r3, #4\n\t"
        "mov %3, #0xe0\n\t"
        "lsl %3, %3, #0x13\n\t"
        "mov r1, sl\n\t"
        "ldrb r0, [r1]\n\t"
        "lsl r0, r0, #3\n\t"
        "add r0, #4\n\t"
        "add %1, r1, r0\n\t"
        "mov %2, #0\n\t"
        "mov %0, #0x80\n\t"
        "lsl %0, %0, #3\n\t"
        "mov sb, %0\n\t"
        "ldr r0, =0x00000FFF\n\t"
        "mov r8, r0\n"
        "_outer_097A4:\n\t"
        "mov r1, sl\n\t"
        "add r1, #4\n\t"
        "cmp r1, %1\n\t"
        "beq _next_outer_097A4\n\t"
        "mov %0, #0xc0\n\t"
        "lsl %0, %0, #4\n\t"
        "mov ip, %0\n"
        "_inner_097A4:\n\t"
        "ldrh r2, [r1, #4]\n\t"
        "add r0, r2, #0\n\t"
        "mov %0, ip\n\t"
        "and r0, %0\n\t"
        "cmp r0, %2\n\t"
        "bne _next_inner_097A4\n\t"
        "ldr r0, [r1]\n\t"
        "str r0, [%3]\n\t"
        "strh r2, [%3, #4]\n\t"
        "ldrh r0, [r3, #6]\n\t"
        "strh r0, [%3, #6]\n\t"
        "add r3, #8\n\t"
        "add %3, #8\n"
        "_next_inner_097A4:\n\t"
        "add r1, #8\n\t"
        "cmp r1, %1\n\t"
        "bne _inner_097A4\n"
        "_next_outer_097A4:\n\t"
        "add %2, sb\n\t"
        "cmp %2, r8\n\t"
        "bls _outer_097A4\n\t"
        "ldr r0, =0x07000400\n\t"
        "cmp %3, r0\n\t"
        "beq _end_097A4\n\t"
        "mov r2, #0x80\n\t"
        "lsl r2, r2, #2\n\t"
        "add r1, r0, #0\n"
        "_fill_097A4:\n\t"
        "str r2, [%3]\n\t"
        "ldrh r0, [r3, #6]\n\t"
        "strh r0, [%3, #6]\n\t"
        "add r3, #8\n\t"
        "add %3, #8\n\t"
        "cmp %3, r1\n\t"
        "bne _fill_097A4\n"
        "_end_097A4:"
        : "=l"(r7_var), "=l"(r6), "=l"(r5), "=l"(r4) : : "r0", "r1", "r2", "r3", "r8", "r9", "r10", "r12", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_08009834 @ 0x08009834 (48B) [CFG-ASM (algebraic-lifter) | agbcc_O1] --- */
#define NULL 0

void func_08009834(u8 *param_1) {
    register u8 *p1 asm("r2") = param_1;
    register u32 r4 asm("r4") = p1[0];
    register u32 r3 asm("r3") = p1[1];
    if (r4 > r3) {
        register int off1 asm("r0") = (r3 << 3) + 4;
        register u8 *cur asm("r1") = p1 + off1;
        register int off2 asm("r0") = (r4 << 3) + 4;
        register u8 *end asm("r0") = p1 + off2;
        r4 = 2;
        do {
            cur[1] = r4;
            cur += 8;
        } while (cur != end);
    }
    p1[0] = r3;
    p1[2] = p1[3];
}

/* --- func_08009864 @ 0x08009864 (20B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800977C();
extern u32 func_08009834();
void func_08009864(u32 arg0) {
  func_0800977C();
  func_08009834(arg0);
}

/* --- func_08009878 @ 0x08009878 (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08009834();
extern u32 func_080D374C();
void func_08009878(int arg0) {
  func_080D374C(arg0 + 4,0x7000000,0x100);
  func_08009834(arg0);
}

/* --- func_08009898 @ 0x08009898 (20B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080097A4();
extern u32 func_08009834();
void func_08009898(u32 arg0) {
  func_080097A4();
  func_08009834(arg0);
}

/* --- func_080098AC @ 0x080098AC (44B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
void func_080098AC(u32 *arg0,u32 arg1) {
  u32 *mem_ptr;
  arg0[2] = 0x080E5BE8;
  mem_ptr = (u32 *)*arg0;
  if (mem_ptr != (u32 *)0x0) {
    *mem_ptr = arg0[1];
    *(u32 **)arg0[1] = mem_ptr;
  }
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080098DC @ 0x080098DC (44B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080098AC();
extern u32 func_08009984();
void func_080098DC(int arg0,u32 arg1) {
  *(u32 *)(arg0 + 8) = 0x080E5BB4;
  func_08009984(arg0);
  func_080098AC(arg0 + 0x10,2);
  func_080098AC(arg0,arg1);
}

/* --- func_08009908 @ 0x08009908 (56B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08009908 @ 0x08009908 (56 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r1, _call_via_r2)
 * Fields : +0x04:u32(R), +0x08:u32(R), +0x0C:u32(R), +0x14:u32(R)
 * Callees: func_080D3910, func_080D3914
 * CFG Structure:
 *   L_08009912: if (==) goto L_08009938
 *   L_08009938: return
 * ========================================================================== */
extern void func_080D3910(void);
extern void func_080D3914(void);
int func_08009908(void) {
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	ldr r5, [r6, #0xc]\n"
        "	add r7, r6, #0\n"
        "	add r7, #0x10\n"
        "_L_08009912:\n"
        "	cmp r5, r7\n"
        "	beq _L_08009938\n"
        "	add r4, r5, #0\n"
        "	ldr r5, [r5, #4]\n"
        "	ldr r0, [r4, #8]\n"
        "	ldr r1, [r0, #8]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08009912\n"
        "	ldr r0, [r6, #8]\n"
        "	ldr r2, [r0, #0x14]\n"
        "	add r0, r6, #0\n"
        "	add r1, r4, #0\n"
        "	bl func_080D3914\n"
        "	b _L_08009912\n"
        "_L_08009938:\n"
        "	mov r0, #1\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_08009940 @ 0x08009940 (40B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08009940(int arg0, u32 *arg1) {
    u32 *p = (u32 *)*arg1;
    if (p != 0) {
        *p = arg1[1];
        *(u32 **)arg1[1] = p;
    }
    **(u32 ***)(arg0 + 0x10) = arg1;
    *arg1 = *(u32 *)(arg0 + 0x10);
    arg1[1] = arg0 + 0x10;
    *(u32 **)(arg0 + 0x10) = arg1 + 1;
}

/* --- func_08009968 @ 0x08009968 (28B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
void func_08009968(u32 arg0,u32 *arg1) {
  u32 *mem_ptr;
  mem_ptr = (u32 *)*arg1;
  if (mem_ptr != (u32 *)0x0) {
    *mem_ptr = arg1[1];
    *(u32 **)arg1[1] = mem_ptr;
    *arg1 = 0;
    arg1[1] = 0;
  }
}

/* --- func_08009984 @ 0x08009984 (44B) [PURE-C | agbcc_O2] --- */
#define NULL 0

struct Node { struct Node *prev; struct Node *next; };
struct List { u8 pad[0xc]; struct Node *head; struct Node *tail; };
void func_08009984(int arg0) {
    u32 *p = *(u32 **)(arg0 + 0xc);
    u32 *end = (u32 *)(arg0 + 0x10);
    while (p != end) {
        u32 *cur = p;
        p = (u32 *)p[1];
        cur[0] = 0;
        cur[1] = 0;
    }
    *(u32 *)(arg0 + 0xc) = arg0 + 0x10;
    *(u32 *)(arg0 + 0x10) = arg0 + 0xc;
}

/* --- func_080099B0 @ 0x080099B0 (36B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080099B0 @ 0x080099B0 (36 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(W), +0x0C:u32(RW), +0x10:u32(RW)
 * CFG Structure:
 *   L_080099B0: return
 * ========================================================================== */
void func_080099B0(void) {
    __asm__ volatile(
        "	add r3, r1, #0\n"
        "	ldr r2, [r0, #0x10]\n"
        "	ldr r1, [r3, #0xc]\n"
        "	str r1, [r2]\n"
        "	ldr r1, [r3, #0xc]\n"
        "	str r2, [r1]\n"
        "	ldr r2, [r3, #0x10]\n"
        "	add r1, r0, #0\n"
        "	add r1, #0x10\n"
        "	str r1, [r2]\n"
        "	str r2, [r0, #0x10]\n"
        "	add r0, r3, #0\n"
        "	add r0, #0x10\n"
        "	str r0, [r3, #0xc]\n"
        "	sub r0, #4\n"
        "	str r0, [r3, #0x10]\n"
        "	bx lr\n"
        "	.hword 0x0000\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080099D4 @ 0x080099D4 (24B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_080099D4(u32 **a, u32 **b) { u32 *x = a[3], *y = b[3], *p, *q, u, v; a[3] = y; b[3] = x; p = a[4]; q = b[4]; u = *p; v = *q; *p = v; *q = u; }

/* --- func_080099EC @ 0x080099EC (24B) [PURE-C | agbcc_O2] --- */
#define NULL 0

int func_080099EC(u8 *a) { return *(u8 **)(a + 0xc) == a + 0x10; }

/* --- func_08009A48 @ 0x08009A48 (148B) [PURE-C | agbcp_O2] --- */
/* func_08009A48 @ 0x08009A48 mode=THUMB size=0x94 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_08009A48 @ 0x08009A48  mode=THUMB  size=0xB8  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_08009A48(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar1 = func_0x080d3b78(param_2);
  if (0xc < uVar1) {
    uVar1 = 0xc;
  }
  func_080D3994(param_1,param_2,uVar1);
  *(undefined1 *)(param_1 + uVar1) = 0;
  *(ushort *)(param_1 + 0x10) = (ushort)_DAT_08009acc & *(ushort *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xeb | 8;
  func_0800B0DC(param_1 + 0x40);
  func_0x0800be70(param_1 + 0x1e0);
  func_0800C450(param_1 + 0x3fc);
  func_0800CDBC(param_1 + _DAT_08009ad0);
  iVar2 = param_1 + _DAT_08009ad4;
  iVar3 = _DAT_08009ad8;
  do {
    func_08009F8C(iVar2);
    iVar2 = iVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  return CONCAT44(in_lr,param_1);
}

/* --- func_08009B00 @ 0x08009B00 (24B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
u32 func_08009B00(int arg0) {
    return ((s32)(*(u8 *)(arg0 + 0x11) << 29) < 0) ? (arg0 + 0x14) : 0;
}

/* --- func_08009B20 @ 0x08009B20 (64B) [PURE-C | agbcp_O2] --- */
/* func_08009B20 @ 0x08009B20 mode=THUMB size=0x40 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_08009B20 @ 0x08009B20  mode=THUMB  size=0x48  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_08009B20(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = 0;
  iVar4 = 0;
  do {
    uVar3 = 0;
    puVar2 = (uint *)(iVar4 + param_1 + _DAT_08009b44);
    do {
      if (((*puVar2 & 0xfff) >> 8 != 0) && ((*puVar2 & 0xff) >> 2 == 0x1a)) {
        uVar1 = 1;
        goto LAB_08009b5a;
      }
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x2b);
    iVar4 = iVar4 + 0xac;
    uVar5 = uVar5 + 1;
    if (0x18 < uVar5) {
      uVar1 = 0;
LAB_08009b5a:
      return CONCAT44(in_lr,uVar1);
    }
  } while( true );
}

/* --- func_08009B68 @ 0x08009B68 (68B) [PURE-C | agbcp_O2] --- */
/* func_08009B68 @ 0x08009B68 mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_08009B68 @ 0x08009B68  mode=THUMB  size=0x7C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_08009B68(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_14;
  uint uStack_10;
  
  uStack_14 = _DAT_08009ba0;
  uStack_10 = (*(ushort *)(param_1 + 0x10) & 0x3ff) + param_2;
  puVar1 = &uStack_14;
  if (uStack_10 < _DAT_08009ba0) {
    puVar1 = &uStack_10;
  }
  *(ushort *)(param_1 + 0x10) =
       (ushort)_DAT_08009ba8 & *(ushort *)(param_1 + 0x10) | (ushort)*puVar1 & (ushort)_DAT_08009ba4
  ;
  return in_lr;
}

/* --- func_08009BE4 @ 0x08009BE4 (88B) [PURE-C | agbcp_O2] --- */
/* func_08009BE4 @ 0x08009BE4 mode=THUMB size=0x58 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_08009BE4 @ 0x08009BE4  mode=THUMB  size=0x58  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_08009BE4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x11) * 0x20000000)) {
    if (param_1 + 0x14 != 0) {
      func_080D684C(param_1 + 0x14);
      *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x1c);
      *(byte *)(param_1 + 0x31) =
           *(byte *)(param_1 + 0x31) & 0xfc | *(byte *)(param_2 + 0x1d) & 1 |
           *(byte *)(param_2 + 0x1d) & 2;
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x20);
      uVar1 = *(undefined4 *)(param_2 + 0x28);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x24);
      *(undefined4 *)(param_1 + 0x3c) = uVar1;
    }
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 4;
  }
  return in_lr;
}

/* --- func_08009C3C @ 0x08009C3C (24B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
u32 func_08009C3C(int arg0) {
    return ((s32)(*(u8 *)(arg0 + 0x11) << 29) < 0) ? (arg0 + 0x14) : 0;
}

/* --- func_08009C6C @ 0x08009C6C (788B) [PURE-C | agbcp_O2] --- */
/* func_08009C6C @ 0x08009C6C mode=THUMB size=0x314 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_08009C6C @ 0x08009C6C  mode=THUMB  size=0x320  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_08009C6C(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 in_lr;
  int iStack_48;
  int iStack_44;
  int aiStack_40 [2];
  uint uStack_38;
  int *piStack_34;
  uint uStack_30;
  int *piStack_2c;
  uint uStack_28;
  int *piStack_24;
  
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 8;
  iVar4 = func_08009C3C(param_1);
  if (iVar4 != 0) {
    func_0809BC48();
  }
  func_0800C390(param_1 + 0x1e0,*param_3 & 3);
  func_0800C9EC(param_1 + 0x3fc);
  func_0800D5B0(param_1 + _DAT_08009d2c);
  uVar5 = param_1 + _DAT_08009d34;
  uVar9 = _DAT_08009d30 + param_1;
  for (uVar10 = uVar9; uVar10 < uVar5; uVar10 = uVar10 + 4) {
    func_0800A7B0(uVar10,param_2,param_3);
  }
  if (param_2 - 3U < 2) {
    uVar10 = func_0x080d11e4();
    uStack_38 = 0x23;
    if ((uVar10 & 1) != 0) {
      uStack_38 = 0x1f;
    }
    bVar3 = uStack_38 < 0x1b;
    uStack_30 = 0;
    piStack_24 = aiStack_40;
    piStack_34 = &iStack_48;
    do {
      if (bVar3) {
        uVar6 = func_0x080d11e4();
        iVar4 = func_0x080d0f4e(uVar6,0x2b);
        uVar6 = func_0x080d11e4();
        uVar8 = 0x19;
      }
      else {
        uVar6 = func_0x080d11e4();
        iVar4 = func_0x080d0f4e(uVar6,0x2a);
        uVar6 = func_0x080d11e4();
        uVar8 = 0x18;
      }
      iVar7 = func_0x080d0f4e(uVar6,uVar8);
      cVar2 = func_0800A78C((iVar4 + iVar7 * 0x2b) * 4 + uVar9);
      if (cVar2 == '\0') {
        if (bVar3) {
LAB_08009da6:
          piVar1 = piStack_34;
          *piStack_34 = iVar4;
          piVar1[1] = iVar7;
          bVar3 = true;
          goto LAB_08009dbc;
        }
        cVar2 = func_0800A78C((iVar4 + 1 + iVar7 * 0x2b) * 4 + uVar9);
        if (cVar2 == '\0') {
          iVar11 = (iVar7 + 1) * 0x2b;
          cVar2 = func_0800A78C((iVar4 + iVar11) * 4 + uVar9);
          if ((cVar2 == '\0') &&
             (cVar2 = func_0800A78C((iVar4 + 1 + iVar11) * 4 + uVar9), cVar2 == '\0'))
          goto LAB_08009da6;
        }
      }
      uStack_30 = uStack_30 + 1;
    } while (uStack_30 < 100);
    bVar3 = false;
LAB_08009dbc:
    uVar10 = uStack_38;
    if ((bVar3) &&
       (func_0800A134((iStack_48 + iStack_44 * 0x2b) * 4 + uVar9,uStack_38,8), 0x1a < (int)uVar10))
    {
      func_0800A134((iStack_48 + 1 + iStack_44 * 0x2b) * 4 + uVar9,uStack_38 + 1,8);
      func_0800A134((iStack_48 + (iStack_44 + 1) * 0x2b) * 4 + uVar9,uStack_38 + 2,8);
      func_0800A134((iStack_48 + 1 + (iStack_44 + 1) * 0x2b) * 4 + uVar9,uStack_38 + 3,8);
    }
    uVar10 = func_0x080d11e4();
    uStack_38 = 0x23;
    if ((uVar10 & 1) != 0) {
      uStack_38 = 0x1f;
    }
    piStack_2c = piStack_24;
    bVar3 = uStack_38 < 0x1b;
    uStack_28 = 0;
    do {
      if (bVar3) {
        uVar6 = func_0x080d11e4();
        iVar4 = func_0x080d0f4e(uVar6,0x2b);
        uVar6 = func_0x080d11e4();
        uVar8 = 0x19;
      }
      else {
        uVar6 = func_0x080d11e4();
        iVar4 = func_0x080d0f4e(uVar6,0x2a);
        uVar6 = func_0x080d11e4();
        uVar8 = 0x18;
      }
      iVar7 = func_0x080d0f4e(uVar6,uVar8);
      cVar2 = func_0800A78C((iVar4 + iVar7 * 0x2b) * 4 + uVar9);
      if (cVar2 == '\0') {
        if (bVar3) {
LAB_08009ede:
          piVar1 = piStack_2c;
          *piStack_2c = iVar4;
          piVar1[1] = iVar7;
          bVar3 = true;
          goto LAB_08009ef4;
        }
        cVar2 = func_0800A78C((iVar4 + 1 + iVar7 * 0x2b) * 4 + uVar9);
        if (cVar2 == '\0') {
          iVar11 = (iVar7 + 1) * 0x2b;
          cVar2 = func_0800A78C((iVar4 + iVar11) * 4 + uVar9);
          if ((cVar2 == '\0') &&
             (cVar2 = func_0800A78C((iVar4 + 1 + iVar11) * 4 + uVar9), cVar2 == '\0'))
          goto LAB_08009ede;
        }
      }
      uStack_28 = uStack_28 + 1;
    } while (uStack_28 < 100);
    bVar3 = false;
LAB_08009ef4:
    uVar10 = uStack_38;
    if ((bVar3) &&
       (func_0800A134((aiStack_40[0] + piStack_24[1] * 0x2b) * 4 + uVar9,uStack_38,8),
       0x1a < (int)uVar10)) {
      func_0800A134((aiStack_40[0] + 1 + piStack_24[1] * 0x2b) * 4 + uVar9,uStack_38 + 1,8);
      func_0800A134((aiStack_40[0] + (piStack_24[1] + 1) * 0x2b) * 4 + uVar9,uStack_38 + 2,8);
      func_0800A134((aiStack_40[0] + 1 + (piStack_24[1] + 1) * 0x2b) * 4 + uVar9,uStack_38 + 3,8);
    }
  }
  return in_lr;
}

/* --- func_08009F8C @ 0x08009F8C (60B) [PURE-C | agbcp_O2] --- */
/* func_08009F8C @ 0x08009F8C mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_08009F8C @ 0x08009F8C  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_08009F8C(uint *param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(undefined1 *)param_1 = 0;
  *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0;
  *param_1 = *param_1 & _DAT_08009fc4;
  bVar1 = func_0800A014(param_1);
  *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) & 0xf1 | (bVar1 & 7) << 1;
  return CONCAT44(in_lr,param_1);
}

/* --- func_08009FC8 @ 0x08009FC8 (76B) [PURE-C | agbcp_O2] --- */
/* func_08009FC8 @ 0x08009FC8 mode=THUMB size=0x4C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_08009FC8 @ 0x08009FC8  mode=THUMB  size=0x4C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_08009FC8(uint *param_1,byte param_2,char param_3,byte param_4)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(byte *)param_1 = param_3 << 2 | param_2 & 3;
  *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0 | param_4 & 0xf;
  *param_1 = *param_1 & _DAT_0800a010;
  bVar1 = func_0800A014(param_1);
  *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) & 0xf1 | (bVar1 & 7) << 1;
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800A014 @ 0x0800A014 (104B) [PURE-C | agbcp_O2] --- */
/* func_0800A014 @ 0x0800A014 mode=THUMB size=0x68 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800A014 @ 0x0800A014  mode=THUMB  size=0x68  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800A014(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = 1;
  if (((*param_1 & 0xfff) >> 8 != 0) && (uVar1 = ((*param_1 & 0xff) >> 2) - 0x1a, uVar1 < 0xd)) {
    switch(*(uint *)(PTR_case_0800A03C_0800a038 + uVar1 * 4) & 0xfffffffe) {
    case 0x800a03c:
    case 0x800a070:
      uVar2 = 6;
      break;
    case 0x800a074:
      uVar2 = 3;
    }
  }
  return CONCAT44(in_lr,uVar2);
}

/* --- func_0800A07C @ 0x0800A07C (40B) [PURE-C | agbcp_O2] --- */
/* func_0800A07C @ 0x0800A07C mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800A07C @ 0x0800A07C  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800A07C(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = (*param_1 & 0xfff) >> 8;
  if (((uVar1 < 2) || (8 < uVar1)) || ((*param_1 & 0xff) >> 2 == 0x14)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

/* --- func_0800A0A4 @ 0x0800A0A4 (124B) [PURE-C | agbcp_O2] --- */
/* func_0800A0A4 @ 0x0800A0A4 mode=THUMB size=0x7C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800A0A4 @ 0x0800A0A4  mode=THUMB  size=0x90  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800A0A4(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = (*param_1 & 0xfff) >> 8;
  if (((uVar1 < 8) || (uVar1 != 8)) || (uVar1 = ((*param_1 & 0xff) >> 2) - 0x1b, 0xb < uVar1)) {
    uVar2 = 0;
  }
  else {
    switch(*(uint *)(PTR_case_0800A0D0_0800a0cc + uVar1 * 4) & 0xfffffffe) {
    case 0x800a0d0:
    case 0x800a100:
      uVar2 = 0x3cc;
      break;
    case 0x800a106:
      uVar2 = _DAT_0800a10c;
      break;
    case 0x800a110:
      uVar2 = _DAT_0800a114;
    }
  }
  return CONCAT44(in_lr,uVar2);
}

/* --- func_0800A134 @ 0x0800A134 (92B) [PURE-C | agbcp_O2] --- */
/* func_0800A134 @ 0x0800A134 mode=THUMB size=0x5C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800A134 @ 0x0800A134  mode=THUMB  size=0x5C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800A134(uint *param_1,char param_2,int param_3)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(byte *)param_1 = (byte)*param_1 & 3 | param_2 << 2;
  *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0 | (byte)param_3 & 0xf;
  bVar1 = func_0800A014(param_1);
  *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) & 0xf1 | (bVar1 & 7) << 1;
  if ((param_3 == 8) && ((*param_1 & 3) != 3)) {
    *(byte *)param_1 = (byte)*param_1 & 0xfc;
  }
  return in_lr;
}

/* --- func_0800A190 @ 0x0800A190 (168B) [PURE-C | agbcp_O2] --- */
/* func_0800A190 @ 0x0800A190 mode=THUMB size=0xA8 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800A190 @ 0x0800A190  mode=THUMB  size=0xA8  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800A190(uint *param_1,char param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  uVar2 = *param_1;
  if ((uVar2 & 3) == 0) {
    if ((uVar2 & 0xfff) >> 8 == 0) {
      bVar1 = 2;
      if (param_2 != '\0') {
        bVar1 = 1;
      }
      *(byte *)param_1 = (byte)*param_1 & 0xfc | bVar1;
      *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0;
      iVar3 = 1;
    }
    if (iVar3 == 1) {
      uVar2 = func_0x080d11e4();
      uVar2 = uVar2 & 0xff;
      if (uVar2 < 10) {
        iVar3 = 2;
      }
      else if (uVar2 - 10 < 3) {
        iVar3 = 4;
      }
      else if (uVar2 - 0xd < 5) {
        iVar3 = 3;
      }
    }
  }
  else if ((uVar2 & 3) - 1 < 2) {
    uVar2 = (uVar2 & 0xfff) >> 8;
    if (uVar2 == 7) {
      bVar1 = 2;
      if (param_2 != '\0') {
        bVar1 = 1;
      }
      *(byte *)param_1 = (byte)*param_1 & 0xfc | bVar1;
    }
    else if ((7 < uVar2) || (uVar2 != 1)) goto LAB_0800a230;
    *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0;
    iVar3 = 1;
  }
LAB_0800a230:
  return CONCAT44(in_lr,iVar3);
}

/* --- func_0800A238 @ 0x0800A238 (260B) [PURE-C | agbcp_O2] --- */
/* func_0800A238 @ 0x0800A238 mode=THUMB size=0x104 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800A238 @ 0x0800A238  mode=THUMB  size=0x104  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800A238(uint *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = *param_1;
  if ((uVar2 & 0xfff) >> 8 == 0) {
    if ((uVar2 & 3) - 1 < 2) {
      *(byte *)param_1 = (byte)*param_1 & 0xfc;
    }
    uVar1 = 1;
    goto LAB_0800a336;
  }
  uVar2 = ((uVar2 & 0xff) >> 2) - 0x16;
  if (0x10 < uVar2) goto case_0800A2BC;
  switch(*(uint *)(PTR_case_0800A278_0800a274 + uVar2 * 4) & 0xfffffffe) {
  case 0x800a278:
  case 0x800a2bc:
case_0800A2BC:
    uVar1 = 0;
    goto LAB_0800a336;
  case 0x800a2c0:
    iVar3 = 0;
    uVar1 = 3;
    break;
  case 0x800a2c6:
    iVar3 = 0;
    uVar1 = 5;
    break;
  case 0x800a2cc:
    iVar3 = 0;
    uVar1 = 6;
    break;
  case 0x800a2d2:
    iVar3 = 3;
    uVar1 = 4;
    break;
  case 0x800a2d8:
    iVar3 = 1;
    uVar1 = 7;
    break;
  case 0x800a2de:
    iVar3 = 2;
    uVar1 = 8;
  }
  uVar2 = param_2 - iVar3;
  if (0 < (int)uVar2) {
    if ((*param_1 & 0xfffff) >> 0x11 <= uVar2) {
      *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) & 0xf1;
      *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0;
      if ((*param_1 & 3) != 3) {
        *(byte *)param_1 = (byte)*param_1 & 0xfc;
      }
      goto LAB_0800a336;
    }
    *(byte *)((int)param_1 + 2) =
         *(byte *)((int)param_1 + 2) & 0xf1 |
         (byte)((((*param_1 & 0xfffff) >> 0x11) - uVar2 & 7) << 1);
  }
  uVar1 = 2;
LAB_0800a336:
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800A33C @ 0x0800A33C (140B) [PURE-C | agbcp_O2] --- */
/* func_0800A33C @ 0x0800A33C mode=THUMB size=0x8C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800A33C @ 0x0800A33C  mode=THUMB  size=0xFC  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800A33C(uint *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*param_1 & 0xfff) >> 8 == 0) {
LAB_0800a360:
    uVar2 = 0;
  }
  else {
    uVar1 = (*param_1 & 0xff) >> 2;
    if (uVar1 == 0x17) {
      iVar3 = 0;
      uVar2 = 1;
    }
    else {
      if (((uVar1 < 0x17) || (0x1e < uVar1)) || (uVar1 < 0x1b)) goto LAB_0800a360;
      iVar3 = 1;
      uVar2 = 2;
    }
    uVar1 = param_2 - iVar3;
    if (0 < (int)uVar1) {
      if ((*param_1 & 0xfffff) >> 0x11 <= uVar1) {
        *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) & 0xf1;
        *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0;
        if ((*param_1 & 3) != 3) {
          *(byte *)param_1 = (byte)*param_1 & 0xfc;
        }
        goto LAB_0800a3c2;
      }
      *(byte *)((int)param_1 + 2) =
           *(byte *)((int)param_1 + 2) & 0xf1 |
           (byte)((((*param_1 & 0xfffff) >> 0x11) - uVar1 & 7) << 1);
    }
    uVar2 = 3;
  }
LAB_0800a3c2:
  return CONCAT44(in_lr,uVar2);
}

/* --- func_0800A438 @ 0x0800A438 (40B) [PURE-C | agbcp_O2] --- */
/* func_0800A438 @ 0x0800A438 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800A438 @ 0x0800A438  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800A438(uint *param_1)

{
  undefined4 in_lr;
  bool bVar1;
  
  bVar1 = (*param_1 & 3) == 1;
  if (bVar1) {
    *(byte *)param_1 = (byte)*param_1 & 0xfc | 2;
  }
  return CONCAT44(in_lr,(uint)bVar1);
}

/* --- func_0800A460 @ 0x0800A460 (68B) [PURE-C | agbcp_O2] --- */
/* func_0800A460 @ 0x0800A460 mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800A460 @ 0x0800A460  mode=THUMB  size=0x44  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800A460(uint *param_1,char param_2)

{
  undefined4 in_lr;
  
  if (((*param_1 & 3) - 1 < 2) && ((*param_1 & 0xfff) >> 8 == 0)) {
    *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0 | 1;
    *(byte *)param_1 = (byte)*param_1 & 3 | param_2 << 2;
    *param_1 = *param_1 & _DAT_0800a4a0;
  }
  return in_lr;
}

/* --- func_0800A4A4 @ 0x0800A4A4 (548B) [PURE-C | agbcp_O2] --- */
/* func_0800A4A4 @ 0x0800A4A4 mode=THUMB size=0x224 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800A4A4 @ 0x0800A4A4  mode=THUMB  size=0x224  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800A4A4(undefined **param_1,uint *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  uint3 uStack_14;
  undefined1 auStack_10 [4];
  
  iVar4 = _DAT_0800a680;
  uVar3 = *param_2;
  uVar2 = (uVar3 & 0xfff) >> 8;
  if (uVar2 == 5) {
    uVar2 = ((uVar3 & 0xff) >> 2) - 2;
    if (uVar2 < 0x13) {
      switch(*(uint *)(PTR_case_0800A4D8_0800a4d4 + uVar2 * 4) & 0xfffffffe) {
      case 0x800a4d8:
        param_1 = &PTR_case_0800A918_0800a894;
      case 0x800a524:
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0 | 2;
        uVar2 = *param_2 & _DAT_0800a540 | 0x4000;
        break;
      case 0x800a544:
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0 | 3;
        uVar2 = *param_2 & _DAT_0800a560 | 0x6000;
        break;
      case 0x800a564:
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0 | 4;
        uVar2 = *param_2 & _DAT_0800a580 | 0x6000;
        break;
      case 0x800a584:
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0 | 4;
        uVar2 = *param_2 & _DAT_0800a5a0 | 0xb000;
        break;
      case 0x800a5a4:
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0 | 4;
        uVar2 = *param_2 & _DAT_0800a5c0 | 0xf000;
        break;
      case 0x800a5c4:
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0 | 3;
        uVar2 = *param_2 & _DAT_0800a5e0 | 0x6000;
        break;
      case 0x800a5e4:
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0 | 2;
        uVar2 = *param_2 & _DAT_0800a600 | 0x3000;
        break;
      case 0x800a604:
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0 | 4;
        uVar2 = *param_2 & _DAT_0800a620 | 0x5000;
        break;
      case 0x800a624:
        goto case_0800A624;
      case 0x800a678:
        goto case_0800A678;
      }
    }
    else {
case_0800A624:
      *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0;
      uVar2 = *param_2 & _DAT_0800a63c;
    }
    *param_2 = uVar2;
    iVar4 = _DAT_0800a640;
LAB_0800a662:
    uVar2 = (*param_2 & 0xff) >> 2;
    sVar1 = *(short *)(uVar2 * 0xc + iVar4 + 10);
    if (sVar1 != 0xff) {
      if (uVar2 < 0xf) {
        func_0x0800dca8(&uStack_14);
        func_0800F004(param_1,(uint)uStack_14);
      }
      else {
        func_0x0800df50(auStack_10,sVar1);
        func_0800F040(param_1,auStack_10[0]);
      }
      goto LAB_0800a6be;
    }
  }
  else if (uVar2 == 8) {
    if (*(short *)(((uVar3 & 0xff) >> 2) * 0xc + _DAT_0800a680 + 10) != 0xff) {
      *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) & 0xf0;
    }
    goto LAB_0800a662;
  }
case_0800A678:
  func_0x0800efec(param_1);
LAB_0800a6be:
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800A6C8 @ 0x0800A6C8 (44B) [PURE-C | agbcp_O2] --- */
/* func_0800A6C8 @ 0x0800A6C8 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800A6C8 @ 0x0800A6C8  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800A6C8(uint *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((((*param_1 & 0xfff) >> 8 == 0) && (iVar1 = func_0x0800df54(param_2), 0x30 < iVar1)) &&
     ((iVar1 < 0x33 || ((iVar1 < 0x5b && (0x58 < iVar1)))))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

/* --- func_0800A6F4 @ 0x0800A6F4 (152B) [PURE-C | agbcp_O2] --- */
/* func_0800A6F4 @ 0x0800A6F4 mode=THUMB size=0x98 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800A6F4 @ 0x0800A6F4  mode=THUMB  size=0x98  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800A6F4(uint *param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  undefined4 in_lr;
  
  cVar1 = func_0800A6C8();
  if (cVar1 != '\0') {
    iVar3 = func_0x0800df54(param_2);
    if (iVar3 == 0x32) {
      bVar4 = (byte)*param_1 & 3;
      bVar2 = 0x5c;
    }
    else if (iVar3 < 0x33) {
      if (iVar3 != 0x31) {
        return in_lr;
      }
      bVar4 = (byte)*param_1 & 3;
      bVar2 = 0x58;
    }
    else if (iVar3 == 0x59) {
      bVar4 = (byte)*param_1 & 3;
      bVar2 = 0x60;
    }
    else {
      if (iVar3 != 0x5a) {
        return in_lr;
      }
      bVar4 = (byte)*param_1 & 3;
      bVar2 = 0x68;
    }
    *(byte *)param_1 = bVar4 | bVar2;
    *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0 | 8;
    if ((*param_1 & 3) != 3) {
      *(byte *)param_1 = (byte)*param_1 & 0xfc;
    }
    bVar2 = func_0800A014(param_1);
    *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) & 0xf1 | (bVar2 & 7) << 1;
  }
  return in_lr;
}

/* --- func_0800A78C @ 0x0800A78C (36B) [PURE-C | agbcp_O2] --- */
/* func_0800A78C @ 0x0800A78C mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800A78C @ 0x0800A78C  mode=THUMB  size=0x24  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800A78C(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((((*param_1 & 0xfff) >> 8 == 0) || (uVar1 = (*param_1 & 0xff) >> 2, 0x26 < uVar1)) ||
     (uVar1 < 0x1b)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

/* --- func_0800A7B0 @ 0x0800A7B0 (856B) [PURE-C | agbcp_O2] --- */
/* func_0800A7B0 @ 0x0800A7B0 mode=THUMB size=0x358 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800A7B0 @ 0x0800A7B0  mode=THUMB  size=0x358  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800A7B0(uint *param_1,int param_2,byte *param_3)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  if (((*param_1 & 0xfff) >> 8 == 1) && (uVar1 = (*param_1 & 0xff) >> 2, uVar1 < 0x14)) {
    switch(*(uint *)(PTR_case_0800A7DC_0800a7d8 + uVar1 * 4) & 0xfffffffe) {
    case 0x800a7dc:
      break;
    case 0x800a836:
      if ((*param_3 & 3) == 1) goto LAB_0800a856;
      goto LAB_0800a84c;
    case 0x800a842:
      if ((*param_3 & 3) != 2) goto LAB_0800a84c;
      goto LAB_0800a856;
    }
    if ((*param_3 & 3) != 0) {
LAB_0800a84c:
      *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0;
    }
  }
LAB_0800a856:
  if (((*param_1 & 0xfff) >> 8 == 0) || (uVar1 = (*param_1 & 0xff) >> 2, 0x26 < uVar1)) {
case_0800A9B2:
    if ((*param_1 & 3) == 2) {
      *(byte *)param_1 = (byte)*param_1 & 0xfc | 1;
    }
  }
  else {
    switch(*(uint *)(PTR_case_0800A87C_0800a878 + uVar1 * 4) & 0xfffffffe) {
    case 0x800a87c:
      break;
    case 0x800a94c:
      if (((*param_3 & 3) == 3) || (uVar1 = *param_1, (uVar1 & 0xfff) >> 8 == 5))
      goto case_0800A9B2;
      uVar5 = _DAT_0800a9f0 & uVar1;
      uVar1 = uVar5 | (((uVar1 & 0x1ffff) >> 0xc) + 1 & 0x1f) << 0xc;
      *param_1 = uVar1;
      uVar5 = (uVar5 & 0xfff) >> 8;
      if (uVar5 == 7) {
        uVar5 = 1;
      }
      goto LAB_0800a97e;
    case 0x800a9b2:
      goto case_0800A9B2;
    }
    uVar5 = *param_1;
    uVar1 = (uVar5 & 0xfff) >> 8;
    if ((uVar1 == 0) || (4 < uVar1)) goto case_0800A9B2;
    if ((uVar5 & 3) == 2) {
      uVar4 = _DAT_0800a948 & uVar5;
      uVar1 = uVar4 | (((uVar5 & 0x1ffff) >> 0xc) + 1 & 0x1f) << 0xc;
      *param_1 = uVar1;
      uVar5 = (uVar4 & 0xfff) >> 8;
LAB_0800a97e:
      iVar3 = ((uVar1 & 0xff) >> 2) * 0x54;
      if (uVar5 != *(uint *)(((uVar1 & 0x1ffff) >> 0xc) * 4 + iVar3 + _DAT_0800a9f4)) {
        *(byte *)((int)param_1 + 1) =
             *(byte *)((int)param_1 + 1) & 0xf0 |
             (byte)*(undefined4 *)(((uVar1 & 0x1ffff) >> 0xc) * 4 + iVar3 + _DAT_0800a9f4) & 0xf;
      }
      goto case_0800A9B2;
    }
  }
  pbVar2 = _DAT_0800aa00;
  if ((param_2 != 3) &&
     (((param_2 < 4 || (pbVar2 = _DAT_0800aa30, param_2 != 4)) &&
      (pbVar2 = (byte *)((*param_3 & 3) * 0x10 + _DAT_0800a9f8), param_2 == 0)))) {
    pbVar2 = pbVar2 + 8;
  }
  uVar5 = *param_1;
  uVar1 = (uVar5 & 0xfff) >> 8;
  if (uVar1 == 0) {
    uVar5 = uVar5 & 3;
    if ((uVar5 == 0) || (uVar5 == 3)) {
      iVar3 = func_0x080d11e4();
      uVar1 = iVar3 >> 3 & 0xff;
      uVar5 = (uint)pbVar2[4];
      if (uVar5 <= uVar1) {
        if (uVar1 < pbVar2[5] + uVar5) {
          uVar6 = 0x16;
        }
        else {
          if ((uint)pbVar2[6] + (uint)pbVar2[5] + uVar5 <= uVar1) goto LAB_0800aad2;
          uVar6 = 0x17;
        }
        goto LAB_0800aab6;
      }
    }
    else {
      if (uVar5 != 1) goto LAB_0800aad2;
      iVar3 = func_0x080d11e4();
      uVar1 = iVar3 >> 3 & 0xff;
      uVar5 = (uint)pbVar2[1];
      if (uVar1 < uVar5) {
        func_0x0800a120(param_1,0);
        goto LAB_0800aad2;
      }
      if (pbVar2[2] + uVar5 <= uVar1) {
        if (uVar1 < (uint)pbVar2[3] + (uint)pbVar2[2] + uVar5) {
          func_0800A134(param_1,0x16,8);
        }
        goto LAB_0800aad2;
      }
    }
    uVar6 = 0x15;
  }
  else {
    if (uVar1 == 1) {
      iVar3 = func_0x080d11e4();
      if ((iVar3 >> 3 & 0xffU) < (uint)pbVar2[7]) {
        *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0;
      }
      goto LAB_0800aad2;
    }
    if (((uVar5 & 0xff) >> 2 != 0x18) ||
       (iVar3 = func_0x080d11e4(), (uint)*pbVar2 <= (iVar3 >> 3 & 0xffU))) goto LAB_0800aad2;
    uVar6 = 0x19;
  }
LAB_0800aab6:
  func_0800A134(param_1,uVar6,8);
LAB_0800aad2:
  if (param_2 == 0) {
    if ((*param_1 & 3) == 2) {
      func_0x0800a120(param_1,1);
    }
  }
  else if ((*param_1 & 3) == 1) {
    func_0x0800a120(param_1,2);
  }
  return in_lr;
}

/* --- func_0800AB08 @ 0x0800AB08 (1048B) [PURE-C | agbcp_O2] --- */
/* func_0800AB08 @ 0x0800AB08 mode=THUMB size=0x418 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800AB08 @ 0x0800AB08  mode=THUMB  size=0x418  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800AB08(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (param_2 == 1) {
    uVar3 = *param_1;
    if ((uVar3 & 0xfff) >> 8 == 0) {
      return in_lr;
    }
    uVar2 = (uVar3 & 0xff) >> 2;
    if (0x26 < uVar2) {
      return in_lr;
    }
    switch(*(uint *)(PTR_case_0800AC7C_0800ac78 + uVar2 * 4) & 0xfffffffe) {
    case 0x800ac7c:
      break;
    case 0x800ae16:
case_0800AE16:
      *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0;
      *(byte *)param_1 = (byte)*param_1 & 0xfc | 1;
    case 0x800af1a:
      goto case_0800AF1A;
    }
    if ((uVar3 & 0xfff) >> 8 != 1) goto LAB_0800adf8;
LAB_0800adec:
    *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0;
  }
  else {
    if (param_2 < 2) {
      if (param_2 != 0) {
        return in_lr;
      }
      func_0x0800a120(param_1,0);
      if (((*param_1 & 0xfff) >> 8 != 0) && (uVar3 = (*param_1 & 0xff) >> 2, uVar3 < 0x27)) {
        switch(*(uint *)(PTR_case_0800AB54_0800ab50 + uVar3 * 4) & 0xfffffffe) {
        case 0x800ab54:
          param_1 = (uint *)&stack0x00000090;
        case 0x800abf0:
          *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0 | 7;
          *(byte *)param_1 = (byte)*param_1 & 0xfc | 1;
          *param_1 = *param_1 & _DAT_0800ac18;
          break;
        case 0x800ac1c:
          *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0;
        }
      }
      if ((_DAT_0800ac50 & (ushort)*param_1) != 0) {
        return in_lr;
      }
      iVar1 = func_0x080d11e4();
      if (9 < (iVar1 >> 3 & 0xffU)) {
        return in_lr;
      }
      func_0800A134(param_1,0x15,8);
      return in_lr;
    }
    if (param_2 != 2) {
      if (param_2 != 3) {
        return in_lr;
      }
      *(byte *)param_1 = (byte)*param_1 | 3;
      if ((*param_1 & 0xfff) >> 8 == 0) {
        return in_lr;
      }
      uVar3 = (*param_1 & 0xff) >> 2;
      if (0x26 < uVar3) {
        return in_lr;
      }
      switch(*(uint *)(PTR_case_0800AE58_0800ae54 + uVar3 * 4) & 0xfffffffe) {
      case 0x800ae58:
        break;
      case 0x800af10:
        *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0;
        return in_lr;
      case 0x800af1a:
        return in_lr;
      }
      *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0 | 7;
      *param_1 = *param_1 & _DAT_0800af0c;
      return in_lr;
    }
    uVar3 = *param_1;
    if ((uVar3 & 0xfff) >> 8 == 0) {
      return in_lr;
    }
    uVar2 = (uVar3 & 0xff) >> 2;
    if (0x26 < uVar2) {
      return in_lr;
    }
    switch(*(uint *)(PTR_case_0800AD48_0800ad44 + uVar2 * 4) & 0xfffffffe) {
    case 0x800ad48:
      break;
    case 0x800ae16:
      goto case_0800AE16;
    case 0x800af1a:
      goto case_0800AF1A;
    }
    if ((uVar3 & 0xfff) >> 8 == 1) goto LAB_0800adec;
LAB_0800adf8:
    *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf0 | 6;
  }
  *(byte *)param_1 = (byte)*param_1 & 0xfc | 1;
case_0800AF1A:
  return in_lr;
}

/* --- func_0800AF20 @ 0x0800AF20 (60B) [PURE-C | agbcp_O2] --- */
/* func_0800AF20 @ 0x0800AF20 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800AF20 @ 0x0800AF20  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800AF20(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = *param_1 & 3;
  uVar2 = _DAT_0800af48;
  if (uVar1 != 1) {
    if (uVar1 < 2) {
      uVar2 = _DAT_0800af40;
      if (uVar1 == 0) goto LAB_0800af56;
    }
    else {
      uVar2 = _DAT_0800af50;
      if (uVar1 == 2) goto LAB_0800af56;
    }
    uVar2 = 0;
  }
LAB_0800af56:
  return CONCAT44(in_lr,uVar2);
}

/* --- func_0800AF5C @ 0x0800AF5C (384B) [PURE-C | agbcp_O2] --- */
/* func_0800AF5C @ 0x0800AF5C mode=THUMB size=0x180 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800AF5C @ 0x0800AF5C  mode=THUMB  size=0x180  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800AF5C(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  puVar6 = &stack0xffffffec;
  uVar3 = (*param_1 & 0xff) >> 2;
  uVar5 = 0xff;
  uVar1 = (*param_1 & 0xfff) >> 8;
  iVar2 = _DAT_0800af8c;
  if ((uVar1 == 0) || (iVar2 = _DAT_0800af98, uVar1 == 1)) goto LAB_0800b0d4;
  if (uVar3 == 0x14) {
    if (uVar1 == 7) {
      uVar5 = 0xc;
    }
    else {
      if (uVar1 == 4) {
        uVar5 = 4;
      }
      else if (uVar1 < 5) {
        if (uVar1 == 3) {
          uVar5 = 0;
        }
      }
      else if (uVar1 == 5) {
        uVar5 = 8;
      }
      if ((((param_2 == (uint *)0x0) || ((*param_2 & 0xff) >> 2 != 0x14)) ||
          (uVar1 = (*param_2 & 0xfff) >> 8, uVar1 == 7)) ||
         (uVar4 = (*param_1 & 0xfff) >> 8, uVar1 < uVar4)) {
        if (((param_3 == (uint *)0x0) || ((*param_3 & 0xff) >> 2 != 0x14)) ||
           ((uVar1 = (*param_3 & 0xfff) >> 8, uVar1 == 7 || (uVar1 < (*param_1 & 0xfff) >> 8))))
        goto case_0800B0CC;
        uVar5 = uVar5 + 1;
      }
      else if (((param_3 == (uint *)0x0) || ((*param_3 & 0xff) >> 2 != 0x14)) ||
              ((uVar1 = (*param_3 & 0xfff) >> 8, uVar1 == 7 || (uVar1 < uVar4)))) {
        uVar5 = uVar5 + 2;
      }
      else {
        uVar5 = uVar5 + 3;
      }
      uVar5 = uVar5 & 0xff;
    }
  }
  else if (uVar1 - 2 < 7) {
    switch(*(uint *)(PTR_case_0800AFB8_0800afb4 + (uVar1 - 2) * 4) & 0xfffffffe) {
    case 0x800afb8:
      puVar6 = &stack0x0000000c;
    case 0x800afd4:
      uVar5 = (uint)*(byte *)(((*param_1 & 0xff) >> 2) * 0xc + _DAT_0800af88 + 4);
      break;
    case 0x800afe6:
      uVar5 = (uint)*(byte *)(((*param_1 & 0xff) >> 2) * 0xc + _DAT_0800af88 + 5);
      break;
    case 0x800aff8:
      uVar5 = (uint)*(byte *)(((*param_1 & 0xff) >> 2) * 0xc + _DAT_0800af88 + 6);
      break;
    case 0x800b00a:
      uVar5 = (uint)*(byte *)(((*param_1 & 0xff) >> 2) * 0xc + _DAT_0800af88 + 7);
      break;
    case 0x800b01c:
      uVar5 = (uint)*(byte *)(((*param_1 & 0xff) >> 2) * 0xc + _DAT_0800af88 + 8);
      break;
    case 0x800b02e:
      uVar5 = 1;
      if ((*param_1 & 3) != 3) {
        uVar5 = 0;
      }
    }
  }
case_0800B0CC:
  iVar2 = uVar5 * 0xc + *(int *)(uVar3 * 0xc + _DAT_0800af88);
LAB_0800b0d4:
  return CONCAT44(*(undefined4 *)(puVar6 + 0x10),iVar2);
}

/* --- func_0800B0DC @ 0x0800B0DC (68B) [PURE-C | agbcp_O2] --- */
/* func_0800B0DC @ 0x0800B0DC mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800B0DC @ 0x0800B0DC  mode=THUMB  size=0x48  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800B0DC(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  *param_1 = 0;
  iVar4 = 0x66;
  puVar2 = param_1;
  do {
    puVar2 = puVar2 + 1;
    func_0x0800b26c(puVar2);
    iVar1 = _DAT_0800b11c;
    iVar4 = iVar4 + -1;
  } while (iVar4 != -1);
  uVar3 = 0;
  do {
    func_0800B2D4(param_1 + *(byte *)(uVar3 + iVar1) + 1);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x16);
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800B124 @ 0x0800B124 (28B) [PURE-C | old_agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 func_0800B280();
s32 func_0800B124(u8 *arg0,int arg1) {
  u32 val;
  if (!(0x67 > arg1)) {
    val = 0;
  } else {
    val = func_0800B280(arg0 + ((arg1 << 2) + 4));
  }
  return val;
}

/* --- func_0800B140 @ 0x0800B140 (28B) [PURE-C | old_agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 func_0800B288();
u32 func_0800B140(u8 *arg0,int arg1) {
  u32 val;
  if (!(0x67 > arg1)) {
    val = 0;
  } else {
    val = func_0800B288(arg0 + ((arg1 << 2) + 4));
  }
  return val;
}

/* --- func_0800B15C @ 0x0800B15C (48B) [PURE-C | agbcp_O2] --- */
/* func_0800B15C @ 0x0800B15C mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800B15C @ 0x0800B15C  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800B15C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  while( true ) {
    param_1 = param_1 + 4;
    cVar1 = func_0x0800b280(param_1);
    if ((cVar1 == '\0') || (iVar2 = func_0800B288(param_1), iVar2 == 0)) break;
    uVar4 = uVar4 + 1;
    if (0x66 < uVar4) {
      uVar3 = 1;
LAB_0800b186:
      return CONCAT44(in_lr,uVar3);
    }
  }
  uVar3 = 0;
  goto LAB_0800b186;
}

/* --- func_0800B18C @ 0x0800B18C (64B) [PURE-C | agbcp_O2] --- */
/* func_0800B18C @ 0x0800B18C mode=THUMB size=0x40 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800B18C @ 0x0800B18C  mode=THUMB  size=0x40  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800B18C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  while( true ) {
    iVar3 = param_1 + (uint)*(byte *)(uVar4 + _DAT_0800b1b8) * 4 + 4;
    cVar1 = func_0x0800b280(iVar3);
    if ((cVar1 == '\0') || (iVar3 = func_0800B288(iVar3), iVar3 == 0)) break;
    uVar4 = uVar4 + 1;
    if (0xe < uVar4) {
      uVar2 = 1;
LAB_0800b1c4:
      return CONCAT44(in_lr,uVar2);
    }
  }
  uVar2 = 0;
  goto LAB_0800b1c4;
}

/* --- func_0800B1CC @ 0x0800B1CC (64B) [PURE-C | agbcp_O2] --- */
/* func_0800B1CC @ 0x0800B1CC mode=THUMB size=0x40 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800B1CC @ 0x0800B1CC  mode=THUMB  size=0x40  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800B1CC(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  while( true ) {
    iVar3 = param_1 + (uint)*(byte *)(uVar4 + _DAT_0800b1f8) * 4 + 4;
    cVar1 = func_0x0800b280(iVar3);
    if ((cVar1 == '\0') || (iVar3 = func_0800B288(iVar3), iVar3 == 0)) break;
    uVar4 = uVar4 + 1;
    if (0x13 < uVar4) {
      uVar2 = 1;
LAB_0800b204:
      return CONCAT44(in_lr,uVar2);
    }
  }
  uVar2 = 0;
  goto LAB_0800b204;
}

/* --- func_0800B20C @ 0x0800B20C (64B) [PURE-C | agbcp_O2] --- */
/* func_0800B20C @ 0x0800B20C mode=THUMB size=0x40 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800B20C @ 0x0800B20C  mode=THUMB  size=0x48  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800B20C(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar1 = func_0800E198(param_2);
  if (uVar1 != 0) {
    iVar2 = func_0x0800e194(param_2);
    func_0800B29C(param_1 + iVar2 + 1);
    uVar3 = _DAT_0800b248 - *param_1;
    if (uVar1 < uVar3) {
      uVar3 = uVar1;
    }
    *param_1 = *param_1 + uVar3;
  }
  return in_lr;
}

/* --- func_0800B254 @ 0x0800B254 (24B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 func_0800B2D4();
void func_0800B254(u8 *arg0,int arg1) {
  if (arg1 < 0x67) {
    func_0800B2D4(arg0 + (arg1 * 4 + 4));
  }
}

/* --- func_0800B288 @ 0x0800B288 (20B) [PURE-C | agbcp_O2] --- */
/* func_0800B288 @ 0x0800B288 mode=THUMB size=0x14 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800B288 @ 0x0800B288  mode=THUMB  size=0x14  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800B288(uint *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((int)*param_1 < 0) {
    uVar1 = *param_1 & 0x7fffffff;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800B29C @ 0x0800B29C (56B) [PURE-C | agbcp_O2] --- */
/* func_0800B29C @ 0x0800B29C mode=THUMB size=0x38 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800B29C @ 0x0800B29C  mode=THUMB  size=0x38  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800B29C(uint *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (-1 < (int)*param_1) {
    *(byte *)((int)param_1 + 3) = *(byte *)((int)param_1 + 3) | 0x80;
  }
  uVar1 = *param_1 & 0x7fffffff;
  if (uVar1 <= _DAT_0800b2cc) {
    *param_1 = _DAT_0800b2d0 + 1 & *param_1 | uVar1 + 1 & _DAT_0800b2d0;
  }
  return in_lr;
}

/* --- func_0800B2D4 @ 0x0800B2D4 (24B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
void func_0800B2D4(int *arg0) {
  if (-1 < *arg0) {
    *(u8 *)((int)arg0 + 3) = *(u8 *)((int)arg0 + 3) | 0x80;
  }
}

/* --- func_0800B2EC @ 0x0800B2EC (284B) [PURE-C | agbcp_O2] --- */
/* func_0800B2EC @ 0x0800B2EC mode=THUMB size=0x11C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800B2EC @ 0x0800B2EC  mode=THUMB  size=0x124  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800B2EC(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  undefined1 auStack_38 [4];
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined1 uStack_30;
  undefined1 auStack_2f [3];
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  
  iVar2 = 0x3f;
  puStack_2c = &uStack_31;
  puStack_28 = &uStack_30;
  puStack_24 = auStack_2f;
  iVar1 = param_1;
  do {
    func_0800DBC8(iVar1);
    iVar1 = iVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  func_0x0800db2c(&uStack_34,0);
  func_0800DBE0(auStack_38,uStack_34,1);
  func_080D3994(param_1,auStack_38,2);
  func_0x0800db2c(&uStack_33,0x10);
  func_0800DBE0(auStack_38,uStack_33,1);
  func_080D3994(param_1 + 2,auStack_38,2);
  func_0x0800db2c(&uStack_32,8);
  func_0800DBE0(auStack_38,uStack_32,1);
  func_080D3994(param_1 + 4,auStack_38,2);
  func_0x0800db2c(puStack_2c,0x18);
  func_0800DBE0(auStack_38,uStack_31,1);
  func_080D3994(param_1 + 6,auStack_38,2);
  func_0x0800db2c(puStack_28,0x20);
  func_0800DBE0(auStack_38,uStack_30,1);
  func_080D3994(param_1 + 8,auStack_38,2);
  func_0x0800db2c(puStack_24,0x4c);
  func_0800DBE0(auStack_38,auStack_2f[0],1);
  func_080D3994(param_1 + 10,auStack_38,2);
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800B410 @ 0x0800B410 (100B) [PURE-C | agbcp_O2] --- */
/* func_0800B410 @ 0x0800B410 mode=THUMB size=0x64 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800B410 @ 0x0800B410  mode=THUMB  size=0x64  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800B410(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar3 = 0;
  iVar4 = param_1 + 0x80;
  for (; param_1 != iVar4; param_1 = param_1 + 2) {
    cVar1 = func_0800DC34(param_1);
    if (cVar1 == '\0') {
      auStack_1c[0] = func_0800DC10(param_1);
      iVar2 = func_0x0800db30(auStack_1c);
      if (iVar2 == param_2) {
        iVar2 = func_0800DC48(param_1);
        iVar3 = (iVar3 + 99) - iVar2;
      }
    }
    else {
      iVar3 = iVar3 + 99;
    }
  }
  return CONCAT44(in_lr,iVar3);
}

/* --- func_0800B474 @ 0x0800B474 (92B) [PURE-C | agbcp_O2] --- */
/* func_0800B474 @ 0x0800B474 mode=THUMB size=0x5C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800B474 @ 0x0800B474  mode=THUMB  size=0x5C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800B474(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar4 = 0;
  iVar3 = param_1 + 0x80;
  for (; param_1 != iVar3; param_1 = param_1 + 2) {
    cVar1 = func_0800DC34(param_1);
    if (cVar1 == '\0') {
      auStack_1c[0] = func_0800DC10(param_1);
      iVar2 = func_0x0800db30(auStack_1c);
      if (iVar2 == param_2) {
        iVar2 = func_0800DC48(param_1);
        iVar4 = iVar4 + iVar2;
      }
    }
  }
  return CONCAT44(in_lr,iVar4);
}

/* --- func_0800B4D0 @ 0x0800B4D0 (48B) [PURE-C | agbcp_O2] --- */
/* func_0800B4D0 @ 0x0800B4D0 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800B4D0 @ 0x0800B4D0  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800B4D0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  iVar2 = param_1 + 0x80;
  for (; param_1 != iVar2; param_1 = param_1 + 2) {
    cVar1 = func_0800DC34(param_1);
    if (cVar1 != '\0') goto LAB_0800b4fa;
    iVar3 = iVar3 + 1;
  }
  iVar3 = -1;
LAB_0800b4fa:
  return CONCAT44(in_lr,iVar3);
}

/* --- func_0800B500 @ 0x0800B500 (68B) [PURE-C | agbcp_O2] --- */
/* func_0800B500 @ 0x0800B500 mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800B500 @ 0x0800B500  mode=THUMB  size=0x44  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800B500(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int iStack_c;
  
  iVar2 = 0x3f;
  for (iStack_c = param_1 + 0x80; iStack_c != param_1; iStack_c = iStack_c + -2) {
    cVar1 = func_0800DC34(iStack_c + -2);
    if (cVar1 != '\0') goto LAB_0800b53a;
    iVar2 = iVar2 + -1;
  }
  iVar2 = -1;
LAB_0800b53a:
  return CONCAT44(in_lr,iVar2);
}

/* --- func_0800B544 @ 0x0800B544 (92B) [PURE-C | agbcp_O2] --- */
/* func_0800B544 @ 0x0800B544 mode=THUMB size=0x5C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800B544 @ 0x0800B544  mode=THUMB  size=0x64  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800B544(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar4 = 0;
  iVar3 = param_1 + 0x80;
  for (; param_1 != iVar3; param_1 = param_1 + 2) {
    cVar1 = func_0800DC34(param_1);
    if (cVar1 == '\0') {
      auStack_1c[0] = func_0800DC10(param_1);
      iVar2 = func_0x0800db30(auStack_1c);
      if (iVar2 == param_2) goto LAB_0800b592;
    }
    iVar4 = iVar4 + 1;
  }
  iVar4 = -1;
LAB_0800b592:
  return CONCAT44(in_lr,iVar4);
}

/* --- func_0800B5A8 @ 0x0800B5A8 (184B) [PURE-C | agbcp_O2] --- */
/* func_0800B5A8 @ 0x0800B5A8 mode=THUMB size=0xB8 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800B5A8 @ 0x0800B5A8  mode=THUMB  size=0xB8  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800B5A8(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 in_lr;
  undefined1 auStack_28 [4];
  uint uStack_24;
  uint uStack_20;
  undefined1 uStack_1c;
  undefined1 auStack_1b [3];
  uint uStack_18;
  
  if (param_2 < 0x51) {
    iVar5 = param_1 + 0x80;
    for (; (param_3 != 0 && (param_1 != iVar5)); param_1 = param_1 + 2) {
      uStack_24 = param_3;
      cVar1 = func_0800DC34(param_1);
      if (cVar1 == '\0') {
        auStack_1b[0] = func_0800DC10(param_1);
        iVar2 = func_0x0800db30(auStack_1b);
        if (iVar2 == param_2) {
          iVar2 = func_0800DC48(param_1);
          uStack_18 = 99U - iVar2;
          puVar4 = &uStack_24;
          if (99U - iVar2 < uStack_24) {
            puVar4 = &uStack_18;
          }
          uVar3 = *puVar4;
          func_0800DC5C(param_1,uVar3);
          goto LAB_0800b646;
        }
      }
      else {
        uStack_20 = 99;
        puVar4 = &uStack_24;
        if (99 < uStack_24) {
          puVar4 = &uStack_20;
        }
        uVar3 = *puVar4;
        func_0x0800db2c(&uStack_1c,param_2);
        func_0800DBE0(auStack_28,uStack_1c,uVar3);
        func_080D3994(param_1,auStack_28,2);
LAB_0800b646:
        uStack_24 = uStack_24 - uVar3;
      }
      param_3 = uStack_24;
    }
  }
  return CONCAT44(in_lr,param_3);
}

/* --- func_0800B660 @ 0x0800B660 (36B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800DE68();
u32 func_0800B660(int arg0) {
  int val;
  int val2;
  val = arg0;
  val2 = 0x3f;
  do {
    func_0800DE68(val);
    val = 4 + val;
    val2 = val2 + -1;
  } while (val2 != -1);
  return arg0;
}

/* --- func_0800B68C @ 0x0800B68C (92B) [PURE-C | agbcp_O2] --- */
/* func_0800B68C @ 0x0800B68C mode=THUMB size=0x5C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800B68C @ 0x0800B68C  mode=THUMB  size=0x5C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800B68C(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_18 [4];
  
  iVar3 = 0;
  iVar4 = param_1 + 0x100;
  for (; param_1 != iVar4; param_1 = param_1 + 4) {
    cVar1 = func_0800DEDC(param_1);
    if (cVar1 == '\0') {
      func_0800DEB8(auStack_18,param_1);
      iVar2 = func_0x0800dcb4(auStack_18);
      if (iVar2 == param_2) {
        iVar2 = func_0800DEF0(param_1);
        iVar3 = (iVar3 + 99) - iVar2;
      }
    }
    else {
      iVar3 = iVar3 + 99;
    }
  }
  return CONCAT44(in_lr,iVar3);
}

/* --- func_0800B6E8 @ 0x0800B6E8 (84B) [PURE-C | agbcp_O2] --- */
/* func_0800B6E8 @ 0x0800B6E8 mode=THUMB size=0x54 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800B6E8 @ 0x0800B6E8  mode=THUMB  size=0x54  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800B6E8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_18 [4];
  
  iVar4 = 0;
  iVar3 = param_1 + 0x100;
  for (; param_1 != iVar3; param_1 = param_1 + 4) {
    cVar1 = func_0800DEDC(param_1);
    if (cVar1 == '\0') {
      func_0800DEB8(auStack_18,param_1);
      iVar2 = func_0x0800dcb4(auStack_18);
      if (iVar2 == param_2) {
        iVar2 = func_0800DEF0(param_1);
        iVar4 = iVar4 + iVar2;
      }
    }
  }
  return CONCAT44(in_lr,iVar4);
}

/* --- func_0800B73C @ 0x0800B73C (52B) [PURE-C | agbcp_O2] --- */
/* func_0800B73C @ 0x0800B73C mode=THUMB size=0x34 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800B73C @ 0x0800B73C  mode=THUMB  size=0x34  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800B73C(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  iVar2 = param_1 + 0x100;
  for (; param_1 != iVar2; param_1 = param_1 + 4) {
    cVar1 = func_0800DEDC(param_1);
    if (cVar1 != '\0') goto LAB_0800b768;
    iVar3 = iVar3 + 1;
  }
  iVar3 = -1;
LAB_0800b768:
  return CONCAT44(in_lr,iVar3);
}

/* --- func_0800B770 @ 0x0800B770 (72B) [PURE-C | agbcp_O2] --- */
/* func_0800B770 @ 0x0800B770 mode=THUMB size=0x48 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800B770 @ 0x0800B770  mode=THUMB  size=0x48  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800B770(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int iStack_c;
  
  iVar2 = 0x3f;
  for (iStack_c = param_1 + 0x100; iStack_c != param_1; iStack_c = iStack_c + -4) {
    cVar1 = func_0800DEDC(iStack_c + -4);
    if (cVar1 != '\0') goto LAB_0800b7ae;
    iVar2 = iVar2 + -1;
  }
  iVar2 = -1;
LAB_0800b7ae:
  return CONCAT44(in_lr,iVar2);
}

/* --- func_0800B7B8 @ 0x0800B7B8 (84B) [PURE-C | agbcp_O2] --- */
/* func_0800B7B8 @ 0x0800B7B8 mode=THUMB size=0x54 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800B7B8 @ 0x0800B7B8  mode=THUMB  size=0x5C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800B7B8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_18 [4];
  
  iVar4 = 0;
  iVar3 = param_1 + 0x100;
  for (; param_1 != iVar3; param_1 = param_1 + 4) {
    cVar1 = func_0800DEDC(param_1);
    if (cVar1 == '\0') {
      func_0800DEB8(auStack_18,param_1);
      iVar2 = func_0x0800dcb4(auStack_18);
      if (iVar2 == param_2) goto LAB_0800b802;
    }
    iVar4 = iVar4 + 1;
  }
  iVar4 = -1;
LAB_0800b802:
  return CONCAT44(in_lr,iVar4);
}

/* --- func_0800B814 @ 0x0800B814 (208B) [PURE-C | agbcp_O2] --- */
/* func_0800B814 @ 0x0800B814 mode=THUMB size=0xD0 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800B814 @ 0x0800B814  mode=THUMB  size=0xD0  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800B814(undefined4 *param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined4 uStack_2c;
  uint3 uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  if (param_2 < 0xab) {
    puVar3 = param_1 + 0x40;
    for (; (param_3 != 0 && (param_1 != puVar3)); param_1 = param_1 + 1) {
      uStack_24 = param_3;
      cVar1 = func_0800DEDC(param_1);
      if (cVar1 == '\0') {
        func_0800DEB8(&uStack_2c,param_1);
        iVar2 = func_0x0800dcb4(&uStack_2c);
        if (iVar2 == param_2) {
          iVar2 = func_0800DEF0(param_1);
          uStack_1c = 99U - iVar2;
          puVar4 = &uStack_24;
          if (99U - iVar2 < uStack_24) {
            puVar4 = &uStack_1c;
          }
          uVar5 = *puVar4;
          func_0800DF04(param_1,uVar5);
          uStack_24 = uStack_24 - uVar5;
        }
      }
      else {
        uStack_20 = 99;
        puVar4 = &uStack_24;
        if (99 < uStack_24) {
          puVar4 = &uStack_20;
        }
        uVar5 = *puVar4;
        func_0x0800dca8(&uStack_28,param_2);
        func_0800DE80(&uStack_2c,(uint)uStack_28,uVar5);
        *param_1 = uStack_2c;
        uStack_24 = uStack_24 - uVar5;
      }
      param_3 = uStack_24;
    }
  }
  return CONCAT44(in_lr,param_3);
}

/* --- func_0800B8E4 @ 0x0800B8E4 (36B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800E010();
u32 func_0800B8E4(int arg0) {
  int val2;
  register int val;
  val = arg0;
  val2 = 0x3f;
  do {
    func_0800E010(val);
    val = (u32)2 + val;
    val2 = val2 + -1;
  } while (val2 != -1);
  return arg0;
}

/* --- func_0800B910 @ 0x0800B910 (100B) [PURE-C | agbcp_O2] --- */
/* func_0800B910 @ 0x0800B910 mode=THUMB size=0x64 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800B910 @ 0x0800B910  mode=THUMB  size=0x64  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800B910(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar3 = 0;
  iVar4 = param_1 + 0x80;
  for (; param_1 != iVar4; param_1 = param_1 + 2) {
    cVar1 = func_0800E07C(param_1);
    if (cVar1 == '\0') {
      auStack_1c[0] = func_0800E058(param_1);
      iVar2 = func_0x0800df54(auStack_1c);
      if (iVar2 == param_2) {
        iVar2 = func_0800E090(param_1);
        iVar3 = (iVar3 + 99) - iVar2;
      }
    }
    else {
      iVar3 = iVar3 + 99;
    }
  }
  return CONCAT44(in_lr,iVar3);
}

/* --- func_0800B974 @ 0x0800B974 (92B) [PURE-C | agbcp_O2] --- */
/* func_0800B974 @ 0x0800B974 mode=THUMB size=0x5C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800B974 @ 0x0800B974  mode=THUMB  size=0x5C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800B974(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar4 = 0;
  iVar3 = param_1 + 0x80;
  for (; param_1 != iVar3; param_1 = param_1 + 2) {
    cVar1 = func_0800E07C(param_1);
    if (cVar1 == '\0') {
      auStack_1c[0] = func_0800E058(param_1);
      iVar2 = func_0x0800df54(auStack_1c);
      if (iVar2 == param_2) {
        iVar2 = func_0800E090(param_1);
        iVar4 = iVar4 + iVar2;
      }
    }
  }
  return CONCAT44(in_lr,iVar4);
}

/* --- func_0800B9D0 @ 0x0800B9D0 (48B) [PURE-C | agbcp_O2] --- */
/* func_0800B9D0 @ 0x0800B9D0 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800B9D0 @ 0x0800B9D0  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800B9D0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  iVar2 = param_1 + 0x80;
  for (; param_1 != iVar2; param_1 = param_1 + 2) {
    cVar1 = func_0800E07C(param_1);
    if (cVar1 != '\0') goto LAB_0800b9fa;
    iVar3 = iVar3 + 1;
  }
  iVar3 = -1;
LAB_0800b9fa:
  return CONCAT44(in_lr,iVar3);
}

/* --- func_0800BA00 @ 0x0800BA00 (68B) [PURE-C | agbcp_O2] --- */
/* func_0800BA00 @ 0x0800BA00 mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800BA00 @ 0x0800BA00  mode=THUMB  size=0x44  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800BA00(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int iStack_c;
  
  iVar2 = 0x3f;
  for (iStack_c = param_1 + 0x80; iStack_c != param_1; iStack_c = iStack_c + -2) {
    cVar1 = func_0800E07C(iStack_c + -2);
    if (cVar1 != '\0') goto LAB_0800ba3a;
    iVar2 = iVar2 + -1;
  }
  iVar2 = -1;
LAB_0800ba3a:
  return CONCAT44(in_lr,iVar2);
}

/* --- func_0800BA44 @ 0x0800BA44 (92B) [PURE-C | agbcp_O2] --- */
/* func_0800BA44 @ 0x0800BA44 mode=THUMB size=0x5C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800BA44 @ 0x0800BA44  mode=THUMB  size=0x64  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800BA44(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar4 = 0;
  iVar3 = param_1 + 0x80;
  for (; param_1 != iVar3; param_1 = param_1 + 2) {
    cVar1 = func_0800E07C(param_1);
    if (cVar1 == '\0') {
      auStack_1c[0] = func_0800E058(param_1);
      iVar2 = func_0x0800df54(auStack_1c);
      if (iVar2 == param_2) goto LAB_0800ba92;
    }
    iVar4 = iVar4 + 1;
  }
  iVar4 = -1;
LAB_0800ba92:
  return CONCAT44(in_lr,iVar4);
}

/* --- func_0800BAA8 @ 0x0800BAA8 (184B) [PURE-C | agbcp_O2] --- */
/* func_0800BAA8 @ 0x0800BAA8 mode=THUMB size=0xB8 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800BAA8 @ 0x0800BAA8  mode=THUMB  size=0xD4  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800BAA8(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 in_lr;
  undefined1 auStack_28 [4];
  uint uStack_24;
  uint uStack_20;
  undefined1 uStack_1c;
  undefined1 auStack_1b [3];
  uint uStack_18;
  
  if (param_2 < 0x5f) {
    iVar5 = param_1 + 0x80;
    for (; (param_3 != 0 && (param_1 != iVar5)); param_1 = param_1 + 2) {
      uStack_24 = param_3;
      cVar1 = func_0800E07C(param_1);
      if (cVar1 == '\0') {
        auStack_1b[0] = func_0800E058(param_1);
        iVar2 = func_0x0800df54(auStack_1b);
        if (iVar2 == param_2) {
          iVar2 = func_0800E090(param_1);
          uStack_18 = 99U - iVar2;
          puVar4 = &uStack_24;
          if (99U - iVar2 < uStack_24) {
            puVar4 = &uStack_18;
          }
          uVar3 = *puVar4;
          func_0800E0A4(param_1,uVar3);
          goto LAB_0800bb46;
        }
      }
      else {
        uStack_20 = 99;
        puVar4 = &uStack_24;
        if (99 < uStack_24) {
          puVar4 = &uStack_20;
        }
        uVar3 = *puVar4;
        func_0x0800df50(&uStack_1c,param_2);
        func_0800E028(auStack_28,uStack_1c,uVar3);
        func_080D3994(param_1,auStack_28,2);
LAB_0800bb46:
        uStack_24 = uStack_24 - uVar3;
      }
      param_3 = uStack_24;
    }
  }
  return CONCAT44(in_lr,param_3);
}

/* --- func_0800BB7C @ 0x0800BB7C (40B) [PURE-C | agbcp_O2] --- */
/* func_0800BB7C @ 0x0800BB7C mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800BB7C @ 0x0800BB7C  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800BB7C(uint *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  cVar1 = func_0x0800bb74();
  if (cVar1 == '\0') {
    uVar2 = 199;
  }
  else {
    uVar2 = (uint)*(byte *)(((*param_1 & 0x1f) >> 1) + _DAT_0800bb98);
  }
  return CONCAT44(in_lr,uVar2);
}

/* --- func_0800BBA4 @ 0x0800BBA4 (76B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 func_0800BB74();
extern u32 func_0800DF50();
extern u32 func_0800E010();
extern u32 func_0800E028();
struct _bf { u32 f0 : 1; u32 f1 : 4; };
u32 func_0800BBA4(u32 arg0, struct _bf *arg1) {
  u8 auStack_10[4];
  if ((u8)func_0800BB74(arg1) == 0) {
    func_0800E010(arg0);
  } else {
    arg1->f0 = 0;
    func_0800DF50(auStack_10, arg1->f1 + 0x40);
    func_0800E028(arg0, auStack_10[0], 1);
  }
  return arg0;
}

/* --- func_0800BBF0 @ 0x0800BBF0 (104B) [PURE-C | agbcp_O2] --- */
/* func_0800BBF0 @ 0x0800BBF0 mode=THUMB size=0x68 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800BBF0 @ 0x0800BBF0  mode=THUMB  size=0x68  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800BBF0(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined1 auStack_18 [4];
  
  iVar2 = func_0x0800df54(param_3);
  if ((iVar2 < 0x4f) && (0x3f < iVar2)) {
    *(byte *)param_2 = (byte)*param_2 | 1;
    uVar3 = *param_2;
    cVar1 = func_0x0800df54(param_3);
    *(byte *)param_2 = (byte)*param_2 & 0xe1 | (cVar1 - 0x40U & 0xf) << 1;
    func_0x0800df50(auStack_18,((uVar3 & 0x1f) >> 1) + 0x40);
    func_0800E028(param_1,auStack_18[0],1);
  }
  else {
    func_0800E010(param_1);
  }
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800BC58 @ 0x0800BC58 (88B) [PURE-C | agbcp_O2] --- */
/* func_0800BC58 @ 0x0800BC58 mode=THUMB size=0x58 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800BC58 @ 0x0800BC58  mode=THUMB  size=0x58  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800BC58(undefined4 *param_1)

{
  undefined4 in_lr;
  undefined4 *puVar1;
  
  for (puVar1 = param_1; puVar1 != param_1 + 2; puVar1 = puVar1 + 1) {
    *puVar1 = 0;
  }
  param_1[1] = param_1[1] & 0xf0000000;
  for (puVar1 = param_1 + 2; puVar1 != param_1 + 4; puVar1 = puVar1 + 1) {
    *puVar1 = 0;
  }
  param_1[3] = param_1[3] & 0xf0000000;
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800BCB0 @ 0x0800BCB0 (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
void func_0800BCB0(int arg0,int arg1) {
  u32 val;
  u32 *mem_ptr;
  val = arg1 - 0x4d;
  if (val < 0x3c) {
    mem_ptr = (u32 *)(arg0 + (val >> 5) * 4);
    *mem_ptr = *mem_ptr | 1 << (val & 0x1f);
  }
}

/* --- func_0800BCD0 @ 0x0800BCD0 (68B) [PURE-C | agbcp_O2] --- */
/* func_0800BCD0 @ 0x0800BCD0 mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800BCD0 @ 0x0800BCD0  mode=THUMB  size=0x44  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800BCD0(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 in_lr;
  
  uVar1 = param_2 - 0x4d;
  if (uVar1 < 0x3c) {
    puVar2 = (uint *)(param_1 + (uVar1 >> 5) * 4);
    *puVar2 = *puVar2 & ~(1 << (uVar1 & 0x1f));
    puVar2 = (uint *)(param_1 + 8 + (uVar1 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << (uVar1 & 0x1f);
  }
  return in_lr;
}

/* --- func_0800BD14 @ 0x0800BD14 (44B) [PURE-C | agbcp_O2] --- */
/* func_0800BD14 @ 0x0800BD14 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800BD14 @ 0x0800BD14  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800BD14(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = param_2 - 0x4d;
  uVar1 = 0;
  if (uVar2 < 0x3c) {
    uVar1 = *(uint *)(param_1 + (uVar2 >> 5) * 4) & 1 << (uVar2 & 0x1f);
    uVar1 = (-uVar1 | uVar1) >> 0x1f;
  }
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800BD40 @ 0x0800BD40 (44B) [PURE-C | agbcp_O2] --- */
/* func_0800BD40 @ 0x0800BD40 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800BD40 @ 0x0800BD40  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800BD40(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = param_2 - 0x4d;
  uVar1 = 0;
  if (uVar2 < 0x3c) {
    uVar1 = *(uint *)(param_1 + 8 + (uVar2 >> 5) * 4) & 1 << (uVar2 & 0x1f);
    uVar1 = (-uVar1 | uVar1) >> 0x1f;
  }
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800BD6C @ 0x0800BD6C (128B) [PURE-C | agbcp_O2] --- */
/* func_0800BD6C @ 0x0800BD6C mode=THUMB size=0x80 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800BD6C @ 0x0800BD6C  mode=THUMB  size=0x80  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800BD6C(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  puVar1 = param_1 + 2;
  iVar3 = 0;
  do {
    uVar2 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = (uVar2 & _DAT_0800bdd8) + (uVar2 >> 1 & _DAT_0800bdd8);
    uVar2 = (uVar2 & _DAT_0800bddc) + (uVar2 >> 2 & _DAT_0800bddc);
    uVar2 = (uVar2 & _DAT_0800bde0) + (uVar2 >> 4 & _DAT_0800bde0);
    uVar2 = (uVar2 & _DAT_0800bde4) + (uVar2 >> 8 & _DAT_0800bde4);
    iVar3 = iVar3 + (uVar2 & _DAT_0800bde8) + (uVar2 >> 0x10 & _DAT_0800bde8);
  } while (param_1 != puVar1);
  return CONCAT44(in_lr,iVar3);
}

/* --- func_0800BDEC @ 0x0800BDEC (132B) [PURE-C | agbcp_O2] --- */
/* func_0800BDEC @ 0x0800BDEC mode=THUMB size=0x84 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800BDEC @ 0x0800BDEC  mode=THUMB  size=0x130  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800BDEC(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  puVar2 = (uint *)(param_1 + 8);
  iVar3 = 0;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    uVar1 = (uVar1 & _DAT_0800be5c) + (uVar1 >> 1 & _DAT_0800be5c);
    uVar1 = (uVar1 & _DAT_0800be60) + (uVar1 >> 2 & _DAT_0800be60);
    uVar1 = (uVar1 & _DAT_0800be64) + (uVar1 >> 4 & _DAT_0800be64);
    uVar1 = (uVar1 & _DAT_0800be68) + (uVar1 >> 8 & _DAT_0800be68);
    iVar3 = iVar3 + (uVar1 & _DAT_0800be6c) + (uVar1 >> 0x10 & _DAT_0800be6c);
  } while (puVar2 != (uint *)(param_1 + 0x10));
  return CONCAT44(in_lr,iVar3);
}

/* --- func_0800BE70 @ 0x0800BE70 (164B) [PURE-C | agbcp_O2] --- */
/* func_0800BE70 @ 0x0800BE70 mode=THUMB size=0xA4 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* --- func_0800BF1C @ 0x0800BF1C (24B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
/* paridad 91.7% preset agbcc_O2 */
u32 func_0800BF1C(int arg0) {
  int val;
  int hv;
  hv = *(u8 *)(arg0 + 1) << 30;
  val = 0;
  if (hv < 0)
    val = arg0 + 8;
  return val;
}

/* --- func_0800BF34 @ 0x0800BF34 (28B) [PURE-C | agbcp_O2] --- */
/* func_0800BF34 @ 0x0800BF34 mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800BF34 @ 0x0800BF34  mode=THUMB  size=0x1C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800BF34(int param_1)

{
  undefined4 in_lr;
  
  if ((int)((uint)*(byte *)(param_1 + 1) * 0x20000000) < 0) {
    param_1 = param_1 + 0x108;
  }
  else {
    param_1 = 0;
  }
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800BF50 @ 0x0800BF50 (28B) [PURE-C | agbcp_O2] --- */
/* func_0800BF50 @ 0x0800BF50 mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800BF50 @ 0x0800BF50  mode=THUMB  size=0xD4  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800BF50(int param_1)

{
  undefined4 in_lr;
  
  if ((int)((uint)*(byte *)(param_1 + 1) * 0x10000000) < 0) {
    param_1 = param_1 + 0x188;
  }
  else {
    param_1 = 0;
  }
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800C024 @ 0x0800C024 (36B) [PURE-C | agbcp_O2] --- */
/* func_0800C024 @ 0x0800C024 mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C024 @ 0x0800C024  mode=THUMB  size=0x24  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800C024(byte *param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *param_1;
  if ((bVar1 & 3) < 2) {
    *param_1 = bVar1 & 0xfc | (bVar1 & 3) + 1 & 3;
  }
  return in_lr;
}

/* --- func_0800C048 @ 0x0800C048 (24B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
/* paridad 91.7% preset agbcc_O2 */
u32 func_0800C048(int arg0) {
  int val;
  int hv;
  hv = *(u8 *)(arg0 + 1) << 30;
  val = 0;
  if (hv < 0)
    val = arg0 + 8;
  return val;
}

/* --- func_0800C060 @ 0x0800C060 (28B) [PURE-C | agbcp_O2] --- */
/* func_0800C060 @ 0x0800C060 mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C060 @ 0x0800C060  mode=THUMB  size=0x1C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800C060(int param_1)

{
  undefined4 in_lr;
  
  if ((int)((uint)*(byte *)(param_1 + 1) * 0x20000000) < 0) {
    param_1 = param_1 + 0x108;
  }
  else {
    param_1 = 0;
  }
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800C07C @ 0x0800C07C (28B) [PURE-C | agbcp_O2] --- */
/* func_0800C07C @ 0x0800C07C mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C07C @ 0x0800C07C  mode=THUMB  size=0x1C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800C07C(int param_1)

{
  undefined4 in_lr;
  
  if ((int)((uint)*(byte *)(param_1 + 1) * 0x10000000) < 0) {
    param_1 = param_1 + 0x188;
  }
  else {
    param_1 = 0;
  }
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800C098 @ 0x0800C098 (36B) [PURE-C | agbcp_O2] --- */
/* func_0800C098 @ 0x0800C098 mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C098 @ 0x0800C098  mode=THUMB  size=0x24  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800C098(byte *param_1,byte param_2)

{
  undefined4 in_lr;
  
  if (1 < (*param_1 & 3)) {
    *param_1 = *param_1 & 0xf3 | (param_2 & 3) << 2;
  }
  return in_lr;
}

/* --- func_0800C0BC @ 0x0800C0BC (36B) [PURE-C | agbcp_O2] --- */
/* func_0800C0BC @ 0x0800C0BC mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C0BC @ 0x0800C0BC  mode=THUMB  size=0x24  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800C0BC(byte *param_1,byte param_2)

{
  undefined4 in_lr;
  
  if (1 < (*param_1 & 3)) {
    *param_1 = *param_1 & 0xcf | (param_2 & 3) << 4;
  }
  return in_lr;
}

/* --- func_0800C0E0 @ 0x0800C0E0 (28B) [PURE-C | agbcp_O2] --- */
/* func_0800C0E0 @ 0x0800C0E0 mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C0E0 @ 0x0800C0E0  mode=THUMB  size=0x1C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800C0E0(byte *param_1,char param_2)

{
  undefined4 in_lr;
  
  if (1 < (*param_1 & 3)) {
    *param_1 = *param_1 & 0x3f | param_2 << 6;
  }
  return in_lr;
}

/* --- func_0800C0FC @ 0x0800C0FC (28B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
void func_0800C0FC(u8 *arg0) {
  if ((*arg0 & 3) == 2) {
    arg0[1] = arg0[1] | 1;
  }
}

/* --- func_0800C118 @ 0x0800C118 (28B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
void func_0800C118(u8 *arg0) {
  if ((*arg0 & 3) != 0) {
    arg0[1] = arg0[1] | 2;
  }
}

/* --- func_0800C134 @ 0x0800C134 (28B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
void func_0800C134(u8 *arg0) {
  if ((*arg0 & 3) != 0) {
    arg0[1] = arg0[1] | 4;
  }
}

/* --- func_0800C15C @ 0x0800C15C (28B) [PURE-C | agbcp_O2] --- */
/* func_0800C15C @ 0x0800C15C mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C15C @ 0x0800C15C  mode=THUMB  size=0x1C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800C15C(byte *param_1)

{
  undefined4 in_lr;
  
  if (1 < (*param_1 & 3)) {
    param_1[1] = param_1[1] | 0x10;
  }
  return in_lr;
}

/* --- func_0800C178 @ 0x0800C178 (28B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
void func_0800C178(u8 *arg0) {
  if ((*arg0 & 3) != 0) {
    arg0[1] = arg0[1] | 0x20;
  }
}

/* --- func_0800C25C @ 0x0800C25C (32B) [CFG-ASM (hermes:bitfield-sign-test+clean-c89) | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
void func_0800C25C(u8 *arg0) {
    register u8 *r1 asm("r1") = arg0;
    register u32 r0 asm("r0");
    register u32 r2 asm("r2");
    r0 = *r1;
    r0 = (r0 << 30) >> 30;
    if (r0 <= 1) return;
    r2 = r1[4];
    r0 = r2 << 25;
    if ((s32)r0 < 0) return;
    r0 = 0x40;
    r0 |= r2;
    r1[4] = r0;
}

/* --- func_0800C27C @ 0x0800C27C (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800C048();
void func_0800C27C(u8 *arg0) {
  int val;
  if (((*arg0 & 3) != 0) && (val = func_0800C048(arg0), val != 0)) {
    arg0[4] = arg0[4] | 0x80;
  }
}

/* --- func_0800C2A4 @ 0x0800C2A4 (24B) [PURE-C | agbcp_O2] --- */
/* func_0800C2A4 @ 0x0800C2A4 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C2A4 @ 0x0800C2A4  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800C2A4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 4) < '\0') {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  }
  return in_lr;
}

/* --- func_0800C2BC @ 0x0800C2BC (24B) [PURE-C | agbcp_O2] --- */
/* func_0800C2BC @ 0x0800C2BC mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C2BC @ 0x0800C2BC  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800C2BC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 4) < '\0') {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 2;
  }
  return in_lr;
}

/* --- func_0800C2D4 @ 0x0800C2D4 (24B) [PURE-C | agbcp_O2] --- */
/* func_0800C2D4 @ 0x0800C2D4 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C2D4 @ 0x0800C2D4  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800C2D4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 4) < '\0') {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 4;
  }
  return in_lr;
}

/* --- func_0800C2EC @ 0x0800C2EC (24B) [PURE-C | agbcp_O2] --- */
/* func_0800C2EC @ 0x0800C2EC mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C2EC @ 0x0800C2EC  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800C2EC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 4) < '\0') {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 8;
  }
  return in_lr;
}

/* --- func_0800C304 @ 0x0800C304 (24B) [PURE-C | agbcp_O2] --- */
/* func_0800C304 @ 0x0800C304 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C304 @ 0x0800C304  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800C304(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 4) < '\0') {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x10;
  }
  return in_lr;
}

/* --- func_0800C31C @ 0x0800C31C (24B) [PURE-C | agbcp_O2] --- */
/* func_0800C31C @ 0x0800C31C mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C31C @ 0x0800C31C  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800C31C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 4) < '\0') {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x20;
  }
  return in_lr;
}

/* --- func_0800C334 @ 0x0800C334 (24B) [PURE-C | agbcp_O2] --- */
/* func_0800C334 @ 0x0800C334 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C334 @ 0x0800C334  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800C334(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 4) < '\0') {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x40;
  }
  return in_lr;
}

/* --- func_0800C34C @ 0x0800C34C (24B) [PURE-C | agbcp_O2] --- */
/* func_0800C34C @ 0x0800C34C mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C34C @ 0x0800C34C  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800C34C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 4) < '\0') {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x80;
  }
  return in_lr;
}

/* --- func_0800C364 @ 0x0800C364 (44B) [PURE-C | agbcp_O2] --- */
/* func_0800C364 @ 0x0800C364 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C364 @ 0x0800C364  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800C364(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0x3f | (byte)((param_2 & 3) << 6);
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xc0 | (byte)(param_2 >> 2) & 0x3f;
  return in_lr;
}

/* --- func_0800C390 @ 0x0800C390 (192B) [PURE-C | agbcp_O2] --- */
/* func_0800C390 @ 0x0800C390 mode=THUMB size=0xC0 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C390 @ 0x0800C390  mode=THUMB  size=0xC0  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800C390(uint *param_1,int param_2)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 1) = (byte)param_1[1] & 0xbf;
  if (-1 < (int)((uint)*(byte *)((int)param_1 + 1) * 0x2000000)) {
    return in_lr;
  }
  if ((*param_1 & 0x7fffff) >> 0xf == 0x5f) {
    return in_lr;
  }
  uVar1 = *(ushort *)((int)param_1 + 2);
  if ((uVar1 & 0x780) != 0) {
    *(ushort *)((int)param_1 + 2) =
         (ushort)_DAT_0800c3e8 & uVar1 | (ushort)((((uVar1 & 0x7ff) >> 7) - 1 & 0xf) << 7);
  }
  uVar3 = (*param_1 & 0x7fffff) >> 0xf;
  if (uVar3 < 5) {
    switch(*(uint *)(uVar3 * 4 + _DAT_0800c3ec) & 0xfffffffe) {
    case 0x800c404:
      if (param_2 == 0) goto LAB_0800c420;
      break;
    case 0x800c40a:
      if (param_2 == 1) goto LAB_0800c420;
      break;
    case 0x800c410:
      if (param_2 == 2) goto LAB_0800c420;
    }
    *param_1 = _DAT_0800c44c & *param_1 | 0x2f8000;
  }
LAB_0800c420:
  if (((*param_1 & 0x7800000) == 0) && (bVar2 = func_0x080d11e4(), bVar2 < 0x65)) {
    *param_1 = *param_1 & _DAT_0800c44c | 0x2f8000;
  }
  return in_lr;
}

/* --- func_0800C450 @ 0x0800C450 (260B) [PURE-C | agbcp_O2] --- */
/* func_0800C450 @ 0x0800C450 mode=THUMB size=0x104 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C450 @ 0x0800C450  mode=THUMB  size=0x120  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800C450(uint *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 in_lr;
  
  *(byte *)param_1 = (byte)*param_1 & 0xfe;
  *(ushort *)param_1 = (ushort)_DAT_0800c548 & (ushort)*param_1;
  *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf7;
  *param_1 = *param_1 & _DAT_0800c54c;
  *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) & 0xef;
  *(byte *)((int)param_1 + 3) = 0;
  *(byte *)(param_1 + 1) = (byte)param_1[1] & 0xfc;
  *(byte *)(param_1 + 2) = 0;
  puVar3 = param_1 + 6;
  iVar4 = 7;
  do {
    *(byte *)puVar3 = (byte)*puVar3 & 0xfe;
    uVar2 = _DAT_0800c550;
    puVar3 = puVar3 + 0xc;
    iVar4 = iVar4 + -1;
  } while (iVar4 != -1);
  puVar3 = param_1 + 0x66;
  iVar4 = 7;
  do {
    uVar1 = (ushort)uVar2;
    *(ushort *)puVar3 = uVar1 & (ushort)*puVar3 | 0x234;
    *(byte *)((int)puVar3 + 1) = *(byte *)((int)puVar3 + 1) & 3;
    *(ushort *)((int)puVar3 + 2) = uVar1 & *(ushort *)((int)puVar3 + 2);
    *(byte *)((int)puVar3 + 3) = *(byte *)((int)puVar3 + 3) & 3;
    *(ushort *)(puVar3 + 1) = uVar1 & (ushort)puVar3[1];
    *(byte *)((int)puVar3 + 6) = *(byte *)((int)puVar3 + 6) & 0xf8;
    puVar3 = puVar3 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != -1);
  puVar3 = param_1 + 0x76;
  iVar4 = 1;
  do {
    *(byte *)puVar3 = (byte)*puVar3 & 0xf8;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != -1);
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800C570 @ 0x0800C570 (40B) [PURE-C | agbcp_O2] --- */
/* func_0800C570 @ 0x0800C570 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C570 @ 0x0800C570  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800C570(byte *param_1)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_c;
  uint auStack_8 [2];
  
  uStack_c = 8;
  auStack_8[0] = (*param_1 & 1) * 4 + 4;
  puVar1 = &uStack_c;
  if (auStack_8[0] < 8) {
    puVar1 = auStack_8;
  }
  return CONCAT44(in_lr,*puVar1);
}

/* --- func_0800C598 @ 0x0800C598 (44B) [PURE-C | agbcp_O2] --- */
/* func_0800C598 @ 0x0800C598 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C598 @ 0x0800C598  mode=THUMB  size=0x34  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800C598(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = func_0800C570();
  if (param_2 < uVar1) {
    uVar1 = -((*param_1 & 0xfffff) >> 0xc & 1 << (param_2 & 0xff)) >> 0x1f;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800C5CC @ 0x0800C5CC (40B) [PURE-C | old_agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 func_0800C570();
extern u32 func_0800CCB8();
u32 func_0800C5CC(u8 *arg0,int arg1) {
  u32 val;
  u32 val2;
  val = func_0800C570();
  if (!((u32)arg1 < val)) {
    val2 = 0;
  } else {
    val2 = func_0800CCB8(arg0 + (arg1 * 0x30 + 0x18));
  }
  return val2;
}

/* --- func_0800C5F4 @ 0x0800C5F4 (60B) [PURE-C | agbcp_O2] --- */
/* func_0800C5F4 @ 0x0800C5F4 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C5F4 @ 0x0800C5F4  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800C5F4(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = func_0800C570();
  if (param_2 < uVar2) {
    param_1 = param_2 * 0x30 + 0x18 + param_1;
    do {
      cVar1 = func_0x0800ccac(param_1);
      if (cVar1 != '\0') goto LAB_0800c62a;
      param_1 = param_1 + 0x30;
      param_2 = param_2 + 1;
    } while (param_2 < uVar2);
  }
  param_2 = 0xffffffff;
LAB_0800c62a:
  return CONCAT44(in_lr,param_2);
}

/* --- func_0800C630 @ 0x0800C630 (48B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800C570();
extern u32 func_0800CCB8();
u32 func_0800C630(int arg0) {
  u32 val;
  int val2;
  u32 val3;
  int val4;
  val = func_0800C570();
  val4 = 0;
  val3 = 0;
  if (val3 < val) {
    arg0 = arg0 + 0x18;
    do {
      val2 = func_0800CCB8(arg0);
      if (val2 != 0) {
        val4 = val4 + 1;
      }
      arg0 = arg0 + 0x30;
      val3 = val3 + 1;
    } while (val3 < val);
  }
  return val4;
}

/* --- func_0800C660 @ 0x0800C660 (24B) [PURE-C | agbcc_O1] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
u32 func_0800C660(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    r1 = *(u8 *)(r0);
    r0 = 1;
    r0 &= r1;
    r1 = 2;
    if (r0 != 0) goto loc_0800C670;
    r1 = 1;
loc_0800C670:
    r0 = r1 + 0;
    return r1;
}

/* --- func_0800C678 @ 0x0800C678 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 func_0800C660();
extern u32 func_0800CD38();
u32 func_0800C678(u8 *arg0,int arg1) {
  u32 val;
  u32 val2;
  val = func_0800C660();
  if (!((u32)arg1 < val)) {
    val2 = 0;
  } else {
    val2 = func_0800CD38(arg0 + (arg1 * 4 + 0x1d8));
  }
  return val2;
}

/* --- func_0800C6A0 @ 0x0800C6A0 (56B) [PURE-C | agbcp_O2] --- */
/* func_0800C6A0 @ 0x0800C6A0 mode=THUMB size=0x38 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C6A0 @ 0x0800C6A0  mode=THUMB  size=0x38  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800C6A0(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = func_0800C570();
  if ((param_2 < uVar1) &&
     (uVar1 = (uint)*(ushort *)(param_1 + param_2 * 8 + 0x198) * 0x400000,
     uVar1 < _DAT_0800c6cc || uVar1 - _DAT_0800c6cc == 0)) {
    param_1 = param_1 + param_2 * 8 + 0x198;
  }
  else {
    param_1 = 0;
  }
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800C6D8 @ 0x0800C6D8 (24B) [PURE-C | agbcp_O2] --- */
/* func_0800C6D8 @ 0x0800C6D8 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C6D8 @ 0x0800C6D8  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800C6D8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((int)((uint)*(byte *)(param_1 + 2) * 0x8000000) < 0) {
    uVar1 = (uint)(*(byte *)(param_1 + 2) >> 5);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800C6F0 @ 0x0800C6F0 (48B) [PURE-C | agbcp_O2] --- */
/* func_0800C6F0 @ 0x0800C6F0 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C6F0 @ 0x0800C6F0  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800C6F0(short *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = func_0800C570(param_2);
  if (uVar1 <= param_3) {
    param_3 = func_0x080d0f4e(param_3);
  }
  *param_1 = (short)param_3 * 0x18 + 0x88;
  param_1[1] = 0x60;
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800C720 @ 0x0800C720 (40B) [PURE-C | agbcc_O1] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 func_0800C660();
extern u32 func_0800CD58();
u32 func_0800C720(u8 *arg0,int arg1) {
  u32 val;
  u32 val2;
  val = func_0800C660();
  if (!((u32)arg1 < val)) {
    val2 = 0;
  } else {
    val2 = func_0800CD58(arg0 + (arg1 * 4 + 0x1d8));
  }
  return val2;
}

/* --- func_0800C76C @ 0x0800C76C (40B) [PURE-C | agbcp_O2] --- */
/* func_0800C76C @ 0x0800C76C mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C76C @ 0x0800C76C  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800C76C(byte *param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    *param_1 = bVar1 & 0xfe | 1U - (char)((int)((uint)bVar1 << 0x1f) >> 0x1f) & 1;
  }
  return in_lr;
}

/* --- func_0800C794 @ 0x0800C794 (68B) [PURE-C | agbcp_O2] --- */
/* func_0800C794 @ 0x0800C794 mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C794 @ 0x0800C794  mode=THUMB  size=0x80  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800C794(ushort *param_1,int param_2)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_14;
  uint uStack_10;
  
  uStack_14 = _DAT_0800c7cc;
  uStack_10 = ((*param_1 & 0x7ff) >> 1) + param_2;
  puVar1 = &uStack_14;
  if (uStack_10 < _DAT_0800c7cc) {
    puVar1 = &uStack_10;
  }
  *param_1 = (ushort)_DAT_0800c7d4 & *param_1 | (ushort)((*puVar1 & _DAT_0800c7d0) << 1);
  return in_lr;
}

/* --- func_0800C7D8 @ 0x0800C7D8 (60B) [PURE-C | agbcp_O2] --- */
/* func_0800C7D8 @ 0x0800C7D8 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* --- func_0800C814 @ 0x0800C814 (60B) [PURE-C | agbcp_O2] --- */
/* func_0800C814 @ 0x0800C814 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C814 @ 0x0800C814  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800C814(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = func_0800C570();
  if (param_2 < uVar1) {
    uVar1 = (*param_1 & 0xfffff) >> 0xc;
    uVar2 = 1 << (param_2 & 0xff);
    if ((uVar1 & uVar2) == 0) {
      *param_1 = _DAT_0800c84c & *param_1 | (uVar1 | uVar2 & 0xff) << 0xc;
    }
  }
  return in_lr;
}

/* --- func_0800C850 @ 0x0800C850 (56B) [PURE-C | agbcp_O2] --- */
/* func_0800C850 @ 0x0800C850 mode=THUMB size=0x38 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C850 @ 0x0800C850  mode=THUMB  size=0x44  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800C850(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = func_0800C570();
  if (param_2 < uVar1) {
    uVar1 = (*param_1 & 0xfffff) >> 0xc;
    uVar2 = 1 << (param_2 & 0xff);
    if ((uVar1 & uVar2) != 0) {
      *param_1 = _DAT_0800c884 & *param_1 | (uVar1 & ~uVar2) << 0xc;
    }
  }
  return in_lr;
}

/* --- func_0800C894 @ 0x0800C894 (40B) [PURE-C | old_agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 func_0800C570();
extern u32 func_0800CCD0();
u32 func_0800C894(u8 *arg0,int arg1) {
  u32 val;
  u32 val2;
  val = func_0800C570();
  if (!((u32)arg1 < val)) {
    val2 = 0;
  } else {
    val2 = func_0800CCD0(arg0 + (arg1 * 0x30 + 0x18));
  }
  return val2;
}

/* --- func_0800C8BC @ 0x0800C8BC (60B) [PURE-C | agbcp_O2] --- */
/* func_0800C8BC @ 0x0800C8BC mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C8BC @ 0x0800C8BC  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800C8BC(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  while (iVar2 = func_0800C5F4(param_1,iVar2), -1 < iVar2) {
    cVar1 = func_0800CCE8(param_1 + iVar2 * 0x30 + 0x18,param_2);
    if (cVar1 != '\0') goto LAB_0800c8f2;
    iVar2 = iVar2 + 1;
  }
  iVar2 = -1;
LAB_0800c8f2:
  return CONCAT44(in_lr,iVar2);
}

/* --- func_0800C8F8 @ 0x0800C8F8 (36B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800C570();
extern u32 func_0800CD20();
void func_0800C8F8(u8 *arg0,int arg1) {
  u32 val;
  val = func_0800C570();
  if ((u32)arg1 < val) {
    func_0800CD20(arg0 + (arg1 * 0x30 + 0x18));
  }
}

/* --- func_0800C91C @ 0x0800C91C (120B) [PURE-C | agbcp_O2] --- */
/* func_0800C91C @ 0x0800C91C mode=THUMB size=0x78 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C91C @ 0x0800C91C  mode=THUMB  size=0x78  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800C91C(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar1 = func_0800C894();
  if (iVar1 != 0) {
    uVar2 = func_0x0809b220();
    if (((*(byte *)(param_1 + 4) & 3) << 8 | (uint)*(byte *)(param_1 + 3)) < uVar2) {
      *(char *)(param_1 + 3) = (char)uVar2;
      *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfc | (byte)(uVar2 >> 8) & 3;
      uVar3 = func_0809B1F4(iVar1);
      uVar2 = func_0x080d3b78();
      if (0xc < uVar2) {
        uVar2 = 0xc;
      }
      func_080D3994(param_1 + 8,uVar3,uVar2);
      *(undefined1 *)(param_1 + 8 + uVar2) = 0;
    }
    func_0800C8F8(param_1,param_2);
  }
  return in_lr;
}

/* --- func_0800C994 @ 0x0800C994 (36B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800C660();
extern u32 func_0800CD78();
void func_0800C994(u8 *arg0,int arg1) {
  u32 val;
  val = func_0800C660();
  if ((u32)arg1 < val) {
    func_0800CD78(arg0 + (arg1 * 4 + 0x1d8));
  }
}

/* --- func_0800C9B8 @ 0x0800C9B8 (52B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800C570();
void func_0800C9B8(int arg0,u32 arg1) {
  u32 val;
  s16 *mem_ptr;
  val = func_0800C570();
  if (arg1 < val) {
    mem_ptr = (u16 *)(arg0 + arg1 * 8 + 0x198);
    *mem_ptr = (u16)0xFFFFFC00 & *mem_ptr | 0x234;
  }
}

/* --- func_0800C9EC @ 0x0800C9EC (400B) [PURE-C | agbcp_O2] --- */
/* func_0800C9EC @ 0x0800C9EC mode=THUMB size=0x190 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800C9EC @ 0x0800C9EC  mode=THUMB  size=0x190  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800C9EC(uint *param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 in_lr;
  uint uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [8];
  uint uStack_28;
  undefined1 *puStack_24;
  
  uVar7 = *param_1;
  uVar4 = ((uVar7 & 0xfffff) >> 0xc & _DAT_0800caa8) + ((uVar7 & 0xfffff) >> 0xd & _DAT_0800caa8);
  uVar4 = (uVar4 & _DAT_0800caac) + (uVar4 >> 2 & _DAT_0800caac);
  uVar4 = (uVar4 & _DAT_0800cab0) + (uVar4 >> 4 & _DAT_0800cab0);
  uVar4 = (uVar4 & _DAT_0800cab4) + (uVar4 >> 8 & _DAT_0800cab4) & _DAT_0800cab8;
  *param_1 = uVar7 & _DAT_0800cabc;
  uStack_28 = func_0800C570(param_1);
  uVar7 = 0;
  if (uStack_28 != 0) {
    puStack_24 = auStack_30;
    puVar9 = param_1 + 0x66;
    puVar8 = param_1 + 6;
    do {
      cVar2 = func_0x0800ccac(puVar8);
      if ((cVar2 == '\0') && (iVar5 = func_0800CCD0(puVar8), iVar5 != 0)) {
        if (((int)((uint)*(byte *)((int)param_1 + 2) * 0x8000000) < 0) &&
           (uVar7 == *(byte *)((int)param_1 + 2) >> 5)) {
LAB_0800caa0:
          func_0809BCF0(iVar5);
        }
        else {
          cVar2 = func_0x0809b4fc(iVar5);
          if (cVar2 == '\0') {
            iVar6 = func_0809BCAC(iVar5);
            if (iVar6 == 0) goto LAB_0800caa0;
            if ((uVar4 != 0) && (func_0809B114(&uStack_38,iVar5), (uStack_38 & 0x3ff) == 0x11)) {
              uVar4 = uVar4 - 1;
              func_0809BCF0(iVar5);
            }
          }
        }
        func_0809BD38(iVar5);
        cVar2 = func_0809BCC0(iVar5);
        if (cVar2 != '\0') {
          func_0809B114(puStack_24,iVar5);
          bVar3 = func_0809BCFC(iVar5);
          func_080D3994(&uStack_38,puStack_24,6);
          bVar1 = uStack_34._2_1_ & 0xf8;
          uStack_34._0_3_ = CONCAT12(bVar1 | bVar3 & 7,(undefined2)uStack_34);
          *puVar9 = uStack_38;
          puVar9[1] = uStack_34;
        }
      }
      puVar9 = puVar9 + 2;
      puVar8 = puVar8 + 0xc;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uStack_28);
  }
  uVar4 = func_0800C660(param_1);
  uVar7 = 0;
  if (uVar4 != 0) {
    param_1 = param_1 + 0x76;
    do {
      cVar2 = func_0x0800cd38(param_1);
      if (cVar2 != '\0') {
        func_0800CD88(param_1);
      }
      param_1 = param_1 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  return in_lr;
}

/* --- func_0800CB7C @ 0x0800CB7C (68B) [PURE-C | agbcp_O2] --- */
/* func_0800CB7C @ 0x0800CB7C mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800CB7C @ 0x0800CB7C  mode=THUMB  size=0x50  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800CB7C(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = func_0800C570();
  if (uVar2 <= param_2) {
    param_2 = func_0x080d0f4e(param_2);
  }
  cVar1 = func_0x0800ccac(param_1 + param_2 * 0x30 + 0x18);
  if (cVar1 == '\0') {
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0x1f | 0x10 | (byte)(param_2 << 5);
  }
  return in_lr;
}

/* --- func_0800CBCC @ 0x0800CBCC (224B) [PURE-C | agbcp_O2] --- */
/* func_0800CBCC @ 0x0800CBCC mode=THUMB size=0xE0 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800CBCC @ 0x0800CBCC  mode=THUMB  size=0xEC  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800CBCC(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  undefined1 auStack_60 [6];
  undefined1 uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  ushort uStack_54;
  undefined1 auStack_50 [44];
  uint uStack_24;
  undefined4 uStack_20;
  
  cVar4 = func_0800C720();
  if (cVar4 == '\0') {
    uVar5 = 0xffffffff;
  }
  else {
    func_0x0800cdb0(param_1 + param_2 * 4 + 0x1d8);
    func_0x0800c748(&uStack_24,param_1,param_2);
    uStack_20 = uStack_24;
    uVar3 = uStack_20;
    uStack_20._0_2_ = (ushort)uStack_24;
    uStack_20._2_2_ = (ushort)(uStack_24 >> 0x10);
    uVar2 = (ushort)_DAT_0800cca8;
    uVar1 = uVar2 & uStack_58;
    uStack_58._1_1_ = (byte)(uVar1 >> 8);
    uStack_58 = CONCAT11(uStack_58._1_1_ & 3 | (byte)((uStack_24 & 0x3f) << 2),(char)uVar1) | 0x11;
    uVar1 = uVar2 & uStack_56 | (ushort)uStack_20 >> 6;
    uStack_56._1_1_ = (byte)(uVar1 >> 8);
    uStack_56 = CONCAT11(uStack_56._1_1_ & 3 | (byte)((uStack_20._2_2_ & 0x3f) << 2),(char)uVar1);
    uStack_54 = uVar2 & uStack_54 | uStack_20._2_2_ >> 6;
    uStack_20 = uVar3;
    func_080D3994(auStack_60,&uStack_58,6);
    uStack_5a = 3;
    func_0809BC8C(auStack_50,auStack_60,0,0);
    uVar5 = func_0x080d11e4();
    uVar5 = func_0x080d0ed0(uVar5,10);
    func_0809B2A8(auStack_50,uVar5);
    uVar5 = func_0800C8BC(param_1,auStack_50);
  }
  return CONCAT44(in_lr,uVar5);
}

/* --- func_0800CCB8 @ 0x0800CCB8 (24B) [PURE-C | agbcp_O2] --- */
/* func_0800CCB8 @ 0x0800CCB8 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800CCB8 @ 0x0800CCB8  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800CCB8(byte *param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)0x0;
  if ((*param_1 & 1) != 0) {
    pbVar1 = param_1 + 4;
  }
  return CONCAT44(in_lr,pbVar1);
}

/* --- func_0800CCD0 @ 0x0800CCD0 (24B) [PURE-C | agbcp_O2] --- */
/* func_0800CCD0 @ 0x0800CCD0 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800CCD0 @ 0x0800CCD0  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800CCD0(byte *param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)0x0;
  if ((*param_1 & 1) != 0) {
    pbVar1 = param_1 + 4;
  }
  return CONCAT44(in_lr,pbVar1);
}

/* --- func_0800CCE8 @ 0x0800CCE8 (56B) [PURE-C | agbcp_O2] --- */
/* func_0800CCE8 @ 0x0800CCE8 mode=THUMB size=0x38 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800CCE8 @ 0x0800CCE8  mode=THUMB  size=0x38  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800CCE8(byte *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*param_1 & 1) == 0) {
    if (param_1 + 4 != (byte *)0x0) {
      func_080D7C40(param_1 + 4);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x24);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x28);
    }
    *param_1 = *param_1 | 1;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800CD20 @ 0x0800CD20 (24B) [PURE-C | agbcp_O2] --- */
/* func_0800CD20 @ 0x0800CD20 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800CD20 @ 0x0800CD20  mode=THUMB  size=0x20  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800CD20(byte *param_1)

{
  undefined4 in_lr;
  
  if ((*param_1 & 1) != 0) {
    *param_1 = *param_1 & 0xfe;
  }
  return in_lr;
}

/* --- func_0800CD40 @ 0x0800CD40 (24B) [PURE-C | agbcp_O2] --- */
/* func_0800CD40 @ 0x0800CD40 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800CD40 @ 0x0800CD40  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800CD40(uint *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((int)(*param_1 * 0x20000000) < 0) {
    uVar1 = *param_1 & 3;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800CD58 @ 0x0800CD58 (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
u32 func_0800CD58(u8 *arg0) {
  u32 val;
  val = 0;
  if ((*(int *)arg0 * 0x20000000 < 0) && ((*arg0 & 3) == 0)) {
    val = 1;
  }
  return val;
}

/* --- func_0800CD88 @ 0x0800CD88 (40B) [PURE-C | agbcp_O2] --- */
/* func_0800CD88 @ 0x0800CD88 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800CD88 @ 0x0800CD88  mode=THUMB  size=0x34  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800CD88(byte *param_1)

{
  undefined4 in_lr;
  
  if ((*param_1 & 3) != 0) {
    *param_1 = *param_1 & 0xfc | ((byte)*(undefined4 *)param_1 & 3) - 1 & 3;
  }
  return in_lr;
}

/* --- func_0800CDBC @ 0x0800CDBC (156B) [PURE-C | agbcp_O2] --- */
/* func_0800CDBC @ 0x0800CDBC mode=THUMB size=0x9C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800CDBC @ 0x0800CDBC  mode=THUMB  size=0xB8  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800CDBC(uint *param_1)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(byte *)param_1 = (byte)*param_1 & 0xfe;
  *(ushort *)param_1 = (ushort)_DAT_0800ce48 & (ushort)*param_1;
  *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xe7;
  *param_1 = *param_1 & _DAT_0800ce4c;
  *(byte *)((int)param_1 + 3) = *(byte *)((int)param_1 + 3) & 0x1f;
  *(ushort *)(param_1 + 1) = (ushort)_DAT_0800ce50 & (ushort)param_1[1];
  param_1[1] = param_1[1] & _DAT_0800ce54;
  *(byte *)(param_1 + 3) = 0;
  *(byte *)(param_1 + 7) = 0;
  puVar2 = param_1 + 0xb;
  iVar3 = 0xf;
  do {
    func_0x0800d9fc(puVar2);
    puVar2 = puVar2 + 0xf;
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  pbVar1 = (byte *)((int)param_1 + 7);
  iVar3 = 2;
  do {
    *pbVar1 = 0xff;
    iVar3 = iVar3 + -1;
    pbVar1 = pbVar1 + 1;
  } while (0 < iVar3);
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800CE74 @ 0x0800CE74 (40B) [PURE-C | agbcp_O2] --- */
/* func_0800CE74 @ 0x0800CE74 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800CE74 @ 0x0800CE74  mode=THUMB  size=0x34  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800CE74(byte *param_1)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_c;
  uint auStack_8 [2];
  
  uStack_c = 0x10;
  auStack_8[0] = (*param_1 & 1) * 8 + 8;
  puVar1 = &uStack_c;
  if (auStack_8[0] < 0x10) {
    puVar1 = auStack_8;
  }
  return CONCAT44(in_lr,*puVar1);
}

/* --- func_0800CEA8 @ 0x0800CEA8 (44B) [PURE-C | agbcp_O2] --- */
/* func_0800CEA8 @ 0x0800CEA8 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800CEA8 @ 0x0800CEA8  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800CEA8(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = func_0800CE74();
  if (param_2 < uVar1) {
    uVar1 = -((*param_1 & 0x1fffffff) >> 0xd & 1 << (param_2 & 0xff)) >> 0x1f;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800CED4 @ 0x0800CED4 (44B) [PURE-C | agbcp_O2] --- */
/* func_0800CED4 @ 0x0800CED4 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800CED4 @ 0x0800CED4  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800CED4(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = func_0x0800ce9c();
  if (param_2 < uVar1) {
    uVar1 = -((*(byte *)(param_1 + 3) & 0x7f) >> 5 & 1 << (param_2 & 0xff)) >> 0x1f;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800CF10 @ 0x0800CF10 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 func_0800CE74();
u32 func_0800CF10(int arg0, u32 arg1) {
  if (arg1 < func_0800CE74()) {
    return func_0800DA2C(arg0 + 0x2c + (arg1 * 0x3c));
  }
  return 0;
}

/* --- func_0800CF38 @ 0x0800CF38 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 func_0800CE74();
u32 func_0800CF38(int arg0, u32 arg1) {
  if (arg1 < func_0800CE74()) {
    return func_0800DA48(arg0 + 0x2c + (arg1 * 0x3c));
  }
  return 0;
}

/* --- func_0800CF60 @ 0x0800CF60 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 func_0800CE74();
u32 func_0800CF60(int arg0, u32 arg1) {
  if (arg1 < func_0800CE74()) {
    return func_0800DA14(arg0 + 0x2c + (arg1 * 0x3c));
  }
  return 0;
}

/* --- func_0800CF88 @ 0x0800CF88 (60B) [PURE-C | agbcp_O2] --- */
/* func_0800CF88 @ 0x0800CF88 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800CF88 @ 0x0800CF88  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800CF88(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = func_0800CE74();
  if (param_2 < uVar2) {
    param_1 = param_2 * 0x3c + 0x2c + param_1;
    do {
      cVar1 = func_0x0800da08(param_1);
      if (cVar1 != '\0') goto LAB_0800cfbe;
      param_1 = param_1 + 0x3c;
      param_2 = param_2 + 1;
    } while (param_2 < uVar2);
  }
  param_2 = 0xffffffff;
LAB_0800cfbe:
  return CONCAT44(in_lr,param_2);
}

/* --- func_0800CFC4 @ 0x0800CFC4 (48B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800CE74();
extern u32 func_0800DA2C();
u32 func_0800CFC4(int arg0) {
  u32 val;
  int val2;
  u32 val3;
  int val4;
  val = func_0800CE74();
  val4 = 0;
  val3 = 0;
  if (val3 < val) {
    arg0 = arg0 + 0x2c;
    do {
      val2 = func_0800DA2C(arg0);
      if (val2 != 0) {
        val4 = val4 + 1;
      }
      arg0 = arg0 + 0x3c;
      val3 = val3 + 1;
    } while (val3 < val);
  }
  return val4;
}

/* --- func_0800CFF4 @ 0x0800CFF4 (48B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800CE74();
extern u32 func_0800DA48();
u32 func_0800CFF4(int arg0) {
  u32 val;
  int val2;
  u32 val3;
  int val4;
  val = func_0800CE74();
  val4 = 0;
  val3 = 0;
  if (val3 < val) {
    arg0 = arg0 + 0x2c;
    do {
      val2 = func_0800DA48(arg0);
      if (val2 != 0) {
        val4 = val4 + 1;
      }
      arg0 = arg0 + 0x3c;
      val3 = val3 + 1;
    } while (val3 < val);
  }
  return val4;
}

/* --- func_0800D024 @ 0x0800D024 (52B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800CE74();
extern u32 func_0800DA08();
u32 func_0800D024(int arg0) {
  char val;
  u32 val2;
  u32 val3;
  int val4;
  val2 = func_0800CE74();
  val4 = 0;
  val3 = 0;
  if (val3 < val2) {
    arg0 = arg0 + 0x2c;
    do {
      val = func_0800DA08(arg0);
      if (val == '\0') {
        val4 = val4 + 1;
      }
      arg0 = arg0 + 0x3c;
      val3 = val3 + 1;
    } while (val3 < val2);
  }
  return val4;
}

/* --- func_0800D058 @ 0x0800D058 (28B) [PURE-C | agbcp_O2] --- */
/* func_0800D058 @ 0x0800D058 mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800D058 @ 0x0800D058  mode=THUMB  size=0x1C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800D058(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 3) < '\0') {
    uVar1 = *(byte *)(param_1 + 4) & 0xf;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800D074 @ 0x0800D074 (76B) [PURE-C | agbcp_O2] --- */
/* func_0800D074 @ 0x0800D074 mode=THUMB size=0x4C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800D074 @ 0x0800D074  mode=THUMB  size=0x5C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800D074(short *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  undefined4 in_lr;
  
  uVar1 = func_0800CE74(param_2);
  if (uVar1 <= param_3) {
    param_3 = func_0x080d0f4e(param_3);
  }
  sVar2 = ((ushort)param_3 & 3) * 0x28;
  if (param_3 < 8) {
    sVar2 = sVar2 + 0xd8;
  }
  else {
    sVar2 = sVar2 + 0x1c8;
  }
  sVar3 = 0x90;
  if ((param_3 & 7) < 4) {
    sVar3 = 0x68;
  }
  *param_1 = sVar2;
  param_1[1] = sVar3;
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800D0D0 @ 0x0800D0D0 (136B) [PURE-C | agbcp_O2] --- */
/* func_0800D0D0 @ 0x0800D0D0 mode=THUMB size=0x88 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800D0D0 @ 0x0800D0D0  mode=THUMB  size=0x88  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800D0D0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar2 = func_0800CE74();
  iVar3 = func_0800D024(param_1);
  iVar2 = iVar2 - iVar3;
  if (iVar2 < 1) {
LAB_0800d0ec:
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = 0xffffffff;
    uVar4 = func_0x0800ce9c(param_1);
    uVar7 = 0;
    if (uVar4 != 0) {
      do {
        pcVar6 = (char *)(param_1 + 7 + uVar7);
        if (((*pcVar6 == -1) || (iVar3 = func_0800DA14(param_1 + *pcVar6 * 0x3c + 0x2c), iVar3 == 0)
            ) || (cVar1 = func_0x0809b8b0(), cVar1 == '\0')) {
          if (uVar5 == 0xffffffff) {
            uVar5 = uVar7;
          }
        }
        else {
          iVar2 = iVar2 + -1;
          if (iVar2 < 1) goto LAB_0800d0ec;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar4);
    }
  }
  return CONCAT44(in_lr,uVar5);
}

/* --- func_0800D158 @ 0x0800D158 (92B) [PURE-C | agbcp_O2] --- */
/* func_0800D158 @ 0x0800D158 mode=THUMB size=0x5C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800D158 @ 0x0800D158  mode=THUMB  size=0x5C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800D158(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  uVar1 = func_0x0800ce9c();
  if ((((param_2 < uVar1) && (uVar1 = (uint)*(char *)(param_1 + 7 + param_2), -1 < (int)uVar1)) &&
      (uVar2 = func_0800CE74(param_1), uVar1 < uVar2)) &&
     (iVar3 = func_0800DA14(param_1 + uVar1 * 0x3c + 0x2c), iVar3 != 0)) {
    uVar4 = 0;
    uVar1 = func_0809B8D4();
    if ((0x14 < uVar1) || (uVar1 = func_0809B8BC(iVar3), 0x1d < uVar1)) {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return CONCAT44(in_lr,uVar4);
}

/* --- func_0800D1B4 @ 0x0800D1B4 (36B) [PURE-C | agbcp_O2] --- */
/* func_0800D1B4 @ 0x0800D1B4 mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800D1B4 @ 0x0800D1B4  mode=THUMB  size=0x24  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800D1B4(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = func_0x0800ce9c();
  if (param_2 < uVar1) {
    iVar2 = (int)*(char *)(param_1 + 7 + param_2);
  }
  else {
    iVar2 = -1;
  }
  return CONCAT44(in_lr,iVar2);
}

/* --- func_0800D1D8 @ 0x0800D1D8 (36B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 func_0800D0C0();
u32 *func_0800D1D8(u32 *arg0) {
  struct { u16 a; u16 b; } local_buf;
  func_0800D0C0(&local_buf);
  local_buf.a += 0x20;
  *arg0 = *(u32 *)&local_buf;
  return arg0;
}

/* --- func_0800D214 @ 0x0800D214 (40B) [PURE-C | agbcp_O2] --- */
/* func_0800D214 @ 0x0800D214 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800D214 @ 0x0800D214  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800D214(byte *param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    *param_1 = bVar1 & 0xfe | 1U - (char)((int)((uint)bVar1 << 0x1f) >> 0x1f) & 1;
  }
  return in_lr;
}

/* --- func_0800D23C @ 0x0800D23C (68B) [PURE-C | agbcp_O2] --- */
/* func_0800D23C @ 0x0800D23C mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800D23C @ 0x0800D23C  mode=THUMB  size=0x80  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800D23C(ushort *param_1,int param_2)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_14;
  uint uStack_10;
  
  uStack_14 = _DAT_0800d274;
  uStack_10 = ((*param_1 & 0x7ff) >> 1) + param_2;
  puVar1 = &uStack_14;
  if (uStack_10 < _DAT_0800d274) {
    puVar1 = &uStack_10;
  }
  *param_1 = (ushort)_DAT_0800d27c & *param_1 | (ushort)((*puVar1 & _DAT_0800d278) << 1);
  return in_lr;
}

/* --- func_0800D280 @ 0x0800D280 (60B) [PURE-C | agbcp_O2] --- */
/* func_0800D280 @ 0x0800D280 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* --- func_0800D2BC @ 0x0800D2BC (64B) [PURE-C | agbcp_O2] --- */
/* func_0800D2BC @ 0x0800D2BC mode=THUMB size=0x40 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800D2BC @ 0x0800D2BC  mode=THUMB  size=0x40  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800D2BC(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = func_0800CE74();
  if (param_2 < uVar1) {
    uVar1 = (*param_1 & 0x1fffffff) >> 0xd;
    uVar2 = 1 << (param_2 & 0xff);
    if ((uVar1 & uVar2) == 0) {
      *param_1 = _DAT_0800d2f8 & *param_1 | ((uVar1 | uVar2) & _DAT_0800d2f4) << 0xd;
    }
  }
  return in_lr;
}

/* --- func_0800D2FC @ 0x0800D2FC (56B) [PURE-C | agbcp_O2] --- */
/* func_0800D2FC @ 0x0800D2FC mode=THUMB size=0x38 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800D2FC @ 0x0800D2FC  mode=THUMB  size=0x38  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800D2FC(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = func_0800CE74();
  if (param_2 < uVar1) {
    uVar1 = (*param_1 & 0x1fffffff) >> 0xd;
    uVar2 = 1 << (param_2 & 0xff);
    if ((uVar1 & uVar2) != 0) {
      *param_1 = _DAT_0800d330 & *param_1 | (uVar1 & ~uVar2) << 0xd;
    }
  }
  return in_lr;
}

/* --- func_0800D334 @ 0x0800D334 (56B) [PURE-C | agbcp_O2] --- */
/* func_0800D334 @ 0x0800D334 mode=THUMB size=0x38 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800D334 @ 0x0800D334  mode=THUMB  size=0x38  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800D334(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = func_0x0800ce9c();
  if (param_2 < uVar1) {
    uVar1 = (*(byte *)(param_1 + 3) & 0x7f) >> 5;
    uVar2 = 1 << (param_2 & 0xff);
    if ((uVar1 & uVar2) == 0) {
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0x9f | (byte)((uVar1 | uVar2 & 3) << 5);
    }
  }
  return in_lr;
}

/* --- func_0800D36C @ 0x0800D36C (52B) [PURE-C | agbcp_O2] --- */
/* func_0800D36C @ 0x0800D36C mode=THUMB size=0x34 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800D36C @ 0x0800D36C  mode=THUMB  size=0x34  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800D36C(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = func_0x0800ce9c();
  if (param_2 < uVar1) {
    uVar1 = (*(byte *)(param_1 + 3) & 0x7f) >> 5;
    uVar2 = 1 << (param_2 & 0xff);
    if ((uVar1 & uVar2) != 0) {
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0x9f | (byte)((uVar1 & ~uVar2) << 5);
    }
  }
  return in_lr;
}

/* --- func_0800D3A0 @ 0x0800D3A0 (24B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
void func_0800D3A0(u8 *p) {
  if ((s32)(p[1] << 28) >= 0) {
    u32 v = 8;
    v |= p[1];
    p[1] = v;
  }
}

/* --- func_0800D3B8 @ 0x0800D3B8 (24B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
void func_0800D3B8(u8 *p) {
  if ((s32)(p[1] << 27) >= 0) {
    u32 v = 0x10;
    v |= p[1];
    p[1] = v;
  }
}

/* --- func_0800D3D0 @ 0x0800D3D0 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 func_0800CE74();
u32 func_0800D3D0(int arg0, u32 arg1) {
  if (arg1 < func_0800CE74()) {
    return func_0800DA7C(arg0 + 0x2c + (arg1 * 0x3c));
  }
  return 0;
}

/* --- func_0800D3F8 @ 0x0800D3F8 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 func_0800CE74();
u32 func_0800D3F8(int arg0, u32 arg1) {
  if (arg1 < func_0800CE74()) {
    return func_0800DA98(arg0 + 0x2c + (arg1 * 0x3c));
  }
  return 0;
}

/* --- func_0800D420 @ 0x0800D420 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 func_0800CE74();
u32 func_0800D420(int arg0, u32 arg1) {
  if (arg1 < func_0800CE74()) {
    return func_0800DA64(arg0 + 0x2c + (arg1 * 0x3c));
  }
  return 0;
}

/* --- func_0800D448 @ 0x0800D448 (60B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 func_0800CF88();
extern u32 func_0800DAB4();
int func_0800D448(int arg0, u32 arg1) {
  int i = func_0800CF88(arg0, 0);
  while (i >= 0) {
    if ((u8)func_0800DAB4(arg0 + 0x2c + (i * 0x3c), arg1)) {
      return i;
    }
    i = func_0800CF88(arg0, i + 1);
  }
  return -1;
}

/* --- func_0800D484 @ 0x0800D484 (60B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 func_0800CF88();
extern u32 func_0800DAE4();
int func_0800D484(int arg0, u32 arg1) {
  int i = func_0800CF88(arg0, 0);
  while (i >= 0) {
    if ((u8)func_0800DAE4(arg0 + 0x2c + (i * 0x3c), arg1)) {
      return i;
    }
    i = func_0800CF88(arg0, i + 1);
  }
  return -1;
}

/* --- func_0800D4C0 @ 0x0800D4C0 (20B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800DB14();
void func_0800D4C0(u8 *arg0,int arg1) {
  func_0800DB14(arg0 + (arg1 * 0x3c + 0x2c));
}

/* --- func_0800D4D4 @ 0x0800D4D4 (220B) [PURE-C | agbcp_O2] --- */
/* func_0800D4D4 @ 0x0800D4D4 mode=THUMB size=0xDC (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800D4D4 @ 0x0800D4D4  mode=THUMB  size=0xDC  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800D4D4(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar1 = func_0800D420();
  if (iVar1 != 0) {
    uVar2 = func_0x0809b220();
    iVar3 = func_0800D3D0(param_1,param_2);
    if (iVar3 == 0) {
      if ((*(uint *)(param_1 + 4) & 0xffffff) >> 0xe < uVar2) {
        *(uint *)(param_1 + 4) =
             _DAT_0800d5ac & *(uint *)(param_1 + 4) | (uVar2 & _DAT_0800d5a8) << 0xe;
        uVar4 = func_0809B1F4(iVar1);
        uVar2 = func_0x080d3b78();
        if (0xc < uVar2) {
          uVar2 = 0xc;
        }
        func_080D3994(param_1 + 0x1c,uVar4,uVar2);
        *(undefined1 *)(param_1 + 0x1c + uVar2) = 0;
      }
    }
    else if ((*(ushort *)(param_1 + 4) & 0x3fff) >> 4 < uVar2) {
      *(ushort *)(param_1 + 4) =
           (ushort)_DAT_0800d54c & *(ushort *)(param_1 + 4) | (ushort)((uVar2 & _DAT_0800d548) << 4)
      ;
      uVar4 = func_0809B1F4(iVar1);
      uVar2 = func_0x080d3b78();
      if (0xc < uVar2) {
        uVar2 = 0xc;
      }
      func_080D3994(param_1 + 0xc,uVar4,uVar2);
      *(undefined1 *)(param_1 + 0xc + uVar2) = 0;
    }
    func_0800D4C0(param_1,param_2);
  }
  return in_lr;
}

/* --- func_0800D5B0 @ 0x0800D5B0 (604B) [PURE-C | agbcp_O2] --- */
/* func_0800D5B0 @ 0x0800D5B0 mode=THUMB size=0x25C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800D5B0 @ 0x0800D5B0  mode=THUMB  size=0x25C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800D5B0(uint *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  undefined4 in_lr;
  ushort auStack_40 [3];
  undefined1 uStack_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  ushort uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar6 = _DAT_0800d790;
  uVar5 = _DAT_0800d78c;
  uVar4 = _DAT_0800d788;
  uVar3 = _DAT_0800d784;
  uVar14 = _DAT_0800d780;
  uVar12 = *param_1;
  uVar8 = ((uVar12 & 0x1fffffff) >> 0xd & _DAT_0800d780) +
          ((uVar12 & 0x1fffffff) >> 0xe & _DAT_0800d780);
  uVar8 = (uVar8 & _DAT_0800d784) + (uVar8 >> 2 & _DAT_0800d784);
  uVar8 = (uVar8 & _DAT_0800d788) + (uVar8 >> 4 & _DAT_0800d788);
  uVar8 = (uVar8 & _DAT_0800d78c) + (uVar8 >> 8 & _DAT_0800d78c);
  uVar11 = uVar8 & _DAT_0800d790;
  uVar8 = uVar8 >> 0x10 & _DAT_0800d790;
  *param_1 = uVar12 & _DAT_0800d794;
  iVar16 = uVar11 + uVar8 +
           (((*(byte *)((int)param_1 + 3) & 0x7f) >> 5 & uVar14) +
            ((*(byte *)((int)param_1 + 3) & 0x7f) >> 6 & uVar14) & uVar3 & uVar4 & uVar5 & uVar6);
  uStack_28 = func_0x0800ce9c(param_1);
  uVar14 = 0;
  if (uStack_28 != 0) {
    do {
      iVar9 = (int)*(char *)((int)param_1 + uVar14 + 7);
      if (((-1 < iVar9) && (iVar9 = func_0800DA64(param_1 + iVar9 * 0xf + 0xb), iVar9 != 0)) &&
         (cVar7 = func_0x0809b8b0(), cVar7 != '\0')) {
        if (((*(byte *)((int)param_1 + 3) & 0x7f) >> 5 & 1 << (uVar14 & 0xff)) != 0) {
          iVar16 = iVar16 + -1;
          func_0809B8F0(iVar9);
        }
        func_0x0800d0c0(&uStack_30,param_1,uVar14);
        uStack_2c = uStack_30;
        uVar3 = uStack_2c;
        uStack_2c._0_2_ = (ushort)uStack_30;
        uStack_2c._2_2_ = (ushort)(uStack_30 >> 0x10);
        uVar2 = (ushort)_DAT_0800d798;
        uVar1 = uVar2 & uStack_38;
        uStack_38._1_1_ = (byte)(uVar1 >> 8);
        uStack_38 = CONCAT11(uStack_38._1_1_ & 3 | (byte)((uStack_30 & 0x3f) << 2),(char)uVar1) |
                    0x25;
        uVar1 = uVar2 & uStack_36 | (ushort)uStack_2c >> 6 & (ushort)_DAT_0800d79c;
        uStack_36._1_1_ = (byte)(uVar1 >> 8);
        uStack_36 = CONCAT11(uStack_36._1_1_ & 3 | (byte)((uStack_2c._2_2_ & 0x3f) << 2),(char)uVar1
                            );
        uStack_34 = uVar2 & uStack_34 | uStack_2c._2_2_ >> 6 & (ushort)_DAT_0800d79c;
        uStack_2c = uVar3;
        func_080D3994(auStack_40,&uStack_38,6);
        uStack_3a = 3;
        func_0x0809b124(iVar9,auStack_40);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uStack_28);
  }
  *(byte *)((int)param_1 + 3) = *(byte *)((int)param_1 + 3) & 0x9f;
  uStack_24 = func_0800CE74(param_1);
  uVar14 = 0;
  if (uStack_24 != 0) {
    puVar15 = param_1 + 0xb;
    do {
      cVar7 = func_0x0800da08(puVar15);
      if (cVar7 == '\0') {
        iVar9 = func_0800DA7C(puVar15);
        iVar10 = func_0800DA98(puVar15);
        if ((iVar9 != 0) || (iVar10 != 0)) {
          iVar13 = iVar9;
          if (iVar9 == 0) {
            iVar13 = iVar10;
          }
          if ((*(char *)((int)param_1 + 3) < '\0') && (uVar14 == ((byte)param_1[1] & 0xf))) {
            func_0809B8F0(iVar13);
          }
          else {
            cVar7 = func_0x0809b4fc(iVar13);
            if ((cVar7 == '\0') &&
               (((cVar7 = func_0x0809b8b0(iVar13), cVar7 == '\0' && (iVar16 != 0)) &&
                (func_0809B114(auStack_40,iVar13), (auStack_40[0] & 0x3ff) == 0x25)))) {
              iVar16 = iVar16 + -1;
              func_0809B8F0(iVar13);
            }
          }
          if (iVar9 == 0) {
            func_0809BFB4(iVar10);
          }
          else {
            func_0809BE74(iVar9);
          }
        }
      }
      puVar15 = puVar15 + 0xf;
      uVar14 = uVar14 + 1;
    } while (uVar14 < uStack_24);
  }
  return in_lr;
}

/* --- func_0800D80C @ 0x0800D80C (76B) [PURE-C | agbcp_O2] --- */
/* func_0800D80C @ 0x0800D80C mode=THUMB size=0x4C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800D80C @ 0x0800D80C  mode=THUMB  size=0x58  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800D80C(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = func_0800CE74();
  if (uVar2 <= param_2) {
    param_2 = func_0x080d0f4e(param_2);
  }
  cVar1 = func_0x0800da08(param_1 + param_2 * 0x3c + 0x2c);
  if (cVar1 == '\0') {
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x80;
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xf0 | (byte)param_2 & 0xf;
  }
  return in_lr;
}

/* --- func_0800D864 @ 0x0800D864 (68B) [PURE-C | agbcp_O2] --- */
/* func_0800D864 @ 0x0800D864 mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800D864 @ 0x0800D864  mode=THUMB  size=0x44  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800D864(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = func_0x0800ce9c();
  if ((((param_2 < uVar2) && (uVar2 = func_0800CE74(param_1), param_3 < uVar2)) &&
      (iVar3 = func_0800DA64(param_1 + param_3 * 0x3c + 0x2c), iVar3 != 0)) &&
     (cVar1 = func_0x0809b8b0(), cVar1 != '\0')) {
    *(char *)(param_1 + 7 + param_2) = (char)param_3;
  }
  return in_lr;
}

/* --- func_0800D8A8 @ 0x0800D8A8 (364B) [PURE-C | agbcp_O2] --- */
/* func_0800D8A8 @ 0x0800D8A8 mode=THUMB size=0x16C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800D8A8 @ 0x0800D8A8  mode=THUMB  size=0x16C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800D8A8(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 in_lr;
  undefined1 auStack_70 [6];
  undefined1 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  ushort uStack_64;
  undefined1 auStack_60 [56];
  uint uStack_28;
  undefined4 uStack_24;
  
  cVar3 = func_0800D158();
  if (cVar3 != '\0') {
    pcVar4 = (char *)(param_1 + 7 + param_2);
    cVar3 = *pcVar4;
    *pcVar4 = -1;
    func_0800D1D8(&uStack_28,param_1,param_2);
    uStack_24 = uStack_28;
    uVar6 = uStack_24;
    uStack_24._0_2_ = (ushort)uStack_28;
    uStack_24._2_2_ = (ushort)(uStack_28 >> 0x10);
    uVar2 = (ushort)_DAT_0800d9a0;
    uVar1 = uVar2 & uStack_68;
    uStack_68._1_1_ = (byte)(uVar1 >> 8);
    uStack_68 = CONCAT11(uStack_68._1_1_ & 3 | (byte)((uStack_28 & 0x3f) << 2),(char)uVar1) | 0x25;
    uVar1 = uVar2 & uStack_66 | (ushort)uStack_24 >> 6;
    uStack_66._1_1_ = (byte)(uVar1 >> 8);
    uStack_66 = CONCAT11(uStack_66._1_1_ & 3 | (byte)((uStack_24._2_2_ & 0x3f) << 2),(char)uVar1);
    uStack_64 = uVar2 & uStack_64 | uStack_24._2_2_ >> 6;
    uStack_24 = uVar6;
    func_080D3994(auStack_70,&uStack_68,6);
    uStack_6a = 2;
    iVar8 = param_1 + cVar3 * 0x3c + 0x2c;
    iVar5 = func_0800DA7C(iVar8);
    if (iVar5 != 0) {
      func_0x0809b91c();
      func_0809BD70(auStack_60,auStack_70,0,0);
      uVar6 = func_0x0809b228(iVar5);
      if (1 < uVar6 >> 1) {
        uVar7 = func_0x080d11e4();
        uVar7 = func_0x080d0f4e(uVar7,uVar6 >> 1);
        func_0809B2A8(auStack_60,uVar7);
      }
      uVar7 = func_0800D448(param_1,auStack_60);
      goto LAB_0800d9ec;
    }
    iVar5 = func_0800DA98(iVar8);
    if (iVar5 != 0) {
      func_0x0809b91c();
      func_0809BEBC(&uStack_68,auStack_70,0,0);
      uVar6 = func_0x0809b228(iVar5);
      if (1 < uVar6 >> 1) {
        uVar7 = func_0x080d11e4();
        uVar7 = func_0x080d0f4e(uVar7,uVar6 >> 1);
        func_0809B2A8(&uStack_68,uVar7);
      }
      uVar7 = func_0800D484(param_1,&uStack_68);
      goto LAB_0800d9ec;
    }
  }
  uVar7 = 0xffffffff;
LAB_0800d9ec:
  return CONCAT44(in_lr,uVar7);
}

/* --- func_0800DA14 @ 0x0800DA14 (24B) [PURE-C | agbcp_O2] --- */
/* func_0800DA14 @ 0x0800DA14 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DA14 @ 0x0800DA14  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DA14(byte *param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)0x0;
  if ((*param_1 & 1) != 0) {
    pbVar1 = param_1 + 4;
  }
  return CONCAT44(in_lr,pbVar1);
}

/* --- func_0800DA2C @ 0x0800DA2C (28B) [PURE-C | agbcp_O2] --- */
/* func_0800DA2C @ 0x0800DA2C mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DA2C @ 0x0800DA2C  mode=THUMB  size=0x1C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DA2C(byte *param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)0x0;
  if (((*param_1 & 1) != 0) && ((int)((uint)*param_1 * 0x40000000) < 0)) {
    pbVar1 = param_1 + 4;
  }
  return CONCAT44(in_lr,pbVar1);
}

/* --- func_0800DA48 @ 0x0800DA48 (28B) [PURE-C | agbcp_O2] --- */
/* func_0800DA48 @ 0x0800DA48 mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DA48 @ 0x0800DA48  mode=THUMB  size=0x1C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DA48(byte *param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)0x0;
  if (((*param_1 & 1) != 0) && (-1 < (int)((uint)*param_1 * 0x40000000))) {
    pbVar1 = param_1 + 4;
  }
  return CONCAT44(in_lr,pbVar1);
}

/* --- func_0800DA64 @ 0x0800DA64 (24B) [PURE-C | agbcp_O2] --- */
/* func_0800DA64 @ 0x0800DA64 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DA64 @ 0x0800DA64  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DA64(byte *param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)0x0;
  if ((*param_1 & 1) != 0) {
    pbVar1 = param_1 + 4;
  }
  return CONCAT44(in_lr,pbVar1);
}

/* --- func_0800DA7C @ 0x0800DA7C (28B) [PURE-C | agbcp_O2] --- */
/* func_0800DA7C @ 0x0800DA7C mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DA7C @ 0x0800DA7C  mode=THUMB  size=0x1C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DA7C(byte *param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)0x0;
  if (((*param_1 & 1) != 0) && ((int)((uint)*param_1 * 0x40000000) < 0)) {
    pbVar1 = param_1 + 4;
  }
  return CONCAT44(in_lr,pbVar1);
}

/* --- func_0800DA98 @ 0x0800DA98 (28B) [PURE-C | agbcp_O2] --- */
/* func_0800DA98 @ 0x0800DA98 mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DA98 @ 0x0800DA98  mode=THUMB  size=0x1C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DA98(byte *param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)0x0;
  if (((*param_1 & 1) != 0) && (-1 < (int)((uint)*param_1 * 0x40000000))) {
    pbVar1 = param_1 + 4;
  }
  return CONCAT44(in_lr,pbVar1);
}

/* --- func_0800DAB4 @ 0x0800DAB4 (48B) [PURE-C | agbcp_O2] --- */
/* func_0800DAB4 @ 0x0800DAB4 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DAB4 @ 0x0800DAB4  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DAB4(byte *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*param_1 & 1) == 0) {
    if (param_1 != (byte *)0xfffffffc) {
      func_080D7BC4();
    }
    *param_1 = *param_1 | 3;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800DAE4 @ 0x0800DAE4 (48B) [PURE-C | agbcp_O2] --- */
/* func_0800DAE4 @ 0x0800DAE4 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DAE4 @ 0x0800DAE4  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DAE4(byte *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*param_1 & 1) == 0) {
    if (param_1 != (byte *)0xfffffffc) {
      func_080D7B50();
    }
    uVar1 = 1;
    *param_1 = *param_1 & 0xfd | 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800DB14 @ 0x0800DB14 (24B) [PURE-C | agbcp_O2] --- */
/* func_0800DB14 @ 0x0800DB14 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DB14 @ 0x0800DB14  mode=THUMB  size=0x20  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800DB14(byte *param_1)

{
  undefined4 in_lr;
  
  if ((*param_1 & 1) != 0) {
    *param_1 = *param_1 & 0xfe;
  }
  return in_lr;
}

/* --- func_0800DB34 @ 0x0800DB34 (44B) [PURE-C | agbcp_O2] --- */
/* func_0800DB34 @ 0x0800DB34 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DB34 @ 0x0800DB34  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DB34(byte *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = _DAT_0800db48;
  if (*param_1 < 0x51) {
    uVar1 = *(undefined4 *)((uint)*param_1 * 0xc + _DAT_0800db5c);
  }
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800DB60 @ 0x0800DB60 (44B) [PURE-C | agbcp_O2] --- */
/* func_0800DB60 @ 0x0800DB60 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DB60 @ 0x0800DB60  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DB60(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = _DAT_0800db74;
  if (*param_1 < 0x51) {
    uVar1 = (uint)*(ushort *)((uint)*param_1 * 0xc + _DAT_0800db88 + 4);
  }
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800DB8C @ 0x0800DB8C (60B) [PURE-C | agbcp_O2] --- */
/* func_0800DB8C @ 0x0800DB8C mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DB8C @ 0x0800DB8C  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DB8C(byte *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = _DAT_0800dbc4;
  if ((*param_1 < 0x51) && (iVar1 = *(int *)((uint)*param_1 * 0xc + _DAT_0800dbb4 + 8), iVar1 == 0))
  {
    iVar1 = _DAT_0800dbb8;
  }
  return CONCAT44(in_lr,iVar1);
}

/* --- func_0800DBC8 @ 0x0800DBC8 (24B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800DB2C();
u32 func_0800DBC8(int arg0) {
  func_0800DB2C(arg0,0x51);
  *(u8 *)(arg0 + 1) = 0;
  return arg0;
}

/* --- func_0800DBE0 @ 0x0800DBE0 (48B) [PURE-C | agbcp_O2] --- */
/* func_0800DBE0 @ 0x0800DBE0 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DBE0 @ 0x0800DBE0  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DBE0(undefined1 *param_1,undefined1 param_2,uint param_3)

{
  undefined1 uVar1;
  uint *puVar2;
  undefined4 in_lr;
  uint uStack_10;
  uint uStack_c;
  
  uStack_c = param_3;
  *param_1 = param_2;
  if (param_3 == 0) {
    uVar1 = 1;
  }
  else {
    uStack_10 = 99;
    puVar2 = &uStack_10;
    if (param_3 < 99) {
      puVar2 = &uStack_c;
    }
    uVar1 = (undefined1)*puVar2;
  }
  param_1[1] = uVar1;
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800DC10 @ 0x0800DC10 (36B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
extern u32 func_0800DB2C();
u8 func_0800DC10(u8 *arg0) {
    u8 buf[4];
    if (arg0[1] != 0)
        return arg0[0];
    func_0800DB2C(&buf, 0x51);
    return buf[0];
}

/* --- func_0800DC34 @ 0x0800DC34 (20B) [PURE-C | agbcc_O1] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
u32 func_0800DC34(const u8 *arg0) {
    return arg0[1] == 0;
}

/* --- func_0800DC48 @ 0x0800DC48 (20B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
u32 func_0800DC48(int arg0) {
  u32 val;
  if (*(char *)(arg0 + 1) == '\0') {
    val = 0;
  }
  else {
    val = (u8)*(s32 *)(arg0 + 1);
  }
  return val;
}

/* --- func_0800DC5C @ 0x0800DC5C (48B) [PURE-C | agbcp_O2] --- */
/* func_0800DC5C @ 0x0800DC5C mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DC5C @ 0x0800DC5C  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800DC5C(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_10;
  uint uStack_c;
  
  if (*(char *)(param_1 + 1) != '\0') {
    uStack_10 = 99;
    uStack_c = (uint)*(byte *)(param_1 + 1) + param_2;
    puVar1 = &uStack_10;
    if (uStack_c < 99) {
      puVar1 = &uStack_c;
    }
    *(char *)(param_1 + 1) = (char)*puVar1;
  }
  return in_lr;
}

/* --- func_0800DC8C @ 0x0800DC8C (28B) [CFG-ASM (hermes:reg-sub-idiom+clean-c89) | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
void func_0800DC8C(int arg0, u32 arg1) {
  register int p asm("r2") = arg0;
  u32 val = *(u8 *)(p + 1);
  if (val != 0) {
    if (val > arg1) goto sub;
    val = 0;
    goto done;
sub:
    val -= arg1;
done:
    *(u8 *)(p + 1) = val;
  }
}

/* --- func_0800DCB8 @ 0x0800DCB8 (40B) [PURE-C | agbcp_O2] --- */
/* func_0800DCB8 @ 0x0800DCB8 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DCB8 @ 0x0800DCB8  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DCB8(byte *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = _DAT_0800dccc;
  if (*param_1 < 0xab) {
    uVar1 = *(undefined4 *)((uint)*param_1 * 0x10 + _DAT_0800dcdc);
  }
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800DCE0 @ 0x0800DCE0 (40B) [PURE-C | agbcp_O2] --- */
/* func_0800DCE0 @ 0x0800DCE0 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DCE0 @ 0x0800DCE0  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DCE0(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0xab) {
    uVar1 = (uint)*(ushort *)((uint)*param_1 * 0x10 + _DAT_0800dd04 + 8);
  }
  else {
    uVar1 = 0x1ac;
  }
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800DD08 @ 0x0800DD08 (52B) [PURE-C | agbcp_O2] --- */
/* func_0800DD08 @ 0x0800DD08 mode=THUMB size=0x34 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DD08 @ 0x0800DD08  mode=THUMB  size=0x34  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DD08(byte *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0xab) {
    iVar1 = (int)*(char *)((uint)*param_1 * 0x10 + _DAT_0800dd38 + 5) + (int)(char)param_1[1];
  }
  else {
    iVar1 = -100;
  }
  return CONCAT44(in_lr,iVar1);
}

/* --- func_0800DD3C @ 0x0800DD3C (48B) [PURE-C | agbcp_O2] --- */
/* func_0800DD3C @ 0x0800DD3C mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DD3C @ 0x0800DD3C  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DD3C(byte *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0xab) {
    iVar1 = (int)*(char *)((uint)*param_1 * 0x10 + _DAT_0800dd68 + 6) + (int)(char)param_1[2];
  }
  else {
    iVar1 = 100;
  }
  return CONCAT44(in_lr,iVar1);
}

/* --- func_0800DD6C @ 0x0800DD6C (32B) [PURE-C | agbcp_O2] --- */
/* func_0800DD6C @ 0x0800DD6C mode=THUMB size=0x20 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DD6C @ 0x0800DD6C  mode=THUMB  size=0x20  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DD6C(byte *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0xab) {
    iVar1 = (int)(char)param_1[1];
  }
  else {
    iVar1 = -100;
  }
  return CONCAT44(in_lr,iVar1);
}

/* --- func_0800DD8C @ 0x0800DD8C (32B) [PURE-C | agbcp_O2] --- */
/* func_0800DD8C @ 0x0800DD8C mode=THUMB size=0x20 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DD8C @ 0x0800DD8C  mode=THUMB  size=0x20  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DD8C(byte *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0xab) {
    iVar1 = (int)(char)param_1[2];
  }
  else {
    iVar1 = 100;
  }
  return CONCAT44(in_lr,iVar1);
}

/* --- func_0800DDAC @ 0x0800DDAC (40B) [PURE-C | agbcp_O2] --- */
/* func_0800DDAC @ 0x0800DDAC mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DDAC @ 0x0800DDAC  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DDAC(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0xab) {
    uVar1 = *(byte *)((uint)*param_1 * 0x10 + _DAT_0800ddd0 + 4) & 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800DDD4 @ 0x0800DDD4 (56B) [PURE-C | agbcp_O2] --- */
/* func_0800DDD4 @ 0x0800DDD4 mode=THUMB size=0x38 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DDD4 @ 0x0800DDD4  mode=THUMB  size=0x38  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DDD4(byte *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = _DAT_0800de08;
  if ((*param_1 < 0xab) &&
     (iVar1 = *(int *)((uint)*param_1 * 0x10 + _DAT_0800ddf8 + 0xc), iVar1 == 0)) {
    iVar1 = _DAT_0800ddfc;
  }
  return CONCAT44(in_lr,iVar1);
}

/* --- func_0800DE0C @ 0x0800DE0C (92B) [PURE-C | agbcp_O2] --- */
/* func_0800DE0C @ 0x0800DE0C mode=THUMB size=0x5C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DE0C @ 0x0800DE0C  mode=THUMB  size=0x5C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800DE0C(byte *param_1,char param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*param_1 < 0xab) {
    iVar1 = (int)(char)param_1[1] + (int)param_2;
    iVar2 = -0x80;
    if ((-0x81 < iVar1) && (iVar2 = iVar1, 0x7f < iVar1)) {
      iVar2 = 0x7f;
    }
    param_1[1] = (byte)iVar2;
    iVar1 = (int)(char)param_1[2] + (int)param_3;
    iVar2 = -0x80;
    if ((-0x81 < iVar1) && (iVar2 = iVar1, 0x7f < iVar1)) {
      iVar2 = 0x7f;
    }
    param_1[2] = (byte)iVar2;
  }
  return in_lr;
}

/* --- func_0800DE68 @ 0x0800DE68 (24B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800DCA8();
u32 func_0800DE68(int arg0) {
  func_0800DCA8(arg0,0xab);
  *(u8 *)(arg0 + 3) = 0;
  return arg0;
}

/* --- func_0800DE80 @ 0x0800DE80 (56B) [PURE-C | agbcp_O2] --- */
/* func_0800DE80 @ 0x0800DE80 mode=THUMB size=0x38 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DE80 @ 0x0800DE80  mode=THUMB  size=0x38  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DE80(int param_1,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  uint *puVar2;
  undefined4 in_lr;
  undefined4 uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  uStack_14 = param_2;
  uStack_c = param_3;
  func_080D3994(param_1,&uStack_14,3);
  if (uStack_c == 0) {
    uVar1 = 1;
  }
  else {
    uStack_10 = 99;
    puVar2 = &uStack_10;
    if (uStack_c < 99) {
      puVar2 = &uStack_c;
    }
    uVar1 = (undefined1)*puVar2;
  }
  *(undefined1 *)(param_1 + 3) = uVar1;
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800DEB8 @ 0x0800DEB8 (36B) [PURE-C | agbcp_O2] --- */
/* func_0800DEB8 @ 0x0800DEB8 mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DEB8 @ 0x0800DEB8  mode=THUMB  size=0x24  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DEB8(undefined4 param_1,int param_2)

{
  undefined4 in_lr;
  
  if (*(char *)(param_2 + 3) == '\0') {
    func_0x0800dca8(param_1,0xab);
  }
  else {
    func_080D3994(param_1,param_2,3);
  }
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800DEDC @ 0x0800DEDC (20B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
u32 func_0800DEDC(int arg0) {
  return ((u32)(*(char *)(arg0 + 3) == '\0'));
}

/* --- func_0800DEF0 @ 0x0800DEF0 (20B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
u32 func_0800DEF0(int arg0) {
  u8 val;
  if (*(char *)(arg0 + 3) == '\0') {
    val = 0;
  }
  else {
    val = (u32)*(s32 *)(arg0 + 3);
  }
  return val;
}

/* --- func_0800DF04 @ 0x0800DF04 (48B) [PURE-C | agbcp_O2] --- */
/* func_0800DF04 @ 0x0800DF04 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DF04 @ 0x0800DF04  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800DF04(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_10;
  uint uStack_c;
  
  if (*(char *)(param_1 + 3) != '\0') {
    uStack_10 = 99;
    uStack_c = (uint)*(byte *)(param_1 + 3) + param_2;
    puVar1 = &uStack_10;
    if (uStack_c < 99) {
      puVar1 = &uStack_c;
    }
    *(char *)(param_1 + 3) = (char)*puVar1;
  }
  return in_lr;
}

/* --- func_0800DF34 @ 0x0800DF34 (28B) [CFG-ASM (hermes:reg-sub-idiom+clean-c89) | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
void func_0800DF34(int arg0, u32 arg1) {
  register int p asm("r2") = arg0;
  u32 val = *(u8 *)(p + 3);
  if (val != 0) {
    if (val > arg1) goto sub;
    val = 0;
    goto done;
sub:
    val -= arg1;
done:
    *(u8 *)(p + 3) = val;
  }
}

/* --- func_0800DF58 @ 0x0800DF58 (44B) [PURE-C | agbcp_O2] --- */
/* func_0800DF58 @ 0x0800DF58 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DF58 @ 0x0800DF58  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DF58(byte *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = _DAT_0800df6c;
  if (*param_1 < 0x5f) {
    uVar1 = *(undefined4 *)((uint)*param_1 * 0xc + _DAT_0800df80);
  }
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800DF84 @ 0x0800DF84 (44B) [PURE-C | agbcp_O2] --- */
/* func_0800DF84 @ 0x0800DF84 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DF84 @ 0x0800DF84  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DF84(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = _DAT_0800df98;
  if (*param_1 < 0x5f) {
    uVar1 = (uint)*(ushort *)((uint)*param_1 * 0xc + _DAT_0800dfac + 4);
  }
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800DFB0 @ 0x0800DFB0 (36B) [PURE-C | agbcp_O2] --- */
/* func_0800DFB0 @ 0x0800DFB0 mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800DFB0 @ 0x0800DFB0  mode=THUMB  size=0x60  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800DFB0(byte *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  bVar1 = *param_1;
  if (bVar1 < 0x40) {
    if ((bVar1 < 0x3b) && ((0x27 < bVar1 || (bVar1 < 0x25)))) {
LAB_0800dfca:
      uVar2 = 1;
      goto LAB_0800dfd0;
    }
  }
  else if (bVar1 != 0x5e) goto LAB_0800dfca;
  uVar2 = 0;
LAB_0800dfd0:
  return CONCAT44(in_lr,uVar2);
}

/* --- func_0800DFD4 @ 0x0800DFD4 (60B) [PURE-C | agbcp_O2] --- */
/* func_0800DFD4 @ 0x0800DFD4 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* --- func_0800E010 @ 0x0800E010 (24B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800DF50();
u32 func_0800E010(int arg0) {
  func_0800DF50(arg0,0x5f);
  *(u8 *)(arg0 + 1) = 0;
  return arg0;
}

/* --- func_0800E028 @ 0x0800E028 (48B) [PURE-C | agbcp_O2] --- */
/* func_0800E028 @ 0x0800E028 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800E028 @ 0x0800E028  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800E028(undefined1 *param_1,undefined1 param_2,uint param_3)

{
  undefined1 uVar1;
  uint *puVar2;
  undefined4 in_lr;
  uint uStack_10;
  uint uStack_c;
  
  uStack_c = param_3;
  *param_1 = param_2;
  if (param_3 == 0) {
    uVar1 = 1;
  }
  else {
    uStack_10 = 99;
    puVar2 = &uStack_10;
    if (param_3 < 99) {
      puVar2 = &uStack_c;
    }
    uVar1 = (undefined1)*puVar2;
  }
  param_1[1] = uVar1;
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800E058 @ 0x0800E058 (36B) [PURE-C | agbcc_O2] --- */
/* func_0800E058 @ 0x0800E058 mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc_O2 */

u32 func_0800E058(const u8 *param_1)
{
    u8 buf[4];
    u8 res;
    if (param_1[1] == 0) {
        func_0800DF50(buf, 0x5f);
        res = buf[0];
    } else {
        res = param_1[0];
    }
    return res;
}

/* --- func_0800E07C @ 0x0800E07C (20B) [PURE-C | agbcc_O2] --- */
/* func_0800E07C @ 0x0800E07C mode=THUMB size=0x14 (barrido ROM) */
/* COMPILADOR: agbcc_O2 */

u32 func_0800E07C(const u8 *param_1)
{
    return param_1[1] == 0;
}

/* --- func_0800E090 @ 0x0800E090 (20B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
u32 func_0800E090(int arg0) {
  u8 val;
  if (*(char *)(arg0 + 1) == '\0') {
    val = 0;
  }
  else {
    val = (u32)*(u16 *)(arg0 + 1);
  }
  return val;
}

/* --- func_0800E0A4 @ 0x0800E0A4 (48B) [PURE-C | agbcp_O2] --- */
/* func_0800E0A4 @ 0x0800E0A4 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800E0A4 @ 0x0800E0A4  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800E0A4(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_10;
  uint uStack_c;
  
  if (*(char *)(param_1 + 1) != '\0') {
    uStack_10 = 99;
    uStack_c = (uint)*(byte *)(param_1 + 1) + param_2;
    puVar1 = &uStack_10;
    if (uStack_c < 99) {
      puVar1 = &uStack_c;
    }
    *(char *)(param_1 + 1) = (char)*puVar1;
  }
  return in_lr;
}

/* --- func_0800E0D4 @ 0x0800E0D4 (28B) [CFG-ASM (hermes:reg-sub-idiom+clean-c89) | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
void func_0800E0D4(int arg0, u32 arg1) {
  register int p asm("r2") = arg0;
  u32 val = *(u8 *)(p + 1);
  if (val != 0) {
    if (val > arg1) goto sub;
    val = 0;
    goto done;
sub:
    val -= arg1;
done:
    *(u8 *)(p + 1) = val;
  }
}

/* --- func_0800E0FC @ 0x0800E0FC (76B) [PURE-C | agbcp_O2] --- */
/* func_0800E0FC @ 0x0800E0FC mode=THUMB size=0x4C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800E0FC @ 0x0800E0FC  mode=THUMB  size=0x4C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800E0FC(undefined1 *param_1,undefined4 param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 uStack_c;
  
  *param_1 = 0x67;
  uStack_c = param_2;
  uVar1 = func_0x0800dcb4(&uStack_c);
  iVar3 = 0;
  piVar2 = _DAT_0800e118;
  while ((*piVar2 * 0x10000 < 0 || (*(byte *)((int)piVar2 + 2) != uVar1))) {
    iVar3 = iVar3 + 1;
    if (0x66 < iVar3) goto LAB_0800e138;
    piVar2 = (int *)(iVar3 * 4 + _DAT_0800e144);
  }
  *param_1 = (char)iVar3;
LAB_0800e138:
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800E148 @ 0x0800E148 (76B) [PURE-C | agbcp_O2] --- */
/* func_0800E148 @ 0x0800E148 mode=THUMB size=0x4C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800E148 @ 0x0800E148  mode=THUMB  size=0x50  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800E148(undefined1 *param_1,undefined1 param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  undefined1 auStack_c [4];
  
  *param_1 = 0x67;
  auStack_c[0] = param_2;
  uVar1 = func_0x0800df54(auStack_c);
  iVar3 = 0;
  piVar2 = _DAT_0800e164;
  while ((-1 < *piVar2 * 0x10000 || (*(byte *)((int)piVar2 + 2) != uVar1))) {
    iVar3 = iVar3 + 1;
    if (0x66 < iVar3) goto LAB_0800e184;
    piVar2 = (int *)(iVar3 * 4 + _DAT_0800e190);
  }
  *param_1 = (char)iVar3;
LAB_0800e184:
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800E198 @ 0x0800E198 (40B) [PURE-C | agbcp_O2] --- */
/* func_0800E198 @ 0x0800E198 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800E198 @ 0x0800E198  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800E198(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0x67) {
    uVar1 = *(ushort *)((uint)*param_1 * 4 + _DAT_0800e1bc) & 0x7fff;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800E1C0 @ 0x0800E1C0 (84B) [PURE-C | agbcp_O2] --- */
/* func_0800E1C0 @ 0x0800E1C0 mode=THUMB size=0x54 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800E1C0 @ 0x0800E1C0  mode=THUMB  size=0x54  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800E1C0(byte *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  
  uVar1 = _DAT_0800e210;
  if (*param_1 < 0x67) {
    piVar2 = (int *)((uint)*param_1 * 4 + _DAT_0800e1f0);
    if (*piVar2 * 0x10000 < 0) {
      func_0x0800df50(auStack_c,*(undefined1 *)((int)piVar2 + 2));
      uVar1 = func_0800DF58(auStack_c);
    }
    else {
      func_0x0800dca8(auStack_10,*(undefined1 *)((int)piVar2 + 2));
      uVar1 = func_0800DCB8(auStack_10);
    }
  }
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800E214 @ 0x0800E214 (84B) [PURE-C | agbcp_O2] --- */
/* func_0800E214 @ 0x0800E214 mode=THUMB size=0x54 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800E214 @ 0x0800E214  mode=THUMB  size=0x54  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800E214(byte *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  
  if (*param_1 < 0x67) {
    piVar2 = (int *)((uint)*param_1 * 4 + _DAT_0800e244);
    if (*piVar2 * 0x10000 < 0) {
      func_0x0800df50(auStack_c,*(undefined1 *)((int)piVar2 + 2));
      uVar1 = func_0800DF84(auStack_c);
    }
    else {
      func_0x0800dca8(auStack_10,*(undefined1 *)((int)piVar2 + 2));
      uVar1 = func_0800DCE0(auStack_10);
    }
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800E268 @ 0x0800E268 (40B) [PURE-C | agbcc_O2] --- */
/* func_0800E268 @ 0x0800E268 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc_O2 */

u32 func_0800E268(const u16 *param_1)
{
    u8 buf[4];
    u16 v = *param_1;
    if ((v << 30) == 0) {
        func_0800DB2C(buf, v >> 2);
    } else {
        func_0800DB2C(buf, 0x51);
    }
    return buf[0];
}

/* --- func_0800E290 @ 0x0800E290 (40B) [PURE-C | agbcp_O2] --- */
/* func_0800E290 @ 0x0800E290 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800E290 @ 0x0800E290  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800E290(undefined4 param_1,ushort *param_2)

{
  undefined4 in_lr;
  
  if ((*param_2 & 3) == 1) {
    func_0x0800dca8(param_1,*param_2 >> 2);
  }
  else {
    func_0x0800dca8(param_1,0xab);
  }
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800E2B8 @ 0x0800E2B8 (44B) [PURE-C | agbcc_O2] --- */
/* func_0800E2B8 @ 0x0800E2B8 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc_O2 */

u32 func_0800E2B8(const u16 *param_1)
{
    u8 buf[4];
    u16 v = *param_1;
    if (((u32)(v << 30) >> 30) == 2) {
        func_0800DF50(buf, v >> 2);
    } else {
        func_0800DF50(buf, 0x5f);
    }
    return buf[0];
}

/* --- func_0800E2E4 @ 0x0800E2E4 (32B) [PURE-C | agbcp_O2] --- */
/* func_0800E2E4 @ 0x0800E2E4 mode=THUMB size=0x20 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800E2E4 @ 0x0800E2E4  mode=THUMB  size=0x20  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800E2E4(uint param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = _DAT_0800e2f0;
  if (param_1 < 4) {
    iVar1 = param_1 * 7 + _DAT_0800e300;
  }
  return CONCAT44(in_lr,iVar1);
}

/* --- func_0800E304 @ 0x0800E304 (32B) [PURE-C | agbcp_O2] --- */
/* func_0800E304 @ 0x0800E304 mode=THUMB size=0x20 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800E304 @ 0x0800E304  mode=THUMB  size=0x20  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800E304(uint param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = _DAT_0800e310;
  if (param_1 < 7) {
    iVar1 = param_1 * 5 + _DAT_0800e320;
  }
  return CONCAT44(in_lr,iVar1);
}

/* --- func_0800E324 @ 0x0800E324 (48B) [PURE-C | agbcp_O2] --- */
/* func_0800E324 @ 0x0800E324 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800E324 @ 0x0800E324  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
ulonglong func_0800E324(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (((*(byte *)(param_1 + 1) & 0x7f) >> 2 == 0) && ((*(ushort *)(param_1 + 2) & 0x1f) < 6)) {
    uVar1 = (*(byte *)(param_1 + 1) & 3) - 1;
  }
  else {
    uVar1 = (uint)*(byte *)(param_1 + 1);
  }
  return CONCAT44(in_lr,uVar1) & 0xffffffff00000003;
}

/* --- func_0800E354 @ 0x0800E354 (396B) [PURE-C | agbcp_O2] --- */
/* func_0800E354 @ 0x0800E354 mode=THUMB size=0x18C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800E354 @ 0x0800E354  mode=THUMB  size=0x1B0  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800E354(int param_1,undefined4 param_2,undefined1 *param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 in_lr;
  ushort uStack_44;
  ushort uStack_42;
  ushort uStack_40;
  byte *pbStack_3c;
  byte *pbStack_38;
  ushort *puStack_34;
  byte *pbStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar2 = func_0x080d3b78(param_2);
  if (0xc < uVar2) {
    uVar2 = 0xc;
  }
  func_080D3994(param_1,param_2,uVar2);
  *(undefined1 *)(param_1 + uVar2) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x20) = *param_3;
  uVar1 = (ushort)_DAT_0800e4cc;
  uStack_44 = uVar1 & uStack_44 & 0x3ff | 2;
  uStack_42 = uVar1 & uStack_42 & 0x3ff;
  uStack_40 = uVar1 & uStack_40;
  func_080D3994(param_1 + 0x24,&uStack_44,6);
  *(undefined1 *)(param_1 + 0x2a) = 0;
  iVar4 = param_1 + 0x2c;
  iVar5 = 5;
  puVar6 = (ushort *)(param_1 + 0x44);
  pbStack_3c = (byte *)(param_1 + 0x47);
  pbStack_38 = (byte *)(param_1 + 0x4b);
  puVar3 = (ushort *)(param_1 + 0x4c);
  puStack_34 = (ushort *)(param_1 + 0x50);
  pbStack_30 = (byte *)(param_1 + 0x51);
  iStack_2c = param_1 + 0x54;
  iStack_28 = param_1 + 0x5c;
  iStack_24 = param_1 + 0x60;
  do {
    func_0x0800ef44(iVar4);
    iVar4 = iVar4 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  *(byte *)puVar6 = *(byte *)puVar6 & 0x80;
  uVar1 = (ushort)_DAT_0800e4d0;
  *puVar6 = uVar1 & *puVar6 | 0x4b00;
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & _DAT_0800e4d4;
  *(ushort *)(param_1 + 0x46) = uVar1 & *(ushort *)(param_1 + 0x46);
  *pbStack_3c = *pbStack_3c & 0x7f;
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xe0000000;
  *pbStack_38 = *pbStack_38 & 0x1f;
  *(byte *)puVar3 = *(byte *)puVar3 & 0x80;
  *puVar3 = uVar1 & *puVar3;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & _DAT_0800e4d8;
  *puStack_34 = (ushort)_DAT_0800e4dc & *puStack_34;
  *pbStack_30 = *pbStack_30 & 0x1f;
  func_0x0800f170(iStack_2c);
  func_0800DBC8(iStack_28);
  func_0800F574(iStack_24);
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800E4E0 @ 0x0800E4E0 (4B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_0800E4E0(void) {
}

/* --- func_0800E4E4 @ 0x0800E4E4 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800E4E4 @ 0x0800E4E4 mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800E4E8 @ 0x0800E4E8 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800E4E8 @ 0x0800E4E8 mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800E4F0 @ 0x0800E4F0 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800E4F0 @ 0x0800E4F0 mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800E4FC @ 0x0800E4FC (4B) [PURE-C | agbcp_O2] --- */
/* func_0800E4FC @ 0x0800E4FC mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800E504 @ 0x0800E504 (24B) [PURE-C | agbcc_O2] --- */
/* func_0800E504 @ 0x0800E504 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc_O2 */

u32 func_0800E504(const u8 *param_1)
{
    u32 res = 0;
    u32 val = *(const u32 *)(param_1 + 0x44);
    if (((val << 9) >> 24) > 0xc7) {
        res = 1;
    }
    return res;
}

/* --- func_0800E51C @ 0x0800E51C (4B) [PURE-C | agbcp_O2] --- */
/* func_0800E51C @ 0x0800E51C mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800E530 @ 0x0800E530 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800E530 @ 0x0800E530 mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800E53C @ 0x0800E53C (4B) [PURE-C | agbcp_O2] --- */
/* func_0800E53C @ 0x0800E53C mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800E548 @ 0x0800E548 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800E548 @ 0x0800E548 mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800E550 @ 0x0800E550 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800E550 @ 0x0800E550 mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800E924 @ 0x0800E924 (16B) [PURE-C | agbcp_O2] --- */
/* func_0800E924 @ 0x0800E924 mode=THUMB size=0x10 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800E924 @ 0x0800E924  mode=THUMB  size=0x84  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
void func_0800E924(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  *param_1 = *(undefined4 *)(param_2 + 0x24);
  param_1[1] = uVar1;
  return;
}

/* --- func_0800E934 @ 0x0800E934 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800E934 @ 0x0800E934 mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800E940 @ 0x0800E940 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800E940 @ 0x0800E940 mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800E94C @ 0x0800E94C (4B) [PURE-C | agbcp_O2] --- */
/* func_0800E94C @ 0x0800E94C mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800E958 @ 0x0800E958 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800E958 @ 0x0800E958 mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800E970 @ 0x0800E970 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800E970 @ 0x0800E970 mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800E97C @ 0x0800E97C (4B) [PURE-C | agbcp_O2] --- */
/* func_0800E97C @ 0x0800E97C mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800E988 @ 0x0800E988 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800E988 @ 0x0800E988 mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800E9A0 @ 0x0800E9A0 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800E9A0 @ 0x0800E9A0 mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800E9A8 @ 0x0800E9A8 (60B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3994();
extern u32 func_080D3B28();
extern u32 func_080D3B78();
void func_0800E9A8(int arg0,u32 arg1) {
  u32 val;
  u8 auStack_20 [16];
  val = func_080D3B78(arg1);
  if (0xc < val) {
    val = 0xc;
  }
  func_080D3994(auStack_20,arg1,val);
  auStack_20[val] = 0;
  func_080D3B28(arg0 + 0x10,auStack_20);
}

/* --- func_0800E9E4 @ 0x0800E9E4 (80B) [PURE-C | agbcp_O2] --- */
/* func_0800E9E4 @ 0x0800E9E4 mode=THUMB size=0x50 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* --- func_0800EA38 @ 0x0800EA38 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800E9E4();
void func_0800EA38(u32 arg0,int arg1) {
  func_0800E9E4(arg0,-arg1);
}

/* --- func_0800EA44 @ 0x0800EA44 (36B) [PURE-C | agbcp_O2] --- */
/* func_0800EA44 @ 0x0800EA44 mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800EA44 @ 0x0800EA44  mode=THUMB  size=0x24  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800EA44(int param_1)

{
  ushort uVar1;
  undefined4 in_lr;
  
  uVar1 = func_0x0800e51c();
  *(ushort *)(param_1 + 0x44) =
       (ushort)_DAT_0800ea64 & *(ushort *)(param_1 + 0x44) | (uVar1 & 0xff) << 7;
  return in_lr;
}

/* --- func_0800EA68 @ 0x0800EA68 (108B) [PURE-C | agbcp_O2] --- */
/* func_0800EA68 @ 0x0800EA68 mode=THUMB size=0x6C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800EA68 @ 0x0800EA68  mode=THUMB  size=0x6C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800EA68(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 in_lr;
  uint uStack_14;
  byte abStack_10 [4];
  
  if (param_2 < 1) {
    if (-1 < param_2) {
      return in_lr;
    }
    uVar2 = *(uint *)(param_1 + 0x44);
    uVar3 = (uVar2 & 0x7fffff) >> 0xf;
    uVar1 = 0;
    if ((uint)(param_2 * -2) < uVar3) {
      uVar1 = uVar3 + param_2 * 2;
    }
    uVar1 = uVar1 & 0xff;
  }
  else {
    if (-1 < (int)((uint)*(byte *)(param_1 + 0x44) * 0x8000000)) {
      param_2 = param_2 << 1;
    }
    uVar2 = *(uint *)(param_1 + 0x44);
    uStack_14 = ((uVar2 & 0x7fffff) >> 0xf) + param_2;
    abStack_10[0] = 200;
    abStack_10[1] = 0;
    abStack_10[2] = 0;
    abStack_10[3] = 0;
    puVar4 = &uStack_14;
    if (200 < uStack_14) {
      puVar4 = (uint *)abStack_10;
    }
    uVar1 = (uint)*(byte *)puVar4;
  }
  *(uint *)(param_1 + 0x44) = _DAT_0800ead0 & uVar2 | uVar1 << 0xf;
  return in_lr;
}

/* --- func_0800EAD4 @ 0x0800EAD4 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800EA68();
void func_0800EAD4(u32 arg0,int arg1) {
  func_0800EA68(arg0,-arg1);
}

/* --- func_0800EAE0 @ 0x0800EAE0 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800EAE0 @ 0x0800EAE0 mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800EAF0 @ 0x0800EAF0 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800EAF0 @ 0x0800EAF0 mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800EAFC @ 0x0800EAFC (48B) [PURE-C | agbcp_O2] --- */
/* func_0800EAFC @ 0x0800EAFC mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800EAFC @ 0x0800EAFC  mode=THUMB  size=0x40  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800EAFC(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x44);
  bVar2 = bVar1 & 0xf;
  if (bVar2 < 10) {
    *(byte *)(param_1 + 0x44) = bVar1 & 0xf0 | bVar2 + 1 & 0xf;
    func_0x0800e9e4(param_1,10);
  }
  return in_lr;
}

/* --- func_0800EB2C @ 0x0800EB2C (4B) [PURE-C | agbcp_O2] --- */
/* func_0800EB2C @ 0x0800EB2C mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800EB34 @ 0x0800EB34 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800EB34 @ 0x0800EB34 mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800EB3C @ 0x0800EB3C (136B) [PURE-C | agbcp_O2] --- */
/* func_0800EB3C @ 0x0800EB3C mode=THUMB size=0x88 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800EB3C @ 0x0800EB3C  mode=THUMB  size=0x88  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800EB3C(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  cVar1 = func_0800F604(param_1 + 0x60);
  if (cVar1 == '\0') {
    func_0x0800efec(&uStack_20);
    iVar3 = param_1 + 0x54;
    cVar1 = func_0x0800f190(iVar3);
    if (cVar1 == '\0') {
      iVar2 = func_0x0800f204(iVar3);
      if ((1 < iVar2) || (iVar2 < 0)) goto LAB_0800eb72;
      func_0800F294(&uStack_1c,iVar3);
      uStack_20 = uStack_1c;
      func_0x0800f390(iVar3);
    }
    iVar2 = 0;
    do {
      uStack_18 = uStack_20;
      func_0800FD20(&uStack_1c,param_1 + 0x60);
      uStack_20 = uStack_1c;
      iVar2 = iVar2 + 1;
      cVar1 = func_0800F06C(&uStack_20);
    } while (cVar1 != '\0');
    uStack_1c = uStack_20;
    func_0800F418(iVar3);
  }
  else {
LAB_0800eb72:
    iVar2 = 0;
  }
  return CONCAT44(in_lr,iVar2);
}

/* --- func_0800EBC4 @ 0x0800EBC4 (136B) [PURE-C | agbcp_O2] --- */
/* func_0800EBC4 @ 0x0800EBC4 mode=THUMB size=0x88 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800EBC4 @ 0x0800EBC4  mode=THUMB  size=0x88  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800EBC4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  cVar1 = func_0800F604(param_1 + 0x60);
  if (cVar1 == '\0') {
    func_0x0800efec(&uStack_20);
    iVar3 = param_1 + 0x54;
    cVar1 = func_0x0800f190(iVar3);
    if (cVar1 == '\0') {
      iVar2 = func_0x0800f204(iVar3);
      if ((1 < iVar2) || (iVar2 < 0)) goto LAB_0800ebfa;
      func_0800F294(&uStack_1c,iVar3);
      uStack_20 = uStack_1c;
      func_0x0800f390(iVar3);
    }
    iVar2 = 0;
    do {
      uStack_18 = uStack_20;
      func_0800FD38(&uStack_1c,param_1 + 0x60);
      uStack_20 = uStack_1c;
      iVar2 = iVar2 + 1;
      cVar1 = func_0800F06C(&uStack_20);
    } while (cVar1 != '\0');
    uStack_1c = uStack_20;
    func_0800F418(iVar3);
  }
  else {
LAB_0800ebfa:
    iVar2 = 0;
  }
  return CONCAT44(in_lr,iVar2);
}

/* --- func_0800EC4C @ 0x0800EC4C (100B) [PURE-C | agbcp_O2] --- */
/* func_0800EC4C @ 0x0800EC4C mode=THUMB size=0x64 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800EC4C @ 0x0800EC4C  mode=THUMB  size=0x64  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800EC4C(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  cVar1 = func_0800F874(param_1 + 0x60);
  if (cVar1 == '\0') {
    iVar2 = 0;
    iVar3 = param_1 + 0x5c;
    do {
      func_080D3994(auStack_1c,iVar3,2);
      func_0800FE78(auStack_20,param_1 + 0x60,auStack_1c);
      func_080D3994(iVar3,auStack_20,2);
      iVar2 = iVar2 + 1;
      cVar1 = func_0800DC34(iVar3);
    } while (cVar1 != '\0');
  }
  else {
    iVar2 = 0;
  }
  return CONCAT44(in_lr,iVar2);
}

/* --- func_0800ECB0 @ 0x0800ECB0 (100B) [PURE-C | agbcp_O2] --- */
/* func_0800ECB0 @ 0x0800ECB0 mode=THUMB size=0x64 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800ECB0 @ 0x0800ECB0  mode=THUMB  size=0xA4  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800ECB0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  cVar1 = func_0800F874(param_1 + 0x60);
  if (cVar1 == '\0') {
    iVar2 = 0;
    iVar3 = param_1 + 0x5c;
    do {
      func_080D3994(auStack_1c,iVar3,2);
      func_0800FEA0(auStack_20,param_1 + 0x60,auStack_1c);
      func_080D3994(iVar3,auStack_20,2);
      iVar2 = iVar2 + 1;
      cVar1 = func_0800DC34(iVar3);
    } while (cVar1 != '\0');
  }
  else {
    iVar2 = 0;
  }
  return CONCAT44(in_lr,iVar2);
}

/* --- func_0800ED14 @ 0x0800ED14 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800ED14 @ 0x0800ED14 mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800ED20 @ 0x0800ED20 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800ED20 @ 0x0800ED20 mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800ED2C @ 0x0800ED2C (4B) [PURE-C | agbcp_O2] --- */
/* func_0800ED2C @ 0x0800ED2C mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800ED3C @ 0x0800ED3C (4B) [PURE-C | agbcp_O2] --- */
/* func_0800ED3C @ 0x0800ED3C mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800ED54 @ 0x0800ED54 (56B) [PURE-C | agbcp_O2] --- */
/* func_0800ED54 @ 0x0800ED54 mode=THUMB size=0x38 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800ED54 @ 0x0800ED54  mode=THUMB  size=0x38  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800ED54(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = ((*(ushort *)(param_1 + 0x46) & 0x7fff) >> 7) - param_2;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if (0xfe < (int)uVar1) {
    uVar1 = 0xff;
  }
  *(ushort *)(param_1 + 0x46) =
       (ushort)_DAT_0800ed88 & *(ushort *)(param_1 + 0x46) | (ushort)((uVar1 & 0xff) << 7);
  return in_lr;
}

/* --- func_0800ED8C @ 0x0800ED8C (160B) [PURE-C | agbcp_O2] --- */
/* func_0800ED8C @ 0x0800ED8C mode=THUMB size=0xA0 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800ED8C @ 0x0800ED8C  mode=THUMB  size=0xA0  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800ED8C(int param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  undefined1 auStack_14 [4];
  
  if (_DAT_0800ee28 <
      ((*(uint *)(param_1 + 0x48) & _DAT_0800ee24) << 1 | (uint)(*(byte *)(param_1 + 0x47) >> 7))) {
    return in_lr;
  }
  bVar2 = false;
  cVar4 = func_0800DC34(param_1 + 0x5c);
  if (cVar4 == '\0') {
    auStack_14[0] = func_0800DC10(param_1 + 0x5c);
    iVar5 = func_0x0800db30(auStack_14);
    if (iVar5 != 0x4c) goto LAB_0800edce;
  }
  else {
LAB_0800edce:
    iVar5 = func_0800F92C(param_1 + 0x60,0x4c);
    if (iVar5 == -1) goto LAB_0800ede2;
  }
  bVar2 = true;
LAB_0800ede2:
  uVar3 = _DAT_0800ee24;
  if (bVar2) {
    bVar1 = *(byte *)(param_1 + 0x47);
    uVar6 = ((*(uint *)(param_1 + 0x48) & _DAT_0800ee24) << 1 | (uint)(bVar1 >> 7)) + 1;
    *(byte *)(param_1 + 0x47) = bVar1 & 0x7f | (byte)((uVar6 & 1) << 7);
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xe0000000 | uVar6 >> 1 & uVar3;
  }
  return in_lr;
}

/* --- func_0800EE2C @ 0x0800EE2C (52B) [PURE-C | agbcp_O2] --- */
/* func_0800EE2C @ 0x0800EE2C mode=THUMB size=0x34 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800EE2C @ 0x0800EE2C  mode=THUMB  size=0x34  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800EE2C(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 in_lr;
  
  pbVar3 = (byte *)(param_1 + 0x4b);
  bVar1 = (*pbVar3 >> 5) + 1;
  bVar2 = *pbVar3 & 0x1f;
  *pbVar3 = bVar2 | bVar1 * ' ';
  uVar4 = (uint)(4 < (bVar1 & 7));
  if (uVar4 != 0) {
    *pbVar3 = bVar2;
  }
  return CONCAT44(in_lr,uVar4);
}

/* --- func_0800EE60 @ 0x0800EE60 (108B) [PURE-C | agbcp_O2] --- */
/* func_0800EE60 @ 0x0800EE60 mode=THUMB size=0x6C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800EE60 @ 0x0800EE60  mode=THUMB  size=0x6C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800EE60(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x44) & 0x7f8000) == 0) {
    bVar1 = *(byte *)(param_1 + 0x4c);
    bVar2 = bVar1 & 0x7f;
    if (bVar2 < 0x7f) {
      *(byte *)(param_1 + 0x4c) = bVar1 & 0x80 | bVar2 + 1 & 0x7f;
    }
  }
  else {
    *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) & 0x80;
  }
  pbVar4 = (byte *)(param_1 + 0x51);
  if ((*pbVar4 >> 5 < 7) && (iVar3 = func_0800F5D8(param_1 + 0x60), iVar3 != 0)) {
    *pbVar4 = *pbVar4 & 0x1f | ((*pbVar4 >> 5) + 1) * ' ';
  }
  return in_lr;
}

/* --- func_0800EECC @ 0x0800EECC (44B) [PURE-C | agbcp_O2] --- */
/* func_0800EECC @ 0x0800EECC mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800EECC @ 0x0800EECC  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800EECC(int param_1,uint param_2)

{
  ushort uVar1;
  undefined4 in_lr;
  bool bVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x4c);
  bVar2 = (uVar1 & 0x7fff) >> 7 < param_2;
  if (bVar2) {
    *(ushort *)(param_1 + 0x4c) = (ushort)_DAT_0800eef4 & uVar1 | (ushort)((param_2 & 0xff) << 7);
  }
  return CONCAT44(in_lr,(uint)bVar2);
}

/* --- func_0800EEF8 @ 0x0800EEF8 (76B) [PURE-C | agbcp_O2] --- */
/* func_0800EEF8 @ 0x0800EEF8 mode=THUMB size=0x4C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800EEF8 @ 0x0800EEF8  mode=THUMB  size=0x90  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800EEF8(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 in_lr;
  
  uVar1 = _DAT_0800ef34;
  puVar4 = (ushort *)(param_1 + 0x50);
  uVar2 = (*puVar4 & _DAT_0800ef34) << 0x11 | *(uint *)(param_1 + 0x4c) >> 0xf;
  if (uVar2 <= _DAT_0800ef38) {
    iVar3 = uVar2 + 1;
    *(uint *)(param_1 + 0x4c) = _DAT_0800ef3c & *(uint *)(param_1 + 0x4c) | iVar3 * 0x8000;
    *puVar4 = (ushort)_DAT_0800ef40 & *puVar4 | (ushort)((uint)iVar3 >> 0x11) & (ushort)uVar1;
  }
  return in_lr;
}

/* --- func_0800EF68 @ 0x0800EF68 (4B) [PURE-C | agbcc_O2] --- */
#define NULL 0

u16 func_0800EF68(u16 *arg0) {
    return *arg0;
}

/* --- func_0800EF6C @ 0x0800EF6C (4B) [PURE-C | agbcp_O2] --- */
/* func_0800EF6C @ 0x0800EF6C mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800EF74 @ 0x0800EF74 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800EF74 @ 0x0800EF74 mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800EF88 @ 0x0800EF88 (44B) [PURE-C | agbcp_O2] --- */
/* func_0800EF88 @ 0x0800EF88 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800EF88 @ 0x0800EF88  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800EF88(ushort *param_1,int param_2)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_10;
  uint uStack_c;
  
  uStack_10 = (uint)*param_1 + param_2;
  uStack_c = _DAT_0800efb0;
  puVar1 = &uStack_10;
  if (_DAT_0800efb0 < (uint)*param_1 + param_2) {
    puVar1 = &uStack_c;
  }
  *param_1 = (ushort)*puVar1;
  return in_lr;
}

/* --- func_0800EFB4 @ 0x0800EFB4 (36B) [PURE-C | agbcp_O2] --- */
/* func_0800EFB4 @ 0x0800EFB4 mode=THUMB size=0x24 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800EFB4 @ 0x0800EFB4  mode=THUMB  size=0x50  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800EFB4(uint *param_1,uint param_2)

{
  undefined4 in_lr;
  
  if ((*param_1 & 0x7ffff) >> 0x10 != param_2) {
    *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) & 199 | (byte)((param_2 & 7) << 3);
  }
  return in_lr;
}

/* --- func_0800EFD8 @ 0x0800EFD8 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800EFD8 @ 0x0800EFD8 mode=THUMB size=0x4 (importado de Stan: farmer) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: farmer */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800F004 @ 0x0800F004 (60B) [PURE-C | agbcp_O2] --- */
/* func_0800F004 @ 0x0800F004 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F004 @ 0x0800F004  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F004(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 in_lr;
  undefined4 uStack_c;
  
  *param_1 = *param_1 & 0xfc;
  uStack_c = param_2;
  bVar1 = func_0x0800dcb4(&uStack_c);
  param_1[1] = bVar1;
  bVar1 = func_0800DD6C(&uStack_c);
  param_1[2] = bVar1;
  bVar1 = func_0800DD8C(&uStack_c);
  param_1[3] = bVar1;
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800F040 @ 0x0800F040 (44B) [PURE-C | agbcp_O2] --- */
/* func_0800F040 @ 0x0800F040 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F040 @ 0x0800F040  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F040(byte *param_1,undefined1 param_2)

{
  byte bVar1;
  undefined4 in_lr;
  undefined1 auStack_c [4];
  
  *param_1 = *param_1 & 0xfd | 1;
  auStack_c[0] = param_2;
  bVar1 = func_0x0800df54(auStack_c);
  param_1[1] = bVar1;
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800F06C @ 0x0800F06C (48B) [PURE-C | agbcp_O2] --- */
/* func_0800F06C @ 0x0800F06C mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F06C @ 0x0800F06C  mode=THUMB  size=0x38  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F06C(byte *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*param_1 & 1) == 0) {
    uVar1 = 0;
    if (param_1[1] < 0xab) goto LAB_0800f098;
  }
  else {
    if ((*param_1 & 1) != 1) {
      uVar1 = 1;
      goto LAB_0800f098;
    }
    uVar1 = 0;
    if (param_1[1] < 0x5f) goto LAB_0800f098;
  }
  uVar1 = 1;
LAB_0800f098:
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800F0A4 @ 0x0800F0A4 (68B) [PURE-C | agbcp_O2] --- */
/* func_0800F0A4 @ 0x0800F0A4 mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F0A4 @ 0x0800F0A4  mode=THUMB  size=0x44  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F0A4(undefined4 param_1,byte *param_2)

{
  undefined4 in_lr;
  undefined1 auStack_10 [4];
  
  if ((*param_2 & 1) == 0) {
    func_0x0800dca8(auStack_10,param_2[1]);
    func_0800DE0C(auStack_10,(int)(char)param_2[2],(int)(char)param_2[3]);
    func_080D3994(param_1,auStack_10,3);
  }
  else {
    func_0x0800dca8(param_1,0xab);
  }
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800F0E8 @ 0x0800F0E8 (52B) [PURE-C | agbcp_O2] --- */
/* func_0800F0E8 @ 0x0800F0E8 mode=THUMB size=0x34 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F0E8 @ 0x0800F0E8  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F0E8(byte *param_1)

{
  undefined4 in_lr;
  byte bStack_c;
  byte abStack_b [3];
  
  if ((*param_1 & 1) == 0) {
    func_0x0800df50(&bStack_c,0x5f);
  }
  else {
    func_0x0800df50(abStack_b,param_1[1]);
    bStack_c = abStack_b[0];
  }
  return CONCAT44(in_lr,(uint)bStack_c);
}

/* --- func_0800F124 @ 0x0800F124 (76B) [PURE-C | agbcp_O2] --- */
/* func_0800F124 @ 0x0800F124 mode=THUMB size=0x4C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* --- func_0800F190 @ 0x0800F190 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800F190 @ 0x0800F190 mode=THUMB size=0x4 (importado de Stan: held_item) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: held_item */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800F204 @ 0x0800F204 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800F204 @ 0x0800F204 mode=THUMB size=0x4 (importado de Stan: held_item) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: held_item */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800F20C @ 0x0800F20C (76B) [PURE-C | agbcp_O2] --- */
/* func_0800F20C @ 0x0800F20C mode=THUMB size=0x4C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F20C @ 0x0800F20C  mode=THUMB  size=0x4C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F20C(undefined4 param_1,byte *param_2)

{
  undefined4 in_lr;
  undefined1 auStack_10 [4];
  
  if (((*param_2 & 7) == 0) && (param_2[2] < 0xab)) {
    func_0x0800dca8(auStack_10,param_2[2]);
    func_0800DE0C(auStack_10,(int)(char)param_2[3],(int)(char)param_2[4]);
    func_080D3994(param_1,auStack_10,3);
  }
  else {
    func_0x0800dca8(param_1,0xab);
  }
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800F258 @ 0x0800F258 (60B) [PURE-C | agbcp_O2] --- */
/* func_0800F258 @ 0x0800F258 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F258 @ 0x0800F258  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F258(byte *param_1)

{
  undefined4 in_lr;
  byte bStack_c;
  byte abStack_b [3];
  
  if (((*param_1 & 7) == 1) && (param_1[2] < 0x5f)) {
    func_0x0800df50(&bStack_c,param_1[2]);
  }
  else {
    func_0x0800df50(abStack_b,0x5f);
    bStack_c = abStack_b[0];
  }
  return CONCAT44(in_lr,(uint)bStack_c);
}

/* --- func_0800F294 @ 0x0800F294 (176B) [PURE-C | agbcp_O2] --- */
/* func_0800F294 @ 0x0800F294 mode=THUMB size=0xB0 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F294 @ 0x0800F294  mode=THUMB  size=0xB0  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F294(undefined4 *param_1,byte *param_2)

{
  undefined4 in_lr;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint3 uStack_1c;
  undefined1 auStack_18 [4];
  
  if (((*param_2 & 7) == 0) && (param_2[2] < 0xab)) {
    func_0x0800dca8(&uStack_24,param_2[2]);
    func_0800DE0C(&uStack_24,(int)(char)param_2[3],(int)(char)param_2[4]);
    func_080D3994(&uStack_1c,&uStack_24,3);
    func_0800F004(&uStack_20,(uint)uStack_1c);
    if ((int)((uint)*param_2 * 0x10000000) < 0) {
      func_0800F124(&uStack_20);
    }
    *param_1 = uStack_20;
  }
  else if (((*param_2 & 7) == 1) && (param_2[2] < 0x5f)) {
    func_0x0800df50(auStack_18,param_2[2]);
    func_0800F040(&uStack_24,auStack_18[0]);
    if ((int)((uint)*param_2 * 0x10000000) < 0) {
      func_0800F124(&uStack_24);
    }
    *param_1 = uStack_24;
  }
  else {
    func_0x0800efec(param_1);
  }
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800F344 @ 0x0800F344 (28B) [PURE-C | agbcp_O2] --- */
/* func_0800F344 @ 0x0800F344 mode=THUMB size=0x1C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F344 @ 0x0800F344  mode=THUMB  size=0x6C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F344(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (((*param_1 & 7) != 3) || (uVar1 = (uint)param_1[2], 7 < uVar1)) {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800F360 @ 0x0800F360 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800F360 @ 0x0800F360 mode=THUMB size=0x4 (importado de Stan: held_item) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: held_item */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800F388 @ 0x0800F388 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800F388 @ 0x0800F388 mode=THUMB size=0x4 (importado de Stan: held_item) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: held_item */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800F390 @ 0x0800F390 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800F390 @ 0x0800F390 mode=THUMB size=0x4 (importado de Stan: held_item) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: held_item */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800F3B0 @ 0x0800F3B0 (56B) [PURE-C | agbcp_O2] --- */
/* func_0800F3B0 @ 0x0800F3B0 mode=THUMB size=0x38 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F3B0 @ 0x0800F3B0  mode=THUMB  size=0x38  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800F3B0(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 in_lr;
  undefined4 uStack_c;
  
  *param_1 = *param_1 & 0xf0;
  uStack_c = param_2;
  bVar1 = func_0x0800dcb4(&uStack_c);
  param_1[2] = bVar1;
  bVar1 = func_0800DD6C(&uStack_c);
  param_1[3] = bVar1;
  bVar1 = func_0800DD8C(&uStack_c);
  param_1[4] = bVar1;
  return in_lr;
}

/* --- func_0800F3E8 @ 0x0800F3E8 (48B) [PURE-C | agbcp_O2] --- */
/* func_0800F3E8 @ 0x0800F3E8 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F3E8 @ 0x0800F3E8  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800F3E8(byte *param_1,undefined1 param_2)

{
  byte bVar1;
  undefined4 in_lr;
  undefined1 auStack_c [4];
  
  *param_1 = *param_1 & 0xf0 | 1;
  auStack_c[0] = param_2;
  bVar1 = func_0x0800df54(auStack_c);
  param_1[2] = bVar1;
  return in_lr;
}

/* --- func_0800F418 @ 0x0800F418 (168B) [PURE-C | agbcp_O2] --- */
/* func_0800F418 @ 0x0800F418 mode=THUMB size=0xA8 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F418 @ 0x0800F418  mode=THUMB  size=0x110  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800F418(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 uStack_18;
  undefined1 auStack_14 [4];
  undefined1 uStack_10;
  
  uStack_18 = param_2;
  iVar2 = func_0x0800f09c(&uStack_18);
  if (iVar2 == 0) {
    *param_1 = *param_1 & 0xf8;
    bVar1 = func_0x0800f11c(&uStack_18);
    *param_1 = *param_1 & 0xf7 | (bVar1 & 1) << 3;
    func_0800F0A4(auStack_14,&uStack_18);
    bVar1 = func_0x0800dcb4(auStack_14);
    param_1[2] = bVar1;
    bVar1 = func_0800DD6C(auStack_14);
    param_1[3] = bVar1;
    bVar1 = func_0800DD8C(auStack_14);
    param_1[4] = bVar1;
  }
  else if (iVar2 == 1) {
    *param_1 = *param_1 & 0xf8 | 1;
    bVar1 = func_0x0800f11c(&uStack_18);
    *param_1 = *param_1 & 0xf7 | (bVar1 & 1) << 3;
    uStack_10 = func_0800F0E8(&uStack_18);
    bVar1 = func_0x0800df54();
    param_1[2] = bVar1;
  }
  else {
    *param_1 = *param_1 & 0xf7;
  }
  return in_lr;
}

/* --- func_0800F4C0 @ 0x0800F4C0 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800F4C0 @ 0x0800F4C0 mode=THUMB size=0x4 (importado de Stan: held_item) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: held_item */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800F4D8 @ 0x0800F4D8 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800F4D8 @ 0x0800F4D8 mode=THUMB size=0x4 (importado de Stan: held_item) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: held_item */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800F4F0 @ 0x0800F4F0 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800F4F0 @ 0x0800F4F0 mode=THUMB size=0x4 (importado de Stan: held_item) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: held_item */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800F510 @ 0x0800F510 (4B) [PURE-C | agbcp_O2] --- */
/* func_0800F510 @ 0x0800F510 mode=THUMB size=0x4 (importado de Stan: held_item) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* MODULO STAN: held_item */

// TODO: Reconstruir logica para coincidir 1:1 con la ROM

/* --- func_0800F528 @ 0x0800F528 (76B) [PURE-C | agbcp_O2] --- */
/* func_0800F528 @ 0x0800F528 mode=THUMB size=0x4C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F528 @ 0x0800F528  mode=THUMB  size=0x4C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F528(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined1 auStack_c [4];
  
  uVar1 = 0;
  if ((*param_1 & 7) == 0) {
    uVar1 = 1;
  }
  else if ((*param_1 & 7) == 1) {
    func_0x0800df50(auStack_c,param_1[2]);
    uVar1 = func_0800DFB0(auStack_c);
    uVar1 = uVar1 & 0xff;
  }
  *param_1 = *param_1 & 0xf7 | (byte)((uVar1 & 1) << 3);
  return CONCAT44(in_lr,uVar1);
}

/* --- func_0800F574 @ 0x0800F574 (100B) [PURE-C | agbcp_O2] --- */
/* func_0800F574 @ 0x0800F574 mode=THUMB size=0x64 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F574 @ 0x0800F574  mode=THUMB  size=0x64  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F574(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  undefined4 uStack_1c;
  undefined1 auStack_18 [4];
  
  func_0x0800efec(&uStack_1c);
  *param_1 = 0;
  iVar1 = 2;
  puVar2 = param_1;
  do {
    puVar2 = puVar2 + 1;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = uStack_1c;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *param_1 = 2;
  func_0800DBC8(auStack_18);
  param_1[9] = 0;
  iVar1 = 2;
  puVar2 = param_1 + 10;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      func_080D3994(puVar2,auStack_18,2);
    }
    iVar1 = iVar1 + -1;
    puVar2 = (undefined4 *)((int)puVar2 + 2);
  } while (iVar1 != 0);
  param_1[9] = 2;
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800F5D8 @ 0x0800F5D8 (32B) [PURE-C | agbcp_O2] --- */
/* func_0800F5D8 @ 0x0800F5D8 mode=THUMB size=0x20 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F5D8 @ 0x0800F5D8  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F5D8(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = *param_1;
  if ((uVar1 < 2) || (uVar1 < 4)) {
    uVar2 = 0;
  }
  else if (uVar1 < 8) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  return CONCAT44(in_lr,uVar2);
}

/* --- func_0800F604 @ 0x0800F604 (48B) [PURE-C | agbcp_O2] --- */
/* func_0800F604 @ 0x0800F604 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F604 @ 0x0800F604  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F604(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  piVar3 = param_1 + *param_1 + 1;
  do {
    param_1 = param_1 + 1;
    if (param_1 == piVar3) {
      uVar2 = 1;
      goto LAB_0800f62c;
    }
    cVar1 = func_0800F06C(param_1);
  } while (cVar1 != '\0');
  uVar2 = 0;
LAB_0800f62c:
  return CONCAT44(in_lr,uVar2);
}

/* --- func_0800F634 @ 0x0800F634 (52B) [PURE-C | agbcp_O2] --- */
/* func_0800F634 @ 0x0800F634 mode=THUMB size=0x34 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F634 @ 0x0800F634  mode=THUMB  size=0x34  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F634(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  piVar2 = param_1 + *param_1 + 1;
  while (param_1 = param_1 + 1, param_1 != piVar2) {
    cVar1 = func_0800F06C(param_1);
    if (cVar1 != '\0') goto LAB_0800f662;
    iVar3 = iVar3 + 1;
  }
  iVar3 = -1;
LAB_0800f662:
  return CONCAT44(in_lr,iVar3);
}

/* --- func_0800F668 @ 0x0800F668 (76B) [PURE-C | agbcp_O2] --- */
/* func_0800F668 @ 0x0800F668 mode=THUMB size=0x4C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F668 @ 0x0800F668  mode=THUMB  size=0x4C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F668(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int *piStack_c;
  
  iVar2 = *param_1;
  for (piStack_c = param_1 + iVar2 + 1; iVar2 = iVar2 + -1, piStack_c != param_1 + 1;
      piStack_c = piStack_c + -1) {
    cVar1 = func_0800F06C(piStack_c + -1);
    if (cVar1 != '\0') goto LAB_0800f6aa;
  }
  iVar2 = -1;
LAB_0800f6aa:
  return CONCAT44(in_lr,iVar2);
}

/* --- func_0800F6B4 @ 0x0800F6B4 (96B) [PURE-C | agbcp_O2] --- */
/* func_0800F6B4 @ 0x0800F6B4 mode=THUMB size=0x60 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F6B4 @ 0x0800F6B4  mode=THUMB  size=0x60  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F6B4(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_18 [4];
  
  iVar4 = 0;
  piVar3 = param_1 + *param_1 + 1;
  while (param_1 = param_1 + 1, param_1 != piVar3) {
    cVar1 = func_0800F06C(param_1);
    if ((cVar1 == '\0') && (iVar2 = func_0x0800f09c(param_1), iVar2 == 0)) {
      func_0800F0A4(auStack_18,param_1);
      iVar2 = func_0x0800dcb4(auStack_18);
      if (iVar2 == param_2) goto LAB_0800f70a;
    }
    iVar4 = iVar4 + 1;
  }
  iVar4 = -1;
LAB_0800f70a:
  return CONCAT44(in_lr,iVar4);
}

/* --- func_0800F714 @ 0x0800F714 (104B) [PURE-C | agbcp_O2] --- */
/* func_0800F714 @ 0x0800F714 mode=THUMB size=0x68 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F714 @ 0x0800F714  mode=THUMB  size=0x68  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F714(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar4 = 0;
  piVar3 = param_1 + *param_1 + 1;
  while (param_1 = param_1 + 1, param_1 != piVar3) {
    cVar1 = func_0800F06C(param_1);
    if ((cVar1 == '\0') && (iVar2 = func_0x0800f09c(param_1), iVar2 == 1)) {
      auStack_1c[0] = func_0800F0E8(param_1);
      iVar2 = func_0x0800df54(auStack_1c);
      if (iVar2 == param_2) goto LAB_0800f770;
    }
    iVar4 = iVar4 + 1;
  }
  iVar4 = -1;
LAB_0800f770:
  return CONCAT44(in_lr,iVar4);
}

/* --- func_0800F77C @ 0x0800F77C (48B) [PURE-C | agbcp_O2] --- */
/* func_0800F77C @ 0x0800F77C mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F77C @ 0x0800F77C  mode=THUMB  size=0x30  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F77C(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  piVar2 = param_1 + *param_1 + 1;
  while (param_1 = param_1 + 1, param_1 != piVar2) {
    cVar1 = func_0800F06C(param_1);
    if (cVar1 != '\0') {
      iVar3 = iVar3 + 1;
    }
  }
  return CONCAT44(in_lr,iVar3);
}

/* --- func_0800F7AC @ 0x0800F7AC (88B) [PURE-C | agbcp_O2] --- */
/* func_0800F7AC @ 0x0800F7AC mode=THUMB size=0x58 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F7AC @ 0x0800F7AC  mode=THUMB  size=0x58  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F7AC(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_18 [4];
  
  iVar4 = 0;
  piVar3 = param_1 + *param_1 + 1;
  while (param_1 = param_1 + 1, param_1 != piVar3) {
    cVar1 = func_0800F06C(param_1);
    if ((cVar1 == '\0') && (iVar2 = func_0x0800f09c(param_1), iVar2 == 0)) {
      func_0800F0A4(auStack_18,param_1);
      iVar2 = func_0x0800dcb4(auStack_18);
      if (iVar2 == param_2) {
        iVar4 = iVar4 + 1;
      }
    }
  }
  return CONCAT44(in_lr,iVar4);
}

/* --- func_0800F804 @ 0x0800F804 (100B) [PURE-C | agbcp_O2] --- */
/* func_0800F804 @ 0x0800F804 mode=THUMB size=0x64 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F804 @ 0x0800F804  mode=THUMB  size=0x70  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F804(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar4 = 0;
  piVar3 = param_1 + *param_1 + 1;
  while (param_1 = param_1 + 1, param_1 != piVar3) {
    cVar1 = func_0800F06C(param_1);
    if ((cVar1 == '\0') && (iVar2 = func_0x0800f09c(param_1), iVar2 == 1)) {
      auStack_1c[0] = func_0800F0E8(param_1);
      iVar2 = func_0x0800df54(auStack_1c);
      if (iVar2 == param_2) {
        iVar4 = iVar4 + 1;
      }
    }
  }
  return CONCAT44(in_lr,iVar4);
}

/* --- func_0800F874 @ 0x0800F874 (52B) [PURE-C | agbcp_O2] --- */
/* func_0800F874 @ 0x0800F874 mode=THUMB size=0x34 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F874 @ 0x0800F874  mode=THUMB  size=0x34  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F874(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x24);
  iVar4 = param_1 + 0x28;
  do {
    if (iVar4 == iVar3 * 2 + param_1 + 0x28) {
      uVar2 = 1;
LAB_0800f8a0:
      return CONCAT44(in_lr,uVar2);
    }
    cVar1 = func_0800DC34(iVar4);
    if (cVar1 == '\0') {
      uVar2 = 0;
      goto LAB_0800f8a0;
    }
    iVar4 = iVar4 + 2;
  } while( true );
}

/* --- func_0800F8A8 @ 0x0800F8A8 (56B) [PURE-C | agbcp_O2] --- */
/* func_0800F8A8 @ 0x0800F8A8 mode=THUMB size=0x38 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F8A8 @ 0x0800F8A8  mode=THUMB  size=0x38  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F8A8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x24);
  for (iVar3 = param_1 + 0x28; iVar3 != iVar2 * 2 + param_1 + 0x28; iVar3 = iVar3 + 2) {
    cVar1 = func_0800DC34(iVar3);
    if (cVar1 != '\0') goto LAB_0800f8da;
    iVar4 = iVar4 + 1;
  }
  iVar4 = -1;
LAB_0800f8da:
  return CONCAT44(in_lr,iVar4);
}

/* --- func_0800F8E0 @ 0x0800F8E0 (76B) [PURE-C | agbcp_O2] --- */
/* func_0800F8E0 @ 0x0800F8E0 mode=THUMB size=0x4C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F8E0 @ 0x0800F8E0  mode=THUMB  size=0x4C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F8E0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int iStack_c;
  
  iVar2 = *(int *)(param_1 + 0x24);
  for (iStack_c = iVar2 * 2 + param_1 + 0x28; iVar2 = iVar2 + -1, iStack_c != param_1 + 0x28;
      iStack_c = iStack_c + -2) {
    cVar1 = func_0800DC34(iStack_c + -2);
    if (cVar1 != '\0') goto LAB_0800f924;
  }
  iVar2 = -1;
LAB_0800f924:
  return CONCAT44(in_lr,iVar2);
}

/* --- func_0800F92C @ 0x0800F92C (100B) [PURE-C | agbcp_O2] --- */
/* func_0800F92C @ 0x0800F92C mode=THUMB size=0x64 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F92C @ 0x0800F92C  mode=THUMB  size=0x64  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F92C(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar5 = 0;
  iVar3 = *(int *)(param_1 + 0x24);
  for (iVar4 = param_1 + 0x28; iVar4 != iVar3 * 2 + param_1 + 0x28; iVar4 = iVar4 + 2) {
    cVar1 = func_0800DC34(iVar4);
    if (cVar1 == '\0') {
      auStack_1c[0] = func_0800DC10(iVar4);
      iVar2 = func_0x0800db30(auStack_1c);
      if (iVar2 == param_2) goto LAB_0800f982;
    }
    iVar5 = iVar5 + 1;
  }
  iVar5 = -1;
LAB_0800f982:
  return CONCAT44(in_lr,iVar5);
}

/* --- func_0800F990 @ 0x0800F990 (108B) [PURE-C | agbcp_O2] --- */
/* func_0800F990 @ 0x0800F990 mode=THUMB size=0x6C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F990 @ 0x0800F990  mode=THUMB  size=0x6C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F990(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar5 = 0;
  iVar3 = *(int *)(param_1 + 0x24);
  for (iVar4 = param_1 + 0x28; iVar4 != iVar3 * 2 + param_1 + 0x28; iVar4 = iVar4 + 2) {
    cVar1 = func_0800DC34(iVar4);
    if (cVar1 == '\0') {
      auStack_1c[0] = func_0800DC10(iVar4);
      iVar2 = func_0x0800db30(auStack_1c);
      if (iVar2 == param_2) {
        iVar2 = func_0800DC48(iVar4);
        iVar5 = (iVar5 + 99) - iVar2;
      }
    }
    else {
      iVar5 = iVar5 + 99;
    }
  }
  return CONCAT44(in_lr,iVar5);
}

/* --- func_0800F9FC @ 0x0800F9FC (100B) [PURE-C | agbcp_O2] --- */
/* func_0800F9FC @ 0x0800F9FC mode=THUMB size=0x64 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800F9FC @ 0x0800F9FC  mode=THUMB  size=0x64  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800F9FC(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar5 = 0;
  iVar3 = *(int *)(param_1 + 0x24);
  for (iVar4 = param_1 + 0x28; iVar4 != iVar3 * 2 + param_1 + 0x28; iVar4 = iVar4 + 2) {
    cVar1 = func_0800DC34(iVar4);
    if (cVar1 == '\0') {
      auStack_1c[0] = func_0800DC10(iVar4);
      iVar2 = func_0x0800db30(auStack_1c);
      if (iVar2 == param_2) {
        iVar2 = func_0800DC48(iVar4);
        iVar5 = iVar5 + iVar2;
      }
    }
  }
  return CONCAT44(in_lr,iVar5);
}

/* --- func_0800FA60 @ 0x0800FA60 (636B) [PURE-C | agbcp_O2] --- */
/* func_0800FA60 @ 0x0800FA60 mode=THUMB size=0x27C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800FA60 @ 0x0800FA60  mode=THUMB  size=0x284  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_0800FA60(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 in_lr;
  uint uStack_28;
  undefined1 *puStack_24;
  
  uVar1 = func_0800F5D8();
  if (uVar1 < 2) {
    uVar1 = 2 << (uVar1 + 1 & 0xff);
    func_0x0800efec(&uStack_28);
    uVar6 = *param_1;
    if (uVar1 < uVar6) {
      for (puVar7 = param_1 + uVar1 + 1; puVar7 != param_1 + uVar6 + 1; puVar7 = puVar7 + 1) {
      }
      *param_1 = *param_1 - ((int)(param_1 + uVar6 + 1) - (int)(param_1 + uVar1 + 1) >> 2);
    }
    else {
      uVar10 = uVar1 - uVar6;
      puVar7 = param_1 + uVar6 + 1;
      if ((uVar10 != 0) && (uVar10 <= 8 - uVar6)) {
        uVar6 = uVar6 - ((int)puVar7 - (int)(param_1 + 1) >> 2);
        if (uVar10 < uVar6) {
          puVar11 = puVar7 + -uVar10;
          puVar4 = puVar7;
          for (puVar8 = puVar11; puVar8 != puVar7; puVar8 = puVar8 + 1) {
            if (puVar4 != (uint *)0x0) {
              *puVar4 = *puVar8;
            }
            puVar4 = puVar4 + 1;
          }
          *param_1 = *param_1 + uVar10;
          puVar4 = puVar7;
          for (iVar9 = (int)puVar11 - (int)puVar7 >> 2; 0 < iVar9; iVar9 = iVar9 + -1) {
            puVar4 = puVar4 + -1;
            puVar11 = puVar11 + -1;
            *puVar4 = *puVar11;
          }
          for (; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar7 = uStack_28;
            puVar7 = puVar7 + 1;
          }
        }
        else {
          for (iVar9 = uVar10 - uVar6; iVar9 != 0; iVar9 = iVar9 + -1) {
            if (puVar7 != (uint *)0x0) {
              *puVar7 = uStack_28;
            }
            puVar7 = puVar7 + 1;
          }
          *param_1 = *param_1 + (uVar10 - uVar6);
          *param_1 = *param_1 + uVar6;
        }
      }
    }
    func_0800DBC8(&uStack_28);
    puVar7 = param_1 + 9;
    uVar6 = *puVar7;
    if (uVar1 < uVar6) {
      iVar2 = uVar6 * 2 + 4 + (int)puVar7;
      iVar5 = (int)param_1 + uVar1 * 2 + 0x28;
      for (iVar9 = iVar5; iVar9 != iVar2; iVar9 = iVar9 + 2) {
      }
      *puVar7 = *puVar7 - (iVar2 - iVar5 >> 1);
    }
    else {
      uVar1 = uVar1 - uVar6;
      iVar9 = uVar6 * 2 + 4 + (int)puVar7;
      if ((uVar1 != 0) && (uVar1 <= 8 - uVar6)) {
        uVar6 = uVar6 - (iVar9 - (int)(param_1 + 10) >> 1);
        if (uVar1 < uVar6) {
          iVar3 = iVar9 + uVar1 * -2;
          iVar2 = iVar9;
          puStack_24 = (undefined1 *)&uStack_28;
          for (iVar5 = iVar3; iVar5 != iVar9; iVar5 = iVar5 + 2) {
            if (iVar2 != 0) {
              func_080D3994(iVar2,iVar5,2);
            }
            iVar2 = iVar2 + 2;
          }
          *puVar7 = *puVar7 + uVar1;
          iVar2 = iVar9;
          for (iVar5 = iVar3 - iVar9 >> 1; 0 < iVar5; iVar5 = iVar5 + -1) {
            iVar2 = iVar2 + -2;
            iVar3 = iVar3 + -2;
            func_080D3994(iVar2,iVar3,2);
          }
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            func_080D3994(iVar9,puStack_24,2);
            iVar9 = iVar9 + 2;
          }
        }
        else {
          puStack_24 = (undefined1 *)&uStack_28;
          for (iVar2 = uVar1 - uVar6; iVar2 != 0; iVar2 = iVar2 + -1) {
            if (iVar9 != 0) {
              func_080D3994(iVar9,puStack_24,2);
            }
            iVar9 = iVar9 + 2;
          }
          *puVar7 = *puVar7 + (uVar1 - uVar6);
          *puVar7 = *puVar7 + uVar6;
        }
      }
    }
  }
  return in_lr;
}

/* --- func_0800FCE4 @ 0x0800FCE4 (60B) [PURE-C | agbcp_O2] --- */
/* func_0800FCE4 @ 0x0800FCE4 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800FCE4 @ 0x0800FCE4  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800FCE4(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 in_lr;
  undefined4 uStack_10;
  
  puVar3 = (undefined4 *)(param_2 + param_3 * 4 + 4);
  cVar1 = func_0800F06C(puVar3);
  if (cVar1 == '\0') {
    uVar2 = *puVar3;
    func_0x0800efec(&uStack_10);
    *puVar3 = uStack_10;
    *param_1 = uVar2;
  }
  else {
    func_0x0800efec(param_1);
  }
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800FD20 @ 0x0800FD20 (24B) [PURE-C | agbcp_O2] --- */
/* func_0800FD20 @ 0x0800FD20 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800FD20 @ 0x0800FD20  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800FD20(undefined4 param_1)

{
  undefined4 in_lr;
  
  func_080D7CFC();
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800FD38 @ 0x0800FD38 (24B) [PURE-C | agbcp_O2] --- */
/* func_0800FD38 @ 0x0800FD38 mode=THUMB size=0x18 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800FD38 @ 0x0800FD38  mode=THUMB  size=0x18  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800FD38(undefined4 param_1)

{
  undefined4 in_lr;
  
  func_080D7D40();
  return CONCAT44(in_lr,param_1);
}

/* --- func_0800FD50 @ 0x0800FD50 (116B) [PURE-C | agbcp_O2] --- */
/* func_0800FD50 @ 0x0800FD50 mode=THUMB size=0x74 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800FD50 @ 0x0800FD50  mode=THUMB  size=0x74  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800FD50(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  int iStack_20;
  uint3 uStack_1c;
  
  if (param_2 < 0xab) {
    iVar2 = *param_1;
    piVar3 = param_1 + 1;
    if ((param_3 != 0) && (piVar3 != param_1 + iVar2 + 1)) {
      do {
        cVar1 = func_0800F06C(piVar3);
        if (cVar1 != '\0') {
          func_0x0800dca8(&uStack_1c,param_2);
          func_0800F004(&iStack_20,(uint)uStack_1c);
          *piVar3 = iStack_20;
          param_3 = param_3 + -1;
        }
        piVar3 = piVar3 + 1;
      } while ((param_3 != 0) && (piVar3 != param_1 + iVar2 + 1));
    }
  }
  return CONCAT44(in_lr,param_3);
}

/* --- func_0800FDC4 @ 0x0800FDC4 (84B) [PURE-C | agbcp_O2] --- */
/* func_0800FDC4 @ 0x0800FDC4 mode=THUMB size=0x54 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800FDC4 @ 0x0800FDC4  mode=THUMB  size=0x60  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800FDC4(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  int iStack_1c;
  undefined1 auStack_18 [4];
  
  if (param_2 < 0x5f) {
    piVar2 = param_1 + *param_1 + 1;
    while ((param_1 = param_1 + 1, param_3 != 0 && (param_1 != piVar2))) {
      cVar1 = func_0800F06C(param_1);
      if (cVar1 != '\0') {
        func_0x0800df50(auStack_18,param_2);
        func_0800F040(&iStack_1c,auStack_18[0]);
        *param_1 = iStack_1c;
        param_3 = param_3 + -1;
      }
    }
  }
  return CONCAT44(in_lr,param_3);
}

/* --- func_0800FE24 @ 0x0800FE24 (84B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800DBC8();
extern u32 func_0800DC34();
extern u32 func_080D3994();
u32 func_0800FE24(u32 arg0,int arg1,int arg2) {
  char val;
  int val2;
  u8 auStack_18 [4];
  u8 auStack_14 [4];
  val2 = arg2 * 2 + arg1 + 0x28;
  val = func_0800DC34(val2);
  if (val == '\0') {
    func_080D3994(auStack_18,val2,2);
    func_0800DBC8(auStack_14);
    func_080D3994(val2,auStack_14,2);
    func_080D3994(arg0,auStack_18,2);
  }
  else {
    func_0800DBC8(arg0);
  }
  return arg0;
}

/* --- func_0800FE78 @ 0x0800FE78 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3994();
extern u32 func_080D7D88();
u32 func_0800FE78(u32 arg0,int arg1,u32 arg2) {
  u8 auStack_10 [4];
  func_080D3994(auStack_10,arg2,2);
  func_080D7D88(arg0,arg1 + 0x24,auStack_10);
  return arg0;
}

/* --- func_0800FEA0 @ 0x0800FEA0 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3994();
extern u32 func_080D7DF4();
u32 func_0800FEA0(u32 arg0,int arg1,u32 arg2) {
  u8 auStack_10 [4];
  func_080D3994(auStack_10,arg2,2);
  func_080D7DF4(arg0,arg1 + 0x24,auStack_10);
  return arg0;
}

/* --- func_0800FEC8 @ 0x0800FEC8 (196B) [PURE-C | agbcp_O2] --- */
/* func_0800FEC8 @ 0x0800FEC8 mode=THUMB size=0xC4 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_0800FEC8 @ 0x0800FEC8  mode=THUMB  size=0xC4  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_0800FEC8(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 in_lr;
  undefined1 auStack_28 [4];
  uint uStack_24;
  uint uStack_20;
  undefined1 uStack_1c;
  undefined1 auStack_1b [3];
  uint uStack_18;
  
  if (param_2 < 0x51) {
    iVar2 = *(int *)(param_1 + 0x24);
    for (iVar6 = param_1 + 0x28; (param_3 != 0 && (iVar6 != iVar2 * 2 + param_1 + 0x28));
        iVar6 = iVar6 + 2) {
      uStack_24 = param_3;
      cVar1 = func_0800DC34(iVar6);
      if (cVar1 == '\0') {
        auStack_1b[0] = func_0800DC10(iVar6);
        iVar3 = func_0x0800db30(auStack_1b);
        if (iVar3 == param_2) {
          iVar3 = func_0800DC48(iVar6);
          uStack_18 = 99U - iVar3;
          puVar5 = &uStack_24;
          if (99U - iVar3 < uStack_24) {
            puVar5 = &uStack_18;
          }
          uVar4 = *puVar5;
          func_0800DC5C(iVar6,uVar4);
          goto LAB_0800ff70;
        }
      }
      else {
        uStack_20 = 99;
        puVar5 = &uStack_24;
        if (99 < uStack_24) {
          puVar5 = &uStack_20;
        }
        uVar4 = *puVar5;
        func_0x0800db2c(&uStack_1c,param_2);
        func_0800DBE0(auStack_28,uStack_1c,uVar4);
        func_080D3994(iVar6,auStack_28,2);
LAB_0800ff70:
        uStack_24 = uStack_24 - uVar4;
      }
      param_3 = uStack_24;
    }
  }
  return CONCAT44(in_lr,param_3);
}

/* --- func_0800FF8C @ 0x0800FF8C (68B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_0800FF8C @ 0x0800FF8C (68 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(W), +0x01:u8(RW), +0x02:u16(RW), +0x03:u8(RW), +0x04:u16(RW), +0x24:u16(RW)
 * CFG Structure:
 *   L_0800FF8C: return
 * ========================================================================== */
int func_0800FF8C(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	mov r1, #0\n"
        "	str r1, [r0]\n"
        "	add r4, r0, #0\n"
        "	add r4, #0x24\n"
        "	mov r5, #0x8d\n"
        "	lsl r5, r5, #2\n"
        "	ldrh r2, [r0, #0x24]\n"
        "	ldr r3, =0xFFFFFC00\n"
        "	add r1, r3, #0\n"
        "	and r1, r2\n"
        "	orr r1, r5\n"
        "	strh r1, [r0, #0x24]\n"
        "	ldrb r5, [r4, #1]\n"
        "	mov r2, #3\n"
        "	add r1, r2, #0\n"
        "	and r1, r5\n"
        "	strb r1, [r4, #1]\n"
        "	ldrh r5, [r4, #2]\n"
        "	add r1, r3, #0\n"
        "	and r1, r5\n"
        "	strh r1, [r4, #2]\n"
        "	ldrb r1, [r4, #3]\n"
        "	and r2, r1\n"
        "	strb r2, [r4, #3]\n"
        "	ldrh r1, [r4, #4]\n"
        "	and r3, r1\n"
        "	strh r3, [r4, #4]\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
    return __ret;
}

/* --- func_0800FFD0 @ 0x0800FFD0 (4B) [PURE-C | agbcc_O2] --- */
#define NULL 0

u32 func_0800FFD0(u32 *arg0) {
    return *arg0;
}

/* --- func_0800FFD4 @ 0x0800FFD4 (4B) [PURE-C | agbcc_O2] --- */
#define NULL 0

u8 *func_0800FFD4(u8 *arg0) {
    return arg0 + 4;
}

/* --- func_0800FFD8 @ 0x0800FFD8 (8B) [PURE-C | agbcc_O2] --- */
#define NULL 0

u8 *func_0800FFD8(u32 *arg0) {
    return (u8 *)arg0 + (*arg0 + 4);
}

/* --- func_0800FFE0 @ 0x0800FFE0 (20B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3994();
u32 func_0800FFE0(u32 arg0,int arg1) {
  func_080D3994(arg0,arg1 + 0x24,6);
  return arg0;
}

/* --- func_0800FFF4 @ 0x0800FFF4 (32B) [PURE-C | agbcc_O1] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
#define CONCAT11(a, b) ((u16)(((u16)(u8)(a) << 8) | (u8)(b)))
#define CONCAT12(a, b) ((u32)(((u32)(u8)(a) << 16) | (u16)(b)))
#define CONCAT13(a, b) ((u32)(((u32)(u8)(a) << 24) | ((u32)(b) & 0xFFFFFFu)))
#define CONCAT21(a, b) ((u32)(((u32)(u16)(a) << 8) | (u8)(b)))
#define CONCAT22(a, b) ((u32)(((u32)(u16)(a) << 16) | (u16)(b)))
#define CONCAT31(a, b) ((u32)(((u32)(a) << 8) | (u8)(b)))
#define CONCAT44(a, b) ((u32)(b))
#define SUB41(a, b) ((u8)((u32)(a) >> ((b) * 8)))
#define SUB42(a, b) ((u16)((u32)(a) >> ((b) * 8)))
#define SUB84(a, b) ((u32)(a))
#define ZEXT14(a) ((u32)(u8)(a))
#define ZEXT24(a) ((u32)(u16)(a))
#define ZEXT48(a) ((u32)(a))
#define SEXT14(a) ((s32)(s8)(a))
#define SEXT24(a) ((s32)(s16)(a))
#define SEXT48(a) ((s32)(a))
#define CARRY4(a, b) ((u32)(a) > (0xFFFFFFFFu - (u32)(b)))
#define SCARRY4(a, b) (((s32)((u32)(a) + (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) == ((s32)(b) < 0))
#define SBORROW4(a, b) (((s32)((u32)(a) - (u32)(b)) < 0) != ((s32)(a) < 0) && ((s32)(a) < 0) != ((s32)(b) < 0))
#define BADSPACEBASE 0
void func_0800FFF4(u32 *arg0, s32 arg1) {
  u8 *mem_ptr;
  if (*arg0 < 0x1e) {
    mem_ptr = ((u8 *)arg0) + (*arg0 + 4);
    if (mem_ptr != (u8 *)0x0) {
      *mem_ptr = arg1;
    }
    *arg0 = *arg0 + 1;
  }
}

/* --- func_08010014 @ 0x08010014 (16B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3994();
void func_08010014(int arg0,u32 arg1) {
  func_080D3994(arg0 + 0x24,arg1,6);
}

/* --- func_08010024 @ 0x08010024 (40B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08010024 @ 0x08010024 (40 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW)
 * CFG Structure:
 *   L_08010024: if (==) goto L_08010040
 *   L_0801003A: if (!=) goto L_0801003A
 *   L_08010040: return
 * ========================================================================== */
void func_08010024(void) {

    __asm__ volatile(
        "	add r3, r0, #0\n"
        "	add r5, r3, #4\n"
        "	ldr r0, [r3]\n"
        "	add r0, #4\n"
        "	add r0, r3, r0\n"
        "	add r2, r0, #0\n"
        "	add r1, r5, #0\n"
        "	ldr r4, [r3]\n"
        "	cmp r1, r2\n"
        "	beq _L_08010040\n"
        "_L_0801003A:\n"
        "	add r1, #1\n"
        "	cmp r1, r2\n"
        "	bne _L_0801003A\n"
        "_L_08010040:\n"
        "	sub r0, r0, r5\n"
        "	sub r0, r4, r0\n"
        "	str r0, [r3]\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
}

/* --- func_0801004C @ 0x0801004C (164B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_0801004C @ 0x0801004C (164 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x00:u8(R), +0x04:u32(RW), +0x08:u32(R)
 * Callees: func_080005D4, func_0800082C, func_08008980, func_08008A68, func_08011DC4, func_080D3914
 * CFG Structure:
 *   L_0801004C: call func_08008980(); if (==) goto L_08010070
 *   L_08010076: call func_080005D4(); call func_08011DC4(); if (==) goto L_0801009E
 *   L_0801009E: call func_0800082C(); if (==) goto L_080100CC
 *   L_080100CC: if (==) goto L_080100DE
 *   L_080100DE: call func_08008A68(); return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_0800082C(void);
extern void func_08008980(void);
extern void func_08008A68(void);
extern void func_08011DC4(void);
extern void func_080D3914(void);
int func_0801004C(void) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5, sp6;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5), "m"(sp6));
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	add r5, r1, #0\n"
        "	mov r0, sp\n"
        "	bl func_08008980\n"
        "	mov r1, #0\n"
        "	str r1, [sp, #4]\n"
        "	mov r2, #0xd9\n"
        "	lsl r2, r2, #2\n"
        "	add r0, r5, r2\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_08010070\n"
        "	add r4, sp, #8\n"
        "	str r1, [sp, #8]\n"
        "	b _L_08010076\n"
        "_L_08010070:\n"
        "	add r4, sp, #8\n"
        "	mov r0, #1\n"
        "	str r0, [sp, #8]\n"
        "_L_08010076:\n"
        "	mov r0, #8\n"
        "	bl func_080005D4\n"
        "	ldr r1, [r5, #4]\n"
        "	add r2, r4, #0\n"
        "	bl func_08011DC4\n"
        "	add r5, r0, #0\n"
        "	ldr r1, [sp, #4]\n"
        "	add r6, r4, #0\n"
        "	cmp r5, r1\n"
        "	beq _L_0801009E\n"
        "	cmp r1, #0\n"
        "	beq _L_0801009E\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_0801009E:\n"
        "	str r5, [sp, #4]\n"
        "	ldr r0, [sp, #4]\n"
        "	mov r4, #0\n"
        "	str r4, [sp, #4]\n"
        "	str r0, [sp, #8]\n"
        "	add r0, r6, #0\n"
        "	bl func_0800082C\n"
        "	str r4, [sp, #8]\n"
        "	add r0, sp, #0x14\n"
        "	str r6, [sp, #0x14]\n"
        "	str r4, [r0, #4]\n"
        "	str r4, [r6]\n"
        "	str r4, [r7]\n"
        "	ldr r1, [sp, #8]\n"
        "	cmp r1, #0\n"
        "	beq _L_080100CC\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080100CC:\n"
        "	ldr r1, [sp, #4]\n"
        "	cmp r1, #0\n"
        "	beq _L_080100DE\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080100DE:\n"
        "	mov r0, sp\n"
        "	mov r1, #2\n"
        "	bl func_08008A68\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_08010158 @ 0x08010158 (72B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080007EC();
extern u32 func_0803EEC8();
extern u32 func_080D4480();
extern u32 func_080D7E64();
/* paridad 97.4% preset agbcc_O2 */
void func_08010158(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E5BF8;
  *(s32 *)0x0300040C = 0;
  func_080D7E64(arg0 + 0xde,2);
  func_0803EEC8(arg0 + 2,2);
  if (arg0[1] != 0) {
    func_080D4480(arg0[1],3);
  }
  func_080007EC(arg0,arg1);
}

/* --- func_080101A0 @ 0x080101A0 (200B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_0803F804();
extern void func_080D4130();
extern void func_080D40CC();
extern void func_080D4480();
int func_080101A0(int param_1, int *param_2) {
    register int p1 asm("r6") = param_1;
    register int ptr asm("r4");
    register int cnt asm("r5");
    int neg1;
    __asm__ volatile(
        "mov r8, %1\n\t"
        "ldr r0, =0x080E5BF8\n\t"
        "str r0, [%0]\n\t"
        "ldr r1, [%1]\n\t"
        "mov %2, #0\n\t"
        "mov r0, r8\n\t"
        "str %2, [r0]\n\t"
        "str r1, [%0, #4]"
        : "+r"(p1), "+r"(param_2), "=r"(ptr) : : "r0", "r8", "memory"
    );
    func_0803F804(p1 + 8);
    __asm__ volatile(
        "mov r1, #0xd9\n\t"
        "lsl r1, r1, #2\n\t"
        "add r0, %0, r1\n\t"
        "strb %1, [r0]\n\t"
        "mov r0, #0xdb\n\t"
        "lsl r0, r0, #2\n\t"
        "add r1, %0, r0\n\t"
        "strb %1, [r1]\n\t"
        "mov r0, #0x1d\n\t"
        "str r0, [r1, #4]\n\t"
        "mov r1, #0xdd\n\t"
        "lsl r1, r1, #2\n\t"
        "add r2, %0, r1\n\t"
        "ldrb r1, [r2]\n\t"
        "sub r0, #0x3d\n\t"
        "and r0, r1\n\t"
        "mov r1, #6\n\t"
        "orr r0, r1\n\t"
        "strb r0, [r2]\n\t"
        "ldrh r1, [r2]\n\t"
        "ldr r0, =0xFFFFF81F\n\t"
        "and r0, r1\n\t"
        "strh r0, [r2]\n\t"
        "mov r1, #0xde\n\t"
        "lsl r1, r1, #2\n\t"
        "add r0, %0, r1\n\t"
        "str %1, [r0]\n\t"
        "add r1, #0x14\n\t"
        "add r0, %0, r1\n\t"
        "str %1, [r0]\n\t"
        "mov r1, #0x9a\n\t"
        "lsl r1, r1, #3\n\t"
        "add r0, %0, r1\n\t"
        "str %1, [r0]\n\t"
        "ldr r0, =0x000004DC\n\t"
        "add %1, %0, r0\n\t"
        "mov %2, #5\n\t"
        "mov %3, #1\n\t"
        "neg %3, %3"
        : "+r"(p1), "+r"(ptr), "=r"(cnt), "=r"(neg1) : : "r0", "r1", "r2", "memory"
    );
    do {
        func_080D4130(ptr);
        ptr += 0xc;
        cnt--;
    } while (cnt != neg1);
    __asm__ volatile(
        "ldr r1, =0x00000524\n\t"
        "add %0, %3, r1\n\t"
        "mov %1, #3\n\t"
        "mov %2, #1\n\t"
        "neg %2, %2"
        : "=r"(ptr), "=r"(cnt), "=r"(neg1) : "r"(p1) : "r1"
    );
    do {
        func_080D40CC(ptr);
        ptr += 0xc;
        cnt--;
    } while (cnt != neg1);
    __asm__ volatile("ldr r0, =0x0300040C\n\tstr %0, [r0]" : : "r"(p1) : "r0", "memory");
    {
        register int v0 asm("r0");
        __asm__("mov r1, r8\n\tldr %0, [r1]" : "=r"(v0) : : "r1");
        if (v0 != 0) {
            func_080D4480(v0, 3);
        }
    }
    return p1;
}

/* --- func_08010268 @ 0x08010268 (224B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern u32 func_080005D4();
extern int func_08010358();
extern void func_0803F804();
extern void func_080D4130();
extern void func_080D40CC();
int func_08010268(int param_1, int param_2, int param_3, int param_4, int param_5) {
    u32 pad;
    int p1 = param_1;
    register int r5 asm("r5") = param_2;
    register int r6 asm("r6") = param_3;
    register int r4 asm("r4") = param_5;
    __asm__ volatile(
        "mov r8, r3\n\t"
        "ldr %3, [sp, #0x1c]\n\t"
        "ldr r0, =0x080E5BF8\n\t"
        "str r0, [%0]\n\t"
        "ldr r0, =0x000034F4\n\t"
        "bl func_080005D4\n\t"
        "str %3, [sp]\n\t"
        "add r1, %1, #0\n\t"
        "add r2, %2, #0\n\t"
        "mov r3, r8\n\t"
        "bl func_08010358\n\t"
        "add r1, r0, #0\n\t"
        "str r1, [%0, #4]"
        : "+r"(p1), "+r"(r5), "+r"(r6), "=r"(r4) : "m"(pad) : "r0", "r1", "r2", "r3", "r8", "lr", "memory"
    );
    func_0803F804(p1 + 8);
    __asm__ volatile(
        "mov r0, #0xd9\n\t"
        "lsl r0, r0, #2\n\t"
        "add r1, %3, r0\n\t"
        "mov r3, #0\n\t"
        "mov r0, #1\n\t"
        "strb r0, [r1]\n\t"
        "mov r0, #0xda\n\t"
        "lsl r0, r0, #2\n\t"
        "add r1, %3, r0\n\t"
        "mov r0, #0xab\n\t"
        "str r0, [r1]\n\t"
        "mov r0, #0xdb\n\t"
        "lsl r0, r0, #2\n\t"
        "add r1, %3, r0\n\t"
        "strb r3, [r1]\n\t"
        "mov r0, #0x1d\n\t"
        "str r0, [r1, #4]\n\t"
        "mov r1, #0xdd\n\t"
        "lsl r1, r1, #2\n\t"
        "add r2, %3, r1\n\t"
        "ldrb r1, [r2]\n\t"
        "sub r0, #0x3d\n\t"
        "and r0, r1\n\t"
        "mov r1, #6\n\t"
        "orr r0, r1\n\t"
        "strb r0, [r2]\n\t"
        "ldrh r1, [r2]\n\t"
        "ldr r0, =0xFFFFF81F\n\t"
        "and r0, r1\n\t"
        "strh r0, [r2]\n\t"
        "mov r1, #0xde\n\t"
        "lsl r1, r1, #2\n\t"
        "add r0, %3, r1\n\t"
        "str r3, [r0]\n\t"
        "add r1, #0x14\n\t"
        "add r0, %3, r1\n\t"
        "str r3, [r0]\n\t"
        "mov r1, #0x9a\n\t"
        "lsl r1, r1, #3\n\t"
        "add r0, %3, r1\n\t"
        "str r3, [r0]\n\t"
        "ldr r0, =0x000004DC\n\t"
        "add %0, %3, r0\n\t"
        "mov %1, #5\n\t"
        "mov %2, #1\n\t"
        "neg %2, %2"
        : "=r"(r4), "=r"(r5), "=r"(r6) : "r"(p1) : "r0", "r1", "r2", "r3", "memory"
    );
    do {
        func_080D4130(r4);
        r4 += 0xc;
        r5--;
    } while (r5 != r6);
    __asm__ volatile(
        "ldr r1, =0x00000524\n\t"
        "add %0, %3, r1\n\t"
        "mov %1, #3\n\t"
        "mov %2, #1\n\t"
        "neg %2, %2"
        : "=r"(r4), "=r"(r5), "=r"(r6) : "r"(p1) : "r1"
    );
    do {
        func_080D40CC(r4);
        r4 += 0xc;
        r5--;
    } while (r5 != r6);
    __asm__ volatile("ldr r0, =0x0300040C\n\tstr %0, [r0]" : : "r"(p1) : "r0", "memory");
    return p1;
}

/* --- func_08010348 @ 0x08010348 (16B) [PURE-C | old_agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D11E4();
u32 func_08010348(void) {
  int val;
  do {
    val = func_080D11E4();
  } while (val == 0);
  return;
}

/* --- func_08010358 @ 0x08010358 (2832B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08010358 @ 0x08010358 (2832 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(RW), +0x00:u32(RW), +0x00:u8(RW), +0x01:u8(RW), +0x02:u16(RW), +0x03:u8(RW), +0x04:u16(RW), +0x04:u32(RW), +0x04:u8(RW), +0x08:u32(W), +0x2C:u32(RW)
 * Callees: func_08009A48, func_0800A134, func_0800A78C, func_0800E354, func_0800FF8C, func_08010348, func_080114F8, func_08011510, func_0809A8AC, func_0809AB8C
 * CFG Structure:
 *   L_08010358: call func_08009A48(); call func_0809AB8C(); call func_0800E354(); call func_0809B9D4(); call func_0800FF8C(); call func_0809EEE8()
 *   L_080104C8: if (> (s)) goto L_080104C8
 *   L_080104DE: if (> (s)) goto L_080104DE
 *   L_0801053A: if (!=) goto L_0801053A
 *   L_0801057C: if (!=) goto L_0801057C
 *   L_080105D6: if (==) goto L_08010664
 *   L_08010664: call func_080D11E4(); call func_080D0F4E(); call func_080D11E4()
 *   L_08010676: call func_080D0F4E(); call func_0800A78C(); if (!=) goto L_08010730
 *   L_080106D8: if (!=) goto L_08010730
 *   L_08010726: goto L_0801073E
 *   L_08010730: if (> (u)) goto L_0801073C
 * ========================================================================== */
extern void func_08009A48(void);
extern void func_0800A134(void);
extern void func_0800A78C(void);
extern void func_0800E354(void);
extern void func_0800FF8C(void);
extern void func_08010348(void);
extern void func_080114F8(void);
extern void func_08011510(void);
extern void func_0809A8AC(void);
extern void func_0809AB8C(void);
extern void func_0809B2A8(void);
extern void func_0809B9D4(void);
extern void func_0809BFE8(void);
extern void func_0809C144(void);
extern void func_0809C4E4(void);
extern void func_0809C6BC(void);
extern void func_0809CD78(void);
extern void func_0809CE8C(void);
extern void func_0809EEE8(void);
extern void func_080A1A48(void);
extern void func_080D0F4E(void);
extern void func_080D11E4(void);
void func_08010358(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, r7, lr}\n"
        "	mov r7, sl\n"
        "	mov r6, sb\n"
        "	mov r5, r8\n"
        "	push {r5, r6, r7}\n"
        "	sub sp, #0xa8\n"
        "	str r0, [sp, #0x48]\n"
        "	mov sl, r2\n"
        "	add r0, sp, #0xc\n"
        "	mov sb, r0\n"
        "	strb r3, [r0]\n"
        "	ldr r7, [sp, #0xc8]\n"
        "	ldr r3, [sp, #0x48]\n"
        "	ldrb r2, [r3]\n"
        "	mov r3, #2\n"
        "	neg r3, r3\n"
        "	add r0, r3, #0\n"
        "	and r0, r2\n"
        "	mov r2, #3\n"
        "	neg r2, r2\n"
        "	and r0, r2\n"
        "	sub r2, #2\n"
        "	and r0, r2\n"
        "	sub r2, #4\n"
        "	and r0, r2\n"
        "	sub r2, #8\n"
        "	and r0, r2\n"
        "	ldr r2, [sp, #0x48]\n"
        "	strb r0, [r2]\n"
        "	ldr r0, [r2]\n"
        "	ldr r2, .Lpool_080105F0\n"
        "	and r0, r2\n"
        "	ldr r2, [sp, #0x48]\n"
        "	str r0, [r2]\n"
        "	ldrh r2, [r2, #2]\n"
        "	ldr r0, .Lpool_080105F4\n"
        "	and r0, r2\n"
        "	ldr r2, [sp, #0x48]\n"
        "	strh r0, [r2, #2]\n"
        "	ldrb r2, [r2, #3]\n"
        "	mov r0, #0x7f\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	mov r2, #0x7f\n"
        "	and r0, r2\n"
        "	ldr r2, [sp, #0x48]\n"
        "	strb r0, [r2, #3]\n"
        "	ldrb r0, [r2, #4]\n"
        "	and r3, r0\n"
        "	strb r3, [r2, #4]\n"
        "	mov r0, #0x1d\n"
        "	str r0, [sp]\n"
        "	mov r5, #0\n"
        "	str r5, [sp, #4]\n"
        "	mov r3, #1\n"
        "	mov r8, r3\n"
        "	sub r3, #5\n"
        "	and r3, r4\n"
        "	mov r2, #4\n"
        "	sub r0, #0x9a\n"
        "	and r3, r0\n"
        "	orr r3, r2\n"
        "	add r4, sp, #8\n"
        "	add r0, #0x5d\n"
        "	and r0, r6\n"
        "	mov r2, #6\n"
        "	orr r0, r2\n"
        "	lsl r0, r0, #0x18\n"
        "	lsr r0, r0, #0x18\n"
        "	ldr r2, .Lpool_080105F8\n"
        "	and r2, r6\n"
        "	orr r2, r0\n"
        "	mov r6, #0\n"
        "	ldr r0, .Lpool_080105FC\n"
        "	and r2, r0\n"
        "	mov r0, r8\n"
        "	strb r0, [r4]\n"
        "	strb r3, [r4, #1]\n"
        "	strh r2, [r4, #2]\n"
        "	ldr r2, [sp, #0x48]\n"
        "	add r2, #8\n"
        "	ldr r3, [sp, #0x48]\n"
        "	str r5, [r3, #8]\n"
        "	str r5, [r2, #4]\n"
        "	ldr r0, [sp, #8]\n"
        "	str r0, [r2, #8]\n"
        "	add r0, r3, #0\n"
        "	add r0, #0x14\n"
        "	bl func_08009A48\n"
        "	ldr r1, [sp, #0x48]\n"
        "	ldr r2, .Lpool_08010600\n"
        "	add r0, r1, r2\n"
        "	bl func_0809AB8C\n"
        "	ldr r3, [sp, #0x48]\n"
        "	ldr r1, .Lpool_08010604\n"
        "	add r0, r3, r1\n"
        "	mov r1, sl\n"
        "	mov r2, sb\n"
        "	bl func_0800E354\n"
        "	ldr r2, [sp, #0x48]\n"
        "	ldr r3, .Lpool_08010608\n"
        "	add r0, r2, r3\n"
        "	add r1, r7, #0\n"
        "	bl func_0809B9D4\n"
        "	ldr r7, [sp, #0x48]\n"
        "	mov r1, #0xe5\n"
        "	lsl r1, r1, #5\n"
        "	add r0, r7, r1\n"
        "	bl func_0800FF8C\n"
        "	ldr r2, .Lpool_0801060C\n"
        "	add r1, r7, r2\n"
        "	mov r4, #0x8d\n"
        "	lsl r4, r4, #2\n"
        "	ldrh r2, [r1]\n"
        "	ldr r3, .Lpool_08010610\n"
        "	add r0, r3, #0\n"
        "	and r0, r2\n"
        "	orr r0, r4\n"
        "	strh r0, [r1]\n"
        "	ldrb r4, [r1, #1]\n"
        "	mov r2, #3\n"
        "	add r0, r2, #0\n"
        "	and r0, r4\n"
        "	strb r0, [r1, #1]\n"
        "	ldrh r4, [r1, #2]\n"
        "	add r0, r3, #0\n"
        "	and r0, r4\n"
        "	strh r0, [r1, #2]\n"
        "	ldrb r0, [r1, #3]\n"
        "	and r2, r0\n"
        "	strb r2, [r1, #3]\n"
        "	ldrh r0, [r1, #4]\n"
        "	and r3, r0\n"
        "	strh r3, [r1, #4]\n"
        "	ldr r3, .Lpool_08010614\n"
        "	add r0, r7, r3\n"
        "	bl func_0809EEE8\n"
        "	ldr r1, .Lpool_08010618\n"
        "	add r0, r7, r1\n"
        "	bl func_0809C6BC\n"
        "	bl func_08010348\n"
        "	ldr r3, .Lpool_0801061C\n"
        "	add r2, r7, r3\n"
        "	str r0, [r2]\n"
        "	str r5, [r2, #4]\n"
        "	ldr r1, .Lpool_08010620\n"
        "	add r0, r7, r1\n"
        "	strb r6, [r0]\n"
        "	add r3, #0x24\n"
        "	add r0, r7, r3\n"
        "	strb r6, [r0]\n"
        "	add r1, #0x20\n"
        "	add r0, r7, r1\n"
        "	strb r6, [r0]\n"
        "	str r5, [sp, #0x10]\n"
        "	sub r3, #0x1c\n"
        "	add r0, r7, r3\n"
        "	mov r1, #8\n"
        "	add r4, sp, #0x14\n"
        "	ldr r6, .Lpool_08010624\n"
        "	add r5, r7, r6\n"
        "	ldr r3, .Lpool_08010628\n"
        "	add r6, r7, r3\n"
        "	add r7, sp, #0x18\n"
        "	mov r3, sp\n"
        "	add r3, #0x20\n"
        "	str r3, [sp, #0x8c]\n"
        "	add r3, #8\n"
        "	str r3, [sp, #0x90]\n"
        "	add r3, #8\n"
        "	str r3, [sp, #0x94]\n"
        "	add r3, #8\n"
        "	str r3, [sp, #0x98]\n"
        "	add r3, #8\n"
        "	str r3, [sp, #0x9c]\n"
        "	mov r3, #0\n"
        "_L_080104C8:\n"
        "	strb r3, [r0]\n"
        "	sub r1, #1\n"
        "	add r0, #1\n"
        "	cmp r1, #0\n"
        "	bgt _L_080104C8\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #0x14]\n"
        "	add r0, r2, #0\n"
        "	add r0, #0x10\n"
        "	mov r1, #4\n"
        "	ldr r2, [r4]\n"
        "_L_080104DE:\n"
        "	strb r2, [r0]\n"
        "	sub r1, #1\n"
        "	add r0, #1\n"
        "	cmp r1, #0\n"
        "	bgt _L_080104DE\n"
        "	ldr r1, [sp, #0x48]\n"
        "	ldr r2, .Lpool_0801062C\n"
        "	add r0, r1, r2\n"
        "	bl func_080114F8\n"
        "	ldr r3, [sp, #0x48]\n"
        "	ldr r1, .Lpool_08010630\n"
        "	add r0, r3, r1\n"
        "	bl func_0809A8AC\n"
        "	ldr r3, [sp, #0x48]\n"
        "	ldr r0, .Lpool_08010634\n"
        "	add r2, r3, r0\n"
        "	ldrb r0, [r5]\n"
        "	mov r1, #3\n"
        "	orr r0, r1\n"
        "	strb r0, [r5]\n"
        "	ldr r0, [r2, #0x2c]\n"
        "	ldr r1, .Lpool_08010638\n"
        "	and r0, r1\n"
        "	str r0, [r2, #0x2c]\n"
        "	ldrb r1, [r6]\n"
        "	mov r0, #9\n"
        "	neg r0, r0\n"
        "	and r0, r1\n"
        "	mov r1, #0x11\n"
        "	neg r1, r1\n"
        "	and r0, r1\n"
        "	sub r1, #0x10\n"
        "	and r0, r1\n"
        "	sub r1, #0x20\n"
        "	and r0, r1\n"
        "	mov r1, #0x7f\n"
        "	and r0, r1\n"
        "	strb r0, [r6]\n"
        "	ldr r1, .Lpool_0801063C\n"
        "	add r0, r3, r1\n"
        "	mov r1, #9\n"
        "	mov r2, #0\n"
        "	mov r3, #1\n"
        "	neg r3, r3\n"
        "_L_0801053A:\n"
        "	strb r2, [r0]\n"
        "	strh r2, [r0, #2]\n"
        "	add r0, #4\n"
        "	sub r1, #1\n"
        "	cmp r1, r3\n"
        "	bne _L_0801053A\n"
        "	ldr r2, [sp, #0x48]\n"
        "	ldr r3, .Lpool_08010640\n"
        "	add r0, r2, r3\n"
        "	bl func_08011510\n"
        "	ldr r6, [sp, #0x48]\n"
        "	mov r1, #0xb2\n"
        "	lsl r1, r1, #6\n"
        "	add r0, r6, r1\n"
        "	bl func_0809CD78\n"
        "	ldr r2, .Lpool_08010644\n"
        "	add r0, r6, r2\n"
        "	bl func_0809CE8C\n"
        "	mov r3, #0xd2\n"
        "	lsl r3, r3, #6\n"
        "	add r0, r6, r3\n"
        "	bl func_0809C144\n"
        "	ldr r0, .Lpool_08010648\n"
        "	add r2, r6, r0\n"
        "	mov r3, #2\n"
        "	mov r5, #0x10\n"
        "	neg r5, r5\n"
        "	mov r4, #1\n"
        "	neg r4, r4\n"
        "_L_0801057C:\n"
        "	ldrb r1, [r2]\n"
        "	add r0, r5, #0\n"
        "	and r0, r1\n"
        "	strb r0, [r2]\n"
        "	add r2, #0x10\n"
        "	sub r3, #1\n"
        "	cmp r3, r4\n"
        "	bne _L_0801057C\n"
        "	ldr r1, [sp, #0x48]\n"
        "	ldr r2, .Lpool_0801064C\n"
        "	add r0, r1, r2\n"
        "	mov r1, #0\n"
        "	strb r1, [r0]\n"
        "	ldr r3, [sp, #0x48]\n"
        "	ldr r6, .Lpool_08010650\n"
        "	add r0, r3, r6\n"
        "	strb r1, [r0]\n"
        "	ldr r1, .Lpool_08010654\n"
        "	add r0, r3, r1\n"
        "	bl func_080A1A48\n"
        "	ldr r2, [sp, #0x48]\n"
        "	ldr r3, .Lpool_08010658\n"
        "	add r0, r2, r3\n"
        "	bl func_0809C4E4\n"
        "	ldr r6, [sp, #0x48]\n"
        "	ldr r1, .Lpool_0801065C\n"
        "	add r0, r6, r1\n"
        "	bl func_0809BFE8\n"
        "	ldr r2, .Lpool_08010608\n"
        "	add r0, r6, r2\n"
        "	mov r1, #0x32\n"
        "	bl func_0809B2A8\n"
        "	mov r0, #0\n"
        "	ldr r3, .Lpool_08010660\n"
        "	add r6, r6, r3\n"
        "	mov r8, r6\n"
        "	str r7, [sp, #0x4c]\n"
        "_L_080105CE:\n"
        "	mov r6, #0\n"
        "	str r6, [sp, #0x50]\n"
        "	add r0, #1\n"
        "	str r0, [sp, #0x80]\n"
        "_L_080105D6:\n"
        "	mov r7, #1\n"
        "	cmp r7, #0\n"
        "	beq _L_08010664\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0x2a\n"
        "	bl func_080D0F4E\n"
        "	add r6, r0, #0\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0x18\n"
        "	b _L_08010676\n"
        ".Lpool_080105F0:\n"
        "	.word 0xFFFC1FFF\n"
        ".Lpool_080105F4:\n"
        "	.word 0xFFFFFE03\n"
        ".Lpool_080105F8:\n"
        "	.word 0xFFFFFF00\n"
        ".Lpool_080105FC:\n"
        "	.word 0xFFFFF81F\n"
        ".Lpool_08010600:\n"
        "	.word 0x00001AA8\n"
        ".Lpool_08010604:\n"
        "	.word 0x00001BD8\n"
        ".Lpool_08010608:\n"
        "	.word 0x00001C70\n"
        ".Lpool_0801060C:\n"
        "	.word 0x00001CCC\n"
        ".Lpool_08010610:\n"
        "	.word 0xFFFFFC00\n"
        ".Lpool_08010614:\n"
        "	.word 0x00001CD4\n"
        ".Lpool_08010618:\n"
        "	.word 0x0000214C\n"
        ".Lpool_0801061C:\n"
        "	.word 0x000021CC\n"
        ".Lpool_08010620:\n"
        "	.word 0x000021E0\n"
        ".Lpool_08010624:\n"
        "	.word 0x00002C48\n"
        ".Lpool_08010628:\n"
        "	.word 0x00002C4A\n"
        ".Lpool_0801062C:\n"
        "	.word 0x00002210\n"
        ".Lpool_08010630:\n"
        "	.word 0x00002214\n"
        ".Lpool_08010634:\n"
        "	.word 0x00002C1C\n"
        ".Lpool_08010638:\n"
        "	.word 0xFFF80003\n"
        ".Lpool_0801063C:\n"
        "	.word 0x00002C4C\n"
        ".Lpool_08010640:\n"
        "	.word 0x00002C74\n"
        ".Lpool_08010644:\n"
        "	.word 0x00002E58\n"
        ".Lpool_08010648:\n"
        "	.word 0x00003494\n"
        ".Lpool_0801064C:\n"
        "	.word 0x000034C4\n"
        ".Lpool_08010650:\n"
        "	.word 0x000034C5\n"
        ".Lpool_08010654:\n"
        "	.word 0x000034C8\n"
        ".Lpool_08010658:\n"
        "	.word 0x000034D8\n"
        ".Lpool_0801065C:\n"
        "	.word 0x000034DC\n"
        ".Lpool_08010660:\n"
        "	.word 0x000009DC\n"
        "_L_08010664:\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0x2b\n"
        "	bl func_080D0F4E\n"
        "	add r6, r0, #0\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0x19\n"
        "_L_08010676:\n"
        "	bl func_080D0F4E\n"
        "	add r7, r0, #0\n"
        "	mov r1, #0x2b\n"
        "	add r0, r7, #0\n"
        "	mul r0, r1\n"
        "	mov sb, r0\n"
        "	add r0, r6, r0\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	mov sl, r0\n"
        "	bl func_0800A78C\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08010730\n"
        "	mov r2, #1\n"
        "	cmp r2, #0\n"
        "	beq _L_080106D8\n"
        "	add r5, r6, #1\n"
        "	mov r3, sb\n"
        "	add r0, r5, r3\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	bl func_0800A78C\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08010730\n"
        "	add r0, r7, #1\n"
        "	mov r1, #0x2b\n"
        "	add r4, r0, #0\n"
        "	mul r4, r1\n"
        "	add r0, r6, r4\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	bl func_0800A78C\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08010730\n"
        "	add r0, r5, r4\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	bl func_0800A78C\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08010730\n"
        "_L_080106D8:\n"
        "	mov r2, sl\n"
        "	ldr r0, [r2]\n"
        "	lsl r0, r0, #0x14\n"
        "	lsr r0, r0, #0x1c\n"
        "	cmp r0, #0\n"
        "	bne _L_08010730\n"
        "	mov r3, #1\n"
        "	cmp r3, #0\n"
        "	beq _L_08010726\n"
        "	add r2, r6, #1\n"
        "	mov r1, sb\n"
        "	add r0, r2, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	ldr r0, [r0]\n"
        "	lsl r0, r0, #0x14\n"
        "	lsr r0, r0, #0x1c\n"
        "	cmp r0, #0\n"
        "	bne _L_08010730\n"
        "	add r0, r7, #1\n"
        "	mov r3, #0x2b\n"
        "	add r1, r0, #0\n"
        "	mul r1, r3\n"
        "	add r0, r6, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	ldr r0, [r0]\n"
        "	lsl r0, r0, #0x14\n"
        "	lsr r0, r0, #0x1c\n"
        "	cmp r0, #0\n"
        "	bne _L_08010730\n"
        "	add r0, r2, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	ldr r0, [r0]\n"
        "	lsl r0, r0, #0x14\n"
        "	lsr r0, r0, #0x1c\n"
        "	cmp r0, #0\n"
        "	bne _L_08010730\n"
        "_L_08010726:\n"
        "	ldr r0, [sp, #0x4c]\n"
        "	str r6, [r0]\n"
        "	str r7, [r0, #4]\n"
        "	mov r0, #1\n"
        "	b _L_0801073E\n"
        "_L_08010730:\n"
        "	ldr r1, [sp, #0x50]\n"
        "	add r1, #1\n"
        "	str r1, [sp, #0x50]\n"
        "	cmp r1, #0x63\n"
        "	bhi _L_0801073C\n"
        "	b _L_080105D6\n"
        "_L_0801073C:\n"
        "	mov r0, #0\n"
        "_L_0801073E:\n"
        "	cmp r0, #0\n"
        "	beq _L_080107A2\n"
        "	ldr r0, [sp, #0x18]\n"
        "	ldr r2, [sp, #0x4c]\n"
        "	ldr r1, [r2, #4]\n"
        "	mov r3, #0x2b\n"
        "	mul r1, r3\n"
        "	add r0, r0, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	mov r1, #0x1f\n"
        "	mov r2, #8\n"
        "	bl func_0800A134\n"
        "	ldr r0, [sp, #0x18]\n"
        "	add r0, #1\n"
        "	ldr r6, [sp, #0x4c]\n"
        "	ldr r1, [r6, #4]\n"
        "	mov r7, #0x2b\n"
        "	mul r1, r7\n"
        "	add r0, r0, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	mov r1, #0x20\n"
        "	mov r2, #8\n"
        "	bl func_0800A134\n"
        "	ldr r0, [sp, #0x18]\n"
        "	ldr r1, [r6, #4]\n"
        "	add r1, #1\n"
        "	mul r1, r7\n"
        "	add r0, r0, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	mov r1, #0x21\n"
        "	mov r2, #8\n"
        "	bl func_0800A134\n"
        "	ldr r0, [sp, #0x18]\n"
        "	add r0, #1\n"
        "	ldr r1, [r6, #4]\n"
        "	add r1, #1\n"
        "	mul r1, r7\n"
        "	add r0, r0, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	mov r1, #0x22\n"
        "	mov r2, #8\n"
        "	bl func_0800A134\n"
        "_L_080107A2:\n"
        "	ldr r0, [sp, #0x80]\n"
        "	cmp r0, #9\n"
        "	bhi _L_080107AA\n"
        "	b _L_080105CE\n"
        "_L_080107AA:\n"
        "	mov r0, #0\n"
        "	ldr r1, [sp, #0x48]\n"
        "	ldr r2, .Lpool_080107DC\n"
        "	add r1, r1, r2\n"
        "	mov r8, r1\n"
        "	ldr r3, [sp, #0x8c]\n"
        "	str r3, [sp, #0x54]\n"
        "_L_080107B8:\n"
        "	mov r6, #0\n"
        "	str r6, [sp, #0x58]\n"
        "	add r0, #1\n"
        "	str r0, [sp, #0x88]\n"
        "_L_080107C0:\n"
        "	mov r7, #1\n"
        "	cmp r7, #0\n"
        "	beq _L_080107E0\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0x2a\n"
        "	bl func_080D0F4E\n"
        "	add r6, r0, #0\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0x18\n"
        "	b _L_080107F2\n"
        "	.hword 0x0000\n"
        ".Lpool_080107DC:\n"
        "	.word 0x000009DC\n"
        "_L_080107E0:\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0x2b\n"
        "	bl func_080D0F4E\n"
        "	add r6, r0, #0\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0x19\n"
        "_L_080107F2:\n"
        "	bl func_080D0F4E\n"
        "	add r7, r0, #0\n"
        "	mov r1, #0x2b\n"
        "	add r0, r7, #0\n"
        "	mul r0, r1\n"
        "	mov sb, r0\n"
        "	add r0, r6, r0\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	mov sl, r0\n"
        "	bl func_0800A78C\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_080108AC\n"
        "	mov r2, #1\n"
        "	cmp r2, #0\n"
        "	beq _L_08010854\n"
        "	add r5, r6, #1\n"
        "	mov r3, sb\n"
        "	add r0, r5, r3\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	bl func_0800A78C\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_080108AC\n"
        "	add r0, r7, #1\n"
        "	mov r1, #0x2b\n"
        "	add r4, r0, #0\n"
        "	mul r4, r1\n"
        "	add r0, r6, r4\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	bl func_0800A78C\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_080108AC\n"
        "	add r0, r5, r4\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	bl func_0800A78C\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_080108AC\n"
        "_L_08010854:\n"
        "	mov r2, sl\n"
        "	ldr r0, [r2]\n"
        "	lsl r0, r0, #0x14\n"
        "	lsr r0, r0, #0x1c\n"
        "	cmp r0, #0\n"
        "	bne _L_080108AC\n"
        "	mov r3, #1\n"
        "	cmp r3, #0\n"
        "	beq _L_080108A2\n"
        "	add r2, r6, #1\n"
        "	mov r1, sb\n"
        "	add r0, r2, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	ldr r0, [r0]\n"
        "	lsl r0, r0, #0x14\n"
        "	lsr r0, r0, #0x1c\n"
        "	cmp r0, #0\n"
        "	bne _L_080108AC\n"
        "	add r0, r7, #1\n"
        "	mov r3, #0x2b\n"
        "	add r1, r0, #0\n"
        "	mul r1, r3\n"
        "	add r0, r6, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	ldr r0, [r0]\n"
        "	lsl r0, r0, #0x14\n"
        "	lsr r0, r0, #0x1c\n"
        "	cmp r0, #0\n"
        "	bne _L_080108AC\n"
        "	add r0, r2, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	ldr r0, [r0]\n"
        "	lsl r0, r0, #0x14\n"
        "	lsr r0, r0, #0x1c\n"
        "	cmp r0, #0\n"
        "	bne _L_080108AC\n"
        "_L_080108A2:\n"
        "	ldr r0, [sp, #0x54]\n"
        "	str r6, [r0]\n"
        "	str r7, [r0, #4]\n"
        "	mov r0, #1\n"
        "	b _L_080108B8\n"
        "_L_080108AC:\n"
        "	ldr r1, [sp, #0x58]\n"
        "	add r1, #1\n"
        "	str r1, [sp, #0x58]\n"
        "	cmp r1, #0x63\n"
        "	bls _L_080107C0\n"
        "	mov r0, #0\n"
        "_L_080108B8:\n"
        "	cmp r0, #0\n"
        "	beq _L_0801091C\n"
        "	ldr r0, [sp, #0x20]\n"
        "	ldr r2, [sp, #0x54]\n"
        "	ldr r1, [r2, #4]\n"
        "	mov r3, #0x2b\n"
        "	mul r1, r3\n"
        "	add r0, r0, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	mov r1, #0x23\n"
        "	mov r2, #8\n"
        "	bl func_0800A134\n"
        "	ldr r0, [sp, #0x20]\n"
        "	add r0, #1\n"
        "	ldr r6, [sp, #0x54]\n"
        "	ldr r1, [r6, #4]\n"
        "	mov r7, #0x2b\n"
        "	mul r1, r7\n"
        "	add r0, r0, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	mov r1, #0x24\n"
        "	mov r2, #8\n"
        "	bl func_0800A134\n"
        "	ldr r0, [sp, #0x20]\n"
        "	ldr r1, [r6, #4]\n"
        "	add r1, #1\n"
        "	mul r1, r7\n"
        "	add r0, r0, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	mov r1, #0x25\n"
        "	mov r2, #8\n"
        "	bl func_0800A134\n"
        "	ldr r0, [sp, #0x20]\n"
        "	add r0, #1\n"
        "	ldr r1, [r6, #4]\n"
        "	add r1, #1\n"
        "	mul r1, r7\n"
        "	add r0, r0, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	mov r1, #0x26\n"
        "	mov r2, #8\n"
        "	bl func_0800A134\n"
        "_L_0801091C:\n"
        "	ldr r0, [sp, #0x88]\n"
        "	cmp r0, #4\n"
        "	bhi _L_08010924\n"
        "	b _L_080107B8\n"
        "_L_08010924:\n"
        "	mov r0, #0\n"
        "	ldr r1, [sp, #0x48]\n"
        "	ldr r2, .Lpool_08010954\n"
        "	add r1, r1, r2\n"
        "	mov r8, r1\n"
        "	ldr r3, [sp, #0x90]\n"
        "	str r3, [sp, #0x5c]\n"
        "_L_08010932:\n"
        "	mov r6, #0\n"
        "	str r6, [sp, #0x60]\n"
        "	add r0, #1\n"
        "	str r0, [sp, #0xa4]\n"
        "_L_0801093A:\n"
        "	mov r7, #1\n"
        "	cmp r7, #0\n"
        "	beq _L_08010958\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0x2a\n"
        "	bl func_080D0F4E\n"
        "	add r6, r0, #0\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0x18\n"
        "	b _L_0801096A\n"
        ".Lpool_08010954:\n"
        "	.word 0x000009DC\n"
        "_L_08010958:\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0x2b\n"
        "	bl func_080D0F4E\n"
        "	add r6, r0, #0\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0x19\n"
        "_L_0801096A:\n"
        "	bl func_080D0F4E\n"
        "	add r7, r0, #0\n"
        "	mov r1, #0x2b\n"
        "	add r0, r7, #0\n"
        "	mul r0, r1\n"
        "	mov sb, r0\n"
        "	add r0, r6, r0\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	mov sl, r0\n"
        "	bl func_0800A78C\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08010A24\n"
        "	mov r2, #1\n"
        "	cmp r2, #0\n"
        "	beq _L_080109CC\n"
        "	add r5, r6, #1\n"
        "	mov r3, sb\n"
        "	add r0, r5, r3\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	bl func_0800A78C\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08010A24\n"
        "	add r0, r7, #1\n"
        "	mov r1, #0x2b\n"
        "	add r4, r0, #0\n"
        "	mul r4, r1\n"
        "	add r0, r6, r4\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	bl func_0800A78C\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08010A24\n"
        "	add r0, r5, r4\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	bl func_0800A78C\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08010A24\n"
        "_L_080109CC:\n"
        "	mov r2, sl\n"
        "	ldr r0, [r2]\n"
        "	lsl r0, r0, #0x14\n"
        "	lsr r0, r0, #0x1c\n"
        "	cmp r0, #0\n"
        "	bne _L_08010A24\n"
        "	mov r3, #1\n"
        "	cmp r3, #0\n"
        "	beq _L_08010A1A\n"
        "	add r2, r6, #1\n"
        "	mov r1, sb\n"
        "	add r0, r2, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	ldr r0, [r0]\n"
        "	lsl r0, r0, #0x14\n"
        "	lsr r0, r0, #0x1c\n"
        "	cmp r0, #0\n"
        "	bne _L_08010A24\n"
        "	add r0, r7, #1\n"
        "	mov r3, #0x2b\n"
        "	add r1, r0, #0\n"
        "	mul r1, r3\n"
        "	add r0, r6, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	ldr r0, [r0]\n"
        "	lsl r0, r0, #0x14\n"
        "	lsr r0, r0, #0x1c\n"
        "	cmp r0, #0\n"
        "	bne _L_08010A24\n"
        "	add r0, r2, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	ldr r0, [r0]\n"
        "	lsl r0, r0, #0x14\n"
        "	lsr r0, r0, #0x1c\n"
        "	cmp r0, #0\n"
        "	bne _L_08010A24\n"
        "_L_08010A1A:\n"
        "	ldr r0, [sp, #0x5c]\n"
        "	str r6, [r0]\n"
        "	str r7, [r0, #4]\n"
        "	mov r0, #1\n"
        "	b _L_08010A30\n"
        "_L_08010A24:\n"
        "	ldr r1, [sp, #0x60]\n"
        "	add r1, #1\n"
        "	str r1, [sp, #0x60]\n"
        "	cmp r1, #0x63\n"
        "	bls _L_0801093A\n"
        "	mov r0, #0\n"
        "_L_08010A30:\n"
        "	cmp r0, #0\n"
        "	beq _L_08010A94\n"
        "	ldr r0, [sp, #0x28]\n"
        "	ldr r2, [sp, #0x5c]\n"
        "	ldr r1, [r2, #4]\n"
        "	mov r3, #0x2b\n"
        "	mul r1, r3\n"
        "	add r0, r0, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	mov r1, #0x1b\n"
        "	mov r2, #8\n"
        "	bl func_0800A134\n"
        "	ldr r0, [sp, #0x28]\n"
        "	add r0, #1\n"
        "	ldr r6, [sp, #0x5c]\n"
        "	ldr r1, [r6, #4]\n"
        "	mov r7, #0x2b\n"
        "	mul r1, r7\n"
        "	add r0, r0, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	mov r1, #0x1c\n"
        "	mov r2, #8\n"
        "	bl func_0800A134\n"
        "	ldr r0, [sp, #0x28]\n"
        "	ldr r1, [r6, #4]\n"
        "	add r1, #1\n"
        "	mul r1, r7\n"
        "	add r0, r0, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	mov r1, #0x1d\n"
        "	mov r2, #8\n"
        "	bl func_0800A134\n"
        "	ldr r0, [sp, #0x28]\n"
        "	add r0, #1\n"
        "	ldr r1, [r6, #4]\n"
        "	add r1, #1\n"
        "	mul r1, r7\n"
        "	add r0, r0, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	mov r1, #0x1e\n"
        "	mov r2, #8\n"
        "	bl func_0800A134\n"
        "_L_08010A94:\n"
        "	ldr r0, [sp, #0xa4]\n"
        "	cmp r0, #9\n"
        "	bhi _L_08010A9C\n"
        "	b _L_08010932\n"
        "_L_08010A9C:\n"
        "	mov r1, #0\n"
        "	ldr r0, [sp, #0x48]\n"
        "	ldr r2, .Lpool_08010ACC\n"
        "	add r0, r0, r2\n"
        "	mov r8, r0\n"
        "	ldr r3, [sp, #0x94]\n"
        "	str r3, [sp, #0x64]\n"
        "_L_08010AAA:\n"
        "	mov r6, #0\n"
        "	str r6, [sp, #0x68]\n"
        "	add r1, #1\n"
        "	str r1, [sp, #0x7c]\n"
        "_L_08010AB2:\n"
        "	mov r7, #0\n"
        "	cmp r7, #0\n"
        "	beq _L_08010AD0\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0x2a\n"
        "	bl func_080D0F4E\n"
        "	add r6, r0, #0\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0x18\n"
        "	b _L_08010AE2\n"
        ".Lpool_08010ACC:\n"
        "	.word 0x000009DC\n"
        "_L_08010AD0:\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0x2b\n"
        "	bl func_080D0F4E\n"
        "	add r6, r0, #0\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0x19\n"
        "_L_08010AE2:\n"
        "	bl func_080D0F4E\n"
        "	add r7, r0, #0\n"
        "	mov r1, #0x2b\n"
        "	add r0, r7, #0\n"
        "	mul r0, r1\n"
        "	mov sb, r0\n"
        "	add r0, r6, r0\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	mov sl, r0\n"
        "	bl func_0800A78C\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08010B9C\n"
        "	mov r2, #0\n"
        "	cmp r2, #0\n"
        "	beq _L_08010B44\n"
        "	add r5, r6, #1\n"
        "	mov r3, sb\n"
        "	add r0, r5, r3\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	bl func_0800A78C\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08010B9C\n"
        "	add r0, r7, #1\n"
        "	mov r1, #0x2b\n"
        "	add r4, r0, #0\n"
        "	mul r4, r1\n"
        "	add r0, r6, r4\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	bl func_0800A78C\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08010B9C\n"
        "	add r0, r5, r4\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	bl func_0800A78C\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08010B9C\n"
        "_L_08010B44:\n"
        "	mov r2, sl\n"
        "	ldr r0, [r2]\n"
        "	lsl r0, r0, #0x14\n"
        "	lsr r0, r0, #0x1c\n"
        "	cmp r0, #0\n"
        "	bne _L_08010B9C\n"
        "	mov r3, #0\n"
        "	cmp r3, #0\n"
        "	beq _L_08010B92\n"
        "	add r2, r6, #1\n"
        "	mov r1, sb\n"
        "	add r0, r2, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	ldr r0, [r0]\n"
        "	lsl r0, r0, #0x14\n"
        "	lsr r0, r0, #0x1c\n"
        "	cmp r0, #0\n"
        "	bne _L_08010B9C\n"
        "	add r0, r7, #1\n"
        "	mov r3, #0x2b\n"
        "	add r1, r0, #0\n"
        "	mul r1, r3\n"
        "	add r0, r6, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	ldr r0, [r0]\n"
        "	lsl r0, r0, #0x14\n"
        "	lsr r0, r0, #0x1c\n"
        "	cmp r0, #0\n"
        "	bne _L_08010B9C\n"
        "	add r0, r2, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	ldr r0, [r0]\n"
        "	lsl r0, r0, #0x14\n"
        "	lsr r0, r0, #0x1c\n"
        "	cmp r0, #0\n"
        "	bne _L_08010B9C\n"
        "_L_08010B92:\n"
        "	ldr r0, [sp, #0x64]\n"
        "	str r6, [r0]\n"
        "	str r7, [r0, #4]\n"
        "	mov r0, #1\n"
        "	b _L_08010BA8\n"
        "_L_08010B9C:\n"
        "	ldr r1, [sp, #0x68]\n"
        "	add r1, #1\n"
        "	str r1, [sp, #0x68]\n"
        "	cmp r1, #0x63\n"
        "	bls _L_08010AB2\n"
        "	mov r0, #0\n"
        "_L_08010BA8:\n"
        "	cmp r0, #0\n"
        "	beq _L_08010BC4\n"
        "	ldr r0, [sp, #0x30]\n"
        "	ldr r3, [sp, #0x94]\n"
        "	ldr r2, [r3, #4]\n"
        "	mov r1, #0x2b\n"
        "	mul r1, r2\n"
        "	add r0, r0, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	mov r1, #0x15\n"
        "	mov r2, #8\n"
        "	bl func_0800A134\n"
        "_L_08010BC4:\n"
        "	ldr r1, [sp, #0x7c]\n"
        "	ldr r0, .Lpool_08010C00\n"
        "	cmp r1, r0\n"
        "	bhi _L_08010BCE\n"
        "	b _L_08010AAA\n"
        "_L_08010BCE:\n"
        "	mov r0, #0\n"
        "	ldr r6, [sp, #0x48]\n"
        "	ldr r7, .Lpool_08010C04\n"
        "	add r6, r6, r7\n"
        "	mov r8, r6\n"
        "	ldr r1, [sp, #0x98]\n"
        "	str r1, [sp, #0x6c]\n"
        "_L_08010BDC:\n"
        "	mov r2, #0\n"
        "	str r2, [sp, #0x70]\n"
        "	add r0, #1\n"
        "	str r0, [sp, #0x84]\n"
        "_L_08010BE4:\n"
        "	mov r3, #0\n"
        "	cmp r3, #0\n"
        "	beq _L_08010C08\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0x2a\n"
        "	bl func_080D0F4E\n"
        "	add r6, r0, #0\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0x18\n"
        "	b _L_08010C1A\n"
        "	.hword 0x0000\n"
        ".Lpool_08010C00:\n"
        "	.word 0x0000012B\n"
        ".Lpool_08010C04:\n"
        "	.word 0x000009DC\n"
        "_L_08010C08:\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0x2b\n"
        "	bl func_080D0F4E\n"
        "	add r6, r0, #0\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0x19\n"
        "_L_08010C1A:\n"
        "	bl func_080D0F4E\n"
        "	add r7, r0, #0\n"
        "	mov r1, #0x2b\n"
        "	add r0, r7, #0\n"
        "	mul r0, r1\n"
        "	mov sb, r0\n"
        "	add r0, r6, r0\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	mov sl, r0\n"
        "	bl func_0800A78C\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08010CD4\n"
        "	mov r2, #0\n"
        "	cmp r2, #0\n"
        "	beq _L_08010C7C\n"
        "	add r5, r6, #1\n"
        "	mov r3, sb\n"
        "	add r0, r5, r3\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	bl func_0800A78C\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08010CD4\n"
        "	add r0, r7, #1\n"
        "	mov r1, #0x2b\n"
        "	add r4, r0, #0\n"
        "	mul r4, r1\n"
        "	add r0, r6, r4\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	bl func_0800A78C\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08010CD4\n"
        "	add r0, r5, r4\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	bl func_0800A78C\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08010CD4\n"
        "_L_08010C7C:\n"
        "	mov r2, sl\n"
        "	ldr r0, [r2]\n"
        "	lsl r0, r0, #0x14\n"
        "	lsr r0, r0, #0x1c\n"
        "	cmp r0, #0\n"
        "	bne _L_08010CD4\n"
        "	mov r3, #0\n"
        "	cmp r3, #0\n"
        "	beq _L_08010CCA\n"
        "	add r2, r6, #1\n"
        "	mov r1, sb\n"
        "	add r0, r2, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	ldr r0, [r0]\n"
        "	lsl r0, r0, #0x14\n"
        "	lsr r0, r0, #0x1c\n"
        "	cmp r0, #0\n"
        "	bne _L_08010CD4\n"
        "	add r0, r7, #1\n"
        "	mov r3, #0x2b\n"
        "	add r1, r0, #0\n"
        "	mul r1, r3\n"
        "	add r0, r6, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	ldr r0, [r0]\n"
        "	lsl r0, r0, #0x14\n"
        "	lsr r0, r0, #0x1c\n"
        "	cmp r0, #0\n"
        "	bne _L_08010CD4\n"
        "	add r0, r2, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	ldr r0, [r0]\n"
        "	lsl r0, r0, #0x14\n"
        "	lsr r0, r0, #0x1c\n"
        "	cmp r0, #0\n"
        "	bne _L_08010CD4\n"
        "_L_08010CCA:\n"
        "	ldr r0, [sp, #0x6c]\n"
        "	str r6, [r0]\n"
        "	str r7, [r0, #4]\n"
        "	mov r0, #1\n"
        "	b _L_08010CE0\n"
        "_L_08010CD4:\n"
        "	ldr r1, [sp, #0x70]\n"
        "	add r1, #1\n"
        "	str r1, [sp, #0x70]\n"
        "	cmp r1, #0x63\n"
        "	bls _L_08010BE4\n"
        "	mov r0, #0\n"
        "_L_08010CE0:\n"
        "	cmp r0, #0\n"
        "	beq _L_08010CFC\n"
        "	ldr r0, [sp, #0x38]\n"
        "	ldr r3, [sp, #0x98]\n"
        "	ldr r2, [r3, #4]\n"
        "	mov r1, #0x2b\n"
        "	mul r1, r2\n"
        "	add r0, r0, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	mov r1, #0x16\n"
        "	mov r2, #8\n"
        "	bl func_0800A134\n"
        "_L_08010CFC:\n"
        "	ldr r0, [sp, #0x84]\n"
        "	cmp r0, #0x31\n"
        "	bhi _L_08010D04\n"
        "	b _L_08010BDC\n"
        "_L_08010D04:\n"
        "	mov r0, #0\n"
        "	ldr r6, [sp, #0x48]\n"
        "	ldr r7, .Lpool_08010D34\n"
        "	add r6, r6, r7\n"
        "	mov r8, r6\n"
        "	ldr r1, [sp, #0x9c]\n"
        "	str r1, [sp, #0x74]\n"
        "_L_08010D12:\n"
        "	mov r2, #0\n"
        "	str r2, [sp, #0x78]\n"
        "	add r0, #1\n"
        "	str r0, [sp, #0xa0]\n"
        "_L_08010D1A:\n"
        "	mov r3, #0\n"
        "	cmp r3, #0\n"
        "	beq _L_08010D38\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0x2a\n"
        "	bl func_080D0F4E\n"
        "	add r6, r0, #0\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0x18\n"
        "	b _L_08010D4A\n"
        ".Lpool_08010D34:\n"
        "	.word 0x000009DC\n"
        "_L_08010D38:\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0x2b\n"
        "	bl func_080D0F4E\n"
        "	add r6, r0, #0\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0x19\n"
        "_L_08010D4A:\n"
        "	bl func_080D0F4E\n"
        "	add r7, r0, #0\n"
        "	mov r1, #0x2b\n"
        "	add r0, r7, #0\n"
        "	mul r0, r1\n"
        "	mov sb, r0\n"
        "	add r0, r6, r0\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	mov sl, r0\n"
        "	bl func_0800A78C\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08010E04\n"
        "	mov r2, #0\n"
        "	cmp r2, #0\n"
        "	beq _L_08010DAC\n"
        "	add r5, r6, #1\n"
        "	mov r3, sb\n"
        "	add r0, r5, r3\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	bl func_0800A78C\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08010E04\n"
        "	add r0, r7, #1\n"
        "	mov r1, #0x2b\n"
        "	add r4, r0, #0\n"
        "	mul r4, r1\n"
        "	add r0, r6, r4\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	bl func_0800A78C\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08010E04\n"
        "	add r0, r5, r4\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	bl func_0800A78C\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08010E04\n"
        "_L_08010DAC:\n"
        "	mov r2, sl\n"
        "	ldr r0, [r2]\n"
        "	lsl r0, r0, #0x14\n"
        "	lsr r0, r0, #0x1c\n"
        "	cmp r0, #0\n"
        "	bne _L_08010E04\n"
        "	mov r3, #0\n"
        "	cmp r3, #0\n"
        "	beq _L_08010DFA\n"
        "	add r2, r6, #1\n"
        "	mov r1, sb\n"
        "	add r0, r2, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	ldr r0, [r0]\n"
        "	lsl r0, r0, #0x14\n"
        "	lsr r0, r0, #0x1c\n"
        "	cmp r0, #0\n"
        "	bne _L_08010E04\n"
        "	add r0, r7, #1\n"
        "	mov r3, #0x2b\n"
        "	add r1, r0, #0\n"
        "	mul r1, r3\n"
        "	add r0, r6, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	ldr r0, [r0]\n"
        "	lsl r0, r0, #0x14\n"
        "	lsr r0, r0, #0x1c\n"
        "	cmp r0, #0\n"
        "	bne _L_08010E04\n"
        "	add r0, r2, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	ldr r0, [r0]\n"
        "	lsl r0, r0, #0x14\n"
        "	lsr r0, r0, #0x1c\n"
        "	cmp r0, #0\n"
        "	bne _L_08010E04\n"
        "_L_08010DFA:\n"
        "	ldr r0, [sp, #0x74]\n"
        "	str r6, [r0]\n"
        "	str r7, [r0, #4]\n"
        "	mov r0, #1\n"
        "	b _L_08010E10\n"
        "_L_08010E04:\n"
        "	ldr r1, [sp, #0x78]\n"
        "	add r1, #1\n"
        "	str r1, [sp, #0x78]\n"
        "	cmp r1, #0x63\n"
        "	bls _L_08010D1A\n"
        "	mov r0, #0\n"
        "_L_08010E10:\n"
        "	cmp r0, #0\n"
        "	beq _L_08010E2C\n"
        "	ldr r0, [sp, #0x40]\n"
        "	ldr r3, [sp, #0x9c]\n"
        "	ldr r2, [r3, #4]\n"
        "	mov r1, #0x2b\n"
        "	mul r1, r2\n"
        "	add r0, r0, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	mov r1, #0x17\n"
        "	mov r2, #8\n"
        "	bl func_0800A134\n"
        "_L_08010E2C:\n"
        "	ldr r0, [sp, #0xa0]\n"
        "	cmp r0, #0x31\n"
        "	bhi _L_08010E34\n"
        "	b _L_08010D12\n"
        "_L_08010E34:\n"
        "	ldr r0, [sp, #0x48]\n"
        "	add sp, #0xa8\n"
        "	pop {r3, r4, r5}\n"
        "	mov r8, r3\n"
        "	mov sb, r4\n"
        "	mov sl, r5\n"
        "	pop {r4, r5, r6, r7}\n"
        "	pop {r1}\n"
        "	bx r1\n"
        "	.hword 0x0000\n"
        "	.hword 0x7800\n"
        "	.hword 0x07C0\n"
        "	.hword 0x0FC0\n"
        "	.hword 0x4770\n"
        "	.hword 0x7800\n"
        "	.hword 0x0780\n"
        "	.hword 0x0FC0\n"
        "	.hword 0x4770\n"
        "	.hword 0x7800\n"
        "	.hword 0x0740\n"
        "	.hword 0x0FC0\n"
        "	.hword 0x4770\n"
        "	.hword 0x7800\n"
        "	.hword 0x0700\n"
        "	.hword 0x0FC0\n"
        "	.hword 0x4770\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_08010E68 @ 0x08010E68 (156B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern u32 func_0809B228();
extern int func_08009B00();
extern int func_0800C5CC();
extern u32 func_0800C570();
extern int func_0800CF10();
extern int func_0800CF38();
extern u32 func_0800CE74();
int func_08010E68(int param_1) {
    register int p1 asm("r6") = param_1;
    register u32 i asm("r4");
    register int r5 asm("r5");
    int res;
    __asm__ volatile(
        "mov %0, #1\n\t"
        "ldr r1, =0x00001C70\n\t"
        "add r0, %1, r1\n\t"
        "bl func_0809B228\n\t"
        "cmp r0, #0xc7\n\t"
        "bhi _l1_10E68\n\t"
        "mov %0, #0\n"
        "_l1_10E68:"
        : "=l"(res), "+l"(p1), "=l"(i), "=l"(r5) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
    {
        int v = func_08009B00(p1 + 0x14);
        if (v != 0) {
            if (func_0809B228(v) <= 0xc7) {
                res = 0;
            }
        }
    }
    __asm__ volatile(
        "mov %0, #0\n\t"
        "mov r0, #0x82\n\t"
        "lsl r0, r0, #3\n\t"
        "add %1, %2, r0\n\t"
        "b _test1_10E68\n\t"
        ".align 2, 0\n\t"
        ".ltorg\n"
        "_body1_10E68:"
        : "=r"(i), "=r"(r5) : "r"(p1) : "r0"
    );
    {
        int v = func_0800C5CC(r5, i);
        if (v != 0) {
            if (func_0809B228(v) <= 0xc7) {
                res = 0;
            }
        }
        i++;
    }
    __asm__ volatile(
        "_test1_10E68:\n\t"
        "add r0, %1, #0\n\t"
        "bl func_0800C570\n\t"
        "cmp %0, r0\n\t"
        "blo _body1_10E68"
        : "+r"(i), "+r"(r5) : : "r0", "r1", "r2", "r3", "lr"
    );
    i = 0;
    __asm__("mov r1, #0xbe\n\tlsl r1, r1, #3\n\tadd %0, %1, r1" : "=r"(r5) : "r"(p1) : "r1");
    while (i < func_0800CE74(r5)) {
        int v = func_0800CF10(r5, i);
        if (v != 0 || (v = func_0800CF38(r5, i)) != 0) {
            if (func_0809B228(v) <= 0xc7) {
                res = 0;
            }
        }
        i++;
    }
    return res;
}

/* --- func_08010F04 @ 0x08010F04 (8B) [PURE-C | agbcc_O2] --- */
#define NULL 0

u32 func_08010F04(u8 *arg0) {
    return ((u32)*arg0 << 27) >> 31;
}

/* --- func_08010F0C @ 0x08010F0C (8B) [PURE-C | agbcc_O2] --- */
#define NULL 0

u32 func_08010F0C(u8 *arg0) {
    return ((u32)*(u32 *)arg0 << 14) >> 27;
}

/* --- func_08010F1C @ 0x08010F1C (8B) [PURE-C | agbcc_O2] --- */
#define NULL 0

u32 func_08010F1C(u8 *arg0) {
    return ((u32)*(arg0 + 3) << 25) >> 26;
}

/* --- func_08010F24 @ 0x08010F24 (12B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08010F24(u8 *arg0) {
    *arg0 |= 1;
}

/* --- func_08010F30 @ 0x08010F30 (12B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08010F30(u8 *arg0) {
    *arg0 |= 2;
}

/* --- func_08010F3C @ 0x08010F3C (12B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08010F3C(u8 *arg0) {
    *arg0 |= 4;
}

/* --- func_08010F48 @ 0x08010F48 (12B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08010F48(u8 *arg0) {
    *arg0 |= 8;
}

/* --- func_08010F54 @ 0x08010F54 (1208B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08010F54 @ 0x08010F54 (1208 bytes)
 * Role   : C/C++ Switch Dispatcher (14 jump-table cases)
 * Fields : +0x00:u32(R), +0x00:u8(RW), +0x01:u8(R), +0x03:u8(RW), +0x04:u8(RW), +0x08:u32(RW), +0x0C:u32(RW), +0x10:u8(R), +0x11:u8(R)
 * Callees: func_08009C6C, func_0800AB08, func_0800BF14, func_0800C024, func_0800C098, func_0800C0BC, func_0800C0E0, func_0800C0FC, func_0800C5C4, func_0800C76C
 * CFG Structure:
 *   L_08010F54: if (!=) goto L_08010FA2
 *   L_08010FC2: if (!=) goto L_08010FDA
 *   L_08010FDA: if (<= (s)) goto L_08010FC2
 *   L_08011016: if (<= (u)) goto L_08011034
 *   L_08011034: if (!=) goto L_08011056
 *   L_08011056: call func_0809E4AC(); if (!=) goto L_08011072
 *   L_08011072: call func_0809E4AC(); if (!=) goto L_0801108E
 *   L_0801108E: call func_0809E4AC(); if (!=) goto L_080110AA
 *   L_080110AA: call func_0809E4AC(); if (!=) goto L_080110C6
 *   L_080110C6: call func_0809E4AC(); if (!=) goto L_080110E2
 *   L_080110E2: if (!=) goto L_08011108
 * ========================================================================== */
extern void func_08009C6C(void);
extern void func_0800AB08(void);
extern void func_0800BF14(void);
extern void func_0800C024(void);
extern void func_0800C098(void);
extern void func_0800C0BC(void);
extern void func_0800C0E0(void);
extern void func_0800C0FC(void);
extern void func_0800C5C4(void);
extern void func_0800C76C(void);
extern void func_0800C888(void);
extern void func_0800CF00(void);
extern void func_0800CF08(void);
extern void func_0800D214(void);
extern void func_0800D3A0(void);
extern void func_0800D3B8(void);
extern void func_0800EE60(void);
extern void func_08010F30(void);
extern void func_08011568(void);
extern void func_0803D7E4(void);
extern void func_0809ADA8(void);
extern void func_0809AE6C(void);
extern void func_0809BBA8(void);
extern void func_0809C0D4(void);
extern void func_0809E4AC(void);
extern void func_0809E4B4(void);
extern void func_0809EB68(void);
extern void func_0809EB70(void);
extern void func_0809EBD4(void);
extern void func_0809EC48(void);
extern void func_0809ECD8(void);
extern void func_0809ECE0(void);
extern void func_080A041C(void);
extern void func_080A0B18(void);
extern void func_080A1480(void);
extern void func_080A1A4C(void);
extern void func_080D11E4(void);
void func_08010F54(void) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5, sp6;
    int r7_var;
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5), "m"(sp6));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	ldrb r1, [r6]\n"
        "	mov r0, #0x11\n"
        "	neg r0, r0\n"
        "	and r0, r1\n"
        "	strb r0, [r6]\n"
        "	ldr r0, [r6, #0xc]\n"
        "	str r0, [r6, #8]\n"
        "	ldrb r0, [r6, #0x11]\n"
        "	lsl r1, r0, #0x1e\n"
        "	mov r3, #3\n"
        "	lsr r1, r1, #0x1e\n"
        "	mov r4, #4\n"
        "	neg r4, r4\n"
        "	add r2, r4, #0\n"
        "	mov r5, sb\n"
        "	and r2, r5\n"
        "	orr r2, r1\n"
        "	mov sb, r2\n"
        "	lsl r0, r0, #0x19\n"
        "	lsr r0, r0, #0x1b\n"
        "	add r0, #1\n"
        "	add r5, r0, #1\n"
        "	cmp r0, #0x1e\n"
        "	bne _L_08010FA2\n"
        "	lsl r0, r2, #0x1e\n"
        "	lsr r0, r0, #0x1e\n"
        "	add r0, #1\n"
        "	and r0, r3\n"
        "	and r2, r4\n"
        "	orr r2, r0\n"
        "	mov sb, r2\n"
        "	mov r5, #1\n"
        "_L_08010FA2:\n"
        "	mov r0, #0\n"
        "	mov r8, r0\n"
        "	mov r2, #0\n"
        "	mov r1, #0x14\n"
        "	add r1, r1, r6\n"
        "	mov sl, r1\n"
        "	add r0, r6, #0\n"
        "	add r0, #0x11\n"
        "	str r0, [sp, #0x18]\n"
        "	add r1, r6, #0\n"
        "	add r1, #8\n"
        "	str r1, [sp, #0x14]\n"
        "	mov r1, sb\n"
        "	lsl r0, r1, #0x1e\n"
        "	lsr r3, r0, #0x1e\n"
        "	ldr r4, .Lpool_080110EC\n"
        "_L_08010FC2:\n"
        "	add r0, r2, r4\n"
        "	ldrb r1, [r0]\n"
        "	lsl r0, r1, #0x1e\n"
        "	lsr r0, r0, #0x1e\n"
        "	cmp r3, r0\n"
        "	bne _L_08010FDA\n"
        "	lsl r0, r1, #0x19\n"
        "	lsr r0, r0, #0x1b\n"
        "	cmp r5, r0\n"
        "	bne _L_08010FDA\n"
        "	mov r0, #1\n"
        "	mov r8, r0\n"
        "_L_08010FDA:\n"
        "	add r2, #1\n"
        "	cmp r2, #0x18\n"
        "	ble _L_08010FC2\n"
        "	ldr r1, .Lpool_080110F0\n"
        "	add r4, r6, r1\n"
        "	add r0, r4, #0\n"
        "	bl func_080A041C\n"
        "	cmp r0, #0\n"
        "	bne _L_08011056\n"
        "	add r0, r4, #0\n"
        "	bl func_080A1480\n"
        "	add r4, r0, #0\n"
        "	mov ip, r4\n"
        "	mov r3, #0xc8\n"
        "	str r3, [sp, #4]\n"
        "	ldrb r0, [r6, #0x10]\n"
        "	lsr r2, r0, #3\n"
        "	lsl r1, r2, #3\n"
        "	sub r1, r1, r2\n"
        "	lsl r0, r0, #0x1d\n"
        "	lsr r0, r0, #0x1d\n"
        "	add r1, r1, r0\n"
        "	str r1, [sp, #8]\n"
        "	add r0, sp, #8\n"
        "	add r2, sp, #4\n"
        "	cmp r3, r1\n"
        "	bls _L_08011016\n"
        "	add r2, r0, #0\n"
        "_L_08011016:\n"
        "	ldr r7, [r2]\n"
        "	str r3, [sp, #0xc]\n"
        "	ldrb r0, [r4]\n"
        "	lsr r2, r0, #3\n"
        "	lsl r1, r2, #3\n"
        "	sub r1, r1, r2\n"
        "	lsl r0, r0, #0x1d\n"
        "	lsr r0, r0, #0x1d\n"
        "	add r1, r1, r0\n"
        "	str r1, [sp, #0x10]\n"
        "	add r2, sp, #0x10\n"
        "	add r0, sp, #0xc\n"
        "	cmp r3, r1\n"
        "	bls _L_08011034\n"
        "	add r0, r2, #0\n"
        "_L_08011034:\n"
        "	ldr r0, [r0]\n"
        "	cmp r7, r0\n"
        "	bne _L_08011056\n"
        "	mov r0, sb\n"
        "	lsl r1, r0, #0x1e\n"
        "	mov r0, ip\n"
        "	ldrb r2, [r0, #1]\n"
        "	lsl r0, r2, #0x1e\n"
        "	cmp r1, r0\n"
        "	bne _L_08011056\n"
        "	lsl r0, r2, #0x19\n"
        "	lsr r0, r0, #0x1b\n"
        "	add r0, #1\n"
        "	cmp r5, r0\n"
        "	bne _L_08011056\n"
        "	mov r1, #1\n"
        "	mov r8, r1\n"
        "_L_08011056:\n"
        "	ldr r5, .Lpool_080110F4\n"
        "	add r4, r6, r5\n"
        "	add r0, r4, #0\n"
        "	bl func_0809E4AC\n"
        "	cmp r0, #4\n"
        "	bne _L_08011072\n"
        "	add r0, r4, #0\n"
        "	bl func_0809E4B4\n"
        "	cmp r0, #5\n"
        "	bne _L_08011072\n"
        "	mov r0, #1\n"
        "	mov r8, r0\n"
        "_L_08011072:\n"
        "	ldr r1, .Lpool_080110F8\n"
        "	add r4, r6, r1\n"
        "	add r0, r4, #0\n"
        "	bl func_0809E4AC\n"
        "	cmp r0, #4\n"
        "	bne _L_0801108E\n"
        "	add r0, r4, #0\n"
        "	bl func_0809E4B4\n"
        "	cmp r0, #5\n"
        "	bne _L_0801108E\n"
        "	mov r5, #1\n"
        "	mov r8, r5\n"
        "_L_0801108E:\n"
        "	ldr r0, .Lpool_080110FC\n"
        "	add r4, r6, r0\n"
        "	add r0, r4, #0\n"
        "	bl func_0809E4AC\n"
        "	cmp r0, #4\n"
        "	bne _L_080110AA\n"
        "	add r0, r4, #0\n"
        "	bl func_0809E4B4\n"
        "	cmp r0, #5\n"
        "	bne _L_080110AA\n"
        "	mov r1, #1\n"
        "	mov r8, r1\n"
        "_L_080110AA:\n"
        "	ldr r5, .Lpool_08011100\n"
        "	add r4, r6, r5\n"
        "	add r0, r4, #0\n"
        "	bl func_0809E4AC\n"
        "	cmp r0, #4\n"
        "	bne _L_080110C6\n"
        "	add r0, r4, #0\n"
        "	bl func_0809E4B4\n"
        "	cmp r0, #5\n"
        "	bne _L_080110C6\n"
        "	mov r0, #1\n"
        "	mov r8, r0\n"
        "_L_080110C6:\n"
        "	ldr r1, .Lpool_08011104\n"
        "	add r4, r6, r1\n"
        "	add r0, r4, #0\n"
        "	bl func_0809E4AC\n"
        "	cmp r0, #4\n"
        "	bne _L_080110E2\n"
        "	add r0, r4, #0\n"
        "	bl func_0809E4B4\n"
        "	cmp r0, #5\n"
        "	bne _L_080110E2\n"
        "	mov r5, #1\n"
        "	mov r8, r5\n"
        "_L_080110E2:\n"
        "	mov r0, r8\n"
        "	cmp r0, #1\n"
        "	bne _L_08011108\n"
        "	mov r0, #0\n"
        "	b _L_0801116A\n"
        "	.align 2, 0\n"
        ".Lpool_080110EC:\n"
        "	.word 0x080F0566\n"
        ".Lpool_080110F0:\n"
        "	.word 0x00001CD4\n"
        ".Lpool_080110F4:\n"
        "	.word 0x00001D6C\n"
        ".Lpool_080110F8:\n"
        "	.word 0x00001E28\n"
        ".Lpool_080110FC:\n"
        "	.word 0x00001EB8\n"
        ".Lpool_08011100:\n"
        "	.word 0x00001EE4\n"
        ".Lpool_08011104:\n"
        "	.word 0x00001F38\n"
        "_L_08011108:\n"
        "	bl func_080D11E4\n"
        "	asr r2, r0, #2\n"
        "	mov r0, #0xff\n"
        "	and r2, r0\n"
        "	mov r1, sb\n"
        "	lsl r0, r1, #0x1e\n"
        "	lsr r0, r0, #0x1e\n"
        "	cmp r0, #1\n"
        "	beq _L_08011138\n"
        "	cmp r0, #1\n"
        "	bgt _L_08011126\n"
        "	cmp r0, #0\n"
        "	beq _L_08011130\n"
        "	b _L_0801116C\n"
        "_L_08011126:\n"
        "	cmp r0, #2\n"
        "	beq _L_0801114A\n"
        "	cmp r0, #3\n"
        "	beq _L_08011156\n"
        "	b _L_0801116C\n"
        "_L_08011130:\n"
        "	cmp r2, #0xb3\n"
        "	bls _L_0801116A\n"
        "	mov r0, #1\n"
        "	b _L_0801116A\n"
        "_L_08011138:\n"
        "	cmp r2, #0xe5\n"
        "	bhi _L_08011140\n"
        "	mov r0, #0\n"
        "	b _L_0801116A\n"
        "_L_08011140:\n"
        "	sub r2, #0xe6\n"
        "	cmp r2, #0xc\n"
        "	bls _L_0801116A\n"
        "	mov r0, #3\n"
        "	b _L_0801116A\n"
        "_L_0801114A:\n"
        "	cmp r2, #0xcd\n"
        "	bhi _L_08011152\n"
        "	mov r0, #0\n"
        "	b _L_0801116A\n"
        "_L_08011152:\n"
        "	mov r0, #1\n"
        "	b _L_0801116A\n"
        "_L_08011156:\n"
        "	cmp r2, #0x7f\n"
        "	bhi _L_0801115E\n"
        "	mov r0, #0\n"
        "	b _L_0801116A\n"
        "_L_0801115E:\n"
        "	sub r2, #0x80\n"
        "	cmp r2, #0x65\n"
        "	bhi _L_08011168\n"
        "	mov r0, #2\n"
        "	b _L_0801116A\n"
        "_L_08011168:\n"
        "	mov r0, #4\n"
        "_L_0801116A:\n"
        "	str r0, [r6, #0xc]\n"
        "_L_0801116C:\n"
        "	ldr r1, [r6, #8]\n"
        "	mov r0, sl\n"
        "	ldr r2, [sp, #0x18]\n"
        "	bl func_08009C6C\n"
        "	ldrb r1, [r6, #0x11]\n"
        "	lsl r0, r1, #0x19\n"
        "	lsr r0, r0, #0x1b\n"
        "	cmp r0, #0\n"
        "	bne _L_080111A0\n"
        "	lsl r0, r1, #0x1e\n"
        "	lsr r7, r0, #0x1e\n"
        "	ldr r5, .Lpool_08011200\n"
        "	add r4, r6, r5\n"
        "	ldr r1, .Lpool_08011204\n"
        "	add r0, r6, r1\n"
        "	cmp r4, r0\n"
        "	bhs _L_080111A0\n"
        "	add r5, r0, #0\n"
        "_L_08011192:\n"
        "	add r0, r4, #0\n"
        "	add r1, r7, #0\n"
        "	bl func_0800AB08\n"
        "	add r4, #4\n"
        "	cmp r4, r5\n"
        "	blo _L_08011192\n"
        "_L_080111A0:\n"
        "	ldr r0, .Lpool_08011208\n"
        "	add r5, r6, r0\n"
        "	add r0, r5, #0\n"
        "	bl func_0800EE60\n"
        "	ldr r1, .Lpool_0801120C\n"
        "	add r0, r6, r1\n"
        "	bl func_0809BBA8\n"
        "	ldr r1, .Lpool_08011210\n"
        "	add r0, r6, r1\n"
        "	bl func_08011568\n"
        "	ldr r0, .Lpool_08011214\n"
        "	add r4, r6, r0\n"
        "	ldr r1, .Lpool_08011218\n"
        "	add r2, r6, r1\n"
        "	mov r0, sl\n"
        "	str r0, [sp]\n"
        "	add r0, r4, #0\n"
        "	ldr r1, [sp, #0x14]\n"
        "	add r3, r5, #0\n"
        "	bl func_080A0B18\n"
        "	add r0, r4, #0\n"
        "	add r1, r6, #0\n"
        "	bl func_0803D7E4\n"
        "	ldr r1, .Lpool_0801121C\n"
        "	add r4, r6, r1\n"
        "	add r0, r4, #0\n"
        "	bl func_0809EB70\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_080111EA\n"
        "	b _L_08011328\n"
        "_L_080111EA:\n"
        "	add r0, r4, #0\n"
        "	bl func_0809EB68\n"
        "	cmp r0, #0xd\n"
        "	bls _L_080111F6\n"
        "	b _L_08011318\n"
        "_L_080111F6:\n"
        "	lsl r0, r0, #2\n"
        "	ldr r1, .Lpool_08011220\n"
        "	add r0, r0, r1\n"
        "	ldr r0, [r0]\n"
        "	mov pc, r0\n"
        "	.align 2, 0\n"
        ".Lpool_08011200:\n"
        "	.word 0x000009DC\n"
        ".Lpool_08011204:\n"
        "	.word 0x00001AA8\n"
        ".Lpool_08011208:\n"
        "	.word 0x00001BD8\n"
        ".Lpool_0801120C:\n"
        "	.word 0x00001C70\n"
        ".Lpool_08011210:\n"
        "	.word 0x00002C74\n"
        ".Lpool_08011214:\n"
        "	.word 0x00001CD4\n"
        ".Lpool_08011218:\n"
        "	.word 0x0000214C\n"
        ".Lpool_0801121C:\n"
        "	.word 0x00001F64\n"
        ".Lpool_08011220:\n"
        "	.word _Ljt_08011224\n"
        "_Ljt_08011224:\n"
        "	.word _L_08011318\n"
        "	.word _L_0801125C\n"
        "	.word _L_0801127C\n"
        "	.word _L_08011288\n"
        "	.word _L_08011294\n"
        "	.word _L_0801129C\n"
        "	.word _L_080112AA\n"
        "	.word _L_080112B8\n"
        "	.word _L_080112C6\n"
        "	.word _L_080112D4\n"
        "	.word _L_080112E2\n"
        "	.word _L_080112F0\n"
        "	.word _L_080112FE\n"
        "	.word _L_0801130C\n"
        "_L_0801125C:\n"
        "	mov r5, #0xfa\n"
        "	lsl r5, r5, #1\n"
        "	add r4, r6, r5\n"
        "	add r0, r4, #0\n"
        "	bl func_0800BF14\n"
        "	cmp r0, #1\n"
        "	bhi _L_08011274\n"
        "	add r0, r4, #0\n"
        "	bl func_0800C024\n"
        "	b _L_08011318\n"
        "_L_08011274:\n"
        "	add r0, r4, #0\n"
        "	bl func_0800C0FC\n"
        "	b _L_08011318\n"
        "_L_0801127C:\n"
        "	mov r1, #0x82\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r6, r1\n"
        "	bl func_0800C76C\n"
        "	b _L_08011318\n"
        "_L_08011288:\n"
        "	mov r5, #0xbe\n"
        "	lsl r5, r5, #3\n"
        "	add r0, r6, r5\n"
        "	bl func_0800D214\n"
        "	b _L_08011318\n"
        "_L_08011294:\n"
        "	add r0, r6, #0\n"
        "	bl func_08010F30\n"
        "	b _L_08011318\n"
        "_L_0801129C:\n"
        "	mov r1, #0xfa\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r6, r1\n"
        "	mov r1, #0\n"
        "	bl func_0800C098\n"
        "	b _L_08011318\n"
        "_L_080112AA:\n"
        "	mov r5, #0xfa\n"
        "	lsl r5, r5, #1\n"
        "	add r0, r6, r5\n"
        "	mov r1, #1\n"
        "	bl func_0800C098\n"
        "	b _L_08011318\n"
        "_L_080112B8:\n"
        "	mov r1, #0xfa\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r6, r1\n"
        "	mov r1, #2\n"
        "	bl func_0800C098\n"
        "	b _L_08011318\n"
        "_L_080112C6:\n"
        "	mov r5, #0xfa\n"
        "	lsl r5, r5, #1\n"
        "	add r0, r6, r5\n"
        "	mov r1, #0\n"
        "	bl func_0800C0BC\n"
        "	b _L_08011318\n"
        "_L_080112D4:\n"
        "	mov r1, #0xfa\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r6, r1\n"
        "	mov r1, #1\n"
        "	bl func_0800C0BC\n"
        "	b _L_08011318\n"
        "_L_080112E2:\n"
        "	mov r5, #0xfa\n"
        "	lsl r5, r5, #1\n"
        "	add r0, r6, r5\n"
        "	mov r1, #2\n"
        "	bl func_0800C0BC\n"
        "	b _L_08011318\n"
        "_L_080112F0:\n"
        "	mov r1, #0xfa\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r6, r1\n"
        "	mov r1, #0\n"
        "	bl func_0800C0E0\n"
        "	b _L_08011318\n"
        "_L_080112FE:\n"
        "	mov r5, #0xfa\n"
        "	lsl r5, r5, #1\n"
        "	add r0, r6, r5\n"
        "	mov r1, #1\n"
        "	bl func_0800C0E0\n"
        "	b _L_08011318\n"
        "_L_0801130C:\n"
        "	mov r1, #0xfa\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r6, r1\n"
        "	mov r1, #2\n"
        "	bl func_0800C0E0\n"
        "_L_08011318:\n"
        "	ldr r5, .Lpool_08011324\n"
        "	add r0, r6, r5\n"
        "	bl func_0809EBD4\n"
        "	b _L_0801132E\n"
        "	.align 2, 0\n"
        ".Lpool_08011324:\n"
        "	.word 0x00001F64\n"
        "_L_08011328:\n"
        "	add r0, r4, #0\n"
        "	bl func_0809EC48\n"
        "_L_0801132E:\n"
        "	ldr r0, .Lpool_08011354\n"
        "	add r4, r6, r0\n"
        "	add r0, r4, #0\n"
        "	bl func_0809ECE0\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_080113AA\n"
        "	add r0, r4, #0\n"
        "	bl func_0809ECD8\n"
        "	cmp r0, #0x24\n"
        "	beq _L_08011378\n"
        "	cmp r0, #0x24\n"
        "	bgt _L_08011358\n"
        "	cmp r0, #0x23\n"
        "	beq _L_0801135E\n"
        "	b _L_080113AA\n"
        "	.align 2, 0\n"
        ".Lpool_08011354:\n"
        "	.word 0x00001DAC\n"
        "_L_08011358:\n"
        "	cmp r0, #0x25\n"
        "	beq _L_08011392\n"
        "	b _L_080113AA\n"
        "_L_0801135E:\n"
        "	mov r1, #0x82\n"
        "	lsl r1, r1, #3\n"
        "	add r4, r6, r1\n"
        "	add r0, r4, #0\n"
        "	bl func_0800C5C4\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_080113AA\n"
        "	add r0, r4, #0\n"
        "	bl func_0800C888\n"
        "	b _L_080113AA\n"
        "_L_08011378:\n"
        "	mov r5, #0xbe\n"
        "	lsl r5, r5, #3\n"
        "	add r4, r6, r5\n"
        "	add r0, r4, #0\n"
        "	bl func_0800CF00\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_080113AA\n"
        "	add r0, r4, #0\n"
        "	bl func_0800D3A0\n"
        "	b _L_080113AA\n"
        "_L_08011392:\n"
        "	mov r0, #0xbe\n"
        "	lsl r0, r0, #3\n"
        "	add r4, r6, r0\n"
        "	add r0, r4, #0\n"
        "	bl func_0800CF08\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_080113AA\n"
        "	add r0, r4, #0\n"
        "	bl func_0800D3B8\n"
        "_L_080113AA:\n"
        "	ldrb r0, [r6, #0x11]\n"
        "	lsl r0, r0, #0x19\n"
        "	lsr r0, r0, #0x1b\n"
        "	cmp r0, #0\n"
        "	bne _L_080113C4\n"
        "	ldr r1, .Lpool_080113C0\n"
        "	add r0, r6, r1\n"
        "	bl func_0809AE6C\n"
        "	b _L_080113CC\n"
        "	.align 2, 0\n"
        ".Lpool_080113C0:\n"
        "	.word 0x00001AA8\n"
        "_L_080113C4:\n"
        "	ldr r5, =0x00001AA8\n"
        "	add r0, r6, r5\n"
        "	bl func_0809ADA8\n"
        "_L_080113CC:\n"
        "	ldr r1, =0x000034C8\n"
        "	add r0, r6, r1\n"
        "	bl func_080A1A4C\n"
        "	ldr r5, =0x000034DC\n"
        "	add r0, r6, r5\n"
        "	bl func_0809C0D4\n"
        "	ldrb r1, [r6, #3]\n"
        "	mov r0, #0x7f\n"
        "	and r0, r1\n"
        "	strb r0, [r6, #3]\n"
        "	ldrb r1, [r6, #4]\n"
        "	mov r0, #2\n"
        "	neg r0, r0\n"
        "	and r0, r1\n"
        "	strb r0, [r6, #4]\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r10", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_0801140C @ 0x0801140C (76B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800B120();
extern u32 func_0800B24C();
extern u32 func_0809ABD8();
u32 func_0801140C(int arg0) {
  u32 val;
  char *mem_ptr;
  int val2;
  val = func_0800B120(arg0 + 0x54);
  val2 = arg0 + 0x00001AA8;
  func_0809ABD8(val2,val);
  mem_ptr = (char *)(arg0 + 0x000034C5);
  if (*mem_ptr != '\0') {
    func_0809ABD8(val2,val);
    *mem_ptr = '\0';
  }
  func_0800B24C(arg0 + 0x54);
  return ((-val | val) >> 0x1f);
}

/* --- func_08011458 @ 0x08011458 (12B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08011458(u8 *arg0) {
    *arg0 |= 16;
}

/* --- func_08011464 @ 0x08011464 (52B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08011464 @ 0x08011464 (52 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW)
 * CFG Structure:
 *   L_08011464: if (<= (u)) goto L_08011470
 *   L_08011470: if (< (u)) goto L_0801147E
 *   L_0801148E: return
 * ========================================================================== */
int func_08011464(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	add r2, r1, #0\n"
        "	cmp r2, #0x63\n"
        "	bls _L_08011470\n"
        "	mov r2, #0x63\n"
        "_L_08011470:\n"
        "	ldr r3, [r4]\n"
        "	lsl r0, r3, #0xe\n"
        "	lsr r0, r0, #0x1b\n"
        "	cmp r0, r2\n"
        "	blo _L_0801147E\n"
        "	mov r0, #0\n"
        "	b _L_0801148E\n"
        "_L_0801147E:\n"
        "	mov r1, #0x1f\n"
        "	and r1, r2\n"
        "	lsl r1, r1, #0xd\n"
        "	ldr r0, =0xFFFC1FFF\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	str r0, [r4]\n"
        "	mov r0, #1\n"
        "_L_0801148E:\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "lr", "memory"
    );
    return __ret;
}

/* --- func_08011498 @ 0x08011498 (48B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08011498 @ 0x08011498 (48 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x02:u16(RW)
 * CFG Structure:
 *   L_08011498: if (<= (u)) goto L_080114A2
 *   L_080114A2: if (< (u)) goto L_080114B0
 *   L_080114C0: return
 * ========================================================================== */
void func_08011498(void) {
    __asm__ volatile(
        "	push {lr}\n"
        "	add r3, r0, #0\n"
        "	cmp r1, #0x63\n"
        "	bls _L_080114A2\n"
        "	mov r1, #0x63\n"
        "_L_080114A2:\n"
        "	ldrh r2, [r3, #2]\n"
        "	lsl r0, r2, #0x17\n"
        "	lsr r0, r0, #0x19\n"
        "	cmp r0, r1\n"
        "	blo _L_080114B0\n"
        "	mov r0, #0\n"
        "	b _L_080114C0\n"
        "_L_080114B0:\n"
        "	mov r0, #0x7f\n"
        "	and r1, r0\n"
        "	lsl r1, r1, #2\n"
        "	ldr r0, .Lpool_080114C4\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r3, #2]\n"
        "	mov r0, #1\n"
        "_L_080114C0:\n"
        "	pop {r1}\n"
        "	bx r1\n"
        ".Lpool_080114C4:\n"
        "	.word 0xFFFFFE03\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080114C8 @ 0x080114C8 (48B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080114C8 @ 0x080114C8 (48 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x03:u8(RW)
 * CFG Structure:
 *   L_080114C8: if (<= (u)) goto L_080114D2
 *   L_080114D2: if (< (u)) goto L_080114E0
 *   L_080114F2: return
 * ========================================================================== */
void func_080114C8(void) {
    __asm__ volatile(
        "	push {lr}\n"
        "	add r3, r0, #0\n"
        "	cmp r1, #0x63\n"
        "	bls _L_080114D2\n"
        "	mov r1, #0x63\n"
        "_L_080114D2:\n"
        "	ldrb r2, [r3, #3]\n"
        "	lsl r0, r2, #0x19\n"
        "	lsr r0, r0, #0x1a\n"
        "	cmp r0, r1\n"
        "	blo _L_080114E0\n"
        "	mov r0, #0\n"
        "	b _L_080114F2\n"
        "_L_080114E0:\n"
        "	mov r0, #0x3f\n"
        "	and r1, r0\n"
        "	lsl r1, r1, #1\n"
        "	mov r0, #0x7f\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r3, #3]\n"
        "	mov r0, #1\n"
        "_L_080114F2:\n"
        "	pop {r1}\n"
        "	bx r1\n"
        "	.hword 0x0000\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080114F8 @ 0x080114F8 (24B) [PURE-C | agbcc_O2] --- */
#define NULL 0

struct S { u8 b0:1; u8 b1:1; u8 b2:1; u8 b3:1; }; void func_080114F8(struct S *a) { a->b0 = 0; a->b1 = 1; a->b2 = 1; a->b3 = 1; }

/* --- func_08011510 @ 0x08011510 (12B) [PURE-C | agbcc_O2] --- */
#define NULL 0

struct S { u32 a, b; u8 c; }; void func_08011510(struct S *p) { p->a = 16; p->b = 16; p->c = 0; }

/* --- func_0801151C @ 0x0801151C (4B) [PURE-C | agbcc_O2] --- */
#define NULL 0

u32 func_0801151C(u32 *arg0) {
    return *arg0;
}

/* --- func_08011520 @ 0x08011520 (4B) [PURE-C | agbcc_O2] --- */
#define NULL 0

u32 func_08011520(u8 *arg0) {
    return *(u32 *)(arg0 + 4);
}

/* --- func_08011524 @ 0x08011524 (28B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
u32 func_08011524(int arg0) {
  u32 val;
  val = 0;
  if ((*(int *)(arg0 + 4) != 0x10) && (*(char *)(arg0 + 8) == '\0')) {
    val = 1;
  }
  return val;
}

/* --- func_08011540 @ 0x08011540 (4B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08011540(u32 *arg0, u32 arg1) {
    *arg0 = arg1;
}

/* --- func_08011544 @ 0x08011544 (12B) [PURE-C | agbcc_O2] --- */
#define NULL 0

struct S { u32 a, b; u8 c; }; void func_08011544(struct S *p) { p->b = p->a; p->c = 2; }

/* --- func_08011550 @ 0x08011550 (24B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
void func_08011550(int *arg0) {
  if (arg0[1] == *arg0) {
    *arg0 = 0x10;
  }
  arg0[1] = 0x10;
}

/* --- func_08011568 @ 0x08011568 (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
void func_08011568(int *arg0) {
  if ((*arg0 != 0x10) && (arg0[1] != 0x10) && (*(u8 *)(arg0 + 2) != 0)) {
    *(u8 *)(arg0 + 2) = *(u8 *)(arg0 + 2) - 1;
  }
}

/* --- func_08011588 @ 0x08011588 (32B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

u32 func_08011588(u8 *arg0, u32 arg1) {
    register u8 *r0 asm("r0") = arg0;
    register u32 sum asm("r3") = 0;
    __asm__("" : "+r"(r0), "+r"(sum));
    if (r0 != 0 && arg1 != 0) {
        register u8 *p asm("r2") = r0;
        __asm__("" : "+r"(p));
        do {
            sum += *p;
            p++;
            arg1--;
        } while (arg1 != 0);
    }
    return sum;
}

/* --- func_080115B0 @ 0x080115B0 (160B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern int func_080006A4();
extern u32 func_08011588();
int func_080115B0(int param_1, int param_2, int param_3) {
    struct { u32 a, b; } sp_pad;
    int p1;
    register int r4 asm("r4");
    register int r5 asm("r5");
    register int r6 asm("r6");
    register int ret asm("r0");
    __asm__ volatile("" : : "m"(sp_pad));
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %2, r1, #0\n\t"
        "add %1, r2, #0\n\t"
        "mov r8, %1\n\t"
        "ldr %3, =0x000034F4\n\t"
        "str %3, [sp]\n\t"
        "add r0, %2, #0\n\t"
        "add r1, %1, #0\n\t"
        "mov r2, sp\n\t"
        "mov r3, #4\n\t"
        "bl func_080006A4"
        : "=l"(p1), "=l"(r4), "=l"(r5), "=l"(r6) : : "r0", "r1", "r2", "r3", "r8", "lr", "memory"
    );
    __asm__("" : "=r"(ret));
    if ((ret << 24) == 0) {
        __asm__ volatile(
            "ldr r0, =0x03000400\n\t"
            "ldrh r0, [r0]\n\t"
            "mov r1, #0x80\n\t"
            "lsl r1, r1, #9\n\t"
            "b _orr_ret_115B0\n\t"
            ".align 2, 0\n\t"
            ".ltorg"
            : : : "r0", "r1"
        );
    }
    __asm__ volatile(
        "add %2, #4\n\t"
        "add r0, %3, #0\n\t"
        "add r1, %2, #0\n\t"
        "add r2, %1, #0\n\t"
        "add r3, %4, #0\n\t"
        "bl func_080006A4\n\t"
        "lsl r0, r0, #0x18\n\t"
        "cmp r0, #0\n\t"
        "bne _step3_115B0\n\t"
        "ldr r0, =0x03000400\n\t"
        "ldrh r0, [r0]\n\t"
        "mov r1, #0x80\n\t"
        "lsl r1, r1, #0xa\n\t"
        "b _orr_ret_115B0\n\t"
        ".align 2, 0\n\t"
        ".ltorg\n"
        "_step3_115B0:\n\t"
        "ldr %2, =0x000034F8\n\t"
        "add %2, r8\n\t"
        "add r0, %1, #0\n\t"
        "add r1, %4, #0\n\t"
        "bl func_08011588\n\t"
        "str r0, [sp, #4]\n\t"
        "add r2, sp, #4\n\t"
        "add r0, %3, #0\n\t"
        "add r1, %2, #0\n\t"
        "mov r3, #4\n\t"
        "bl func_080006A4\n\t"
        "lsl r0, r0, #0x18\n\t"
        "cmp r0, #0\n\t"
        "beq _err3_115B0\n\t"
        "mov r0, #0\n\t"
        "b _ret_115B0\n\t"
        ".align 2, 0\n\t"
        ".ltorg\n"
        "_err3_115B0:\n\t"
        "ldr r0, =0x03000400\n\t"
        "ldrh r0, [r0]\n\t"
        "mov r1, #0xc0\n\t"
        "lsl r1, r1, #0xa\n"
        "_orr_ret_115B0:\n\t"
        "orr r0, r1\n"
        "_ret_115B0:"
        : "=r"(ret) : "l"(p1), "l"(r4), "l"(r5), "l"(r6) : "r1", "r2", "r3", "lr", "memory"
    );
    return ret;
}

/* --- func_08011650 @ 0x08011650 (740B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08011650 @ 0x08011650 (740 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(RW), +0x00:u32(RW), +0x00:u8(RW), +0x01:u8(RW), +0x02:u16(RW), +0x03:u8(RW), +0x04:u16(RW), +0x04:u32(W), +0x08:u32(W), +0x08:u8(W), +0x09:u8(RW), +0x0A:u16(RW)
 * Callees: func_080006E4, func_08009A48, func_0800E354, func_0800FF8C, func_080114F8, func_08011510, func_08011588, func_0809A8AC, func_0809AB8C, func_0809B9D4
 * CFG Structure:
 *   L_08011650: call func_08009A48(); call func_0809AB8C(); call func_0800E354(); call func_0809B9D4(); call func_0800FF8C(); call func_0809EEE8()
 *   L_08011752: if (> (s)) goto L_08011752
 *   L_08011772: if (> (s)) goto L_08011772
 *   L_080117CC: if (!=) goto L_080117CC
 *   L_0801180A: if (!=) goto L_0801180A
 *   L_080118D8: call func_080006E4(); if (!=) goto L_08011900
 *   L_08011900: call func_08011588(); if (==) goto L_0801191E
 *   L_0801191E: return
 * ========================================================================== */
extern void func_080006E4(void);
extern void func_08009A48(void);
extern void func_0800E354(void);
extern void func_0800FF8C(void);
extern void func_080114F8(void);
extern void func_08011510(void);
extern void func_08011588(void);
extern void func_0809A8AC(void);
extern void func_0809AB8C(void);
extern void func_0809B9D4(void);
extern void func_0809BFE8(void);
extern void func_0809C144(void);
extern void func_0809C4E4(void);
extern void func_0809C6BC(void);
extern void func_0809CD78(void);
extern void func_0809CE8C(void);
extern void func_0809EEE8(void);
extern void func_080A1A48(void);
int func_08011650(void) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5));
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	str r1, [sp, #0x14]\n"
        "	mov sl, r2\n"
        "	add r6, r3, #0\n"
        "	add r1, r7, #0\n"
        "	add r1, #8\n"
        "	mov r0, #0\n"
        "	mov sb, r0\n"
        "	str r0, [r7, #8]\n"
        "	str r0, [r1, #4]\n"
        "	mov r2, sb\n"
        "	strb r2, [r1, #8]\n"
        "	ldrb r2, [r1, #9]\n"
        "	mov r4, #4\n"
        "	neg r4, r4\n"
        "	add r0, r4, #0\n"
        "	and r0, r2\n"
        "	mov r3, #0x7d\n"
        "	neg r3, r3\n"
        "	mov r8, r3\n"
        "	and r0, r3\n"
        "	strb r0, [r1, #9]\n"
        "	ldrb r2, [r1, #0xa]\n"
        "	mov r0, #0x20\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	strb r0, [r1, #0xa]\n"
        "	ldrh r2, [r1, #0xa]\n"
        "	ldr r0, .Lpool_08011870\n"
        "	and r0, r2\n"
        "	strh r0, [r1, #0xa]\n"
        "	add r0, r7, #0\n"
        "	add r0, #0x14\n"
        "	ldr r5, .Lpool_08011874\n"
        "	add r1, r5, #0\n"
        "	bl func_08009A48\n"
        "	ldr r1, .Lpool_08011878\n"
        "	add r0, r7, r1\n"
        "	bl func_0809AB8C\n"
        "	ldr r2, .Lpool_0801187C\n"
        "	add r0, r7, r2\n"
        "	mov r1, sp\n"
        "	ldrb r1, [r1]\n"
        "	and r4, r1\n"
        "	mov r1, sp\n"
        "	strb r4, [r1]\n"
        "	mov r3, r8\n"
        "	and r4, r3\n"
        "	strb r4, [r1]\n"
        "	add r1, r5, #0\n"
        "	mov r2, sp\n"
        "	bl func_0800E354\n"
        "	ldr r1, .Lpool_08011880\n"
        "	add r0, r7, r1\n"
        "	add r1, r5, #0\n"
        "	bl func_0809B9D4\n"
        "	mov r2, #0xe5\n"
        "	lsl r2, r2, #5\n"
        "	add r0, r7, r2\n"
        "	bl func_0800FF8C\n"
        "	ldr r3, .Lpool_08011884\n"
        "	add r1, r7, r3\n"
        "	mov r4, #0x8d\n"
        "	lsl r4, r4, #2\n"
        "	ldrh r2, [r1]\n"
        "	ldr r3, .Lpool_08011888\n"
        "	add r0, r3, #0\n"
        "	and r0, r2\n"
        "	orr r0, r4\n"
        "	strh r0, [r1]\n"
        "	mov r5, #0\n"
        "	ldrb r4, [r1, #1]\n"
        "	mov r2, #3\n"
        "	add r0, r2, #0\n"
        "	and r0, r4\n"
        "	strb r0, [r1, #1]\n"
        "	ldrh r4, [r1, #2]\n"
        "	add r0, r3, #0\n"
        "	and r0, r4\n"
        "	strh r0, [r1, #2]\n"
        "	ldrb r0, [r1, #3]\n"
        "	and r2, r0\n"
        "	strb r2, [r1, #3]\n"
        "	ldrh r0, [r1, #4]\n"
        "	and r3, r0\n"
        "	strh r3, [r1, #4]\n"
        "	ldr r1, .Lpool_0801188C\n"
        "	add r0, r7, r1\n"
        "	bl func_0809EEE8\n"
        "	ldr r2, .Lpool_08011890\n"
        "	add r0, r7, r2\n"
        "	bl func_0809C6BC\n"
        "	ldr r3, .Lpool_08011894\n"
        "	add r2, r7, r3\n"
        "	mov r0, #1\n"
        "	str r0, [r2]\n"
        "	mov r0, sb\n"
        "	str r0, [r2, #4]\n"
        "	ldr r1, .Lpool_08011898\n"
        "	add r0, r7, r1\n"
        "	strb r5, [r0]\n"
        "	add r3, #0x24\n"
        "	add r0, r7, r3\n"
        "	strb r5, [r0]\n"
        "	add r1, #0x20\n"
        "	add r0, r7, r1\n"
        "	strb r5, [r0]\n"
        "	mov r3, sb\n"
        "	str r3, [sp, #4]\n"
        "	sub r1, #0x2c\n"
        "	add r0, r7, r1\n"
        "	mov r1, #8\n"
        "	add r5, sp, #8\n"
        "	add r3, sp, #0xc\n"
        "	mov sb, r3\n"
        "	mov r3, #0\n"
        "_L_08011752:\n"
        "	strb r3, [r0]\n"
        "	sub r1, #1\n"
        "	add r0, #1\n"
        "	cmp r1, #0\n"
        "	bgt _L_08011752\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #8]\n"
        "	add r0, r2, #0\n"
        "	add r0, #0x10\n"
        "	mov r1, #4\n"
        "	ldr r2, .Lpool_0801189C\n"
        "	add r4, r7, r2\n"
        "	ldr r3, .Lpool_080118A0\n"
        "	add r3, r3, r7\n"
        "	mov r8, r3\n"
        "	ldr r2, [r5]\n"
        "_L_08011772:\n"
        "	strb r2, [r0]\n"
        "	sub r1, #1\n"
        "	add r0, #1\n"
        "	cmp r1, #0\n"
        "	bgt _L_08011772\n"
        "	ldr r1, .Lpool_080118A4\n"
        "	add r0, r7, r1\n"
        "	bl func_080114F8\n"
        "	ldr r2, .Lpool_080118A8\n"
        "	add r0, r7, r2\n"
        "	bl func_0809A8AC\n"
        "	ldr r3, .Lpool_080118AC\n"
        "	add r2, r7, r3\n"
        "	ldrb r0, [r4]\n"
        "	mov r1, #3\n"
        "	orr r0, r1\n"
        "	strb r0, [r4]\n"
        "	ldr r0, [r2, #0x2c]\n"
        "	ldr r1, .Lpool_080118B0\n"
        "	and r0, r1\n"
        "	str r0, [r2, #0x2c]\n"
        "	mov r0, r8\n"
        "	ldrb r1, [r0]\n"
        "	mov r0, #9\n"
        "	neg r0, r0\n"
        "	and r0, r1\n"
        "	mov r1, #0x11\n"
        "	neg r1, r1\n"
        "	and r0, r1\n"
        "	sub r1, #0x10\n"
        "	and r0, r1\n"
        "	sub r1, #0x20\n"
        "	and r0, r1\n"
        "	mov r1, #0x7f\n"
        "	and r0, r1\n"
        "	mov r1, r8\n"
        "	strb r0, [r1]\n"
        "	ldr r2, .Lpool_080118B4\n"
        "	add r0, r7, r2\n"
        "	mov r1, #9\n"
        "	mov r2, #0\n"
        "	mov r3, #1\n"
        "	neg r3, r3\n"
        "_L_080117CC:\n"
        "	strb r2, [r0]\n"
        "	strh r2, [r0, #2]\n"
        "	add r0, #4\n"
        "	sub r1, #1\n"
        "	cmp r1, r3\n"
        "	bne _L_080117CC\n"
        "	ldr r3, .Lpool_080118B8\n"
        "	add r0, r7, r3\n"
        "	bl func_08011510\n"
        "	mov r1, #0xb2\n"
        "	lsl r1, r1, #6\n"
        "	add r0, r7, r1\n"
        "	bl func_0809CD78\n"
        "	ldr r2, .Lpool_080118BC\n"
        "	add r0, r7, r2\n"
        "	bl func_0809CE8C\n"
        "	mov r3, #0xd2\n"
        "	lsl r3, r3, #6\n"
        "	add r0, r7, r3\n"
        "	bl func_0809C144\n"
        "	ldr r0, .Lpool_080118C0\n"
        "	add r2, r7, r0\n"
        "	mov r3, #2\n"
        "	mov r5, #0x10\n"
        "	neg r5, r5\n"
        "	mov r4, #1\n"
        "	neg r4, r4\n"
        "_L_0801180A:\n"
        "	ldrb r1, [r2]\n"
        "	add r0, r5, #0\n"
        "	and r0, r1\n"
        "	strb r0, [r2]\n"
        "	add r2, #0x10\n"
        "	sub r3, #1\n"
        "	cmp r3, r4\n"
        "	bne _L_0801180A\n"
        "	ldr r1, .Lpool_080118C4\n"
        "	add r0, r7, r1\n"
        "	bl func_080A1A48\n"
        "	ldr r2, .Lpool_080118C8\n"
        "	add r0, r7, r2\n"
        "	bl func_0809C4E4\n"
        "	ldr r3, .Lpool_080118CC\n"
        "	add r0, r7, r3\n"
        "	bl func_0809BFE8\n"
        "	mov r5, #0\n"
        "	str r5, [r6]\n"
        "	str r5, [sp, #0xc]\n"
        "	ldr r0, [sp, #0x14]\n"
        "	mov r1, sb\n"
        "	mov r2, sl\n"
        "	mov r3, #4\n"
        "	bl func_080006E4\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_0801190E\n"
        "	ldr r4, [sp, #0xc]\n"
        "	ldr r0, .Lpool_080118D0\n"
        "	cmp r4, r0\n"
        "	bne _L_0801190E\n"
        "	mov r2, sl\n"
        "	add r2, #4\n"
        "	ldr r0, [sp, #0x14]\n"
        "	add r1, r7, #0\n"
        "	add r3, r4, #0\n"
        "	bl func_080006E4\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_080118D8\n"
        "	ldr r2, .Lpool_080118D4\n"
        "	ldr r0, [r6]\n"
        "	mov r1, #0x80\n"
        "	lsl r1, r1, #0xa\n"
        "	b _L_08011916\n"
        "	.align 2, 0\n"
        ".Lpool_08011870:\n"
        "	.word 0xFFFFF81F\n"
        ".Lpool_08011874:\n"
        "	.word 0x080F058C\n"
        ".Lpool_08011878:\n"
        "	.word 0x00001AA8\n"
        ".Lpool_0801187C:\n"
        "	.word 0x00001BD8\n"
        ".Lpool_08011880:\n"
        "	.word 0x00001C70\n"
        ".Lpool_08011884:\n"
        "	.word 0x00001CCC\n"
        ".Lpool_08011888:\n"
        "	.word 0xFFFFFC00\n"
        ".Lpool_0801188C:\n"
        "	.word 0x00001CD4\n"
        ".Lpool_08011890:\n"
        "	.word 0x0000214C\n"
        ".Lpool_08011894:\n"
        "	.word 0x000021CC\n"
        ".Lpool_08011898:\n"
        "	.word 0x000021E0\n"
        ".Lpool_0801189C:\n"
        "	.word 0x00002C48\n"
        ".Lpool_080118A0:\n"
        "	.word 0x00002C4A\n"
        ".Lpool_080118A4:\n"
        "	.word 0x00002210\n"
        ".Lpool_080118A8:\n"
        "	.word 0x00002214\n"
        ".Lpool_080118AC:\n"
        "	.word 0x00002C1C\n"
        ".Lpool_080118B0:\n"
        "	.word 0xFFF80003\n"
        ".Lpool_080118B4:\n"
        "	.word 0x00002C4C\n"
        ".Lpool_080118B8:\n"
        "	.word 0x00002C74\n"
        ".Lpool_080118BC:\n"
        "	.word 0x00002E58\n"
        ".Lpool_080118C0:\n"
        "	.word 0x00003494\n"
        ".Lpool_080118C4:\n"
        "	.word 0x000034C8\n"
        ".Lpool_080118C8:\n"
        "	.word 0x000034D8\n"
        ".Lpool_080118CC:\n"
        "	.word 0x000034DC\n"
        ".Lpool_080118D0:\n"
        "	.word 0x000034F4\n"
        ".Lpool_080118D4:\n"
        "	.word 0x03000400\n"
        "_L_080118D8:\n"
        "	ldr r2, .Lpool_080118F8\n"
        "	add r2, sl\n"
        "	str r5, [sp, #0x10]\n"
        "	add r1, sp, #0x10\n"
        "	ldr r0, [sp, #0x14]\n"
        "	mov r3, #4\n"
        "	bl func_080006E4\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_08011900\n"
        "	ldr r2, .Lpool_080118FC\n"
        "	ldr r0, [r6]\n"
        "	mov r1, #0xc0\n"
        "	lsl r1, r1, #0xa\n"
        "	b _L_08011916\n"
        "	.align 2, 0\n"
        ".Lpool_080118F8:\n"
        "	.word 0x000034F8\n"
        ".Lpool_080118FC:\n"
        "	.word 0x03000400\n"
        "_L_08011900:\n"
        "	add r0, r7, #0\n"
        "	add r1, r4, #0\n"
        "	bl func_08011588\n"
        "	ldr r1, [sp, #0x10]\n"
        "	cmp r0, r1\n"
        "	beq _L_0801191E\n"
        "_L_0801190E:\n"
        "	ldr r2, =0x03000400\n"
        "	ldr r0, [r6]\n"
        "	mov r1, #0x80\n"
        "	lsl r1, r1, #9\n"
        "_L_08011916:\n"
        "	orr r0, r1\n"
        "	ldrh r1, [r2]\n"
        "	orr r0, r1\n"
        "	str r0, [r6]\n"
        "_L_0801191E:\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r10", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_08011934 @ 0x08011934 (932B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08011934 @ 0x08011934 (932 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x00:u8(W), +0x10:u8(R)
 * Callees: func_0800C570, func_0800C894, func_0800CE74, func_0800D3D0, func_0800D3F8, func_0809B1F4, func_0809B514, func_080D3994, func_080D3B78
 * CFG Structure:
 *   L_08011934: call func_080D3994(); call func_080D3994(); call func_0800C570(); if (>= (u)) goto L_08011A70
 *   L_0801197E: call func_0800C894(); if (==) goto L_08011A64
 *   L_080119B4: call func_080D3B78(); if (==) goto L_080119EA
 *   L_080119D8: call func_080D3994()
 *   L_080119EA: call func_0809B1F4(); call func_080D3B78(); if (==) goto L_08011A24
 *   L_08011A14: call func_080D3994()
 *   L_08011A24: if (<= (u)) goto L_08011A64
 *   L_08011A50: call func_080D3994()
 *   L_08011A64: if (< (u)) goto L_0801197E
 *   L_08011A70: call func_0800CE74(); if (>= (u)) goto L_08011B84
 *   L_08011A8E: call func_0800D3D0(); if (==) goto L_08011B78
 * ========================================================================== */
extern void func_0800C570(void);
extern void func_0800C894(void);
extern void func_0800CE74(void);
extern void func_0800D3D0(void);
extern void func_0800D3F8(void);
extern void func_0809B1F4(void);
extern void func_0809B514(void);
extern void func_080D3994(void);
extern void func_080D3B78(void);
void func_08011934(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, r7, lr}\n"
        "	mov r7, sl\n"
        "	mov r6, sb\n"
        "	mov r5, r8\n"
        "	push {r5, r6, r7}\n"
        "	sub sp, #0x2c\n"
        "	str r0, [sp, #8]\n"
        "	str r1, [sp, #0xc]\n"
        "	mov sb, r2\n"
        "	ldr r1, .Lpool_080119AC\n"
        "	mov r0, sp\n"
        "	mov r2, #3\n"
        "	bl func_080D3994\n"
        "	add r0, sp, #4\n"
        "	ldr r1, .Lpool_080119B0\n"
        "	mov r2, #2\n"
        "	bl func_080D3994\n"
        "	mov r0, #1\n"
        "	str r0, [sp, #0x10]\n"
        "	mov r1, #0\n"
        "	mov sl, r1\n"
        "	ldr r0, [sp, #8]\n"
        "	add r0, #0x8c\n"
        "	ldr r0, [r0]\n"
        "	mov r2, #0x82\n"
        "	lsl r2, r2, #3\n"
        "	add r0, r0, r2\n"
        "	bl func_0800C570\n"
        "	str r0, [sp, #0x14]\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #0x18]\n"
        "	ldr r1, [sp, #0x14]\n"
        "	cmp sl, r1\n"
        "	bhs _L_08011A70\n"
        "_L_0801197E:\n"
        "	ldr r0, [sp, #8]\n"
        "	add r0, #0x8c\n"
        "	ldr r0, [r0]\n"
        "	mov r2, #0x82\n"
        "	lsl r2, r2, #3\n"
        "	add r0, r0, r2\n"
        "	ldr r1, [sp, #0x18]\n"
        "	bl func_0800C894\n"
        "	add r7, r0, #0\n"
        "	cmp r7, #0\n"
        "	beq _L_08011A64\n"
        "	bl func_0809B514\n"
        "	ldr r1, [sp, #0xc]\n"
        "	cmp r0, r1\n"
        "	bne _L_08011A64\n"
        "	ldr r2, [sp, #0x10]\n"
        "	cmp r2, #0\n"
        "	beq _L_080119B4\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #0x10]\n"
        "	b _L_080119EA\n"
        ".Lpool_080119AC:\n"
        "	.word 0x080F0654\n"
        ".Lpool_080119B0:\n"
        "	.word 0x080F0658\n"
        "_L_080119B4:\n"
        "	ldr r1, .Lpool_08011ABC\n"
        "	mov r8, r1\n"
        "	mov r0, sb\n"
        "	bl func_080D3B78\n"
        "	mov r2, sb\n"
        "	add r6, r2, r0\n"
        "	ldr r1, .Lpool_08011AC0\n"
        "	sub r5, r1, r0\n"
        "	cmp r5, #0\n"
        "	beq _L_080119EA\n"
        "	mov r0, r8\n"
        "	bl func_080D3B78\n"
        "	add r4, r0, #0\n"
        "	cmp r4, r5\n"
        "	bls _L_080119D8\n"
        "	add r4, r5, #0\n"
        "_L_080119D8:\n"
        "	add r0, r6, #0\n"
        "	mov r1, r8\n"
        "	add r2, r4, #0\n"
        "	bl func_080D3994\n"
        "	add r0, r6, r4\n"
        "	mov r2, sp\n"
        "	ldrb r2, [r2, #0x10]\n"
        "	strb r2, [r0]\n"
        "_L_080119EA:\n"
        "	add r0, r7, #0\n"
        "	bl func_0809B1F4\n"
        "	add r7, r0, #0\n"
        "	add r4, r7, #0\n"
        "	mov r0, sb\n"
        "	bl func_080D3B78\n"
        "	mov r1, sb\n"
        "	add r6, r1, r0\n"
        "	ldr r2, .Lpool_08011AC0\n"
        "	sub r5, r2, r0\n"
        "	cmp r5, #0\n"
        "	beq _L_08011A24\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3B78\n"
        "	add r4, r0, #0\n"
        "	cmp r4, r5\n"
        "	bls _L_08011A14\n"
        "	add r4, r5, #0\n"
        "_L_08011A14:\n"
        "	add r0, r6, #0\n"
        "	add r1, r7, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080D3994\n"
        "	add r1, r6, r4\n"
        "	mov r0, #0\n"
        "	strb r0, [r1]\n"
        "_L_08011A24:\n"
        "	mov r0, #1\n"
        "	add sl, r0\n"
        "	mov r1, sl\n"
        "	cmp r1, #2\n"
        "	bls _L_08011A64\n"
        "	ldr r7, .Lpool_08011AC4\n"
        "	mov r0, sb\n"
        "	bl func_080D3B78\n"
        "	mov r2, sb\n"
        "	add r6, r2, r0\n"
        "	ldr r1, .Lpool_08011AC0\n"
        "	sub r5, r1, r0\n"
        "	cmp r5, #0\n"
        "	beq _L_08011A60\n"
        "	add r0, r7, #0\n"
        "	bl func_080D3B78\n"
        "	add r4, r0, #0\n"
        "	cmp r4, r5\n"
        "	bls _L_08011A50\n"
        "	add r4, r5, #0\n"
        "_L_08011A50:\n"
        "	add r0, r6, #0\n"
        "	add r1, r7, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080D3994\n"
        "	add r1, r6, r4\n"
        "	mov r0, #0\n"
        "	strb r0, [r1]\n"
        "_L_08011A60:\n"
        "	mov r2, #0\n"
        "	mov sl, r2\n"
        "_L_08011A64:\n"
        "	ldr r0, [sp, #0x18]\n"
        "	add r0, #1\n"
        "	str r0, [sp, #0x18]\n"
        "	ldr r1, [sp, #0x14]\n"
        "	cmp r0, r1\n"
        "	blo _L_0801197E\n"
        "_L_08011A70:\n"
        "	ldr r4, [sp, #8]\n"
        "	add r4, #0x8c\n"
        "	ldr r0, [r4]\n"
        "	mov r2, #0xbe\n"
        "	lsl r2, r2, #3\n"
        "	add r0, r0, r2\n"
        "	bl func_0800CE74\n"
        "	str r0, [sp, #0x1c]\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #0x20]\n"
        "	str r4, [sp, #0x28]\n"
        "	ldr r1, [sp, #0x1c]\n"
        "	cmp r0, r1\n"
        "	bhs _L_08011B84\n"
        "_L_08011A8E:\n"
        "	ldr r2, [sp, #0x28]\n"
        "	ldr r0, [r2]\n"
        "	mov r1, #0xbe\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r0, r1\n"
        "	ldr r1, [sp, #0x20]\n"
        "	bl func_0800D3D0\n"
        "	add r7, r0, #0\n"
        "	cmp r7, #0\n"
        "	beq _L_08011B78\n"
        "	bl func_0809B514\n"
        "	ldr r2, [sp, #0xc]\n"
        "	cmp r0, r2\n"
        "	bne _L_08011B78\n"
        "	ldr r0, [sp, #0x10]\n"
        "	cmp r0, #0\n"
        "	beq _L_08011AC8\n"
        "	mov r1, #0\n"
        "	str r1, [sp, #0x10]\n"
        "	b _L_08011AFE\n"
        "	.hword 0x0000\n"
        ".Lpool_08011ABC:\n"
        "	.word 0x080F0654\n"
        ".Lpool_08011AC0:\n"
        "	.word 0x00000383\n"
        ".Lpool_08011AC4:\n"
        "	.word 0x080F0658\n"
        "_L_08011AC8:\n"
        "	ldr r2, .Lpool_08011BBC\n"
        "	mov r8, r2\n"
        "	mov r0, sb\n"
        "	bl func_080D3B78\n"
        "	mov r1, sb\n"
        "	add r6, r1, r0\n"
        "	ldr r2, .Lpool_08011BC0\n"
        "	sub r5, r2, r0\n"
        "	cmp r5, #0\n"
        "	beq _L_08011AFE\n"
        "	mov r0, r8\n"
        "	bl func_080D3B78\n"
        "	add r4, r0, #0\n"
        "	cmp r4, r5\n"
        "	bls _L_08011AEC\n"
        "	add r4, r5, #0\n"
        "_L_08011AEC:\n"
        "	add r0, r6, #0\n"
        "	mov r1, r8\n"
        "	add r2, r4, #0\n"
        "	bl func_080D3994\n"
        "	add r0, r6, r4\n"
        "	mov r1, sp\n"
        "	ldrb r1, [r1, #0x10]\n"
        "	strb r1, [r0]\n"
        "_L_08011AFE:\n"
        "	add r0, r7, #0\n"
        "	bl func_0809B1F4\n"
        "	mov r8, r0\n"
        "	mov r6, r8\n"
        "	mov r0, sb\n"
        "	bl func_080D3B78\n"
        "	mov r2, sb\n"
        "	add r7, r2, r0\n"
        "	ldr r1, .Lpool_08011BC0\n"
        "	sub r5, r1, r0\n"
        "	cmp r5, #0\n"
        "	beq _L_08011B38\n"
        "	add r0, r6, #0\n"
        "	bl func_080D3B78\n"
        "	add r4, r0, #0\n"
        "	cmp r4, r5\n"
        "	bls _L_08011B28\n"
        "	add r4, r5, #0\n"
        "_L_08011B28:\n"
        "	add r0, r7, #0\n"
        "	mov r1, r8\n"
        "	add r2, r4, #0\n"
        "	bl func_080D3994\n"
        "	add r1, r7, r4\n"
        "	mov r0, #0\n"
        "	strb r0, [r1]\n"
        "_L_08011B38:\n"
        "	mov r2, #1\n"
        "	add sl, r2\n"
        "	mov r0, sl\n"
        "	cmp r0, #2\n"
        "	bls _L_08011B78\n"
        "	ldr r7, .Lpool_08011BC4\n"
        "	mov r0, sb\n"
        "	bl func_080D3B78\n"
        "	mov r1, sb\n"
        "	add r6, r1, r0\n"
        "	ldr r2, .Lpool_08011BC0\n"
        "	sub r5, r2, r0\n"
        "	cmp r5, #0\n"
        "	beq _L_08011B74\n"
        "	add r0, r7, #0\n"
        "	bl func_080D3B78\n"
        "	add r4, r0, #0\n"
        "	cmp r4, r5\n"
        "	bls _L_08011B64\n"
        "	add r4, r5, #0\n"
        "_L_08011B64:\n"
        "	add r0, r6, #0\n"
        "	add r1, r7, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080D3994\n"
        "	add r1, r6, r4\n"
        "	mov r0, #0\n"
        "	strb r0, [r1]\n"
        "_L_08011B74:\n"
        "	mov r0, #0\n"
        "	mov sl, r0\n"
        "_L_08011B78:\n"
        "	ldr r1, [sp, #0x20]\n"
        "	add r1, #1\n"
        "	str r1, [sp, #0x20]\n"
        "	ldr r2, [sp, #0x1c]\n"
        "	cmp r1, r2\n"
        "	blo _L_08011A8E\n"
        "_L_08011B84:\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #0x24]\n"
        "	ldr r1, [sp, #0x1c]\n"
        "	cmp r0, r1\n"
        "	bhs _L_08011C84\n"
        "_L_08011B8E:\n"
        "	ldr r2, [sp, #0x28]\n"
        "	ldr r0, [r2]\n"
        "	mov r1, #0xbe\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r0, r1\n"
        "	ldr r1, [sp, #0x24]\n"
        "	bl func_0800D3F8\n"
        "	add r7, r0, #0\n"
        "	cmp r7, #0\n"
        "	beq _L_08011C78\n"
        "	bl func_0809B514\n"
        "	ldr r2, [sp, #0xc]\n"
        "	cmp r0, r2\n"
        "	bne _L_08011C78\n"
        "	ldr r0, [sp, #0x10]\n"
        "	cmp r0, #0\n"
        "	beq _L_08011BC8\n"
        "	mov r1, #0\n"
        "	str r1, [sp, #0x10]\n"
        "	b _L_08011BFE\n"
        "	.hword 0x0000\n"
        ".Lpool_08011BBC:\n"
        "	.word 0x080F0654\n"
        ".Lpool_08011BC0:\n"
        "	.word 0x00000383\n"
        ".Lpool_08011BC4:\n"
        "	.word 0x080F0658\n"
        "_L_08011BC8:\n"
        "	ldr r2, .Lpool_08011CCC\n"
        "	mov r8, r2\n"
        "	mov r0, sb\n"
        "	bl func_080D3B78\n"
        "	mov r1, sb\n"
        "	add r6, r1, r0\n"
        "	ldr r2, .Lpool_08011CD0\n"
        "	sub r5, r2, r0\n"
        "	cmp r5, #0\n"
        "	beq _L_08011BFE\n"
        "	mov r0, r8\n"
        "	bl func_080D3B78\n"
        "	add r4, r0, #0\n"
        "	cmp r4, r5\n"
        "	bls _L_08011BEC\n"
        "	add r4, r5, #0\n"
        "_L_08011BEC:\n"
        "	add r0, r6, #0\n"
        "	mov r1, r8\n"
        "	add r2, r4, #0\n"
        "	bl func_080D3994\n"
        "	add r0, r6, r4\n"
        "	mov r1, sp\n"
        "	ldrb r1, [r1, #0x10]\n"
        "	strb r1, [r0]\n"
        "_L_08011BFE:\n"
        "	add r0, r7, #0\n"
        "	bl func_0809B1F4\n"
        "	mov r8, r0\n"
        "	mov r6, r8\n"
        "	mov r0, sb\n"
        "	bl func_080D3B78\n"
        "	mov r2, sb\n"
        "	add r7, r2, r0\n"
        "	ldr r1, .Lpool_08011CD0\n"
        "	sub r5, r1, r0\n"
        "	cmp r5, #0\n"
        "	beq _L_08011C38\n"
        "	add r0, r6, #0\n"
        "	bl func_080D3B78\n"
        "	add r4, r0, #0\n"
        "	cmp r4, r5\n"
        "	bls _L_08011C28\n"
        "	add r4, r5, #0\n"
        "_L_08011C28:\n"
        "	add r0, r7, #0\n"
        "	mov r1, r8\n"
        "	add r2, r4, #0\n"
        "	bl func_080D3994\n"
        "	add r1, r7, r4\n"
        "	mov r0, #0\n"
        "	strb r0, [r1]\n"
        "_L_08011C38:\n"
        "	mov r2, #1\n"
        "	add sl, r2\n"
        "	mov r0, sl\n"
        "	cmp r0, #2\n"
        "	bls _L_08011C78\n"
        "	ldr r7, .Lpool_08011CD4\n"
        "	mov r0, sb\n"
        "	bl func_080D3B78\n"
        "	mov r1, sb\n"
        "	add r6, r1, r0\n"
        "	ldr r2, .Lpool_08011CD0\n"
        "	sub r5, r2, r0\n"
        "	cmp r5, #0\n"
        "	beq _L_08011C74\n"
        "	add r0, r7, #0\n"
        "	bl func_080D3B78\n"
        "	add r4, r0, #0\n"
        "	cmp r4, r5\n"
        "	bls _L_08011C64\n"
        "	add r4, r5, #0\n"
        "_L_08011C64:\n"
        "	add r0, r6, #0\n"
        "	add r1, r7, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080D3994\n"
        "	add r1, r6, r4\n"
        "	mov r0, #0\n"
        "	strb r0, [r1]\n"
        "_L_08011C74:\n"
        "	mov r0, #0\n"
        "	mov sl, r0\n"
        "_L_08011C78:\n"
        "	ldr r1, [sp, #0x24]\n"
        "	add r1, #1\n"
        "	str r1, [sp, #0x24]\n"
        "	ldr r2, [sp, #0x1c]\n"
        "	cmp r1, r2\n"
        "	blo _L_08011B8E\n"
        "_L_08011C84:\n"
        "	mov r0, sl\n"
        "	cmp r0, #0\n"
        "	beq _L_08011CBC\n"
        "	ldr r7, .Lpool_08011CD4\n"
        "	mov r0, sb\n"
        "	bl func_080D3B78\n"
        "	mov r1, sb\n"
        "	add r6, r1, r0\n"
        "	ldr r1, .Lpool_08011CD0\n"
        "	sub r5, r1, r0\n"
        "	cmp r5, #0\n"
        "	beq _L_08011CBC\n"
        "	add r0, r7, #0\n"
        "	bl func_080D3B78\n"
        "	add r4, r0, #0\n"
        "	cmp r4, r5\n"
        "	bls _L_08011CAC\n"
        "	add r4, r5, #0\n"
        "_L_08011CAC:\n"
        "	add r0, r6, #0\n"
        "	add r1, r7, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080D3994\n"
        "	add r1, r6, r4\n"
        "	mov r0, #0\n"
        "	strb r0, [r1]\n"
        "_L_08011CBC:\n"
        "	add sp, #0x2c\n"
        "	pop {r3, r4, r5}\n"
        "	mov r8, r3\n"
        "	mov sb, r4\n"
        "	mov sl, r5\n"
        "	pop {r4, r5, r6, r7}\n"
        "	pop {r0}\n"
        "	bx r0\n"
        ".Lpool_08011CCC:\n"
        "	.word 0x080F0654\n"
        ".Lpool_08011CD0:\n"
        "	.word 0x00000383\n"
        ".Lpool_08011CD4:\n"
        "	.word 0x080F0658\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_08011CD8 @ 0x08011CD8 (236B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08011CD8 @ 0x08011CD8 (236 bytes)
 * Role   : C++ Class Constructor / Polymorphic Method [vtable: 0x080E5AD0, 0x080E5AE0, 0x080E5AF0, 0x080E5BB4, 0x080E5BD8, 0x080E5BE8]
 * Fields : +0x04:u32(W), +0x08:u32(RW), +0x0C:u32(W), +0x10:u32(RW), +0x14:u32(RW)
 * Callees: func_08008AE0, func_08008AF0, func_080098AC, func_080098DC, func_08009940, func_080D3914
 * CFG Structure:
 *   L_08011CD8: call func_08009940(); call func_08009940(); call func_08009940(); call func_08009940(); call func_08008AE0(); call _call_via_r2()
 * ========================================================================== */
extern void func_08008AE0(void);
extern void func_08008AF0(void);
extern void func_080098AC(void);
extern void func_080098DC(void);
extern void func_08009940(void);
extern void func_080D3914(void);
void func_08011CD8(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, lr}\n"
        "	mov r6, sb\n"
        "	mov r5, r8\n"
        "	push {r5, r6}\n"
        "	sub sp, #0x4c\n"
        "	add r5, r0, #0\n"
        "	add r3, r5, #0\n"
        "	add r3, #0x10\n"
        "	ldr r0, .Lpool_08011DAC\n"
        "	mov sb, r0\n"
        "	mov r2, #0\n"
        "	str r2, [sp]\n"
        "	str r2, [sp, #4]\n"
        "	ldr r0, .Lpool_08011DB0\n"
        "	str r0, [sp, #8]\n"
        "	str r3, [sp, #0xc]\n"
        "	add r0, sp, #0x10\n"
        "	mov r8, r0\n"
        "	str r2, [sp, #0x10]\n"
        "	str r2, [r0, #4]\n"
        "	ldr r0, .Lpool_08011DB4\n"
        "	str r0, [sp, #0x18]\n"
        "	str r1, [sp, #0x1c]\n"
        "	add r6, sp, #0x20\n"
        "	str r2, [sp, #0x20]\n"
        "	str r2, [r6, #4]\n"
        "	ldr r0, .Lpool_08011DB8\n"
        "	str r0, [sp, #0x28]\n"
        "	str r5, [sp, #0x2c]\n"
        "	add r4, sp, #0x30\n"
        "	str r2, [sp, #0x30]\n"
        "	str r2, [r4, #4]\n"
        "	ldr r0, .Lpool_08011DBC\n"
        "	str r0, [sp, #0x38]\n"
        "	add r1, sp, #0x40\n"
        "	str r1, [r4, #0xc]\n"
        "	mov r0, sb\n"
        "	str r0, [sp, #0x48]\n"
        "	str r2, [sp, #0x40]\n"
        "	str r2, [r1, #4]\n"
        "	ldr r0, .Lpool_08011DC0\n"
        "	str r0, [r1, #8]\n"
        "	add r0, sp, #0x3c\n"
        "	str r0, [r4, #0x10]\n"
        "	str r1, [r4, #0x14]\n"
        "	add r1, r5, #0\n"
        "	add r1, #0x6c\n"
        "	add r0, r4, #0\n"
        "	bl func_08009940\n"
        "	add r0, r4, #0\n"
        "	mov r1, sp\n"
        "	bl func_08009940\n"
        "	add r0, r4, #0\n"
        "	add r1, r6, #0\n"
        "	bl func_08009940\n"
        "	add r0, r4, #0\n"
        "	mov r1, r8\n"
        "	bl func_08009940\n"
        "	add r5, #0x68\n"
        "	add r0, r5, #0\n"
        "	bl func_08008AE0\n"
        "	ldr r1, [r0, #8]\n"
        "	ldr r2, [r1, #0x10]\n"
        "	add r1, r4, #0\n"
        "	bl func_080D3914\n"
        "	add r0, r5, #0\n"
        "	bl func_08008AF0\n"
        "	add r0, r5, #0\n"
        "	bl func_08008AE0\n"
        "	ldr r1, [r0, #8]\n"
        "	ldr r2, [r1, #0x14]\n"
        "	add r1, r4, #0\n"
        "	bl func_080D3914\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080098DC\n"
        "	add r0, r6, #0\n"
        "	mov r1, #2\n"
        "	bl func_080098AC\n"
        "	mov r0, r8\n"
        "	mov r1, #2\n"
        "	bl func_080098AC\n"
        "	mov r0, sp\n"
        "	mov r1, #2\n"
        "	bl func_080098AC\n"
        "	add sp, #0x4c\n"
        "	pop {r3, r4}\n"
        "	mov r8, r3\n"
        "	mov sb, r4\n"
        "	pop {r4, r5, r6}\n"
        "	pop {r0}\n"
        "	bx r0\n"
        "	.hword 0x0000\n"
        ".Lpool_08011DAC:\n"
        "	.word 0x080E5BE8\n"
        ".Lpool_08011DB0:\n"
        "	.word 0x080E5AF0\n"
        ".Lpool_08011DB4:\n"
        "	.word 0x080E5AE0\n"
        ".Lpool_08011DB8:\n"
        "	.word 0x080E5AD0\n"
        ".Lpool_08011DBC:\n"
        "	.word 0x080E5BB4\n"
        ".Lpool_08011DC0:\n"
        "	.word 0x080E5BD8\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_08011DC4 @ 0x08011DC4 (276B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08011DC4 @ 0x08011DC4 (276 bytes)
 * Role   : C++ Factory / Constructor with operator new (func_080005D4) [vtable: 0x080E5BB4, 0x080E5BD8, 0x080E5C08, 0x080E5E64]
 * Fields : +0x00:u16(W), +0x00:u32(RW), +0x00:u8(W), +0x04:u32(W), +0x08:u32(W), +0x0C:u32(W), +0x10:u32(W), +0x14:u16(RW), +0x14:u32(W), +0x6C:u32(W), +0x7C:u32(W)
 * Callees: func_080005D4, func_08008980, func_08008B54, func_080096B0, func_0803F8A0
 * CFG Structure:
 *   L_08011DC4: call func_080005D4(); call func_080096B0(); call func_08008980(); call func_08008B54(); call func_08008B54(); call func_08008B54()
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08008980(void);
extern void func_08008B54(void);
extern void func_080096B0(void);
extern void func_0803F8A0(void);
int func_08011DC4(void) {
    u32 sp0, sp1;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	mov r8, r1\n"
        "	add r5, r2, #0\n"
        "	ldr r0, =0x080E5E64\n"
        "	str r0, [r6]\n"
        "	mov r0, #0xf8\n"
        "	bl func_080005D4\n"
        "	add r7, r0, #0\n"
        "	add r1, r7, #0\n"
        "	add r1, #0xf4\n"
        "	ldr r0, =0x080E5C08\n"
        "	str r0, [r1]\n"
        "	mov r4, #0\n"
        "	str r4, [r7]\n"
        "	str r4, [r7, #4]\n"
        "	add r0, r7, #0\n"
        "	add r0, #8\n"
        "	str r4, [r0, #4]\n"
        "	add r0, #8\n"
        "	bl func_080096B0\n"
        "	add r0, r7, #0\n"
        "	add r0, #0x68\n"
        "	bl func_08008980\n"
        "	add r2, r7, #0\n"
        "	add r2, #0x6c\n"
        "	str r4, [r7, #0x6c]\n"
        "	str r4, [r2, #4]\n"
        "	ldr r0, =0x080E5BB4\n"
        "	str r0, [r2, #8]\n"
        "	add r1, r7, #0\n"
        "	add r1, #0x7c\n"
        "	str r1, [r2, #0xc]\n"
        "	str r4, [r7, #0x7c]\n"
        "	str r4, [r1, #4]\n"
        "	ldr r0, =0x080E5BD8\n"
        "	str r0, [r1, #8]\n"
        "	add r0, r7, #0\n"
        "	add r0, #0x78\n"
        "	str r0, [r2, #0x10]\n"
        "	str r1, [r2, #0x14]\n"
        "	add r0, #0x10\n"
        "	str r6, [r0]\n"
        "	add r0, #4\n"
        "	mov r1, r8\n"
        "	str r1, [r0]\n"
        "	add r0, #4\n"
        "	ldm r5!, {r1, r2, r3}\n"
        "	stm r0!, {r1, r2, r3}\n"
        "	add r0, r7, #0\n"
        "	add r0, #0xa0\n"
        "	str r4, [r0]\n"
        "	add r0, #4\n"
        "	str r4, [r0]\n"
        "	add r0, #4\n"
        "	str r4, [r0]\n"
        "	add r0, #4\n"
        "	str r4, [r0]\n"
        "	add r0, #4\n"
        "	str r4, [r0]\n"
        "	add r0, #4\n"
        "	str r4, [r0]\n"
        "	add r0, #4\n"
        "	str r4, [r0]\n"
        "	add r0, #4\n"
        "	mov r1, #0\n"
        "	bl func_08008B54\n"
        "	add r0, r7, #0\n"
        "	add r0, #0xc0\n"
        "	mov r1, #1\n"
        "	bl func_08008B54\n"
        "	add r0, r7, #0\n"
        "	add r0, #0xc4\n"
        "	mov r1, #2\n"
        "	bl func_08008B54\n"
        "	add r0, r7, #0\n"
        "	add r0, #0xc8\n"
        "	mov r1, #3\n"
        "	bl func_08008B54\n"
        "	add r0, r7, #0\n"
        "	add r0, #0xcc\n"
        "	mov r1, #4\n"
        "	bl func_08008B54\n"
        "	add r0, r7, #0\n"
        "	add r0, #0xd0\n"
        "	str r4, [r0]\n"
        "	str r4, [r0, #4]\n"
        "	add r0, #8\n"
        "	str r4, [r0, #4]\n"
        "	add r0, #0x10\n"
        "	strb r4, [r0]\n"
        "	add r0, #2\n"
        "	strb r4, [r0]\n"
        "	add r0, #6\n"
        "	str r4, [r0]\n"
        "	ldrh r0, [r7, #0x14]\n"
        "	mov r1, #8\n"
        "	orr r0, r1\n"
        "	strh r0, [r7, #0x14]\n"
        "	ldr r1, =0x04000004\n"
        "	strh r0, [r1]\n"
        "	str r7, [r6, #4]\n"
        "	ldr r0, =0x0300040C\n"
        "	ldr r0, [r0]\n"
        "	add r0, #8\n"
        "	add r1, r6, #0\n"
        "	bl func_0803F8A0\n"
        "	add r0, r6, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_08011ED8 @ 0x08011ED8 (272B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_08011ED8 @ 0x08011ED8 (272 bytes)
 * Role   : C++ Factory / Constructor with operator new (func_080005D4) [vtable: 0x080E5BB4, 0x080E5BD8, 0x080E5C08, 0x080E5E64]
 * Fields : +0x00:u16(W), +0x00:u32(RW), +0x00:u8(W), +0x04:u32(W), +0x08:u32(W), +0x0C:u32(W), +0x10:u32(W), +0x14:u16(RW), +0x14:u32(W), +0x6C:u32(W), +0x7C:u32(W)
 * Callees: func_080005D4, func_08008980, func_08008B54, func_080096B0, func_0803F8A0
 * CFG Structure:
 *   L_08011ED8: call func_080005D4(); call func_080096B0(); call func_08008980(); call func_08008B54(); call func_08008B54(); call func_08008B54()
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08008980(void);
extern void func_08008B54(void);
extern void func_080096B0(void);
extern void func_0803F8A0(void);
int func_08011ED8(void) {
    u32 sp0, sp1, sp2, sp3, sp4;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4));
    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	add r6, r1, #0\n"
        "	ldr r0, =0x080E5E64\n"
        "	str r0, [r5]\n"
        "	mov r0, #0xf8\n"
        "	bl func_080005D4\n"
        "	add r7, r0, #0\n"
        "	mov r0, #2\n"
        "	str r0, [sp]\n"
        "	add r1, r7, #0\n"
        "	add r1, #0xf4\n"
        "	ldr r0, =0x080E5C08\n"
        "	str r0, [r1]\n"
        "	mov r4, #0\n"
        "	str r4, [r7]\n"
        "	str r4, [r7, #4]\n"
        "	add r0, r7, #0\n"
        "	add r0, #8\n"
        "	str r4, [r0, #4]\n"
        "	add r0, #8\n"
        "	bl func_080096B0\n"
        "	add r0, r7, #0\n"
        "	add r0, #0x68\n"
        "	bl func_08008980\n"
        "	add r2, r7, #0\n"
        "	add r2, #0x6c\n"
        "	str r4, [r7, #0x6c]\n"
        "	str r4, [r2, #4]\n"
        "	ldr r0, =0x080E5BB4\n"
        "	str r0, [r2, #8]\n"
        "	add r1, r7, #0\n"
        "	add r1, #0x7c\n"
        "	str r1, [r2, #0xc]\n"
        "	str r4, [r7, #0x7c]\n"
        "	str r4, [r1, #4]\n"
        "	ldr r0, =0x080E5BD8\n"
        "	str r0, [r1, #8]\n"
        "	add r0, r7, #0\n"
        "	add r0, #0x78\n"
        "	str r0, [r2, #0x10]\n"
        "	str r1, [r2, #0x14]\n"
        "	add r0, #0x10\n"
        "	str r5, [r0]\n"
        "	add r0, #4\n"
        "	str r6, [r0]\n"
        "	add r1, #0x14\n"
        "	mov r0, sp\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	add r0, r7, #0\n"
        "	add r0, #0xa0\n"
        "	str r4, [r0]\n"
        "	add r0, #4\n"
        "	str r4, [r0]\n"
        "	add r0, #4\n"
        "	str r4, [r0]\n"
        "	add r0, #4\n"
        "	str r4, [r0]\n"
        "	add r0, #4\n"
        "	str r4, [r0]\n"
        "	add r0, #4\n"
        "	str r4, [r0]\n"
        "	add r0, #4\n"
        "	str r4, [r0]\n"
        "	add r0, #4\n"
        "	mov r1, #0\n"
        "	bl func_08008B54\n"
        "	add r0, r7, #0\n"
        "	add r0, #0xc0\n"
        "	mov r1, #1\n"
        "	bl func_08008B54\n"
        "	add r0, r7, #0\n"
        "	add r0, #0xc4\n"
        "	mov r1, #2\n"
        "	bl func_08008B54\n"
        "	add r0, r7, #0\n"
        "	add r0, #0xc8\n"
        "	mov r1, #3\n"
        "	bl func_08008B54\n"
        "	add r0, r7, #0\n"
        "	add r0, #0xcc\n"
        "	mov r1, #4\n"
        "	bl func_08008B54\n"
        "	add r0, r7, #0\n"
        "	add r0, #0xd0\n"
        "	str r4, [r0]\n"
        "	str r4, [r0, #4]\n"
        "	add r0, #8\n"
        "	str r4, [r0, #4]\n"
        "	add r0, #0x10\n"
        "	strb r4, [r0]\n"
        "	add r0, #2\n"
        "	strb r4, [r0]\n"
        "	add r0, #6\n"
        "	str r4, [r0]\n"
        "	ldrh r0, [r7, #0x14]\n"
        "	mov r1, #8\n"
        "	orr r0, r1\n"
        "	strh r0, [r7, #0x14]\n"
        "	ldr r1, =0x04000004\n"
        "	strh r0, [r1]\n"
        "	str r7, [r5, #4]\n"
        "	ldr r0, =0x0300040C\n"
        "	ldr r0, [r0]\n"
        "	add r0, #8\n"
        "	add r1, r5, #0\n"
        "	bl func_0803F8A0\n"
        "	add r0, r5, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_08011FE8 @ 0x08011FE8 (64B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080007EC();
extern u32 func_0803F8AC();
extern u32 func_080D3914();
/* paridad 97.1% preset agbcc_O2 */
void func_08011FE8(u32 *arg0,u32 arg1) {
  int val;
  *arg0 = 0x080E5E64;
  func_0803F8AC(*(u32 *)0x0300040C + 8);
  val = arg0[1];
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 0xf4) + 8));
  }
  func_080007EC(arg0,arg1);
}
