/* Pending CFG->C Lift: bank_080E0000 (8 functions) */
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

/* 0x080E0908 (168B) | code_0803A8A4_7708_Ctor (orig: func_080E0908) | origin: pending_asm | domain: code_0803A8A4_7708 | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_080E0908 @ 0x080E0908 (168 bytes)
 * Role   : C++ Class Constructor / Polymorphic Method [vtable: 0x080E7708, 0x080E7714, 0x080E7728]
 * Fields : +0x00:u32(RW), +0x08:u32(RW)
 * Callees: func_080007EC, func_080086BC, func_08009324, func_0803EEC8, func_08050D0C, func_080D0260, func_080D3914
 * CFG Structure:
 *   L_080E0908: if (==) goto L_080E0930
 *   L_080E0930: if (==) goto L_080E0942
 *   L_080E0942: if (==) goto L_080E0954
 *   L_080E0954: if (==) goto L_080E096C
 *   L_080E096C: if (==) goto L_080E0984
 *   L_080E0984: call func_0803EEC8(); call func_080086BC(); call func_080007EC(); return
 * ========================================================================== */
extern void func_080007EC(void);
extern void func_080086BC(void);
extern void func_08009324(void);
extern void func_0803EEC8(void);
extern void func_08050D0C(void);
extern void func_080D0260(void);
extern void func_080D3914(void);
void func_080E0908(void) {

    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	add r5, r1, #0\n"
        "	ldr r0, =0x080E7708\n"
        "	str r0, [r4, #8]\n"
        "	mov r0, #0xd6\n"
        "	lsl r0, r0, #2\n"
        "	add r1, r4, r0\n"
        "	ldr r0, =0x080E7714\n"
        "	str r0, [r1]\n"
        "	ldr r0, =0x080E7728\n"
        "	str r0, [r4]\n"
        "	mov r1, #0xe2\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r4, r1\n"
        "	ldr r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E0930\n"
        "	bl func_080D0260\n"
        "_L_080E0930:\n"
        "	mov r1, #0xdc\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r4, r1\n"
        "	ldr r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E0942\n"
        "	mov r1, #3\n"
        "	bl func_08009324\n"
        "_L_080E0942:\n"
        "	mov r1, #0xdb\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r4, r1\n"
        "	ldr r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E0954\n"
        "	mov r1, #3\n"
        "	bl func_08050D0C\n"
        "_L_080E0954:\n"
        "	mov r1, #0xda\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r4, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E096C\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E096C:\n"
        "	mov r1, #0xd7\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r4, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E0984\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E0984:\n"
        "	add r0, r4, #0\n"
        "	add r0, #0xc\n"
        "	mov r1, #0\n"
        "	bl func_0803EEC8\n"
        "	add r0, r4, #4\n"
        "	mov r1, #0\n"
        "	bl func_080086BC\n"
        "	add r0, r4, #0\n"
        "	add r1, r5, #0\n"
        "	bl func_080007EC\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
}

