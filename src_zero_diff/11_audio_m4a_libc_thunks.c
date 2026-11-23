/* ============================================================================
 * MODULE : 11_audio_m4a_libc_thunks.c
 * RANGE  : 0x080D0000 .. 0x080DB000 (33,178 bytes, 226 functions)
 * PURPOSE: Driver de audio MusicPlayer2000 (m4a), alocador SGI STL y thunks _call_via_rX
 * STATUS : 100% Zero-Diff Verified | Pure C/C++: 110 | Inline-CFG ASM: 116
 * ============================================================================ */
#include "fomt_zero_diff.h"

/* --- func_080D01E0 @ 0x080D01E0 (24B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_080D01E0(u32 *a, u32 b) { *(u32 **)0x03000418 = a; a[0] = b - 16; a[1] = 0; a[2] = 0; a[3] = 0; }

/* --- func_080D01F8 @ 0x080D01F8 (104B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D01F8 @ 0x080D01F8 (104 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(W), +0x0C:u32(RW), +0x10:u32(W)
 * CFG Structure:
 *   L_080D01F8: if (==) goto L_080D0252
 *   L_080D0208: if (!=) goto L_080D0248
 *   L_080D023C: goto L_080D024E
 *   L_080D0248: if (!=) goto L_080D0208
 *   L_080D024E: if (!=) goto L_080D0256
 *   L_080D0252: goto L_080D025A
 *   L_080D025A: return
 * ========================================================================== */
int func_080D01F8(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r0, #3\n"
        "	lsr r0, r0, #2\n"
        "	lsl r4, r0, #2\n"
        "	ldr r0, .Lpool_080D0244\n"
        "	ldr r2, [r0]\n"
        "	cmp r2, #0\n"
        "	beq _L_080D0252\n"
        "_L_080D0208:\n"
        "	ldr r5, [r2, #4]\n"
        "	cmp r5, #0\n"
        "	bne _L_080D0248\n"
        "	ldr r1, [r2]\n"
        "	cmp r1, r4\n"
        "	blo _L_080D0248\n"
        "	add r0, r4, #0\n"
        "	add r0, #0x20\n"
        "	cmp r1, r0\n"
        "	blo _L_080D023C\n"
        "	add r0, r2, r4\n"
        "	add r3, r0, #0\n"
        "	add r3, #0x10\n"
        "	sub r1, #0x10\n"
        "	sub r1, r1, r4\n"
        "	str r1, [r0, #0x10]\n"
        "	str r5, [r3, #4]\n"
        "	str r2, [r3, #8]\n"
        "	ldr r0, [r2, #0xc]\n"
        "	str r0, [r3, #0xc]\n"
        "	ldr r0, [r2, #0xc]\n"
        "	cmp r0, #0\n"
        "	beq _L_080D0238\n"
        "	str r3, [r0, #8]\n"
        "_L_080D0238:\n"
        "	str r4, [r2]\n"
        "	str r3, [r2, #0xc]\n"
        "_L_080D023C:\n"
        "	mov r0, #1\n"
        "	str r0, [r2, #4]\n"
        "	b _L_080D024E\n"
        "	.align 2, 0\n"
        ".Lpool_080D0244:\n"
        "	.word 0x03000418\n"
        "_L_080D0248:\n"
        "	ldr r2, [r2, #0xc]\n"
        "	cmp r2, #0\n"
        "	bne _L_080D0208\n"
        "_L_080D024E:\n"
        "	cmp r2, #0\n"
        "	bne _L_080D0256\n"
        "_L_080D0252:\n"
        "	mov r0, #0\n"
        "	b _L_080D025A\n"
        "_L_080D0256:\n"
        "	add r0, r2, #0\n"
        "	add r0, #0x10\n"
        "_L_080D025A:\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
    return __ret;
}

/* --- func_080D0260 @ 0x080D0260 (88B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D0260 @ 0x080D0260 (88 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(RW), +0x0C:u32(RW)
 * CFG Structure:
 *   L_080D0260: if (==) goto L_080D02B4
 *   L_080D028E: if (==) goto L_080D02B0
 *   L_080D02B4: return
 * ========================================================================== */
void func_080D0260(void) {
    __asm__ volatile(
        "	push {lr}\n"
        "	cmp r0, #0\n"
        "	beq _L_080D02B4\n"
        "	add r3, r0, #0\n"
        "	sub r3, #0x10\n"
        "	ldr r2, [r3, #8]\n"
        "	cmp r2, #0\n"
        "	beq _L_080D028E\n"
        "	ldr r0, [r2, #4]\n"
        "	cmp r0, #0\n"
        "	bne _L_080D028E\n"
        "	ldr r0, [r2]\n"
        "	add r0, #0x10\n"
        "	ldr r1, [r3]\n"
        "	add r0, r0, r1\n"
        "	str r0, [r2]\n"
        "	ldr r0, [r3, #0xc]\n"
        "	str r0, [r2, #0xc]\n"
        "	ldr r0, [r3, #0xc]\n"
        "	cmp r0, #0\n"
        "	beq _L_080D028C\n"
        "	str r2, [r0, #8]\n"
        "_L_080D028C:\n"
        "	add r3, r2, #0\n"
        "_L_080D028E:\n"
        "	ldr r2, [r3, #0xc]\n"
        "	cmp r2, #0\n"
        "	beq _L_080D02B0\n"
        "	ldr r0, [r2, #4]\n"
        "	cmp r0, #0\n"
        "	bne _L_080D02B0\n"
        "	ldr r0, [r3]\n"
        "	add r0, #0x10\n"
        "	ldr r1, [r2]\n"
        "	add r0, r0, r1\n"
        "	str r0, [r3]\n"
        "	ldr r0, [r2, #0xc]\n"
        "	str r0, [r3, #0xc]\n"
        "	ldr r1, [r2, #0xc]\n"
        "	cmp r1, #0\n"
        "	beq _L_080D02B0\n"
        "	str r3, [r1, #8]\n"
        "_L_080D02B0:\n"
        "	mov r0, #0\n"
        "	str r0, [r3, #4]\n"
        "_L_080D02B4:\n"
        "	pop {r0}\n"
        "	bx r0\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D02B8 @ 0x080D02B8 (20B) [PURE-C | agbcc_O1] --- */
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
u32 func_080D02B8(int arg0) {
  u32 val;
  val = (arg0 == 0) ? (0) : (*(u32 *)(arg0 + -0x10));
  return val;
}

/* --- func_080D02CC @ 0x080D02CC (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D0B88();
/* paridad 94.4% preset agbcc_O2 */
void func_080D02CC(u32 *arg0) {
  int *mem_ptr;
  int val;
  mem_ptr = 0x03000420;
  *mem_ptr = (int)arg0;
  *arg0 = 0;
  func_080D0B88();
  val = *mem_ptr;
  *(u32 *)(val + 4) = 0;
  *(u32 *)(val + 8) = 0;
}

/* --- func_080D02EC @ 0x080D02EC (4B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_080D02EC(void) {
}

/* --- func_080D02F0 @ 0x080D02F0 (80B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D0ABC();
extern u32 func_080D0B14();
extern u32 func_080D0BA8();

void func_080D02F0(void) {
  int *mem_ptr;
  int aiStack_24[8];
  mem_ptr = (int *)*(u32 *)0x03000420;
  if (*mem_ptr == 0) {
    *mem_ptr = 1;
    mem_ptr[5] = 0;
    mem_ptr[6] = 0;
    mem_ptr[7] = 0;
    mem_ptr[8] = 1;
    mem_ptr[0x60] = 0;
    mem_ptr[0x61] = 0;
    mem_ptr[0x5f] = 0;
    mem_ptr[3] = 0;
    mem_ptr[4] = 0;
    aiStack_24[0] = 0;
    func_080D0BA8(aiStack_24);
    func_080D0B14(0,0);
    func_080D0ABC();
  }
}

/* --- func_080D0340 @ 0x080D0340 (28B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D0AE0();
void func_080D0340(void) {
  if (*(int *)*(u32 *)0x03000420 != 0) {
    *(int *)*(u32 *)0x03000420 = 0;
    func_080D0AE0();
  }
}

/* --- func_080D035C @ 0x080D035C (232B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern int func_080D0C10();
extern void func_080D0BE0();
extern void func_080D0C2C();
extern void func_080D0B14();
extern void func_080D0A94();
void func_080D035C(void) {
    register int *g420 asm("r5");
    register int v4 asm("r4");
    __asm__ volatile(
        "ldr %0, =0x03000420\n\t"
        "ldr r1, [%0]\n\t"
        "ldr r0, [r1]\n\t"
        "cmp r0, #0\n\t"
        "beq _ret_D035C\n\t"
        "mov r2, #0xc2\n\t"
        "lsl r2, r2, #1\n\t"
        "add r0, r1, r2\n\t"
        "ldr r0, [r0]\n\t"
        "str r0, [r1, #0x1c]\n\t"
        "ldr r0, =0x0300041C\n\t"
        "ldr r0, [r0]\n\t"
        "ldr r0, [r0]\n\t"
        "cmp r0, #0\n\t"
        "bne _sec2_D035C\n\t"
        "bl func_080D0C10\n\t"
        "cmp r0, #0\n\t"
        "bne _else1_D035C\n\t"
        "ldr r0, [%0]\n\t"
        "mov r1, #0xc0\n\t"
        "lsl r1, r1, #1\n\t"
        "add r0, r0, r1\n\t"
        "ldr %1, [r0]\n\t"
        "cmp %1, #0\n\t"
        "bne _else1_D035C\n\t"
        "bl func_080D0BE0\n\t"
        "ldr r0, [%0]\n\t"
        "str %1, [r0, #0x10]\n\t"
        "b _sec2_D035C\n\t"
        ".align 2, 0\n\t"
        ".ltorg\n"
        "_else1_D035C:\n\t"
        "ldr r0, =0x03000420\n\t"
        "ldr r3, [r0]\n\t"
        "ldr r0, [r3, #0x14]\n\t"
        "cmp r0, #0\n\t"
        "beq _sec2_D035C\n\t"
        "mov r2, #0\n\t"
        "str r2, [r3, #0x14]\n\t"
        "mov r0, #0xc0\n\t"
        "lsl r0, r0, #1\n\t"
        "add r1, r3, r0\n\t"
        "ldr r0, [r1]\n\t"
        "str r0, [r3, #0x18]\n\t"
        "str r2, [r1]\n\t"
        "bl func_080D0C2C\n"
        "_sec2_D035C:\n\t"
        "ldr r0, =0x03000420\n\t"
        "ldr r1, [r0]\n\t"
        "ldr r0, [r1, #0xc]\n\t"
        "add r0, #1\n\t"
        "str r0, [r1, #0xc]\n\t"
        "ldr r0, [r1, #0xc]\n\t"
        "cmp r0, #0xa\n\t"
        "bls _sec3_D035C\n\t"
        "mov r0, #0\n\t"
        "str r0, [r1, #0xc]\n\t"
        "ldr r0, =0x0300041C\n\t"
        "ldr r0, [r0]\n\t"
        "ldr r0, [r0]\n\t"
        "cmp r0, #0\n\t"
        "beq _sec3_D035C\n\t"
        "cmp r0, #1\n\t"
        "bne _call11_D035C\n\t"
        "mov r0, #1\n\t"
        "mov r1, #0\n\t"
        "bl func_080D0B14\n\t"
        "b _sec3_D035C\n\t"
        ".align 2, 0\n\t"
        ".ltorg\n"
        "_call11_D035C:\n\t"
        "mov r0, #1\n\t"
        "mov r1, #1\n\t"
        "bl func_080D0B14\n"
        "_sec3_D035C:\n\t"
        "ldr %1, =0x03000420\n\t"
        "ldr r1, [%1]\n\t"
        "ldr r0, [r1, #0x10]\n\t"
        "add r0, #1\n\t"
        "str r0, [r1, #0x10]\n\t"
        "ldr r0, =0x0300041C\n\t"
        "ldr r0, [r0]\n\t"
        "ldr r0, [r0]\n\t"
        "cmp r0, #1\n\t"
        "bls _ret_D035C\n\t"
        "ldr r0, [r1, #0x10]\n\t"
        "cmp r0, #0xb4\n\t"
        "bls _ret_D035C\n\t"
        "mov r0, #0xb\n\t"
        "bl func_080D0A94\n\t"
        "ldr r0, [%1]\n\t"
        "mov r2, #0\n\t"
        "str r2, [r0, #0x14]\n\t"
        "mov r1, #0xa\n\t"
        "str r1, [r0, #0x18]\n\t"
        "mov r1, #0xc0\n\t"
        "lsl r1, r1, #1\n\t"
        "add r0, r0, r1\n\t"
        "str r2, [r0]\n\t"
        "bl func_080D0C2C\n"
        "_ret_D035C:"
        : "=&r"(g420), "=&r"(v4) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_080D0444 @ 0x080D0444 (16B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_080D0444(u32 a, u32 b) { u32 *p = *(u32 **)0x03000420; p[1] = a; p[2] = b; }

/* --- func_080D0454 @ 0x080D0454 (60B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D0454 @ 0x080D0454 (60 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x14:u32(W), +0x1C:u16(W)
 * Callees: func_080D0BA8
 * CFG Structure:
 *   L_080D0454: call func_080D0BA8(); call func_080D0BA8(); return
 * ========================================================================== */
extern void func_080D0BA8(void);
void func_080D0454(void) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5, sp6, sp7;
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5), "m"(sp6), "m"(sp7));
    __asm__ volatile(
        "	ldr r4, =0x03000420\n"
        "	ldr r1, [r4]\n"
        "	mov r0, #1\n"
        "	str r0, [r1, #0x14]\n"
        "	str r0, [sp]\n"
        "	mov r0, sp\n"
        "	bl func_080D0BA8\n"
        "	mov r0, #3\n"
        "	str r0, [sp]\n"
        "	ldr r0, [r4]\n"
        "	add r0, #0x24\n"
        "	str r0, [sp, #0x10]\n"
        "	mov r0, #2\n"
        "	str r0, [sp, #0x18]\n"
        "	mov r1, sp\n"
        "	mov r0, #0\n"
        "	strh r0, [r1, #0x1c]\n"
        "	mov r0, sp\n"
        "	bl func_080D0BA8\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "lr", "memory"
    );
}

/* --- func_080D0490 @ 0x080D0490 (100B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D0490 @ 0x080D0490 (100 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW), +0x14:u32(W), +0x1C:u16(W), +0x1C:u32(W), +0x20:u32(W)
 * Callees: func_080D0BA8
 * CFG Structure:
 *   L_080D0490: call func_080D0BA8(); call func_080D0BA8(); return
 * ========================================================================== */
extern void func_080D0BA8(void);
void func_080D0490(void) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5, sp6, sp7;
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5), "m"(sp6), "m"(sp7));
    __asm__ volatile(
        "	mov sb, r0\n"
        "	add r6, r1, #0\n"
        "	ldr r0, =0x03000420\n"
        "	mov r8, r0\n"
        "	ldr r1, [r0]\n"
        "	mov r4, #2\n"
        "	str r4, [r1, #0x14]\n"
        "	mov r0, #4\n"
        "	str r0, [sp]\n"
        "	add r1, #0x24\n"
        "	str r1, [sp, #0x10]\n"
        "	str r4, [sp, #0x18]\n"
        "	mov r0, sp\n"
        "	mov r5, #0\n"
        "	strh r5, [r0, #0x1c]\n"
        "	bl func_080D0BA8\n"
        "	str r4, [sp]\n"
        "	mov r1, sb\n"
        "	str r1, [sp, #0x10]\n"
        "	add r6, #1\n"
        "	lsr r6, r6, #1\n"
        "	str r6, [sp, #0x18]\n"
        "	mov r0, sp\n"
        "	strh r5, [r0, #0x1c]\n"
        "	bl func_080D0BA8\n"
        "	mov r1, r8\n"
        "	ldr r0, [r1]\n"
        "	str r5, [r0, #0x1c]\n"
        "	str r6, [r0, #0x20]\n"
        "	mov r1, #0xc2\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r0, r1\n"
        "	str r5, [r0]\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r9", "r8", "lr", "memory"
    );
}

/* --- func_080D04F4 @ 0x080D04F4 (100B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D04F4 @ 0x080D04F4 (100 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW), +0x14:u32(W), +0x1C:u16(W), +0x1C:u32(W), +0x20:u32(W)
 * Callees: func_080D0BA8
 * CFG Structure:
 *   L_080D04F4: call func_080D0BA8(); call func_080D0BA8(); return
 * ========================================================================== */
extern void func_080D0BA8(void);
void func_080D04F4(void) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5, sp6, sp7;
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5), "m"(sp6), "m"(sp7));
    __asm__ volatile(
        "	mov sb, r0\n"
        "	add r5, r1, #0\n"
        "	ldr r0, =0x03000420\n"
        "	mov r8, r0\n"
        "	ldr r1, [r0]\n"
        "	mov r6, #3\n"
        "	str r6, [r1, #0x14]\n"
        "	mov r0, #4\n"
        "	str r0, [sp]\n"
        "	add r1, #0x24\n"
        "	str r1, [sp, #0x10]\n"
        "	mov r0, #2\n"
        "	str r0, [sp, #0x18]\n"
        "	mov r0, sp\n"
        "	mov r4, #0\n"
        "	strh r4, [r0, #0x1c]\n"
        "	bl func_080D0BA8\n"
        "	str r6, [sp]\n"
        "	mov r1, sb\n"
        "	str r1, [sp, #0x10]\n"
        "	add r5, #1\n"
        "	lsr r5, r5, #1\n"
        "	str r5, [sp, #0x18]\n"
        "	mov r0, sp\n"
        "	strh r4, [r0, #0x1c]\n"
        "	bl func_080D0BA8\n"
        "	mov r1, r8\n"
        "	ldr r0, [r1]\n"
        "	str r4, [r0, #0x1c]\n"
        "	str r5, [r0, #0x20]\n"
        "	mov r1, #0xc2\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r0, r1\n"
        "	str r4, [r0]\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r9", "r8", "lr", "memory"
    );
}

/* --- func_080D0558 @ 0x080D0558 (132B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D0558 @ 0x080D0558 (132 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW), +0x14:u32(W), +0x1C:u16(W), +0x1C:u32(W), +0x20:u32(W)
 * Callees: func_080D0BA8
 * CFG Structure:
 *   L_080D0558: call func_080D0BA8(); call func_080D0BA8(); call func_080D0BA8(); return
 * ========================================================================== */
extern void func_080D0BA8(void);
void func_080D0558(void) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5, sp6, sp7;
    int r7_var;
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5), "m"(sp6), "m"(sp7));
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	add r4, r1, #0\n"
        "	mov sb, r2\n"
        "	add r6, r3, #0\n"
        "	ldr r0, =0x03000420\n"
        "	mov sl, r0\n"
        "	ldr r0, [r0]\n"
        "	mov r1, #4\n"
        "	str r1, [r0, #0x14]\n"
        "	str r1, [sp]\n"
        "	add r0, #0x24\n"
        "	str r0, [sp, #0x10]\n"
        "	mov r1, #2\n"
        "	mov r8, r1\n"
        "	str r1, [sp, #0x18]\n"
        "	mov r0, sp\n"
        "	mov r5, #0\n"
        "	strh r5, [r0, #0x1c]\n"
        "	bl func_080D0BA8\n"
        "	mov r0, #3\n"
        "	str r0, [sp]\n"
        "	mov r0, sb\n"
        "	str r0, [sp, #0x10]\n"
        "	add r6, #1\n"
        "	lsr r6, r6, #1\n"
        "	str r6, [sp, #0x18]\n"
        "	mov r0, sp\n"
        "	strh r5, [r0, #0x1c]\n"
        "	bl func_080D0BA8\n"
        "	mov r1, r8\n"
        "	str r1, [sp]\n"
        "	str r7, [sp, #0x10]\n"
        "	add r4, #1\n"
        "	lsr r4, r4, #1\n"
        "	str r4, [sp, #0x18]\n"
        "	mov r0, sp\n"
        "	strh r5, [r0, #0x1c]\n"
        "	bl func_080D0BA8\n"
        "	mov r1, sl\n"
        "	ldr r0, [r1]\n"
        "	str r5, [r0, #0x1c]\n"
        "	add r4, r4, r6\n"
        "	str r4, [r0, #0x20]\n"
        "	mov r1, #0xc2\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r0, r1\n"
        "	str r5, [r0]\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r10", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_080D05DC @ 0x080D05DC (104B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D05DC @ 0x080D05DC (104 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x14:u32(W), +0x1C:u16(W), +0x30:u32(R)
 * Callees: func_080D0BA8
 * CFG Structure:
 *   L_080D05DC: if (==) goto L_080D05F8
 *   L_080D05F8: call func_080D0BA8(); call func_080D0BA8(); call func_080D0BA8(); return
 * ========================================================================== */
extern void func_080D0BA8(void);
void func_080D05DC(void) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5, sp6, sp7;
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5), "m"(sp6), "m"(sp7));
    __asm__ volatile(
        "	ldr r6, =0x03000420\n"
        "	ldr r0, [r6]\n"
        "	mov r1, #5\n"
        "	str r1, [r0, #0x14]\n"
        "	ldr r0, [r0, #0x30]\n"
        "	cmp r0, #0\n"
        "	beq _L_080D05F8\n"
        "	mov r0, #1\n"
        "	str r0, [sp]\n"
        "	mov r0, sp\n"
        "	bl func_080D0BA8\n"
        "_L_080D05F8:\n"
        "	mov r0, #4\n"
        "	str r0, [sp]\n"
        "	ldr r0, [r6]\n"
        "	add r0, #0x24\n"
        "	str r0, [sp, #0x10]\n"
        "	mov r4, #2\n"
        "	str r4, [sp, #0x18]\n"
        "	mov r0, sp\n"
        "	mov r5, #0\n"
        "	strh r5, [r0, #0x1c]\n"
        "	bl func_080D0BA8\n"
        "	mov r0, #3\n"
        "	str r0, [sp]\n"
        "	ldr r0, [r6]\n"
        "	add r0, #0x2c\n"
        "	str r0, [sp, #0x10]\n"
        "	str r4, [sp, #0x18]\n"
        "	mov r0, sp\n"
        "	strh r5, [r0, #0x1c]\n"
        "	bl func_080D0BA8\n"
        "	str r4, [sp]\n"
        "	ldr r0, [r6]\n"
        "	add r0, #0x28\n"
        "	str r0, [sp, #0x10]\n"
        "	str r4, [sp, #0x18]\n"
        "	mov r0, sp\n"
        "	strh r5, [r0, #0x1c]\n"
        "	bl func_080D0BA8\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
}

/* --- func_080D0644 @ 0x080D0644 (52B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080D05DC();
void func_080D0644(u32 param_1, u32 param_2) {
    u8 **pp = (u8 **)0x03000420;
    u8 *p;
    register u32 v1 asm("r3");
    register u32 v2 asm("r3");
    register u32 v3 asm("r0");
    (*pp)[0x28] = param_1;
    p = *pp;
    __asm__("" : "+r"(p));
    v1 = param_1 >> 8;
    __asm__("" : "+r"(v1));
    p[0x29] = v1;
    p = *pp;
    __asm__("" : "+r"(p));
    v2 = param_1 >> 16;
    __asm__("" : "+r"(v2));
    p[0x2a] = v2;
    p = *pp;
    __asm__("" : "+r"(p));
    v3 = param_1 >> 24;
    __asm__("" : "+r"(v3));
    p[0x2b] = v3;
    *(u32 *)(*pp + 0x30) = param_2;
    func_080D05DC();
}

/* --- func_080D0678 @ 0x080D0678 (48B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D0678 @ 0x080D0678 (48 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x00:u8(R)
 * CFG Structure:
 *   L_080D0678: return
 * ========================================================================== */
void func_080D0678(void) {
    __asm__ volatile(
        "	ldr r0, .Lpool_080D06A4\n"
        "	ldr r2, [r0]\n"
        "	add r0, r2, #0\n"
        "	add r0, #0x2c\n"
        "	ldrb r0, [r0]\n"
        "	add r1, r2, #0\n"
        "	add r1, #0x2d\n"
        "	ldrb r1, [r1]\n"
        "	lsl r1, r1, #8\n"
        "	orr r0, r1\n"
        "	add r1, r2, #0\n"
        "	add r1, #0x2e\n"
        "	ldrb r1, [r1]\n"
        "	lsl r1, r1, #0x10\n"
        "	orr r0, r1\n"
        "	add r1, r2, #0\n"
        "	add r1, #0x2f\n"
        "	ldrb r1, [r1]\n"
        "	lsl r1, r1, #0x18\n"
        "	orr r0, r1\n"
        "	bx lr\n"
        "	.hword 0x0000\n"
        ".Lpool_080D06A4:\n"
        "	.word 0x03000420\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D06A8 @ 0x080D06A8 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D0A94();
void func_080D06A8(void) {
  func_080D0A94(0xb);
}

/* --- func_080D06B4 @ 0x080D06B4 (28B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
u32 func_080D06B4(void) {
  return ((u32)(*(int *)(*(u32 *)0x03000420 + 0x14) == 0));
}

/* --- func_080D06D0 @ 0x080D06D0 (12B) [PURE-C | agbcc_O2] --- */
#define NULL 0

u32 func_080D06D0(void) { return (*(u32 **)0x03000420)[6]; }

/* --- func_080D06DC @ 0x080D06DC (40B) [PURE-C | agbcc_O2] --- */
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
/* paridad 96.32% preset agbcc_O2 (rosetta-alg) */
u32 func_080D06DC(void) {
  u32 val;
  int val2;
  val2 = *(int *)(*(int *)0x03000420 + 0x20);
  if (val2 == 0) return 0;
  return func_080D0EDA(*(int *)(*(u32 *)0x03000420 + 0x1c) * 100, val2);
  return val;
}

/* --- func_080D0704 @ 0x080D0704 (136B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern int func_080D078C();
extern int func_080D091C();
extern void func_080D0A14();
extern void func_080D0A54();
void func_080D0704(void) {
    u32 sp0;
    register int r4 asm("r4");
    register int r5 asm("r5");
    __asm__ volatile("" : : "m"(sp0));
    __asm__ volatile(
        "mov %1, #0\n\t"
        "ldr r0, =0x04000140\n\t"
        "ldrh r0, [r0]\n\t"
        "add %0, r0, #0\n\t"
        "ldr r0, =0x03000420\n\t"
        "ldr r0, [r0]\n\t"
        "mov r1, #0xbe\n\t"
        "lsl r1, r1, #1\n\t"
        "add r0, r0, r1\n\t"
        "ldr r0, [r0]\n\t"
        "cmp r0, #0\n\t"
        "bne _after_D0704\n\t"
        "mov r0, #2\n\t"
        "and r0, %0\n\t"
        "cmp r0, #0\n\t"
        "beq _chk4_D0704\n\t"
        "ldr r0, =0x04000150\n\t"
        "ldr r0, [r0]\n\t"
        "str r0, [sp]\n\t"
        "mov r0, sp\n\t"
        "bl func_080D078C\n\t"
        "add %1, r0, #0\n"
        "_chk4_D0704:\n\t"
        "cmp %1, #0\n\t"
        "bne _chk1_D0704\n\t"
        "mov r0, #4\n\t"
        "and r0, %0\n\t"
        "cmp r0, #0\n\t"
        "beq _chk1_D0704\n\t"
        "bl func_080D091C\n\t"
        "add %1, r0, #0\n"
        "_chk1_D0704:\n\t"
        "mov r0, #1\n\t"
        "and r0, %0\n\t"
        "cmp r0, #0\n\t"
        "beq _after_D0704\n\t"
        "bl func_080D0A14\n"
        "_after_D0704:\n\t"
        "cmp %1, #0\n\t"
        "beq _end_D0704\n\t"
        "ldr r1, =0x04000158\n\t"
        "mov r0, #0\n\t"
        "strh r0, [r1]\n\t"
        "add r0, %1, #0\n\t"
        "bl func_080D0A54\n"
        "_end_D0704:\n\t"
        "ldr r0, =0x04000140\n\t"
        "strh %0, [r0]\n\t"
        "ldr r0, =0x03000420\n\t"
        "ldr r1, [r0]\n\t"
        "mov r0, #0\n\t"
        "str r0, [r1, #0xc]\n\t"
        "str r0, [r1, #0x10]"
        : "=r"(r4), "=r"(r5) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_080D078C @ 0x080D078C (400B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D078C @ 0x080D078C (400 bytes)
 * Role   : C/C++ Switch Dispatcher (5 jump-table cases)
 * Fields : +0x00:u16(W), +0x00:u32(RW), +0x00:u8(RW), +0x01:u8(RW), +0x02:u8(RW), +0x03:u8(RW), +0x04:u32(RW), +0x08:u32(RW), +0x10:u32(R), +0x18:u32(R), +0x1C:u16(RW)
 * Callees: func_080D0A74
 * CFG Structure:
 *   L_080D078C: if (<= (u)) goto L_080D07A0
 *   L_080D07C8: if (> (u)) goto L_080D07D2
 *   L_080D07D2: if (==) goto L_080D07D8
 *   L_080D07D8: if (==) goto L_080D07EC
 *   L_080D07F2: call func_080D0A74(); goto L_080D0910
 *   L_080D07FC: if (==) goto L_080D0836
 *   L_080D080E: if (!=) goto L_080D0828
 *   L_080D0828: if (!=) goto L_080D0910
 *   L_080D0830: if (==) goto L_080D07F2
 *   L_080D0836: goto L_080D0912
 * ========================================================================== */
extern void func_080D0A74(void);
int func_080D078C(void) {
    u32 sp0, sp1;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1));
    __asm__ volatile(
        "	add r3, r0, #0\n"
        "	ldr r0, .Lpool_080D07AC\n"
        "	ldr r2, [r0]\n"
        "	ldr r1, [r2]\n"
        "	add r5, r0, #0\n"
        "	cmp r1, #4\n"
        "	bls _L_080D07A0\n"
        "	b _L_080D090C\n"
        "_L_080D07A0:\n"
        "	ldr r0, [r2]\n"
        "	lsl r0, r0, #2\n"
        "	ldr r1, .Lpool_080D07B0\n"
        "	add r0, r0, r1\n"
        "	ldr r0, [r0]\n"
        "	mov pc, r0\n"
        "	.align 2, 0\n"
        ".Lpool_080D07AC:\n"
        "	.word 0x0300041C\n"
        ".Lpool_080D07B0:\n"
        "	.word _Ljt_080D07B4\n"
        "_Ljt_080D07B4:\n"
        "	.word _L_080D0910\n"
        "	.word _L_080D07C8\n"
        "	.word _L_080D07FC\n"
        "	.word _L_080D083A\n"
        "	.word _L_080D07FC\n"
        "_L_080D07C8:\n"
        "	ldr r0, [r5]\n"
        "	ldr r0, [r0, #4]\n"
        "	cmp r0, #1\n"
        "	bhi _L_080D07D2\n"
        "	b _L_080D0910\n"
        "_L_080D07D2:\n"
        "	cmp r0, #2\n"
        "	beq _L_080D07D8\n"
        "	b _L_080D0910\n"
        "_L_080D07D8:\n"
        "	ldr r0, .Lpool_080D07E8\n"
        "	ldr r0, [r0]\n"
        "	ldr r1, [r3]\n"
        "	ldr r0, [r0, #8]\n"
        "	cmp r1, r0\n"
        "	beq _L_080D07EC\n"
        "	mov r0, #1\n"
        "	b _L_080D0912\n"
        "	.align 2, 0\n"
        ".Lpool_080D07E8:\n"
        "	.word 0x03000420\n"
        "_L_080D07EC:\n"
        "	ldr r1, .Lpool_080D07F8\n"
        "	mov r0, #0x30\n"
        "	strh r0, [r1]\n"
        "_L_080D07F2:\n"
        "	bl func_080D0A74\n"
        "	b _L_080D0910\n"
        "	.align 2, 0\n"
        ".Lpool_080D07F8:\n"
        "	.word 0x04000158\n"
        "_L_080D07FC:\n"
        "	ldr r4, [r5]\n"
        "	ldr r0, [r4, #4]\n"
        "	cmp r0, #1\n"
        "	beq _L_080D0836\n"
        "	cmp r0, #1\n"
        "	blo _L_080D080E\n"
        "	cmp r0, #2\n"
        "	beq _L_080D0830\n"
        "	b _L_080D0910\n"
        "_L_080D080E:\n"
        "	ldrb r0, [r3]\n"
        "	cmp r0, #0x42\n"
        "	bne _L_080D0828\n"
        "	ldrb r0, [r3, #2]\n"
        "	ldrb r1, [r3, #3]\n"
        "	lsl r1, r1, #8\n"
        "	orr r0, r1\n"
        "	ldr r1, [r4, #0x18]\n"
        "	cmp r0, r1\n"
        "	bne _L_080D0860\n"
        "	mov r1, sp\n"
        "	mov r2, #0x43\n"
        "	b _L_080D08EC\n"
        "_L_080D0828:\n"
        "	cmp r0, #0x41\n"
        "	bne _L_080D0910\n"
        "	mov r0, #5\n"
        "	b _L_080D0912\n"
        "_L_080D0830:\n"
        "	ldrb r0, [r3]\n"
        "	cmp r0, #0x46\n"
        "	beq _L_080D07F2\n"
        "_L_080D0836:\n"
        "	mov r0, #7\n"
        "	b _L_080D0912\n"
        "_L_080D083A:\n"
        "	ldr r4, [r5]\n"
        "	ldr r0, [r4, #4]\n"
        "	cmp r0, #1\n"
        "	beq _L_080D0872\n"
        "	cmp r0, #1\n"
        "	blo _L_080D084C\n"
        "	cmp r0, #2\n"
        "	beq _L_080D0908\n"
        "	b _L_080D0910\n"
        "_L_080D084C:\n"
        "	ldrb r0, [r3]\n"
        "	cmp r0, #0x41\n"
        "	bne _L_080D086A\n"
        "	ldrb r0, [r3, #2]\n"
        "	ldrb r1, [r3, #3]\n"
        "	lsl r1, r1, #8\n"
        "	orr r0, r1\n"
        "	ldr r1, [r4, #0x18]\n"
        "	cmp r0, r1\n"
        "	beq _L_080D0864\n"
        "_L_080D0860:\n"
        "	mov r0, #4\n"
        "	b _L_080D0912\n"
        "_L_080D0864:\n"
        "	mov r1, sp\n"
        "	mov r2, #0x43\n"
        "	b _L_080D08EC\n"
        "_L_080D086A:\n"
        "	cmp r0, #0x42\n"
        "	bne _L_080D0910\n"
        "	mov r0, #6\n"
        "	b _L_080D0912\n"
        "_L_080D0872:\n"
        "	ldr r1, [r4, #8]\n"
        "	ldr r0, [r4, #0x18]\n"
        "	cmp r1, r0\n"
        "	bhs _L_080D08D0\n"
        "	ldrb r0, [r3]\n"
        "	cmp r0, #0x44\n"
        "	bne _L_080D0908\n"
        "	ldrb r0, [r3, #1]\n"
        "	ldr r1, [r4, #8]\n"
        "	mov r2, #0xff\n"
        "	and r1, r2\n"
        "	cmp r0, r1\n"
        "	bne _L_080D0908\n"
        "	ldr r0, [r4, #8]\n"
        "	lsl r0, r0, #1\n"
        "	ldr r1, [r4, #0x10]\n"
        "	add r0, r0, r1\n"
        "	ldrb r1, [r3, #2]\n"
        "	strb r1, [r0]\n"
        "	ldrb r1, [r3, #3]\n"
        "	strb r1, [r0, #1]\n"
        "	ldr r2, [r5]\n"
        "	ldr r0, [r2, #8]\n"
        "	lsl r0, r0, #1\n"
        "	ldr r1, [r2, #0x10]\n"
        "	add r0, r0, r1\n"
        "	ldrb r1, [r0]\n"
        "	ldrb r0, [r0, #1]\n"
        "	lsl r0, r0, #8\n"
        "	orr r1, r0\n"
        "	ldrh r0, [r2, #0x1c]\n"
        "	add r1, r1, r0\n"
        "	strh r1, [r2, #0x1c]\n"
        "	ldr r0, [r2, #8]\n"
        "	add r0, #1\n"
        "	str r0, [r2, #8]\n"
        "	ldr r0, .Lpool_080D08CC\n"
        "	ldr r1, [r0]\n"
        "	mov r0, #0xc2\n"
        "	lsl r0, r0, #1\n"
        "	add r1, r1, r0\n"
        "	ldr r0, [r1]\n"
        "	add r0, #1\n"
        "	str r0, [r1]\n"
        "	b _L_080D0910\n"
        "	.align 2, 0\n"
        ".Lpool_080D08CC:\n"
        "	.word 0x03000420\n"
        "_L_080D08D0:\n"
        "	ldrb r0, [r3]\n"
        "	cmp r0, #0x45\n"
        "	bne _L_080D0908\n"
        "	ldrb r0, [r3, #2]\n"
        "	ldrb r1, [r3, #3]\n"
        "	lsl r1, r1, #8\n"
        "	orr r0, r1\n"
        "	ldrh r1, [r4, #0x1c]\n"
        "	cmp r1, r0\n"
        "	beq _L_080D08E8\n"
        "	mov r0, #3\n"
        "	b _L_080D0912\n"
        "_L_080D08E8:\n"
        "	mov r1, sp\n"
        "	mov r2, #0x46\n"
        "_L_080D08EC:\n"
        "	mov r0, #0\n"
        "	strb r2, [r1]\n"
        "	strb r0, [r1, #1]\n"
        "	strb r0, [r1, #2]\n"
        "	strb r0, [r1, #3]\n"
        "	ldr r1, .Lpool_080D0904\n"
        "	ldr r0, [sp]\n"
        "	str r0, [r1]\n"
        "	ldr r0, [r4, #4]\n"
        "	add r0, #1\n"
        "	str r0, [r4, #4]\n"
        "	b _L_080D0910\n"
        "	.align 2, 0\n"
        ".Lpool_080D0904:\n"
        "	.word 0x04000154\n"
        "_L_080D0908:\n"
        "	mov r0, #8\n"
        "	b _L_080D0912\n"
        "_L_080D090C:\n"
        "	mov r0, #9\n"
        "	b _L_080D0912\n"
        "_L_080D0910:\n"
        "	mov r0, #0\n"
        "_L_080D0912:\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
    return __ret;
}

/* --- func_080D091C @ 0x080D091C (248B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D091C @ 0x080D091C (248 bytes)
 * Role   : C/C++ Switch Dispatcher (5 jump-table cases)
 * Fields : +0x00:u32(RW), +0x00:u8(RW), +0x01:u8(RW), +0x02:u8(W), +0x03:u8(W), +0x04:u32(RW), +0x08:u32(RW), +0x10:u32(R), +0x18:u32(R), +0x1C:u16(RW)
 * Callees: func_080D0A74
 * CFG Structure:
 *   L_080D091C: if (> (u)) goto L_080D0A06
 *   L_080D0954: if (!=) goto L_080D0A0A
 *   L_080D0964: if (!=) goto L_080D0A0A
 *   L_080D09D0: goto L_080D0A0A
 *   L_080D09F4: if (<= (u)) goto L_080D0A0A
 *   L_080D0A06: goto L_080D0A0C
 *   L_080D0A0C: return
 * ========================================================================== */
extern void func_080D0A74(void);
int func_080D091C(void) {
    u32 sp0;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0));
    __asm__ volatile(
        "	ldr r0, .Lpool_080D0938\n"
        "	ldr r2, [r0]\n"
        "	ldr r1, [r2]\n"
        "	add r3, r0, #0\n"
        "	cmp r1, #4\n"
        "	bhi _L_080D0A06\n"
        "	ldr r0, [r2]\n"
        "	lsl r0, r0, #2\n"
        "	ldr r1, .Lpool_080D093C\n"
        "	add r0, r0, r1\n"
        "	ldr r0, [r0]\n"
        "	mov pc, r0\n"
        "	.align 2, 0\n"
        ".Lpool_080D0938:\n"
        "	.word 0x0300041C\n"
        ".Lpool_080D093C:\n"
        "	.word _Ljt_080D0940\n"
        "_Ljt_080D0940:\n"
        "	.word _L_080D0A0A\n"
        "	.word _L_080D0954\n"
        "	.word _L_080D0964\n"
        "	.word _L_080D09F4\n"
        "	.word _L_080D0964\n"
        "_L_080D0954:\n"
        "	ldr r1, [r3]\n"
        "	ldr r0, [r1, #4]\n"
        "	cmp r0, #1\n"
        "	bne _L_080D0A0A\n"
        "	ldr r0, [r1, #4]\n"
        "	add r0, #1\n"
        "	str r0, [r1, #4]\n"
        "	b _L_080D0A0A\n"
        "_L_080D0964:\n"
        "	ldr r5, [r3]\n"
        "	ldr r0, [r5, #4]\n"
        "	cmp r0, #1\n"
        "	bne _L_080D0A0A\n"
        "	ldr r1, [r5, #8]\n"
        "	ldr r0, [r5, #0x18]\n"
        "	cmp r1, r0\n"
        "	bhs _L_080D09D0\n"
        "	ldr r1, [r5, #8]\n"
        "	mov r2, sp\n"
        "	mov r3, #0x44\n"
        "	ldr r4, [r5, #8]\n"
        "	lsl r1, r1, #1\n"
        "	ldr r0, [r5, #0x10]\n"
        "	add r1, r1, r0\n"
        "	strb r3, [r2]\n"
        "	strb r4, [r2, #1]\n"
        "	ldrb r0, [r1]\n"
        "	strb r0, [r2, #2]\n"
        "	ldrb r0, [r1, #1]\n"
        "	strb r0, [r2, #3]\n"
        "	ldr r0, [r5, #8]\n"
        "	lsl r0, r0, #1\n"
        "	ldr r1, [r5, #0x10]\n"
        "	add r0, r0, r1\n"
        "	ldrb r1, [r0]\n"
        "	ldrb r0, [r0, #1]\n"
        "	lsl r0, r0, #8\n"
        "	orr r1, r0\n"
        "	ldrh r0, [r5, #0x1c]\n"
        "	add r1, r1, r0\n"
        "	strh r1, [r5, #0x1c]\n"
        "	ldr r1, .Lpool_080D09C8\n"
        "	ldr r0, [sp]\n"
        "	str r0, [r1]\n"
        "	ldr r0, [r5, #8]\n"
        "	add r0, #1\n"
        "	str r0, [r5, #8]\n"
        "	ldr r0, [r5]\n"
        "	cmp r0, #4\n"
        "	beq _L_080D0A0A\n"
        "	ldr r0, .Lpool_080D09CC\n"
        "	ldr r1, [r0]\n"
        "	mov r0, #0xc2\n"
        "	lsl r0, r0, #1\n"
        "	add r1, r1, r0\n"
        "	ldr r0, [r1]\n"
        "	add r0, #1\n"
        "	str r0, [r1]\n"
        "	b _L_080D0A0A\n"
        "	.align 2, 0\n"
        ".Lpool_080D09C8:\n"
        "	.word 0x04000154\n"
        ".Lpool_080D09CC:\n"
        "	.word 0x03000420\n"
        "_L_080D09D0:\n"
        "	ldrh r2, [r5, #0x1c]\n"
        "	mov r1, sp\n"
        "	mov r0, #0x45\n"
        "	strb r0, [r1]\n"
        "	mov r0, #0\n"
        "	strb r0, [r1, #1]\n"
        "	strb r2, [r1, #2]\n"
        "	lsr r2, r2, #8\n"
        "	strb r2, [r1, #3]\n"
        "	ldr r1, .Lpool_080D09F0\n"
        "	ldr r0, [sp]\n"
        "	str r0, [r1]\n"
        "	ldr r0, [r5, #4]\n"
        "	add r0, #1\n"
        "	str r0, [r5, #4]\n"
        "	b _L_080D0A0A\n"
        "	.align 2, 0\n"
        ".Lpool_080D09F0:\n"
        "	.word 0x04000154\n"
        "_L_080D09F4:\n"
        "	ldr r0, [r3]\n"
        "	ldr r0, [r0, #4]\n"
        "	cmp r0, #1\n"
        "	bls _L_080D0A0A\n"
        "	cmp r0, #2\n"
        "	bne _L_080D0A0A\n"
        "	bl func_080D0A74\n"
        "	b _L_080D0A0A\n"
        "_L_080D0A06:\n"
        "	mov r0, #9\n"
        "	b _L_080D0A0C\n"
        "_L_080D0A0A:\n"
        "	mov r0, #0\n"
        "_L_080D0A0C:\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
    return __ret;
}

/* --- func_080D0A14 @ 0x080D0A14 (64B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D0A14 @ 0x080D0A14 (64 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(W), +0x00:u32(RW), +0x04:u32(RW)
 * CFG Structure:
 *   L_080D0A14: if (!=) goto L_080D0A40
 *   L_080D0A40: return
 * ========================================================================== */
void func_080D0A14(void) {
    __asm__ volatile(
        "	push {lr}\n"
        "	ldr r0, .Lpool_080D0A44\n"
        "	ldr r2, [r0]\n"
        "	ldr r0, [r2]\n"
        "	cmp r0, #1\n"
        "	bne _L_080D0A40\n"
        "	ldr r0, [r2, #4]\n"
        "	cmp r0, #2\n"
        "	bhi _L_080D0A40\n"
        "	ldr r0, .Lpool_080D0A48\n"
        "	ldr r0, [r0]\n"
        "	ldr r1, .Lpool_080D0A4C\n"
        "	ldr r0, .Lpool_080D0A50\n"
        "	ldr r0, [r0]\n"
        "	ldr r0, [r0, #4]\n"
        "	str r0, [r1]\n"
        "	add r1, #4\n"
        "	mov r0, #0x20\n"
        "	strh r0, [r1]\n"
        "	ldr r0, [r2, #4]\n"
        "	add r0, #1\n"
        "	str r0, [r2, #4]\n"
        "_L_080D0A40:\n"
        "	pop {r0}\n"
        "	bx r0\n"
        ".Lpool_080D0A44:\n"
        "	.word 0x0300041C\n"
        ".Lpool_080D0A48:\n"
        "	.word 0x04000150\n"
        ".Lpool_080D0A4C:\n"
        "	.word 0x04000154\n"
        ".Lpool_080D0A50:\n"
        "	.word 0x03000420\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D0A54 @ 0x080D0A54 (32B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_080D0A54(u32 a) { **(u32 **)0x0300041C = 0; *(u32 *)(*(u8 **)0x03000420 + (0xc0 << 1)) = a; }

/* --- func_080D0A74 @ 0x080D0A74 (32B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_080D0A74(void) { **(u32 **)0x0300041C = 0; *(u32 *)(*(u8 **)0x03000420 + (0xc0 << 1)) = 0; }

/* --- func_080D0A94 @ 0x080D0A94 (40B) [CFG-ASM (hermes:reg-store-barrier) | agbcc_O2] --- */
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
extern u32 func_080D0A54();
void func_080D0A94(void) {
  u32 **p = (u32 **)0x03000420;
  register u32 *ptr asm("r1");
  register u32 one asm("r2");
  ptr = (u32 *)((u8 *)*p + 0x17c);
  __asm__("" : "=r"(ptr) : "0"(ptr));
  one = 1;
  *ptr = one;
  func_080D0A54();
  *(u32 *)((u8 *)*p + 0x17c) = 0;
}

/* --- func_080D0ABC @ 0x080D0ABC (36B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_080D0ABC(void) { u16 v = *(volatile u16 *)0x04000208; *(volatile u16 *)0x04000208 = 0; *(volatile u16 *)0x04000200 |= 0x80; *(volatile u16 *)0x04000208 = v; }

/* --- func_080D0AE0 @ 0x080D0AE0 (52B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_080D0AE0(void) {
    volatile u16 *ime_ptr = (volatile u16 *)0x04000208;
    u16 ime = *ime_ptr;
    *ime_ptr = 0;
    *(volatile u16 *)0x04000200 &= 0xFF7F;
    *(volatile u16 *)0x04000202 = 0x80;
    *ime_ptr = ime;
}

/* --- func_080D0B14 @ 0x080D0B14 (116B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

void func_080D0B14(int param_1, int param_2) {
    register int r4 asm("r4");
    __asm__ volatile(
        "add r3, r1, #0\n\t"
        "ldr r2, =0x04000208\n\t"
        "ldrh r1, [r2]\n\t"
        "add %0, r1, #0\n\t"
        "mov r1, #0\n\t"
        "strh r1, [r2]\n\t"
        "cmp r0, #0\n\t"
        "beq _l1_D0B14\n\t"
        "ldr r1, =0x04000134\n\t"
        "mov r2, #0x80\n\t"
        "lsl r2, r2, #8\n\t"
        "add r0, r2, #0\n\t"
        "strh r0, [r1]\n"
        "_l1_D0B14:\n\t"
        "ldr r1, =0x04000134\n\t"
        "mov r2, #0xc0\n\t"
        "lsl r2, r2, #8\n\t"
        "add r0, r2, #0\n\t"
        "strh r0, [r1]\n\t"
        "cmp r3, #0\n\t"
        "bne _l2_D0B14\n\t"
        "ldr r0, =0x04000158\n\t"
        "strh r3, [r0]\n\t"
        "b _l3_D0B14\n\t"
        ".align 2, 0\n\t"
        ".ltorg\n"
        "_l2_D0B14:\n\t"
        "ldr r1, =0x04000158\n\t"
        "mov r0, #0x30\n\t"
        "strh r0, [r1]\n"
        "_l3_D0B14:\n\t"
        "ldr r0, =0x04000150\n\t"
        "ldr r0, [r0]\n\t"
        "ldr r1, =0x04000154\n\t"
        "mov r0, #0\n\t"
        "str r0, [r1]\n\t"
        "sub r1, #0x14\n\t"
        "mov r0, #0x47\n\t"
        "strh r0, [r1]\n\t"
        "add r1, #0xc2\n\t"
        "mov r0, #0x80\n\t"
        "strh r0, [r1]\n\t"
        "ldr r0, =0x04000208\n\t"
        "strh %0, [r0]"
        : "=r"(r4) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_080D0B88 @ 0x080D0B88 (32B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_080D0B88(void) { u32 *p = *(u32 **)0x03000420; p[13] = 0; p[14] = 0; *(u32 **)0x0300041C = &p[15]; p[15] = 0; }

/* --- func_080D0BA8 @ 0x080D0BA8 (56B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D0BA8 @ 0x080D0BA8 (56 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x04:u32(W), +0x08:u32(W), +0x38:u32(RW)
 * Callees: func_080D0F4E
 * CFG Structure:
 *   L_080D0BA8: call func_080D0F4E(); return
 * ========================================================================== */
extern void func_080D0F4E(void);
void func_080D0BA8(void) {

    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	ldr r0, =0x03000420\n"
        "	ldr r4, [r0]\n"
        "	ldr r0, [r4, #0x38]\n"
        "	add r0, #1\n"
        "	mov r1, #0xa\n"
        "	bl func_080D0F4E\n"
        "	str r0, [r4, #0x38]\n"
        "	mov r0, #0\n"
        "	str r0, [r5, #4]\n"
        "	str r0, [r5, #8]\n"
        "	ldr r0, [r4, #0x38]\n"
        "	lsl r0, r0, #5\n"
        "	add r4, r4, r0\n"
        "	add r4, #0x3c\n"
        "	ldm r5!, {r0, r1, r2}\n"
        "	stm r4!, {r0, r1, r2}\n"
        "	ldm r5!, {r0, r1, r2}\n"
        "	stm r4!, {r0, r1, r2}\n"
        "	ldm r5!, {r0, r1}\n"
        "	stm r4!, {r0, r1}\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
}

/* --- func_080D0BE0 @ 0x080D0BE0 (48B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D0F4E();
struct Item { u8 data[0x20]; };
struct Container {
  u8 pad[0x34];
  int a;
  int b;
  struct Item items[1];
};
void func_080D0BE0(void) {
  int val;
  struct Container *c = *(struct Container **)0x03000420;
  if (c->a != c->b) {
    val = func_080D0F4E(c->a + 1, 10);
    c->a = val;
    *(struct Item **)0x0300041C = &c->items[val];
  }
}

/* --- func_080D0C10 @ 0x080D0C10 (28B) [PURE-C | agbcc_O2] --- */
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
u32 func_080D0C10(void) {
  return ((u32)(*(int *)((*(int *)0x03000420) + 0x34) == *(int *)((*(int *)0x03000420) + 0x38)));
}

/* --- func_080D0C2C @ 0x080D0C2C (60B) [PURE-C | agbcc_O2] --- */
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
extern u32 func_080D0F4E();
void func_080D0C2C(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    register u32 r4;
    r0 = 0x03000420;
    r4 = *(u32 *)(r0);
    r0 = *(u32 *)(r4 + 0x34);
    r0 += 1;
    r1 = 0xa;
    r0 = func_080D0F4E(r0, r1, r2, r3);
    *(u32 *)(r4 + 0x38) = r0;
    r0 = r0 << 5;
    r1 = r4 + 0;
    r1 += 0x3c;
    r1 = r1 + r0;
    r0 = 0;
    *(u32 *)(r1) = r0;
    r0 = *(u32 *)(r4 + 0x38);
    *(u32 *)(r4 + 0x34) = r0;
    r1 = 0x0300041C;
    r0 = r0 << 5;
    r0 += 0x3c;
    r4 = r4 + r0;
    *(u32 *)(r1) = r4;
    return r0;
}

/* --- func_080D0CB4 @ 0x080D0CB4 (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
u32 func_080D0CB4(int arg0,char *arg1) {
  u32 val;
  val = 0;
  if ((*arg1 == *(char *)(arg0 + 2)) && (arg1[1] == *(char *)(arg0 + 3))) {
    val = 1;
  }
  return val;
}

/* --- func_080D0CD4 @ 0x080D0CD4 (84B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D0CD4 @ 0x080D0CD4 (84 bytes)
 * Role   : Thumb Function / Method
 * CFG Structure:
 *   L_080D0CD4: if (> (u)) goto L_080D0D02
 *   L_080D0D02: goto L_080D0D22
 *   L_080D0D0C: if (> (u)) goto L_080D0D14
 *   L_080D0D22: return
 * ========================================================================== */
void func_080D0CD4(void) {
    __asm__ volatile(
        "	push {lr}\n"
        "	add r1, r0, #0\n"
        "	ldr r0, .Lpool_080D0D08\n"
        "	cmp r1, r0\n"
        "	bhi _L_080D0D02\n"
        "	mov r3, #0xff\n"
        "	and r3, r1\n"
        "	mov r0, #0xff\n"
        "	lsl r0, r0, #8\n"
        "	and r0, r1\n"
        "	asr r2, r0, #8\n"
        "	add r0, r3, #0\n"
        "	sub r0, #0x40\n"
        "	cmp r0, #0xbc\n"
        "	bhi _L_080D0D02\n"
        "	cmp r2, #0x80\n"
        "	bls _L_080D0D02\n"
        "	cmp r2, #0xea\n"
        "	bhi _L_080D0D02\n"
        "	add r0, r2, #0\n"
        "	sub r0, #0xa0\n"
        "	cmp r0, #0x3f\n"
        "	bhi _L_080D0D0C\n"
        "_L_080D0D02:\n"
        "	mov r0, #1\n"
        "	neg r0, r0\n"
        "	b _L_080D0D22\n"
        ".Lpool_080D0D08:\n"
        "	.word 0x0000FFFF\n"
        "_L_080D0D0C:\n"
        "	cmp r2, #0x9f\n"
        "	bhi _L_080D0D14\n"
        "	sub r2, #0x81\n"
        "	b _L_080D0D16\n"
        "_L_080D0D14:\n"
        "	sub r2, #0xc1\n"
        "_L_080D0D16:\n"
        "	sub r3, #0x40\n"
        "	lsl r1, r2, #1\n"
        "	add r1, r1, r2\n"
        "	lsl r0, r1, #6\n"
        "	sub r0, r0, r1\n"
        "	add r0, r0, r3\n"
        "_L_080D0D22:\n"
        "	pop {r1}\n"
        "	bx r1\n"
        "	.hword 0x0000\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D0D28 @ 0x080D0D28 (408B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D0D28 @ 0x080D0D28 (408 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(R)
 * Callees: func_080D0CD4, func_080D3914, func_080D3A84
 * CFG Structure:
 *   L_080D0D28: if (<= (u)) goto L_080D0D3E
 *   L_080D0D98: goto L_080D0E0A
 *   L_080D0DA0: goto L_080D0E0A
 *   L_080D0DA8: goto L_080D0E0A
 *   L_080D0DB0: goto L_080D0E0A
 *   L_080D0DB8: goto L_080D0E0A
 *   L_080D0DC0: goto L_080D0E0A
 *   L_080D0DC8: goto L_080D0E0A
 *   L_080D0DD0: goto L_080D0E0A
 *   L_080D0DD8: goto L_080D0E0A
 *   L_080D0DE0: goto L_080D0E0A
 * ========================================================================== */
extern void func_080D0CD4(void);
extern void func_080D3914(void);
extern void func_080D3A84(void);
void func_080D0D28(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, lr}\n"
        "	add r4, r0, #0\n"
        "	add r2, r1, #0\n"
        "	mov r6, #0\n"
        "	mov r5, #1\n"
        "	neg r5, r5\n"
        "	add r0, r2, #0\n"
        "	sub r0, #0xb1\n"
        "	cmp r0, #0x12\n"
        "	bls _L_080D0D3E\n"
        "	b _L_080D0E20\n"
        "_L_080D0D3E:\n"
        "	lsl r0, r0, #2\n"
        "	ldr r1, .Lpool_080D0D48\n"
        "	add r0, r0, r1\n"
        "	ldr r0, [r0]\n"
        "	mov pc, r0\n"
        ".Lpool_080D0D48:\n"
        "	.word _Ljt_080D0D4C\n"
        "_Ljt_080D0D4C:\n"
        "	.word _L_080D0DB0\n"
        "	.word _L_080D0DB8\n"
        "	.word _L_080D0DC0\n"
        "	.word _L_080D0D98\n"
        "	.word _L_080D0E20\n"
        "	.word _L_080D0DA0\n"
        "	.word _L_080D0DA8\n"
        "	.word _L_080D0E20\n"
        "	.word _L_080D0E20\n"
        "	.word _L_080D0E20\n"
        "	.word _L_080D0DC8\n"
        "	.word _L_080D0DD0\n"
        "	.word _L_080D0DD8\n"
        "	.word _L_080D0DE0\n"
        "	.word _L_080D0DE8\n"
        "	.word _L_080D0DF0\n"
        "	.word _L_080D0DF8\n"
        "	.word _L_080D0E00\n"
        "	.word _L_080D0E08\n"
        "_L_080D0D98:\n"
        "	ldr r0, .Lpool_080D0D9C\n"
        "	b _L_080D0E0A\n"
        ".Lpool_080D0D9C:\n"
        "	.word 0x08117B20\n"
        "_L_080D0DA0:\n"
        "	ldr r0, .Lpool_080D0DA4\n"
        "	b _L_080D0E0A\n"
        ".Lpool_080D0DA4:\n"
        "	.word 0x08117B2C\n"
        "_L_080D0DA8:\n"
        "	ldr r0, .Lpool_080D0DAC\n"
        "	b _L_080D0E0A\n"
        ".Lpool_080D0DAC:\n"
        "	.word 0x08117B38\n"
        "_L_080D0DB0:\n"
        "	ldr r0, .Lpool_080D0DB4\n"
        "	b _L_080D0E0A\n"
        ".Lpool_080D0DB4:\n"
        "	.word 0x08117B44\n"
        "_L_080D0DB8:\n"
        "	ldr r0, .Lpool_080D0DBC\n"
        "	b _L_080D0E0A\n"
        ".Lpool_080D0DBC:\n"
        "	.word 0x08117B50\n"
        "_L_080D0DC0:\n"
        "	ldr r0, .Lpool_080D0DC4\n"
        "	b _L_080D0E0A\n"
        ".Lpool_080D0DC4:\n"
        "	.word 0x08117B5C\n"
        "_L_080D0DC8:\n"
        "	ldr r0, .Lpool_080D0DCC\n"
        "	b _L_080D0E0A\n"
        ".Lpool_080D0DCC:\n"
        "	.word 0x08117B68\n"
        "_L_080D0DD0:\n"
        "	ldr r0, .Lpool_080D0DD4\n"
        "	b _L_080D0E0A\n"
        ".Lpool_080D0DD4:\n"
        "	.word 0x08117B74\n"
        "_L_080D0DD8:\n"
        "	ldr r0, .Lpool_080D0DDC\n"
        "	b _L_080D0E0A\n"
        ".Lpool_080D0DDC:\n"
        "	.word 0x08117B80\n"
        "_L_080D0DE0:\n"
        "	ldr r0, .Lpool_080D0DE4\n"
        "	b _L_080D0E0A\n"
        ".Lpool_080D0DE4:\n"
        "	.word 0x08117B8C\n"
        "_L_080D0DE8:\n"
        "	ldr r0, .Lpool_080D0DEC\n"
        "	b _L_080D0E0A\n"
        ".Lpool_080D0DEC:\n"
        "	.word 0x08117B98\n"
        "_L_080D0DF0:\n"
        "	ldr r0, .Lpool_080D0DF4\n"
        "	b _L_080D0E0A\n"
        ".Lpool_080D0DF4:\n"
        "	.word 0x08117BA4\n"
        "_L_080D0DF8:\n"
        "	ldr r0, .Lpool_080D0DFC\n"
        "	b _L_080D0E0A\n"
        ".Lpool_080D0DFC:\n"
        "	.word 0x08117BB0\n"
        "_L_080D0E00:\n"
        "	ldr r0, .Lpool_080D0E04\n"
        "	b _L_080D0E0A\n"
        ".Lpool_080D0E04:\n"
        "	.word 0x08117BBC\n"
        "_L_080D0E08:\n"
        "	ldr r0, .Lpool_080D0E18\n"
        "_L_080D0E0A:\n"
        "	add r1, r4, #0\n"
        "	ldr r2, .Lpool_080D0E1C\n"
        "	bl func_080D3914\n"
        "	mov r0, #1\n"
        "	b _L_080D0EB6\n"
        "	.hword 0x0000\n"
        ".Lpool_080D0E18:\n"
        "	.word 0x08117BC8\n"
        ".Lpool_080D0E1C:\n"
        "	.word 0x0300085C\n"
        "_L_080D0E20:\n"
        "	cmp r2, #0\n"
        "	ble _L_080D0E58\n"
        "	cmp r2, #0xff\n"
        "	bgt _L_080D0E3C\n"
        "	ldr r1, .Lpool_080D0E38\n"
        "	lsl r0, r2, #1\n"
        "	add r0, r0, r1\n"
        "	mov r1, #0\n"
        "	ldrsh r5, [r0, r1]\n"
        "	mov r6, #1\n"
        "	b _L_080D0E58\n"
        "	.hword 0x0000\n"
        ".Lpool_080D0E38:\n"
        "	.word 0x084FA7A0\n"
        "_L_080D0E3C:\n"
        "	ldr r0, .Lpool_080D0E78\n"
        "	cmp r2, r0\n"
        "	bgt _L_080D0E58\n"
        "	add r0, r2, #0\n"
        "	bl func_080D0CD4\n"
        "	cmp r0, #0\n"
        "	blt _L_080D0E58\n"
        "	ldr r1, .Lpool_080D0E7C\n"
        "	lsl r0, r0, #1\n"
        "	add r0, r0, r1\n"
        "	mov r1, #0\n"
        "	ldrsh r5, [r0, r1]\n"
        "	mov r6, #2\n"
        "_L_080D0E58:\n"
        "	cmp r4, #0\n"
        "	beq _L_080D0EAE\n"
        "	cmp r5, #0\n"
        "	blt _L_080D0EA4\n"
        "	cmp r6, #1\n"
        "	beq _L_080D0E88\n"
        "	lsl r0, r5, #1\n"
        "	add r0, r0, r5\n"
        "	lsl r0, r0, #3\n"
        "	ldr r1, .Lpool_080D0E80\n"
        "	add r0, r0, r1\n"
        "	add r1, r4, #0\n"
        "	ldr r2, .Lpool_080D0E84\n"
        "	bl func_080D3914\n"
        "	b _L_080D0EAE\n"
        ".Lpool_080D0E78:\n"
        "	.word 0x0000FFFF\n"
        ".Lpool_080D0E7C:\n"
        "	.word 0x08523290\n"
        ".Lpool_080D0E80:\n"
        "	.word 0x084FA9A0\n"
        ".Lpool_080D0E84:\n"
        "	.word 0x03000714\n"
        "_L_080D0E88:\n"
        "	lsl r0, r5, #1\n"
        "	add r0, r0, r5\n"
        "	lsl r0, r0, #2\n"
        "	ldr r1, .Lpool_080D0E9C\n"
        "	add r0, r0, r1\n"
        "	add r1, r4, #0\n"
        "	ldr r2, .Lpool_080D0EA0\n"
        "	bl func_080D3914\n"
        "	b _L_080D0EAE\n"
        ".Lpool_080D0E9C:\n"
        "	.word 0x084F90CC\n"
        ".Lpool_080D0EA0:\n"
        "	.word 0x0300085C\n"
        "_L_080D0EA4:\n"
        "	add r0, r4, #0\n"
        "	mov r1, #0\n"
        "	mov r2, #0x80\n"
        "	bl func_080D3A84\n"
        "_L_080D0EAE:\n"
        "	mov r0, #0\n"
        "	cmp r5, #0\n"
        "	blt _L_080D0EB6\n"
        "	add r0, r6, #0\n"
        "_L_080D0EB6:\n"
        "	pop {r4, r5, r6}\n"
        "	pop {r1}\n"
        "	bx r1\n"
        "	.hword 0xC307\n"
        "	.hword 0x4770\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D0EC0 @ 0x080D0EC0 (8B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D0EC0 @ 0x080D0EC0 (8 bytes)
 * Role   : Thumb Function / Method
 * CFG Structure:
 *   L_080D0EC0: return
 * ========================================================================== */
void func_080D0EC0(void) {
    __asm__ volatile(
        "	push {lr}\n"
        "	mov r0, #0\n"
        "	pop {r1}\n"
        "	bx r1\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D0EDA @ 0x080D0EDA (116B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D0EDA @ 0x080D0EDA (116 bytes)
 * Role   : Thumb Function / Method
 * CFG Structure:
 *   L_080D0EDA: if (>= 0) goto L_080D0EC8
 *   L_080D0EF2: if (>= (u)) goto L_080D0F00
 *   L_080D0F02: if (>= (u)) goto L_080D0F10
 *   L_080D0F10: if (< (u)) goto L_080D0F18
 *   L_080D0F18: if (< (u)) goto L_080D0F24
 *   L_080D0F24: if (< (u)) goto L_080D0F30
 *   L_080D0F30: if (< (u)) goto L_080D0F3C
 *   L_080D0F3C: if (==) goto L_080D0F48
 *   L_080D0F48: return
 * ========================================================================== */
void func_080D0EDA(void) {
    __asm__ volatile(
        "	add r3, r0, #0\n"
        "	orr r3, r1\n"
        "	.hword 0xD5F3\n"
        "	cmp r1, #0\n"
        "	.hword 0xD0ED\n"
        "	mov r3, #1\n"
        "	mov r2, #0\n"
        "	push {r4}\n"
        "	cmp r0, r1\n"
        "	blo _L_080D0F48\n"
        "	mov r4, #1\n"
        "	lsl r4, r4, #0x1c\n"
        "_L_080D0EF2:\n"
        "	cmp r1, r4\n"
        "	bhs _L_080D0F00\n"
        "	cmp r1, r0\n"
        "	bhs _L_080D0F00\n"
        "	lsl r1, r1, #4\n"
        "	lsl r3, r3, #4\n"
        "	b _L_080D0EF2\n"
        "_L_080D0F00:\n"
        "	lsl r4, r4, #3\n"
        "_L_080D0F02:\n"
        "	cmp r1, r4\n"
        "	bhs _L_080D0F10\n"
        "	cmp r1, r0\n"
        "	bhs _L_080D0F10\n"
        "	lsl r1, r1, #1\n"
        "	lsl r3, r3, #1\n"
        "	b _L_080D0F02\n"
        "_L_080D0F10:\n"
        "	cmp r0, r1\n"
        "	blo _L_080D0F18\n"
        "	sub r0, r0, r1\n"
        "	orr r2, r3\n"
        "_L_080D0F18:\n"
        "	lsr r4, r1, #1\n"
        "	cmp r0, r4\n"
        "	blo _L_080D0F24\n"
        "	sub r0, r0, r4\n"
        "	lsr r4, r3, #1\n"
        "	orr r2, r4\n"
        "_L_080D0F24:\n"
        "	lsr r4, r1, #2\n"
        "	cmp r0, r4\n"
        "	blo _L_080D0F30\n"
        "	sub r0, r0, r4\n"
        "	lsr r4, r3, #2\n"
        "	orr r2, r4\n"
        "_L_080D0F30:\n"
        "	lsr r4, r1, #3\n"
        "	cmp r0, r4\n"
        "	blo _L_080D0F3C\n"
        "	sub r0, r0, r4\n"
        "	lsr r4, r3, #3\n"
        "	orr r2, r4\n"
        "_L_080D0F3C:\n"
        "	cmp r0, #0\n"
        "	beq _L_080D0F48\n"
        "	lsr r3, r3, #4\n"
        "	beq _L_080D0F48\n"
        "	lsr r1, r1, #4\n"
        "	b _L_080D0F10\n"
        "_L_080D0F48:\n"
        "	add r0, r2, #0\n"
        "	pop {r4}\n"
        "	bx lr\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D0F4E @ 0x080D0F4E (18B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D0F4E @ 0x080D0F4E (18 bytes)
 * Role   : Thumb Function / Method
 * CFG Structure:
 *   L_080D0F4E: if (>= 0) goto L_080D0ED0
 * ========================================================================== */
void func_080D0F4E(void) {
    __asm__ volatile(
        "	add r3, r0, #0\n"
        "	orr r3, r1\n"
        "	.hword 0xD5BD\n"
        "	cmp r1, #0\n"
        "	.hword 0xD0B3\n"
        "	mov r3, #1\n"
        "	cmp r0, r1\n"
        "	.hword 0xD200\n"
        "	bx lr\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D0F60 @ 0x080D0F60 (172B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D0F60 @ 0x080D0F60 (172 bytes)
 * Role   : Thumb Function / Method
 * CFG Structure:
 *   L_080D0F66: if (>= (u)) goto L_080D0F74
 *   L_080D0F76: if (>= (u)) goto L_080D0F84
 *   L_080D0F84: if (< (u)) goto L_080D0F8C
 *   L_080D0F8C: if (< (u)) goto L_080D0F9E
 *   L_080D0F9E: if (< (u)) goto L_080D0FB0
 *   L_080D0FB0: if (< (u)) goto L_080D0FC2
 *   L_080D0FC2: if (==) goto L_080D0FD0
 *   L_080D0FD0: if (!=) goto L_080D0FDC
 *   L_080D0FDC: if (==) goto L_080D0FEA
 *   L_080D0FEA: if (==) goto L_080D0FF8
 * ========================================================================== */
void func_080D0F60(void) {
    __asm__ volatile(
        "	push {r4}\n"
        "	mov r4, #1\n"
        "	lsl r4, r4, #0x1c\n"
        "_L_080D0F66:\n"
        "	cmp r1, r4\n"
        "	bhs _L_080D0F74\n"
        "	cmp r1, r0\n"
        "	bhs _L_080D0F74\n"
        "	lsl r1, r1, #4\n"
        "	lsl r3, r3, #4\n"
        "	b _L_080D0F66\n"
        "_L_080D0F74:\n"
        "	lsl r4, r4, #3\n"
        "_L_080D0F76:\n"
        "	cmp r1, r4\n"
        "	bhs _L_080D0F84\n"
        "	cmp r1, r0\n"
        "	bhs _L_080D0F84\n"
        "	lsl r1, r1, #1\n"
        "	lsl r3, r3, #1\n"
        "	b _L_080D0F76\n"
        "_L_080D0F84:\n"
        "	mov r2, #0\n"
        "	cmp r0, r1\n"
        "	blo _L_080D0F8C\n"
        "	sub r0, r0, r1\n"
        "_L_080D0F8C:\n"
        "	lsr r4, r1, #1\n"
        "	cmp r0, r4\n"
        "	blo _L_080D0F9E\n"
        "	sub r0, r0, r4\n"
        "	mov ip, r3\n"
        "	mov r4, #1\n"
        "	ror r3, r4\n"
        "	orr r2, r3\n"
        "	mov r3, ip\n"
        "_L_080D0F9E:\n"
        "	lsr r4, r1, #2\n"
        "	cmp r0, r4\n"
        "	blo _L_080D0FB0\n"
        "	sub r0, r0, r4\n"
        "	mov ip, r3\n"
        "	mov r4, #2\n"
        "	ror r3, r4\n"
        "	orr r2, r3\n"
        "	mov r3, ip\n"
        "_L_080D0FB0:\n"
        "	lsr r4, r1, #3\n"
        "	cmp r0, r4\n"
        "	blo _L_080D0FC2\n"
        "	sub r0, r0, r4\n"
        "	mov ip, r3\n"
        "	mov r4, #3\n"
        "	ror r3, r4\n"
        "	orr r2, r3\n"
        "	mov r3, ip\n"
        "_L_080D0FC2:\n"
        "	mov ip, r3\n"
        "	cmp r0, #0\n"
        "	beq _L_080D0FD0\n"
        "	lsr r3, r3, #4\n"
        "	beq _L_080D0FD0\n"
        "	lsr r1, r1, #4\n"
        "	b _L_080D0F84\n"
        "_L_080D0FD0:\n"
        "	mov r4, #0xe\n"
        "	lsl r4, r4, #0x1c\n"
        "	and r2, r4\n"
        "	bne _L_080D0FDC\n"
        "	pop {r4}\n"
        "	bx lr\n"
        "_L_080D0FDC:\n"
        "	mov r3, ip\n"
        "	mov r4, #3\n"
        "	ror r3, r4\n"
        "	tst r2, r3\n"
        "	beq _L_080D0FEA\n"
        "	lsr r4, r1, #3\n"
        "	add r0, r0, r4\n"
        "_L_080D0FEA:\n"
        "	mov r3, ip\n"
        "	mov r4, #2\n"
        "	ror r3, r4\n"
        "	tst r2, r3\n"
        "	beq _L_080D0FF8\n"
        "	lsr r4, r1, #2\n"
        "	add r0, r0, r4\n"
        "_L_080D0FF8:\n"
        "	mov r3, ip\n"
        "	mov r4, #1\n"
        "	ror r3, r4\n"
        "	tst r2, r3\n"
        "	beq _L_080D1006\n"
        "	lsr r4, r1, #1\n"
        "	add r0, r0, r4\n"
        "_L_080D1006:\n"
        "	pop {r4}\n"
        "	bx lr\n"
        "	.hword 0x0000\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D100C @ 0x080D100C (16B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D100C @ 0x080D100C (16 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW)
 * CFG Structure:
 *   L_080D100C: return
 * ========================================================================== */
void func_080D100C(void) {
    __asm__ volatile(
        "	ldr r2, .Lpool_080D1018\n"
        "	lsl r0, r0, #2\n"
        "	add r2, r2, r0\n"
        "	ldr r0, [r2]\n"
        "	str r1, [r2]\n"
        "	bx lr\n"
        ".Lpool_080D1018:\n"
        "	.word 0x03000450\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D101C @ 0x080D101C (16B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D101C @ 0x080D101C (16 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(RW)
 * CFG Structure:
 *   L_080D101C: return
 * ========================================================================== */
void func_080D101C(void) {
    __asm__ volatile(
        "	ldr r2, .Lpool_080D1028\n"
        "	lsl r0, r0, #1\n"
        "	add r2, r2, r0\n"
        "	ldrh r0, [r2]\n"
        "	strh r1, [r2]\n"
        "	bx lr\n"
        ".Lpool_080D1028:\n"
        "	.word 0x03000430\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D102C @ 0x080D102C (196B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D102C @ 0x080D102C (196 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW)
 * Callees: func_080D10F0, func_080D11A4, func_080D1204, func_080D1224, func_080D129A, func_080D12EC, func_080D139C, func_080D1518, func_080D1548, func_080D1564
 * CFG Structure:
 *   L_080D102C: call func_080D11A4(); if (==) goto L_080D1068
 *   L_080D1068: goto L_080D1072
 *   L_080D1072: call func_080D10F0()
 *   L_080D1076: if (==) goto L_080D1094
 *   L_080D1094: call func_080D129A(); goto L_080D10AA
 *   L_080D109A: call func_080D12EC(); goto L_080D10AA
 *   L_080D10A0: call func_080D139C(); goto L_080D10AA
 *   L_080D10A6: call func_080D1204()
 *   L_080D10AA: if (==) goto L_080D10C4
 *   L_080D10C4: call func_080D1518(); goto L_080D10DA
 *   L_080D10CA: call func_080D1548(); goto L_080D10DA
 * ========================================================================== */
extern void func_080D10F0(void);
extern void func_080D11A4(void);
extern void func_080D1204(void);
extern void func_080D1224(void);
extern void func_080D129A(void);
extern void func_080D12EC(void);
extern void func_080D139C(void);
extern void func_080D1518(void);
extern void func_080D1548(void);
extern void func_080D1564(void);
extern void func_080D1574(void);
void func_080D102C(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, r7, lr}\n"
        "	mov r4, r8\n"
        "	mov r5, sb\n"
        "	mov r6, sl\n"
        "	mov r7, fp\n"
        "	push {r4, r5, r6, r7}\n"
        "	ldr r2, [pc, #0x18c]\n"
        "	add sp, r2\n"
        "	mov r7, sp\n"
        "	ldm r0!, {r4}\n"
        "	lsr r4, r4, #8\n"
        "	push {r4}\n"
        "	mov r8, r4\n"
        "	sub r1, #2\n"
        "	add r8, r1\n"
        "	mov r2, #0\n"
        "	add r3, r2, #0\n"
        "	mov r4, #8\n"
        "	bl func_080D11A4\n"
        "	str r4, [r7]\n"
        "	add r6, r4, #0\n"
        "	lsl r4, r4, #0x1b\n"
        "	lsr r4, r4, #0x1e\n"
        "	sub r4, #1\n"
        "	beq _L_080D1068\n"
        "	sub r4, #1\n"
        "	beq _L_080D106E\n"
        "	ldr r5, [pc, #0x164]\n"
        "	b _L_080D1076\n"
        "_L_080D1068:\n"
        "	mov r4, #4\n"
        "	ldr r5, [pc, #0x164]\n"
        "	b _L_080D1072\n"
        "_L_080D106E:\n"
        "	mov r4, #8\n"
        "	ldr r5, [pc, #0x160]\n"
        "_L_080D1072:\n"
        "	bl func_080D10F0\n"
        "_L_080D1076:\n"
        "	mov sb, r5\n"
        "	push {r1}\n"
        "	lsl r6, r6, #0x1d\n"
        "	lsr r6, r6, #0x1d\n"
        "	sub r6, #1\n"
        "	beq _L_080D1094\n"
        "	sub r6, #1\n"
        "	beq _L_080D109A\n"
        "	sub r6, #1\n"
        "	beq _L_080D10A0\n"
        "	sub r6, #1\n"
        "	beq _L_080D10A6\n"
        "	bl func_080D1224\n"
        "	b _L_080D10AA\n"
        "_L_080D1094:\n"
        "	bl func_080D129A\n"
        "	b _L_080D10AA\n"
        "_L_080D109A:\n"
        "	bl func_080D12EC\n"
        "	b _L_080D10AA\n"
        "_L_080D10A0:\n"
        "	bl func_080D139C\n"
        "	b _L_080D10AA\n"
        "_L_080D10A6:\n"
        "	bl func_080D1204\n"
        "_L_080D10AA:\n"
        "	pop {r0}\n"
        "	ldr r4, [r7]\n"
        "	lsl r4, r4, #0x18\n"
        "	lsr r4, r4, #0x1d\n"
        "	sub r4, #1\n"
        "	beq _L_080D10C4\n"
        "	sub r4, #1\n"
        "	beq _L_080D10CA\n"
        "	sub r4, #1\n"
        "	beq _L_080D10D0\n"
        "	sub r4, #1\n"
        "	beq _L_080D10D6\n"
        "	b _L_080D10DA\n"
        "_L_080D10C4:\n"
        "	bl func_080D1518\n"
        "	b _L_080D10DA\n"
        "_L_080D10CA:\n"
        "	bl func_080D1548\n"
        "	b _L_080D10DA\n"
        "_L_080D10D0:\n"
        "	bl func_080D1564\n"
        "	b _L_080D10DA\n"
        "_L_080D10D6:\n"
        "	bl func_080D1574\n"
        "_L_080D10DA:\n"
        "	pop {r0}\n"
        "	ldr r2, [pc, #0xf8]\n"
        "	add sp, r2\n"
        "	pop {r4, r5, r6, r7}\n"
        "	mov r8, r4\n"
        "	mov sb, r5\n"
        "	mov sl, r6\n"
        "	mov fp, r7\n"
        "	pop {r4, r5, r6, r7}\n"
        "	pop {r1}\n"
        "	bx r1\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D10F0 @ 0x080D10F0 (122B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D10F0 @ 0x080D10F0 (122 bytes)
 * Role   : Thumb Function / Method
 * Callees: func_080D11A4
 * CFG Structure:
 *   L_080D1100: if (> (s)) goto L_080D1100
 *   L_080D1112: call func_080D11A4(); if (==) goto L_080D1160
 *   L_080D1120: if (==) goto L_080D1146
 *   L_080D112A: if (>= 0) goto L_080D1142
 *   L_080D1142: if (!=) goto L_080D112A
 *   L_080D1146: call func_080D11A4(); if (!=) goto L_080D1120
 *   L_080D1160: if (!=) goto L_080D1112
 * ========================================================================== */
extern void func_080D11A4(void);
void func_080D10F0(void) {
    __asm__ volatile(
        "	push {r1, r5, r6, lr}\n"
        "	mov sl, r4\n"
        "	mov r6, #1\n"
        "	sub r5, r6, #2\n"
        "	lsl r6, r4\n"
        "	add r4, r5, #0\n"
        "	add r1, r7, #0\n"
        "	add r1, #0x20\n"
        "_L_080D1100:\n"
        "	stm r1!, {r4, r5}\n"
        "	sub r6, #2\n"
        "	bgt _L_080D1100\n"
        "	mov r4, #0x20\n"
        "	mov fp, r4\n"
        "	mov r5, #0\n"
        "	mov ip, r5\n"
        "	mov r6, sl\n"
        "	lsl r6, r6, #1\n"
        "_L_080D1112:\n"
        "	lsl r5, r5, #1\n"
        "	mov r4, sl\n"
        "	bl func_080D11A4\n"
        "	tst r4, r4\n"
        "	beq _L_080D1160\n"
        "	push {r6}\n"
        "_L_080D1120:\n"
        "	mov sb, r4\n"
        "	mov r1, #0x20\n"
        "	mov r6, ip\n"
        "	tst r6, r6\n"
        "	beq _L_080D1146\n"
        "_L_080D112A:\n"
        "	add r4, r5, #0\n"
        "	lsr r4, r6\n"
        "	lsl r4, r4, #0x1f\n"
        "	lsr r4, r4, #0x1e\n"
        "	add r4, r4, r1\n"
        "	ldrsh r1, [r7, r4]\n"
        "	tst r1, r1\n"
        "	bpl _L_080D1142\n"
        "	mov r1, fp\n"
        "	add r1, #4\n"
        "	mov fp, r1\n"
        "	strh r1, [r7, r4]\n"
        "_L_080D1142:\n"
        "	sub r6, #1\n"
        "	bne _L_080D112A\n"
        "_L_080D1146:\n"
        "	lsl r6, r5, #0x1f\n"
        "	lsr r6, r6, #0x1e\n"
        "	add r6, r6, r1\n"
        "	mov r4, sl\n"
        "	bl func_080D11A4\n"
        "	mvn r4, r4\n"
        "	strh r4, [r7, r6]\n"
        "	add r5, #1\n"
        "	mov r4, sb\n"
        "	sub r4, #1\n"
        "	bne _L_080D1120\n"
        "	pop {r6}\n"
        "_L_080D1160:\n"
        "	mov r1, #1\n"
        "	add ip, r1\n"
        "	sub r6, #1\n"
        "	bne _L_080D1112\n"
        "	pop {r1, r5, r6, pc}\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D116A @ 0x080D116A (4B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D116A @ 0x080D116A (4 bytes)
 * Role   : Thumb Function / Method
 * CFG Structure:
 *   L_080D116A: goto L_080D11A4
 * ========================================================================== */
void func_080D116A(void) {
    __asm__ volatile(
        "	mov r4, #8\n"
        "	.hword 0xE01A\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D116E @ 0x080D116E (16B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D116E @ 0x080D116E (16 bytes)
 * Role   : Thumb Function / Method
 * Callees: func_080D1186
 * CFG Structure:
 *   L_080D116E: call func_080D1186(); call func_080D1186()
 * ========================================================================== */
extern void func_080D1186(void);
void func_080D116E(void) {
    __asm__ volatile(
        "	push {r5, r6, lr}\n"
        "	bl func_080D1186\n"
        "	lsl r6, r4, #4\n"
        "	bl func_080D1186\n"
        "	orr r4, r6\n"
        "	pop {r5, r6, pc}\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D117E @ 0x080D117E (8B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D117E @ 0x080D117E (8 bytes)
 * Role   : Thumb Function / Method
 * Callees: func_080D1186
 * CFG Structure:
 *   L_080D117E: call func_080D1186()
 * ========================================================================== */
extern void func_080D1186(void);
void func_080D117E(void) {
    __asm__ volatile(
        "	push {r5, lr}\n"
        "	bl func_080D1186\n"
        "	pop {r5, pc}\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D1186 @ 0x080D1186 (24B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D1186 @ 0x080D1186 (24 bytes)
 * Role   : Thumb Function / Method
 * CFG Structure:
 *   L_080D1188: if (< 0) goto L_080D119E
 * ========================================================================== */
void func_080D1186(void) {
    __asm__ volatile(
        "	mov r4, #0x20\n"
        "_L_080D1188:\n"
        "	sub r3, #1\n"
        "	.hword 0xD408\n"
        "	lsr r5, r2, #0x1f\n"
        "	lsl r2, r2, #1\n"
        "	lsl r5, r5, #1\n"
        "	add r5, r5, r4\n"
        "	ldrsh r4, [r7, r5]\n"
        "	tst r4, r4\n"
        "	bpl _L_080D1188\n"
        "	mvn r4, r4\n"
        "	bx lr\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D119E @ 0x080D119E (6B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D119E @ 0x080D119E (6 bytes)
 * Role   : Thumb Function / Method
 * CFG Structure:
 *   L_080D119E: goto L_080D118C
 * ========================================================================== */
void func_080D119E(void) {
    __asm__ volatile(
        "	ldm r0!, {r2}\n"
        "	add r3, #0x20\n"
        "	.hword 0xE7F3\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D11A4 @ 0x080D11A4 (36B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D11A4 @ 0x080D11A4 (36 bytes)
 * Role   : Thumb Function / Method
 * CFG Structure:
 *   L_080D11A4: if (< 0) goto L_080D11B8
 * ========================================================================== */
void func_080D11A4(void) {
    __asm__ volatile(
        "	push {r5, r6, lr}\n"
        "	mov r5, #0x20\n"
        "	sub r5, r5, r4\n"
        "	add r6, r2, #0\n"
        "	lsr r6, r5\n"
        "	sub r3, r3, r4\n"
        "	bmi _L_080D11B8\n"
        "	lsl r2, r4\n"
        "	add r4, r6, #0\n"
        "	pop {r5, r6, pc}\n"
        "_L_080D11B8:\n"
        "	ldm r0!, {r2}\n"
        "	neg r5, r3\n"
        "	add r4, r2, #0\n"
        "	lsl r2, r5\n"
        "	add r3, #0x20\n"
        "	lsr r4, r3\n"
        "	orr r4, r6\n"
        "	pop {r5, r6, pc}\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D11E4 @ 0x080D11E4 (20B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

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

/* --- func_080D1204 @ 0x080D1204 (32B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D1204 @ 0x080D1204 (32 bytes)
 * Role   : Thumb Function / Method
 * CFG Structure:
 *   L_080D1204: return
 * ========================================================================== */
void func_080D1204(void) {
    __asm__ volatile(
        "	push {lr}\n"
        "	mov r6, r8\n"
        "	sub r6, r6, r1\n"
        "	mov lr, pc\n"
        "	bx sb\n"
        "	.hword 0x3101\n"
        "	.hword 0x07CD\n"
        "	.hword 0xD402\n"
        "	.hword 0x0224\n"
        "	.hword 0x4454\n"
        "	.hword 0x800C\n"
        "	.hword 0x46A2\n"
        "	.hword 0x3E01\n"
        "	.hword 0xD1F4\n"
        "	.hword 0xBC10\n"
        "	.hword 0x4720\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D1224 @ 0x080D1224 (118B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D1224 @ 0x080D1224 (118 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(W), +0x04:u16(R), +0x06:u8(R)
 * Callees: func_080D11A4, func_080D14EC
 * CFG Structure:
 *   L_080D1224: call func_080D14EC(); call func_080D11A4(); if (< (u)) goto L_080D125C
 *   L_080D1256: goto L_080D145C
 *   L_080D125C: call func_080D11A4(); call func_080D11A4(); goto L_080D145C
 *   L_080D1274: call func_080D11A4(); return
 * ========================================================================== */
extern void func_080D11A4(void);
extern void func_080D14EC(void);
void func_080D1224(void) {
    __asm__ volatile(
        "	push {lr}\n"
        "	mov r5, #2\n"
        "	bl func_080D14EC\n"
        "	.hword 0x4CB7\n"
        "	mov ip, r4\n"
        "	mov r4, #2\n"
        "	bl func_080D11A4\n"
        "	cmp r4, #2\n"
        "	blo _L_080D125C\n"
        "	beq _L_080D1274\n"
        "	mov r4, #6\n"
        "	bl func_080D11A4\n"
        "	add r6, r4, #1\n"
        "	mov r4, #8\n"
        "	bl func_080D11A4\n"
        "	add r1, #1\n"
        "	lsl r5, r1, #0x1f\n"
        "	bmi _L_080D1256\n"
        "	lsl r4, r4, #8\n"
        "	add r4, sl\n"
        "	strh r4, [r1]\n"
        "_L_080D1256:\n"
        "	mov sl, r4\n"
        "	mov r5, #1\n"
        "	.hword 0xE0FF\n"
        "_L_080D125C:\n"
        "	lsl r5, r4, #2\n"
        "	add r5, r5, r7\n"
        "	ldrb r4, [r5, #6]\n"
        "	bl func_080D11A4\n"
        "	ldrh r5, [r5, #4]\n"
        "	add r5, r5, r4\n"
        "	mov r4, #6\n"
        "	bl func_080D11A4\n"
        "	add r6, r4, #3\n"
        "	.hword 0xE0F3\n"
        "_L_080D1274:\n"
        "	mov r4, #6\n"
        "	bl func_080D11A4\n"
        "	add r6, r4, #1\n"
        "	mov lr, pc\n"
        "	bx sb\n"
        "	.hword 0x3101\n"
        "	.hword 0x07CD\n"
        "	.hword 0xD402\n"
        "	.hword 0x0224\n"
        "	.hword 0x4454\n"
        "	.hword 0x800C\n"
        "	.hword 0x46A2\n"
        "	.hword 0x3E01\n"
        "	.hword 0xD1F4\n"
        "	.hword 0x4541\n"
        "	.hword 0xD3CC\n"
        "	.hword 0xBC10\n"
        "	.hword 0x4720\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D129A @ 0x080D129A (82B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D129A @ 0x080D129A (82 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x04:u16(R), +0x06:u8(R)
 * Callees: func_080D11A4, func_080D14EC
 * CFG Structure:
 *   L_080D129A: call func_080D14EC(); if (< 0) goto L_080D12E6
 *   L_080D12AA: if (< (u)) goto L_080D12CC
 *   L_080D12CC: return
 *   L_080D12E6: goto L_080D12AA
 * ========================================================================== */
extern void func_080D11A4(void);
extern void func_080D14EC(void);
void func_080D129A(void) {
    __asm__ volatile(
        "	push {lr}\n"
        "	mov r5, #4\n"
        "	bl func_080D14EC\n"
        "	.hword 0x4C9B\n"
        "	mov ip, r4\n"
        "	sub r3, #1\n"
        "	bmi _L_080D12E6\n"
        "_L_080D12AA:\n"
        "	lsl r2, r2, #1\n"
        "	blo _L_080D12CC\n"
        "	mov r4, #2\n"
        "	bl func_080D11A4\n"
        "	lsl r5, r4, #2\n"
        "	add r5, r5, r7\n"
        "	ldrb r4, [r5, #6]\n"
        "	bl func_080D11A4\n"
        "	ldrh r5, [r5, #4]\n"
        "	add r5, r5, r4\n"
        "	mov r4, #4\n"
        "	bl func_080D11A4\n"
        "	add r6, r4, #3\n"
        "	.hword 0xE0C7\n"
        "_L_080D12CC:\n"
        "	mov lr, pc\n"
        "	bx sb\n"
        "	.hword 0x3101\n"
        "	.hword 0x07CE\n"
        "	.hword 0xD402\n"
        "	.hword 0x0224\n"
        "	.hword 0x4454\n"
        "	.hword 0x800C\n"
        "	.hword 0x46A2\n"
        "	.hword 0x4541\n"
        "	.hword 0xD3E1\n"
        "	.hword 0xBC10\n"
        "	.hword 0x4720\n"
        "_L_080D12E6:\n"
        "	ldm r0!, {r2}\n"
        "	add r3, #0x20\n"
        "	b _L_080D12AA\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D12EC @ 0x080D12EC (176B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D12EC @ 0x080D12EC (176 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x04:u16(R), +0x06:u8(R)
 * Callees: func_080D11A4, func_080D14EC
 * CFG Structure:
 *   L_080D12EC: call func_080D14EC(); if (< 0) goto L_080D1390
 *   L_080D12FC: if (< (u)) goto L_080D1376
 *   L_080D1324: call func_080D11A4(); if (>= (u)) goto L_080D1324
 *   L_080D1336: if (< (u)) goto L_080D135C
 *   L_080D135C: return
 *   L_080D1376: return
 *   L_080D1390: goto L_080D12FC
 *   L_080D1396: goto L_080D1336
 * ========================================================================== */
extern void func_080D11A4(void);
extern void func_080D14EC(void);
void func_080D12EC(void) {
    __asm__ volatile(
        "	push {lr}\n"
        "	mov r5, #7\n"
        "	bl func_080D14EC\n"
        "	.hword 0x4C87\n"
        "	mov ip, r4\n"
        "	sub r3, #1\n"
        "	bmi _L_080D1390\n"
        "_L_080D12FC:\n"
        "	lsl r2, r2, #1\n"
        "	blo _L_080D1376\n"
        "	mov r4, #3\n"
        "	bl func_080D11A4\n"
        "	cmp r4, #7\n"
        "	beq _L_080D1322\n"
        "	lsl r5, r4, #2\n"
        "	add r5, r5, r7\n"
        "	ldrb r4, [r5, #6]\n"
        "	bl func_080D11A4\n"
        "	ldrh r5, [r5, #4]\n"
        "	add r5, r5, r4\n"
        "	mov r4, #4\n"
        "	bl func_080D11A4\n"
        "	add r6, r4, #3\n"
        "	.hword 0xE09C\n"
        "_L_080D1322:\n"
        "	mov r6, #0\n"
        "_L_080D1324:\n"
        "	mov r4, #4\n"
        "	bl func_080D11A4\n"
        "	lsl r6, r6, #4\n"
        "	add r6, r6, r4\n"
        "	lsr r6, r6, #1\n"
        "	bhs _L_080D1324\n"
        "	sub r3, #1\n"
        "	bmi _L_080D1396\n"
        "_L_080D1336:\n"
        "	lsl r2, r2, #1\n"
        "	blo _L_080D135C\n"
        "	mov r4, #3\n"
        "	bl func_080D11A4\n"
        "	lsl r5, r4, #2\n"
        "	add r5, r5, r7\n"
        "	ldrb r4, [r5, #6]\n"
        "	bl func_080D11A4\n"
        "	ldrh r5, [r5, #4]\n"
        "	add r5, r5, r4\n"
        "	mov r4, #4\n"
        "	bl func_080D11A4\n"
        "	lsl r6, r6, #4\n"
        "	add r6, r6, r4\n"
        "	add r6, #3\n"
        "	.hword 0xE07F\n"
        "_L_080D135C:\n"
        "	add r6, #1\n"
        "	mov lr, pc\n"
        "	bx sb\n"
        "	.hword 0x3101\n"
        "	.hword 0x07CD\n"
        "	.hword 0xD402\n"
        "	.hword 0x0224\n"
        "	.hword 0x4454\n"
        "	.hword 0x800C\n"
        "	.hword 0x46A2\n"
        "	.hword 0x3E01\n"
        "	.hword 0xD1F4\n"
        "	.hword 0xE008\n"
        "_L_080D1376:\n"
        "	mov lr, pc\n"
        "	bx sb\n"
        "	.hword 0x3101\n"
        "	.hword 0x07CD\n"
        "	.hword 0xD402\n"
        "	.hword 0x0224\n"
        "	.hword 0x4454\n"
        "	.hword 0x800C\n"
        "	.hword 0x46A2\n"
        "	.hword 0x4541\n"
        "	.hword 0xD3B5\n"
        "	.hword 0xBC10\n"
        "	.hword 0x4720\n"
        "_L_080D1390:\n"
        "	ldm r0!, {r2}\n"
        "	add r3, #0x20\n"
        "	b _L_080D12FC\n"
        "_L_080D1396:\n"
        "	ldm r0!, {r2}\n"
        "	add r3, #0x20\n"
        "	b _L_080D1336\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D139C @ 0x080D139C (194B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D139C @ 0x080D139C (194 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(RW), +0x04:u16(R), +0x06:u8(R)
 * Callees: func_080D11A4, func_080D14EC
 * CFG Structure:
 *   L_080D139C: call func_080D14EC()
 *   L_080D13A4: if (< 0) goto L_080D1450
 *   L_080D13A8: if (>= (u)) goto L_080D13C0
 *   L_080D13C0: call func_080D11A4(); if (==) goto L_080D13E4
 *   L_080D13E6: call func_080D11A4(); if (>= (u)) goto L_080D13E6
 *   L_080D13F8: if (< (u)) goto L_080D1420
 *   L_080D1420: return
 *   L_080D143C: if (!=) goto L_080D143C
 *   L_080D1450: goto L_080D13A8
 *   L_080D1456: goto L_080D13F8
 * ========================================================================== */
extern void func_080D11A4(void);
extern void func_080D14EC(void);
void func_080D139C(void) {
    __asm__ volatile(
        "	push {lr}\n"
        "	mov r5, #3\n"
        "	bl func_080D14EC\n"
        "_L_080D13A4:\n"
        "	sub r3, #1\n"
        "	bmi _L_080D1450\n"
        "_L_080D13A8:\n"
        "	lsl r2, r2, #1\n"
        "	bhs _L_080D13C0\n"
        "	mov lr, pc\n"
        "	bx sb\n"
        "	.hword 0x1C25\n"
        "	.hword 0x46FE\n"
        "	.hword 0x4748\n"
        "	.hword 0x0224\n"
        "	.hword 0x432C\n"
        "	.hword 0x3102\n"
        "	.hword 0x800C\n"
        "	.hword 0xE043\n"
        "_L_080D13C0:\n"
        "	mov r4, #2\n"
        "	bl func_080D11A4\n"
        "	cmp r4, #3\n"
        "	beq _L_080D13E4\n"
        "	lsl r5, r4, #2\n"
        "	add r5, r5, r7\n"
        "	ldrb r4, [r5, #6]\n"
        "	bl func_080D11A4\n"
        "	ldrh r5, [r5, #4]\n"
        "	add r5, r5, r4\n"
        "	lsl r5, r5, #1\n"
        "	mov r4, #3\n"
        "	bl func_080D11A4\n"
        "	add r6, r4, #2\n"
        "	b _L_080D143A\n"
        "_L_080D13E4:\n"
        "	mov r6, #0\n"
        "_L_080D13E6:\n"
        "	mov r4, #3\n"
        "	bl func_080D11A4\n"
        "	lsl r6, r6, #3\n"
        "	add r6, r6, r4\n"
        "	lsr r6, r6, #1\n"
        "	bhs _L_080D13E6\n"
        "	sub r3, #1\n"
        "	bmi _L_080D1456\n"
        "_L_080D13F8:\n"
        "	lsl r2, r2, #1\n"
        "	blo _L_080D1420\n"
        "	mov r4, #2\n"
        "	bl func_080D11A4\n"
        "	lsl r5, r4, #2\n"
        "	add r5, r5, r7\n"
        "	ldrb r4, [r5, #6]\n"
        "	bl func_080D11A4\n"
        "	ldrh r5, [r5, #4]\n"
        "	add r5, r5, r4\n"
        "	lsl r5, r5, #1\n"
        "	mov r4, #3\n"
        "	bl func_080D11A4\n"
        "	lsl r6, r6, #3\n"
        "	add r6, r6, r4\n"
        "	add r6, #2\n"
        "	b _L_080D143A\n"
        "_L_080D1420:\n"
        "	add r6, #1\n"
        "	mov lr, pc\n"
        "	bx sb\n"
        "	.hword 0x1C25\n"
        "	.hword 0x46FE\n"
        "	.hword 0x4748\n"
        "	.hword 0x0224\n"
        "	.hword 0x1964\n"
        "	.hword 0x3102\n"
        "	.hword 0x800C\n"
        "	.hword 0x3E01\n"
        "	.hword 0xD1F4\n"
        "	.hword 0xE006\n"
        "_L_080D143A:\n"
        "	sub r5, r1, r5\n"
        "_L_080D143C:\n"
        "	add r5, #2\n"
        "	ldrh r4, [r5]\n"
        "	add r1, #2\n"
        "	strh r4, [r1]\n"
        "	sub r6, #1\n"
        "	bne _L_080D143C\n"
        "	cmp r1, r8\n"
        "	blo _L_080D13A4\n"
        "	pop {r4}\n"
        "	bx r4\n"
        "_L_080D1450:\n"
        "	ldm r0!, {r2}\n"
        "	add r3, #0x20\n"
        "	b _L_080D13A8\n"
        "_L_080D1456:\n"
        "	ldm r0!, {r2}\n"
        "	add r3, #0x20\n"
        "	b _L_080D13F8\n"
        "	.hword 0x46E6\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D145E @ 0x080D145E (142B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D145E @ 0x080D145E (142 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(RW)
 * CFG Structure:
 *   L_080D145E: if (==) goto L_080D14C6
 *   L_080D1482: if (> (s)) goto L_080D1482
 *   L_080D1498: if (==) goto L_080D14AA
 *   L_080D14AC: if (> (s)) goto L_080D14AC
 *   L_080D14C6: if (>= 0) goto L_080D14D4
 *   L_080D14DE: if (> (s)) goto L_080D14DC
 * ========================================================================== */
void func_080D145E(void) {
    __asm__ volatile(
        "	push {r2, lr}\n"
        "	mov r2, sl\n"
        "	cmp r5, #1\n"
        "	beq _L_080D14C6\n"
        "	lsl r4, r5, #0x1f\n"
        "	bne _L_080D1498\n"
        "	sub r5, r1, r5\n"
        "	lsl r4, r5, #0x1f\n"
        "	beq _L_080D1482\n"
        "	add r5, #1\n"
        "	ldrh r4, [r5]\n"
        "	lsr r4, r4, #8\n"
        "	lsl r4, r4, #8\n"
        "	orr r4, r2\n"
        "	add r1, #1\n"
        "	strh r4, [r1]\n"
        "	sub r6, #1\n"
        "	beq _L_080D1494\n"
        "_L_080D1482:\n"
        "	add r5, #2\n"
        "	ldrh r4, [r5]\n"
        "	add r1, #2\n"
        "	strh r4, [r1]\n"
        "	sub r6, #2\n"
        "	bgt _L_080D1482\n"
        "	lsl r4, r4, #0x18\n"
        "	lsr r2, r4, #0x18\n"
        "	add r1, r1, r6\n"
        "_L_080D1494:\n"
        "	mov sl, r2\n"
        "	pop {r2, pc}\n"
        "_L_080D1498:\n"
        "	sub r5, r1, r5\n"
        "	lsl r4, r5, #0x1f\n"
        "	beq _L_080D14AA\n"
        "	add r5, #1\n"
        "	ldrh r2, [r5]\n"
        "	lsr r2, r2, #8\n"
        "	add r1, #1\n"
        "	sub r6, #1\n"
        "	beq _L_080D14C2\n"
        "_L_080D14AA:\n"
        "	sub r1, #1\n"
        "_L_080D14AC:\n"
        "	add r5, #2\n"
        "	ldrh r4, [r5]\n"
        "	lsl r4, r4, #8\n"
        "	orr r4, r2\n"
        "	add r1, #2\n"
        "	strh r4, [r1]\n"
        "	lsr r2, r4, #0x10\n"
        "	sub r6, #2\n"
        "	bgt _L_080D14AC\n"
        "	add r6, #1\n"
        "	add r1, r1, r6\n"
        "_L_080D14C2:\n"
        "	mov sl, r2\n"
        "	pop {r2, pc}\n"
        "_L_080D14C6:\n"
        "	lsl r4, r1, #0x1f\n"
        "	bpl _L_080D14D4\n"
        "	lsl r4, r2, #8\n"
        "	orr r4, r2\n"
        "	add r1, #1\n"
        "	add r6, #1\n"
        "	b _L_080D14DE\n"
        "_L_080D14D4:\n"
        "	ldrh r4, [r1]\n"
        "	lsr r4, r4, #8\n"
        "	lsl r2, r4, #8\n"
        "	orr r4, r2\n"
        "_L_080D14DC:\n"
        "	add r1, #2\n"
        "_L_080D14DE:\n"
        "	strh r4, [r1]\n"
        "	sub r6, #2\n"
        "	bgt _L_080D14DC\n"
        "	lsr r2, r4, #8\n"
        "	add r1, r1, r6\n"
        "	mov sl, r2\n"
        "	pop {r2, pc}\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D14EC @ 0x080D14EC (32B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D14EC @ 0x080D14EC (32 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x04:u16(W), +0x06:u8(W)
 * Callees: func_080D11A4
 * CFG Structure:
 *   L_080D14F0: call func_080D11A4(); if (!=) goto L_080D14F0
 * ========================================================================== */
extern void func_080D11A4(void);
void func_080D14EC(void) {
    __asm__ volatile(
        "	push {r1, r7, lr}\n"
        "	mov r6, #1\n"
        "_L_080D14F0:\n"
        "	mov r4, #4\n"
        "	bl func_080D11A4\n"
        "	add r4, #1\n"
        "	strb r4, [r7, #6]\n"
        "	strh r6, [r7, #4]\n"
        "	add r7, #4\n"
        "	mov r1, #1\n"
        "	lsl r1, r4\n"
        "	add r6, r6, r1\n"
        "	sub r5, #1\n"
        "	bne _L_080D14F0\n"
        "	pop {r1, r7, pc}\n"
        "	.hword 0x0000\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D1518 @ 0x080D1518 (48B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D1518 @ 0x080D1518 (48 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x02:u16(RW)
 * CFG Structure:
 *   L_080D151C: if (< (u)) goto L_080D151C
 * ========================================================================== */
void func_080D1518(void) {
    __asm__ volatile(
        "	mov r6, #0xf\n"
        "	mov r5, #0\n"
        "_L_080D151C:\n"
        "	ldrh r2, [r0, #2]\n"
        "	lsr r1, r2, #4\n"
        "	lsr r3, r2, #0xc\n"
        "	lsr r4, r2, #8\n"
        "	add r1, r1, r5\n"
        "	add r2, r2, r1\n"
        "	add r3, r3, r2\n"
        "	add r5, r4, r3\n"
        "	and r1, r6\n"
        "	and r2, r6\n"
        "	and r5, r6\n"
        "	lsl r1, r1, #4\n"
        "	lsl r3, r3, #0xc\n"
        "	lsl r4, r5, #8\n"
        "	orr r1, r2\n"
        "	orr r1, r3\n"
        "	orr r1, r4\n"
        "	strh r1, [r0, #2]\n"
        "	add r0, #2\n"
        "	cmp r0, r8\n"
        "	blo _L_080D151C\n"
        "	bx lr\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D1548 @ 0x080D1548 (28B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D1548 @ 0x080D1548 (28 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x02:u16(RW)
 * CFG Structure:
 *   L_080D154C: if (< (u)) goto L_080D154C
 * ========================================================================== */
void func_080D1548(void) {
    __asm__ volatile(
        "	mov r5, #0xff\n"
        "	mov r4, #0\n"
        "_L_080D154C:\n"
        "	ldrh r2, [r0, #2]\n"
        "	lsr r3, r2, #8\n"
        "	add r2, r2, r4\n"
        "	and r2, r5\n"
        "	add r4, r3, r2\n"
        "	lsl r1, r4, #8\n"
        "	orr r1, r2\n"
        "	strh r1, [r0, #2]\n"
        "	add r0, #2\n"
        "	cmp r0, r8\n"
        "	blo _L_080D154C\n"
        "	bx lr\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D1564 @ 0x080D1564 (16B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D1564 @ 0x080D1564 (16 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x02:u16(RW)
 * CFG Structure:
 *   L_080D1566: if (< (u)) goto L_080D1566
 * ========================================================================== */
void func_080D1564(void) {
    __asm__ volatile(
        "	mov r4, #0\n"
        "_L_080D1566:\n"
        "	ldrh r2, [r0, #2]\n"
        "	add r4, r4, r2\n"
        "	strh r4, [r0, #2]\n"
        "	add r0, #2\n"
        "	cmp r0, r8\n"
        "	blo _L_080D1566\n"
        "	bx lr\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D1574 @ 0x080D1574 (32B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D1574 @ 0x080D1574 (32 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x02:u16(RW)
 * CFG Structure:
 *   L_080D157C: if (< (u)) goto L_080D157C
 * ========================================================================== */
void func_080D1574(void) {
    __asm__ volatile(
        "	mov r3, #0xff\n"
        "	lsl r6, r3, #8\n"
        "	mov r4, #0\n"
        "	mov r5, #0\n"
        "_L_080D157C:\n"
        "	ldrh r2, [r0, #2]\n"
        "	add r4, r4, r2\n"
        "	and r4, r3\n"
        "	add r5, r5, r2\n"
        "	and r5, r6\n"
        "	add r1, r5, #0\n"
        "	orr r1, r4\n"
        "	strh r1, [r0, #2]\n"
        "	add r0, #2\n"
        "	cmp r0, r8\n"
        "	blo _L_080D157C\n"
        "	bx lr\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D15B6 @ 0x080D15B6 (114B) [PURE-C | agbcp_O2] --- */
/* func_080D15B6 @ 0x080D15B6 mode=THUMB size=0x72 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D15B6 @ 0x080D15B6  mode=THUMB  size=0x69C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
void func_080D15B6(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    func_0x080d19c6(*(undefined4 *)(param_1 + 0x24));
  }
  func_0x080d19c6();
  (*_DAT_080d1618)();
  return;
}

/* --- func_080D1A04 @ 0x080D1A04 (48B) [PURE-C | agbcp_O2] --- */
/* func_080D1A04 @ 0x080D1A04 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* --- func_080D1A74 @ 0x080D1A74 (32B) [PURE-C | agbcp_O2] --- */
/* func_080D1A74 @ 0x080D1A74 mode=THUMB size=0x20 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* --- func_080D1AC4 @ 0x080D1AC4 (48B) [PURE-C | agbcp_O2] --- */
/* func_080D1AC4 @ 0x080D1AC4 mode=THUMB size=0x30 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* --- func_080D1C52 @ 0x080D1C52 (602B) [PURE-C | agbcp_O2] --- */
/* func_080D1C52 @ 0x080D1C52 mode=THUMB size=0x25A (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D1C52 @ 0x080D1C52  mode=THUMB  size=0x2CE  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_080D1C52(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint unaff_r8;
  int unaff_r9;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    if (-1 < *(int *)(param_1 + 4)) {
      iVar2 = *_DAT_080d1ea4;
      func_0x080d2b30(param_1);
      if (-1 < *(int *)(param_1 + 4)) {
        uVar3 = (uint)*(ushort *)(param_1 + 0x22) + (uint)*(ushort *)(param_1 + 0x20);
LAB_080d1ddc:
        *(short *)(param_1 + 0x22) = (short)uVar3;
        if (0x95 < uVar3) {
          pbVar11 = *(byte **)(param_1 + 0x2c);
          uVar8 = 1;
          uVar9 = 0;
          uVar3 = (uint)*(byte *)(param_1 + 8);
          do {
            if ((*pbVar11 & 0x80) != 0) {
              uVar9 = uVar9 | uVar8;
              for (pbVar10 = *(byte **)(pbVar11 + 0x20); pbVar10 != (byte *)0x0;
                  pbVar10 = *(byte **)(pbVar10 + 0x34)) {
                if ((*pbVar10 & 199) == 0) {
                  func_080D262C(pbVar10);
                }
                else if ((pbVar10[0x10] != 0) &&
                        (iVar4 = pbVar10[0x10] - 1, pbVar10[0x10] = (byte)iVar4, iVar4 == 0)) {
                  *pbVar10 = *pbVar10 | 0x40;
                }
              }
              if ((*pbVar11 & 0x40) != 0) {
                func_080D2640(pbVar11);
                *pbVar11 = 0x80;
                pbVar11[0xf] = 2;
                pbVar11[0x13] = 0x40;
                pbVar11[0x19] = 0x16;
                pbVar11[0x24] = 1;
              }
              do {
                while( true ) {
                  if (pbVar11[1] != 0) {
                    pbVar11[1] = pbVar11[1] - 1;
                    if ((pbVar11[0x19] != 0) && (pbVar11[0x17] != 0)) {
                      if (pbVar11[0x1c] == 0) {
                        iVar4 = (uint)pbVar11[0x1a] + (uint)pbVar11[0x19];
                        pbVar11[0x1a] = (byte)iVar4;
                        if ((iVar4 + -0x40) * 0x1000000 < 0) {
                          iVar4 = (int)(char)(byte)iVar4;
                        }
                        else {
                          iVar4 = 0x80 - iVar4;
                        }
                        uVar7 = (int)(iVar4 * (uint)pbVar11[0x17]) >> 6;
                        if (((pbVar11[0x16] ^ uVar7) & 0xff) != 0) {
                          pbVar11[0x16] = (byte)uVar7;
                          if (pbVar11[0x18] == 0) {
                            bVar6 = 0xc;
                          }
                          else {
                            bVar6 = 3;
                          }
                          *pbVar11 = *pbVar11 | bVar6;
                        }
                      }
                      else {
                        pbVar11[0x1c] = pbVar11[0x1c] - 1;
                      }
                    }
                    goto LAB_080d1db8;
                  }
                  pbVar10 = *(byte **)(pbVar11 + 0x40);
                  bVar6 = *pbVar10;
                  uVar7 = (uint)bVar6;
                  if (uVar7 < 0x80) {
                    uVar7 = (uint)pbVar11[7];
                  }
                  else {
                    pbVar10 = pbVar10 + 1;
                    *(byte **)(pbVar11 + 0x40) = pbVar10;
                    if (0xbc < uVar7) {
                      pbVar11[7] = bVar6;
                    }
                  }
                  if (0xce < uVar7) {
                    uVar7 = uVar7 - 0xcf;
                    param_2 = param_1;
                    goto SUB_080d1e9c;
                  }
                  if (0xb0 < uVar7) break;
                  pbVar11[1] = *(byte *)((uVar7 - 0x80) + _DAT_080d1ea0);
                }
                *(char *)(param_1 + 10) = (char)(uVar7 - 0xb1);
                func_0x080d1e9c(param_1,pbVar11,pbVar10,
                                *(undefined4 *)(*(int *)(iVar2 + 0x34) + (uVar7 - 0xb1) * 4));
              } while (*pbVar11 != 0);
            }
LAB_080d1db8:
            if (uVar3 - 1 == 0 || (int)uVar3 < 1) goto LAB_080d1dc4;
            pbVar11 = pbVar11 + 0x50;
            uVar8 = uVar8 << 1;
            uVar3 = uVar3 - 1;
          } while( true );
        }
        uVar3 = (uint)*(byte *)(param_1 + 8);
        pbVar11 = *(byte **)(param_1 + 0x2c);
        do {
          if (((*pbVar11 & 0x80) != 0) && ((*pbVar11 & 0xf) != 0)) {
            func_0x080d2bf8(param_1,pbVar11);
            for (pbVar10 = *(byte **)(pbVar11 + 0x20); pbVar10 != (byte *)0x0;
                pbVar10 = *(byte **)(pbVar10 + 0x34)) {
              if ((*pbVar10 & 199) == 0) {
                func_080D262C(pbVar10);
              }
              else {
                bVar6 = pbVar10[1];
                uVar7 = bVar6 & 7;
                if (((*pbVar11 & 3) != 0) && (func_0x080d1ef0(), (bVar6 & 7) != 0)) {
                  pbVar10[0x1d] = pbVar10[0x1d] | 1;
                }
                if ((*pbVar11 & 0xc) != 0) {
                  param_2 = (uint)pbVar10[8] + (int)(char)pbVar11[8];
                  if (param_2 < 0) {
                    param_2 = 0;
                  }
                  if ((bVar6 & 7) != 0) goto SUB_080d1e9c;
                  uVar5 = func_080D21B0(*(undefined4 *)(pbVar10 + 0x24),param_2,pbVar11[9]);
                  *(undefined4 *)(pbVar10 + 0x20) = uVar5;
                }
              }
            }
            *pbVar11 = *pbVar11 & 0xf0;
          }
        } while ((uVar3 - 1 != 0 && 0 < (int)uVar3) &&
                (pbVar10 = pbVar11 + 0x50, bVar1 = -0x51 < (int)pbVar11, uVar3 = uVar3 - 1,
                pbVar11 = pbVar10, pbVar10 != (byte *)0x0 && bVar1));
      }
    }
LAB_080d1e8c:
    *(undefined4 *)(param_1 + 0x34) = _DAT_080d1ea8;
    uVar7 = unaff_r8;
    param_2 = unaff_r9;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x3c);
  }
SUB_080d1e9c:
  return CONCAT44(param_2,uVar7);
LAB_080d1dc4:
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (uVar9 == 0) {
    *(undefined4 *)(param_1 + 4) = 0x80000000;
    goto LAB_080d1e8c;
  }
  *(uint *)(param_1 + 4) = uVar9;
  uVar3 = *(ushort *)(param_1 + 0x22) - 0x96;
  goto LAB_080d1ddc;
}

/* --- func_080D1EAC @ 0x080D1EAC (68B) [PURE-C | agbcp_O2] --- */
/* func_080D1EAC @ 0x080D1EAC mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* --- func_080D1F20 @ 0x080D1F20 (512B) [PURE-C | agbcp_O2] --- */
/* func_080D1F20 @ 0x080D1F20 mode=THUMB size=0x200 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D1F20 @ 0x080D1F20  mode=THUMB  size=0x290  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_080D1F20(int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 unaff_r9;
  undefined4 in_lr;
  bool bVar18;
  
  iVar6 = *_DAT_080d2118;
  param_3[4] = *(byte *)(param_1 + _DAT_080d211c);
  pbVar8 = *(byte **)(param_3 + 0x40);
  if (*pbVar8 < 0x80) {
    param_3[5] = *pbVar8;
    pbVar9 = pbVar8 + 1;
    if (*pbVar9 < 0x80) {
      param_3[6] = *pbVar9;
      pbVar9 = pbVar8 + 2;
      if (*pbVar9 < 0x80) {
        param_3[4] = param_3[4] + *pbVar9;
        pbVar9 = pbVar8 + 3;
      }
    }
    *(byte **)(param_3 + 0x40) = pbVar9;
  }
  bVar5 = 0;
  pbVar8 = param_3 + 0x24;
  bVar1 = *pbVar8;
  if ((bVar1 & 0xc0) == 0) {
    bVar7 = param_3[5];
  }
  else {
    bVar7 = param_3[5];
    uVar10 = (uint)bVar7;
    if ((bVar1 & 0x40) != 0) {
      uVar10 = (uint)*(byte *)(*(int *)(param_3 + 0x2c) + uVar10);
    }
    pbVar8 = (byte *)(uVar10 * 0xc + *(int *)(param_3 + 0x28));
    if ((*pbVar8 & 0xc0) != 0) goto LAB_080d2106;
    if ((bVar1 & 0x80) != 0) {
      if ((pbVar8[3] & 0x80) != 0) {
        bVar5 = (pbVar8[3] + 0x40) * '\x02';
      }
      bVar7 = pbVar8[1];
    }
  }
  uVar10 = (uint)param_3[0x1d] + (uint)*(byte *)(param_2 + 9);
  if (0xff < uVar10) {
    uVar10 = 0xff;
  }
  bVar1 = *pbVar8;
  if ((bVar1 & 7) == 0) {
    bVar3 = false;
    pbVar15 = (byte *)(iVar6 + 0x50);
    uVar11 = (uint)*(byte *)(iVar6 + 6);
    uVar16 = uVar10;
    pbVar9 = param_3;
    pbVar4 = (byte *)0x0;
    do {
      pbVar14 = pbVar15;
      if ((*pbVar15 & 199) == 0) goto LAB_080d2060;
      pbVar14 = pbVar4;
      if ((*pbVar15 & 0x40) == 0) {
        if (!bVar3) goto LAB_080d2038;
        goto LAB_080d2054;
      }
      if (bVar3) {
LAB_080d2038:
        uVar12 = (uint)pbVar15[0x13];
        if (uVar12 < uVar16) {
          uVar16 = uVar12;
          pbVar4 = *(byte **)(pbVar15 + 0x2c);
          goto LAB_080d2052;
        }
        if (uVar12 <= uVar16) {
          pbVar4 = *(byte **)(pbVar15 + 0x2c);
          bVar18 = pbVar9 <= pbVar4;
          if ((pbVar9 < pbVar4) || (pbVar4 = pbVar9, bVar18)) goto LAB_080d2052;
        }
      }
      else {
        bVar3 = true;
        uVar16 = (uint)pbVar15[0x13];
        pbVar4 = *(byte **)(pbVar15 + 0x2c);
LAB_080d2052:
        pbVar9 = pbVar4;
        pbVar14 = pbVar15;
      }
LAB_080d2054:
      pbVar15 = pbVar15 + 0x40;
      uVar12 = uVar11 - 1;
      bVar18 = 0 < (int)uVar11;
      uVar11 = uVar12;
      pbVar4 = pbVar14;
    } while (uVar12 != 0 && bVar18);
    if (pbVar14 == (byte *)0x0) goto LAB_080d2106;
  }
  else {
    if (*(int *)(iVar6 + 0x1c) == 0) goto LAB_080d2106;
    pbVar14 = (byte *)(*(int *)(iVar6 + 0x1c) + ((bVar1 & 7) - 1) * 0x40);
    if (((((*pbVar14 & 199) != 0) && ((*pbVar14 & 0x40) == 0)) && (uVar10 <= pbVar14[0x13])) &&
       ((pbVar14[0x13] != uVar10 || (*(byte **)(pbVar14 + 0x2c) < param_3)))) goto LAB_080d2106;
  }
LAB_080d2060:
  func_080D262C(pbVar14);
  pbVar14[0x30] = 0;
  pbVar14[0x31] = 0;
  pbVar14[0x32] = 0;
  pbVar14[0x33] = 0;
  iVar13 = *(int *)(param_3 + 0x20);
  *(int *)(pbVar14 + 0x34) = iVar13;
  if (iVar13 != 0) {
    *(byte **)(iVar13 + 0x30) = pbVar14;
  }
  *(byte **)(param_3 + 0x20) = pbVar14;
  *(byte **)(pbVar14 + 0x2c) = param_3;
  bVar2 = param_3[0x1b];
  param_3[0x1c] = bVar2;
  if (bVar2 != 0) {
    func_0x080d2160(bVar2,param_3);
  }
  func_0x080d2bf8(param_2,param_3);
  *(undefined4 *)(pbVar14 + 0x10) = *(undefined4 *)(param_3 + 4);
  pbVar14[0x13] = (byte)uVar10;
  pbVar14[8] = bVar7;
  pbVar14[0x14] = bVar5;
  pbVar14[1] = *pbVar8;
  uVar17 = *(undefined4 *)(pbVar8 + 4);
  *(undefined4 *)(pbVar14 + 0x24) = uVar17;
  *(undefined4 *)(pbVar14 + 4) = *(undefined4 *)(pbVar8 + 8);
  *(undefined2 *)(pbVar14 + 0xc) = *(undefined2 *)(param_3 + 0x1e);
  func_0x080d1ef0();
  iVar13 = (uint)pbVar14[8] + (int)(char)param_3[8];
  if (iVar13 < 0) {
    iVar13 = 0;
  }
  if ((bVar1 & 7) == 0) {
    uVar17 = func_080D21B0(uVar17,iVar13,param_3[9]);
  }
  else {
    pbVar14[0x1e] = pbVar8[2];
    bVar5 = pbVar8[3];
    if (((bVar5 & 0x80) != 0) || ((bVar5 & 0x70) == 0)) {
      bVar5 = 8;
    }
    pbVar14[0x1f] = bVar5;
    uVar17 = func_0x080d1e9c(bVar1 & 7,iVar13,param_3[9],*(undefined4 *)(iVar6 + 0x30));
  }
  *(undefined4 *)(pbVar14 + 0x20) = uVar17;
  *pbVar14 = 0x80;
  *param_3 = *param_3 & 0xf0;
LAB_080d2106:
  return CONCAT44(unaff_r9,in_lr);
}

/* --- func_080D21B0 @ 0x080D21B0 (100B) [PURE-C | agbcp_O2] --- */
/* func_080D21B0 @ 0x080D21B0 mode=THUMB size=0x64 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* --- func_080D2254 @ 0x080D2254 (120B) [PURE-C | agbcp_O2] --- */
/* func_080D2254 @ 0x080D2254 mode=THUMB size=0x78 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D2254 @ 0x080D2254  mode=THUMB  size=0x78  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_080D2254(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  func_0x080d3750(_DAT_080d22a8 & 0xfffffffe,_DAT_080d22ac,_DAT_080d22b0);
  func_080D2654(_DAT_080d22b4);
  func_080D2510(_DAT_080d22b8);
  func_080D27F0(_DAT_080d22bc);
  piVar3 = _DAT_080d22c4;
  for (uVar1 = _DAT_080d22c0 & 0xffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    iVar2 = *piVar3;
    func_080D2994(iVar2,piVar3[1],(char)piVar3[2]);
    *(char *)(iVar2 + 0xb) = (char)*(undefined2 *)((int)piVar3 + 10);
    *(undefined4 *)(iVar2 + 0x18) = _DAT_080d22c8;
    piVar3 = piVar3 + 3;
  }
  return in_lr;
}

/* --- func_080D22CC @ 0x080D22CC (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D15A4();
void func_080D22CC(void) {
  func_080D15A4();
}

/* --- func_080D22D8 @ 0x080D22D8 (44B) [PURE-C | agbcp_O2] --- */
/* func_080D22D8 @ 0x080D22D8 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* --- func_080D2304 @ 0x080D2304 (76B) [PURE-C | agbcp_O2] --- */
/* func_080D2304 @ 0x080D2304 mode=THUMB size=0x4C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D2304 @ 0x080D2304  mode=THUMB  size=0x4C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_080D2304(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  piVar1 = (int *)((param_1 & 0xffff) * 8 + _DAT_080d2334);
  piVar2 = *(int **)((uint)*(ushort *)(piVar1 + 1) * 0xc + _DAT_080d2330);
  iVar3 = *piVar1;
  if (*piVar2 == iVar3) {
    if (((short)piVar2[1] == 0) || (piVar2[1] < 0)) {
      func_080D2A0C(piVar2,*piVar2);
    }
  }
  else {
    func_080D2A0C(piVar2,iVar3);
  }
  return in_lr;
}

/* --- func_080D2350 @ 0x080D2350 (84B) [PURE-C | agbcp_O2] --- */
/* func_080D2350 @ 0x080D2350 mode=THUMB size=0x54 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D2350 @ 0x080D2350  mode=THUMB  size=0x54  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_080D2350(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  piVar1 = (int *)((param_1 & 0xffff) * 8 + _DAT_080d2380);
  piVar2 = *(int **)((uint)*(ushort *)(piVar1 + 1) * 0xc + _DAT_080d237c);
  iVar3 = *piVar1;
  if (*piVar2 == iVar3) {
    if ((short)piVar2[1] == 0) {
      func_080D2A0C(piVar2,*piVar2);
    }
    else if (piVar2[1] < 0) {
      func_0x080d2218(piVar2);
    }
  }
  else {
    func_080D2A0C(piVar2,iVar3);
  }
  return in_lr;
}

/* --- func_080D23A4 @ 0x080D23A4 (52B) [PURE-C | agbcp_O2] --- */
/* func_080D23A4 @ 0x080D23A4 mode=THUMB size=0x34 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* --- func_080D23D8 @ 0x080D23D8 (52B) [PURE-C | agbcp_O2] --- */
/* func_080D23D8 @ 0x080D23D8 mode=THUMB size=0x34 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* --- func_080D240C @ 0x080D240C (44B) [PURE-C | agbcp_O2] --- */
/* func_080D240C @ 0x080D240C mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D240C @ 0x080D240C  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_080D240C(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = _DAT_080d2434;
  for (uVar1 = _DAT_080d2430 & 0xffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    func_080D2AF0(*puVar2);
    puVar2 = puVar2 + 3;
  }
  return in_lr;
}

/* --- func_080D2438 @ 0x080D2438 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D2218();
void func_080D2438(void) {
  func_080D2218();
}

/* --- func_080D2444 @ 0x080D2444 (44B) [PURE-C | agbcp_O2] --- */
/* func_080D2444 @ 0x080D2444 mode=THUMB size=0x2C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D2444 @ 0x080D2444  mode=THUMB  size=0x2C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_080D2444(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = _DAT_080d246c;
  for (uVar1 = _DAT_080d2468 & 0xffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    func_0x080d2218(*puVar2);
    puVar2 = puVar2 + 3;
  }
  return in_lr;
}

/* --- func_080D2470 @ 0x080D2470 (16B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D2234();
void func_080D2470(u32 arg0,u16 arg1) {
  func_080D2234(arg0,arg1);
}

/* --- func_080D24C8 @ 0x080D24C8 (72B) [PURE-C | agbcp_O2] --- */
/* func_080D24C8 @ 0x080D24C8 mode=THUMB size=0x48 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D24C8 @ 0x080D24C8  mode=THUMB  size=0x48  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_080D24C8(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(param_1 + 8);
  pbVar1 = *(byte **)(param_1 + 0x2c);
  if (uVar2 != 0) {
    do {
      if (((*pbVar1 & 0x80) != 0) && ((*pbVar1 & 0x40) != 0)) {
        func_080D2640(pbVar1);
        *pbVar1 = 0x80;
        pbVar1[0xf] = 2;
        pbVar1[0x13] = 0x40;
        pbVar1[0x19] = 0x16;
        pbVar1[0x24] = 1;
      }
      uVar2 = uVar2 - 1;
      pbVar1 = pbVar1 + 0x50;
    } while (0 < (int)uVar2);
  }
  return in_lr;
}

/* --- func_080D2510 @ 0x080D2510 (280B) [PURE-C | agbcp_O2] --- */
/* func_080D2510 @ 0x080D2510 mode=THUMB size=0x118 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D2510 @ 0x080D2510  mode=THUMB  size=0x11C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_080D2510(int param_1)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 uStack_14;
  
  *_DAT_080d25d8 = 0x8f;
  puVar1 = _DAT_080d25dc;
  *_DAT_080d25dc = 0;
  puVar2 = _DAT_080d25e0;
  *_DAT_080d25e0 = 8;
  puVar2[6] = 8;
  puVar2[0x16] = 8;
  puVar2[2] = 0x80;
  puVar2[10] = 0x80;
  puVar2[0x1a] = 0x80;
  puVar2[0xd] = 0;
  *(undefined1 *)puVar1 = 0x77;
  piVar4 = (int *)*_DAT_080d25e4;
  iVar5 = *piVar4;
  if (iVar5 == _DAT_080d25e8) {
    *piVar4 = iVar5 + 1;
    iVar3 = _DAT_080d25ec;
    *(undefined4 *)(_DAT_080d25ec + 0x20) = _DAT_080d25f0;
    *(undefined4 *)(iVar3 + 0x44) = _DAT_080d25f4;
    *(undefined4 *)(iVar3 + 0x4c) = _DAT_080d25f8;
    *(undefined4 *)(iVar3 + 0x70) = _DAT_080d25fc;
    *(undefined4 *)(iVar3 + 0x74) = _DAT_080d2600;
    *(undefined4 *)(iVar3 + 0x78) = _DAT_080d2604;
    *(undefined4 *)(iVar3 + 0x7c) = _DAT_080d2608;
    *(undefined4 *)(iVar3 + 0x80) = _DAT_080d260c;
    *(undefined4 *)(iVar3 + 0x84) = _DAT_080d2610;
    piVar4[7] = param_1;
    piVar4[10] = _DAT_080d2614;
    piVar4[0xb] = _DAT_080d2618;
    piVar4[0xc] = _DAT_080d261c;
    *(char *)(piVar4 + 3) = (char)_DAT_080d2620;
    uStack_14 = 0;
    func_0x080d3750(&uStack_14,param_1,_DAT_080d2624);
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined1 *)(param_1 + 0x1c) = 0x11;
    *(undefined1 *)(param_1 + 0x41) = 2;
    *(undefined1 *)(param_1 + 0x5c) = 0x22;
    *(undefined1 *)(param_1 + 0x81) = 3;
    *(undefined1 *)(param_1 + 0x9c) = 0x44;
    *(undefined1 *)(param_1 + 0xc1) = 4;
    *(undefined1 *)(param_1 + 0xdc) = 0x88;
    *piVar4 = iVar5;
  }
  return in_lr;
}

/* --- func_080D262C @ 0x080D262C (20B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
/* paridad 90.7% preset agbcc_O2 */
void func_080D262C(u32 arg0) {
  func_080D3910(arg0,*(u32 *)0x02001CB8);
}

/* --- func_080D2640 @ 0x080D2640 (20B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
/* paridad 90.7% preset agbcc_O2 */
void func_080D2640(u32 arg0) {
  func_080D3910(arg0,*(int *)0x02001CBC);
}

/* --- func_080D2654 @ 0x080D2654 (248B) [PURE-C | agbcp_O2] --- */
/* func_080D2654 @ 0x080D2654 mode=THUMB size=0xF8 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D2654 @ 0x080D2654  mode=THUMB  size=0x19C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_080D2654(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  undefined4 uStack_10;
  
  *param_1 = 0;
  if ((*_DAT_080d270c & 0x2000000) != 0) {
    *_DAT_080d270c = _DAT_080d2710;
  }
  if ((*_DAT_080d2714 & 0x2000000) != 0) {
    *_DAT_080d2714 = _DAT_080d2710;
  }
  puVar1 = _DAT_080d2718;
  *_DAT_080d2718 = 0x400;
  puVar1[6] = 0x400;
  puVar1 = _DAT_080d271c;
  *_DAT_080d271c = 0x8f;
  puVar1[-1] = (short)_DAT_080d2720;
  *_DAT_080d2724 = *_DAT_080d2724 & 0x3f | 0x40;
  puVar2 = _DAT_080d2728;
  *_DAT_080d2728 = param_1 + 0xd4;
  puVar2[1] = _DAT_080d272c;
  puVar2[3] = param_1 + 0x260;
  puVar2[4] = _DAT_080d2730;
  *_DAT_080d2734 = param_1;
  uStack_10 = 0;
  func_0x080d3750(&uStack_10,param_1,_DAT_080d2738);
  *(undefined1 *)((int)param_1 + 6) = 8;
  *(undefined1 *)((int)param_1 + 7) = 0xf;
  param_1[0xe] = _DAT_080d273c;
  uVar3 = _DAT_080d2740;
  param_1[10] = _DAT_080d2740;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar3;
  uVar3 = _DAT_080d2744;
  func_0x080d1a34(_DAT_080d2744);
  param_1[0xd] = uVar3;
  func_0x080d274c(0x40000);
  *param_1 = _DAT_080d2748;
  return in_lr;
}

/* --- func_080D274C @ 0x080D274C (164B) [PURE-C | agbcp_O2] --- */
/* func_080D274C @ 0x080D274C mode=THUMB size=0xA4 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* --- func_080D27F0 @ 0x080D27F0 (152B) [PURE-C | agbcp_O2] --- */
/* func_080D27F0 @ 0x080D27F0 mode=THUMB size=0x98 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D27F0 @ 0x080D27F0  mode=THUMB  size=0x98  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_080D27F0(uint param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  piVar3 = (int *)*_DAT_080d287c;
  if (*piVar3 == _DAT_080d2880) {
    *piVar3 = *piVar3 + 1;
    if ((param_1 & 0xff) != 0) {
      *(byte *)((int)piVar3 + 5) = (byte)param_1 & 0x7f;
    }
    if ((param_1 & 0xf00) != 0) {
      *(char *)((int)piVar3 + 6) = (char)((param_1 & 0xf00) >> 8);
      iVar2 = 0xc;
      piVar1 = piVar3 + 0x14;
      do {
        *(undefined1 *)piVar1 = 0;
        iVar2 = iVar2 + -1;
        piVar1 = piVar1 + 0x10;
      } while (iVar2 != 0);
    }
    if ((param_1 & 0xf000) != 0) {
      *(char *)((int)piVar3 + 7) = (char)((param_1 & 0xf000) >> 0xc);
    }
    if ((param_1 & 0xb00000) != 0) {
      *_DAT_080d2884 = *_DAT_080d2884 & 0x3f | (byte)((param_1 & 0x300000) >> 0xe);
    }
    if ((param_1 & 0xf0000) != 0) {
      func_080D28DC();
      func_0x080d274c(param_1 & 0xf0000);
    }
    *piVar3 = _DAT_080d2880;
  }
  return in_lr;
}

/* --- func_080D2888 @ 0x080D2888 (84B) [PURE-C | agbcp_O2] --- */
/* func_080D2888 @ 0x080D2888 mode=THUMB size=0x54 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D2888 @ 0x080D2888  mode=THUMB  size=0x54  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_080D2888(void)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 in_lr;
  
  piVar5 = (int *)*_DAT_080d28d4;
  if (*piVar5 == _DAT_080d28d8) {
    *piVar5 = *piVar5 + 1;
    iVar3 = 0xc;
    piVar1 = piVar5 + 0x14;
    do {
      *(undefined1 *)piVar1 = 0;
      iVar3 = iVar3 + -1;
      piVar1 = piVar1 + 0x10;
    } while (0 < iVar3);
    puVar2 = (undefined1 *)piVar5[7];
    if (puVar2 != (undefined1 *)0x0) {
      uVar4 = 1;
      do {
        func_0x080d3910(uVar4 & 0xff,piVar5[0xb]);
        *puVar2 = 0;
        uVar4 = uVar4 + 1;
        puVar2 = puVar2 + 0x40;
      } while ((int)uVar4 < 5);
    }
    *piVar5 = _DAT_080d28d8;
  }
  return in_lr;
}

/* --- func_080D28DC @ 0x080D28DC (124B) [PURE-C | agbcp_O2] --- */
/* func_080D28DC @ 0x080D28DC mode=THUMB size=0x7C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D28DC @ 0x080D28DC  mode=THUMB  size=0x7C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_080D28DC(void)

{
  undefined2 *puVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar2 = (int *)*_DAT_080d293c;
  uStack_4 = in_lr;
  if ((uint)(*piVar2 + _DAT_080d2940) < 2) {
    *piVar2 = *piVar2 + 10;
    if ((*_DAT_080d2944 & 0x2000000) != 0) {
      *_DAT_080d2944 = _DAT_080d2948;
    }
    if ((*_DAT_080d294c & 0x2000000) != 0) {
      *_DAT_080d294c = _DAT_080d2948;
    }
    puVar1 = _DAT_080d2950;
    *_DAT_080d2950 = 0x400;
    puVar1[6] = 0x400;
    uStack_8 = 0;
    func_0x080d3750(&uStack_8,piVar2 + 0xd4,_DAT_080d2954);
  }
  return uStack_4;
}

/* --- func_080D2958 @ 0x080D2958 (60B) [PURE-C | agbcp_O2] --- */
/* func_080D2958 @ 0x080D2958 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D2958 @ 0x080D2958  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_080D2958(void)

{
  undefined2 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  puVar1 = _DAT_080d2990;
  piVar2 = (int *)*_DAT_080d2988;
  iVar3 = *piVar2;
  if (iVar3 != _DAT_080d298c) {
    *_DAT_080d2990 = 0xb600;
    puVar1[6] = 0xb600;
    *(undefined1 *)(piVar2 + 1) = 0;
    *piVar2 = iVar3 + -10;
  }
  return in_lr;
}

/* --- func_080D2994 @ 0x080D2994 (120B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D2640();

void func_080D2994(int arg0,u8 *arg1,u8 arg2) {
  int val;
  int *mem_ptr;
  if (arg2 != 0) {
    if (0x10 < arg2) {
      arg2 = 0x10;
    }
    mem_ptr = (int *)*(u32 *)0x03007FF0;
    if (*mem_ptr == 0x68736D53) {
      *mem_ptr = *mem_ptr + 1;
      func_080D2640(arg0);
      *(u8 **)(arg0 + 0x2c) = arg1;
      *(u8 *)(arg0 + 8) = arg2;
      *(u32 *)(arg0 + 4) = 0x80000000;
      if (arg2 != 0) {
        do {
          *arg1 = 0;
          arg2 = (u8)(arg2 - 1);
          arg1 += 0x50;
        } while (arg2 != 0);
      }
      if (mem_ptr[8] != 0) {
        *(int *)(arg0 + 0x38) = mem_ptr[8];
        *(int *)(arg0 + 0x3c) = mem_ptr[9];
        mem_ptr[8] = 0;
      }
      mem_ptr[9] = arg0;
      mem_ptr[8] = 0x080D1C45;
      val = 0x68736D53;
      *mem_ptr = 0x68736D53;
      *(int *)(arg0 + 0x34) = val;
    }
  }
}

/* --- func_080D2A0C @ 0x080D2A0C (228B) [PURE-C | agbcp_O2] --- */
/* func_080D2A0C @ 0x080D2A0C mode=THUMB size=0xE4 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D2A0C @ 0x080D2A0C  mode=THUMB  size=0xE4  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_080D2A0C(int *param_1,byte *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (param_1[0xd] != _DAT_080d2aec) {
    return in_lr;
  }
  bVar1 = param_2[2];
  if (((*(char *)((int)param_1 + 0xb) != '\0') &&
      (((*param_1 != 0 && ((*(byte *)param_1[0xb] & 0x40) != 0)) ||
       (((short)param_1[1] != 0 && (-1 < param_1[1])))))) &&
     (bVar1 = param_2[2], bVar1 < *(byte *)((int)param_1 + 9))) {
    return in_lr;
  }
  param_1[0xd] = param_1[0xd] + 1;
  param_1[1] = 0;
  *param_1 = (int)param_2;
  param_1[0xc] = *(int *)(param_2 + 4);
  *(byte *)((int)param_1 + 9) = bVar1;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 7) = 0x96;
  *(undefined2 *)(param_1 + 8) = 0x96;
  *(undefined2 *)((int)param_1 + 0x1e) = 0x100;
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  iVar3 = 0;
  puVar2 = (undefined1 *)param_1[0xb];
  if (*param_2 != 0) {
    if ((char)param_1[2] == '\0') goto LAB_080d2ace;
    do {
      func_0x080d1eac(param_1,puVar2);
      *puVar2 = 0xc0;
      *(undefined4 *)(puVar2 + 0x20) = 0;
      *(undefined4 *)(puVar2 + 0x40) = *(undefined4 *)(param_2 + iVar3 * 4 + 8);
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0x50;
      if ((int)(uint)*param_2 <= iVar3) break;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 2));
  }
  if (iVar3 < (int)(uint)*(byte *)(param_1 + 2)) {
    do {
      func_0x080d1eac(param_1,puVar2);
      *puVar2 = 0;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0x50;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 2));
  }
LAB_080d2ace:
  if ((param_2[3] & 0x80) != 0) {
    func_080D27F0(param_2[3]);
  }
  param_1[0xd] = _DAT_080d2aec;
  return in_lr;
}

/* --- func_080D2AF0 @ 0x080D2AF0 (64B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D1EAC();

void func_080D2AF0(int arg0) {
  int val;
  int val2;
  if (*(int *)(arg0 + 0x34) == 0x68736D53) {
    *(int *)(arg0 + 0x34) = *(int *)(arg0 + 0x34) + 1;
    *(u32 *)(arg0 + 4) = *(u32 *)(arg0 + 4) | 0x80000000;
    val = (int)*(u8 *)(arg0 + 8);
    val2 = *(int *)(arg0 + 0x2c);
    if (0 < val) {
      do {
        func_080D1EAC(arg0,val2);
        val = val - 1;
        val2 = val2 + 0x50;
      } while (0 < val);
    }
    *(int *)(arg0 + 0x34) = 0x68736D53;
  }
}

/* --- func_080D2BF8 @ 0x080D2BF8 (180B) [PURE-C | agbcp_O2] --- */
/* func_080D2BF8 @ 0x080D2BF8 mode=THUMB size=0xB4 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* --- func_080D2CAC @ 0x080D2CAC (168B) [PURE-C | agbcp_O2] --- */
/* func_080D2CAC @ 0x080D2CAC mode=THUMB size=0xA8 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* --- func_080D2DA4 @ 0x080D2DA4 (104B) [PURE-C | agbcp_O2] --- */
/* func_080D2DA4 @ 0x080D2DA4 mode=THUMB size=0x68 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D2DA4 @ 0x080D2DA4  mode=THUMB  size=0x68  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_080D2DA4(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 2);
  bVar2 = *(byte *)(param_1 + 3);
  if (bVar1 < bVar2) {
    if (bVar2 >> 1 < bVar1) goto LAB_080d2dd0;
    *(undefined1 *)(param_1 + 0x1b) = 0xf0;
LAB_080d2dde:
    uVar4 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) >> 4;
    *(char *)(param_1 + 10) = (char)uVar4;
    if (uVar4 < 0x10) goto LAB_080d2df0;
    uVar3 = 0xf;
  }
  else {
    if (bVar2 <= bVar1 >> 1) {
      *(undefined1 *)(param_1 + 0x1b) = 0xf;
      goto LAB_080d2dde;
    }
LAB_080d2dd0:
    *(undefined1 *)(param_1 + 0x1b) = 0xff;
    uVar3 = (undefined1)((uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) >> 4);
  }
  *(undefined1 *)(param_1 + 10) = uVar3;
LAB_080d2df0:
  *(char *)(param_1 + 0x19) =
       (char)((int)((uint)*(byte *)(param_1 + 10) * (uint)*(byte *)(param_1 + 6) + 0xf) >> 4);
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1c) & *(byte *)(param_1 + 0x1b);
  return in_lr;
}

/* --- func_080D2E0C @ 0x080D2E0C (1100B) [PURE-C | agbcp_O2] --- */
/* func_080D2E0C @ 0x080D2E0C mode=THUMB size=0x44C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D2E0C @ 0x080D2E0C  mode=THUMB  size=0x44C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_080D2E0C(void)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *extraout_r1;
  uint uVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  byte bVar14;
  undefined4 in_lr;
  uint uStack_3c;
  byte *pbStack_34;
  byte *pbStack_30;
  byte *pbStack_2c;
  
  iVar3 = *_DAT_080d2e2c;
  if (*(char *)(iVar3 + 10) == '\0') {
    *(undefined1 *)(iVar3 + 10) = 0xe;
  }
  else {
    *(char *)(iVar3 + 10) = *(char *)(iVar3 + 10) + -1;
  }
  uVar13 = 1;
  pbVar12 = *(byte **)(iVar3 + 0x1c);
  do {
    bVar2 = *pbVar12;
    pbVar7 = (byte *)(uint)bVar2;
    if ((bVar2 & 199) != 0) {
      pbStack_34 = _DAT_080d2e90;
      pbStack_30 = _DAT_080d2e98;
      pbVar11 = _DAT_080d2e94;
      if (uVar13 == 2) {
LAB_080d2ec4:
        pbStack_2c = pbStack_34 + 0xb;
        pbVar9 = pbStack_30 + 4;
      }
      else {
        pbStack_34 = _DAT_080d2f1c;
        pbStack_30 = _DAT_080d2f24;
        pbVar11 = _DAT_080d2f20;
        if ((int)uVar13 < 3) {
          if (uVar13 != 1) goto LAB_080d2ec4;
          pbStack_34 = _DAT_080d2e78;
          pbStack_30 = _DAT_080d2e80;
          pbStack_2c = _DAT_080d2e78 + 4;
          pbVar9 = _DAT_080d2e80 + 2;
          pbVar11 = _DAT_080d2e7c;
        }
        else {
          if (uVar13 != 3) goto LAB_080d2ec4;
          pbStack_34 = _DAT_080d2eb0;
          pbStack_30 = _DAT_080d2eb8;
          pbStack_2c = _DAT_080d2eb0 + 4;
          pbVar9 = _DAT_080d2eb8 + 2;
          pbVar11 = _DAT_080d2eb4;
        }
      }
      uStack_3c = (uint)*(byte *)(iVar3 + 10);
      bVar14 = *pbStack_30;
      pbVar4 = (byte *)(uint)bVar14;
      if ((bVar2 & 0x80) == 0) {
        if ((bVar2 & 4) == 0) {
          pbVar11 = pbVar12 + 0x40;
          if ((bVar2 & 0x40) == 0) goto LAB_080d3034;
          if ((bVar2 & 3) == 0) goto LAB_080d3034;
          pbVar11 = (byte *)0x0;
          *pbVar12 = bVar2 & 0xfc;
          pbVar12[0xb] = pbVar12[7];
          if (pbVar12[7] == 0) {
LAB_080d3066:
            iVar5 = (uint)pbVar12[10] * (uint)pbVar12[0xc] + 0xff;
            pbVar7 = (byte *)0x0;
            pbVar12[9] = (byte)((uint)iVar5 >> 8);
            if ((iVar5 >> 8 & 0xffU) != 0) {
              *pbVar12 = *pbVar12 | 4;
              pbVar12[0x1d] = pbVar12[0x1d] | 1;
              if (uVar13 != 3) {
                bVar14 = 8;
              }
              goto LAB_080d313a;
            }
            goto LAB_080d2fe6;
          }
          pbVar7 = (byte *)(uint)pbVar12[0x1d];
          pbVar12[0x1d] = pbVar12[0x1d] | 1;
          if (uVar13 != 3) {
            pbVar11 = (byte *)(uint)pbVar12[7];
            pbVar4 = pbVar11;
          }
          goto LAB_080d3128;
        }
        bVar2 = pbVar12[0xd];
        pbVar12[0xd] = (byte)(bVar2 - 1);
        pbVar7 = (byte *)(uVar13 + 1);
        if (0 < (int)((bVar2 - 1) * 0x1000000)) goto LAB_080d313a;
LAB_080d2fe6:
        func_0x080d2d54(uVar13 & 0xff,pbVar7);
        *pbVar12 = 0;
      }
      else {
        pbVar7 = pbVar12 + 0x40;
        if ((bVar2 & 0x40) != 0) goto LAB_080d2fe6;
        *pbVar12 = 3;
        pbVar12[0x1d] = 3;
        func_080D2DA4(pbVar12);
        if (uVar13 == 2) {
LAB_080d2f34:
          *pbVar11 = pbVar12[0x1e] + (char)*(undefined4 *)(pbVar12 + 0x24) * '@';
LAB_080d2f94:
          pbVar4 = (byte *)(pbVar12[4] + 8);
          bVar2 = 0;
          if (pbVar12[0x1e] != 0) {
            bVar2 = 0x40;
          }
LAB_080d2fa2:
          pbVar12[0x1a] = bVar2;
        }
        else {
          if ((int)uVar13 < 3) {
            if (uVar13 == 1) {
              *pbStack_34 = pbVar12[0x1f];
              goto LAB_080d2f34;
            }
LAB_080d2f88:
            *pbVar11 = pbVar12[0x1e];
            *pbStack_2c = (byte)(*(int *)(pbVar12 + 0x24) << 3);
            goto LAB_080d2f94;
          }
          if (uVar13 != 3) goto LAB_080d2f88;
          if (*(int *)(pbVar12 + 0x24) != *(int *)(pbVar12 + 0x28)) {
            *pbStack_34 = 0x40;
            puVar1 = _DAT_080d2f7c;
            puVar10 = *(undefined4 **)(pbVar12 + 0x24);
            *_DAT_080d2f7c = *puVar10;
            puVar1[1] = puVar10[1];
            puVar1[2] = puVar10[2];
            puVar1[3] = puVar10[3];
            *(undefined4 **)(pbVar12 + 0x28) = puVar10;
          }
          *pbStack_34 = bVar2 & 0x40;
          *pbVar11 = pbVar12[0x1e];
          if (pbVar12[0x1e] != 0) {
            bVar2 = 0xc0;
            goto LAB_080d2fa2;
          }
          pbVar12[0x1a] = 0x80;
        }
        pbVar11 = (byte *)0x0;
        pbVar12[0xb] = pbVar12[4];
        pbVar7 = pbVar12 + 0x40;
        if (pbVar12[4] == 0) goto LAB_080d30fa;
        pbVar12[9] = 0;
LAB_080d3128:
        bVar14 = (byte)pbVar4;
        pbVar12[0xb] = pbVar12[0xb] - 1;
        if (uStack_3c == 0) {
          uStack_3c = 0xffffffff;
LAB_080d3034:
          bVar14 = (byte)pbVar4;
          if (pbVar12[0xb] == 0) {
            if (uVar13 == 3) {
              pbVar7 = (byte *)(uint)pbVar12[0x1d];
              pbVar12[0x1d] = pbVar12[0x1d] | 1;
            }
            func_080D2DA4(pbVar12,pbVar7,pbVar11);
            pbVar11 = (byte *)(uint)*pbVar12;
            if ((*pbVar12 & 3) == 0) {
              bVar2 = pbVar12[9];
              pbVar12[9] = (byte)(bVar2 - 1);
              pbVar7 = &UNK_000000ff;
              if (0 < (int)((bVar2 - 1) * 0x1000000)) {
                bVar2 = pbVar12[7];
                goto LAB_080d3126;
              }
              goto LAB_080d3066;
            }
            pbVar7 = extraout_r1;
            if (((uint)pbVar11 & 3) == 1) {
LAB_080d309e:
              pbVar12[9] = pbVar12[0x19];
              bVar2 = 7;
            }
            else if (((uint)pbVar11 & 3) == 2) {
              bVar2 = pbVar12[9];
              pbVar12[9] = (byte)(bVar2 - 1);
              iVar5 = (bVar2 - 1) * 0x1000000;
              pbVar11 = (byte *)(uint)pbVar12[0x19];
              pbVar7 = (byte *)((int)pbVar11 * 0x1000000);
              if (iVar5 + (int)pbVar11 * -0x1000000 == 0 || iVar5 < (int)pbVar7) {
LAB_080d30be:
                bVar14 = (byte)pbVar4;
                if (pbVar12[6] != 0) {
                  *pbVar12 = *pbVar12 - 1;
                  pbVar11 = (byte *)(uint)pbVar12[0x1d];
                  pbVar12[0x1d] = pbVar12[0x1d] | 1;
                  if (uVar13 != 3) {
                    pbVar4 = &SupervisorCall;
                  }
                  goto LAB_080d309e;
                }
                *pbVar12 = *pbVar12 & 0xfc;
                goto LAB_080d3066;
              }
              bVar2 = pbVar12[5];
            }
            else {
              bVar2 = pbVar12[9];
              pbVar12[9] = (byte)(bVar2 + 1);
              pbVar7 = &UNK_000000ff;
              pbVar11 = (byte *)(uint)pbVar12[10];
              if (pbVar11 <= (byte *)(bVar2 + 1 & 0xff)) {
LAB_080d30fa:
                pbVar11 = (byte *)0x0;
                *pbVar12 = *pbVar12 - 1;
                pbVar12[0xb] = pbVar12[5];
                pbVar7 = (byte *)0x0;
                if (pbVar12[5] == 0) goto LAB_080d30be;
                pbVar7 = (byte *)(uint)pbVar12[0x1d];
                pbVar12[0x1d] = pbVar12[0x1d] | 1;
                pbVar12[9] = pbVar12[10];
                if (uVar13 != 3) {
                  pbVar11 = (byte *)(uint)pbVar12[5];
                  pbVar4 = pbVar11;
                }
                goto LAB_080d3128;
              }
              bVar2 = pbVar12[4];
            }
LAB_080d3126:
            pbVar12[0xb] = bVar2;
          }
          goto LAB_080d3128;
        }
LAB_080d313a:
        if ((pbVar12[0x1d] & 2) != 0) {
          if (((int)uVar13 < 4) && ((pbVar12[1] & 8) != 0)) {
            if (*_DAT_080d3164 < 0x40) {
              uVar6 = *(int *)(pbVar12 + 0x20) + 2;
              uVar8 = _DAT_080d3168;
            }
            else {
              if (0x7f < *_DAT_080d3164) goto LAB_080d317a;
              uVar6 = *(int *)(pbVar12 + 0x20) + 1;
              uVar8 = _DAT_080d3188;
            }
            *(uint *)(pbVar12 + 0x20) = uVar6 & uVar8;
          }
LAB_080d317a:
          if (uVar13 == 4) {
            *pbStack_2c = (byte)*(undefined4 *)(pbVar12 + 0x20) | *pbStack_2c & 8;
          }
          else {
            *pbStack_2c = (byte)*(undefined4 *)(pbVar12 + 0x20);
          }
          bVar2 = pbVar12[0x21] + (pbVar12[0x1a] & 0xc0);
          pbVar12[0x1a] = bVar2;
          *pbVar9 = bVar2;
        }
        if ((pbVar12[0x1d] & 1) != 0) {
          *_DAT_080d31fc = *_DAT_080d31fc & ~pbVar12[0x1c] | pbVar12[0x1b];
          if (uVar13 == 3) {
            *pbStack_30 = *(byte *)((uint)pbVar12[9] + _DAT_080d3200);
            if ((pbVar12[0x1a] & 0x80) != 0) {
              *pbStack_34 = 0x80;
              *pbVar9 = pbVar12[0x1a];
              pbVar12[0x1a] = pbVar12[0x1a] & 0x7f;
            }
          }
          else {
            *pbStack_30 = pbVar12[9] * '\x10' + (bVar14 & 0xf);
            *pbVar9 = pbVar12[0x1a] | 0x80;
            if ((uVar13 == 1) && ((*pbStack_34 & 8) == 0)) {
              *pbVar9 = pbVar12[0x1a] | 0x80;
            }
          }
        }
      }
      pbVar12[0x1d] = 0;
    }
    uVar13 = uVar13 + 1;
    pbVar12 = pbVar12 + 0x40;
    if (4 < (int)uVar13) {
      return in_lr;
    }
  } while( true );
}

/* --- func_080D3258 @ 0x080D3258 (40B) [PURE-C | agbcp_O2] --- */
/* func_080D3258 @ 0x080D3258 mode=THUMB size=0x28 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D3258 @ 0x080D3258  mode=THUMB  size=0x28  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_080D3258(int param_1,ushort param_2)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x34) == _DAT_080d327c) {
    *(ushort *)(param_1 + 0x1e) = param_2;
    *(short *)(param_1 + 0x20) = (short)((uint)*(ushort *)(param_1 + 0x1c) * (uint)param_2 >> 8);
  }
  return in_lr;
}

/* --- func_080D3280 @ 0x080D3280 (104B) [PURE-C | agbcp_O2] --- */
/* func_080D3280 @ 0x080D3280 mode=THUMB size=0x68 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D3280 @ 0x080D3280  mode=THUMB  size=0x68  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_080D3280(int param_1,ushort param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x34) == _DAT_080d32e4) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    uVar2 = (uint)*(byte *)(param_1 + 8);
    pbVar1 = *(byte **)(param_1 + 0x2c);
    uVar3 = 1;
    if (uVar2 != 0) {
      do {
        if (((param_2 & uVar3) != 0) && ((*pbVar1 & 0x80) != 0)) {
          pbVar1[0x13] = (byte)((param_3 & 0xffff) >> 2);
          *pbVar1 = *pbVar1 | 3;
        }
        uVar2 = uVar2 - 1;
        pbVar1 = pbVar1 + 0x50;
        uVar3 = uVar3 << 1;
      } while (0 < (int)uVar2);
    }
    *(int *)(param_1 + 0x34) = _DAT_080d32e4;
  }
  return in_lr;
}

/* --- func_080D32E8 @ 0x080D32E8 (116B) [PURE-C | agbcp_O2] --- */
/* func_080D32E8 @ 0x080D32E8 mode=THUMB size=0x74 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D32E8 @ 0x080D32E8  mode=THUMB  size=0x74  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_080D32E8(int param_1,ushort param_2,undefined2 param_3)

{
  uint uVar1;
  byte *pbVar2;
  ushort uVar3;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x34) == _DAT_080d3358) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    uVar1 = (uint)*(byte *)(param_1 + 8);
    pbVar2 = *(byte **)(param_1 + 0x2c);
    uVar3 = 1;
    if (uVar1 != 0) {
      do {
        if (((param_2 & uVar3) != 0) && ((*pbVar2 & 0x80) != 0)) {
          pbVar2[0xb] = (byte)((ushort)param_3 >> 8);
          pbVar2[0xd] = (byte)param_3;
          *pbVar2 = *pbVar2 | 0xc;
        }
        uVar1 = uVar1 - 1;
        pbVar2 = pbVar2 + 0x50;
        uVar3 = uVar3 << 1;
      } while (0 < (int)uVar1);
    }
    *(int *)(param_1 + 0x34) = _DAT_080d3358;
  }
  return in_lr;
}

/* --- func_080D335C @ 0x080D335C (104B) [PURE-C | agbcp_O2] --- */
/* func_080D335C @ 0x080D335C mode=THUMB size=0x68 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D335C @ 0x080D335C  mode=THUMB  size=0x88  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_080D335C(int param_1,ushort param_2,byte param_3)

{
  byte *pbVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x34) == _DAT_080d33c0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    uVar2 = (uint)*(byte *)(param_1 + 8);
    pbVar1 = *(byte **)(param_1 + 0x2c);
    uVar3 = 1;
    if (uVar2 != 0) {
      do {
        if (((param_2 & uVar3) != 0) && ((*pbVar1 & 0x80) != 0)) {
          pbVar1[0x15] = param_3;
          *pbVar1 = *pbVar1 | 3;
        }
        uVar2 = uVar2 - 1;
        pbVar1 = pbVar1 + 0x50;
        uVar3 = uVar3 << 1;
      } while (0 < (int)uVar2);
    }
    *(int *)(param_1 + 0x34) = _DAT_080d33c0;
  }
  return in_lr;
}

/* --- func_080D33E4 @ 0x080D33E4 (116B) [PURE-C | agbcp_O2] --- */
/* func_080D33E4 @ 0x080D33E4 mode=THUMB size=0x74 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D33E4 @ 0x080D33E4  mode=THUMB  size=0x74  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_080D33E4(int param_1,ushort param_2,byte param_3)

{
  byte *pbVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x34) == _DAT_080d3454) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    uVar2 = (uint)*(byte *)(param_1 + 8);
    pbVar1 = *(byte **)(param_1 + 0x2c);
    uVar3 = 1;
    if (uVar2 != 0) {
      do {
        if ((((param_2 & uVar3) != 0) && ((*pbVar1 & 0x80) != 0)) &&
           (pbVar1[0x17] = param_3, param_3 == 0)) {
          func_0x080d33c4(pbVar1);
        }
        uVar2 = uVar2 - 1;
        pbVar1 = pbVar1 + 0x50;
        uVar3 = uVar3 << 1;
      } while (0 < (int)uVar2);
    }
    *(int *)(param_1 + 0x34) = _DAT_080d3454;
  }
  return in_lr;
}

/* --- func_080D3458 @ 0x080D3458 (116B) [PURE-C | agbcp_O2] --- */
/* func_080D3458 @ 0x080D3458 mode=THUMB size=0x74 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D3458 @ 0x080D3458  mode=THUMB  size=0x74  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_080D3458(int param_1,ushort param_2,byte param_3)

{
  byte *pbVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x34) == _DAT_080d34c8) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    uVar2 = (uint)*(byte *)(param_1 + 8);
    pbVar1 = *(byte **)(param_1 + 0x2c);
    uVar3 = 1;
    if (uVar2 != 0) {
      do {
        if ((((param_2 & uVar3) != 0) && ((*pbVar1 & 0x80) != 0)) &&
           (pbVar1[0x19] = param_3, param_3 == 0)) {
          func_0x080d33c4(pbVar1);
        }
        uVar2 = uVar2 - 1;
        pbVar1 = pbVar1 + 0x50;
        uVar3 = uVar3 << 1;
      } while (0 < (int)uVar2);
    }
    *(int *)(param_1 + 0x34) = _DAT_080d34c8;
  }
  return in_lr;
}

/* --- func_080D34CC @ 0x080D34CC (344B) [PURE-C | agbcp_O2] --- */
/* func_080D34CC @ 0x080D34CC mode=THUMB size=0x158 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D34CC @ 0x080D34CC  mode=THUMB  size=0x158  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined4 func_080D34CC(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  pbVar3 = *(byte **)(param_2 + 0x40);
  bVar1 = *pbVar3;
  *(byte **)(param_2 + 0x40) = pbVar3 + 1;
  pbVar5 = (byte *)((uint)pbVar3[1] + *(int *)(param_1 + 0x18));
  *(byte **)(param_2 + 0x40) = pbVar3 + 2;
  bVar2 = pbVar3[2];
  uVar4 = (uint)bVar2;
  *(byte **)(param_2 + 0x40) = pbVar3 + 3;
  if (0x11 < bVar1) {
    return in_lr;
  }
  switch(*(uint *)(PTR_case_080D3500_080d34fc + (uint)bVar1 * 4) & 0xfffffffe) {
  case 0x80d3500:
  case 0x80d3548:
    *pbVar5 = bVar2;
    return in_lr;
  case 0x80d354c:
    *pbVar5 = *pbVar5 + bVar2;
    return in_lr;
  case 0x80d3554:
    *pbVar5 = *pbVar5 - bVar2;
    return in_lr;
  case 0x80d355c:
    *pbVar5 = *(byte *)(*(int *)(param_1 + 0x18) + uVar4);
    return in_lr;
  case 0x80d3566:
    *pbVar5 = *pbVar5 + *(char *)(*(int *)(param_1 + 0x18) + uVar4);
    return in_lr;
  case 0x80d3574:
    *pbVar5 = *pbVar5 - *(char *)(*(int *)(param_1 + 0x18) + uVar4);
    return in_lr;
  case 0x80d3582:
    if (*pbVar5 == uVar4) {
LAB_080d3604:
      func_0x080d3914(param_1,param_2,*_DAT_080d3614);
      return in_lr;
    }
    break;
  case 0x80d358a:
    if (*pbVar5 != uVar4) goto LAB_080d3604;
    break;
  case 0x80d3592:
    if (uVar4 < *pbVar5) goto LAB_080d3604;
    break;
  case 0x80d359a:
    if (uVar4 <= *pbVar5) goto LAB_080d3604;
    break;
  case 0x80d35a2:
    if (*pbVar5 <= uVar4) goto LAB_080d3604;
    break;
  case 0x80d35aa:
    if (*pbVar5 < uVar4) goto LAB_080d3604;
    break;
  case 0x80d35b2:
    if (*pbVar5 == *(byte *)(*(int *)(param_1 + 0x18) + uVar4)) goto LAB_080d3604;
    break;
  case 0x80d35c0:
    if (*pbVar5 != *(byte *)(*(int *)(param_1 + 0x18) + uVar4)) goto LAB_080d3604;
    break;
  case 0x80d35ce:
    if (*(byte *)(*(int *)(param_1 + 0x18) + uVar4) < *pbVar5) goto LAB_080d3604;
    break;
  case 0x80d35dc:
    if (*(byte *)(*(int *)(param_1 + 0x18) + uVar4) <= *pbVar5) goto LAB_080d3604;
    break;
  case 0x80d35ea:
    if (*pbVar5 <= *(byte *)(*(int *)(param_1 + 0x18) + uVar4)) goto LAB_080d3604;
    break;
  case 0x80d35f8:
    if (*pbVar5 < *(byte *)(*(int *)(param_1 + 0x18) + uVar4)) goto LAB_080d3604;
  }
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 4;
  return in_lr;
}

/* --- func_080D3624 @ 0x080D3624 (32B) [CFG-ASM (hermes:asm-order-barrier) | agbcc_O2] --- */
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
extern u32 func_080D3914();
struct Context { u8 pad[0x40]; u8 *ptr; };
void func_080D3624(u32 r0, struct Context *ctx) {
    register u32 val asm("r3");
    register const u32 *table asm("r2");
    val = *ctx->ptr++;
    table = (const u32 *)0x08139D30;
    __asm__("" : "=r"(table) : "0"(table));
    func_080D3914(r0, ctx, table[val]);
}

/* --- func_080D3644 @ 0x080D3644 (20B) [PURE-C | agbcp_O2] --- */
/* func_080D3644 @ 0x080D3644 mode=THUMB size=0x14 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* --- func_080D3658 @ 0x080D3658 (72B) [PURE-C | agbcp_O2] --- */
/* func_080D3658 @ 0x080D3658 mode=THUMB size=0x48 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
(sin referencia de Ghidra en esta direccion)

/* --- func_080D3748 @ 0x080D3748 (4B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

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

/* --- func_080D374C @ 0x080D374C (4B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

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

/* --- func_080D3750 @ 0x080D3750 (4B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

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

/* --- func_080D3754 @ 0x080D3754 (8B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

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

/* --- func_080D375C @ 0x080D375C (24B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

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

/* --- func_080D3774 @ 0x080D3774 (4B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

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

/* --- func_080D3778 @ 0x080D3778 (36B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
void func_080D3778(u8 *arg0,u8 *arg1,int arg2) {
  int val;
  val = arg2 + -1;
  if (arg2 != 0) {
    do {
      *arg1 = *arg0;
      arg0 = arg0 + 1;
      arg1 = arg1 + 1;
      val = val + -1;
    } while (val != -1);
  }
}

/* --- func_080D379C @ 0x080D379C (100B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D379C @ 0x080D379C (100 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r3)
 * Fields : +0x00:u16(RW)
 * Callees: func_080D3918
 * CFG Structure:
 *   L_080D379C: goto L_080D37E4
 *   L_080D37E4: if (!=) goto L_080D37D8
 * ========================================================================== */
extern void func_080D3918(void);
void func_080D379C(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, lr}\n"
        "	sub sp, #0x80\n"
        "	add r4, r0, #0\n"
        "	add r5, r1, #0\n"
        "	add r6, r2, #0\n"
        "	ldr r2, .Lpool_080D37C8\n"
        "	ldrh r0, [r2]\n"
        "	ldr r1, .Lpool_080D37CC\n"
        "	and r0, r1\n"
        "	mov r1, #3\n"
        "	orr r0, r1\n"
        "	strh r0, [r2]\n"
        "	ldr r3, .Lpool_080D37D0\n"
        "	mov r0, #1\n"
        "	bic r3, r0\n"
        "	mov r2, sp\n"
        "	ldr r0, .Lpool_080D37D4\n"
        "	ldr r1, .Lpool_080D37D0\n"
        "	sub r0, r0, r1\n"
        "	lsl r0, r0, #0xf\n"
        "	b _L_080D37E4\n"
        "	.hword 0x0000\n"
        ".Lpool_080D37C8:\n"
        "	.word 0x04000204\n"
        ".Lpool_080D37CC:\n"
        "	.word 0x0000FFFC\n"
        ".Lpool_080D37D0:\n"
        "	.word 0x080D3779\n"
        ".Lpool_080D37D4:\n"
        "	.word 0x080D379D\n"
        "_L_080D37D8:\n"
        "	ldrh r0, [r3]\n"
        "	strh r0, [r2]\n"
        "	add r3, #2\n"
        "	add r2, #2\n"
        "	sub r0, r1, #1\n"
        "	lsl r0, r0, #0x10\n"
        "_L_080D37E4:\n"
        "	lsr r1, r0, #0x10\n"
        "	cmp r1, #0\n"
        "	bne _L_080D37D8\n"
        "	mov r3, sp\n"
        "	add r3, #1\n"
        "	add r0, r4, #0\n"
        "	add r1, r5, #0\n"
        "	add r2, r6, #0\n"
        "	bl func_080D3918\n"
        "	add sp, #0x80\n"
        "	pop {r4, r5, r6}\n"
        "	pop {r0}\n"
        "	bx r0\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D3800 @ 0x080D3800 (64B) [PURE-C | agbcc_O1] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
void func_080D3800(u8 *arg0,u8 *arg1,int arg2) {
  *(u16 *)0x04000204 = *(u16 *)0x04000204 & (u16)0x0000FFFC | 3;
  while (arg2 = arg2 + -1, arg2 != -1) {
    *arg1 = *arg0;
    arg0 = arg0 + 1;
    arg1 = arg1 + 1;
  }
}

/* --- func_080D3840 @ 0x080D3840 (48B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

void *func_080D3840(const void *param_1, const void *param_2, u32 param_3) {
    register const u8 *p1 asm("r5");
    register u32 r4 asm("r4");
    register void *ret asm("r0");
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add r3, r1, #0\n\t"
        "sub %1, r2, #1\n\t"
        "cmp r2, #0\n\t"
        "beq _ret0_D3840\n\t"
        "mov r2, #1\n\t"
        "neg r2, r2\n"
        "_loop_D3840:\n\t"
        "ldrb r1, [r3]\n\t"
        "ldrb r0, [%0]\n\t"
        "add %0, #1\n\t"
        "add r3, #1\n\t"
        "cmp r1, r0\n\t"
        "beq _next_D3840\n\t"
        "sub r0, r3, #1\n\t"
        "b _end_D3840\n"
        "_next_D3840:\n\t"
        "sub %1, #1\n\t"
        "cmp %1, r2\n\t"
        "bne _loop_D3840\n"
        "_ret0_D3840:\n\t"
        "mov r0, #0\n"
        "_end_D3840:"
        : "=r"(p1), "=r"(r4), "=r"(ret) : : "r1", "r2", "r3", "lr", "memory"
    );
    return ret;
}

/* --- func_080D3870 @ 0x080D3870 (100B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D3870 @ 0x080D3870 (100 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r3)
 * Fields : +0x00:u16(RW)
 * Callees: func_080D3918
 * CFG Structure:
 *   L_080D3870: goto L_080D38B8
 *   L_080D38B8: if (!=) goto L_080D38AC
 * ========================================================================== */
extern void func_080D3918(void);
void func_080D3870(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, lr}\n"
        "	sub sp, #0xc0\n"
        "	add r4, r0, #0\n"
        "	add r5, r1, #0\n"
        "	add r6, r2, #0\n"
        "	ldr r2, .Lpool_080D389C\n"
        "	ldrh r0, [r2]\n"
        "	ldr r1, .Lpool_080D38A0\n"
        "	and r0, r1\n"
        "	mov r1, #3\n"
        "	orr r0, r1\n"
        "	strh r0, [r2]\n"
        "	ldr r3, .Lpool_080D38A4\n"
        "	mov r0, #1\n"
        "	bic r3, r0\n"
        "	mov r2, sp\n"
        "	ldr r0, .Lpool_080D38A8\n"
        "	ldr r1, .Lpool_080D38A4\n"
        "	sub r0, r0, r1\n"
        "	lsl r0, r0, #0xf\n"
        "	b _L_080D38B8\n"
        "	.hword 0x0000\n"
        ".Lpool_080D389C:\n"
        "	.word 0x04000204\n"
        ".Lpool_080D38A0:\n"
        "	.word 0x0000FFFC\n"
        ".Lpool_080D38A4:\n"
        "	.word 0x080D3841\n"
        ".Lpool_080D38A8:\n"
        "	.word 0x080D3871\n"
        "_L_080D38AC:\n"
        "	ldrh r0, [r3]\n"
        "	strh r0, [r2]\n"
        "	add r3, #2\n"
        "	add r2, #2\n"
        "	sub r0, r1, #1\n"
        "	lsl r0, r0, #0x10\n"
        "_L_080D38B8:\n"
        "	lsr r1, r0, #0x10\n"
        "	cmp r1, #0\n"
        "	bne _L_080D38AC\n"
        "	mov r3, sp\n"
        "	add r3, #1\n"
        "	add r0, r4, #0\n"
        "	add r1, r5, #0\n"
        "	add r2, r6, #0\n"
        "	bl func_080D3918\n"
        "	add sp, #0xc0\n"
        "	pop {r4, r5, r6}\n"
        "	pop {r1}\n"
        "	bx r1\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D38D4 @ 0x080D38D4 (56B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3800();
extern u32 func_080D3870();
u32 func_080D38D4(u32 arg0,u32 arg1,u32 arg2,int arg3) {
  u8 val;
  for (val = 0; val < 3; val = val + 1) {
    func_080D3800(arg0,arg1,arg2);
    arg3 = func_080D3870(arg0,arg1,arg2);
    if (arg3 == 0) break;
  }
  return arg3;
}

/* --- func_080D3948 @ 0x080D3948 (76B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D3948 @ 0x080D3948 (76 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x00:u8(R)
 * CFG Structure:
 *   L_080D3948: if (<= (u)) goto L_080D3984
 *   L_080D3960: if (<= (u)) goto L_080D3984
 *   L_080D396A: if (==) goto L_080D3960
 *   L_080D3974: if (==) goto L_080D3980
 *   L_080D3984: if (!=) goto L_080D3974
 *   L_080D398E: return
 * ========================================================================== */
int func_080D3948(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r4, r2, #0\n"
        "	add r3, r0, #0\n"
        "	add r2, r1, #0\n"
        "	cmp r4, #3\n"
        "	bls _L_080D3984\n"
        "	orr r0, r2\n"
        "	mov r1, #3\n"
        "	and r0, r1\n"
        "	cmp r0, #0\n"
        "	bne _L_080D3984\n"
        "	b _L_080D396A\n"
        "_L_080D3960:\n"
        "	add r3, #4\n"
        "	add r2, #4\n"
        "	sub r4, #4\n"
        "	cmp r4, #3\n"
        "	bls _L_080D3984\n"
        "_L_080D396A:\n"
        "	ldr r1, [r3]\n"
        "	ldr r0, [r2]\n"
        "	cmp r1, r0\n"
        "	beq _L_080D3960\n"
        "	b _L_080D3984\n"
        "_L_080D3974:\n"
        "	ldrb r0, [r3]\n"
        "	ldrb r1, [r2]\n"
        "	cmp r0, r1\n"
        "	beq _L_080D3980\n"
        "	sub r0, r0, r1\n"
        "	b _L_080D398E\n"
        "_L_080D3980:\n"
        "	add r3, #1\n"
        "	add r2, #1\n"
        "_L_080D3984:\n"
        "	add r0, r4, #0\n"
        "	sub r4, #1\n"
        "	cmp r0, #0\n"
        "	bne _L_080D3974\n"
        "	mov r0, #0\n"
        "_L_080D398E:\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "lr", "memory"
    );
    return __ret;
}

/* --- func_080D3994 @ 0x080D3994 (100B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

void *func_080D3994(void *param_1, const void *param_2, u32 param_3) {
    register void *p1 asm("r5");
    register void *r4 asm("r4");
    register void *ret asm("r0");
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %1, %0, #0\n\t"
        "add r3, r1, #0\n\t"
        "cmp r2, #0xf\n\t"
        "bls _byte_start_D3994\n\t"
        "add r0, r3, #0\n\t"
        "orr r0, %0\n\t"
        "mov r1, #3\n\t"
        "and r0, r1\n\t"
        "cmp r0, #0\n\t"
        "bne _byte_start_D3994\n\t"
        "add r1, %0, #0\n"
        "_quad_loop_D3994:\n\t"
        "ldmia r3!, {r0}\n\t"
        "stmia r1!, {r0}\n\t"
        "ldmia r3!, {r0}\n\t"
        "stmia r1!, {r0}\n\t"
        "ldmia r3!, {r0}\n\t"
        "stmia r1!, {r0}\n\t"
        "ldmia r3!, {r0}\n\t"
        "stmia r1!, {r0}\n\t"
        "sub r2, #0x10\n\t"
        "cmp r2, #0xf\n\t"
        "bhi _quad_loop_D3994\n\t"
        "cmp r2, #3\n\t"
        "bls _set_r4_D3994\n"
        "_word_loop_D3994:\n\t"
        "ldmia r3!, {r0}\n\t"
        "stmia r1!, {r0}\n\t"
        "sub r2, #4\n\t"
        "cmp r2, #3\n\t"
        "bhi _word_loop_D3994\n"
        "_set_r4_D3994:\n\t"
        "add %1, r1, #0\n"
        "_byte_start_D3994:\n\t"
        "sub r2, #1\n\t"
        "mov r0, #1\n\t"
        "neg r0, r0\n\t"
        "cmp r2, r0\n\t"
        "beq _end_D3994\n\t"
        "add r1, r0, #0\n"
        "_byte_loop_D3994:\n\t"
        "ldrb r0, [r3]\n\t"
        "strb r0, [%1]\n\t"
        "add r3, #1\n\t"
        "add %1, #1\n\t"
        "sub r2, #1\n\t"
        "cmp r2, r1\n\t"
        "bne _byte_loop_D3994\n"
        "_end_D3994:\n\t"
        "add %2, %0, #0"
        : "=r"(p1), "=r"(r4), "=r"(ret) : : "r1", "r2", "r3", "lr", "memory"
    );
    return ret;
}

/* --- func_080D39F8 @ 0x080D39F8 (140B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D39F8 @ 0x080D39F8 (140 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u8(RW)
 * CFG Structure:
 *   L_080D39F8: if (>= (u)) goto L_080D3A2A
 *   L_080D3A1A: if (!=) goto L_080D3A1A
 *   L_080D3A2A: if (<= (u)) goto L_080D3A62
 *   L_080D3A3C: if (> (u)) goto L_080D3A3C
 *   L_080D3A56: if (> (u)) goto L_080D3A56
 *   L_080D3A62: if (==) goto L_080D3A7C
 *   L_080D3A6E: if (!=) goto L_080D3A6E
 *   L_080D3A7C: return
 * ========================================================================== */
int func_080D39F8(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	add r4, r5, #0\n"
        "	add r3, r1, #0\n"
        "	cmp r3, r5\n"
        "	bhs _L_080D3A2A\n"
        "	add r0, r3, r2\n"
        "	cmp r5, r0\n"
        "	bhs _L_080D3A2A\n"
        "	add r3, r0, #0\n"
        "	add r4, r5, r2\n"
        "	sub r2, #1\n"
        "	mov r0, #1\n"
        "	neg r0, r0\n"
        "	cmp r2, r0\n"
        "	beq _L_080D3A7C\n"
        "	add r1, r0, #0\n"
        "_L_080D3A1A:\n"
        "	sub r4, #1\n"
        "	sub r3, #1\n"
        "	ldrb r0, [r3]\n"
        "	strb r0, [r4]\n"
        "	sub r2, #1\n"
        "	cmp r2, r1\n"
        "	bne _L_080D3A1A\n"
        "	b _L_080D3A7C\n"
        "_L_080D3A2A:\n"
        "	cmp r2, #0xf\n"
        "	bls _L_080D3A62\n"
        "	add r0, r3, #0\n"
        "	orr r0, r4\n"
        "	mov r1, #3\n"
        "	and r0, r1\n"
        "	cmp r0, #0\n"
        "	bne _L_080D3A62\n"
        "	add r1, r3, #0\n"
        "_L_080D3A3C:\n"
        "	ldm r1!, {r0}\n"
        "	stm r4!, {r0}\n"
        "	ldm r1!, {r0}\n"
        "	stm r4!, {r0}\n"
        "	ldm r1!, {r0}\n"
        "	stm r4!, {r0}\n"
        "	ldm r1!, {r0}\n"
        "	stm r4!, {r0}\n"
        "	sub r2, #0x10\n"
        "	cmp r2, #0xf\n"
        "	bhi _L_080D3A3C\n"
        "	cmp r2, #3\n"
        "	bls _L_080D3A60\n"
        "_L_080D3A56:\n"
        "	ldm r1!, {r0}\n"
        "	stm r4!, {r0}\n"
        "	sub r2, #4\n"
        "	cmp r2, #3\n"
        "	bhi _L_080D3A56\n"
        "_L_080D3A60:\n"
        "	add r3, r1, #0\n"
        "_L_080D3A62:\n"
        "	sub r2, #1\n"
        "	mov r0, #1\n"
        "	neg r0, r0\n"
        "	cmp r2, r0\n"
        "	beq _L_080D3A7C\n"
        "	add r1, r0, #0\n"
        "_L_080D3A6E:\n"
        "	ldrb r0, [r3]\n"
        "	strb r0, [r4]\n"
        "	add r3, #1\n"
        "	add r4, #1\n"
        "	sub r2, #1\n"
        "	cmp r2, r1\n"
        "	bne _L_080D3A6E\n"
        "_L_080D3A7C:\n"
        "	add r0, r5, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
    return __ret;
}

/* --- func_080D3A84 @ 0x080D3A84 (88B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

void *func_080D3A84(void *param_1, int param_2, u32 param_3) {
    register void *p1 asm("r5");
    register int p2 asm("r4");
    register void *ret asm("r0");
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %1, r1, #0\n\t"
        "add r3, %0, #0\n\t"
        "cmp r2, #3\n\t"
        "bls _byte_cond_D3A84\n\t"
        "mov r0, #3\n\t"
        "and r0, %0\n\t"
        "cmp r0, #0\n\t"
        "bne _byte_cond_D3A84\n\t"
        "add r1, %0, #0\n\t"
        "mov r0, #0xff\n\t"
        "and %1, r0\n\t"
        "lsl r3, %1, #8\n\t"
        "orr r3, %1\n\t"
        "lsl r0, r3, #0x10\n\t"
        "orr r3, r0\n\t"
        "cmp r2, #0xf\n\t"
        "bls _word_cond_D3A84\n"
        "_quad_loop_D3A84:\n\t"
        "stmia r1!, {r3}\n\t"
        "stmia r1!, {r3}\n\t"
        "stmia r1!, {r3}\n\t"
        "stmia r1!, {r3}\n\t"
        "sub r2, #0x10\n\t"
        "cmp r2, #0xf\n\t"
        "bhi _quad_loop_D3A84\n\t"
        "b _word_cond_D3A84\n"
        "_word_loop_D3A84:\n\t"
        "stmia r1!, {r3}\n\t"
        "sub r2, #4\n"
        "_word_cond_D3A84:\n\t"
        "cmp r2, #3\n\t"
        "bhi _word_loop_D3A84\n\t"
        "add r3, r1, #0\n\t"
        "b _byte_cond_D3A84\n"
        "_byte_loop_D3A84:\n\t"
        "strb %1, [r3]\n\t"
        "add r3, #1\n"
        "_byte_cond_D3A84:\n\t"
        "add r0, r2, #0\n\t"
        "sub r2, #1\n\t"
        "cmp r0, #0\n\t"
        "bne _byte_loop_D3A84\n\t"
        "add %2, %0, #0"
        : "=r"(p1), "=r"(p2), "=r"(ret) : : "r1", "r2", "r3", "lr", "memory"
    );
    return ret;
}

/* --- func_080D3ADC @ 0x080D3ADC (76B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

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

/* --- func_080D3B28 @ 0x080D3B28 (80B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

char *func_080D3B28(char *dst, const char *src) {
    register char *r6 asm("r6") = dst;
    register const char *r1 asm("r1") = src;
    __asm__ volatile(
        "add r3, r6, #0\n\t"
        "add r2, r1, #0\n\t"
        "add r0, r2, #0\n\t"
        "orr r0, r6\n\t"
        "mov r1, #3\n\t"
        "and r0, r1\n\t"
        "cmp r0, #0\n\t"
        "bne _byte_loop_D3B28\n\t"
        "ldr r1, [r2]\n\t"
        "ldr r5, =0xFEFEFEFF\n\t"
        "add r0, r1, r5\n\t"
        "bic r0, r1\n\t"
        "ldr r4, =0x80808080\n\t"
        "b _word_chk_D3B28\n\t"
        ".align 2, 0\n\t"
        ".ltorg\n"
        "_word_loop_D3B28:\n\t"
        "ldmia r2!, {r0}\n\t"
        "stmia r3!, {r0}\n\t"
        "ldr r1, [r2]\n\t"
        "add r0, r1, r5\n\t"
        "bic r0, r1\n"
        "_word_chk_D3B28:\n\t"
        "and r0, r4\n\t"
        "cmp r0, #0\n\t"
        "beq _word_loop_D3B28\n"
        "_byte_loop_D3B28:\n\t"
        "ldrb r0, [r2]\n\t"
        "strb r0, [r3]\n\t"
        "lsl r0, r0, #0x18\n\t"
        "add r2, #1\n\t"
        "add r3, #1\n\t"
        "cmp r0, #0\n\t"
        "bne _byte_loop_D3B28"
        : "+r"(r6), "+r"(r1) : : "r0", "r2", "r3", "r4", "r5", "lr", "memory"
    );
    return r6;
}

/* --- func_080D3B78 @ 0x080D3B78 (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

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

/* --- func_080D3BC0 @ 0x080D3BC0 (40B) [PURE-C | old_agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D01F8();
extern u32 func_080D390C();
u32 func_080D3BC0(u32 arg0) {
  int *mem_ptr;
  int val;
  mem_ptr = 0x03000CD4;
  do {
    if (*mem_ptr == 0) {
      do {
      } while( true );
    }
    func_080D390C();
    val = func_080D01F8(arg0);
  } while (val == 0);
  return;
}

/* --- func_080D3BE8 @ 0x080D3BE8 (60B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D3BE8 @ 0x080D3BE8 (60 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x08:u32(R)
 * Callees: func_080005D4, func_08004C48, func_080D3914
 * CFG Structure:
 *   L_080D3BE8: call func_080005D4(); call func_08004C48(); if (==) goto L_080D3C1A
 *   L_080D3C1A: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08004C48(void);
extern void func_080D3914(void);
int func_080D3BE8(void) {
    u32 sp0, sp1, sp2;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2));
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	mov r0, #4\n"
        "	bl func_080005D4\n"
        "	bl func_08004C48\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #4]\n"
        "	str r0, [sp, #8]\n"
        "	add r2, r1, #0\n"
        "	mov r1, #0\n"
        "	str r1, [r2]\n"
        "	str r0, [r4]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080D3C1A\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080D3C1A:\n"
        "	add r0, r4, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "lr", "memory"
    );
    return __ret;
}

/* --- func_080D3C24 @ 0x080D3C24 (60B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D3C24 @ 0x080D3C24 (60 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x08:u32(R)
 * Callees: func_080005D4, func_08004B58, func_080D3914
 * CFG Structure:
 *   L_080D3C24: call func_080005D4(); call func_08004B58(); if (==) goto L_080D3C56
 *   L_080D3C56: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08004B58(void);
extern void func_080D3914(void);
int func_080D3C24(void) {
    u32 sp0, sp1, sp2;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2));
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	mov r0, #8\n"
        "	bl func_080005D4\n"
        "	bl func_08004B58\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #4]\n"
        "	str r0, [sp, #8]\n"
        "	add r2, r1, #0\n"
        "	mov r1, #0\n"
        "	str r1, [r2]\n"
        "	str r0, [r4]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080D3C56\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080D3C56:\n"
        "	add r0, r4, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "lr", "memory"
    );
    return __ret;
}

/* --- func_080D3C60 @ 0x080D3C60 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
void func_080D3C60(void) {
  func_0800080C();
}

/* --- func_080D3C6C @ 0x080D3C6C (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
void func_080D3C6C(void) {
  func_0800080C();
}

/* --- func_080D3C78 @ 0x080D3C78 (604B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080073E0();
extern void func_08007184();
extern void func_08007C28();
extern void func_080079E8();
extern void func_080086BC();
void func_080D3C78(int param_1, int param_2) {
    register int r5 asm("r5") = param_1;
    register int r6 asm("r6") = param_2;
    register int r4 asm("r4");
    __asm__ volatile(
        "ldr r0, =0x00006D20\n\t"
        "add r4, %0, r0\n\t"
        "ldr r1, [r4, #4]\n\t"
        "add r0, r4, #0\n\t"
        "bl func_080073E0\n\t"
        "add r0, r4, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_08007184\n\t"
        "ldr r1, =0x00006D18\n\t"
        "add r4, %0, r1\n\t"
        "ldr r1, [r4, #4]\n\t"
        "add r0, r4, #0\n\t"
        "bl func_08007C28\n\t"
        "add r0, r4, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_080079E8\n\t"
        "ldr r2, =0x00006D10\n\t"
        "add r4, %0, r2\n\t"
        "ldr r1, [r4, #4]\n\t"
        "add r0, r4, #0\n\t"
        "bl func_080073E0\n\t"
        "add r0, r4, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_08007184\n\t"
        "ldr r0, =0x00006D08\n\t"
        "add r4, %0, r0\n\t"
        "ldr r1, [r4, #4]\n\t"
        "add r0, r4, #0\n\t"
        "bl func_08007C28\n\t"
        "add r0, r4, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_080079E8\n\t"
        "mov r1, #0xda\n\t"
        "lsl r1, r1, #7\n\t"
        "add r4, %0, r1\n\t"
        "ldr r1, [r4, #4]\n\t"
        "add r0, r4, #0\n\t"
        "bl func_080073E0\n\t"
        "add r0, r4, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_08007184\n\t"
        "ldr r2, =0x00006CF8\n\t"
        "add r4, %0, r2\n\t"
        "ldr r1, [r4, #4]\n\t"
        "add r0, r4, #0\n\t"
        "bl func_08007C28\n\t"
        "add r0, r4, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_080079E8\n\t"
        "ldr r0, =0x00006CF0\n\t"
        "add r4, %0, r0\n\t"
        "ldr r1, [r4, #4]\n\t"
        "add r0, r4, #0\n\t"
        "bl func_08007C28\n\t"
        "add r0, r4, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_080079E8\n\t"
        "ldr r1, =0x00006CE8\n\t"
        "add r4, %0, r1\n\t"
        "ldr r1, [r4, #4]\n\t"
        "add r0, r4, #0\n\t"
        "bl func_080073E0\n\t"
        "add r0, r4, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_08007184\n\t"
        "ldr r2, =0x00006CE0\n\t"
        "add r4, %0, r2\n\t"
        "ldr r1, [r4, #4]\n\t"
        "add r0, r4, #0\n\t"
        "bl func_08007C28\n\t"
        "add r0, r4, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_080079E8\n\t"
        "ldr r0, =0x00006CD8\n\t"
        "add r4, %0, r0\n\t"
        "ldr r1, [r4, #4]\n\t"
        "add r0, r4, #0\n\t"
        "bl func_08007C28\n\t"
        "add r0, r4, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_080079E8\n\t"
        "ldr r1, =0x00006CD0\n\t"
        "add r4, %0, r1\n\t"
        "ldr r1, [r4, #4]\n\t"
        "add r0, r4, #0\n\t"
        "bl func_08007C28\n\t"
        "add r0, r4, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_080079E8\n\t"
        "ldr r2, =0x00006CC8\n\t"
        "add r4, %0, r2\n\t"
        "ldr r1, [r4, #4]\n\t"
        "add r0, r4, #0\n\t"
        "bl func_080073E0\n\t"
        "add r0, r4, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_08007184\n\t"
        "ldr r0, =0x00006CC0\n\t"
        "add r4, %0, r0\n\t"
        "ldr r1, [r4, #4]\n\t"
        "add r0, r4, #0\n\t"
        "bl func_08007C28\n\t"
        "add r0, r4, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_080079E8\n\t"
        "ldr r1, =0x00006CB8\n\t"
        "add r4, %0, r1\n\t"
        "ldr r1, [r4, #4]\n\t"
        "add r0, r4, #0\n\t"
        "bl func_080073E0\n\t"
        "add r0, r4, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_08007184\n\t"
        "ldr r2, =0x00006CB0\n\t"
        "add r4, %0, r2\n\t"
        "ldr r1, [r4, #4]\n\t"
        "add r0, r4, #0\n\t"
        "bl func_08007C28\n\t"
        "add r0, r4, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_080079E8\n\t"
        "ldr r0, =0x00006CA8\n\t"
        "add r4, %0, r0\n\t"
        "ldr r1, [r4, #4]\n\t"
        "add r0, r4, #0\n\t"
        "bl func_08007C28\n\t"
        "add r0, r4, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_080079E8\n\t"
        "ldr r1, =0x00006CA0\n\t"
        "add r4, %0, r1\n\t"
        "ldr r1, [r4, #4]\n\t"
        "add r0, r4, #0\n\t"
        "bl func_080073E0\n\t"
        "add r0, r4, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_08007184\n\t"
        "ldr r2, =0x00006C98\n\t"
        "add r4, %0, r2\n\t"
        "ldr r1, [r4, #4]\n\t"
        "add r0, r4, #0\n\t"
        "bl func_08007C28\n\t"
        "add r0, r4, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_080079E8\n\t"
        "ldr r0, =0x00006C90\n\t"
        "add r4, %0, r0\n\t"
        "ldr r1, [r4, #4]\n\t"
        "add r0, r4, #0\n\t"
        "bl func_080073E0\n\t"
        "add r0, r4, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_08007184\n\t"
        "ldr r1, =0x00006C88\n\t"
        "add r4, %0, r1\n\t"
        "ldr r1, [r4, #4]\n\t"
        "add r0, r4, #0\n\t"
        "bl func_08007C28\n\t"
        "add r0, r4, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_080079E8\n\t"
        "mov r2, #0xd9\n\t"
        "lsl r2, r2, #7\n\t"
        "add r4, %0, r2\n\t"
        "ldr r1, [r4, #4]\n\t"
        "add r0, r4, #0\n\t"
        "bl func_080073E0\n\t"
        "add r0, r4, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_08007184\n\t"
        "ldr r0, =0x00006C78\n\t"
        "add r4, %0, r0\n\t"
        "ldr r1, [r4, #4]\n\t"
        "add r0, r4, #0\n\t"
        "bl func_08007C28\n\t"
        "add r0, r4, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_080079E8\n\t"
        "ldr r1, =0x00006C74\n\t"
        "add r0, %0, r1\n\t"
        "mov r1, #2\n\t"
        "bl func_08007184\n\t"
        "ldr r2, =0x00006C70\n\t"
        "add r0, %0, r2\n\t"
        "mov r1, #2\n\t"
        "bl func_080079E8\n\t"
        "ldr r1, =0x00006A70\n\t"
        "add r0, %0, r1\n\t"
        "ldr r1, =0x080E5A28\n\t"
        "str r1, [r0]\n\t"
        "ldr r2, =0x00006A40\n\t"
        "add r0, %0, r2\n\t"
        "str r1, [r0]\n\t"
        "sub r2, #0x30\n\t"
        "add r0, %0, r2\n\t"
        "str r1, [r0]\n\t"
        "add r0, %0, #0\n\t"
        "add r1, %1, #0\n\t"
        "bl func_080086BC"
        : "+r"(r5), "+r"(r6), "=r"(r4) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_080D3ED4 @ 0x080D3ED4 (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
void func_080D3ED4(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E5A28;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080D3EF4 @ 0x080D3EF4 (272B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D3EF4 @ 0x080D3EF4 (272 bytes)
 * Role   : C++ Factory / Constructor with operator new (func_080005D4) [vtable: 0x080E5BF8]
 * Fields : +0x00:u16(RW), +0x00:u32(RW), +0x00:u8(RW), +0x04:u32(RW), +0x08:u32(R)
 * Callees: func_080005D4, func_0803F804, func_080D3914, func_080D40CC, func_080D4130, func_080D4480
 * CFG Structure:
 *   L_080D3EF4: call func_080005D4(); call func_0803F804()
 *   L_080D3F78: call func_080D4130(); if (!=) goto L_080D3F78
 *   L_080D3F90: call func_080D40CC(); if (!=) goto L_080D3F90
 *   L_080D3FAE: if (==) goto L_080D3FD8
 *   L_080D3FD8: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_0803F804(void);
extern void func_080D3914(void);
extern void func_080D40CC(void);
extern void func_080D4130(void);
extern void func_080D4480(void);
int func_080D3EF4(void) {
    u32 sp0, sp1, sp2, sp3, sp4;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4));
    __asm__ volatile(
        "	mov sb, r0\n"
        "	add r5, r1, #0\n"
        "	str r0, [sp, #0x10]\n"
        "	mov sl, sp\n"
        "	ldr r0, =0x00000554\n"
        "	bl func_080005D4\n"
        "	ldr r1, [r5, #4]\n"
        "	mov r4, #0\n"
        "	str r4, [r5, #4]\n"
        "	add r6, r0, #0\n"
        "	ldr r0, =0x080E5BF8\n"
        "	str r0, [r6]\n"
        "	str r4, [sp, #4]\n"
        "	str r1, [r6, #4]\n"
        "	add r0, r6, #0\n"
        "	add r0, #8\n"
        "	bl func_0803F804\n"
        "	mov r1, #0xd9\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r6, r1\n"
        "	strb r4, [r0]\n"
        "	mov r0, #0xdb\n"
        "	lsl r0, r0, #2\n"
        "	add r1, r6, r0\n"
        "	strb r4, [r1]\n"
        "	mov r0, #0x1d\n"
        "	str r0, [r1, #4]\n"
        "	mov r1, #0xdd\n"
        "	lsl r1, r1, #2\n"
        "	add r2, r6, r1\n"
        "	ldrb r1, [r2]\n"
        "	sub r0, #0x3d\n"
        "	and r0, r1\n"
        "	mov r1, #6\n"
        "	orr r0, r1\n"
        "	strb r0, [r2]\n"
        "	ldrh r1, [r2]\n"
        "	ldr r0, =0xFFFFF81F\n"
        "	and r0, r1\n"
        "	strh r0, [r2]\n"
        "	mov r1, #0xde\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r6, r1\n"
        "	str r4, [r0]\n"
        "	add r1, #0x14\n"
        "	add r0, r6, r1\n"
        "	str r4, [r0]\n"
        "	mov r1, #0x9a\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r6, r1\n"
        "	str r4, [r0]\n"
        "	ldr r0, =0x000004DC\n"
        "	add r4, r6, r0\n"
        "	mov r5, #5\n"
        "	add r1, sp, #8\n"
        "	mov r8, r1\n"
        "	mov r7, #1\n"
        "	neg r7, r7\n"
        "_L_080D3F78:\n"
        "	add r0, r4, #0\n"
        "	bl func_080D4130\n"
        "	add r4, #0xc\n"
        "	sub r5, #1\n"
        "	cmp r5, r7\n"
        "	bne _L_080D3F78\n"
        "	ldr r0, =0x00000524\n"
        "	add r4, r6, r0\n"
        "	mov r5, #3\n"
        "	mov r7, #1\n"
        "	neg r7, r7\n"
        "_L_080D3F90:\n"
        "	add r0, r4, #0\n"
        "	bl func_080D40CC\n"
        "	add r4, #0xc\n"
        "	sub r5, #1\n"
        "	cmp r5, r7\n"
        "	bne _L_080D3F90\n"
        "	ldr r0, =0x0300040C\n"
        "	str r6, [r0]\n"
        "	ldr r0, [sp, #4]\n"
        "	cmp r0, #0\n"
        "	beq _L_080D3FAE\n"
        "	mov r1, #3\n"
        "	bl func_080D4480\n"
        "_L_080D3FAE:\n"
        "	mov r1, sl\n"
        "	str r6, [r1]\n"
        "	ldr r2, [sp]\n"
        "	mov r0, sp\n"
        "	str r0, [sp, #8]\n"
        "	mov r1, r8\n"
        "	str r2, [r1, #4]\n"
        "	ldr r1, [sp, #8]\n"
        "	mov r0, #0\n"
        "	str r0, [r1]\n"
        "	ldr r0, [sp, #0x10]\n"
        "	str r2, [r0]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080D3FD8\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080D3FD8:\n"
        "	mov r0, sb\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r10", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080D4004 @ 0x080D4004 (60B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D4004 @ 0x080D4004 (60 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x08:u32(R)
 * Callees: func_080005D4, func_080036F8, func_080D3914
 * CFG Structure:
 *   L_080D4004: call func_080005D4(); call func_080036F8(); if (==) goto L_080D4036
 *   L_080D4036: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_080036F8(void);
extern void func_080D3914(void);
int func_080D4004(void) {
    u32 sp0, sp1, sp2;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2));
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	mov r0, #8\n"
        "	bl func_080005D4\n"
        "	bl func_080036F8\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #4]\n"
        "	str r0, [sp, #8]\n"
        "	add r2, r1, #0\n"
        "	mov r1, #0\n"
        "	str r1, [r2]\n"
        "	str r0, [r4]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080D4036\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080D4036:\n"
        "	add r0, r4, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "lr", "memory"
    );
    return __ret;
}

/* --- func_080D4040 @ 0x080D4040 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
void func_080D4040(void) {
  func_0800080C();
}

/* --- func_080D404C @ 0x080D404C (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D4480();
void func_080D404C(int arg0,u32 arg1) {
  if (*(int *)(arg0 + 4) != 0) {
    func_080D4480(*(int *)(arg0 + 4),3);
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080D406C @ 0x080D406C (96B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08007184();
extern u32 func_080073E0();
extern u32 func_080079E8();
extern u32 func_08007C28();
extern u32 func_080086BC();
extern u32 func_08050D0C();
extern u32 func_080D3914();
void func_080D406C(int arg0, u32 arg1) {
  int *mem_ptr;
  u32 *sub;
  sub = (u32 *)(arg0 + 0x54);
  func_080073E0(sub, sub[1]);
  func_08007184(sub, 2);
  sub = (u32 *)(arg0 + 0x4c);
  func_08007C28(sub, sub[1]);
  func_080079E8(sub, 2);
  *(u32 *)(arg0 + 0x1c) = 0x080E5A28;
  func_08050D0C(arg0 + 0x10, 2);
  mem_ptr = *(int **)(arg0 + 0xc);
  if (mem_ptr != (int *)0) {
    func_080D3914(mem_ptr, 3, *(u32 *)(*mem_ptr + 8));
  }
  func_080086BC(arg0, arg1);
}

/* --- func_080D40CC @ 0x080D40CC (100B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D40CC @ 0x080D40CC (100 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(RW), +0x01:u8(RW), +0x02:u16(RW), +0x03:u8(RW), +0x04:u16(RW), +0x06:u8(W), +0x08:u16(W), +0x0A:u16(W)
 * Callees: func_080D3994
 * CFG Structure:
 *   L_080D40CC: call func_080D3994(); return
 * ========================================================================== */
extern void func_080D3994(void);
int func_080D40CC(void) {
    u32 sp0, sp1;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1));
    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	mov r2, sp\n"
        "	mov r4, #0x8d\n"
        "	lsl r4, r4, #2\n"
        "	mov r6, #0\n"
        "	ldrh r1, [r2]\n"
        "	ldr r3, =0xFFFFFC00\n"
        "	add r0, r3, #0\n"
        "	and r0, r1\n"
        "	orr r0, r4\n"
        "	strh r0, [r2]\n"
        "	mov r0, #0\n"
        "	mov r8, r0\n"
        "	ldrb r4, [r2, #1]\n"
        "	mov r1, #3\n"
        "	add r0, r1, #0\n"
        "	and r0, r4\n"
        "	strb r0, [r2, #1]\n"
        "	ldrh r4, [r2, #2]\n"
        "	add r0, r3, #0\n"
        "	and r0, r4\n"
        "	strh r0, [r2, #2]\n"
        "	ldrb r0, [r2, #3]\n"
        "	and r1, r0\n"
        "	strb r1, [r2, #3]\n"
        "	ldrh r0, [r2, #4]\n"
        "	and r3, r0\n"
        "	strh r3, [r2, #4]\n"
        "	add r0, r5, #0\n"
        "	mov r1, sp\n"
        "	mov r2, #6\n"
        "	bl func_080D3994\n"
        "	mov r0, r8\n"
        "	strb r0, [r5, #6]\n"
        "	strh r6, [r5, #8]\n"
        "	strh r6, [r5, #0xa]\n"
        "	add r0, r5, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r8", "lr", "memory"
    );
    return __ret;
}

/* --- func_080D4130 @ 0x080D4130 (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D4130 @ 0x080D4130 (72 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u8(RW), +0x01:u8(RW), +0x02:u16(RW), +0x03:u8(RW), +0x04:u16(RW)
 * CFG Structure:
 *   L_080D4130: return
 * ========================================================================== */
int func_080D4130(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	ldrb r2, [r0]\n"
        "	mov r1, #4\n"
        "	neg r1, r1\n"
        "	and r1, r2\n"
        "	strb r1, [r0]\n"
        "	add r4, r0, #2\n"
        "	mov r5, #0x8d\n"
        "	lsl r5, r5, #2\n"
        "	ldrh r2, [r0, #2]\n"
        "	ldr r3, =0xFFFFFC00\n"
        "	add r1, r3, #0\n"
        "	and r1, r2\n"
        "	orr r1, r5\n"
        "	strh r1, [r0, #2]\n"
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

/* --- func_080D4178 @ 0x080D4178 (776B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D4178 @ 0x080D4178 (776 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(RW), +0x00:u32(RW), +0x00:u8(RW), +0x02:u16(RW), +0x03:u8(RW), +0x04:u32(RW), +0x04:u8(RW)
 * Callees: func_080D3994, func_080D3B28, func_080D44D4, func_080D60B0, func_080D64C8, func_080D67C8, func_080D68C0, func_080D6B40
 * CFG Structure:
 *   L_080D4178: call func_080D64C8(); call func_080D6B40(); call func_080D68C0(); call func_080D67C8(); if (==) goto L_080D428E
 *   L_080D427E: if (==) goto L_080D4286
 *   L_080D4286: if (!=) goto L_080D427E
 *   L_080D428E: call func_080D3994(); call func_080D3994(); call func_080D60B0(); call func_080D44D4()
 *   L_080D42DE: if (!=) goto L_080D42DE
 *   L_080D431A: if (!=) goto L_080D431A
 * ========================================================================== */
extern void func_080D3994(void);
extern void func_080D3B28(void);
extern void func_080D44D4(void);
extern void func_080D60B0(void);
extern void func_080D64C8(void);
extern void func_080D67C8(void);
extern void func_080D68C0(void);
extern void func_080D6B40(void);
int func_080D4178(void) {
    u32 sp0, sp1;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1));
    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	add r6, r1, #0\n"
        "	ldrb r3, [r6]\n"
        "	lsl r1, r3, #0x1f\n"
        "	lsr r1, r1, #0x1f\n"
        "	ldrb r2, [r5]\n"
        "	mov r4, #2\n"
        "	neg r4, r4\n"
        "	add r0, r4, #0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #2\n"
        "	and r1, r3\n"
        "	mov r2, #3\n"
        "	neg r2, r2\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #4\n"
        "	and r1, r3\n"
        "	sub r2, #2\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #8\n"
        "	and r1, r3\n"
        "	sub r2, #4\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x10\n"
        "	and r1, r3\n"
        "	sub r2, #8\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r5]\n"
        "	ldrh r0, [r6]\n"
        "	mov r1, #0xff\n"
        "	lsl r1, r1, #5\n"
        "	and r1, r0\n"
        "	ldrh r2, [r5]\n"
        "	ldr r0, =0xFFFFE01F\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r5]\n"
        "	ldr r2, [r6]\n"
        "	mov r0, #0xf8\n"
        "	lsl r0, r0, #0xa\n"
        "	and r2, r0\n"
        "	ldr r0, [r5]\n"
        "	ldr r1, =0xFFFC1FFF\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	str r0, [r5]\n"
        "	ldrh r0, [r6, #2]\n"
        "	mov r1, #0xfe\n"
        "	lsl r1, r1, #1\n"
        "	and r1, r0\n"
        "	ldrh r2, [r5, #2]\n"
        "	ldr r0, =0xFFFFFE03\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r5, #2]\n"
        "	ldrb r2, [r6, #3]\n"
        "	mov r1, #0x7e\n"
        "	and r1, r2\n"
        "	ldrb r3, [r5, #3]\n"
        "	mov r0, #0x7f\n"
        "	neg r0, r0\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	lsr r2, r2, #7\n"
        "	lsl r2, r2, #7\n"
        "	mov r1, #0x7f\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	strb r0, [r5, #3]\n"
        "	ldrb r0, [r6, #4]\n"
        "	lsl r0, r0, #0x1f\n"
        "	lsr r0, r0, #0x1f\n"
        "	ldrb r1, [r5, #4]\n"
        "	and r4, r1\n"
        "	orr r4, r0\n"
        "	strb r4, [r5, #4]\n"
        "	add r1, r5, #0\n"
        "	add r1, #8\n"
        "	add r0, r6, #0\n"
        "	add r0, #8\n"
        "	ldm r0!, {r2, r3, r4}\n"
        "	stm r1!, {r2, r3, r4}\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x14\n"
        "	add r1, r6, #0\n"
        "	add r1, #0x14\n"
        "	bl func_080D64C8\n"
        "	ldr r1, =0x00001AA8\n"
        "	add r0, r5, r1\n"
        "	add r1, r6, r1\n"
        "	bl func_080D6B40\n"
        "	ldr r1, =0x00001BD8\n"
        "	add r0, r5, r1\n"
        "	add r1, r6, r1\n"
        "	bl func_080D68C0\n"
        "	ldr r1, =0x00001C70\n"
        "	add r0, r5, r1\n"
        "	add r1, r6, r1\n"
        "	bl func_080D67C8\n"
        "	mov r0, #0xe5\n"
        "	lsl r0, r0, #5\n"
        "	add r1, r5, r0\n"
        "	add r0, r0, r6\n"
        "	mov ip, r0\n"
        "	mov r0, #0\n"
        "	str r0, [r1]\n"
        "	mov r0, ip\n"
        "	ldr r7, [r0]\n"
        "	ldr r2, =0x00001CA4\n"
        "	add r0, r6, r2\n"
        "	add r4, r0, r7\n"
        "	add r2, r0, #0\n"
        "	ldr r0, =0x00001CA4\n"
        "	add r3, r5, r0\n"
        "	cmp r2, r4\n"
        "	beq _L_080D428E\n"
        "_L_080D427E:\n"
        "	cmp r3, #0\n"
        "	beq _L_080D4286\n"
        "	ldrb r0, [r2]\n"
        "	strb r0, [r3]\n"
        "_L_080D4286:\n"
        "	add r2, #1\n"
        "	add r3, #1\n"
        "	cmp r2, r4\n"
        "	bne _L_080D427E\n"
        "_L_080D428E:\n"
        "	str r7, [r1]\n"
        "	add r0, r1, #0\n"
        "	add r0, #0x24\n"
        "	mov r1, ip\n"
        "	add r1, #0x24\n"
        "	mov r2, #6\n"
        "	bl func_080D3994\n"
        "	ldr r1, =0x00001CCC\n"
        "	add r0, r5, r1\n"
        "	add r1, r6, r1\n"
        "	mov r2, #6\n"
        "	bl func_080D3994\n"
        "	ldr r1, =0x00001CD4\n"
        "	add r0, r5, r1\n"
        "	add r1, r6, r1\n"
        "	bl func_080D60B0\n"
        "	ldr r1, =0x0000214C\n"
        "	add r0, r5, r1\n"
        "	add r1, r6, r1\n"
        "	bl func_080D44D4\n"
        "	ldr r0, =0x000021CC\n"
        "	add r4, r5, r0\n"
        "	add r0, r0, r6\n"
        "	mov ip, r0\n"
        "	ldr r0, [r0]\n"
        "	str r0, [r4]\n"
        "	mov r1, ip\n"
        "	ldr r0, [r1, #4]\n"
        "	str r0, [r4, #4]\n"
        "	ldr r3, =0x000021D4\n"
        "	add r2, r5, r3\n"
        "	mov r3, #7\n"
        "	ldr r0, =0x000021D4\n"
        "	add r1, r6, r0\n"
        "	mov r7, #1\n"
        "	neg r7, r7\n"
        "_L_080D42DE:\n"
        "	ldrb r0, [r1]\n"
        "	strb r0, [r2]\n"
        "	add r2, #1\n"
        "	add r1, #1\n"
        "	sub r3, #1\n"
        "	cmp r3, r7\n"
        "	bne _L_080D42DE\n"
        "	add r3, r4, #0\n"
        "	add r3, #0x10\n"
        "	mov r1, #3\n"
        "	mov r2, ip\n"
        "	add r2, #0x10\n"
        "	add r7, r4, #0\n"
        "	add r7, #0x14\n"
        "	mov r0, #0x14\n"
        "	add r0, ip\n"
        "	mov r8, r0\n"
        "	mov r0, #0x24\n"
        "	add r0, r0, r4\n"
        "	mov sb, r0\n"
        "	mov r0, #0x24\n"
        "	add r0, ip\n"
        "	mov sl, r0\n"
        "	add r4, #0x34\n"
        "	str r4, [sp]\n"
        "	mov r4, ip\n"
        "	add r4, #0x34\n"
        "	str r4, [sp, #4]\n"
        "	mov r4, #1\n"
        "	neg r4, r4\n"
        "_L_080D431A:\n"
        "	ldrb r0, [r2]\n"
        "	strb r0, [r3]\n"
        "	add r3, #1\n"
        "	add r2, #1\n"
        "	sub r1, #1\n"
        "	cmp r1, r4\n"
        "	bne _L_080D431A\n"
        "	add r0, r7, #0\n"
        "	mov r1, r8\n"
        "	bl func_080D3B28\n"
        "	mov r0, sb\n"
        "	mov r1, sl\n"
        "	bl func_080D3B28\n"
        "	ldr r0, [sp]\n"
        "	ldr r1, [sp, #4]\n"
        "	bl func_080D3B28\n"
        "	ldr r0, =0x00002210\n"
        "	add r1, r5, r0\n"
        "	add r0, r6, r0\n"
        "	ldr r0, [r0]\n"
        "	str r0, [r1]\n"
        "	ldr r1, =0x00002214\n"
        "	add r0, r5, r1\n"
        "	add r1, r6, r1\n"
        "	ldr r2, =0x00000A08\n"
        "	bl func_080D3994\n"
        "	ldr r1, =0x00002C1C\n"
        "	add r0, r5, r1\n"
        "	add r1, r6, r1\n"
        "	ldm r1!, {r2, r3, r4}\n"
        "	stm r0!, {r2, r3, r4}\n"
        "	ldm r1!, {r2, r3, r4}\n"
        "	stm r0!, {r2, r3, r4}\n"
        "	ldm r1!, {r2, r3, r4}\n"
        "	stm r0!, {r2, r3, r4}\n"
        "	ldm r1!, {r2, r3, r4}\n"
        "	stm r0!, {r2, r3, r4}\n"
        "	ldr r0, =0x00002C4C\n"
        "	add r1, r5, r0\n"
        "	add r0, r6, r0\n"
        "	ldm r0!, {r2, r3, r4}\n"
        "	stm r1!, {r2, r3, r4}\n"
        "	ldm r0!, {r2, r3, r4}\n"
        "	stm r1!, {r2, r3, r4}\n"
        "	ldm r0!, {r2, r3, r4}\n"
        "	stm r1!, {r2, r3, r4}\n"
        "	ldr r0, [r0]\n"
        "	str r0, [r1]\n"
        "	ldr r0, =0x00002C74\n"
        "	add r1, r5, r0\n"
        "	add r0, r6, r0\n"
        "	ldm r0!, {r2, r3, r4}\n"
        "	stm r1!, {r2, r3, r4}\n"
        "	mov r1, #0xb2\n"
        "	lsl r1, r1, #6\n"
        "	add r0, r5, r1\n"
        "	add r1, r6, r1\n"
        "	mov r2, #0xec\n"
        "	lsl r2, r2, #1\n"
        "	bl func_080D3994\n"
        "	ldr r1, =0x00002E58\n"
        "	add r0, r5, r1\n"
        "	add r1, r6, r1\n"
        "	mov r2, #0xc5\n"
        "	lsl r2, r2, #3\n"
        "	bl func_080D3994\n"
        "	mov r0, #0xd2\n"
        "	lsl r0, r0, #6\n"
        "	add r1, r5, r0\n"
        "	add r0, r6, r0\n"
        "	ldm r0!, {r2, r3, r4}\n"
        "	stm r1!, {r2, r3, r4}\n"
        "	ldm r0!, {r2, r3}\n"
        "	stm r1!, {r2, r3}\n"
        "	ldr r1, =0x00003494\n"
        "	add r0, r5, r1\n"
        "	add r1, r6, r1\n"
        "	ldm r1!, {r2, r3, r4}\n"
        "	stm r0!, {r2, r3, r4}\n"
        "	ldm r1!, {r2, r3, r4}\n"
        "	stm r0!, {r2, r3, r4}\n"
        "	ldm r1!, {r2, r3, r4}\n"
        "	stm r0!, {r2, r3, r4}\n"
        "	ldm r1!, {r2, r3, r4}\n"
        "	stm r0!, {r2, r3, r4}\n"
        "	ldr r0, =0x000034C4\n"
        "	add r1, r6, r0\n"
        "	ldrb r1, [r1]\n"
        "	add r0, r5, r0\n"
        "	strb r1, [r0]\n"
        "	ldr r0, =0x000034C5\n"
        "	add r1, r6, r0\n"
        "	ldrb r1, [r1]\n"
        "	add r0, r5, r0\n"
        "	strb r1, [r0]\n"
        "	ldr r0, =0x000034C8\n"
        "	add r1, r5, r0\n"
        "	add r0, r6, r0\n"
        "	ldm r0!, {r2, r3, r4}\n"
        "	stm r1!, {r2, r3, r4}\n"
        "	ldr r0, [r0]\n"
        "	str r0, [r1]\n"
        "	ldr r0, =0x000034D8\n"
        "	add r1, r5, r0\n"
        "	add r0, r6, r0\n"
        "	ldr r0, [r0]\n"
        "	str r0, [r1]\n"
        "	ldr r1, =0x000034DC\n"
        "	add r0, r5, r1\n"
        "	add r1, r6, r1\n"
        "	ldm r1!, {r2, r3, r4}\n"
        "	stm r0!, {r2, r3, r4}\n"
        "	ldm r1!, {r2, r3, r4}\n"
        "	stm r0!, {r2, r3, r4}\n"
        "	add r0, r5, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r10", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080D4480 @ 0x080D4480 (84B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D4480 @ 0x080D4480 (84 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R)
 * Callees: func_08000608, func_080D6B00, func_080D6C08
 * CFG Structure:
 *   L_080D4480: if (==) goto L_080D44A0
 *   L_080D449A: if (!=) goto L_080D449A
 *   L_080D44A0: call func_080D6B00(); call func_080D6C08(); if (==) goto L_080D44C2
 *   L_080D44C2: return
 * ========================================================================== */
extern void func_08000608(void);
extern void func_080D6B00(void);
extern void func_080D6C08(void);
void func_080D4480(void) {

    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	add r5, r1, #0\n"
        "	mov r0, #0xe5\n"
        "	lsl r0, r0, #5\n"
        "	add r1, r4, r0\n"
        "	ldr r0, [r1]\n"
        "	add r0, #4\n"
        "	add r1, r1, r0\n"
        "	ldr r2, =0x00001CA4\n"
        "	add r0, r4, r2\n"
        "	cmp r0, r1\n"
        "	beq _L_080D44A0\n"
        "_L_080D449A:\n"
        "	add r0, #1\n"
        "	cmp r0, r1\n"
        "	bne _L_080D449A\n"
        "_L_080D44A0:\n"
        "	ldr r1, =0x00001C38\n"
        "	add r0, r4, r1\n"
        "	mov r1, #2\n"
        "	bl func_080D6B00\n"
        "	ldr r2, =0x00001AA8\n"
        "	add r0, r4, r2\n"
        "	mov r1, #2\n"
        "	bl func_080D6C08\n"
        "	mov r0, #1\n"
        "	and r0, r5\n"
        "	cmp r0, #0\n"
        "	beq _L_080D44C2\n"
        "	add r0, r4, #0\n"
        "	bl func_08000608\n"
        "_L_080D44C2:\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
}

/* --- func_080D44D4 @ 0x080D44D4 (4096B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D44D4 @ 0x080D44D4 (4096 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(RW), +0x00:u32(W), +0x00:u8(RW), +0x0C:u16(RW), +0x0E:u8(RW), +0x0F:u8(RW), +0x10:u32(RW), +0x10:u8(RW), +0x11:u8(RW), +0x12:u16(RW), +0x12:u8(RW), +0x13:u8(RW)
 * Callees: func_080D39F8
 * CFG Structure:
 *   L_080D44D4: if (==) goto L_080D44FC
 *   L_080D44FC: goto L_080D4A20
 *   L_080D4A20: goto L_080D4E98
 *   L_080D4E98: goto L_080D52E4
 * ========================================================================== */
extern void func_080D39F8(void);
void func_080D44D4(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, r7, lr}\n"
        "	mov r7, sl\n"
        "	mov r6, sb\n"
        "	mov r5, r8\n"
        "	push {r5, r6, r7}\n"
        "	sub sp, #0x18\n"
        "	add r7, r0, #0\n"
        "	mov sl, r1\n"
        "	mov r0, #0\n"
        "	add r3, r7, #0\n"
        "	stm r3!, {r0}\n"
        "	ldm r1!, {r4}\n"
        "	lsl r0, r4, #1\n"
        "	add r0, r0, r1\n"
        "	cmp r0, r1\n"
        "	beq _L_080D44FC\n"
        "	sub r2, r0, r1\n"
        "	add r0, r3, #0\n"
        "	bl func_080D39F8\n"
        "_L_080D44FC:\n"
        "	str r4, [r7]\n"
        "	mov r1, sl\n"
        "	ldrh r0, [r1, #0xc]\n"
        "	strh r0, [r7, #0xc]\n"
        "	ldrb r2, [r1, #0xe]\n"
        "	lsl r1, r2, #0x1f\n"
        "	lsr r1, r1, #0x1f\n"
        "	ldrb r3, [r7, #0xe]\n"
        "	mov r4, #2\n"
        "	neg r4, r4\n"
        "	mov ip, r4\n"
        "	mov r0, ip\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #6\n"
        "	and r1, r2\n"
        "	sub r4, #5\n"
        "	and r0, r4\n"
        "	orr r0, r1\n"
        "	mov r1, #8\n"
        "	and r1, r2\n"
        "	mov r5, #9\n"
        "	neg r5, r5\n"
        "	and r0, r5\n"
        "	orr r0, r1\n"
        "	mov r1, #0x30\n"
        "	and r1, r2\n"
        "	mov r6, #0x31\n"
        "	neg r6, r6\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	lsr r2, r2, #6\n"
        "	lsl r2, r2, #6\n"
        "	mov r1, #0x3f\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	strb r0, [r7, #0xe]\n"
        "	mov r3, sl\n"
        "	ldrb r2, [r3, #0xf]\n"
        "	lsl r1, r2, #0x1f\n"
        "	lsr r1, r1, #0x1f\n"
        "	ldrb r3, [r7, #0xf]\n"
        "	mov r0, ip\n"
        "	and r0, r3\n"
        "	orr r1, r0\n"
        "	mov r0, #2\n"
        "	and r0, r2\n"
        "	add r6, #0x2e\n"
        "	and r1, r6\n"
        "	orr r1, r0\n"
        "	mov r0, #4\n"
        "	and r0, r2\n"
        "	mov r3, #5\n"
        "	neg r3, r3\n"
        "	and r1, r3\n"
        "	orr r1, r0\n"
        "	mov r0, #0x18\n"
        "	and r0, r2\n"
        "	sub r6, #0x16\n"
        "	mov r8, r6\n"
        "	and r1, r6\n"
        "	orr r1, r0\n"
        "	mov r0, #0x20\n"
        "	and r0, r2\n"
        "	sub r3, #0x1c\n"
        "	and r1, r3\n"
        "	orr r1, r0\n"
        "	lsr r2, r2, #6\n"
        "	lsl r2, r2, #6\n"
        "	mov r6, #0x3f\n"
        "	and r1, r6\n"
        "	orr r1, r2\n"
        "	strb r1, [r7, #0xf]\n"
        "	mov r0, sl\n"
        "	ldrb r2, [r0, #0x10]\n"
        "	lsl r1, r2, #0x1f\n"
        "	lsr r1, r1, #0x1f\n"
        "	ldrb r3, [r7, #0x10]\n"
        "	mov r0, ip\n"
        "	and r0, r3\n"
        "	orr r1, r0\n"
        "	mov r0, #6\n"
        "	and r0, r2\n"
        "	and r1, r4\n"
        "	orr r1, r0\n"
        "	mov r0, #8\n"
        "	and r0, r2\n"
        "	and r1, r5\n"
        "	orr r1, r0\n"
        "	mov r0, #0x10\n"
        "	and r0, r2\n"
        "	mov r3, #0x11\n"
        "	neg r3, r3\n"
        "	and r1, r3\n"
        "	orr r1, r0\n"
        "	mov r0, #0x20\n"
        "	and r0, r2\n"
        "	sub r6, #0x60\n"
        "	and r1, r6\n"
        "	orr r1, r0\n"
        "	mov r0, #0x40\n"
        "	and r0, r2\n"
        "	sub r3, #0x30\n"
        "	and r1, r3\n"
        "	orr r1, r0\n"
        "	lsr r2, r2, #7\n"
        "	lsl r2, r2, #7\n"
        "	mov r6, #0x7f\n"
        "	and r1, r6\n"
        "	orr r1, r2\n"
        "	strb r1, [r7, #0x10]\n"
        "	mov r0, sl\n"
        "	ldrb r3, [r0, #0x11]\n"
        "	lsl r1, r3, #0x1f\n"
        "	lsr r1, r1, #0x1f\n"
        "	ldrb r2, [r7, #0x11]\n"
        "	mov r0, ip\n"
        "	and r0, r2\n"
        "	orr r1, r0\n"
        "	mov r0, #2\n"
        "	and r0, r3\n"
        "	mov r2, #3\n"
        "	neg r2, r2\n"
        "	and r1, r2\n"
        "	orr r1, r0\n"
        "	mov r0, #4\n"
        "	and r0, r3\n"
        "	sub r6, #0x84\n"
        "	and r1, r6\n"
        "	orr r1, r0\n"
        "	mov r0, #8\n"
        "	and r0, r3\n"
        "	and r1, r5\n"
        "	orr r1, r0\n"
        "	mov r0, #0x10\n"
        "	and r0, r3\n"
        "	sub r2, #0xe\n"
        "	and r1, r2\n"
        "	orr r1, r0\n"
        "	mov r0, #0x60\n"
        "	and r0, r3\n"
        "	mov r3, #0x61\n"
        "	neg r3, r3\n"
        "	and r1, r3\n"
        "	orr r1, r0\n"
        "	strb r1, [r7, #0x11]\n"
        "	mov r5, sl\n"
        "	ldr r1, [r5, #0x10]\n"
        "	mov r0, #0xc0\n"
        "	lsl r0, r0, #9\n"
        "	and r1, r0\n"
        "	ldr r0, [r7, #0x10]\n"
        "	ldr r6, .Lpool_080D4A18\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	str r0, [r7, #0x10]\n"
        "	ldrb r3, [r5, #0x12]\n"
        "	mov r1, #6\n"
        "	and r1, r3\n"
        "	ldrb r2, [r7, #0x12]\n"
        "	add r0, r4, #0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x18\n"
        "	and r1, r3\n"
        "	mov r2, r8\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x60\n"
        "	and r1, r3\n"
        "	mov r3, #0x61\n"
        "	neg r3, r3\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	strb r0, [r7, #0x12]\n"
        "	ldrh r0, [r5, #0x12]\n"
        "	mov r1, #0xc0\n"
        "	lsl r1, r1, #1\n"
        "	and r1, r0\n"
        "	ldrh r2, [r7, #0x12]\n"
        "	ldr r0, .Lpool_080D4A1C\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r7, #0x12]\n"
        "	ldrb r3, [r5, #0x13]\n"
        "	mov r1, #6\n"
        "	and r1, r3\n"
        "	ldrb r2, [r7, #0x13]\n"
        "	add r0, r4, #0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x18\n"
        "	and r1, r3\n"
        "	mov r5, r8\n"
        "	and r0, r5\n"
        "	orr r0, r1\n"
        "	mov r1, #0x60\n"
        "	and r1, r3\n"
        "	mov r6, #0x61\n"
        "	neg r6, r6\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	lsr r3, r3, #7\n"
        "	mov r1, sl\n"
        "	ldrb r2, [r1, #0x14]\n"
        "	mov r5, #1\n"
        "	and r2, r5\n"
        "	lsl r2, r2, #1\n"
        "	orr r2, r3\n"
        "	add r1, r2, #0\n"
        "	and r1, r5\n"
        "	lsl r1, r1, #7\n"
        "	mov r6, #0x7f\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	strb r0, [r7, #0x13]\n"
        "	lsr r2, r2, #1\n"
        "	and r2, r5\n"
        "	ldrb r1, [r7, #0x14]\n"
        "	mov r0, ip\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	mov r1, sl\n"
        "	ldrb r2, [r1, #0x14]\n"
        "	mov r1, #6\n"
        "	and r1, r2\n"
        "	and r0, r4\n"
        "	orr r0, r1\n"
        "	mov r1, #0x18\n"
        "	and r1, r2\n"
        "	mov r3, r8\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0x60\n"
        "	and r1, r2\n"
        "	sub r5, #0x62\n"
        "	and r0, r5\n"
        "	orr r0, r1\n"
        "	strb r0, [r7, #0x14]\n"
        "	mov r6, sl\n"
        "	ldrh r0, [r6, #0x14]\n"
        "	mov r1, #0xc0\n"
        "	lsl r1, r1, #1\n"
        "	and r1, r0\n"
        "	ldrh r2, [r7, #0x14]\n"
        "	ldr r0, .Lpool_080D4A1C\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r7, #0x14]\n"
        "	ldrb r3, [r6, #0x15]\n"
        "	mov r1, #6\n"
        "	and r1, r3\n"
        "	ldrb r2, [r7, #0x15]\n"
        "	add r0, r4, #0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x18\n"
        "	and r1, r3\n"
        "	mov r2, r8\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x60\n"
        "	and r1, r3\n"
        "	and r0, r5\n"
        "	orr r0, r1\n"
        "	strb r0, [r7, #0x15]\n"
        "	ldr r1, [r6, #0x14]\n"
        "	mov r0, #0xc0\n"
        "	lsl r0, r0, #9\n"
        "	and r1, r0\n"
        "	ldr r0, [r7, #0x14]\n"
        "	ldr r3, .Lpool_080D4A18\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	str r0, [r7, #0x14]\n"
        "	ldrb r3, [r6, #0x16]\n"
        "	mov r1, #6\n"
        "	and r1, r3\n"
        "	ldrb r2, [r7, #0x16]\n"
        "	add r0, r4, #0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x18\n"
        "	and r1, r3\n"
        "	mov r5, r8\n"
        "	and r0, r5\n"
        "	orr r0, r1\n"
        "	mov r1, #0x60\n"
        "	and r1, r3\n"
        "	mov r6, #0x61\n"
        "	neg r6, r6\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	strb r0, [r7, #0x16]\n"
        "	mov r1, sl\n"
        "	ldrh r0, [r1, #0x16]\n"
        "	mov r1, #0xc0\n"
        "	lsl r1, r1, #1\n"
        "	and r1, r0\n"
        "	ldrh r2, [r7, #0x16]\n"
        "	ldr r0, .Lpool_080D4A1C\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r7, #0x16]\n"
        "	mov r2, sl\n"
        "	ldrb r3, [r2, #0x17]\n"
        "	mov r1, #6\n"
        "	and r1, r3\n"
        "	ldrb r2, [r7, #0x17]\n"
        "	add r0, r4, #0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x18\n"
        "	and r1, r3\n"
        "	and r0, r5\n"
        "	orr r0, r1\n"
        "	mov r1, #0x60\n"
        "	and r1, r3\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	lsr r3, r3, #7\n"
        "	mov r5, sl\n"
        "	ldrb r1, [r5, #0x18]\n"
        "	mov r6, #1\n"
        "	and r1, r6\n"
        "	lsl r1, r1, #1\n"
        "	orr r1, r3\n"
        "	add r2, r1, #0\n"
        "	and r2, r6\n"
        "	lsl r2, r2, #7\n"
        "	mov r3, #0x7f\n"
        "	and r0, r3\n"
        "	orr r0, r2\n"
        "	strb r0, [r7, #0x17]\n"
        "	lsr r1, r1, #1\n"
        "	and r1, r6\n"
        "	ldrb r2, [r7, #0x18]\n"
        "	mov r0, ip\n"
        "	and r0, r2\n"
        "	orr r1, r0\n"
        "	ldrb r2, [r5, #0x18]\n"
        "	mov r0, #6\n"
        "	and r0, r2\n"
        "	and r1, r4\n"
        "	orr r1, r0\n"
        "	mov r0, #0x18\n"
        "	and r0, r2\n"
        "	mov r5, r8\n"
        "	and r1, r5\n"
        "	orr r1, r0\n"
        "	mov r0, #0x60\n"
        "	and r0, r2\n"
        "	sub r6, #0x62\n"
        "	and r1, r6\n"
        "	orr r1, r0\n"
        "	strb r1, [r7, #0x18]\n"
        "	mov r1, sl\n"
        "	ldrh r0, [r1, #0x18]\n"
        "	mov r1, #0xc0\n"
        "	lsl r1, r1, #1\n"
        "	and r1, r0\n"
        "	ldrh r2, [r7, #0x18]\n"
        "	ldr r0, .Lpool_080D4A1C\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r7, #0x18]\n"
        "	mov r2, sl\n"
        "	ldrb r3, [r2, #0x19]\n"
        "	mov r1, #6\n"
        "	and r1, r3\n"
        "	ldrb r2, [r7, #0x19]\n"
        "	add r0, r4, #0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x18\n"
        "	and r1, r3\n"
        "	and r0, r5\n"
        "	orr r0, r1\n"
        "	mov r1, #0x60\n"
        "	and r1, r3\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	strb r0, [r7, #0x19]\n"
        "	mov r3, sl\n"
        "	ldr r1, [r3, #0x18]\n"
        "	mov r0, #0xc0\n"
        "	lsl r0, r0, #9\n"
        "	and r1, r0\n"
        "	ldr r0, [r7, #0x18]\n"
        "	ldr r5, .Lpool_080D4A18\n"
        "	and r0, r5\n"
        "	orr r0, r1\n"
        "	str r0, [r7, #0x18]\n"
        "	ldrb r3, [r3, #0x1a]\n"
        "	mov r1, #6\n"
        "	and r1, r3\n"
        "	ldrb r2, [r7, #0x1a]\n"
        "	add r0, r4, #0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x18\n"
        "	and r1, r3\n"
        "	mov r6, r8\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	mov r1, #0x60\n"
        "	and r1, r3\n"
        "	mov r2, #0x61\n"
        "	neg r2, r2\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r7, #0x1a]\n"
        "	mov r3, sl\n"
        "	ldrh r0, [r3, #0x1a]\n"
        "	mov r1, #0xc0\n"
        "	lsl r1, r1, #1\n"
        "	and r1, r0\n"
        "	ldrh r2, [r7, #0x1a]\n"
        "	ldr r0, .Lpool_080D4A1C\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r7, #0x1a]\n"
        "	ldrb r3, [r3, #0x1b]\n"
        "	mov r1, #6\n"
        "	and r1, r3\n"
        "	ldrb r2, [r7, #0x1b]\n"
        "	add r0, r4, #0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x18\n"
        "	and r1, r3\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	mov r1, #0x60\n"
        "	and r1, r3\n"
        "	mov r5, #0x61\n"
        "	neg r5, r5\n"
        "	and r0, r5\n"
        "	orr r0, r1\n"
        "	lsr r3, r3, #7\n"
        "	mov r6, sl\n"
        "	ldrb r1, [r6, #0x1c]\n"
        "	mov r2, #1\n"
        "	and r1, r2\n"
        "	lsl r1, r1, #1\n"
        "	orr r1, r3\n"
        "	add r2, r1, #0\n"
        "	mov r3, #1\n"
        "	and r2, r3\n"
        "	lsl r2, r2, #7\n"
        "	mov r5, #0x7f\n"
        "	and r0, r5\n"
        "	orr r0, r2\n"
        "	strb r0, [r7, #0x1b]\n"
        "	lsr r1, r1, #1\n"
        "	and r1, r3\n"
        "	ldrb r2, [r7, #0x1c]\n"
        "	mov r0, ip\n"
        "	and r0, r2\n"
        "	orr r1, r0\n"
        "	ldrb r2, [r6, #0x1c]\n"
        "	mov r0, #6\n"
        "	and r0, r2\n"
        "	and r1, r4\n"
        "	orr r1, r0\n"
        "	mov r0, #0x18\n"
        "	and r0, r2\n"
        "	mov r6, r8\n"
        "	and r1, r6\n"
        "	orr r1, r0\n"
        "	mov r0, #0x60\n"
        "	and r0, r2\n"
        "	mov r2, #0x61\n"
        "	neg r2, r2\n"
        "	and r1, r2\n"
        "	orr r1, r0\n"
        "	strb r1, [r7, #0x1c]\n"
        "	mov r3, sl\n"
        "	ldrh r0, [r3, #0x1c]\n"
        "	mov r1, #0xc0\n"
        "	lsl r1, r1, #1\n"
        "	and r1, r0\n"
        "	ldrh r2, [r7, #0x1c]\n"
        "	ldr r0, .Lpool_080D4A1C\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r7, #0x1c]\n"
        "	ldrb r3, [r3, #0x1d]\n"
        "	mov r1, #6\n"
        "	and r1, r3\n"
        "	ldrb r2, [r7, #0x1d]\n"
        "	add r0, r4, #0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x18\n"
        "	and r1, r3\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	mov r1, #0x60\n"
        "	and r1, r3\n"
        "	sub r5, #0xe0\n"
        "	and r0, r5\n"
        "	orr r0, r1\n"
        "	strb r0, [r7, #0x1d]\n"
        "	mov r6, sl\n"
        "	ldr r1, [r6, #0x1c]\n"
        "	mov r0, #0xc0\n"
        "	lsl r0, r0, #9\n"
        "	and r1, r0\n"
        "	ldr r0, [r7, #0x1c]\n"
        "	ldr r2, .Lpool_080D4A18\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	str r0, [r7, #0x1c]\n"
        "	ldrb r3, [r6, #0x1e]\n"
        "	mov r1, #6\n"
        "	and r1, r3\n"
        "	ldrb r2, [r7, #0x1e]\n"
        "	add r0, r4, #0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x18\n"
        "	and r1, r3\n"
        "	mov r5, r8\n"
        "	and r0, r5\n"
        "	orr r0, r1\n"
        "	mov r1, #0x60\n"
        "	and r1, r3\n"
        "	mov r6, #0x61\n"
        "	neg r6, r6\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	strb r0, [r7, #0x1e]\n"
        "	mov r1, sl\n"
        "	ldrh r0, [r1, #0x1e]\n"
        "	mov r1, #0xc0\n"
        "	lsl r1, r1, #1\n"
        "	and r1, r0\n"
        "	ldrh r2, [r7, #0x1e]\n"
        "	ldr r0, .Lpool_080D4A1C\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r7, #0x1e]\n"
        "	mov r2, sl\n"
        "	ldrb r3, [r2, #0x1f]\n"
        "	mov r0, #6\n"
        "	and r0, r3\n"
        "	ldrb r2, [r7, #0x1f]\n"
        "	add r1, r4, #0\n"
        "	and r1, r2\n"
        "	orr r1, r0\n"
        "	mov r0, #0x18\n"
        "	and r0, r3\n"
        "	and r1, r5\n"
        "	orr r1, r0\n"
        "	mov r0, #0x60\n"
        "	and r0, r3\n"
        "	and r1, r6\n"
        "	orr r1, r0\n"
        "	lsr r3, r3, #7\n"
        "	mov r5, sl\n"
        "	add r5, #0x20\n"
        "	ldrb r0, [r5]\n"
        "	mov r6, #1\n"
        "	and r0, r6\n"
        "	lsl r0, r0, #1\n"
        "	orr r0, r3\n"
        "	add r2, r0, #0\n"
        "	and r2, r6\n"
        "	lsl r2, r2, #7\n"
        "	mov r3, #0x7f\n"
        "	and r1, r3\n"
        "	orr r1, r2\n"
        "	strb r1, [r7, #0x1f]\n"
        "	lsr r0, r0, #1\n"
        "	and r0, r6\n"
        "	add r3, r7, #0\n"
        "	add r3, #0x20\n"
        "	ldrb r1, [r3]\n"
        "	mov r6, ip\n"
        "	and r6, r1\n"
        "	orr r0, r6\n"
        "	ldrb r2, [r5]\n"
        "	mov r1, #6\n"
        "	and r1, r2\n"
        "	and r0, r4\n"
        "	orr r0, r1\n"
        "	mov r1, #0x18\n"
        "	and r1, r2\n"
        "	mov r5, r8\n"
        "	and r0, r5\n"
        "	orr r0, r1\n"
        "	mov r1, #0x60\n"
        "	and r1, r2\n"
        "	mov r6, #0x61\n"
        "	neg r6, r6\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	strb r0, [r3]\n"
        "	mov r1, sl\n"
        "	ldrh r0, [r1, #0x20]\n"
        "	mov r1, #0xc0\n"
        "	lsl r1, r1, #1\n"
        "	and r1, r0\n"
        "	ldrh r2, [r7, #0x20]\n"
        "	ldr r0, .Lpool_080D4A1C\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r7, #0x20]\n"
        "	mov r0, sl\n"
        "	add r0, #0x21\n"
        "	ldrb r3, [r0]\n"
        "	add r5, r7, #0\n"
        "	add r5, #0x21\n"
        "	mov r1, #6\n"
        "	and r1, r3\n"
        "	ldrb r2, [r5]\n"
        "	add r0, r4, #0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x18\n"
        "	and r1, r3\n"
        "	mov r2, r8\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x60\n"
        "	and r1, r3\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	strb r0, [r5]\n"
        "	mov r3, sl\n"
        "	ldr r1, [r3, #0x20]\n"
        "	mov r0, #0xc0\n"
        "	lsl r0, r0, #9\n"
        "	and r1, r0\n"
        "	ldr r0, [r7, #0x20]\n"
        "	ldr r5, .Lpool_080D4A18\n"
        "	and r0, r5\n"
        "	orr r0, r1\n"
        "	str r0, [r7, #0x20]\n"
        "	mov r0, sl\n"
        "	add r0, #0x22\n"
        "	ldrb r3, [r0]\n"
        "	add r5, r7, #0\n"
        "	add r5, #0x22\n"
        "	mov r1, #6\n"
        "	and r1, r3\n"
        "	ldrb r2, [r5]\n"
        "	add r0, r4, #0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x18\n"
        "	b _L_080D4A20\n"
        "	.hword 0x0000\n"
        ".Lpool_080D4A18:\n"
        "	.word 0xFFFE7FFF\n"
        ".Lpool_080D4A1C:\n"
        "	.word 0xFFFFFE7F\n"
        "_L_080D4A20:\n"
        "	and r1, r3\n"
        "	mov r6, r8\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	mov r1, #0x20\n"
        "	and r1, r3\n"
        "	mov r2, #0x21\n"
        "	neg r2, r2\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x40\n"
        "	and r1, r3\n"
        "	mov r3, #0x41\n"
        "	neg r3, r3\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	strb r0, [r5]\n"
        "	mov r0, sl\n"
        "	add r0, #0x23\n"
        "	ldrb r0, [r0]\n"
        "	lsr r0, r0, #4\n"
        "	mov r5, sl\n"
        "	add r5, #0x24\n"
        "	str r5, [sp, #0x14]\n"
        "	ldrb r1, [r5]\n"
        "	mov r5, #7\n"
        "	and r1, r5\n"
        "	lsl r1, r1, #4\n"
        "	orr r1, r0\n"
        "	mov r0, #0xf\n"
        "	add r2, r1, #0\n"
        "	and r2, r0\n"
        "	mov r6, #0x23\n"
        "	lsl r2, r2, #4\n"
        "	ldrb r3, [r6, r7]\n"
        "	and r0, r3\n"
        "	orr r0, r2\n"
        "	strb r0, [r6, r7]\n"
        "	lsr r1, r1, #4\n"
        "	add r3, r7, #0\n"
        "	add r3, #0x24\n"
        "	and r1, r5\n"
        "	ldrb r2, [r3]\n"
        "	mov r0, #8\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	ldr r5, [sp, #0x14]\n"
        "	ldrb r2, [r5]\n"
        "	mov r1, #0x18\n"
        "	and r1, r2\n"
        "	mov r6, r8\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	mov r1, #0x60\n"
        "	and r1, r2\n"
        "	mov r2, #0x61\n"
        "	neg r2, r2\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r3]\n"
        "	mov r3, sl\n"
        "	ldrh r1, [r3, #0x24]\n"
        "	mov r0, #0xc0\n"
        "	lsl r0, r0, #1\n"
        "	and r0, r1\n"
        "	ldrh r1, [r7, #0x24]\n"
        "	ldr r5, .Lpool_080D4E90\n"
        "	and r5, r1\n"
        "	orr r5, r0\n"
        "	strh r5, [r7, #0x24]\n"
        "	mov r0, sl\n"
        "	add r0, #0x25\n"
        "	ldrb r1, [r0]\n"
        "	add r3, r7, #0\n"
        "	add r3, #0x25\n"
        "	mov r0, #6\n"
        "	and r0, r1\n"
        "	ldrb r2, [r3]\n"
        "	and r4, r2\n"
        "	orr r4, r0\n"
        "	mov r0, #0x18\n"
        "	and r0, r1\n"
        "	and r4, r6\n"
        "	orr r4, r0\n"
        "	mov r0, #0x60\n"
        "	and r0, r1\n"
        "	mov r2, #0x61\n"
        "	neg r2, r2\n"
        "	and r4, r2\n"
        "	orr r4, r0\n"
        "	lsr r1, r1, #7\n"
        "	lsl r1, r1, #7\n"
        "	mov r5, #0x7f\n"
        "	and r4, r5\n"
        "	orr r4, r1\n"
        "	strb r4, [r3]\n"
        "	mov r0, sl\n"
        "	add r0, #0x26\n"
        "	ldrb r2, [r0]\n"
        "	lsl r1, r2, #0x1e\n"
        "	add r5, r7, #0\n"
        "	add r5, #0x26\n"
        "	lsr r1, r1, #0x1e\n"
        "	ldrb r3, [r5]\n"
        "	mov r4, #4\n"
        "	neg r4, r4\n"
        "	add r0, r4, #0\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0xc\n"
        "	and r1, r2\n"
        "	mov r6, #0xd\n"
        "	neg r6, r6\n"
        "	mov r8, r6\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	mov r1, #0x30\n"
        "	and r1, r2\n"
        "	mov r3, #0x31\n"
        "	neg r3, r3\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	lsr r2, r2, #6\n"
        "	lsl r2, r2, #6\n"
        "	mov r6, #0x3f\n"
        "	and r0, r6\n"
        "	orr r0, r2\n"
        "	strb r0, [r5]\n"
        "	mov r0, sl\n"
        "	add r0, #0x27\n"
        "	ldrb r2, [r0]\n"
        "	lsl r1, r2, #0x1e\n"
        "	add r5, #1\n"
        "	lsr r1, r1, #0x1e\n"
        "	ldrb r3, [r5]\n"
        "	add r0, r4, #0\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0xc\n"
        "	and r1, r2\n"
        "	mov r3, r8\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0x30\n"
        "	and r1, r2\n"
        "	sub r6, #0x70\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	lsr r2, r2, #6\n"
        "	lsl r2, r2, #6\n"
        "	mov r1, #0x3f\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	strb r0, [r5]\n"
        "	mov r0, sl\n"
        "	add r0, #0x28\n"
        "	ldrb r2, [r0]\n"
        "	lsl r1, r2, #0x1e\n"
        "	add r5, #1\n"
        "	lsr r1, r1, #0x1e\n"
        "	ldrb r3, [r5]\n"
        "	add r0, r4, #0\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0xc\n"
        "	and r1, r2\n"
        "	mov r3, r8\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0x30\n"
        "	and r1, r2\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	lsr r2, r2, #6\n"
        "	lsl r2, r2, #6\n"
        "	mov r6, #0x3f\n"
        "	and r0, r6\n"
        "	orr r0, r2\n"
        "	strb r0, [r5]\n"
        "	mov r0, sl\n"
        "	add r0, #0x29\n"
        "	ldrb r3, [r0]\n"
        "	lsl r1, r3, #0x1e\n"
        "	add r5, #1\n"
        "	lsr r1, r1, #0x1e\n"
        "	ldrb r2, [r5]\n"
        "	add r0, r4, #0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0xc\n"
        "	and r1, r3\n"
        "	mov r2, r8\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x10\n"
        "	and r1, r3\n"
        "	mov r2, #0x11\n"
        "	neg r2, r2\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x20\n"
        "	and r1, r3\n"
        "	sub r6, #0x60\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	mov r1, #0x40\n"
        "	and r1, r3\n"
        "	sub r2, #0x30\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	lsr r3, r3, #7\n"
        "	lsl r3, r3, #7\n"
        "	mov r1, #0x7f\n"
        "	and r0, r1\n"
        "	orr r0, r3\n"
        "	strb r0, [r5]\n"
        "	mov r0, sl\n"
        "	add r0, #0x2a\n"
        "	ldrb r3, [r0]\n"
        "	lsl r1, r3, #0x1f\n"
        "	lsr r1, r1, #0x1f\n"
        "	add r5, #1\n"
        "	ldrb r2, [r5]\n"
        "	mov r0, #2\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r1, r0\n"
        "	mov r0, #6\n"
        "	and r0, r3\n"
        "	mov r2, #7\n"
        "	neg r2, r2\n"
        "	and r1, r2\n"
        "	orr r1, r0\n"
        "	mov r0, #0x18\n"
        "	and r0, r3\n"
        "	add r6, #8\n"
        "	and r1, r6\n"
        "	orr r1, r0\n"
        "	mov r0, #0x60\n"
        "	and r0, r3\n"
        "	sub r2, #0x5a\n"
        "	and r1, r2\n"
        "	orr r1, r0\n"
        "	strb r1, [r5]\n"
        "	mov r3, sl\n"
        "	ldrh r0, [r3, #0x2a]\n"
        "	mov r1, #0xc0\n"
        "	lsl r1, r1, #1\n"
        "	and r1, r0\n"
        "	ldrh r2, [r7, #0x2a]\n"
        "	ldr r0, .Lpool_080D4E90\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r7, #0x2a]\n"
        "	mov r0, sl\n"
        "	add r0, #0x2b\n"
        "	ldrb r3, [r0]\n"
        "	add r5, #1\n"
        "	mov r1, #6\n"
        "	and r1, r3\n"
        "	ldrb r2, [r5]\n"
        "	mov r0, #7\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #8\n"
        "	and r1, r3\n"
        "	mov r2, #9\n"
        "	neg r2, r2\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x30\n"
        "	and r1, r3\n"
        "	sub r6, #0x18\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	lsr r3, r3, #6\n"
        "	lsl r3, r3, #6\n"
        "	mov r1, #0x3f\n"
        "	and r0, r1\n"
        "	orr r0, r3\n"
        "	strb r0, [r5]\n"
        "	mov r0, sl\n"
        "	add r0, #0x2c\n"
        "	ldrb r3, [r0]\n"
        "	lsl r1, r3, #0x1f\n"
        "	lsr r1, r1, #0x1f\n"
        "	add r5, #1\n"
        "	ldrb r2, [r5]\n"
        "	mov r0, #2\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r1, r0\n"
        "	mov r0, #6\n"
        "	and r0, r3\n"
        "	mov r2, #7\n"
        "	neg r2, r2\n"
        "	and r1, r2\n"
        "	orr r1, r0\n"
        "	mov r0, #0x38\n"
        "	and r0, r3\n"
        "	sub r2, #0x32\n"
        "	and r1, r2\n"
        "	orr r1, r0\n"
        "	lsr r3, r3, #6\n"
        "	lsl r3, r3, #6\n"
        "	mov r6, #0x3f\n"
        "	and r1, r6\n"
        "	orr r1, r3\n"
        "	strb r1, [r5]\n"
        "	mov r0, sl\n"
        "	add r0, #0x2d\n"
        "	ldrb r3, [r0]\n"
        "	lsl r1, r3, #0x1e\n"
        "	add r5, #1\n"
        "	lsr r1, r1, #0x1e\n"
        "	ldrb r2, [r5]\n"
        "	add r0, r4, #0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0xc\n"
        "	and r1, r3\n"
        "	mov r2, r8\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x30\n"
        "	and r1, r3\n"
        "	mov r3, #0x31\n"
        "	neg r3, r3\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	strb r0, [r5]\n"
        "	mov r5, sl\n"
        "	ldr r1, [r5, #0x2c]\n"
        "	mov r0, #0xf0\n"
        "	lsl r0, r0, #0xa\n"
        "	and r1, r0\n"
        "	ldr r0, [r7, #0x2c]\n"
        "	ldr r6, .Lpool_080D4E94\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	str r0, [r7, #0x2c]\n"
        "	mov r0, sl\n"
        "	add r0, #0x2e\n"
        "	ldrb r2, [r0]\n"
        "	add r5, r7, #0\n"
        "	add r5, #0x2e\n"
        "	mov r1, #4\n"
        "	and r1, r2\n"
        "	ldrb r3, [r5]\n"
        "	mov r0, #5\n"
        "	neg r0, r0\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0x18\n"
        "	and r1, r2\n"
        "	mov r3, #0x19\n"
        "	neg r3, r3\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0x60\n"
        "	and r1, r2\n"
        "	mov r6, #0x61\n"
        "	neg r6, r6\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	lsr r2, r2, #7\n"
        "	lsl r2, r2, #7\n"
        "	mov r1, #0x7f\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	strb r0, [r5]\n"
        "	mov r0, sl\n"
        "	add r0, #0x2f\n"
        "	ldrb r3, [r0]\n"
        "	lsl r0, r3, #0x1b\n"
        "	mov r2, #0x2f\n"
        "	add r2, r2, r7\n"
        "	mov ip, r2\n"
        "	lsr r0, r0, #0x1b\n"
        "	ldrb r1, [r2]\n"
        "	mov r2, #0x20\n"
        "	neg r2, r2\n"
        "	and r2, r1\n"
        "	orr r2, r0\n"
        "	mov r0, #0x60\n"
        "	and r0, r3\n"
        "	and r2, r6\n"
        "	orr r2, r0\n"
        "	lsr r3, r3, #7\n"
        "	mov r5, sl\n"
        "	add r5, #0x30\n"
        "	ldrb r1, [r5]\n"
        "	mov r6, #1\n"
        "	and r1, r6\n"
        "	lsl r1, r1, #1\n"
        "	orr r1, r3\n"
        "	add r0, r1, #0\n"
        "	and r0, r6\n"
        "	lsl r0, r0, #7\n"
        "	mov r3, #0x7f\n"
        "	and r2, r3\n"
        "	orr r2, r0\n"
        "	mov r6, ip\n"
        "	strb r2, [r6]\n"
        "	lsr r1, r1, #1\n"
        "	add r3, r7, #0\n"
        "	add r3, #0x30\n"
        "	mov r0, #1\n"
        "	and r1, r0\n"
        "	ldrb r2, [r3]\n"
        "	sub r0, #3\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	ldrb r2, [r5]\n"
        "	mov r1, #6\n"
        "	and r1, r2\n"
        "	mov r5, #7\n"
        "	neg r5, r5\n"
        "	and r0, r5\n"
        "	orr r0, r1\n"
        "	mov r1, #0x18\n"
        "	and r1, r2\n"
        "	mov r6, #0x19\n"
        "	neg r6, r6\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	mov r1, #0x60\n"
        "	and r1, r2\n"
        "	sub r5, #0x5a\n"
        "	and r0, r5\n"
        "	orr r0, r1\n"
        "	lsr r2, r2, #7\n"
        "	lsl r2, r2, #7\n"
        "	mov r6, #0x7f\n"
        "	and r0, r6\n"
        "	orr r0, r2\n"
        "	strb r0, [r3]\n"
        "	mov r0, sl\n"
        "	add r0, #0x31\n"
        "	ldrb r2, [r0]\n"
        "	lsl r1, r2, #0x1e\n"
        "	add r5, r7, #0\n"
        "	add r5, #0x31\n"
        "	lsr r1, r1, #0x1e\n"
        "	ldrb r3, [r5]\n"
        "	add r0, r4, #0\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0xc\n"
        "	and r1, r2\n"
        "	mov r3, r8\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0x30\n"
        "	and r1, r2\n"
        "	sub r6, #0xb0\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	lsr r2, r2, #6\n"
        "	lsl r2, r2, #6\n"
        "	mov r1, #0x3f\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	strb r0, [r5]\n"
        "	mov r0, sl\n"
        "	add r0, #0x32\n"
        "	ldrb r2, [r0]\n"
        "	lsl r1, r2, #0x1e\n"
        "	add r5, #1\n"
        "	lsr r1, r1, #0x1e\n"
        "	ldrb r3, [r5]\n"
        "	add r0, r4, #0\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0xc\n"
        "	and r1, r2\n"
        "	mov r3, r8\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0x30\n"
        "	and r1, r2\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	lsr r2, r2, #6\n"
        "	lsl r2, r2, #6\n"
        "	mov r6, #0x3f\n"
        "	and r0, r6\n"
        "	orr r0, r2\n"
        "	strb r0, [r5]\n"
        "	mov r0, sl\n"
        "	add r0, #0x33\n"
        "	ldrb r1, [r0]\n"
        "	lsl r0, r1, #0x1e\n"
        "	add r3, r7, #0\n"
        "	add r3, #0x33\n"
        "	lsr r0, r0, #0x1e\n"
        "	ldrb r2, [r3]\n"
        "	and r4, r2\n"
        "	orr r4, r0\n"
        "	mov r0, #0xc\n"
        "	and r0, r1\n"
        "	mov r2, r8\n"
        "	and r4, r2\n"
        "	orr r4, r0\n"
        "	mov r0, #0x30\n"
        "	and r0, r1\n"
        "	mov r5, #0x31\n"
        "	neg r5, r5\n"
        "	mov ip, r5\n"
        "	and r4, r5\n"
        "	orr r4, r0\n"
        "	lsr r1, r1, #6\n"
        "	lsl r1, r1, #6\n"
        "	and r4, r6\n"
        "	orr r4, r1\n"
        "	strb r4, [r3]\n"
        "	mov r0, sl\n"
        "	add r0, #0x34\n"
        "	ldrb r2, [r0]\n"
        "	lsl r1, r2, #0x1e\n"
        "	add r4, r7, #0\n"
        "	add r4, #0x34\n"
        "	lsr r1, r1, #0x1e\n"
        "	ldrb r3, [r4]\n"
        "	add r5, #0x2d\n"
        "	add r0, r5, #0\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0xc\n"
        "	and r1, r2\n"
        "	sub r6, #0x4c\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	mov r1, #0x30\n"
        "	and r1, r2\n"
        "	mov r3, ip\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	lsr r2, r2, #6\n"
        "	lsl r2, r2, #6\n"
        "	mov r6, #0x3f\n"
        "	and r0, r6\n"
        "	orr r0, r2\n"
        "	strb r0, [r4]\n"
        "	mov r0, sl\n"
        "	add r0, #0x35\n"
        "	ldrb r2, [r0]\n"
        "	lsl r1, r2, #0x1e\n"
        "	add r4, #1\n"
        "	lsr r1, r1, #0x1e\n"
        "	ldrb r3, [r4]\n"
        "	add r0, r5, #0\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0xc\n"
        "	and r1, r2\n"
        "	mov r3, #0xd\n"
        "	neg r3, r3\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0x30\n"
        "	and r1, r2\n"
        "	mov r6, ip\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	b _L_080D4E98\n"
        ".Lpool_080D4E90:\n"
        "	.word 0xFFFFFE7F\n"
        ".Lpool_080D4E94:\n"
        "	.word 0xFFFC3FFF\n"
        "_L_080D4E98:\n"
        "	lsr r2, r2, #6\n"
        "	lsl r2, r2, #6\n"
        "	mov r1, #0x3f\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	strb r0, [r4]\n"
        "	mov r0, sl\n"
        "	add r0, #0x36\n"
        "	ldrb r3, [r0]\n"
        "	lsl r1, r3, #0x1e\n"
        "	add r4, #1\n"
        "	lsr r1, r1, #0x1e\n"
        "	ldrb r2, [r4]\n"
        "	add r0, r5, #0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #4\n"
        "	and r1, r3\n"
        "	mov r2, #5\n"
        "	neg r2, r2\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x18\n"
        "	and r1, r3\n"
        "	mov r6, #0x19\n"
        "	neg r6, r6\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	mov r1, #0x60\n"
        "	and r1, r3\n"
        "	sub r2, #0x5c\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r4]\n"
        "	mov r3, sl\n"
        "	ldrh r0, [r3, #0x36]\n"
        "	mov r1, #0xc0\n"
        "	lsl r1, r1, #1\n"
        "	and r1, r0\n"
        "	ldrh r2, [r7, #0x36]\n"
        "	ldr r0, .Lpool_080D52D4\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r7, #0x36]\n"
        "	mov r0, sl\n"
        "	add r0, #0x37\n"
        "	ldrb r3, [r0]\n"
        "	mov r4, #0x37\n"
        "	add r4, r4, r7\n"
        "	mov r8, r4\n"
        "	mov r1, #6\n"
        "	and r1, r3\n"
        "	ldrb r2, [r4]\n"
        "	mov r0, #7\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x18\n"
        "	and r1, r3\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	mov r1, #0x60\n"
        "	and r1, r3\n"
        "	sub r6, #0x48\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	lsr r3, r3, #7\n"
        "	mov r4, sl\n"
        "	add r4, #0x38\n"
        "	ldrb r1, [r4]\n"
        "	mov r2, #1\n"
        "	and r1, r2\n"
        "	lsl r1, r1, #1\n"
        "	orr r1, r3\n"
        "	add r2, r1, #0\n"
        "	mov r3, #1\n"
        "	and r2, r3\n"
        "	lsl r2, r2, #7\n"
        "	mov r6, #0x7f\n"
        "	and r0, r6\n"
        "	orr r0, r2\n"
        "	mov r2, r8\n"
        "	strb r0, [r2]\n"
        "	lsr r1, r1, #1\n"
        "	and r1, r3\n"
        "	mov r3, #0x38\n"
        "	add r3, r3, r7\n"
        "	mov r8, r3\n"
        "	ldrb r2, [r3]\n"
        "	mov r0, #2\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r1, r0\n"
        "	ldrb r3, [r4]\n"
        "	mov r0, #2\n"
        "	and r0, r3\n"
        "	mov r2, #3\n"
        "	neg r2, r2\n"
        "	and r1, r2\n"
        "	orr r1, r0\n"
        "	mov r0, #0xc\n"
        "	and r0, r3\n"
        "	mov r4, #0xd\n"
        "	neg r4, r4\n"
        "	and r1, r4\n"
        "	orr r1, r0\n"
        "	mov r0, #0x30\n"
        "	and r0, r3\n"
        "	mov r6, ip\n"
        "	and r1, r6\n"
        "	orr r1, r0\n"
        "	lsr r3, r3, #6\n"
        "	lsl r3, r3, #6\n"
        "	mov r0, #0x3f\n"
        "	and r1, r0\n"
        "	orr r1, r3\n"
        "	mov r2, r8\n"
        "	strb r1, [r2]\n"
        "	mov r0, sl\n"
        "	add r0, #0x39\n"
        "	ldrb r2, [r0]\n"
        "	lsl r1, r2, #0x1e\n"
        "	add r4, r7, #0\n"
        "	add r4, #0x39\n"
        "	lsr r1, r1, #0x1e\n"
        "	ldrb r3, [r4]\n"
        "	add r0, r5, #0\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0xc\n"
        "	and r1, r2\n"
        "	mov r3, #0xd\n"
        "	neg r3, r3\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0x30\n"
        "	and r1, r2\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	lsr r2, r2, #6\n"
        "	lsl r2, r2, #6\n"
        "	mov r6, #0x3f\n"
        "	and r0, r6\n"
        "	orr r0, r2\n"
        "	strb r0, [r4]\n"
        "	mov r0, sl\n"
        "	add r0, #0x3a\n"
        "	ldrb r3, [r0]\n"
        "	lsl r1, r3, #0x1e\n"
        "	add r4, #1\n"
        "	lsr r1, r1, #0x1e\n"
        "	ldrb r2, [r4]\n"
        "	add r0, r5, #0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x1c\n"
        "	and r1, r3\n"
        "	mov r2, #0x1d\n"
        "	neg r2, r2\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x60\n"
        "	and r1, r3\n"
        "	sub r2, #0x44\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r4]\n"
        "	mov r3, sl\n"
        "	ldrh r0, [r3, #0x3a]\n"
        "	mov r1, #0xc0\n"
        "	lsl r1, r1, #1\n"
        "	and r1, r0\n"
        "	ldrh r2, [r7, #0x3a]\n"
        "	ldr r0, .Lpool_080D52D4\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r7, #0x3a]\n"
        "	mov r0, sl\n"
        "	add r0, #0x3b\n"
        "	ldrb r3, [r0]\n"
        "	mov r4, #0x3b\n"
        "	add r4, r4, r7\n"
        "	mov r8, r4\n"
        "	mov r1, #6\n"
        "	and r1, r3\n"
        "	ldrb r2, [r4]\n"
        "	mov r0, #7\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x18\n"
        "	and r1, r3\n"
        "	sub r6, #0x58\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	mov r1, #0x60\n"
        "	and r1, r3\n"
        "	mov r2, #0x61\n"
        "	neg r2, r2\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	lsr r3, r3, #7\n"
        "	mov r4, sl\n"
        "	add r4, #0x3c\n"
        "	ldrb r1, [r4]\n"
        "	mov r6, #1\n"
        "	and r1, r6\n"
        "	lsl r1, r1, #1\n"
        "	orr r1, r3\n"
        "	add r2, r1, #0\n"
        "	and r2, r6\n"
        "	lsl r2, r2, #7\n"
        "	mov r3, #0x7f\n"
        "	and r0, r3\n"
        "	orr r0, r2\n"
        "	mov r6, r8\n"
        "	strb r0, [r6]\n"
        "	lsr r1, r1, #1\n"
        "	mov r0, #1\n"
        "	and r1, r0\n"
        "	add r3, r7, #0\n"
        "	add r3, #0x3c\n"
        "	ldrb r2, [r3]\n"
        "	sub r0, #3\n"
        "	and r0, r2\n"
        "	orr r1, r0\n"
        "	ldrb r2, [r4]\n"
        "	mov r0, #6\n"
        "	and r0, r2\n"
        "	mov r4, #7\n"
        "	neg r4, r4\n"
        "	and r1, r4\n"
        "	orr r1, r0\n"
        "	mov r0, #0x18\n"
        "	and r0, r2\n"
        "	mov r6, #0x19\n"
        "	neg r6, r6\n"
        "	and r1, r6\n"
        "	orr r1, r0\n"
        "	mov r0, #0x60\n"
        "	and r0, r2\n"
        "	mov r2, #0x61\n"
        "	neg r2, r2\n"
        "	and r1, r2\n"
        "	orr r1, r0\n"
        "	strb r1, [r3]\n"
        "	mov r3, sl\n"
        "	ldrh r0, [r3, #0x3c]\n"
        "	mov r1, #0xe0\n"
        "	lsl r1, r1, #2\n"
        "	and r1, r0\n"
        "	ldrh r2, [r7, #0x3c]\n"
        "	ldr r0, .Lpool_080D52D8\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r7, #0x3c]\n"
        "	mov r0, sl\n"
        "	add r0, #0x3d\n"
        "	ldrb r3, [r0]\n"
        "	add r4, r7, #0\n"
        "	add r4, #0x3d\n"
        "	mov r1, #0xc\n"
        "	and r1, r3\n"
        "	ldrb r2, [r4]\n"
        "	mov r0, #0xd\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x30\n"
        "	and r1, r3\n"
        "	mov r6, ip\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	strb r0, [r4]\n"
        "	mov r0, sl\n"
        "	ldr r1, [r0, #0x3c]\n"
        "	mov r0, #0xf0\n"
        "	lsl r0, r0, #0xa\n"
        "	and r1, r0\n"
        "	ldr r0, [r7, #0x3c]\n"
        "	ldr r2, .Lpool_080D52DC\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	str r0, [r7, #0x3c]\n"
        "	mov r0, sl\n"
        "	add r0, #0x3e\n"
        "	ldrb r2, [r0]\n"
        "	add r4, #1\n"
        "	mov r1, #0xc\n"
        "	and r1, r2\n"
        "	ldrb r3, [r4]\n"
        "	mov r0, #0xd\n"
        "	neg r0, r0\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0x30\n"
        "	and r1, r2\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	lsr r2, r2, #6\n"
        "	lsl r2, r2, #6\n"
        "	mov r3, #0x3f\n"
        "	and r0, r3\n"
        "	orr r0, r2\n"
        "	strb r0, [r4]\n"
        "	mov r0, sl\n"
        "	add r0, #0x3f\n"
        "	ldrb r3, [r0]\n"
        "	lsl r0, r3, #0x1e\n"
        "	mov r4, #0x3f\n"
        "	add r4, r4, r7\n"
        "	mov r8, r4\n"
        "	lsr r0, r0, #0x1e\n"
        "	ldrb r2, [r4]\n"
        "	add r1, r5, #0\n"
        "	and r1, r2\n"
        "	orr r1, r0\n"
        "	mov r0, #4\n"
        "	and r0, r3\n"
        "	mov r6, #5\n"
        "	neg r6, r6\n"
        "	and r1, r6\n"
        "	orr r1, r0\n"
        "	mov r0, #0x18\n"
        "	and r0, r3\n"
        "	mov r2, #0x19\n"
        "	neg r2, r2\n"
        "	and r1, r2\n"
        "	orr r1, r0\n"
        "	lsr r3, r3, #5\n"
        "	mov r4, sl\n"
        "	add r4, #0x40\n"
        "	ldrb r0, [r4]\n"
        "	mov r6, #1\n"
        "	and r0, r6\n"
        "	lsl r0, r0, #3\n"
        "	orr r0, r3\n"
        "	lsl r3, r3, #5\n"
        "	mov r2, #0x1f\n"
        "	and r1, r2\n"
        "	orr r1, r3\n"
        "	mov r2, r8\n"
        "	strb r1, [r2]\n"
        "	lsr r0, r0, #3\n"
        "	and r0, r6\n"
        "	add r3, r7, #0\n"
        "	add r3, #0x40\n"
        "	ldrb r1, [r3]\n"
        "	mov r2, #2\n"
        "	neg r2, r2\n"
        "	and r2, r1\n"
        "	orr r0, r2\n"
        "	ldrb r2, [r4]\n"
        "	mov r1, #6\n"
        "	and r1, r2\n"
        "	sub r6, #8\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	mov r1, #0x18\n"
        "	and r1, r2\n"
        "	sub r6, #0x12\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	mov r1, #0x60\n"
        "	and r1, r2\n"
        "	mov r2, #0x61\n"
        "	neg r2, r2\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r3]\n"
        "	ldrh r1, [r4]\n"
        "	mov r0, #0xc0\n"
        "	lsl r0, r0, #1\n"
        "	and r0, r1\n"
        "	ldrh r1, [r3]\n"
        "	ldr r2, .Lpool_080D52D4\n"
        "	and r2, r1\n"
        "	orr r2, r0\n"
        "	strh r2, [r3]\n"
        "	mov r0, sl\n"
        "	add r0, #0x41\n"
        "	ldrb r3, [r0]\n"
        "	add r4, r7, #0\n"
        "	add r4, #0x41\n"
        "	mov r1, #6\n"
        "	and r1, r3\n"
        "	ldrb r2, [r4]\n"
        "	mov r0, #7\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x18\n"
        "	and r1, r3\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	strb r0, [r4]\n"
        "	mov r3, sl\n"
        "	ldr r2, [r3, #0x40]\n"
        "	mov r0, #0xf0\n"
        "	lsl r0, r0, #9\n"
        "	and r2, r0\n"
        "	ldr r0, [r7, #0x40]\n"
        "	ldr r1, .Lpool_080D52E0\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	str r0, [r7, #0x40]\n"
        "	mov r0, sl\n"
        "	add r0, #0x42\n"
        "	ldrb r1, [r0]\n"
        "	add r3, r7, #0\n"
        "	add r3, #0x42\n"
        "	mov r0, #6\n"
        "	and r0, r1\n"
        "	ldrb r2, [r3]\n"
        "	mov r4, #7\n"
        "	neg r4, r4\n"
        "	and r4, r2\n"
        "	orr r4, r0\n"
        "	mov r0, #0x18\n"
        "	and r0, r1\n"
        "	and r4, r6\n"
        "	orr r4, r0\n"
        "	mov r0, #0x20\n"
        "	and r0, r1\n"
        "	sub r6, #8\n"
        "	and r4, r6\n"
        "	orr r4, r0\n"
        "	lsr r1, r1, #6\n"
        "	lsl r1, r1, #6\n"
        "	mov r0, #0x3f\n"
        "	mov r8, r0\n"
        "	and r4, r0\n"
        "	orr r4, r1\n"
        "	strb r4, [r3]\n"
        "	mov r0, sl\n"
        "	add r0, #0x43\n"
        "	ldrb r2, [r0]\n"
        "	lsl r1, r2, #0x1e\n"
        "	add r4, r7, #0\n"
        "	add r4, #0x43\n"
        "	lsr r1, r1, #0x1e\n"
        "	ldrb r3, [r4]\n"
        "	add r0, r5, #0\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0xc\n"
        "	and r1, r2\n"
        "	mov r3, #0xd\n"
        "	neg r3, r3\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0x30\n"
        "	and r1, r2\n"
        "	sub r6, #0x10\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	lsr r2, r2, #6\n"
        "	lsl r2, r2, #6\n"
        "	mov r1, r8\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	strb r0, [r4]\n"
        "	mov r0, sl\n"
        "	add r0, #0x44\n"
        "	ldrb r2, [r0]\n"
        "	lsl r1, r2, #0x1e\n"
        "	add r4, #1\n"
        "	lsr r1, r1, #0x1e\n"
        "	ldrb r3, [r4]\n"
        "	add r0, r5, #0\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0xc\n"
        "	and r1, r2\n"
        "	mov r3, #0xd\n"
        "	neg r3, r3\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0x30\n"
        "	and r1, r2\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	lsr r2, r2, #6\n"
        "	lsl r2, r2, #6\n"
        "	mov r6, r8\n"
        "	and r0, r6\n"
        "	orr r0, r2\n"
        "	strb r0, [r4]\n"
        "	mov r0, sl\n"
        "	add r0, #0x45\n"
        "	ldrb r2, [r0]\n"
        "	lsl r1, r2, #0x1e\n"
        "	add r4, #1\n"
        "	lsr r1, r1, #0x1e\n"
        "	ldrb r3, [r4]\n"
        "	add r0, r5, #0\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0xc\n"
        "	and r1, r2\n"
        "	mov r3, #0xd\n"
        "	neg r3, r3\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0x30\n"
        "	and r1, r2\n"
        "	mov r6, #0x31\n"
        "	neg r6, r6\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	lsr r2, r2, #6\n"
        "	lsl r2, r2, #6\n"
        "	mov r1, r8\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	strb r0, [r4]\n"
        "	mov r0, sl\n"
        "	add r0, #0x46\n"
        "	ldrb r2, [r0]\n"
        "	lsl r1, r2, #0x1e\n"
        "	add r4, #1\n"
        "	lsr r1, r1, #0x1e\n"
        "	ldrb r3, [r4]\n"
        "	add r0, r5, #0\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0xc\n"
        "	and r1, r2\n"
        "	mov r3, #0xd\n"
        "	neg r3, r3\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0x30\n"
        "	and r1, r2\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	lsr r2, r2, #6\n"
        "	lsl r2, r2, #6\n"
        "	mov r6, r8\n"
        "	and r0, r6\n"
        "	b _L_080D52E4\n"
        "	.hword 0x0000\n"
        ".Lpool_080D52D4:\n"
        "	.word 0xFFFFFE7F\n"
        ".Lpool_080D52D8:\n"
        "	.word 0xFFFFFC7F\n"
        ".Lpool_080D52DC:\n"
        "	.word 0xFFFC3FFF\n"
        ".Lpool_080D52E0:\n"
        "	.word 0xFFFE1FFF\n"
        "_L_080D52E4:\n"
        "	orr r0, r2\n"
        "	strb r0, [r4]\n"
        "	mov r0, sl\n"
        "	add r0, #0x47\n"
        "	ldrb r2, [r0]\n"
        "	lsl r1, r2, #0x1e\n"
        "	add r4, #1\n"
        "	lsr r1, r1, #0x1e\n"
        "	ldrb r3, [r4]\n"
        "	add r0, r5, #0\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0xc\n"
        "	and r1, r2\n"
        "	mov r3, #0xd\n"
        "	neg r3, r3\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0x30\n"
        "	and r1, r2\n"
        "	mov r6, #0x31\n"
        "	neg r6, r6\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	lsr r2, r2, #6\n"
        "	lsl r2, r2, #6\n"
        "	mov r1, r8\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	strb r0, [r4]\n"
        "	mov r0, sl\n"
        "	add r0, #0x48\n"
        "	ldrb r2, [r0]\n"
        "	lsl r1, r2, #0x1e\n"
        "	add r4, #1\n"
        "	lsr r1, r1, #0x1e\n"
        "	ldrb r3, [r4]\n"
        "	add r0, r5, #0\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0xc\n"
        "	and r1, r2\n"
        "	mov r3, #0xd\n"
        "	neg r3, r3\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0x30\n"
        "	and r1, r2\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	lsr r2, r2, #6\n"
        "	lsl r2, r2, #6\n"
        "	mov r6, r8\n"
        "	and r0, r6\n"
        "	orr r0, r2\n"
        "	strb r0, [r4]\n"
        "	mov r0, sl\n"
        "	add r0, #0x49\n"
        "	ldrb r2, [r0]\n"
        "	lsl r1, r2, #0x1e\n"
        "	add r4, #1\n"
        "	lsr r1, r1, #0x1e\n"
        "	ldrb r3, [r4]\n"
        "	add r0, r5, #0\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0xc\n"
        "	and r1, r2\n"
        "	mov r3, #0xd\n"
        "	neg r3, r3\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0x30\n"
        "	and r1, r2\n"
        "	mov r6, #0x31\n"
        "	neg r6, r6\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	lsr r2, r2, #6\n"
        "	lsl r2, r2, #6\n"
        "	mov r1, r8\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	strb r0, [r4]\n"
        "	mov r0, sl\n"
        "	add r0, #0x4a\n"
        "	ldrb r2, [r0]\n"
        "	lsl r1, r2, #0x1e\n"
        "	add r4, #1\n"
        "	lsr r1, r1, #0x1e\n"
        "	ldrb r3, [r4]\n"
        "	add r0, r5, #0\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0xc\n"
        "	and r1, r2\n"
        "	mov r3, #0xd\n"
        "	neg r3, r3\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0x30\n"
        "	and r1, r2\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	lsr r2, r2, #6\n"
        "	lsl r2, r2, #6\n"
        "	mov r6, r8\n"
        "	and r0, r6\n"
        "	orr r0, r2\n"
        "	strb r0, [r4]\n"
        "	mov r0, sl\n"
        "	add r0, #0x4b\n"
        "	ldrb r2, [r0]\n"
        "	lsl r1, r2, #0x1e\n"
        "	add r4, #1\n"
        "	lsr r1, r1, #0x1e\n"
        "	ldrb r3, [r4]\n"
        "	add r0, r5, #0\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0xc\n"
        "	and r1, r2\n"
        "	mov r3, #0xd\n"
        "	neg r3, r3\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0x30\n"
        "	and r1, r2\n"
        "	mov r6, #0x31\n"
        "	neg r6, r6\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	lsr r2, r2, #6\n"
        "	lsl r2, r2, #6\n"
        "	mov r1, r8\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	strb r0, [r4]\n"
        "	mov r0, sl\n"
        "	add r0, #0x4c\n"
        "	ldrb r2, [r0]\n"
        "	lsl r1, r2, #0x1e\n"
        "	add r4, #1\n"
        "	lsr r1, r1, #0x1e\n"
        "	ldrb r3, [r4]\n"
        "	add r0, r5, #0\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0xc\n"
        "	and r1, r2\n"
        "	mov r3, #0xd\n"
        "	neg r3, r3\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	mov r1, #0x30\n"
        "	and r1, r2\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	lsr r2, r2, #6\n"
        "	lsl r2, r2, #6\n"
        "	mov r6, r8\n"
        "	and r0, r6\n"
        "	orr r0, r2\n"
        "	strb r0, [r4]\n"
        "	mov r0, sl\n"
        "	add r0, #0x4d\n"
        "	ldrb r3, [r0]\n"
        "	lsl r1, r3, #0x1e\n"
        "	add r4, #1\n"
        "	lsr r1, r1, #0x1e\n"
        "	ldrb r2, [r4]\n"
        "	add r0, r5, #0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #4\n"
        "	and r1, r3\n"
        "	mov r2, #5\n"
        "	neg r2, r2\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #8\n"
        "	and r1, r3\n"
        "	mov r6, #9\n"
        "	neg r6, r6\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	mov r1, #0x10\n"
        "	and r1, r3\n"
        "	sub r2, #0xc\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x20\n"
        "	and r1, r3\n"
        "	sub r6, #0x18\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	mov r1, #0x40\n"
        "	and r1, r3\n"
        "	sub r2, #0x30\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r4]\n"
        "	mov r3, sl\n"
        "	ldr r2, [r3, #0x4c]\n"
        "	mov r4, #3\n"
        "	mov r8, r4\n"
        "	mov r0, #0xc0\n"
        "	lsl r0, r0, #9\n"
        "	and r2, r0\n"
        "	ldr r0, [r7, #0x4c]\n"
        "	ldr r1, [pc, #0x3e8]\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	str r0, [r7, #0x4c]\n"
        "	mov r6, #0x4e\n"
        "	add r6, sl\n"
        "	mov sb, r6\n"
        "	ldrb r3, [r6]\n"
        "	add r4, r7, #0\n"
        "	add r4, #0x4e\n"
        "	mov r1, #2\n"
        "	and r1, r3\n"
        "	ldrb r2, [r4]\n"
        "	mov r0, #3\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0xc\n"
        "	and r1, r3\n"
        "	mov r2, #0xd\n"
        "	neg r2, r2\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x10\n"
        "	and r1, r3\n"
        "	mov r6, #0x11\n"
        "	neg r6, r6\n"
        "	and r0, r6\n"
        "	orr r0, r1\n"
        "	mov r1, #0x60\n"
        "	and r1, r3\n"
        "	sub r2, #0x54\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r4]\n"
        "	mov r3, sb\n"
        "	ldrh r0, [r3]\n"
        "	mov r1, #0xc0\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080D60B0 @ 0x080D60B0 (1048B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D60B0 @ 0x080D60B0 (1048 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(RW), +0x00:u32(RW), +0x00:u8(RW), +0x02:u16(RW), +0x02:u8(RW), +0x03:u8(RW), +0x2C:u32(RW)
 * Callees: func_080D3994, func_080D3B28
 * CFG Structure:
 *   L_080D60B0: call func_080D3B28(); call func_080D3994(); goto L_080D64C0
 *   L_080D64C0: return
 * ========================================================================== */
extern void func_080D3994(void);
extern void func_080D3B28(void);
int func_080D60B0(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	add r5, r1, #0\n"
        "	ldrb r1, [r5]\n"
        "	lsl r1, r1, #0x1a\n"
        "	lsr r1, r1, #0x1a\n"
        "	ldrb r2, [r4]\n"
        "	mov r0, #0x40\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r4]\n"
        "	ldrh r0, [r5]\n"
        "	mov r1, #0xfe\n"
        "	lsl r1, r1, #5\n"
        "	and r1, r0\n"
        "	ldrh r2, [r4]\n"
        "	ldr r0, .Lpool_080D64AC\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r4]\n"
        "	ldr r2, [r5]\n"
        "	mov r0, #0xff\n"
        "	lsl r0, r0, #0xd\n"
        "	and r2, r0\n"
        "	ldr r0, [r4]\n"
        "	ldr r1, .Lpool_080D64B0\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	str r0, [r4]\n"
        "	ldrb r0, [r5, #2]\n"
        "	mov r1, #0x20\n"
        "	and r1, r0\n"
        "	ldrb r2, [r4, #2]\n"
        "	mov r0, #0x21\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r4, #2]\n"
        "	ldrh r0, [r5, #2]\n"
        "	mov r1, #0xe0\n"
        "	lsl r1, r1, #1\n"
        "	and r1, r0\n"
        "	ldrh r2, [r4, #2]\n"
        "	ldr r0, .Lpool_080D64B4\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r4, #2]\n"
        "	ldrb r3, [r5, #3]\n"
        "	mov r1, #2\n"
        "	and r1, r3\n"
        "	ldrb r2, [r4, #3]\n"
        "	mov r0, #3\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x1c\n"
        "	and r1, r3\n"
        "	mov r2, #0x1d\n"
        "	neg r2, r2\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r4, #3]\n"
        "	add r1, r4, #4\n"
        "	add r0, r5, #4\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r2, r3}\n"
        "	stm r1!, {r2, r3}\n"
        "	add r0, r4, #0\n"
        "	add r0, #0x18\n"
        "	add r1, r5, #0\n"
        "	add r1, #0x18\n"
        "	bl func_080D3B28\n"
        "	add r1, r4, #0\n"
        "	add r1, #0x28\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x28\n"
        "	ldrb r0, [r0]\n"
        "	strb r0, [r1]\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x29\n"
        "	ldrb r0, [r0]\n"
        "	add r1, #1\n"
        "	strb r0, [r1]\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x2a\n"
        "	ldrb r1, [r0]\n"
        "	lsl r1, r1, #0x1f\n"
        "	add r3, r4, #0\n"
        "	add r3, #0x2a\n"
        "	lsr r1, r1, #0x1f\n"
        "	ldrb r2, [r3]\n"
        "	mov r0, #2\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r3]\n"
        "	ldr r0, [r5, #0x2c]\n"
        "	str r0, [r4, #0x2c]\n"
        "	add r1, r4, #0\n"
        "	add r1, #0x30\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x30\n"
        "	ldm r0!, {r2, r6}\n"
        "	stm r1!, {r2, r6}\n"
        "	add r1, r4, #0\n"
        "	add r1, #0x38\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x38\n"
        "	ldm r0!, {r3, r6}\n"
        "	stm r1!, {r3, r6}\n"
        "	add r1, r4, #0\n"
        "	add r1, #0x40\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x40\n"
        "	ldm r0!, {r2, r3}\n"
        "	stm r1!, {r2, r3}\n"
        "	add r1, r4, #0\n"
        "	add r1, #0x48\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x48\n"
        "	ldm r0!, {r2, r6}\n"
        "	stm r1!, {r2, r6}\n"
        "	add r1, r4, #0\n"
        "	add r1, #0x50\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x50\n"
        "	ldm r0!, {r3, r6}\n"
        "	stm r1!, {r3, r6}\n"
        "	add r1, r4, #0\n"
        "	add r1, #0x58\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x58\n"
        "	ldm r0!, {r2, r3}\n"
        "	stm r1!, {r2, r3}\n"
        "	add r1, r4, #0\n"
        "	add r1, #0x60\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x60\n"
        "	ldm r0!, {r2, r6}\n"
        "	stm r1!, {r2, r6}\n"
        "	add r1, r4, #0\n"
        "	add r1, #0x68\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x68\n"
        "	ldm r0!, {r3, r6}\n"
        "	stm r1!, {r3, r6}\n"
        "	add r1, r4, #0\n"
        "	add r1, #0x70\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x70\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r2, r3}\n"
        "	stm r1!, {r2, r3}\n"
        "	add r1, r4, #0\n"
        "	add r1, #0x84\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x84\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r2, r6}\n"
        "	stm r1!, {r2, r6}\n"
        "	add r1, r4, #0\n"
        "	add r1, #0x98\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x98\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	add r1, r4, #0\n"
        "	add r1, #0xb0\n"
        "	add r0, r5, #0\n"
        "	add r0, #0xb0\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r3, r6}\n"
        "	stm r1!, {r3, r6}\n"
        "	add r1, r4, #0\n"
        "	add r1, #0xc4\n"
        "	add r0, r5, #0\n"
        "	add r0, #0xc4\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r2, r3}\n"
        "	stm r1!, {r2, r3}\n"
        "	add r1, r4, #0\n"
        "	add r1, #0xd8\n"
        "	add r0, r5, #0\n"
        "	add r0, #0xd8\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	add r1, r4, #0\n"
        "	add r1, #0xf0\n"
        "	add r0, r5, #0\n"
        "	add r0, #0xf0\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r2, r6}\n"
        "	stm r1!, {r2, r6}\n"
        "	mov r0, #0x82\n"
        "	lsl r0, r0, #1\n"
        "	add r1, r4, r0\n"
        "	add r0, r5, r0\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r3, r6}\n"
        "	stm r1!, {r3, r6}\n"
        "	mov r0, #0x8c\n"
        "	lsl r0, r0, #1\n"
        "	add r1, r4, r0\n"
        "	add r0, r5, r0\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r2, r3}\n"
        "	stm r1!, {r2, r3}\n"
        "	mov r0, #0x96\n"
        "	lsl r0, r0, #1\n"
        "	add r1, r4, r0\n"
        "	add r0, r5, r0\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r2, r6}\n"
        "	stm r1!, {r2, r6}\n"
        "	mov r0, #0xa0\n"
        "	lsl r0, r0, #1\n"
        "	add r1, r4, r0\n"
        "	add r0, r5, r0\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r3, r6}\n"
        "	stm r1!, {r3, r6}\n"
        "	mov r1, #0xaa\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r4, r1\n"
        "	add r1, r5, r1\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	mov r0, #0xb6\n"
        "	lsl r0, r0, #1\n"
        "	add r1, r4, r0\n"
        "	add r0, r5, r0\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r2, r3}\n"
        "	stm r1!, {r2, r3}\n"
        "	mov r0, #0xc0\n"
        "	lsl r0, r0, #1\n"
        "	add r1, r4, r0\n"
        "	add r0, r5, r0\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r2, r6}\n"
        "	stm r1!, {r2, r6}\n"
        "	mov r0, #0xca\n"
        "	lsl r0, r0, #1\n"
        "	add r1, r4, r0\n"
        "	add r0, r5, r0\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r3, r6}\n"
        "	stm r1!, {r3, r6}\n"
        "	mov r0, #0xd4\n"
        "	lsl r0, r0, #1\n"
        "	add r1, r4, r0\n"
        "	add r0, r5, r0\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r2, r3}\n"
        "	stm r1!, {r2, r3}\n"
        "	mov r0, #0xde\n"
        "	lsl r0, r0, #1\n"
        "	add r1, r4, r0\n"
        "	add r0, r5, r0\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r2, r6}\n"
        "	stm r1!, {r2, r6}\n"
        "	mov r0, #0xe8\n"
        "	lsl r0, r0, #1\n"
        "	add r1, r4, r0\n"
        "	add r0, r5, r0\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r3, r6}\n"
        "	stm r1!, {r3, r6}\n"
        "	mov r1, #0xf2\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r4, r1\n"
        "	add r1, r5, r1\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	mov r0, #0xfe\n"
        "	lsl r0, r0, #1\n"
        "	add r1, r4, r0\n"
        "	add r0, r5, r0\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r2, r3}\n"
        "	stm r1!, {r2, r3}\n"
        "	mov r1, #0x84\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r4, r1\n"
        "	add r1, r5, r1\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	mov r0, #0x8a\n"
        "	lsl r0, r0, #2\n"
        "	add r1, r4, r0\n"
        "	add r0, r5, r0\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r2, r6}\n"
        "	stm r1!, {r2, r6}\n"
        "	mov r0, #0x8f\n"
        "	lsl r0, r0, #2\n"
        "	add r1, r4, r0\n"
        "	add r0, r5, r0\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r3, r6}\n"
        "	stm r1!, {r3, r6}\n"
        "	mov r0, #0x94\n"
        "	lsl r0, r0, #2\n"
        "	add r1, r4, r0\n"
        "	add r0, r5, r0\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r2, r3}\n"
        "	stm r1!, {r2, r3}\n"
        "	mov r1, #0x99\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r4, r1\n"
        "	add r1, r5, r1\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	mov r0, #0x9f\n"
        "	lsl r0, r0, #2\n"
        "	add r1, r4, r0\n"
        "	add r0, r5, r0\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r2, r6}\n"
        "	stm r1!, {r2, r6}\n"
        "	mov r1, #0xa4\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r4, r1\n"
        "	add r1, r5, r1\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	mov r0, #0xaa\n"
        "	lsl r0, r0, #2\n"
        "	add r1, r4, r0\n"
        "	add r0, r5, r0\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r3, r6}\n"
        "	stm r1!, {r3, r6}\n"
        "	mov r0, #0xaf\n"
        "	lsl r0, r0, #2\n"
        "	add r1, r4, r0\n"
        "	add r0, r5, r0\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r2, r3}\n"
        "	stm r1!, {r2, r3}\n"
        "	mov r0, #0xb4\n"
        "	lsl r0, r0, #2\n"
        "	add r1, r4, r0\n"
        "	add r0, r5, r0\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r2, r6}\n"
        "	stm r1!, {r2, r6}\n"
        "	mov r1, #0xb9\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r4, r1\n"
        "	add r1, r5, r1\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	mov r0, #0xbf\n"
        "	lsl r0, r0, #2\n"
        "	add r1, r4, r0\n"
        "	add r0, r5, r0\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r3, r6}\n"
        "	stm r1!, {r3, r6}\n"
        "	mov r1, #0xc4\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r4, r1\n"
        "	add r1, r5, r1\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	mov r0, #0xca\n"
        "	lsl r0, r0, #2\n"
        "	add r1, r4, r0\n"
        "	add r0, r5, r0\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r2, r3}\n"
        "	stm r1!, {r2, r3}\n"
        "	mov r1, #0xcf\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r4, r1\n"
        "	add r1, r5, r1\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	mov r1, #0xd8\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r4, r1\n"
        "	add r1, r5, r1\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	mov r1, #0xe1\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r4, r1\n"
        "	add r1, r5, r1\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	mov r1, #0xea\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r4, r1\n"
        "	add r1, r5, r1\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	mov r1, #0xf3\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r4, r1\n"
        "	add r1, r5, r1\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	mov r1, #0xfc\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r4, r1\n"
        "	add r1, r5, r1\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	ldr r1, .Lpool_080D64B8\n"
        "	add r0, r4, r1\n"
        "	add r1, r5, r1\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	ldm r1!, {r2, r3, r6}\n"
        "	stm r0!, {r2, r3, r6}\n"
        "	mov r1, #0x87\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r4, r1\n"
        "	add r1, r5, r1\n"
        "	mov r2, #0x38\n"
        "	bl func_080D3994\n"
        "	mov r0, #0x8e\n"
        "	lsl r0, r0, #3\n"
        "	add r1, r4, r0\n"
        "	add r0, r5, r0\n"
        "	ldr r0, [r0]\n"
        "	str r0, [r1]\n"
        "	ldr r0, .Lpool_080D64BC\n"
        "	add r5, r5, r0\n"
        "	ldrb r1, [r5]\n"
        "	add r0, r4, r0\n"
        "	strb r1, [r0]\n"
        "	add r0, r4, #0\n"
        "	b _L_080D64C0\n"
        "	.align 2, 0\n"
        ".Lpool_080D64AC:\n"
        "	.word 0xFFFFE03F\n"
        ".Lpool_080D64B0:\n"
        "	.word 0xFFE01FFF\n"
        ".Lpool_080D64B4:\n"
        "	.word 0xFFFFFE3F\n"
        ".Lpool_080D64B8:\n"
        "	.word 0x00000414\n"
        ".Lpool_080D64BC:\n"
        "	.word 0x00000474\n"
        "_L_080D64C0:\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080D64C8 @ 0x080D64C8 (180B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080D3B28();
extern void func_080D3994();
extern void func_080D66A4();
extern void func_080D657C();
int func_080D64C8(int param_1, int param_2) {
    register int p1 asm("r4");
    register int p2 asm("r5");
    register int r6 asm("r6");
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %1, r1, #0\n\t"
        "bl func_080D3B28\n\t"
        "ldrh r1, [%1, #0x10]\n\t"
        "lsl r1, r1, #0x16\n\t"
        "lsr r1, r1, #0x16\n\t"
        "ldrh r2, [%0, #0x10]\n\t"
        "ldr r0, =0xFFFFFC00\n\t"
        "and r0, r2\n\t"
        "orr r0, r1\n\t"
        "strh r0, [%0, #0x10]\n\t"
        "ldrb r3, [%1, #0x11]\n\t"
        "mov r1, #4\n\t"
        "and r1, r3\n\t"
        "ldrb r2, [%0, #0x11]\n\t"
        "mov r0, #5\n\t"
        "neg r0, r0\n\t"
        "and r0, r2\n\t"
        "orr r0, r1\n\t"
        "mov r1, #8\n\t"
        "and r1, r3\n\t"
        "mov r2, #9\n\t"
        "neg r2, r2\n\t"
        "and r0, r2\n\t"
        "orr r0, r1\n\t"
        "mov r1, #0x10\n\t"
        "and r1, r3\n\t"
        "sub r2, #8\n\t"
        "and r0, r2\n\t"
        "orr r0, r1\n\t"
        "strb r0, [%0, #0x11]\n\t"
        "add r3, %0, #0\n\t"
        "add r3, #0x14\n\t"
        "mov r1, #0xa\n\t"
        "add r2, %1, #0\n\t"
        "add r2, #0x14\n\t"
        "mov %2, #1\n\t"
        "neg %2, %2\n"
        "_loop_D64C8:\n\t"
        "ldmia r2!, {r0}\n\t"
        "stmia r3!, {r0}\n\t"
        "sub r1, #1\n\t"
        "cmp r1, %2\n\t"
        "bne _loop_D64C8\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x40\n\t"
        "add r1, %1, #0\n\t"
        "add r1, #0x40\n\t"
        "mov r2, #0xd0\n\t"
        "lsl r2, r2, #1\n\t"
        "bl func_080D3994\n\t"
        "mov r1, #0xf0\n\t"
        "lsl r1, r1, #1\n\t"
        "add r0, %0, r1\n\t"
        "add r1, %1, r1\n\t"
        "mov r2, #0x87\n\t"
        "lsl r2, r2, #2\n\t"
        "bl func_080D3994\n\t"
        "mov r1, #0xff\n\t"
        "lsl r1, r1, #2\n\t"
        "add r0, %0, r1\n\t"
        "add r1, %1, r1\n\t"
        "bl func_080D66A4\n\t"
        "ldr r1, =0x000005DC\n\t"
        "add r0, %0, r1\n\t"
        "add r1, %1, r1\n\t"
        "bl func_080D657C\n\t"
        "ldr r1, =0x000009C8\n\t"
        "add r0, %0, r1\n\t"
        "add r1, %1, r1\n\t"
        "ldr r2, =0x000010CC\n\t"
        "bl func_080D3994"
        : "=r"(p1), "=r"(p2), "=r"(r6) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
    return p1;
}

/* --- func_080D657C @ 0x080D657C (296B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D657C @ 0x080D657C (296 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(RW), +0x00:u32(RW), +0x00:u8(RW), +0x01:u8(RW), +0x03:u8(RW), +0x04:u16(RW), +0x04:u32(RW), +0x04:u8(RW)
 * Callees: func_080D3994, func_080D3B28
 * CFG Structure:
 *   L_080D662E: if (!=) goto L_080D662E
 *   L_080D6662: call func_080D3994(); if (!=) goto L_080D6662
 * ========================================================================== */
extern void func_080D3994(void);
extern void func_080D3B28(void);
int func_080D657C(void) {
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldrb r1, [r4]\n"
        "	lsl r1, r1, #0x1f\n"
        "	lsr r1, r1, #0x1f\n"
        "	ldrb r2, [r6]\n"
        "	mov r0, #2\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r6]\n"
        "	ldrh r0, [r4]\n"
        "	ldr r1, =0x000007FE\n"
        "	and r1, r0\n"
        "	ldrh r2, [r6]\n"
        "	ldr r0, =0xFFFFF801\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r6]\n"
        "	ldrb r3, [r4, #1]\n"
        "	mov r1, #8\n"
        "	and r1, r3\n"
        "	ldrb r2, [r6, #1]\n"
        "	mov r0, #9\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x10\n"
        "	and r1, r3\n"
        "	mov r2, #0x11\n"
        "	neg r2, r2\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r6, #1]\n"
        "	ldr r2, [r4]\n"
        "	ldr r0, =0x1FFFE000\n"
        "	and r2, r0\n"
        "	ldr r0, [r6]\n"
        "	ldr r1, =0xE0001FFF\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	str r0, [r6]\n"
        "	ldrb r2, [r4, #3]\n"
        "	mov r1, #0x60\n"
        "	and r1, r2\n"
        "	ldrb r3, [r6, #3]\n"
        "	mov r0, #0x61\n"
        "	neg r0, r0\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	lsr r2, r2, #7\n"
        "	lsl r2, r2, #7\n"
        "	mov r1, #0x7f\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	strb r0, [r6, #3]\n"
        "	ldrb r1, [r4, #4]\n"
        "	lsl r1, r1, #0x1c\n"
        "	lsr r1, r1, #0x1c\n"
        "	ldrb r2, [r6, #4]\n"
        "	mov r0, #0x10\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r6, #4]\n"
        "	ldrh r0, [r4, #4]\n"
        "	ldr r1, =0x00003FF0\n"
        "	and r1, r0\n"
        "	ldrh r2, [r6, #4]\n"
        "	ldr r0, =0xFFFFC00F\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r6, #4]\n"
        "	ldr r2, [r4, #4]\n"
        "	ldr r0, =0x00FFC000\n"
        "	and r2, r0\n"
        "	ldr r0, [r6, #4]\n"
        "	ldr r1, =0xFF003FFF\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	str r0, [r6, #4]\n"
        "	add r2, r6, #7\n"
        "	mov r3, #1\n"
        "	add r1, r4, #7\n"
        "	mov r5, #1\n"
        "	neg r5, r5\n"
        "_L_080D662E:\n"
        "	ldrb r0, [r1]\n"
        "	strb r0, [r2]\n"
        "	add r2, #1\n"
        "	add r1, #1\n"
        "	sub r3, #1\n"
        "	cmp r3, r5\n"
        "	bne _L_080D662E\n"
        "	add r0, r6, #0\n"
        "	add r0, #0xc\n"
        "	add r1, r4, #0\n"
        "	add r1, #0xc\n"
        "	bl func_080D3B28\n"
        "	add r0, r6, #0\n"
        "	add r0, #0x1c\n"
        "	add r1, r4, #0\n"
        "	add r1, #0x1c\n"
        "	bl func_080D3B28\n"
        "	add r5, r6, #0\n"
        "	add r5, #0x2c\n"
        "	mov r7, #0xf\n"
        "	add r4, #0x2c\n"
        "	mov r0, #1\n"
        "	neg r0, r0\n"
        "	mov r8, r0\n"
        "_L_080D6662:\n"
        "	add r0, r5, #0\n"
        "	add r1, r4, #0\n"
        "	mov r2, #0x3c\n"
        "	bl func_080D3994\n"
        "	add r5, #0x3c\n"
        "	add r4, #0x3c\n"
        "	sub r7, #1\n"
        "	cmp r7, r8\n"
        "	bne _L_080D6662\n"
        "	add r0, r6, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080D66A4 @ 0x080D66A4 (292B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D66A4 @ 0x080D66A4 (292 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(RW), +0x00:u32(RW), +0x00:u8(RW), +0x01:u8(RW), +0x02:u8(RW), +0x03:u8(RW), +0x04:u8(RW)
 * Callees: func_080D3B28
 * CFG Structure:
 *   L_080D66A4: call func_080D3B28()
 *   L_080D674E: if (!=) goto L_080D674E
 *   L_080D6782: if (!=) goto L_080D6782
 *   L_080D67A4: if (!=) goto L_080D67A4
 * ========================================================================== */
extern void func_080D3B28(void);
int func_080D66A4(void) {
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	add r6, r1, #0\n"
        "	ldrb r1, [r6]\n"
        "	lsl r1, r1, #0x1f\n"
        "	lsr r1, r1, #0x1f\n"
        "	ldrb r2, [r4]\n"
        "	mov r0, #2\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r4]\n"
        "	ldrh r0, [r6]\n"
        "	ldr r1, =0x000007FE\n"
        "	and r1, r0\n"
        "	ldrh r2, [r4]\n"
        "	ldr r0, =0xFFFFF801\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r4]\n"
        "	ldrb r0, [r6, #1]\n"
        "	mov r1, #8\n"
        "	and r1, r0\n"
        "	ldrb r2, [r4, #1]\n"
        "	mov r0, #9\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r4, #1]\n"
        "	ldr r2, [r6]\n"
        "	mov r0, #0xff\n"
        "	lsl r0, r0, #0xc\n"
        "	and r2, r0\n"
        "	ldr r0, [r4]\n"
        "	ldr r1, =0xFFF00FFF\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	str r0, [r4]\n"
        "	ldrb r2, [r6, #2]\n"
        "	mov r1, #0x10\n"
        "	and r1, r2\n"
        "	ldrb r3, [r4, #2]\n"
        "	mov r0, #0x11\n"
        "	neg r0, r0\n"
        "	and r0, r3\n"
        "	orr r0, r1\n"
        "	lsr r2, r2, #5\n"
        "	lsl r2, r2, #5\n"
        "	mov r1, #0x1f\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	strb r0, [r4, #2]\n"
        "	ldrb r2, [r6, #3]\n"
        "	ldrb r0, [r6, #4]\n"
        "	mov r3, #3\n"
        "	and r0, r3\n"
        "	lsr r1, r2, #8\n"
        "	strb r2, [r4, #3]\n"
        "	orr r1, r0\n"
        "	and r1, r3\n"
        "	ldrb r2, [r4, #4]\n"
        "	mov r0, #4\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	add r0, #8\n"
        "	add r1, r6, #0\n"
        "	add r1, #8\n"
        "	bl func_080D3B28\n"
        "	mov r0, #0x18\n"
        "	add r0, r0, r4\n"
        "	mov ip, r0\n"
        "	mov r1, #7\n"
        "	mov r8, r1\n"
        "	add r2, r6, #0\n"
        "	add r2, #0x18\n"
        "	mov r3, #1\n"
        "	neg r3, r3\n"
        "	mov sb, r3\n"
        "_L_080D674E:\n"
        "	mov r1, ip\n"
        "	add r0, r2, #0\n"
        "	ldm r0!, {r3, r5, r7}\n"
        "	stm r1!, {r3, r5, r7}\n"
        "	ldm r0!, {r3, r5, r7}\n"
        "	stm r1!, {r3, r5, r7}\n"
        "	ldm r0!, {r3, r5, r7}\n"
        "	stm r1!, {r3, r5, r7}\n"
        "	ldm r0!, {r3, r5, r7}\n"
        "	stm r1!, {r3, r5, r7}\n"
        "	mov r5, #0x30\n"
        "	add ip, r5\n"
        "	add r2, #0x30\n"
        "	mov r7, #1\n"
        "	neg r7, r7\n"
        "	add r8, r7\n"
        "	cmp r8, sb\n"
        "	bne _L_080D674E\n"
        "	mov r0, #0xcc\n"
        "	lsl r0, r0, #1\n"
        "	add r3, r4, r0\n"
        "	mov r1, #7\n"
        "	mov r8, r1\n"
        "	add r2, r6, r0\n"
        "	add r5, r7, #0\n"
        "	mov sb, r5\n"
        "_L_080D6782:\n"
        "	add r1, r3, #0\n"
        "	add r0, r2, #0\n"
        "	ldm r0!, {r5, r7}\n"
        "	stm r1!, {r5, r7}\n"
        "	add r3, #8\n"
        "	add r2, #8\n"
        "	mov r7, #1\n"
        "	neg r7, r7\n"
        "	add r8, r7\n"
        "	cmp r8, sb\n"
        "	bne _L_080D6782\n"
        "	mov r0, #0xec\n"
        "	lsl r0, r0, #1\n"
        "	add r2, r4, r0\n"
        "	mov r3, #1\n"
        "	add r1, r6, r0\n"
        "	add r5, r7, #0\n"
        "_L_080D67A4:\n"
        "	ldm r1!, {r0}\n"
        "	stm r2!, {r0}\n"
        "	sub r3, #1\n"
        "	cmp r3, r5\n"
        "	bne _L_080D67A4\n"
        "	add r0, r4, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080D67C8 @ 0x080D67C8 (132B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D67C8 @ 0x080D67C8 (132 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u8(RW), +0x1C:u8(RW), +0x1D:u8(RW), +0x20:u32(RW), +0x24:u32(RW), +0x28:u32(RW), +0x2C:u16(RW), +0x2C:u32(RW)
 * Callees: func_080D684C
 * CFG Structure:
 *   L_080D67C8: call func_080D684C(); return
 * ========================================================================== */
extern void func_080D684C(void);
int func_080D67C8(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	add r5, r1, #0\n"
        "	bl func_080D684C\n"
        "	ldrb r0, [r5, #0x1c]\n"
        "	strb r0, [r4, #0x1c]\n"
        "	ldrb r3, [r5, #0x1d]\n"
        "	lsl r1, r3, #0x1f\n"
        "	lsr r1, r1, #0x1f\n"
        "	ldrb r2, [r4, #0x1d]\n"
        "	mov r0, #2\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #2\n"
        "	and r1, r3\n"
        "	mov r2, #3\n"
        "	neg r2, r2\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r4, #0x1d]\n"
        "	ldr r0, [r5, #0x20]\n"
        "	str r0, [r4, #0x20]\n"
        "	ldr r0, [r5, #0x24]\n"
        "	ldr r1, [r5, #0x28]\n"
        "	str r0, [r4, #0x24]\n"
        "	str r1, [r4, #0x28]\n"
        "	ldrh r1, [r5, #0x2c]\n"
        "	lsl r1, r1, #0x16\n"
        "	lsr r1, r1, #0x16\n"
        "	ldrh r2, [r4, #0x2c]\n"
        "	ldr r0, =0xFFFFFC00\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r4, #0x2c]\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x2d\n"
        "	ldrb r0, [r0]\n"
        "	add r3, r4, #0\n"
        "	add r3, #0x2d\n"
        "	mov r1, #0x1c\n"
        "	and r1, r0\n"
        "	ldrb r2, [r3]\n"
        "	mov r0, #0x1d\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r3]\n"
        "	ldr r2, [r5, #0x2c]\n"
        "	mov r0, #0xff\n"
        "	lsl r0, r0, #0xd\n"
        "	and r2, r0\n"
        "	ldr r0, [r4, #0x2c]\n"
        "	ldr r1, =0xFFE01FFF\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	str r0, [r4, #0x2c]\n"
        "	add r0, r4, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
    return __ret;
}

/* --- func_080D684C @ 0x080D684C (116B) [PURE-C | agbcp_O2] --- */
/* func_080D684C @ 0x080D684C mode=THUMB size=0x74 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D684C @ 0x080D684C  mode=THUMB  size=0x74  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_080D684C(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x080d3b28(param_1 + 2,param_2 + 2);
  *(ushort *)(param_1 + 6) =
       (ushort)_DAT_080d68b8 & *(ushort *)(param_1 + 6) | *(ushort *)(param_2 + 6) & 0x3ff;
  bVar1 = *(byte *)((int)param_2 + 0x19);
  *(byte *)((int)param_1 + 0x19) =
       *(byte *)((int)param_1 + 0x19) & 0xe3 | bVar1 & 4 | bVar1 & 8 | bVar1 & 0x10;
  param_1[6] = param_1[6] & _DAT_080d68bc | param_2[6] & 0x1fe000;
  return CONCAT44(in_lr,param_1);
}

/* --- func_080D68C0 @ 0x080D68C0 (448B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D68C0 @ 0x080D68C0 (448 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(RW), +0x00:u8(RW), +0x44:u32(RW), +0x48:u32(RW), +0x4C:u32(RW)
 * Callees: func_080D3994, func_080D3B28, func_080D6A80
 * CFG Structure:
 *   L_080D68C0: call func_080D3B28(); call func_080D3B28()
 *   L_080D68FE: if (!=) goto L_080D68FE
 * ========================================================================== */
extern void func_080D3994(void);
extern void func_080D3B28(void);
extern void func_080D6A80(void);
int func_080D68C0(void) {
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	mov r8, r1\n"
        "	bl func_080D3B28\n"
        "	add r0, r7, #0\n"
        "	add r0, #0x10\n"
        "	mov r1, r8\n"
        "	add r1, #0x10\n"
        "	bl func_080D3B28\n"
        "	add r1, r7, #0\n"
        "	add r1, #0x20\n"
        "	mov r0, r8\n"
        "	add r0, #0x20\n"
        "	ldrb r0, [r0]\n"
        "	strb r0, [r1]\n"
        "	add r1, #4\n"
        "	mov r0, r8\n"
        "	add r0, #0x24\n"
        "	ldm r0!, {r2, r3}\n"
        "	stm r1!, {r2, r3}\n"
        "	add r3, r7, #0\n"
        "	add r3, #0x2c\n"
        "	mov r1, #5\n"
        "	mov r2, r8\n"
        "	add r2, #0x2c\n"
        "	mov r4, #1\n"
        "	neg r4, r4\n"
        "_L_080D68FE:\n"
        "	ldm r2!, {r0}\n"
        "	stm r3!, {r0}\n"
        "	sub r1, #1\n"
        "	cmp r1, r4\n"
        "	bne _L_080D68FE\n"
        "	mov r4, r8\n"
        "	add r4, #0x44\n"
        "	ldrb r3, [r4]\n"
        "	lsl r1, r3, #0x1c\n"
        "	add r5, r7, #0\n"
        "	add r5, #0x44\n"
        "	lsr r1, r1, #0x1c\n"
        "	ldrb r2, [r5]\n"
        "	mov r0, #0x10\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x10\n"
        "	and r1, r3\n"
        "	mov r2, #0x11\n"
        "	neg r2, r2\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x20\n"
        "	and r1, r3\n"
        "	sub r2, #0x10\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #0x40\n"
        "	and r1, r3\n"
        "	sub r2, #0x20\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r5]\n"
        "	ldrh r0, [r4]\n"
        "	mov r1, #0xff\n"
        "	lsl r1, r1, #7\n"
        "	and r1, r0\n"
        "	ldrh r2, [r5]\n"
        "	ldr r4, =0xFFFF807F\n"
        "	add r0, r4, #0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r5]\n"
        "	mov r0, r8\n"
        "	ldr r2, [r0, #0x44]\n"
        "	mov r0, #0xff\n"
        "	lsl r0, r0, #0xf\n"
        "	and r2, r0\n"
        "	ldr r0, [r7, #0x44]\n"
        "	ldr r1, =0xFF807FFF\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	str r0, [r7, #0x44]\n"
        "	mov r0, r8\n"
        "	add r0, #0x46\n"
        "	ldrh r0, [r0]\n"
        "	add r3, r7, #0\n"
        "	add r3, #0x46\n"
        "	mov r1, #0xff\n"
        "	lsl r1, r1, #7\n"
        "	and r1, r0\n"
        "	ldrh r2, [r3]\n"
        "	add r0, r4, #0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r3]\n"
        "	mov r0, r8\n"
        "	add r0, #0x47\n"
        "	ldrb r1, [r0]\n"
        "	lsr r1, r1, #7\n"
        "	mov r2, r8\n"
        "	ldr r3, [r2, #0x48]\n"
        "	ldr r5, =0x1FFFFFFF\n"
        "	add r6, r7, #0\n"
        "	add r6, #0x47\n"
        "	lsl r1, r1, #7\n"
        "	ldrb r2, [r6]\n"
        "	mov r0, #0x7f\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r6]\n"
        "	and r3, r5\n"
        "	ldr r0, [r7, #0x48]\n"
        "	mov r1, #0xe0\n"
        "	lsl r1, r1, #0x18\n"
        "	and r0, r1\n"
        "	orr r0, r3\n"
        "	str r0, [r7, #0x48]\n"
        "	mov r0, r8\n"
        "	add r0, #0x4b\n"
        "	ldrb r1, [r0]\n"
        "	lsr r1, r1, #5\n"
        "	add r3, r7, #0\n"
        "	add r3, #0x4b\n"
        "	lsl r1, r1, #5\n"
        "	ldrb r2, [r3]\n"
        "	mov r5, #0x1f\n"
        "	add r0, r5, #0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r3]\n"
        "	mov r6, r8\n"
        "	add r6, #0x4c\n"
        "	ldrb r1, [r6]\n"
        "	lsl r1, r1, #0x19\n"
        "	add r3, #1\n"
        "	lsr r1, r1, #0x19\n"
        "	ldrb r2, [r3]\n"
        "	mov r0, #0x80\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r3]\n"
        "	ldrh r1, [r6]\n"
        "	mov r0, #0xff\n"
        "	lsl r0, r0, #7\n"
        "	and r0, r1\n"
        "	ldrh r1, [r3]\n"
        "	and r4, r1\n"
        "	orr r4, r0\n"
        "	strh r4, [r3]\n"
        "	mov r3, r8\n"
        "	ldr r2, [r3, #0x4c]\n"
        "	lsr r2, r2, #0xf\n"
        "	mov r0, r8\n"
        "	add r0, #0x50\n"
        "	ldrh r4, [r0]\n"
        "	ldr r6, =0x00001FFF\n"
        "	and r4, r6\n"
        "	lsr r3, r2, #0x11\n"
        "	lsl r2, r2, #0xf\n"
        "	ldr r0, [r7, #0x4c]\n"
        "	ldr r1, =0x00007FFF\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	str r0, [r7, #0x4c]\n"
        "	orr r3, r4\n"
        "	add r2, r7, #0\n"
        "	add r2, #0x50\n"
        "	and r3, r6\n"
        "	ldrh r1, [r2]\n"
        "	ldr r0, =0xFFFFE000\n"
        "	and r0, r1\n"
        "	orr r0, r3\n"
        "	strh r0, [r2]\n"
        "	mov r0, r8\n"
        "	add r0, #0x51\n"
        "	ldrb r0, [r0]\n"
        "	lsr r0, r0, #5\n"
        "	add r2, #1\n"
        "	lsl r0, r0, #5\n"
        "	ldrb r1, [r2]\n"
        "	and r5, r1\n"
        "	orr r5, r0\n"
        "	strb r5, [r2]\n"
        "	add r1, r7, #0\n"
        "	add r1, #0x54\n"
        "	mov r0, r8\n"
        "	add r0, #0x54\n"
        "	ldm r0!, {r2, r3}\n"
        "	stm r1!, {r2, r3}\n"
        "	add r0, r7, #0\n"
        "	add r0, #0x5c\n"
        "	mov r1, r8\n"
        "	add r1, #0x5c\n"
        "	mov r2, #2\n"
        "	bl func_080D3994\n"
        "	add r0, r7, #0\n"
        "	add r0, #0x60\n"
        "	mov r1, r8\n"
        "	add r1, #0x60\n"
        "	bl func_080D6A80\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080D6A80 @ 0x080D6A80 (128B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D6A80 @ 0x080D6A80 (128 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW), +0x24:u32(RW)
 * Callees: func_080D3994
 * CFG Structure:
 *   L_080D6A80: if (==) goto L_080D6AB0
 *   L_080D6AA0: if (==) goto L_080D6AA8
 *   L_080D6AA8: if (!=) goto L_080D6AA0
 *   L_080D6AB0: if (==) goto L_080D6AEA
 *   L_080D6AD4: if (==) goto L_080D6AE2
 *   L_080D6AE2: if (!=) goto L_080D6AD4
 *   L_080D6AEA: return
 * ========================================================================== */
extern void func_080D3994(void);
int func_080D6A80(void) {
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	add r4, r1, #0\n"
        "	mov r0, #0\n"
        "	add r2, r7, #0\n"
        "	stm r2!, {r0}\n"
        "	add r0, r4, #0\n"
        "	ldm r0!, {r5}\n"
        "	lsl r1, r5, #2\n"
        "	add r1, r1, r0\n"
        "	add r3, r0, #0\n"
        "	cmp r3, r1\n"
        "	beq _L_080D6AB0\n"
        "_L_080D6AA0:\n"
        "	cmp r2, #0\n"
        "	beq _L_080D6AA8\n"
        "	ldr r0, [r3]\n"
        "	str r0, [r2]\n"
        "_L_080D6AA8:\n"
        "	add r3, #4\n"
        "	add r2, #4\n"
        "	cmp r3, r1\n"
        "	bne _L_080D6AA0\n"
        "_L_080D6AB0:\n"
        "	str r5, [r7]\n"
        "	mov r0, #0x24\n"
        "	add r0, r0, r7\n"
        "	mov sb, r0\n"
        "	mov r0, #0\n"
        "	str r0, [r7, #0x24]\n"
        "	ldr r1, [r4, #0x24]\n"
        "	mov r8, r1\n"
        "	add r1, r4, #0\n"
        "	add r1, #0x28\n"
        "	mov r2, r8\n"
        "	lsl r0, r2, #1\n"
        "	add r6, r0, r1\n"
        "	add r4, r1, #0\n"
        "	add r5, r7, #0\n"
        "	add r5, #0x28\n"
        "	cmp r4, r6\n"
        "	beq _L_080D6AEA\n"
        "_L_080D6AD4:\n"
        "	cmp r5, #0\n"
        "	beq _L_080D6AE2\n"
        "	add r0, r5, #0\n"
        "	add r1, r4, #0\n"
        "	mov r2, #2\n"
        "	bl func_080D3994\n"
        "_L_080D6AE2:\n"
        "	add r4, #2\n"
        "	add r5, #2\n"
        "	cmp r4, r6\n"
        "	bne _L_080D6AD4\n"
        "_L_080D6AEA:\n"
        "	mov r0, r8\n"
        "	mov r1, sb\n"
        "	str r0, [r1]\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080D6B00 @ 0x080D6B00 (64B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_08000608();
void func_080D6B00(int param_1, int param_2) {
    register int p1 asm("r3") = param_1;
    __asm__ volatile(
        "ldr r0, [%0, #0x24]\n\t"
        "lsl r0, r0, #1\n\t"
        "add r0, r0, %0\n\t"
        "add r0, #0x28\n\t"
        "add r2, %0, #0\n\t"
        "add r2, #0x28\n\t"
        "cmp r2, r0\n\t"
        "beq _after_loop1_D6B00\n"
        "_loop1_D6B00:\n\t"
        "add r2, #2\n\t"
        "cmp r2, r0\n\t"
        "bne _loop1_D6B00\n"
        "_after_loop1_D6B00:\n\t"
        "ldr r0, [%0]\n\t"
        "lsl r0, r0, #2\n\t"
        "add r0, #4\n\t"
        "add r2, %0, r0\n\t"
        "add r0, %0, #4\n\t"
        "cmp r0, r2\n\t"
        "beq _after_loop2_D6B00\n"
        "_loop2_D6B00:\n\t"
        "add r0, #4\n\t"
        "cmp r0, r2\n\t"
        "bne _loop2_D6B00\n"
        "_after_loop2_D6B00:"
        : : "r"(p1) : "r0", "r2", "memory"
    );
    if (param_2 & 1) {
        func_08000608(p1);
    }
}

/* --- func_080D6B40 @ 0x080D6B40 (200B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D6B40 @ 0x080D6B40 (200 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x04:u8(RW), +0x08:u32(RW)
 * CFG Structure:
 *   L_080D6B40: if (==) goto L_080D6B9A
 *   L_080D6B86: if (==) goto L_080D6B92
 *   L_080D6B92: if (!=) goto L_080D6B86
 *   L_080D6B9A: if (==) goto L_080D6BDA
 *   L_080D6BC6: if (==) goto L_080D6BD2
 *   L_080D6BD2: if (!=) goto L_080D6BC6
 *   L_080D6BDA: return
 * ========================================================================== */
int func_080D6B40(void) {
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	add r6, r1, #0\n"
        "	ldr r0, [r6]\n"
        "	str r0, [r5]\n"
        "	ldrb r3, [r6, #4]\n"
        "	lsl r1, r3, #0x1f\n"
        "	lsr r1, r1, #0x1f\n"
        "	ldrb r2, [r5, #4]\n"
        "	mov r0, #2\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	mov r1, #2\n"
        "	and r1, r3\n"
        "	mov r2, #3\n"
        "	neg r2, r2\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strb r0, [r5, #4]\n"
        "	mov r0, #8\n"
        "	add r0, r0, r5\n"
        "	mov ip, r0\n"
        "	mov r0, #0\n"
        "	str r0, [r5, #8]\n"
        "	ldr r7, [r6, #8]\n"
        "	add r1, r6, #0\n"
        "	add r1, #0xc\n"
        "	lsl r0, r7, #3\n"
        "	add r4, r0, r1\n"
        "	add r2, r1, #0\n"
        "	add r3, r5, #0\n"
        "	add r3, #0xc\n"
        "	cmp r2, r4\n"
        "	beq _L_080D6B9A\n"
        "_L_080D6B86:\n"
        "	cmp r3, #0\n"
        "	beq _L_080D6B92\n"
        "	ldr r0, [r2]\n"
        "	ldr r1, [r2, #4]\n"
        "	str r0, [r3]\n"
        "	str r1, [r3, #4]\n"
        "_L_080D6B92:\n"
        "	add r2, #8\n"
        "	add r3, #8\n"
        "	cmp r2, r4\n"
        "	bne _L_080D6B86\n"
        "_L_080D6B9A:\n"
        "	mov r2, ip\n"
        "	str r7, [r2]\n"
        "	mov r0, #0xfc\n"
        "	add r0, r0, r5\n"
        "	mov ip, r0\n"
        "	add r1, r6, #0\n"
        "	add r1, #0xfc\n"
        "	mov r0, #0\n"
        "	mov r2, ip\n"
        "	str r0, [r2]\n"
        "	ldr r7, [r1]\n"
        "	mov r0, #0x80\n"
        "	lsl r0, r0, #1\n"
        "	add r1, r6, r0\n"
        "	lsl r0, r7, #3\n"
        "	add r4, r0, r1\n"
        "	add r2, r1, #0\n"
        "	mov r0, #0x80\n"
        "	lsl r0, r0, #1\n"
        "	add r3, r5, r0\n"
        "	cmp r2, r4\n"
        "	beq _L_080D6BDA\n"
        "_L_080D6BC6:\n"
        "	cmp r3, #0\n"
        "	beq _L_080D6BD2\n"
        "	ldr r0, [r2]\n"
        "	ldr r1, [r2, #4]\n"
        "	str r0, [r3]\n"
        "	str r1, [r3, #4]\n"
        "_L_080D6BD2:\n"
        "	add r2, #8\n"
        "	add r3, #8\n"
        "	cmp r2, r4\n"
        "	bne _L_080D6BC6\n"
        "_L_080D6BDA:\n"
        "	mov r2, ip\n"
        "	str r7, [r2]\n"
        "	mov r0, #0x90\n"
        "	lsl r0, r0, #1\n"
        "	add r2, r5, r0\n"
        "	add r0, r6, r0\n"
        "	ldr r1, [r0, #4]\n"
        "	ldr r0, [r0]\n"
        "	str r0, [r2]\n"
        "	str r1, [r2, #4]\n"
        "	mov r0, #0x94\n"
        "	lsl r0, r0, #1\n"
        "	add r2, r5, r0\n"
        "	add r0, r6, r0\n"
        "	ldr r1, [r0, #4]\n"
        "	ldr r0, [r0]\n"
        "	str r0, [r2]\n"
        "	str r1, [r2, #4]\n"
        "	add r0, r5, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080D6C08 @ 0x080D6C08 (80B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D6C08 @ 0x080D6C08 (80 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x08:u32(R)
 * Callees: func_08000608
 * CFG Structure:
 *   L_080D6C08: if (==) goto L_080D6C2A
 *   L_080D6C24: if (!=) goto L_080D6C24
 *   L_080D6C2A: if (==) goto L_080D6C44
 *   L_080D6C3E: if (!=) goto L_080D6C3E
 *   L_080D6C44: if (==) goto L_080D6C52
 *   L_080D6C52: return
 * ========================================================================== */
extern void func_08000608(void);
void func_080D6C08(void) {

    __asm__ volatile(
        "	add r2, r0, #0\n"
        "	add r3, r1, #0\n"
        "	add r1, r2, #0\n"
        "	add r1, #0xfc\n"
        "	ldr r0, [r1]\n"
        "	lsl r0, r0, #3\n"
        "	add r0, #4\n"
        "	add r1, r1, r0\n"
        "	mov r4, #0x80\n"
        "	lsl r4, r4, #1\n"
        "	add r0, r2, r4\n"
        "	cmp r0, r1\n"
        "	beq _L_080D6C2A\n"
        "_L_080D6C24:\n"
        "	add r0, #8\n"
        "	cmp r0, r1\n"
        "	bne _L_080D6C24\n"
        "_L_080D6C2A:\n"
        "	add r1, r2, #0\n"
        "	add r1, #8\n"
        "	ldr r0, [r2, #8]\n"
        "	lsl r0, r0, #3\n"
        "	add r0, #4\n"
        "	add r1, r1, r0\n"
        "	add r0, r2, #0\n"
        "	add r0, #0xc\n"
        "	cmp r0, r1\n"
        "	beq _L_080D6C44\n"
        "_L_080D6C3E:\n"
        "	add r0, #8\n"
        "	cmp r0, r1\n"
        "	bne _L_080D6C3E\n"
        "_L_080D6C44:\n"
        "	mov r0, #1\n"
        "	and r0, r3\n"
        "	cmp r0, #0\n"
        "	beq _L_080D6C52\n"
        "	add r0, r2, #0\n"
        "	bl func_08000608\n"
        "_L_080D6C52:\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "lr", "memory"
    );
}

/* --- func_080D6C58 @ 0x080D6C58 (308B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D6C58 @ 0x080D6C58 (308 bytes)
 * Role   : C++ Factory / Constructor with operator new (func_080005D4) [vtable: 0x080E5BF8]
 * Fields : +0x00:u16(RW), +0x00:u32(RW), +0x00:u8(RW), +0x04:u32(W), +0x08:u32(R)
 * Callees: func_080005D4, func_08010358, func_0803F804, func_080D3914, func_080D40CC, func_080D4130
 * CFG Structure:
 *   L_080D6C58: call func_080005D4(); call func_080005D4(); call func_08010358(); call func_0803F804()
 *   L_080D6D0A: call func_080D4130(); if (!=) goto L_080D6D0A
 *   L_080D6D22: call func_080D40CC(); if (!=) goto L_080D6D22
 *   L_080D6D5E: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08010358(void);
extern void func_0803F804(void);
extern void func_080D3914(void);
extern void func_080D40CC(void);
extern void func_080D4130(void);
int func_080D6C58(void) {
    u32 sp0, sp1, sp2, sp3, sp4;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4));
    __asm__ volatile(
        "	mov sb, r0\n"
        "	add r5, r1, #0\n"
        "	str r0, [sp, #0x10]\n"
        "	add r1, sp, #4\n"
        "	mov sl, r1\n"
        "	ldr r0, =0x00000554\n"
        "	bl func_080005D4\n"
        "	add r6, r5, #4\n"
        "	mov r1, #0x14\n"
        "	add r1, r1, r5\n"
        "	mov r8, r1\n"
        "	add r4, r5, #0\n"
        "	add r4, #0x28\n"
        "	add r7, r0, #0\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x24\n"
        "	ldrb r5, [r0]\n"
        "	ldr r0, =0x080E5BF8\n"
        "	str r0, [r7]\n"
        "	ldr r0, =0x000034F4\n"
        "	bl func_080005D4\n"
        "	str r4, [sp]\n"
        "	add r1, r6, #0\n"
        "	mov r2, r8\n"
        "	add r3, r5, #0\n"
        "	bl func_08010358\n"
        "	add r1, r0, #0\n"
        "	str r1, [r7, #4]\n"
        "	add r0, r7, #0\n"
        "	add r0, #8\n"
        "	bl func_0803F804\n"
        "	mov r0, #0xd9\n"
        "	lsl r0, r0, #2\n"
        "	add r1, r7, r0\n"
        "	mov r3, #0\n"
        "	mov r0, #1\n"
        "	strb r0, [r1]\n"
        "	mov r0, #0xda\n"
        "	lsl r0, r0, #2\n"
        "	add r1, r7, r0\n"
        "	mov r0, #0xab\n"
        "	str r0, [r1]\n"
        "	mov r0, #0xdb\n"
        "	lsl r0, r0, #2\n"
        "	add r1, r7, r0\n"
        "	strb r3, [r1]\n"
        "	mov r0, #0x1d\n"
        "	str r0, [r1, #4]\n"
        "	mov r1, #0xdd\n"
        "	lsl r1, r1, #2\n"
        "	add r2, r7, r1\n"
        "	ldrb r1, [r2]\n"
        "	sub r0, #0x3d\n"
        "	and r0, r1\n"
        "	mov r1, #6\n"
        "	orr r0, r1\n"
        "	strb r0, [r2]\n"
        "	ldrh r1, [r2]\n"
        "	ldr r0, =0xFFFFF81F\n"
        "	and r0, r1\n"
        "	strh r0, [r2]\n"
        "	mov r1, #0xde\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r7, r1\n"
        "	str r3, [r0]\n"
        "	add r1, #0x14\n"
        "	add r0, r7, r1\n"
        "	str r3, [r0]\n"
        "	mov r1, #0x9a\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r7, r1\n"
        "	str r3, [r0]\n"
        "	ldr r0, =0x000004DC\n"
        "	add r4, r7, r0\n"
        "	mov r5, #5\n"
        "	add r1, sp, #8\n"
        "	mov r8, r1\n"
        "	mov r6, #1\n"
        "	neg r6, r6\n"
        "_L_080D6D0A:\n"
        "	add r0, r4, #0\n"
        "	bl func_080D4130\n"
        "	add r4, #0xc\n"
        "	sub r5, #1\n"
        "	cmp r5, r6\n"
        "	bne _L_080D6D0A\n"
        "	ldr r0, =0x00000524\n"
        "	add r4, r7, r0\n"
        "	mov r5, #3\n"
        "	mov r6, #1\n"
        "	neg r6, r6\n"
        "_L_080D6D22:\n"
        "	add r0, r4, #0\n"
        "	bl func_080D40CC\n"
        "	add r4, #0xc\n"
        "	sub r5, #1\n"
        "	cmp r5, r6\n"
        "	bne _L_080D6D22\n"
        "	ldr r0, =0x0300040C\n"
        "	str r7, [r0]\n"
        "	mov r1, sl\n"
        "	str r7, [r1]\n"
        "	ldr r2, [sp, #4]\n"
        "	add r0, sp, #4\n"
        "	str r0, [sp, #8]\n"
        "	mov r1, r8\n"
        "	str r2, [r1, #4]\n"
        "	ldr r1, [sp, #8]\n"
        "	mov r0, #0\n"
        "	str r0, [r1]\n"
        "	ldr r0, [sp, #0x10]\n"
        "	str r2, [r0]\n"
        "	ldr r1, [sp, #4]\n"
        "	cmp r1, #0\n"
        "	beq _L_080D6D5E\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080D6D5E:\n"
        "	mov r0, sb\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r10", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080D6D8C @ 0x080D6D8C (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
void func_080D6D8C(void) {
  func_0800080C();
}

/* --- func_080D6D98 @ 0x080D6D98 (32B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

u32 *func_080D6D98(u32 *param_1, int param_2, u32 param_3) {
    u32 *base = param_1;
    int off = (param_2 << 2) - 4;
    u32 *p;
    __asm__("" : "+r"(off));
    p = (u32 *)((int)base + off);
    *p = param_3;
    while (p != base) {
        u32 prev = (u32)p;
        p--;
        *p = prev;
    }
    return p;
}

/* --- func_080D6DB8 @ 0x080D6DB8 (224B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D6DB8 @ 0x080D6DB8 (224 bytes)
 * Role   : C++ SGI STL Node Allocator / _Rb_tree / Container Template Method
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x0C:u32(RW)
 * Callees: func_08007128, func_08007184, func_080073E0, func_0800745C, func_080D01F8, func_080D0260, func_080D3BC0
 * CFG Structure:
 *   L_080D6DB8: if (>= (u)) goto L_080D6E88
 *   L_080D6DFE: if (==) goto L_080D6E28
 *   L_080D6E0C: if (==) goto L_080D6E20
 *   L_080D6E20: if (!=) goto L_080D6E0C
 *   L_080D6E28: if (==) goto L_080D6E48
 *   L_080D6E32: call func_080073E0(); call func_08007184(); if (!=) goto L_080D6E32
 *   L_080D6E48: if (==) goto L_080D6E7A
 *   L_080D6E54: if (==) goto L_080D6E6E
 * ========================================================================== */
extern void func_08007128(void);
extern void func_08007184(void);
extern void func_080073E0(void);
extern void func_0800745C(void);
extern void func_080D01F8(void);
extern void func_080D0260(void);
extern void func_080D3BC0(void);
void func_080D6DB8(void) {
    int r7_var;
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	ldr r0, [r7, #0xc]\n"
        "	ldr r2, [r7]\n"
        "	sub r0, r0, r2\n"
        "	asr r0, r0, #3\n"
        "	cmp r0, r1\n"
        "	bhs _L_080D6E88\n"
        "	ldr r3, [r7, #4]\n"
        "	sub r0, r3, r2\n"
        "	asr r0, r0, #3\n"
        "	mov sl, r0\n"
        "	cmp r2, #0\n"
        "	beq _L_080D6E54\n"
        "	add r5, r2, #0\n"
        "	add r6, r3, #0\n"
        "	cmp r1, #0\n"
        "	beq _L_080D6DFA\n"
        "	lsl r4, r1, #3\n"
        "	add r0, r4, #0\n"
        "	bl func_080D01F8\n"
        "	mov r8, r4\n"
        "	cmp r0, #0\n"
        "	bne _L_080D6DFE\n"
        "	mov r0, r8\n"
        "	bl func_080D3BC0\n"
        "	b _L_080D6DFE\n"
        "_L_080D6DFA:\n"
        "	mov r0, #0\n"
        "	mov r8, r0\n"
        "_L_080D6DFE:\n"
        "	mov sb, r0\n"
        "	mov r4, sb\n"
        "	mov r0, sl\n"
        "	lsl r0, r0, #3\n"
        "	mov sl, r0\n"
        "	cmp r5, r6\n"
        "	beq _L_080D6E28\n"
        "_L_080D6E0C:\n"
        "	cmp r4, #0\n"
        "	beq _L_080D6E20\n"
        "	add r0, r4, #0\n"
        "	bl func_08007128\n"
        "	ldr r1, [r5, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_0800745C\n"
        "	str r0, [r4, #4]\n"
        "_L_080D6E20:\n"
        "	add r5, #8\n"
        "	add r4, #8\n"
        "	cmp r5, r6\n"
        "	bne _L_080D6E0C\n"
        "_L_080D6E28:\n"
        "	mov r6, sb\n"
        "	ldr r5, [r7, #4]\n"
        "	ldr r4, [r7]\n"
        "	cmp r4, r5\n"
        "	beq _L_080D6E48\n"
        "_L_080D6E32:\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	add r4, #8\n"
        "	cmp r4, r5\n"
        "	bne _L_080D6E32\n"
        "_L_080D6E48:\n"
        "	ldr r0, [r7]\n"
        "	cmp r0, #0\n"
        "	beq _L_080D6E7A\n"
        "	bl func_080D0260\n"
        "	b _L_080D6E7A\n"
        "_L_080D6E54:\n"
        "	cmp r1, #0\n"
        "	beq _L_080D6E6E\n"
        "	lsl r4, r1, #3\n"
        "	add r0, r4, #0\n"
        "	bl func_080D01F8\n"
        "	mov r8, r4\n"
        "	cmp r0, #0\n"
        "	bne _L_080D6E72\n"
        "	mov r0, r8\n"
        "	bl func_080D3BC0\n"
        "	b _L_080D6E72\n"
        "_L_080D6E6E:\n"
        "	mov r0, #0\n"
        "	mov r8, r0\n"
        "_L_080D6E72:\n"
        "	add r6, r0, #0\n"
        "	mov r1, sl\n"
        "	lsl r1, r1, #3\n"
        "	mov sl, r1\n"
        "_L_080D6E7A:\n"
        "	mov r2, sl\n"
        "	add r0, r2, r6\n"
        "	mov r2, r8\n"
        "	add r1, r2, r6\n"
        "	str r6, [r7]\n"
        "	str r0, [r7, #4]\n"
        "	str r1, [r7, #0xc]\n"
        "_L_080D6E88:\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r10", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_080D6E98 @ 0x080D6E98 (20B) [PURE-C | agbcc_O2] --- */
#define NULL 0

struct S { u8 a, b; u32 c, d; }; void func_080D6E98(struct S *p) { p->c = -1; p->d = -1; p->a = 1; p->b = 0; }

/* --- func_080D6EAC @ 0x080D6EAC (32B) [PURE-C | agbcc_O2] --- */
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
extern u32 func_080D6E98();
void func_080D6EAC(u8 *arg0) {
  func_080D6E98(arg0 + 4);
  func_080D6E98(arg0 + 0x10);
  { u8 zero = 0; *arg0 = 1; arg0[1] = zero; }
}

/* --- func_080D6ECC @ 0x080D6ECC (32B) [PURE-C | agbcc_O2] --- */
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
extern u32 func_080D6EAC();
void func_080D6ECC(u8 *arg0) {
  func_080D6EAC(arg0 + 4);
  func_080D6EAC(arg0 + 0x20);
  { u8 zero = 0; *arg0 = 1; arg0[1] = zero; }
}

/* --- func_080D6EEC @ 0x080D6EEC (32B) [PURE-C | agbcc_O2] --- */
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
extern u32 func_080D6ECC();
void func_080D6EEC(u8 *arg0) {
  func_080D6ECC(arg0 + 4);
  func_080D6ECC(arg0 + 0x40);
  { u8 zero = 0; *arg0 = 1; arg0[1] = zero; }
}

/* --- func_080D6F0C @ 0x080D6F0C (16B) [PURE-C | agbcc_O2] --- */
#define NULL 0

struct S { u8 a, b; u32 c, d; }; void func_080D6F0C(struct S *p) { p->d = 0; p->c = 0; p->a = 0; p->b = 1; }

/* --- func_080D6F1C @ 0x080D6F1C (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D6F0C();
void func_080D6F1C(u8 *arg0) {
  func_080D6F0C(arg0 + 0x10);
  func_080D6F0C(arg0 + 4);
  *arg0 = 0;
  arg0[1] = 1;
}

/* --- func_080D6F3C @ 0x080D6F3C (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D6F1C();
void func_080D6F3C(u8 *arg0) {
  func_080D6F1C(arg0 + 0x20);
  func_080D6F1C(arg0 + 4);
  *arg0 = 0;
  arg0[1] = 1;
}

/* --- func_080D6F5C @ 0x080D6F5C (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D6F3C();
void func_080D6F5C(u8 *arg0) {
  func_080D6F3C(arg0 + 0x40);
  func_080D6F3C(arg0 + 4);
  *arg0 = 0;
  arg0[1] = 1;
}

/* --- func_080D6F7C @ 0x080D6F7C (152B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D6F7C @ 0x080D6F7C (152 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x00:u8(W), +0x01:u8(W), +0x04:u32(RW), +0x08:u32(RW)
 * Callees: func_080D6E98
 * CFG Structure:
 *   L_080D6F7C: if (> (u)) goto L_080D700C
 *   L_080D6F9C: if (> (u)) goto L_080D6FC0
 *   L_080D6FC0: if (<= (u)) goto L_080D6FE2
 *   L_080D6FE2: if (!=) goto L_080D6FF0
 *   L_080D6FF0: if (==) goto L_080D7006
 *   L_080D7000: if (==) goto L_080D7006
 *   L_080D700C: return
 * ========================================================================== */
extern void func_080D6E98(void);
void func_080D6F7C(void) {
    u32 sp0, sp1;
    __asm__ volatile("" : : "m"(sp0), "m"(sp1));
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	add r3, r1, #0\n"
        "	str r2, [sp]\n"
        "	cmp r3, #0x3f\n"
        "	bhi _L_080D700C\n"
        "	cmp r2, #0\n"
        "	beq _L_080D700C\n"
        "	cmp r3, #0\n"
        "	bne _L_080D6F9C\n"
        "	cmp r2, #0x3f\n"
        "	bls _L_080D6F9C\n"
        "	bl func_080D6E98\n"
        "	b _L_080D700C\n"
        "_L_080D6F9C:\n"
        "	cmp r3, #0x1f\n"
        "	bhi _L_080D6FC0\n"
        "	mov r0, #0x20\n"
        "	sub r0, r0, r3\n"
        "	str r0, [sp, #4]\n"
        "	add r1, sp, #4\n"
        "	mov r5, sp\n"
        "	cmp r2, r0\n"
        "	bls _L_080D6FB0\n"
        "	add r5, r1, #0\n"
        "_L_080D6FB0:\n"
        "	ldr r0, [r5]\n"
        "	mov r1, #1\n"
        "	lsl r1, r0\n"
        "	sub r1, #1\n"
        "	lsl r1, r3\n"
        "	ldr r0, [r4, #4]\n"
        "	orr r0, r1\n"
        "	str r0, [r4, #4]\n"
        "_L_080D6FC0:\n"
        "	add r0, r3, r2\n"
        "	cmp r0, #0x20\n"
        "	bls _L_080D6FE2\n"
        "	mov r2, #0\n"
        "	cmp r3, #0x1f\n"
        "	bls _L_080D6FD0\n"
        "	add r2, r3, #0\n"
        "	sub r2, #0x20\n"
        "_L_080D6FD0:\n"
        "	sub r0, #0x20\n"
        "	sub r0, r0, r2\n"
        "	mov r1, #1\n"
        "	lsl r1, r0\n"
        "	sub r1, #1\n"
        "	lsl r1, r2\n"
        "	ldr r0, [r4, #8]\n"
        "	orr r0, r1\n"
        "	str r0, [r4, #8]\n"
        "_L_080D6FE2:\n"
        "	mov r2, #0\n"
        "	mov r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	add r0, #1\n"
        "	cmp r0, #0\n"
        "	bne _L_080D6FF0\n"
        "	mov r1, #1\n"
        "_L_080D6FF0:\n"
        "	cmp r1, #0\n"
        "	beq _L_080D7006\n"
        "	mov r1, #0\n"
        "	ldr r0, [r4, #8]\n"
        "	add r0, #1\n"
        "	cmp r0, #0\n"
        "	bne _L_080D7000\n"
        "	mov r1, #1\n"
        "_L_080D7000:\n"
        "	cmp r1, #0\n"
        "	beq _L_080D7006\n"
        "	mov r2, #1\n"
        "_L_080D7006:\n"
        "	mov r0, #0\n"
        "	strb r2, [r4]\n"
        "	strb r0, [r4, #1]\n"
        "_L_080D700C:\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
}

/* --- func_080D7014 @ 0x080D7014 (128B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080D6EAC();
extern void func_080D6F7C();
void func_080D7014(int param_1, u32 param_2, u32 param_3) {
    u32 sp0, sp1;
    register int p1 asm("r5");
    register u32 p2 asm("r4");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1));
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %1, r1, #0\n\t"
        "str r2, [sp]\n\t"
        "cmp %1, #0x7f\n\t"
        "bhi _end_D7014\n\t"
        "add r0, r2, #0\n\t"
        "cmp r0, #0\n\t"
        "beq _end_D7014\n\t"
        "cmp %1, #0\n\t"
        "bne _chk3f_D7014\n\t"
        "cmp r0, #0x7f\n\t"
        "bls _chk3f_D7014\n\t"
        "add r0, %0, #0\n\t"
        "bl func_080D6EAC\n\t"
        "b _end_D7014\n"
        "_chk3f_D7014:\n\t"
        "cmp %1, #0x3f\n\t"
        "bhi _part2_D7014\n\t"
        "mov r0, #0x40\n\t"
        "sub r0, r0, %1\n\t"
        "str r0, [sp, #4]\n\t"
        "add r3, sp, #4\n\t"
        "ldr r1, [sp]\n\t"
        "mov r2, sp\n\t"
        "cmp r1, r0\n\t"
        "bls _load_min_D7014\n\t"
        "add r2, r3, #0\n"
        "_load_min_D7014:\n\t"
        "ldr r2, [r2]\n\t"
        "add r0, %0, #4\n\t"
        "add r1, %1, #0\n\t"
        "bl func_080D6F7C\n"
        "_part2_D7014:\n\t"
        "ldr r0, [sp]\n\t"
        "add r0, %1, r0\n\t"
        "cmp r0, #0x40\n\t"
        "bls _finish_D7014\n\t"
        "mov r1, #0\n\t"
        "cmp %1, #0x3f\n\t"
        "bls _sub40_D7014\n\t"
        "add r1, %1, #0\n\t"
        "sub r1, #0x40\n"
        "_sub40_D7014:\n\t"
        "add r2, r0, #0\n\t"
        "sub r2, #0x40\n\t"
        "sub r2, r2, r1\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x10\n\t"
        "bl func_080D6F7C\n"
        "_finish_D7014:\n\t"
        "mov r1, #0\n\t"
        "ldrb r0, [%0, #4]\n\t"
        "cmp r0, #0\n\t"
        "beq _store_D7014\n\t"
        "ldrb r0, [%0, #0x10]\n\t"
        "neg r0, r0\n\t"
        "lsr r1, r0, #0x1f\n"
        "_store_D7014:\n\t"
        "mov r0, #0\n\t"
        "strb r1, [%0]\n\t"
        "strb r0, [%0, #1]\n"
        "_end_D7014:"
        : "=r"(p1), "=r"(p2) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_080D7094 @ 0x080D7094 (132B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080D6ECC();
extern void func_080D7014();
void func_080D7094(int param_1, u32 param_2, u32 param_3) {
    u32 sp0, sp1;
    register int p1 asm("r5");
    register u32 p2 asm("r4");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1));
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %1, r1, #0\n\t"
        "str r2, [sp]\n\t"
        "cmp %1, #0xff\n\t"
        "bhi _end_D7094\n\t"
        "add r0, r2, #0\n\t"
        "cmp r0, #0\n\t"
        "beq _end_D7094\n\t"
        "cmp %1, #0\n\t"
        "bne _chk7f_D7094\n\t"
        "cmp r0, #0xff\n\t"
        "bls _chk7f_D7094\n\t"
        "add r0, %0, #0\n\t"
        "bl func_080D6ECC\n\t"
        "b _end_D7094\n"
        "_chk7f_D7094:\n\t"
        "cmp %1, #0x7f\n\t"
        "bhi _chk80_D7094\n\t"
        "mov r0, #0x80\n\t"
        "sub r0, r0, %1\n\t"
        "str r0, [sp, #4]\n\t"
        "add r3, sp, #4\n\t"
        "ldr r1, [sp]\n\t"
        "mov r2, sp\n\t"
        "cmp r1, r0\n\t"
        "bls _load_r2_D7094\n\t"
        "add r2, r3, #0\n"
        "_load_r2_D7094:\n\t"
        "ldr r2, [r2]\n\t"
        "add r0, %0, #4\n\t"
        "add r1, %1, #0\n\t"
        "bl func_080D7014\n"
        "_chk80_D7094:\n\t"
        "ldr r0, [sp]\n\t"
        "add r0, %1, r0\n\t"
        "cmp r0, #0x80\n\t"
        "bls _update_flags_D7094\n\t"
        "mov r1, #0\n\t"
        "cmp %1, #0x7f\n\t"
        "bls _sub_D7094\n\t"
        "add r1, %1, #0\n\t"
        "sub r1, #0x80\n"
        "_sub_D7094:\n\t"
        "add r2, r0, #0\n\t"
        "sub r2, #0x80\n\t"
        "sub r2, r2, r1\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x20\n\t"
        "bl func_080D7014\n"
        "_update_flags_D7094:\n\t"
        "mov r1, #0\n\t"
        "ldrb r0, [%0, #4]\n\t"
        "cmp r0, #0\n\t"
        "beq _store_flags_D7094\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x20\n\t"
        "ldrb r0, [r0]\n\t"
        "neg r0, r0\n\t"
        "lsr r1, r0, #0x1f\n"
        "_store_flags_D7094:\n\t"
        "mov r0, #0\n\t"
        "strb r1, [%0]\n\t"
        "strb r0, [%0, #1]\n"
        "_end_D7094:"
        : "=r"(p1), "=r"(p2) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_080D7118 @ 0x080D7118 (148B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080D6EEC();
extern void func_080D7094();
void func_080D7118(int param_1, u32 param_2, u32 param_3) {
    u32 sp0, sp1;
    register int p1 asm("r5");
    register u32 p2 asm("r4");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1));
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %1, r1, #0\n\t"
        "str r2, [sp]\n\t"
        "ldr r1, =0x000001FF\n\t"
        "cmp %1, r1\n\t"
        "bhi _end_D7118\n\t"
        "add r0, r2, #0\n\t"
        "cmp r0, #0\n\t"
        "beq _end_D7118\n\t"
        "cmp %1, #0\n\t"
        "bne _chkff_D7118\n\t"
        "cmp r0, r1\n\t"
        "bls _chkff_D7118\n\t"
        "add r0, %0, #0\n\t"
        "bl func_080D6EEC\n\t"
        "b _end_D7118\n\t"
        ".align 2, 0\n\t"
        ".ltorg\n"
        "_chkff_D7118:\n\t"
        "cmp %1, #0xff\n\t"
        "bhi _part2_D7118\n\t"
        "mov r0, #0x80\n\t"
        "lsl r0, r0, #1\n\t"
        "sub r0, r0, %1\n\t"
        "str r0, [sp, #4]\n\t"
        "add r3, sp, #4\n\t"
        "ldr r1, [sp]\n\t"
        "mov r2, sp\n\t"
        "cmp r1, r0\n\t"
        "bls _load_min_D7118\n\t"
        "add r2, r3, #0\n"
        "_load_min_D7118:\n\t"
        "ldr r2, [r2]\n\t"
        "add r0, %0, #4\n\t"
        "add r1, %1, #0\n\t"
        "bl func_080D7094\n"
        "_part2_D7118:\n\t"
        "ldr r0, [sp]\n\t"
        "add r2, %1, r0\n\t"
        "mov r0, #0x80\n\t"
        "lsl r0, r0, #1\n\t"
        "cmp r2, r0\n\t"
        "bls _finish_D7118\n\t"
        "mov r1, #0\n\t"
        "cmp %1, #0xff\n\t"
        "bls _sub100_D7118\n\t"
        "ldr r3, =0xFFFFFF00\n\t"
        "add r1, %1, r3\n"
        "_sub100_D7118:\n\t"
        "sub r2, r2, r0\n\t"
        "sub r2, r2, r1\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x40\n\t"
        "bl func_080D7094\n"
        "_finish_D7118:\n\t"
        "mov r1, #0\n\t"
        "ldrb r0, [%0, #4]\n\t"
        "cmp r0, #0\n\t"
        "beq _store_D7118\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x40\n\t"
        "ldrb r0, [r0]\n\t"
        "neg r0, r0\n\t"
        "lsr r1, r0, #0x1f\n"
        "_store_D7118:\n\t"
        "mov r0, #0\n\t"
        "strb r1, [%0]\n\t"
        "strb r0, [%0, #1]\n"
        "_end_D7118:"
        : "=r"(p1), "=r"(p2) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_080D71AC @ 0x080D71AC (148B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D71AC @ 0x080D71AC (148 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x00:u8(W), +0x01:u8(W), +0x04:u32(RW), +0x08:u32(RW)
 * Callees: func_080D6F0C
 * CFG Structure:
 *   L_080D71AC: if (> (u)) goto L_080D7238
 *   L_080D71CC: if (> (u)) goto L_080D71F0
 *   L_080D71F0: if (<= (u)) goto L_080D7212
 *   L_080D7212: if (!=) goto L_080D7222
 *   L_080D7222: if (==) goto L_080D7236
 *   L_080D7230: if (==) goto L_080D7236
 *   L_080D7238: return
 * ========================================================================== */
extern void func_080D6F0C(void);
void func_080D71AC(void) {
    u32 sp0, sp1;
    __asm__ volatile("" : : "m"(sp0), "m"(sp1));
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	add r3, r1, #0\n"
        "	str r2, [sp]\n"
        "	cmp r3, #0x3f\n"
        "	bhi _L_080D7238\n"
        "	cmp r2, #0\n"
        "	beq _L_080D7238\n"
        "	cmp r3, #0\n"
        "	bne _L_080D71CC\n"
        "	cmp r2, #0x3f\n"
        "	bls _L_080D71CC\n"
        "	bl func_080D6F0C\n"
        "	b _L_080D7238\n"
        "_L_080D71CC:\n"
        "	cmp r3, #0x1f\n"
        "	bhi _L_080D71F0\n"
        "	mov r0, #0x20\n"
        "	sub r0, r0, r3\n"
        "	str r0, [sp, #4]\n"
        "	add r1, sp, #4\n"
        "	mov r5, sp\n"
        "	cmp r2, r0\n"
        "	bls _L_080D71E0\n"
        "	add r5, r1, #0\n"
        "_L_080D71E0:\n"
        "	ldr r0, [r5]\n"
        "	mov r1, #1\n"
        "	lsl r1, r0\n"
        "	sub r1, #1\n"
        "	lsl r1, r3\n"
        "	ldr r0, [r4, #4]\n"
        "	bic r0, r1\n"
        "	str r0, [r4, #4]\n"
        "_L_080D71F0:\n"
        "	add r0, r3, r2\n"
        "	cmp r0, #0x20\n"
        "	bls _L_080D7212\n"
        "	mov r2, #0\n"
        "	cmp r3, #0x1f\n"
        "	bls _L_080D7200\n"
        "	add r2, r3, #0\n"
        "	sub r2, #0x20\n"
        "_L_080D7200:\n"
        "	sub r0, #0x20\n"
        "	sub r0, r0, r2\n"
        "	mov r1, #1\n"
        "	lsl r1, r0\n"
        "	sub r1, #1\n"
        "	lsl r1, r2\n"
        "	ldr r0, [r4, #8]\n"
        "	bic r0, r1\n"
        "	str r0, [r4, #8]\n"
        "_L_080D7212:\n"
        "	mov r0, #0\n"
        "	strb r0, [r4]\n"
        "	mov r2, #0\n"
        "	mov r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	cmp r0, #0\n"
        "	bne _L_080D7222\n"
        "	mov r1, #1\n"
        "_L_080D7222:\n"
        "	cmp r1, #0\n"
        "	beq _L_080D7236\n"
        "	mov r1, #0\n"
        "	ldr r0, [r4, #8]\n"
        "	cmp r0, #0\n"
        "	bne _L_080D7230\n"
        "	mov r1, #1\n"
        "_L_080D7230:\n"
        "	cmp r1, #0\n"
        "	beq _L_080D7236\n"
        "	mov r2, #1\n"
        "_L_080D7236:\n"
        "	strb r2, [r4, #1]\n"
        "_L_080D7238:\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
}

/* --- func_080D7240 @ 0x080D7240 (132B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080D6F1C();
extern void func_080D71AC();
void func_080D7240(int param_1, u32 param_2, u32 param_3) {
    u32 sp0, sp1;
    register int p1 asm("r5");
    register u32 p2 asm("r4");
    register int r6 asm("r6");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1));
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %1, r1, #0\n\t"
        "str r2, [sp]\n\t"
        "cmp %1, #0x7f\n\t"
        "bhi _end_D7240\n\t"
        "add r0, r2, #0\n\t"
        "cmp r0, #0\n\t"
        "beq _end_D7240\n\t"
        "cmp %1, #0\n\t"
        "bne _chk3f_D7240\n\t"
        "cmp r0, #0x7f\n\t"
        "bls _chk3f_D7240\n\t"
        "add r0, %0, #0\n\t"
        "bl func_080D6F1C\n\t"
        "b _end_D7240\n"
        "_chk3f_D7240:\n\t"
        "add %2, %0, #4\n\t"
        "cmp %1, #0x3f\n\t"
        "bhi _chk40_D7240\n\t"
        "mov r0, #0x40\n\t"
        "sub r0, r0, %1\n\t"
        "str r0, [sp, #4]\n\t"
        "add r3, sp, #4\n\t"
        "ldr r1, [sp]\n\t"
        "mov r2, sp\n\t"
        "cmp r1, r0\n\t"
        "bls _load_r2_D7240\n\t"
        "add r2, r3, #0\n"
        "_load_r2_D7240:\n\t"
        "ldr r2, [r2]\n\t"
        "add r0, %2, #0\n\t"
        "add r1, %1, #0\n\t"
        "bl func_080D71AC\n"
        "_chk40_D7240:\n\t"
        "ldr r0, [sp]\n\t"
        "add r0, %1, r0\n\t"
        "cmp r0, #0x40\n\t"
        "bls _update_flags_D7240\n\t"
        "mov r1, #0\n\t"
        "cmp %1, #0x3f\n\t"
        "bls _sub_D7240\n\t"
        "add r1, %1, #0\n\t"
        "sub r1, #0x40\n"
        "_sub_D7240:\n\t"
        "add r2, r0, #0\n\t"
        "sub r2, #0x40\n\t"
        "sub r2, r2, r1\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x10\n\t"
        "bl func_080D71AC\n"
        "_update_flags_D7240:\n\t"
        "mov r0, #0\n\t"
        "strb r0, [%0]\n\t"
        "mov r1, #0\n\t"
        "ldrb r0, [%2, #1]\n\t"
        "cmp r0, #0\n\t"
        "beq _store_flags_D7240\n\t"
        "ldrb r0, [%0, #0x11]\n\t"
        "neg r0, r0\n\t"
        "lsr r1, r0, #0x1f\n"
        "_store_flags_D7240:\n\t"
        "strb r1, [%0, #1]\n"
        "_end_D7240:"
        : "=r"(p1), "=r"(p2), "=r"(r6) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_080D72C4 @ 0x080D72C4 (136B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080D6F3C();
extern void func_080D7240();
void func_080D72C4(int param_1, u32 param_2, u32 param_3) {
    u32 sp0, sp1;
    register int p1 asm("r5");
    register u32 p2 asm("r4");
    register int r6 asm("r6");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1));
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %1, r1, #0\n\t"
        "str r2, [sp]\n\t"
        "cmp %1, #0xff\n\t"
        "bhi _end_D72C4\n\t"
        "add r0, r2, #0\n\t"
        "cmp r0, #0\n\t"
        "beq _end_D72C4\n\t"
        "cmp %1, #0\n\t"
        "bne _chk7f_D72C4\n\t"
        "cmp r0, #0xff\n\t"
        "bls _chk7f_D72C4\n\t"
        "add r0, %0, #0\n\t"
        "bl func_080D6F3C\n\t"
        "b _end_D72C4\n"
        "_chk7f_D72C4:\n\t"
        "add %2, %0, #4\n\t"
        "cmp %1, #0x7f\n\t"
        "bhi _chk80_D72C4\n\t"
        "mov r0, #0x80\n\t"
        "sub r0, r0, %1\n\t"
        "str r0, [sp, #4]\n\t"
        "add r3, sp, #4\n\t"
        "ldr r1, [sp]\n\t"
        "mov r2, sp\n\t"
        "cmp r1, r0\n\t"
        "bls _load_r2_D72C4\n\t"
        "add r2, r3, #0\n"
        "_load_r2_D72C4:\n\t"
        "ldr r2, [r2]\n\t"
        "add r0, %2, #0\n\t"
        "add r1, %1, #0\n\t"
        "bl func_080D7240\n"
        "_chk80_D72C4:\n\t"
        "ldr r0, [sp]\n\t"
        "add r0, %1, r0\n\t"
        "cmp r0, #0x80\n\t"
        "bls _update_flags_D72C4\n\t"
        "mov r1, #0\n\t"
        "cmp %1, #0x7f\n\t"
        "bls _sub_D72C4\n\t"
        "add r1, %1, #0\n\t"
        "sub r1, #0x80\n"
        "_sub_D72C4:\n\t"
        "add r2, r0, #0\n\t"
        "sub r2, #0x80\n\t"
        "sub r2, r2, r1\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x20\n\t"
        "bl func_080D7240\n"
        "_update_flags_D72C4:\n\t"
        "mov r0, #0\n\t"
        "strb r0, [%0]\n\t"
        "mov r1, #0\n\t"
        "ldrb r0, [%2, #1]\n\t"
        "cmp r0, #0\n\t"
        "beq _store_flags_D72C4\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x20\n\t"
        "ldrb r0, [r0, #1]\n\t"
        "neg r0, r0\n\t"
        "lsr r1, r0, #0x1f\n"
        "_store_flags_D72C4:\n\t"
        "strb r1, [%0, #1]\n"
        "_end_D72C4:"
        : "=r"(p1), "=r"(p2), "=r"(r6) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_080D734C @ 0x080D734C (152B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080D6F5C();
extern void func_080D72C4();
void func_080D734C(int param_1, u32 param_2, u32 param_3) {
    u32 sp0, sp1;
    register int p1 asm("r5");
    register u32 p2 asm("r4");
    register int r6 asm("r6");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1));
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %1, r1, #0\n\t"
        "str r2, [sp]\n\t"
        "ldr r1, =0x000001FF\n\t"
        "cmp %1, r1\n\t"
        "bhi _end_D734C\n\t"
        "add r0, r2, #0\n\t"
        "cmp r0, #0\n\t"
        "beq _end_D734C\n\t"
        "cmp %1, #0\n\t"
        "bne _chkff_D734C\n\t"
        "cmp r0, r1\n\t"
        "bls _chkff_D734C\n\t"
        "add r0, %0, #0\n\t"
        "bl func_080D6F5C\n\t"
        "b _end_D734C\n\t"
        ".align 2, 0\n\t"
        ".ltorg\n"
        "_chkff_D734C:\n\t"
        "add %2, %0, #4\n\t"
        "cmp %1, #0xff\n\t"
        "bhi _chk100_D734C\n\t"
        "mov r0, #0x80\n\t"
        "lsl r0, r0, #1\n\t"
        "sub r0, r0, %1\n\t"
        "str r0, [sp, #4]\n\t"
        "add r3, sp, #4\n\t"
        "ldr r1, [sp]\n\t"
        "mov r2, sp\n\t"
        "cmp r1, r0\n\t"
        "bls _load_r2_D734C\n\t"
        "add r2, r3, #0\n"
        "_load_r2_D734C:\n\t"
        "ldr r2, [r2]\n\t"
        "add r0, %2, #0\n\t"
        "add r1, %1, #0\n\t"
        "bl func_080D72C4\n"
        "_chk100_D734C:\n\t"
        "ldr r0, [sp]\n\t"
        "add r2, %1, r0\n\t"
        "mov r0, #0x80\n\t"
        "lsl r0, r0, #1\n\t"
        "cmp r2, r0\n\t"
        "bls _update_flags_D734C\n\t"
        "mov r1, #0\n\t"
        "cmp %1, #0xff\n\t"
        "bls _sub_D734C\n\t"
        "ldr r3, =0xFFFFFF00\n\t"
        "add r1, %1, r3\n"
        "_sub_D734C:\n\t"
        "sub r2, r2, r0\n\t"
        "sub r2, r2, r1\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x40\n\t"
        "bl func_080D72C4\n"
        "_update_flags_D734C:\n\t"
        "mov r0, #0\n\t"
        "strb r0, [%0]\n\t"
        "mov r1, #0\n\t"
        "ldrb r0, [%2, #1]\n\t"
        "cmp r0, #0\n\t"
        "beq _store_flags_D734C\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x40\n\t"
        "ldrb r0, [r0, #1]\n\t"
        "neg r0, r0\n\t"
        "lsr r1, r0, #0x1f\n"
        "_store_flags_D734C:\n\t"
        "strb r1, [%0, #1]\n"
        "_end_D734C:"
        : "=r"(p1), "=r"(p2), "=r"(r6) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_080D73E4 @ 0x080D73E4 (156B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D73E4 @ 0x080D73E4 (156 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x00:u8(W), +0x01:u8(RW), +0x04:u32(R), +0x08:u32(R)
 * Callees: func_080077DC, func_080D6E98
 * CFG Structure:
 *   L_080D73E4: if (> (u)) goto L_080D745E
 *   L_080D73F8: if (!=) goto L_080D7404
 *   L_080D7404: if (!=) goto L_080D7450
 *   L_080D741C: if (==) goto L_080D7450
 *   L_080D7430: if (==) goto L_080D7446
 *   L_080D7440: if (==) goto L_080D7446
 *   L_080D7446: goto L_080D7474
 *   L_080D7450: if (<= (s)) goto L_080D73F8
 *   L_080D745E: if (!=) goto L_080D7472
 *   L_080D7474: return
 * ========================================================================== */
extern void func_080077DC(void);
extern void func_080D6E98(void);
int func_080D73E4(void) {
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r7, r1, #0\n"
        "	cmp r7, #5\n"
        "	bhi _L_080D745E\n"
        "	mov r0, #0\n"
        "	mov r8, r0\n"
        "	add r4, r6, #4\n"
        "_L_080D73F8:\n"
        "	mov r1, #0\n"
        "	ldr r0, [r4]\n"
        "	add r0, #1\n"
        "	cmp r0, #0\n"
        "	bne _L_080D7404\n"
        "	mov r1, #1\n"
        "_L_080D7404:\n"
        "	add r5, r1, #0\n"
        "	cmp r5, #0\n"
        "	bne _L_080D7450\n"
        "	add r0, r4, #0\n"
        "	add r1, r7, #0\n"
        "	bl func_080077DC\n"
        "	add r2, r0, #0\n"
        "	mov r0, #0\n"
        "	cmp r2, #0x1f\n"
        "	bhi _L_080D741C\n"
        "	mov r0, #1\n"
        "_L_080D741C:\n"
        "	cmp r0, #0\n"
        "	beq _L_080D7450\n"
        "	strb r5, [r6, #1]\n"
        "	mov r3, #0\n"
        "	mov r1, #0\n"
        "	ldr r0, [r6, #4]\n"
        "	add r0, #1\n"
        "	cmp r0, #0\n"
        "	bne _L_080D7430\n"
        "	mov r1, #1\n"
        "_L_080D7430:\n"
        "	cmp r1, #0\n"
        "	beq _L_080D7446\n"
        "	mov r1, #0\n"
        "	ldr r0, [r6, #8]\n"
        "	add r0, #1\n"
        "	cmp r0, #0\n"
        "	bne _L_080D7440\n"
        "	mov r1, #1\n"
        "_L_080D7440:\n"
        "	cmp r1, #0\n"
        "	beq _L_080D7446\n"
        "	mov r3, #1\n"
        "_L_080D7446:\n"
        "	strb r3, [r6]\n"
        "	mov r1, r8\n"
        "	lsl r0, r1, #5\n"
        "	orr r0, r2\n"
        "	b _L_080D7474\n"
        "_L_080D7450:\n"
        "	add r4, #4\n"
        "	mov r0, #1\n"
        "	add r8, r0\n"
        "	mov r1, r8\n"
        "	cmp r1, #1\n"
        "	ble _L_080D73F8\n"
        "	b _L_080D7472\n"
        "_L_080D745E:\n"
        "	cmp r7, #6\n"
        "	bne _L_080D7472\n"
        "	ldrb r0, [r6, #1]\n"
        "	cmp r0, #0\n"
        "	beq _L_080D7472\n"
        "	add r0, r6, #0\n"
        "	bl func_080D6E98\n"
        "	mov r0, #0\n"
        "	b _L_080D7474\n"
        "_L_080D7472:\n"
        "	mov r0, #0x40\n"
        "_L_080D7474:\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080D7480 @ 0x080D7480 (112B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern u32 func_080D73E4();
extern void func_080D6EAC();
u32 func_080D7480(int param_1, u32 param_2) {
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
        "cmp %1, #6\n\t"
        "bhi _chk7_D7480\n\t"
        "mov r3, #0\n\t"
        "add %2, %0, #4\n"
        "_loop_D7480:\n\t"
        "ldrb %3, [%2]\n\t"
        "cmp %3, #0\n\t"
        "bne _next_D7480\n\t"
        "add r0, %2, #0\n\t"
        "add r1, %1, #0\n\t"
        "str r3, [sp]\n\t"
        "bl func_080D73E4\n\t"
        "add r2, r0, #0\n\t"
        "mov r0, #0\n\t"
        "ldr r3, [sp]\n\t"
        "cmp r2, #0x3f\n\t"
        "bhi _chk_ok_D7480\n\t"
        "mov r0, #1\n"
        "_chk_ok_D7480:\n\t"
        "cmp r0, #0\n\t"
        "beq _next_D7480\n\t"
        "strb %3, [%0, #1]\n\t"
        "mov r1, #0\n\t"
        "ldrb r0, [%0, #4]\n\t"
        "cmp r0, #0\n\t"
        "beq _set_b0_D7480\n\t"
        "ldrb r0, [%0, #0x10]\n\t"
        "neg r0, r0\n\t"
        "lsr r1, r0, #0x1f\n"
        "_set_b0_D7480:\n\t"
        "strb r1, [%0]\n\t"
        "lsl r0, r3, #6\n\t"
        "orr r0, r2\n\t"
        "b _end_D7480\n"
        "_next_D7480:\n\t"
        "add %2, #0xc\n\t"
        "add r3, #1\n\t"
        "cmp r3, #1\n\t"
        "ble _loop_D7480\n\t"
        "b _ret80_D7480\n"
        "_chk7_D7480:\n\t"
        "cmp %1, #7\n\t"
        "bne _ret80_D7480\n\t"
        "ldrb r0, [%0, #1]\n\t"
        "cmp r0, #0\n\t"
        "beq _ret80_D7480\n\t"
        "add r0, %0, #0\n\t"
        "bl func_080D6EAC\n\t"
        "mov r0, #0\n\t"
        "b _end_D7480\n"
        "_ret80_D7480:\n\t"
        "mov r0, #0x80\n"
        "_end_D7480:"
        : "=l"(p1), "=l"(r7_var), "=l"(r4), "=l"(r5) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    __asm__("" : "=r"(ret));
    return ret;
}

/* --- func_080D74F0 @ 0x080D74F0 (120B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern u32 func_080D7480();
extern void func_080D6ECC();
int func_080D74F0(int param_1, u32 param_2) {
    u32 sp0;
    register int r6 asm("r6");
    register int r4 asm("r4");
    register int r5 asm("r5");
    int r7_var;
    register int ret asm("r0");
    __asm__ volatile("" : : "m"(sp0));
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %3, r1, #0\n\t"
        "cmp %3, #7\n\t"
        "bhi _else_func_080D74F0\n\t"
        "mov r3, #0\n\t"
        "add %1, %0, #4\n"
        "_loop_func_080D74F0:\n\t"
        "ldrb %2, [%1]\n\t"
        "cmp %2, #0\n\t"
        "bne _next_func_080D74F0\n\t"
        "add r0, %1, #0\n\t"
        "add r1, %3, #0\n\t"
        "str r3, [sp]\n\t"
        "bl func_080D7480\n\t"
        "add r2, r0, #0\n\t"
        "mov r0, #0\n\t"
        "ldr r3, [sp]\n\t"
        "cmp r2, #0x7f\n\t"
        "bhi _chk_func_080D74F0\n\t"
        "mov r0, #1\n"
        "_chk_func_080D74F0:\n\t"
        "cmp r0, #0\n\t"
        "beq _next_func_080D74F0\n\t"
        "strb %2, [%0, #1]\n\t"
        "mov r1, #0\n\t"
        "ldrb r0, [%0, #4]\n\t"
        "cmp r0, #0\n\t"
        "beq _store_func_080D74F0\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x20\n\t"
        "ldrb r0, [r0]\n\t"
        "neg r0, r0\n\t"
        "lsr r1, r0, #0x1f\n"
        "_store_func_080D74F0:\n\t"
        "strb r1, [%0]\n\t"
        "lsl r0, r3, #7\n\t"
        "orr r0, r2\n\t"
        "b _end_func_080D74F0\n"
        "_next_func_080D74F0:\n\t"
        "add %1, #0x1c\n\t"
        "add r3, #1\n\t"
        "cmp r3, #1\n\t"
        "ble _loop_func_080D74F0\n\t"
        "b _def_func_080D74F0\n"
        "_else_func_080D74F0:\n\t"
        "cmp %3, #8\n\t"
        "bne _def_func_080D74F0\n\t"
        "ldrb r0, [%0, #1]\n\t"
        "cmp r0, #0\n\t"
        "beq _def_func_080D74F0\n\t"
        "add r0, %0, #0\n\t"
        "bl func_080D6ECC\n\t"
        "mov r0, #0\n\t"
        "b _end_func_080D74F0\n"
        "_def_func_080D74F0:\n\t"
        "mov r0, #0x80\n\t"
        "lsl r0, r0, #1\n"
        "_end_func_080D74F0:"
        : "=l"(r6), "=l"(r4), "=l"(r5), "=l"(r7_var) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    __asm__("" : "=r"(ret));
    return ret;
}

/* --- func_080D7568 @ 0x080D7568 (120B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern u32 func_080D74F0();
extern void func_080D6EEC();
int func_080D7568(int param_1, u32 param_2) {
    u32 sp0;
    register int r6 asm("r6");
    register int r4 asm("r4");
    register int r5 asm("r5");
    int r7_var;
    register int ret asm("r0");
    __asm__ volatile("" : : "m"(sp0));
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %3, r1, #0\n\t"
        "cmp %3, #8\n\t"
        "bhi _else_func_080D7568\n\t"
        "mov r3, #0\n\t"
        "add %1, %0, #4\n"
        "_loop_func_080D7568:\n\t"
        "ldrb %2, [%1]\n\t"
        "cmp %2, #0\n\t"
        "bne _next_func_080D7568\n\t"
        "add r0, %1, #0\n\t"
        "add r1, %3, #0\n\t"
        "str r3, [sp]\n\t"
        "bl func_080D74F0\n\t"
        "add r2, r0, #0\n\t"
        "mov r0, #0\n\t"
        "ldr r3, [sp]\n\t"
        "cmp r2, #0xff\n\t"
        "bhi _chk_func_080D7568\n\t"
        "mov r0, #1\n"
        "_chk_func_080D7568:\n\t"
        "cmp r0, #0\n\t"
        "beq _next_func_080D7568\n\t"
        "strb %2, [%0, #1]\n\t"
        "mov r1, #0\n\t"
        "ldrb r0, [%0, #4]\n\t"
        "cmp r0, #0\n\t"
        "beq _store_func_080D7568\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x40\n\t"
        "ldrb r0, [r0]\n\t"
        "neg r0, r0\n\t"
        "lsr r1, r0, #0x1f\n"
        "_store_func_080D7568:\n\t"
        "strb r1, [%0]\n\t"
        "lsl r0, r3, #8\n\t"
        "orr r0, r2\n\t"
        "b _end_func_080D7568\n"
        "_next_func_080D7568:\n\t"
        "add %1, #0x3c\n\t"
        "add r3, #1\n\t"
        "cmp r3, #1\n\t"
        "ble _loop_func_080D7568\n\t"
        "b _def_func_080D7568\n"
        "_else_func_080D7568:\n\t"
        "cmp %3, #9\n\t"
        "bne _def_func_080D7568\n\t"
        "ldrb r0, [%0, #1]\n\t"
        "cmp r0, #0\n\t"
        "beq _def_func_080D7568\n\t"
        "add r0, %0, #0\n\t"
        "bl func_080D6EEC\n\t"
        "mov r0, #0\n\t"
        "b _end_func_080D7568\n"
        "_def_func_080D7568:\n\t"
        "mov r0, #0x80\n\t"
        "lsl r0, r0, #2\n"
        "_end_func_080D7568:"
        : "=l"(r6), "=l"(r4), "=l"(r5), "=l"(r7_var) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    __asm__("" : "=r"(ret));
    return ret;
}

/* --- func_080D75E0 @ 0x080D75E0 (84B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_08007844();
extern void func_080D6F0C();
void func_080D75E0(int param_1, int param_2, u32 param_3) {
    register int p1 asm("r4") = param_1;
    if (param_3 <= 5) {
        register int *ptr asm("r3");
        __asm__(
            "mov r0, #0x20\n\t"
            "and r0, %1\n\t"
            "add %0, %2, #4\n\t"
            "cmp r0, #0\n\t"
            "beq _call_7844\n\t"
            "add %0, #4\n"
            "_call_7844:"
            : "=r"(ptr) : "r"(param_2), "r"(p1) : "r0"
        );
        func_08007844(ptr);
        *(u8 *)p1 = 0;
        __asm__ volatile(
            "mov r2, #0\n\t"
            "mov r1, #0\n\t"
            "ldr r0, [%0, #4]\n\t"
            "cmp r0, #0\n\t"
            "bne _chk1_D75E0\n\t"
            "mov r1, #1\n"
            "_chk1_D75E0:\n\t"
            "cmp r1, #0\n\t"
            "beq _store_D75E0\n\t"
            "mov r1, #0\n\t"
            "ldr r0, [%0, #8]\n\t"
            "cmp r0, #0\n\t"
            "bne _chk2_D75E0\n\t"
            "mov r1, #1\n"
            "_chk2_D75E0:\n\t"
            "cmp r1, #0\n\t"
            "beq _store_D75E0\n\t"
            "mov r2, #1\n"
            "_store_D75E0:\n\t"
            "strb r2, [%0, #1]"
            : : "r"(p1) : "r0", "r1", "r2", "memory"
        );
    } else if (param_3 == 6) {
        func_080D6F0C(p1);
    }
}

/* --- func_080D7634 @ 0x080D7634 (68B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080D75E0();
extern void func_080D6F1C();
void func_080D7634(int param_1, int param_2, u32 param_3) {
    register int p1 asm("r4");
    register int r5 asm("r5");
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "cmp r2, #6\n\t"
        "bhi _chk7_D7634\n\t"
        "mov r0, #0x40\n\t"
        "and r0, r1\n\t"
        "add %1, %0, #4\n\t"
        "add r3, %1, #0\n\t"
        "cmp r0, #0\n\t"
        "beq _call_D75E0\n\t"
        "add r3, %0, #0\n\t"
        "add r3, #0x10\n"
        "_call_D75E0:\n\t"
        "add r0, r3, #0\n\t"
        "bl func_080D75E0\n\t"
        "mov r0, #0\n\t"
        "strb r0, [%0]\n\t"
        "mov r1, #0\n\t"
        "ldrb r0, [%1, #1]\n\t"
        "cmp r0, #0\n\t"
        "beq _store_D7634\n\t"
        "ldrb r0, [%0, #0x11]\n\t"
        "neg r0, r0\n\t"
        "lsr r1, r0, #0x1f\n"
        "_store_D7634:\n\t"
        "strb r1, [%0, #1]\n\t"
        "b _end_D7634\n"
        "_chk7_D7634:\n\t"
        "cmp r2, #7\n\t"
        "bne _end_D7634\n\t"
        "add r0, %0, #0\n\t"
        "bl func_080D6F1C\n"
        "_end_D7634:"
        : "=r"(p1), "=r"(r5) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_080D7678 @ 0x080D7678 (72B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080D7634();
extern void func_080D6F3C();
void func_080D7678(int param_1, int param_2, u32 param_3) {
    register int p1 asm("r4");
    register int r5 asm("r5");
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "cmp r2, #7\n\t"
        "bhi _chk8_D7678\n\t"
        "mov r0, #0x80\n\t"
        "and r0, r1\n\t"
        "add %1, %0, #4\n\t"
        "add r3, %1, #0\n\t"
        "cmp r0, #0\n\t"
        "beq _call_D7678\n\t"
        "add r3, %0, #0\n\t"
        "add r3, #0x20\n"
        "_call_D7678:\n\t"
        "add r0, r3, #0\n\t"
        "bl func_080D7634\n\t"
        "mov r0, #0\n\t"
        "strb r0, [%0]\n\t"
        "mov r1, #0\n\t"
        "ldrb r0, [%1, #1]\n\t"
        "cmp r0, #0\n\t"
        "beq _store_D7678\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x20\n\t"
        "ldrb r0, [r0, #1]\n\t"
        "neg r0, r0\n\t"
        "lsr r1, r0, #0x1f\n"
        "_store_D7678:\n\t"
        "strb r1, [%0, #1]\n\t"
        "b _end_D7678\n"
        "_chk8_D7678:\n\t"
        "cmp r2, #8\n\t"
        "bne _end_D7678\n\t"
        "add r0, %0, #0\n\t"
        "bl func_080D6F3C\n"
        "_end_D7678:"
        : "=r"(p1), "=r"(r5) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_080D76C0 @ 0x080D76C0 (76B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080D7678();
extern void func_080D6F5C();
void func_080D76C0(int param_1, int param_2, u32 param_3) {
    register int p1 asm("r4");
    register int r5 asm("r5");
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "cmp r2, #8\n\t"
        "bhi _chk9_D76C0\n\t"
        "mov r0, #0x80\n\t"
        "lsl r0, r0, #1\n\t"
        "and r0, r1\n\t"
        "add %1, %0, #4\n\t"
        "add r3, %1, #0\n\t"
        "cmp r0, #0\n\t"
        "beq _call_D76C0\n\t"
        "add r3, %0, #0\n\t"
        "add r3, #0x40\n"
        "_call_D76C0:\n\t"
        "add r0, r3, #0\n\t"
        "bl func_080D7678\n\t"
        "mov r0, #0\n\t"
        "strb r0, [%0]\n\t"
        "mov r1, #0\n\t"
        "ldrb r0, [%1, #1]\n\t"
        "cmp r0, #0\n\t"
        "beq _store_D76C0\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x40\n\t"
        "ldrb r0, [r0, #1]\n\t"
        "neg r0, r0\n\t"
        "lsr r1, r0, #0x1f\n"
        "_store_D76C0:\n\t"
        "strb r1, [%0, #1]\n\t"
        "b _end_D76C0\n"
        "_chk9_D76C0:\n\t"
        "cmp r2, #9\n\t"
        "bne _end_D76C0\n\t"
        "add r0, %0, #0\n\t"
        "bl func_080D6F5C\n"
        "_end_D76C0:"
        : "=r"(p1), "=r"(r5) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_080D770C @ 0x080D770C (32B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

u32 *func_080D770C(u32 *param_1, int param_2, u32 param_3) {
    u32 *base = param_1;
    int off = (param_2 << 3) - 8;
    u32 *p;
    __asm__("" : "+r"(off));
    p = (u32 *)((int)base + off);
    *p = param_3;
    while (p != base) {
        u32 prev = (u32)p;
        p -= 2;
        *p = prev;
    }
    return p;
}

/* --- func_080D772C @ 0x080D772C (224B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D772C @ 0x080D772C (224 bytes)
 * Role   : C++ SGI STL Node Allocator / _Rb_tree / Container Template Method
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x0C:u32(RW)
 * Callees: func_08007874, func_080079E8, func_08007C28, func_08007CD8, func_080D01F8, func_080D0260, func_080D3BC0
 * CFG Structure:
 *   L_080D772C: if (>= (u)) goto L_080D77FC
 *   L_080D7772: if (==) goto L_080D779C
 *   L_080D7780: if (==) goto L_080D7794
 *   L_080D7794: if (!=) goto L_080D7780
 *   L_080D779C: if (==) goto L_080D77BC
 *   L_080D77A6: call func_08007C28(); call func_080079E8(); if (!=) goto L_080D77A6
 *   L_080D77BC: if (==) goto L_080D77EE
 *   L_080D77C8: if (==) goto L_080D77E2
 * ========================================================================== */
extern void func_08007874(void);
extern void func_080079E8(void);
extern void func_08007C28(void);
extern void func_08007CD8(void);
extern void func_080D01F8(void);
extern void func_080D0260(void);
extern void func_080D3BC0(void);
void func_080D772C(void) {
    int r7_var;
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	ldr r0, [r7, #0xc]\n"
        "	ldr r2, [r7]\n"
        "	sub r0, r0, r2\n"
        "	asr r0, r0, #3\n"
        "	cmp r0, r1\n"
        "	bhs _L_080D77FC\n"
        "	ldr r3, [r7, #4]\n"
        "	sub r0, r3, r2\n"
        "	asr r0, r0, #3\n"
        "	mov sl, r0\n"
        "	cmp r2, #0\n"
        "	beq _L_080D77C8\n"
        "	add r5, r2, #0\n"
        "	add r6, r3, #0\n"
        "	cmp r1, #0\n"
        "	beq _L_080D776E\n"
        "	lsl r4, r1, #3\n"
        "	add r0, r4, #0\n"
        "	bl func_080D01F8\n"
        "	mov r8, r4\n"
        "	cmp r0, #0\n"
        "	bne _L_080D7772\n"
        "	mov r0, r8\n"
        "	bl func_080D3BC0\n"
        "	b _L_080D7772\n"
        "_L_080D776E:\n"
        "	mov r0, #0\n"
        "	mov r8, r0\n"
        "_L_080D7772:\n"
        "	mov sb, r0\n"
        "	mov r4, sb\n"
        "	mov r0, sl\n"
        "	lsl r0, r0, #3\n"
        "	mov sl, r0\n"
        "	cmp r5, r6\n"
        "	beq _L_080D779C\n"
        "_L_080D7780:\n"
        "	cmp r4, #0\n"
        "	beq _L_080D7794\n"
        "	add r0, r4, #0\n"
        "	bl func_08007874\n"
        "	ldr r1, [r5, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007CD8\n"
        "	str r0, [r4, #4]\n"
        "_L_080D7794:\n"
        "	add r5, #8\n"
        "	add r4, #8\n"
        "	cmp r5, r6\n"
        "	bne _L_080D7780\n"
        "_L_080D779C:\n"
        "	mov r6, sb\n"
        "	ldr r5, [r7, #4]\n"
        "	ldr r4, [r7]\n"
        "	cmp r4, r5\n"
        "	beq _L_080D77BC\n"
        "_L_080D77A6:\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	add r4, #8\n"
        "	cmp r4, r5\n"
        "	bne _L_080D77A6\n"
        "_L_080D77BC:\n"
        "	ldr r0, [r7]\n"
        "	cmp r0, #0\n"
        "	beq _L_080D77EE\n"
        "	bl func_080D0260\n"
        "	b _L_080D77EE\n"
        "_L_080D77C8:\n"
        "	cmp r1, #0\n"
        "	beq _L_080D77E2\n"
        "	lsl r4, r1, #3\n"
        "	add r0, r4, #0\n"
        "	bl func_080D01F8\n"
        "	mov r8, r4\n"
        "	cmp r0, #0\n"
        "	bne _L_080D77E6\n"
        "	mov r0, r8\n"
        "	bl func_080D3BC0\n"
        "	b _L_080D77E6\n"
        "_L_080D77E2:\n"
        "	mov r0, #0\n"
        "	mov r8, r0\n"
        "_L_080D77E6:\n"
        "	add r6, r0, #0\n"
        "	mov r1, sl\n"
        "	lsl r1, r1, #3\n"
        "	mov sl, r1\n"
        "_L_080D77EE:\n"
        "	mov r2, sl\n"
        "	add r0, r2, r6\n"
        "	mov r2, r8\n"
        "	add r1, r2, r6\n"
        "	str r6, [r7]\n"
        "	str r0, [r7, #4]\n"
        "	str r1, [r7, #0xc]\n"
        "_L_080D77FC:\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r10", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_080D780C @ 0x080D780C (16B) [PURE-C | old_agbcc_O2] --- */
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
extern u32 func_080096F0();
u32 func_080D780C(int arg0) {
  u32 val;
  val = func_080096F0(*(u32 *)(arg0 + 0xc));
  return 0;
}

/* --- func_080D781C @ 0x080D781C (16B) [PURE-C | agbcc_O2] --- */
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
extern u32 func_08009864();
u32 func_080D781C(int arg0) {
  u32 val;
  val = func_08009864(*(u32 *)(arg0 + 0xc));
  return 0;
}

/* --- func_080D782C @ 0x080D782C (60B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D782C @ 0x080D782C (60 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x04:u32(RW), +0x0C:u32(R)
 * Callees: func_08008FE4
 * CFG Structure:
 *   L_080D782C: if (!=) goto L_080D783C
 *   L_080D783C: if (!=) goto L_080D785E
 *   L_080D7856: if (!=) goto L_080D7856
 *   L_080D785E: return
 * ========================================================================== */
extern void func_08008FE4(void);
int func_080D782C(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	ldr r4, [r0, #0xc]\n"
        "	mov r2, #0\n"
        "	ldr r0, [r4]\n"
        "	ldr r1, [r4, #4]\n"
        "	cmp r0, r1\n"
        "	bne _L_080D783C\n"
        "	mov r2, #1\n"
        "_L_080D783C:\n"
        "	cmp r2, #0\n"
        "	bne _L_080D785E\n"
        "	sub r1, r1, r0\n"
        "	asr r1, r1, #4\n"
        "	lsl r1, r1, #4\n"
        "	add r1, r0, r1\n"
        "	bl func_08008FE4\n"
        "	ldr r0, [r4]\n"
        "	add r2, r0, #0\n"
        "	ldr r1, [r4, #4]\n"
        "	cmp r2, r1\n"
        "	beq _L_080D785C\n"
        "_L_080D7856:\n"
        "	add r0, #0x10\n"
        "	cmp r0, r1\n"
        "	bne _L_080D7856\n"
        "_L_080D785C:\n"
        "	str r2, [r4, #4]\n"
        "_L_080D785E:\n"
        "	mov r0, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "lr", "memory"
    );
    return __ret;
}

/* --- func_080D7868 @ 0x080D7868 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080098AC();
void func_080D7868(void) {
  func_080098AC();
}

/* --- func_080D7874 @ 0x080D7874 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080098AC();
void func_080D7874(void) {
  func_080098AC();
}

/* --- func_080D7880 @ 0x080D7880 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080098AC();
void func_080D7880(void) {
  func_080098AC();
}

/* --- func_080D788C @ 0x080D788C (48B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern u32 func_08000528();
extern void func_08009984();
extern void func_080004F4();
void func_080D788C(u32 param_1) {
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

/* --- func_080D78BC @ 0x080D78BC (36B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800956C();
extern u32 func_080098DC();
void func_080D78BC(int arg0,u32 arg1) {
  *(u32 *)(arg0 + 8) = 0x080E5B90;
  func_0800956C(arg0);
  func_080098DC(arg0,arg1);
}

/* --- func_080D78E0 @ 0x080D78E0 (24B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
void func_080D78E0(void) {
  func_080D3910(*(int *)*(u32 *)0x03000410,*(u32 *)(*(int *)(*(int *)*(u32 *)0x03000410 + 8) + 8));
}

/* --- func_080D78F8 @ 0x080D78F8 (76B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern u32 func_08000528();
extern u32 func_080D100C();
extern void func_0800050C();
int func_080D78F8(int param_1, u32 *param_2) {
    register int p1 asm("r5") = param_1;
    register u32 r4 asm("r4");
    *(u32 *)(p1 + 0x14) = 0x080E5B3C;
    *(u32 *)p1 = *param_2;
    r4 = 1;
    r4 &= func_08000528(1);
    *(u16 *)(p1 + 4) = r4;
    {
        int *g = (int *)0x03000410;
        int old = *g;
        *g = p1;
        *(int *)(p1 + 8) = old;
    }
    *(u32 *)(p1 + 0xc) = 0x080E5B48;
    *(u32 *)(p1 + 0x10) = func_080D100C(0, 0x080D78E1);
    func_0800050C(1);
    return p1;
}

/* --- func_080D7944 @ 0x080D7944 (76B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D7944 @ 0x080D7944 (76 bytes)
 * Role   : C++ Virtual Deleting Destructor ~Class(this, int __in_chrg) [vtable: 0x080E5B3C, 0x080E5B54]
 * Fields : +0x00:u32(W), +0x04:u16(R), +0x08:u32(R), +0x0C:u32(W), +0x10:u32(R), +0x14:u32(W)
 * Callees: func_080004F4, func_08000528, func_08000608, func_080D100C
 * CFG Structure:
 *   L_080D7944: call func_08000528(); call func_080D100C(); if (==) goto L_080D7970
 *   L_080D7970: if (==) goto L_080D797E
 *   L_080D797E: return
 * ========================================================================== */
extern void func_080004F4(void);
extern void func_08000528(void);
extern void func_08000608(void);
extern void func_080D100C(void);
void func_080D7944(void) {

    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	add r5, r1, #0\n"
        "	ldr r0, =0x080E5B3C\n"
        "	str r0, [r4, #0x14]\n"
        "	mov r0, #1\n"
        "	bl func_08000528\n"
        "	ldr r1, [r4, #0x10]\n"
        "	mov r0, #0\n"
        "	bl func_080D100C\n"
        "	ldr r0, =0x080E5B54\n"
        "	str r0, [r4, #0xc]\n"
        "	ldr r1, =0x03000410\n"
        "	ldr r0, [r4, #8]\n"
        "	str r0, [r1]\n"
        "	ldrh r0, [r4, #4]\n"
        "	cmp r0, #0\n"
        "	beq _L_080D7970\n"
        "	bl func_080004F4\n"
        "_L_080D7970:\n"
        "	mov r0, #1\n"
        "	and r5, r0\n"
        "	cmp r5, #0\n"
        "	beq _L_080D797E\n"
        "	add r0, r4, #0\n"
        "	bl func_08000608\n"
        "_L_080D797E:\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
}

/* --- func_080D7990 @ 0x080D7990 (60B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern u32 func_08000528();
extern void func_08009940();
extern void func_080004F4();
void func_080D7990(u32 param_1, u32 param_2) {
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

/* --- func_080D79CC @ 0x080D79CC (44B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D79CC @ 0x080D79CC (44 bytes)
 * Role   : C++ Class Constructor / Polymorphic Method [vtable: 0x080E5B0C, 0x080E5B18]
 * Fields : +0x08:u32(W), +0x30:u32(W)
 * Callees: func_0800959C, func_080D7944
 * CFG Structure:
 *   L_080D79CC: call func_080D7944(); call func_0800959C(); return
 * ========================================================================== */
extern void func_0800959C(void);
extern void func_080D7944(void);
void func_080D79CC(void) {

    __asm__ volatile(
        "	add r5, r1, #0\n"
        "	add r4, r0, #0\n"
        "	sub r4, #0x1c\n"
        "	ldr r1, =0x080E5B0C\n"
        "	str r1, [r4, #0x30]\n"
        "	ldr r1, =0x080E5B18\n"
        "	str r1, [r4, #8]\n"
        "	mov r1, #0\n"
        "	bl func_080D7944\n"
        "	add r0, r4, #0\n"
        "	add r1, r5, #0\n"
        "	bl func_0800959C\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
}

/* --- func_080D79F8 @ 0x080D79F8 (60B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern u32 func_08000528();
extern void func_08009968();
extern void func_080004F4();
void func_080D79F8(u32 param_1, u32 param_2) {
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

/* --- func_080D7A34 @ 0x080D7A34 (60B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern u32 func_08000528();
extern void func_080099B0();
extern void func_080004F4();
void func_080D7A34(u32 param_1, u32 param_2) {
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

/* --- func_080D7A70 @ 0x080D7A70 (60B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern u32 func_08000528();
extern void func_080099D4();
extern void func_080004F4();
void func_080D7A70(u32 param_1, u32 param_2) {
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

/* --- func_080D7AAC @ 0x080D7AAC (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
/* paridad 95.6% preset agbcc_O2 */
void func_080D7AAC(u32 *arg0,u32 arg1) {
  arg0[1] = 0x080E5B54;
  *(int *)0x03000410 = *arg0;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080D7AD4 @ 0x080D7AD4 (48B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080D7944();
extern void func_0800959C();
void func_080D7AD4(int param_1, int param_2) {
    register int p1 asm("r4");
    register int p2 asm("r5");
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %1, r1, #0\n\t"
        "ldr r0, =0x080E5B0C\n\t"
        "str r0, [%0, #0x30]\n\t"
        "ldr r0, =0x080E5B18\n\t"
        "str r0, [%0, #8]\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x1c\n\t"
        "mov r1, #0\n\t"
        "bl func_080D7944\n\t"
        "add r0, %0, #0\n\t"
        "add r1, %1, #0\n\t"
        "bl func_0800959C"
        : "=r"(p1), "=r"(p2) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_080D7B04 @ 0x080D7B04 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
/* paridad 95.6% preset agbcc_O2 */
void func_080D7B04(u32 *arg0,u32 arg1) {
  arg0[1] = 0x080E5B54;
  *(u32 *)0x03000410 = *arg0;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080D7B2C @ 0x080D7B2C (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080098AC();
void func_080D7B2C(void) {
  func_080098AC();
}

/* --- func_080D7B38 @ 0x080D7B38 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080098AC();
void func_080D7B38(void) {
  func_080098AC();
}

/* --- func_080D7B44 @ 0x080D7B44 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080098AC();
void func_080D7B44(void) {
  func_080098AC();
}

/* --- func_080D7B50 @ 0x080D7B50 (116B) [PURE-C | agbcp_O2] --- */
/* func_080D7B50 @ 0x080D7B50 mode=THUMB size=0x74 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D7B50 @ 0x080D7B50  mode=THUMB  size=0x74  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_080D7B50(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  func_080D7C40();
  *(byte *)(param_1 + 0x24) =
       *(byte *)(param_1 + 0x24) & 0xc0 | *(byte *)(param_2 + 0x24) & 1 |
       *(byte *)(param_2 + 0x24) & 0x3e;
  *(ushort *)(param_1 + 0x24) =
       (ushort)_DAT_080d7bc0 & *(ushort *)(param_1 + 0x24) | *(ushort *)(param_2 + 0x24) & 0x7c0;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) & 0xf8 | *(byte *)(param_2 + 0x34) & 7;
  return CONCAT44(in_lr,param_1);
}

/* --- func_080D7BC4 @ 0x080D7BC4 (124B) [PURE-C | agbcp_O2] --- */
/* func_080D7BC4 @ 0x080D7BC4 mode=THUMB size=0x7C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D7BC4 @ 0x080D7BC4  mode=THUMB  size=0x7C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_080D7BC4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  func_080D7C40();
  *(byte *)(param_1 + 0x24) =
       *(byte *)(param_1 + 0x24) & 0xc0 | *(byte *)(param_2 + 0x24) & 1 |
       *(byte *)(param_2 + 0x24) & 0x3e;
  *(ushort *)(param_1 + 0x24) =
       (ushort)_DAT_080d7c3c & *(ushort *)(param_1 + 0x24) | *(ushort *)(param_2 + 0x24) & 0x7c0;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) & 0xfe | *(byte *)(param_2 + 0x34) & 1;
  return CONCAT44(in_lr,param_1);
}

/* --- func_080D7C40 @ 0x080D7C40 (188B) [PURE-C | agbcp_O2] --- */
/* func_080D7C40 @ 0x080D7C40 mode=THUMB size=0xBC (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D7C40 @ 0x080D7C40  mode=THUMB  size=0xBC  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_080D7C40(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 in_lr;
  
  func_080D684C();
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  uVar2 = (ushort)_DAT_080d7cf4;
  *(ushort *)(param_1 + 0x1e) =
       uVar2 & *(ushort *)(param_1 + 0x1e) | *(ushort *)(param_2 + 0x1e) & 0x1ff;
  uVar1 = *(ushort *)(param_2 + 0x20);
  uVar3 = (ushort)_DAT_080d7cf8;
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) & 1 | *(byte *)(param_2 + 0x1f) & 0xfe;
  *(ushort *)(param_1 + 0x20) = uVar2 & *(ushort *)(param_1 + 0x20) | uVar1 & uVar3 & uVar3;
  return CONCAT44(in_lr,param_1);
}

/* --- func_080D7CFC @ 0x080D7CFC (68B) [PURE-C | agbcp_O2] --- */
/* func_080D7CFC @ 0x080D7CFC mode=THUMB size=0x44 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D7CFC @ 0x080D7CFC  mode=THUMB  size=0x44  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_080D7CFC(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  
  iVar1 = param_2[1];
  piVar5 = param_2 + 2;
  piVar3 = param_2;
  for (iVar4 = (int)param_2 + ((*param_2 * 4 + 4) - (int)piVar5) >> 2; 0 < iVar4; iVar4 = iVar4 + -1
      ) {
    piVar3 = piVar3 + 1;
    iVar2 = *piVar5;
    piVar5 = piVar5 + 1;
    *piVar3 = iVar2;
  }
  param_2[*param_2] = param_3;
  *param_1 = iVar1;
  return CONCAT44(in_lr,param_1);
}

/* --- func_080D7D40 @ 0x080D7D40 (72B) [PURE-C | agbcp_O2] --- */
/* func_080D7D40 @ 0x080D7D40 mode=THUMB size=0x48 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D7D40 @ 0x080D7D40  mode=THUMB  size=0x48  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_080D7D40(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  iVar1 = param_2[*param_2];
  piVar2 = param_2 + *param_2 + 1;
  piVar4 = piVar2 + -1;
  for (iVar3 = (int)piVar4 - (int)(param_2 + 1) >> 2; 0 < iVar3; iVar3 = iVar3 + -1) {
    piVar2 = piVar2 + -1;
    piVar4 = piVar4 + -1;
    *piVar2 = *piVar4;
  }
  param_2[1] = param_3;
  *param_1 = iVar1;
  return CONCAT44(in_lr,param_1);
}

/* --- func_080D7D88 @ 0x080D7D88 (108B) [PURE-C | agbcp_O2] --- */
/* func_080D7D88 @ 0x080D7D88 mode=THUMB size=0x6C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D7D88 @ 0x080D7D88  mode=THUMB  size=0x6C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_080D7D88(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  undefined1 auStack_20 [4];
  
  piVar2 = param_2 + 1;
  func_080D3994(auStack_20,piVar2,2);
  iVar3 = (int)param_2 + 6;
  for (iVar1 = *param_2 * 2 + -2 >> 1; 0 < iVar1; iVar1 = iVar1 + -1) {
    func_080D3994(piVar2,iVar3,2);
    iVar3 = iVar3 + 2;
    piVar2 = (int *)((int)piVar2 + 2);
  }
  func_080D3994((int)param_2 + *param_2 * 2 + 2,param_3,2);
  func_080D3994(param_1,auStack_20,2);
  return CONCAT44(in_lr,param_1);
}

/* --- func_080D7DF4 @ 0x080D7DF4 (112B) [PURE-C | agbcp_O2] --- */
/* func_080D7DF4 @ 0x080D7DF4 mode=THUMB size=0x70 (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080D7DF4 @ 0x080D7DF4  mode=THUMB  size=0x70  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_080D7DF4(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined1 auStack_20 [4];
  
  func_080D3994(auStack_20,(int)param_2 + *param_2 * 2 + 2,2);
  iVar1 = (int)param_2 + *param_2 * 2 + 4;
  iVar3 = iVar1 + -2;
  for (iVar2 = iVar3 - (int)(param_2 + 1) >> 1; 0 < iVar2; iVar2 = iVar2 + -1) {
    iVar1 = iVar1 + -2;
    iVar3 = iVar3 + -2;
    func_080D3994(iVar1,iVar3,2);
  }
  func_080D3994(param_2 + 1,param_3,2);
  func_080D3994(param_1,auStack_20,2);
  return CONCAT44(in_lr,param_1);
}

/* --- func_080D7E64 @ 0x080D7E64 (104B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D7E64 @ 0x080D7E64 (104 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x14:u32(R)
 * Callees: func_08000608
 * CFG Structure:
 *   L_080D7E64: if (==) goto L_080D7E88
 *   L_080D7E82: if (!=) goto L_080D7E82
 *   L_080D7E88: if (==) goto L_080D7EA6
 *   L_080D7EA0: if (!=) goto L_080D7EA0
 *   L_080D7EA6: if (==) goto L_080D7EB8
 *   L_080D7EB2: if (!=) goto L_080D7EB2
 *   L_080D7EB8: if (==) goto L_080D7EC6
 *   L_080D7EC6: return
 * ========================================================================== */
extern void func_08000608(void);
void func_080D7E64(void) {

    __asm__ volatile(
        "	add r3, r0, #0\n"
        "	add r5, r1, #0\n"
        "	mov r0, #0xac\n"
        "	lsl r0, r0, #1\n"
        "	add r1, r3, r0\n"
        "	ldr r0, [r1]\n"
        "	lsl r0, r0, #3\n"
        "	add r0, #4\n"
        "	add r1, r1, r0\n"
        "	mov r2, #0xae\n"
        "	lsl r2, r2, #1\n"
        "	add r0, r3, r2\n"
        "	cmp r0, r1\n"
        "	beq _L_080D7E88\n"
        "_L_080D7E82:\n"
        "	add r0, #8\n"
        "	cmp r0, r1\n"
        "	bne _L_080D7E82\n"
        "_L_080D7E88:\n"
        "	add r1, r3, #0\n"
        "	add r1, #0x14\n"
        "	ldr r0, [r3, #0x14]\n"
        "	lsl r0, r0, #3\n"
        "	add r0, #4\n"
        "	add r1, r1, r0\n"
        "	add r2, r3, #0\n"
        "	add r2, #0x18\n"
        "	add r4, r3, #4\n"
        "	ldr r0, [r3]\n"
        "	cmp r2, r1\n"
        "	beq _L_080D7EA6\n"
        "_L_080D7EA0:\n"
        "	add r2, #8\n"
        "	cmp r2, r1\n"
        "	bne _L_080D7EA0\n"
        "_L_080D7EA6:\n"
        "	lsl r0, r0, #3\n"
        "	add r0, #4\n"
        "	add r0, r3, r0\n"
        "	add r1, r4, #0\n"
        "	cmp r1, r0\n"
        "	beq _L_080D7EB8\n"
        "_L_080D7EB2:\n"
        "	add r1, #8\n"
        "	cmp r1, r0\n"
        "	bne _L_080D7EB2\n"
        "_L_080D7EB8:\n"
        "	mov r0, #1\n"
        "	and r0, r5\n"
        "	cmp r0, #0\n"
        "	beq _L_080D7EC6\n"
        "	add r0, r3, #0\n"
        "	bl func_08000608\n"
        "_L_080D7EC6:\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
}

/* --- func_080D7ECC @ 0x080D7ECC (60B) [PURE-C | agbcc_O2] --- */
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
/* paridad 97.67% preset agbcc_O2 (rosetta-alg) */
u32 func_080D7ECC(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r4 = r0 + 0;
    r1 = r1 - r4;
    r1 = (int)r1 >> 3;
    if ((int)r1 <= 0) goto loc_080D7EFE;
    r5 = *(u32 *)(r2);
loc_080D7EDA:
    r3 = (int)r1 >> 1;
    r0 = r4 + (r3 << 3);
    r2 = 0;
    r6 = *(u16 *)(r0);
    if (r5 >= r6) goto loc_080D7EEA;
    r2 = 1;
loc_080D7EEA:
    if (r2 == 0) goto loc_080D7EF2;
    r1 = r3 + 0;
    goto loc_080D7EFA;
loc_080D7EF2:
    r4 = r0 + 0;
    r4 += 8;
    r0 = r1 - r3;
    r1 = r0 - 1;
loc_080D7EFA:
    if ((int)r1 > 0) goto loc_080D7EDA;
loc_080D7EFE:
    r0 = r4 + 0;
    return r4;
    r0 = r0;
    return r0;
}

/* --- func_080D7F08 @ 0x080D7F08 (52B) [PURE-C | agbcc_O2] --- */
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
extern u32 func_080D3914();
void func_080D7F08(int arg0) {
  int val;
  u32 val2;
  int **p;
  val2 = 1;
  p = (int **)(arg0 + 0xa8);
  do {
    val = func_080D3914(*p, val2, *(u32 *)(**p + 0x40));
    if (val != 0) {
      func_080D3914(val, 3, *(u32 *)(*(int *)(val + 0x14) + 0x3c));
    }
    val2 = val2 + 1;
  } while (val2 < 0x24);
}

/* --- func_080D7F3C @ 0x080D7F3C (36B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
void func_080D7F3C(int arg0) {
  func_080D3910(*(int **)(arg0 + 0xa8),*(u32 *)(**(int **)(arg0 + 0xa8) + 0x124));
  *(u32 *)(arg0 + 0x9c) = 2;
}

/* --- func_080D7F60 @ 0x080D7F60 (20B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08050E8C();
void func_080D7F60(int arg0) {
  if (*(int *)(arg0 + 0xac) != 0) {
    func_08050E8C();
  }
}

/* --- func_080D7F74 @ 0x080D7F74 (20B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08050E5C();
void func_080D7F74(int arg0) {
  if (*(int *)(arg0 + 0xac) != 0) {
    func_08050E5C();
  }
}

/* --- func_080D7F88 @ 0x080D7F88 (20B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08050E74();
void func_080D7F88(int arg0) {
  if (*(int *)(arg0 + 0xac) != 0) {
    func_08050E74();
  }
}

/* --- func_080D7F9C @ 0x080D7F9C (4096B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080D7F9C @ 0x080D7F9C (4096 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r1, _call_via_r2)
 * Fields : +0x00:u16(RW), +0x00:u32(R), +0x01:u8(RW), +0x02:u16(RW), +0x03:u8(RW), +0x04:u16(RW), +0x06:u8(W), +0x14:u32(R), +0x20:u32(R), +0x40:u32(R)
 * Callees: func_0800EECC, func_0801FE78, func_0803211C, func_080A0A90, func_080D3910, func_080D3914, func_080D3994
 * CFG Structure:
 *   L_080D7F9C: if (> (s)) goto L_080D8058
 *   L_080D7FCA: call func_080D3994(); call func_0803211C(); call _call_via_r1(); goto L_080D8106
 *   L_080D8058: call _call_via_r2(); if (==) goto L_080D8106
 *   L_080D8106: if (!=) goto L_080D815A
 *   L_080D8120: if (> (u)) goto L_080D813C
 *   L_080D813C: if (> (u)) goto L_080D8148
 *   L_080D8148: if (<= (s)) goto L_080D815A
 *   L_080D815A: return
 * ========================================================================== */
extern void func_0800EECC(void);
extern void func_0801FE78(void);
extern void func_0803211C(void);
extern void func_080A0A90(void);
extern void func_080D3910(void);
extern void func_080D3914(void);
extern void func_080D3994(void);
void func_080D7F9C(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, r7, lr}\n"
        "	mov r7, sl\n"
        "	mov r6, sb\n"
        "	mov r5, r8\n"
        "	push {r5, r6, r7}\n"
        "	sub sp, #0x18\n"
        "	str r0, [sp, #0x10]\n"
        "	str r1, [sp, #0x14]\n"
        "	add r4, r3, #0\n"
        "	mov sl, r2\n"
        "	cmp r1, #0x49\n"
        "	bgt _L_080D8058\n"
        "	add r0, #0xa8\n"
        "	ldr r0, [r0]\n"
        "	ldr r1, [r0]\n"
        "	ldr r2, [r1, #0x40]\n"
        "	ldr r1, [sp, #0x14]\n"
        "	bl func_080D3914\n"
        "	add r7, r0, #0\n"
        "	cmp r7, #0\n"
        "	bne _L_080D7FCA\n"
        "	b _L_080D8106\n"
        "_L_080D7FCA:\n"
        "	add r1, sp, #8\n"
        "	ldr r0, .Lpool_080D8050\n"
        "	mov r8, r0\n"
        "	mov r2, sl\n"
        "	mov r0, r8\n"
        "	and r2, r0\n"
        "	ldrh r3, [r1]\n"
        "	ldr r5, .Lpool_080D8054\n"
        "	add r0, r5, #0\n"
        "	and r0, r3\n"
        "	orr r0, r2\n"
        "	strh r0, [r1]\n"
        "	lsl r4, r4, #0x10\n"
        "	lsr r2, r4, #0x10\n"
        "	mov r0, #0x3f\n"
        "	mov sb, r0\n"
        "	and r2, r0\n"
        "	lsl r2, r2, #2\n"
        "	ldrb r6, [r1, #1]\n"
        "	mov r3, #3\n"
        "	add r0, r3, #0\n"
        "	and r0, r6\n"
        "	orr r0, r2\n"
        "	strb r0, [r1, #1]\n"
        "	lsr r4, r4, #0x16\n"
        "	mov r2, r8\n"
        "	and r4, r2\n"
        "	ldrh r2, [r1, #2]\n"
        "	add r0, r5, #0\n"
        "	and r0, r2\n"
        "	orr r0, r4\n"
        "	strh r0, [r1, #2]\n"
        "	ldr r4, [sp, #0x38]\n"
        "	lsl r2, r4, #0x10\n"
        "	lsr r0, r2, #0x10\n"
        "	mov r4, sb\n"
        "	and r0, r4\n"
        "	lsl r0, r0, #2\n"
        "	ldrb r4, [r1, #3]\n"
        "	and r3, r4\n"
        "	orr r3, r0\n"
        "	strb r3, [r1, #3]\n"
        "	lsr r2, r2, #0x16\n"
        "	mov r0, r8\n"
        "	and r2, r0\n"
        "	ldrh r0, [r1, #4]\n"
        "	and r5, r0\n"
        "	orr r5, r2\n"
        "	strh r5, [r1, #4]\n"
        "	mov r4, sp\n"
        "	mov r0, sp\n"
        "	mov r2, #6\n"
        "	bl func_080D3994\n"
        "	ldr r0, [sp, #0x3c]\n"
        "	strb r0, [r4, #6]\n"
        "	add r0, r7, #0\n"
        "	mov r1, sp\n"
        "	bl func_0803211C\n"
        "	ldr r0, [r7, #0x14]\n"
        "	ldr r1, [r0, #0x20]\n"
        "	add r0, r7, #0\n"
        "	bl func_080D3910\n"
        "	b _L_080D8106\n"
        "	.hword 0x0000\n"
        ".Lpool_080D8050:\n"
        "	.word 0x000003FF\n"
        ".Lpool_080D8054:\n"
        "	.word 0xFFFFFC00\n"
        "_L_080D8058:\n"
        "	ldr r0, [sp, #0x10]\n"
        "	add r0, #0xa8\n"
        "	ldr r0, [r0]\n"
        "	ldr r1, [r0]\n"
        "	ldr r2, [r1, #0x40]\n"
        "	ldr r1, [sp, #0x14]\n"
        "	bl func_080D3914\n"
        "	add r7, r0, #0\n"
        "	cmp r7, #0\n"
        "	beq _L_080D8106\n"
        "	mov r5, sp\n"
        "	ldr r1, .Lpool_080D8130\n"
        "	mov r8, r1\n"
        "	mov r1, sl\n"
        "	mov r2, r8\n"
        "	and r1, r2\n"
        "	ldrh r2, [r5]\n"
        "	ldr r3, .Lpool_080D8134\n"
        "	add r0, r3, #0\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	strh r0, [r5]\n"
        "	lsl r2, r4, #0x10\n"
        "	lsr r0, r2, #0x10\n"
        "	mov r4, #0x3f\n"
        "	mov sb, r4\n"
        "	and r0, r4\n"
        "	lsl r0, r0, #2\n"
        "	ldrb r1, [r5, #1]\n"
        "	mov r4, #3\n"
        "	add r6, r4, #0\n"
        "	and r6, r1\n"
        "	orr r6, r0\n"
        "	strb r6, [r5, #1]\n"
        "	lsr r2, r2, #0x16\n"
        "	mov r0, r8\n"
        "	and r2, r0\n"
        "	ldrh r1, [r5, #2]\n"
        "	add r0, r3, #0\n"
        "	and r0, r1\n"
        "	orr r0, r2\n"
        "	strh r0, [r5, #2]\n"
        "	ldr r2, [sp, #0x38]\n"
        "	lsl r1, r2, #0x10\n"
        "	lsr r0, r1, #0x10\n"
        "	mov r2, sb\n"
        "	and r0, r2\n"
        "	lsl r0, r0, #2\n"
        "	ldrb r2, [r5, #3]\n"
        "	and r4, r2\n"
        "	orr r4, r0\n"
        "	strb r4, [r5, #3]\n"
        "	lsr r1, r1, #0x16\n"
        "	mov r0, r8\n"
        "	and r1, r0\n"
        "	ldrh r0, [r5, #4]\n"
        "	and r3, r0\n"
        "	orr r3, r1\n"
        "	strh r3, [r5, #4]\n"
        "	mov r0, sp\n"
        "	ldrh r1, [r0]\n"
        "	lsl r1, r1, #0x16\n"
        "	lsr r1, r1, #0x16\n"
        "	lsr r6, r6, #2\n"
        "	ldrh r2, [r0, #2]\n"
        "	ldr r5, .Lpool_080D8130\n"
        "	and r2, r5\n"
        "	lsl r2, r2, #6\n"
        "	orr r2, r6\n"
        "	lsl r2, r2, #0x10\n"
        "	asr r2, r2, #0x10\n"
        "	lsr r4, r4, #2\n"
        "	ldrh r3, [r0, #4]\n"
        "	and r3, r5\n"
        "	lsl r3, r3, #6\n"
        "	orr r3, r4\n"
        "	lsl r3, r3, #0x10\n"
        "	asr r3, r3, #0x10\n"
        "	add r0, r7, #0\n"
        "	bl func_0801FE78\n"
        "	ldr r0, [r7, #0x14]\n"
        "	ldr r1, [r0, #0x20]\n"
        "	add r0, r7, #0\n"
        "	bl func_080D3910\n"
        "_L_080D8106:\n"
        "	ldr r1, [sp, #0x14]\n"
        "	cmp r1, #0\n"
        "	bne _L_080D815A\n"
        "	mov r2, sl\n"
        "	cmp r2, #0x19\n"
        "	bne _L_080D8120\n"
        "	ldr r0, [sp, #0x10]\n"
        "	add r0, #0x8c\n"
        "	ldr r0, [r0]\n"
        "	ldr r4, .Lpool_080D8138\n"
        "	add r0, r0, r4\n"
        "	bl func_080A0A90\n"
        "_L_080D8120:\n"
        "	mov r1, #0\n"
        "	mov r0, sl\n"
        "	sub r0, #0x35\n"
        "	cmp r0, #0xfe\n"
        "	bhi _L_080D813C\n"
        "	mov r1, sl\n"
        "	sub r1, #0x34\n"
        "	b _L_080D8148\n"
        ".Lpool_080D8130:\n"
        "	.word 0x000003FF\n"
        ".Lpool_080D8134:\n"
        "	.word 0xFFFFFC00\n"
        ".Lpool_080D8138:\n"
        "	.word 0x00001CD4\n"
        "_L_080D813C:\n"
        "	ldr r0, .Lpool_080D816C\n"
        "	add r0, sl\n"
        "	cmp r0, #0xfe\n"
        "	bhi _L_080D8148\n"
        "	ldr r1, .Lpool_080D8170\n"
        "	add r1, sl\n"
        "_L_080D8148:\n"
        "	cmp r1, #0\n"
        "	ble _L_080D815A\n"
        "	ldr r0, [sp, #0x10]\n"
        "	add r0, #0x8c\n"
        "	ldr r0, [r0]\n"
        "	ldr r2, .Lpool_080D8174\n"
        "	add r0, r0, r2\n"
        "	bl func_0800EECC\n"
        "_L_080D815A:\n"
        "	add sp, #0x18\n"
        "	pop {r3, r4, r5}\n"
        "	mov r8, r3\n"
        "	mov sb, r4\n"
        "	mov sl, r5\n"
        "	pop {r4, r5, r6, r7}\n"
        "	pop {r0}\n"
        "	bx r0\n"
        "	.hword 0x0000\n"
        ".Lpool_080D816C:\n"
        "	.word 0xFFFFFECB\n"
        ".Lpool_080D8170:\n"
        "	.word 0xFFFFFECC\n"
        ".Lpool_080D8174:\n"
        "	.word 0x00001BD8\n"
        "	.hword 0xB5F0\n"
        "	.hword 0x4657\n"
        "	.hword 0x464E\n"
        "	.hword 0x4645\n"
        "	.hword 0xB4E0\n"
        "	.hword 0x4C55\n"
        "	.hword 0x44A5\n"
        "	.hword 0x4A55\n"
        "	.hword 0x446A\n"
        "	.hword 0x6010\n"
        "	.hword 0x468A\n"
        "	.hword 0xA804\n"
        "	.hword 0x211E\n"
        "	.hword 0x2204\n"
        "	.hword 0xF731\n"
        "	.hword 0xF806\n"
        "	.hword 0xAE0D\n"
        "	.hword 0x1C30\n"
        "	.hword 0x2100\n"
        "	.hword 0x2220\n"
        "	.hword 0xF731\n"
        "	.hword 0xFAD0\n"
        "	.hword 0x4657\n"
        "	.hword 0x3710\n"
        "	.hword 0x2200\n"
        "	.hword 0x4653\n"
        "	.hword 0x8A18\n"
        "	.hword 0x2180\n"
        "	.hword 0x4308\n"
        "	.hword 0x8218\n"
        "	.hword 0x2487\n"
        "	.hword 0x00E4\n"
        "	.hword 0x446C\n"
        "	.hword 0x6022\n"
        "	.hword 0x6062\n"
        "	.hword 0x4848\n"
        "	.hword 0x60A0\n"
        "	.hword 0x60E7\n"
        "	.hword 0x4655\n"
        "	.hword 0x3568\n"
        "	.hword 0x1C28\n"
        "	.hword 0xF730\n"
        "	.hword 0xFC89\n"
        "	.hword 0x6881\n"
        "	.hword 0x690A\n"
        "	.hword 0x1C21\n"
        "	.hword 0xF7FB\n"
        "	.hword 0xFB9E\n"
        "	.hword 0x1C28\n"
        "	.hword 0xF730\n"
        "	.hword 0xFC89\n"
        "	.hword 0x1C20\n"
        "	.hword 0x2102\n"
        "	.hword 0xF731\n"
        "	.hword 0xFB63\n"
        "	.hword 0x2187\n"
        "	.hword 0x00C9\n"
        "	.hword 0x4469\n"
        "	.hword 0x25F2\n"
        "	.hword 0x016D\n"
        "	.hword 0x1C28\n"
        "	.hword 0x8008\n"
        "	.hword 0x8820\n"
        "	.hword 0x4652\n"
        "	.hword 0x8210\n"
        "	.hword 0x203F\n"
        "	.hword 0x8008\n"
        "	.hword 0x4651\n"
        "	.hword 0x3160\n"
        "	.hword 0x8820\n"
        "	.hword 0x8008\n"
        "	.hword 0x4655\n"
        "	.hword 0x35D0\n"
        "	.hword 0x32C0\n"
        "	.hword 0x4835\n"
        "	.hword 0x4468\n"
        "	.hword 0x6002\n"
        "	.hword 0x4B34\n"
        "	.hword 0x446B\n"
        "	.hword 0x209C\n"
        "	.hword 0x00C0\n"
        "	.hword 0x4468\n"
        "	.hword 0x6003\n"
        "	.hword 0x6869\n"
        "	.hword 0x68E8\n"
        "	.hword 0x4281\n"
        "	.hword 0xD070\n"
        "	.hword 0x2900\n"
        "	.hword 0xD000\n"
        "	.hword 0x600A\n"
        "	.hword 0x6868\n"
        "	.hword 0x3004\n"
        "	.hword 0x6068\n"
        "	.hword 0x492D\n"
        "	.hword 0x4469\n"
        "	.hword 0x600F\n"
        "	.hword 0x1C2E\n"
        "	.hword 0x22C4\n"
        "	.hword 0x4452\n"
        "	.hword 0x4690\n"
        "	.hword 0x238F\n"
        "	.hword 0x00DB\n"
        "	.hword 0x446B\n"
        "	.hword 0x24A7\n"
        "	.hword 0x00E4\n"
        "	.hword 0x446C\n"
        "	.hword 0x6023\n"
        "	.hword 0x4655\n"
        "	.hword 0x35C8\n"
        "	.hword 0x4F26\n"
        "	.hword 0x446F\n"
        "	.hword 0x603D\n"
        "	.hword 0x4825\n"
        "	.hword 0x4468\n"
        "	.hword 0x4925\n"
        "	.hword 0x4469\n"
        "	.hword 0x6008\n"
        "	.hword 0x4652\n"
        "	.hword 0x32CC\n"
        "	.hword 0x23AE\n"
        "	.hword 0x00DB\n"
        "	.hword 0x446B\n"
        "	.hword 0x601A\n"
        "	.hword 0x2492\n"
        "	.hword 0x00E4\n"
        "	.hword 0x446C\n"
        "	.hword 0x25A8\n"
        "	.hword 0x00ED\n"
        "	.hword 0x446D\n"
        "	.hword 0x602C\n"
        "	.hword 0x4657\n"
        "	.hword 0x37A0\n"
        "	.hword 0x481D\n"
        "	.hword 0x4468\n"
        "	.hword 0x6007\n"
        "	.hword 0x4651\n"
        "	.hword 0x318C\n"
        "	.hword 0x22AA\n"
        "	.hword 0x00D2\n"
        "	.hword 0x446A\n"
        "	.hword 0x6011\n"
        "	.hword 0x4653\n"
        "	.hword 0x33B0\n"
        "	.hword 0x24AD\n"
        "	.hword 0x00E4\n"
        "	.hword 0x446C\n"
        "	.hword 0x6023\n"
        "	.hword 0x4655\n"
        "	.hword 0x3590\n"
        "	.hword 0x4F16\n"
        "	.hword 0x446F\n"
        "	.hword 0x603D\n"
        "	.hword 0x4650\n"
        "	.hword 0x30A8\n"
        "	.hword 0x4914\n"
        "	.hword 0x4469\n"
        "	.hword 0x6008\n"
        "	.hword 0x4652\n"
        "	.hword 0x3288\n"
        "	.hword 0x4B13\n"
        "	.hword 0x446B\n"
        "	.hword 0x601A\n"
        "	.hword 0x4654\n"
        "	.hword 0x349C\n"
        "	.hword 0x25AB\n"
        "	.hword 0x00ED\n"
        "	.hword 0x446D\n"
        "	.hword 0x602C\n"
        "	.hword 0x4657\n"
        "	.hword 0x37A4\n"
        "	.hword 0x20AC\n"
        "	.hword 0x00C0\n"
        "	.hword 0x4468\n"
        "	.hword 0x6007\n"
        "	.hword 0xE0B1\n"
        "	.hword 0x0000\n"
        "	.hword 0xFA70\n"
        "	.hword 0xFFFF\n"
        "	.hword 0x04DC\n"
        "	.hword 0x0000\n"
        "	.hword 0x5AF0\n"
        "	.hword 0x080E\n"
        "	.hword 0x046C\n"
        "	.hword 0x0000\n"
        "	.hword 0x0544\n"
        "	.hword 0x0000\n"
        "	.hword 0x056C\n"
        "	.hword 0x0000\n"
        "	.hword 0x0484\n"
        "	.hword 0x0000\n"
        "	.hword 0x053C\n"
        "	.hword 0x0000\n"
        "	.hword 0x055C\n"
        "	.hword 0x0000\n"
        "	.hword 0x0554\n"
        "	.hword 0x0000\n"
        "	.hword 0x0564\n"
        "	.hword 0x0000\n"
        "	.hword 0x054C\n"
        "	.hword 0x0000\n"
        "	.hword 0x1C0E\n"
        "	.hword 0x2001\n"
        "	.hword 0x4910\n"
        "	.hword 0x4469\n"
        "	.hword 0x6008\n"
        "	.hword 0x6828\n"
        "	.hword 0x1A30\n"
        "	.hword 0x1084\n"
        "	.hword 0x208E\n"
        "	.hword 0x00C0\n"
        "	.hword 0x4468\n"
        "	.hword 0x6004\n"
        "	.hword 0x4A0B\n"
        "	.hword 0x446A\n"
        "	.hword 0x6808\n"
        "	.hword 0x218E\n"
        "	.hword 0x00C9\n"
        "	.hword 0x4469\n"
        "	.hword 0x4284\n"
        "	.hword 0xD200\n"
        "	.hword 0x1C11\n"
        "	.hword 0x6808\n"
        "	.hword 0x1820\n"
        "	.hword 0x2800\n"
        "	.hword 0xD00C\n"
        "	.hword 0x0084\n"
        "	.hword 0x1C20\n"
        "	.hword 0xF7F7\n"
        "	.hword 0xFF5B\n"
        "	.hword 0x46A1\n"
        "	.hword 0x2800\n"
        "	.hword 0xD107\n"
        "	.hword 0x4648\n"
        "	.hword 0xF7FB\n"
        "	.hword 0xFC39\n"
        "	.hword 0xE003\n"
        "	.hword 0x0474\n"
        "	.hword 0x0000\n"
        "	.hword 0x2000\n"
        "	.hword 0x4681\n"
        "	.hword 0x1C07\n"
        "	.hword 0x6829\n"
        "	.hword 0x428E\n"
        "	.hword 0xD005\n"
        "	.hword 0x1A74\n"
        "	.hword 0x1C22\n"
        "	.hword 0xF7FB\n"
        "	.hword 0xFB48\n"
        "	.hword 0x1904\n"
        "	.hword 0xE000\n"
        "	.hword 0x1C3C\n"
        "	.hword 0x483F\n"
        "	.hword 0x4468\n"
        "	.hword 0x6801\n"
        "	.hword 0x4652\n"
        "	.hword 0x3210\n"
        "	.hword 0x4B3D\n"
        "	.hword 0x446B\n"
        "	.hword 0x601A\n"
        "	.hword 0x4656\n"
        "	.hword 0x36D0\n"
        "	.hword 0x682A\n"
        "	.hword 0x20C4\n"
        "	.hword 0x4450\n"
        "	.hword 0x4680\n"
        "	.hword 0x238F\n"
        "	.hword 0x00DB\n"
        "	.hword 0x446B\n"
        "	.hword 0x20A7\n"
        "	.hword 0x00C0\n"
        "	.hword 0x4468\n"
        "	.hword 0x6003\n"
        "	.hword 0x4653\n"
        "	.hword 0x33C8\n"
        "	.hword 0x4835\n"
        "	.hword 0x4468\n"
        "	.hword 0x6003\n"
        "	.hword 0x4B35\n"
        "	.hword 0x446B\n"
        "	.hword 0x4835\n"
        "	.hword 0x4468\n"
        "	.hword 0x6003\n"
        "	.hword 0x4653\n"
        "	.hword 0x33CC\n"
        "	.hword 0x20AE\n"
        "	.hword 0x00C0\n"
        "	.hword 0x4468\n"
        "	.hword 0x6003\n"
        "	.hword 0x2392\n"
        "	.hword 0x00DB\n"
        "	.hword 0x446B\n"
        "	.hword 0x20A8\n"
        "	.hword 0x00C0\n"
        "	.hword 0x4468\n"
        "	.hword 0x6003\n"
        "	.hword 0x4653\n"
        "	.hword 0x33A0\n"
        "	.hword 0x482D\n"
        "	.hword 0x4468\n"
        "	.hword 0x6003\n"
        "	.hword 0x3B14\n"
        "	.hword 0x20AA\n"
        "	.hword 0x00C0\n"
        "	.hword 0x4468\n"
        "	.hword 0x6003\n"
        "	.hword 0x3324\n"
        "	.hword 0x20AD\n"
        "	.hword 0x00C0\n"
        "	.hword 0x4468\n"
        "	.hword 0x6003\n"
        "	.hword 0x3B20\n"
        "	.hword 0x4827\n"
        "	.hword 0x4468\n"
        "	.hword 0x6003\n"
        "	.hword 0x3318\n"
        "	.hword 0x4826\n"
        "	.hword 0x4468\n"
        "	.hword 0x6003\n"
        "	.hword 0x3B20\n"
        "	.hword 0x4825\n"
        "	.hword 0x4468\n"
        "	.hword 0x6003\n"
        "	.hword 0x3314\n"
        "	.hword 0x20AB\n"
        "	.hword 0x00C0\n"
        "	.hword 0x4468\n"
        "	.hword 0x6003\n"
        "	.hword 0x3308\n"
        "	.hword 0x20AC\n"
        "	.hword 0x00C0\n"
        "	.hword 0x4468\n"
        "	.hword 0x6003\n"
        "	.hword 0x2900\n"
        "	.hword 0xD008\n"
        "	.hword 0x239C\n"
        "	.hword 0x00DB\n"
        "	.hword 0x446B\n"
        "	.hword 0x681B\n"
        "	.hword 0x6818\n"
        "	.hword 0xC401\n"
        "	.hword 0x3901\n"
        "	.hword 0x2900\n"
        "	.hword 0xD1F6\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD002\n"
        "	.hword 0x1C10\n"
        "	.hword 0xF7F7\n"
        "	.hword 0xFF18\n"
        "	.hword 0x4649\n"
        "	.hword 0x19C8\n"
        "	.hword 0x602F\n"
        "	.hword 0x606C\n"
        "	.hword 0x60E8\n"
        "	.hword 0x46B1\n"
        "	.hword 0x208F\n"
        "	.hword 0x00C0\n"
        "	.hword 0x4468\n"
        "	.hword 0x4642\n"
        "	.hword 0x6002\n"
        "	.hword 0x23A7\n"
        "	.hword 0x00DB\n"
        "	.hword 0x446B\n"
        "	.hword 0x681B\n"
        "	.hword 0x4C10\n"
        "	.hword 0x446C\n"
        "	.hword 0x6023\n"
        "	.hword 0x6874\n"
        "	.hword 0x68F0\n"
        "	.hword 0x4284\n"
        "	.hword 0xD01B\n"
        "	.hword 0x2C00\n"
        "	.hword 0xD000\n"
        "	.hword 0x6022\n"
        "	.hword 0x6870\n"
        "	.hword 0x3004\n"
        "	.hword 0x6070\n"
        "	.hword 0xE063\n"
        "	.hword 0x0000\n"
        "	.hword 0x0474\n"
        "	.hword 0x0000\n"
        "	.hword 0x0544\n"
        "	.hword 0x0000\n"
        "	.hword 0x056C\n"
        "	.hword 0x0000\n"
        "	.hword 0x0484\n"
        "	.hword 0x0000\n"
        "	.hword 0x053C\n"
        "	.hword 0x0000\n"
        "	.hword 0x055C\n"
        "	.hword 0x0000\n"
        "	.hword 0x0554\n"
        "	.hword 0x0000\n"
        "	.hword 0x0564\n"
        "	.hword 0x0000\n"
        "	.hword 0x054C\n"
        "	.hword 0x0000\n"
        "	.hword 0x04E4\n"
        "	.hword 0x0000\n"
        "	.hword 0x1C27\n"
        "	.hword 0x2001\n"
        "	.hword 0x2190\n"
        "	.hword 0x00C9\n"
        "	.hword 0x4469\n"
        "	.hword 0x6008\n"
        "	.hword 0x6830\n"
        "	.hword 0x1A38\n"
        "	.hword 0x1084\n"
        "	.hword 0x480D\n"
        "	.hword 0x4468\n"
        "	.hword 0x6004\n"
        "	.hword 0x2290\n"
        "	.hword 0x00D2\n"
        "	.hword 0x446A\n"
        "	.hword 0x6808\n"
        "	.hword 0x4909\n"
        "	.hword 0x4469\n"
        "	.hword 0x4284\n"
        "	.hword 0xD200\n"
        "	.hword 0x1C11\n"
        "	.hword 0x6808\n"
        "	.hword 0x1820\n"
        "	.hword 0x2800\n"
        "	.hword 0xD00C\n"
        "	.hword 0x0084\n"
        "	.hword 0x1C20\n"
        "	.hword 0xF7F7\n"
        "	.hword 0xFE95\n"
        "	.hword 0x46A0\n"
        "	.hword 0x2800\n"
        "	.hword 0xD107\n"
        "	.hword 0x4640\n"
        "	.hword 0xF7FB\n"
        "	.hword 0xFB73\n"
        "	.hword 0xE003\n"
        "	.hword 0x047C\n"
        "	.hword 0x0000\n"
        "	.hword 0x2000\n"
        "	.hword 0x4680\n"
        "	.hword 0x1C05\n"
        "	.hword 0x464C\n"
        "	.hword 0x6821\n"
        "	.hword 0x428F\n"
        "	.hword 0xD005\n"
        "	.hword 0x1A7C\n"
        "	.hword 0x1C22\n"
        "	.hword 0xF7FB\n"
        "	.hword 0xFA81\n"
        "	.hword 0x1904\n"
        "	.hword 0xE000\n"
        "	.hword 0x1C2C\n"
        "	.hword 0x2090\n"
        "	.hword 0x00C0\n"
        "	.hword 0x4468\n"
        "	.hword 0x6801\n"
        "	.hword 0x464F\n"
        "	.hword 0x683A\n"
        "	.hword 0x2900\n"
        "	.hword 0xD007\n"
        "	.hword 0x4B15\n"
        "	.hword 0x446B\n"
        "	.hword 0x681B\n"
        "	.hword 0x6818\n"
        "	.hword 0xC401\n"
        "	.hword 0x3901\n"
        "	.hword 0x2900\n"
        "	.hword 0xD1F7\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD002\n"
        "	.hword 0x1C10\n"
        "	.hword 0xF7F7\n"
        "	.hword 0xFE9D\n"
        "	.hword 0x4647\n"
        "	.hword 0x1978\n"
        "	.hword 0x4649\n"
        "	.hword 0x600D\n"
        "	.hword 0x604C\n"
        "	.hword 0x60C8\n"
        "	.hword 0x46B1\n"
        "	.hword 0x480C\n"
        "	.hword 0x4468\n"
        "	.hword 0x4A0C\n"
        "	.hword 0x446A\n"
        "	.hword 0x6812\n"
        "	.hword 0x6002\n"
        "	.hword 0x4B0B\n"
        "	.hword 0x446B\n"
        "	.hword 0x681B\n"
        "	.hword 0x249D\n"
        "	.hword 0x00E4\n"
        "	.hword 0x446C\n"
        "	.hword 0x6023\n"
        "	.hword 0x6874\n"
        "	.hword 0x68F0\n"
        "	.hword 0x4284\n"
        "	.hword 0xD00E\n"
        "	.hword 0x2C00\n"
        "	.hword 0xD000\n"
        "	.hword 0x6022\n"
        "	.hword 0x6870\n"
        "	.hword 0x3004\n"
        "	.hword 0x6070\n"
        "	.hword 0xE057\n"
        "	.hword 0x04E4\n"
        "	.hword 0x0000\n"
        "	.hword 0x0484\n"
        "	.hword 0x0000\n"
        "	.hword 0x056C\n"
        "	.hword 0x0000\n"
        "	.hword 0x053C\n"
        "	.hword 0x0000\n"
        "	.hword 0x1C27\n"
        "	.hword 0x2001\n"
        "	.hword 0x4910\n"
        "	.hword 0x4469\n"
        "	.hword 0x6008\n"
        "	.hword 0x6830\n"
        "	.hword 0x1A38\n"
        "	.hword 0x1084\n"
        "	.hword 0x2091\n"
        "	.hword 0x00C0\n"
        "	.hword 0x4468\n"
        "	.hword 0x6004\n"
        "	.hword 0x4A0B\n"
        "	.hword 0x446A\n"
        "	.hword 0x6808\n"
        "	.hword 0x2191\n"
        "	.hword 0x00C9\n"
        "	.hword 0x4469\n"
        "	.hword 0x4284\n"
        "	.hword 0xD200\n"
        "	.hword 0x1C11\n"
        "	.hword 0x6808\n"
        "	.hword 0x1820\n"
        "	.hword 0x2800\n"
        "	.hword 0xD00C\n"
        "	.hword 0x0084\n"
        "	.hword 0x1C20\n"
        "	.hword 0xF7F7\n"
        "	.hword 0xFE25\n"
        "	.hword 0x46A0\n"
        "	.hword 0x2800\n"
        "	.hword 0xD107\n"
        "	.hword 0x4640\n"
        "	.hword 0xF7FB\n"
        "	.hword 0xFB03\n"
        "	.hword 0xE003\n"
        "	.hword 0x048C\n"
        "	.hword 0x0000\n"
        "	.hword 0x2000\n"
        "	.hword 0x4680\n"
        "	.hword 0x1C05\n"
        "	.hword 0x4648\n"
        "	.hword 0x6801\n"
        "	.hword 0x428F\n"
        "	.hword 0xD006\n"
        "	.hword 0x1A7C\n"
        "	.hword 0x1C28\n"
        "	.hword 0x1C22\n"
        "	.hword 0xF7FB\n"
        "	.hword 0xFA10\n"
        "	.hword 0x1904\n"
        "	.hword 0xE000\n"
        "	.hword 0x1C2C\n"
        "	.hword 0x481A\n"
        "	.hword 0x4468\n"
        "	.hword 0x6801\n"
        "	.hword 0x464B\n"
        "	.hword 0x681A\n"
        "	.hword 0x2900\n"
        "	.hword 0xD008\n"
        "	.hword 0x279D\n"
        "	.hword 0x00FF\n"
        "	.hword 0x446F\n"
        "	.hword 0x683F\n"
        "	.hword 0x6838\n"
        "	.hword 0xC401\n"
        "	.hword 0x3901\n"
        "	.hword 0x2900\n"
        "	.hword 0xD1F6\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD002\n"
        "	.hword 0x1C10\n"
        "	.hword 0xF7F7\n"
        "	.hword 0xFE2C\n"
        "	.hword 0x4641\n"
        "	.hword 0x1948\n"
        "	.hword 0x464A\n"
        "	.hword 0x6015\n"
        "	.hword 0x6054\n"
        "	.hword 0x60D0\n"
        "	.hword 0x1C35\n"
        "	.hword 0x2092\n"
        "	.hword 0x00C0\n"
        "	.hword 0x4468\n"
        "	.hword 0x23AE\n"
        "	.hword 0x00DB\n"
        "	.hword 0x446B\n"
        "	.hword 0x681B\n"
        "	.hword 0x6003\n"
        "	.hword 0x24A8\n"
        "	.hword 0x00E4\n"
        "	.hword 0x446C\n"
        "	.hword 0x6824\n"
        "	.hword 0x46A1\n"
        "	.hword 0x686C\n"
        "	.hword 0x68E8\n"
        "	.hword 0x4284\n"
        "	.hword 0xD009\n"
        "	.hword 0x2C00\n"
        "	.hword 0xD000\n"
        "	.hword 0x6023\n"
        "	.hword 0x6868\n"
        "	.hword 0x3004\n"
        "	.hword 0x6068\n"
        "	.hword 0xE04C\n"
        "	.hword 0x0000\n"
        "	.hword 0x048C\n"
        "	.hword 0x0000\n"
        "	.hword 0x1C27\n"
        "	.hword 0x2001\n"
        "	.hword 0x2193\n"
        "	.hword 0x00C9\n"
        "	.hword 0x4469\n"
        "	.hword 0x6008\n"
        "	.hword 0x6828\n"
        "	.hword 0x1A38\n"
        "	.hword 0x1084\n"
        "	.hword 0x480D\n"
        "	.hword 0x4468\n"
        "	.hword 0x6004\n"
        "	.hword 0x2293\n"
        "	.hword 0x00D2\n"
        "	.hword 0x446A\n"
        "	.hword 0x6808\n"
        "	.hword 0x4909\n"
        "	.hword 0x4469\n"
        "	.hword 0x4284\n"
        "	.hword 0xD200\n"
        "	.hword 0x1C11\n"
        "	.hword 0x6808\n"
        "	.hword 0x1820\n"
        "	.hword 0x2800\n"
        "	.hword 0xD00C\n"
        "	.hword 0x0084\n"
        "	.hword 0x1C20\n"
        "	.hword 0xF7F7\n"
        "	.hword 0xFDB9\n"
        "	.hword 0x46A0\n"
        "	.hword 0x2800\n"
        "	.hword 0xD107\n"
        "	.hword 0x4640\n"
        "	.hword 0xF7FB\n"
        "	.hword 0xFA97\n"
        "	.hword 0xE003\n"
        "	.hword 0x0494\n"
        "	.hword 0x0000\n"
        "	.hword 0x2000\n"
        "	.hword 0x4680\n"
        "	.hword 0x1C06\n"
        "	.hword 0x6829\n"
        "	.hword 0x428F\n"
        "	.hword 0xD005\n"
        "	.hword 0x1A7C\n"
        "	.hword 0x1C22\n"
        "	.hword 0xF7FB\n"
        "	.hword 0xF9A6\n"
        "	.hword 0x1904\n"
        "	.hword 0xE000\n"
        "	.hword 0x1C34\n"
        "	.hword 0x2093\n"
        "	.hword 0x00C0\n"
        "	.hword 0x4468\n"
        "	.hword 0x6801\n"
        "	.hword 0x682A\n"
        "	.hword 0x2900\n"
        "	.hword 0xD005\n"
        "	.hword 0x464F\n"
        "	.hword 0x6838\n"
        "	.hword 0xC401\n"
        "	.hword 0x3901\n"
        "	.hword 0x2900\n"
        "	.hword 0xD1F9\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD002\n"
        "	.hword 0x1C10\n"
        "	.hword 0xF7F7\n"
        "	.hword 0xFDC5\n"
        "	.hword 0x4641\n"
        "	.hword 0x1988\n"
        "	.hword 0x602E\n"
        "	.hword 0x606C\n"
        "	.hword 0x60E8\n"
        "	.hword 0x2004\n"
        "	.hword 0xF727\n"
        "	.hword 0xFF77\n"
        "	.hword 0x4A45\n"
        "	.hword 0x446A\n"
        "	.hword 0x6811\n"
        "	.hword 0xF730\n"
        "	.hword 0xFE08\n"
        "	.hword 0x4B43\n"
        "	.hword 0x446B\n"
        "	.hword 0x681D\n"
        "	.hword 0x1C04\n"
        "	.hword 0x1C2E\n"
        "	.hword 0x6830\n"
        "	.hword 0x4284\n"
        "	.hword 0xD004\n"
        "	.hword 0x2800\n"
        "	.hword 0xD002\n"
        "	.hword 0x2103\n"
        "	.hword 0xF730\n"
        "	.hword 0xFE0D\n"
        "	.hword 0x602C\n"
        "	.hword 0x2068\n"
        "	.hword 0xF727\n"
        "	.hword 0xFF61\n"
        "	.hword 0x27AA\n"
        "	.hword 0x00FF\n"
        "	.hword 0x446F\n"
        "	.hword 0x683F\n"
        "	.hword 0x6839\n"
        "	.hword 0xF762\n"
        "	.hword 0xFEC8\n"
        "	.hword 0x21AD\n"
        "	.hword 0x00C9\n"
        "	.hword 0x4469\n"
        "	.hword 0x680D\n"
        "	.hword 0x1C04\n"
        "	.hword 0x6829\n"
        "	.hword 0x428C\n"
        "	.hword 0xD007\n"
        "	.hword 0x2900\n"
        "	.hword 0xD005\n"
        "	.hword 0x6808\n"
        "	.hword 0x6882\n"
        "	.hword 0x1C08\n"
        "	.hword 0x2103\n"
        "	.hword 0xF7FB\n"
        "	.hword 0xF8EA\n"
        "	.hword 0x602C\n"
        "	.hword 0x4A30\n"
        "	.hword 0x446A\n"
        "	.hword 0x6812\n"
        "	.hword 0x6810\n"
        "	.hword 0x282A\n"
        "	.hword 0xD162\n"
        "	.hword 0x4650\n"
        "	.hword 0x3094\n"
        "	.hword 0x7801\n"
        "	.hword 0x1C06\n"
        "	.hword 0x2900\n"
        "	.hword 0xD05C\n"
        "	.hword 0x4B2B\n"
        "	.hword 0x446B\n"
        "	.hword 0x681D\n"
        "	.hword 0x24AA\n"
        "	.hword 0x00E4\n"
        "	.hword 0x446C\n"
        "	.hword 0x6824\n"
        "	.hword 0x6821\n"
        "	.hword 0x4F28\n"
        "	.hword 0x446F\n"
        "	.hword 0x683F\n"
        "	.hword 0x683A\n"
        "	.hword 0x2487\n"
        "	.hword 0x00E4\n"
        "	.hword 0x446C\n"
        "	.hword 0x1C20\n"
        "	.hword 0x2300\n"
        "	.hword 0xF747\n"
        "	.hword 0xF9FE\n"
        "	.hword 0x6822\n"
        "	.hword 0x4923\n"
        "	.hword 0x4469\n"
        "	.hword 0x4822\n"
        "	.hword 0x4468\n"
        "	.hword 0x6004\n"
        "	.hword 0x604A\n"
        "	.hword 0x2000\n"
        "	.hword 0x6020\n"
        "	.hword 0x1C14\n"
        "	.hword 0x481C\n"
        "	.hword 0x4468\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x428C\n"
        "	.hword 0xD007\n"
        "	.hword 0x2900\n"
        "	.hword 0xD005\n"
        "	.hword 0x6808\n"
        "	.hword 0x6882\n"
        "	.hword 0x1C08\n"
        "	.hword 0x2103\n"
        "	.hword 0xF7FB\n"
        "	.hword 0xF8B2\n"
        "	.hword 0x602C\n"
        "	.hword 0x2087\n"
        "	.hword 0x00C0\n"
        "	.hword 0x4468\n"
        "	.hword 0x6801\n"
        "	.hword 0x2900\n"
        "	.hword 0xD005\n"
        "	.hword 0x6808\n"
        "	.hword 0x6882\n"
        "	.hword 0x1C08\n"
        "	.hword 0x2103\n"
        "	.hword 0xF7FB\n"
        "	.hword 0xF8A5\n"
        "	.hword 0x6831\n"
        "	.hword 0x0209\n"
        "	.hword 0x0C09\n"
        "	.hword 0x4650\n"
        "	.hword 0x3098\n"
        "	.hword 0x2200\n"
        "	.hword 0x5E85\n"
        "	.hword 0x3002\n"
        "	.hword 0x2300\n"
        "	.hword 0x5EC4\n"
        "	.hword 0x4650\n"
        "	.hword 0x1C2A\n"
        "	.hword 0x1C23\n"
        "	.hword 0xF003\n"
        "	.hword 0xFD66\n"
        "	.hword 0x2000\n"
        "	.hword 0x9000\n"
        "	.hword 0x4650\n"
        "	.hword 0x2100\n"
        "	.hword 0x1C2A\n"
        "	.hword 0x1C23\n"
        "	.hword 0xF003\n"
        "	.hword 0xFDB4\n"
        "	.hword 0xE044\n"
        "	.hword 0x0000\n"
        "	.hword 0x0544\n"
        "	.hword 0x0000\n"
        "	.hword 0x055C\n"
        "	.hword 0x0000\n"
        "	.hword 0x0554\n"
        "	.hword 0x0000\n"
        "	.hword 0x0564\n"
        "	.hword 0x0000\n"
        "	.hword 0x054C\n"
        "	.hword 0x0000\n"
        "	.hword 0x049C\n"
        "	.hword 0x0000\n"
        "	.hword 0x4C24\n"
        "	.hword 0x446C\n"
        "	.hword 0x6825\n"
        "	.hword 0x26AA\n"
        "	.hword 0x00F6\n"
        "	.hword 0x446E\n"
        "	.hword 0x6836\n"
        "	.hword 0x6831\n"
        "	.hword 0x4F21\n"
        "	.hword 0x446F\n"
        "	.hword 0x683F\n"
        "	.hword 0x683A\n"
        "	.hword 0x2487\n"
        "	.hword 0x00E4\n"
        "	.hword 0x446C\n"
        "	.hword 0x1C20\n"
        "	.hword 0x2301\n"
        "	.hword 0xF747\n"
        "	.hword 0xF9A1\n"
        "	.hword 0x6822\n"
        "	.hword 0x491C\n"
        "	.hword 0x4469\n"
        "	.hword 0x481B\n"
        "	.hword 0x4468\n"
        "	.hword 0x6004\n"
        "	.hword 0x604A\n"
        "	.hword 0x2000\n"
        "	.hword 0x6020\n"
        "	.hword 0x1C14\n"
        "	.hword 0x4816\n"
        "	.hword 0x4468\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x428C\n"
        "	.hword 0xD007\n"
        "	.hword 0x2900\n"
        "	.hword 0xD005\n"
        "	.hword 0x6808\n"
        "	.hword 0x6882\n"
        "	.hword 0x1C08\n"
        "	.hword 0x2103\n"
        "	.hword 0xF7FB\n"
        "	.hword 0xF855\n"
        "	.hword 0x602C\n"
        "	.hword 0x2087\n"
        "	.hword 0x00C0\n"
        "	.hword 0x4468\n"
        "	.hword 0x6801\n"
        "	.hword 0x2900\n"
        "	.hword 0xD005\n"
        "	.hword 0x6808\n"
        "	.hword 0x6882\n"
        "	.hword 0x1C08\n"
        "	.hword 0x2103\n"
        "	.hword 0xF7FB\n"
        "	.hword 0xF848\n"
        "	.hword 0x2000\n"
        "	.hword 0x21AB\n"
        "	.hword 0x00C9\n"
        "	.hword 0x4469\n"
        "	.hword 0x6809\n"
        "	.hword 0x6008\n"
        "	.hword 0x4A08\n"
        "	.hword 0x446A\n"
        "	.hword 0x6812\n"
        "	.hword 0x6810\n"
        "	.hword 0x282F\n"
        "	.hword 0xD900\n"
        "	.hword 0xE3A4\n"
        "	.hword 0x0080\n"
        "	.hword 0x4905\n"
        "	.hword 0x1840\n"
        "	.hword 0x6800\n"
        "	.hword 0x4687\n"
        "	.hword 0x0564\n"
        "	.hword 0x0000\n"
        "	.hword 0x054C\n"
        "	.hword 0x0000\n"
        "	.hword 0x04A4\n"
        "	.hword 0x0000\n"
        "	.hword 0x0554\n"
        "	.hword 0x0000\n"
        "	.hword 0x88BC\n"
        "	.hword 0x080D\n"
        "	.hword 0x897C\n"
        "	.hword 0x080D\n"
        "	.hword 0x89D4\n"
        "	.hword 0x080D\n"
        "	.hword 0x8FE8\n"
        "	.hword 0x080D\n"
        "	.hword 0x8BC8\n"
        "	.hword 0x080D\n"
        "	.hword 0x8B6E\n"
        "	.hword 0x080D\n"
        "	.hword 0x8C30\n"
        "	.hword 0x080D\n"
        "	.hword 0x8C8C\n"
        "	.hword 0x080D\n"
        "	.hword 0x8AC4\n"
        "	.hword 0x080D\n"
        "	.hword 0x8B20\n"
        "	.hword 0x080D\n"
        "	.hword 0x8CE8\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8E24\n"
        "	.hword 0x080D\n"
        "	.hword 0x8FA8\n"
        "	.hword 0x080D\n"
        "	.hword 0x8FA8\n"
        "	.hword 0x080D\n"
        "	.hword 0x8FA8\n"
        "	.hword 0x080D\n"
        "	.hword 0x8FA8\n"
        "	.hword 0x080D\n"
        "	.hword 0x8E6C\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8F3C\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DA4\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8EF4\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x8DE0\n"
        "	.hword 0x080D\n"
        "	.hword 0x4910\n"
        "	.hword 0x4650\n"
        "	.hword 0x2200\n"
        "	.hword 0xF003\n"
        "	.hword 0xFC87\n"
        "	.hword 0x480F\n"
        "	.hword 0x6802\n"
        "	.hword 0x23DB\n"
        "	.hword 0x009B\n"
        "	.hword 0x18D2\n"
        "	.hword 0x2020\n"
        "	.hword 0x4240\n"
        "	.hword 0x4C0C\n"
        "	.hword 0x446C\n"
        "	.hword 0x8824\n"
        "	.hword 0x4020\n"
        "	.hword 0x2106\n"
        "	.hword 0x4308\n"
        "	.hword 0x0600\n"
        "	.hword 0x0E00\n"
        "	.hword 0x4909\n"
        "	.hword 0x4D08\n"
        "	.hword 0x446D\n"
        "	.hword 0x882D\n"
        "	.hword 0x4029\n"
        "	.hword 0x4301\n"
        "	.hword 0x4807\n"
        "	.hword 0x4001\n"
        "	.hword 0x231D\n"
        "	.hword 0x2001\n"
        "	.hword 0x7010\n"
        "	.hword 0x6053\n"
        "	.hword 0x8111\n"
        "	.hword 0xE313\n"
        "	.hword 0x0363\n"
        "	.hword 0x0000\n"
        "	.hword 0x040C\n"
        "	.hword 0x0300\n"
        "	.hword 0x04EC\n"
        "	.hword 0x0000\n"
        "	.hword 0xFF00\n"
        "	.hword 0xFFFF\n"
        "	.hword 0xF81F\n"
        "	.hword 0xFFFF\n"
        "	.hword 0x4E37\n"
        "	.hword 0x446E\n"
        "	.hword 0x6836\n"
        "	.hword 0x6830\n"
        "	.hword 0x6801\n"
        "	.hword 0x2794\n"
        "	.hword 0x007F\n"
        "	.hword 0x19C9\n"
        "	.hword 0x6809\n"
        "	.hword 0xF7FA\n"
        "	.hword 0xFF93\n"
        "	.hword 0x200C\n"
        "	.hword 0xF727\n"
        "	.hword 0xFDF2\n"
        "	.hword 0x2101\n"
        "	.hword 0x9100\n"
        "	.hword 0x2100\n"
        "	.hword 0x221F\n"
        "	.hword 0x2300\n"
        "	.hword 0xF763\n"
        "	.hword 0xFDA7\n"
        "	.hword 0x4654\n"
        "	.hword 0x34B4\n"
        "	.hword 0x1C05\n"
        "	.hword 0x6821\n"
        "	.hword 0x1C26\n"
        "	.hword 0x428D\n"
        "	.hword 0xD007\n"
        "	.hword 0x2900\n"
        "	.hword 0xD005\n"
        "	.hword 0x6848\n"
        "	.hword 0x6882\n"
        "	.hword 0x1C08\n"
        "	.hword 0x2103\n"
        "	.hword 0xF7FA\n"
        "	.hword 0xFF7C\n"
        "	.hword 0x6025\n"
        "	.hword 0x20AA\n"
        "	.hword 0x00C0\n"
        "	.hword 0x4468\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x4A23\n"
        "	.hword 0x1888\n"
        "	.hword 0x7800\n"
        "	.hword 0x0780\n"
        "	.hword 0x2800\n"
        "	.hword 0xDA09\n"
        "	.hword 0x4B21\n"
        "	.hword 0x18C8\n"
        "	.hword 0x7800\n"
        "	.hword 0x2800\n"
        "	.hword 0xD104\n"
        "	.hword 0x6830\n"
        "	.hword 0x6841\n"
        "	.hword 0x68C9\n"
        "	.hword 0xF7FA\n"
        "	.hword 0xFF64\n"
        "	.hword 0x6834\n"
        "	.hword 0x2500\n"
        "	.hword 0x4F19\n"
        "	.hword 0x446F\n"
        "	.hword 0x683F\n"
        "	.hword 0x6838\n"
        "	.hword 0x6801\n"
        "	.hword 0x31B0\n"
        "	.hword 0x6809\n"
        "	.hword 0xF7FA\n"
        "	.hword 0xFF59\n"
        "	.hword 0x0600\n"
        "	.hword 0x2800\n"
        "	.hword 0xD10B\n"
        "	.hword 0x21AA\n"
        "	.hword 0x00C9\n"
        "	.hword 0x4469\n"
        "	.hword 0x6809\n"
        "	.hword 0x6808\n"
        "	.hword 0x8A41\n"
        "	.hword 0x0549\n"
        "	.hword 0x0E89\n"
        "	.hword 0x2001\n"
        "	.hword 0x4008\n"
        "	.hword 0x2800\n"
        "	.hword 0xD000\n"
        "	.hword 0x2501\n"
        "	.hword 0x1C2A\n"
        "	.hword 0x23AA\n"
        "	.hword 0x00DB\n"
        "	.hword 0x446B\n"
        "	.hword 0x681B\n"
        "	.hword 0x6819\n"
        "	.hword 0x3110\n"
        "	.hword 0x1C20\n"
        "	.hword 0x3008\n"
        "	.hword 0xF764\n"
        "	.hword 0xF95C\n"
        "	.hword 0x6830\n"
        "	.hword 0x24AA\n"
        "	.hword 0x00E4\n"
        "	.hword 0x446C\n"
        "	.hword 0x6824\n"
        "	.hword 0x6821\n"
        "	.hword 0x6889\n"
        "	.hword 0x3008\n"
        "	.hword 0xF764\n"
        "	.hword 0xFC7C\n"
        "	.hword 0x4D05\n"
        "	.hword 0x446D\n"
        "	.hword 0x682D\n"
        "	.hword 0x6828\n"
        "	.hword 0xE164\n"
        "	.hword 0x0000\n"
        "	.hword 0x0564\n"
        "	.hword 0x0000\n"
        "	.hword 0x2210\n"
        "	.hword 0x0000\n"
        "	.hword 0x34C4\n"
        "	.hword 0x0000\n"
        "	.hword 0x055C\n"
        "	.hword 0x0000\n"
        "	.hword 0x2401\n"
        "	.hword 0x26AB\n"
        "	.hword 0x00F6\n"
        "	.hword 0x446E\n"
        "	.hword 0x6836\n"
        "	.hword 0x6034\n"
        "	.hword 0x2010\n"
        "	.hword 0xF727\n"
        "	.hword 0xFD7F\n"
        "	.hword 0x9400\n"
        "	.hword 0x2104\n"
        "	.hword 0x9101\n"
        "	.hword 0x2100\n"
        "	.hword 0x221F\n"
        "	.hword 0x2300\n"
        "	.hword 0xF763\n"
        "	.hword 0xFA49\n"
        "	.hword 0x4654\n"
        "	.hword 0x34B8\n"
        "	.hword 0x1C05\n"
        "	.hword 0x6821\n"
        "	.hword 0x1C27\n"
        "	.hword 0x428D\n"
        "	.hword 0xD007\n"
        "	.hword 0x2900\n"
        "	.hword 0xD005\n"
        "	.hword 0x6848\n"
        "	.hword 0x6882\n"
        "	.hword 0x1C08\n"
        "	.hword 0x2103\n"
        "	.hword 0xF7FA\n"
        "	.hword 0xFF08\n"
        "	.hword 0x6025\n"
        "	.hword 0x6838\n"
        "	.hword 0x6841\n"
        "	.hword 0x68C9\n"
        "	.hword 0xF7FA\n"
        "	.hword 0xFF00\n"
        "	.hword 0x4F02\n"
        "	.hword 0x446F\n"
        "	.hword 0x683F\n"
        "	.hword 0x6838\n"
        "	.hword 0xE130\n"
        "	.hword 0x0000\n"
        "	.hword 0x055C\n"
        "	.hword 0x0000\n"
        "	.hword 0x2401\n"
        "	.hword 0x20AB\n"
        "	.hword 0x00C0\n"
        "	.hword 0x4468\n"
        "	.hword 0x6800\n"
        "	.hword 0x6004\n"
        "	.hword 0x2010\n"
        "	.hword 0xF727\n"
        "	.hword 0xFD51\n"
        "	.hword 0x9400\n"
        "	.hword 0x2105\n"
        "	.hword 0x9101\n"
        "	.hword 0x2100\n"
        "	.hword 0x221F\n"
        "	.hword 0x2300\n"
        "	.hword 0xF763\n"
        "	.hword 0xFA1B\n"
        "	.hword 0x4654\n"
        "	.hword 0x34B8\n"
        "	.hword 0x1C05\n"
        "	.hword 0x6821\n"
        "	.hword 0x1C27\n"
        "	.hword 0x428D\n"
        "	.hword 0xD007\n"
        "	.hword 0x2900\n"
        "	.hword 0xD005\n"
        "	.hword 0x6848\n"
        "	.hword 0x6882\n"
        "	.hword 0x1C08\n"
        "	.hword 0x2103\n"
        "	.hword 0xF7FA\n"
        "	.hword 0xFEDA\n"
        "	.hword 0x6025\n"
        "	.hword 0x6838\n"
        "	.hword 0x6841\n"
        "	.hword 0x68C9\n"
        "	.hword 0xF7FA\n"
        "	.hword 0xFED2\n"
        "	.hword 0xE102\n"
        "	.hword 0x2401\n"
        "	.hword 0x22AB\n"
        "	.hword 0x00D2\n"
        "	.hword 0x446A\n"
        "	.hword 0x6812\n"
        "	.hword 0x6014\n"
        "	.hword 0x2010\n"
        "	.hword 0xF727\n"
        "	.hword 0xFD2A\n"
        "	.hword 0x9400\n"
        "	.hword 0x9401\n"
        "	.hword 0x2100\n"
        "	.hword 0x221F\n"
        "	.hword 0x2300\n"
        "	.hword 0xF763\n"
        "	.hword 0xF9F5\n"
        "	.hword 0x4654\n"
        "	.hword 0x34B8\n"
        "	.hword 0x1C05\n"
        "	.hword 0x6821\n"
        "	.hword 0x1C27\n"
        "	.hword 0x428D\n"
        "	.hword 0xD007\n"
        "	.hword 0x2900\n"
        "	.hword 0xD005\n"
        "	.hword 0x6848\n"
        "	.hword 0x6882\n"
        "	.hword 0x1C08\n"
        "	.hword 0x2103\n"
        "	.hword 0xF7FA\n"
        "	.hword 0xFEB4\n"
        "	.hword 0x6025\n"
        "	.hword 0x6838\n"
        "	.hword 0x6841\n"
        "	.hword 0x68C9\n"
        "	.hword 0xF7FA\n"
        "	.hword 0xFEAC\n"
        "	.hword 0x4B02\n"
        "	.hword 0x446B\n"
        "	.hword 0x681B\n"
        "	.hword 0x6818\n"
        "	.hword 0xE0DC\n"
        "	.hword 0x0000\n"
        "	.hword 0x055C\n"
        "	.hword 0x0000\n"
        "	.hword 0x2401\n"
        "	.hword 0x25AB\n"
        "	.hword 0x00ED\n"
        "	.hword 0x446D\n"
        "	.hword 0x682D\n"
        "	.hword 0x602C\n"
        "	.hword 0x4E15\n"
        "	.hword 0x446E\n"
        "	.hword 0x6836\n"
        "	.hword 0x6830\n"
        "	.hword 0x6801\n"
        "	.hword 0x2794\n"
        "	.hword 0x007F\n"
        "	.hword 0x19C9\n"
        "	.hword 0x6809\n"
        "	.hword 0xF7FA\n"
        "	.hword 0xFE93\n"
        "	.hword 0x2010\n"
        "	.hword 0xF727\n"
        "	.hword 0xFCF2\n"
        "	.hword 0x9400\n"
        "	.hword 0x2100\n"
        "	.hword 0x9101\n"
        "	.hword 0x221F\n"
        "	.hword 0x2300\n"
        "	.hword 0xF763\n"
        "	.hword 0xF9BD\n"
        "	.hword 0x4654\n"
        "	.hword 0x34B8\n"
        "	.hword 0x1C05\n"
        "	.hword 0x6821\n"
        "	.hword 0x1C27\n"
        "	.hword 0x428D\n"
        "	.hword 0xD007\n"
        "	.hword 0x2900\n"
        "	.hword 0xD005\n"
        "	.hword 0x6848\n"
        "	.hword 0x6882\n"
        "	.hword 0x1C08\n"
        "	.hword 0x2103\n"
        "	.hword 0xF7FA\n"
        "	.hword 0xFE7C\n"
        "	.hword 0x6025\n"
        "	.hword 0x6838\n"
        "	.hword 0x6841\n"
        "	.hword 0x68C9\n"
        "	.hword 0xF7FA\n"
        "	.hword 0xFE74\n"
        "	.hword 0xE0A4\n"
        "	.hword 0x0000\n"
        "	.hword 0x0564\n"
        "	.hword 0x0000\n"
        "	.hword 0x2401\n"
        "	.hword 0x22AB\n"
        "	.hword 0x00D2\n"
        "	.hword 0x446A\n"
        "	.hword 0x6812\n"
        "	.hword 0x6014\n"
        "	.hword 0x2010\n"
        "	.hword 0xF727\n"
        "	.hword 0xFCC9\n"
        "	.hword 0x9400\n"
        "	.hword 0x2102\n"
        "	.hword 0x9101\n"
        "	.hword 0x2100\n"
        "	.hword 0x221F\n"
        "	.hword 0x2300\n"
        "	.hword 0xF763\n"
        "	.hword 0xF993\n"
        "	.hword 0x4654\n"
        "	.hword 0x34B8\n"
        "	.hword 0x1C05\n"
        "	.hword 0x6821\n"
        "	.hword 0x1C27\n"
        "	.hword 0x428D\n"
        "	.hword 0xD007\n"
        "	.hword 0x2900\n"
        "	.hword 0xD005\n"
        "	.hword 0x6848\n"
        "	.hword 0x6882\n"
        "	.hword 0x1C08\n"
        "	.hword 0x2103\n"
        "	.hword 0xF7FA\n"
        "	.hword 0xFE52\n"
        "	.hword 0x6025\n"
        "	.hword 0x6838\n"
        "	.hword 0x6841\n"
        "	.hword 0x68C9\n"
        "	.hword 0xF7FA\n"
        "	.hword 0xFE4A\n"
        "	.hword 0x4B02\n"
        "	.hword 0x446B\n"
        "	.hword 0x681B\n"
        "	.hword 0x6818\n"
        "	.hword 0xE07A\n"
        "	.hword 0x0000\n"
        "	.hword 0x055C\n"
        "	.hword 0x0000\n"
        "	.hword 0x2401\n"
        "	.hword 0x25AB\n"
        "	.hword 0x00ED\n"
        "	.hword 0x446D\n"
        "	.hword 0x682D\n"
        "	.hword 0x602C\n"
        "	.hword 0x2010\n"
        "	.hword 0xF727\n"
        "	.hword 0xFC9B\n"
        "	.hword 0x9400\n"
        "	.hword 0x2103\n"
        "	.hword 0x9101\n"
        "	.hword 0x2100\n"
        "	.hword 0x221F\n"
        "	.hword 0x2300\n"
        "	.hword 0xF763\n"
        "	.hword 0xF965\n"
        "	.hword 0x4654\n"
        "	.hword 0x34B8\n"
        "	.hword 0x1C05\n"
        "	.hword 0x6821\n"
        "	.hword 0x1C27\n"
        "	.hword 0x428D\n"
        "	.hword 0xD007\n"
        "	.hword 0x2900\n"
        "	.hword 0xD005\n"
        "	.hword 0x6848\n"
        "	.hword 0x6882\n"
        "	.hword 0x1C08\n"
        "	.hword 0x2103\n"
        "	.hword 0xF7FA\n"
        "	.hword 0xFE24\n"
        "	.hword 0x6025\n"
        "	.hword 0x6838\n"
        "	.hword 0x6841\n"
        "	.hword 0x68C9\n"
        "	.hword 0xF7FA\n"
        "	.hword 0xFE1C\n"
        "	.hword 0x4E02\n"
        "	.hword 0x446E\n"
        "	.hword 0x6836\n"
        "	.hword 0x6830\n"
        "	.hword 0xE04C\n"
        "	.hword 0x0000\n"
        "	.hword 0x055C\n"
        "	.hword 0x0000\n"
        "	.hword 0x2006\n"
        "	.hword 0x27AB\n"
        "	.hword 0x00FF\n"
        "	.hword 0x446F\n"
        "	.hword 0x683F\n"
        "	.hword 0x6038\n"
        "	.hword 0x2004\n"
        "	.hword 0xF727\n"
        "	.hword 0xFC6D\n"
        "	.hword 0x1C06\n"
        "	.hword 0x2587\n"
        "	.hword 0x00ED\n"
        "	.hword 0x446D\n"
        "	.hword 0x1C28\n"
        "	.hword 0xF72F\n"
        "	.hword 0xFB2A\n"
        "	.hword 0x4C1F\n"
        "	.hword 0x446C\n"
        "	.hword 0x1C20\n"
        "	.hword 0xF72E\n"
        "	.hword 0xFCFD\n"
        "	.hword 0x2001\n"
        "	.hword 0x9000\n"
        "	.hword 0x9501\n"
        "	.hword 0x9402\n"
        "	.hword 0x1C30\n"
        "	.hword 0x2100\n"
        "	.hword 0x221F\n"
        "	.hword 0x2300\n"
        "	.hword 0xF777\n"
        "	.hword 0xFFCD\n"
        "	.hword 0x4654\n"
        "	.hword 0x34AC\n"
        "	.hword 0x1C05\n"
        "	.hword 0x6820\n"
        "	.hword 0x1C26\n"
        "	.hword 0x4285\n"
        "	.hword 0xD004\n"
        "	.hword 0x2800\n"
        "	.hword 0xD002\n"
        "	.hword 0x2103\n"
        "	.hword 0xF777\n"
        "	.hword 0xFFE7\n"
        "	.hword 0x6025\n"
        "	.hword 0x4811\n"
        "	.hword 0x4468\n"
        "	.hword 0x2102\n"
        "	.hword 0xF72E\n"
        "	.hword 0xFCE5\n"
        "	.hword 0x2087\n"
        "	.hword 0x00C0\n"
        "	.hword 0x4468\n"
        "	.hword 0x2102\n"
        "	.hword 0xF72F\n"
        "	.hword 0xFB07\n"
        "	.hword 0x6830\n"
        "	.hword 0xF778\n"
        "	.hword 0xF806\n"
        "	.hword 0x6830\n"
        "	.hword 0x490B\n"
        "	.hword 0x4A0B\n"
        "	.hword 0x4B0C\n"
        "	.hword 0x4D0C\n"
        "	.hword 0x2400\n"
        "	.hword 0x9500\n"
        "	.hword 0x9401\n"
        "	.hword 0x9402\n"
        "	.hword 0x9403\n"
        "	.hword 0xF778\n"
        "	.hword 0xF84C\n"
        "	.hword 0x4909\n"
        "	.hword 0x4469\n"
        "	.hword 0x6809\n"
        "	.hword 0x6808\n"
        "	.hword 0x4908\n"
        "	.hword 0x2201\n"
        "	.hword 0x2301\n"
        "	.hword 0xF730\n"
        "	.hword 0xFAE3\n"
        "	.hword 0xE12F\n"
        "	.hword 0x043C\n"
        "	.hword 0x0000\n"
        "	.hword 0x05B8\n"
        "	.hword 0x080F\n"
        "	.hword 0x05C0\n"
        "	.hword 0x080F\n"
        "	.hword 0x05C8\n"
        "	.hword 0x080F\n"
        "	.hword 0x05D4\n"
        "	.hword 0x080F\n"
        "	.hword 0x055C\n"
        "	.hword 0x0000\n"
        "	.hword 0x0889\n"
        "	.hword 0x0000\n"
        "	.hword 0x481A\n"
        "	.hword 0x6802\n"
        "	.hword 0x23DB\n"
        "	.hword 0x009B\n"
        "	.hword 0x18D2\n"
        "	.hword 0x2020\n"
        "	.hword 0x4240\n"
        "	.hword 0x249E\n"
        "	.hword 0x00E4\n"
        "	.hword 0x446C\n"
        "	.hword 0x8824\n"
        "	.hword 0x4020\n"
        "	.hword 0x2106\n"
        "	.hword 0x4308\n"
        "	.hword 0x0600\n"
        "	.hword 0x0E00\n"
        "	.hword 0x4913\n"
        "	.hword 0x259E\n"
        "	.hword 0x00ED\n"
        "	.hword 0x446D\n"
        "	.hword 0x882D\n"
        "	.hword 0x4029\n"
        "	.hword 0x4301\n"
        "	.hword 0x4811\n"
        "	.hword 0x4001\n"
        "	.hword 0x231D\n"
        "	.hword 0x2001\n"
        "	.hword 0x7010\n"
        "	.hword 0x6053\n"
        "	.hword 0x8111\n"
        "	.hword 0x4651\n"
        "	.hword 0x31E8\n"
        "	.hword 0x2300\n"
        "	.hword 0x2001\n"
        "	.hword 0x7008\n"
        "	.hword 0x4650\n"
        "	.hword 0x30E9\n"
        "	.hword 0x7003\n"
        "	.hword 0x4656\n"
        "	.hword 0x8A31\n"
        "	.hword 0x4809\n"
        "	.hword 0x4008\n"
        "	.hword 0x8230\n"
        "	.hword 0x4652\n"
        "	.hword 0x3260\n"
        "	.hword 0x8811\n"
        "	.hword 0x4807\n"
        "	.hword 0x4008\n"
        "	.hword 0x8010\n"
        "	.hword 0x4650\n"
        "	.hword 0x305C\n"
        "	.hword 0x8003\n"
        "	.hword 0xE0BF\n"
        "	.hword 0x0000\n"
        "	.hword 0x040C\n"
        "	.hword 0x0300\n"
        "	.hword 0xFF00\n"
        "	.hword 0xFFFF\n"
        "	.hword 0xF81F\n"
        "	.hword 0xFFFF\n"
        "	.hword 0xF0FF\n"
        "	.hword 0x0000\n"
        "	.hword 0xFF3F\n"
        "	.hword 0x0000\n"
        "	.hword 0x4651\n"
        "	.hword 0x31E8\n"
        "	.hword 0x2300\n"
        "	.hword 0x2001\n"
        "	.hword 0x7008\n"
        "	.hword 0x4650\n"
        "	.hword 0x30E9\n"
        "	.hword 0x7003\n"
        "	.hword 0x4657\n"
        "	.hword 0x8A39\n"
        "	.hword 0x4809\n"
        "	.hword 0x4008\n"
        "	.hword 0x8238\n"
        "	.hword 0x4652\n"
        "	.hword 0x3260\n"
        "	.hword 0x8811\n"
        "	.hword 0x4807\n"
        "	.hword 0x4008\n"
        "	.hword 0x8010\n"
        "	.hword 0x4650\n"
        "	.hword 0x305C\n"
        "	.hword 0x8003\n"
        "	.hword 0x4805\n"
        "	.hword 0x6800\n"
        "	.hword 0x3008\n"
        "	.hword 0x4651\n"
        "	.hword 0x3194\n"
        "	.hword 0x6809\n"
        "	.hword 0xE095\n"
        "	.hword 0x0000\n"
        "	.hword 0xF0FF\n"
        "	.hword 0x0000\n"
        "	.hword 0xFF3F\n"
        "	.hword 0x0000\n"
        "	.hword 0x040C\n"
        "	.hword 0x0300\n"
        "	.hword 0x4651\n"
        "	.hword 0x31E8\n"
        "	.hword 0x2300\n"
        "	.hword 0x2001\n"
        "	.hword 0x7008\n"
        "	.hword 0x4650\n"
        "	.hword 0x30E9\n"
        "	.hword 0x7003\n"
        "	.hword 0x4650\n"
        "	.hword 0x8A01\n"
        "	.hword 0x480D\n"
        "	.hword 0x4008\n"
        "	.hword 0x4651\n"
        "	.hword 0x8208\n"
        "	.hword 0x4652\n"
        "	.hword 0x3260\n"
        "	.hword 0x8811\n"
        "	.hword 0x480B\n"
        "	.hword 0x4008\n"
        "	.hword 0x8010\n"
        "	.hword 0x4650\n"
        "	.hword 0x305C\n"
        "	.hword 0x8003\n"
        "	.hword 0x22AA\n"
        "	.hword 0x00D2\n"
        "	.hword 0x446A\n"
        "	.hword 0x6812\n"
        "	.hword 0x6811\n"
        "	.hword 0x4B06\n"
        "	.hword 0x18C8\n"
        "	.hword 0x7802\n"
        "	.hword 0x0650\n"
        "	.hword 0x2800\n"
        "	.hword 0xDA09\n"
        "	.hword 0x2101\n"
        "	.hword 0x4249\n"
        "	.hword 0xE017\n"
        "	.hword 0x0000\n"
        "	.hword 0xF0FF\n"
        "	.hword 0x0000\n"
        "	.hword 0xFF3F\n"
        "	.hword 0x0000\n"
        "	.hword 0x2C4A\n"
        "	.hword 0x0000\n"
        "	.hword 0x4C06\n"
        "	.hword 0x1908\n"
        "	.hword 0x7801\n"
        "	.hword 0x2003\n"
        "	.hword 0x4008\n"
        "	.hword 0x2803\n"
        "	.hword 0xD108\n"
        "	.hword 0x09D0\n"
        "	.hword 0x2102\n"
        "	.hword 0x2800\n"
        "	.hword 0xD005\n"
        "	.hword 0x2101\n"
        "	.hword 0xE003\n"
        "	.hword 0x0000\n"
        "	.hword 0x2C48\n"
        "	.hword 0x0000\n"
        "	.hword 0x2100\n"
        "	.hword 0x4802\n"
        "	.hword 0x6800\n"
        "	.hword 0x3008\n"
        "	.hword 0xE04D\n"
        "	.hword 0x0000\n"
        "	.hword 0x040C\n"
        "	.hword 0x0300\n"
        "	.hword 0x4651\n"
        "	.hword 0x31E8\n"
        "	.hword 0x2300\n"
        "	.hword 0x2001\n"
        "	.hword 0x7008\n"
        "	.hword 0x4650\n"
        "	.hword 0x30E9\n"
        "	.hword 0x7003\n"
        "	.hword 0x4655\n"
        "	.hword 0x8A29\n"
        "	.hword 0x4809\n"
        "	.hword 0x4008\n"
        "	.hword 0x8228\n"
        "	.hword 0x4652\n"
        "	.hword 0x3260\n"
        "	.hword 0x8811\n"
        "	.hword 0x4807\n"
        "	.hword 0x4008\n"
        "	.hword 0x8010\n"
        "	.hword 0x4650\n"
        "	.hword 0x305C\n"
        "	.hword 0x8003\n"
        "	.hword 0x4805\n"
        "	.hword 0x6800\n"
        "	.hword 0x3008\n"
        "	.hword 0x4651\n"
        "	.hword 0x3194\n"
        "	.hword 0x6809\n"
        "	.hword 0xE02D\n"
        "	.hword 0x0000\n"
        "	.hword 0xF0FF\n"
        "	.hword 0x0000\n"
        "	.hword 0xFF3F\n"
        "	.hword 0x0000\n"
        "	.hword 0x040C\n"
        "	.hword 0x0300\n"
        "	.hword 0x4651\n"
        "	.hword 0x31E8\n"
        "	.hword 0x2300\n"
        "	.hword 0x2001\n"
        "	.hword 0x7008\n"
        "	.hword 0x4650\n"
        "	.hword 0x30E9\n"
        "	.hword 0x7003\n"
        "	.hword 0x4656\n"
        "	.hword 0x8A31\n"
        "	.hword 0x4811\n"
        "	.hword 0x4008\n"
        "	.hword 0x8230\n"
        "	.hword 0x4652\n"
        "	.hword 0x3260\n"
        "	.hword 0x8811\n"
        "	.hword 0x480F\n"
        "	.hword 0x4008\n"
        "	.hword 0x8010\n"
        "	.hword 0x4650\n"
        "	.hword 0x305C\n"
        "	.hword 0x8003\n"
        "	.hword 0x480D\n"
        "	.hword 0x6800\n"
        "	.hword 0x1C02\n"
        "	.hword 0x3208\n"
        "	.hword 0x27AA\n"
        "	.hword 0x00FF\n"
        "	.hword 0x446F\n"
        "	.hword 0x683F\n"
        "	.hword 0x6838\n"
        "	.hword 0x490A\n"
        "	.hword 0x1840\n"
        "	.hword 0x2100\n"
        "	.hword 0x7800\n"
        "	.hword 0x2800\n"
        "	.hword 0xD100\n"
        "	.hword 0x2101\n"
        "	.hword 0x1C10\n"
        "	.hword 0xF766\n"
        "	.hword 0xFC95\n"
        "	.hword 0x4650\n"
        "	.hword 0xF7FE\n"
        "	.hword 0xFFD4\n"
        "	.hword 0xE028\n"
        "	.hword 0x0000\n"
        "	.hword 0xF0FF\n"
        "	.hword 0x0000\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080DA76C @ 0x080DA76C (2432B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DA76C @ 0x080DA76C (2432 bytes)
 * Role   : C++ SGI STL Node Allocator / _Rb_tree / Container Template Method
 * Fields : +0x00:u32(RW), +0x00:u8(RW), +0x01:u8(R), +0x04:u32(RW), +0x08:u32(RW), +0x0C:u32(RW), +0x10:u32(R), +0x10:u8(R), +0x11:u8(R), +0x14:u32(R), +0x18:u32(R), +0x1C:u32(R)
 * Callees: func_08008F60, func_080093AC, func_080094A4, func_0800DB60, func_0800DC10, func_0800DC34, func_0800E550, func_08011CD8, func_0803D080, func_0803D0F0
 * CFG Structure:
 *   L_080DA76C: goto L_080DAAE6
 *   L_080DAAE6: if (!=) goto L_080DAB10
 *   L_080DAB10: if (!=) goto L_080DAB1C
 *   L_080DAB1C: if (==) goto L_080DAB2A
 *   L_080DAB2A: call func_08008F60(); if (==) goto L_080DAB90
 *   L_080DAB6A: goto L_080DACF8
 *   L_080DAB90: if (>= (u)) goto L_080DABC4
 *   L_080DABC4: if (==) goto L_080DABE8
 *   L_080DABEC: if (==) goto L_080DAC34
 *   L_080DAC14: if (==) goto L_080DAC24
 *   L_080DAC24: if (!=) goto L_080DAC14
 * ========================================================================== */
extern void func_08008F60(void);
extern void func_080093AC(void);
extern void func_080094A4(void);
extern void func_0800DB60(void);
extern void func_0800DC10(void);
extern void func_0800DC34(void);
extern void func_0800E550(void);
extern void func_08011CD8(void);
extern void func_0803D080(void);
extern void func_0803D0F0(void);
extern void func_0803D240(void);
extern void func_0803D2E8(void);
extern void func_0803D340(void);
extern void func_0803D3A0(void);
extern void func_0803D404(void);
extern void func_0803D440(void);
extern void func_080D01F8(void);
extern void func_080D0260(void);
extern void func_080D0EDA(void);
extern void func_080D0F4E(void);
extern void func_080D3910(void);
extern void func_080D3914(void);
extern void func_080D3BC0(void);
extern void func_080D8FE8(void);
extern void func_080DC294(void);
void func_080DA76C(void) {
    __asm__ volatile(
        "	mov r4, #0xab\n"
        "	lsl r4, r4, #3\n"
        "	add r4, sp, r4\n"
        "	ldr r4, [r4]\n"
        "	str r0, [r4]\n"
        "	b _L_080DAAE6\n"
        "	.hword 0x4654\n"
        "	.hword 0x34E4\n"
        "	.hword 0x6820\n"
        "	.hword 0xF757\n"
        "	.hword 0xFDF7\n"
        "	.hword 0x0600\n"
        "	.hword 0x2800\n"
        "	.hword 0xD100\n"
        "	.hword 0xE1AD\n"
        "	.hword 0x2000\n"
        "	.hword 0x6020\n"
        "	.hword 0x2002\n"
        "	.hword 0x25AB\n"
        "	.hword 0x00ED\n"
        "	.hword 0x446D\n"
        "	.hword 0x682D\n"
        "	.hword 0x6028\n"
        "	.hword 0xE1A4\n"
        "	.hword 0x4655\n"
        "	.hword 0x35AC\n"
        "	.hword 0x6828\n"
        "	.hword 0xF776\n"
        "	.hword 0xFAC7\n"
        "	.hword 0x2806\n"
        "	.hword 0xD100\n"
        "	.hword 0xE19C\n"
        "	.hword 0x4805\n"
        "	.hword 0x6804\n"
        "	.hword 0x3408\n"
        "	.hword 0x6828\n"
        "	.hword 0xF776\n"
        "	.hword 0xFB1C\n"
        "	.hword 0x1C01\n"
        "	.hword 0x1C20\n"
        "	.hword 0xF765\n"
        "	.hword 0xF87C\n"
        "	.hword 0xE162\n"
        "	.hword 0x0000\n"
        "	.hword 0x040C\n"
        "	.hword 0x0300\n"
        "	.hword 0x4F04\n"
        "	.hword 0x446F\n"
        "	.hword 0x683F\n"
        "	.hword 0x6838\n"
        "	.hword 0x6801\n"
        "	.hword 0x6A89\n"
        "	.hword 0xF7F9\n"
        "	.hword 0xF89C\n"
        "	.hword 0xE16B\n"
        "	.hword 0x0000\n"
        "	.hword 0x0564\n"
        "	.hword 0x0000\n"
        "	.hword 0x4A0B\n"
        "	.hword 0x446A\n"
        "	.hword 0x6812\n"
        "	.hword 0x6810\n"
        "	.hword 0x6801\n"
        "	.hword 0x6C0A\n"
        "	.hword 0x2100\n"
        "	.hword 0xF7F9\n"
        "	.hword 0xF891\n"
        "	.hword 0x6941\n"
        "	.hword 0x6BC9\n"
        "	.hword 0xF7F9\n"
        "	.hword 0xF88B\n"
        "	.hword 0x0600\n"
        "	.hword 0x2800\n"
        "	.hword 0xD000\n"
        "	.hword 0xE171\n"
        "	.hword 0x2002\n"
        "	.hword 0x23AB\n"
        "	.hword 0x00DB\n"
        "	.hword 0x446B\n"
        "	.hword 0x681B\n"
        "	.hword 0x6018\n"
        "	.hword 0xE16A\n"
        "	.hword 0x0564\n"
        "	.hword 0x0000\n"
        "	.hword 0x4650\n"
        "	.hword 0x30EF\n"
        "	.hword 0x7801\n"
        "	.hword 0x24AF\n"
        "	.hword 0x00E4\n"
        "	.hword 0x446C\n"
        "	.hword 0x6020\n"
        "	.hword 0x2978\n"
        "	.hword 0xD120\n"
        "	.hword 0x3805\n"
        "	.hword 0x2300\n"
        "	.hword 0x7003\n"
        "	.hword 0x4655\n"
        "	.hword 0x8A29\n"
        "	.hword 0x480C\n"
        "	.hword 0x4008\n"
        "	.hword 0x8228\n"
        "	.hword 0x2287\n"
        "	.hword 0x00D2\n"
        "	.hword 0x446A\n"
        "	.hword 0x203F\n"
        "	.hword 0x8010\n"
        "	.hword 0x4651\n"
        "	.hword 0x3160\n"
        "	.hword 0x2687\n"
        "	.hword 0x00F6\n"
        "	.hword 0x446E\n"
        "	.hword 0x8830\n"
        "	.hword 0x8008\n"
        "	.hword 0x8013\n"
        "	.hword 0x3102\n"
        "	.hword 0x8830\n"
        "	.hword 0x8008\n"
        "	.hword 0x2002\n"
        "	.hword 0x27AB\n"
        "	.hword 0x00FF\n"
        "	.hword 0x446F\n"
        "	.hword 0x683F\n"
        "	.hword 0x6038\n"
        "	.hword 0xE140\n"
        "	.hword 0xFEFF\n"
        "	.hword 0x0000\n"
        "	.hword 0x4650\n"
        "	.hword 0x30EC\n"
        "	.hword 0x8801\n"
        "	.hword 0x46D0\n"
        "	.hword 0x2087\n"
        "	.hword 0x00C0\n"
        "	.hword 0x4468\n"
        "	.hword 0x4A13\n"
        "	.hword 0x2302\n"
        "	.hword 0xF72E\n"
        "	.hword 0xFB71\n"
        "	.hword 0x2087\n"
        "	.hword 0x00C0\n"
        "	.hword 0x4468\n"
        "	.hword 0x4910\n"
        "	.hword 0x4469\n"
        "	.hword 0x6008\n"
        "	.hword 0x4652\n"
        "	.hword 0x6851\n"
        "	.hword 0x68D0\n"
        "	.hword 0x4281\n"
        "	.hword 0xD01B\n"
        "	.hword 0x2900\n"
        "	.hword 0xD007\n"
        "	.hword 0x1C08\n"
        "	.hword 0x2187\n"
        "	.hword 0x00C9\n"
        "	.hword 0x4469\n"
        "	.hword 0xC938\n"
        "	.hword 0xC038\n"
        "	.hword 0x6809\n"
        "	.hword 0x6001\n"
        "	.hword 0x4656\n"
        "	.hword 0x6870\n"
        "	.hword 0x3010\n"
        "	.hword 0x6070\n"
        "	.hword 0x3662\n"
        "	.hword 0x27A9\n"
        "	.hword 0x00FF\n"
        "	.hword 0x446F\n"
        "	.hword 0x603E\n"
        "	.hword 0x20EE\n"
        "	.hword 0x4450\n"
        "	.hword 0x4681\n"
        "	.hword 0xE09D\n"
        "	.hword 0x0000\n"
        "	.hword 0x0002\n"
        "	.hword 0x0500\n"
        "	.hword 0x0514\n"
        "	.hword 0x0000\n"
        "	.hword 0x4A15\n"
        "	.hword 0x446A\n"
        "	.hword 0x6011\n"
        "	.hword 0x2001\n"
        "	.hword 0x4914\n"
        "	.hword 0x4469\n"
        "	.hword 0x6008\n"
        "	.hword 0x4653\n"
        "	.hword 0x6818\n"
        "	.hword 0x6814\n"
        "	.hword 0x1A20\n"
        "	.hword 0x1104\n"
        "	.hword 0x2097\n"
        "	.hword 0x00C0\n"
        "	.hword 0x4468\n"
        "	.hword 0x6004\n"
        "	.hword 0x4A0E\n"
        "	.hword 0x446A\n"
        "	.hword 0x6808\n"
        "	.hword 0x2197\n"
        "	.hword 0x00C9\n"
        "	.hword 0x4469\n"
        "	.hword 0x4284\n"
        "	.hword 0xD200\n"
        "	.hword 0x1C11\n"
        "	.hword 0x6808\n"
        "	.hword 0x1820\n"
        "	.hword 0x2800\n"
        "	.hword 0xD012\n"
        "	.hword 0x0104\n"
        "	.hword 0x1C20\n"
        "	.hword 0xF7F5\n"
        "	.hword 0xFC75\n"
        "	.hword 0x25B1\n"
        "	.hword 0x00ED\n"
        "	.hword 0x446D\n"
        "	.hword 0x602C\n"
        "	.hword 0x2800\n"
        "	.hword 0xD10D\n"
        "	.hword 0x1C20\n"
        "	.hword 0xF7F9\n"
        "	.hword 0xF950\n"
        "	.hword 0xE009\n"
        "	.hword 0x0000\n"
        "	.hword 0x0584\n"
        "	.hword 0x0000\n"
        "	.hword 0x04BC\n"
        "	.hword 0x0000\n"
        "	.hword 0x2000\n"
        "	.hword 0x26B1\n"
        "	.hword 0x00F6\n"
        "	.hword 0x446E\n"
        "	.hword 0x6030\n"
        "	.hword 0x1C05\n"
        "	.hword 0x1C2C\n"
        "	.hword 0x4647\n"
        "	.hword 0x683A\n"
        "	.hword 0x1C23\n"
        "	.hword 0x4650\n"
        "	.hword 0x3062\n"
        "	.hword 0x21A9\n"
        "	.hword 0x00C9\n"
        "	.hword 0x4469\n"
        "	.hword 0x6008\n"
        "	.hword 0x25EE\n"
        "	.hword 0x4455\n"
        "	.hword 0x46A9\n"
        "	.hword 0x4E13\n"
        "	.hword 0x446E\n"
        "	.hword 0x6836\n"
        "	.hword 0x42B2\n"
        "	.hword 0xD00E\n"
        "	.hword 0x2B00\n"
        "	.hword 0xD005\n"
        "	.hword 0x1C18\n"
        "	.hword 0x1C11\n"
        "	.hword 0xC9E0\n"
        "	.hword 0xC0E0\n"
        "	.hword 0x6809\n"
        "	.hword 0x6001\n"
        "	.hword 0x3210\n"
        "	.hword 0x3310\n"
        "	.hword 0x4F0B\n"
        "	.hword 0x446F\n"
        "	.hword 0x683F\n"
        "	.hword 0x42BA\n"
        "	.hword 0xD1F0\n"
        "	.hword 0x1C1D\n"
        "	.hword 0x4809\n"
        "	.hword 0x4468\n"
        "	.hword 0x6800\n"
        "	.hword 0x2801\n"
        "	.hword 0xD112\n"
        "	.hword 0x2D00\n"
        "	.hword 0xD007\n"
        "	.hword 0x1C28\n"
        "	.hword 0x4A06\n"
        "	.hword 0x446A\n"
        "	.hword 0x6811\n"
        "	.hword 0xC9C8\n"
        "	.hword 0xC0C8\n"
        "	.hword 0x6809\n"
        "	.hword 0x6001\n"
        "	.hword 0x3510\n"
        "	.hword 0xE019\n"
        "	.hword 0x0000\n"
        "	.hword 0x0584\n"
        "	.hword 0x0000\n"
        "	.hword 0x04BC\n"
        "	.hword 0x0000\n"
        "	.hword 0x0514\n"
        "	.hword 0x0000\n"
        "	.hword 0x1C03\n"
        "	.hword 0x1C2A\n"
        "	.hword 0x2B00\n"
        "	.hword 0xD00D\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD007\n"
        "	.hword 0x1C10\n"
        "	.hword 0x4D23\n"
        "	.hword 0x446D\n"
        "	.hword 0x6829\n"
        "	.hword 0xC9E0\n"
        "	.hword 0xC0E0\n"
        "	.hword 0x6809\n"
        "	.hword 0x6001\n"
        "	.hword 0x3B01\n"
        "	.hword 0x3210\n"
        "	.hword 0x2B00\n"
        "	.hword 0xD1F1\n"
        "	.hword 0x1C15\n"
        "	.hword 0x4646\n"
        "	.hword 0x6872\n"
        "	.hword 0x6830\n"
        "	.hword 0x1C01\n"
        "	.hword 0x4290\n"
        "	.hword 0xD002\n"
        "	.hword 0x3110\n"
        "	.hword 0x4291\n"
        "	.hword 0xD1FC\n"
        "	.hword 0x2800\n"
        "	.hword 0xD001\n"
        "	.hword 0xF7F5\n"
        "	.hword 0xFC3A\n"
        "	.hword 0x27B1\n"
        "	.hword 0x00FF\n"
        "	.hword 0x446F\n"
        "	.hword 0x683F\n"
        "	.hword 0x1938\n"
        "	.hword 0x4641\n"
        "	.hword 0x600C\n"
        "	.hword 0x604D\n"
        "	.hword 0x60C8\n"
        "	.hword 0x4913\n"
        "	.hword 0x22AF\n"
        "	.hword 0x00D2\n"
        "	.hword 0x446A\n"
        "	.hword 0x6812\n"
        "	.hword 0x7810\n"
        "	.hword 0x1840\n"
        "	.hword 0x7800\n"
        "	.hword 0x464B\n"
        "	.hword 0x7018\n"
        "	.hword 0x2287\n"
        "	.hword 0x00D2\n"
        "	.hword 0x446A\n"
        "	.hword 0x7818\n"
        "	.hword 0x2480\n"
        "	.hword 0x0164\n"
        "	.hword 0x1C21\n"
        "	.hword 0x1840\n"
        "	.hword 0x8010\n"
        "	.hword 0x2587\n"
        "	.hword 0x00ED\n"
        "	.hword 0x446D\n"
        "	.hword 0x8828\n"
        "	.hword 0x26A9\n"
        "	.hword 0x00F6\n"
        "	.hword 0x446E\n"
        "	.hword 0x6836\n"
        "	.hword 0x8030\n"
        "	.hword 0x27AF\n"
        "	.hword 0x00FF\n"
        "	.hword 0x446F\n"
        "	.hword 0x683F\n"
        "	.hword 0x7838\n"
        "	.hword 0x3001\n"
        "	.hword 0x7038\n"
        "	.hword 0xE04F\n"
        "	.hword 0x0000\n"
        "	.hword 0x0514\n"
        "	.hword 0x0000\n"
        "	.hword 0x05D9\n"
        "	.hword 0x080F\n"
        "	.hword 0x22AC\n"
        "	.hword 0x00D2\n"
        "	.hword 0x446A\n"
        "	.hword 0x6812\n"
        "	.hword 0x6811\n"
        "	.hword 0x2000\n"
        "	.hword 0x6010\n"
        "	.hword 0x4C02\n"
        "	.hword 0x446C\n"
        "	.hword 0x6824\n"
        "	.hword 0x6021\n"
        "	.hword 0xE331\n"
        "	.hword 0x04DC\n"
        "	.hword 0x0000\n"
        "	.hword 0x4D0A\n"
        "	.hword 0x446D\n"
        "	.hword 0x682D\n"
        "	.hword 0x6828\n"
        "	.hword 0x6801\n"
        "	.hword 0x6C0A\n"
        "	.hword 0x215D\n"
        "	.hword 0xF7F8\n"
        "	.hword 0xFF4B\n"
        "	.hword 0xF75D\n"
        "	.hword 0xFEC5\n"
        "	.hword 0x0600\n"
        "	.hword 0x2800\n"
        "	.hword 0xD12E\n"
        "	.hword 0x2002\n"
        "	.hword 0x26AB\n"
        "	.hword 0x00F6\n"
        "	.hword 0x446E\n"
        "	.hword 0x6836\n"
        "	.hword 0x6030\n"
        "	.hword 0xE027\n"
        "	.hword 0x0000\n"
        "	.hword 0x0564\n"
        "	.hword 0x0000\n"
        "	.hword 0x4F0A\n"
        "	.hword 0x446F\n"
        "	.hword 0x683F\n"
        "	.hword 0x6838\n"
        "	.hword 0x6801\n"
        "	.hword 0x6C0A\n"
        "	.hword 0x215D\n"
        "	.hword 0xF7F8\n"
        "	.hword 0xFF33\n"
        "	.hword 0xF75D\n"
        "	.hword 0xFE93\n"
        "	.hword 0x0600\n"
        "	.hword 0x2800\n"
        "	.hword 0xD016\n"
        "	.hword 0x2002\n"
        "	.hword 0x21AB\n"
        "	.hword 0x00C9\n"
        "	.hword 0x4469\n"
        "	.hword 0x6809\n"
        "	.hword 0x6008\n"
        "	.hword 0xE00F\n"
        "	.hword 0x0000\n"
        "	.hword 0x0564\n"
        "	.hword 0x0000\n"
        "	.hword 0x4650\n"
        "	.hword 0x30BC\n"
        "	.hword 0xF72E\n"
        "	.hword 0xF8FE\n"
        "	.hword 0x0600\n"
        "	.hword 0x2800\n"
        "	.hword 0xD105\n"
        "	.hword 0x2002\n"
        "	.hword 0x22AB\n"
        "	.hword 0x00D2\n"
        "	.hword 0x446A\n"
        "	.hword 0x6812\n"
        "	.hword 0x6010\n"
        "_L_080DAAE6:\n"
        "	.hword 0x4B26\n"
        "	add r3, sp, r3\n"
        "	ldr r3, [r3]\n"
        "	cmp r3, #0\n"
        "	bne _L_080DAB10\n"
        "	mov r1, #0x98\n"
        "	lsl r1, r1, #3\n"
        "	add r1, sp, r1\n"
        "	mov r0, #0x98\n"
        "	lsl r0, r0, #3\n"
        "	add r0, sp, r0\n"
        "	add r4, sp, #0x10\n"
        "	str r4, [r0]\n"
        "	.hword 0x4D20\n"
        "	add r5, sp, r5\n"
        "	ldr r5, [r5]\n"
        "	ldr r0, [r5]\n"
        "	ldr r2, [r0]\n"
        "	ldr r2, [r2, #0xc]\n"
        "	bl func_080D3914\n"
        "_L_080DAB10:\n"
        "	mov r0, sl\n"
        "	add r0, #0xe8\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	bne _L_080DAB1C\n"
        "	b _L_080DACC0\n"
        "_L_080DAB1C:\n"
        "	mov r0, sl\n"
        "	add r0, #0xe9\n"
        "	ldrb r0, [r0]\n"
        "	.hword 0x4919\n"
        "	cmp r0, #0\n"
        "	beq _L_080DAB2A\n"
        "	mov r1, #0\n"
        "_L_080DAB2A:\n"
        "	mov r8, sl\n"
        "	mov r0, #0x87\n"
        "	lsl r0, r0, #3\n"
        "	add r0, sp, r0\n"
        "	mov r2, #0xa0\n"
        "	lsl r2, r2, #0x13\n"
        "	mov r3, #2\n"
        "	bl func_08008F60\n"
        "	mov r6, #0x87\n"
        "	lsl r6, r6, #3\n"
        "	add r6, sp, r6\n"
        "	mov r7, #0xa3\n"
        "	lsl r7, r7, #3\n"
        "	add r7, sp, r7\n"
        "	str r6, [r7]\n"
        "	mov r0, sl\n"
        "	ldr r1, [r0, #4]\n"
        "	ldr r0, [r0, #0xc]\n"
        "	cmp r1, r0\n"
        "	beq _L_080DAB90\n"
        "	cmp r1, #0\n"
        "	beq _L_080DAB6A\n"
        "	add r0, r1, #0\n"
        "	mov r2, #0xa3\n"
        "	lsl r2, r2, #3\n"
        "	add r2, sp, r2\n"
        "	ldr r1, [r2]\n"
        "	ldm r1!, {r3, r4, r5}\n"
        "	stm r0!, {r3, r4, r5}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_080DAB6A:\n"
        "	mov r6, sl\n"
        "	ldr r0, [r6, #4]\n"
        "	add r0, #0x10\n"
        "	str r0, [r6, #4]\n"
        "	add r6, #0xb4\n"
        "	mov r7, sl\n"
        "	add r7, #0xea\n"
        "	.hword 0x4804\n"
        "	add r0, sp, r0\n"
        "	str r7, [r0]\n"
        "	b _L_080DACF8\n"
        ".Lpool_080DAB80:\n"
        "	.word 0x000004F4\n"
        ".Lpool_080DAB84:\n"
        "	.word 0x00000564\n"
        ".Lpool_080DAB88:\n"
        "	.word 0x0000FFFF\n"
        ".Lpool_080DAB8C:\n"
        "	.word 0x00000574\n"
        "_L_080DAB90:\n"
        "	mov r2, #0xb1\n"
        "	lsl r2, r2, #3\n"
        "	add r2, sp, r2\n"
        "	str r1, [r2]\n"
        "	mov r0, #1\n"
        "	mov r1, #0x99\n"
        "	lsl r1, r1, #3\n"
        "	add r1, sp, r1\n"
        "	str r0, [r1]\n"
        "	mov r3, sl\n"
        "	ldr r0, [r3]\n"
        "	ldr r4, [r2]\n"
        "	sub r0, r4, r0\n"
        "	asr r4, r0, #4\n"
        "	.hword 0x480D\n"
        "	add r0, sp, r0\n"
        "	str r4, [r0]\n"
        "	mov r2, #0x99\n"
        "	lsl r2, r2, #3\n"
        "	add r2, sp, r2\n"
        "	ldr r0, [r1]\n"
        "	.hword 0x490A\n"
        "	add r1, sp, r1\n"
        "	cmp r4, r0\n"
        "	bhs _L_080DABC4\n"
        "	add r1, r2, #0\n"
        "_L_080DABC4:\n"
        "	ldr r0, [r1]\n"
        "	add r0, r4, r0\n"
        "	cmp r0, #0\n"
        "	beq _L_080DABE8\n"
        "	lsl r4, r0, #4\n"
        "	add r0, r4, #0\n"
        "	bl func_080D01F8\n"
        "	mov sb, r4\n"
        "	cmp r0, #0\n"
        "	bne _L_080DABEC\n"
        "	mov r0, sb\n"
        "	bl func_080D3BC0\n"
        "	b _L_080DABEC\n"
        "	.hword 0x0000\n"
        ".Lpool_080DABE4:\n"
        "	.word 0x000004C4\n"
        "_L_080DABE8:\n"
        "	mov r0, #0\n"
        "	mov sb, r0\n"
        "_L_080DABEC:\n"
        "	add r5, r0, #0\n"
        "	.hword 0x4E1B\n"
        "	add r6, sp, r6\n"
        "	str r5, [r6]\n"
        "	mov r7, r8\n"
        "	ldr r2, [r7]\n"
        "	add r3, r5, #0\n"
        "	mov r6, sl\n"
        "	add r6, #0xb4\n"
        "	mov r0, sl\n"
        "	add r0, #0xea\n"
        "	.hword 0x4917\n"
        "	add r1, sp, r1\n"
        "	str r0, [r1]\n"
        "	mov r4, #0xb1\n"
        "	lsl r4, r4, #3\n"
        "	add r4, sp, r4\n"
        "	ldr r4, [r4]\n"
        "	cmp r2, r4\n"
        "	beq _L_080DAC34\n"
        "_L_080DAC14:\n"
        "	cmp r3, #0\n"
        "	beq _L_080DAC24\n"
        "	add r0, r3, #0\n"
        "	add r1, r2, #0\n"
        "	ldm r1!, {r4, r5, r7}\n"
        "	stm r0!, {r4, r5, r7}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_080DAC24:\n"
        "	add r2, #0x10\n"
        "	add r3, #0x10\n"
        "	mov r5, #0xb1\n"
        "	lsl r5, r5, #3\n"
        "	add r5, sp, r5\n"
        "	ldr r5, [r5]\n"
        "	cmp r2, r5\n"
        "	bne _L_080DAC14\n"
        "_L_080DAC34:\n"
        "	add r5, r3, #0\n"
        "	mov r0, #0x99\n"
        "	lsl r0, r0, #3\n"
        "	add r0, sp, r0\n"
        "	ldr r0, [r0]\n"
        "	cmp r0, #1\n"
        "	bne _L_080DAC64\n"
        "	cmp r5, #0\n"
        "	beq _L_080DAC58\n"
        "	add r0, r5, #0\n"
        "	mov r7, #0xa3\n"
        "	lsl r7, r7, #3\n"
        "	add r7, sp, r7\n"
        "	ldr r1, [r7]\n"
        "	ldm r1!, {r2, r3, r4}\n"
        "	stm r0!, {r2, r3, r4}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_080DAC58:\n"
        "	add r5, #0x10\n"
        "	b _L_080DAC8C\n"
        ".Lpool_080DAC5C:\n"
        "	.word 0x0000058C\n"
        ".Lpool_080DAC60:\n"
        "	.word 0x00000574\n"
        "_L_080DAC64:\n"
        "	add r3, r0, #0\n"
        "	add r2, r5, #0\n"
        "	cmp r3, #0\n"
        "	beq _L_080DAC8A\n"
        "_L_080DAC6C:\n"
        "	cmp r2, #0\n"
        "	beq _L_080DAC82\n"
        "	add r0, r2, #0\n"
        "	mov r5, #0xa3\n"
        "	lsl r5, r5, #3\n"
        "	add r5, sp, r5\n"
        "	ldr r1, [r5]\n"
        "	ldm r1!, {r4, r5, r7}\n"
        "	stm r0!, {r4, r5, r7}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_080DAC82:\n"
        "	sub r3, #1\n"
        "	add r2, #0x10\n"
        "	cmp r3, #0\n"
        "	bne _L_080DAC6C\n"
        "_L_080DAC8A:\n"
        "	add r5, r2, #0\n"
        "_L_080DAC8C:\n"
        "	mov r7, r8\n"
        "	ldr r2, [r7, #4]\n"
        "	ldr r0, [r7]\n"
        "	add r1, r0, #0\n"
        "	cmp r0, r2\n"
        "	beq _L_080DAC9E\n"
        "_L_080DAC98:\n"
        "	add r1, #0x10\n"
        "	cmp r1, r2\n"
        "	bne _L_080DAC98\n"
        "_L_080DAC9E:\n"
        "	cmp r0, #0\n"
        "	beq _L_080DACA6\n"
        "	bl func_080D0260\n"
        "_L_080DACA6:\n"
        "	.hword 0x4905\n"
        "	add r1, sp, r1\n"
        "	ldr r0, [r1]\n"
        "	add r0, sb\n"
        "	ldr r2, [r1]\n"
        "	mov r3, r8\n"
        "	str r2, [r3]\n"
        "	str r5, [r3, #4]\n"
        "	str r0, [r3, #0xc]\n"
        "	b _L_080DACF8\n"
        "	.hword 0x0000\n"
        ".Lpool_080DACBC:\n"
        "	.word 0x0000058C\n"
        "_L_080DACC0:\n"
        "	mov r0, sl\n"
        "	add r0, #0x6c\n"
        "	mov r1, #0x87\n"
        "	lsl r1, r1, #3\n"
        "	add r1, sp, r1\n"
        "	mov r4, sl\n"
        "	str r4, [r1]\n"
        "	.hword 0x4D5B\n"
        "	add r5, sp, r5\n"
        "	ldr r5, [r5]\n"
        "	str r5, [r1, #4]\n"
        "	add r6, sp, #0x34\n"
        "	str r6, [r1, #8]\n"
        "	str r0, [r1, #0xc]\n"
        "	.hword 0x4F58\n"
        "	add r7, sp, r7\n"
        "	ldr r7, [r7]\n"
        "	ldr r0, [r7]\n"
        "	ldr r2, [r0]\n"
        "	ldr r2, [r2, #0x10]\n"
        "	bl func_080D3914\n"
        "	mov r6, sl\n"
        "	add r6, #0xb4\n"
        "	add r4, #0xea\n"
        "	.hword 0x4854\n"
        "	add r0, sp, r0\n"
        "	str r4, [r0]\n"
        "_L_080DACF8:\n"
        "	ldr r1, [r6]\n"
        "	mov r8, r1\n"
        "	cmp r1, #0\n"
        "	bne _L_080DAD02\n"
        "	b _L_080DAE90\n"
        "_L_080DAD02:\n"
        "	mov r2, #0xaa\n"
        "	lsl r2, r2, #3\n"
        "	add r2, sp, r2\n"
        "	ldr r2, [r2]\n"
        "	ldr r5, [r2]\n"
        "	mov r3, #0x10\n"
        "	add r3, r3, r5\n"
        "	mov sb, r3\n"
        "	.hword 0x4F4D\n"
        "	add r7, sp, r7\n"
        "	ldr r0, [r7]\n"
        "	lsl r0, r0, #5\n"
        "	ldr r1, [r5, #0x10]\n"
        "	lsl r4, r1, #5\n"
        "	lsr r0, r0, #0x1a\n"
        "	lsr r1, r4, #0x1a\n"
        "	cmp r0, r1\n"
        "	beq _L_080DAE02\n"
        "	add r0, r1, #0\n"
        "	mov r1, #0xa\n"
        "	bl func_080D0F4E\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_080DADEE\n"
        "	lsr r0, r4, #0x1a\n"
        "	mov r1, #0xa\n"
        "	bl func_080D0EDA\n"
        "	lsl r0, r0, #0x18\n"
        "	lsr r0, r0, #0x18\n"
        "	lsl r1, r0, #2\n"
        "	add r1, r1, r0\n"
        "	lsl r1, r1, #1\n"
        "	mov r0, r8\n"
        "	add r0, #8\n"
        "	bl func_0803D340\n"
        "	ldr r1, [r7]\n"
        "	lsl r1, r1, #0xb\n"
        "	ldr r0, [r5, #0x10]\n"
        "	lsl r2, r0, #0xb\n"
        "	lsr r1, r1, #0x1b\n"
        "	lsr r0, r2, #0x1b\n"
        "	cmp r1, r0\n"
        "	beq _L_080DADEE\n"
        "	ldr r0, [r6]\n"
        "	lsr r1, r2, #0x1b\n"
        "	add r0, #8\n"
        "	bl func_0803D240\n"
        "	.hword 0x4F37\n"
        "	add r7, sp, r7\n"
        "	ldrb r1, [r7, #1]\n"
        "	lsl r1, r1, #0x19\n"
        "	lsr r1, r1, #0x1b\n"
        "	add r1, #1\n"
        "	ldrb r3, [r5, #0x11]\n"
        "	lsl r0, r3, #0x19\n"
        "	lsr r0, r0, #0x1b\n"
        "	add r4, r0, #1\n"
        "	cmp r1, r4\n"
        "	beq _L_080DADEE\n"
        "	ldr r0, [r6]\n"
        "	mov r8, r0\n"
        "	ldrb r2, [r5, #0x10]\n"
        "	lsl r2, r2, #0x1d\n"
        "	lsr r2, r2, #0x1d\n"
        "	lsl r0, r3, #0x1e\n"
        "	lsr r0, r0, #0x1e\n"
        "	add r2, #6\n"
        "	lsl r1, r0, #4\n"
        "	sub r1, r1, r0\n"
        "	lsl r1, r1, #1\n"
        "	lsl r0, r2, #4\n"
        "	sub r0, r0, r2\n"
        "	lsl r0, r0, #3\n"
        "	add r1, r1, r0\n"
        "	add r1, r1, r4\n"
        "	sub r1, #1\n"
        "	cmp r1, #6\n"
        "	bls _L_080DADB0\n"
        "	add r0, r1, #0\n"
        "	mov r1, #7\n"
        "	bl func_080D0F4E\n"
        "	add r1, r0, #0\n"
        "_L_080DADB0:\n"
        "	mov r0, #7\n"
        "	and r1, r0\n"
        "	mov r2, #8\n"
        "	neg r2, r2\n"
        "	.hword 0x4B24\n"
        "	add r3, sp, r3\n"
        "	ldrb r3, [r3]\n"
        "	and r2, r3\n"
        "	orr r2, r1\n"
        "	.hword 0x4822\n"
        "	add r0, sp, r0\n"
        "	strb r2, [r0]\n"
        "	lsl r2, r2, #0x1d\n"
        "	lsr r2, r2, #0x1d\n"
        "	mov r0, r8\n"
        "	add r0, #8\n"
        "	add r1, r4, #0\n"
        "	bl func_0803D0F0\n"
        "	ldrb r1, [r7, #1]\n"
        "	lsl r1, r1, #0x1e\n"
        "	ldrb r0, [r5, #0x11]\n"
        "	lsl r0, r0, #0x1e\n"
        "	lsr r2, r0, #0x1e\n"
        "	cmp r1, r0\n"
        "	beq _L_080DADEE\n"
        "	ldr r0, [r6]\n"
        "	add r0, #8\n"
        "	add r1, r2, #0\n"
        "	bl func_0803D080\n"
        "_L_080DADEE:\n"
        "	ldr r0, [r6]\n"
        "	mov r1, sb\n"
        "	ldr r2, [r1]\n"
        "	lsl r2, r2, #5\n"
        "	lsr r2, r2, #0x1a\n"
        "	mov r1, #1\n"
        "	and r1, r2\n"
        "	add r0, #8\n"
        "	bl func_0803D2E8\n"
        "_L_080DAE02:\n"
        "	ldr r0, [r6]\n"
        "	mov r2, #0xaa\n"
        "	lsl r2, r2, #3\n"
        "	add r2, sp, r2\n"
        "	ldr r2, [r2]\n"
        "	ldr r1, [r2]\n"
        "	ldr r1, [r1, #8]\n"
        "	add r0, #8\n"
        "	bl func_0803D3A0\n"
        "	mov r3, #0xaa\n"
        "	lsl r3, r3, #3\n"
        "	add r3, sp, r3\n"
        "	ldr r3, [r3]\n"
        "	ldr r0, [r3]\n"
        "	.hword 0x4C0B\n"
        "	add r5, r0, r4\n"
        "	add r0, r5, #0\n"
        "	bl func_0800DC34\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_080DAE54\n"
        "	ldr r0, [r6]\n"
        "	add r0, #8\n"
        "	bl func_0803D440\n"
        "	b _L_080DAE90\n"
        "	.hword 0x0000\n"
        ".Lpool_080DAE3C:\n"
        "	.word 0x00000544\n"
        ".Lpool_080DAE40:\n"
        "	.word 0x00000564\n"
        ".Lpool_080DAE44:\n"
        "	.word 0x00000574\n"
        ".Lpool_080DAE48:\n"
        "	.word 0x000004CC\n"
        ".Lpool_080DAE4C:\n"
        "	.word 0x0000051C\n"
        ".Lpool_080DAE50:\n"
        "	.word 0x00001C34\n"
        "_L_080DAE54:\n"
        "	mov r7, #0xaa\n"
        "	lsl r7, r7, #3\n"
        "	add r7, sp, r7\n"
        "	ldr r7, [r7]\n"
        "	ldr r4, [r7]\n"
        "	.hword 0x4851\n"
        "	add r4, r4, r0\n"
        "	add r0, r5, #0\n"
        "	bl func_0800DC10\n"
        "	add r1, r0, #0\n"
        "	add r0, r4, #0\n"
        "	bl func_0800E550\n"
        "	mov r1, #0x9a\n"
        "	lsl r1, r1, #3\n"
        "	add r1, sp, r1\n"
        "	strb r0, [r1]\n"
        "	mov r0, #0x9a\n"
        "	lsl r0, r0, #3\n"
        "	add r0, sp, r0\n"
        "	bl func_0800DB60\n"
        "	add r1, r0, #0\n"
        "	lsl r1, r1, #0x10\n"
        "	lsr r1, r1, #0x10\n"
        "	ldr r0, [r6]\n"
        "	add r0, #8\n"
        "	bl func_0803D404\n"
        "_L_080DAE90:\n"
        "	.hword 0x4945\n"
        "	add r1, sp, r1\n"
        "	ldr r1, [r1]\n"
        "	ldrb r0, [r1]\n"
        "	cmp r0, #0\n"
        "	bne _L_080DAEA8\n"
        "	.hword 0x4A43\n"
        "	add r2, sp, r2\n"
        "	ldr r2, [r2]\n"
        "	ldr r0, [r2]\n"
        "	bl func_080093AC\n"
        "_L_080DAEA8:\n"
        "	mov r3, #0xab\n"
        "	lsl r3, r3, #3\n"
        "	add r3, sp, r3\n"
        "	ldr r3, [r3]\n"
        "	ldr r0, [r3]\n"
        "	cmp r0, #0\n"
        "	beq _L_080DAEB8\n"
        "	b _L_080DB0BC\n"
        "_L_080DAEB8:\n"
        "	.hword 0x483D\n"
        "	ldr r1, [r0]\n"
        "	mov r5, #0xde\n"
        "	lsl r5, r5, #2\n"
        "	add r4, r1, r5\n"
        "	mov r3, #0\n"
        "	mov r2, #0\n"
        "	ldr r0, [r4]\n"
        "	cmp r0, #0\n"
        "	bne _L_080DAECE\n"
        "	mov r2, #1\n"
        "_L_080DAECE:\n"
        "	cmp r2, #0\n"
        "	beq _L_080DAEFC\n"
        "	mov r6, #0xe3\n"
        "	lsl r6, r6, #2\n"
        "	add r0, r1, r6\n"
        "	mov r2, #0\n"
        "	ldr r0, [r0]\n"
        "	cmp r0, #0\n"
        "	bne _L_080DAEE2\n"
        "	mov r2, #1\n"
        "_L_080DAEE2:\n"
        "	cmp r2, #0\n"
        "	beq _L_080DAEFC\n"
        "	mov r7, #0x9a\n"
        "	lsl r7, r7, #3\n"
        "	add r0, r1, r7\n"
        "	mov r1, #0\n"
        "	ldr r0, [r0]\n"
        "	cmp r0, #0\n"
        "	bne _L_080DAEF6\n"
        "	mov r1, #1\n"
        "_L_080DAEF6:\n"
        "	cmp r1, #0\n"
        "	beq _L_080DAEFC\n"
        "	mov r3, #1\n"
        "_L_080DAEFC:\n"
        "	cmp r3, #0\n"
        "	beq _L_080DAF02\n"
        "	b _L_080DB0BC\n"
        "_L_080DAF02:\n"
        "	.hword 0x492A\n"
        "	add r1, sp, r1\n"
        "	ldr r1, [r1]\n"
        "	ldr r0, [r1]\n"
        "	bl func_080094A4\n"
        "	lsl r0, r0, #0x10\n"
        "	asr r0, r0, #0x10\n"
        "	neg r1, r0\n"
        "	orr r1, r0\n"
        "	lsr r5, r1, #0x1f\n"
        "	cmp r5, #0\n"
        "	beq _L_080DAF1E\n"
        "	b _L_080DB0BC\n"
        "_L_080DAF1E:\n"
        "	.hword 0x4A25\n"
        "	add r2, sp, r2\n"
        "	ldr r2, [r2]\n"
        "	ldr r0, [r2]\n"
        "	ldr r1, [r0]\n"
        "	ldr r2, [r1, #0x40]\n"
        "	mov r1, #0\n"
        "	bl func_080D3914\n"
        "	add r2, r0, #0\n"
        "	cmp r2, #0\n"
        "	beq _L_080DAF4A\n"
        "	ldr r0, [r2, #0x14]\n"
        "	add r0, #0x98\n"
        "	ldr r1, [r0]\n"
        "	add r0, r2, #0\n"
        "	bl func_080D3910\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_080DAF4A\n"
        "	b _L_080DB0BC\n"
        "_L_080DAF4A:\n"
        "	mov r1, #0\n"
        "	ldr r0, [r4]\n"
        "	cmp r0, #0\n"
        "	bne _L_080DAF54\n"
        "	mov r1, #1\n"
        "_L_080DAF54:\n"
        "	cmp r1, #0\n"
        "	bne _L_080DAFBC\n"
        "	add r6, r4, #4\n"
        "	ldr r1, [r4, #4]\n"
        "	ldr r2, [r4, #8]\n"
        "	mov r3, #0xa4\n"
        "	lsl r3, r3, #3\n"
        "	add r3, sp, r3\n"
        "	str r1, [r3]\n"
        "	str r2, [r3, #4]\n"
        "	.hword 0x4B13\n"
        "	add r3, sp, r3\n"
        "	cmp r0, #0\n"
        "	beq _L_080DAF98\n"
        "	lsl r0, r0, #3\n"
        "	add r0, #4\n"
        "	add r0, r4, r0\n"
        "	add r1, r4, #0\n"
        "	add r1, #0xc\n"
        "	cmp r1, r0\n"
        "	beq _L_080DAF92\n"
        "	add r5, r1, #0\n"
        "	sub r0, r0, r5\n"
        "	asr r2, r0, #3\n"
        "	cmp r2, #0\n"
        "	ble _L_080DAF92\n"
        "_L_080DAF88:\n"
        "	ldm r5!, {r0, r1}\n"
        "	stm r6!, {r0, r1}\n"
        "	sub r2, #1\n"
        "	cmp r2, #0\n"
        "	bgt _L_080DAF88\n"
        "_L_080DAF92:\n"
        "	ldr r0, [r4]\n"
        "	sub r0, #1\n"
        "	str r0, [r4]\n"
        "_L_080DAF98:\n"
        "	.hword 0x4807\n"
        "	add r0, sp, r0\n"
        "	mov r5, #0xa4\n"
        "	lsl r5, r5, #3\n"
        "	b _L_080DB01A\n"
        "	.hword 0x0000\n"
        ".Lpool_080DAFA4:\n"
        "	.word 0x00001BD8\n"
        ".Lpool_080DAFA8:\n"
        "	.word 0x00000574\n"
        ".Lpool_080DAFAC:\n"
        "	.word 0x0000055C\n"
        ".Lpool_080DAFB0:\n"
        "	.word 0x0300040C\n"
        ".Lpool_080DAFB4:\n"
        "	.word 0x00000564\n"
        ".Lpool_080DAFB8:\n"
        "	.word 0x000004D4\n"
        "_L_080DAFBC:\n"
        "	add r7, r4, #0\n"
        "	add r7, #0x14\n"
        "	mov r1, #0\n"
        "	ldr r0, [r4, #0x14]\n"
        "	cmp r0, #0\n"
        "	bne _L_080DAFCA\n"
        "	mov r1, #1\n"
        "_L_080DAFCA:\n"
        "	cmp r1, #0\n"
        "	bne _L_080DB02C\n"
        "	add r6, r4, #0\n"
        "	add r6, #0x18\n"
        "	ldr r1, [r4, #0x18]\n"
        "	ldr r2, [r4, #0x1c]\n"
        "	mov r3, #0xa5\n"
        "	lsl r3, r3, #3\n"
        "	add r3, sp, r3\n"
        "	str r1, [r3]\n"
        "	str r2, [r3, #4]\n"
        "	add r5, r7, #0\n"
        "	.hword 0x4B11\n"
        "	add r3, sp, r3\n"
        "	cmp r0, #0\n"
        "	beq _L_080DB012\n"
        "	lsl r0, r0, #3\n"
        "	add r0, #4\n"
        "	add r1, r5, r0\n"
        "	add r0, r4, #0\n"
        "	add r0, #0x20\n"
        "	cmp r0, r1\n"
        "	beq _L_080DB00C\n"
        "	add r4, r0, #0\n"
        "	sub r0, r1, r4\n"
        "	asr r2, r0, #3\n"
        "	cmp r2, #0\n"
        "	ble _L_080DB00C\n"
        "_L_080DB002:\n"
        "	ldm r4!, {r0, r1}\n"
        "	stm r6!, {r0, r1}\n"
        "	sub r2, #1\n"
        "	cmp r2, #0\n"
        "	bgt _L_080DB002\n"
        "_L_080DB00C:\n"
        "	ldr r0, [r5]\n"
        "	sub r0, #1\n"
        "	str r0, [r5]\n"
        "_L_080DB012:\n"
        "	.hword 0x4805\n"
        "	add r0, sp, r0\n"
        "	mov r5, #0xa5\n"
        "	lsl r5, r5, #3\n"
        "_L_080DB01A:\n"
        "	add r5, sp, r5\n"
        "	ldr r4, [r5]\n"
        "	ldr r5, [r5, #4]\n"
        "	str r4, [r0]\n"
        "	str r5, [r0, #4]\n"
        "	b _L_080DB0AE\n"
        "	.hword 0x0000\n"
        ".Lpool_080DB028:\n"
        "	.word 0x000004D4\n"
        "_L_080DB02C:\n"
        "	mov r6, #0xac\n"
        "	lsl r6, r6, #1\n"
        "	add r7, r4, r6\n"
        "	mov r1, #0\n"
        "	ldr r0, [r7]\n"
        "	cmp r0, #0\n"
        "	bne _L_080DB03C\n"
        "	mov r1, #1\n"
        "_L_080DB03C:\n"
        "	cmp r1, #0\n"
        "	bne _L_080DB0A0\n"
        "	mov r1, #0xae\n"
        "	lsl r1, r1, #1\n"
        "	add r6, r4, r1\n"
        "	ldr r1, [r6]\n"
        "	ldr r2, [r6, #4]\n"
        "	mov r3, #0xa6\n"
        "	lsl r3, r3, #3\n"
        "	add r3, sp, r3\n"
        "	str r1, [r3]\n"
        "	str r2, [r3, #4]\n"
        "	add r5, r7, #0\n"
        "	.hword 0x4B11\n"
        "	add r3, sp, r3\n"
        "	cmp r0, #0\n"
        "	beq _L_080DB088\n"
        "	lsl r0, r0, #3\n"
        "	add r0, #4\n"
        "	add r1, r5, r0\n"
        "	mov r7, #0xb2\n"
        "	lsl r7, r7, #1\n"
        "	add r0, r4, r7\n"
        "	cmp r0, r1\n"
        "	beq _L_080DB082\n"
        "	add r4, r0, #0\n"
        "	sub r0, r1, r4\n"
        "	asr r2, r0, #3\n"
        "	cmp r2, #0\n"
        "	ble _L_080DB082\n"
        "_L_080DB078:\n"
        "	ldm r4!, {r0, r1}\n"
        "	stm r6!, {r0, r1}\n"
        "	sub r2, #1\n"
        "	cmp r2, #0\n"
        "	bgt _L_080DB078\n"
        "_L_080DB082:\n"
        "	ldr r0, [r5]\n"
        "	sub r0, #1\n"
        "	str r0, [r5]\n"
        "_L_080DB088:\n"
        "	.hword 0x4804\n"
        "	add r0, sp, r0\n"
        "	mov r2, #0xa6\n"
        "	lsl r2, r2, #3\n"
        "	add r2, sp, r2\n"
        "	ldr r1, [r2]\n"
        "	ldr r2, [r2, #4]\n"
        "	str r1, [r0]\n"
        "	str r2, [r0, #4]\n"
        "	b _L_080DB0AE\n"
        ".Lpool_080DB09C:\n"
        "	.word 0x000004D4\n"
        "_L_080DB0A0:\n"
        "	.hword 0x4909\n"
        "	add r1, sp, r1\n"
        "	.hword 0x4808\n"
        "	add r0, sp, r0\n"
        "	str r5, [r0]\n"
        "	str r5, [r1, #4]\n"
        "	add r3, r1, #0\n"
        "_L_080DB0AE:\n"
        "	.hword 0x4806\n"
        "	add r0, sp, r0\n"
        "	ldr r1, [r0]\n"
        "	ldr r2, [r3, #4]\n"
        "	mov r0, sl\n"
        "	bl func_080DC294\n"
        "_L_080DB0BC:\n"
        "	mov r0, sl\n"
        "	add r1, sp, #0x34\n"
        "	bl func_08011CD8\n"
        "	bl func_080D8FE8\n"
        "	lsl r4, r2, #0x13\n"
        "	lsl r0, r0, #0\n"
        "	.hword 0x4B06\n"
        "	add r3, sp, r3\n"
        "	ldr r0, [r3]\n"
        "	mov r3, #0xb2\n"
        "	lsl r3, r3, #3\n"
        "	add sp, r3\n"
        "	pop {r3, r4, r5}\n"
        "	mov r8, r3\n"
        "	mov sb, r4\n"
        "	mov sl, r5\n"
        "	pop {r4, r5, r6, r7}\n"
        "	pop {r1}\n"
        "	bx r1\n"
        "	.hword 0x0000\n"
        ".Lpool_080DB0E8:\n"
        "	.word 0x000004DC\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}