/* 0x080E0A94 (420B) | SpriteAnimEngine_77D0_Dtor (orig: func_080E0A94) | origin: pending_asm | domain: SpriteAnimEngine_77D0 | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_080E0A94 @ 0x080E0A94 (420 bytes)
 * Role   : C++ Virtual Deleting Destructor ~Class(this, int __in_chrg) [vtable: 0x080E77D0]
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(W), +0x0C:u32(W), +0x10:u32(W), +0x14:u32(W), +0x38:u32(W), +0x50:u32(W)
 * Callees: func_080005D4, func_08000608, func_08007128, func_0800736C, func_08007874, func_080079E8, func_08007B54, func_08007C28, func_080098AC, func_0805E6CC
 * CFG Structure:
 *   L_080E0A94: call func_0805E6CC(); call func_08007128(); call func_0800736C(); call func_080005D4(); call func_08007874(); call func_08007B54()
 *   L_080E0B0C: if (!=) goto L_080E0B0C
 *   L_080E0B2A: call func_08007874(); if (!=) goto L_080E0B2A
 *   L_080E0B4C: if (!=) goto L_080E0B4C
 *   L_080E0B68: call func_08007C28(); call func_08007B54(); if (<= (u)) goto L_080E0B68
 *   L_080E0B98: call func_080005D4(); call func_08007874(); call func_08007B54(); call func_0805E824(); if (==) goto L_080E0C08
 *   L_080E0C08: if (<= (u)) goto L_080E0B98
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08000608(void);
extern void func_08007128(void);
extern void func_0800736C(void);
extern void func_08007874(void);
extern void func_080079E8(void);
extern void func_08007B54(void);
extern void func_08007C28(void);
extern void func_080098AC(void);
extern void func_0805E6CC(void);
extern void func_0805E824(void);
int func_080E0A94(void) {
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	ldr r1, =0x0871E7A8\n"
        "	bl func_0805E6CC\n"
        "	add r4, r7, #0\n"
        "	add r4, #0x30\n"
        "	add r0, r4, #0\n"
        "	bl func_08007128\n"
        "	add r0, r4, #0\n"
        "	bl func_0800736C\n"
        "	str r0, [r4, #4]\n"
        "	add r0, r7, #0\n"
        "	add r0, #0x38\n"
        "	mov r4, #0\n"
        "	str r4, [r7, #0x38]\n"
        "	str r4, [r0, #4]\n"
        "	ldr r6, =0x080E77D0\n"
        "	str r6, [r0, #8]\n"
        "	str r4, [r0, #0xc]\n"
        "	str r4, [r0, #0x10]\n"
        "	str r4, [r0, #0x14]\n"
        "	mov r0, #0x34\n"
        "	bl func_080005D4\n"
        "	add r5, r0, #0\n"
        "	bl func_08007874\n"
        "	add r0, r5, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007B54\n"
        "	str r0, [r5, #4]\n"
        "	add r0, r5, #0\n"
        "	add r0, #8\n"
        "	str r4, [r5, #8]\n"
        "	str r4, [r0, #4]\n"
        "	str r6, [r0, #8]\n"
        "	str r4, [r0, #0xc]\n"
        "	str r4, [r0, #0x10]\n"
        "	str r4, [r0, #0x14]\n"
        "	add r0, #0x18\n"
        "	add r1, r7, #0\n"
        "	mov r2, #7\n"
        "	mov r3, #0x80\n"
        "	lsl r3, r3, #1\n"
        "	bl func_0805E824\n"
        "	str r5, [r7, #0x50]\n"
        "	add r1, r7, #0\n"
        "	add r1, #0x54\n"
        "	mov r0, #6\n"
        "	mov r3, #0\n"
        "	mov r2, #1\n"
        "	neg r2, r2\n"
        "_L_080E0B0C:\n"
        "	stm r1!, {r3}\n"
        "	sub r0, #1\n"
        "	cmp r0, r2\n"
        "	bne _L_080E0B0C\n"
        "	mov r0, #0x70\n"
        "	add r0, r0, r7\n"
        "	mov r8, r0\n"
        "	mov r2, #0xdd\n"
        "	lsl r2, r2, #2\n"
        "	add r4, r7, r2\n"
        "	mov r5, #2\n"
        "	mov r0, #0\n"
        "	mov sb, r0\n"
        "	mov r6, #1\n"
        "	neg r6, r6\n"
        "_L_080E0B2A:\n"
        "	add r0, r4, #0\n"
        "	bl func_08007874\n"
        "	mov r2, sb\n"
        "	str r2, [r4, #4]\n"
        "	add r4, #8\n"
        "	sub r5, #1\n"
        "	cmp r5, r6\n"
        "	bne _L_080E0B2A\n"
        "	mov r0, #0xc7\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	mov r2, #5\n"
        "	mov r1, #0\n"
        "	ldr r4, =0x080E77D0\n"
        "	mov r3, #1\n"
        "	neg r3, r3\n"
        "_L_080E0B4C:\n"
        "	str r1, [r0]\n"
        "	str r1, [r0, #4]\n"
        "	str r4, [r0, #8]\n"
        "	str r1, [r0, #0xc]\n"
        "	str r1, [r0, #0x10]\n"
        "	str r1, [r0, #0x14]\n"
        "	add r0, #0x18\n"
        "	sub r2, #1\n"
        "	cmp r2, r3\n"
        "	bne _L_080E0B4C\n"
        "	mov r6, #0\n"
        "	mov r5, #0xc2\n"
        "	lsl r5, r5, #2\n"
        "	add r5, r8\n"
        "_L_080E0B68:\n"
        "	lsl r4, r6, #3\n"
        "	add r4, r8\n"
        "	mov r0, #0xc1\n"
        "	lsl r0, r0, #2\n"
        "	add r4, r4, r0\n"
        "	ldr r1, [r5]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #3\n"
        "	bl func_08007B54\n"
        "	str r0, [r5]\n"
        "	add r5, #8\n"
        "	add r6, #1\n"
        "	cmp r6, #2\n"
        "	bls _L_080E0B68\n"
        "	mov r2, #0\n"
        "	mov r8, r2\n"
        "	mov r6, #0\n"
        "	mov r0, #0x54\n"
        "	add r0, r0, r7\n"
        "	mov sb, r0\n"
        "_L_080E0B98:\n"
        "	mov r0, #0x34\n"
        "	bl func_080005D4\n"
        "	add r4, r0, #0\n"
        "	ldr r1, =0x080F19CC\n"
        "	mov r2, r8\n"
        "	lsl r0, r2, #2\n"
        "	add r0, r0, r1\n"
        "	ldr r5, [r0]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007874\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007B54\n"
        "	str r0, [r4, #4]\n"
        "	add r1, r4, #0\n"
        "	add r1, #8\n"
        "	str r6, [r4, #8]\n"
        "	str r6, [r1, #4]\n"
        "	ldr r0, =0x080E77D0\n"
        "	str r0, [r1, #8]\n"
        "	str r6, [r1, #0xc]\n"
        "	str r6, [r1, #0x10]\n"
        "	str r6, [r1, #0x14]\n"
        "	add r0, r4, #0\n"
        "	add r0, #0x20\n"
        "	add r1, r7, #0\n"
        "	add r2, r5, #0\n"
        "	mov r3, #0x80\n"
        "	lsl r3, r3, #1\n"
        "	bl func_0805E824\n"
        "	mov r0, sb\n"
        "	ldr r5, [r0]\n"
        "	cmp r4, r5\n"
        "	beq _L_080E0C08\n"
        "	cmp r5, #0\n"
        "	beq _L_080E0C08\n"
        "	add r0, r5, #0\n"
        "	add r0, #8\n"
        "	mov r1, #2\n"
        "	bl func_080098AC\n"
        "	ldr r1, [r5, #4]\n"
        "	add r0, r5, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r5, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	add r0, r5, #0\n"
        "	bl func_08000608\n"
        "_L_080E0C08:\n"
        "	mov r2, sb\n"
        "	add r2, #4\n"
        "	mov sb, r2\n"
        "	sub r2, #4\n"
        "	stm r2!, {r4}\n"
        "	mov r0, #1\n"
        "	add r8, r0\n"
        "	mov r2, r8\n"
        "	cmp r2, #6\n"
        "	bls _L_080E0B98\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* 0x080E0F48 (72B) | code_0803EE94_7898_vfunc_08 (orig: func_080E0F48) | origin: pending_asm | domain: code_0803EE94_7898 | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_080E0F48 @ 0x080E0F48 (72 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW), +0x0C:u32(R)
 * Callees: func_08009094
 * CFG Structure:
 *   L_080E0F48: if (!=) goto L_080E0F56
 *   L_080E0F56: if (!=) goto L_080E0F86
 *   L_080E0F78: if (!=) goto L_080E0F78
 *   L_080E0F86: return
 * ========================================================================== */
extern void func_08009094(void);
int func_080E0F48(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	ldr r5, [r0, #0xc]\n"
        "	mov r0, #0\n"
        "	ldr r1, [r5]\n"
        "	cmp r1, #0\n"
        "	bne _L_080E0F56\n"
        "	mov r0, #1\n"
        "_L_080E0F56:\n"
        "	cmp r0, #0\n"
        "	bne _L_080E0F86\n"
        "	add r4, r5, #4\n"
        "	lsl r1, r1, #4\n"
        "	add r1, r4, r1\n"
        "	add r0, r4, #0\n"
        "	bl func_08009094\n"
        "	ldr r0, [r5]\n"
        "	lsl r0, r0, #4\n"
        "	add r0, #4\n"
        "	add r0, r5, r0\n"
        "	add r2, r0, #0\n"
        "	add r1, r4, #0\n"
        "	ldr r3, [r5]\n"
        "	cmp r1, r2\n"
        "	beq _L_080E0F7E\n"
        "_L_080E0F78:\n"
        "	add r1, #0x10\n"
        "	cmp r1, r2\n"
        "	bne _L_080E0F78\n"
        "_L_080E0F7E:\n"
        "	sub r0, r0, r4\n"
        "	asr r0, r0, #4\n"
        "	sub r0, r3, r0\n"
        "	str r0, [r5]\n"
        "_L_080E0F86:\n"
        "	mov r0, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
    return __ret;
}

/* 0x080E0F90 (136B) | code_0803EE94_7888_vfunc_08 (orig: func_080E0F90) | origin: pending_asm | domain: code_0803EE94_7888 | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_080E0F90 @ 0x080E0F90 (136 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x04:u32(R), +0x0C:u32(R), +0x0C:u8(RW), +0x19:u8(RW), +0x1A:u8(RW)
 * Callees: func_08007D4C, func_080D374C
 * CFG Structure:
 *   L_080E0FAC: if (==) goto L_080E0FE2
 *   L_080E0FE2: if (<= (s)) goto L_080E0FAC
 *   L_080E0FFA: if (==) goto L_080E1006
 *   L_080E1006: return
 * ========================================================================== */
extern void func_08007D4C(void);
extern void func_080D374C(void);
int func_080E0F90(void) {
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile(
        "	ldr r0, [r0, #0xc]\n"
        "	mov r8, r0\n"
        "	mov r1, #0\n"
        "_L_080E0F9E:\n"
        "	mov r7, #0\n"
        "	lsl r0, r1, #2\n"
        "	add r1, #1\n"
        "	mov sb, r1\n"
        "	mov r1, r8\n"
        "	add r6, r0, r1\n"
        "	add r6, #8\n"
        "_L_080E0FAC:\n"
        "	ldr r0, [r6]\n"
        "	lsl r1, r7, #4\n"
        "	add r5, r0, r1\n"
        "	ldrb r0, [r5, #0xc]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E0FE2\n"
        "	add r2, r5, #4\n"
        "	ldr r1, [r2, #4]\n"
        "	neg r0, r1\n"
        "	orr r0, r1\n"
        "	cmp r0, #0\n"
        "	bge _L_080E0FDE\n"
        "	ldr r4, [r5]\n"
        "	add r4, #4\n"
        "	add r0, r2, #0\n"
        "	bl func_08007D4C\n"
        "	add r1, r0, #0\n"
        "	lsl r1, r1, #5\n"
        "	ldr r0, =0x06010000\n"
        "	add r1, r1, r0\n"
        "	add r0, r4, #0\n"
        "	mov r2, #0x40\n"
        "	bl func_080D374C\n"
        "_L_080E0FDE:\n"
        "	mov r0, #0\n"
        "	strb r0, [r5, #0xc]\n"
        "_L_080E0FE2:\n"
        "	add r7, #1\n"
        "	cmp r7, #6\n"
        "	ble _L_080E0FAC\n"
        "	mov r1, sb\n"
        "	cmp r1, #2\n"
        "	ble _L_080E0F9E\n"
        "	mov r1, r8\n"
        "	ldrb r0, [r1, #0x19]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E0FFA\n"
        "	mov r0, #0\n"
        "	strb r0, [r1, #0x19]\n"
        "_L_080E0FFA:\n"
        "	mov r1, r8\n"
        "	ldrb r0, [r1, #0x1a]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E1006\n"
        "	mov r0, #0\n"
        "	strb r0, [r1, #0x1a]\n"
        "_L_080E1006:\n"
        "	mov r0, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* 0x080E14B8 (264B) | SpriteAnimEngine_797C_vfunc_0C (orig: func_080E14B8) | origin: pending_asm | domain: SpriteAnimEngine_797C | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_080E14B8 @ 0x080E14B8 (264 bytes)
 * Role   : C/C++ Switch Dispatcher (6 jump-table cases)
 * Fields : +0x00:u32(R), +0x00:u8(W), +0x04:u32(R), +0x08:u32(R), +0x0C:u32(R), +0x10:u32(R), +0x14:u32(R), +0x18:u32(R)
 * Callees: func_0804EC84, func_080D3994, func_080D3B28, func_080D3B78
 * CFG Structure:
 *   L_080E14B8: if (> (u)) goto L_080E1578
 *   L_080E14F0: call func_0804EC84(); call func_080D3B78(); if (<= (u)) goto L_080E150A
 *   L_080E150A: call func_080D3994(); call func_080D3B28(); goto L_080E15B6
 *   L_080E1528: goto L_080E1536
 *   L_080E152C: goto L_080E1536
 *   L_080E1530: goto L_080E1536
 *   L_080E1536: if (==) goto L_080E1588
 *   L_080E1554: call func_080D3994(); call func_080D3B28(); goto L_080E15B6
 *   L_080E1578: call func_080D3B28(); goto L_080E15B6
 *   L_080E1588: call func_080D3B78(); if (<= (u)) goto L_080E1598
 *   L_080E1598: call func_080D3994(); call func_080D3B28()
 * ========================================================================== */
extern void func_0804EC84(void);
extern void func_080D3994(void);
extern void func_080D3B28(void);
extern void func_080D3B78(void);
int func_080E14B8(void) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5, sp6, sp7, sp8, sp9;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5), "m"(sp6), "m"(sp7), "m"(sp8), "m"(sp9));
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	add r3, r1, #0\n"
        "	add r0, r2, #0\n"
        "	sub r0, #0xfa\n"
        "	cmp r0, #5\n"
        "	bhi _L_080E1578\n"
        "	lsl r0, r0, #2\n"
        "	ldr r1, .Lpool_080E14D4\n"
        "	add r0, r0, r1\n"
        "	ldr r0, [r0]\n"
        "	mov pc, r0\n"
        "	.align 2, 0\n"
        ".Lpool_080E14D4:\n"
        "	.word _Ljt_080E14D8\n"
        "_Ljt_080E14D8:\n"
        "	.word _L_080E14F0\n"
        "	.word _L_080E1588\n"
        "	.word _L_080E1528\n"
        "	.word _L_080E152C\n"
        "	.word _L_080E1530\n"
        "	.word _L_080E1534\n"
        "_L_080E14F0:\n"
        "	ldr r0, [r3, #0x14]\n"
        "	mov r1, sp\n"
        "	mov r2, #0\n"
        "	bl func_0804EC84\n"
        "	add r5, sp, #8\n"
        "	mov r0, sp\n"
        "	bl func_080D3B78\n"
        "	add r4, r0, #0\n"
        "	cmp r4, #0x1f\n"
        "	bls _L_080E150A\n"
        "	mov r4, #0x1f\n"
        "_L_080E150A:\n"
        "	add r0, r5, #0\n"
        "	mov r1, sp\n"
        "	add r2, r4, #0\n"
        "	bl func_080D3994\n"
        "	add r1, r5, r4\n"
        "	mov r0, #0\n"
        "	strb r0, [r1]\n"
        "	mov r0, #1\n"
        "	strb r0, [r7]\n"
        "	add r0, r7, #4\n"
        "	add r1, r5, #0\n"
        "	bl func_080D3B28\n"
        "	b _L_080E15B6\n"
        "_L_080E1528:\n"
        "	ldr r1, [r3, #4]\n"
        "	b _L_080E1536\n"
        "_L_080E152C:\n"
        "	ldr r1, [r3, #8]\n"
        "	b _L_080E1536\n"
        "_L_080E1530:\n"
        "	ldr r1, [r3, #0xc]\n"
        "	b _L_080E1536\n"
        "_L_080E1534:\n"
        "	ldr r1, [r3, #0x10]\n"
        "_L_080E1536:\n"
        "	cmp r1, #0x80\n"
        "	beq _L_080E1588\n"
        "	add r6, sp, #8\n"
        "	mov r0, #0xd\n"
        "	add r5, r1, #0\n"
        "	mul r5, r0\n"
        "	ldr r0, .Lpool_080E1574\n"
        "	add r5, r5, r0\n"
        "	add r0, r5, #0\n"
        "	bl func_080D3B78\n"
        "	add r4, r0, #0\n"
        "	cmp r4, #0x1f\n"
        "	bls _L_080E1554\n"
        "	mov r4, #0x1f\n"
        "_L_080E1554:\n"
        "	add r0, r6, #0\n"
        "	add r1, r5, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080D3994\n"
        "	add r1, r6, r4\n"
        "	mov r0, #0\n"
        "	strb r0, [r1]\n"
        "	mov r0, #1\n"
        "	strb r0, [r7]\n"
        "	add r0, r7, #4\n"
        "	add r1, r6, #0\n"
        "	bl func_080D3B28\n"
        "	b _L_080E15B6\n"
        "	.align 2, 0\n"
        ".Lpool_080E1574:\n"
        "	.word 0x080FA796\n"
        "_L_080E1578:\n"
        "	add r1, sp, #8\n"
        "	mov r0, #0\n"
        "	strb r0, [r1]\n"
        "	strb r0, [r7]\n"
        "	add r0, r7, #4\n"
        "	bl func_080D3B28\n"
        "	b _L_080E15B6\n"
        "_L_080E1588:\n"
        "	ldr r5, [r3, #0x18]\n"
        "	add r0, r5, #0\n"
        "	bl func_080D3B78\n"
        "	add r4, r0, #0\n"
        "	cmp r4, #0x1f\n"
        "	bls _L_080E1598\n"
        "	mov r4, #0x1f\n"
        "_L_080E1598:\n"
        "	mov r0, sp\n"
        "	add r1, r5, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080D3994\n"
        "	mov r0, sp\n"
        "	add r1, r0, r4\n"
        "	mov r0, #0\n"
        "	strb r0, [r1]\n"
        "	mov r0, #1\n"
        "	strb r0, [r7]\n"
        "	add r0, r7, #4\n"
        "	mov r1, sp\n"
        "	bl func_080D3B28\n"
        "_L_080E15B6:\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* 0x080E43FC (60B) | code_809E804_831C_Sub_080E43FC (orig: func_080E43FC) | origin: pending_asm | domain: code_809E804_831C | MEDIUM / graph_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_080E43FC @ 0x080E43FC (60 bytes)
 * Role   : C++ SGI STL Node Allocator / _Rb_tree / Container Template Method
 * Fields : +0x00:u8(W), +0x04:u32(RW), +0x08:u32(W), +0x0C:u32(W)
 * Callees: func_080D01F8, func_080D3BC0
 * CFG Structure:
 *   L_080E43FC: call func_080D01F8(); if (!=) goto L_080E441A
 *   L_080E441A: return
 * ========================================================================== */
extern void func_080D01F8(void);
extern void func_080D3BC0(void);
int func_080E43FC(void) {
    u32 sp0, sp1;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r6, #0\n"
        "	add r4, #8\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	mov r0, #0x18\n"
        "	bl func_080D01F8\n"
        "	cmp r0, #0\n"
        "	bne _L_080E441A\n"
        "	mov r0, #0x18\n"
        "	bl func_080D3BC0\n"
        "_L_080E441A:\n"
        "	str r0, [r4, #4]\n"
        "	str r5, [r4, #8]\n"
        "	str r5, [r4, #0xc]\n"
        "	strb r5, [r0]\n"
        "	str r5, [r0, #4]\n"
        "	ldr r0, [r4, #4]\n"
        "	str r0, [r0, #8]\n"
        "	ldr r0, [r4, #4]\n"
        "	str r0, [r0, #0xc]\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* 0x080E542C (76B) | code_linkonce_857C_Ctor (orig: func_080E542C) | origin: pending_asm | domain: code_linkonce_857C | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_080E542C @ 0x080E542C (76 bytes)
 * Role   : C++ Class Constructor / Polymorphic Method [vtable: 0x080E5419, 0x080E857C, 0x080E8588]
 * Fields : +0x00:u32(RW), +0x04:u16(W), +0x08:u32(W), +0x0C:u32(W), +0x10:u32(W), +0x14:u32(W)
 * Callees: func_0800050C, func_08000528, func_080D100C
 * CFG Structure:
 *   L_080E542C: call func_08000528(); call func_080D100C(); call func_0800050C(); return
 * ========================================================================== */
extern void func_0800050C(void);
extern void func_08000528(void);
extern void func_080D100C(void);
int func_080E542C(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	ldr r0, =0x080E857C\n"
        "	str r0, [r5, #0x14]\n"
        "	ldr r0, [r1]\n"
        "	str r0, [r5]\n"
        "	mov r4, #4\n"
        "	mov r0, #4\n"
        "	bl func_08000528\n"
        "	and r4, r0\n"
        "	strh r4, [r5, #4]\n"
        "	ldr r0, =0x03000414\n"
        "	ldr r1, [r0]\n"
        "	str r5, [r0]\n"
        "	str r1, [r5, #8]\n"
        "	ldr r0, =0x080E8588\n"
        "	str r0, [r5, #0xc]\n"
        "	ldr r1, =0x080E5419\n"
        "	mov r0, #2\n"
        "	bl func_080D100C\n"
        "	str r0, [r5, #0x10]\n"
        "	mov r0, #4\n"
        "	bl func_0800050C\n"
        "	add r0, r5, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
    return __ret;
}

/* 0x080E5898 (212B) | code_809E804_85AC_Ctor_5898 (orig: func_080E5898) | origin: pending_asm | domain: code_809E804_85AC | HIGH / vtable_algebra */
/* ==========================================================================
 * [FSM-LIFTER] func_080E5898 @ 0x080E5898 (212 bytes)
 * Role   : C++ Class Constructor / Polymorphic Method [vtable: 0x080E85AC]
 * Fields : +0x00:u32(RW), +0x04:u32(R)
 * Callees: func_08007184, func_080073E0, func_080079E8, func_08007C28, func_080CADF0
 * CFG Structure:
 *   L_080E5898: if (==) goto L_080E58DA
 *   L_080E58C4: call func_080073E0(); call func_08007184(); if (!=) goto L_080E58C4
 *   L_080E58DA: if (==) goto L_080E590C
 *   L_080E58F6: call func_08007C28(); call func_080079E8(); if (!=) goto L_080E58F6
 *   L_080E590C: call func_080073E0(); call func_08007184(); call func_08007C28(); call func_080079E8(); if (==) goto L_080E5956
 *   L_080E5950: if (!=) goto L_080E5950
 *   L_080E5956: call func_080CADF0(); return
 * ========================================================================== */
extern void func_08007184(void);
extern void func_080073E0(void);
extern void func_080079E8(void);
extern void func_08007C28(void);
extern void func_080CADF0(void);
void func_080E5898(void) {
    int r7_var;
    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	mov r8, r1\n"
        "	mov r0, #0x84\n"
        "	lsl r0, r0, #2\n"
        "	add r1, r5, r0\n"
        "	ldr r0, =0x080E85AC\n"
        "	str r0, [r1]\n"
        "	mov r1, #0xbb\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E58DA\n"
        "	add r1, #0x40\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E58DA\n"
        "	mov r0, #0xbb\n"
        "	lsl r0, r0, #2\n"
        "	add r6, r5, r0\n"
        "_L_080E58C4:\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	cmp r6, r4\n"
        "	bne _L_080E58C4\n"
        "_L_080E58DA:\n"
        "	mov r1, #0xab\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r5, r1\n"
        "	sub r1, #0x94\n"
        "	add r7, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E590C\n"
        "	add r1, #0xd4\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E590C\n"
        "	mov r0, #0xab\n"
        "	lsl r0, r0, #2\n"
        "	add r6, r5, r0\n"
        "_L_080E58F6:\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	cmp r6, r4\n"
        "	bne _L_080E58F6\n"
        "_L_080E590C:\n"
        "	mov r1, #0xa9\n"
        "	lsl r1, r1, #2\n"
        "	add r4, r5, r1\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r0, #0xa7\n"
        "	lsl r0, r0, #2\n"
        "	add r4, r5, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r1, #0x85\n"
        "	lsl r1, r1, #2\n"
        "	add r2, r5, r1\n"
        "	ldr r1, [r2]\n"
        "	lsl r0, r1, #1\n"
        "	add r0, r0, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, #4\n"
        "	add r2, r2, r0\n"
        "	add r0, r7, #0\n"
        "	cmp r0, r2\n"
        "	beq _L_080E5956\n"
        "_L_080E5950:\n"
        "	add r0, #0xc\n"
        "	cmp r0, r2\n"
        "	bne _L_080E5950\n"
        "_L_080E5956:\n"
        "	add r0, r5, #0\n"
        "	mov r1, r8\n"
        "	bl func_080CADF0\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

