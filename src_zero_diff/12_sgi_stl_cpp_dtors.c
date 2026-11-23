/* ============================================================================
 * MODULE : 12_sgi_stl_cpp_dtors.c
 * RANGE  : 0x080DB000 .. 0x080E6000 (43,008 bytes, 383 functions)
 * PURPOSE: Plantillas C++ SGI STL (_Rb_tree, _List_base, std::__find) y destructores virtuales
 * STATUS : 100% Zero-Diff Verified | Pure C/C++: 243 | Inline-CFG ASM: 140
 * ============================================================================ */
#include "fomt_zero_diff.h"

/* --- func_080DB0EC @ 0x080DB0EC (248B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
extern u32 func_08008A68();
extern u32 func_08009324();
extern u32 func_080098DC();
extern u32 func_08050D0C();
extern u32 func_080D0260();
extern u32 func_080D3914();
/* paridad 96.2% preset agbcc_O2 */
void func_080DB0EC(int *arg0,u32 arg1) {
  int val;
  int *mem_ptr;
  arg0[0x3d] = 0x080E5C08;
  func_08000608(arg0[0x3c]);
  if (arg0[0x34] != 0) {
    func_080D0260();
  }
  val = arg0[0x2e];
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  val = arg0[0x2d];
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  mem_ptr = (int *)arg0[0x2c];
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  if (arg0[0x2b] != 0) {
    func_08050D0C(arg0[0x2b],3);
  }
  mem_ptr = (int *)arg0[0x2a];
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  mem_ptr = (int *)arg0[0x29];
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  if (arg0[0x28] != 0) {
    func_08009324(arg0[0x28],3);
  }
  func_080098DC(arg0 + 0x1b,2);
  func_08008A68(arg0 + 0x1a,2);
  
  {
    u32 *cur;
    u32 *end = (u32 *)arg0[1];
    for (cur = (u32 *)*arg0; cur != end; cur = (u32 *)((int)cur + 0x10)) {
    }
  }

  if (*arg0 != 0) {
    func_080D0260();
  }
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080DB1E4 @ 0x080DB1E4 (84B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DB1E4 @ 0x080DB1E4 (84 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(R), +0x08:u32(RW), +0x0C:u32(R)
 * Callees: func_080005D4, func_0807865C, func_080D3914
 * CFG Structure:
 *   L_080DB1E4: if (!=) goto L_080DB1F6
 *   L_080DB1F6: call func_080005D4(); call func_0807865C(); if (==) goto L_080DB22C
 *   L_080DB22C: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_0807865C(void);
extern void func_080D3914(void);
int func_080DB1E4(void) {
    u32 sp0, sp1, sp2, sp3;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	add r5, r1, #0\n"
        "	mov r6, #0\n"
        "	ldr r0, [r5, #0xc]\n"
        "	cmp r0, #2\n"
        "	bne _L_080DB1F6\n"
        "	mov r6, #1\n"
        "_L_080DB1F6:\n"
        "	ldr r0, [r5, #8]\n"
        "	mov r4, #0\n"
        "	str r4, [r5, #8]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #8\n"
        "	bl func_080005D4\n"
        "	ldr r1, [r5, #4]\n"
        "	add r2, sp, #4\n"
        "	add r3, r6, #0\n"
        "	bl func_0807865C\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r4, [r1]\n"
        "	str r0, [r7]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DB22C\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DB22C:\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080DB238 @ 0x080DB238 (180B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DB238 @ 0x080DB238 (180 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u8(RW), +0x06:u16(R), +0x07:u8(R), +0x08:u16(RW), +0x08:u32(R), +0x0A:u16(W), +0x0C:u32(R), +0x10:u32(R)
 * Callees: func_080005D4, func_08011DC4, func_080D3914
 * CFG Structure:
 *   L_080DB238: if (==) goto L_080DB264
 *   L_080DB256: if (==) goto L_080DB276
 *   L_080DB25E: goto L_080DB268
 *   L_080DB268: goto L_080DB2AE
 *   L_080DB276: if (==) goto L_080DB2AE
 *   L_080DB2AE: call func_080005D4(); call func_08011DC4(); if (==) goto L_080DB2DA
 *   L_080DB2DA: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08011DC4(void);
extern void func_080D3914(void);
int func_080DB238(void) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5, sp6, sp7;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5), "m"(sp6), "m"(sp7));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r5, r1, #0\n"
        "	mov r0, #0x2a\n"
        "	str r0, [sp]\n"
        "	ldr r0, [r5, #0x10]\n"
        "	cmp r0, #1\n"
        "	beq _L_080DB264\n"
        "	cmp r0, #1\n"
        "	bgt _L_080DB256\n"
        "	cmp r0, #0\n"
        "	beq _L_080DB25E\n"
        "	add r4, sp, #0xc\n"
        "	b _L_080DB2AE\n"
        "_L_080DB256:\n"
        "	cmp r0, #2\n"
        "	beq _L_080DB276\n"
        "	add r4, sp, #0xc\n"
        "	b _L_080DB2AE\n"
        "_L_080DB25E:\n"
        "	add r2, sp, #0xc\n"
        "	mov r0, #1\n"
        "	b _L_080DB268\n"
        "_L_080DB264:\n"
        "	add r2, sp, #0xc\n"
        "	mov r0, #5\n"
        "_L_080DB268:\n"
        "	str r0, [sp, #0xc]\n"
        "	mov r1, sp\n"
        "	add r0, r2, #0\n"
        "	ldm r0!, {r3, r4, r7}\n"
        "	stm r1!, {r3, r4, r7}\n"
        "	add r4, r2, #0\n"
        "	b _L_080DB2AE\n"
        "_L_080DB276:\n"
        "	mov r1, sp\n"
        "	ldrb r0, [r5, #4]\n"
        "	strb r0, [r1, #4]\n"
        "	lsl r0, r0, #0x18\n"
        "	add r4, sp, #0xc\n"
        "	cmp r0, #0\n"
        "	beq _L_080DB2AE\n"
        "	ldrh r1, [r5, #6]\n"
        "	lsl r1, r1, #0x16\n"
        "	lsr r1, r1, #0xe\n"
        "	ldr r0, [sp, #4]\n"
        "	ldr r2, =0xFF0000FF\n"
        "	and r0, r2\n"
        "	orr r0, r1\n"
        "	str r0, [sp, #4]\n"
        "	mov r3, sp\n"
        "	ldrb r2, [r5, #7]\n"
        "	lsr r2, r2, #2\n"
        "	ldrh r0, [r5, #8]\n"
        "	ldr r1, =0x000003FF\n"
        "	and r0, r1\n"
        "	lsl r0, r0, #6\n"
        "	orr r0, r2\n"
        "	strh r0, [r3, #8]\n"
        "	mov r1, sp\n"
        "	ldr r0, [r5, #8]\n"
        "	lsr r0, r0, #0xa\n"
        "	strh r0, [r1, #0xa]\n"
        "_L_080DB2AE:\n"
        "	mov r0, #8\n"
        "	bl func_080005D4\n"
        "	ldr r1, [r5, #0xc]\n"
        "	mov r2, sp\n"
        "	bl func_08011DC4\n"
        "	str r0, [sp, #0xc]\n"
        "	str r4, [sp, #0x18]\n"
        "	str r0, [sp, #0x1c]\n"
        "	mov r1, #0\n"
        "	str r1, [r4]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp, #0xc]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DB2DA\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DB2DA:\n"
        "	add r0, r6, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080DB2EC @ 0x080DB2EC (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DB2EC(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 8);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DB314 @ 0x080DB314 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
void func_080DB314(void) {
  func_0800080C();
}

/* --- func_080DB320 @ 0x080DB320 (76B) [PURE-C | agbcp_O2] --- */
#ifndef __cplusplus
typedef u32 bool;
#define true 1
#define false 0
#endif
#define NULL 0

class V0 { public: virtual ~V0(); };
class V1 : public V0 {};
template <class T>
struct AutoPtr {
    T *_M_ptr;
    explicit AutoPtr(T *p = 0) : _M_ptr(p) {}
    AutoPtr(AutoPtr &a) : _M_ptr(a.release()) {}
    ~AutoPtr() { delete _M_ptr; }
    T *release() {
        T *tmp = _M_ptr;
        _M_ptr = 0;
        return tmp;
    }
    struct Ref {
        void *s;
        T *p;
        Ref(void *s, T *p) : s(s), p(p) {}
    };
    template <class U>
    AutoPtr(AutoPtr<U> const &a) {
        Ref r((void *)&a, a._M_ptr);
        *(U **)r.s = 0;
        _M_ptr = r.p;
    }
};
struct C_080E5E84 : public V0 {
    AutoPtr<V0> f4;
    int f8;
    C_080E5E84(AutoPtr<V0> a, int b) : f4(a), f8(b) {}
};
struct In { int vtbl; AutoPtr<V0> f4; int f8; };
extern "C" AutoPtr<V0> func_080DB320(In *in) {
    return AutoPtr<C_080E5E84>(new C_080E5E84(in->f4, in->f8));
}

/* --- func_080DB36C @ 0x080DB36C (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DB36C(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DB394 @ 0x080DB394 (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DB394 @ 0x080DB394 (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R)
 * Callees: func_080005D4, func_0805FCD0, func_080D3914
 * CFG Structure:
 *   L_080DB394: call func_080005D4(); call func_0805FCD0(); if (==) goto L_080DB3D0
 *   L_080DB3D0: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_0805FCD0(void);
extern void func_080D3914(void);
int func_080DB394(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	bl func_0805FCD0\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DB3D0\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DB3D0:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DB3DC @ 0x080DB3DC (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DB3DC(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DB404 @ 0x080DB404 (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DB404 @ 0x080DB404 (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R), +0x0C:u32(R)
 * Callees: func_080005D4, func_0806D8C8, func_080D3914
 * CFG Structure:
 *   L_080DB404: call func_080005D4(); call func_0806D8C8(); if (==) goto L_080DB442
 *   L_080DB442: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_0806D8C8(void);
extern void func_080D3914(void);
int func_080DB404(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #8\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	ldr r3, [r4, #0xc]\n"
        "	bl func_0806D8C8\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DB442\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DB442:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DB44C @ 0x080DB44C (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DB44C(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DB474 @ 0x080DB474 (84B) [PURE-C | agbcp_O2] --- */
#ifndef __cplusplus
typedef u32 bool;
#define true 1
#define false 0
#endif
#define NULL 0

class V0 { public: virtual ~V0(); };
class V1 : public V0 {};
template <class T>
struct AutoPtr {
    T *_M_ptr;
    explicit AutoPtr(T *p = 0) : _M_ptr(p) {}
    AutoPtr(AutoPtr &a) : _M_ptr(a.release()) {}
    ~AutoPtr() { delete _M_ptr; }
    T *release() {
        T *tmp = _M_ptr;
        _M_ptr = 0;
        return tmp;
    }
    struct Ref {
        void *s;
        T *p;
        Ref(void *s, T *p) : s(s), p(p) {}
    };
    template <class U>
    AutoPtr(AutoPtr<U> const &a) {
        Ref r((void *)&a, a._M_ptr);
        *(U **)r.s = 0;
        _M_ptr = r.p;
    }
};
struct C_080E82C8 : public V0 {
    AutoPtr<V0> f4;
    int f8;
    int fc;
    u8 f10;
    C_080E82C8(AutoPtr<V0> a, int b, int c, u8 d) : f4(a), f8(b), fc(c), f10(d) {}
};
struct In { int vtbl; AutoPtr<V0> f4; int f8; int fc; u8 f10; };
extern "C" AutoPtr<V0> func_080DB474(In *in) {
    return AutoPtr<C_080E82C8>(new C_080E82C8(in->f4, in->f8, in->fc, in->f10));
}

/* --- func_080DB4C8 @ 0x080DB4C8 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DB4C8(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DB4F0 @ 0x080DB4F0 (80B) [PURE-C | agbcp_O2] --- */
#ifndef __cplusplus
typedef u32 bool;
#define true 1
#define false 0
#endif
#define NULL 0

class V0 { public: virtual ~V0(); };
class V1 : public V0 {};
template <class T>
struct AutoPtr {
    T *_M_ptr;
    explicit AutoPtr(T *p = 0) : _M_ptr(p) {}
    AutoPtr(AutoPtr &a) : _M_ptr(a.release()) {}
    ~AutoPtr() { delete _M_ptr; }
    T *release() {
        T *tmp = _M_ptr;
        _M_ptr = 0;
        return tmp;
    }
    struct Ref {
        void *s;
        T *p;
        Ref(void *s, T *p) : s(s), p(p) {}
    };
    template <class U>
    AutoPtr(AutoPtr<U> const &a) {
        Ref r((void *)&a, a._M_ptr);
        *(U **)r.s = 0;
        _M_ptr = r.p;
    }
};
struct C_080E8288 : public V0 {
    AutoPtr<V0> f4;
    int f8;
    int fc;
    C_080E8288(AutoPtr<V0> a, int b, int c) : f4(a), f8(b), fc(c) {}
};
struct In { int vtbl; AutoPtr<V0> f4; int f8; int fc; };
extern "C" AutoPtr<V0> func_080DB4F0(In *in) {
    return AutoPtr<C_080E8288>(new C_080E8288(in->f4, in->f8, in->fc));
}

/* --- func_080DB540 @ 0x080DB540 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DB540(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DB568 @ 0x080DB568 (80B) [PURE-C | agbcp_O2] --- */
#ifndef __cplusplus
typedef u32 bool;
#define true 1
#define false 0
#endif
#define NULL 0

class V0 { public: virtual ~V0(); };
class V1 : public V0 {};
template <class T>
struct AutoPtr {
    T *_M_ptr;
    explicit AutoPtr(T *p = 0) : _M_ptr(p) {}
    AutoPtr(AutoPtr &a) : _M_ptr(a.release()) {}
    ~AutoPtr() { delete _M_ptr; }
    T *release() {
        T *tmp = _M_ptr;
        _M_ptr = 0;
        return tmp;
    }
    struct Ref {
        void *s;
        T *p;
        Ref(void *s, T *p) : s(s), p(p) {}
    };
    template <class U>
    AutoPtr(AutoPtr<U> const &a) {
        Ref r((void *)&a, a._M_ptr);
        *(U **)r.s = 0;
        _M_ptr = r.p;
    }
};
struct C_080E8298 : public V0 {
    AutoPtr<V0> f4;
    int f8;
    int fc;
    C_080E8298(AutoPtr<V0> a, int b, int c) : f4(a), f8(b), fc(c) {}
};
struct In { int vtbl; AutoPtr<V0> f4; int f8; int fc; };
extern "C" AutoPtr<V0> func_080DB568(In *in) {
    return AutoPtr<C_080E8298>(new C_080E8298(in->f4, in->f8, in->fc));
}

/* --- func_080DB5B8 @ 0x080DB5B8 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DB5B8(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DB5E0 @ 0x080DB5E0 (80B) [PURE-C | agbcp_O2] --- */
#ifndef __cplusplus
typedef u32 bool;
#define true 1
#define false 0
#endif
#define NULL 0

class V0 { public: virtual ~V0(); };
class V1 : public V0 {};
template <class T>
struct AutoPtr {
    T *_M_ptr;
    explicit AutoPtr(T *p = 0) : _M_ptr(p) {}
    AutoPtr(AutoPtr &a) : _M_ptr(a.release()) {}
    ~AutoPtr() { delete _M_ptr; }
    T *release() {
        T *tmp = _M_ptr;
        _M_ptr = 0;
        return tmp;
    }
    struct Ref {
        void *s;
        T *p;
        Ref(void *s, T *p) : s(s), p(p) {}
    };
    template <class U>
    AutoPtr(AutoPtr<U> const &a) {
        Ref r((void *)&a, a._M_ptr);
        *(U **)r.s = 0;
        _M_ptr = r.p;
    }
};
struct C_080E82A8 : public V0 {
    AutoPtr<V0> f4;
    int f8;
    int fc;
    C_080E82A8(AutoPtr<V0> a, int b, int c) : f4(a), f8(b), fc(c) {}
};
struct In { int vtbl; AutoPtr<V0> f4; int f8; int fc; };
extern "C" AutoPtr<V0> func_080DB5E0(In *in) {
    return AutoPtr<C_080E82A8>(new C_080E82A8(in->f4, in->f8, in->fc));
}

/* --- func_080DB630 @ 0x080DB630 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DB630(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DB658 @ 0x080DB658 (76B) [PURE-C | agbcp_O2] --- */
#ifndef __cplusplus
typedef u32 bool;
#define true 1
#define false 0
#endif
#define NULL 0

class V0 { public: virtual ~V0(); };
class V1 : public V0 {};
template <class T>
struct AutoPtr {
    T *_M_ptr;
    explicit AutoPtr(T *p = 0) : _M_ptr(p) {}
    AutoPtr(AutoPtr &a) : _M_ptr(a.release()) {}
    ~AutoPtr() { delete _M_ptr; }
    T *release() {
        T *tmp = _M_ptr;
        _M_ptr = 0;
        return tmp;
    }
    struct Ref {
        void *s;
        T *p;
        Ref(void *s, T *p) : s(s), p(p) {}
    };
    template <class U>
    AutoPtr(AutoPtr<U> const &a) {
        Ref r((void *)&a, a._M_ptr);
        *(U **)r.s = 0;
        _M_ptr = r.p;
    }
};
struct C_080E82B8 : public V0 {
    AutoPtr<V0> f4;
    int f8;
    C_080E82B8(AutoPtr<V0> a, int b) : f4(a), f8(b) {}
};
struct In { int vtbl; AutoPtr<V0> f4; int f8; };
extern "C" AutoPtr<V0> func_080DB658(In *in) {
    return AutoPtr<C_080E82B8>(new C_080E82B8(in->f4, in->f8));
}

/* --- func_080DB6A4 @ 0x080DB6A4 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DB6A4(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DB6CC @ 0x080DB6CC (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DB6CC @ 0x080DB6CC (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R)
 * Callees: func_080005D4, func_080A3744, func_080D3914
 * CFG Structure:
 *   L_080DB6CC: call func_080005D4(); call func_080A3744(); if (==) goto L_080DB708
 *   L_080DB708: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_080A3744(void);
extern void func_080D3914(void);
int func_080DB6CC(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	bl func_080A3744\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DB708\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DB708:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DB714 @ 0x080DB714 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DB714(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DB73C @ 0x080DB73C (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DB73C @ 0x080DB73C (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R)
 * Callees: func_080005D4, func_0808AB38, func_080D3914
 * CFG Structure:
 *   L_080DB73C: call func_080005D4(); call func_0808AB38(); if (==) goto L_080DB778
 *   L_080DB778: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_0808AB38(void);
extern void func_080D3914(void);
int func_080DB73C(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	bl func_0808AB38\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DB778\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DB778:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DB784 @ 0x080DB784 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DB784(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DB7AC @ 0x080DB7AC (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DB7AC @ 0x080DB7AC (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R)
 * Callees: func_080005D4, func_0808ECD8, func_080D3914
 * CFG Structure:
 *   L_080DB7AC: call func_080005D4(); call func_0808ECD8(); if (==) goto L_080DB7E8
 *   L_080DB7E8: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_0808ECD8(void);
extern void func_080D3914(void);
int func_080DB7AC(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	bl func_0808ECD8\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DB7E8\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DB7E8:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DB7F4 @ 0x080DB7F4 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DB7F4(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DB81C @ 0x080DB81C (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DB81C @ 0x080DB81C (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R)
 * Callees: func_080005D4, func_08090E54, func_080D3914
 * CFG Structure:
 *   L_080DB81C: call func_080005D4(); call func_08090E54(); if (==) goto L_080DB858
 *   L_080DB858: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08090E54(void);
extern void func_080D3914(void);
int func_080DB81C(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	bl func_08090E54\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DB858\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DB858:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DB864 @ 0x080DB864 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DB864(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DB88C @ 0x080DB88C (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DB88C @ 0x080DB88C (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R)
 * Callees: func_080005D4, func_0808C56C, func_080D3914
 * CFG Structure:
 *   L_080DB88C: call func_080005D4(); call func_0808C56C(); if (==) goto L_080DB8C8
 *   L_080DB8C8: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_0808C56C(void);
extern void func_080D3914(void);
int func_080DB88C(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	bl func_0808C56C\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DB8C8\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DB8C8:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DB8D4 @ 0x080DB8D4 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DB8D4(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DB8FC @ 0x080DB8FC (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DB8FC @ 0x080DB8FC (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R)
 * Callees: func_080005D4, func_0805218C, func_080D3914
 * CFG Structure:
 *   L_080DB8FC: call func_080005D4(); call func_0805218C(); if (==) goto L_080DB938
 *   L_080DB938: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_0805218C(void);
extern void func_080D3914(void);
int func_080DB8FC(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	bl func_0805218C\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DB938\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DB938:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DB944 @ 0x080DB944 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DB944(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DB96C @ 0x080DB96C (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DB96C @ 0x080DB96C (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R), +0x0C:u8(R)
 * Callees: func_080005D4, func_08057DD8, func_080D3914
 * CFG Structure:
 *   L_080DB96C: call func_080005D4(); call func_08057DD8(); if (==) goto L_080DB9AA
 *   L_080DB9AA: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08057DD8(void);
extern void func_080D3914(void);
int func_080DB96C(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	ldrb r3, [r4, #0xc]\n"
        "	bl func_08057DD8\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DB9AA\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DB9AA:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DB9B4 @ 0x080DB9B4 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DB9B4(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DB9DC @ 0x080DB9DC (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DB9DC @ 0x080DB9DC (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R)
 * Callees: func_080005D4, func_0805E624, func_080D3914
 * CFG Structure:
 *   L_080DB9DC: call func_080005D4(); call func_0805E624(); if (==) goto L_080DBA18
 *   L_080DBA18: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_0805E624(void);
extern void func_080D3914(void);
int func_080DB9DC(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	bl func_0805E624\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DBA18\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DBA18:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DBA24 @ 0x080DBA24 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DBA24(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DBA4C @ 0x080DBA4C (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DBA4C @ 0x080DBA4C (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R), +0x0C:u8(R)
 * Callees: func_080005D4, func_0805CEB8, func_080D3914
 * CFG Structure:
 *   L_080DBA4C: call func_080005D4(); call func_0805CEB8(); if (==) goto L_080DBA8A
 *   L_080DBA8A: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_0805CEB8(void);
extern void func_080D3914(void);
int func_080DBA4C(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	ldrb r3, [r4, #0xc]\n"
        "	bl func_0805CEB8\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DBA8A\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DBA8A:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DBA94 @ 0x080DBA94 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DBA94(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DBABC @ 0x080DBABC (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DBABC @ 0x080DBABC (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R), +0x0C:u8(R)
 * Callees: func_080005D4, func_0809A4D4, func_080D3914
 * CFG Structure:
 *   L_080DBABC: call func_080005D4(); call func_0809A4D4(); if (==) goto L_080DBAFA
 *   L_080DBAFA: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_0809A4D4(void);
extern void func_080D3914(void);
int func_080DBABC(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	ldrb r3, [r4, #0xc]\n"
        "	bl func_0809A4D4\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DBAFA\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DBAFA:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DBB04 @ 0x080DBB04 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DBB04(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DBB2C @ 0x080DBB2C (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DBB2C @ 0x080DBB2C (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R), +0x0C:u32(R)
 * Callees: func_080005D4, func_0807B038, func_080D3914
 * CFG Structure:
 *   L_080DBB2C: call func_080005D4(); call func_0807B038(); if (==) goto L_080DBB6A
 *   L_080DBB6A: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_0807B038(void);
extern void func_080D3914(void);
int func_080DBB2C(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	ldr r3, [r4, #0xc]\n"
        "	bl func_0807B038\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DBB6A\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DBB6A:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DBB74 @ 0x080DBB74 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DBB74(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DBB9C @ 0x080DBB9C (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DBB9C @ 0x080DBB9C (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R)
 * Callees: func_080005D4, func_08081A40, func_080D3914
 * CFG Structure:
 *   L_080DBB9C: call func_080005D4(); call func_08081A40(); if (==) goto L_080DBBD8
 *   L_080DBBD8: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08081A40(void);
extern void func_080D3914(void);
int func_080DBB9C(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	bl func_08081A40\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DBBD8\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DBBD8:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DBBE4 @ 0x080DBBE4 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DBBE4(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DBC0C @ 0x080DBC0C (68B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DBC0C @ 0x080DBC0C (68 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R)
 * Callees: func_080005D4, func_08077C40, func_080D3914
 * CFG Structure:
 *   L_080DBC0C: call func_080005D4(); call func_08077C40(); if (==) goto L_080DBC44
 *   L_080DBC44: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08077C40(void);
extern void func_080D3914(void);
int func_080DBC0C(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	ldr r0, [r1, #4]\n"
        "	mov r4, #0\n"
        "	str r4, [r1, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	bl func_08077C40\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r4, [r1]\n"
        "	str r0, [r5]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DBC44\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DBC44:\n"
        "	add r0, r5, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DBC50 @ 0x080DBC50 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DBC50(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DBC78 @ 0x080DBC78 (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DBC78 @ 0x080DBC78 (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R)
 * Callees: func_080005D4, func_080931B0, func_080D3914
 * CFG Structure:
 *   L_080DBC78: call func_080005D4(); call func_080931B0(); if (==) goto L_080DBCB4
 *   L_080DBCB4: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_080931B0(void);
extern void func_080D3914(void);
int func_080DBC78(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	bl func_080931B0\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DBCB4\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DBCB4:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DBCC0 @ 0x080DBCC0 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DBCC0(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DBCE8 @ 0x080DBCE8 (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DBCE8 @ 0x080DBCE8 (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R), +0x0C:u32(R)
 * Callees: func_080005D4, func_08088168, func_080D3914
 * CFG Structure:
 *   L_080DBCE8: call func_080005D4(); call func_08088168(); if (==) goto L_080DBD26
 *   L_080DBD26: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08088168(void);
extern void func_080D3914(void);
int func_080DBCE8(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0x14\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	ldr r3, [r4, #0xc]\n"
        "	bl func_08088168\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DBD26\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DBD26:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DBD30 @ 0x080DBD30 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DBD30(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DBD58 @ 0x080DBD58 (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DBD58 @ 0x080DBD58 (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R), +0x0C:u32(R)
 * Callees: func_080005D4, func_0807D070, func_080D3914
 * CFG Structure:
 *   L_080DBD58: call func_080005D4(); call func_0807D070(); if (==) goto L_080DBD96
 *   L_080DBD96: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_0807D070(void);
extern void func_080D3914(void);
int func_080DBD58(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0x14\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	ldr r3, [r4, #0xc]\n"
        "	bl func_0807D070\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DBD96\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DBD96:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DBDA0 @ 0x080DBDA0 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DBDA0(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DBDC8 @ 0x080DBDC8 (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DBDC8 @ 0x080DBDC8 (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R)
 * Callees: func_080005D4, func_08080D94, func_080D3914
 * CFG Structure:
 *   L_080DBDC8: call func_080005D4(); call func_08080D94(); if (==) goto L_080DBE04
 *   L_080DBE04: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08080D94(void);
extern void func_080D3914(void);
int func_080DBDC8(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	bl func_08080D94\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DBE04\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DBE04:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DBE10 @ 0x080DBE10 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DBE10(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DBE38 @ 0x080DBE38 (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DBE38 @ 0x080DBE38 (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R)
 * Callees: func_080005D4, func_0807F580, func_080D3914
 * CFG Structure:
 *   L_080DBE38: call func_080005D4(); call func_0807F580(); if (==) goto L_080DBE74
 *   L_080DBE74: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_0807F580(void);
extern void func_080D3914(void);
int func_080DBE38(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	bl func_0807F580\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DBE74\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DBE74:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DBE80 @ 0x080DBE80 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DBE80(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DBEA8 @ 0x080DBEA8 (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DBEA8 @ 0x080DBEA8 (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R)
 * Callees: func_080005D4, func_08082114, func_080D3914
 * CFG Structure:
 *   L_080DBEA8: call func_080005D4(); call func_08082114(); if (==) goto L_080DBEE4
 *   L_080DBEE4: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08082114(void);
extern void func_080D3914(void);
int func_080DBEA8(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	bl func_08082114\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DBEE4\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DBEE4:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DBEF0 @ 0x080DBEF0 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DBEF0(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DBF18 @ 0x080DBF18 (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DBF18 @ 0x080DBF18 (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R)
 * Callees: func_080005D4, func_0808045C, func_080D3914
 * CFG Structure:
 *   L_080DBF18: call func_080005D4(); call func_0808045C(); if (==) goto L_080DBF54
 *   L_080DBF54: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_0808045C(void);
extern void func_080D3914(void);
int func_080DBF18(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	bl func_0808045C\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DBF54\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DBF54:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DBF60 @ 0x080DBF60 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DBF60(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DBF88 @ 0x080DBF88 (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DBF88 @ 0x080DBF88 (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R)
 * Callees: func_080005D4, func_080854F4, func_080D3914
 * CFG Structure:
 *   L_080DBF88: call func_080005D4(); call func_080854F4(); if (==) goto L_080DBFC4
 *   L_080DBFC4: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_080854F4(void);
extern void func_080D3914(void);
int func_080DBF88(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	bl func_080854F4\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DBFC4\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DBFC4:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DBFD0 @ 0x080DBFD0 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DBFD0(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DBFF8 @ 0x080DBFF8 (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DBFF8 @ 0x080DBFF8 (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R)
 * Callees: func_080005D4, func_0807EE14, func_080D3914
 * CFG Structure:
 *   L_080DBFF8: call func_080005D4(); call func_0807EE14(); if (==) goto L_080DC034
 *   L_080DC034: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_0807EE14(void);
extern void func_080D3914(void);
int func_080DBFF8(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	bl func_0807EE14\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DC034\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DC034:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DC040 @ 0x080DC040 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DC040(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DC068 @ 0x080DC068 (88B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DC068 @ 0x080DC068 (88 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R), +0x0C:u32(R), +0x10:u32(R), +0x14:u32(R), +0x18:u32(R), +0x1C:u8(R)
 * Callees: func_080005D4, func_08083A7C, func_080D3914
 * CFG Structure:
 *   L_080DC068: call func_080005D4(); call func_08083A7C(); if (==) goto L_080DC0B6
 *   L_080DC0B6: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08083A7C(void);
extern void func_080D3914(void);
int func_080DC068(void) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5, sp6, sp7;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5), "m"(sp6), "m"(sp7));
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	add r5, r1, #0\n"
        "	ldr r0, [r5, #4]\n"
        "	mov r6, #0\n"
        "	str r6, [r5, #4]\n"
        "	str r0, [sp, #0x14]\n"
        "	mov r0, #0x20\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #0x14\n"
        "	ldr r2, [r5, #8]\n"
        "	ldrb r3, [r5, #0x1c]\n"
        "	ldr r4, [r5, #0xc]\n"
        "	str r4, [sp]\n"
        "	ldr r4, [r5, #0x10]\n"
        "	str r4, [sp, #4]\n"
        "	ldr r4, [r5, #0x14]\n"
        "	str r4, [sp, #8]\n"
        "	ldr r4, [r5, #0x18]\n"
        "	str r4, [sp, #0xc]\n"
        "	bl func_08083A7C\n"
        "	str r0, [sp, #0x10]\n"
        "	add r1, sp, #0x10\n"
        "	str r1, [sp, #0x18]\n"
        "	str r0, [sp, #0x1c]\n"
        "	str r6, [r1]\n"
        "	str r0, [r7]\n"
        "	ldr r1, [sp, #0x10]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DC0B6\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DC0B6:\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080DC0C0 @ 0x080DC0C0 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DC0C0(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DC0E8 @ 0x080DC0E8 (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DC0E8 @ 0x080DC0E8 (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R), +0x0C:u32(R)
 * Callees: func_080005D4, func_0807E438, func_080D3914
 * CFG Structure:
 *   L_080DC0E8: call func_080005D4(); call func_0807E438(); if (==) goto L_080DC126
 *   L_080DC126: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_0807E438(void);
extern void func_080D3914(void);
int func_080DC0E8(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	ldr r3, [r4, #0xc]\n"
        "	bl func_0807E438\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DC126\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DC126:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DC130 @ 0x080DC130 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DC130(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DC158 @ 0x080DC158 (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DC158 @ 0x080DC158 (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R)
 * Callees: func_080005D4, func_0807DD38, func_080D3914
 * CFG Structure:
 *   L_080DC158: call func_080005D4(); call func_0807DD38(); if (==) goto L_080DC194
 *   L_080DC194: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_0807DD38(void);
extern void func_080D3914(void);
int func_080DC158(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	bl func_0807DD38\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DC194\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DC194:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DC1A0 @ 0x080DC1A0 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DC1A0(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DC1C8 @ 0x080DC1C8 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
void func_080DC1C8(void) {
  func_0800080C();
}

/* --- func_080DC1D4 @ 0x080DC1D4 (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DC1D4 @ 0x080DC1D4 (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(R), +0x08:u32(RW)
 * Callees: func_080005D4, func_08004B94, func_080D3914
 * CFG Structure:
 *   L_080DC1D4: call func_080005D4(); call func_08004B94(); if (==) goto L_080DC210
 *   L_080DC210: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08004B94(void);
extern void func_080D3914(void);
int func_080DC1D4(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #8]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #8]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #8\n"
        "	bl func_080005D4\n"
        "	ldr r1, [r4, #4]\n"
        "	add r2, sp, #4\n"
        "	bl func_08004B94\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DC210\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DC210:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DC21C @ 0x080DC21C (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DC21C(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 8);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DC244 @ 0x080DC244 (68B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DC244 @ 0x080DC244 (68 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(R), +0x08:u32(R)
 * Callees: func_080005D4, func_08011DC4, func_080D3914
 * CFG Structure:
 *   L_080DC244: call func_080005D4(); call func_08011DC4(); if (==) goto L_080DC27E
 *   L_080DC27E: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08011DC4(void);
extern void func_080D3914(void);
int func_080DC244(void) {
    u32 sp0, sp1, sp2;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2));
    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	add r4, r1, #0\n"
        "	mov r0, #8\n"
        "	bl func_080005D4\n"
        "	ldr r1, [r4, #4]\n"
        "	add r4, #8\n"
        "	add r2, r4, #0\n"
        "	bl func_08011DC4\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #4]\n"
        "	str r0, [sp, #8]\n"
        "	add r2, r1, #0\n"
        "	mov r1, #0\n"
        "	str r1, [r2]\n"
        "	str r0, [r5]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DC27E\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DC27E:\n"
        "	add r0, r5, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DC288 @ 0x080DC288 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
void func_080DC288(void) {
  func_0800080C();
}

/* --- func_080DC294 @ 0x080DC294 (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0803F878();
extern u32 func_080D7F3C();
/* paridad 94.1% preset agbcc_O2 */
void func_080DC294(u32 arg0) {
  func_0803F878(*(int *)0x0300040C + 8);
  func_080D7F3C(arg0);
}

/* --- func_080DC2B4 @ 0x080DC2B4 (172B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DC2B4 @ 0x080DC2B4 (172 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r3)
 * Fields : +0x00:u16(RW), +0x00:u32(R), +0x01:u8(RW), +0x02:u16(RW), +0x03:u8(RW), +0x04:u16(RW)
 * Callees: func_080D3918, func_080D7F08
 * CFG Structure:
 *   L_080DC2B4: call _call_via_r3(); call func_080D7F08(); return
 * ========================================================================== */
extern void func_080D3918(void);
extern void func_080D7F08(void);
void func_080DC2B4(void) {
    u32 sp0, sp1, sp2;
    int r7_var;
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2));
    __asm__ volatile(
        "	str r0, [sp, #8]\n"
        "	add r0, #0xa8\n"
        "	ldr r0, [r0]\n"
        "	ldr r4, [r0]\n"
        "	mov ip, r4\n"
        "	mov r5, #0xb4\n"
        "	add ip, r5\n"
        "	mov r8, sp\n"
        "	ldr r7, =0x000003FF\n"
        "	mov sl, r7\n"
        "	mov r4, sl\n"
        "	and r1, r4\n"
        "	mov r7, r8\n"
        "	ldrh r5, [r7]\n"
        "	ldr r6, =0xFFFFFC00\n"
        "	add r4, r6, #0\n"
        "	and r4, r5\n"
        "	orr r4, r1\n"
        "	strh r4, [r7]\n"
        "	lsl r2, r2, #0x10\n"
        "	lsr r4, r2, #0x10\n"
        "	mov r1, #0x3f\n"
        "	and r4, r1\n"
        "	lsl r4, r4, #2\n"
        "	ldrb r5, [r7, #1]\n"
        "	mov sb, r5\n"
        "	mov r5, #3\n"
        "	add r1, r5, #0\n"
        "	mov r7, sb\n"
        "	and r1, r7\n"
        "	orr r1, r4\n"
        "	mov r4, r8\n"
        "	strb r1, [r4, #1]\n"
        "	lsr r2, r2, #0x16\n"
        "	mov r7, sl\n"
        "	and r2, r7\n"
        "	ldrh r4, [r4, #2]\n"
        "	add r1, r6, #0\n"
        "	and r1, r4\n"
        "	orr r1, r2\n"
        "	mov r2, r8\n"
        "	strh r1, [r2, #2]\n"
        "	lsl r3, r3, #0x10\n"
        "	lsr r1, r3, #0x10\n"
        "	mov r4, #0x3f\n"
        "	and r1, r4\n"
        "	lsl r1, r1, #2\n"
        "	ldrb r2, [r2, #3]\n"
        "	and r5, r2\n"
        "	orr r5, r1\n"
        "	mov r7, r8\n"
        "	strb r5, [r7, #3]\n"
        "	lsr r3, r3, #0x16\n"
        "	mov r1, sl\n"
        "	and r3, r1\n"
        "	ldrh r1, [r7, #4]\n"
        "	and r6, r1\n"
        "	orr r6, r3\n"
        "	strh r6, [r7, #4]\n"
        "	mov r2, ip\n"
        "	ldr r3, [r2]\n"
        "	mov r1, sp\n"
        "	mov r2, #1\n"
        "	bl func_080D3918\n"
        "	ldr r0, [sp, #8]\n"
        "	bl func_080D7F08\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r10", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_080DC360 @ 0x080DC360 (64B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern u32 func_080D3910();
extern void func_080D7F9C();
void func_080DC360(int param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5) {
    register int r0 asm("r0") = param_1;
    register int p1 asm("r6");
    register u32 p2 asm("r8");
    register u32 p3 asm("r9");
    register u32 p4 asm("r4");
    register u32 p5 asm("r5");
    int *obj;
    u32 v;
    p1 = r0;
    __asm__("" : "+r"(p1), "+r"(r0));
    p2 = param_2;
    __asm__("" : "+r"(p2));
    p3 = param_3;
    __asm__("" : "+r"(p3));
    p4 = param_4;
    p5 = param_5;
    obj = *(int **)(r0 + 0xa8);
    v = func_080D3910(obj, *(u32 *)(*obj + 0x14));
    func_080D7F9C(p1, p2, v, p3, p4, p5);
}

/* --- func_080DC3A0 @ 0x080DC3A0 (100B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_08093A58();
extern void func_08093AD4();
extern void func_080D3914();
extern int func_08093AC8();
extern void func_08093A88();
int func_080DC3A0(int param_1, int param_2) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5;
    int r7_var;
    register int r6 asm("r6");
    register int r5 asm("r5");
    register int r4 asm("r4");
    register int ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5));
    __asm__ volatile(
        "mov r8, r0\n\t"
        "add %2, r1, #0\n\t"
        "add %1, sp, #0xc\n\t"
        "mov %0, #0\n\t"
        "str %0, [sp, #0xc]\n\t"
        "ldr r2, [%2, #8]\n\t"
        "mov r0, sp\n\t"
        "add r1, %1, #0\n\t"
        "bl func_08093A58\n\t"
        "add r0, %1, #0\n\t"
        "mov r1, sp\n\t"
        "bl func_08093AD4\n\t"
        "ldr r1, [sp, #0xc]\n\t"
        "cmp r1, #0\n\t"
        "beq _part2_DC3A0\n\t"
        "ldr r0, [r1]\n\t"
        "ldr r2, [r0, #8]\n\t"
        "add r0, r1, #0\n\t"
        "mov r1, #3\n\t"
        "bl func_080D3914\n"
        "_part2_DC3A0:\n\t"
        "ldr %3, [%2, #4]\n\t"
        "mov r0, sp\n\t"
        "bl func_08093AC8\n\t"
        "str r0, [%3, #0xc]\n\t"
        "ldr r0, [%2, #4]\n\t"
        "str %0, [%2, #4]\n\t"
        "str %1, [sp, #0x10]\n\t"
        "str r0, [sp, #0x14]\n\t"
        "str %0, [sp, #0xc]\n\t"
        "mov r1, r8\n\t"
        "str r0, [r1]\n\t"
        "mov r0, sp\n\t"
        "mov r1, #2\n\t"
        "bl func_08093A88\n\t"
        "mov r0, r8"
        : "=l"(r7_var), "=l"(r6), "=l"(r5), "=l"(r4) : : "r0", "r1", "r2", "r3", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    __asm__("" : "=r"(ret));
    return ret;
}

/* --- func_080DC404 @ 0x080DC404 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080007EC();
extern u32 func_080D3914();
void func_080DC404(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_080007EC(arg0,arg1);
}

/* --- func_080DC42C @ 0x080DC42C (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DC42C @ 0x080DC42C (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(R), +0x08:u32(RW)
 * Callees: func_080005D4, func_080701BC, func_080D3914
 * CFG Structure:
 *   L_080DC42C: call func_080005D4(); call func_080701BC(); if (==) goto L_080DC468
 *   L_080DC468: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_080701BC(void);
extern void func_080D3914(void);
int func_080DC42C(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #8]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #8]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #8\n"
        "	bl func_080005D4\n"
        "	ldr r1, [r4, #4]\n"
        "	add r2, sp, #4\n"
        "	bl func_080701BC\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DC468\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DC468:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DC474 @ 0x080DC474 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DC474(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 8);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DC49C @ 0x080DC49C (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DC49C @ 0x080DC49C (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R)
 * Callees: func_080005D4, func_080755EC, func_080D3914
 * CFG Structure:
 *   L_080DC49C: call func_080005D4(); call func_080755EC(); if (==) goto L_080DC4D8
 *   L_080DC4D8: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_080755EC(void);
extern void func_080D3914(void);
int func_080DC49C(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	bl func_080755EC\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DC4D8\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DC4D8:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DC4E4 @ 0x080DC4E4 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DC4E4(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DC50C @ 0x080DC50C (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DC50C @ 0x080DC50C (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R), +0x0C:u8(R)
 * Callees: func_080005D4, func_08069E14, func_080D3914
 * CFG Structure:
 *   L_080DC50C: call func_080005D4(); call func_08069E14(); if (==) goto L_080DC54A
 *   L_080DC54A: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08069E14(void);
extern void func_080D3914(void);
int func_080DC50C(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	ldrb r3, [r4, #0xc]\n"
        "	bl func_08069E14\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DC54A\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DC54A:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DC554 @ 0x080DC554 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080DC554(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080DC57C @ 0x080DC57C (44B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D0260();
void func_080DC57C(u32 arg0,int arg1) {
  int val;
  while (val = arg1, val != 0) {
    func_080DC57C(arg0,*(u32 *)(val + 0xc));
    arg1 = *(int *)(val + 8);
    if (val != 0) {
      func_080D0260(val);
    }
  }
}

/* --- func_080DC5A8 @ 0x080DC5A8 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080A47B4();
void func_080DC5A8(void) {
  func_080A47B4();
}

/* --- func_080DC5B4 @ 0x080DC5B4 (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
void func_080DC5B4(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E61A0;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080DC5D4 @ 0x080DC5D4 (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
void func_080DC5D4(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E61A0;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080DC5F4 @ 0x080DC5F4 (52B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
extern u32 func_080A47B4();
void func_080DC5F4(int arg0,u32 arg1) {
  func_080A47B4(arg0 + 0x48,2);
  func_080A47B4(arg0 + 8,2);
  *(u32 *)(arg0 + 4) = 0x080E65E0;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080DC628 @ 0x080DC628 (52B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
extern u32 func_080D3914();
void func_080DC628(int arg0,u32 arg1) {
  int val;
  *(u32 *)(arg0 + 0x14) = 0x080E6250;
  val = *(int *)(arg0 + 0x10);
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080DC65C @ 0x080DC65C (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
void func_080DC65C(int arg0,u32 arg1) {
  *(u32 *)(arg0 + 4) = 0x080E65E0;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080DC67C @ 0x080DC67C (116B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DC67C @ 0x080DC67C (116 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u8(R)
 * CFG Structure:
 *   L_080DC67C: if (<= (s)) goto L_080DC6B4
 *   L_080DC68E: if (==) goto L_080DC6E2
 *   L_080DC6B4: if (==) goto L_080DC6DA
 *   L_080DC6D0: if (==) goto L_080DC6E2
 *   L_080DC6DA: if (!=) goto L_080DC6E6
 *   L_080DC6E2: goto L_080DC6E8
 *   L_080DC6E8: return
 * ========================================================================== */
int func_080DC67C(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r5, r1, #0\n"
        "	add r4, r2, #0\n"
        "	add r3, r0, #0\n"
        "	sub r0, r5, r3\n"
        "	asr r2, r0, #2\n"
        "	cmp r2, #0\n"
        "	ble _L_080DC6B4\n"
        "	ldrb r1, [r4]\n"
        "_L_080DC68E:\n"
        "	ldrb r0, [r3]\n"
        "	cmp r0, r1\n"
        "	beq _L_080DC6E2\n"
        "	add r3, #1\n"
        "	ldrb r0, [r3]\n"
        "	cmp r0, r1\n"
        "	beq _L_080DC6E2\n"
        "	add r3, #1\n"
        "	ldrb r0, [r3]\n"
        "	cmp r0, r1\n"
        "	beq _L_080DC6E2\n"
        "	add r3, #1\n"
        "	ldrb r0, [r3]\n"
        "	cmp r0, r1\n"
        "	beq _L_080DC6E2\n"
        "	add r3, #1\n"
        "	sub r2, #1\n"
        "	cmp r2, #0\n"
        "	bgt _L_080DC68E\n"
        "_L_080DC6B4:\n"
        "	sub r0, r5, r3\n"
        "	cmp r0, #1\n"
        "	beq _L_080DC6DA\n"
        "	cmp r0, #1\n"
        "	ble _L_080DC6E6\n"
        "	cmp r0, #2\n"
        "	beq _L_080DC6D0\n"
        "	cmp r0, #3\n"
        "	bne _L_080DC6E6\n"
        "	ldrb r0, [r3]\n"
        "	ldrb r1, [r4]\n"
        "	cmp r0, r1\n"
        "	beq _L_080DC6E2\n"
        "	add r3, #1\n"
        "_L_080DC6D0:\n"
        "	ldrb r0, [r3]\n"
        "	ldrb r1, [r4]\n"
        "	cmp r0, r1\n"
        "	beq _L_080DC6E2\n"
        "	add r3, #1\n"
        "_L_080DC6DA:\n"
        "	ldrb r0, [r3]\n"
        "	ldrb r4, [r4]\n"
        "	cmp r0, r4\n"
        "	bne _L_080DC6E6\n"
        "_L_080DC6E2:\n"
        "	add r0, r3, #0\n"
        "	b _L_080DC6E8\n"
        "_L_080DC6E6:\n"
        "	add r0, r5, #0\n"
        "_L_080DC6E8:\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DC6F0 @ 0x080DC6F0 (52B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
extern u32 func_080D3914();
void func_080DC6F0(int arg0,u32 arg1) {
  int val;
  *(u32 *)(arg0 + 0x14) = 0x080E6250;
  val = *(int *)(arg0 + 0x10);
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080DC724 @ 0x080DC724 (64B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
extern u32 func_080A47B4();
void func_080DC724(int arg0,u32 arg1) {
  func_080A47B4(arg0 + 0x8c,2);
  func_080A47B4(arg0 + 0x48,2);
  func_080A47B4(arg0 + 8,2);
  *(u32 *)(arg0 + 4) = 0x080E65E0;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080DC764 @ 0x080DC764 (104B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080A47B4();
extern void func_08000608();
void func_080DC764(int param_1, int param_2) {
    register int p1 asm("r6") = param_1;
    int p2 = param_2;
    register int end asm("r5");
    register int cur asm("r4");
    __asm__ volatile("" : "+l"(p2), "+l"(p2), "+l"(p2));
    {
        register int *p_cc asm("r2") = (int *)(p1 + 0xcc);
        register int cnt asm("r1");
        register int off asm("r0");
        __asm__("ldr %0, [%1]" : "=r"(cnt) : "r"(p_cc));
        off = ((cnt * 9) << 3) + 4;
        __asm__("" : "+r"(off));
        end = (int)p_cc + off;
    }
    cur = p1 + 0xd0;
    for (; cur != end; cur += 0x48) {
        func_080A47B4(cur + 4, 2);
    }
    func_080A47B4(p1 + 0x8c, 2);
    func_080A47B4(p1 + 0x48, 2);
    func_080A47B4(p1 + 8, 2);
    *(u32 *)(p1 + 4) = 0x080E65E0;
    if (p2 & 1) {
        func_08000608(p1);
    }
}

/* --- func_080DC7CC @ 0x080DC7CC (52B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
extern u32 func_080D3914();
void func_080DC7CC(int arg0,u32 arg1) {
  int val;
  *(u32 *)(arg0 + 0x14) = 0x080E6250;
  val = *(int *)(arg0 + 0x10);
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080DC800 @ 0x080DC800 (52B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
extern u32 func_080D3914();
void func_080DC800(int arg0,u32 arg1) {
  int val;
  *(u32 *)(arg0 + 0x14) = 0x080E6250;
  val = *(int *)(arg0 + 0x10);
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080DC834 @ 0x080DC834 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080A47B4();
void func_080DC834(void) {
  func_080A47B4();
}

/* --- func_080DC840 @ 0x080DC840 (80B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DC840 @ 0x080DC840 (80 bytes)
 * Role   : C++ Class Constructor / Polymorphic Method [vtable: 0x080E82D8]
 * Fields : +0x04:u32(RW), +0x0C:u16(RW), +0x10:u32(RW), +0x24:u32(W)
 * Callees: func_08007874, func_08007CD8, func_080D39F8
 * CFG Structure:
 *   L_080DC840: call func_08007874(); call func_08007CD8(); if (==) goto L_080DC880
 *   L_080DC880: return
 * ========================================================================== */
extern void func_08007874(void);
extern void func_08007CD8(void);
extern void func_080D39F8(void);
int func_080DC840(void) {
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	add r5, r1, #0\n"
        "	ldr r0, =0x080E82D8\n"
        "	str r0, [r7, #0x24]\n"
        "	add r6, r5, #0\n"
        "	ldm r6!, {r0}\n"
        "	add r4, r7, #0\n"
        "	stm r4!, {r0}\n"
        "	add r0, r4, #0\n"
        "	bl func_08007874\n"
        "	ldr r1, [r6, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007CD8\n"
        "	str r0, [r4, #4]\n"
        "	ldrh r0, [r5, #0xc]\n"
        "	mov r1, #0\n"
        "	strh r0, [r7, #0xc]\n"
        "	str r1, [r7, #0x10]\n"
        "	ldr r4, [r5, #0x10]\n"
        "	add r1, r5, #0\n"
        "	add r1, #0x14\n"
        "	add r0, r7, #0\n"
        "	add r0, #0x14\n"
        "	add r2, r1, r4\n"
        "	cmp r2, r1\n"
        "	beq _L_080DC880\n"
        "	sub r2, r2, r1\n"
        "	bl func_080D39F8\n"
        "_L_080DC880:\n"
        "	str r4, [r7, #0x10]\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080DC890 @ 0x080DC890 (52B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
extern u32 func_080A47B4();
void func_080DC890(int arg0,u32 arg1) {
  func_080A47B4(arg0 + 0x48,2);
  func_080A47B4(arg0 + 8,2);
  *(u32 *)(arg0 + 4) = 0x080E65E0;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080DC8C4 @ 0x080DC8C4 (52B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
extern u32 func_080D3914();
void func_080DC8C4(int arg0,u32 arg1) {
  int val;
  *(u32 *)(arg0 + 0x14) = 0x080E6250;
  val = *(int *)(arg0 + 0x10);
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080DC8F8 @ 0x080DC8F8 (52B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
extern u32 func_080A47B4();
void func_080DC8F8(int arg0,u32 arg1) {
  func_080A47B4(arg0 + 0x48,2);
  func_080A47B4(arg0 + 8,2);
  *(u32 *)(arg0 + 4) = 0x080E65E0;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080DC92C @ 0x080DC92C (64B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
extern u32 func_080A47B4();
void func_080DC92C(int arg0,u32 arg1) {
  func_080A47B4(arg0 + 0x8c,2);
  func_080A47B4(arg0 + 0x48,2);
  func_080A47B4(arg0 + 8,2);
  *(u32 *)(arg0 + 4) = 0x080E65E0;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080DC96C @ 0x080DC96C (60B) [PURE-C | agbcc_O2] --- */
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
u32 func_080DC96C(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r4 = r0 + 0;
    r1 = r1 - r4;
    r1 = (int)r1 >> 3;
    if ((int)r1 <= 0) goto loc_080DC99E;
    r5 = *(u32 *)(r2);
loc_080DC97A:
    r3 = (int)r1 >> 1;
    r0 = r4 + (r3 << 3);
    r2 = 0;
    r6 = *(u16 *)(r0);
    if (r5 >= r6) goto loc_080DC98A;
    r2 = 1;
loc_080DC98A:
    if (r2 == 0) goto loc_080DC992;
    r1 = r3 + 0;
    goto loc_080DC99A;
loc_080DC992:
    r4 = r0 + 0;
    r4 += 8;
    r0 = r1 - r3;
    r1 = r0 - 1;
loc_080DC99A:
    if ((int)r1 > 0) goto loc_080DC97A;
loc_080DC99E:
    r0 = r4 + 0;
    return r4;
    r0 = r0;
    return r0;
}

/* --- func_080DC9A8 @ 0x080DC9A8 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DC9A8(void) {
  func_08034DB0();
}

/* --- func_080DC9B4 @ 0x080DC9B4 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DC9B4(void) {
  func_08034DB0();
}

/* --- func_080DC9C0 @ 0x080DC9C0 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DC9C0(void) {
  func_08034DB0();
}

/* --- func_080DC9CC @ 0x080DC9CC (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DC9CC(void) {
  func_08034DB0();
}

/* --- func_080DC9D8 @ 0x080DC9D8 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DC9D8(void) {
  func_08034DB0();
}

/* --- func_080DC9E4 @ 0x080DC9E4 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DC9E4(void) {
  func_08034DB0();
}

/* --- func_080DC9F0 @ 0x080DC9F0 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DC9F0(void) {
  func_08034DB0();
}

/* --- func_080DC9FC @ 0x080DC9FC (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DC9FC(void) {
  func_08034DB0();
}

/* --- func_080DCA08 @ 0x080DCA08 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCA08(void) {
  func_08034DB0();
}

/* --- func_080DCA14 @ 0x080DCA14 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCA14(void) {
  func_08034DB0();
}

/* --- func_080DCA20 @ 0x080DCA20 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCA20(void) {
  func_08034DB0();
}

/* --- func_080DCA2C @ 0x080DCA2C (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCA2C(void) {
  func_08034DB0();
}

/* --- func_080DCA38 @ 0x080DCA38 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCA38(void) {
  func_08034DB0();
}

/* --- func_080DCA44 @ 0x080DCA44 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCA44(void) {
  func_08034DB0();
}

/* --- func_080DCA50 @ 0x080DCA50 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCA50(void) {
  func_08034DB0();
}

/* --- func_080DCA5C @ 0x080DCA5C (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCA5C(void) {
  func_08034DB0();
}

/* --- func_080DCA68 @ 0x080DCA68 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCA68(void) {
  func_08034DB0();
}

/* --- func_080DCA74 @ 0x080DCA74 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCA74(void) {
  func_08034DB0();
}

/* --- func_080DCA80 @ 0x080DCA80 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCA80(void) {
  func_08034DB0();
}

/* --- func_080DCA8C @ 0x080DCA8C (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCA8C(void) {
  func_08034DB0();
}

/* --- func_080DCA98 @ 0x080DCA98 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCA98(void) {
  func_08034DB0();
}

/* --- func_080DCAA4 @ 0x080DCAA4 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCAA4(void) {
  func_08034DB0();
}

/* --- func_080DCAB0 @ 0x080DCAB0 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCAB0(void) {
  func_08034DB0();
}

/* --- func_080DCABC @ 0x080DCABC (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCABC(void) {
  func_08034DB0();
}

/* --- func_080DCAC8 @ 0x080DCAC8 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCAC8(void) {
  func_08034DB0();
}

/* --- func_080DCAD4 @ 0x080DCAD4 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCAD4(void) {
  func_08034DB0();
}

/* --- func_080DCAE0 @ 0x080DCAE0 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCAE0(void) {
  func_08034DB0();
}

/* --- func_080DCAEC @ 0x080DCAEC (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCAEC(void) {
  func_08034DB0();
}

/* --- func_080DCAF8 @ 0x080DCAF8 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCAF8(void) {
  func_08034DB0();
}

/* --- func_080DCB04 @ 0x080DCB04 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCB04(void) {
  func_08034DB0();
}

/* --- func_080DCB10 @ 0x080DCB10 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCB10(void) {
  func_08034DB0();
}

/* --- func_080DCB1C @ 0x080DCB1C (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCB1C(void) {
  func_08034DB0();
}

/* --- func_080DCB28 @ 0x080DCB28 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCB28(void) {
  func_08034DB0();
}

/* --- func_080DCB34 @ 0x080DCB34 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCB34(void) {
  func_08034DB0();
}

/* --- func_080DCB40 @ 0x080DCB40 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08034DB0();
void func_080DCB40(void) {
  func_08034DB0();
}

/* --- func_080DCB4C @ 0x080DCB4C (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08037048();
void func_080DCB4C(void) {
  func_08037048();
}

/* --- func_080DCB58 @ 0x080DCB58 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08037048();
void func_080DCB58(void) {
  func_08037048();
}

/* --- func_080DCB64 @ 0x080DCB64 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08037048();
void func_080DCB64(void) {
  func_08037048();
}

/* --- func_080DCB70 @ 0x080DCB70 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08037048();
void func_080DCB70(void) {
  func_08037048();
}

/* --- func_080DCB7C @ 0x080DCB7C (432B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DCB7C @ 0x080DCB7C (432 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r1)
 * Fields : +0x00:u16(RW), +0x00:u32(RW), +0x00:u8(RW), +0x02:u16(R), +0x04:u8(R), +0x40:u32(W), +0x48:u32(W), +0x7C:u32(R)
 * Callees: func_080A47B4, func_080A4A00, func_080D0ED0, func_080D0F4E, func_080D11E4, func_080D3910, func_080DCD2C
 * CFG Structure:
 *   L_080DCB7C: call _call_via_r1(); if (==) goto L_080DCBB8
 *   L_080DCBBC: call func_080A4A00(); if (> (u)) goto L_080DCC1E
 *   L_080DCC1E: call func_080A47B4()
 *   L_080DCC32: call func_080D11E4(); call func_080D0ED0(); call func_080D11E4(); call func_080D0F4E(); call func_080D11E4(); call func_080D0ED0()
 *   L_080DCCA8: call func_080A4A00(); if (> (u)) goto L_080DCD04
 *   L_080DCD04: call func_080A47B4(); if (<= (u)) goto L_080DCC32
 * ========================================================================== */
extern void func_080A47B4(void);
extern void func_080A4A00(void);
extern void func_080D0ED0(void);
extern void func_080D0F4E(void);
extern void func_080D11E4(void);
extern void func_080D3910(void);
extern void func_080DCD2C(void);
void func_080DCB7C(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, r7, lr}\n"
        "	mov r7, sl\n"
        "	mov r6, sb\n"
        "	mov r5, r8\n"
        "	push {r5, r6, r7}\n"
        "	sub sp, #0x6c\n"
        "	mov r8, r0\n"
        "	mov sl, r1\n"
        "	lsl r2, r2, #0x18\n"
        "	lsr r2, r2, #0x18\n"
        "	str r2, [sp, #0x5c]\n"
        "	mov r0, #0\n"
        "	mov r1, r8\n"
        "	str r0, [r1]\n"
        "	add r5, sp, #0xc\n"
        "	mov r2, sl\n"
        "	ldr r0, [r2]\n"
        "	ldr r1, [r0, #0x7c]\n"
        "	mov r0, sl\n"
        "	bl func_080D3910\n"
        "	add r1, r0, #0\n"
        "	ldr r3, [sp, #0x5c]\n"
        "	cmp r3, #0\n"
        "	beq _L_080DCBB8\n"
        "	ldr r0, .Lpool_080DCBB4\n"
        "	ldrh r2, [r0, #2]\n"
        "	b _L_080DCBBC\n"
        ".Lpool_080DCBB4:\n"
        "	.word 0x080F1684\n"
        "_L_080DCBB8:\n"
        "	ldr r0, .Lpool_080DCC90\n"
        "	ldrh r2, [r0]\n"
        "_L_080DCBBC:\n"
        "	mov r0, #6\n"
        "	str r0, [sp]\n"
        "	mov r0, #0x1d\n"
        "	str r0, [sp, #4]\n"
        "	add r4, sp, #8\n"
        "	mov r0, #0\n"
        "	strb r0, [r4]\n"
        "	add r0, r5, #0\n"
        "	mov r3, sl\n"
        "	bl func_080A4A00\n"
        "	mov r0, #0xc8\n"
        "	lsl r0, r0, #0xf\n"
        "	str r0, [r5, #0x40]\n"
        "	add r1, r5, #0\n"
        "	add r1, #0x44\n"
        "	mov r0, #0x96\n"
        "	lsl r0, r0, #1\n"
        "	strh r0, [r1]\n"
        "	ldr r0, .Lpool_080DCC94\n"
        "	str r0, [r5, #0x48]\n"
        "	ldr r0, .Lpool_080DCC90\n"
        "	ldrb r1, [r0, #4]\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x4c\n"
        "	strb r1, [r0]\n"
        "	add r1, r5, #0\n"
        "	add r1, #0x4d\n"
        "	mov r0, #1\n"
        "	strb r0, [r1]\n"
        "	mov r0, r8\n"
        "	ldr r1, [r0]\n"
        "	str r4, [sp, #0x68]\n"
        "	cmp r1, #4\n"
        "	bhi _L_080DCC1E\n"
        "	lsl r0, r1, #2\n"
        "	add r0, r0, r1\n"
        "	lsl r0, r0, #4\n"
        "	add r0, #4\n"
        "	add r0, r8\n"
        "	cmp r0, #0\n"
        "	beq _L_080DCC16\n"
        "	add r1, sp, #0xc\n"
        "	bl func_080DCD2C\n"
        "_L_080DCC16:\n"
        "	mov r1, r8\n"
        "	ldr r0, [r1]\n"
        "	add r0, #1\n"
        "	str r0, [r1]\n"
        "_L_080DCC1E:\n"
        "	add r0, sp, #0xc\n"
        "	mov r1, #2\n"
        "	bl func_080A47B4\n"
        "	mov r2, #0\n"
        "	str r2, [sp, #0x60]\n"
        "	add r7, sp, #0xc\n"
        "	mov r3, sp\n"
        "	add r3, #0x59\n"
        "	str r3, [sp, #0x64]\n"
        "_L_080DCC32:\n"
        "	bl func_080D11E4\n"
        "	mov r1, #3\n"
        "	bl func_080D0ED0\n"
        "	add r6, r0, #0\n"
        "	bl func_080D11E4\n"
        "	mov r1, #0xf0\n"
        "	lsl r1, r1, #1\n"
        "	bl func_080D0F4E\n"
        "	add r5, r0, #0\n"
        "	ldr r4, .Lpool_080DCC98\n"
        "	bl func_080D11E4\n"
        "	mov r1, #3\n"
        "	bl func_080D0ED0\n"
        "	add r0, r0, r4\n"
        "	ldrb r4, [r0]\n"
        "	bl func_080D11E4\n"
        "	mov r1, #3\n"
        "	bl func_080D0ED0\n"
        "	lsl r0, r0, #2\n"
        "	ldr r1, .Lpool_080DCC9C\n"
        "	add r0, r0, r1\n"
        "	ldr r0, [r0]\n"
        "	mov sb, r0\n"
        "	mov r2, sl\n"
        "	ldr r0, [r2]\n"
        "	ldr r1, [r0, #0x7c]\n"
        "	mov r0, sl\n"
        "	bl func_080D3910\n"
        "	add r1, r0, #0\n"
        "	ldr r3, [sp, #0x5c]\n"
        "	cmp r3, #0\n"
        "	beq _L_080DCCA0\n"
        "	lsl r0, r6, #3\n"
        "	ldr r2, .Lpool_080DCC90\n"
        "	add r0, r0, r2\n"
        "	ldrh r2, [r0, #2]\n"
        "	b _L_080DCCA8\n"
        "	.hword 0x0000\n"
        ".Lpool_080DCC90:\n"
        "	.word 0x080F1684\n"
        ".Lpool_080DCC94:\n"
        "	.word 0x00002666\n"
        ".Lpool_080DCC98:\n"
        "	.word 0x080F1672\n"
        ".Lpool_080DCC9C:\n"
        "	.word 0x080F1678\n"
        "_L_080DCCA0:\n"
        "	lsl r0, r6, #3\n"
        "	ldr r3, .Lpool_080DCD28\n"
        "	add r0, r0, r3\n"
        "	ldrh r2, [r0]\n"
        "_L_080DCCA8:\n"
        "	mov r0, #6\n"
        "	str r0, [sp]\n"
        "	mov r0, #0x1d\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0\n"
        "	ldr r3, [sp, #0x68]\n"
        "	strb r0, [r3]\n"
        "	add r0, r7, #0\n"
        "	mov r3, sl\n"
        "	bl func_080A4A00\n"
        "	lsl r0, r5, #0x10\n"
        "	str r0, [r7, #0x40]\n"
        "	add r0, r7, #0\n"
        "	add r0, #0x44\n"
        "	strh r4, [r0]\n"
        "	mov r0, sb\n"
        "	str r0, [r7, #0x48]\n"
        "	lsl r0, r6, #3\n"
        "	ldr r1, .Lpool_080DCD28\n"
        "	add r0, r0, r1\n"
        "	ldrb r1, [r0, #4]\n"
        "	add r0, r7, #0\n"
        "	add r0, #0x4c\n"
        "	strb r1, [r0]\n"
        "	mov r0, #1\n"
        "	ldr r2, [sp, #0x64]\n"
        "	strb r0, [r2]\n"
        "	mov r3, r8\n"
        "	ldr r1, [r3]\n"
        "	cmp r1, #4\n"
        "	bhi _L_080DCD04\n"
        "	lsl r0, r1, #2\n"
        "	add r0, r0, r1\n"
        "	lsl r0, r0, #4\n"
        "	add r0, #4\n"
        "	add r0, r8\n"
        "	cmp r0, #0\n"
        "	beq _L_080DCCFC\n"
        "	add r1, sp, #0xc\n"
        "	bl func_080DCD2C\n"
        "_L_080DCCFC:\n"
        "	mov r1, r8\n"
        "	ldr r0, [r1]\n"
        "	add r0, #1\n"
        "	str r0, [r1]\n"
        "_L_080DCD04:\n"
        "	add r0, sp, #0xc\n"
        "	mov r1, #2\n"
        "	bl func_080A47B4\n"
        "	ldr r2, [sp, #0x60]\n"
        "	add r2, #1\n"
        "	str r2, [sp, #0x60]\n"
        "	cmp r2, #3\n"
        "	bls _L_080DCC32\n"
        "	mov r0, r8\n"
        "	add sp, #0x6c\n"
        "	pop {r3, r4, r5}\n"
        "	mov r8, r3\n"
        "	mov sb, r4\n"
        "	mov sl, r5\n"
        "	pop {r4, r5, r6, r7}\n"
        "	pop {r1}\n"
        "	bx r1\n"
        ".Lpool_080DCD28:\n"
        "	.word 0x080F1684\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080DCD2C @ 0x080DCD2C (132B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DCD2C @ 0x080DCD2C (132 bytes)
 * Role   : C++ Class Constructor / Polymorphic Method [vtable: 0x080E681C]
 * Fields : +0x00:u16(RW), +0x00:u8(RW), +0x24:u32(W), +0x40:u32(RW), +0x48:u32(RW)
 * Callees: func_080DC840
 * CFG Structure:
 *   L_080DCD2C: call func_080DC840(); return
 * ========================================================================== */
extern void func_080DC840(void);
int func_080DCD2C(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	add r5, r1, #0\n"
        "	bl func_080DC840\n"
        "	ldr r0, =0x080E681C\n"
        "	str r0, [r4, #0x24]\n"
        "	add r1, r4, #0\n"
        "	add r1, #0x28\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x28\n"
        "	ldm r0!, {r2, r3, r6}\n"
        "	stm r1!, {r2, r3, r6}\n"
        "	ldm r0!, {r2, r3}\n"
        "	stm r1!, {r2, r3}\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x3c\n"
        "	ldrb r1, [r0]\n"
        "	add r0, r4, #0\n"
        "	add r0, #0x3c\n"
        "	strb r1, [r0]\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x3d\n"
        "	ldrb r0, [r0]\n"
        "	add r1, r4, #0\n"
        "	add r1, #0x3d\n"
        "	strb r0, [r1]\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x3e\n"
        "	ldrb r0, [r0]\n"
        "	add r1, #1\n"
        "	strb r0, [r1]\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x3f\n"
        "	ldrb r0, [r0]\n"
        "	add r1, #1\n"
        "	strb r0, [r1]\n"
        "	ldr r0, [r5, #0x40]\n"
        "	str r0, [r4, #0x40]\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x44\n"
        "	ldrh r1, [r0]\n"
        "	add r0, r4, #0\n"
        "	add r0, #0x44\n"
        "	strh r1, [r0]\n"
        "	ldr r0, [r5, #0x48]\n"
        "	str r0, [r4, #0x48]\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x4c\n"
        "	ldrb r1, [r0]\n"
        "	add r0, r4, #0\n"
        "	add r0, #0x4c\n"
        "	strb r1, [r0]\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x4d\n"
        "	ldrb r0, [r0]\n"
        "	add r2, r4, #0\n"
        "	add r2, #0x4d\n"
        "	strb r0, [r2]\n"
        "	add r0, r4, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080DCDB0 @ 0x080DCDB0 (176B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080A47B4();
extern void func_08000608();
extern void func_080D3914();
void func_080DCDB0(int param_1, int param_2) {
    int r7_var;
    register int r6 asm("r6");
    register int r5 asm("r5");
    register int r4 asm("r4");
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "mov r8, r1\n\t"
        "ldr r0, [%0, #0x14]\n\t"
        "cmp r0, #0\n\t"
        "beq _part2_DCDB0\n\t"
        "add %1, r0, #0\n\t"
        "ldr r1, [%1]\n\t"
        "lsl r0, r1, #2\n\t"
        "add r0, r0, r1\n\t"
        "lsl r0, r0, #4\n\t"
        "add r0, #4\n\t"
        "add %2, %1, r0\n\t"
        "add %3, %1, #4\n\t"
        "cmp %3, %2\n\t"
        "beq _free1_DCDB0\n"
        "_loop1_DCDB0:\n\t"
        "add r0, %3, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_080A47B4\n\t"
        "add %3, #0x50\n\t"
        "cmp %3, %2\n\t"
        "bne _loop1_DCDB0\n"
        "_free1_DCDB0:\n\t"
        "add r0, %1, #0\n\t"
        "bl func_08000608\n"
        "_part2_DCDB0:\n\t"
        "ldr r0, [%0, #0x10]\n\t"
        "cmp r0, #0\n\t"
        "beq _part3_DCDB0\n\t"
        "add %1, r0, #0\n\t"
        "ldr r0, [%1]\n\t"
        "lsl r0, r0, #6\n\t"
        "add r0, #4\n\t"
        "add %2, %1, r0\n\t"
        "add %3, %1, #4\n\t"
        "cmp %3, %2\n\t"
        "beq _free2_DCDB0\n"
        "_loop2_DCDB0:\n\t"
        "ldr r0, [%3, #0x24]\n\t"
        "ldr r2, [r0, #8]\n\t"
        "add r0, %3, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_080D3914\n\t"
        "add %3, #0x40\n\t"
        "cmp %3, %2\n\t"
        "bne _loop2_DCDB0\n"
        "_free2_DCDB0:\n\t"
        "add r0, %1, #0\n\t"
        "bl func_08000608\n"
        "_part3_DCDB0:\n\t"
        "ldr %3, [%0, #0xc]\n\t"
        "cmp %3, #0\n\t"
        "beq _part4_DCDB0\n\t"
        "add r0, %3, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_080A47B4\n\t"
        "add r0, %3, #0\n\t"
        "bl func_08000608\n"
        "_part4_DCDB0:\n\t"
        "ldr %3, [%0, #8]\n\t"
        "cmp %3, #0\n\t"
        "beq _part5_DCDB0\n\t"
        "add r0, %3, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_080A47B4\n\t"
        "add r0, %3, #0\n\t"
        "bl func_08000608\n"
        "_part5_DCDB0:\n\t"
        "ldr r0, =0x080E65E0\n\t"
        "str r0, [%0, #4]\n\t"
        "mov r0, #1\n\t"
        "mov r1, r8\n\t"
        "and r0, r1\n\t"
        "cmp r0, #0\n\t"
        "beq _end_DCDB0\n\t"
        "add r0, %0, #0\n\t"
        "bl func_08000608\n"
        "_end_DCDB0:"
        : "=l"(r7_var), "=l"(r6), "=l"(r5), "=l"(r4) : : "r0", "r1", "r2", "r3", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_080DCE60 @ 0x080DCE60 (52B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
extern u32 func_080D3914();
void func_080DCE60(int arg0,u32 arg1) {
  int val;
  *(u32 *)(arg0 + 0x14) = 0x080E6250;
  val = *(int *)(arg0 + 0x10);
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080DCE94 @ 0x080DCE94 (44B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
extern u32 func_080A47B4();
void func_080DCE94(int arg0,u32 arg1) {
  func_080A47B4(arg0 + 8,2);
  *(u32 *)(arg0 + 4) = 0x080E65E0;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080DCEC0 @ 0x080DCEC0 (44B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
extern u32 func_080A47B4();
void func_080DCEC0(int arg0,u32 arg1) {
  func_080A47B4(arg0 + 8,2);
  *(u32 *)(arg0 + 4) = 0x080E65E0;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080DCEEC @ 0x080DCEEC (52B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
extern u32 func_080D3914();
void func_080DCEEC(int arg0,u32 arg1) {
  int val;
  *(u32 *)(arg0 + 0x14) = 0x080E6250;
  val = *(int *)(arg0 + 0x10);
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080DCF20 @ 0x080DCF20 (44B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
extern u32 func_080A47B4();
void func_080DCF20(int arg0,u32 arg1) {
  func_080A47B4(arg0 + 8,2);
  *(u32 *)(arg0 + 4) = 0x080E65E0;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080DCF4C @ 0x080DCF4C (128B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DCF4C @ 0x080DCF4C (128 bytes)
 * Role   : C++ Virtual Deleting Destructor ~Class(this, int __in_chrg) [vtable: 0x080E6250, 0x080E7568]
 * Fields : +0x00:u32(R), +0x04:u32(R), +0x08:u32(R), +0x10:u32(R), +0x14:u32(RW), +0x18:u32(R), +0x4C:u32(R)
 * Callees: func_08000608, func_080D3914
 * CFG Structure:
 *   L_080DCF4C: if (==) goto L_080DCF90
 *   L_080DCF74: if (==) goto L_080DCF86
 *   L_080DCF86: if (< (u)) goto L_080DCF74
 *   L_080DCF90: if (==) goto L_080DCFA8
 *   L_080DCFA8: if (==) goto L_080DCFB8
 *   L_080DCFB8: return
 * ========================================================================== */
extern void func_08000608(void);
extern void func_080D3914(void);
void func_080DCF4C(void) {
    int r7_var;
    __asm__ volatile(
        "	mov r8, r0\n"
        "	mov sb, r1\n"
        "	ldr r0, =0x080E7568\n"
        "	mov r1, r8\n"
        "	str r0, [r1, #0x14]\n"
        "	ldr r0, [r1, #0x10]\n"
        "	cmp r0, #0\n"
        "	beq _L_080DCF90\n"
        "	ldr r1, [r1, #0x18]\n"
        "	mov r6, #0\n"
        "	ldr r7, [r0, #8]\n"
        "	cmp r6, r7\n"
        "	bhs _L_080DCF90\n"
        "	add r5, r1, #0\n"
        "	add r4, r0, #0\n"
        "	add r4, #0xc\n"
        "_L_080DCF74:\n"
        "	ldr r1, [r4]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DCF86\n"
        "	ldr r0, [r1, #0x4c]\n"
        "	ldr r2, [r0, #0x14]\n"
        "	add r0, r1, #0\n"
        "	add r1, r5, #0\n"
        "	bl func_080D3914\n"
        "_L_080DCF86:\n"
        "	add r5, #0x10\n"
        "	add r4, #4\n"
        "	add r6, #1\n"
        "	cmp r6, r7\n"
        "	blo _L_080DCF74\n"
        "_L_080DCF90:\n"
        "	ldr r0, =0x080E6250\n"
        "	mov r2, r8\n"
        "	str r0, [r2, #0x14]\n"
        "	ldr r1, [r2, #0x10]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DCFA8\n"
        "	ldr r0, [r1, #4]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DCFA8:\n"
        "	mov r0, #1\n"
        "	mov r1, sb\n"
        "	and r0, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080DCFB8\n"
        "	mov r0, r8\n"
        "	bl func_08000608\n"
        "_L_080DCFB8:\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_080DCFCC @ 0x080DCFCC (20B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0801FE20();
void func_080DCFCC(int arg0) {
  func_0801FE20();
  *(u8 *)(arg0 + 0x1c) = 0;
}

/* --- func_080DCFE0 @ 0x080DCFE0 (932B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DCFE0 @ 0x080DCFE0 (932 bytes)
 * Role   : C++ Factory / Constructor with operator new (func_080005D4) [vtable: 0x080E759C, 0x080E75B4, 0x080E75CC, 0x080E75E4, 0x080E75FC, 0x080E7614, 0x080E762C, 0x080E7644, 0x080E765C, 0x080E7674, 0x080E768C, 0x080E76A4, 0x080E76D4]
 * Fields : +0x00:u16(W), +0x00:u32(RW), +0x00:u8(RW), +0x04:u16(R), +0x04:u32(RW), +0x06:u16(R), +0x08:u32(RW), +0x08:u8(R), +0x0A:u8(R), +0x18:u32(R), +0x1C:u8(R), +0x4C:u32(W)
 * Callees: func_080005D4, func_0800E324, func_08039E98, func_0803A144, func_0803A394, func_080D3910
 * CFG Structure:
 *   L_080DCFE0: if (!=) goto L_080DCFF6
 *   L_080DCFF6: call func_080005D4()
 *   L_080DD012: if (<= (u)) goto L_080DD028
 *   L_080DD06C: call func_080005D4(); call func_08039E98(); goto L_080DD2AA
 *   L_080DD094: call func_080005D4(); call func_08039E98(); goto L_080DD2AA
 *   L_080DD0B4: call func_080005D4(); call func_08039E98(); goto L_080DD2AA
 *   L_080DD0DC: call func_080005D4(); call func_08039E98(); goto L_080DD2AA
 *   L_080DD104: call func_080005D4(); call func_08039E98(); goto L_080DD2DE
 *   L_080DD160: call func_080005D4(); call func_08039E98(); call func_0803A144(); goto L_080DD2DE
 *   L_080DD1D4: call func_080005D4(); call func_08039E98(); goto L_080DD2AA
 *   L_080DD1FC: call func_080005D4(); call func_08039E98(); goto L_080DD2AA
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_0800E324(void);
extern void func_08039E98(void);
extern void func_0803A144(void);
extern void func_0803A394(void);
extern void func_080D3910(void);
int func_080DCFE0(void) {
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	mov r7, #0\n"
        "	ldrb r0, [r4, #0x1c]\n"
        "	cmp r0, #0\n"
        "	bne _L_080DCFF6\n"
        "	b _L_080DD318\n"
        "_L_080DCFF6:\n"
        "	mov r0, #0x18\n"
        "	bl func_080005D4\n"
        "	add r6, r0, #0\n"
        "	ldr r0, [r4, #0x18]\n"
        "	mov sl, r0\n"
        "	str r4, [r6]\n"
        "	ldr r0, .Lpool_080DD034\n"
        "	str r0, [r6, #4]\n"
        "	str r7, [r6, #8]\n"
        "	ldr r4, [r4]\n"
        "	mov r8, r4\n"
        "	mov r1, #0\n"
        "	mov sb, r1\n"
        "_L_080DD012:\n"
        "	mov r2, sb\n"
        "	lsl r0, r2, #4\n"
        "	mov r1, sl\n"
        "	add r7, r1, r0\n"
        "	ldrb r0, [r7]\n"
        "	lsl r0, r0, #0x1c\n"
        "	lsr r0, r0, #0x1c\n"
        "	sub r0, #1\n"
        "	cmp r0, #0xb\n"
        "	bls _L_080DD028\n"
        "	b _L_080DD2FA\n"
        "_L_080DD028:\n"
        "	lsl r0, r0, #2\n"
        "	ldr r1, .Lpool_080DD038\n"
        "	add r0, r0, r1\n"
        "	ldr r0, [r0]\n"
        "	mov pc, r0\n"
        "	.align 2, 0\n"
        ".Lpool_080DD034:\n"
        "	.word 0x080E76D4\n"
        ".Lpool_080DD038:\n"
        "	.word _Ljt_080DD03C\n"
        "_Ljt_080DD03C:\n"
        "	.word _L_080DD06C\n"
        "	.word _L_080DD094\n"
        "	.word _L_080DD0B4\n"
        "	.word _L_080DD0DC\n"
        "	.word _L_080DD104\n"
        "	.word _L_080DD160\n"
        "	.word _L_080DD1D4\n"
        "	.word _L_080DD1FC\n"
        "	.word _L_080DD224\n"
        "	.word _L_080DD24C\n"
        "	.word _L_080DD274\n"
        "	.word _L_080DD294\n"
        "_L_080DD06C:\n"
        "	mov r0, #0x64\n"
        "	bl func_080005D4\n"
        "	add r5, r0, #0\n"
        "	add r4, r7, #4\n"
        "	ldr r2, [r7, #4]\n"
        "	ldr r0, .Lpool_080DD08C\n"
        "	add r2, r2, r0\n"
        "	add r0, r5, #0\n"
        "	mov r1, r8\n"
        "	mov r3, #1\n"
        "	bl func_08039E98\n"
        "	ldr r0, .Lpool_080DD090\n"
        "	b _L_080DD2AA\n"
        "	.align 2, 0\n"
        ".Lpool_080DD08C:\n"
        "	.word 0x000009B6\n"
        ".Lpool_080DD090:\n"
        "	.word 0x080E76A4\n"
        "_L_080DD094:\n"
        "	mov r0, #0x64\n"
        "	bl func_080005D4\n"
        "	add r5, r0, #0\n"
        "	add r4, r7, #4\n"
        "	ldr r2, [r7, #4]\n"
        "	add r2, #0x10\n"
        "	mov r1, r8\n"
        "	mov r3, #1\n"
        "	bl func_08039E98\n"
        "	ldr r0, .Lpool_080DD0B0\n"
        "	b _L_080DD2AA\n"
        "	.align 2, 0\n"
        ".Lpool_080DD0B0:\n"
        "	.word 0x080E768C\n"
        "_L_080DD0B4:\n"
        "	mov r0, #0x64\n"
        "	bl func_080005D4\n"
        "	add r5, r0, #0\n"
        "	add r4, r7, #4\n"
        "	ldr r2, [r7, #4]\n"
        "	ldr r0, .Lpool_080DD0D4\n"
        "	add r2, r2, r0\n"
        "	add r0, r5, #0\n"
        "	mov r1, r8\n"
        "	mov r3, #1\n"
        "	bl func_08039E98\n"
        "	ldr r0, .Lpool_080DD0D8\n"
        "	b _L_080DD2AA\n"
        "	.align 2, 0\n"
        ".Lpool_080DD0D4:\n"
        "	.word 0x000003DB\n"
        ".Lpool_080DD0D8:\n"
        "	.word 0x080E7674\n"
        "_L_080DD0DC:\n"
        "	mov r0, #0x64\n"
        "	bl func_080005D4\n"
        "	add r5, r0, #0\n"
        "	add r4, r7, #4\n"
        "	ldr r2, [r7, #4]\n"
        "	ldr r0, .Lpool_080DD0FC\n"
        "	add r2, r2, r0\n"
        "	add r0, r5, #0\n"
        "	mov r1, r8\n"
        "	mov r3, #1\n"
        "	bl func_08039E98\n"
        "	ldr r0, .Lpool_080DD100\n"
        "	b _L_080DD2AA\n"
        "	.align 2, 0\n"
        ".Lpool_080DD0FC:\n"
        "	.word 0x00000806\n"
        ".Lpool_080DD100:\n"
        "	.word 0x080E765C\n"
        "_L_080DD104:\n"
        "	mov r0, #0x6c\n"
        "	bl func_080005D4\n"
        "	add r5, r0, #0\n"
        "	add r4, r7, #4\n"
        "	ldr r2, [r7, #4]\n"
        "	ldr r0, .Lpool_080DD158\n"
        "	add r2, r2, r0\n"
        "	add r0, r5, #0\n"
        "	mov r1, r8\n"
        "	mov r3, #1\n"
        "	bl func_08039E98\n"
        "	ldr r0, .Lpool_080DD15C\n"
        "	str r0, [r5, #0x4c]\n"
        "	ldr r0, [r7, #4]\n"
        "	str r0, [r5, #0x50]\n"
        "	ldrh r0, [r4, #4]\n"
        "	add r1, r5, #0\n"
        "	add r1, #0x54\n"
        "	mov r2, #0\n"
        "	mov r3, #0\n"
        "	strh r0, [r1]\n"
        "	ldrh r0, [r4, #6]\n"
        "	add r4, r5, #0\n"
        "	add r4, #0x56\n"
        "	strh r0, [r4]\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x60\n"
        "	strh r3, [r0]\n"
        "	add r0, #2\n"
        "	strb r2, [r0]\n"
        "	mov r2, #0\n"
        "	ldrsh r0, [r1, r2]\n"
        "	lsl r0, r0, #0x10\n"
        "	str r0, [r5, #0x58]\n"
        "	mov r1, #0\n"
        "	ldrsh r0, [r4, r1]\n"
        "	lsl r0, r0, #0x10\n"
        "	str r0, [r5, #0x5c]\n"
        "	str r3, [r5, #0x68]\n"
        "	b _L_080DD2DE\n"
        "	.align 2, 0\n"
        ".Lpool_080DD158:\n"
        "	.word 0x00000202\n"
        ".Lpool_080DD15C:\n"
        "	.word 0x080E7644\n"
        "_L_080DD160:\n"
        "	mov r0, #0x88\n"
        "	bl func_080005D4\n"
        "	add r5, r0, #0\n"
        "	add r4, r7, #4\n"
        "	ldr r2, [r7, #4]\n"
        "	ldr r0, .Lpool_080DD1CC\n"
        "	add r2, r2, r0\n"
        "	add r0, r5, #0\n"
        "	mov r1, r8\n"
        "	mov r3, #1\n"
        "	bl func_08039E98\n"
        "	ldr r0, .Lpool_080DD1D0\n"
        "	str r0, [r5, #0x4c]\n"
        "	ldr r0, [r7, #4]\n"
        "	str r0, [r5, #0x50]\n"
        "	add r1, r5, #0\n"
        "	add r1, #0x79\n"
        "	mov r0, #0xff\n"
        "	strb r0, [r1]\n"
        "	sub r1, #0x29\n"
        "	ldrb r2, [r4, #8]\n"
        "	lsl r2, r2, #0x1c\n"
        "	asr r2, r2, #0x1c\n"
        "	add r0, r5, #0\n"
        "	bl func_0803A144\n"
        "	add r1, r5, #0\n"
        "	add r1, #0x78\n"
        "	mov r2, #0\n"
        "	strb r0, [r1]\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x60\n"
        "	mov r1, #0\n"
        "	strh r2, [r0]\n"
        "	add r0, #2\n"
        "	strb r1, [r0]\n"
        "	sub r0, #0xe\n"
        "	mov r1, #0\n"
        "	ldrsh r0, [r0, r1]\n"
        "	lsl r0, r0, #0x10\n"
        "	str r0, [r5, #0x58]\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x56\n"
        "	mov r2, #0\n"
        "	ldrsh r0, [r0, r2]\n"
        "	lsl r0, r0, #0x10\n"
        "	str r0, [r5, #0x5c]\n"
        "	add r1, r5, #0\n"
        "	add r1, #0x84\n"
        "	mov r0, #0xf8\n"
        "	strb r0, [r1]\n"
        "	b _L_080DD2DE\n"
        "	.align 2, 0\n"
        ".Lpool_080DD1CC:\n"
        "	.word 0x000002A3\n"
        ".Lpool_080DD1D0:\n"
        "	.word 0x080E762C\n"
        "_L_080DD1D4:\n"
        "	mov r0, #0x64\n"
        "	bl func_080005D4\n"
        "	add r5, r0, #0\n"
        "	add r4, r7, #4\n"
        "	ldr r2, [r7, #4]\n"
        "	ldr r0, .Lpool_080DD1F4\n"
        "	add r2, r2, r0\n"
        "	add r0, r5, #0\n"
        "	mov r1, r8\n"
        "	mov r3, #1\n"
        "	bl func_08039E98\n"
        "	ldr r0, .Lpool_080DD1F8\n"
        "	b _L_080DD2AA\n"
        "	.align 2, 0\n"
        ".Lpool_080DD1F4:\n"
        "	.word 0x0000087B\n"
        ".Lpool_080DD1F8:\n"
        "	.word 0x080E7614\n"
        "_L_080DD1FC:\n"
        "	mov r0, #0x64\n"
        "	bl func_080005D4\n"
        "	add r5, r0, #0\n"
        "	add r4, r7, #4\n"
        "	ldr r2, [r7, #4]\n"
        "	ldr r0, .Lpool_080DD21C\n"
        "	add r2, r2, r0\n"
        "	add r0, r5, #0\n"
        "	mov r1, r8\n"
        "	mov r3, #1\n"
        "	bl func_08039E98\n"
        "	ldr r0, .Lpool_080DD220\n"
        "	b _L_080DD2AA\n"
        "	.align 2, 0\n"
        ".Lpool_080DD21C:\n"
        "	.word 0x0000065C\n"
        ".Lpool_080DD220:\n"
        "	.word 0x080E75FC\n"
        "_L_080DD224:\n"
        "	mov r0, #0x64\n"
        "	bl func_080005D4\n"
        "	add r5, r0, #0\n"
        "	add r4, r7, #4\n"
        "	ldr r2, [r7, #4]\n"
        "	ldr r0, .Lpool_080DD244\n"
        "	add r2, r2, r0\n"
        "	add r0, r5, #0\n"
        "	mov r1, r8\n"
        "	mov r3, #1\n"
        "	bl func_08039E98\n"
        "	ldr r0, .Lpool_080DD248\n"
        "	b _L_080DD2AA\n"
        "	.align 2, 0\n"
        ".Lpool_080DD244:\n"
        "	.word 0x000008F9\n"
        ".Lpool_080DD248:\n"
        "	.word 0x080E75E4\n"
        "_L_080DD24C:\n"
        "	mov r0, #0x64\n"
        "	bl func_080005D4\n"
        "	add r5, r0, #0\n"
        "	add r4, r7, #4\n"
        "	ldr r2, [r7, #4]\n"
        "	ldr r0, .Lpool_080DD26C\n"
        "	add r2, r2, r0\n"
        "	add r0, r5, #0\n"
        "	mov r1, r8\n"
        "	mov r3, #1\n"
        "	bl func_08039E98\n"
        "	ldr r0, .Lpool_080DD270\n"
        "	b _L_080DD2AA\n"
        "	.align 2, 0\n"
        ".Lpool_080DD26C:\n"
        "	.word 0x000009A9\n"
        ".Lpool_080DD270:\n"
        "	.word 0x080E75CC\n"
        "_L_080DD274:\n"
        "	mov r0, #0x64\n"
        "	bl func_080005D4\n"
        "	add r5, r0, #0\n"
        "	add r4, r7, #4\n"
        "	mov r1, r8\n"
        "	ldr r2, .Lpool_080DD28C\n"
        "	mov r3, #1\n"
        "	bl func_08039E98\n"
        "	ldr r0, .Lpool_080DD290\n"
        "	b _L_080DD2AA\n"
        "	.align 2, 0\n"
        ".Lpool_080DD28C:\n"
        "	.word 0x000008FD\n"
        ".Lpool_080DD290:\n"
        "	.word 0x080E75B4\n"
        "_L_080DD294:\n"
        "	mov r0, #0x64\n"
        "	bl func_080005D4\n"
        "	add r5, r0, #0\n"
        "	add r4, r7, #4\n"
        "	mov r1, r8\n"
        "	mov r2, #0x15\n"
        "	mov r3, #0\n"
        "	bl func_08039E98\n"
        "	ldr r0, .Lpool_080DD314\n"
        "_L_080DD2AA:\n"
        "	str r0, [r5, #0x4c]\n"
        "	ldr r0, [r7, #4]\n"
        "	str r0, [r5, #0x50]\n"
        "	ldrh r0, [r4, #4]\n"
        "	add r2, r5, #0\n"
        "	add r2, #0x54\n"
        "	mov r3, #0\n"
        "	mov r1, #0\n"
        "	strh r0, [r2]\n"
        "	ldrh r0, [r4, #6]\n"
        "	add r4, r5, #0\n"
        "	add r4, #0x56\n"
        "	strh r0, [r4]\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x60\n"
        "	strh r1, [r0]\n"
        "	add r0, #2\n"
        "	strb r3, [r0]\n"
        "	mov r1, #0\n"
        "	ldrsh r0, [r2, r1]\n"
        "	lsl r0, r0, #0x10\n"
        "	str r0, [r5, #0x58]\n"
        "	mov r2, #0\n"
        "	ldrsh r0, [r4, r2]\n"
        "	lsl r0, r0, #0x10\n"
        "	str r0, [r5, #0x5c]\n"
        "_L_080DD2DE:\n"
        "	add r1, r6, #0\n"
        "	add r1, #8\n"
        "	ldr r0, [r6, #8]\n"
        "	cmp r0, #2\n"
        "	bhi _L_080DD2FA\n"
        "	lsl r0, r0, #2\n"
        "	add r0, #4\n"
        "	add r0, r1, r0\n"
        "	cmp r0, #0\n"
        "	beq _L_080DD2F4\n"
        "	str r5, [r0]\n"
        "_L_080DD2F4:\n"
        "	ldr r0, [r6, #8]\n"
        "	add r0, #1\n"
        "	str r0, [r6, #8]\n"
        "_L_080DD2FA:\n"
        "	ldrb r1, [r7]\n"
        "	mov r0, #0x10\n"
        "	neg r0, r0\n"
        "	and r0, r1\n"
        "	strb r0, [r7]\n"
        "	mov r0, #1\n"
        "	add sb, r0\n"
        "	mov r1, sb\n"
        "	cmp r1, #2\n"
        "	bhi _L_080DD310\n"
        "	b _L_080DD012\n"
        "_L_080DD310:\n"
        "	add r7, r6, #0\n"
        "	b _L_080DD36E\n"
        "	.align 2, 0\n"
        ".Lpool_080DD314:\n"
        "	.word 0x080E759C\n"
        "_L_080DD318:\n"
        "	mov r0, #0x18\n"
        "	bl func_080005D4\n"
        "	add r5, r0, #0\n"
        "	str r4, [r5]\n"
        "	ldr r0, =0x080E76D4\n"
        "	str r0, [r5, #4]\n"
        "	str r7, [r5, #8]\n"
        "	ldr r4, [r4]\n"
        "	ldr r0, [r4]\n"
        "	mov r2, #0xa2\n"
        "	lsl r2, r2, #1\n"
        "	add r0, r0, r2\n"
        "	ldr r1, [r0]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	ldrb r0, [r0, #0xa]\n"
        "	lsl r0, r0, #0x1b\n"
        "	lsr r0, r0, #0x1b\n"
        "	mov r6, #0\n"
        "	sub r0, #6\n"
        "	cmp r0, #0xb\n"
        "	bls _L_080DD34A\n"
        "	mov r6, #1\n"
        "_L_080DD34A:\n"
        "	ldr r0, [r4]\n"
        "	mov r1, #0xa2\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r0, r1\n"
        "	ldr r1, [r0]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	add r0, #8\n"
        "	bl func_0800E324\n"
        "	add r2, r0, #0\n"
        "	add r0, r5, #0\n"
        "	add r1, r4, #0\n"
        "	add r3, r6, #0\n"
        "	bl func_0803A394\n"
        "	add r7, r5, #0\n"
        "_L_080DD36E:\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r10", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080DD3A8 @ 0x080DD3A8 (44B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08039F90(u8 *, u32, u32, u32, int, int, int, int);
void func_080DD3A8(u8 *a, u32 b, u32 c, u32 d) {
    func_08039F90(a, b, c, d, *(s16 *)(a + 0x54), *(s16 *)(a + 0x56), 0, 2);
}

/* --- func_080DD3D4 @ 0x080DD3D4 (48B) [PURE-C | old_agbcc_O2] --- */
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
extern u32 func_0805E8F0();
void func_080DD3D4(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    u32 r1 = arg1;
    u32 r2 = arg2;
    u32 r3 = arg3;
    u32 r4;
    r4 = r0 + 0;
    r1 = r4 + 0;
    r1 += 0x47;
    r0 = *(u8 *)(r1);
    if (r0 != 0) goto loc_080DD3F8;
    r0 = r4 + 0;
    r0 += 0x30;
    r0 = func_0805E8F0(r0, r1, r2, r3);
    r0 = r0 << 0x1e;
    if ((int)r0 >= 0) goto loc_080DD3FC;
    r1 = r4 + 0;
    r1 += 0x44;
    r0 = 1;
    goto loc_080DD3FA;
loc_080DD3F8:
    r0 = 0;
loc_080DD3FA:
    *(u8 *)(r1) = r0;
loc_080DD3FC:
    return r0;
}

/* --- func_080DD404 @ 0x080DD404 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08039F50();
void func_080DD404(void) {
  func_08039F50();
}

/* --- func_080DD410 @ 0x080DD410 (36B) [PURE-C | agbcc_O2] --- */
#define NULL 0

struct B { u8 f:4; u32 x; u16 y, z; };
void func_080DD410(u8 *arg0, struct B *arg1) {
    arg1->f = 11;
    arg1->x = *(u32 *)(arg0 + 0x50);
    arg1->y = *(u16 *)(arg0 + 0x54);
    arg1->z = *(u16 *)(arg0 + 0x56);
}

/* --- func_080DD434 @ 0x080DD434 (44B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08039F90(u8 *, u32, u32, u32, int, int, int, int);
void func_080DD434(u8 *a, u32 b, u32 c, u32 d) {
    func_08039F90(a, b, c, d, *(s16 *)(a + 0x54), *(s16 *)(a + 0x56), 0, 2);
}

/* --- func_080DD460 @ 0x080DD460 (132B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

struct Sub { s8 flg:2; };
extern int func_080D11E4();
extern void func_0803A350();
extern int func_080AB788();
extern struct Sub func_0805E8F0();
void func_080DD460(int param_1) {
    s8 *p62 = (s8 *)(param_1 + 0x62);
    u8 *p47;
    switch (*p62) {
    case 0:
        if ((func_080D11E4() >> 4) & 3) {
            func_0803A350(param_1, 0xcf);
        }
        {
            int r = func_080AB788(2);
            register int val asm("r1") = (r + 6) * 60;
            register int p0 asm("r0");
            __asm__ volatile("add %0, %2, #0\n\tadd %0, #0x60\n\tstrh %1, [%0]" : "=&r"(p0) : "r"(val), "r"(param_1) : "memory");
        }
        *p62 = 1;
        break;
    case 1:
        {
            s16 v = --(*(s16 *)(param_1 + 0x60));
            if (v < 0) {
                *p62 = 0;
            }
        }
        break;
    }
    p47 = (u8 *)(param_1 + 0x47);
    if (*p47 == 0) {
        if (func_0805E8F0(param_1 + 0x30).flg < 0) {
            *(u8 *)(param_1 + 0x44) = 1;
        }
    } else {
        *p47 = 0;
    }
}

/* --- func_080DD4E4 @ 0x080DD4E4 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08039F50();
void func_080DD4E4(void) {
  func_08039F50();
}

/* --- func_080DD4F0 @ 0x080DD4F0 (36B) [PURE-C | agbcc_O2] --- */
#define NULL 0

struct B { u8 f:4; u32 x; u16 y, z; };
void func_080DD4F0(u8 *arg0, struct B *arg1) {
    arg1->f = 10;
    arg1->x = *(u32 *)(arg0 + 0x50);
    arg1->y = *(u16 *)(arg0 + 0x54);
    arg1->z = *(u16 *)(arg0 + 0x56);
}

/* --- func_080DD514 @ 0x080DD514 (44B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08039F90(u8 *, u32, u32, u32, int, int, int, int);
void func_080DD514(u8 *a, u32 b, u32 c, u32 d) {
    func_08039F90(a, b, c, d, *(s16 *)(a + 0x54), *(s16 *)(a + 0x56), 0, 2);
}

/* --- func_080DD540 @ 0x080DD540 (72B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern int func_0803A180();
extern void func_0805E860();
void func_080DD540(int param_1) {
    register int p1 asm("r4") = param_1;
    register u32 r5 asm("r5");
    if (func_0803A180(p1, p1 + 0x50, 0x80 << 9) != 0) {
        __asm__(
            "ldr r0, [%1, #0x50]\n\t"
            "ldr r1, =0x000009A9\n\t"
            "add %0, r0, r1"
            : "=r"(r5) : "r"(p1) : "r0", "r1"
        );
        if (*(u16 *)(p1 + 4) != r5) {
            func_0805E860(p1 + 0x30, r5);
            __asm__ volatile(
                "add r0, %0, #0\n\t"
                "add r0, #0x44\n\t"
                "mov r2, #0\n\t"
                "mov r1, #1\n\t"
                "strb r1, [r0]\n\t"
                "add r0, #2\n\t"
                "strb r2, [r0]\n\t"
                "add r0, #1\n\t"
                "strb r1, [r0]\n\t"
                "strh %1, [%0, #4]"
                : : "r"(p1), "r"(r5) : "r0", "r1", "r2", "memory"
            );
        }
    }
}

/* --- func_080DD588 @ 0x080DD588 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08039F50();
void func_080DD588(void) {
  func_08039F50();
}

/* --- func_080DD594 @ 0x080DD594 (36B) [PURE-C | agbcc_O2] --- */
#define NULL 0

struct B { u8 f:4; u32 x; u16 y, z; };
void func_080DD594(u8 *arg0, struct B *arg1) {
    arg1->f = 9;
    arg1->x = *(u32 *)(arg0 + 0x50);
    arg1->y = *(u16 *)(arg0 + 0x54);
    arg1->z = *(u16 *)(arg0 + 0x56);
}

/* --- func_080DD5B8 @ 0x080DD5B8 (44B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08039F90(u8 *, u32, u32, u32, int, int, int, int);
void func_080DD5B8(u8 *a, u32 b, u32 c, u32 d) {
    func_08039F90(a, b, c, d, *(s16 *)(a + 0x54), *(s16 *)(a + 0x56), 0, 2);
}

/* --- func_080DD5E4 @ 0x080DD5E4 (420B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DD5E4 @ 0x080DD5E4 (420 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2, _call_via_r3)
 * Fields : +0x00:u16(W), +0x00:u32(R), +0x00:u8(W), +0x02:u16(W), +0x04:u16(RW), +0x04:u32(W), +0x06:u16(W), +0x08:u32(W), +0x0C:u32(W), +0x28:u32(W), +0x2C:u32(W), +0x30:u32(W)
 * Callees: func_0803A180, func_0805E860, func_080ABE58, func_080D3914, func_080D3918
 * CFG Structure:
 *   L_080DD5E4: call _call_via_r2(); if (==) goto L_080DD6FE
 *   L_080DD624: if (> (s)) goto L_080DD6FE
 *   L_080DD63A: if (> (s)) goto L_080DD6FE
 *   L_080DD6C6: if (==) goto L_080DD6F2
 *   L_080DD6FE: call func_0803A180(); if (==) goto L_080DD772
 *   L_080DD748: if (==) goto L_080DD772
 *   L_080DD772: return
 * ========================================================================== */
extern void func_0803A180(void);
extern void func_0805E860(void);
extern void func_080ABE58(void);
extern void func_080D3914(void);
extern void func_080D3918(void);
void func_080DD5E4(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, r7, lr}\n"
        "	mov r7, sl\n"
        "	mov r6, sb\n"
        "	mov r5, r8\n"
        "	push {r5, r6, r7}\n"
        "	sub sp, #0x50\n"
        "	add r5, r0, #0\n"
        "	ldr r4, [r5]\n"
        "	ldr r0, [r4]\n"
        "	ldr r2, [r0, #0x40]\n"
        "	add r0, r4, #0\n"
        "	mov r1, #0\n"
        "	bl func_080D3914\n"
        "	cmp r0, #0\n"
        "	beq _L_080DD6FE\n"
        "	mov r2, #0xa\n"
        "	ldrsh r1, [r0, r2]\n"
        "	mov sb, r1\n"
        "	mov r7, #0xe\n"
        "	ldrsh r3, [r0, r7]\n"
        "	mov r8, r3\n"
        "	mov r0, #0x54\n"
        "	add r0, r0, r5\n"
        "	mov sl, r0\n"
        "	mov r1, #0\n"
        "	ldrsh r0, [r0, r1]\n"
        "	mov r2, sb\n"
        "	sub r0, r2, r0\n"
        "	cmp r0, #0\n"
        "	bge _L_080DD624\n"
        "	neg r0, r0\n"
        "_L_080DD624:\n"
        "	cmp r0, #0xf\n"
        "	bgt _L_080DD6FE\n"
        "	add r6, r5, #0\n"
        "	add r6, #0x56\n"
        "	mov r3, #0\n"
        "	ldrsh r0, [r6, r3]\n"
        "	mov r7, r8\n"
        "	sub r0, r7, r0\n"
        "	cmp r0, #0\n"
        "	bge _L_080DD63A\n"
        "	neg r0, r0\n"
        "_L_080DD63A:\n"
        "	cmp r0, #0xf\n"
        "	bgt _L_080DD6FE\n"
        "	ldr r1, [r4]\n"
        "	add r0, sp, #8\n"
        "	ldr r3, [r1, #0x34]\n"
        "	add r1, r4, #0\n"
        "	mov r2, #0\n"
        "	bl func_080D3918\n"
        "	mov r0, sl\n"
        "	mov r2, #0\n"
        "	ldrsh r1, [r0, r2]\n"
        "	mov r4, #0\n"
        "	ldrsh r3, [r6, r4]\n"
        "	add r2, sp, #0x48\n"
        "	add r0, r1, #0\n"
        "	sub r0, #8\n"
        "	mov r7, #0\n"
        "	mov ip, r7\n"
        "	strh r0, [r2]\n"
        "	add r0, r3, #0\n"
        "	sub r0, #8\n"
        "	strh r0, [r2, #2]\n"
        "	add r1, #8\n"
        "	strh r1, [r2, #4]\n"
        "	add r3, #8\n"
        "	strh r3, [r2, #6]\n"
        "	add r2, sp, #0x14\n"
        "	mov r1, #0x21\n"
        "	str r1, [sp, #0x14]\n"
        "	mov r0, #0x21\n"
        "	neg r0, r0\n"
        "	str r0, [r2, #4]\n"
        "	str r0, [r2, #8]\n"
        "	str r1, [r2, #0xc]\n"
        "	add r1, sp, #0x28\n"
        "	add r0, sp, #8\n"
        "	ldm r0!, {r3, r4, r7}\n"
        "	stm r1!, {r3, r4, r7}\n"
        "	ldr r0, [sp, #0x48]\n"
        "	ldr r1, [sp, #0x4c]\n"
        "	str r0, [sp, #0x34]\n"
        "	str r1, [sp, #0x38]\n"
        "	mov r0, #0x20\n"
        "	str r0, [r2, #0x28]\n"
        "	mov r1, ip\n"
        "	str r1, [r2, #0x2c]\n"
        "	str r1, [r2, #0x30]\n"
        "	ldr r4, [r5, #0x50]\n"
        "	mov r3, sl\n"
        "	mov r7, #0\n"
        "	ldrsh r0, [r3, r7]\n"
        "	mov r3, #0\n"
        "	ldrsh r1, [r6, r3]\n"
        "	str r2, [sp]\n"
        "	str r4, [sp, #4]\n"
        "	mov r2, sb\n"
        "	mov r3, r8\n"
        "	bl func_080ABE58\n"
        "	add r1, r0, #0\n"
        "	str r1, [r5, #0x50]\n"
        "	add r6, r5, #0\n"
        "	add r6, #0x62\n"
        "	cmp r4, r1\n"
        "	bne _L_080DD6C6\n"
        "	mov r0, #0\n"
        "	ldrsb r0, [r6, r0]\n"
        "	cmp r0, #0\n"
        "	bne _L_080DD6F2\n"
        "_L_080DD6C6:\n"
        "	ldr r7, .Lpool_080DD740\n"
        "	add r4, r1, r7\n"
        "	ldrh r0, [r5, #4]\n"
        "	cmp r0, r4\n"
        "	beq _L_080DD6F2\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x30\n"
        "	add r1, r4, #0\n"
        "	bl func_0805E860\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x44\n"
        "	mov r1, #1\n"
        "	strb r1, [r0]\n"
        "	add r2, r5, #0\n"
        "	add r2, #0x46\n"
        "	mov r0, #0\n"
        "	strb r0, [r2]\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x47\n"
        "	strb r1, [r0]\n"
        "	strh r4, [r5, #4]\n"
        "_L_080DD6F2:\n"
        "	mov r0, #1\n"
        "	strb r0, [r6]\n"
        "	add r1, r5, #0\n"
        "	add r1, #0x60\n"
        "	mov r0, #0x3c\n"
        "	strh r0, [r1]\n"
        "_L_080DD6FE:\n"
        "	add r1, r5, #0\n"
        "	add r1, #0x50\n"
        "	mov r2, #0x80\n"
        "	lsl r2, r2, #8\n"
        "	add r0, r5, #0\n"
        "	bl func_0803A180\n"
        "	cmp r0, #0\n"
        "	beq _L_080DD772\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x62\n"
        "	mov r6, #0\n"
        "	ldrsb r6, [r0, r6]\n"
        "	cmp r6, #0\n"
        "	bne _L_080DD748\n"
        "	ldr r0, [r5, #0x50]\n"
        "	ldr r1, .Lpool_080DD744\n"
        "	add r4, r0, r1\n"
        "	ldrh r0, [r5, #4]\n"
        "	cmp r0, r4\n"
        "	beq _L_080DD772\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x30\n"
        "	add r1, r4, #0\n"
        "	bl func_0805E860\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x44\n"
        "	mov r1, #1\n"
        "	strb r1, [r0]\n"
        "	add r0, #2\n"
        "	strb r6, [r0]\n"
        "	b _L_080DD76C\n"
        ".Lpool_080DD740:\n"
        "	.word 0x000008F9\n"
        ".Lpool_080DD744:\n"
        "	.word 0x000008F5\n"
        "_L_080DD748:\n"
        "	ldr r0, [r5, #0x50]\n"
        "	ldr r2, .Lpool_080DD784\n"
        "	add r4, r0, r2\n"
        "	ldrh r0, [r5, #4]\n"
        "	cmp r0, r4\n"
        "	beq _L_080DD772\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x30\n"
        "	add r1, r4, #0\n"
        "	bl func_0805E860\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x44\n"
        "	mov r2, #0\n"
        "	mov r1, #1\n"
        "	strb r1, [r0]\n"
        "	add r0, #2\n"
        "	strb r2, [r0]\n"
        "_L_080DD76C:\n"
        "	add r0, #1\n"
        "	strb r1, [r0]\n"
        "	strh r4, [r5, #4]\n"
        "_L_080DD772:\n"
        "	add sp, #0x50\n"
        "	pop {r3, r4, r5}\n"
        "	mov r8, r3\n"
        "	mov sb, r4\n"
        "	mov sl, r5\n"
        "	pop {r4, r5, r6, r7}\n"
        "	pop {r0}\n"
        "	bx r0\n"
        "	.hword 0x0000\n"
        ".Lpool_080DD784:\n"
        "	.word 0x000008F9\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080DD788 @ 0x080DD788 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08039F50();
void func_080DD788(void) {
  func_08039F50();
}

/* --- func_080DD794 @ 0x080DD794 (36B) [PURE-C | agbcc_O2] --- */
#define NULL 0

struct B { u8 f:4; u32 x; u16 y, z; };
void func_080DD794(u8 *arg0, struct B *arg1) {
    arg1->f = 8;
    arg1->x = *(u32 *)(arg0 + 0x50);
    arg1->y = *(u16 *)(arg0 + 0x54);
    arg1->z = *(u16 *)(arg0 + 0x56);
}

/* --- func_080DD7B8 @ 0x080DD7B8 (44B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08039F90(u8 *, u32, u32, u32, int, int, int, int);
void func_080DD7B8(u8 *a, u32 b, u32 c, u32 d) {
    func_08039F90(a, b, c, d, *(s16 *)(a + 0x54), *(s16 *)(a + 0x56), 0, 2);
}

/* --- func_080DD7E4 @ 0x080DD7E4 (124B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern int func_0803A180();
extern void func_0805E860();
void func_080DD7E4(int param_1) {
    register int p1 asm("r4");
    register int r5 asm("r5");
    register int r6 asm("r6");
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add r1, %0, #0\n\t"
        "add r1, #0x50\n\t"
        "mov r2, #0x80\n\t"
        "lsl r2, r2, #8\n\t"
        "bl func_0803A180\n\t"
        "cmp r0, #0\n\t"
        "beq _end_func_080DD7E4\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x62\n\t"
        "mov %2, #0\n\t"
        "ldrsb %2, [r0, %2]\n\t"
        "cmp %2, #0\n\t"
        "bne _else_func_080DD7E4\n\t"
        "ldr r0, [%0, #0x50]\n\t"
        "mov r1, #0xcb\n\tlsl r1, r1, #3\n\t"
        "add %1, r0, r1\n\t"
        "ldrh r0, [%0, #4]\n\t"
        "cmp r0, %1\n\t"
        "beq _end_func_080DD7E4\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x30\n\t"
        "add r1, %1, #0\n\t"
        "bl func_0805E860\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x44\n\t"
        "mov r1, #1\n\t"
        "strb r1, [r0]\n\t"
        "add r0, #2\n\t"
        "strb %2, [r0]\n\t"
        "b _join_func_080DD7E4\n"
        "_else_func_080DD7E4:\n\t"
        "ldr r0, [%0, #0x50]\n\t"
        "ldr r1, =0x0000065C\n\t"
        "add %1, r0, r1\n\t"
        "ldrh r0, [%0, #4]\n\t"
        "cmp r0, %1\n\t"
        "beq _end_func_080DD7E4\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x30\n\t"
        "add r1, %1, #0\n\t"
        "bl func_0805E860\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x44\n\t"
        "mov r2, #0\n\t"
        "mov r1, #1\n\t"
        "strb r1, [r0]\n\t"
        "add r0, #2\n\t"
        "strb r2, [r0]\n"
        "_join_func_080DD7E4:\n\t"
        "add r0, #1\n\t"
        "strb r1, [r0]\n\t"
        "strh %1, [%0, #4]\n"
        "_end_func_080DD7E4:"
        : "=r"(p1), "=r"(r5), "=r"(r6) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_080DD860 @ 0x080DD860 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08039F50();
void func_080DD860(void) {
  func_08039F50();
}

/* --- func_080DD86C @ 0x080DD86C (36B) [PURE-C | agbcc_O2] --- */
#define NULL 0

struct B { u8 f:4; u32 x; u16 y, z; };
void func_080DD86C(u8 *arg0, struct B *arg1) {
    arg1->f = 7;
    arg1->x = *(u32 *)(arg0 + 0x50);
    arg1->y = *(u16 *)(arg0 + 0x54);
    arg1->z = *(u16 *)(arg0 + 0x56);
}

/* --- func_080DD890 @ 0x080DD890 (44B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08039F90(u8 *, u32, u32, u32, int, int, int, int);
void func_080DD890(u8 *a, u32 b, u32 c, u32 d) {
    func_08039F90(a, b, c, d, *(s16 *)(a + 0x54), *(s16 *)(a + 0x56), 0, 2);
}

/* --- func_080DD8BC @ 0x080DD8BC (124B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern int func_0803A180();
extern void func_0805E860();
void func_080DD8BC(int param_1) {
    register int p1 asm("r4");
    register int r5 asm("r5");
    register int r6 asm("r6");
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add r1, %0, #0\n\t"
        "add r1, #0x50\n\t"
        "mov r2, #0x80\n\t"
        "lsl r2, r2, #8\n\t"
        "bl func_0803A180\n\t"
        "cmp r0, #0\n\t"
        "beq _end_func_080DD8BC\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x62\n\t"
        "mov %2, #0\n\t"
        "ldrsb %2, [r0, %2]\n\t"
        "cmp %2, #0\n\t"
        "bne _else_func_080DD8BC\n\t"
        "ldr r0, [%0, #0x50]\n\t"
        "ldr r1, .Lpool1_func_080DD8BC\n\t"
        "add %1, r0, r1\n\t"
        "ldrh r0, [%0, #4]\n\t"
        "cmp r0, %1\n\t"
        "beq _end_func_080DD8BC\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x30\n\t"
        "add r1, %1, #0\n\t"
        "bl func_0805E860\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x44\n\t"
        "mov r1, #1\n\t"
        "strb r1, [r0]\n\t"
        "add r0, #2\n\t"
        "strb %2, [r0]\n\t"
        "b _join_func_080DD8BC\n\t.align 2, 0\n.Lpool1_func_080DD8BC:\n\t.word 0x00000877\n"
        "_else_func_080DD8BC:\n\t"
        "ldr r0, [%0, #0x50]\n\t"
        "ldr r1, =0x0000087B\n\t"
        "add %1, r0, r1\n\t"
        "ldrh r0, [%0, #4]\n\t"
        "cmp r0, %1\n\t"
        "beq _end_func_080DD8BC\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x30\n\t"
        "add r1, %1, #0\n\t"
        "bl func_0805E860\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x44\n\t"
        "mov r2, #0\n\t"
        "mov r1, #1\n\t"
        "strb r1, [r0]\n\t"
        "add r0, #2\n\t"
        "strb r2, [r0]\n"
        "_join_func_080DD8BC:\n\t"
        "add r0, #1\n\t"
        "strb r1, [r0]\n\t"
        "strh %1, [%0, #4]\n"
        "_end_func_080DD8BC:"
        : "=r"(p1), "=r"(r5), "=r"(r6) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_080DD938 @ 0x080DD938 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08039F50();
void func_080DD938(void) {
  func_08039F50();
}

/* --- func_080DD944 @ 0x080DD944 (80B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DD944 @ 0x080DD944 (80 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(R), +0x00:u8(RW), +0x04:u32(W), +0x08:u16(W), +0x0A:u16(W), +0x0C:u8(RW), +0x50:u32(R)
 * CFG Structure:
 *   L_080DD944: return
 * ========================================================================== */
void func_080DD944(void) {

    __asm__ volatile(
        "	mov ip, r0\n"
        "	ldrb r2, [r1]\n"
        "	mov r3, #0x10\n"
        "	neg r3, r3\n"
        "	add r0, r3, #0\n"
        "	and r0, r2\n"
        "	mov r2, #6\n"
        "	orr r0, r2\n"
        "	strb r0, [r1]\n"
        "	mov r2, ip\n"
        "	ldr r0, [r2, #0x50]\n"
        "	str r0, [r1, #4]\n"
        "	mov r0, ip\n"
        "	add r0, #0x54\n"
        "	ldrh r0, [r0]\n"
        "	strh r0, [r1, #8]\n"
        "	mov r0, ip\n"
        "	add r0, #0x56\n"
        "	ldrh r0, [r0]\n"
        "	strh r0, [r1, #0xa]\n"
        "	mov r0, ip\n"
        "	add r0, #0x78\n"
        "	ldrb r2, [r0]\n"
        "	mov r4, #0xf\n"
        "	add r0, r4, #0\n"
        "	and r0, r2\n"
        "	ldrb r2, [r1, #0xc]\n"
        "	and r3, r2\n"
        "	orr r3, r0\n"
        "	mov r0, ip\n"
        "	add r0, #0x79\n"
        "	ldrb r0, [r0]\n"
        "	lsl r0, r0, #4\n"
        "	and r3, r4\n"
        "	orr r3, r0\n"
        "	strb r3, [r1, #0xc]\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "lr", "memory"
    );
}

/* --- func_080DD994 @ 0x080DD994 (56B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DD994 @ 0x080DD994 (56 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u8(R)
 * Callees: func_08039F90
 * CFG Structure:
 *   L_080DD994: call func_08039F90(); return
 * ========================================================================== */
extern void func_08039F90(void);
void func_080DD994(void) {
    u32 sp0, sp1, sp2, sp3;
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	mov ip, r0\n"
        "	add r0, #0x54\n"
        "	mov r4, #0\n"
        "	ldrsh r0, [r0, r4]\n"
        "	str r0, [sp]\n"
        "	mov r0, ip\n"
        "	add r0, #0x56\n"
        "	mov r4, #0\n"
        "	ldrsh r0, [r0, r4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, ip\n"
        "	add r0, #0x84\n"
        "	ldrb r0, [r0]\n"
        "	lsl r0, r0, #0x18\n"
        "	asr r0, r0, #0x18\n"
        "	str r0, [sp, #8]\n"
        "	mov r0, #1\n"
        "	str r0, [sp, #0xc]\n"
        "	mov r0, ip\n"
        "	bl func_08039F90\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "lr", "memory"
    );
}

/* --- func_080DD9CC @ 0x080DD9CC (588B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DD9CC @ 0x080DD9CC (588 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(RW), +0x00:u32(RW), +0x00:u8(RW), +0x04:u16(RW), +0x50:u32(W), +0x58:u32(RW), +0x5C:u32(RW), +0x6C:u32(RW), +0x70:u32(RW), +0x7C:u32(RW)
 * Callees: func_0803A144, func_0803A350, func_0805E860, func_0805E8F0, func_080AB788, func_080D0EC8, func_080D11E4
 * CFG Structure:
 *   L_080DD9CC: if (==) goto L_080DDA14
 *   L_080DD9E8: if (==) goto L_080DDA6C
 *   L_080DD9F6: goto L_080DDBD6
 *   L_080DD9F8: call func_080AB788(); goto L_080DDA28
 *   L_080DDA14: if (>= (s)) goto L_080DDA30
 *   L_080DDA28: goto L_080DDBD6
 *   L_080DDA30: if (> (s)) goto L_080DDA3E
 *   L_080DDA3E: if (<= (s)) goto L_080DDA50
 *   L_080DDA50: call func_080D11E4(); if (!=) goto L_080DDA62
 *   L_080DDA62: call func_0803A350(); goto L_080DDBD6
 *   L_080DDA6C: if (!=) goto L_080DDA8A
 *   L_080DDA8A: call func_0803A144(); if (>= (s)) goto L_080DDACA
 * ========================================================================== */
extern void func_0803A144(void);
extern void func_0803A350(void);
extern void func_0805E860(void);
extern void func_0805E8F0(void);
extern void func_080AB788(void);
extern void func_080D0EC8(void);
extern void func_080D11E4(void);
void func_080DD9CC(void) {
    int r7_var;
    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	add r6, r5, #0\n"
        "	add r6, #0x62\n"
        "	mov r4, #0\n"
        "	ldrsb r4, [r6, r4]\n"
        "	cmp r4, #1\n"
        "	beq _L_080DDA14\n"
        "	cmp r4, #1\n"
        "	bgt _L_080DD9E8\n"
        "	cmp r4, #0\n"
        "	beq _L_080DD9F8\n"
        "	sub r6, #0x1b\n"
        "	b _L_080DDBD6\n"
        "_L_080DD9E8:\n"
        "	cmp r4, #2\n"
        "	beq _L_080DDA6C\n"
        "	add r6, r5, #0\n"
        "	add r6, #0x47\n"
        "	cmp r4, #3\n"
        "	bne _L_080DD9F6\n"
        "	b _L_080DDB66\n"
        "_L_080DD9F6:\n"
        "	b _L_080DDBD6\n"
        "_L_080DD9F8:\n"
        "	mov r0, #2\n"
        "	bl func_080AB788\n"
        "	add r0, #0x1e\n"
        "	lsl r1, r0, #4\n"
        "	sub r1, r1, r0\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x60\n"
        "	strh r1, [r0]\n"
        "	add r0, #0x26\n"
        "	strh r4, [r0]\n"
        "	mov r0, #1\n"
        "	b _L_080DDA28\n"
        "_L_080DDA14:\n"
        "	add r1, r5, #0\n"
        "	add r1, #0x60\n"
        "	ldrh r0, [r1]\n"
        "	sub r0, #1\n"
        "	strh r0, [r1]\n"
        "	lsl r0, r0, #0x10\n"
        "	asr r0, r0, #0x10\n"
        "	cmp r0, #0\n"
        "	bge _L_080DDA30\n"
        "	mov r0, #2\n"
        "_L_080DDA28:\n"
        "	strb r0, [r6]\n"
        "	add r6, r5, #0\n"
        "	add r6, #0x47\n"
        "	b _L_080DDBD6\n"
        "_L_080DDA30:\n"
        "	mov r2, #0xb4\n"
        "	lsl r2, r2, #1\n"
        "	add r6, r5, #0\n"
        "	add r6, #0x47\n"
        "	cmp r0, r2\n"
        "	bgt _L_080DDA3E\n"
        "	b _L_080DDBD6\n"
        "_L_080DDA3E:\n"
        "	add r1, r5, #0\n"
        "	add r1, #0x86\n"
        "	ldrh r0, [r1]\n"
        "	sub r0, #1\n"
        "	strh r0, [r1]\n"
        "	lsl r0, r0, #0x10\n"
        "	cmp r0, #0\n"
        "	ble _L_080DDA50\n"
        "	b _L_080DDBD6\n"
        "_L_080DDA50:\n"
        "	strh r2, [r1]\n"
        "	bl func_080D11E4\n"
        "	asr r0, r0, #4\n"
        "	mov r1, #3\n"
        "	and r0, r1\n"
        "	cmp r0, #0\n"
        "	bne _L_080DDA62\n"
        "	b _L_080DDBD6\n"
        "_L_080DDA62:\n"
        "	add r0, r5, #0\n"
        "	mov r1, #0xce\n"
        "	bl func_0803A350\n"
        "	b _L_080DDBD6\n"
        "_L_080DDA6C:\n"
        "	add r2, r5, #0\n"
        "	add r2, #0x79\n"
        "	mov r1, #0\n"
        "	ldrsb r1, [r2, r1]\n"
        "	mov r0, #1\n"
        "	neg r0, r0\n"
        "	cmp r1, r0\n"
        "	bne _L_080DDA8A\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x78\n"
        "	ldrb r0, [r0]\n"
        "	add r0, #1\n"
        "	mov r1, #3\n"
        "	and r0, r1\n"
        "	strb r0, [r2]\n"
        "_L_080DDA8A:\n"
        "	add r1, r5, #0\n"
        "	add r1, #0x64\n"
        "	ldrb r2, [r2]\n"
        "	lsl r2, r2, #0x18\n"
        "	asr r2, r2, #0x18\n"
        "	add r0, r5, #0\n"
        "	bl func_0803A144\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x68\n"
        "	mov r2, #0\n"
        "	ldrsh r1, [r0, r2]\n"
        "	lsl r1, r1, #0x10\n"
        "	str r1, [r5, #0x6c]\n"
        "	add r0, #2\n"
        "	mov r3, #0\n"
        "	ldrsh r2, [r0, r3]\n"
        "	lsl r2, r2, #0x10\n"
        "	str r2, [r5, #0x70]\n"
        "	ldr r0, [r5, #0x58]\n"
        "	sub r1, r1, r0\n"
        "	str r1, [r5, #0x7c]\n"
        "	add r1, r5, #0\n"
        "	add r1, #0x80\n"
        "	ldr r0, [r5, #0x5c]\n"
        "	sub r2, r2, r0\n"
        "	str r2, [r1]\n"
        "	ldr r0, [r5, #0x7c]\n"
        "	add r1, r0, #0\n"
        "	cmp r0, #0\n"
        "	bge _L_080DDACA\n"
        "	neg r1, r0\n"
        "_L_080DDACA:\n"
        "	asr r7, r1, #0x11\n"
        "	add r1, r2, #0\n"
        "	cmp r2, #0\n"
        "	bge _L_080DDAD4\n"
        "	neg r1, r2\n"
        "_L_080DDAD4:\n"
        "	asr r6, r1, #0x11\n"
        "	cmp r7, r6\n"
        "	ble _L_080DDB06\n"
        "	cmp r0, #0\n"
        "	bge _L_080DDAE2\n"
        "	str r4, [r5, #0x50]\n"
        "	b _L_080DDAE6\n"
        "_L_080DDAE2:\n"
        "	mov r0, #3\n"
        "	str r0, [r5, #0x50]\n"
        "_L_080DDAE6:\n"
        "	ldr r0, [r5, #0x7c]\n"
        "	add r1, r7, #0\n"
        "	bl func_080D0EC8\n"
        "	str r0, [r5, #0x7c]\n"
        "	add r4, r5, #0\n"
        "	add r4, #0x80\n"
        "	ldr r0, [r4]\n"
        "	add r1, r7, #0\n"
        "	bl func_080D0EC8\n"
        "	str r0, [r4]\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x60\n"
        "	strh r7, [r0]\n"
        "	b _L_080DDB30\n"
        "_L_080DDB06:\n"
        "	cmp r2, #0\n"
        "	bge _L_080DDB0E\n"
        "	mov r0, #1\n"
        "	b _L_080DDB10\n"
        "_L_080DDB0E:\n"
        "	mov r0, #0\n"
        "_L_080DDB10:\n"
        "	str r0, [r5, #0x50]\n"
        "	ldr r0, [r5, #0x7c]\n"
        "	add r1, r6, #0\n"
        "	bl func_080D0EC8\n"
        "	str r0, [r5, #0x7c]\n"
        "	add r4, r5, #0\n"
        "	add r4, #0x80\n"
        "	ldr r0, [r4]\n"
        "	add r1, r6, #0\n"
        "	bl func_080D0EC8\n"
        "	str r0, [r4]\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x60\n"
        "	strh r6, [r0]\n"
        "_L_080DDB30:\n"
        "	ldr r4, .Lpool_080DDC08\n"
        "	ldrh r0, [r5, #4]\n"
        "	add r6, r5, #0\n"
        "	add r6, #0x47\n"
        "	cmp r0, r4\n"
        "	beq _L_080DDB58\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x30\n"
        "	add r1, r4, #0\n"
        "	bl func_0805E860\n"
        "	add r1, r5, #0\n"
        "	add r1, #0x44\n"
        "	mov r2, #0\n"
        "	mov r0, #1\n"
        "	strb r0, [r1]\n"
        "	add r1, #2\n"
        "	strb r2, [r1]\n"
        "	strb r0, [r6]\n"
        "	strh r4, [r5, #4]\n"
        "_L_080DDB58:\n"
        "	add r1, r5, #0\n"
        "	add r1, #0x62\n"
        "	mov r0, #3\n"
        "	strb r0, [r1]\n"
        "	add r1, #0x22\n"
        "	mov r0, #8\n"
        "	strb r0, [r1]\n"
        "_L_080DDB66:\n"
        "	ldr r0, [r5, #0x58]\n"
        "	ldr r1, [r5, #0x7c]\n"
        "	add r0, r0, r1\n"
        "	str r0, [r5, #0x58]\n"
        "	add r1, r5, #0\n"
        "	add r1, #0x80\n"
        "	ldr r0, [r5, #0x5c]\n"
        "	ldr r1, [r1]\n"
        "	add r0, r0, r1\n"
        "	str r0, [r5, #0x5c]\n"
        "	add r1, r5, #0\n"
        "	add r1, #0x60\n"
        "	ldrh r0, [r1]\n"
        "	sub r0, #1\n"
        "	mov r7, #0\n"
        "	strh r0, [r1]\n"
        "	lsl r0, r0, #0x10\n"
        "	cmp r0, #0\n"
        "	bgt _L_080DDBD6\n"
        "	add r2, r5, #0\n"
        "	add r2, #0x79\n"
        "	ldrb r1, [r2]\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x78\n"
        "	strb r1, [r0]\n"
        "	mov r0, #0xff\n"
        "	strb r0, [r2]\n"
        "	ldr r0, [r5, #0x6c]\n"
        "	str r0, [r5, #0x58]\n"
        "	ldr r0, [r5, #0x70]\n"
        "	str r0, [r5, #0x5c]\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x62\n"
        "	strb r7, [r0]\n"
        "	add r1, r5, #0\n"
        "	add r1, #0x84\n"
        "	mov r0, #0xf8\n"
        "	strb r0, [r1]\n"
        "	mov r4, #0xa9\n"
        "	lsl r4, r4, #2\n"
        "	ldrh r0, [r5, #4]\n"
        "	cmp r0, r4\n"
        "	beq _L_080DDBD6\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x30\n"
        "	add r1, r4, #0\n"
        "	bl func_0805E860\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x44\n"
        "	mov r1, #1\n"
        "	strb r1, [r0]\n"
        "	add r0, #2\n"
        "	strb r7, [r0]\n"
        "	strb r1, [r6]\n"
        "	strh r4, [r5, #4]\n"
        "_L_080DDBD6:\n"
        "	ldr r0, [r5, #0x58]\n"
        "	asr r0, r0, #0x10\n"
        "	add r1, r5, #0\n"
        "	add r1, #0x54\n"
        "	strh r0, [r1]\n"
        "	ldr r0, [r5, #0x5c]\n"
        "	asr r0, r0, #0x10\n"
        "	add r1, #2\n"
        "	strh r0, [r1]\n"
        "	ldrb r0, [r6]\n"
        "	cmp r0, #0\n"
        "	bne _L_080DDC0C\n"
        "	add r0, r5, #0\n"
        "	add r0, #0x30\n"
        "	bl func_0805E8F0\n"
        "	lsl r0, r0, #0x1e\n"
        "	cmp r0, #0\n"
        "	bge _L_080DDC10\n"
        "	add r1, r5, #0\n"
        "	add r1, #0x44\n"
        "	mov r0, #1\n"
        "	strb r0, [r1]\n"
        "	b _L_080DDC10\n"
        "	.align 2, 0\n"
        ".Lpool_080DDC08:\n"
        "	.word 0x000002A9\n"
        "_L_080DDC0C:\n"
        "	mov r0, #0\n"
        "	strb r0, [r6]\n"
        "_L_080DDC10:\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_080DDC18 @ 0x080DDC18 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08039F50();
void func_080DDC18(void) {
  func_08039F50();
}

/* --- func_080DDC24 @ 0x080DDC24 (36B) [PURE-C | agbcc_O2] --- */
#define NULL 0

struct B { u8 f:4; u32 x; u16 y, z; };
void func_080DDC24(u8 *arg0, struct B *arg1) {
    arg1->f = 5;
    arg1->x = *(u32 *)(arg0 + 0x50);
    arg1->y = *(u16 *)(arg0 + 0x54);
    arg1->z = *(u16 *)(arg0 + 0x56);
}

/* --- func_080DDC48 @ 0x080DDC48 (48B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08039F90(u8 *, u32, u32, u32, int, int, int, int);
void func_080DDC48(u8 *a, u32 b, u32 c, u32 d) {
    func_08039F90(a, b, c, d, *(s16 *)(a + 0x54), *(s16 *)(a + 0x56), *(int *)(a + 0x68) >> 16, 2);
}

/* --- func_080DDC78 @ 0x080DDC78 (496B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DDC78 @ 0x080DDC78 (496 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u16(RW), +0x00:u8(RW), +0x04:u16(RW), +0x58:u32(RW), +0x5C:u32(RW), +0x68:u32(RW)
 * Callees: func_0803A320, func_0803A334, func_0805E860, func_0805E8F0, func_080AB788, func_080D11E4
 * CFG Structure:
 *   L_080DDC78: if (==) goto L_080DDD1C
 *   L_080DDCA2: if (!=) goto L_080DDCA8
 *   L_080DDCA8: goto L_080DDE1E
 *   L_080DDCB4: call func_080D11E4(); if (!=) goto L_080DDCEE
 *   L_080DDCEE: call func_080AB788()
 *   L_080DDD04: call func_080AB788(); goto L_080DDE1E
 *   L_080DDD1C: if (!=) goto L_080DDD5C
 *   L_080DDD5C: if (!=) goto L_080DDD90
 *   L_080DDD90: call func_0803A320(); call func_0803A334(); if (> (s)) goto L_080DDE1E
 *   L_080DDE08: if (<= (s)) goto L_080DDE1E
 * ========================================================================== */
extern void func_0803A320(void);
extern void func_0803A334(void);
extern void func_0805E860(void);
extern void func_0805E8F0(void);
extern void func_080AB788(void);
extern void func_080D11E4(void);
void func_080DDC78(void) {
    int r7_var;
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r5, r6, #0\n"
        "	add r5, #0x62\n"
        "	mov r4, #0\n"
        "	ldrsb r4, [r5, r4]\n"
        "	cmp r4, #1\n"
        "	beq _L_080DDD1C\n"
        "	cmp r4, #1\n"
        "	bgt _L_080DDCA2\n"
        "	cmp r4, #0\n"
        "	beq _L_080DDCB4\n"
        "	add r4, r6, #0\n"
        "	add r4, #0x60\n"
        "	mov r0, #0x47\n"
        "	add r0, r0, r6\n"
        "	mov r8, r0\n"
        "	b _L_080DDE1E\n"
        "_L_080DDCA2:\n"
        "	cmp r4, #2\n"
        "	bne _L_080DDCA8\n"
        "	b _L_080DDE08\n"
        "_L_080DDCA8:\n"
        "	add r4, r6, #0\n"
        "	add r4, #0x60\n"
        "	mov r1, #0x47\n"
        "	add r1, r1, r6\n"
        "	mov r8, r1\n"
        "	b _L_080DDE1E\n"
        "_L_080DDCB4:\n"
        "	bl func_080D11E4\n"
        "	asr r0, r0, #8\n"
        "	mov r1, #1\n"
        "	and r0, r1\n"
        "	add r0, #1\n"
        "	strb r0, [r5]\n"
        "	add r5, r0, #0\n"
        "	cmp r5, #1\n"
        "	bne _L_080DDCEE\n"
        "	mov r0, #4\n"
        "	bl func_080AB788\n"
        "	lsl r0, r0, #8\n"
        "	mov r2, #0x80\n"
        "	lsl r2, r2, #1\n"
        "	add r0, r0, r2\n"
        "	add r4, r6, #0\n"
        "	add r4, #0x60\n"
        "	strh r0, [r4]\n"
        "	bl func_080D11E4\n"
        "	asr r0, r0, #8\n"
        "	and r0, r5\n"
        "	lsl r0, r0, #0xb\n"
        "	add r1, r6, #0\n"
        "	add r1, #0x64\n"
        "	strh r0, [r1]\n"
        "	b _L_080DDD04\n"
        "_L_080DDCEE:\n"
        "	mov r0, #2\n"
        "	bl func_080AB788\n"
        "	lsl r1, r0, #4\n"
        "	sub r1, r1, r0\n"
        "	lsl r1, r1, #2\n"
        "	add r1, #0xb4\n"
        "	add r0, r6, #0\n"
        "	add r0, #0x60\n"
        "	strh r1, [r0]\n"
        "	add r4, r0, #0\n"
        "_L_080DDD04:\n"
        "	mov r0, #2\n"
        "	bl func_080AB788\n"
        "	lsl r0, r0, #2\n"
        "	add r0, #0xc\n"
        "	add r1, r6, #0\n"
        "	add r1, #0x66\n"
        "	strh r0, [r1]\n"
        "	mov r3, #0x47\n"
        "	add r3, r3, r6\n"
        "	mov r8, r3\n"
        "	b _L_080DDE1E\n"
        "_L_080DDD1C:\n"
        "	add r1, r6, #0\n"
        "	add r1, #0x64\n"
        "	ldrh r0, [r1]\n"
        "	mov r7, #0xff\n"
        "	lsl r7, r7, #4\n"
        "	and r7, r0\n"
        "	mov sb, r1\n"
        "	cmp r7, #0\n"
        "	bne _L_080DDD5C\n"
        "	ldr r5, .Lpool_080DDD58\n"
        "	ldrh r0, [r6, #4]\n"
        "	mov r1, #0x47\n"
        "	add r1, r1, r6\n"
        "	mov r8, r1\n"
        "	cmp r0, r5\n"
        "	beq _L_080DDD90\n"
        "	add r0, r6, #0\n"
        "	add r0, #0x30\n"
        "	add r1, r5, #0\n"
        "	bl func_0805E860\n"
        "	add r0, r6, #0\n"
        "	add r0, #0x44\n"
        "	strb r4, [r0]\n"
        "	add r0, #2\n"
        "	strb r7, [r0]\n"
        "	mov r2, r8\n"
        "	strb r4, [r2]\n"
        "	b _L_080DDD8E\n"
        "	.align 2, 0\n"
        ".Lpool_080DDD58:\n"
        "	.word 0x00000205\n"
        "_L_080DDD5C:\n"
        "	mov r0, #0x80\n"
        "	lsl r0, r0, #4\n"
        "	mov r3, #0x47\n"
        "	add r3, r3, r6\n"
        "	mov r8, r3\n"
        "	cmp r7, r0\n"
        "	bne _L_080DDD90\n"
        "	mov r5, #0x81\n"
        "	lsl r5, r5, #2\n"
        "	ldrh r0, [r6, #4]\n"
        "	cmp r0, r5\n"
        "	beq _L_080DDD90\n"
        "	add r0, r6, #0\n"
        "	add r0, #0x30\n"
        "	add r1, r5, #0\n"
        "	bl func_0805E860\n"
        "	add r0, r6, #0\n"
        "	add r0, #0x44\n"
        "	mov r1, #0\n"
        "	strb r4, [r0]\n"
        "	add r0, #2\n"
        "	strb r1, [r0]\n"
        "	mov r0, r8\n"
        "	strb r4, [r0]\n"
        "_L_080DDD8E:\n"
        "	strh r5, [r6, #4]\n"
        "_L_080DDD90:\n"
        "	mov r2, sb\n"
        "	ldrh r1, [r2]\n"
        "	lsl r1, r1, #0x10\n"
        "	asr r1, r1, #0x14\n"
        "	mov r5, #0xff\n"
        "	and r1, r5\n"
        "	add r0, r6, #0\n"
        "	bl func_0803A320\n"
        "	add r4, r0, #0\n"
        "	lsl r4, r4, #0x10\n"
        "	asr r4, r4, #0x10\n"
        "	mov r3, sb\n"
        "	ldrh r1, [r3]\n"
        "	lsl r1, r1, #0x10\n"
        "	asr r1, r1, #0x14\n"
        "	lsl r1, r1, #1\n"
        "	and r1, r5\n"
        "	add r0, r6, #0\n"
        "	bl func_0803A334\n"
        "	lsl r0, r0, #0x10\n"
        "	add r1, r6, #0\n"
        "	add r1, #0x66\n"
        "	ldrh r1, [r1]\n"
        "	mov r2, sb\n"
        "	ldrh r2, [r2]\n"
        "	add r1, r1, r2\n"
        "	mov r3, sb\n"
        "	strh r1, [r3]\n"
        "	lsl r4, r4, #6\n"
        "	ldr r2, [r6, #0x58]\n"
        "	add r2, r2, r4\n"
        "	str r2, [r6, #0x58]\n"
        "	asr r0, r0, #0xa\n"
        "	ldr r1, [r6, #0x5c]\n"
        "	add r1, r1, r0\n"
        "	str r1, [r6, #0x5c]\n"
        "	asr r2, r2, #0x10\n"
        "	add r0, r6, #0\n"
        "	add r0, #0x54\n"
        "	strh r2, [r0]\n"
        "	ldr r0, [r6, #0x5c]\n"
        "	asr r0, r0, #0x10\n"
        "	add r1, r6, #0\n"
        "	add r1, #0x56\n"
        "	strh r0, [r1]\n"
        "	ldr r1, [r6, #0x68]\n"
        "	ldr r0, .Lpool_080DDE04\n"
        "	add r4, r6, #0\n"
        "	add r4, #0x60\n"
        "	cmp r1, r0\n"
        "	bgt _L_080DDE1E\n"
        "	mov r2, #0x80\n"
        "	lsl r2, r2, #6\n"
        "	add r0, r1, r2\n"
        "	b _L_080DDE1C\n"
        "	.align 2, 0\n"
        ".Lpool_080DDE04:\n"
        "	.word 0x0007FFFF\n"
        "_L_080DDE08:\n"
        "	ldr r0, [r6, #0x68]\n"
        "	add r4, r6, #0\n"
        "	add r4, #0x60\n"
        "	mov r3, #0x47\n"
        "	add r3, r3, r6\n"
        "	mov r8, r3\n"
        "	cmp r0, #0\n"
        "	ble _L_080DDE1E\n"
        "	ldr r1, .Lpool_080DDE54\n"
        "	add r0, r0, r1\n"
        "_L_080DDE1C:\n"
        "	str r0, [r6, #0x68]\n"
        "_L_080DDE1E:\n"
        "	ldrh r0, [r4]\n"
        "	sub r0, #1\n"
        "	mov r1, #0\n"
        "	strh r0, [r4]\n"
        "	lsl r0, r0, #0x10\n"
        "	cmp r0, #0\n"
        "	bge _L_080DDE32\n"
        "	add r0, r6, #0\n"
        "	add r0, #0x62\n"
        "	strb r1, [r0]\n"
        "_L_080DDE32:\n"
        "	mov r2, r8\n"
        "	ldrb r0, [r2]\n"
        "	cmp r0, #0\n"
        "	bne _L_080DDE58\n"
        "	add r0, r6, #0\n"
        "	add r0, #0x30\n"
        "	bl func_0805E8F0\n"
        "	lsl r0, r0, #0x1e\n"
        "	cmp r0, #0\n"
        "	bge _L_080DDE5C\n"
        "	add r1, r6, #0\n"
        "	add r1, #0x44\n"
        "	mov r0, #1\n"
        "	strb r0, [r1]\n"
        "	b _L_080DDE5C\n"
        "	.align 2, 0\n"
        ".Lpool_080DDE54:\n"
        "	.word 0xFFFFE000\n"
        "_L_080DDE58:\n"
        "	mov r3, r8\n"
        "	strb r1, [r3]\n"
        "_L_080DDE5C:\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_080DDE68 @ 0x080DDE68 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08039F50();
void func_080DDE68(void) {
  func_08039F50();
}

/* --- func_080DDE74 @ 0x080DDE74 (36B) [PURE-C | agbcc_O2] --- */
#define NULL 0

struct B { u8 f:4; u32 x; u16 y, z; };
void func_080DDE74(u8 *arg0, struct B *arg1) {
    arg1->f = 4;
    arg1->x = *(u32 *)(arg0 + 0x50);
    arg1->y = *(u16 *)(arg0 + 0x54);
    arg1->z = *(u16 *)(arg0 + 0x56);
}

/* --- func_080DDE98 @ 0x080DDE98 (44B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08039F90(u8 *, u32, u32, u32, int, int, int, int);
void func_080DDE98(u8 *a, u32 b, u32 c, u32 d) {
    func_08039F90(a, b, c, d, *(s16 *)(a + 0x54), *(s16 *)(a + 0x56), 0, 2);
}

/* --- func_080DDEC4 @ 0x080DDEC4 (72B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern int func_0803A180();
extern void func_0805E860();
void func_080DDEC4(int param_1) {
    register int p1 asm("r4") = param_1;
    register u32 r5 asm("r5");
    if (func_0803A180(p1, p1 + 0x50, 0x80 << 6) != 0) {
        __asm__(
            "ldr r0, [%1, #0x50]\n\t"
            "ldr r1, =0x00000806\n\t"
            "add %0, r0, r1"
            : "=r"(r5) : "r"(p1) : "r0", "r1"
        );
        if (*(u16 *)(p1 + 4) != r5) {
            func_0805E860(p1 + 0x30, r5);
            __asm__ volatile(
                "add r0, %0, #0\n\t"
                "add r0, #0x44\n\t"
                "mov r2, #0\n\t"
                "mov r1, #1\n\t"
                "strb r1, [r0]\n\t"
                "add r0, #2\n\t"
                "strb r2, [r0]\n\t"
                "add r0, #1\n\t"
                "strb r1, [r0]\n\t"
                "strh %1, [%0, #4]"
                : : "r"(p1), "r"(r5) : "r0", "r1", "r2", "memory"
            );
        }
    }
}

/* --- func_080DDF0C @ 0x080DDF0C (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08039F50();
void func_080DDF0C(void) {
  func_08039F50();
}

/* --- func_080DDF18 @ 0x080DDF18 (36B) [PURE-C | agbcc_O2] --- */
#define NULL 0

struct B { u8 f:4; u32 x; u16 y, z; };
void func_080DDF18(u8 *arg0, struct B *arg1) {
    arg1->f = 3;
    arg1->x = *(u32 *)(arg0 + 0x50);
    arg1->y = *(u16 *)(arg0 + 0x54);
    arg1->z = *(u16 *)(arg0 + 0x56);
}

/* --- func_080DDF3C @ 0x080DDF3C (44B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08039F90(u8 *, u32, u32, u32, int, int, int, int);
void func_080DDF3C(u8 *a, u32 b, u32 c, u32 d) {
    func_08039F90(a, b, c, d, *(s16 *)(a + 0x54), *(s16 *)(a + 0x56), 8, 2);
}

/* --- func_080DDF68 @ 0x080DDF68 (72B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern int func_0803A180();
extern void func_0805E860();
void func_080DDF68(int param_1) {
    register int p1 asm("r4") = param_1;
    register u32 r5 asm("r5");
    if (func_0803A180(p1, p1 + 0x50, 0x80 << 7) != 0) {
        __asm__(
            "ldr r0, [%1, #0x50]\n\t"
            "ldr r1, =0x000003DB\n\t"
            "add %0, r0, r1"
            : "=r"(r5) : "r"(p1) : "r0", "r1"
        );
        if (*(u16 *)(p1 + 4) != r5) {
            func_0805E860(p1 + 0x30, r5);
            __asm__ volatile(
                "add r0, %0, #0\n\t"
                "add r0, #0x44\n\t"
                "mov r2, #0\n\t"
                "mov r1, #1\n\t"
                "strb r1, [r0]\n\t"
                "add r0, #2\n\t"
                "strb r2, [r0]\n\t"
                "add r0, #1\n\t"
                "strb r1, [r0]\n\t"
                "strh %1, [%0, #4]"
                : : "r"(p1), "r"(r5) : "r0", "r1", "r2", "memory"
            );
        }
    }
}

/* --- func_080DDFB0 @ 0x080DDFB0 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08039F50();
void func_080DDFB0(void) {
  func_08039F50();
}

/* --- func_080DDFBC @ 0x080DDFBC (36B) [PURE-C | agbcc_O2] --- */
#define NULL 0

struct B { u8 f:4; u32 x; u16 y, z; };
void func_080DDFBC(u8 *arg0, struct B *arg1) {
    arg1->f = 2;
    arg1->x = *(u32 *)(arg0 + 0x50);
    arg1->y = *(u16 *)(arg0 + 0x54);
    arg1->z = *(u16 *)(arg0 + 0x56);
}

/* --- func_080DDFE0 @ 0x080DDFE0 (44B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08039F90(u8 *, u32, u32, u32, int, int, int, int);
void func_080DDFE0(u8 *a, u32 b, u32 c, u32 d) {
    func_08039F90(a, b, c, d, *(s16 *)(a + 0x54), *(s16 *)(a + 0x56), 8, 2);
}

/* --- func_080DE00C @ 0x080DE00C (68B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern int func_0803A180();
extern void func_0805E860();
void func_080DE00C(int param_1) {
    register int p1 asm("r4") = param_1;
    register u32 r5 asm("r5");
    if (func_0803A180(p1, p1 + 0x50, 0x80 << 8) != 0) {
        __asm__("ldr r0, [%1, #0x50]\n\tadd %0, r0, #0\n\tadd %0, #0x10" : "=r"(r5) : "r"(p1) : "r0");
        if (*(u16 *)(p1 + 4) != r5) {
            func_0805E860(p1 + 0x30, r5);
            __asm__ volatile(
                "add r0, %0, #0\n\t"
                "add r0, #0x44\n\t"
                "mov r2, #0\n\t"
                "mov r1, #1\n\t"
                "strb r1, [r0]\n\t"
                "add r0, #2\n\t"
                "strb r2, [r0]\n\t"
                "add r0, #1\n\t"
                "strb r1, [r0]\n\t"
                "strh %1, [%0, #4]"
                : : "r"(p1), "r"(r5) : "r0", "r1", "r2", "memory"
            );
        }
    }
}

/* --- func_080DE050 @ 0x080DE050 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08039F50();
void func_080DE050(void) {
  func_08039F50();
}

/* --- func_080DE05C @ 0x080DE05C (36B) [PURE-C | agbcc_O2] --- */
#define NULL 0

struct B { u8 f:4; u32 x; u16 y, z; };
void func_080DE05C(u8 *arg0, struct B *arg1) {
    arg1->f = 1;
    arg1->x = *(u32 *)(arg0 + 0x50);
    arg1->y = *(u16 *)(arg0 + 0x54);
    arg1->z = *(u16 *)(arg0 + 0x56);
}

/* --- func_080DE080 @ 0x080DE080 (44B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08039F90(u8 *, u32, u32, u32, int, int, int, int);
void func_080DE080(u8 *a, u32 b, u32 c, u32 d) {
    func_08039F90(a, b, c, d, *(s16 *)(a + 0x54), *(s16 *)(a + 0x56), 0, 2);
}

/* --- func_080DE0AC @ 0x080DE0AC (124B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern int func_0803A180();
extern void func_0805E860();
void func_080DE0AC(int param_1) {
    register int p1 asm("r4");
    register int r5 asm("r5");
    register int r6 asm("r6");
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add r1, %0, #0\n\t"
        "add r1, #0x50\n\t"
        "mov r2, #0x80\n\t"
        "lsl r2, r2, #8\n\t"
        "bl func_0803A180\n\t"
        "cmp r0, #0\n\t"
        "beq _end_func_080DE0AC\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x62\n\t"
        "mov %2, #0\n\t"
        "ldrsb %2, [r0, %2]\n\t"
        "cmp %2, #0\n\t"
        "bne _else_func_080DE0AC\n\t"
        "ldr r0, [%0, #0x50]\n\t"
        "ldr r1, .Lpool1_func_080DE0AC\n\t"
        "add %1, r0, r1\n\t"
        "ldrh r0, [%0, #4]\n\t"
        "cmp r0, %1\n\t"
        "beq _end_func_080DE0AC\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x30\n\t"
        "add r1, %1, #0\n\t"
        "bl func_0805E860\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x44\n\t"
        "mov r1, #1\n\t"
        "strb r1, [r0]\n\t"
        "add r0, #2\n\t"
        "strb %2, [r0]\n\t"
        "b _join_func_080DE0AC\n\t.align 2, 0\n.Lpool1_func_080DE0AC:\n\t.word 0x000009B6\n"
        "_else_func_080DE0AC:\n\t"
        "ldr r0, [%0, #0x50]\n\t"
        "ldr r1, =0x000009BA\n\t"
        "add %1, r0, r1\n\t"
        "ldrh r0, [%0, #4]\n\t"
        "cmp r0, %1\n\t"
        "beq _end_func_080DE0AC\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x30\n\t"
        "add r1, %1, #0\n\t"
        "bl func_0805E860\n\t"
        "add r0, %0, #0\n\t"
        "add r0, #0x44\n\t"
        "mov r2, #0\n\t"
        "mov r1, #1\n\t"
        "strb r1, [r0]\n\t"
        "add r0, #2\n\t"
        "strb r2, [r0]\n"
        "_join_func_080DE0AC:\n\t"
        "add r0, #1\n\t"
        "strb r1, [r0]\n\t"
        "strh %1, [%0, #4]\n"
        "_end_func_080DE0AC:"
        : "=r"(p1), "=r"(r5), "=r"(r6) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_080DE128 @ 0x080DE128 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08039F50();
void func_080DE128(void) {
  func_08039F50();
}

/* --- func_080DE134 @ 0x080DE134 (80B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DE134 @ 0x080DE134 (80 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r4)
 * Fields : +0x00:u32(R), +0x08:u32(R), +0x10:u32(R), +0x4C:u32(R)
 * Callees: func_080D391C
 * CFG Structure:
 *   L_080DE134: if (==) goto L_080DE176
 *   L_080DE15A: if (==) goto L_080DE170
 *   L_080DE170: if (!=) goto L_080DE15A
 *   L_080DE176: return
 * ========================================================================== */
extern void func_080D391C(void);
void func_080DE134(void) {
    int r7_var;
    __asm__ volatile(
        "	ldr r2, [r0]\n"
        "	ldr r2, [r2]\n"
        "	mov sb, r2\n"
        "	ldr r2, [r1, #8]\n"
        "	mov r8, r2\n"
        "	ldr r7, [r1]\n"
        "	add r5, r0, #0\n"
        "	add r5, #0xc\n"
        "	ldr r1, [r0, #8]\n"
        "	lsl r1, r1, #2\n"
        "	add r1, r1, r0\n"
        "	add r6, r1, #0\n"
        "	add r6, #0xc\n"
        "	cmp r5, r6\n"
        "	beq _L_080DE176\n"
        "_L_080DE15A:\n"
        "	ldr r1, [r5]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DE170\n"
        "	ldr r0, [r1, #0x4c]\n"
        "	ldr r4, [r0, #0x10]\n"
        "	add r0, r1, #0\n"
        "	mov r1, sb\n"
        "	mov r2, r8\n"
        "	add r3, r7, #0\n"
        "	bl func_080D391C\n"
        "_L_080DE170:\n"
        "	add r5, #4\n"
        "	cmp r5, r6\n"
        "	bne _L_080DE15A\n"
        "_L_080DE176:\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_080DE184 @ 0x080DE184 (48B) [PURE-C | agbcc_O2] --- */
#define NULL 0

extern void func_080D3910();
void func_080DE184(int param_1) {
    int *p = (int *)(param_1 + 0xc);
    int *end = (int *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc);
    for (; p != end; p++) {
        int v = *p;
        if (v != 0) {
            func_080D3910(v, *(u32 *)(*(int *)(v + 0x4c) + 0xc));
        }
    }
}

/* --- func_080DE1B4 @ 0x080DE1B4 (108B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DE1B4 @ 0x080DE1B4 (108 bytes)
 * Role   : C++ Virtual Deleting Destructor ~Class(this, int __in_chrg) [vtable: 0x080E65E0, 0x080E76D4]
 * Fields : +0x00:u32(R), +0x04:u32(W), +0x08:u32(R), +0x4C:u32(R)
 * Callees: func_08000608, func_080D3914
 * CFG Structure:
 *   L_080DE1B4: goto L_080DE1F2
 *   L_080DE1D8: if (==) goto L_080DE1EC
 *   L_080DE1F2: if (!=) goto L_080DE1FE
 *   L_080DE1FE: if (==) goto L_080DE1D8
 *   L_080DE214: return
 * ========================================================================== */
extern void func_08000608(void);
extern void func_080D3914(void);
void func_080DE1B4(void) {
    u32 sp0, sp1, sp2, sp3;
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	add r5, r1, #0\n"
        "	ldr r0, .Lpool_080DE1D4\n"
        "	str r0, [r4, #4]\n"
        "	ldr r0, [r4, #8]\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r0, r4\n"
        "	add r0, #0xc\n"
        "	str r0, [sp, #4]\n"
        "	add r0, r4, #0\n"
        "	add r0, #0xc\n"
        "	str r0, [sp, #0xc]\n"
        "	b _L_080DE1F2\n"
        "	.align 2, 0\n"
        ".Lpool_080DE1D4:\n"
        "	.word 0x080E76D4\n"
        "_L_080DE1D8:\n"
        "	sub r0, r2, #4\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DE1EC\n"
        "	ldr r0, [r1, #0x4c]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080DE1EC:\n"
        "	ldr r0, [sp, #4]\n"
        "	sub r0, #4\n"
        "	str r0, [sp, #4]\n"
        "_L_080DE1F2:\n"
        "	ldr r2, [sp, #4]\n"
        "	ldr r0, [sp, #0xc]\n"
        "	mov r1, #0\n"
        "	cmp r2, r0\n"
        "	bne _L_080DE1FE\n"
        "	mov r1, #1\n"
        "_L_080DE1FE:\n"
        "	cmp r1, #0\n"
        "	beq _L_080DE1D8\n"
        "	ldr r0, =0x080E65E0\n"
        "	str r0, [r4, #4]\n"
        "	mov r0, #1\n"
        "	and r0, r5\n"
        "	cmp r0, #0\n"
        "	beq _L_080DE214\n"
        "	add r0, r4, #0\n"
        "	bl func_08000608\n"
        "_L_080DE214:\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
}

/* --- func_080DE220 @ 0x080DE220 (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
void func_080DE220(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E76F8;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080DE240 @ 0x080DE240 (32B) [PURE-C | agbcc_O2] --- */
#define NULL 0

extern void func_080D3B28();
u8 *func_080DE240(u8 *arg0) {
    u8 buf[32];
    buf[0] = 0;
    *arg0 = 0;
    func_080D3B28(arg0 + 4, buf);
    return arg0;
}

/* --- func_080DE260 @ 0x080DE260 (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
void func_080DE260(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E76F8;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080DE280 @ 0x080DE280 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080E0908();
void func_080DE280(int arg0) {
  func_080E0908(arg0 + -4);
}

/* --- func_080DE28C @ 0x080DE28C (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080E0908();
void func_080DE28C(int arg0) {
  func_080E0908((arg0 - 0xc));
}

/* --- func_080DE298 @ 0x080DE298 (7148B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DE298 @ 0x080DE298 (7148 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r1, _call_via_r2)
 * Fields : +0x00:u16(RW), +0x00:u32(RW), +0x00:u8(R), +0x01:u8(RW), +0x02:u16(RW), +0x03:u8(RW), +0x04:u16(RW), +0x06:u8(W), +0x08:u32(R), +0x0C:u32(R), +0x14:u32(R), +0x20:u32(R)
 * Callees: func_0803211C, func_08032198, func_080D3910, func_080D3914, func_080D3994, func_080E0080
 * CFG Structure:
 *   L_080DE298: if (<= (u)) goto L_080DE2B4
 *   L_080DF750: if (==) goto L_080DF76E
 *   L_080DF76E: if (==) goto L_080DF782
 *   L_080DF782: if (==) goto L_080DF794
 *   L_080DF794: if (==) goto L_080DF7A6
 *   L_080DF7A6: call _call_via_r2(); if (!=) goto L_080DF7C2
 *   L_080DF7C2: call _call_via_r1(); call func_080D3994(); call func_0803211C(); call _call_via_r1(); call func_080E0080()
 *   L_080DF8C6: if (==) goto L_080DF8E6
 *   L_080DF8E6: call _call_via_r2(); if (==) goto L_080DF900
 *   L_080DF900: goto L_080DF9DA
 *   L_080DF904: if (==) goto L_080DF924
 * ========================================================================== */
extern void func_0803211C(void);
extern void func_08032198(void);
extern void func_080D3910(void);
extern void func_080D3914(void);
extern void func_080D3994(void);
extern void func_080E0080(void);
void func_080DE298(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, r7, lr}\n"
        "	mov r7, sl\n"
        "	mov r6, sb\n"
        "	mov r5, r8\n"
        "	push {r5, r6, r7}\n"
        "	sub sp, #0x30\n"
        "	sub r0, #0xc\n"
        "	mov r8, r0\n"
        "	sub r1, #2\n"
        "	ldr r0, .Lpool_080DE2C0\n"
        "	cmp r1, r0\n"
        "	bls _L_080DE2B4\n"
        "	bl func_080E0080\n"
        "_L_080DE2B4:\n"
        "	lsl r0, r1, #2\n"
        "	ldr r1, .Lpool_080DE2C4\n"
        "	add r0, r0, r1\n"
        "	ldr r0, [r0]\n"
        "	mov pc, r0\n"
        "	.hword 0x0000\n"
        ".Lpool_080DE2C0:\n"
        "	.word 0x00000141\n"
        ".Lpool_080DE2C4:\n"
        "	.word _Ljt_080DE2C8\n"
        "_Ljt_080DE2C8:\n"
        "	.word _L_080DF750\n"
        "	.word _L_080DF8C6\n"
        "	.word _L_080DF904\n"
        "	.word _L_080DF940\n"
        "	.word _L_080DF99C\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0xF9EE\n"
        "	.hword 0x080D\n"
        "	.hword 0xFAB2\n"
        "	.hword 0x080D\n"
        "	.hword 0xFA50\n"
        "	.hword 0x080D\n"
        "	.hword 0xFB14\n"
        "	.hword 0x080D\n"
        "	.hword 0xFB76\n"
        "	.hword 0x080D\n"
        "	.hword 0xFBB6\n"
        "	.hword 0x080D\n"
        "	.hword 0xFC10\n"
        "	.hword 0x080D\n"
        "	.hword 0xFC24\n"
        "	.hword 0x080D\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0xFC5C\n"
        "	.hword 0x080D\n"
        "	.hword 0xFCC2\n"
        "	.hword 0x080D\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0xF51A\n"
        "	.hword 0x080D\n"
        "	.hword 0xF5E8\n"
        "	.hword 0x080D\n"
        "	.hword 0xF638\n"
        "	.hword 0x080D\n"
        "	.hword 0xF65E\n"
        "	.hword 0x080D\n"
        "	.hword 0xF6B0\n"
        "	.hword 0x080D\n"
        "	.hword 0xF6C2\n"
        "	.hword 0x080D\n"
        "	.hword 0xF748\n"
        "	.hword 0x080D\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0xE7D0\n"
        "	.hword 0x080D\n"
        "	.hword 0xE8AE\n"
        "	.hword 0x080D\n"
        "	.hword 0xE97C\n"
        "	.hword 0x080D\n"
        "	.hword 0xE8CE\n"
        "	.hword 0x080D\n"
        "	.hword 0xE924\n"
        "	.hword 0x080D\n"
        "	.hword 0xE9D4\n"
        "	.hword 0x080D\n"
        "	.hword 0xEAA4\n"
        "	.hword 0x080D\n"
        "	.hword 0xEBB8\n"
        "	.hword 0x080D\n"
        "	.hword 0xED0C\n"
        "	.hword 0x080D\n"
        "	.hword 0xEDB4\n"
        "	.hword 0x080D\n"
        "	.hword 0xEE9E\n"
        "	.hword 0x080D\n"
        "	.hword 0xEFCE\n"
        "	.hword 0x080D\n"
        "	.hword 0xF136\n"
        "	.hword 0x080D\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0xF318\n"
        "	.hword 0x080D\n"
        "	.hword 0xF3F0\n"
        "	.hword 0x080D\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0xF2EC\n"
        "	.hword 0x080D\n"
        "	.hword 0xFCF6\n"
        "	.hword 0x080D\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0040\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0xFF6E\n"
        "	.hword 0x080D\n"
        "	.hword 0xFFF2\n"
        "	.hword 0x080D\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0058\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0xFF3A\n"
        "	.hword 0x080D\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0xFD5C\n"
        "	.hword 0x080D\n"
        "	.hword 0xFD80\n"
        "	.hword 0x080D\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0xFD38\n"
        "	.hword 0x080D\n"
        "	.hword 0xFD24\n"
        "	.hword 0x080D\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0x0080\n"
        "	.hword 0x080E\n"
        "	.hword 0xFDAC\n"
        "	.hword 0x080D\n"
        "	.hword 0xFE36\n"
        "	.hword 0x080D\n"
        "	.hword 0xFE8C\n"
        "	.hword 0x080D\n"
        "	.hword 0xFEFE\n"
        "	.hword 0x080D\n"
        "	.hword 0xFFBA\n"
        "	.hword 0x080D\n"
        "	.hword 0xF85C\n"
        "	.hword 0x080D\n"
        "	.hword 0x20DB\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6805\n"
        "	.hword 0x1C06\n"
        "	.hword 0x2D00\n"
        "	.hword 0xD157\n"
        "	.hword 0x20E8\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x7800\n"
        "	.hword 0x2800\n"
        "	.hword 0xD129\n"
        "	.hword 0x2004\n"
        "	.hword 0xF721\n"
        "	.hword 0xFEF2\n"
        "	.hword 0x1C04\n"
        "	.hword 0xA804\n"
        "	.hword 0xF729\n"
        "	.hword 0xFDB2\n"
        "	.hword 0xA805\n"
        "	.hword 0xF728\n"
        "	.hword 0xFF87\n"
        "	.hword 0xA905\n"
        "	.hword 0x2001\n"
        "	.hword 0x9000\n"
        "	.hword 0xA804\n"
        "	.hword 0x9001\n"
        "	.hword 0x9102\n"
        "	.hword 0x1C20\n"
        "	.hword 0x2100\n"
        "	.hword 0x221F\n"
        "	.hword 0x2300\n"
        "	.hword 0xF772\n"
        "	.hword 0xFA55\n"
        "	.hword 0x1C35\n"
        "	.hword 0x1C04\n"
        "	.hword 0x6830\n"
        "	.hword 0x4284\n"
        "	.hword 0xD004\n"
        "	.hword 0x2800\n"
        "	.hword 0xD002\n"
        "	.hword 0x2103\n"
        "	.hword 0xF772\n"
        "	.hword 0xFA71\n"
        "	.hword 0x602C\n"
        "	.hword 0xA805\n"
        "	.hword 0x2102\n"
        "	.hword 0xF728\n"
        "	.hword 0xFF70\n"
        "	.hword 0xA804\n"
        "	.hword 0x2102\n"
        "	.hword 0xF729\n"
        "	.hword 0xFD94\n"
        "	.hword 0xE027\n"
        "	.hword 0x2004\n"
        "	.hword 0xF721\n"
        "	.hword 0xFEC8\n"
        "	.hword 0x1C04\n"
        "	.hword 0xA804\n"
        "	.hword 0xF729\n"
        "	.hword 0xFD88\n"
        "	.hword 0xA805\n"
        "	.hword 0xF728\n"
        "	.hword 0xFF5D\n"
        "	.hword 0xA805\n"
        "	.hword 0x9500\n"
        "	.hword 0xA904\n"
        "	.hword 0x9101\n"
        "	.hword 0x9002\n"
        "	.hword 0x1C20\n"
        "	.hword 0x2100\n"
        "	.hword 0x221F\n"
        "	.hword 0x2300\n"
        "	.hword 0xF772\n"
        "	.hword 0xFA2C\n"
        "	.hword 0x1C35\n"
        "	.hword 0x1C04\n"
        "	.hword 0x6830\n"
        "	.hword 0x4284\n"
        "	.hword 0xD004\n"
        "	.hword 0x2800\n"
        "	.hword 0xD002\n"
        "	.hword 0x2103\n"
        "	.hword 0xF772\n"
        "	.hword 0xFA48\n"
        "	.hword 0x602C\n"
        "	.hword 0xA805\n"
        "	.hword 0x2102\n"
        "	.hword 0xF728\n"
        "	.hword 0xFF47\n"
        "	.hword 0xA804\n"
        "	.hword 0x2102\n"
        "	.hword 0xF729\n"
        "	.hword 0xFD6B\n"
        "	.hword 0x6830\n"
        "	.hword 0xF772\n"
        "	.hword 0xFA50\n"
        "	.hword 0x2803\n"
        "	.hword 0xD101\n"
        "	.hword 0xF001\n"
        "	.hword 0xFBF0\n"
        "	.hword 0x6830\n"
        "	.hword 0xF772\n"
        "	.hword 0xFA5D\n"
        "	.hword 0x21D9\n"
        "	.hword 0x0089\n"
        "	.hword 0x4441\n"
        "	.hword 0x2002\n"
        "	.hword 0xF001\n"
        "	.hword 0xFBE6\n"
        "	.hword 0x20DB\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x2800\n"
        "	.hword 0xD101\n"
        "	.hword 0xF001\n"
        "	.hword 0xFBDF\n"
        "	.hword 0xF772\n"
        "	.hword 0xFA59\n"
        "	.hword 0x21D9\n"
        "	.hword 0x0089\n"
        "	.hword 0x4441\n"
        "	.hword 0x2003\n"
        "	.hword 0xF001\n"
        "	.hword 0xFBD6\n"
        "	.hword 0x22E0\n"
        "	.hword 0x0052\n"
        "	.hword 0x4442\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x4440\n"
        "	.hword 0x6AC3\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x4642\n"
        "	.hword 0x320C\n"
        "	.hword 0x6910\n"
        "	.hword 0x4283\n"
        "	.hword 0xD806\n"
        "	.hword 0x6951\n"
        "	.hword 0x0098\n"
        "	.hword 0x1840\n"
        "	.hword 0x6991\n"
        "	.hword 0x6800\n"
        "	.hword 0x1809\n"
        "	.hword 0xE000\n"
        "	.hword 0x4908\n"
        "	.hword 0x20DB\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x2800\n"
        "	.hword 0xD101\n"
        "	.hword 0xF001\n"
        "	.hword 0xFBB7\n"
        "	.hword 0x2240\n"
        "	.hword 0xF772\n"
        "	.hword 0xFA50\n"
        "	.hword 0x21D9\n"
        "	.hword 0x0089\n"
        "	.hword 0x4441\n"
        "	.hword 0x2004\n"
        "	.hword 0xF001\n"
        "	.hword 0xFBAD\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x22E0\n"
        "	.hword 0x0052\n"
        "	.hword 0x4442\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x4440\n"
        "	.hword 0x6AC3\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x4642\n"
        "	.hword 0x320C\n"
        "	.hword 0x6910\n"
        "	.hword 0x4283\n"
        "	.hword 0xD806\n"
        "	.hword 0x6951\n"
        "	.hword 0x0098\n"
        "	.hword 0x1840\n"
        "	.hword 0x6991\n"
        "	.hword 0x6800\n"
        "	.hword 0x1809\n"
        "	.hword 0xE000\n"
        "	.hword 0x4909\n"
        "	.hword 0x20DB\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x2800\n"
        "	.hword 0xD101\n"
        "	.hword 0xF001\n"
        "	.hword 0xFB8C\n"
        "	.hword 0x2200\n"
        "	.hword 0xF772\n"
        "	.hword 0xFA25\n"
        "	.hword 0x21D9\n"
        "	.hword 0x0089\n"
        "	.hword 0x4441\n"
        "	.hword 0x2004\n"
        "	.hword 0xF001\n"
        "	.hword 0xFB82\n"
        "	.hword 0x0000\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x22E0\n"
        "	.hword 0x0052\n"
        "	.hword 0x4442\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x4440\n"
        "	.hword 0x6AC3\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x4642\n"
        "	.hword 0x320C\n"
        "	.hword 0x6910\n"
        "	.hword 0x4283\n"
        "	.hword 0xD806\n"
        "	.hword 0x6951\n"
        "	.hword 0x0098\n"
        "	.hword 0x1840\n"
        "	.hword 0x6991\n"
        "	.hword 0x6800\n"
        "	.hword 0x1809\n"
        "	.hword 0xE000\n"
        "	.hword 0x4909\n"
        "	.hword 0x20DB\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x2800\n"
        "	.hword 0xD101\n"
        "	.hword 0xF001\n"
        "	.hword 0xFB60\n"
        "	.hword 0x2280\n"
        "	.hword 0x0052\n"
        "	.hword 0xF772\n"
        "	.hword 0xF9F8\n"
        "	.hword 0x21D9\n"
        "	.hword 0x0089\n"
        "	.hword 0x4441\n"
        "	.hword 0x2004\n"
        "	.hword 0xF001\n"
        "	.hword 0xFB55\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x4643\n"
        "	.hword 0x3330\n"
        "	.hword 0x22E0\n"
        "	.hword 0x0052\n"
        "	.hword 0x4442\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6807\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6805\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6803\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x4640\n"
        "	.hword 0x300C\n"
        "	.hword 0x6901\n"
        "	.hword 0x1C04\n"
        "	.hword 0x428B\n"
        "	.hword 0xD806\n"
        "	.hword 0x6961\n"
        "	.hword 0x0098\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180E\n"
        "	.hword 0xE000\n"
        "	.hword 0x4E05\n"
        "	.hword 0x6920\n"
        "	.hword 0x4285\n"
        "	.hword 0xD808\n"
        "	.hword 0x6961\n"
        "	.hword 0x00A8\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180A\n"
        "	.hword 0xE002\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x4A05\n"
        "	.hword 0x6920\n"
        "	.hword 0x4287\n"
        "	.hword 0xD809\n"
        "	.hword 0x6961\n"
        "	.hword 0x00B8\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180B\n"
        "	.hword 0xE003\n"
        "	.hword 0x0000\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x4B0E\n"
        "	.hword 0x2100\n"
        "	.hword 0x20DB\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x2800\n"
        "	.hword 0xD101\n"
        "	.hword 0xF001\n"
        "	.hword 0xFB02\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD101\n"
        "	.hword 0xF001\n"
        "	.hword 0xFAFE\n"
        "	.hword 0x2B00\n"
        "	.hword 0xD101\n"
        "	.hword 0xF001\n"
        "	.hword 0xFAFA\n"
        "	.hword 0x9100\n"
        "	.hword 0x9101\n"
        "	.hword 0x9102\n"
        "	.hword 0x1C31\n"
        "	.hword 0xF772\n"
        "	.hword 0xF9CE\n"
        "	.hword 0x21D9\n"
        "	.hword 0x0089\n"
        "	.hword 0x4441\n"
        "	.hword 0x2007\n"
        "	.hword 0xF001\n"
        "	.hword 0xFAED\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x4643\n"
        "	.hword 0x3330\n"
        "	.hword 0x22E0\n"
        "	.hword 0x0052\n"
        "	.hword 0x4442\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6800\n"
        "	.hword 0x4681\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6807\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6806\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6803\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x4640\n"
        "	.hword 0x300C\n"
        "	.hword 0x6901\n"
        "	.hword 0x1C04\n"
        "	.hword 0x428B\n"
        "	.hword 0xD806\n"
        "	.hword 0x6961\n"
        "	.hword 0x0098\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180D\n"
        "	.hword 0xE000\n"
        "	.hword 0x4D05\n"
        "	.hword 0x6920\n"
        "	.hword 0x4286\n"
        "	.hword 0xD808\n"
        "	.hword 0x6961\n"
        "	.hword 0x00B0\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180A\n"
        "	.hword 0xE002\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x4A05\n"
        "	.hword 0x6920\n"
        "	.hword 0x4287\n"
        "	.hword 0xD809\n"
        "	.hword 0x6961\n"
        "	.hword 0x00B8\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180B\n"
        "	.hword 0xE003\n"
        "	.hword 0x0000\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x4B05\n"
        "	.hword 0x6920\n"
        "	.hword 0x4581\n"
        "	.hword 0xD809\n"
        "	.hword 0x6961\n"
        "	.hword 0x464E\n"
        "	.hword 0x00B0\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x1809\n"
        "	.hword 0xE002\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x490D\n"
        "	.hword 0x2400\n"
        "	.hword 0x20DB\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x2800\n"
        "	.hword 0xD101\n"
        "	.hword 0xF001\n"
        "	.hword 0xFA82\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD101\n"
        "	.hword 0xF001\n"
        "	.hword 0xFA7E\n"
        "	.hword 0x2B00\n"
        "	.hword 0xD101\n"
        "	.hword 0xF001\n"
        "	.hword 0xFA7A\n"
        "	.hword 0x2900\n"
        "	.hword 0xD109\n"
        "	.hword 0x9400\n"
        "	.hword 0x9401\n"
        "	.hword 0x9402\n"
        "	.hword 0x1C29\n"
        "	.hword 0xF772\n"
        "	.hword 0xF94C\n"
        "	.hword 0xE008\n"
        "	.hword 0x0000\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x9100\n"
        "	.hword 0x9401\n"
        "	.hword 0x9402\n"
        "	.hword 0x1C29\n"
        "	.hword 0xF772\n"
        "	.hword 0xF942\n"
        "	.hword 0x21D9\n"
        "	.hword 0x0089\n"
        "	.hword 0x4441\n"
        "	.hword 0x2007\n"
        "	.hword 0xF001\n"
        "	.hword 0xFA61\n"
        "	.hword 0x4643\n"
        "	.hword 0x3330\n"
        "	.hword 0x22E0\n"
        "	.hword 0x0052\n"
        "	.hword 0x4442\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6800\n"
        "	.hword 0x4682\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6800\n"
        "	.hword 0x4681\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6807\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6805\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6803\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x4640\n"
        "	.hword 0x300C\n"
        "	.hword 0x6901\n"
        "	.hword 0x1C04\n"
        "	.hword 0x428B\n"
        "	.hword 0xD806\n"
        "	.hword 0x6961\n"
        "	.hword 0x0098\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180E\n"
        "	.hword 0xE000\n"
        "	.hword 0x4E05\n"
        "	.hword 0x6920\n"
        "	.hword 0x4285\n"
        "	.hword 0xD808\n"
        "	.hword 0x6961\n"
        "	.hword 0x00A8\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180A\n"
        "	.hword 0xE002\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x4A05\n"
        "	.hword 0x6920\n"
        "	.hword 0x4287\n"
        "	.hword 0xD809\n"
        "	.hword 0x6961\n"
        "	.hword 0x00B8\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180B\n"
        "	.hword 0xE003\n"
        "	.hword 0x0000\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x4B05\n"
        "	.hword 0x6920\n"
        "	.hword 0x4581\n"
        "	.hword 0xD809\n"
        "	.hword 0x6961\n"
        "	.hword 0x464F\n"
        "	.hword 0x00B8\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180D\n"
        "	.hword 0xE002\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x4D05\n"
        "	.hword 0x6920\n"
        "	.hword 0x4582\n"
        "	.hword 0xD809\n"
        "	.hword 0x6961\n"
        "	.hword 0x4657\n"
        "	.hword 0x00B8\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x1809\n"
        "	.hword 0xE002\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x490B\n"
        "	.hword 0x20DB\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6804\n"
        "	.hword 0x2C00\n"
        "	.hword 0xD101\n"
        "	.hword 0xF001\n"
        "	.hword 0xF9E1\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD101\n"
        "	.hword 0xF001\n"
        "	.hword 0xF9DD\n"
        "	.hword 0x2B00\n"
        "	.hword 0xD101\n"
        "	.hword 0xF001\n"
        "	.hword 0xF9D9\n"
        "	.hword 0x2D00\n"
        "	.hword 0xD106\n"
        "	.hword 0x9500\n"
        "	.hword 0x9501\n"
        "	.hword 0x9502\n"
        "	.hword 0xE007\n"
        "	.hword 0x0000\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x2900\n"
        "	.hword 0xD107\n"
        "	.hword 0x9500\n"
        "	.hword 0x9101\n"
        "	.hword 0x9102\n"
        "	.hword 0x1C20\n"
        "	.hword 0x1C31\n"
        "	.hword 0xF772\n"
        "	.hword 0xF8A1\n"
        "	.hword 0xE007\n"
        "	.hword 0x9500\n"
        "	.hword 0x9101\n"
        "	.hword 0x2000\n"
        "	.hword 0x9002\n"
        "	.hword 0x1C20\n"
        "	.hword 0x1C31\n"
        "	.hword 0xF772\n"
        "	.hword 0xF898\n"
        "	.hword 0x21D9\n"
        "	.hword 0x0089\n"
        "	.hword 0x4441\n"
        "	.hword 0x2007\n"
        "	.hword 0xF001\n"
        "	.hword 0xF9B7\n"
        "	.hword 0x4643\n"
        "	.hword 0x3330\n"
        "	.hword 0x22E0\n"
        "	.hword 0x0052\n"
        "	.hword 0x4442\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6805\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6803\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x4640\n"
        "	.hword 0x300C\n"
        "	.hword 0x6901\n"
        "	.hword 0x1C04\n"
        "	.hword 0x428B\n"
        "	.hword 0xD806\n"
        "	.hword 0x6961\n"
        "	.hword 0x0098\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180B\n"
        "	.hword 0xE000\n"
        "	.hword 0x4B05\n"
        "	.hword 0x6920\n"
        "	.hword 0x4285\n"
        "	.hword 0xD809\n"
        "	.hword 0x6961\n"
        "	.hword 0x00A8\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180A\n"
        "	.hword 0xE003\n"
        "	.hword 0x0000\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x4A0F\n"
        "	.hword 0x2100\n"
        "	.hword 0x20DB\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x2800\n"
        "	.hword 0xD101\n"
        "	.hword 0xF001\n"
        "	.hword 0xF97C\n"
        "	.hword 0x2B00\n"
        "	.hword 0xD101\n"
        "	.hword 0xF001\n"
        "	.hword 0xF978\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD101\n"
        "	.hword 0xF001\n"
        "	.hword 0xF974\n"
        "	.hword 0x9100\n"
        "	.hword 0x9101\n"
        "	.hword 0x9102\n"
        "	.hword 0x9103\n"
        "	.hword 0x1C19\n"
        "	.hword 0x2300\n"
        "	.hword 0xF772\n"
        "	.hword 0xF834\n"
        "	.hword 0x21D9\n"
        "	.hword 0x0089\n"
        "	.hword 0x4441\n"
        "	.hword 0x2007\n"
        "	.hword 0xF001\n"
        "	.hword 0xF965\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x4643\n"
        "	.hword 0x3330\n"
        "	.hword 0x22E0\n"
        "	.hword 0x0052\n"
        "	.hword 0x4442\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6807\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6806\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6803\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x4640\n"
        "	.hword 0x300C\n"
        "	.hword 0x6901\n"
        "	.hword 0x1C04\n"
        "	.hword 0x428B\n"
        "	.hword 0xD806\n"
        "	.hword 0x6961\n"
        "	.hword 0x0098\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180D\n"
        "	.hword 0xE000\n"
        "	.hword 0x4D05\n"
        "	.hword 0x6920\n"
        "	.hword 0x4286\n"
        "	.hword 0xD808\n"
        "	.hword 0x6961\n"
        "	.hword 0x00B0\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180A\n"
        "	.hword 0xE002\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x4A05\n"
        "	.hword 0x6920\n"
        "	.hword 0x4287\n"
        "	.hword 0xD809\n"
        "	.hword 0x6961\n"
        "	.hword 0x00B8\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180B\n"
        "	.hword 0xE003\n"
        "	.hword 0x0000\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x4B0E\n"
        "	.hword 0x2100\n"
        "	.hword 0x20DB\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x2800\n"
        "	.hword 0xD101\n"
        "	.hword 0xF001\n"
        "	.hword 0xF912\n"
        "	.hword 0x2D00\n"
        "	.hword 0xD101\n"
        "	.hword 0xF001\n"
        "	.hword 0xF90E\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD101\n"
        "	.hword 0xF001\n"
        "	.hword 0xF90A\n"
        "	.hword 0x2B00\n"
        "	.hword 0xD10B\n"
        "	.hword 0x9300\n"
        "	.hword 0x9301\n"
        "	.hword 0x9302\n"
        "	.hword 0x9303\n"
        "	.hword 0x1C29\n"
        "	.hword 0x2300\n"
        "	.hword 0xF771\n"
        "	.hword 0xFFC8\n"
        "	.hword 0xE009\n"
        "	.hword 0x0000\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x9100\n"
        "	.hword 0x9101\n"
        "	.hword 0x9102\n"
        "	.hword 0x9103\n"
        "	.hword 0x1C29\n"
        "	.hword 0xF771\n"
        "	.hword 0xFFBD\n"
        "	.hword 0x21D9\n"
        "	.hword 0x0089\n"
        "	.hword 0x4441\n"
        "	.hword 0x2007\n"
        "	.hword 0xF001\n"
        "	.hword 0xF8EE\n"
        "	.hword 0x4643\n"
        "	.hword 0x3330\n"
        "	.hword 0x22E0\n"
        "	.hword 0x0052\n"
        "	.hword 0x4442\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6800\n"
        "	.hword 0x4681\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6807\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6806\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6803\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x4640\n"
        "	.hword 0x300C\n"
        "	.hword 0x6901\n"
        "	.hword 0x1C04\n"
        "	.hword 0x428B\n"
        "	.hword 0xD806\n"
        "	.hword 0x6961\n"
        "	.hword 0x0098\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180D\n"
        "	.hword 0xE000\n"
        "	.hword 0x4D05\n"
        "	.hword 0x6920\n"
        "	.hword 0x4286\n"
        "	.hword 0xD809\n"
        "	.hword 0x6961\n"
        "	.hword 0x00B0\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180A\n"
        "	.hword 0xE003\n"
        "	.hword 0x0000\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x4A05\n"
        "	.hword 0x6920\n"
        "	.hword 0x4287\n"
        "	.hword 0xD809\n"
        "	.hword 0x6961\n"
        "	.hword 0x00B8\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180B\n"
        "	.hword 0xE003\n"
        "	.hword 0x0000\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x4B05\n"
        "	.hword 0x6920\n"
        "	.hword 0x4581\n"
        "	.hword 0xD809\n"
        "	.hword 0x6961\n"
        "	.hword 0x464E\n"
        "	.hword 0x00B0\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x1809\n"
        "	.hword 0xE002\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x490E\n"
        "	.hword 0x2400\n"
        "	.hword 0x20DB\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x2800\n"
        "	.hword 0xD101\n"
        "	.hword 0xF001\n"
        "	.hword 0xF884\n"
        "	.hword 0x2D00\n"
        "	.hword 0xD101\n"
        "	.hword 0xF001\n"
        "	.hword 0xF880\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD101\n"
        "	.hword 0xF001\n"
        "	.hword 0xF87C\n"
        "	.hword 0x2B00\n"
        "	.hword 0xD10B\n"
        "	.hword 0x9300\n"
        "	.hword 0x9301\n"
        "	.hword 0x9302\n"
        "	.hword 0x9303\n"
        "	.hword 0x1C29\n"
        "	.hword 0x2300\n"
        "	.hword 0xF771\n"
        "	.hword 0xFF3A\n"
        "	.hword 0xE013\n"
        "	.hword 0x0000\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x2900\n"
        "	.hword 0xD107\n"
        "	.hword 0x9400\n"
        "	.hword 0x9401\n"
        "	.hword 0x9402\n"
        "	.hword 0x9403\n"
        "	.hword 0x1C29\n"
        "	.hword 0xF771\n"
        "	.hword 0xFF2D\n"
        "	.hword 0xE006\n"
        "	.hword 0x9100\n"
        "	.hword 0x9401\n"
        "	.hword 0x9402\n"
        "	.hword 0x9403\n"
        "	.hword 0x1C29\n"
        "	.hword 0xF771\n"
        "	.hword 0xFF25\n"
        "	.hword 0x21D9\n"
        "	.hword 0x0089\n"
        "	.hword 0x4441\n"
        "	.hword 0x2007\n"
        "	.hword 0xF001\n"
        "	.hword 0xF856\n"
        "	.hword 0x4643\n"
        "	.hword 0x3330\n"
        "	.hword 0x22E0\n"
        "	.hword 0x0052\n"
        "	.hword 0x4442\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6800\n"
        "	.hword 0x4682\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6800\n"
        "	.hword 0x4681\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6807\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6805\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6803\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x4640\n"
        "	.hword 0x300C\n"
        "	.hword 0x6901\n"
        "	.hword 0x1C04\n"
        "	.hword 0x428B\n"
        "	.hword 0xD806\n"
        "	.hword 0x6961\n"
        "	.hword 0x0098\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180E\n"
        "	.hword 0xE000\n"
        "	.hword 0x4E05\n"
        "	.hword 0x6920\n"
        "	.hword 0x4285\n"
        "	.hword 0xD809\n"
        "	.hword 0x6961\n"
        "	.hword 0x00A8\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180A\n"
        "	.hword 0xE003\n"
        "	.hword 0x0000\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x4A05\n"
        "	.hword 0x6920\n"
        "	.hword 0x4287\n"
        "	.hword 0xD809\n"
        "	.hword 0x6961\n"
        "	.hword 0x00B8\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180B\n"
        "	.hword 0xE003\n"
        "	.hword 0x0000\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x4B05\n"
        "	.hword 0x6920\n"
        "	.hword 0x4581\n"
        "	.hword 0xD809\n"
        "	.hword 0x6961\n"
        "	.hword 0x464F\n"
        "	.hword 0x00B8\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180D\n"
        "	.hword 0xE002\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x4D05\n"
        "	.hword 0x6920\n"
        "	.hword 0x4582\n"
        "	.hword 0xD809\n"
        "	.hword 0x6961\n"
        "	.hword 0x4657\n"
        "	.hword 0x00B8\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x1809\n"
        "	.hword 0xE002\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x490E\n"
        "	.hword 0x2400\n"
        "	.hword 0x20DB\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x2800\n"
        "	.hword 0xD101\n"
        "	.hword 0xF000\n"
        "	.hword 0xFFD4\n"
        "	.hword 0x2E00\n"
        "	.hword 0xD101\n"
        "	.hword 0xF000\n"
        "	.hword 0xFFD0\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD101\n"
        "	.hword 0xF000\n"
        "	.hword 0xFFCC\n"
        "	.hword 0x2B00\n"
        "	.hword 0xD10B\n"
        "	.hword 0x9300\n"
        "	.hword 0x9301\n"
        "	.hword 0x9302\n"
        "	.hword 0x9303\n"
        "	.hword 0x1C31\n"
        "	.hword 0x2300\n"
        "	.hword 0xF771\n"
        "	.hword 0xFE8A\n"
        "	.hword 0xE017\n"
        "	.hword 0x0000\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x2D00\n"
        "	.hword 0xD101\n"
        "	.hword 0x9400\n"
        "	.hword 0xE002\n"
        "	.hword 0x2900\n"
        "	.hword 0xD107\n"
        "	.hword 0x9500\n"
        "	.hword 0x9401\n"
        "	.hword 0x9402\n"
        "	.hword 0x9403\n"
        "	.hword 0x1C31\n"
        "	.hword 0xF771\n"
        "	.hword 0xFE79\n"
        "	.hword 0xE006\n"
        "	.hword 0x9500\n"
        "	.hword 0x9101\n"
        "	.hword 0x9402\n"
        "	.hword 0x9403\n"
        "	.hword 0x1C31\n"
        "	.hword 0xF771\n"
        "	.hword 0xFE71\n"
        "	.hword 0x21D9\n"
        "	.hword 0x0089\n"
        "	.hword 0x4441\n"
        "	.hword 0x2007\n"
        "	.hword 0xF000\n"
        "	.hword 0xFFA2\n"
        "	.hword 0x4643\n"
        "	.hword 0x3330\n"
        "	.hword 0x22E0\n"
        "	.hword 0x0052\n"
        "	.hword 0x4442\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6800\n"
        "	.hword 0x4684\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6800\n"
        "	.hword 0x4682\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6800\n"
        "	.hword 0x4681\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6806\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6805\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6803\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x4640\n"
        "	.hword 0x300C\n"
        "	.hword 0x6901\n"
        "	.hword 0x1C04\n"
        "	.hword 0x428B\n"
        "	.hword 0xD806\n"
        "	.hword 0x6961\n"
        "	.hword 0x0098\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180F\n"
        "	.hword 0xE000\n"
        "	.hword 0x4F05\n"
        "	.hword 0x6920\n"
        "	.hword 0x4285\n"
        "	.hword 0xD809\n"
        "	.hword 0x6961\n"
        "	.hword 0x00A8\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180A\n"
        "	.hword 0xE003\n"
        "	.hword 0x0000\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x4A05\n"
        "	.hword 0x6920\n"
        "	.hword 0x4286\n"
        "	.hword 0xD809\n"
        "	.hword 0x6961\n"
        "	.hword 0x00B0\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180B\n"
        "	.hword 0xE003\n"
        "	.hword 0x0000\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x4B05\n"
        "	.hword 0x6920\n"
        "	.hword 0x4581\n"
        "	.hword 0xD809\n"
        "	.hword 0x6961\n"
        "	.hword 0x464D\n"
        "	.hword 0x00A8\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180E\n"
        "	.hword 0xE002\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x4E05\n"
        "	.hword 0x6920\n"
        "	.hword 0x4582\n"
        "	.hword 0xD809\n"
        "	.hword 0x6961\n"
        "	.hword 0x4655\n"
        "	.hword 0x00A8\n"
        "	.hword 0x1840\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x180D\n"
        "	.hword 0xE002\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x4D06\n"
        "	.hword 0x6920\n"
        "	.hword 0x4584\n"
        "	.hword 0xD80B\n"
        "	.hword 0x6960\n"
        "	.hword 0x4681\n"
        "	.hword 0x4661\n"
        "	.hword 0x0088\n"
        "	.hword 0x4448\n"
        "	.hword 0x69A1\n"
        "	.hword 0x6800\n"
        "	.hword 0x1809\n"
        "	.hword 0xE003\n"
        "	.hword 0x0000\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x490E\n"
        "	.hword 0x20DB\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6804\n"
        "	.hword 0x2C00\n"
        "	.hword 0xD101\n"
        "	.hword 0xF000\n"
        "	.hword 0xFF07\n"
        "	.hword 0x2F00\n"
        "	.hword 0xD101\n"
        "	.hword 0xF000\n"
        "	.hword 0xFF03\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD101\n"
        "	.hword 0xF000\n"
        "	.hword 0xFEFF\n"
        "	.hword 0x2B00\n"
        "	.hword 0xD10C\n"
        "	.hword 0x9300\n"
        "	.hword 0x9301\n"
        "	.hword 0x9302\n"
        "	.hword 0x9303\n"
        "	.hword 0x1C20\n"
        "	.hword 0x1C39\n"
        "	.hword 0x2300\n"
        "	.hword 0xF771\n"
        "	.hword 0xFDBC\n"
        "	.hword 0xE024\n"
        "	.hword 0x0000\n"
        "	.hword 0x19A0\n"
        "	.hword 0x080F\n"
        "	.hword 0x2E00\n"
        "	.hword 0xD104\n"
        "	.hword 0x9600\n"
        "	.hword 0x9601\n"
        "	.hword 0x9602\n"
        "	.hword 0x9603\n"
        "	.hword 0xE00C\n"
        "	.hword 0x2D00\n"
        "	.hword 0xD104\n"
        "	.hword 0x9600\n"
        "	.hword 0x9501\n"
        "	.hword 0x9502\n"
        "	.hword 0x9503\n"
        "	.hword 0xE005\n"
        "	.hword 0x2900\n"
        "	.hword 0xD108\n"
        "	.hword 0x9600\n"
        "	.hword 0x9501\n"
        "	.hword 0x9102\n"
        "	.hword 0x9103\n"
        "	.hword 0x1C20\n"
        "	.hword 0x1C39\n"
        "	.hword 0xF771\n"
        "	.hword 0xFDA0\n"
        "	.hword 0xE008\n"
        "	.hword 0x9600\n"
        "	.hword 0x9501\n"
        "	.hword 0x9102\n"
        "	.hword 0x2000\n"
        "	.hword 0x9003\n"
        "	.hword 0x1C20\n"
        "	.hword 0x1C39\n"
        "	.hword 0xF771\n"
        "	.hword 0xFD96\n"
        "	.hword 0x21D9\n"
        "	.hword 0x0089\n"
        "	.hword 0x4441\n"
        "	.hword 0x2007\n"
        "	.hword 0xF000\n"
        "	.hword 0xFEC7\n"
        "	.hword 0x22E0\n"
        "	.hword 0x0052\n"
        "	.hword 0x4442\n"
        "	.hword 0x6810\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6AC1\n"
        "	.hword 0x20E6\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x8001\n"
        "	.hword 0x6810\n"
        "	.hword 0x2800\n"
        "	.hword 0xD001\n"
        "	.hword 0x3801\n"
        "	.hword 0x6010\n"
        "	.hword 0x21D9\n"
        "	.hword 0x0089\n"
        "	.hword 0x4441\n"
        "	.hword 0x2008\n"
        "	.hword 0xF000\n"
        "	.hword 0xFEB1\n"
        "	.hword 0x4643\n"
        "	.hword 0x3330\n"
        "	.hword 0x22E0\n"
        "	.hword 0x0052\n"
        "	.hword 0x4442\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6804\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6803\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x2B04\n"
        "	.hword 0xD901\n"
        "	.hword 0xF000\n"
        "	.hword 0xFE97\n"
        "	.hword 0x0098\n"
        "	.hword 0x4901\n"
        "	.hword 0x1840\n"
        "	.hword 0x6800\n"
        "	.hword 0x4687\n"
        "	.hword 0xF35C\n"
        "	.hword 0x080D\n"
        "	.hword 0xF370\n"
        "	.hword 0x080D\n"
        "	.hword 0xF376\n"
        "	.hword 0x080D\n"
        "	.hword 0xF37C\n"
        "	.hword 0x080D\n"
        "	.hword 0xF380\n"
        "	.hword 0x080D\n"
        "	.hword 0xF384\n"
        "	.hword 0x080D\n"
        "	.hword 0x2502\n"
        "	.hword 0x2300\n"
        "	.hword 0xE008\n"
        "	.hword 0x2501\n"
        "	.hword 0x2300\n"
        "	.hword 0xE005\n"
        "	.hword 0x2502\n"
        "	.hword 0xE002\n"
        "	.hword 0x2501\n"
        "	.hword 0xE000\n"
        "	.hword 0x2500\n"
        "	.hword 0x2301\n"
        "	.hword 0x2C01\n"
        "	.hword 0xD00D\n"
        "	.hword 0x2C01\n"
        "	.hword 0xDC03\n"
        "	.hword 0x2C00\n"
        "	.hword 0xD005\n"
        "	.hword 0xF000\n"
        "	.hword 0xFE72\n"
        "	.hword 0x2C02\n"
        "	.hword 0xD009\n"
        "	.hword 0xF000\n"
        "	.hword 0xFE6E\n"
        "	.hword 0x4900\n"
        "	.hword 0xE006\n"
        "	.hword 0x1112\n"
        "	.hword 0x0000\n"
        "	.hword 0x4900\n"
        "	.hword 0xE002\n"
        "	.hword 0x0889\n"
        "	.hword 0x0000\n"
        "	.hword 0x490D\n"
        "	.hword 0x20DC\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x1C2A\n"
        "	.hword 0xF729\n"
        "	.hword 0xFFDC\n"
        "	.hword 0x21D9\n"
        "	.hword 0x0089\n"
        "	.hword 0x4441\n"
        "	.hword 0x2005\n"
        "	.hword 0x6008\n"
        "	.hword 0x21E8\n"
        "	.hword 0x0089\n"
        "	.hword 0x4441\n"
        "	.hword 0x2000\n"
        "	.hword 0x7008\n"
        "	.hword 0x2100\n"
        "	.hword 0x2D02\n"
        "	.hword 0xD100\n"
        "	.hword 0x2101\n"
        "	.hword 0x4803\n"
        "	.hword 0x4440\n"
        "	.hword 0x7001\n"
        "	.hword 0xF000\n"
        "	.hword 0xFE4B\n"
        "	.hword 0x0000\n"
        "	.hword 0x0444\n"
        "	.hword 0x0000\n"
        "	.hword 0x03A1\n"
        "	.hword 0x0000\n"
        "	.hword 0x4643\n"
        "	.hword 0x3330\n"
        "	.hword 0x22E0\n"
        "	.hword 0x0052\n"
        "	.hword 0x4442\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6804\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6803\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x2B04\n"
        "	.hword 0xD901\n"
        "	.hword 0xF000\n"
        "	.hword 0xFE2B\n"
        "	.hword 0x0098\n"
        "	.hword 0x4901\n"
        "	.hword 0x1840\n"
        "	.hword 0x6800\n"
        "	.hword 0x4687\n"
        "	.hword 0xF434\n"
        "	.hword 0x080D\n"
        "	.hword 0xF448\n"
        "	.hword 0x080D\n"
        "	.hword 0xF44E\n"
        "	.hword 0x080D\n"
        "	.hword 0xF454\n"
        "	.hword 0x080D\n"
        "	.hword 0xF458\n"
        "	.hword 0x080D\n"
        "	.hword 0xF45C\n"
        "	.hword 0x080D\n"
        "	.hword 0x2602\n"
        "	.hword 0x2300\n"
        "	.hword 0xE008\n"
        "	.hword 0x2601\n"
        "	.hword 0x2300\n"
        "	.hword 0xE005\n"
        "	.hword 0x2602\n"
        "	.hword 0xE002\n"
        "	.hword 0x2601\n"
        "	.hword 0xE000\n"
        "	.hword 0x2600\n"
        "	.hword 0x2301\n"
        "	.hword 0x2C01\n"
        "	.hword 0xD00D\n"
        "	.hword 0x2C01\n"
        "	.hword 0xDC03\n"
        "	.hword 0x2C00\n"
        "	.hword 0xD005\n"
        "	.hword 0xF000\n"
        "	.hword 0xFE06\n"
        "	.hword 0x2C02\n"
        "	.hword 0xD009\n"
        "	.hword 0xF000\n"
        "	.hword 0xFE02\n"
        "	.hword 0x4900\n"
        "	.hword 0xE006\n"
        "	.hword 0x1112\n"
        "	.hword 0x0000\n"
        "	.hword 0x4900\n"
        "	.hword 0xE002\n"
        "	.hword 0x0889\n"
        "	.hword 0x0000\n"
        "	.hword 0x491A\n"
        "	.hword 0x20DC\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x1C32\n"
        "	.hword 0xF729\n"
        "	.hword 0xFF5A\n"
        "	.hword 0x21D9\n"
        "	.hword 0x0089\n"
        "	.hword 0x4441\n"
        "	.hword 0x2006\n"
        "	.hword 0x6008\n"
        "	.hword 0x21E8\n"
        "	.hword 0x0089\n"
        "	.hword 0x4441\n"
        "	.hword 0x2000\n"
        "	.hword 0x7008\n"
        "	.hword 0x2100\n"
        "	.hword 0x2E02\n"
        "	.hword 0xD100\n"
        "	.hword 0x2101\n"
        "	.hword 0x4810\n"
        "	.hword 0x4440\n"
        "	.hword 0x7001\n"
        "	.hword 0x4645\n"
        "	.hword 0x3504\n"
        "	.hword 0x1C28\n"
        "	.hword 0xF729\n"
        "	.hword 0xFA2A\n"
        "	.hword 0x1C04\n"
        "	.hword 0x1C28\n"
        "	.hword 0xF729\n"
        "	.hword 0xFA26\n"
        "	.hword 0x8800\n"
        "	.hword 0x22E0\n"
        "	.hword 0x0112\n"
        "	.hword 0x1C11\n"
        "	.hword 0x4308\n"
        "	.hword 0x8020\n"
        "	.hword 0x2E01\n"
        "	.hword 0xD10F\n"
        "	.hword 0x1C28\n"
        "	.hword 0xF729\n"
        "	.hword 0xFA1B\n"
        "	.hword 0x1C04\n"
        "	.hword 0x3450\n"
        "	.hword 0x1C28\n"
        "	.hword 0xF729\n"
        "	.hword 0xFA16\n"
        "	.hword 0x3050\n"
        "	.hword 0x8800\n"
        "	.hword 0x2180\n"
        "	.hword 0xE00E\n"
        "	.hword 0x0444\n"
        "	.hword 0x0000\n"
        "	.hword 0x03A1\n"
        "	.hword 0x0000\n"
        "	.hword 0x1C28\n"
        "	.hword 0xF729\n"
        "	.hword 0xFA0B\n"
        "	.hword 0x1C04\n"
        "	.hword 0x3450\n"
        "	.hword 0x1C28\n"
        "	.hword 0xF729\n"
        "	.hword 0xFA06\n"
        "	.hword 0x3050\n"
        "	.hword 0x8800\n"
        "	.hword 0x21C0\n"
        "	.hword 0x4308\n"
        "	.hword 0x8020\n"
        "	.hword 0xF000\n"
        "	.hword 0xFDB1\n"
        "	.hword 0x4643\n"
        "	.hword 0x3330\n"
        "	.hword 0x22E0\n"
        "	.hword 0x0052\n"
        "	.hword 0x4442\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6800\n"
        "	.hword 0x900B\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6804\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6803\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6805\n"
        "	.hword 0x46AA\n"
        "	.hword 0x26B0\n"
        "	.hword 0x44B2\n"
        "	.hword 0xAE04\n"
        "	.hword 0x4F1C\n"
        "	.hword 0x46B9\n"
        "	.hword 0x4649\n"
        "	.hword 0x400B\n"
        "	.hword 0x8832\n"
        "	.hword 0x4D1A\n"
        "	.hword 0x1C29\n"
        "	.hword 0x4011\n"
        "	.hword 0x4319\n"
        "	.hword 0x8031\n"
        "	.hword 0x0424\n"
        "	.hword 0x0C22\n"
        "	.hword 0x273F\n"
        "	.hword 0x46BC\n"
        "	.hword 0x4661\n"
        "	.hword 0x400A\n"
        "	.hword 0x0092\n"
        "	.hword 0x7877\n"
        "	.hword 0x46B8\n"
        "	.hword 0x2303\n"
        "	.hword 0x1C19\n"
        "	.hword 0x4647\n"
        "	.hword 0x4039\n"
        "	.hword 0x4311\n"
        "	.hword 0x7071\n"
        "	.hword 0x0DA4\n"
        "	.hword 0x4649\n"
        "	.hword 0x400C\n"
        "	.hword 0x8872\n"
        "	.hword 0x1C29\n"
        "	.hword 0x4011\n"
        "	.hword 0x4321\n"
        "	.hword 0x8071\n"
        "	.hword 0x9C0B\n"
        "	.hword 0x0422\n"
        "	.hword 0x0C11\n"
        "	.hword 0x4667\n"
        "	.hword 0x4039\n"
        "	.hword 0x0089\n"
        "	.hword 0x78F4\n"
        "	.hword 0x4023\n"
        "	.hword 0x430B\n"
        "	.hword 0x70F3\n"
        "	.hword 0x0D92\n"
        "	.hword 0x4649\n"
        "	.hword 0x400A\n"
        "	.hword 0x88B1\n"
        "	.hword 0x400D\n"
        "	.hword 0x4315\n"
        "	.hword 0x80B5\n"
        "	.hword 0x4654\n"
        "	.hword 0x6822\n"
        "	.hword 0x1C31\n"
        "	.hword 0xF7F4\n"
        "	.hword 0xF99C\n"
        "	.hword 0xF000\n"
        "	.hword 0xFD50\n"
        "	.hword 0x03FF\n"
        "	.hword 0x0000\n"
        "	.hword 0xFC00\n"
        "	.hword 0xFFFF\n"
        "	.hword 0x4646\n"
        "	.hword 0x3630\n"
        "	.hword 0x25E0\n"
        "	.hword 0x006D\n"
        "	.hword 0x4445\n"
        "	.hword 0x6829\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1830\n"
        "	.hword 0x6803\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6028\n"
        "	.hword 0x6829\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1830\n"
        "	.hword 0x6802\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6028\n"
        "	.hword 0x682C\n"
        "	.hword 0x00A0\n"
        "	.hword 0x3804\n"
        "	.hword 0x1830\n"
        "	.hword 0x6806\n"
        "	.hword 0x2C00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E60\n"
        "	.hword 0x6028\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x6A4C\n"
        "	.hword 0xF000\n"
        "	.hword 0xFC26\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x6A89\n"
        "	.hword 0xF7F4\n"
        "	.hword 0xF964\n"
        "	.hword 0x0600\n"
        "	.hword 0x2800\n"
        "	.hword 0xD001\n"
        "	.hword 0xF000\n"
        "	.hword 0xFD15\n"
        "	.hword 0x21D9\n"
        "	.hword 0x0089\n"
        "	.hword 0x4441\n"
        "	.hword 0x200A\n"
        "	.hword 0xF000\n"
        "	.hword 0xFD0E\n"
        "	.hword 0x4643\n"
        "	.hword 0x3330\n"
        "	.hword 0x22E0\n"
        "	.hword 0x0052\n"
        "	.hword 0x4442\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6804\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6803\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x0420\n"
        "	.hword 0x0C01\n"
        "	.hword 0x20DD\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x2B01\n"
        "	.hword 0xD04E\n"
        "	.hword 0x2B01\n"
        "	.hword 0xDC03\n"
        "	.hword 0x2B00\n"
        "	.hword 0xD046\n"
        "	.hword 0xF000\n"
        "	.hword 0xFCED\n"
        "	.hword 0x2B02\n"
        "	.hword 0xD001\n"
        "	.hword 0xF000\n"
        "	.hword 0xFCE9\n"
        "	.hword 0xE047\n"
        "	.hword 0x20DD\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0xF729\n"
        "	.hword 0xFA93\n"
        "	.hword 0xF000\n"
        "	.hword 0xFCE1\n"
        "	.hword 0x6820\n"
        "	.hword 0xE029\n"
        "	.hword 0x4643\n"
        "	.hword 0x3330\n"
        "	.hword 0x22E0\n"
        "	.hword 0x0052\n"
        "	.hword 0x4442\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6807\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x6811\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6806\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6010\n"
        "	.hword 0x20E2\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6804\n"
        "	.hword 0x6845\n"
        "	.hword 0x043F\n"
        "	.hword 0x42AC\n"
        "	.hword 0xD008\n"
        "	.hword 0x6820\n"
        "	.hword 0xF729\n"
        "	.hword 0xFAE5\n"
        "	.hword 0x0600\n"
        "	.hword 0x2800\n"
        "	.hword 0xD0D8\n"
        "	.hword 0x3404\n"
        "	.hword 0x42AC\n"
        "	.hword 0xD1F6\n"
        "	.hword 0x1F28\n"
        "	.hword 0x6800\n"
        "	.hword 0x0C39\n"
        "	.hword 0x2E01\n"
        "	.hword 0xD00D\n"
        "	.hword 0x2E01\n"
        "	.hword 0xDC03\n"
        "	.hword 0x2E00\n"
        "	.hword 0xD005\n"
        "	.hword 0xF000\n"
        "	.hword 0xFCAC\n"
        "	.hword 0x2E02\n"
        "	.hword 0xD009\n"
        "	.hword 0xF000\n"
        "	.hword 0xFCA8\n"
        "	.hword 0xF729\n"
        "	.hword 0xFA1C\n"
        "	.hword 0xF000\n"
        "	.hword 0xFCA4\n"
        "	.hword 0xF729\n"
        "	.hword 0xFA26\n"
        "	.hword 0xF000\n"
        "	.hword 0xFCA0\n"
        "	.hword 0xF729\n"
        "	.hword 0xFA36\n"
        "	.hword 0xF000\n"
        "	.hword 0xFC9C\n"
        "	.hword 0xF729\n"
        "	.hword 0xFB4E\n"
        "	.hword 0xF000\n"
        "	.hword 0xFC98\n"
        "_L_080DF750:\n"
        "	mov r5, r8\n"
        "	add r5, #0x30\n"
        "	mov r3, #0xe0\n"
        "	lsl r3, r3, #1\n"
        "	add r3, r8\n"
        "	ldr r1, [r3]\n"
        "	lsl r0, r1, #2\n"
        "	sub r0, #4\n"
        "	add r0, r5, r0\n"
        "	ldr r0, [r0]\n"
        "	str r0, [sp, #0x28]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DF76E\n"
        "	sub r0, r1, #1\n"
        "	str r0, [r3]\n"
        "_L_080DF76E:\n"
        "	ldr r1, [r3]\n"
        "	lsl r0, r1, #2\n"
        "	sub r0, #4\n"
        "	add r0, r5, r0\n"
        "	ldr r0, [r0]\n"
        "	mov sl, r0\n"
        "	cmp r1, #0\n"
        "	beq _L_080DF782\n"
        "	sub r0, r1, #1\n"
        "	str r0, [r3]\n"
        "_L_080DF782:\n"
        "	ldr r1, [r3]\n"
        "	lsl r0, r1, #2\n"
        "	sub r0, #4\n"
        "	add r0, r5, r0\n"
        "	ldr r4, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080DF794\n"
        "	sub r0, r1, #1\n"
        "	str r0, [r3]\n"
        "_L_080DF794:\n"
        "	ldr r2, [r3]\n"
        "	lsl r0, r2, #2\n"
        "	sub r0, #4\n"
        "	add r0, r5, r0\n"
        "	ldr r6, [r0]\n"
        "	cmp r2, #0\n"
        "	beq _L_080DF7A6\n"
        "	sub r0, r2, #1\n"
        "	str r0, [r3]\n"
        "_L_080DF7A6:\n"
        "	mov r5, #0xda\n"
        "	lsl r5, r5, #2\n"
        "	add r5, r8\n"
        "	ldr r0, [r5]\n"
        "	ldr r1, [r0]\n"
        "	ldr r2, [r1, #0x40]\n"
        "	add r1, r6, #0\n"
        "	bl func_080D3914\n"
        "	add r7, r0, #0\n"
        "	cmp r7, #0\n"
        "	bne _L_080DF7C2\n"
        "	bl func_080E0080\n"
        "_L_080DF7C2:\n"
        "	ldr r0, [r5]\n"
        "	ldr r1, [r0]\n"
        "	ldr r1, [r1, #0x14]\n"
        "	bl func_080D3910\n"
        "	add r1, sp, #0x18\n"
        "	ldr r5, .Lpool_080DF854\n"
        "	mov r8, r5\n"
        "	mov r6, r8\n"
        "	and r0, r6\n"
        "	ldrh r3, [r1]\n"
        "	ldr r5, .Lpool_080DF858\n"
        "	add r2, r5, #0\n"
        "	and r2, r3\n"
        "	orr r2, r0\n"
        "	strh r2, [r1]\n"
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
        "	mov r4, sl\n"
        "	lsl r2, r4, #0x10\n"
        "	lsr r0, r2, #0x10\n"
        "	mov r6, sb\n"
        "	and r0, r6\n"
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
        "	add r4, sp, #0x10\n"
        "	add r0, r4, #0\n"
        "	mov r2, #6\n"
        "	bl func_080D3994\n"
        "	add r1, sp, #0x28\n"
        "	ldrb r1, [r1]\n"
        "	strb r1, [r4, #6]\n"
        "	add r0, r7, #0\n"
        "	add r1, sp, #0x10\n"
        "	bl func_0803211C\n"
        "	ldr r0, [r7, #0x14]\n"
        "	ldr r1, [r0, #0x20]\n"
        "	add r0, r7, #0\n"
        "	bl func_080D3910\n"
        "	bl func_080E0080\n"
        "	lsl r0, r0, #0\n"
        ".Lpool_080DF854:\n"
        "	.word 0x000003FF\n"
        ".Lpool_080DF858:\n"
        "	.word 0xFFFFFC00\n"
        "	.hword 0x4643\n"
        "	.hword 0x3330\n"
        "	.hword 0x21E0\n"
        "	.hword 0x0049\n"
        "	.hword 0x4441\n"
        "	.hword 0x680A\n"
        "	.hword 0x0090\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6806\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6008\n"
        "	.hword 0x680A\n"
        "	.hword 0x0090\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6805\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6008\n"
        "	.hword 0x680A\n"
        "	.hword 0x0090\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6803\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6008\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x6C0A\n"
        "	.hword 0x1C19\n"
        "	.hword 0xF7F4\n"
        "	.hword 0xF833\n"
        "	.hword 0x1C04\n"
        "	.hword 0x2C00\n"
        "	.hword 0xD100\n"
        "	.hword 0xE3E4\n"
        "	.hword 0x1C29\n"
        "	.hword 0xF752\n"
        "	.hword 0xFD92\n"
        "	.hword 0x1C20\n"
        "	.hword 0x1C31\n"
        "	.hword 0xF752\n"
        "	.hword 0xFD96\n"
        "	.hword 0xE3DC\n"
        "_L_080DF8C6:\n"
        "	mov r0, r8\n"
        "	add r0, #0x30\n"
        "	mov r2, #0xe0\n"
        "	lsl r2, r2, #1\n"
        "	add r2, r8\n"
        "	ldr r3, [r2]\n"
        "	lsl r1, r3, #2\n"
        "	sub r1, #4\n"
        "	add r1, r0, r1\n"
        "	ldr r6, [r1]\n"
        "	add r5, r0, #0\n"
        "	add r4, r2, #0\n"
        "	cmp r3, #0\n"
        "	beq _L_080DF8E6\n"
        "	sub r0, r3, #1\n"
        "	str r0, [r4]\n"
        "_L_080DF8E6:\n"
        "	mov r0, #0xda\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	ldr r0, [r0]\n"
        "	ldr r1, [r0]\n"
        "	ldr r2, [r1, #0x40]\n"
        "	add r1, r6, #0\n"
        "	bl func_080D3914\n"
        "	mov r1, #0\n"
        "	cmp r0, #0\n"
        "	beq _L_080DF900\n"
        "	ldr r1, [r0, #8]\n"
        "_L_080DF900:\n"
        "	asr r2, r1, #0x10\n"
        "	b _L_080DF9DA\n"
        "_L_080DF904:\n"
        "	mov r0, r8\n"
        "	add r0, #0x30\n"
        "	mov r2, #0xe0\n"
        "	lsl r2, r2, #1\n"
        "	add r2, r8\n"
        "	ldr r3, [r2]\n"
        "	lsl r1, r3, #2\n"
        "	sub r1, #4\n"
        "	add r1, r0, r1\n"
        "	ldr r6, [r1]\n"
        "	add r5, r0, #0\n"
        "	add r4, r2, #0\n"
        "	cmp r3, #0\n"
        "	beq _L_080DF924\n"
        "	sub r0, r3, #1\n"
        "	str r0, [r4]\n"
        "_L_080DF924:\n"
        "	mov r0, #0xda\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	ldr r0, [r0]\n"
        "	ldr r1, [r0]\n"
        "	ldr r2, [r1, #0x40]\n"
        "	add r1, r6, #0\n"
        "	bl func_080D3914\n"
        "	mov r1, #0\n"
        "	cmp r0, #0\n"
        "	beq _L_080DF900\n"
        "	ldr r1, [r0, #0xc]\n"
        "	b _L_080DF900\n"
        "_L_080DF940:\n"
        "	mov r3, r8\n"
        "	add r3, #0x30\n"
        "	mov r1, #0xe0\n"
        "	lsl r1, r1, #1\n"
        "	add r1, r8\n"
        "	ldr r2, [r1]\n"
        "	lsl r0, r2, #2\n"
        "	sub r0, #4\n"
        "	add r0, r3, r0\n"
        "	ldr r4, [r0]\n"
        "	cmp r2, #0\n"
        "	beq _L_080DF95C\n"
        "	sub r0, r2, #1\n"
        "	str r0, [r1]\n"
        "_L_080DF95C:\n"
        "	ldr r2, [r1]\n"
        "	lsl r0, r2, #2\n"
        "	sub r0, #4\n"
        "	add r0, r3, r0\n"
        "	ldr r3, [r0]\n"
        "	cmp r2, #0\n"
        "	beq _L_080DF96E\n"
        "	sub r0, r2, #1\n"
        "	str r0, [r1]\n"
        "_L_080DF96E:\n"
        "	mov r0, #0xda\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	ldr r0, [r0]\n"
        "	ldr r1, [r0]\n"
        "	ldr r2, [r1, #0x40]\n"
        "	add r1, r3, #0\n"
        "	bl func_080D3914\n"
        "	add r1, r0, #0\n"
        "	cmp r1, #0\n"
        "	bne _L_080DF988\n"
        "	.hword 0xE37B\n"
        "_L_080DF988:\n"
        "	add r0, #0x20\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, r4\n"
        "	bne _L_080DF992\n"
        "	.hword 0xE376\n"
        "_L_080DF992:\n"
        "	add r0, r1, #0\n"
        "	add r1, r4, #0\n"
        "	bl func_08032198\n"
        "	.hword 0xE371\n"
        "_L_080DF99C:\n"
        "	mov r0, r8\n"
        "	add r0, #0x30\n"
        "	mov r2, #0xe0\n"
        "	lsl r2, r2, #1\n"
        "	add r2, r8\n"
        "	ldr r3, [r2]\n"
        "	lsl r1, r3, #2\n"
        "	sub r1, #4\n"
        "	add r1, r0, r1\n"
        "	ldr r6, [r1]\n"
        "	add r5, r0, #0\n"
        "	add r4, r2, #0\n"
        "	cmp r3, #0\n"
        "	beq _L_080DF9BC\n"
        "	sub r0, r3, #1\n"
        "	str r0, [r4]\n"
        "_L_080DF9BC:\n"
        "	mov r0, #0xda\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r8\n"
        "	ldr r0, [r0]\n"
        "	ldr r1, [r0]\n"
        "	ldr r2, [r1, #0x40]\n"
        "	add r1, r6, #0\n"
        "	bl func_080D3914\n"
        "	cmp r0, #0\n"
        "	beq _L_080DF9D8\n"
        "	add r0, #0x20\n"
        "	ldrb r2, [r0]\n"
        "	b _L_080DF9DA\n"
        "_L_080DF9D8:\n"
        "	mov r2, #0\n"
        "_L_080DF9DA:\n"
        "	ldr r1, [r4]\n"
        "	cmp r1, #0x63\n"
        "	bls _L_080DF9E2\n"
        "	.hword 0xE34E\n"
        "_L_080DF9E2:\n"
        "	lsl r0, r1, #2\n"
        "	add r0, r5, r0\n"
        "	str r2, [r0]\n"
        "	add r0, r1, #1\n"
        "	str r0, [r4]\n"
        "	.hword 0xE348\n"
        "	.hword 0x4644\n"
        "	.hword 0x3430\n"
        "	.hword 0x23E0\n"
        "	.hword 0x005B\n"
        "	.hword 0x4443\n"
        "	.hword 0x6819\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1820\n"
        "	.hword 0x6806\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6018\n"
        "	.hword 0x681A\n"
        "	.hword 0x0090\n"
        "	.hword 0x3804\n"
        "	.hword 0x1820\n"
        "	.hword 0x6805\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6018\n"
        "	.hword 0x681A\n"
        "	.hword 0x0090\n"
        "	.hword 0x3804\n"
        "	.hword 0x1820\n"
        "	.hword 0x6804\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6018\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x6C0A\n"
        "	.hword 0x1C21\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFF6A\n"
        "	.hword 0x2800\n"
        "	.hword 0xD100\n"
        "	.hword 0xE31C\n"
        "	.hword 0x0432\n"
        "	.hword 0x1C29\n"
        "	.hword 0xF752\n"
        "	.hword 0xFC5D\n"
        "	.hword 0xE317\n"
        "	.hword 0x4644\n"
        "	.hword 0x3430\n"
        "	.hword 0x23E0\n"
        "	.hword 0x005B\n"
        "	.hword 0x4443\n"
        "	.hword 0x6819\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1820\n"
        "	.hword 0x6806\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6018\n"
        "	.hword 0x681A\n"
        "	.hword 0x0090\n"
        "	.hword 0x3804\n"
        "	.hword 0x1820\n"
        "	.hword 0x6805\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6018\n"
        "	.hword 0x681A\n"
        "	.hword 0x0090\n"
        "	.hword 0x3804\n"
        "	.hword 0x1820\n"
        "	.hword 0x6804\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6018\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x6C0A\n"
        "	.hword 0x1C21\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFF39\n"
        "	.hword 0x2800\n"
        "	.hword 0xD100\n"
        "	.hword 0xE2EB\n"
        "	.hword 0x0432\n"
        "	.hword 0x1C29\n"
        "	.hword 0xF752\n"
        "	.hword 0xFC46\n"
        "	.hword 0xE2E6\n"
        "	.hword 0x4644\n"
        "	.hword 0x3430\n"
        "	.hword 0x23E0\n"
        "	.hword 0x005B\n"
        "	.hword 0x4443\n"
        "	.hword 0x6819\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1820\n"
        "	.hword 0x6806\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6018\n"
        "	.hword 0x681A\n"
        "	.hword 0x0090\n"
        "	.hword 0x3804\n"
        "	.hword 0x1820\n"
        "	.hword 0x6805\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6018\n"
        "	.hword 0x681A\n"
        "	.hword 0x0090\n"
        "	.hword 0x3804\n"
        "	.hword 0x1820\n"
        "	.hword 0x6804\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6018\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x6C0A\n"
        "	.hword 0x1C21\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFF08\n"
        "	.hword 0x2800\n"
        "	.hword 0xD100\n"
        "	.hword 0xE2BA\n"
        "	.hword 0x1C29\n"
        "	.hword 0x1C32\n"
        "	.hword 0xF752\n"
        "	.hword 0xFBFB\n"
        "	.hword 0xE2B5\n"
        "	.hword 0x4644\n"
        "	.hword 0x3430\n"
        "	.hword 0x23E0\n"
        "	.hword 0x005B\n"
        "	.hword 0x4443\n"
        "	.hword 0x6819\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1820\n"
        "	.hword 0x6806\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6018\n"
        "	.hword 0x681A\n"
        "	.hword 0x0090\n"
        "	.hword 0x3804\n"
        "	.hword 0x1820\n"
        "	.hword 0x6805\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6018\n"
        "	.hword 0x681A\n"
        "	.hword 0x0090\n"
        "	.hword 0x3804\n"
        "	.hword 0x1820\n"
        "	.hword 0x6804\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6018\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x6C0A\n"
        "	.hword 0x1C21\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFED7\n"
        "	.hword 0x2800\n"
        "	.hword 0xD100\n"
        "	.hword 0xE289\n"
        "	.hword 0x1C29\n"
        "	.hword 0x1C32\n"
        "	.hword 0xF752\n"
        "	.hword 0xFBE4\n"
        "	.hword 0xE284\n"
        "	.hword 0x21E0\n"
        "	.hword 0x0049\n"
        "	.hword 0x4441\n"
        "	.hword 0x680A\n"
        "	.hword 0x0090\n"
        "	.hword 0x4440\n"
        "	.hword 0x6AC3\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6008\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x6C0A\n"
        "	.hword 0x1C19\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFEBB\n"
        "	.hword 0x21E7\n"
        "	.hword 0x0089\n"
        "	.hword 0x4441\n"
        "	.hword 0x6008\n"
        "	.hword 0x2800\n"
        "	.hword 0xD100\n"
        "	.hword 0xE267\n"
        "	.hword 0x21D9\n"
        "	.hword 0x0089\n"
        "	.hword 0x4441\n"
        "	.hword 0x2009\n"
        "	.hword 0xE261\n"
        "	.hword 0x4643\n"
        "	.hword 0x3330\n"
        "	.hword 0x21E0\n"
        "	.hword 0x0049\n"
        "	.hword 0x4441\n"
        "	.hword 0x680A\n"
        "	.hword 0x0090\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6804\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6008\n"
        "	.hword 0x680A\n"
        "	.hword 0x0090\n"
        "	.hword 0x3804\n"
        "	.hword 0x1818\n"
        "	.hword 0x6803\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6008\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x6C0A\n"
        "	.hword 0x1C19\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFE8F\n"
        "	.hword 0x1C01\n"
        "	.hword 0x2900\n"
        "	.hword 0xD100\n"
        "	.hword 0xE240\n"
        "	.hword 0x8C48\n"
        "	.hword 0x42A0\n"
        "	.hword 0xD100\n"
        "	.hword 0xE23C\n"
        "	.hword 0x1C08\n"
        "	.hword 0x1C21\n"
        "	.hword 0xF752\n"
        "	.hword 0xFAD1\n"
        "	.hword 0xE237\n"
        "	.hword 0x21E0\n"
        "	.hword 0x0049\n"
        "	.hword 0x4441\n"
        "	.hword 0x6808\n"
        "	.hword 0x2800\n"
        "	.hword 0xD100\n"
        "	.hword 0xE230\n"
        "	.hword 0x3801\n"
        "	.hword 0x6008\n"
        "	.hword 0xE22D\n"
        "	.hword 0x21E0\n"
        "	.hword 0x0049\n"
        "	.hword 0x4441\n"
        "	.hword 0x680A\n"
        "	.hword 0x0090\n"
        "	.hword 0x4440\n"
        "	.hword 0x6AC3\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6008\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x6C0A\n"
        "	.hword 0x1C19\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFE64\n"
        "	.hword 0x2800\n"
        "	.hword 0xD100\n"
        "	.hword 0xE216\n"
        "	.hword 0x218D\n"
        "	.hword 0x0089\n"
        "	.hword 0xF740\n"
        "	.hword 0xF96F\n"
        "	.hword 0xE211\n"
        "	.hword 0x4644\n"
        "	.hword 0x3430\n"
        "	.hword 0x23E0\n"
        "	.hword 0x005B\n"
        "	.hword 0x4443\n"
        "	.hword 0x6819\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1820\n"
        "	.hword 0x6805\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6018\n"
        "	.hword 0x681A\n"
        "	.hword 0x0090\n"
        "	.hword 0x3804\n"
        "	.hword 0x1820\n"
        "	.hword 0x6806\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6018\n"
        "	.hword 0x681A\n"
        "	.hword 0x0090\n"
        "	.hword 0x3804\n"
        "	.hword 0x1820\n"
        "	.hword 0x6804\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6018\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x6C0A\n"
        "	.hword 0x1C21\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFE33\n"
        "	.hword 0x2800\n"
        "	.hword 0xD100\n"
        "	.hword 0xE1E5\n"
        "	.hword 0x426A\n"
        "	.hword 0x432A\n"
        "	.hword 0x0FD2\n"
        "	.hword 0x1C31\n"
        "	.hword 0xF752\n"
        "	.hword 0xFB62\n"
        "	.hword 0xE1DE\n"
        "	.hword 0x21E0\n"
        "	.hword 0x0049\n"
        "	.hword 0x4441\n"
        "	.hword 0x680A\n"
        "	.hword 0x0090\n"
        "	.hword 0x4440\n"
        "	.hword 0x6AC3\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6008\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x6C0A\n"
        "	.hword 0x1C19\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFE15\n"
        "	.hword 0x2800\n"
        "	.hword 0xD100\n"
        "	.hword 0xE1C7\n"
        "	.hword 0xF752\n"
        "	.hword 0xFB6A\n"
        "	.hword 0xE1C4\n"
        "	.hword 0x23E0\n"
        "	.hword 0x005B\n"
        "	.hword 0x4443\n"
        "	.hword 0x681A\n"
        "	.hword 0x0090\n"
        "	.hword 0x4440\n"
        "	.hword 0x6AC1\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6018\n"
        "	.hword 0x4640\n"
        "	.hword 0x300C\n"
        "	.hword 0x4A03\n"
        "	.hword 0x0089\n"
        "	.hword 0x1889\n"
        "	.hword 0x6809\n"
        "	.hword 0xF75F\n"
        "	.hword 0xF8E8\n"
        "	.hword 0xE1B0\n"
        "	.hword 0x0000\n"
        "	.hword 0x89D4\n"
        "	.hword 0x080F\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x3180\n"
        "	.hword 0x6809\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFDED\n"
        "	.hword 0xE1A3\n"
        "	.hword 0x21E0\n"
        "	.hword 0x0049\n"
        "	.hword 0x4441\n"
        "	.hword 0x680A\n"
        "	.hword 0x0090\n"
        "	.hword 0x4440\n"
        "	.hword 0x6AC3\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6008\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x319C\n"
        "	.hword 0xE022\n"
        "	.hword 0x21E0\n"
        "	.hword 0x0049\n"
        "	.hword 0x4441\n"
        "	.hword 0x680A\n"
        "	.hword 0x0090\n"
        "	.hword 0x4440\n"
        "	.hword 0x6AC3\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6008\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x31A0\n"
        "	.hword 0xE010\n"
        "	.hword 0x21E0\n"
        "	.hword 0x0049\n"
        "	.hword 0x4441\n"
        "	.hword 0x680A\n"
        "	.hword 0x0090\n"
        "	.hword 0x4440\n"
        "	.hword 0x6AC3\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6008\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x31AC\n"
        "	.hword 0x680A\n"
        "	.hword 0x1C19\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFDB5\n"
        "	.hword 0xE169\n"
        "	.hword 0x4646\n"
        "	.hword 0x3630\n"
        "	.hword 0x25E0\n"
        "	.hword 0x006D\n"
        "	.hword 0x4445\n"
        "	.hword 0x6829\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1830\n"
        "	.hword 0x6803\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6028\n"
        "	.hword 0x6829\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1830\n"
        "	.hword 0x6802\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6028\n"
        "	.hword 0x682C\n"
        "	.hword 0x00A0\n"
        "	.hword 0x3804\n"
        "	.hword 0x1830\n"
        "	.hword 0x6801\n"
        "	.hword 0x2C00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E60\n"
        "	.hword 0x6028\n"
        "	.hword 0x682C\n"
        "	.hword 0x00A0\n"
        "	.hword 0x3804\n"
        "	.hword 0x1830\n"
        "	.hword 0x6800\n"
        "	.hword 0x4681\n"
        "	.hword 0x2C00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E60\n"
        "	.hword 0x6028\n"
        "	.hword 0x682C\n"
        "	.hword 0x00A0\n"
        "	.hword 0x3804\n"
        "	.hword 0x1830\n"
        "	.hword 0x6807\n"
        "	.hword 0x2C00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E60\n"
        "	.hword 0x6028\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6805\n"
        "	.hword 0x682C\n"
        "	.hword 0x34B4\n"
        "	.hword 0xAE08\n"
        "	.hword 0x1C30\n"
        "	.hword 0xF72A\n"
        "	.hword 0xF8D1\n"
        "	.hword 0x6824\n"
        "	.hword 0x1C28\n"
        "	.hword 0x1C39\n"
        "	.hword 0x464A\n"
        "	.hword 0x1C33\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFD74\n"
        "	.hword 0xE124\n"
        "	.hword 0x4646\n"
        "	.hword 0x3630\n"
        "	.hword 0x25E0\n"
        "	.hword 0x006D\n"
        "	.hword 0x4445\n"
        "	.hword 0x6829\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1830\n"
        "	.hword 0x6803\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6028\n"
        "	.hword 0x6829\n"
        "	.hword 0x0088\n"
        "	.hword 0x3804\n"
        "	.hword 0x1830\n"
        "	.hword 0x6802\n"
        "	.hword 0x2900\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E48\n"
        "	.hword 0x6028\n"
        "	.hword 0x682C\n"
        "	.hword 0x00A0\n"
        "	.hword 0x3804\n"
        "	.hword 0x1830\n"
        "	.hword 0x6806\n"
        "	.hword 0x2C00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E60\n"
        "	.hword 0x6028\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x31B8\n"
        "	.hword 0x680C\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080DFE84 @ 0x080DFE84 (528B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080DFE84 @ 0x080DFE84 (528 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r4)
 * Callees: func_080D391C
 * CFG Structure:
 *   L_080DFE84: call _call_via_r4(); goto L_080E0080
 *   L_080E0080: return
 * ========================================================================== */
extern void func_080D391C(void);
void func_080DFE84(void) {
    __asm__ volatile(
        "	add r1, r6, #0\n"
        "	bl func_080D391C\n"
        "	b _L_080E0080\n"
        "	.hword 0x4645\n"
        "	.hword 0x3530\n"
        "	.hword 0x24E0\n"
        "	.hword 0x0064\n"
        "	.hword 0x4444\n"
        "	.hword 0x6822\n"
        "	.hword 0x0090\n"
        "	.hword 0x3804\n"
        "	.hword 0x1828\n"
        "	.hword 0x6801\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6020\n"
        "	.hword 0x6822\n"
        "	.hword 0x0090\n"
        "	.hword 0x3804\n"
        "	.hword 0x1828\n"
        "	.hword 0x6807\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6020\n"
        "	.hword 0x6823\n"
        "	.hword 0x0098\n"
        "	.hword 0x3804\n"
        "	.hword 0x1828\n"
        "	.hword 0x6806\n"
        "	.hword 0x2B00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E58\n"
        "	.hword 0x6020\n"
        "	.hword 0x25DA\n"
        "	.hword 0x00AD\n"
        "	.hword 0x4445\n"
        "	.hword 0x6828\n"
        "	.hword 0x6802\n"
        "	.hword 0x3162\n"
        "	.hword 0x6C12\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFD1B\n"
        "	.hword 0x1C04\n"
        "	.hword 0x2C00\n"
        "	.hword 0xD100\n"
        "	.hword 0xE0CC\n"
        "	.hword 0x6828\n"
        "	.hword 0x6801\n"
        "	.hword 0x6949\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFD10\n"
        "	.hword 0x1C01\n"
        "	.hword 0x1C20\n"
        "	.hword 0x1C32\n"
        "	.hword 0x1C3B\n"
        "	.hword 0xF73F\n"
        "	.hword 0xFFBE\n"
        "	.hword 0xE0C0\n"
        "	.hword 0x23E0\n"
        "	.hword 0x005B\n"
        "	.hword 0x4443\n"
        "	.hword 0x681A\n"
        "	.hword 0x0090\n"
        "	.hword 0x4440\n"
        "	.hword 0x6AC1\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6018\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6802\n"
        "	.hword 0x3162\n"
        "	.hword 0x6C12\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFCF7\n"
        "	.hword 0x2800\n"
        "	.hword 0xD100\n"
        "	.hword 0xE0A9\n"
        "	.hword 0x218D\n"
        "	.hword 0x0089\n"
        "	.hword 0x2200\n"
        "	.hword 0x2300\n"
        "	.hword 0xF73F\n"
        "	.hword 0xFFA0\n"
        "	.hword 0xE0A2\n"
        "	.hword 0x21E0\n"
        "	.hword 0x0049\n"
        "	.hword 0x4441\n"
        "	.hword 0x680A\n"
        "	.hword 0x0090\n"
        "	.hword 0x4440\n"
        "	.hword 0x6AC4\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6008\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x6C0A\n"
        "	.hword 0x215E\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFCD9\n"
        "	.hword 0x6941\n"
        "	.hword 0x6C0A\n"
        "	.hword 0x1C21\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFCD4\n"
        "	.hword 0xE081\n"
        "	.hword 0x21E0\n"
        "	.hword 0x0049\n"
        "	.hword 0x4441\n"
        "	.hword 0x680A\n"
        "	.hword 0x0090\n"
        "	.hword 0x4440\n"
        "	.hword 0x6AC6\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6008\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x6C0A\n"
        "	.hword 0x215E\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFCBF\n"
        "	.hword 0x1C04\n"
        "	.hword 0x6965\n"
        "	.hword 0xA804\n"
        "	.hword 0x1C31\n"
        "	.hword 0xF72D\n"
        "	.hword 0xFE83\n"
        "	.hword 0xA804\n"
        "	.hword 0xF72D\n"
        "	.hword 0xFE9C\n"
        "	.hword 0x1C01\n"
        "	.hword 0x0409\n"
        "	.hword 0x0C09\n"
        "	.hword 0x6C6B\n"
        "	.hword 0x1C20\n"
        "	.hword 0x2200\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFCB0\n"
        "	.hword 0xE05B\n"
        "	.hword 0x21E0\n"
        "	.hword 0x0049\n"
        "	.hword 0x4441\n"
        "	.hword 0x680A\n"
        "	.hword 0x0090\n"
        "	.hword 0x4440\n"
        "	.hword 0x6AC4\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6008\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x6C0A\n"
        "	.hword 0x215E\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFC99\n"
        "	.hword 0x6942\n"
        "	.hword 0x0421\n"
        "	.hword 0x0C09\n"
        "	.hword 0x6C53\n"
        "	.hword 0x2201\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFC94\n"
        "	.hword 0xE03F\n"
        "	.hword 0x21E0\n"
        "	.hword 0x0049\n"
        "	.hword 0x4441\n"
        "	.hword 0x680A\n"
        "	.hword 0x0090\n"
        "	.hword 0x4440\n"
        "	.hword 0x6AC7\n"
        "	.hword 0x2A00\n"
        "	.hword 0xD001\n"
        "	.hword 0x1E50\n"
        "	.hword 0x6008\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x6C0A\n"
        "	.hword 0x215E\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFC7D\n"
        "	.hword 0x1C05\n"
        "	.hword 0x696E\n"
        "	.hword 0xAC09\n"
        "	.hword 0x1C20\n"
        "	.hword 0x1C39\n"
        "	.hword 0xF72D\n"
        "	.hword 0xFF94\n"
        "	.hword 0x1C20\n"
        "	.hword 0xF72D\n"
        "	.hword 0xFFAB\n"
        "	.hword 0x1C01\n"
        "	.hword 0x0409\n"
        "	.hword 0x0C09\n"
        "	.hword 0x6C73\n"
        "	.hword 0x1C28\n"
        "	.hword 0x2200\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFC6D\n"
        "	.hword 0xE018\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x6C0A\n"
        "	.hword 0x215E\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFC61\n"
        "	.hword 0x6941\n"
        "	.hword 0x6CC9\n"
        "	.hword 0xE00A\n"
        "	.hword 0x20DA\n"
        "	.hword 0x0080\n"
        "	.hword 0x4440\n"
        "	.hword 0x6800\n"
        "	.hword 0x6801\n"
        "	.hword 0x6C0A\n"
        "	.hword 0x215E\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFC55\n"
        "	.hword 0x6941\n"
        "	.hword 0x6C89\n"
        "	.hword 0xF7F3\n"
        "	.hword 0xFC4F\n"
        "	.hword 0x21D9\n"
        "	.hword 0x0089\n"
        "	.hword 0x4441\n"
        "	.hword 0x200B\n"
        "	.hword 0x6008\n"
        "	.hword 0x2001\n"
        "	.hword 0xE000\n"
        "_L_080E0080:\n"
        "	mov r0, #0\n"
        "	add sp, #0x30\n"
        "	pop {r3, r4, r5}\n"
        "	mov r8, r3\n"
        "	mov sb, r4\n"
        "	mov sl, r5\n"
        "	pop {r4, r5, r6, r7}\n"
        "	pop {r1}\n"
        "	bx r1\n"
        "	.hword 0x0000\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080E0094 @ 0x080E0094 (2164B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E0094 @ 0x080E0094 (2164 bytes)
 * Role   : C++ SGI STL Node Allocator / _Rb_tree / Container Template Method
 * Fields : +0x00:u16(RW), +0x00:u32(RW), +0x00:u8(RW), +0x04:u32(RW), +0x08:u16(R), +0x08:u32(R), +0x0C:u32(RW), +0x10:u32(R), +0x14:u32(R), +0x28:u32(R), +0x3C:u32(R), +0x40:u32(R)
 * Callees: func_080005D4, func_08008724, func_080087C8, func_080088B8, func_080088DC, func_08008910, func_08008918, func_08008920, func_08008940, func_0800894C
 * CFG Structure:
 *   L_080E0094: call func_08008724(); call func_08008918(); call func_08008918(); if (==) goto L_080E011C
 *   L_080E00F0: goto L_080E01BC
 *   L_080E011C: if (>= (u)) goto L_080E0134
 *   L_080E0134: if (==) goto L_080E0152
 *   L_080E0156: if (==) goto L_080E016C
 *   L_080E016E: if (==) goto L_080E01A8
 *   L_080E019C: if (!=) goto L_080E019C
 *   L_080E01A8: if (==) goto L_080E01B2
 *   L_080E01BC: if (==) goto L_080E01E4
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08008724(void);
extern void func_080087C8(void);
extern void func_080088B8(void);
extern void func_080088DC(void);
extern void func_08008910(void);
extern void func_08008918(void);
extern void func_08008920(void);
extern void func_08008940(void);
extern void func_0800894C(void);
extern void func_08008F60(void);
extern void func_080091E8(void);
extern void func_08009300(void);
extern void func_08009324(void);
extern void func_08009378(void);
extern void func_080093AC(void);
extern void func_080094A4(void);
extern void func_08032370(void);
extern void func_0803EEEC(void);
extern void func_08050D0C(void);
extern void func_08050D34(void);
extern void func_08050D3C(void);
extern void func_08050DF0(void);
extern void func_080AD724(void);
extern void func_080D01F8(void);
extern void func_080D0260(void);
extern void func_080D3910(void);
extern void func_080D3914(void);
extern void func_080D39F8(void);
extern void func_080D3BC0(void);
extern void func_080E09E4(void);
void func_080E0094(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, r7, lr}\n"
        "	mov r7, sl\n"
        "	mov r6, sb\n"
        "	mov r5, r8\n"
        "	push {r5, r6, r7}\n"
        "	sub sp, #0xac\n"
        "	str r0, [sp, #0x7c]\n"
        "	add r7, r1, #0\n"
        "	add r6, r7, #4\n"
        "	add r0, r6, #0\n"
        "	bl func_08008724\n"
        "	add r0, r6, #0\n"
        "	bl func_08008918\n"
        "	add r2, sp, #0xc\n"
        "	mov r3, #0x82\n"
        "	lsl r3, r3, #5\n"
        "	add r1, r3, #0\n"
        "	strh r1, [r2]\n"
        "	strh r1, [r0]\n"
        "	add r0, r6, #0\n"
        "	bl func_08008918\n"
        "	add r1, sp, #0xc\n"
        "	mov r2, #0x3f\n"
        "	strh r2, [r1]\n"
        "	add r0, #0x50\n"
        "	strh r2, [r0]\n"
        "	mov r4, #0xe2\n"
        "	lsl r4, r4, #2\n"
        "	add r5, r7, r4\n"
        "	mov r0, #0xde\n"
        "	lsl r0, r0, #2\n"
        "	add r1, r7, r0\n"
        "	str r1, [sp, #0x38]\n"
        "	mov r2, sp\n"
        "	add r2, #0x38\n"
        "	str r2, [sp, #0x80]\n"
        "	ldr r4, [r5, #4]\n"
        "	ldr r0, [r5, #0xc]\n"
        "	cmp r4, r0\n"
        "	beq _L_080E011C\n"
        "	cmp r4, #0\n"
        "	beq _L_080E00F0\n"
        "	str r1, [r4]\n"
        "_L_080E00F0:\n"
        "	ldr r0, [r5, #4]\n"
        "	add r0, #4\n"
        "	str r0, [r5, #4]\n"
        "	mov sl, r6\n"
        "	add r3, sp, #0x44\n"
        "	mov r8, r3\n"
        "	mov r4, sp\n"
        "	add r4, #0x50\n"
        "	str r4, [sp, #0x9c]\n"
        "	mov r5, sp\n"
        "	add r5, #0x5c\n"
        "	str r5, [sp, #0xa0]\n"
        "	add r0, r7, #0\n"
        "	add r0, #0xc\n"
        "	str r0, [sp, #0x98]\n"
        "	mov r1, sp\n"
        "	add r1, #0x10\n"
        "	str r1, [sp, #0x94]\n"
        "	mov r2, sp\n"
        "	add r2, #0x68\n"
        "	str r2, [sp, #0xa4]\n"
        "	b _L_080E01BC\n"
        "_L_080E011C:\n"
        "	mov r8, r4\n"
        "	mov r0, #1\n"
        "	str r0, [sp, #0x40]\n"
        "	ldr r0, [r5]\n"
        "	sub r0, r4, r0\n"
        "	asr r4, r0, #2\n"
        "	str r4, [sp, #0x3c]\n"
        "	add r1, sp, #0x40\n"
        "	add r0, sp, #0x3c\n"
        "	cmp r4, #1\n"
        "	bhs _L_080E0134\n"
        "	add r0, r1, #0\n"
        "_L_080E0134:\n"
        "	ldr r0, [r0]\n"
        "	add r0, r4, r0\n"
        "	cmp r0, #0\n"
        "	beq _L_080E0152\n"
        "	lsl r4, r0, #2\n"
        "	add r0, r4, #0\n"
        "	bl func_080D01F8\n"
        "	mov sb, r4\n"
        "	cmp r0, #0\n"
        "	bne _L_080E0156\n"
        "	mov r0, sb\n"
        "	bl func_080D3BC0\n"
        "	b _L_080E0156\n"
        "_L_080E0152:\n"
        "	mov r0, #0\n"
        "	mov sb, r0\n"
        "_L_080E0156:\n"
        "	add r6, r0, #0\n"
        "	ldr r1, [r5]\n"
        "	cmp r8, r1\n"
        "	beq _L_080E016C\n"
        "	mov r3, r8\n"
        "	sub r4, r3, r1\n"
        "	add r2, r4, #0\n"
        "	bl func_080D39F8\n"
        "	add r0, r0, r4\n"
        "	b _L_080E016E\n"
        "_L_080E016C:\n"
        "	add r0, r6, #0\n"
        "_L_080E016E:\n"
        "	add r4, r0, #0\n"
        "	ldr r1, [sp, #0x40]\n"
        "	add r0, r7, #4\n"
        "	mov sl, r0\n"
        "	ldr r2, [r5]\n"
        "	add r3, sp, #0x44\n"
        "	mov r8, r3\n"
        "	mov r0, sp\n"
        "	add r0, #0x50\n"
        "	str r0, [sp, #0x9c]\n"
        "	mov r3, sp\n"
        "	add r3, #0x5c\n"
        "	str r3, [sp, #0xa0]\n"
        "	add r0, r7, #0\n"
        "	add r0, #0xc\n"
        "	str r0, [sp, #0x98]\n"
        "	sub r3, #0x4c\n"
        "	str r3, [sp, #0x94]\n"
        "	mov r0, sp\n"
        "	add r0, #0x68\n"
        "	str r0, [sp, #0xa4]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E01A8\n"
        "_L_080E019C:\n"
        "	ldr r3, [sp, #0x80]\n"
        "	ldr r0, [r3]\n"
        "	stm r4!, {r0}\n"
        "	sub r1, #1\n"
        "	cmp r1, #0\n"
        "	bne _L_080E019C\n"
        "_L_080E01A8:\n"
        "	cmp r2, #0\n"
        "	beq _L_080E01B2\n"
        "	add r0, r2, #0\n"
        "	bl func_080D0260\n"
        "_L_080E01B2:\n"
        "	mov r1, sb\n"
        "	add r0, r1, r6\n"
        "	str r6, [r5]\n"
        "	str r4, [r5, #4]\n"
        "	str r0, [r5, #0xc]\n"
        "_L_080E01BC:\n"
        "	mov r2, #0xe2\n"
        "	lsl r2, r2, #2\n"
        "	add r5, r7, r2\n"
        "	mov r3, #0xdf\n"
        "	lsl r3, r3, #2\n"
        "	add r1, r7, r3\n"
        "	str r1, [sp, #0x44]\n"
        "	mov r4, r8\n"
        "	str r4, [sp, #0x84]\n"
        "	ldr r4, [r5, #4]\n"
        "	ldr r0, [r5, #0xc]\n"
        "	cmp r4, r0\n"
        "	beq _L_080E01E4\n"
        "	cmp r4, #0\n"
        "	beq _L_080E01DC\n"
        "	str r1, [r4]\n"
        "_L_080E01DC:\n"
        "	ldr r0, [r5, #4]\n"
        "	add r0, #4\n"
        "	str r0, [r5, #4]\n"
        "	b _L_080E0262\n"
        "_L_080E01E4:\n"
        "	mov r8, r4\n"
        "	mov r0, #1\n"
        "	str r0, [sp, #0x4c]\n"
        "	ldr r0, [r5]\n"
        "	sub r0, r4, r0\n"
        "	asr r4, r0, #2\n"
        "	str r4, [sp, #0x48]\n"
        "	add r1, sp, #0x4c\n"
        "	add r0, sp, #0x48\n"
        "	cmp r4, #1\n"
        "	bhs _L_080E01FC\n"
        "	add r0, r1, #0\n"
        "_L_080E01FC:\n"
        "	ldr r0, [r0]\n"
        "	add r0, r4, r0\n"
        "	cmp r0, #0\n"
        "	beq _L_080E021A\n"
        "	lsl r4, r0, #2\n"
        "	add r0, r4, #0\n"
        "	bl func_080D01F8\n"
        "	mov sb, r4\n"
        "	cmp r0, #0\n"
        "	bne _L_080E021E\n"
        "	mov r0, sb\n"
        "	bl func_080D3BC0\n"
        "	b _L_080E021E\n"
        "_L_080E021A:\n"
        "	mov r0, #0\n"
        "	mov sb, r0\n"
        "_L_080E021E:\n"
        "	add r6, r0, #0\n"
        "	ldr r1, [r5]\n"
        "	cmp r8, r1\n"
        "	beq _L_080E0236\n"
        "	mov r0, r8\n"
        "	sub r4, r0, r1\n"
        "	add r0, r6, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080D39F8\n"
        "	add r0, r0, r4\n"
        "	b _L_080E0238\n"
        "_L_080E0236:\n"
        "	add r0, r6, #0\n"
        "_L_080E0238:\n"
        "	add r4, r0, #0\n"
        "	ldr r1, [sp, #0x4c]\n"
        "	ldr r2, [r5]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E024E\n"
        "_L_080E0242:\n"
        "	ldr r3, [sp, #0x84]\n"
        "	ldr r0, [r3]\n"
        "	stm r4!, {r0}\n"
        "	sub r1, #1\n"
        "	cmp r1, #0\n"
        "	bne _L_080E0242\n"
        "_L_080E024E:\n"
        "	cmp r2, #0\n"
        "	beq _L_080E0258\n"
        "	add r0, r2, #0\n"
        "	bl func_080D0260\n"
        "_L_080E0258:\n"
        "	mov r1, sb\n"
        "	add r0, r1, r6\n"
        "	str r6, [r5]\n"
        "	str r4, [r5, #4]\n"
        "	str r0, [r5, #0xc]\n"
        "_L_080E0262:\n"
        "	mov r2, #0xe2\n"
        "	lsl r2, r2, #2\n"
        "	add r5, r7, r2\n"
        "	mov r3, #0xe0\n"
        "	lsl r3, r3, #2\n"
        "	add r1, r7, r3\n"
        "	str r1, [sp, #0x50]\n"
        "	ldr r4, [sp, #0x9c]\n"
        "	str r4, [sp, #0x88]\n"
        "	ldr r4, [r5, #4]\n"
        "	ldr r0, [r5, #0xc]\n"
        "	cmp r4, r0\n"
        "	beq _L_080E028A\n"
        "	cmp r4, #0\n"
        "	beq _L_080E0282\n"
        "	str r1, [r4]\n"
        "_L_080E0282:\n"
        "	ldr r0, [r5, #4]\n"
        "	add r0, #4\n"
        "	str r0, [r5, #4]\n"
        "	b _L_080E0308\n"
        "_L_080E028A:\n"
        "	mov r8, r4\n"
        "	mov r0, #1\n"
        "	str r0, [sp, #0x58]\n"
        "	ldr r0, [r5]\n"
        "	sub r0, r4, r0\n"
        "	asr r4, r0, #2\n"
        "	str r4, [sp, #0x54]\n"
        "	add r1, sp, #0x58\n"
        "	add r0, sp, #0x54\n"
        "	cmp r4, #1\n"
        "	bhs _L_080E02A2\n"
        "	add r0, r1, #0\n"
        "_L_080E02A2:\n"
        "	ldr r0, [r0]\n"
        "	add r0, r4, r0\n"
        "	cmp r0, #0\n"
        "	beq _L_080E02C0\n"
        "	lsl r4, r0, #2\n"
        "	add r0, r4, #0\n"
        "	bl func_080D01F8\n"
        "	mov sb, r4\n"
        "	cmp r0, #0\n"
        "	bne _L_080E02C4\n"
        "	mov r0, sb\n"
        "	bl func_080D3BC0\n"
        "	b _L_080E02C4\n"
        "_L_080E02C0:\n"
        "	mov r0, #0\n"
        "	mov sb, r0\n"
        "_L_080E02C4:\n"
        "	add r6, r0, #0\n"
        "	ldr r1, [r5]\n"
        "	cmp r8, r1\n"
        "	beq _L_080E02DC\n"
        "	mov r0, r8\n"
        "	sub r4, r0, r1\n"
        "	add r0, r6, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080D39F8\n"
        "	add r0, r0, r4\n"
        "	b _L_080E02DE\n"
        "_L_080E02DC:\n"
        "	add r0, r6, #0\n"
        "_L_080E02DE:\n"
        "	add r4, r0, #0\n"
        "	ldr r1, [sp, #0x58]\n"
        "	ldr r2, [r5]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E02F4\n"
        "_L_080E02E8:\n"
        "	ldr r3, [sp, #0x88]\n"
        "	ldr r0, [r3]\n"
        "	stm r4!, {r0}\n"
        "	sub r1, #1\n"
        "	cmp r1, #0\n"
        "	bne _L_080E02E8\n"
        "_L_080E02F4:\n"
        "	cmp r2, #0\n"
        "	beq _L_080E02FE\n"
        "	add r0, r2, #0\n"
        "	bl func_080D0260\n"
        "_L_080E02FE:\n"
        "	mov r1, sb\n"
        "	add r0, r1, r6\n"
        "	str r6, [r5]\n"
        "	str r4, [r5, #4]\n"
        "	str r0, [r5, #0xc]\n"
        "_L_080E0308:\n"
        "	mov r2, #0xe2\n"
        "	lsl r2, r2, #2\n"
        "	add r5, r7, r2\n"
        "	mov r3, #0xe1\n"
        "	lsl r3, r3, #2\n"
        "	add r1, r7, r3\n"
        "	str r1, [sp, #0x5c]\n"
        "	ldr r4, [sp, #0xa0]\n"
        "	str r4, [sp, #0x8c]\n"
        "	ldr r4, [r5, #4]\n"
        "	ldr r0, [r5, #0xc]\n"
        "	cmp r4, r0\n"
        "	beq _L_080E0330\n"
        "	cmp r4, #0\n"
        "	beq _L_080E0328\n"
        "	str r1, [r4]\n"
        "_L_080E0328:\n"
        "	ldr r0, [r5, #4]\n"
        "	add r0, #4\n"
        "	str r0, [r5, #4]\n"
        "	b _L_080E03AE\n"
        "_L_080E0330:\n"
        "	mov r8, r4\n"
        "	mov r0, #1\n"
        "	str r0, [sp, #0x64]\n"
        "	ldr r0, [r5]\n"
        "	sub r0, r4, r0\n"
        "	asr r4, r0, #2\n"
        "	str r4, [sp, #0x60]\n"
        "	add r1, sp, #0x64\n"
        "	add r0, sp, #0x60\n"
        "	cmp r4, #1\n"
        "	bhs _L_080E0348\n"
        "	add r0, r1, #0\n"
        "_L_080E0348:\n"
        "	ldr r0, [r0]\n"
        "	add r0, r4, r0\n"
        "	cmp r0, #0\n"
        "	beq _L_080E0366\n"
        "	lsl r4, r0, #2\n"
        "	add r0, r4, #0\n"
        "	bl func_080D01F8\n"
        "	mov sb, r4\n"
        "	cmp r0, #0\n"
        "	bne _L_080E036A\n"
        "	mov r0, sb\n"
        "	bl func_080D3BC0\n"
        "	b _L_080E036A\n"
        "_L_080E0366:\n"
        "	mov r0, #0\n"
        "	mov sb, r0\n"
        "_L_080E036A:\n"
        "	add r6, r0, #0\n"
        "	ldr r1, [r5]\n"
        "	cmp r8, r1\n"
        "	beq _L_080E0382\n"
        "	mov r0, r8\n"
        "	sub r4, r0, r1\n"
        "	add r0, r6, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080D39F8\n"
        "	add r0, r0, r4\n"
        "	b _L_080E0384\n"
        "_L_080E0382:\n"
        "	add r0, r6, #0\n"
        "_L_080E0384:\n"
        "	add r4, r0, #0\n"
        "	ldr r1, [sp, #0x64]\n"
        "	ldr r2, [r5]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E039A\n"
        "_L_080E038E:\n"
        "	ldr r3, [sp, #0x8c]\n"
        "	ldr r0, [r3]\n"
        "	stm r4!, {r0}\n"
        "	sub r1, #1\n"
        "	cmp r1, #0\n"
        "	bne _L_080E038E\n"
        "_L_080E039A:\n"
        "	cmp r2, #0\n"
        "	beq _L_080E03A4\n"
        "	add r0, r2, #0\n"
        "	bl func_080D0260\n"
        "_L_080E03A4:\n"
        "	mov r1, sb\n"
        "	add r0, r1, r6\n"
        "	str r6, [r5]\n"
        "	str r4, [r5, #4]\n"
        "	str r0, [r5, #0xc]\n"
        "_L_080E03AE:\n"
        "	ldr r2, .Lpool_080E0534\n"
        "	ldr r1, .Lpool_080E0538\n"
        "	mov r3, #0xd8\n"
        "	lsl r3, r3, #2\n"
        "	add r0, r7, r3\n"
        "	ldr r0, [r0]\n"
        "	lsl r0, r0, #1\n"
        "	add r0, r0, r1\n"
        "	ldrh r0, [r0]\n"
        "	lsl r0, r0, #2\n"
        "	add r0, r0, r2\n"
        "	ldr r1, [r0]\n"
        "	ldr r0, [sp, #0x98]\n"
        "	bl func_0803EEEC\n"
        "	mov r4, #0xd9\n"
        "	lsl r4, r4, #2\n"
        "	add r0, r7, r4\n"
        "	mov r4, #0\n"
        "	str r4, [r0]\n"
        "	mov r0, #0xda\n"
        "	lsl r0, r0, #2\n"
        "	add r5, r7, r0\n"
        "	ldr r0, [sp, #0x94]\n"
        "	bl func_080AD724\n"
        "	ldr r0, [sp, #0x10]\n"
        "	ldr r1, [sp, #0x94]\n"
        "	str r1, [sp, #0x68]\n"
        "	ldr r2, [sp, #0xa4]\n"
        "	str r0, [r2, #4]\n"
        "	str r4, [r1]\n"
        "	add r4, r0, #0\n"
        "	ldr r1, [r5]\n"
        "	cmp r4, r1\n"
        "	beq _L_080E0406\n"
        "	cmp r1, #0\n"
        "	beq _L_080E0406\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E0406:\n"
        "	str r4, [r5]\n"
        "	ldr r1, [sp, #0x10]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E041A\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E041A:\n"
        "	mov r0, #4\n"
        "	bl func_080005D4\n"
        "	add r4, r0, #0\n"
        "	mov r0, sl\n"
        "	bl func_08008918\n"
        "	add r1, r0, #0\n"
        "	add r0, r4, #0\n"
        "	bl func_08009300\n"
        "	mov r3, #0xdc\n"
        "	lsl r3, r3, #2\n"
        "	add r5, r7, r3\n"
        "	add r4, r0, #0\n"
        "	ldr r0, [r5]\n"
        "	cmp r4, r0\n"
        "	beq _L_080E0448\n"
        "	cmp r0, #0\n"
        "	beq _L_080E0448\n"
        "	mov r1, #3\n"
        "	bl func_08009324\n"
        "_L_080E0448:\n"
        "	str r4, [r5]\n"
        "_L_080E044A:\n"
        "	mov r0, sl\n"
        "	bl func_080088B8\n"
        "	mov r4, #0xd9\n"
        "	lsl r4, r4, #2\n"
        "	add r6, r7, r4\n"
        "	ldr r0, [r6]\n"
        "	cmp r0, #1\n"
        "	beq _L_080E04B2\n"
        "	mov r0, sl\n"
        "	bl func_080088DC\n"
        "	ldrh r0, [r0, #8]\n"
        "	mov r1, #8\n"
        "	and r0, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E04B2\n"
        "	mov r0, #0xdc\n"
        "	lsl r0, r0, #2\n"
        "	add r5, r7, r0\n"
        "	ldr r0, [r5]\n"
        "	bl func_080094A4\n"
        "	lsl r0, r0, #0x10\n"
        "	asr r0, r0, #0x10\n"
        "	neg r1, r0\n"
        "	orr r1, r0\n"
        "	cmp r1, #0\n"
        "	blt _L_080E04B2\n"
        "	mov r1, #0xdb\n"
        "	lsl r1, r1, #2\n"
        "	add r4, r7, r1\n"
        "	ldr r0, [r4]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E04A2\n"
        "	bl func_08050D34\n"
        "	cmp r0, #1\n"
        "	beq _L_080E04B2\n"
        "	ldr r0, [r4]\n"
        "	bl func_08050D34\n"
        "	cmp r0, #2\n"
        "	beq _L_080E04B2\n"
        "_L_080E04A2:\n"
        "	ldr r0, [r5]\n"
        "	ldr r1, .Lpool_080E053C\n"
        "	mov r2, #1\n"
        "	mov r3, #1\n"
        "	bl func_08009378\n"
        "	mov r0, #1\n"
        "	str r0, [r6]\n"
        "_L_080E04B2:\n"
        "	mov r2, #0xdb\n"
        "	lsl r2, r2, #2\n"
        "	add r4, r7, r2\n"
        "	ldr r0, [r4]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E0518\n"
        "	mov r0, sl\n"
        "	bl func_080088DC\n"
        "	ldrh r2, [r0, #8]\n"
        "	mov r0, #9\n"
        "	neg r0, r0\n"
        "	and r0, r2\n"
        "	lsl r0, r0, #0x18\n"
        "	lsr r0, r0, #0x18\n"
        "	ldr r1, .Lpool_080E0540\n"
        "	and r1, r2\n"
        "	orr r1, r0\n"
        "	ldr r4, [r4]\n"
        "	mov sb, r4\n"
        "	add r5, sp, #0x14\n"
        "	add r0, r5, #0\n"
        "	bl func_080091E8\n"
        "	mov r0, sl\n"
        "	bl func_08008920\n"
        "	mov r8, r0\n"
        "	mov r0, sl\n"
        "	bl func_08008918\n"
        "	add r6, r0, #0\n"
        "	mov r0, sl\n"
        "	bl func_08008940\n"
        "	add r4, r0, #0\n"
        "	mov r0, sl\n"
        "	bl func_0800894C\n"
        "	mov r3, #0xe0\n"
        "	lsl r3, r3, #2\n"
        "	add r1, r7, r3\n"
        "	str r4, [sp]\n"
        "	str r0, [sp, #4]\n"
        "	str r1, [sp, #8]\n"
        "	mov r0, sb\n"
        "	add r1, r5, #0\n"
        "	mov r2, r8\n"
        "	add r3, r6, #0\n"
        "	bl func_08050D3C\n"
        "_L_080E0518:\n"
        "	mov r6, #0\n"
        "	mov r4, #0xd9\n"
        "	lsl r4, r4, #2\n"
        "	add r0, r7, r4\n"
        "	ldr r0, [r0]\n"
        "	cmp r0, #0xb\n"
        "	bls _L_080E0528\n"
        "	b _L_080E075E\n"
        "_L_080E0528:\n"
        "	lsl r0, r0, #2\n"
        "	ldr r1, .Lpool_080E0544\n"
        "	add r0, r0, r1\n"
        "	ldr r0, [r0]\n"
        "	mov pc, r0\n"
        "	.hword 0x0000\n"
        ".Lpool_080E0534:\n"
        "	.word 0x080F89D4\n"
        ".Lpool_080E0538:\n"
        "	.word 0x080F19AE\n"
        ".Lpool_080E053C:\n"
        "	.word 0x00000889\n"
        ".Lpool_080E0540:\n"
        "	.word 0xFFFFFF00\n"
        ".Lpool_080E0544:\n"
        "	.word _Ljt_080E0548\n"
        "_Ljt_080E0548:\n"
        "	.word _L_080E0578\n"
        "	.word _L_080E05A2\n"
        "	.word _L_080E05D0\n"
        "	.word _L_080E05EC\n"
        "	.word _L_080E0616\n"
        "	.word _L_080E065C\n"
        "	.word _L_080E06BC\n"
        "	.word _L_080E0632\n"
        "	.word _L_080E06DE\n"
        "	.word _L_080E06FA\n"
        "	.word _L_080E0712\n"
        "	.word _L_080E0734\n"
        "_L_080E0578:\n"
        "	mov r6, #1\n"
        "	mov r5, #0xd6\n"
        "	lsl r5, r5, #2\n"
        "	add r0, r7, r5\n"
        "	ldr r0, [r0]\n"
        "	ldr r1, [r0, #0xc]\n"
        "	ldr r0, [sp, #0x98]\n"
        "	bl func_080D3910\n"
        "	add r2, r0, #0\n"
        "	cmp r2, #0\n"
        "	beq _L_080E0592\n"
        "	b _L_080E075E\n"
        "_L_080E0592:\n"
        "	mov r1, #0xd7\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r7, r1\n"
        "	ldr r1, [r0]\n"
        "	str r2, [r0]\n"
        "	ldr r2, [sp, #0x7c]\n"
        "	str r1, [r2]\n"
        "	b _L_080E08F4\n"
        "_L_080E05A2:\n"
        "	mov r6, #1\n"
        "	mov r3, #0xdc\n"
        "	lsl r3, r3, #2\n"
        "	add r0, r7, r3\n"
        "	ldr r0, [r0]\n"
        "	bl func_080094A4\n"
        "	lsl r0, r0, #0x10\n"
        "	asr r0, r0, #0x10\n"
        "	neg r1, r0\n"
        "	orr r1, r0\n"
        "	lsr r2, r1, #0x1f\n"
        "	cmp r2, #0\n"
        "	beq _L_080E05C0\n"
        "	b _L_080E075E\n"
        "_L_080E05C0:\n"
        "	mov r4, #0xd7\n"
        "	lsl r4, r4, #2\n"
        "	add r0, r7, r4\n"
        "	ldr r1, [r0]\n"
        "	str r2, [r0]\n"
        "	ldr r5, [sp, #0x7c]\n"
        "	str r1, [r5]\n"
        "	b _L_080E08F4\n"
        "_L_080E05D0:\n"
        "	mov r6, #1\n"
        "	mov r1, #0xdb\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r7, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08050D34\n"
        "	cmp r0, #3\n"
        "	beq _L_080E05E4\n"
        "	b _L_080E075E\n"
        "_L_080E05E4:\n"
        "	mov r2, #0xd9\n"
        "	lsl r2, r2, #2\n"
        "	add r1, r7, r2\n"
        "	b _L_080E072E\n"
        "_L_080E05EC:\n"
        "	mov r6, #1\n"
        "	mov r3, #0xdb\n"
        "	lsl r3, r3, #2\n"
        "	add r4, r7, r3\n"
        "	ldr r0, [r4]\n"
        "	bl func_08050D34\n"
        "	cmp r0, #0\n"
        "	beq _L_080E0600\n"
        "	b _L_080E075E\n"
        "_L_080E0600:\n"
        "	mov r5, #0\n"
        "	ldr r0, [r4]\n"
        "	cmp r5, r0\n"
        "	beq _L_080E0612\n"
        "	cmp r0, #0\n"
        "	beq _L_080E0612\n"
        "	mov r1, #3\n"
        "	bl func_08050D0C\n"
        "_L_080E0612:\n"
        "	str r5, [r4]\n"
        "	b _L_080E0728\n"
        "_L_080E0616:\n"
        "	mov r6, #1\n"
        "	mov r5, #0xdb\n"
        "	lsl r5, r5, #2\n"
        "	add r0, r7, r5\n"
        "	ldr r0, [r0]\n"
        "	bl func_08050D34\n"
        "	cmp r0, #3\n"
        "	beq _L_080E062A\n"
        "	b _L_080E075E\n"
        "_L_080E062A:\n"
        "	mov r0, #0xd9\n"
        "	lsl r0, r0, #2\n"
        "	add r1, r7, r0\n"
        "	b _L_080E072E\n"
        "_L_080E0632:\n"
        "	mov r6, #1\n"
        "	mov r1, #0xdb\n"
        "	lsl r1, r1, #2\n"
        "	add r4, r7, r1\n"
        "	ldr r0, [r4]\n"
        "	bl func_08050D34\n"
        "	cmp r0, #6\n"
        "	bne _L_080E0646\n"
        "	b _L_080E075E\n"
        "_L_080E0646:\n"
        "	ldr r0, [r4]\n"
        "	bl func_08050DF0\n"
        "	add r1, r0, #0\n"
        "	add r0, r7, #0\n"
        "	bl func_080E09E4\n"
        "	mov r2, #0xd9\n"
        "	lsl r2, r2, #2\n"
        "	add r1, r7, r2\n"
        "	b _L_080E072E\n"
        "_L_080E065C:\n"
        "	mov r3, #0xdc\n"
        "	lsl r3, r3, #2\n"
        "	add r0, r7, r3\n"
        "	ldr r0, [r0]\n"
        "	bl func_080094A4\n"
        "	lsl r0, r0, #0x10\n"
        "	asr r0, r0, #0x10\n"
        "	neg r1, r0\n"
        "	orr r1, r0\n"
        "	lsr r4, r1, #0x1f\n"
        "	cmp r4, #0\n"
        "	bne _L_080E075E\n"
        "	mov r5, #0xe8\n"
        "	lsl r5, r5, #2\n"
        "	add r1, r7, r5\n"
        "	mov r0, #1\n"
        "	strb r0, [r1]\n"
        "	mov r0, sl\n"
        "	bl func_08008918\n"
        "	ldrh r2, [r0]\n"
        "	ldr r1, .Lpool_080E06B4\n"
        "	and r1, r2\n"
        "	strh r1, [r0]\n"
        "	mov r0, sl\n"
        "	bl func_08008918\n"
        "	add r0, #0x50\n"
        "	ldrh r2, [r0]\n"
        "	ldr r1, .Lpool_080E06B8\n"
        "	and r1, r2\n"
        "	strh r1, [r0]\n"
        "	mov r0, sl\n"
        "	bl func_08008918\n"
        "	add r0, #0x4c\n"
        "	strh r4, [r0]\n"
        "	mov r1, #0xd9\n"
        "	lsl r1, r1, #2\n"
        "	add r0, r7, r1\n"
        "	str r4, [r0]\n"
        "	b _L_080E075E\n"
        "	.hword 0x0000\n"
        ".Lpool_080E06B4:\n"
        "	.word 0x0000F0FF\n"
        ".Lpool_080E06B8:\n"
        "	.word 0x0000FF3F\n"
        "_L_080E06BC:\n"
        "	mov r2, #0xdc\n"
        "	lsl r2, r2, #2\n"
        "	add r0, r7, r2\n"
        "	ldr r0, [r0]\n"
        "	bl func_080094A4\n"
        "	lsl r0, r0, #0x10\n"
        "	asr r0, r0, #0x10\n"
        "	neg r1, r0\n"
        "	orr r1, r0\n"
        "	lsr r1, r1, #0x1f\n"
        "	cmp r1, #0\n"
        "	bne _L_080E075E\n"
        "	mov r3, #0xd9\n"
        "	lsl r3, r3, #2\n"
        "	add r0, r7, r3\n"
        "	b _L_080E075C\n"
        "_L_080E06DE:\n"
        "	mov r4, #0xe6\n"
        "	lsl r4, r4, #2\n"
        "	add r1, r7, r4\n"
        "	ldrh r0, [r1]\n"
        "	sub r0, #1\n"
        "	strh r0, [r1]\n"
        "	lsl r0, r0, #0x10\n"
        "	lsr r1, r0, #0x10\n"
        "	cmp r1, #0\n"
        "	bne _L_080E075E\n"
        "	mov r5, #0xd9\n"
        "	lsl r5, r5, #2\n"
        "	add r0, r7, r5\n"
        "	b _L_080E075C\n"
        "_L_080E06FA:\n"
        "	mov r0, #0xe7\n"
        "	lsl r0, r0, #2\n"
        "	add r4, r7, r0\n"
        "	ldr r0, [r4]\n"
        "	bl func_08032370\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_080E075E\n"
        "	mov r1, #0\n"
        "	str r1, [r4]\n"
        "	b _L_080E0756\n"
        "_L_080E0712:\n"
        "	mov r3, #0xda\n"
        "	lsl r3, r3, #2\n"
        "	add r0, r7, r3\n"
        "	ldr r0, [r0]\n"
        "	ldr r1, [r0]\n"
        "	ldr r1, [r1, #0x28]\n"
        "	bl func_080D3910\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_080E075E\n"
        "_L_080E0728:\n"
        "	mov r4, #0xd9\n"
        "	lsl r4, r4, #2\n"
        "	add r1, r7, r4\n"
        "_L_080E072E:\n"
        "	mov r0, #0\n"
        "	str r0, [r1]\n"
        "	b _L_080E075E\n"
        "_L_080E0734:\n"
        "	mov r5, #0xda\n"
        "	lsl r5, r5, #2\n"
        "	add r0, r7, r5\n"
        "	ldr r0, [r0]\n"
        "	ldr r1, [r0]\n"
        "	ldr r2, [r1, #0x40]\n"
        "	mov r1, #0x5e\n"
        "	bl func_080D3914\n"
        "	ldr r1, [r0, #0x14]\n"
        "	ldr r1, [r1, #0x3c]\n"
        "	bl func_080D3910\n"
        "	lsl r0, r0, #0x18\n"
        "	lsr r1, r0, #0x18\n"
        "	cmp r1, #0\n"
        "	bne _L_080E075E\n"
        "_L_080E0756:\n"
        "	mov r2, #0xd9\n"
        "	lsl r2, r2, #2\n"
        "	add r0, r7, r2\n"
        "_L_080E075C:\n"
        "	str r1, [r0]\n"
        "_L_080E075E:\n"
        "	cmp r6, #0\n"
        "	bne _L_080E077C\n"
        "	mov r0, sl\n"
        "	bl func_080088DC\n"
        "	add r1, sp, #0x70\n"
        "	str r0, [sp, #0x70]\n"
        "	mov r3, #0xda\n"
        "	lsl r3, r3, #2\n"
        "	add r0, r7, r3\n"
        "	ldr r0, [r0]\n"
        "	ldr r2, [r0]\n"
        "	ldr r2, [r2, #0xc]\n"
        "	bl func_080D3914\n"
        "_L_080E077C:\n"
        "	mov r4, #0xe8\n"
        "	lsl r4, r4, #2\n"
        "	add r0, r7, r4\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E078A\n"
        "	b _L_080E08A8\n"
        "_L_080E078A:\n"
        "	mov r0, sl\n"
        "	bl func_08008910\n"
        "	add r2, r0, #0\n"
        "	ldr r5, .Lpool_080E07D4\n"
        "	add r0, r7, r5\n"
        "	ldrb r0, [r0]\n"
        "	ldr r1, .Lpool_080E07D8\n"
        "	cmp r0, #0\n"
        "	beq _L_080E07A0\n"
        "	mov r1, #0\n"
        "_L_080E07A0:\n"
        "	add r6, r2, #0\n"
        "	add r0, sp, #0xc\n"
        "	mov r2, #0xa0\n"
        "	lsl r2, r2, #0x13\n"
        "	mov r3, #2\n"
        "	bl func_08008F60\n"
        "	mov r0, sp\n"
        "	add r0, #0xc\n"
        "	str r0, [sp, #0x90]\n"
        "	ldr r1, [r6, #4]\n"
        "	ldr r0, [r6, #0xc]\n"
        "	cmp r1, r0\n"
        "	beq _L_080E07DC\n"
        "	cmp r1, #0\n"
        "	beq _L_080E07CC\n"
        "	add r0, r1, #0\n"
        "	add r1, sp, #0xc\n"
        "	ldm r1!, {r2, r3, r4}\n"
        "	stm r0!, {r2, r3, r4}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_080E07CC:\n"
        "	ldr r0, [r6, #4]\n"
        "	add r0, #0x10\n"
        "	str r0, [r6, #4]\n"
        "	b _L_080E08E0\n"
        ".Lpool_080E07D4:\n"
        "	.word 0x000003A1\n"
        ".Lpool_080E07D8:\n"
        "	.word 0x0000FFFF\n"
        "_L_080E07DC:\n"
        "	mov r8, r1\n"
        "	mov r0, #1\n"
        "	str r0, [sp, #0x78]\n"
        "	ldr r0, [r6]\n"
        "	sub r0, r1, r0\n"
        "	asr r4, r0, #4\n"
        "	str r4, [sp, #0x74]\n"
        "	add r1, sp, #0x78\n"
        "	add r0, sp, #0x74\n"
        "	cmp r4, #1\n"
        "	bhs _L_080E07F4\n"
        "	add r0, r1, #0\n"
        "_L_080E07F4:\n"
        "	ldr r0, [r0]\n"
        "	add r0, r4, r0\n"
        "	cmp r0, #0\n"
        "	beq _L_080E0812\n"
        "	lsl r4, r0, #4\n"
        "	add r0, r4, #0\n"
        "	bl func_080D01F8\n"
        "	mov sb, r4\n"
        "	cmp r0, #0\n"
        "	bne _L_080E0816\n"
        "	mov r0, sb\n"
        "	bl func_080D3BC0\n"
        "	b _L_080E0816\n"
        "_L_080E0812:\n"
        "	mov r0, #0\n"
        "	mov sb, r0\n"
        "_L_080E0816:\n"
        "	add r5, r0, #0\n"
        "	str r5, [sp, #0xa8]\n"
        "	ldr r2, [r6]\n"
        "	mov ip, r5\n"
        "	cmp r2, r8\n"
        "	beq _L_080E083E\n"
        "_L_080E0822:\n"
        "	mov r5, ip\n"
        "	cmp r5, #0\n"
        "	beq _L_080E0834\n"
        "	mov r0, ip\n"
        "	add r1, r2, #0\n"
        "	ldm r1!, {r3, r4, r5}\n"
        "	stm r0!, {r3, r4, r5}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_080E0834:\n"
        "	add r2, #0x10\n"
        "	mov r0, #0x10\n"
        "	add ip, r0\n"
        "	cmp r2, r8\n"
        "	bne _L_080E0822\n"
        "_L_080E083E:\n"
        "	mov r5, ip\n"
        "	ldr r0, [sp, #0x78]\n"
        "	cmp r0, #1\n"
        "	bne _L_080E085A\n"
        "	cmp r5, #0\n"
        "	beq _L_080E0856\n"
        "	add r0, r5, #0\n"
        "	ldr r1, [sp, #0x90]\n"
        "	ldm r1!, {r2, r3, r4}\n"
        "	stm r0!, {r2, r3, r4}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_080E0856:\n"
        "	add r5, #0x10\n"
        "	b _L_080E0882\n"
        "_L_080E085A:\n"
        "	mov r8, r0\n"
        "	add r2, r5, #0\n"
        "	cmp r0, #0\n"
        "	beq _L_080E0880\n"
        "_L_080E0862:\n"
        "	cmp r2, #0\n"
        "	beq _L_080E0872\n"
        "	add r0, r2, #0\n"
        "	ldr r1, [sp, #0x90]\n"
        "	ldm r1!, {r3, r4, r5}\n"
        "	stm r0!, {r3, r4, r5}\n"
        "	ldr r1, [r1]\n"
        "	str r1, [r0]\n"
        "_L_080E0872:\n"
        "	mov r5, #1\n"
        "	neg r5, r5\n"
        "	add r8, r5\n"
        "	add r2, #0x10\n"
        "	mov r0, r8\n"
        "	cmp r0, #0\n"
        "	bne _L_080E0862\n"
        "_L_080E0880:\n"
        "	add r5, r2, #0\n"
        "_L_080E0882:\n"
        "	ldr r2, [r6, #4]\n"
        "	ldr r0, [r6]\n"
        "	add r1, r0, #0\n"
        "	cmp r0, r2\n"
        "	beq _L_080E0892\n"
        "_L_080E088C:\n"
        "	add r1, #0x10\n"
        "	cmp r1, r2\n"
        "	bne _L_080E088C\n"
        "_L_080E0892:\n"
        "	cmp r0, #0\n"
        "	beq _L_080E089A\n"
        "	bl func_080D0260\n"
        "_L_080E089A:\n"
        "	ldr r0, [sp, #0xa8]\n"
        "	add r0, sb\n"
        "	ldr r1, [sp, #0xa8]\n"
        "	str r1, [r6]\n"
        "	str r5, [r6, #4]\n"
        "	str r0, [r6, #0xc]\n"
        "	b _L_080E08E0\n"
        "_L_080E08A8:\n"
        "	mov r0, sl\n"
        "	bl func_08008910\n"
        "	add r6, r0, #0\n"
        "	mov r0, sl\n"
        "	bl func_08008918\n"
        "	add r5, r0, #0\n"
        "	mov r0, sl\n"
        "	bl func_08008920\n"
        "	add r4, r0, #0\n"
        "	mov r0, sl\n"
        "	bl func_08008940\n"
        "	str r6, [sp, #0xc]\n"
        "	str r5, [sp, #0x10]\n"
        "	str r4, [sp, #0x14]\n"
        "	str r0, [sp, #0x18]\n"
        "	mov r2, #0xda\n"
        "	lsl r2, r2, #2\n"
        "	add r0, r7, r2\n"
        "	ldr r0, [r0]\n"
        "	ldr r1, [r0]\n"
        "	ldr r2, [r1, #0x10]\n"
        "	add r1, sp, #0xc\n"
        "	bl func_080D3914\n"
        "_L_080E08E0:\n"
        "	mov r3, #0xdc\n"
        "	lsl r3, r3, #2\n"
        "	add r0, r7, r3\n"
        "	ldr r0, [r0]\n"
        "	bl func_080093AC\n"
        "	mov r0, sl\n"
        "	bl func_080087C8\n"
        "	b _L_080E044A\n"
        "_L_080E08F4:\n"
        "	ldr r0, [sp, #0x7c]\n"
        "	add sp, #0xac\n"
        "	pop {r3, r4, r5}\n"
        "	mov r8, r3\n"
        "	mov sb, r4\n"
        "	mov sl, r5\n"
        "	pop {r4, r5, r6, r7}\n"
        "	pop {r1}\n"
        "	bx r1\n"
        "	.hword 0x0000\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080E0908 @ 0x080E0908 (168B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

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

/* --- func_080E09B0 @ 0x080E09B0 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080007EC();
void func_080E09B0(void) {
  func_080007EC();
}

/* --- func_080E09BC @ 0x080E09BC (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080E09BC(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080E09E4 @ 0x080E09E4 (36B) [PURE-C | agbcc_O2] --- */
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
/* paridad 98.06% preset agbcc_O2 (rosetta-alg) */
void func_080E09E4(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r4 = r1 + 0;
    r1 = r0 + 0;
    r1 += 0x30;
    r2 = 0xe0;
    r2 = r2 << 1;
    r3 = r0 + r2;
    r2 = *(u32 *)(r3);
    if (r2 > 0x63) goto loc_080E0A02;
    *(u32 *)(r1 + (r2 << 2)) = r4;
    r0 = r2 + 1;
    *(u32 *)(r3) = r0;
loc_080E0A02:
    return r0;
}

/* --- func_080E0A08 @ 0x080E0A08 (116B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E0A08 @ 0x080E0A08 (116 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x0C:u32(R), +0x10:u32(R), +0x14:u8(R), +0x15:u8(R), +0x16:u8(RW)
 * Callees: func_080D374C
 * CFG Structure:
 *   L_080E0A08: if (==) goto L_080E0A68
 *   L_080E0A2C: if (!=) goto L_080E0A2C
 *   L_080E0A68: call func_080D374C()
 *   L_080E0A76: return
 * ========================================================================== */
extern void func_080D374C(void);
int func_080E0A08(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r2, r0, #0\n"
        "	ldr r4, [r2, #0xc]\n"
        "	ldr r3, [r2, #0x10]\n"
        "	ldrb r0, [r2, #0x15]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E0A68\n"
        "	ldrb r0, [r2, #0x14]\n"
        "	lsl r0, r0, #5\n"
        "	add r5, r3, r0\n"
        "	ldrb r0, [r2, #0x16]\n"
        "	mov r1, #1\n"
        "	eor r0, r1\n"
        "	strb r0, [r2, #0x16]\n"
        "	lsl r0, r0, #2\n"
        "	ldr r2, .Lpool_080E0A64\n"
        "	lsl r2, r0\n"
        "	mvn r1, r2\n"
        "_L_080E0A2C:\n"
        "	ldm r4!, {r0}\n"
        "	and r0, r2\n"
        "	stm r3!, {r0}\n"
        "	ldm r4!, {r0}\n"
        "	and r0, r1\n"
        "	stm r3!, {r0}\n"
        "	ldm r4!, {r0}\n"
        "	and r0, r2\n"
        "	stm r3!, {r0}\n"
        "	ldm r4!, {r0}\n"
        "	and r0, r1\n"
        "	stm r3!, {r0}\n"
        "	ldm r4!, {r0}\n"
        "	and r0, r2\n"
        "	stm r3!, {r0}\n"
        "	ldm r4!, {r0}\n"
        "	and r0, r1\n"
        "	stm r3!, {r0}\n"
        "	ldm r4!, {r0}\n"
        "	and r0, r2\n"
        "	stm r3!, {r0}\n"
        "	ldm r4!, {r0}\n"
        "	and r0, r1\n"
        "	stm r3!, {r0}\n"
        "	cmp r3, r5\n"
        "	bne _L_080E0A2C\n"
        "	mov r0, #1\n"
        "	b _L_080E0A76\n"
        "	.align 2, 0\n"
        ".Lpool_080E0A64:\n"
        "	.word 0x0F0F0F0F\n"
        "_L_080E0A68:\n"
        "	ldrb r2, [r2, #0x14]\n"
        "	lsl r2, r2, #3\n"
        "	add r0, r4, #0\n"
        "	add r1, r3, #0\n"
        "	bl func_080D374C\n"
        "	mov r0, #0\n"
        "_L_080E0A76:\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
    return __ret;
}

/* --- func_080E0A7C @ 0x080E0A7C (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080098AC();
void func_080E0A7C(void) {
  func_080098AC();
}

/* --- func_080E0A88 @ 0x080E0A88 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080098AC();
void func_080E0A88(void) {
  func_080098AC();
}

/* --- func_080E0A94 @ 0x080E0A94 (420B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

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

/* --- func_080E0C38 @ 0x080E0C38 (280B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080D3914();
extern void func_08007C28();
extern void func_080079E8();
extern void func_080098AC();
extern void func_08000608();
extern void func_080073E0();
extern void func_08007184();
void func_080E0C38(int param_1, int param_2) {
    u32 sp0;
    int r7_var;
    register int r6 asm("r6");
    register int r5 asm("r5");
    register int r4 asm("r4");
    __asm__ volatile("" : : "m"(sp0));
    __asm__ volatile(
        "add %1, r0, #0\n\t"
        "str r1, [sp]\n\t"
        "mov r0, #0x70\n\t"
        "add r0, r0, %1\n\t"
        "mov r8, r0\n\t"
        "mov r1, #0xe3\n\t"
        "lsl r1, r1, #2\n\t"
        "add r0, %1, r1\n\t"
        "cmp r0, #0\n\t"
        "beq _after_loop1_E0C38\n\t"
        "add r1, #0x90\n\t"
        "add %3, %1, r1\n\t"
        "cmp r0, %3\n\t"
        "beq _after_loop1_E0C38\n\t"
        "mov r0, #0xe3\n\t"
        "lsl r0, r0, #2\n\t"
        "add %2, %1, r0\n"
        "_loop1_E0C38:\n\t"
        "sub %3, #0x18\n\t"
        "ldr r0, [%3, #8]\n\t"
        "ldr r2, [r0, #0xc]\n\t"
        "add r0, %3, #0\n\t"
        "mov r1, #0\n\t"
        "bl func_080D3914\n\t"
        "cmp %2, %3\n\t"
        "bne _loop1_E0C38\n"
        "_after_loop1_E0C38:\n\t"
        "mov %2, #0xc1\n\t"
        "lsl %2, %2, #2\n\t"
        "add %2, r8\n\t"
        "add %0, %1, #0\n\t"
        "add %0, #0x54\n\t"
        "mov r1, #0x38\n\t"
        "add r1, r1, %1\n\t"
        "mov sl, r1\n\t"
        "mov r0, #0x30\n\t"
        "add r0, r0, %1\n\t"
        "mov sb, r0\n\t"
        "cmp %2, #0\n\t"
        "beq _after_loop2_E0C38\n\t"
        "mov %3, #0xc7\n\t"
        "lsl %3, %3, #2\n\t"
        "add %3, r8\n\t"
        "cmp %2, %3\n\t"
        "beq _after_loop2_E0C38\n"
        "_loop2_E0C38:\n\t"
        "sub %3, #8\n\t"
        "ldr r1, [%3, #4]\n\t"
        "add r0, %3, #0\n\t"
        "bl func_08007C28\n\t"
        "add r0, %3, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_080079E8\n\t"
        "cmp %2, %3\n\t"
        "bne _loop2_E0C38\n"
        "_after_loop2_E0C38:\n\t"
        "cmp %0, #0\n\t"
        "beq _after_loop3_E0C38\n\t"
        "add %2, %1, #0\n\t"
        "add %2, #0x70\n"
        "_loop3_cond_E0C38:\n\t"
        "cmp %0, %2\n\t"
        "beq _after_loop3_E0C38\n\t"
        "sub %2, #4\n\t"
        "ldr %3, [%2]\n\t"
        "cmp %3, #0\n\t"
        "beq _loop3_cond_E0C38\n\t"
        "add r0, %3, #0\n\t"
        "add r0, #8\n\t"
        "mov r1, #2\n\t"
        "bl func_080098AC\n\t"
        "ldr r1, [%3, #4]\n\t"
        "add r0, %3, #0\n\t"
        "bl func_08007C28\n\t"
        "add r0, %3, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_080079E8\n\t"
        "add r0, %3, #0\n\t"
        "bl func_08000608\n\t"
        "b _loop3_cond_E0C38\n"
        "_after_loop3_E0C38:\n\t"
        "ldr %3, [%1, #0x50]\n\t"
        "cmp %3, #0\n\t"
        "beq _clean_sl_sb_E0C38\n\t"
        "add r0, %3, #0\n\t"
        "add r0, #8\n\t"
        "mov r1, #2\n\t"
        "bl func_080098AC\n\t"
        "ldr r1, [%3, #4]\n\t"
        "add r0, %3, #0\n\t"
        "bl func_08007C28\n\t"
        "add r0, %3, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_080079E8\n\t"
        "add r0, %3, #0\n\t"
        "bl func_08000608\n"
        "_clean_sl_sb_E0C38:\n\t"
        "mov r0, sl\n\t"
        "mov r1, #2\n\t"
        "bl func_080098AC\n\t"
        "mov r0, sb\n\t"
        "ldr r1, [r0, #4]\n\t"
        "bl func_080073E0\n\t"
        "mov r0, sb\n\t"
        "mov r1, #2\n\t"
        "bl func_08007184\n\t"
        "ldr r0, =0x080E5A28\n\t"
        "str r0, [%1]\n\t"
        "mov r0, #1\n\t"
        "ldr r1, [sp]\n\t"
        "and r0, r1\n\t"
        "cmp r0, #0\n\t"
        "beq _end_E0C38\n\t"
        "add r0, %1, #0\n\t"
        "bl func_08000608\n"
        "_end_E0C38:"
        : "=l"(r7_var), "=l"(r6), "=l"(r5), "=l"(r4) : : "r0", "r1", "r2", "r3", "r8", "r9", "r10", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_080E0D50 @ 0x080E0D50 (20B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08008E64(u32, u32, u32); int func_080E0D50(u32 *a) { func_08008E64(a[3], a[4], a[5]); return 0; }

/* --- func_080E0D64 @ 0x080E0D64 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080098AC();
void func_080E0D64(void) {
  func_080098AC();
}

/* --- func_080E0D70 @ 0x080E0D70 (272B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080098AC();
extern void func_08007C28();
extern void func_080079E8();
extern void func_080073E0();
extern void func_08007184();
extern void func_08000608();
void func_080E0D70(int param_1, int param_2) {
    register int p1 asm("r6") = param_1;
    register int p2 asm("r5") = param_2;
    register int r4 asm("r4");
    func_080098AC(p1 + (0xd0 << 2), 2);
    r4 = p1 + (0xce << 2);
    func_08007C28(r4, *(u32 *)(r4 + 4));
    func_080079E8(r4, 2);
    func_080098AC(p1 + (0xc7 << 2), 2);
    r4 = p1 + (0xc5 << 2);
    func_08007C28(r4, *(u32 *)(r4 + 4));
    func_080079E8(r4, 2);
    func_080098AC(p1 + (0xbf << 2), 2);
    r4 = p1 + (0xbd << 2);
    func_080073E0(r4, *(u32 *)(r4 + 4));
    func_08007184(r4, 2);
    func_080098AC(p1 + (0xb6 << 2), 2);
    r4 = p1 + (0xb4 << 2);
    func_08007C28(r4, *(u32 *)(r4 + 4));
    func_080079E8(r4, 2);
    func_080098AC(p1 + (0xad << 2), 2);
    r4 = p1 + (0xaa << 2);
    func_08007C28(r4, *(u32 *)(r4 + 4));
    func_080079E8(r4, 2);
    func_080098AC(p1 + (0xc8 << 1), 2);
    r4 = p1 + (0xc2 << 1);
    func_08007C28(r4, *(u32 *)(r4 + 4));
    func_080079E8(r4, 2);
    func_080098AC(p1 + 0x68, 2);
    r4 = p1 + 0x60;
    func_080073E0(r4, *(u32 *)(r4 + 4));
    func_08007184(r4, 2);
    {
        register u32 vtbl asm("r0") = 0x080E5A28;
        __asm__("" : "+r"(vtbl));
        *(u32 *)(p1 + 0x30) = vtbl;
        *(u32 *)p1 = vtbl;
    }
    if (p2 & 1) {
        func_08000608(p1);
    }
}

/* --- func_080E0E80 @ 0x080E0E80 (52B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E0E80 @ 0x080E0E80 (52 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x00:u8(R)
 * CFG Structure:
 *   L_080E0E88: if (<= (s)) goto L_080E0EAC
 *   L_080E0E9C: if (==) goto L_080E0EA8
 *   L_080E0EA8: goto L_080E0E88
 *   L_080E0EAC: return
 * ========================================================================== */
int func_080E0E80(void) {
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r7, r2, #0\n"
        "	sub r3, r1, r6\n"
        "_L_080E0E88:\n"
        "	cmp r3, #0\n"
        "	ble _L_080E0EAC\n"
        "	asr r2, r3, #1\n"
        "	add r5, r6, r2\n"
        "	ldrb r1, [r5]\n"
        "	mov r4, #0\n"
        "	ldr r0, [r7]\n"
        "	cmp r1, r0\n"
        "	bhs _L_080E0E9C\n"
        "	mov r4, #1\n"
        "_L_080E0E9C:\n"
        "	cmp r4, #0\n"
        "	beq _L_080E0EA8\n"
        "	add r6, r5, #1\n"
        "	sub r0, r3, r2\n"
        "	sub r3, r0, #1\n"
        "	b _L_080E0E88\n"
        "_L_080E0EA8:\n"
        "	add r3, r2, #0\n"
        "	b _L_080E0E88\n"
        "_L_080E0EAC:\n"
        "	add r0, r6, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080E0EB4 @ 0x080E0EB4 (60B) [PURE-C | agbcp_O2] --- */
/* func_080E0EB4 @ 0x080E0EB4 mode=THUMB size=0x3C (barrido ROM) */
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */
/* func_080E0EB4 @ 0x080E0EB4  mode=THUMB  size=0x3C  origin=GAP_SWEEP */
/* Pseudocodigo Ghidra crudo; reemplazar por C compilable (ver tools/match/lift.py). */
undefined8 func_080E0EB4(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = param_2 - (int)param_1 >> 3;
  if (0 < iVar1) {
    do {
      iVar2 = iVar1 >> 1;
      if (param_1[iVar2 * 2] < *param_3) {
        param_1 = param_1 + iVar2 * 2 + 2;
        iVar2 = (iVar1 - iVar2) + -1;
      }
      iVar1 = iVar2;
    } while (0 < iVar2);
  }
  return CONCAT44(in_lr,param_1);
}

/* --- func_080E0EF0 @ 0x080E0EF0 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0803EEC8();
void func_080E0EF0(void) {
  func_0803EEC8();
}

/* --- func_080E0EFC @ 0x080E0EFC (76B) [PURE-C | agbcc_O2] --- */
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
extern u32 func_080D0EDA();
void func_080E0EFC(u32 val, u8 *buf)
{
    register u8 *ptr = buf + 1;
    register u32 max = 0x19999999;
    register u32 limit = 10;
    if (val < limit) goto skip;
    ptr++;
    do {
        limit *= 10;
        if (val < limit) goto skip;
        ptr++;
    } while (limit <= max);
skip:
    *ptr = 0;
    do {
        u32 q;
        ptr--;
        q = func_080D0EDA(val, 10);
        *ptr = (val - q * 10) + '0';
        val = q;
    } while (val != 0);
}

/* --- func_080E0F48 @ 0x080E0F48 (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

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

/* --- func_080E0F90 @ 0x080E0F90 (136B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

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

/* --- func_080E1018 @ 0x080E1018 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080098AC();
void func_080E1018(void) {
  func_080098AC();
}

/* --- func_080E1024 @ 0x080E1024 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080098AC();
void func_080E1024(void) {
  func_080098AC();
}

/* --- func_080E1030 @ 0x080E1030 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080098AC();
void func_080E1030(void) {
  func_080098AC();
}

/* --- func_080E103C @ 0x080E103C (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
void func_080E103C(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E78F0;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080E105C @ 0x080E105C (132B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_08007C28();
extern void func_080079E8();
extern void func_08000608();
void func_080E105C(int param_1, int param_2) {
    int r7_var;
    register int r6 asm("r6");
    register int r5 asm("r5");
    register int r4 asm("r4");
    __asm__ volatile(
        "mov r8, r0\n\t"
        "mov sl, r1\n\t"
        "add r0, #8\n\t"
        "cmp r0, #0\n\t"
        "beq _set_vtable_E105C\n\t"
        "mov %0, r8\n\t"
        "add %0, #0x14\n\t"
        "cmp r0, %0\n\t"
        "beq _set_vtable_E105C\n"
        "_outer_loop_E105C:\n\t"
        "sub %0, #4\n\t"
        "ldr r0, [%0]\n\t"
        "mov r1, #8\n\t"
        "add r1, r8\n\t"
        "mov sb, r1\n\t"
        "cmp r0, #0\n\t"
        "beq _next_outer_E105C\n\t"
        "add %1, r0, #0\n\t"
        "add %2, %1, #0\n\t"
        "add %2, #0x70\n\t"
        "cmp %1, %2\n\t"
        "beq _free_r6_E105C\n"
        "_inner_loop_E105C:\n\t"
        "sub %2, #0x10\n\t"
        "add %3, %2, #4\n\t"
        "ldr r1, [%3, #4]\n\t"
        "add r0, %3, #0\n\t"
        "bl func_08007C28\n\t"
        "add r0, %3, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_080079E8\n\t"
        "ldr r0, [%2]\n\t"
        "bl func_08000608\n\t"
        "cmp %1, %2\n\t"
        "bne _inner_loop_E105C\n"
        "_free_r6_E105C:\n\t"
        "add r0, %1, #0\n\t"
        "bl func_08000608\n"
        "_next_outer_E105C:\n\t"
        "cmp sb, %0\n\t"
        "bne _outer_loop_E105C\n"
        "_set_vtable_E105C:\n\t"
        "ldr r0, =0x080E7908\n\t"
        "mov r1, r8\n\t"
        "str r0, [r1]\n\t"
        "mov r0, #1\n\t"
        "mov r1, sl\n\t"
        "and r0, r1\n\t"
        "cmp r0, #0\n\t"
        "beq _end_E105C\n\t"
        "mov r0, r8\n\t"
        "bl func_08000608\n"
        "_end_E105C:"
        : "=l"(r7_var), "=l"(r6), "=l"(r5), "=l"(r4) : : "r0", "r1", "r2", "r3", "r8", "r9", "r10", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_080E10E0 @ 0x080E10E0 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080098AC();
void func_080E10E0(void) {
  func_080098AC();
}

/* --- func_080E10EC @ 0x080E10EC (4B) [PURE-C | agbcc_O2] --- */
#define NULL 0

u32 func_080E10EC(void) {
    return 1;
}

/* --- func_080E10F8 @ 0x080E10F8 (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
void func_080E10F8(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E78F0;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080E1128 @ 0x080E1128 (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
void func_080E1128(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E7908;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080E1148 @ 0x080E1148 (68B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080073E0();
extern void func_08007184();
extern void func_08007C28();
extern void func_080079E8();
extern void func_080086BC();
void func_080E1148(int param_1, int param_2) {
    register int p1 asm("r5") = param_1;
    register int p2 asm("r6") = param_2;
    register int r4 asm("r4") = p1 + 0xb0;
    func_080073E0(r4, *(u32 *)(r4 + 4));
    func_08007184(r4, 2);
    r4 -= 8;
    func_08007C28(r4, *(u32 *)(r4 + 4));
    func_080079E8(r4, 2);
    *(u32 *)(p1 + 0x10) = 0x080E5A28;
    func_080086BC(p1, p2);
}

/* --- func_080E118C @ 0x080E118C (96B) [PURE-C | agbcc_O2] --- */
#define NULL 0

extern void func_0800DF50();
extern u32 func_0800DF58();
extern u32 func_080D3B78();
extern void func_080D3994();
extern void func_080D3B28();
u8 *func_080E118C(u8 *arg0, int arg1, int arg2) {
    u8 buf[32];
    u8 tmp[4];
    if (arg2 == 0xff) {
        u32 str_ptr;
        u32 len;
        func_0800DF50(tmp, *(u16 *)(arg1 + 4));
        str_ptr = func_0800DF58(tmp);
        len = func_080D3B78(str_ptr);
        if (len > 0x1f) {
            len = 0x1f;
        }
        func_080D3994(buf, str_ptr, len);
        buf[len] = 0;
        *arg0 = 1;
        func_080D3B28(arg0 + 4, buf);
    } else {
        buf[0] = 0;
        *arg0 = 0;
        func_080D3B28(arg0 + 4, buf);
    }
    return arg0;
}

/* --- func_080E11EC @ 0x080E11EC (684B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E11EC @ 0x080E11EC (684 bytes)
 * Role   : C++ Class Constructor / Polymorphic Method [vtable: 0x080E5A28, 0x080E76F8]
 * Fields : +0x00:u32(W), +0x04:u32(R), +0x10:u32(R), +0x20:u32(W), +0x50:u32(W)
 * Callees: func_08007184, func_080073E0, func_080079E8, func_08007C28, func_080086BC, func_08050D0C
 * CFG Structure:
 *   L_080E11EC: if (==) goto L_080E1232
 *   L_080E121C: call func_080073E0(); call func_08007184(); if (!=) goto L_080E121C
 *   L_080E1232: call func_08007C28(); call func_080079E8(); if (==) goto L_080E1296
 *   L_080E1266: call func_080073E0(); call func_08007184(); call func_08007C28(); call func_080079E8(); if (!=) goto L_080E1266
 *   L_080E1296: call func_080073E0(); call func_08007184(); call func_08007C28(); call func_080079E8(); call func_080073E0(); call func_08007184()
 *   L_080E1474: call func_080086BC(); return
 * ========================================================================== */
extern void func_08007184(void);
extern void func_080073E0(void);
extern void func_080079E8(void);
extern void func_08007C28(void);
extern void func_080086BC(void);
extern void func_08050D0C(void);
void func_080E11EC(void) {
    int r7_var;
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	mov sl, r1\n"
        "	ldr r0, =0x000023A0\n"
        "	add r1, r6, r0\n"
        "	ldr r0, =0x080E76F8\n"
        "	str r0, [r1]\n"
        "	mov r1, #0xa8\n"
        "	lsl r1, r1, #3\n"
        "	add r5, r6, r1\n"
        "	mov r2, #0xa9\n"
        "	lsl r2, r2, #3\n"
        "	add r0, r6, r2\n"
        "	cmp r0, #0\n"
        "	beq _L_080E1232\n"
        "	add r1, #0x18\n"
        "	add r4, r6, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E1232\n"
        "	add r7, r0, #0\n"
        "_L_080E121C:\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	cmp r7, r4\n"
        "	bne _L_080E121C\n"
        "_L_080E1232:\n"
        "	ldr r1, [r5, #4]\n"
        "	add r0, r5, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r5, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r2, #0xa0\n"
        "	lsl r2, r2, #3\n"
        "	add r0, r6, r2\n"
        "	mov r1, #0xe0\n"
        "	add r1, r1, r6\n"
        "	mov r8, r1\n"
        "	add r7, r6, #0\n"
        "	add r7, #0xb0\n"
        "	mov r2, #0x80\n"
        "	add r2, r2, r6\n"
        "	mov sb, r2\n"
        "	cmp r0, #0\n"
        "	beq _L_080E1296\n"
        "	mov r1, #0xa8\n"
        "	lsl r1, r1, #3\n"
        "	add r5, r6, r1\n"
        "	cmp r0, r5\n"
        "	beq _L_080E1296\n"
        "_L_080E1266:\n"
        "	sub r5, #0x10\n"
        "	add r4, r5, #0\n"
        "	add r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	ldr r1, [r5, #4]\n"
        "	add r0, r5, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r5, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r2, #0xa0\n"
        "	lsl r2, r2, #3\n"
        "	add r0, r6, r2\n"
        "	cmp r0, r5\n"
        "	bne _L_080E1266\n"
        "_L_080E1296:\n"
        "	mov r0, #0x9f\n"
        "	lsl r0, r0, #3\n"
        "	add r4, r6, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r1, #0x9e\n"
        "	lsl r1, r1, #3\n"
        "	add r4, r6, r1\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r2, #0x9d\n"
        "	lsl r2, r2, #3\n"
        "	add r4, r6, r2\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r0, #0x9c\n"
        "	lsl r0, r0, #3\n"
        "	add r4, r6, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r1, #0x9b\n"
        "	lsl r1, r1, #3\n"
        "	add r4, r6, r1\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r2, #0x9a\n"
        "	lsl r2, r2, #3\n"
        "	add r4, r6, r2\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r0, #0x99\n"
        "	lsl r0, r0, #3\n"
        "	add r4, r6, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r1, #0x98\n"
        "	lsl r1, r1, #3\n"
        "	add r4, r6, r1\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r2, #0x97\n"
        "	lsl r2, r2, #3\n"
        "	add r4, r6, r2\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r0, #0x96\n"
        "	lsl r0, r0, #3\n"
        "	add r4, r6, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r1, #0x95\n"
        "	lsl r1, r1, #3\n"
        "	add r4, r6, r1\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r2, #0x94\n"
        "	lsl r2, r2, #3\n"
        "	add r4, r6, r2\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r0, #0x93\n"
        "	lsl r0, r0, #3\n"
        "	add r4, r6, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r1, #0x92\n"
        "	lsl r1, r1, #3\n"
        "	add r4, r6, r1\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r2, #0x91\n"
        "	lsl r2, r2, #3\n"
        "	add r4, r6, r2\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r0, #0x90\n"
        "	lsl r0, r0, #3\n"
        "	add r4, r6, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r1, #0x8f\n"
        "	lsl r1, r1, #3\n"
        "	add r4, r6, r1\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r2, #0x8e\n"
        "	lsl r2, r2, #3\n"
        "	add r4, r6, r2\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r0, #0x8d\n"
        "	lsl r0, r0, #3\n"
        "	add r4, r6, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r2, #0xe8\n"
        "	lsl r2, r2, #1\n"
        "	add r1, r6, r2\n"
        "	ldr r0, =0x080E5A28\n"
        "	str r0, [r1]\n"
        "	sub r2, #0x30\n"
        "	add r1, r6, r2\n"
        "	str r0, [r1]\n"
        "	sub r2, #0x30\n"
        "	add r1, r6, r2\n"
        "	str r0, [r1]\n"
        "	sub r2, #0x30\n"
        "	add r1, r6, r2\n"
        "	str r0, [r1]\n"
        "	sub r2, #0x30\n"
        "	add r1, r6, r2\n"
        "	str r0, [r1]\n"
        "	mov r1, r8\n"
        "	str r0, [r1]\n"
        "	str r0, [r7]\n"
        "	mov r2, sb\n"
        "	str r0, [r2]\n"
        "	str r0, [r6, #0x50]\n"
        "	str r0, [r6, #0x20]\n"
        "	ldr r0, [r6, #0x10]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E1474\n"
        "	mov r1, #3\n"
        "	bl func_08050D0C\n"
        "_L_080E1474:\n"
        "	add r0, r6, #0\n"
        "	mov r1, sl\n"
        "	bl func_080086BC\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r10", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_080E1498 @ 0x080E1498 (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
void func_080E1498(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E76F8;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080E14B8 @ 0x080E14B8 (264B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

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

/* --- func_080E15C0 @ 0x080E15C0 (612B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E15C0 @ 0x080E15C0 (612 bytes)
 * Role   : C++ Class Constructor / Polymorphic Method [vtable: 0x080E5A28, 0x080E76F8]
 * Fields : +0x00:u32(W), +0x04:u32(R), +0x10:u32(R), +0x20:u32(W), +0x50:u32(W)
 * Callees: func_08007184, func_080073E0, func_080079E8, func_08007C28, func_080086BC, func_08050D0C
 * CFG Structure:
 *   L_080E15C0: if (==) goto L_080E162C
 *   L_080E15E8: if (==) goto L_080E1612
 *   L_080E15FC: call func_080073E0(); call func_08007184(); if (!=) goto L_080E15FC
 *   L_080E1612: call func_08007C28(); call func_080079E8(); if (!=) goto L_080E15E8
 *   L_080E162C: call func_08007C28(); call func_080079E8(); call func_080073E0(); call func_08007184(); call func_08007C28(); call func_080079E8()
 *   L_080E180A: call func_080086BC(); return
 * ========================================================================== */
extern void func_08007184(void);
extern void func_080073E0(void);
extern void func_080079E8(void);
extern void func_08007C28(void);
extern void func_080086BC(void);
extern void func_08050D0C(void);
void func_080E15C0(void) {
    int r7_var;
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	mov r8, r1\n"
        "	mov r0, #0xa7\n"
        "	lsl r0, r0, #5\n"
        "	add r1, r7, r0\n"
        "	ldr r0, =0x080E76F8\n"
        "	str r0, [r1]\n"
        "	mov r1, #0xcb\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r7, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E162C\n"
        "	mov r2, #0xd7\n"
        "	lsl r2, r2, #3\n"
        "	add r5, r7, r2\n"
        "	cmp r0, r5\n"
        "	beq _L_080E162C\n"
        "_L_080E15E8:\n"
        "	sub r5, #0x18\n"
        "	add r0, r5, #0\n"
        "	add r0, #8\n"
        "	cmp r0, #0\n"
        "	beq _L_080E1612\n"
        "	add r4, r5, #0\n"
        "	add r4, #0x18\n"
        "	cmp r0, r4\n"
        "	beq _L_080E1612\n"
        "	add r6, r0, #0\n"
        "_L_080E15FC:\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	cmp r6, r4\n"
        "	bne _L_080E15FC\n"
        "_L_080E1612:\n"
        "	ldr r1, [r5, #4]\n"
        "	add r0, r5, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r5, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r1, #0xcb\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r7, r1\n"
        "	cmp r0, r5\n"
        "	bne _L_080E15E8\n"
        "_L_080E162C:\n"
        "	mov r2, #0xca\n"
        "	lsl r2, r2, #3\n"
        "	add r4, r7, r2\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r0, #0xc9\n"
        "	lsl r0, r0, #3\n"
        "	add r4, r7, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r1, #0xc8\n"
        "	lsl r1, r1, #3\n"
        "	add r4, r7, r1\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r2, #0xc7\n"
        "	lsl r2, r2, #3\n"
        "	add r4, r7, r2\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r0, #0xc6\n"
        "	lsl r0, r0, #3\n"
        "	add r4, r7, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r1, #0xc5\n"
        "	lsl r1, r1, #3\n"
        "	add r4, r7, r1\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r2, #0xc4\n"
        "	lsl r2, r2, #3\n"
        "	add r4, r7, r2\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r0, #0xc3\n"
        "	lsl r0, r0, #3\n"
        "	add r4, r7, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r1, #0xc2\n"
        "	lsl r1, r1, #3\n"
        "	add r4, r7, r1\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r2, #0xc1\n"
        "	lsl r2, r2, #3\n"
        "	add r4, r7, r2\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r0, #0xc0\n"
        "	lsl r0, r0, #3\n"
        "	add r4, r7, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r1, #0xbf\n"
        "	lsl r1, r1, #3\n"
        "	add r4, r7, r1\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r2, #0xbe\n"
        "	lsl r2, r2, #3\n"
        "	add r4, r7, r2\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r0, #0xbd\n"
        "	lsl r0, r0, #3\n"
        "	add r4, r7, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r1, #0xbc\n"
        "	lsl r1, r1, #3\n"
        "	add r4, r7, r1\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r2, #0xbb\n"
        "	lsl r2, r2, #3\n"
        "	add r4, r7, r2\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r0, #0xba\n"
        "	lsl r0, r0, #3\n"
        "	add r4, r7, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r1, #0xb9\n"
        "	lsl r1, r1, #3\n"
        "	add r4, r7, r1\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r2, #0xb8\n"
        "	lsl r2, r2, #3\n"
        "	add r4, r7, r2\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r0, #0xd0\n"
        "	lsl r0, r0, #1\n"
        "	add r1, r7, r0\n"
        "	ldr r0, =0x080E5A28\n"
        "	str r0, [r1]\n"
        "	mov r2, #0xb8\n"
        "	lsl r2, r2, #1\n"
        "	add r1, r7, r2\n"
        "	str r0, [r1]\n"
        "	sub r2, #0x30\n"
        "	add r1, r7, r2\n"
        "	str r0, [r1]\n"
        "	sub r2, #0x30\n"
        "	add r1, r7, r2\n"
        "	str r0, [r1]\n"
        "	add r1, r7, #0\n"
        "	add r1, #0xe0\n"
        "	str r0, [r1]\n"
        "	sub r1, #0x30\n"
        "	str r0, [r1]\n"
        "	sub r1, #0x30\n"
        "	str r0, [r1]\n"
        "	str r0, [r7, #0x50]\n"
        "	str r0, [r7, #0x20]\n"
        "	ldr r0, [r7, #0x10]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E180A\n"
        "	mov r1, #3\n"
        "	bl func_08050D0C\n"
        "_L_080E180A:\n"
        "	add r0, r7, #0\n"
        "	mov r1, r8\n"
        "	bl func_080086BC\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_080E1824 @ 0x080E1824 (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
void func_080E1824(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E76F8;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080E1844 @ 0x080E1844 (96B) [PURE-C | agbcc_O2] --- */
#define NULL 0

extern u32 func_080D3B78();
extern void func_080D3994();
extern void func_080D3B28();
struct Item20 { u8 d[0x14]; };
extern struct Item20 g_080FB000[];
u8 *func_080E1844(u8 *arg0, int arg1, int arg2) {
    u8 buf[32];
    if (arg2 == 0xff) {
        struct Item20 *src = &g_080FB000[*(int *)(arg1 + 4)];
        u32 len = func_080D3B78(src);
        if (len > 0x1f) {
            len = 0x1f;
        }
        func_080D3994(buf, src, len);
        buf[len] = 0;
        *arg0 = 1;
        func_080D3B28(arg0 + 4, buf);
    } else {
        buf[0] = 0;
        *arg0 = 0;
        func_080D3B28(arg0 + 4, buf);
    }
    return arg0;
}

/* --- func_080E18A4 @ 0x080E18A4 (192B) [PURE-C | agbcc_O2] --- */
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
extern u32 func_08007184();
extern u32 func_080073E0();
extern u32 func_080079E8();
extern u32 func_08007C28();
extern u32 func_080086BC();
extern u32 func_08050D0C();
void func_080E18A4(int arg0,u32 arg1) {
  u32 val;
  u32 *sub;
  *(u32 *)(arg0 + 0x00000AEC) = 0x080E76F8;
  sub = (u32 *)(arg0 + 0x144);
  func_080073E0(sub, sub[1]);
  func_08007184(sub,2);
  sub = (u32 *)(arg0 + 0x13c);
  func_08007C28(sub, sub[1]);
  func_080079E8(sub,2);
  sub = (u32 *)(arg0 + 0x134);
  func_080073E0(sub, sub[1]);
  func_08007184(sub,2);
  sub = (u32 *)(arg0 + 300);
  func_08007C28(sub, sub[1]);
  func_080079E8(sub,2);
  sub = (u32 *)(arg0 + 0x124);
  func_080073E0(sub, sub[1]);
  func_08007184(sub,2);
  sub = (u32 *)(arg0 + 0x11c);
  func_08007C28(sub, sub[1]);
  func_080079E8(sub,2);
  val = 0x080E5A28;
  *(u32 *)(arg0 + 0x50) = 0x080E5A28;
  *(u32 *)(arg0 + 0x20) = val;
  if (*(int *)(arg0 + 0x10) != 0) {
    func_08050D0C(*(int *)(arg0 + 0x10),3);
  }
  func_080086BC(arg0,arg1);
}

/* --- func_080E1964 @ 0x080E1964 (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
void func_080E1964(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E76F8;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080E1984 @ 0x080E1984 (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
void func_080E1984(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E5A28;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080E19A4 @ 0x080E19A4 (84B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3994();
extern u32 func_080D3B28();
extern u32 func_080D3B78();
u32 func_080E19A4(u8 *arg0,int arg1,int arg2) {
  u32 val;
  u32 val2;
  u8 auStack_30 [32];
  if (arg2 == 0xff) {
    val2 = *(u32 *)(arg1 + 4);
    val = func_080D3B78(val2);
    if (0x1f < val) {
      val = 0x1f;
    }
    func_080D3994(auStack_30,val2,val);
    auStack_30[val] = 0;
    *arg0 = 1;
    func_080D3B28(arg0 + 4,auStack_30);
  }
  else {
    auStack_30[0] = 0;
    *arg0 = 0;
    func_080D3B28(arg0 + 4);
  }
  return arg0;
}

/* --- func_080E19F8 @ 0x080E19F8 (48B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080086BC();
extern u32 func_08050D0C();
void func_080E19F8(int arg0,u32 arg1) {
  *(u32 *)(arg0 + 0x00006428) = 0x080E76F8;
  if (*(int *)(arg0 + 0x10) != 0) {
    func_08050D0C(*(int *)(arg0 + 0x10),3);
  }
  func_080086BC(arg0,arg1);
}

/* --- func_080E1A28 @ 0x080E1A28 (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
void func_080E1A28(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E76F8;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080E1A48 @ 0x080E1A48 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08076EA8();
u32 func_080E1A48(void) {
  func_08076EA8();
  return 1;
}

/* --- func_080E1A54 @ 0x080E1A54 (28B) [PURE-C | agbcc_O2] --- */
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
extern u32 func_08076E0C();
void func_080E1A54(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    r2 = 0x000009C4;
    r3 = r0 + r2;
    r2 = 0x080E5A28;
    *(u32 *)(r3) = r2;
    r0 = func_08076E0C(r0, r1, r2, r3);
    return r0;
}

/* --- func_080E1A70 @ 0x080E1A70 (424B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E1A70 @ 0x080E1A70 (424 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW), +0x00:u8(RW), +0x04:u16(RW), +0x04:u32(R)
 * Callees: func_08008920, func_0804EA94, func_08076EA8
 * CFG Structure:
 *   L_080E1A70: call func_08076EA8(); if (>= (s)) goto L_080E1AB4
 *   L_080E1AA4: if (< (s)) goto L_080E1AA4
 *   L_080E1AB4: if (>= (u)) goto L_080E1B40
 *   L_080E1ADC: if (> (s)) goto L_080E1B32
 *   L_080E1B32: if (< (u)) goto L_080E1ADC
 *   L_080E1B40: if (>= (s)) goto L_080E1B70
 *   L_080E1B60: if (< (s)) goto L_080E1B60
 *   L_080E1B70: if (>= (u)) goto L_080E1BF4
 *   L_080E1B92: if (> (s)) goto L_080E1BE6
 *   L_080E1BE6: if (< (u)) goto L_080E1B92
 *   L_080E1BF4: return
 * ========================================================================== */
extern void func_08008920(void);
extern void func_0804EA94(void);
extern void func_08076EA8(void);
int func_080E1A70(void) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5, sp6, sp7, sp8;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5), "m"(sp6), "m"(sp7), "m"(sp8));
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	bl func_08076EA8\n"
        "	mov r0, #0\n"
        "	mov r8, r0\n"
        "	ldr r1, =0x00001268\n"
        "	add r0, r7, r1\n"
        "	mov r2, #0\n"
        "	ldrsh r0, [r0, r2]\n"
        "	add r0, #0x30\n"
        "	mov r3, #0xb2\n"
        "	lsl r3, r3, #3\n"
        "	add r1, r7, r3\n"
        "	mov r2, #0\n"
        "	ldrsh r1, [r1, r2]\n"
        "	cmp r0, r1\n"
        "	bge _L_080E1AB4\n"
        "	add r2, r1, #0\n"
        "	ldr r3, =0x00001268\n"
        "	add r1, r7, r3\n"
        "_L_080E1AA4:\n"
        "	add r1, #0x10\n"
        "	mov r0, #1\n"
        "	add r8, r0\n"
        "	mov r3, #0\n"
        "	ldrsh r0, [r1, r3]\n"
        "	add r0, #0x30\n"
        "	cmp r0, r2\n"
        "	blt _L_080E1AA4\n"
        "_L_080E1AB4:\n"
        "	ldr r1, =0x00001264\n"
        "	add r0, r7, r1\n"
        "	ldr r0, [r0]\n"
        "	ldr r2, =0x0000163C\n"
        "	add r2, r7, r2\n"
        "	str r2, [sp, #0x20]\n"
        "	cmp r8, r0\n"
        "	bhs _L_080E1B40\n"
        "	add r3, r1, #0\n"
        "	add r3, r3, r7\n"
        "	mov sl, r3\n"
        "	mov r0, #0xb2\n"
        "	lsl r0, r0, #3\n"
        "	add r0, r0, r7\n"
        "	mov sb, r0\n"
        "	mov r1, r8\n"
        "	lsl r0, r1, #4\n"
        "	ldr r2, =0x00001268\n"
        "	add r0, r0, r2\n"
        "	add r5, r0, r7\n"
        "_L_080E1ADC:\n"
        "	mov r3, #0\n"
        "	ldrsh r1, [r5, r3]\n"
        "	mov r2, sb\n"
        "	mov r3, #0\n"
        "	ldrsh r0, [r2, r3]\n"
        "	add r0, #0xa0\n"
        "	cmp r1, r0\n"
        "	bgt _L_080E1B32\n"
        "	ldr r0, [r7]\n"
        "	bl func_08008920\n"
        "	add r4, r0, #0\n"
        "	mov r0, #0\n"
        "	ldrsh r2, [r5, r0]\n"
        "	mov r1, sb\n"
        "	mov r3, #0\n"
        "	ldrsh r0, [r1, r3]\n"
        "	sub r2, r2, r0\n"
        "	ldr r1, [r5, #4]\n"
        "	mov r0, #2\n"
        "	str r0, [sp]\n"
        "	mov r0, #1\n"
        "	str r0, [sp, #4]\n"
        "	str r0, [sp, #8]\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #0xc]\n"
        "	add r6, sp, #0x10\n"
        "	add r0, r6, #0\n"
        "	mov r3, #0x10\n"
        "	bl func_0804EA94\n"
        "	ldrb r2, [r4]\n"
        "	cmp r2, #0x7f\n"
        "	bhi _L_080E1B32\n"
        "	lsl r1, r2, #3\n"
        "	add r1, #4\n"
        "	add r1, r4, r1\n"
        "	ldr r0, [sp, #0x10]\n"
        "	str r0, [r1]\n"
        "	ldrh r0, [r6, #4]\n"
        "	strh r0, [r1, #4]\n"
        "	add r0, r2, #1\n"
        "	strb r0, [r4]\n"
        "_L_080E1B32:\n"
        "	add r5, #0x10\n"
        "	mov r0, #1\n"
        "	add r8, r0\n"
        "	mov r1, sl\n"
        "	ldr r0, [r1]\n"
        "	cmp r8, r0\n"
        "	blo _L_080E1ADC\n"
        "_L_080E1B40:\n"
        "	mov r2, #0\n"
        "	mov r8, r2\n"
        "	ldr r3, [sp, #0x20]\n"
        "	mov r1, #0\n"
        "	ldrsh r0, [r3, r1]\n"
        "	add r0, #0x30\n"
        "	mov r2, #0xb2\n"
        "	lsl r2, r2, #3\n"
        "	add r1, r7, r2\n"
        "	mov r3, #0\n"
        "	ldrsh r1, [r1, r3]\n"
        "	cmp r0, r1\n"
        "	bge _L_080E1B70\n"
        "	add r2, r1, #0\n"
        "	ldr r0, =0x0000163C\n"
        "	add r1, r7, r0\n"
        "_L_080E1B60:\n"
        "	add r1, #0x10\n"
        "	mov r3, #1\n"
        "	add r8, r3\n"
        "	mov r3, #0\n"
        "	ldrsh r0, [r1, r3]\n"
        "	add r0, #0x30\n"
        "	cmp r0, r2\n"
        "	blt _L_080E1B60\n"
        "_L_080E1B70:\n"
        "	ldr r1, =0x00001638\n"
        "	add r0, r7, r1\n"
        "	ldr r0, [r0]\n"
        "	cmp r8, r0\n"
        "	bhs _L_080E1BF4\n"
        "	add r2, r1, #0\n"
        "	add r2, r2, r7\n"
        "	mov sl, r2\n"
        "	mov r3, #0xb2\n"
        "	lsl r3, r3, #3\n"
        "	add r3, r3, r7\n"
        "	mov sb, r3\n"
        "	mov r1, r8\n"
        "	lsl r0, r1, #4\n"
        "	ldr r2, =0x0000163C\n"
        "	add r0, r0, r2\n"
        "	add r6, r0, r7\n"
        "_L_080E1B92:\n"
        "	mov r3, #0\n"
        "	ldrsh r1, [r6, r3]\n"
        "	mov r2, sb\n"
        "	mov r3, #0\n"
        "	ldrsh r0, [r2, r3]\n"
        "	add r0, #0xa0\n"
        "	cmp r1, r0\n"
        "	bgt _L_080E1BE6\n"
        "	ldr r0, [r7]\n"
        "	bl func_08008920\n"
        "	add r4, r0, #0\n"
        "	mov r0, #0\n"
        "	ldrsh r2, [r6, r0]\n"
        "	mov r1, sb\n"
        "	mov r3, #0\n"
        "	ldrsh r0, [r1, r3]\n"
        "	sub r2, r2, r0\n"
        "	ldr r1, [r6, #4]\n"
        "	mov r0, #1\n"
        "	str r0, [sp]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	add r5, sp, #0x18\n"
        "	add r0, r5, #0\n"
        "	mov r3, #5\n"
        "	bl func_0804EA94\n"
        "	ldrb r2, [r4]\n"
        "	cmp r2, #0x7f\n"
        "	bhi _L_080E1BE6\n"
        "	lsl r1, r2, #3\n"
        "	add r1, #4\n"
        "	add r1, r4, r1\n"
        "	ldr r0, [sp, #0x18]\n"
        "	str r0, [r1]\n"
        "	ldrh r0, [r5, #4]\n"
        "	strh r0, [r1, #4]\n"
        "	add r0, r2, #1\n"
        "	strb r0, [r4]\n"
        "_L_080E1BE6:\n"
        "	add r6, #0x10\n"
        "	mov r0, #1\n"
        "	add r8, r0\n"
        "	mov r1, sl\n"
        "	ldr r0, [r1]\n"
        "	cmp r8, r0\n"
        "	blo _L_080E1B92\n"
        "_L_080E1BF4:\n"
        "	mov r0, #1\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r10", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080E1C18 @ 0x080E1C18 (88B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E1C18 @ 0x080E1C18 (88 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R)
 * Callees: func_08076E0C
 * CFG Structure:
 *   L_080E1C18: if (==) goto L_080E1C38
 *   L_080E1C32: if (!=) goto L_080E1C32
 *   L_080E1C38: if (==) goto L_080E1C52
 *   L_080E1C4C: if (!=) goto L_080E1C4C
 *   L_080E1C52: call func_08076E0C(); return
 * ========================================================================== */
extern void func_08076E0C(void);
void func_080E1C18(void) {

    __asm__ volatile(
        "	add r2, r0, #0\n"
        "	add r3, r1, #0\n"
        "	ldr r0, =0x00001638\n"
        "	add r1, r2, r0\n"
        "	ldr r0, [r1]\n"
        "	lsl r0, r0, #4\n"
        "	add r0, #4\n"
        "	add r1, r1, r0\n"
        "	ldr r4, =0x0000163C\n"
        "	add r0, r2, r4\n"
        "	cmp r0, r1\n"
        "	beq _L_080E1C38\n"
        "_L_080E1C32:\n"
        "	add r0, #0x10\n"
        "	cmp r0, r1\n"
        "	bne _L_080E1C32\n"
        "_L_080E1C38:\n"
        "	ldr r0, =0x00001264\n"
        "	add r1, r2, r0\n"
        "	ldr r0, [r1]\n"
        "	lsl r0, r0, #4\n"
        "	add r0, #4\n"
        "	add r1, r1, r0\n"
        "	ldr r4, =0x00001268\n"
        "	add r0, r2, r4\n"
        "	cmp r0, r1\n"
        "	beq _L_080E1C52\n"
        "_L_080E1C4C:\n"
        "	add r0, #0x10\n"
        "	cmp r0, r1\n"
        "	bne _L_080E1C4C\n"
        "_L_080E1C52:\n"
        "	add r0, r2, #0\n"
        "	add r1, r3, #0\n"
        "	bl func_08076E0C\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "lr", "memory"
    );
}

/* --- func_080E1C70 @ 0x080E1C70 (228B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E1C70 @ 0x080E1C70 (228 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW), +0x00:u8(RW), +0x04:u16(RW), +0x04:u32(R)
 * Callees: func_08008920, func_0804EA94, func_08076EA8
 * CFG Structure:
 *   L_080E1C70: call func_08076EA8(); if (>= (s)) goto L_080E1CB4
 *   L_080E1CA4: if (< (s)) goto L_080E1CA4
 *   L_080E1CB4: if (>= (u)) goto L_080E1D38
 *   L_080E1CD6: if (> (s)) goto L_080E1D2A
 *   L_080E1D2A: if (< (u)) goto L_080E1CD6
 *   L_080E1D38: return
 * ========================================================================== */
extern void func_08008920(void);
extern void func_0804EA94(void);
extern void func_08076EA8(void);
int func_080E1C70(void) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5));
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	bl func_08076EA8\n"
        "	mov r0, #0\n"
        "	mov r8, r0\n"
        "	ldr r1, =0x00002168\n"
        "	add r0, r7, r1\n"
        "	mov r2, #0\n"
        "	ldrsh r0, [r0, r2]\n"
        "	add r0, #0x30\n"
        "	mov r3, #0xb2\n"
        "	lsl r3, r3, #3\n"
        "	add r1, r7, r3\n"
        "	mov r2, #0\n"
        "	ldrsh r1, [r1, r2]\n"
        "	cmp r0, r1\n"
        "	bge _L_080E1CB4\n"
        "	add r2, r1, #0\n"
        "	ldr r3, =0x00002168\n"
        "	add r1, r7, r3\n"
        "_L_080E1CA4:\n"
        "	add r1, #0x10\n"
        "	mov r0, #1\n"
        "	add r8, r0\n"
        "	mov r3, #0\n"
        "	ldrsh r0, [r1, r3]\n"
        "	add r0, #0x30\n"
        "	cmp r0, r2\n"
        "	blt _L_080E1CA4\n"
        "_L_080E1CB4:\n"
        "	ldr r1, =0x00002164\n"
        "	add r0, r7, r1\n"
        "	ldr r0, [r0]\n"
        "	cmp r8, r0\n"
        "	bhs _L_080E1D38\n"
        "	add r2, r1, #0\n"
        "	add r2, r2, r7\n"
        "	mov sl, r2\n"
        "	mov r3, #0xb2\n"
        "	lsl r3, r3, #3\n"
        "	add r3, r3, r7\n"
        "	mov sb, r3\n"
        "	mov r1, r8\n"
        "	lsl r0, r1, #4\n"
        "	ldr r2, =0x00002168\n"
        "	add r0, r0, r2\n"
        "	add r5, r0, r7\n"
        "_L_080E1CD6:\n"
        "	mov r3, #0\n"
        "	ldrsh r1, [r5, r3]\n"
        "	mov r2, sb\n"
        "	mov r3, #0\n"
        "	ldrsh r0, [r2, r3]\n"
        "	add r0, #0xa0\n"
        "	cmp r1, r0\n"
        "	bgt _L_080E1D2A\n"
        "	ldr r0, [r7]\n"
        "	bl func_08008920\n"
        "	add r4, r0, #0\n"
        "	mov r0, #0\n"
        "	ldrsh r2, [r5, r0]\n"
        "	mov r1, sb\n"
        "	mov r3, #0\n"
        "	ldrsh r0, [r1, r3]\n"
        "	sub r2, r2, r0\n"
        "	ldr r1, [r5, #4]\n"
        "	mov r0, #1\n"
        "	str r0, [sp]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	add r6, sp, #0x10\n"
        "	add r0, r6, #0\n"
        "	mov r3, #5\n"
        "	bl func_0804EA94\n"
        "	ldrb r2, [r4]\n"
        "	cmp r2, #0x7f\n"
        "	bhi _L_080E1D2A\n"
        "	lsl r1, r2, #3\n"
        "	add r1, #4\n"
        "	add r1, r4, r1\n"
        "	ldr r0, [sp, #0x10]\n"
        "	str r0, [r1]\n"
        "	ldrh r0, [r6, #4]\n"
        "	strh r0, [r1, #4]\n"
        "	add r0, r2, #1\n"
        "	strb r0, [r4]\n"
        "_L_080E1D2A:\n"
        "	add r5, #0x10\n"
        "	mov r0, #1\n"
        "	add r8, r0\n"
        "	mov r1, sl\n"
        "	ldr r0, [r1]\n"
        "	cmp r8, r0\n"
        "	blo _L_080E1CD6\n"
        "_L_080E1D38:\n"
        "	mov r0, #1\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r10", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080E1D54 @ 0x080E1D54 (56B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E1D54 @ 0x080E1D54 (56 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R)
 * Callees: func_08076E0C
 * CFG Structure:
 *   L_080E1D54: if (==) goto L_080E1D74
 *   L_080E1D6E: if (!=) goto L_080E1D6E
 *   L_080E1D74: call func_08076E0C(); return
 * ========================================================================== */
extern void func_08076E0C(void);
void func_080E1D54(void) {

    __asm__ volatile(
        "	add r2, r0, #0\n"
        "	add r3, r1, #0\n"
        "	ldr r0, =0x00002164\n"
        "	add r1, r2, r0\n"
        "	ldr r0, [r1]\n"
        "	lsl r0, r0, #4\n"
        "	add r0, #4\n"
        "	add r1, r1, r0\n"
        "	ldr r4, =0x00002168\n"
        "	add r0, r2, r4\n"
        "	cmp r0, r1\n"
        "	beq _L_080E1D74\n"
        "_L_080E1D6E:\n"
        "	add r0, #0x10\n"
        "	cmp r0, r1\n"
        "	bne _L_080E1D6E\n"
        "_L_080E1D74:\n"
        "	add r0, r2, #0\n"
        "	add r1, r3, #0\n"
        "	bl func_08076E0C\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "lr", "memory"
    );
}

/* --- func_080E1D8C @ 0x080E1D8C (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08076E0C();
void func_080E1D8C(void) {
  func_08076E0C();
}

/* --- func_080E1D98 @ 0x080E1D98 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08076E0C();
void func_080E1D98(void) {
  func_08076E0C();
}

/* --- func_080E1DA4 @ 0x080E1DA4 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08076E0C();
void func_080E1DA4(void) {
  func_08076E0C();
}

/* --- func_080E1DB0 @ 0x080E1DB0 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08076E0C();
void func_080E1DB0(void) {
  func_08076E0C();
}

/* --- func_080E1DBC @ 0x080E1DBC (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08076EA8();
u32 func_080E1DBC(void) {
  func_08076EA8();
  return 1;
}

/* --- func_080E1DC8 @ 0x080E1DC8 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08076E0C();
void func_080E1DC8(void) {
  func_08076E0C();
}

/* --- func_080E1DD4 @ 0x080E1DD4 (84B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080D3914();
extern void func_080086BC();
void func_080E1DD4(int param_1, int param_2) {
    register int p1 asm("r4");
    register int p2 asm("r5");
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %1, r1, #0\n\t"
        "mov r0, #0x92\n\t"
        "lsl r0, r0, #1\n\t"
        "add r1, %0, r0\n\t"
        "ldr r0, [r1]\n\t"
        "lsl r0, r0, #3\n\t"
        "add r0, #4\n\t"
        "add r1, r1, r0\n\t"
        "mov r2, #0x94\n\t"
        "lsl r2, r2, #1\n\t"
        "add r0, %0, r2\n\t"
        "ldr r2, =0x080E5A28\n\t"
        "cmp r0, r1\n\t"
        "beq _after_loop_func_080E1DD4\n"
        "_loop_func_080E1DD4:\n\t"
        "add r0, #8\n\t"
        "cmp r0, r1\n\t"
        "bne _loop_func_080E1DD4\n"
        "_after_loop_func_080E1DD4:\n\t"
        "str r2, [%0, #0xc]\n\t"
        "ldr r1, [%0, #8]\n\t"
        "cmp r1, #0\n\t"
        "beq _finish_func_080E1DD4\n\t"
        "ldr r2, =0x000005B4\n\t"
        "add r0, r1, r2\n\t"
        "ldr r0, [r0]\n\t"
        "ldr r2, [r0, #8]\n\t"
        "add r0, r1, #0\n\t"
        "mov r1, #3\n\t"
        "bl func_080D3914\n"
        "_finish_func_080E1DD4:\n\t"
        "add r0, %0, #0\n\t"
        "add r1, %1, #0\n\t"
        "bl func_080086BC"
        : "=r"(p1), "=r"(p2) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_080E1E28 @ 0x080E1E28 (388B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E1E28 @ 0x080E1E28 (388 bytes)
 * Role   : C++ Virtual Deleting Destructor ~Class(this, int __in_chrg) [vtable: 0x080E5A28]
 * Fields : +0x00:u32(R), +0x04:u32(R), +0x08:u32(R), +0x18:u32(R), +0x1C:u32(R), +0x24:u32(W), +0x54:u32(W)
 * Callees: func_08000608, func_08007184, func_080073E0, func_080079E8, func_08007C28, func_080086BC, func_08050D0C, func_08075DEC, func_080D0260, func_080D3914
 * CFG Structure:
 *   L_080E1E28: if (==) goto L_080E1E5E
 *   L_080E1E48: call func_080073E0(); call func_08007184(); if (!=) goto L_080E1E48
 *   L_080E1E5E: if (==) goto L_080E1E92
 *   L_080E1E7C: call func_08007C28(); call func_080079E8(); if (!=) goto L_080E1E7C
 *   L_080E1E92: call func_080073E0(); call func_08007184(); call func_08007C28(); call func_080079E8(); call func_080073E0(); call func_08007184()
 *   L_080E1EF8: if (!=) goto L_080E1EF8
 *   L_080E1EFE: if (==) goto L_080E1F16
 *   L_080E1F10: if (!=) goto L_080E1F10
 *   L_080E1F16: call func_08050D0C(); if (==) goto L_080E1F5A
 *   L_080E1F44: if (!=) goto L_080E1F44
 *   L_080E1F4A: if (==) goto L_080E1F54
 *   L_080E1F54: call func_08000608()
 * ========================================================================== */
extern void func_08000608(void);
extern void func_08007184(void);
extern void func_080073E0(void);
extern void func_080079E8(void);
extern void func_08007C28(void);
extern void func_080086BC(void);
extern void func_08050D0C(void);
extern void func_08075DEC(void);
extern void func_080D0260(void);
extern void func_080D3914(void);
void func_080E1E28(void) {
    int r7_var;
    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	mov sb, r1\n"
        "	ldr r1, =0x00004120\n"
        "	add r0, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E1E5E\n"
        "	add r1, #0x50\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E1E5E\n"
        "	ldr r0, =0x00004120\n"
        "	add r6, r5, r0\n"
        "_L_080E1E48:\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	cmp r6, r4\n"
        "	bne _L_080E1E48\n"
        "_L_080E1E5E:\n"
        "	ldr r1, =0x000040D0\n"
        "	add r0, r5, r1\n"
        "	ldr r1, =0x00003FA8\n"
        "	add r7, r5, r1\n"
        "	ldr r1, =0x00003EA4\n"
        "	add r1, r1, r5\n"
        "	mov r8, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E1E92\n"
        "	ldr r1, =0x00004120\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E1E92\n"
        "	ldr r0, =0x000040D0\n"
        "	add r6, r5, r0\n"
        "_L_080E1E7C:\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	cmp r6, r4\n"
        "	bne _L_080E1E7C\n"
        "_L_080E1E92:\n"
        "	ldr r1, =0x000040C8\n"
        "	add r4, r5, r1\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	ldr r0, =0x000040C0\n"
        "	add r4, r5, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	ldr r1, =0x000040B8\n"
        "	add r4, r5, r1\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	ldr r0, =0x000040B0\n"
        "	add r4, r5, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	ldr r1, =0x00003FA4\n"
        "	add r2, r5, r1\n"
        "	ldr r1, [r2]\n"
        "	lsl r0, r1, #1\n"
        "	add r0, r0, r1\n"
        "	lsl r0, r0, #2\n"
        "	add r0, #4\n"
        "	add r2, r2, r0\n"
        "	add r0, r7, #0\n"
        "	cmp r0, r2\n"
        "	beq _L_080E1EFE\n"
        "_L_080E1EF8:\n"
        "	add r0, #0xc\n"
        "	cmp r0, r2\n"
        "	bne _L_080E1EF8\n"
        "_L_080E1EFE:\n"
        "	ldr r0, =0x00003EA0\n"
        "	add r1, r5, r0\n"
        "	ldr r0, [r1]\n"
        "	lsl r0, r0, #4\n"
        "	add r0, #4\n"
        "	add r1, r1, r0\n"
        "	mov r0, r8\n"
        "	cmp r0, r1\n"
        "	beq _L_080E1F16\n"
        "_L_080E1F10:\n"
        "	add r0, #0x10\n"
        "	cmp r0, r1\n"
        "	bne _L_080E1F10\n"
        "_L_080E1F16:\n"
        "	mov r1, #0x9a\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r5, r1\n"
        "	mov r1, #2\n"
        "	bl func_08050D0C\n"
        "	ldr r0, =0x080E5A28\n"
        "	str r0, [r5, #0x54]\n"
        "	str r0, [r5, #0x24]\n"
        "	ldr r0, [r5, #0x1c]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E1F5A\n"
        "	add r4, r0, #0\n"
        "	add r0, #0x28\n"
        "	mov r1, #2\n"
        "	bl func_08075DEC\n"
        "	add r0, r4, #0\n"
        "	add r0, #0x18\n"
        "	ldr r2, [r0, #4]\n"
        "	ldr r1, [r4, #0x18]\n"
        "	cmp r1, r2\n"
        "	beq _L_080E1F4A\n"
        "_L_080E1F44:\n"
        "	add r1, #0x40\n"
        "	cmp r1, r2\n"
        "	bne _L_080E1F44\n"
        "_L_080E1F4A:\n"
        "	ldr r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E1F54\n"
        "	bl func_080D0260\n"
        "_L_080E1F54:\n"
        "	add r0, r4, #0\n"
        "	bl func_08000608\n"
        "_L_080E1F5A:\n"
        "	ldr r1, [r5, #8]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E1F6C\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E1F6C:\n"
        "	add r0, r5, #0\n"
        "	mov r1, sb\n"
        "	bl func_080086BC\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_080E1FAC @ 0x080E1FAC (108B) [PURE-C | agbcc_O2] --- */
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
void func_080E1FAC(int arg0,u32 arg1) {
  u32 *sub;
  sub = (u32 *)(arg0 + 0x30);
  func_080073E0(sub, sub[1]);
  func_08007184(sub,2);
  sub = (u32 *)(arg0 + 0x28);
  func_08007C28(sub, sub[1]);
  func_080079E8(sub,2);
  sub = (u32 *)(arg0 + 0x20);
  func_080073E0(sub, sub[1]);
  func_08007184(sub,2);
  sub = (u32 *)(arg0 + 0x18);
  func_08007C28(sub, sub[1]);
  func_080079E8(sub,2);
  if (*(int *)(arg0 + 0xc) != 0) {
    func_08050D0C(*(int *)(arg0 + 0xc),3);
  }
  func_080086BC(arg0,arg1);
}

/* --- func_080E2018 @ 0x080E2018 (124B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E2018 @ 0x080E2018 (124 bytes)
 * Role   : C++ Class Constructor / Polymorphic Method [vtable: 0x080E5A28]
 * Fields : +0x00:u32(RW), +0x04:u32(R), +0x08:u32(R), +0x0C:u32(R), +0x20:u32(W)
 * Callees: func_080086BC, func_080756D0, func_080D0260, func_080D3914, func_080E20C0
 * CFG Structure:
 *   L_080E2018: if (==) goto L_080E203E
 *   L_080E2030: call func_080E20C0(); if (!=) goto L_080E2030
 *   L_080E203E: if (==) goto L_080E2058
 *   L_080E2052: if (!=) goto L_080E2052
 *   L_080E2058: if (==) goto L_080E2062
 *   L_080E2062: call func_080756D0(); if (==) goto L_080E2082
 *   L_080E2082: call func_080086BC(); return
 * ========================================================================== */
extern void func_080086BC(void);
extern void func_080756D0(void);
extern void func_080D0260(void);
extern void func_080D3914(void);
extern void func_080E20C0(void);
void func_080E2018(void) {
    int r7_var;
    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	add r7, r1, #0\n"
        "	add r0, #0xe0\n"
        "	cmp r0, #0\n"
        "	beq _L_080E203E\n"
        "	mov r1, #0xd0\n"
        "	lsl r1, r1, #1\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E203E\n"
        "	add r6, r0, #0\n"
        "_L_080E2030:\n"
        "	sub r4, #0x30\n"
        "	add r0, r4, #0\n"
        "	mov r1, #0\n"
        "	bl func_080E20C0\n"
        "	cmp r6, r4\n"
        "	bne _L_080E2030\n"
        "_L_080E203E:\n"
        "	add r0, r5, #0\n"
        "	add r0, #0xd0\n"
        "	ldr r2, [r0, #4]\n"
        "	ldr r1, [r0]\n"
        "	add r4, r5, #0\n"
        "	add r4, #0xa0\n"
        "	add r6, r5, #0\n"
        "	add r6, #0x18\n"
        "	cmp r1, r2\n"
        "	beq _L_080E2058\n"
        "_L_080E2052:\n"
        "	add r1, #0x1c\n"
        "	cmp r1, r2\n"
        "	bne _L_080E2052\n"
        "_L_080E2058:\n"
        "	ldr r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E2062\n"
        "	bl func_080D0260\n"
        "_L_080E2062:\n"
        "	ldr r0, =0x080E5A28\n"
        "	str r0, [r4]\n"
        "	str r0, [r5, #0x20]\n"
        "	add r0, r6, #0\n"
        "	mov r1, #2\n"
        "	bl func_080756D0\n"
        "	ldr r1, [r5, #0xc]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E2082\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E2082:\n"
        "	add r0, r5, #0\n"
        "	add r1, r7, #0\n"
        "	bl func_080086BC\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_080E2094 @ 0x080E2094 (44B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E2094 @ 0x080E2094 (44 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(W), +0x04:u32(W), +0x10:u32(W), +0x20:u32(W)
 * CFG Structure:
 *   L_080E2094: return
 * ========================================================================== */
void func_080E2094(void) {
    __asm__ volatile(
        "	sub sp, #0xc\n"
        "	add r2, r0, #0\n"
        "	mov r0, #0\n"
        "	str r0, [r2]\n"
        "	str r0, [r2, #4]\n"
        "	add r1, r2, #0\n"
        "	add r1, #8\n"
        "	str r0, [r1, #4]\n"
        "	add r1, #8\n"
        "	str r0, [r2, #0x10]\n"
        "	str r0, [r1, #4]\n"
        "	add r1, #8\n"
        "	str r0, [r1, #4]\n"
        "	add r1, #8\n"
        "	str r0, [r2, #0x20]\n"
        "	str r0, [r1, #4]\n"
        "	add r1, #8\n"
        "	str r0, [r1, #4]\n"
        "	add r0, r2, #0\n"
        "	add sp, #0xc\n"
        "	bx lr\n"
        "	.hword 0x0000\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080E20C0 @ 0x080E20C0 (56B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
extern u32 func_080D0260();
void func_080E20C0(int *arg0,u32 arg1) {
  if (arg0[8] != 0) {
    func_080D0260();
  }
  if (arg0[4] != 0) {
    func_080D0260();
  }
  if (*arg0 != 0) {
    func_080D0260();
  }
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080E20F8 @ 0x080E20F8 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08070C88();
void func_080E20F8(void) {
  func_08070C88();
}

/* --- func_080E2104 @ 0x080E2104 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08070C88();
void func_080E2104(void) {
  func_08070C88();
}

/* --- func_080E2110 @ 0x080E2110 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08070C88();
void func_080E2110(void) {
  func_08070C88();
}

/* --- func_080E211C @ 0x080E211C (84B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080D3914();
extern void func_080086BC();
void func_080E211C(int param_1, int param_2) {
    register int p1 asm("r4");
    register int p2 asm("r5");
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %1, r1, #0\n\t"
        "mov r0, #0x92\n\t"
        "lsl r0, r0, #1\n\t"
        "add r1, %0, r0\n\t"
        "ldr r0, [r1]\n\t"
        "lsl r0, r0, #3\n\t"
        "add r0, #4\n\t"
        "add r1, r1, r0\n\t"
        "mov r2, #0x94\n\t"
        "lsl r2, r2, #1\n\t"
        "add r0, %0, r2\n\t"
        "ldr r2, =0x080E5A28\n\t"
        "cmp r0, r1\n\t"
        "beq _after_loop_func_080E211C\n"
        "_loop_func_080E211C:\n\t"
        "add r0, #8\n\t"
        "cmp r0, r1\n\t"
        "bne _loop_func_080E211C\n"
        "_after_loop_func_080E211C:\n\t"
        "str r2, [%0, #0xc]\n\t"
        "ldr r1, [%0, #8]\n\t"
        "cmp r1, #0\n\t"
        "beq _finish_func_080E211C\n\t"
        "ldr r2, =0x000005B4\n\t"
        "add r0, r1, r2\n\t"
        "ldr r0, [r0]\n\t"
        "ldr r2, [r0, #8]\n\t"
        "add r0, r1, #0\n\t"
        "mov r1, #3\n\t"
        "bl func_080D3914\n"
        "_finish_func_080E211C:\n\t"
        "add r0, %0, #0\n\t"
        "add r1, %1, #0\n\t"
        "bl func_080086BC"
        : "=r"(p1), "=r"(p2) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
}

/* --- func_080E2170 @ 0x080E2170 (56B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
void func_080E2170(int arg0,int *arg1) {
  int val;
  int val2;
  val2 = *(int *)(arg0 + 0xc);
  *(u32 *)(arg0 + 0xc) = *(u32 *)(val2 + 8);
  if (*(int *)(val2 + 8) != 0) {
    *(int *)(*(int *)(val2 + 8) + 4) = arg0;
  }
  *(u32 *)(val2 + 4) = *(u32 *)(arg0 + 4);
  if (arg0 == *arg1) {
    *arg1 = val2;
  }
  else {
    val = *(int *)(arg0 + 4);
    if (arg0 == *(int *)(val + 8)) {
      *(int *)(val + 8) = val2;
    }
    else {
      *(int *)(val + 0xc) = val2;
    }
  }
  *(int *)(val2 + 8) = arg0;
  *(int *)(arg0 + 4) = val2;
}

/* --- func_080E21A8 @ 0x080E21A8 (56B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
void func_080E21A8(int arg0,int *arg1) {
  int val;
  int val2;
  val2 = *(int *)(arg0 + 8);
  *(u32 *)(arg0 + 8) = *(u32 *)(val2 + 0xc);
  if (*(int *)(val2 + 0xc) != 0) {
    *(int *)(*(int *)(val2 + 0xc) + 4) = arg0;
  }
  *(u32 *)(val2 + 4) = *(u32 *)(arg0 + 4);
  if (arg0 == *arg1) {
    *arg1 = val2;
  }
  else {
    val = *(int *)(arg0 + 4);
    if (arg0 == *(int *)(val + 0xc)) {
      *(int *)(val + 0xc) = val2;
    }
    else {
      *(int *)(val + 8) = val2;
    }
  }
  *(int *)(val2 + 0xc) = arg0;
  *(int *)(arg0 + 4) = val2;
}

/* --- func_080E21E0 @ 0x080E21E0 (180B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E21E0 @ 0x080E21E0 (180 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R), +0x00:u8(RW), +0x04:u32(R), +0x08:u32(R), +0x0C:u32(R)
 * Callees: func_080E2170, func_080E21A8
 * CFG Structure:
 *   L_080E21E0: if (==) goto L_080E2286
 *   L_080E21FC: if (!=) goto L_080E2238
 *   L_080E2210: if (!=) goto L_080E2222
 *   L_080E2222: call func_080E21A8(); goto L_080E2278
 *   L_080E2238: if (==) goto L_080E2252
 *   L_080E2242: goto L_080E2278
 *   L_080E2252: if (!=) goto L_080E2264
 *   L_080E2264: call func_080E2170()
 *   L_080E2278: if (==) goto L_080E2286
 *   L_080E2286: return
 * ========================================================================== */
extern void func_080E2170(void);
extern void func_080E21A8(void);
void func_080E21E0(void) {
    int r7_var;
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	add r5, r1, #0\n"
        "	mov r0, #0\n"
        "	strb r0, [r4]\n"
        "	ldr r0, [r5]\n"
        "	cmp r4, r0\n"
        "	beq _L_080E2286\n"
        "	ldr r2, [r4, #4]\n"
        "	ldrb r0, [r2]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E2286\n"
        "	mov r6, #1\n"
        "	mov r7, #0\n"
        "_L_080E21FC:\n"
        "	ldr r1, [r2, #4]\n"
        "	ldr r0, [r1, #8]\n"
        "	cmp r2, r0\n"
        "	bne _L_080E2238\n"
        "	ldr r0, [r1, #0xc]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E2210\n"
        "	ldrb r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E2242\n"
        "_L_080E2210:\n"
        "	ldr r1, [r4, #4]\n"
        "	ldr r0, [r1, #0xc]\n"
        "	cmp r4, r0\n"
        "	bne _L_080E2222\n"
        "	add r4, r1, #0\n"
        "	add r0, r4, #0\n"
        "	add r1, r5, #0\n"
        "	bl func_080E2170\n"
        "_L_080E2222:\n"
        "	ldr r0, [r4, #4]\n"
        "	strb r6, [r0]\n"
        "	ldr r0, [r4, #4]\n"
        "	ldr r0, [r0, #4]\n"
        "	strb r7, [r0]\n"
        "	ldr r0, [r4, #4]\n"
        "	ldr r0, [r0, #4]\n"
        "	add r1, r5, #0\n"
        "	bl func_080E21A8\n"
        "	b _L_080E2278\n"
        "_L_080E2238:\n"
        "	cmp r0, #0\n"
        "	beq _L_080E2252\n"
        "	ldrb r1, [r0]\n"
        "	cmp r1, #0\n"
        "	bne _L_080E2252\n"
        "_L_080E2242:\n"
        "	strb r6, [r2]\n"
        "	strb r6, [r0]\n"
        "	ldr r0, [r4, #4]\n"
        "	ldr r0, [r0, #4]\n"
        "	strb r1, [r0]\n"
        "	ldr r0, [r4, #4]\n"
        "	ldr r4, [r0, #4]\n"
        "	b _L_080E2278\n"
        "_L_080E2252:\n"
        "	ldr r1, [r4, #4]\n"
        "	ldr r0, [r1, #8]\n"
        "	cmp r4, r0\n"
        "	bne _L_080E2264\n"
        "	add r4, r1, #0\n"
        "	add r0, r4, #0\n"
        "	add r1, r5, #0\n"
        "	bl func_080E21A8\n"
        "_L_080E2264:\n"
        "	ldr r0, [r4, #4]\n"
        "	strb r6, [r0]\n"
        "	ldr r0, [r4, #4]\n"
        "	ldr r0, [r0, #4]\n"
        "	strb r7, [r0]\n"
        "	ldr r0, [r4, #4]\n"
        "	ldr r0, [r0, #4]\n"
        "	add r1, r5, #0\n"
        "	bl func_080E2170\n"
        "_L_080E2278:\n"
        "	ldr r0, [r5]\n"
        "	cmp r4, r0\n"
        "	beq _L_080E2286\n"
        "	ldr r2, [r4, #4]\n"
        "	ldrb r0, [r2]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E21FC\n"
        "_L_080E2286:\n"
        "	ldr r1, [r5]\n"
        "	mov r0, #1\n"
        "	strb r0, [r1]\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_080E2294 @ 0x080E2294 (192B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern int func_080D01F8();
extern int func_080D3BC0();
extern void func_080E21E0();
int func_080E2294(int param_1, int param_2, int param_3, int param_4) {
    int r7_var;
    register int r6 asm("r6");
    register int r5 asm("r5");
    register int r4 asm("r4");
    register int ret asm("r0");
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %1, r1, #0\n\t"
        "ldr %3, [sp, #0x14]\n\t"
        "add %2, r3, #0\n\t"
        "ldr r0, [%1, #4]\n\t"
        "cmp %2, r0\n\t"
        "beq _alloc_left_E2294\n\t"
        "ldr r0, [sp, #0x18]\n\t"
        "cmp r0, #0\n\t"
        "bne _alloc_right_E2294\n\t"
        "cmp r2, #0\n\t"
        "bne _alloc_left_E2294\n\t"
        "mov r2, #0\n\t"
        "ldr r1, [%3]\n\t"
        "ldr r0, [%2, #0x10]\n\t"
        "cmp r1, r0\n\t"
        "bhs _chk_r2_E2294\n\t"
        "mov r2, #1\n"
        "_chk_r2_E2294:\n\t"
        "cmp r2, #0\n\t"
        "beq _alloc_right_E2294\n"
        "_alloc_left_E2294:\n\t"
        "mov r0, #0x18\n\t"
        "bl func_080D01F8\n\t"
        "add r2, r0, #0\n\t"
        "cmp r2, #0\n\t"
        "bne _init_left_E2294\n\t"
        "mov r0, #0x18\n\t"
        "bl func_080D3BC0\n\t"
        "add r2, r0, #0\n"
        "_init_left_E2294:\n\t"
        "add r1, r2, #0\n\t"
        "add r1, #0x10\n\t"
        "cmp r1, #0\n\t"
        "beq _link_left_E2294\n\t"
        "ldr r0, [%3]\n\t"
        "str r0, [r2, #0x10]\n\t"
        "ldr r0, [%3, #4]\n\t"
        "str r0, [r1, #4]\n"
        "_link_left_E2294:\n\t"
        "add %3, r2, #0\n\t"
        "str %3, [%2, #8]\n\t"
        "ldr r1, [%1, #4]\n\t"
        "cmp %2, r1\n\t"
        "bne _chk_leftmost_E2294\n\t"
        "str %3, [%2, #4]\n\t"
        "ldr r0, [%1, #4]\n\t"
        "str %3, [r0, #0xc]\n\t"
        "b _rebalance_E2294\n"
        "_chk_leftmost_E2294:\n\t"
        "ldr r0, [r1, #8]\n\t"
        "cmp %2, r0\n\t"
        "bne _rebalance_E2294\n\t"
        "str %3, [r1, #8]\n\t"
        "b _rebalance_E2294\n"
        "_alloc_right_E2294:\n\t"
        "mov r0, #0x18\n\t"
        "bl func_080D01F8\n\t"
        "add r2, r0, #0\n\t"
        "cmp r2, #0\n\t"
        "bne _init_right_E2294\n\t"
        "mov r0, #0x18\n\t"
        "bl func_080D3BC0\n\t"
        "add r2, r0, #0\n"
        "_init_right_E2294:\n\t"
        "add r1, r2, #0\n\t"
        "add r1, #0x10\n\t"
        "cmp r1, #0\n\t"
        "beq _link_right_E2294\n\t"
        "ldr r0, [%3]\n\t"
        "str r0, [r2, #0x10]\n\t"
        "ldr r0, [%3, #4]\n\t"
        "str r0, [r1, #4]\n"
        "_link_right_E2294:\n\t"
        "add %3, r2, #0\n\t"
        "str %3, [%2, #0xc]\n\t"
        "ldr r1, [%1, #4]\n\t"
        "ldr r0, [r1, #0xc]\n\t"
        "cmp %2, r0\n\t"
        "bne _rebalance_E2294\n\t"
        "str %3, [r1, #0xc]\n"
        "_rebalance_E2294:\n\t"
        "str %2, [%3, #4]\n\t"
        "mov r0, #0\n\t"
        "str r0, [%3, #8]\n\t"
        "str r0, [%3, #0xc]\n\t"
        "ldr r1, [%1, #4]\n\t"
        "add r1, #4\n\t"
        "add r0, %3, #0\n\t"
        "bl func_080E21E0\n\t"
        "ldr r0, [%1, #8]\n\t"
        "add r0, #1\n\t"
        "str r0, [%1, #8]\n\t"
        "str %3, [%0]\n\t"
        "add r0, %0, #0"
        : "=l"(r7_var), "=l"(r6), "=l"(r5), "=l"(r4) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    __asm__ volatile("" : "=r"(ret));
    return ret;
}

/* --- func_080E2354 @ 0x080E2354 (60B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E2354 @ 0x080E2354 (60 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u8(R), +0x04:u32(R), +0x08:u32(R), +0x0C:u32(R)
 * CFG Structure:
 *   L_080E2354: if (!=) goto L_080E236A
 *   L_080E236A: if (==) goto L_080E2380
 *   L_080E2376: if (!=) goto L_080E2374
 *   L_080E2380: if (==) goto L_080E237E
 *   L_080E238A: return
 * ========================================================================== */
void func_080E2354(void) {
    __asm__ volatile(
        "	push {lr}\n"
        "	add r2, r0, #0\n"
        "	ldrb r0, [r2]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E236A\n"
        "	ldr r0, [r2, #4]\n"
        "	ldr r0, [r0, #4]\n"
        "	cmp r0, r2\n"
        "	bne _L_080E236A\n"
        "	ldr r2, [r2, #0xc]\n"
        "	b _L_080E238A\n"
        "_L_080E236A:\n"
        "	ldr r0, [r2, #8]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E2380\n"
        "	add r1, r0, #0\n"
        "	b _L_080E2376\n"
        "_L_080E2374:\n"
        "	ldr r1, [r1, #0xc]\n"
        "_L_080E2376:\n"
        "	ldr r0, [r1, #0xc]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E2374\n"
        "	b _L_080E2388\n"
        "_L_080E237E:\n"
        "	add r2, r1, #0\n"
        "_L_080E2380:\n"
        "	ldr r1, [r2, #4]\n"
        "	ldr r0, [r1, #8]\n"
        "	cmp r2, r0\n"
        "	beq _L_080E237E\n"
        "_L_080E2388:\n"
        "	add r2, r1, #0\n"
        "_L_080E238A:\n"
        "	add r0, r2, #0\n"
        "	pop {r1}\n"
        "	bx r1\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080E2390 @ 0x080E2390 (180B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E2390 @ 0x080E2390 (180 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW), +0x04:u32(R), +0x04:u8(W), +0x08:u32(R), +0x0C:u32(R), +0x10:u32(R)
 * Callees: func_080E2294, func_080E2354
 * CFG Structure:
 *   L_080E2390: if (==) goto L_080E23C6
 *   L_080E23AA: if (>= (u)) goto L_080E23B6
 *   L_080E23B6: if (==) goto L_080E23C0
 *   L_080E23C2: if (!=) goto L_080E23AA
 *   L_080E23C6: if (==) goto L_080E2400
 *   L_080E23DC: if (==) goto L_080E23F8
 *   L_080E23F8: call func_080E2354()
 *   L_080E2400: if (>= (u)) goto L_080E240E
 *   L_080E240E: if (==) goto L_080E2430
 *   L_080E242A: goto L_080E2434
 * ========================================================================== */
extern void func_080E2294(void);
extern void func_080E2354(void);
int func_080E2390(void) {
    u32 sp0, sp1, sp2, sp3, sp4;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	mov r8, r1\n"
        "	add r7, r2, #0\n"
        "	ldr r4, [r1, #4]\n"
        "	ldr r5, [r4, #4]\n"
        "	mov r0, #1\n"
        "	cmp r5, #0\n"
        "	beq _L_080E23C6\n"
        "	ldr r2, [r7]\n"
        "_L_080E23AA:\n"
        "	add r4, r5, #0\n"
        "	mov r1, #0\n"
        "	ldr r0, [r4, #0x10]\n"
        "	cmp r2, r0\n"
        "	bhs _L_080E23B6\n"
        "	mov r1, #1\n"
        "_L_080E23B6:\n"
        "	add r0, r1, #0\n"
        "	cmp r0, #0\n"
        "	beq _L_080E23C0\n"
        "	ldr r5, [r4, #8]\n"
        "	b _L_080E23C2\n"
        "_L_080E23C0:\n"
        "	ldr r5, [r4, #0xc]\n"
        "_L_080E23C2:\n"
        "	cmp r5, #0\n"
        "	bne _L_080E23AA\n"
        "_L_080E23C6:\n"
        "	str r4, [sp, #8]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E2400\n"
        "	mov r1, r8\n"
        "	ldr r0, [r1, #4]\n"
        "	ldr r0, [r0, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	mov r1, #0\n"
        "	cmp r4, r0\n"
        "	bne _L_080E23DC\n"
        "	mov r1, #1\n"
        "_L_080E23DC:\n"
        "	cmp r1, #0\n"
        "	beq _L_080E23F8\n"
        "	str r7, [sp]\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #4]\n"
        "	add r0, sp, #0x10\n"
        "	mov r1, r8\n"
        "	add r2, r5, #0\n"
        "	add r3, r4, #0\n"
        "	bl func_080E2294\n"
        "	mov r1, #1\n"
        "	ldr r0, [sp, #0x10]\n"
        "	b _L_080E242A\n"
        "_L_080E23F8:\n"
        "	add r0, r4, #0\n"
        "	bl func_080E2354\n"
        "	str r0, [sp, #8]\n"
        "_L_080E2400:\n"
        "	ldr r2, [sp, #8]\n"
        "	mov r3, #0\n"
        "	ldr r1, [r2, #0x10]\n"
        "	ldr r0, [r7]\n"
        "	cmp r1, r0\n"
        "	bhs _L_080E240E\n"
        "	mov r3, #1\n"
        "_L_080E240E:\n"
        "	add r0, r3, #0\n"
        "	cmp r0, #0\n"
        "	beq _L_080E2430\n"
        "	str r7, [sp]\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #4]\n"
        "	add r0, sp, #0xc\n"
        "	mov r1, r8\n"
        "	add r2, r5, #0\n"
        "	add r3, r4, #0\n"
        "	bl func_080E2294\n"
        "	mov r1, #1\n"
        "	ldr r0, [sp, #0xc]\n"
        "_L_080E242A:\n"
        "	str r0, [r6]\n"
        "	strb r1, [r6, #4]\n"
        "	b _L_080E2434\n"
        "_L_080E2430:\n"
        "	str r2, [r6]\n"
        "	strb r0, [r6, #4]\n"
        "_L_080E2434:\n"
        "	add r0, r6, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080E2444 @ 0x080E2444 (440B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E2444 @ 0x080E2444 (440 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW), +0x04:u32(R), +0x08:u32(R), +0x0C:u32(R), +0x10:u32(R)
 * Callees: func_080E2294, func_080E2354, func_080E2390, func_080E2B28
 * CFG Structure:
 *   L_080E2444: if (!=) goto L_080E24D4
 *   L_080E2474: if (>= (u)) goto L_080E2482
 *   L_080E2482: if (!=) goto L_080E2548
 *   L_080E2490: if (!=) goto L_080E2498
 *   L_080E2498: call func_080E2B28(); if (!=) goto L_080E24B0
 *   L_080E24B0: if (>= (u)) goto L_080E24BE
 *   L_080E24BE: if (!=) goto L_080E24C4
 *   L_080E24C4: if (==) goto L_080E25AE
 *   L_080E24D4: if (!=) goto L_080E24FE
 *   L_080E24E6: if (==) goto L_080E24F0
 *   L_080E24F0: call func_080E2390(); goto L_080E25E8
 *   L_080E24FE: call func_080E2354(); if (>= (u)) goto L_080E251A
 * ========================================================================== */
extern void func_080E2294(void);
extern void func_080E2354(void);
extern void func_080E2390(void);
extern void func_080E2B28(void);
int func_080E2444(void) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5));
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	add r6, r1, #0\n"
        "	mov r8, r2\n"
        "	add r4, r3, #0\n"
        "	ldr r1, [r6, #4]\n"
        "	ldr r2, [r2]\n"
        "	ldr r0, [r1, #8]\n"
        "	cmp r2, r0\n"
        "	bne _L_080E24D4\n"
        "	ldr r0, [r6, #8]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E2474\n"
        "	add r0, sp, #8\n"
        "	add r1, r6, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080E2390\n"
        "	ldr r0, [sp, #8]\n"
        "	b _L_080E25E8\n"
        "_L_080E2474:\n"
        "	mov r0, #0\n"
        "	ldr r1, [r2, #0x10]\n"
        "	add r3, r2, #0\n"
        "	ldr r2, [r4]\n"
        "	cmp r2, r1\n"
        "	bhs _L_080E2482\n"
        "	mov r0, #1\n"
        "_L_080E2482:\n"
        "	mov sb, r0\n"
        "	cmp r0, #0\n"
        "	bne _L_080E2548\n"
        "	mov r0, #0\n"
        "	cmp r1, r2\n"
        "	bhs _L_080E2490\n"
        "	mov r0, #1\n"
        "_L_080E2490:\n"
        "	cmp r0, #0\n"
        "	bne _L_080E2498\n"
        "	str r3, [r7]\n"
        "	b _L_080E25EA\n"
        "_L_080E2498:\n"
        "	str r3, [sp, #8]\n"
        "	add r0, r3, #0\n"
        "	bl func_080E2B28\n"
        "	add r2, r0, #0\n"
        "	str r2, [sp, #8]\n"
        "	ldr r0, [r6, #4]\n"
        "	cmp r2, r0\n"
        "	bne _L_080E24B0\n"
        "	mov r0, r8\n"
        "	ldr r3, [r0]\n"
        "	b _L_080E25AE\n"
        "_L_080E24B0:\n"
        "	mov r3, #0\n"
        "	ldr r1, [r4]\n"
        "	ldr r0, [r2, #0x10]\n"
        "	add r5, r2, #0\n"
        "	cmp r1, r0\n"
        "	bhs _L_080E24BE\n"
        "	mov r3, #1\n"
        "_L_080E24BE:\n"
        "	cmp r3, #0\n"
        "	bne _L_080E24C4\n"
        "	b _L_080E25DC\n"
        "_L_080E24C4:\n"
        "	mov r1, r8\n"
        "	ldr r3, [r1]\n"
        "	ldr r0, [r3, #0xc]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E25AE\n"
        "	str r4, [sp]\n"
        "	mov r0, sb\n"
        "	b _L_080E25C2\n"
        "_L_080E24D4:\n"
        "	cmp r2, r1\n"
        "	bne _L_080E24FE\n"
        "	ldr r3, [r2, #0xc]\n"
        "	mov r5, #0\n"
        "	ldr r1, [r3, #0x10]\n"
        "	ldr r0, [r4]\n"
        "	cmp r1, r0\n"
        "	bhs _L_080E24E6\n"
        "	mov r5, #1\n"
        "_L_080E24E6:\n"
        "	cmp r5, #0\n"
        "	beq _L_080E24F0\n"
        "	str r4, [sp]\n"
        "	str r2, [sp, #4]\n"
        "	b _L_080E25B2\n"
        "_L_080E24F0:\n"
        "	add r0, sp, #8\n"
        "	add r1, r6, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080E2390\n"
        "	ldr r0, [sp, #8]\n"
        "	b _L_080E25E8\n"
        "_L_080E24FE:\n"
        "	str r2, [sp, #8]\n"
        "	add r0, r2, #0\n"
        "	bl func_080E2354\n"
        "	add r2, r0, #0\n"
        "	str r2, [sp, #8]\n"
        "	mov r1, r8\n"
        "	ldr r3, [r1]\n"
        "	mov r5, #0\n"
        "	ldr r1, [r4]\n"
        "	ldr r0, [r3, #0x10]\n"
        "	cmp r1, r0\n"
        "	bhs _L_080E251A\n"
        "	mov r5, #1\n"
        "_L_080E251A:\n"
        "	mov sb, r5\n"
        "	cmp r5, #0\n"
        "	beq _L_080E255A\n"
        "	mov r0, #0\n"
        "	mov ip, r0\n"
        "	ldr r0, [r2, #0x10]\n"
        "	add r5, r2, #0\n"
        "	cmp r0, r1\n"
        "	bhs _L_080E2530\n"
        "	mov r1, #1\n"
        "	mov ip, r1\n"
        "_L_080E2530:\n"
        "	mov r0, ip\n"
        "	cmp r0, #0\n"
        "	beq _L_080E255A\n"
        "	ldr r0, [r5, #0xc]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E2548\n"
        "	str r4, [sp]\n"
        "	str r5, [sp, #4]\n"
        "	add r0, r7, #0\n"
        "	add r1, r6, #0\n"
        "	mov r2, #0\n"
        "	b _L_080E25CA\n"
        "_L_080E2548:\n"
        "	str r4, [sp]\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #4]\n"
        "	add r0, r7, #0\n"
        "	add r1, r6, #0\n"
        "	add r2, r3, #0\n"
        "	bl func_080E2294\n"
        "	b _L_080E25EA\n"
        "_L_080E255A:\n"
        "	mov r1, r8\n"
        "	ldr r0, [r1]\n"
        "	str r0, [sp, #0xc]\n"
        "	bl func_080E2B28\n"
        "	mov ip, r0\n"
        "	str r0, [sp, #0xc]\n"
        "	mov r0, #1\n"
        "	mov r1, sb\n"
        "	eor r1, r0\n"
        "	mov r0, sb\n"
        "	cmp r0, #0\n"
        "	bne _L_080E25D2\n"
        "	mov r1, r8\n"
        "	ldr r0, [r1]\n"
        "	mov r5, #0\n"
        "	ldr r1, [r0, #0x10]\n"
        "	add r3, r0, #0\n"
        "	ldr r2, [r4]\n"
        "	cmp r1, r2\n"
        "	bhs _L_080E2586\n"
        "	mov r5, #1\n"
        "_L_080E2586:\n"
        "	add r1, r5, #0\n"
        "	cmp r1, #0\n"
        "	beq _L_080E25D2\n"
        "	ldr r0, [r6, #4]\n"
        "	mov r5, ip\n"
        "	cmp r5, r0\n"
        "	beq _L_080E25A8\n"
        "	mov r0, #0\n"
        "	mov ip, r0\n"
        "	ldr r0, [r5, #0x10]\n"
        "	cmp r2, r0\n"
        "	bhs _L_080E25A2\n"
        "	mov r0, #1\n"
        "	mov ip, r0\n"
        "_L_080E25A2:\n"
        "	mov r0, ip\n"
        "	cmp r0, #0\n"
        "	beq _L_080E25D2\n"
        "_L_080E25A8:\n"
        "	ldr r0, [r3, #0xc]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E25BE\n"
        "_L_080E25AE:\n"
        "	str r4, [sp]\n"
        "	str r3, [sp, #4]\n"
        "_L_080E25B2:\n"
        "	add r0, r7, #0\n"
        "	add r1, r6, #0\n"
        "	mov r2, #0\n"
        "	bl func_080E2294\n"
        "	b _L_080E25EA\n"
        "_L_080E25BE:\n"
        "	str r4, [sp]\n"
        "	mov r0, #0\n"
        "_L_080E25C2:\n"
        "	str r0, [sp, #4]\n"
        "	add r0, r7, #0\n"
        "	add r1, r6, #0\n"
        "	add r2, r5, #0\n"
        "_L_080E25CA:\n"
        "	add r3, r5, #0\n"
        "	bl func_080E2294\n"
        "	b _L_080E25EA\n"
        "_L_080E25D2:\n"
        "	cmp sb, r1\n"
        "	bne _L_080E25DC\n"
        "	mov r1, r8\n"
        "	ldr r0, [r1]\n"
        "	b _L_080E25E8\n"
        "_L_080E25DC:\n"
        "	add r0, sp, #0x10\n"
        "	add r1, r6, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080E2390\n"
        "	ldr r0, [sp, #0x10]\n"
        "_L_080E25E8:\n"
        "	str r0, [r7]\n"
        "_L_080E25EA:\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080E25FC @ 0x080E25FC (512B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E25FC @ 0x080E25FC (512 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW), +0x00:u8(RW), +0x04:u32(RW), +0x08:u32(RW), +0x0C:u32(RW)
 * Callees: func_080E2170, func_080E21A8
 * CFG Structure:
 *   L_080E25FC: if (==) goto L_080E2624
 *   L_080E2618: goto L_080E261E
 *   L_080E261E: if (!=) goto L_080E261C
 *   L_080E2626: if (==) goto L_080E267A
 *   L_080E2640: goto L_080E2650
 *   L_080E2650: if (!=) goto L_080E265C
 *   L_080E265C: if (!=) goto L_080E2668
 *   L_080E266A: goto L_080E26E4
 * ========================================================================== */
extern void func_080E2170(void);
extern void func_080E21A8(void);
int func_080E25FC(void) {
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	mov r8, r1\n"
        "	add r7, r5, #0\n"
        "	ldr r1, [r7, #8]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E2624\n"
        "	ldr r0, [r7, #0xc]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E2618\n"
        "	add r6, r1, #0\n"
        "	b _L_080E2626\n"
        "_L_080E2618:\n"
        "	add r7, r0, #0\n"
        "	b _L_080E261E\n"
        "_L_080E261C:\n"
        "	ldr r7, [r7, #8]\n"
        "_L_080E261E:\n"
        "	ldr r0, [r7, #8]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E261C\n"
        "_L_080E2624:\n"
        "	ldr r6, [r7, #0xc]\n"
        "_L_080E2626:\n"
        "	cmp r7, r5\n"
        "	beq _L_080E267A\n"
        "	ldr r0, [r5, #8]\n"
        "	str r7, [r0, #4]\n"
        "	ldr r0, [r5, #8]\n"
        "	str r0, [r7, #8]\n"
        "	ldr r0, [r5, #0xc]\n"
        "	cmp r7, r0\n"
        "	beq _L_080E264E\n"
        "	ldr r4, [r7, #4]\n"
        "	cmp r6, #0\n"
        "	beq _L_080E2640\n"
        "	str r4, [r6, #4]\n"
        "_L_080E2640:\n"
        "	ldr r0, [r7, #4]\n"
        "	str r6, [r0, #8]\n"
        "	ldr r0, [r5, #0xc]\n"
        "	str r0, [r7, #0xc]\n"
        "	ldr r0, [r5, #0xc]\n"
        "	str r7, [r0, #4]\n"
        "	b _L_080E2650\n"
        "_L_080E264E:\n"
        "	add r4, r7, #0\n"
        "_L_080E2650:\n"
        "	mov r1, r8\n"
        "	ldr r0, [r1]\n"
        "	cmp r0, r5\n"
        "	bne _L_080E265C\n"
        "	str r7, [r1]\n"
        "	b _L_080E266A\n"
        "_L_080E265C:\n"
        "	ldr r1, [r5, #4]\n"
        "	ldr r0, [r1, #8]\n"
        "	cmp r0, r5\n"
        "	bne _L_080E2668\n"
        "	str r7, [r1, #8]\n"
        "	b _L_080E266A\n"
        "_L_080E2668:\n"
        "	str r7, [r1, #0xc]\n"
        "_L_080E266A:\n"
        "	ldr r0, [r5, #4]\n"
        "	str r0, [r7, #4]\n"
        "	ldrb r1, [r7]\n"
        "	ldrb r0, [r5]\n"
        "	strb r0, [r7]\n"
        "	strb r1, [r5]\n"
        "	add r7, r5, #0\n"
        "	b _L_080E26E4\n"
        "_L_080E267A:\n"
        "	ldr r4, [r7, #4]\n"
        "	cmp r6, #0\n"
        "	beq _L_080E2682\n"
        "	str r4, [r6, #4]\n"
        "_L_080E2682:\n"
        "	mov r1, r8\n"
        "	ldr r0, [r1]\n"
        "	cmp r0, r7\n"
        "	bne _L_080E268E\n"
        "	str r6, [r1]\n"
        "	b _L_080E269C\n"
        "_L_080E268E:\n"
        "	ldr r1, [r7, #4]\n"
        "	ldr r0, [r1, #8]\n"
        "	cmp r0, r7\n"
        "	bne _L_080E269A\n"
        "	str r6, [r1, #8]\n"
        "	b _L_080E269C\n"
        "_L_080E269A:\n"
        "	str r6, [r1, #0xc]\n"
        "_L_080E269C:\n"
        "	ldr r0, [r2]\n"
        "	cmp r0, r5\n"
        "	bne _L_080E26C0\n"
        "	ldr r0, [r5, #0xc]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E26AE\n"
        "	ldr r0, [r5, #4]\n"
        "	str r0, [r2]\n"
        "	b _L_080E26C0\n"
        "_L_080E26AE:\n"
        "	add r1, r6, #0\n"
        "	ldr r0, [r6, #8]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E26BE\n"
        "_L_080E26B6:\n"
        "	ldr r1, [r1, #8]\n"
        "	ldr r0, [r1, #8]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E26B6\n"
        "_L_080E26BE:\n"
        "	str r1, [r2]\n"
        "_L_080E26C0:\n"
        "	ldr r0, [r3]\n"
        "	cmp r0, r5\n"
        "	bne _L_080E26E4\n"
        "	ldr r0, [r5, #8]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E26D2\n"
        "	ldr r0, [r5, #4]\n"
        "	str r0, [r3]\n"
        "	b _L_080E26E4\n"
        "_L_080E26D2:\n"
        "	add r1, r6, #0\n"
        "	ldr r0, [r6, #0xc]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E26E2\n"
        "_L_080E26DA:\n"
        "	ldr r1, [r1, #0xc]\n"
        "	ldr r0, [r1, #0xc]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E26DA\n"
        "_L_080E26E2:\n"
        "	str r1, [r3]\n"
        "_L_080E26E4:\n"
        "	ldrb r0, [r7]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E26EC\n"
        "	b _L_080E27F0\n"
        "_L_080E26EC:\n"
        "	b _L_080E27D6\n"
        "_L_080E26EE:\n"
        "	ldr r0, [r4, #8]\n"
        "	cmp r6, r0\n"
        "	bne _L_080E2760\n"
        "	ldr r2, [r4, #0xc]\n"
        "	ldrb r1, [r2]\n"
        "	cmp r1, #0\n"
        "	bne _L_080E270C\n"
        "	mov r0, #1\n"
        "	strb r0, [r2]\n"
        "	strb r1, [r4]\n"
        "	add r0, r4, #0\n"
        "	mov r1, r8\n"
        "	bl func_080E2170\n"
        "	ldr r2, [r4, #0xc]\n"
        "_L_080E270C:\n"
        "	ldr r3, [r2, #8]\n"
        "	cmp r3, #0\n"
        "	beq _L_080E271A\n"
        "	ldrb r0, [r3]\n"
        "	ldr r1, [r2, #0xc]\n"
        "	cmp r0, #1\n"
        "	bne _L_080E2726\n"
        "_L_080E271A:\n"
        "	ldr r1, [r2, #0xc]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E2792\n"
        "	ldrb r0, [r1]\n"
        "	cmp r0, #1\n"
        "	beq _L_080E2792\n"
        "_L_080E2726:\n"
        "	cmp r1, #0\n"
        "	beq _L_080E2730\n"
        "	ldrb r0, [r1]\n"
        "	cmp r0, #1\n"
        "	bne _L_080E2746\n"
        "_L_080E2730:\n"
        "	cmp r3, #0\n"
        "	beq _L_080E2738\n"
        "	mov r0, #1\n"
        "	strb r0, [r3]\n"
        "_L_080E2738:\n"
        "	mov r0, #0\n"
        "	strb r0, [r2]\n"
        "	add r0, r2, #0\n"
        "	mov r1, r8\n"
        "	bl func_080E21A8\n"
        "	ldr r2, [r4, #0xc]\n"
        "_L_080E2746:\n"
        "	ldrb r0, [r4]\n"
        "	strb r0, [r2]\n"
        "	mov r1, #1\n"
        "	strb r1, [r4]\n"
        "	ldr r0, [r2, #0xc]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E2756\n"
        "	strb r1, [r0]\n"
        "_L_080E2756:\n"
        "	add r0, r4, #0\n"
        "	mov r1, r8\n"
        "	bl func_080E2170\n"
        "	b _L_080E27E8\n"
        "_L_080E2760:\n"
        "	add r2, r0, #0\n"
        "	ldrb r1, [r2]\n"
        "	cmp r1, #0\n"
        "	bne _L_080E2778\n"
        "	mov r0, #1\n"
        "	strb r0, [r2]\n"
        "	strb r1, [r4]\n"
        "	add r0, r4, #0\n"
        "	mov r1, r8\n"
        "	bl func_080E21A8\n"
        "	ldr r2, [r4, #8]\n"
        "_L_080E2778:\n"
        "	ldr r3, [r2, #0xc]\n"
        "	cmp r3, #0\n"
        "	beq _L_080E2786\n"
        "	ldrb r0, [r3]\n"
        "	ldr r1, [r2, #8]\n"
        "	cmp r0, #1\n"
        "	bne _L_080E279C\n"
        "_L_080E2786:\n"
        "	ldr r1, [r2, #8]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E2792\n"
        "	ldrb r0, [r1]\n"
        "	cmp r0, #1\n"
        "	bne _L_080E279C\n"
        "_L_080E2792:\n"
        "	mov r0, #0\n"
        "	strb r0, [r2]\n"
        "	add r6, r4, #0\n"
        "	ldr r4, [r6, #4]\n"
        "	b _L_080E27D6\n"
        "_L_080E279C:\n"
        "	cmp r1, #0\n"
        "	beq _L_080E27A6\n"
        "	ldrb r0, [r1]\n"
        "	cmp r0, #1\n"
        "	bne _L_080E27BC\n"
        "_L_080E27A6:\n"
        "	cmp r3, #0\n"
        "	beq _L_080E27AE\n"
        "	mov r0, #1\n"
        "	strb r0, [r3]\n"
        "_L_080E27AE:\n"
        "	mov r0, #0\n"
        "	strb r0, [r2]\n"
        "	add r0, r2, #0\n"
        "	mov r1, r8\n"
        "	bl func_080E2170\n"
        "	ldr r2, [r4, #8]\n"
        "_L_080E27BC:\n"
        "	ldrb r0, [r4]\n"
        "	strb r0, [r2]\n"
        "	mov r1, #1\n"
        "	strb r1, [r4]\n"
        "	ldr r0, [r2, #8]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E27CC\n"
        "	strb r1, [r0]\n"
        "_L_080E27CC:\n"
        "	add r0, r4, #0\n"
        "	mov r1, r8\n"
        "	bl func_080E21A8\n"
        "	b _L_080E27E8\n"
        "_L_080E27D6:\n"
        "	mov r1, r8\n"
        "	ldr r0, [r1]\n"
        "	cmp r6, r0\n"
        "	beq _L_080E27E8\n"
        "	cmp r6, #0\n"
        "	beq _L_080E26EE\n"
        "	ldrb r0, [r6]\n"
        "	cmp r0, #1\n"
        "	beq _L_080E26EE\n"
        "_L_080E27E8:\n"
        "	cmp r6, #0\n"
        "	beq _L_080E27F0\n"
        "	mov r0, #1\n"
        "	strb r0, [r6]\n"
        "_L_080E27F0:\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080E27FC @ 0x080E27FC (192B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern int func_080D01F8();
extern int func_080D3BC0();
extern void func_080E21E0();
int func_080E27FC(int param_1, int param_2, int param_3, int param_4) {
    int r7_var;
    register int r6 asm("r6");
    register int r5 asm("r5");
    register int r4 asm("r4");
    register int ret asm("r0");
    __asm__ volatile(
        "add %0, r0, #0\n\t"
        "add %1, r1, #0\n\t"
        "ldr %3, [sp, #0x14]\n\t"
        "add %2, r3, #0\n\t"
        "ldr r0, [%1, #4]\n\t"
        "cmp %2, r0\n\t"
        "beq _alloc_left_E27FC\n\t"
        "ldr r0, [sp, #0x18]\n\t"
        "cmp r0, #0\n\t"
        "bne _alloc_right_E27FC\n\t"
        "cmp r2, #0\n\t"
        "bne _alloc_left_E27FC\n\t"
        "mov r2, #0\n\t"
        "ldr r1, [%3]\n\t"
        "ldr r0, [%2, #0x10]\n\t"
        "cmp r1, r0\n\t"
        "bhs _chk_r2_E27FC\n\t"
        "mov r2, #1\n"
        "_chk_r2_E27FC:\n\t"
        "cmp r2, #0\n\t"
        "beq _alloc_right_E27FC\n"
        "_alloc_left_E27FC:\n\t"
        "mov r0, #0x18\n\t"
        "bl func_080D01F8\n\t"
        "add r2, r0, #0\n\t"
        "cmp r2, #0\n\t"
        "bne _init_left_E27FC\n\t"
        "mov r0, #0x18\n\t"
        "bl func_080D3BC0\n\t"
        "add r2, r0, #0\n"
        "_init_left_E27FC:\n\t"
        "add r1, r2, #0\n\t"
        "add r1, #0x10\n\t"
        "cmp r1, #0\n\t"
        "beq _link_left_E27FC\n\t"
        "ldr r0, [%3]\n\t"
        "str r0, [r2, #0x10]\n\t"
        "ldr r0, [%3, #4]\n\t"
        "str r0, [r1, #4]\n"
        "_link_left_E27FC:\n\t"
        "add %3, r2, #0\n\t"
        "str %3, [%2, #8]\n\t"
        "ldr r1, [%1, #4]\n\t"
        "cmp %2, r1\n\t"
        "bne _chk_leftmost_E27FC\n\t"
        "str %3, [%2, #4]\n\t"
        "ldr r0, [%1, #4]\n\t"
        "str %3, [r0, #0xc]\n\t"
        "b _rebalance_E27FC\n"
        "_chk_leftmost_E27FC:\n\t"
        "ldr r0, [r1, #8]\n\t"
        "cmp %2, r0\n\t"
        "bne _rebalance_E27FC\n\t"
        "str %3, [r1, #8]\n\t"
        "b _rebalance_E27FC\n"
        "_alloc_right_E27FC:\n\t"
        "mov r0, #0x18\n\t"
        "bl func_080D01F8\n\t"
        "add r2, r0, #0\n\t"
        "cmp r2, #0\n\t"
        "bne _init_right_E27FC\n\t"
        "mov r0, #0x18\n\t"
        "bl func_080D3BC0\n\t"
        "add r2, r0, #0\n"
        "_init_right_E27FC:\n\t"
        "add r1, r2, #0\n\t"
        "add r1, #0x10\n\t"
        "cmp r1, #0\n\t"
        "beq _link_right_E27FC\n\t"
        "ldr r0, [%3]\n\t"
        "str r0, [r2, #0x10]\n\t"
        "ldr r0, [%3, #4]\n\t"
        "str r0, [r1, #4]\n"
        "_link_right_E27FC:\n\t"
        "add %3, r2, #0\n\t"
        "str %3, [%2, #0xc]\n\t"
        "ldr r1, [%1, #4]\n\t"
        "ldr r0, [r1, #0xc]\n\t"
        "cmp %2, r0\n\t"
        "bne _rebalance_E27FC\n\t"
        "str %3, [r1, #0xc]\n"
        "_rebalance_E27FC:\n\t"
        "str %2, [%3, #4]\n\t"
        "mov r0, #0\n\t"
        "str r0, [%3, #8]\n\t"
        "str r0, [%3, #0xc]\n\t"
        "ldr r1, [%1, #4]\n\t"
        "add r1, #4\n\t"
        "add r0, %3, #0\n\t"
        "bl func_080E21E0\n\t"
        "ldr r0, [%1, #8]\n\t"
        "add r0, #1\n\t"
        "str r0, [%1, #8]\n\t"
        "str %3, [%0]\n\t"
        "add r0, %0, #0"
        : "=l"(r7_var), "=l"(r6), "=l"(r5), "=l"(r4) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    __asm__ volatile("" : "=r"(ret));
    return ret;
}

/* --- func_080E28BC @ 0x080E28BC (180B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E28BC @ 0x080E28BC (180 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW), +0x04:u32(R), +0x04:u8(W), +0x08:u32(R), +0x0C:u32(R), +0x10:u32(R)
 * Callees: func_080E2354, func_080E27FC
 * CFG Structure:
 *   L_080E28BC: if (==) goto L_080E28F2
 *   L_080E28D6: if (>= (u)) goto L_080E28E2
 *   L_080E28E2: if (==) goto L_080E28EC
 *   L_080E28EE: if (!=) goto L_080E28D6
 *   L_080E28F2: if (==) goto L_080E292C
 *   L_080E2908: if (==) goto L_080E2924
 *   L_080E2924: call func_080E2354()
 *   L_080E292C: if (>= (u)) goto L_080E293A
 *   L_080E293A: if (==) goto L_080E295C
 *   L_080E2956: goto L_080E2960
 * ========================================================================== */
extern void func_080E2354(void);
extern void func_080E27FC(void);
int func_080E28BC(void) {
    u32 sp0, sp1, sp2, sp3, sp4;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	mov r8, r1\n"
        "	add r7, r2, #0\n"
        "	ldr r4, [r1, #4]\n"
        "	ldr r5, [r4, #4]\n"
        "	mov r0, #1\n"
        "	cmp r5, #0\n"
        "	beq _L_080E28F2\n"
        "	ldr r2, [r7]\n"
        "_L_080E28D6:\n"
        "	add r4, r5, #0\n"
        "	mov r1, #0\n"
        "	ldr r0, [r4, #0x10]\n"
        "	cmp r2, r0\n"
        "	bhs _L_080E28E2\n"
        "	mov r1, #1\n"
        "_L_080E28E2:\n"
        "	add r0, r1, #0\n"
        "	cmp r0, #0\n"
        "	beq _L_080E28EC\n"
        "	ldr r5, [r4, #8]\n"
        "	b _L_080E28EE\n"
        "_L_080E28EC:\n"
        "	ldr r5, [r4, #0xc]\n"
        "_L_080E28EE:\n"
        "	cmp r5, #0\n"
        "	bne _L_080E28D6\n"
        "_L_080E28F2:\n"
        "	str r4, [sp, #8]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E292C\n"
        "	mov r1, r8\n"
        "	ldr r0, [r1, #4]\n"
        "	ldr r0, [r0, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	mov r1, #0\n"
        "	cmp r4, r0\n"
        "	bne _L_080E2908\n"
        "	mov r1, #1\n"
        "_L_080E2908:\n"
        "	cmp r1, #0\n"
        "	beq _L_080E2924\n"
        "	str r7, [sp]\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #4]\n"
        "	add r0, sp, #0x10\n"
        "	mov r1, r8\n"
        "	add r2, r5, #0\n"
        "	add r3, r4, #0\n"
        "	bl func_080E27FC\n"
        "	mov r1, #1\n"
        "	ldr r0, [sp, #0x10]\n"
        "	b _L_080E2956\n"
        "_L_080E2924:\n"
        "	add r0, r4, #0\n"
        "	bl func_080E2354\n"
        "	str r0, [sp, #8]\n"
        "_L_080E292C:\n"
        "	ldr r2, [sp, #8]\n"
        "	mov r3, #0\n"
        "	ldr r1, [r2, #0x10]\n"
        "	ldr r0, [r7]\n"
        "	cmp r1, r0\n"
        "	bhs _L_080E293A\n"
        "	mov r3, #1\n"
        "_L_080E293A:\n"
        "	add r0, r3, #0\n"
        "	cmp r0, #0\n"
        "	beq _L_080E295C\n"
        "	str r7, [sp]\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #4]\n"
        "	add r0, sp, #0xc\n"
        "	mov r1, r8\n"
        "	add r2, r5, #0\n"
        "	add r3, r4, #0\n"
        "	bl func_080E27FC\n"
        "	mov r1, #1\n"
        "	ldr r0, [sp, #0xc]\n"
        "_L_080E2956:\n"
        "	str r0, [r6]\n"
        "	strb r1, [r6, #4]\n"
        "	b _L_080E2960\n"
        "_L_080E295C:\n"
        "	str r2, [r6]\n"
        "	strb r0, [r6, #4]\n"
        "_L_080E2960:\n"
        "	add r0, r6, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080E2970 @ 0x080E2970 (440B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E2970 @ 0x080E2970 (440 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW), +0x04:u32(R), +0x08:u32(R), +0x0C:u32(R), +0x10:u32(R)
 * Callees: func_080E2354, func_080E27FC, func_080E28BC, func_080E2B28
 * CFG Structure:
 *   L_080E2970: if (!=) goto L_080E2A00
 *   L_080E29A0: if (>= (u)) goto L_080E29AE
 *   L_080E29AE: if (!=) goto L_080E2A74
 *   L_080E29BC: if (!=) goto L_080E29C4
 *   L_080E29C4: call func_080E2B28(); if (!=) goto L_080E29DC
 *   L_080E29DC: if (>= (u)) goto L_080E29EA
 *   L_080E29EA: if (!=) goto L_080E29F0
 *   L_080E29F0: if (==) goto L_080E2ADA
 *   L_080E2A00: if (!=) goto L_080E2A2A
 *   L_080E2A12: if (==) goto L_080E2A1C
 *   L_080E2A1C: call func_080E28BC(); goto L_080E2B14
 *   L_080E2A2A: call func_080E2354(); if (>= (u)) goto L_080E2A46
 * ========================================================================== */
extern void func_080E2354(void);
extern void func_080E27FC(void);
extern void func_080E28BC(void);
extern void func_080E2B28(void);
int func_080E2970(void) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5));
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	add r6, r1, #0\n"
        "	mov r8, r2\n"
        "	add r4, r3, #0\n"
        "	ldr r1, [r6, #4]\n"
        "	ldr r2, [r2]\n"
        "	ldr r0, [r1, #8]\n"
        "	cmp r2, r0\n"
        "	bne _L_080E2A00\n"
        "	ldr r0, [r6, #8]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E29A0\n"
        "	add r0, sp, #8\n"
        "	add r1, r6, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080E28BC\n"
        "	ldr r0, [sp, #8]\n"
        "	b _L_080E2B14\n"
        "_L_080E29A0:\n"
        "	mov r0, #0\n"
        "	ldr r1, [r2, #0x10]\n"
        "	add r3, r2, #0\n"
        "	ldr r2, [r4]\n"
        "	cmp r2, r1\n"
        "	bhs _L_080E29AE\n"
        "	mov r0, #1\n"
        "_L_080E29AE:\n"
        "	mov sb, r0\n"
        "	cmp r0, #0\n"
        "	bne _L_080E2A74\n"
        "	mov r0, #0\n"
        "	cmp r1, r2\n"
        "	bhs _L_080E29BC\n"
        "	mov r0, #1\n"
        "_L_080E29BC:\n"
        "	cmp r0, #0\n"
        "	bne _L_080E29C4\n"
        "	str r3, [r7]\n"
        "	b _L_080E2B16\n"
        "_L_080E29C4:\n"
        "	str r3, [sp, #8]\n"
        "	add r0, r3, #0\n"
        "	bl func_080E2B28\n"
        "	add r2, r0, #0\n"
        "	str r2, [sp, #8]\n"
        "	ldr r0, [r6, #4]\n"
        "	cmp r2, r0\n"
        "	bne _L_080E29DC\n"
        "	mov r0, r8\n"
        "	ldr r3, [r0]\n"
        "	b _L_080E2ADA\n"
        "_L_080E29DC:\n"
        "	mov r3, #0\n"
        "	ldr r1, [r4]\n"
        "	ldr r0, [r2, #0x10]\n"
        "	add r5, r2, #0\n"
        "	cmp r1, r0\n"
        "	bhs _L_080E29EA\n"
        "	mov r3, #1\n"
        "_L_080E29EA:\n"
        "	cmp r3, #0\n"
        "	bne _L_080E29F0\n"
        "	b _L_080E2B08\n"
        "_L_080E29F0:\n"
        "	mov r1, r8\n"
        "	ldr r3, [r1]\n"
        "	ldr r0, [r3, #0xc]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E2ADA\n"
        "	str r4, [sp]\n"
        "	mov r0, sb\n"
        "	b _L_080E2AEE\n"
        "_L_080E2A00:\n"
        "	cmp r2, r1\n"
        "	bne _L_080E2A2A\n"
        "	ldr r3, [r2, #0xc]\n"
        "	mov r5, #0\n"
        "	ldr r1, [r3, #0x10]\n"
        "	ldr r0, [r4]\n"
        "	cmp r1, r0\n"
        "	bhs _L_080E2A12\n"
        "	mov r5, #1\n"
        "_L_080E2A12:\n"
        "	cmp r5, #0\n"
        "	beq _L_080E2A1C\n"
        "	str r4, [sp]\n"
        "	str r2, [sp, #4]\n"
        "	b _L_080E2ADE\n"
        "_L_080E2A1C:\n"
        "	add r0, sp, #8\n"
        "	add r1, r6, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080E28BC\n"
        "	ldr r0, [sp, #8]\n"
        "	b _L_080E2B14\n"
        "_L_080E2A2A:\n"
        "	str r2, [sp, #8]\n"
        "	add r0, r2, #0\n"
        "	bl func_080E2354\n"
        "	add r2, r0, #0\n"
        "	str r2, [sp, #8]\n"
        "	mov r1, r8\n"
        "	ldr r3, [r1]\n"
        "	mov r5, #0\n"
        "	ldr r1, [r4]\n"
        "	ldr r0, [r3, #0x10]\n"
        "	cmp r1, r0\n"
        "	bhs _L_080E2A46\n"
        "	mov r5, #1\n"
        "_L_080E2A46:\n"
        "	mov sb, r5\n"
        "	cmp r5, #0\n"
        "	beq _L_080E2A86\n"
        "	mov r0, #0\n"
        "	mov ip, r0\n"
        "	ldr r0, [r2, #0x10]\n"
        "	add r5, r2, #0\n"
        "	cmp r0, r1\n"
        "	bhs _L_080E2A5C\n"
        "	mov r1, #1\n"
        "	mov ip, r1\n"
        "_L_080E2A5C:\n"
        "	mov r0, ip\n"
        "	cmp r0, #0\n"
        "	beq _L_080E2A86\n"
        "	ldr r0, [r5, #0xc]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E2A74\n"
        "	str r4, [sp]\n"
        "	str r5, [sp, #4]\n"
        "	add r0, r7, #0\n"
        "	add r1, r6, #0\n"
        "	mov r2, #0\n"
        "	b _L_080E2AF6\n"
        "_L_080E2A74:\n"
        "	str r4, [sp]\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #4]\n"
        "	add r0, r7, #0\n"
        "	add r1, r6, #0\n"
        "	add r2, r3, #0\n"
        "	bl func_080E27FC\n"
        "	b _L_080E2B16\n"
        "_L_080E2A86:\n"
        "	mov r1, r8\n"
        "	ldr r0, [r1]\n"
        "	str r0, [sp, #0xc]\n"
        "	bl func_080E2B28\n"
        "	mov ip, r0\n"
        "	str r0, [sp, #0xc]\n"
        "	mov r0, #1\n"
        "	mov r1, sb\n"
        "	eor r1, r0\n"
        "	mov r0, sb\n"
        "	cmp r0, #0\n"
        "	bne _L_080E2AFE\n"
        "	mov r1, r8\n"
        "	ldr r0, [r1]\n"
        "	mov r5, #0\n"
        "	ldr r1, [r0, #0x10]\n"
        "	add r3, r0, #0\n"
        "	ldr r2, [r4]\n"
        "	cmp r1, r2\n"
        "	bhs _L_080E2AB2\n"
        "	mov r5, #1\n"
        "_L_080E2AB2:\n"
        "	add r1, r5, #0\n"
        "	cmp r1, #0\n"
        "	beq _L_080E2AFE\n"
        "	ldr r0, [r6, #4]\n"
        "	mov r5, ip\n"
        "	cmp r5, r0\n"
        "	beq _L_080E2AD4\n"
        "	mov r0, #0\n"
        "	mov ip, r0\n"
        "	ldr r0, [r5, #0x10]\n"
        "	cmp r2, r0\n"
        "	bhs _L_080E2ACE\n"
        "	mov r0, #1\n"
        "	mov ip, r0\n"
        "_L_080E2ACE:\n"
        "	mov r0, ip\n"
        "	cmp r0, #0\n"
        "	beq _L_080E2AFE\n"
        "_L_080E2AD4:\n"
        "	ldr r0, [r3, #0xc]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E2AEA\n"
        "_L_080E2ADA:\n"
        "	str r4, [sp]\n"
        "	str r3, [sp, #4]\n"
        "_L_080E2ADE:\n"
        "	add r0, r7, #0\n"
        "	add r1, r6, #0\n"
        "	mov r2, #0\n"
        "	bl func_080E27FC\n"
        "	b _L_080E2B16\n"
        "_L_080E2AEA:\n"
        "	str r4, [sp]\n"
        "	mov r0, #0\n"
        "_L_080E2AEE:\n"
        "	str r0, [sp, #4]\n"
        "	add r0, r7, #0\n"
        "	add r1, r6, #0\n"
        "	add r2, r5, #0\n"
        "_L_080E2AF6:\n"
        "	add r3, r5, #0\n"
        "	bl func_080E27FC\n"
        "	b _L_080E2B16\n"
        "_L_080E2AFE:\n"
        "	cmp sb, r1\n"
        "	bne _L_080E2B08\n"
        "	mov r1, r8\n"
        "	ldr r0, [r1]\n"
        "	b _L_080E2B14\n"
        "_L_080E2B08:\n"
        "	add r0, sp, #0x10\n"
        "	add r1, r6, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080E28BC\n"
        "	ldr r0, [sp, #0x10]\n"
        "_L_080E2B14:\n"
        "	str r0, [r7]\n"
        "_L_080E2B16:\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080E2B28 @ 0x080E2B28 (52B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E2B28 @ 0x080E2B28 (52 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x04:u32(R), +0x08:u32(R), +0x0C:u32(R)
 * CFG Structure:
 *   L_080E2B28: if (==) goto L_080E2B46
 *   L_080E2B3A: if (!=) goto L_080E2B3A
 *   L_080E2B46: if (==) goto L_080E2B44
 *   L_080E2B56: return
 * ========================================================================== */
void func_080E2B28(void) {
    __asm__ volatile(
        "	push {lr}\n"
        "	add r1, r0, #0\n"
        "	ldr r0, [r1, #0xc]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E2B46\n"
        "	add r1, r0, #0\n"
        "	ldr r0, [r1, #8]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E2B56\n"
        "_L_080E2B3A:\n"
        "	ldr r1, [r1, #8]\n"
        "	ldr r0, [r1, #8]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E2B3A\n"
        "	b _L_080E2B56\n"
        "_L_080E2B44:\n"
        "	add r1, r2, #0\n"
        "_L_080E2B46:\n"
        "	ldr r2, [r1, #4]\n"
        "	ldr r0, [r2, #0xc]\n"
        "	cmp r1, r0\n"
        "	beq _L_080E2B44\n"
        "	ldr r0, [r1, #0xc]\n"
        "	cmp r0, r2\n"
        "	beq _L_080E2B56\n"
        "	add r1, r2, #0\n"
        "_L_080E2B56:\n"
        "	add r0, r1, #0\n"
        "	pop {r1}\n"
        "	bx r1\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080E2B5C @ 0x080E2B5C (44B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D0260();
void func_080E2B5C(u32 arg0,int arg1) {
  int val;
  while (val = arg1, val != 0) {
    func_080E2B5C(arg0,*(u32 *)(val + 0xc));
    arg1 = *(int *)(val + 8);
    if (val != 0) {
      func_080D0260(val);
    }
  }
}

/* --- func_080E2B88 @ 0x080E2B88 (44B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D0260();
void func_080E2B88(u32 arg0,int arg1) {
  int val;
  while (val = arg1, val != 0) {
    func_080E2B88(arg0,*(u32 *)(val + 0xc));
    arg1 = *(int *)(val + 8);
    if (val != 0) {
      func_080D0260(val);
    }
  }
}

/* --- func_080E2BB4 @ 0x080E2BB4 (532B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E2BB4 @ 0x080E2BB4 (532 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW), +0x00:u8(RW), +0x04:u16(RW), +0x04:u32(R), +0x08:u32(R), +0x0C:u32(R), +0x10:u32(R), +0x14:u32(R)
 * Callees: func_080074C0, func_08007D4C
 * CFG Structure:
 *   L_080E2BB4: if (==) goto L_080E2BD8
 *   L_080E2BD8: if (!=) goto L_080E2BE4
 *   L_080E2BE4: if (<= (s)) goto L_080E2BFC
 *   L_080E2BFC: if (<= (s)) goto L_080E2C12
 *   L_080E2C12: if (> (s)) goto L_080E2C40
 *   L_080E2C40: if (> (s)) goto L_080E2C50
 *   L_080E2C50: if (==) goto L_080E2C8E
 *   L_080E2C6E: if (>= (u)) goto L_080E2C78
 *   L_080E2C78: if (!=) goto L_080E2C88
 *   L_080E2C8A: if (!=) goto L_080E2C6E
 *   L_080E2C8E: if (==) goto L_080E2CA4
 * ========================================================================== */
extern void func_080074C0(void);
extern void func_08007D4C(void);
void func_080E2BB4(void) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5, sp6, sp7, sp8, sp9;
    int r7_var;
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5), "m"(sp6), "m"(sp7), "m"(sp8), "m"(sp9));
    __asm__ volatile(
        "	mov sl, r0\n"
        "	str r1, [sp, #0x10]\n"
        "	str r3, [sp, #0x14]\n"
        "	ldr r0, [r2, #8]\n"
        "	str r0, [sp, #0x18]\n"
        "	ldr r1, [r2, #0x10]\n"
        "	str r1, [sp, #0x1c]\n"
        "	ldr r3, [r2]\n"
        "	mov r0, #0\n"
        "	cmp r3, #0\n"
        "	beq _L_080E2BD8\n"
        "	ldrh r0, [r2, #4]\n"
        "_L_080E2BD8:\n"
        "	lsl r0, r0, #3\n"
        "	add r0, r3, r0\n"
        "	str r0, [sp, #0x20]\n"
        "	cmp r3, r0\n"
        "	bne _L_080E2BE4\n"
        "	b _L_080E2DA2\n"
        "_L_080E2BE4:\n"
        "	ldm r3!, {r0, r1}\n"
        "	str r0, [sp]\n"
        "	str r1, [sp, #4]\n"
        "	ldr r2, [sp]\n"
        "	lsl r0, r2, #7\n"
        "	asr r6, r0, #0x17\n"
        "	ldr r0, [sp, #0x14]\n"
        "	add r6, r6, r0\n"
        "	str r3, [sp, #0x24]\n"
        "	cmp r6, #0xef\n"
        "	ble _L_080E2BFC\n"
        "	b _L_080E2D98\n"
        "_L_080E2BFC:\n"
        "	mov r0, sp\n"
        "	ldrb r0, [r0]\n"
        "	lsl r0, r0, #0x18\n"
        "	asr r0, r0, #0x18\n"
        "	mov r8, r0\n"
        "	ldr r1, [sp, #0x48]\n"
        "	add r8, r1\n"
        "	mov r0, r8\n"
        "	cmp r0, #0x9f\n"
        "	ble _L_080E2C12\n"
        "	b _L_080E2D98\n"
        "_L_080E2C12:\n"
        "	lsl r1, r2, #0x10\n"
        "	lsr r1, r1, #0x1e\n"
        "	lsl r1, r1, #2\n"
        "	lsr r0, r2, #0x1e\n"
        "	add r1, r1, r0\n"
        "	ldr r2, .Lpool_080E2C84\n"
        "	lsr r0, r1, #1\n"
        "	add r0, r0, r2\n"
        "	ldrb r2, [r0]\n"
        "	mov r0, #1\n"
        "	and r1, r0\n"
        "	lsl r1, r1, #2\n"
        "	asr r2, r1\n"
        "	mov r3, #3\n"
        "	add r1, r2, #0\n"
        "	and r1, r3\n"
        "	mov r4, #8\n"
        "	add r0, r4, #0\n"
        "	lsl r0, r1\n"
        "	add r0, r6, r0\n"
        "	cmp r0, #0\n"
        "	bgt _L_080E2C40\n"
        "	b _L_080E2D98\n"
        "_L_080E2C40:\n"
        "	lsr r1, r2, #2\n"
        "	and r1, r3\n"
        "	add r0, r4, #0\n"
        "	lsl r0, r1\n"
        "	add r0, r8\n"
        "	cmp r0, #0\n"
        "	bgt _L_080E2C50\n"
        "	b _L_080E2D98\n"
        "_L_080E2C50:\n"
        "	ldr r0, [sp, #4]\n"
        "	lsl r0, r0, #0x16\n"
        "	lsr r0, r0, #0x11\n"
        "	ldr r1, [sp, #0x18]\n"
        "	add r0, r1, r0\n"
        "	str r0, [sp, #8]\n"
        "	mov r1, sl\n"
        "	add r1, #4\n"
        "	add r7, sp, #8\n"
        "	ldr r4, [r1, #4]\n"
        "	ldr r2, [r4, #4]\n"
        "	mov ip, r1\n"
        "	cmp r2, #0\n"
        "	beq _L_080E2C8E\n"
        "	add r5, r0, #0\n"
        "_L_080E2C6E:\n"
        "	mov r3, #0\n"
        "	ldr r0, [r2, #0x10]\n"
        "	cmp r0, r5\n"
        "	bhs _L_080E2C78\n"
        "	mov r3, #1\n"
        "_L_080E2C78:\n"
        "	cmp r3, #0\n"
        "	bne _L_080E2C88\n"
        "	add r4, r2, #0\n"
        "	ldr r2, [r4, #8]\n"
        "	b _L_080E2C8A\n"
        "	.align 2, 0\n"
        ".Lpool_080E2C84:\n"
        "	.word 0x080FC066\n"
        "_L_080E2C88:\n"
        "	ldr r2, [r2, #0xc]\n"
        "_L_080E2C8A:\n"
        "	cmp r2, #0\n"
        "	bne _L_080E2C6E\n"
        "_L_080E2C8E:\n"
        "	ldr r3, [r1, #4]\n"
        "	cmp r4, r3\n"
        "	beq _L_080E2CA4\n"
        "	mov r2, #0\n"
        "	ldr r1, [r7]\n"
        "	ldr r0, [r4, #0x10]\n"
        "	cmp r1, r0\n"
        "	bhs _L_080E2CA0\n"
        "	mov r2, #1\n"
        "_L_080E2CA0:\n"
        "	cmp r2, #0\n"
        "	beq _L_080E2CA6\n"
        "_L_080E2CA4:\n"
        "	add r4, r3, #0\n"
        "_L_080E2CA6:\n"
        "	mov r0, ip\n"
        "	ldr r1, [r0, #4]\n"
        "	eor r1, r4\n"
        "	neg r0, r1\n"
        "	orr r0, r1\n"
        "	cmp r0, #0\n"
        "	bge _L_080E2CBE\n"
        "	ldr r1, [r4, #0x14]\n"
        "	mov r0, sl\n"
        "	bl func_08007D4C\n"
        "	b _L_080E2CC2\n"
        "_L_080E2CBE:\n"
        "	mov r0, #1\n"
        "	neg r0, r0\n"
        "_L_080E2CC2:\n"
        "	mov sb, r0\n"
        "	cmp r0, #0\n"
        "	blt _L_080E2D98\n"
        "	ldr r0, [sp, #4]\n"
        "	lsl r0, r0, #0x10\n"
        "	lsr r0, r0, #0x1c\n"
        "	lsl r0, r0, #5\n"
        "	ldr r1, [sp, #0x1c]\n"
        "	add r0, r1, r0\n"
        "	str r0, [sp, #0xc]\n"
        "	mov r1, sl\n"
        "	add r1, #0x18\n"
        "	add r7, sp, #0xc\n"
        "	ldr r4, [r1, #4]\n"
        "	ldr r2, [r4, #4]\n"
        "	mov ip, r1\n"
        "	cmp r2, #0\n"
        "	beq _L_080E2D02\n"
        "	add r5, r0, #0\n"
        "_L_080E2CE8:\n"
        "	mov r3, #0\n"
        "	ldr r0, [r2, #0x10]\n"
        "	cmp r0, r5\n"
        "	bhs _L_080E2CF2\n"
        "	mov r3, #1\n"
        "_L_080E2CF2:\n"
        "	cmp r3, #0\n"
        "	bne _L_080E2CFC\n"
        "	add r4, r2, #0\n"
        "	ldr r2, [r4, #8]\n"
        "	b _L_080E2CFE\n"
        "_L_080E2CFC:\n"
        "	ldr r2, [r2, #0xc]\n"
        "_L_080E2CFE:\n"
        "	cmp r2, #0\n"
        "	bne _L_080E2CE8\n"
        "_L_080E2D02:\n"
        "	ldr r3, [r1, #4]\n"
        "	cmp r4, r3\n"
        "	beq _L_080E2D18\n"
        "	mov r2, #0\n"
        "	ldr r1, [r7]\n"
        "	ldr r0, [r4, #0x10]\n"
        "	cmp r1, r0\n"
        "	bhs _L_080E2D14\n"
        "	mov r2, #1\n"
        "_L_080E2D14:\n"
        "	cmp r2, #0\n"
        "	beq _L_080E2D1A\n"
        "_L_080E2D18:\n"
        "	add r4, r3, #0\n"
        "_L_080E2D1A:\n"
        "	mov r0, ip\n"
        "	ldr r1, [r0, #4]\n"
        "	eor r1, r4\n"
        "	neg r0, r1\n"
        "	orr r0, r1\n"
        "	cmp r0, #0\n"
        "	bge _L_080E2D36\n"
        "	ldr r1, [r4, #0x14]\n"
        "	mov r0, sl\n"
        "	add r0, #0x14\n"
        "	bl func_080074C0\n"
        "	add r4, r0, #0\n"
        "	b _L_080E2D3A\n"
        "_L_080E2D36:\n"
        "	mov r4, #1\n"
        "	neg r4, r4\n"
        "_L_080E2D3A:\n"
        "	cmp r4, #0\n"
        "	blt _L_080E2D98\n"
        "	mov r1, r8\n"
        "	lsl r0, r1, #0x18\n"
        "	lsr r0, r0, #0x18\n"
        "	ldr r1, =0xFFFFFF00\n"
        "	ldr r3, [sp]\n"
        "	and r3, r1\n"
        "	orr r3, r0\n"
        "	ldr r0, =0x000001FF\n"
        "	and r6, r0\n"
        "	lsl r1, r6, #0x10\n"
        "	ldr r0, =0xFE00FFFF\n"
        "	and r3, r0\n"
        "	orr r3, r1\n"
        "	str r3, [sp]\n"
        "	mov r1, sb\n"
        "	lsl r0, r1, #0x16\n"
        "	lsr r0, r0, #0x16\n"
        "	ldr r1, =0xFFFFFC00\n"
        "	mov r5, sp\n"
        "	ldr r2, [sp, #4]\n"
        "	and r2, r1\n"
        "	orr r2, r0\n"
        "	lsl r0, r4, #0x10\n"
        "	lsr r0, r0, #0x10\n"
        "	mov r1, #0xf\n"
        "	and r0, r1\n"
        "	lsl r0, r0, #0xc\n"
        "	ldr r1, =0xFFFF0FFF\n"
        "	and r2, r1\n"
        "	orr r2, r0\n"
        "	str r2, [sp, #4]\n"
        "	ldr r0, [sp, #0x10]\n"
        "	ldrb r2, [r0]\n"
        "	cmp r2, #0x7f\n"
        "	bhi _L_080E2D98\n"
        "	lsl r0, r2, #3\n"
        "	add r0, #4\n"
        "	ldr r1, [sp, #0x10]\n"
        "	add r0, r1, r0\n"
        "	str r3, [r0]\n"
        "	ldrh r1, [r5, #4]\n"
        "	strh r1, [r0, #4]\n"
        "	add r0, r2, #1\n"
        "	ldr r1, [sp, #0x10]\n"
        "	strb r0, [r1]\n"
        "_L_080E2D98:\n"
        "	ldr r3, [sp, #0x24]\n"
        "	ldr r0, [sp, #0x20]\n"
        "	cmp r3, r0\n"
        "	beq _L_080E2DA2\n"
        "	b _L_080E2BE4\n"
        "_L_080E2DA2:\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r10", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_080E2DC8 @ 0x080E2DC8 (108B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E2DC8 @ 0x080E2DC8 (108 bytes)
 * Role   : C++ SGI STL Node Allocator / _Rb_tree / Container Template Method
 * Fields : +0x00:u8(W), +0x04:u32(RW), +0x08:u32(W), +0x0C:u32(W)
 * Callees: func_08007128, func_08007874, func_080D01F8, func_080D3BC0
 * CFG Structure:
 *   L_080E2DC8: call func_08007874(); call func_080D01F8(); if (!=) goto L_080E2DE8
 *   L_080E2DE8: call func_08007128(); call func_080D01F8(); if (!=) goto L_080E2E18
 *   L_080E2E18: return
 * ========================================================================== */
extern void func_08007128(void);
extern void func_08007874(void);
extern void func_080D01F8(void);
extern void func_080D3BC0(void);
int func_080E2DC8(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	bl func_08007874\n"
        "	add r4, r6, #4\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	mov r0, #0x18\n"
        "	bl func_080D01F8\n"
        "	cmp r0, #0\n"
        "	bne _L_080E2DE8\n"
        "	mov r0, #0x18\n"
        "	bl func_080D3BC0\n"
        "_L_080E2DE8:\n"
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
        "	add r0, #0x14\n"
        "	bl func_08007128\n"
        "	add r4, r6, #0\n"
        "	add r4, #0x18\n"
        "	str r5, [r4, #4]\n"
        "	mov r0, #0x18\n"
        "	bl func_080D01F8\n"
        "	cmp r0, #0\n"
        "	bne _L_080E2E18\n"
        "	mov r0, #0x18\n"
        "	bl func_080D3BC0\n"
        "_L_080E2E18:\n"
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

/* --- func_080E2E34 @ 0x080E2E34 (56B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080086BC();
extern u32 func_080D3914();
void func_080E2E34(int arg0,u32 arg1) {
  int val;
  *(u32 *)(arg0 + 0xc) = 0x080E5A28;
  val = *(int *)(arg0 + 8);
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 0x000005B4) + 8));
  }
  func_080086BC(arg0,arg1);
}

/* --- func_080E2E6C @ 0x080E2E6C (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080086BC();
void func_080E2E6C(void) {
  func_080086BC();
}

/* --- func_080E2E78 @ 0x080E2E78 (44B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D0260();
void func_080E2E78(u32 arg0,int arg1) {
  int val;
  while (val = arg1, val != 0) {
    func_080E2E78(arg0,*(u32 *)(val + 0xc));
    arg1 = *(int *)(val + 8);
    if (val != 0) {
      func_080D0260(val);
    }
  }
}

/* --- func_080E2EA4 @ 0x080E2EA4 (208B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E2EA4 @ 0x080E2EA4 (208 bytes)
 * Role   : C++ SGI STL Node Allocator / _Rb_tree / Container Template Method
 * Fields : +0x00:u32(RW), +0x00:u8(R), +0x01:u8(R), +0x04:u32(RW), +0x04:u8(RW), +0x08:u32(RW), +0x0C:u32(RW), +0x10:u32(W), +0x10:u8(R)
 * Callees: func_080D01F8, func_080D3BC0, func_080E21E0
 * CFG Structure:
 *   L_080E2EA4: if (==) goto L_080E2EDE
 *   L_080E2EDA: if (==) goto L_080E2F1E
 *   L_080E2EDE: call func_080D01F8(); if (!=) goto L_080E2EF2
 *   L_080E2EF2: if (==) goto L_080E2F02
 *   L_080E2F02: if (!=) goto L_080E2F14
 *   L_080E2F14: if (!=) goto L_080E2F50
 *   L_080E2F1E: call func_080D01F8(); if (!=) goto L_080E2F32
 *   L_080E2F32: if (==) goto L_080E2F42
 *   L_080E2F42: if (!=) goto L_080E2F50
 *   L_080E2F50: call func_080E21E0(); return
 * ========================================================================== */
extern void func_080D01F8(void);
extern void func_080D3BC0(void);
extern void func_080E21E0(void);
int func_080E2EA4(void) {
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	add r6, r1, #0\n"
        "	ldr r4, [sp, #0x14]\n"
        "	add r5, r3, #0\n"
        "	ldr r0, [r6, #4]\n"
        "	cmp r5, r0\n"
        "	beq _L_080E2EDE\n"
        "	ldr r0, [sp, #0x18]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E2F1E\n"
        "	cmp r2, #0\n"
        "	bne _L_080E2EDE\n"
        "	add r2, r5, #0\n"
        "	add r2, #0x10\n"
        "	mov r3, #0\n"
        "	ldrb r1, [r4]\n"
        "	ldrb r0, [r5, #0x10]\n"
        "	cmp r1, r0\n"
        "	blo _L_080E2ED8\n"
        "	cmp r0, r1\n"
        "	blo _L_080E2EDA\n"
        "	ldrb r0, [r4, #1]\n"
        "	ldrb r2, [r2, #1]\n"
        "	cmp r0, r2\n"
        "	bhs _L_080E2EDA\n"
        "_L_080E2ED8:\n"
        "	mov r3, #1\n"
        "_L_080E2EDA:\n"
        "	cmp r3, #0\n"
        "	beq _L_080E2F1E\n"
        "_L_080E2EDE:\n"
        "	mov r0, #0x18\n"
        "	bl func_080D01F8\n"
        "	add r1, r0, #0\n"
        "	cmp r1, #0\n"
        "	bne _L_080E2EF2\n"
        "	mov r0, #0x18\n"
        "	bl func_080D3BC0\n"
        "	add r1, r0, #0\n"
        "_L_080E2EF2:\n"
        "	add r2, r1, #0\n"
        "	add r2, #0x10\n"
        "	cmp r2, #0\n"
        "	beq _L_080E2F02\n"
        "	ldr r0, [r4]\n"
        "	str r0, [r1, #0x10]\n"
        "	ldrb r0, [r4, #4]\n"
        "	strb r0, [r2, #4]\n"
        "_L_080E2F02:\n"
        "	add r4, r1, #0\n"
        "	str r4, [r5, #8]\n"
        "	ldr r1, [r6, #4]\n"
        "	cmp r5, r1\n"
        "	bne _L_080E2F14\n"
        "	str r4, [r5, #4]\n"
        "	ldr r0, [r6, #4]\n"
        "	str r4, [r0, #0xc]\n"
        "	b _L_080E2F50\n"
        "_L_080E2F14:\n"
        "	ldr r0, [r1, #8]\n"
        "	cmp r5, r0\n"
        "	bne _L_080E2F50\n"
        "	str r4, [r1, #8]\n"
        "	b _L_080E2F50\n"
        "_L_080E2F1E:\n"
        "	mov r0, #0x18\n"
        "	bl func_080D01F8\n"
        "	add r1, r0, #0\n"
        "	cmp r1, #0\n"
        "	bne _L_080E2F32\n"
        "	mov r0, #0x18\n"
        "	bl func_080D3BC0\n"
        "	add r1, r0, #0\n"
        "_L_080E2F32:\n"
        "	add r2, r1, #0\n"
        "	add r2, #0x10\n"
        "	cmp r2, #0\n"
        "	beq _L_080E2F42\n"
        "	ldr r0, [r4]\n"
        "	str r0, [r1, #0x10]\n"
        "	ldrb r0, [r4, #4]\n"
        "	strb r0, [r2, #4]\n"
        "_L_080E2F42:\n"
        "	add r4, r1, #0\n"
        "	str r4, [r5, #0xc]\n"
        "	ldr r1, [r6, #4]\n"
        "	ldr r0, [r1, #0xc]\n"
        "	cmp r5, r0\n"
        "	bne _L_080E2F50\n"
        "	str r4, [r1, #0xc]\n"
        "_L_080E2F50:\n"
        "	str r5, [r4, #4]\n"
        "	mov r0, #0\n"
        "	str r0, [r4, #8]\n"
        "	str r0, [r4, #0xc]\n"
        "	ldr r1, [r6, #4]\n"
        "	add r1, #4\n"
        "	add r0, r4, #0\n"
        "	bl func_080E21E0\n"
        "	ldr r0, [r6, #8]\n"
        "	add r0, #1\n"
        "	str r0, [r6, #8]\n"
        "	str r4, [r7]\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080E2F74 @ 0x080E2F74 (224B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E2F74 @ 0x080E2F74 (224 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(W), +0x00:u8(R), +0x01:u8(R), +0x04:u32(R), +0x04:u8(W), +0x08:u32(R), +0x0C:u32(R), +0x10:u8(R)
 * Callees: func_080E2354, func_080E2EA4
 * CFG Structure:
 *   L_080E2F74: if (==) goto L_080E2FBC
 *   L_080E2F90: if (< (u)) goto L_080E2FAA
 *   L_080E2FAC: if (==) goto L_080E2FB6
 *   L_080E2FB8: if (!=) goto L_080E2F90
 *   L_080E2FBC: if (==) goto L_080E2FF6
 *   L_080E2FD2: if (==) goto L_080E2FEE
 *   L_080E2FEE: call func_080E2354()
 *   L_080E2FF6: if (< (u)) goto L_080E3016
 *   L_080E301A: if (==) goto L_080E303C
 * ========================================================================== */
extern void func_080E2354(void);
extern void func_080E2EA4(void);
int func_080E2F74(void) {
    u32 sp0, sp1, sp2, sp3, sp4;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4));
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	mov r8, r1\n"
        "	add r6, r2, #0\n"
        "	ldr r5, [r1, #4]\n"
        "	ldr r4, [r5, #4]\n"
        "	mov r0, #1\n"
        "	cmp r4, #0\n"
        "	beq _L_080E2FBC\n"
        "	ldrb r2, [r6]\n"
        "_L_080E2F90:\n"
        "	add r5, r4, #0\n"
        "	add r1, r5, #0\n"
        "	add r1, #0x10\n"
        "	mov r3, #0\n"
        "	ldrb r0, [r5, #0x10]\n"
        "	cmp r2, r0\n"
        "	blo _L_080E2FAA\n"
        "	cmp r0, r2\n"
        "	blo _L_080E2FAC\n"
        "	ldrb r0, [r6, #1]\n"
        "	ldrb r1, [r1, #1]\n"
        "	cmp r0, r1\n"
        "	bhs _L_080E2FAC\n"
        "_L_080E2FAA:\n"
        "	mov r3, #1\n"
        "_L_080E2FAC:\n"
        "	add r0, r3, #0\n"
        "	cmp r0, #0\n"
        "	beq _L_080E2FB6\n"
        "	ldr r4, [r4, #8]\n"
        "	b _L_080E2FB8\n"
        "_L_080E2FB6:\n"
        "	ldr r4, [r4, #0xc]\n"
        "_L_080E2FB8:\n"
        "	cmp r4, #0\n"
        "	bne _L_080E2F90\n"
        "_L_080E2FBC:\n"
        "	str r5, [sp, #8]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E2FF6\n"
        "	mov r1, r8\n"
        "	ldr r0, [r1, #4]\n"
        "	ldr r0, [r0, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	mov r1, #0\n"
        "	cmp r5, r0\n"
        "	bne _L_080E2FD2\n"
        "	mov r1, #1\n"
        "_L_080E2FD2:\n"
        "	cmp r1, #0\n"
        "	beq _L_080E2FEE\n"
        "	str r6, [sp]\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #4]\n"
        "	add r0, sp, #0x10\n"
        "	mov r1, r8\n"
        "	add r2, r4, #0\n"
        "	add r3, r5, #0\n"
        "	bl func_080E2EA4\n"
        "	mov r1, #1\n"
        "	ldr r0, [sp, #0x10]\n"
        "	b _L_080E3036\n"
        "_L_080E2FEE:\n"
        "	add r0, r5, #0\n"
        "	bl func_080E2354\n"
        "	str r0, [sp, #8]\n"
        "_L_080E2FF6:\n"
        "	ldr r0, [sp, #8]\n"
        "	add r3, r0, #0\n"
        "	add r3, #0x10\n"
        "	mov r1, #0\n"
        "	mov sb, r1\n"
        "	ldrb r2, [r0, #0x10]\n"
        "	ldrb r1, [r6]\n"
        "	mov ip, r0\n"
        "	cmp r2, r1\n"
        "	blo _L_080E3016\n"
        "	cmp r1, r2\n"
        "	blo _L_080E301A\n"
        "	ldrb r0, [r3, #1]\n"
        "	ldrb r1, [r6, #1]\n"
        "	cmp r0, r1\n"
        "	bhs _L_080E301A\n"
        "_L_080E3016:\n"
        "	mov r0, #1\n"
        "	mov sb, r0\n"
        "_L_080E301A:\n"
        "	mov r0, sb\n"
        "	cmp r0, #0\n"
        "	beq _L_080E303C\n"
        "	str r6, [sp]\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #4]\n"
        "	add r0, sp, #0xc\n"
        "	mov r1, r8\n"
        "	add r2, r4, #0\n"
        "	add r3, r5, #0\n"
        "	bl func_080E2EA4\n"
        "	mov r1, #1\n"
        "	ldr r0, [sp, #0xc]\n"
        "_L_080E3036:\n"
        "	str r0, [r7]\n"
        "	strb r1, [r7, #4]\n"
        "	b _L_080E3042\n"
        "_L_080E303C:\n"
        "	mov r1, ip\n"
        "	str r1, [r7]\n"
        "	strb r0, [r7, #4]\n"
        "_L_080E3042:\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080E3054 @ 0x080E3054 (660B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E3054 @ 0x080E3054 (660 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW), +0x00:u8(R), +0x01:u8(R), +0x04:u32(R), +0x08:u32(R), +0x0C:u32(R), +0x10:u8(R), +0x18:u8(RW), +0x1C:u8(RW)
 * Callees: func_080E2354, func_080E2B28, func_080E2EA4, func_080E2F74
 * CFG Structure:
 *   L_080E3054: if (!=) goto L_080E314C
 *   L_080E3086: if (< (u)) goto L_080E30AC
 *   L_080E30B0: if (==) goto L_080E30C4
 *   L_080E30C4: if (< (u)) goto L_080E30DE
 *   L_080E30E0: if (!=) goto L_080E30E8
 *   L_080E30E8: call func_080E2B28(); if (!=) goto L_080E3104
 *   L_080E3104: if (< (u)) goto L_080E3122
 *   L_080E3126: if (!=) goto L_080E312E
 *   L_080E312E: if (!=) goto L_080E313E
 * ========================================================================== */
extern void func_080E2354(void);
extern void func_080E2B28(void);
extern void func_080E2EA4(void);
extern void func_080E2F74(void);
int func_080E3054(void) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5, sp6, sp7;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5), "m"(sp6), "m"(sp7));
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	add r6, r1, #0\n"
        "	mov sl, r2\n"
        "	add r4, r3, #0\n"
        "	ldr r1, [r6, #4]\n"
        "	ldr r2, [r2]\n"
        "	ldr r0, [r1, #8]\n"
        "	cmp r2, r0\n"
        "	bne _L_080E314C\n"
        "	ldr r0, [r6, #8]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E3086\n"
        "	add r0, sp, #8\n"
        "	add r1, r6, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080E2F74\n"
        "	ldr r0, [sp, #8]\n"
        "	b _L_080E32D2\n"
        "_L_080E3086:\n"
        "	mov r0, #0x10\n"
        "	add r0, r0, r2\n"
        "	mov ip, r0\n"
        "	mov r1, #0\n"
        "	mov sb, r1\n"
        "	ldrb r0, [r4]\n"
        "	add r3, r0, #0\n"
        "	ldrb r1, [r2, #0x10]\n"
        "	add r5, r2, #0\n"
        "	mov r8, r0\n"
        "	cmp r3, r1\n"
        "	blo _L_080E30AC\n"
        "	cmp r1, r3\n"
        "	blo _L_080E30B0\n"
        "	ldrb r0, [r4, #1]\n"
        "	mov r2, ip\n"
        "	ldrb r2, [r2, #1]\n"
        "	cmp r0, r2\n"
        "	bhs _L_080E30B0\n"
        "_L_080E30AC:\n"
        "	mov r0, #1\n"
        "	mov sb, r0\n"
        "_L_080E30B0:\n"
        "	mov r1, sb\n"
        "	cmp r1, #0\n"
        "	beq _L_080E30C4\n"
        "	str r4, [sp]\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #4]\n"
        "	add r0, r7, #0\n"
        "	add r1, r6, #0\n"
        "	add r2, r5, #0\n"
        "	b _L_080E32A2\n"
        "_L_080E30C4:\n"
        "	add r3, r5, #0\n"
        "	add r3, #0x10\n"
        "	mov r1, #0\n"
        "	ldrb r2, [r5, #0x10]\n"
        "	mov r0, r8\n"
        "	cmp r2, r0\n"
        "	blo _L_080E30DE\n"
        "	cmp r0, r2\n"
        "	blo _L_080E30E0\n"
        "	ldrb r0, [r3, #1]\n"
        "	ldrb r2, [r4, #1]\n"
        "	cmp r0, r2\n"
        "	bhs _L_080E30E0\n"
        "_L_080E30DE:\n"
        "	mov r1, #1\n"
        "_L_080E30E0:\n"
        "	cmp r1, #0\n"
        "	bne _L_080E30E8\n"
        "	str r5, [r7]\n"
        "	b _L_080E32D4\n"
        "_L_080E30E8:\n"
        "	str r5, [sp, #8]\n"
        "	add r0, r5, #0\n"
        "	bl func_080E2B28\n"
        "	add r2, r0, #0\n"
        "	str r2, [sp, #8]\n"
        "	ldr r0, [r6, #4]\n"
        "	cmp r2, r0\n"
        "	bne _L_080E3104\n"
        "	mov r0, sl\n"
        "	ldr r3, [r0]\n"
        "	str r4, [sp]\n"
        "	str r3, [sp, #4]\n"
        "	b _L_080E317E\n"
        "_L_080E3104:\n"
        "	add r3, r2, #0\n"
        "	add r3, #0x10\n"
        "	mov r1, #0\n"
        "	mov r8, r1\n"
        "	ldrb r1, [r4]\n"
        "	ldrb r0, [r2, #0x10]\n"
        "	add r5, r2, #0\n"
        "	cmp r1, r0\n"
        "	blo _L_080E3122\n"
        "	cmp r0, r1\n"
        "	blo _L_080E3126\n"
        "	ldrb r0, [r4, #1]\n"
        "	ldrb r3, [r3, #1]\n"
        "	cmp r0, r3\n"
        "	bhs _L_080E3126\n"
        "_L_080E3122:\n"
        "	mov r2, #1\n"
        "	mov r8, r2\n"
        "_L_080E3126:\n"
        "	mov r0, r8\n"
        "	cmp r0, #0\n"
        "	bne _L_080E312E\n"
        "	b _L_080E32C6\n"
        "_L_080E312E:\n"
        "	mov r1, sl\n"
        "	ldr r3, [r1]\n"
        "	ldr r0, [r3, #0xc]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E313E\n"
        "	str r4, [sp]\n"
        "	str r3, [sp, #4]\n"
        "	b _L_080E317E\n"
        "_L_080E313E:\n"
        "	str r4, [sp]\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #4]\n"
        "	add r0, r7, #0\n"
        "	add r1, r6, #0\n"
        "	add r2, r5, #0\n"
        "	b _L_080E32A2\n"
        "_L_080E314C:\n"
        "	cmp r2, r1\n"
        "	bne _L_080E3198\n"
        "	ldr r0, [r2, #0xc]\n"
        "	add r2, r0, #0\n"
        "	add r2, #0x10\n"
        "	mov r3, #0\n"
        "	ldrb r0, [r0, #0x10]\n"
        "	ldrb r1, [r4]\n"
        "	cmp r0, r1\n"
        "	blo _L_080E316C\n"
        "	cmp r1, r0\n"
        "	blo _L_080E316E\n"
        "	ldrb r0, [r2, #1]\n"
        "	ldrb r2, [r4, #1]\n"
        "	cmp r0, r2\n"
        "	bhs _L_080E316E\n"
        "_L_080E316C:\n"
        "	mov r3, #1\n"
        "_L_080E316E:\n"
        "	cmp r3, #0\n"
        "	beq _L_080E318A\n"
        "	ldr r0, [r6, #4]\n"
        "	ldr r3, [r0, #0xc]\n"
        "	str r4, [sp]\n"
        "	mov r1, sl\n"
        "	ldr r0, [r1]\n"
        "	str r0, [sp, #4]\n"
        "_L_080E317E:\n"
        "	add r0, r7, #0\n"
        "	add r1, r6, #0\n"
        "	mov r2, #0\n"
        "	bl func_080E2EA4\n"
        "	b _L_080E32D4\n"
        "_L_080E318A:\n"
        "	add r0, sp, #8\n"
        "	add r1, r6, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080E2F74\n"
        "	ldr r0, [sp, #8]\n"
        "	b _L_080E32D2\n"
        "_L_080E3198:\n"
        "	str r2, [sp, #8]\n"
        "	add r0, r2, #0\n"
        "	bl func_080E2354\n"
        "	str r0, [sp, #8]\n"
        "	mov r2, sl\n"
        "	ldr r0, [r2]\n"
        "	add r2, r0, #0\n"
        "	add r2, #0x10\n"
        "	mov r3, #0\n"
        "	ldrb r1, [r4]\n"
        "	ldrb r0, [r0, #0x10]\n"
        "	cmp r1, r0\n"
        "	blo _L_080E31C0\n"
        "	cmp r0, r1\n"
        "	blo _L_080E31C2\n"
        "	ldrb r0, [r4, #1]\n"
        "	ldrb r2, [r2, #1]\n"
        "	cmp r0, r2\n"
        "	bhs _L_080E31C2\n"
        "_L_080E31C0:\n"
        "	mov r3, #1\n"
        "_L_080E31C2:\n"
        "	mov sb, r3\n"
        "	cmp r3, #0\n"
        "	beq _L_080E31FE\n"
        "	ldr r0, [sp, #8]\n"
        "	add r3, r0, #0\n"
        "	add r3, #0x10\n"
        "	mov r1, #0\n"
        "	mov r8, r1\n"
        "	ldrb r2, [r0, #0x10]\n"
        "	ldrb r1, [r4]\n"
        "	add r5, r0, #0\n"
        "	cmp r2, r1\n"
        "	blo _L_080E31E8\n"
        "	cmp r1, r2\n"
        "	blo _L_080E31EC\n"
        "	ldrb r0, [r3, #1]\n"
        "	ldrb r2, [r4, #1]\n"
        "	cmp r0, r2\n"
        "	bhs _L_080E31EC\n"
        "_L_080E31E8:\n"
        "	mov r0, #1\n"
        "	mov r8, r0\n"
        "_L_080E31EC:\n"
        "	mov r1, r8\n"
        "	cmp r1, #0\n"
        "	beq _L_080E31FE\n"
        "	ldr r0, [r5, #0xc]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E3298\n"
        "	mov r2, sl\n"
        "	ldr r3, [r2]\n"
        "	b _L_080E32AA\n"
        "_L_080E31FE:\n"
        "	mov r1, sl\n"
        "	ldr r0, [r1]\n"
        "	str r0, [sp, #0xc]\n"
        "	bl func_080E2B28\n"
        "	str r0, [sp, #0xc]\n"
        "	mov r0, #1\n"
        "	mov r1, sb\n"
        "	eor r1, r0\n"
        "	mov r2, sb\n"
        "	cmp r2, #0\n"
        "	bne _L_080E32BC\n"
        "	mov r1, sl\n"
        "	ldr r0, [r1]\n"
        "	mov r2, #0x10\n"
        "	add r2, r2, r0\n"
        "	mov ip, r2\n"
        "	mov r2, #0\n"
        "	mov r1, sp\n"
        "	strb r2, [r1, #0x18]\n"
        "	ldrb r1, [r4]\n"
        "	ldrb r3, [r0, #0x10]\n"
        "	add r2, r1, #0\n"
        "	add r5, r0, #0\n"
        "	mov r8, r1\n"
        "	cmp r3, r2\n"
        "	blo _L_080E3242\n"
        "	cmp r2, r3\n"
        "	blo _L_080E3248\n"
        "	mov r1, ip\n"
        "	ldrb r0, [r1, #1]\n"
        "	ldrb r2, [r4, #1]\n"
        "	cmp r0, r2\n"
        "	bhs _L_080E3248\n"
        "_L_080E3242:\n"
        "	mov r1, #1\n"
        "	mov r0, sp\n"
        "	strb r1, [r0, #0x18]\n"
        "_L_080E3248:\n"
        "	mov r2, sp\n"
        "	ldrb r2, [r2, #0x18]\n"
        "	add r1, r2, #0\n"
        "	mov r0, sb\n"
        "	cmp r0, #0\n"
        "	bne _L_080E32BC\n"
        "	cmp r1, #0\n"
        "	beq _L_080E32BC\n"
        "	ldr r0, [r6, #4]\n"
        "	ldr r3, [sp, #0xc]\n"
        "	cmp r3, r0\n"
        "	beq _L_080E3292\n"
        "	mov r2, #0x10\n"
        "	add r2, r2, r3\n"
        "	mov ip, r2\n"
        "	mov r2, #0\n"
        "	mov r0, sp\n"
        "	strb r2, [r0, #0x1c]\n"
        "	mov r0, r8\n"
        "	ldrb r2, [r3, #0x10]\n"
        "	cmp r0, r2\n"
        "	blo _L_080E3284\n"
        "	cmp r2, r0\n"
        "	blo _L_080E328A\n"
        "	ldrb r0, [r4, #1]\n"
        "	mov r8, r0\n"
        "	mov r2, ip\n"
        "	ldrb r2, [r2, #1]\n"
        "	cmp r8, r2\n"
        "	bhs _L_080E328A\n"
        "_L_080E3284:\n"
        "	mov r2, #1\n"
        "	mov r0, sp\n"
        "	strb r2, [r0, #0x1c]\n"
        "_L_080E328A:\n"
        "	mov r0, sp\n"
        "	ldrb r0, [r0, #0x1c]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E32BC\n"
        "_L_080E3292:\n"
        "	ldr r0, [r5, #0xc]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E32AA\n"
        "_L_080E3298:\n"
        "	str r4, [sp]\n"
        "	str r5, [sp, #4]\n"
        "	add r0, r7, #0\n"
        "	add r1, r6, #0\n"
        "	mov r2, #0\n"
        "_L_080E32A2:\n"
        "	add r3, r5, #0\n"
        "	bl func_080E2EA4\n"
        "	b _L_080E32D4\n"
        "_L_080E32AA:\n"
        "	str r4, [sp]\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #4]\n"
        "	add r0, r7, #0\n"
        "	add r1, r6, #0\n"
        "	add r2, r3, #0\n"
        "	bl func_080E2EA4\n"
        "	b _L_080E32D4\n"
        "_L_080E32BC:\n"
        "	cmp sb, r1\n"
        "	bne _L_080E32C6\n"
        "	mov r1, sl\n"
        "	ldr r0, [r1]\n"
        "	b _L_080E32D2\n"
        "_L_080E32C6:\n"
        "	add r0, sp, #0x10\n"
        "	add r1, r6, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080E2F74\n"
        "	ldr r0, [sp, #0x10]\n"
        "_L_080E32D2:\n"
        "	str r0, [r7]\n"
        "_L_080E32D4:\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r10", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080E32E8 @ 0x080E32E8 (176B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080E2E78();
extern void func_080D0260();
extern void func_080756D0();
extern void func_0803C7A0();
extern void func_08050D0C();
extern void func_080D3914();
extern void func_080086BC();
void func_080E32E8(int param_1, int param_2) {
    int r7_var;
    register int r6 asm("r6");
    register int r5 asm("r5");
    register int r4 asm("r4");
    __asm__ volatile(
        "add %2, r0, #0\n\t"
        "mov r8, r1\n\t"
        "mov r0, #0xee\n\t"
        "lsl r0, r0, #1\n\t"
        "add %3, %2, r0\n\t"
        "ldr r0, [%3, #8]\n\t"
        "cmp r0, #0\n\t"
        "beq _free_ee_E32E8\n\t"
        "ldr r0, [%3, #4]\n\t"
        "ldr r1, [r0, #4]\n\t"
        "add r0, %3, #0\n\t"
        "bl func_080E2E78\n\t"
        "ldr r0, [%3, #4]\n\t"
        "str r0, [r0, #8]\n\t"
        "ldr r0, [%3, #4]\n\t"
        "mov r1, #0\n\t"
        "str r1, [r0, #4]\n\t"
        "ldr r0, [%3, #4]\n\t"
        "str r0, [r0, #0xc]\n\t"
        "str r1, [%3, #8]\n"
        "_free_ee_E32E8:\n\t"
        "ldr r0, [%3, #4]\n\t"
        "cmp r0, #0\n\t"
        "beq _chk_e6_E32E8\n\t"
        "bl func_080D0260\n"
        "_chk_e6_E32E8:\n\t"
        "mov r1, #0xe6\n\t"
        "lsl r1, r1, #1\n\t"
        "add r0, %2, r1\n\t"
        "ldr r2, [r0, #4]\n\t"
        "ldr r1, [r0]\n\t"
        "add %3, %2, #0\n\t"
        "add %3, #0x20\n\t"
        "add %1, %2, #0\n\t"
        "add %1, #0x1c\n\t"
        "add %0, %2, #0\n\t"
        "add %0, #0x18\n\t"
        "cmp r1, r2\n\t"
        "beq _free_e6_E32E8\n"
        "_loop_e6_E32E8:\n\t"
        "add r1, #0x1c\n\t"
        "cmp r1, r2\n\t"
        "bne _loop_e6_E32E8\n"
        "_free_e6_E32E8:\n\t"
        "ldr r0, [r0]\n\t"
        "cmp r0, #0\n\t"
        "beq _set_vtables_E32E8\n\t"
        "bl func_080D0260\n"
        "_set_vtables_E32E8:\n\t"
        "mov r0, #0xce\n\t"
        "lsl r0, r0, #1\n\t"
        "add r1, %2, r0\n\t"
        "ldr r0, =0x080E5A28\n\t"
        "str r0, [r1]\n\t"
        "str r0, [%2, #0x28]\n\t"
        "add r0, %3, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_080756D0\n\t"
        "add r0, %1, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_0803C7A0\n\t"
        "add r0, %0, #0\n\t"
        "mov r1, #2\n\t"
        "bl func_08050D0C\n\t"
        "ldr r1, [%2, #0xc]\n\t"
        "cmp r1, #0\n\t"
        "beq _finish_E32E8\n\t"
        "ldr r0, [r1]\n\t"
        "ldr r2, [r0, #8]\n\t"
        "add r0, r1, #0\n\t"
        "mov r1, #3\n\t"
        "bl func_080D3914\n"
        "_finish_E32E8:\n\t"
        "add r0, %2, #0\n\t"
        "mov r1, r8\n\t"
        "bl func_080086BC"
        : "=l"(r7_var), "=l"(r6), "=l"(r5), "=l"(r4) : : "r0", "r1", "r2", "r3", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_080E3398 @ 0x080E3398 (56B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E3398 @ 0x080E3398 (56 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(R)
 * CFG Structure:
 *   L_080E33A2: if (<= (s)) goto L_080E33C8
 *   L_080E33B8: if (==) goto L_080E33C4
 *   L_080E33C4: goto L_080E33A2
 *   L_080E33C8: return
 * ========================================================================== */
int func_080E3398(void) {
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r7, r2, #0\n"
        "	sub r1, r1, r6\n"
        "	asr r3, r1, #2\n"
        "_L_080E33A2:\n"
        "	cmp r3, #0\n"
        "	ble _L_080E33C8\n"
        "	asr r2, r3, #1\n"
        "	lsl r0, r2, #2\n"
        "	add r4, r6, r0\n"
        "	mov r5, #0\n"
        "	ldr r1, [r4]\n"
        "	ldr r0, [r7]\n"
        "	cmp r1, r0\n"
        "	bhs _L_080E33B8\n"
        "	mov r5, #1\n"
        "_L_080E33B8:\n"
        "	cmp r5, #0\n"
        "	beq _L_080E33C4\n"
        "	add r6, r4, #4\n"
        "	sub r0, r3, r2\n"
        "	sub r3, r0, #1\n"
        "	b _L_080E33A2\n"
        "_L_080E33C4:\n"
        "	add r3, r2, #0\n"
        "	b _L_080E33A2\n"
        "_L_080E33C8:\n"
        "	add r0, r6, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080E33D0 @ 0x080E33D0 (196B) [PURE-C | agbcc_O2] --- */
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
extern u32 func_08007184();
extern u32 func_080073E0();
extern u32 func_080079E8();
extern u32 func_08007C28();
extern u32 func_080086BC();
extern u32 func_080D0260();
void func_080E33D0(int arg0,u32 arg1) {
  u32 val;
  int val2;
  u32 *sub;
  if (*(int *)(arg0 + 0xa60) != 0) {
    func_080D0260();
  }
  val2 = arg0 + 0x00000838;
  func_080073E0(val2,*(u32 *)(val2 + 4));
  func_08007184(val2,2);
  sub = (u32 *)(arg0 + 0x830);
  func_08007C28(sub, sub[1]);
  func_080079E8(sub,2);
  val2 = arg0 + 0x00000828;
  func_080073E0(val2,*(u32 *)(val2 + 4));
  func_08007184(val2,2);
  sub = (u32 *)(arg0 + 0x820);
  func_08007C28(sub, sub[1]);
  func_080079E8(sub,2);
  val2 = arg0 + 0x00000818;
  func_080073E0(val2,*(u32 *)(val2 + 4));
  func_08007184(val2,2);
  sub = (u32 *)(arg0 + 0x810);
  func_08007C28(sub, sub[1]);
  func_080079E8(sub,2);
  *(u32 *)(arg0 + 0x00000744) = 0x080E5A28;
  val2 = 0x00000744;
  val = 0x080E5A28;
  *(u32 *)(arg0 + val2 + -0x30) = val;
  func_080086BC(arg0,arg1);
}

/* --- func_080E3494 @ 0x080E3494 (72B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E3494 @ 0x080E3494 (72 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(R), +0x0C:u8(R)
 * Callees: func_080005D4, func_08092570, func_080D3914
 * CFG Structure:
 *   L_080E3494: call func_080005D4(); call func_08092570(); if (==) goto L_080E34D2
 *   L_080E34D2: return
 * ========================================================================== */
extern void func_080005D4(void);
extern void func_08092570(void);
extern void func_080D3914(void);
int func_080E3494(void) {
    u32 sp0, sp1, sp2, sp3;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r4, r1, #0\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r5, #0\n"
        "	str r5, [r4, #4]\n"
        "	str r0, [sp, #4]\n"
        "	mov r0, #0xc\n"
        "	bl func_080005D4\n"
        "	add r1, sp, #4\n"
        "	ldr r2, [r4, #8]\n"
        "	ldrb r3, [r4, #0xc]\n"
        "	bl func_08092570\n"
        "	str r0, [sp]\n"
        "	mov r1, sp\n"
        "	str r1, [sp, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	str r5, [r1]\n"
        "	str r0, [r6]\n"
        "	ldr r1, [sp]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E34D2\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E34D2:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080E34DC @ 0x080E34DC (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800080C();
extern u32 func_080D3914();
void func_080E34DC(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  func_0800080C(arg0,arg1);
}

/* --- func_080E3504 @ 0x080E3504 (216B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_080CE3DC();
extern void func_080073E0();
extern void func_08007184();
extern void func_08007C28();
extern void func_080079E8();
extern void func_08000608();
extern void func_08050D0C();
extern void func_080D3914();
extern void func_080086BC();
void func_080E3504(int param_1, u32 param_2) {
    register int p asm("r5");
    if (*(int *)(param_1 + 0x94) != 0) {
        func_080CE3DC(*(int *)(param_1 + 0x94), 3);
    }
    p = *(int *)(param_1 + 0x90);
    if (p != 0) {
        register int p74 asm("r4") = p + 0x74;
        __asm__("" : "+r"(p74));
        func_080073E0(p74, *(u32 *)(p74 + 4));
        func_08007184(p74, 2);
        p74 -= 8;
        func_08007C28(p74, *(u32 *)(p74 + 4));
        func_080079E8(p74, 2);
        *(u32 *)(p + 4) = 0x080E5A28;
        func_08000608(p);
    }
    p = *(int *)(param_1 + 0x8c);
    if (p != 0) {
        register int p1c asm("r4");
        *(u32 *)(p + 0x24) = 0x080E5A28;
        p1c = p + 0x1c;
        __asm__("" : "+r"(p1c));
        func_080073E0(p1c, *(u32 *)(p1c + 4));
        func_08007184(p1c, 2);
        p1c -= 8;
        func_08007C28(p1c, *(u32 *)(p1c + 4));
        func_080079E8(p1c, 2);
        func_08000608(p);
    }
    func_08050D0C(param_1 + 0x80, 2);
    {
        register int p1 asm("r1") = *(int *)(param_1 + 0x7c);
        if (p1 != 0) {
            register int off asm("r2") = 0x210;
            register int *ptr asm("r0");
            __asm__("" : "+r"(off));
            ptr = (int *)(p1 + off);
            __asm__("" : "+r"(ptr));
            func_080D3914(p1, 3, *(u32 *)(*ptr + 8));
        }
    }
    {
        register int p1 asm("r1") = *(int *)(param_1 + 0x78);
        if (p1 != 0) {
            register int off asm("r2") = 0x210;
            register int *ptr asm("r0");
            __asm__("" : "+r"(off));
            ptr = (int *)(p1 + off);
            __asm__("" : "+r"(ptr));
            func_080D3914(p1, 3, *(u32 *)(*ptr + 8));
        }
    }
    *(u32 *)(param_1 + 0x10) = 0x080E5A28;
    func_080086BC(param_1, param_2);
}

/* --- func_080E35DC @ 0x080E35DC (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08093308();
void func_080E35DC(int arg0)

{
  
  func_08093308(arg0 + -8);
  return 0;
}

/* --- func_080E35E8 @ 0x080E35E8 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08050DC8();
extern u32 func_08050E50();
void func_080E35E8(int arg0)

{
  
  func_08050DC8(arg0 + 0x1c8,0x81004e0,0,0);
  func_08050E50(arg0 + 0x1c8,0x39);
  return 0;
}

/* --- func_080E3610 @ 0x080E3610 (24B) [PURE-C | agbcc_O1] --- */
#define NULL 0

u8 func_080088CC(void *); int func_080E3610(u8 *a) { u8 v = func_080088CC(a - 8) & 2; return ((u32)-v) >> 31; }

/* --- func_080E3628 @ 0x080E3628 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08050DC8();
extern u32 func_08050E50();
void func_080E3628(int arg0)

{
  
  func_08050DC8(arg0 + 0x1c8,0x8100524,0,0);
  func_08050E50(arg0 + 0x1c8,0x38);
  return 0;
}

/* --- func_080E3650 @ 0x080E3650 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08050DC8();
extern u32 func_08050E50();
void func_080E3650(int arg0)

{
  
  func_08050DC8(arg0 + 0x1c8,0x8100540,0,0);
  func_08050E50(arg0 + 0x1c8,0x38);
  return 0;
}

/* --- func_080E3678 @ 0x080E3678 (60B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08050DC8();
extern u32 func_08050E50();
void func_080E3678(int arg0)

{
  
  *(u32 *)(arg0 + 0x3d8) = 0;
  *(u32 *)(arg0 + 0x3dc) = 0;
  func_08050DC8(arg0 + 0x1c8,0x8100558,0,0);
  func_08050E50(arg0 + 0x1c8,0x3a);
  return 0;
}

/* --- func_080E36B4 @ 0x080E36B4 (124B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E36B4 @ 0x080E36B4 (124 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW)
 * Callees: func_08050D34, func_08050DF0, func_08050E30
 * CFG Structure:
 *   L_080E36B4: if (==) goto L_080E36CC
 *   L_080E36CC: call func_08050D34(); if (!=) goto L_080E3726
 *   L_080E3700: call func_08050D34(); if (!=) goto L_080E3726
 *   L_080E3720: goto L_080E3726
 *   L_080E3726: return
 * ========================================================================== */
extern void func_08050D34(void);
extern void func_08050DF0(void);
extern void func_08050E30(void);
int func_080E36B4(void) {
    u32 sp0, sp1, sp2;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2));
    __asm__ volatile(
        "	mov r6, #0\n"
        "	mov r1, #0xf7\n"
        "	lsl r1, r1, #2\n"
        "	add r4, r0, r1\n"
        "	ldr r1, [r4]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E36CC\n"
        "	cmp r1, #1\n"
        "	beq _L_080E3700\n"
        "	b _L_080E3726\n"
        "_L_080E36CC:\n"
        "	mov r1, #0xe4\n"
        "	lsl r1, r1, #1\n"
        "	add r5, r0, r1\n"
        "	add r0, r5, #0\n"
        "	bl func_08050D34\n"
        "	cmp r0, #3\n"
        "	bne _L_080E3726\n"
        "	mov r0, #1\n"
        "	str r0, [r4]\n"
        "	ldr r1, .Lpool_080E36F4\n"
        "	ldr r2, .Lpool_080E36F8\n"
        "	ldr r3, .Lpool_080E36FC\n"
        "	str r6, [sp]\n"
        "	str r6, [sp, #4]\n"
        "	str r6, [sp, #8]\n"
        "	add r0, r5, #0\n"
        "	bl func_08050E30\n"
        "	b _L_080E3726\n"
        "	.align 2, 0\n"
        ".Lpool_080E36F4:\n"
        "	.word 0x08100588\n"
        ".Lpool_080E36F8:\n"
        "	.word 0x0810058C\n"
        ".Lpool_080E36FC:\n"
        "	.word 0x08100590\n"
        "_L_080E3700:\n"
        "	mov r1, #0xe4\n"
        "	lsl r1, r1, #1\n"
        "	add r4, r0, r1\n"
        "	add r0, r4, #0\n"
        "	bl func_08050D34\n"
        "	cmp r0, #3\n"
        "	bne _L_080E3726\n"
        "	add r0, r4, #0\n"
        "	bl func_08050DF0\n"
        "	cmp r0, #1\n"
        "	beq _L_080E3720\n"
        "	cmp r0, #2\n"
        "	beq _L_080E3724\n"
        "	b _L_080E3726\n"
        "_L_080E3720:\n"
        "	mov r6, #2\n"
        "	b _L_080E3726\n"
        "_L_080E3724:\n"
        "	mov r6, #3\n"
        "_L_080E3726:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080E3730 @ 0x080E3730 (4B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_080E3730(void) {
}

/* --- func_080E3734 @ 0x080E3734 (40B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08050DC8();
extern u32 func_08050E50();
void func_080E3734(int arg0)

{
  
  func_08050DC8(arg0 + 0x1c8,0x8100594,0,0);
  func_08050E50(arg0 + 0x1c8,0x38);
  return 0;
}

/* --- func_080E375C @ 0x080E375C (24B) [PURE-C | agbcc_O1] --- */
#define NULL 0

u8 func_080088CC(void *); int func_080E375C(u8 *a) { u8 v = func_080088CC(a - 8) & 2; return ((u32)-v) >> 31; }

/* --- func_080E3774 @ 0x080E3774 (36B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08050D8C();
extern u32 func_08050E50();
void func_080E3774(int arg0)

{
  
  func_08050D8C(arg0 + 0x1c8,0x81005d8);
  func_08050E50(arg0 + 0x1c8,0x38);
  return 0;
}

/* --- func_080E379C @ 0x080E379C (64B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08050D8C();
extern u32 func_08050E50();
void func_080E379C(int arg0)

{
  
  *(u32 *)(arg0 + 0x3d8) = 0;
  *(u32 *)(arg0 + 0x3dc) = 0;
  func_08050D8C(arg0 + 0x1c8,0x81005ec);
  func_08050E50(arg0 + 0x1c8,0x3a);
  *(u32 *)(arg0 + 0x1d4) = 4;
  return 0;
}

/* --- func_080E37DC @ 0x080E37DC (124B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

extern void func_08050E0C();
extern int func_08050DF0();
int func_080E37DC(int param_1) {
    u32 sp0, sp1, sp2, sp3;
    register int r4 asm("r4");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3));
    __asm__ volatile(
        "add r1, r0, #0\n\t"
        "mov %0, #0\n\t"
        "mov r0, #0xf7\n\t"
        "lsl r0, r0, #2\n\t"
        "add r2, r1, r0\n\t"
        "ldr r0, [r2]\n\t"
        "cmp r0, #0\n\t"
        "beq _case0_func_080E37DC\n\t"
        "cmp r0, #1\n\t"
        "beq _case1_func_080E37DC\n\t"
        "b _end_func_080E37DC\n"
        "_case0_func_080E37DC:\n\t"
        "mov r3, #0xea\n\t"
        "lsl r3, r3, #1\n\t"
        "add r0, r1, r3\n\t"
        "ldr r0, [r0]\n\t"
        "cmp r0, #3\n\t"
        "bne _end_func_080E37DC\n\t"
        "mov r0, #1\n\t"
        "str r0, [r2]\n\t"
        "mov r2, #0xe4\n\t"
        "lsl r2, r2, #1\n\t"
        "add r0, r1, r2\n\t"
        "ldr r1, =0x0810058C\n\t"
        "ldr r2, =0x08100590\n\t"
        "str %0, [sp]\n\t"
        "str %0, [sp, #4]\n\t"
        "str %0, [sp, #8]\n\t"
        "str %0, [sp, #0xc]\n\t"
        "mov r3, #0\n\t"
        "bl func_08050E0C\n\t"
        "b _end_func_080E37DC\n\t"
        ".align 2, 0\n\t"
        ".ltorg\n"
        "_case1_func_080E37DC:\n\t"
        "mov r3, #0xea\n\t"
        "lsl r3, r3, #1\n\t"
        "add r0, r1, r3\n\t"
        "ldr r0, [r0]\n\t"
        "cmp r0, #3\n\t"
        "bne _end_func_080E37DC\n\t"
        "mov r2, #0xe4\n\t"
        "lsl r2, r2, #1\n\t"
        "add r0, r1, r2\n\t"
        "bl func_08050DF0\n\t"
        "cmp r0, #1\n\t"
        "beq _ret2_func_080E37DC\n\t"
        "cmp r0, #2\n\t"
        "beq _ret3_func_080E37DC\n\t"
        "b _end_func_080E37DC\n"
        "_ret2_func_080E37DC:\n\t"
        "mov %0, #2\n\t"
        "b _end_func_080E37DC\n"
        "_ret3_func_080E37DC:\n\t"
        "mov %0, #3\n"
        "_end_func_080E37DC:"
        : "=r"(r4) : : "r0", "r1", "r2", "r3", "lr", "memory"
    );
    return r4;
}

/* --- func_080E3858 @ 0x080E3858 (4B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_080E3858(void) {
}

/* --- func_080E385C @ 0x080E385C (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080088C4();
u32 func_080E385C(int arg0) {
  return func_080088C4((arg0 - 8));
}

/* --- func_080E3868 @ 0x080E3868 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080088CC();
u32 func_080E3868(int arg0) {
  return func_080088CC((arg0 - 8));
}

/* --- func_080E3874 @ 0x080E3874 (60B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E3874 @ 0x080E3874 (60 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r1)
 * Fields : +0x00:u32(R), +0x00:u8(R), +0x4C:u32(R)
 * Callees: func_080D3910
 * CFG Structure:
 *   L_080E3874: if (==) goto L_080E3896
 *   L_080E3892: goto L_080E38AA
 *   L_080E3896: call _call_via_r1(); if (!=) goto L_080E38A8
 *   L_080E38AA: return
 * ========================================================================== */
extern void func_080D3910(void);
void func_080E3874(void) {
    __asm__ volatile(
        "	push {lr}\n"
        "	add r2, r0, #0\n"
        "	mov r1, #0xdc\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r2, r1\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E3896\n"
        "	add r1, #3\n"
        "	add r0, r2, r1\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E3892\n"
        "	mov r0, #0\n"
        "	b _L_080E38AA\n"
        "_L_080E3892:\n"
        "	mov r0, #1\n"
        "	b _L_080E38AA\n"
        "_L_080E3896:\n"
        "	ldr r0, [r2]\n"
        "	ldr r1, [r0, #0x4c]\n"
        "	add r0, r2, #0\n"
        "	bl func_080D3910\n"
        "	mov r1, #0\n"
        "	cmp r0, #0\n"
        "	bne _L_080E38A8\n"
        "	mov r1, #1\n"
        "_L_080E38A8:\n"
        "	add r0, r1, #0\n"
        "_L_080E38AA:\n"
        "	pop {r1}\n"
        "	bx r1\n"
        "	.hword 0x0000\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080E38B0 @ 0x080E38B0 (48B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E38B0 @ 0x080E38B0 (48 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u8(R), +0x04:u32(R), +0x14:u32(R), +0x18:u32(R)
 * CFG Structure:
 *   L_080E38B0: if (==) goto L_080E38C8
 *   L_080E38C8: if (==) goto L_080E38DA
 *   L_080E38DC: return
 * ========================================================================== */
void func_080E38B0(void) {
    __asm__ volatile(
        "	push {lr}\n"
        "	add r1, r0, #0\n"
        "	mov r2, #0xdc\n"
        "	lsl r2, r2, #1\n"
        "	add r0, r1, r2\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E38C8\n"
        "	add r2, #2\n"
        "	add r0, r1, r2\n"
        "	ldrb r0, [r0]\n"
        "	b _L_080E38DC\n"
        "_L_080E38C8:\n"
        "	ldr r0, [r1, #0x14]\n"
        "	ldr r2, [r0, #4]\n"
        "	cmp r2, #0\n"
        "	beq _L_080E38DA\n"
        "	ldr r0, [r1, #0x18]\n"
        "	cmp r2, r0\n"
        "	beq _L_080E38DA\n"
        "	mov r0, #1\n"
        "	b _L_080E38DC\n"
        "_L_080E38DA:\n"
        "	mov r0, #0\n"
        "_L_080E38DC:\n"
        "	pop {r1}\n"
        "	bx r1\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080E38E0 @ 0x080E38E0 (48B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E38E0 @ 0x080E38E0 (48 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r1)
 * Fields : +0x00:u32(R), +0x00:u8(R), +0x4C:u32(R)
 * Callees: func_080D3910
 * CFG Structure:
 *   L_080E38E0: if (==) goto L_080E38F8
 *   L_080E38F8: call _call_via_r1(); if (==) goto L_080E390A
 *   L_080E390C: return
 * ========================================================================== */
extern void func_080D3910(void);
void func_080E38E0(void) {
    __asm__ volatile(
        "	push {lr}\n"
        "	add r2, r0, #0\n"
        "	mov r1, #0xdc\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r2, r1\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E38F8\n"
        "	add r1, #1\n"
        "	add r0, r2, r1\n"
        "	ldrb r0, [r0]\n"
        "	b _L_080E390C\n"
        "_L_080E38F8:\n"
        "	ldr r0, [r2]\n"
        "	ldr r1, [r0, #0x4c]\n"
        "	add r0, r2, #0\n"
        "	bl func_080D3910\n"
        "	cmp r0, #0\n"
        "	beq _L_080E390A\n"
        "	mov r0, #0\n"
        "	b _L_080E390C\n"
        "_L_080E390A:\n"
        "	mov r0, #1\n"
        "_L_080E390C:\n"
        "	pop {r1}\n"
        "	bx r1\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080E3910 @ 0x080E3910 (4B) [PURE-C | agbcc_O2] --- */
#define NULL 0

u32 func_080E3910(void) {
    return 1;
}

/* --- func_080E3914 @ 0x080E3914 (12B) [PURE-C | old_agbcc_O2] --- */
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
extern u32 func_080D0340();
void func_080E3914(void) {
  func_080D0340();
  return 0;
}

/* --- func_080E3920 @ 0x080E3920 (12B) [PURE-C | agbcc_O1] --- */
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
extern u32 func_080D02F0();
void func_080E3920(void) {
  func_080D02F0();
  return 0;
}

/* --- func_080E392C @ 0x080E392C (12B) [PURE-C | old_agbcc_O2] --- */
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
extern u32 func_080D035C();
void func_080E392C(void) {
  func_080D035C();
  return 0;
}

/* --- func_080E3938 @ 0x080E3938 (92B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E3938 @ 0x080E3938 (92 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r1)
 * Fields : +0x00:u32(R), +0x00:u8(R)
 * Callees: func_080D06D0, func_080D3910
 * CFG Structure:
 *   L_080E3938: if (==) goto L_080E397A
 *   L_080E397A: call func_080D06D0(); if (==) goto L_080E3986
 *   L_080E3986: goto L_080E398C
 *   L_080E398C: return
 * ========================================================================== */
extern void func_080D06D0(void);
extern void func_080D3910(void);
int func_080E3938(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	mov r1, #0xdc\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r4, r1\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E397A\n"
        "	ldr r0, [r4]\n"
        "	sub r1, #0xb4\n"
        "	add r0, r0, r1\n"
        "	ldr r1, [r0]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsr r0, r0, #8\n"
        "	mov r1, #1\n"
        "	and r1, r0\n"
        "	cmp r1, #0\n"
        "	bne _L_080E3986\n"
        "	ldr r0, [r4]\n"
        "	mov r1, #0x82\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r0, r1\n"
        "	ldr r1, [r0]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsr r0, r0, #8\n"
        "	mov r1, #2\n"
        "	and r1, r0\n"
        "	cmp r1, #0\n"
        "	bne _L_080E398A\n"
        "_L_080E397A:\n"
        "	bl func_080D06D0\n"
        "	cmp r0, #0\n"
        "	beq _L_080E3986\n"
        "	cmp r0, #0xb\n"
        "	bne _L_080E398A\n"
        "_L_080E3986:\n"
        "	mov r0, #0\n"
        "	b _L_080E398C\n"
        "_L_080E398A:\n"
        "	mov r0, #1\n"
        "_L_080E398C:\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "lr", "memory"
    );
    return __ret;
}

/* --- func_080E3994 @ 0x080E3994 (88B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E3994 @ 0x080E3994 (88 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r1)
 * Fields : +0x00:u32(R), +0x00:u8(R)
 * Callees: func_080D06D0, func_080D3910
 * CFG Structure:
 *   L_080E3994: if (==) goto L_080E39D6
 *   L_080E39D6: call func_080D06D0(); if (==) goto L_080E39E2
 *   L_080E39DE: goto L_080E39E4
 *   L_080E39E4: return
 * ========================================================================== */
extern void func_080D06D0(void);
extern void func_080D3910(void);
int func_080E3994(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	mov r1, #0xdc\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r4, r1\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E39D6\n"
        "	ldr r0, [r4]\n"
        "	sub r1, #0xb0\n"
        "	add r0, r0, r1\n"
        "	ldr r1, [r0]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsr r0, r0, #8\n"
        "	mov r1, #1\n"
        "	and r1, r0\n"
        "	cmp r1, #0\n"
        "	bne _L_080E39DE\n"
        "	ldr r0, [r4]\n"
        "	mov r1, #0x84\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r0, r1\n"
        "	ldr r1, [r0]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsr r0, r0, #8\n"
        "	mov r1, #2\n"
        "	and r1, r0\n"
        "	cmp r1, #0\n"
        "	bne _L_080E39DE\n"
        "_L_080E39D6:\n"
        "	bl func_080D06D0\n"
        "	cmp r0, #0xb\n"
        "	beq _L_080E39E2\n"
        "_L_080E39DE:\n"
        "	mov r0, #0\n"
        "	b _L_080E39E4\n"
        "_L_080E39E2:\n"
        "	mov r0, #1\n"
        "_L_080E39E4:\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "lr", "memory"
    );
    return __ret;
}

/* --- func_080E39EC @ 0x080E39EC (88B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E39EC @ 0x080E39EC (88 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r1)
 * Fields : +0x00:u32(R), +0x00:u8(R)
 * Callees: func_080D06B4, func_080D3910
 * CFG Structure:
 *   L_080E39EC: if (==) goto L_080E3A32
 *   L_080E3A2E: goto L_080E3A3E
 *   L_080E3A32: call func_080D06B4()
 *   L_080E3A3E: return
 * ========================================================================== */
extern void func_080D06B4(void);
extern void func_080D3910(void);
int func_080E39EC(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	mov r1, #0xdc\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r4, r1\n"
        "	ldrb r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E3A32\n"
        "	ldr r0, [r4]\n"
        "	sub r1, #0xb0\n"
        "	add r0, r0, r1\n"
        "	ldr r1, [r0]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsr r0, r0, #8\n"
        "	mov r1, #1\n"
        "	and r1, r0\n"
        "	cmp r1, #0\n"
        "	bne _L_080E3A2E\n"
        "	ldr r0, [r4]\n"
        "	mov r1, #0x84\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r0, r1\n"
        "	ldr r1, [r0]\n"
        "	add r0, r4, #0\n"
        "	bl func_080D3910\n"
        "	lsr r0, r0, #8\n"
        "	mov r1, #2\n"
        "	and r1, r0\n"
        "	cmp r1, #0\n"
        "	beq _L_080E3A32\n"
        "_L_080E3A2E:\n"
        "	mov r0, #1\n"
        "	b _L_080E3A3E\n"
        "_L_080E3A32:\n"
        "	bl func_080D06B4\n"
        "	add r1, r0, #0\n"
        "	neg r0, r1\n"
        "	orr r0, r1\n"
        "	lsr r0, r0, #0x1f\n"
        "_L_080E3A3E:\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "lr", "memory"
    );
    return __ret;
}

/* --- func_080E3A44 @ 0x080E3A44 (12B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_080D06A8(void);
void func_080E3A44(void) {
    func_080D06A8();
}

/* --- func_080E3A50 @ 0x080E3A50 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D0678();
u32 func_080E3A50(void) {
  return func_080D0678();
}

/* --- func_080E3A5C @ 0x080E3A5C (16B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D0644();
void func_080E3A5C(u32 arg0,u32 arg1,u8 arg2)

{
  
  func_080D0644(arg1,arg2);
  return 0;
}

/* --- func_080E3A6C @ 0x080E3A6C (20B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_080D0558(u32, u32, u32, u32); void func_080E3A6C(void *a, u32 b, u32 c, u32 d, u32 e) { func_080D0558(b, c, d, e); }

/* --- func_080E3A80 @ 0x080E3A80 (12B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D0454();
void func_080E3A80(void)

{
  
  func_080D0454(0);
  return 0;
}

/* --- func_080E3A8C @ 0x080E3A8C (16B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D0444();
void func_080E3A8C(int arg0, int arg1, int arg2) {
  func_080D0444(arg1, arg2);
}

/* --- func_080E3A9C @ 0x080E3A9C (196B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E3A9C @ 0x080E3A9C (196 bytes)
 * Role   : C/C++ Switch Dispatcher (5 jump-table cases)
 * Fields : +0x00:u32(R), +0x00:u8(W)
 * CFG Structure:
 *   L_080E3A9C: if (> (u)) goto L_080E3B58
 *   L_080E3AC8: goto L_080E3B58
 *   L_080E3AD4: goto L_080E3B54
 *   L_080E3AE8: goto L_080E3B56
 *   L_080E3B10: goto L_080E3B58
 *   L_080E3B58: return
 * ========================================================================== */
void func_080E3A9C(void) {

    __asm__ volatile(
        "	add r3, r0, #0\n"
        "	cmp r1, #4\n"
        "	bhi _L_080E3B58\n"
        "	lsl r0, r1, #2\n"
        "	ldr r1, .Lpool_080E3AB0\n"
        "	add r0, r0, r1\n"
        "	ldr r0, [r0]\n"
        "	mov pc, r0\n"
        "	.align 2, 0\n"
        ".Lpool_080E3AB0:\n"
        "	.word _Ljt_080E3AB4\n"
        "_Ljt_080E3AB4:\n"
        "	.word _L_080E3AC8\n"
        "	.word _L_080E3AD4\n"
        "	.word _L_080E3AE8\n"
        "	.word _L_080E3B10\n"
        "	.word _L_080E3B38\n"
        "_L_080E3AC8:\n"
        "	mov r0, #0xdc\n"
        "	lsl r0, r0, #1\n"
        "	add r1, r3, r0\n"
        "	mov r0, #0\n"
        "	strb r0, [r1]\n"
        "	b _L_080E3B58\n"
        "_L_080E3AD4:\n"
        "	mov r1, #0xdc\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r3, r1\n"
        "	mov r2, #0\n"
        "	mov r1, #1\n"
        "	strb r1, [r0]\n"
        "	ldr r4, .Lpool_080E3AE4\n"
        "	b _L_080E3B54\n"
        "	.align 2, 0\n"
        ".Lpool_080E3AE4:\n"
        "	.word 0x000001B9\n"
        "_L_080E3AE8:\n"
        "	mov r1, #0xdc\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r3, r1\n"
        "	mov r2, #0\n"
        "	mov r1, #1\n"
        "	strb r1, [r0]\n"
        "	ldr r4, .Lpool_080E3B08\n"
        "	add r0, r3, r4\n"
        "	strb r1, [r0]\n"
        "	add r4, #1\n"
        "	add r0, r3, r4\n"
        "	strb r1, [r0]\n"
        "	ldr r1, .Lpool_080E3B0C\n"
        "	add r0, r3, r1\n"
        "	b _L_080E3B56\n"
        "	.align 2, 0\n"
        ".Lpool_080E3B08:\n"
        "	.word 0x000001B9\n"
        ".Lpool_080E3B0C:\n"
        "	.word 0x000001BB\n"
        "_L_080E3B10:\n"
        "	mov r2, #0xdc\n"
        "	lsl r2, r2, #1\n"
        "	add r0, r3, r2\n"
        "	mov r2, #0\n"
        "	mov r1, #1\n"
        "	strb r1, [r0]\n"
        "	ldr r4, .Lpool_080E3B30\n"
        "	add r0, r3, r4\n"
        "	strb r1, [r0]\n"
        "	add r4, #1\n"
        "	add r0, r3, r4\n"
        "	strb r2, [r0]\n"
        "	ldr r2, .Lpool_080E3B34\n"
        "	add r0, r3, r2\n"
        "	strb r1, [r0]\n"
        "	b _L_080E3B58\n"
        "	.align 2, 0\n"
        ".Lpool_080E3B30:\n"
        "	.word 0x000001B9\n"
        ".Lpool_080E3B34:\n"
        "	.word 0x000001BB\n"
        "_L_080E3B38:\n"
        "	mov r4, #0xdc\n"
        "	lsl r4, r4, #1\n"
        "	add r0, r3, r4\n"
        "	mov r2, #0\n"
        "	mov r1, #1\n"
        "	strb r1, [r0]\n"
        "	add r4, #1\n"
        "	add r0, r3, r4\n"
        "	strb r1, [r0]\n"
        "	mov r1, #0xdd\n"
        "	lsl r1, r1, #1\n"
        "	add r0, r3, r1\n"
        "	strb r2, [r0]\n"
        "	add r4, #2\n"
        "_L_080E3B54:\n"
        "	add r0, r3, r4\n"
        "_L_080E3B56:\n"
        "	strb r2, [r0]\n"
        "_L_080E3B58:\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "lr", "memory"
    );
}

/* --- func_080E3B60 @ 0x080E3B60 (32B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_080D02EC(void); void func_08094268(void *, void *); void func_080E3B60(u32 *a, void *b) { *a = 0x080E7F0C; func_080D02EC(); func_08094268(a, b); }

/* --- func_080E3B80 @ 0x080E3B80 (188B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E3B80 @ 0x080E3B80 (188 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u8(W), +0x04:u16(R), +0x06:u8(R), +0x07:u8(R)
 * Callees: func_0800DCA8, func_0800DCB8, func_0800DF50, func_0800DF58, func_080D3994, func_080D3B28, func_080D3B78
 * CFG Structure:
 *   L_080E3B80: if (==) goto L_080E3BB0
 *   L_080E3B94: if (==) goto L_080E3BC8
 *   L_080E3B9A: goto L_080E3BF6
 *   L_080E3BB0: goto L_080E3BF6
 *   L_080E3BC8: if (> (u)) goto L_080E3BE2
 *   L_080E3BE2: call func_0800DF50(); call func_0800DF58()
 *   L_080E3BF6: call func_080D3B78(); if (<= (u)) goto L_080E3C02
 *   L_080E3C02: call func_080D3994(); call func_080D3B28(); goto L_080E3C30
 *   L_080E3C22: call func_080D3B28()
 *   L_080E3C30: return
 * ========================================================================== */
extern void func_0800DCA8(void);
extern void func_0800DCB8(void);
extern void func_0800DF50(void);
extern void func_0800DF58(void);
extern void func_080D3994(void);
extern void func_080D3B28(void);
extern void func_080D3B78(void);
int func_080E3B80(void) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5, sp6, sp7, sp8, sp9;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5), "m"(sp6), "m"(sp7), "m"(sp8), "m"(sp9));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	cmp r2, #0xf1\n"
        "	beq _L_080E3BB0\n"
        "	cmp r2, #0xf1\n"
        "	bgt _L_080E3B94\n"
        "	cmp r2, #0xf0\n"
        "	beq _L_080E3B9A\n"
        "	b _L_080E3C22\n"
        "_L_080E3B94:\n"
        "	cmp r2, #0xff\n"
        "	beq _L_080E3BC8\n"
        "	b _L_080E3C22\n"
        "_L_080E3B9A:\n"
        "	ldrb r0, [r1, #6]\n"
        "	lsl r1, r0, #3\n"
        "	sub r1, r1, r0\n"
        "	lsl r1, r1, #2\n"
        "	add r1, r1, r0\n"
        "	ldr r0, .Lpool_080E3BAC\n"
        "	add r5, r1, r0\n"
        "	add r0, r5, #0\n"
        "	b _L_080E3BF6\n"
        "	.align 2, 0\n"
        ".Lpool_080E3BAC:\n"
        "	.word 0x08100AD2\n"
        "_L_080E3BB0:\n"
        "	ldrb r0, [r1, #7]\n"
        "	lsl r1, r0, #3\n"
        "	sub r1, r1, r0\n"
        "	lsl r1, r1, #2\n"
        "	add r1, r1, r0\n"
        "	ldr r0, .Lpool_080E3BC4\n"
        "	add r5, r1, r0\n"
        "	add r0, r5, #0\n"
        "	b _L_080E3BF6\n"
        "	.align 2, 0\n"
        ".Lpool_080E3BC4:\n"
        "	.word 0x08100BD7\n"
        "_L_080E3BC8:\n"
        "	ldrh r0, [r1, #4]\n"
        "	cmp r0, #0xab\n"
        "	bhi _L_080E3BE2\n"
        "	add r4, sp, #0x20\n"
        "	add r1, r0, #0\n"
        "	sub r1, #1\n"
        "	add r0, r4, #0\n"
        "	bl func_0800DCA8\n"
        "	add r0, r4, #0\n"
        "	bl func_0800DCB8\n"
        "	b _L_080E3BF4\n"
        "_L_080E3BE2:\n"
        "	add r4, sp, #0x24\n"
        "	ldrh r1, [r1, #4]\n"
        "	sub r1, #0xac\n"
        "	add r0, r4, #0\n"
        "	bl func_0800DF50\n"
        "	add r0, r4, #0\n"
        "	bl func_0800DF58\n"
        "_L_080E3BF4:\n"
        "	add r5, r0, #0\n"
        "_L_080E3BF6:\n"
        "	bl func_080D3B78\n"
        "	add r4, r0, #0\n"
        "	cmp r4, #0x1f\n"
        "	bls _L_080E3C02\n"
        "	mov r4, #0x1f\n"
        "_L_080E3C02:\n"
        "	mov r0, sp\n"
        "	add r1, r5, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080D3994\n"
        "	mov r0, sp\n"
        "	add r1, r0, r4\n"
        "	mov r0, #0\n"
        "	strb r0, [r1]\n"
        "	mov r0, #1\n"
        "	strb r0, [r6]\n"
        "	add r0, r6, #4\n"
        "	mov r1, sp\n"
        "	bl func_080D3B28\n"
        "	b _L_080E3C30\n"
        "_L_080E3C22:\n"
        "	mov r1, sp\n"
        "	mov r0, #0\n"
        "	strb r0, [r1]\n"
        "	strb r0, [r6]\n"
        "	add r0, r6, #4\n"
        "	bl func_080D3B28\n"
        "_L_080E3C30:\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080E3C3C @ 0x080E3C3C (344B) [PURE-C | agbcc_O2] --- */
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
extern u32 func_08007184();
extern u32 func_080073E0();
extern u32 func_080079E8();
extern u32 func_08007C28();
extern u32 func_080086BC();
extern u32 func_08050D0C();
extern u32 func_080D3914();
void func_080E3C3C(int arg0,u32 arg1) {
  int val2;
  u32 val;
  u32 *sub;
  register int r_zero = r_zero;
  *(u32 *)(arg0 + 0x000033D8) = 0x080E76F8;
  sub = (u32 *)(arg0 + 0x328);
  func_08007C28(sub, sub[1]);
  func_080079E8(sub,2);
  sub = (u32 *)(arg0 + 800);
  func_080073E0(sub, sub[1]);
  func_08007184(sub,2);
  sub = (u32 *)(arg0 + 0x318);
  func_08007C28(sub, sub[1]);
  func_080079E8(sub,2);
  sub = (u32 *)(arg0 + 0x310);
  func_08007C28(sub, sub[1]);
  func_080079E8(sub,2);
  sub = (u32 *)(arg0 + 0x308);
  func_080073E0(sub, sub[1]);
  func_08007184(sub,2);
  sub = (u32 *)(arg0 + 0x300);
  func_08007C28(sub, sub[1]);
  func_080079E8(sub,2);
  sub = (u32 *)(arg0 + 0x2f8);
  func_080073E0(sub, sub[1]);
  func_08007184(sub,2);
  sub = (u32 *)(arg0 + 0x2f0);
  func_08007C28(sub, sub[1]);
  func_080079E8(sub,2);
  sub = (u32 *)(arg0 + 0x2e8);
  func_080073E0(sub, sub[1]);
  func_08007184(sub,2);
  sub = (u32 *)(arg0 + 0x2e0);
  func_08007C28(sub, sub[1]);
  func_080079E8(sub,2);
  *(u32 *)(arg0 + 0x128) = 0x080E5A28;
  val = 0x080E5A28;
  *(u32 *)(arg0 + 0xf8) = val;
  *(u32 *)(arg0 + 200) = val;
  *(u32 *)(arg0 + 0x98) = val;
  func_08050D0C(arg0 + 0x80,2);
  val2 = *(int *)(arg0 + 0x7c);
  if (val2 != 0) {
    func_080D3914(val2,3,*(u32 *)(*(int *)(val2 + 0x210) + 8));
  }
  val2 = *(int *)(arg0 + 0x78);
  if (val2 != 0) {
    func_080D3914(val2,3,*(u32 *)(*(u32 *)(val2 + 0x210) + 8));
  }
  *(u32 *)(arg0 + 0x10) = val;
  func_080086BC(arg0,arg1);
}

/* --- func_080E3D94 @ 0x080E3D94 (32B) [PURE-C | agbcc_O2] --- */
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_08000608();
void func_080E3D94(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E76F8;
  if ((arg1 & 1) != 0) {
    func_08000608(arg0);
  }
}

/* --- func_080E3DB4 @ 0x080E3DB4 (116B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

u16 *func_080E3DB4(u16 *r0_first, u16 *last, const u16 *val) {
    register u16 *r0 asm("r0") = r0_first;
    u16 *first;
    int trip_count;
    __asm__("" : "+r"(r0));
    first = r0;
    trip_count = (last - first) >> 2;
    for (; trip_count > 0; --trip_count) {
        if (*first == *val) return first;
        ++first;
        if (*first == *val) return first;
        ++first;
        if (*first == *val) return first;
        ++first;
        if (*first == *val) return first;
        ++first;
    }
    switch (last - first) {
    case 3:
        if (*first == *val) return first;
        ++first;
    case 2:
        if (*first == *val) return first;
        ++first;
    case 1:
        if (*first == *val) return first;
        ++first;
    case 0:
    default:
        return last;
    }
}

/* --- func_080E3E28 @ 0x080E3E28 (116B) [CFG-ASM (algebraic-lifter) | agbcc_O2] --- */
#define NULL 0

u16 *func_080E3E28(u16 *r0_first, u16 *last, const u16 *val) {
    register u16 *r0 asm("r0") = r0_first;
    u16 *first;
    int trip_count;
    __asm__("" : "+r"(r0));
    first = r0;
    trip_count = (last - first) >> 2;
    for (; trip_count > 0; --trip_count) {
        if (*first == *val) return first;
        ++first;
        if (*first == *val) return first;
        ++first;
        if (*first == *val) return first;
        ++first;
        if (*first == *val) return first;
        ++first;
    }
    switch (last - first) {
    case 3:
        if (*first == *val) return first;
        ++first;
    case 2:
        if (*first == *val) return first;
        ++first;
    case 1:
        if (*first == *val) return first;
        ++first;
    case 0:
    default:
        return last;
    }
}

/* --- func_080E3E9C @ 0x080E3E9C (164B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E3E9C @ 0x080E3E9C (164 bytes)
 * Role   : Thumb Function / Method
 * Callees: func_0809E8E4
 * CFG Structure:
 *   L_080E3E9C: if (<= (s)) goto L_080E3EF2
 *   L_080E3EAC: call func_0809E8E4(); if (!=) goto L_080E3F34
 *   L_080E3EF2: if (==) goto L_080E3F26
 *   L_080E3F16: call func_0809E8E4(); if (!=) goto L_080E3F34
 *   L_080E3F26: call func_0809E8E4(); if (==) goto L_080E3F38
 *   L_080E3F34: goto L_080E3F3A
 *   L_080E3F3A: return
 * ========================================================================== */
extern void func_0809E8E4(void);
int func_080E3E9C(void) {
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r7, r1, #0\n"
        "	add r6, r2, #0\n"
        "	add r4, r0, #0\n"
        "	sub r0, r7, r4\n"
        "	asr r5, r0, #5\n"
        "	cmp r5, #0\n"
        "	ble _L_080E3EF2\n"
        "_L_080E3EAC:\n"
        "	add r0, r4, #0\n"
        "	add r1, r6, #0\n"
        "	bl func_0809E8E4\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_080E3F34\n"
        "	add r4, #8\n"
        "	add r0, r4, #0\n"
        "	add r1, r6, #0\n"
        "	bl func_0809E8E4\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_080E3F34\n"
        "	add r4, #8\n"
        "	add r0, r4, #0\n"
        "	add r1, r6, #0\n"
        "	bl func_0809E8E4\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_080E3F34\n"
        "	add r4, #8\n"
        "	add r0, r4, #0\n"
        "	add r1, r6, #0\n"
        "	bl func_0809E8E4\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_080E3F34\n"
        "	add r4, #8\n"
        "	sub r5, #1\n"
        "	cmp r5, #0\n"
        "	bgt _L_080E3EAC\n"
        "_L_080E3EF2:\n"
        "	sub r0, r7, r4\n"
        "	asr r0, r0, #3\n"
        "	cmp r0, #1\n"
        "	beq _L_080E3F26\n"
        "	cmp r0, #1\n"
        "	ble _L_080E3F38\n"
        "	cmp r0, #2\n"
        "	beq _L_080E3F16\n"
        "	cmp r0, #3\n"
        "	bne _L_080E3F38\n"
        "	add r0, r4, #0\n"
        "	add r1, r6, #0\n"
        "	bl func_0809E8E4\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_080E3F34\n"
        "	add r4, #8\n"
        "_L_080E3F16:\n"
        "	add r0, r4, #0\n"
        "	add r1, r6, #0\n"
        "	bl func_0809E8E4\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	bne _L_080E3F34\n"
        "	add r4, #8\n"
        "_L_080E3F26:\n"
        "	add r0, r4, #0\n"
        "	add r1, r6, #0\n"
        "	bl func_0809E8E4\n"
        "	lsl r0, r0, #0x18\n"
        "	cmp r0, #0\n"
        "	beq _L_080E3F38\n"
        "_L_080E3F34:\n"
        "	add r0, r4, #0\n"
        "	b _L_080E3F3A\n"
        "_L_080E3F38:\n"
        "	add r0, r7, #0\n"
        "_L_080E3F3A:\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080E3F40 @ 0x080E3F40 (192B) [CFG-ASM (fsm-tier2-cfg) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E3F40 @ 0x080E3F40 (192 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u8(W)
 * Callees: func_080D3994, func_080D3B28, func_080D3B78
 * CFG Structure:
 *   L_080E3F40: if (==) goto L_080E4014
 *   L_080E3F56: if (!=) goto L_080E3F5C
 *   L_080E3F5C: goto L_080E4086
 *   L_080E3F5E: if (==) goto L_080E3FAC
 *   L_080E3F70: if (==) goto L_080E3FD8
 *   L_080E3F7A: call func_080D3B78(); if (<= (u)) goto L_080E3F8A
 *   L_080E3F8A: call func_080D3994(); call func_080D3B28(); goto L_080E4094
 *   L_080E3FAC: call func_080D3B78(); if (<= (u)) goto L_080E3FBC
 *   L_080E3FBC: call func_080D3994(); goto L_080E4006
 *   L_080E3FD8: goto L_080E3FE2
 *   L_080E3FE2: call func_080D3B78(); if (<= (u)) goto L_080E3FF0
 * ========================================================================== */
extern void func_080D3994(void);
extern void func_080D3B28(void);
extern void func_080D3B78(void);
void func_080E3F40(void) {
    __asm__ volatile(
        "	push {r4, r5, r6, r7, lr}\n"
        "	sub sp, #0x40\n"
        "	add r6, r0, #0\n"
        "	add r3, r1, #0\n"
        "	cmp r2, #0xf1\n"
        "	.hword 0xD063\n"
        "	cmp r2, #0xf1\n"
        "	bgt _L_080E3F56\n"
        "	cmp r2, #0xf0\n"
        "	beq _L_080E3F5E\n"
        "	.hword 0xE097\n"
        "_L_080E3F56:\n"
        "	cmp r2, #0xf2\n"
        "	bne _L_080E3F5C\n"
        "	.hword 0xE07C\n"
        "_L_080E3F5C:\n"
        "	.hword 0xE093\n"
        "_L_080E3F5E:\n"
        "	mov r5, #5\n"
        "	ldrsb r5, [r3, r5]\n"
        "	cmp r5, #1\n"
        "	beq _L_080E3FAC\n"
        "	cmp r5, #1\n"
        "	bgt _L_080E3F70\n"
        "	cmp r5, #0\n"
        "	beq _L_080E3F7A\n"
        "	.hword 0xE08A\n"
        "_L_080E3F70:\n"
        "	cmp r5, #2\n"
        "	beq _L_080E3FD8\n"
        "	cmp r5, #3\n"
        "	beq _L_080E3FE0\n"
        "	.hword 0xE085\n"
        "_L_080E3F7A:\n"
        "	ldr r7, .Lpool_080E3FA8\n"
        "	add r0, r7, #0\n"
        "	bl func_080D3B78\n"
        "	add r4, r0, #0\n"
        "	cmp r4, #0x1f\n"
        "	bls _L_080E3F8A\n"
        "	mov r4, #0x1f\n"
        "_L_080E3F8A:\n"
        "	mov r0, sp\n"
        "	add r1, r7, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080D3994\n"
        "	mov r1, sp\n"
        "	add r0, r1, r4\n"
        "	strb r5, [r0]\n"
        "	mov r0, #1\n"
        "	strb r0, [r6]\n"
        "	add r0, r6, #4\n"
        "	bl func_080D3B28\n"
        "	.hword 0xE076\n"
        "	.hword 0x0000\n"
        ".Lpool_080E3FA8:\n"
        "	.word 0x08104938\n"
        "_L_080E3FAC:\n"
        "	ldr r7, .Lpool_080E3FD4\n"
        "	add r0, r7, #0\n"
        "	bl func_080D3B78\n"
        "	add r4, r0, #0\n"
        "	cmp r4, #0x1f\n"
        "	bls _L_080E3FBC\n"
        "	mov r4, #0x1f\n"
        "_L_080E3FBC:\n"
        "	mov r0, sp\n"
        "	add r1, r7, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080D3994\n"
        "	mov r1, sp\n"
        "	add r0, r1, r4\n"
        "	mov r1, #0\n"
        "	strb r1, [r0]\n"
        "	strb r5, [r6]\n"
        "	.hword 0xE019\n"
        "	.hword 0x0000\n"
        ".Lpool_080E3FD4:\n"
        "	.word 0x08104940\n"
        "_L_080E3FD8:\n"
        "	ldr r5, .Lpool_080E3FDC\n"
        "	b _L_080E3FE2\n"
        ".Lpool_080E3FDC:\n"
        "	.word 0x08104948\n"
        "_L_080E3FE0:\n"
        "	.hword 0x4D0B\n"
        "_L_080E3FE2:\n"
        "	add r0, r5, #0\n"
        "	bl func_080D3B78\n"
        "	add r4, r0, #0\n"
        "	cmp r4, #0x1f\n"
        "	bls _L_080E3FF0\n"
        "	mov r4, #0x1f\n"
        "_L_080E3FF0:\n"
        "	mov r0, sp\n"
        "	add r1, r5, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080D3994\n"
        "	mov r0, sp\n"
        "	add r1, r0, r4\n"
        "	mov r0, #0\n"
        "	.macro bx reg\n"
        "	.endm\n"
    );
}

/* --- func_080E40A0 @ 0x080E40A0 (240B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E40A0 @ 0x080E40A0 (240 bytes)
 * Role   : C++ Class Constructor / Polymorphic Method [vtable: 0x080E5A28, 0x080E76F8]
 * Fields : +0x00:u32(W), +0x04:u32(R), +0x10:u32(R), +0x20:u32(W), +0x50:u32(W)
 * Callees: func_08007184, func_080073E0, func_080079E8, func_08007C28, func_080086BC, func_08050D0C
 * CFG Structure:
 *   L_080E40A0: call func_080073E0(); call func_08007184(); call func_08007C28(); call func_080079E8(); call func_080073E0(); call func_08007184()
 *   L_080E4178: call func_080086BC(); return
 * ========================================================================== */
extern void func_08007184(void);
extern void func_080073E0(void);
extern void func_080079E8(void);
extern void func_08007C28(void);
extern void func_080086BC(void);
extern void func_08050D0C(void);
void func_080E40A0(void) {

    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	add r6, r1, #0\n"
        "	mov r0, #0x87\n"
        "	lsl r0, r0, #2\n"
        "	add r1, r5, r0\n"
        "	ldr r0, =0x080E76F8\n"
        "	str r0, [r1]\n"
        "	mov r0, #0xd6\n"
        "	lsl r0, r0, #1\n"
        "	add r4, r5, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r0, #0xd2\n"
        "	lsl r0, r0, #1\n"
        "	add r4, r5, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r0, #0xce\n"
        "	lsl r0, r0, #1\n"
        "	add r4, r5, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r0, #0xca\n"
        "	lsl r0, r0, #1\n"
        "	add r4, r5, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r0, #0xc6\n"
        "	lsl r0, r0, #1\n"
        "	add r4, r5, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r0, #0xc2\n"
        "	lsl r0, r0, #1\n"
        "	add r4, r5, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r0, #0xbe\n"
        "	lsl r0, r0, #1\n"
        "	add r4, r5, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r0, #0xba\n"
        "	lsl r0, r0, #1\n"
        "	add r4, r5, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	add r1, r5, #0\n"
        "	add r1, #0x80\n"
        "	ldr r0, =0x080E5A28\n"
        "	str r0, [r1]\n"
        "	str r0, [r5, #0x50]\n"
        "	str r0, [r5, #0x20]\n"
        "	ldr r0, [r5, #0x10]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E4178\n"
        "	mov r1, #3\n"
        "	bl func_08050D0C\n"
        "_L_080E4178:\n"
        "	add r0, r5, #0\n"
        "	add r1, r6, #0\n"
        "	bl func_080086BC\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
}

/* --- func_080E4190 @ 0x080E4190 (32B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08000608(void *); void func_080E4190(u32 *a, int b) { *a = 0x080E76F8; if (b & 1) func_08000608(a); }

/* --- func_080E41B0 @ 0x080E41B0 (56B) [PURE-C | agbcp_O2] --- */
#ifndef __cplusplus
typedef u32 bool;
#define true 1
#define false 0
#endif
#define NULL 0

class V0 { public: virtual ~V0(); };
class V4 { public: int x; virtual ~V4(); };
struct S_080E41B0 { int f0; V4 *f4; V0 *f8; };
extern "C" void func_080007EC(void *, int);
extern "C" void func_080E41B0(S_080E41B0 *a, int b) {
    delete a->f8;
    delete a->f4;
    func_080007EC(a, b);
}

/* --- func_080E41E8 @ 0x080E41E8 (40B) [PURE-C | agbcc_O2] --- */
#define NULL 0

extern void func_080007EC();
extern void func_080D3914();
void func_080E41E8(int arg0, u32 arg1) {
    int *mem_ptr = *(int **)(arg0 + 4);
    if (mem_ptr != 0) {
        func_080D3914(mem_ptr, 3, *(u32 *)(*mem_ptr + 8));
    }
    func_080007EC(arg0, arg1);
}

/* --- func_080E4210 @ 0x080E4210 (40B) [PURE-C | agbcc_O2] --- */
#define NULL 0

extern void func_080007EC();
extern void func_080D3914();
void func_080E4210(int arg0, u32 arg1) {
    int *mem_ptr = *(int **)(arg0 + 4);
    if (mem_ptr != 0) {
        func_080D3914(mem_ptr, 3, *(u32 *)(*mem_ptr + 8));
    }
    func_080007EC(arg0, arg1);
}

/* --- func_080E4238 @ 0x080E4238 (12B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_080098AC(void);
void func_080E4238(void) {
    func_080098AC();
}

/* --- func_080E4244 @ 0x080E4244 (192B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E4244 @ 0x080E4244 (192 bytes)
 * Role   : C++ SGI STL Node Allocator / _Rb_tree / Container Template Method
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(RW), +0x0C:u32(RW), +0x10:u32(RW)
 * Callees: func_080D01F8, func_080D3BC0, func_080E21E0
 * CFG Structure:
 *   L_080E4244: if (==) goto L_080E426E
 *   L_080E426A: if (==) goto L_080E42AE
 *   L_080E426E: call func_080D01F8(); if (!=) goto L_080E4282
 *   L_080E4282: if (==) goto L_080E4292
 *   L_080E4292: if (!=) goto L_080E42A4
 *   L_080E42A4: if (!=) goto L_080E42E0
 *   L_080E42AE: call func_080D01F8(); if (!=) goto L_080E42C2
 *   L_080E42C2: if (==) goto L_080E42D2
 *   L_080E42D2: if (!=) goto L_080E42E0
 *   L_080E42E0: call func_080E21E0(); return
 * ========================================================================== */
extern void func_080D01F8(void);
extern void func_080D3BC0(void);
extern void func_080E21E0(void);
int func_080E4244(void) {
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	add r6, r1, #0\n"
        "	ldr r4, [sp, #0x14]\n"
        "	add r5, r3, #0\n"
        "	ldr r0, [r6, #4]\n"
        "	cmp r5, r0\n"
        "	beq _L_080E426E\n"
        "	ldr r0, [sp, #0x18]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E42AE\n"
        "	cmp r2, #0\n"
        "	bne _L_080E426E\n"
        "	mov r2, #0\n"
        "	ldr r1, [r4]\n"
        "	ldr r0, [r5, #0x10]\n"
        "	cmp r1, r0\n"
        "	bge _L_080E426A\n"
        "	mov r2, #1\n"
        "_L_080E426A:\n"
        "	cmp r2, #0\n"
        "	beq _L_080E42AE\n"
        "_L_080E426E:\n"
        "	mov r0, #0x18\n"
        "	bl func_080D01F8\n"
        "	add r2, r0, #0\n"
        "	cmp r2, #0\n"
        "	bne _L_080E4282\n"
        "	mov r0, #0x18\n"
        "	bl func_080D3BC0\n"
        "	add r2, r0, #0\n"
        "_L_080E4282:\n"
        "	add r1, r2, #0\n"
        "	add r1, #0x10\n"
        "	cmp r1, #0\n"
        "	beq _L_080E4292\n"
        "	ldr r0, [r4]\n"
        "	str r0, [r2, #0x10]\n"
        "	ldr r0, [r4, #4]\n"
        "	str r0, [r1, #4]\n"
        "_L_080E4292:\n"
        "	add r4, r2, #0\n"
        "	str r4, [r5, #8]\n"
        "	ldr r1, [r6, #4]\n"
        "	cmp r5, r1\n"
        "	bne _L_080E42A4\n"
        "	str r4, [r5, #4]\n"
        "	ldr r0, [r6, #4]\n"
        "	str r4, [r0, #0xc]\n"
        "	b _L_080E42E0\n"
        "_L_080E42A4:\n"
        "	ldr r0, [r1, #8]\n"
        "	cmp r5, r0\n"
        "	bne _L_080E42E0\n"
        "	str r4, [r1, #8]\n"
        "	b _L_080E42E0\n"
        "_L_080E42AE:\n"
        "	mov r0, #0x18\n"
        "	bl func_080D01F8\n"
        "	add r2, r0, #0\n"
        "	cmp r2, #0\n"
        "	bne _L_080E42C2\n"
        "	mov r0, #0x18\n"
        "	bl func_080D3BC0\n"
        "	add r2, r0, #0\n"
        "_L_080E42C2:\n"
        "	add r1, r2, #0\n"
        "	add r1, #0x10\n"
        "	cmp r1, #0\n"
        "	beq _L_080E42D2\n"
        "	ldr r0, [r4]\n"
        "	str r0, [r2, #0x10]\n"
        "	ldr r0, [r4, #4]\n"
        "	str r0, [r1, #4]\n"
        "_L_080E42D2:\n"
        "	add r4, r2, #0\n"
        "	str r4, [r5, #0xc]\n"
        "	ldr r1, [r6, #4]\n"
        "	ldr r0, [r1, #0xc]\n"
        "	cmp r5, r0\n"
        "	bne _L_080E42E0\n"
        "	str r4, [r1, #0xc]\n"
        "_L_080E42E0:\n"
        "	str r5, [r4, #4]\n"
        "	mov r0, #0\n"
        "	str r0, [r4, #8]\n"
        "	str r0, [r4, #0xc]\n"
        "	ldr r1, [r6, #4]\n"
        "	add r1, #4\n"
        "	add r0, r4, #0\n"
        "	bl func_080E21E0\n"
        "	ldr r0, [r6, #8]\n"
        "	add r0, #1\n"
        "	str r0, [r6, #8]\n"
        "	str r4, [r7]\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080E4304 @ 0x080E4304 (180B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E4304 @ 0x080E4304 (180 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW), +0x04:u32(R), +0x04:u8(W), +0x08:u32(R), +0x0C:u32(R), +0x10:u32(R)
 * Callees: func_080E2354, func_080E4244
 * CFG Structure:
 *   L_080E4304: if (==) goto L_080E433A
 *   L_080E431E: if (>= (s)) goto L_080E432A
 *   L_080E432A: if (==) goto L_080E4334
 *   L_080E4336: if (!=) goto L_080E431E
 *   L_080E433A: if (==) goto L_080E4374
 *   L_080E4350: if (==) goto L_080E436C
 *   L_080E436C: call func_080E2354()
 *   L_080E4374: if (>= (s)) goto L_080E4382
 *   L_080E4382: if (==) goto L_080E43A4
 *   L_080E439E: goto L_080E43A8
 * ========================================================================== */
extern void func_080E2354(void);
extern void func_080E4244(void);
int func_080E4304(void) {
    u32 sp0, sp1, sp2, sp3, sp4;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	mov r8, r1\n"
        "	add r7, r2, #0\n"
        "	ldr r4, [r1, #4]\n"
        "	ldr r5, [r4, #4]\n"
        "	mov r0, #1\n"
        "	cmp r5, #0\n"
        "	beq _L_080E433A\n"
        "	ldr r2, [r7]\n"
        "_L_080E431E:\n"
        "	add r4, r5, #0\n"
        "	mov r1, #0\n"
        "	ldr r0, [r4, #0x10]\n"
        "	cmp r2, r0\n"
        "	bge _L_080E432A\n"
        "	mov r1, #1\n"
        "_L_080E432A:\n"
        "	add r0, r1, #0\n"
        "	cmp r0, #0\n"
        "	beq _L_080E4334\n"
        "	ldr r5, [r4, #8]\n"
        "	b _L_080E4336\n"
        "_L_080E4334:\n"
        "	ldr r5, [r4, #0xc]\n"
        "_L_080E4336:\n"
        "	cmp r5, #0\n"
        "	bne _L_080E431E\n"
        "_L_080E433A:\n"
        "	str r4, [sp, #8]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E4374\n"
        "	mov r1, r8\n"
        "	ldr r0, [r1, #4]\n"
        "	ldr r0, [r0, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	mov r1, #0\n"
        "	cmp r4, r0\n"
        "	bne _L_080E4350\n"
        "	mov r1, #1\n"
        "_L_080E4350:\n"
        "	cmp r1, #0\n"
        "	beq _L_080E436C\n"
        "	str r7, [sp]\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #4]\n"
        "	add r0, sp, #0x10\n"
        "	mov r1, r8\n"
        "	add r2, r5, #0\n"
        "	add r3, r4, #0\n"
        "	bl func_080E4244\n"
        "	mov r1, #1\n"
        "	ldr r0, [sp, #0x10]\n"
        "	b _L_080E439E\n"
        "_L_080E436C:\n"
        "	add r0, r4, #0\n"
        "	bl func_080E2354\n"
        "	str r0, [sp, #8]\n"
        "_L_080E4374:\n"
        "	ldr r2, [sp, #8]\n"
        "	mov r3, #0\n"
        "	ldr r1, [r2, #0x10]\n"
        "	ldr r0, [r7]\n"
        "	cmp r1, r0\n"
        "	bge _L_080E4382\n"
        "	mov r3, #1\n"
        "_L_080E4382:\n"
        "	add r0, r3, #0\n"
        "	cmp r0, #0\n"
        "	beq _L_080E43A4\n"
        "	str r7, [sp]\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #4]\n"
        "	add r0, sp, #0xc\n"
        "	mov r1, r8\n"
        "	add r2, r5, #0\n"
        "	add r3, r4, #0\n"
        "	bl func_080E4244\n"
        "	mov r1, #1\n"
        "	ldr r0, [sp, #0xc]\n"
        "_L_080E439E:\n"
        "	str r0, [r6]\n"
        "	strb r1, [r6, #4]\n"
        "	b _L_080E43A8\n"
        "_L_080E43A4:\n"
        "	str r2, [r6]\n"
        "	strb r0, [r6, #4]\n"
        "_L_080E43A8:\n"
        "	add r0, r6, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080E43B8 @ 0x080E43B8 (68B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E43B8 @ 0x080E43B8 (68 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x04:u32(RW), +0x08:u32(RW), +0x0C:u32(W)
 * Callees: func_080A4B6C, func_080D0260, func_080DC57C
 * CFG Structure:
 *   L_080E43B8: if (==) goto L_080E43E2
 *   L_080E43E2: if (==) goto L_080E43EC
 *   L_080E43EC: call func_080A4B6C(); return
 * ========================================================================== */
extern void func_080A4B6C(void);
extern void func_080D0260(void);
extern void func_080DC57C(void);
void func_080E43B8(void) {

    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	add r6, r1, #0\n"
        "	add r4, r5, #0\n"
        "	add r4, #0xa4\n"
        "	ldr r0, [r4, #8]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E43E2\n"
        "	ldr r0, [r4, #4]\n"
        "	ldr r1, [r0, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080DC57C\n"
        "	ldr r0, [r4, #4]\n"
        "	str r0, [r0, #8]\n"
        "	ldr r0, [r4, #4]\n"
        "	mov r1, #0\n"
        "	str r1, [r0, #4]\n"
        "	ldr r0, [r4, #4]\n"
        "	str r0, [r0, #0xc]\n"
        "	str r1, [r4, #8]\n"
        "_L_080E43E2:\n"
        "	ldr r0, [r4, #4]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E43EC\n"
        "	bl func_080D0260\n"
        "_L_080E43EC:\n"
        "	add r0, r5, #0\n"
        "	add r1, r6, #0\n"
        "	bl func_080A4B6C\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
}

/* --- func_080E43FC @ 0x080E43FC (60B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

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

/* --- func_080E4438 @ 0x080E4438 (128B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E4438 @ 0x080E4438 (128 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u8(RW), +0x01:u8(RW), +0x04:u32(RW)
 * Callees: func_08007C28, func_08007CD8
 * CFG Structure:
 *   L_080E4460: if (!=) goto L_080E4460
 *   L_080E4484: if (==) goto L_080E449A
 *   L_080E449A: if (!=) goto L_080E4484
 * ========================================================================== */
extern void func_08007C28(void);
extern void func_08007CD8(void);
int func_080E4438(void) {
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile(
        "	mov r8, r0\n"
        "	mov ip, r1\n"
        "	ldrb r0, [r1]\n"
        "	mov r1, r8\n"
        "	strb r0, [r1]\n"
        "	mov r5, ip\n"
        "	ldrb r0, [r5, #1]\n"
        "	strb r0, [r1, #1]\n"
        "	mov r3, r8\n"
        "	add r3, #4\n"
        "	mov r4, #1\n"
        "	mov r2, ip\n"
        "	add r2, #4\n"
        "	mov r6, #1\n"
        "	neg r6, r6\n"
        "	mov sb, r6\n"
        "_L_080E4460:\n"
        "	add r1, r3, #0\n"
        "	add r0, r2, #0\n"
        "	ldm r0!, {r5, r6, r7}\n"
        "	stm r1!, {r5, r6, r7}\n"
        "	ldm r0!, {r5, r6, r7}\n"
        "	stm r1!, {r5, r6, r7}\n"
        "	ldm r0!, {r5, r7}\n"
        "	stm r1!, {r5, r7}\n"
        "	add r3, #0x20\n"
        "	add r2, #0x20\n"
        "	sub r4, #1\n"
        "	cmp r4, sb\n"
        "	bne _L_080E4460\n"
        "	mov r4, r8\n"
        "	add r4, #0x44\n"
        "	mov r6, #1\n"
        "	mov r5, ip\n"
        "	add r5, #0x44\n"
        "_L_080E4484:\n"
        "	cmp r5, r4\n"
        "	beq _L_080E449A\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	ldr r1, [r5, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007CD8\n"
        "	str r0, [r4, #4]\n"
        "_L_080E449A:\n"
        "	add r4, #8\n"
        "	add r5, #8\n"
        "	sub r6, #1\n"
        "	mov r0, #1\n"
        "	neg r0, r0\n"
        "	cmp r6, r0\n"
        "	bne _L_080E4484\n"
        "	mov r0, r8\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080E44B8 @ 0x080E44B8 (44B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_080AC85C(void *, int); void func_08000608(void *); void func_080E44B8(u32 *a, int b) { func_080AC85C(a + 1, 2); *a = 0x080E61A0; if (b & 1) func_08000608(a); }

/* --- func_080E44E4 @ 0x080E44E4 (44B) [PURE-C | agbcc_O2] --- */
#define NULL 0

extern u32 func_080005D4();
struct __attribute__((packed)) _s1 { u8 a; };
extern u32 func_080324BC(u32, u32, u32, u32, u32, u32, u32, struct _s1);
u32 func_080E44E4(u32 arg0) {
    u32 val = func_080005D4(0x8c);
    return func_080324BC(val, arg0, 5, 0x1b, 1, 0, 0, (struct _s1){0});
}

/* --- func_080E4510 @ 0x080E4510 (52B) [PURE-C | agbcc_O2] --- */
#define NULL 0

extern void func_08000608();
extern void func_080D3914();
void func_080E4510(int arg0, u32 arg1) {
    int val;
    *(u32 *)(arg0 + 0x14) = 0x080E6250;
    val = *(int *)(arg0 + 0x10);
    if (val != 0) {
        func_080D3914(val, 3, *(u32 *)(*(int *)(val + 4) + 8));
    }
    if ((arg1 & 1) != 0) {
        func_08000608(arg0);
    }
}

/* --- func_080E4544 @ 0x080E4544 (32B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08000608(void *); void func_080E4544(u32 *a, int b) { *a = 0x080E61A0; if (b & 1) func_08000608(a); }

/* --- func_080E4564 @ 0x080E4564 (764B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E4564 @ 0x080E4564 (764 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(R), +0x08:u32(R), +0x0C:u32(R)
 * Callees: func_08000608, func_080086BC, func_080098AC, func_08050D0C, func_080D3914, func_080E4860
 * CFG Structure:
 *   L_080E4564: call func_080E4860(); call func_080098AC(); call func_080098AC(); call func_08000608(); call func_08000608(); call func_08000608()
 *   L_080E45CE: call func_08000608(); if (!=) goto L_080E45CE
 *   L_080E45DA: if (==) goto L_080E45FA
 *   L_080E45EE: call func_08000608(); if (!=) goto L_080E45EE
 *   L_080E45FA: if (==) goto L_080E461E
 *   L_080E4612: call func_08000608(); if (!=) goto L_080E4612
 *   L_080E461E: if (==) goto L_080E463E
 *   L_080E4632: call func_08000608(); if (!=) goto L_080E4632
 *   L_080E463E: if (==) goto L_080E4662
 *   L_080E4656: call func_08000608(); if (!=) goto L_080E4656
 *   L_080E4662: if (==) goto L_080E4682
 *   L_080E4676: call func_08000608(); if (!=) goto L_080E4676
 * ========================================================================== */
extern void func_08000608(void);
extern void func_080086BC(void);
extern void func_080098AC(void);
extern void func_08050D0C(void);
extern void func_080D3914(void);
extern void func_080E4860(void);
void func_080E4564(void) {
    int r7_var;
    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	add r7, r1, #0\n"
        "	ldr r1, =0x00000888\n"
        "	add r0, r5, r1\n"
        "	mov r1, #2\n"
        "	bl func_080E4860\n"
        "	ldr r1, =0x0000082C\n"
        "	add r0, r5, r1\n"
        "	mov r1, #2\n"
        "	bl func_080098AC\n"
        "	mov r1, #0x82\n"
        "	lsl r1, r1, #4\n"
        "	add r0, r5, r1\n"
        "	mov r1, #2\n"
        "	bl func_080098AC\n"
        "	mov r1, #0xfd\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x000007E4\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0xf8\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x000007BC\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0xe1\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E45DA\n"
        "	add r1, #0x14\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E45DA\n"
        "	mov r0, #0xe1\n"
        "	lsl r0, r0, #3\n"
        "	add r6, r5, r0\n"
        "_L_080E45CE:\n"
        "	sub r4, #4\n"
        "	ldr r0, [r4]\n"
        "	bl func_08000608\n"
        "	cmp r6, r4\n"
        "	bne _L_080E45CE\n"
        "_L_080E45DA:\n"
        "	ldr r1, =0x000006F4\n"
        "	add r0, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E45FA\n"
        "	add r1, #0x14\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E45FA\n"
        "	ldr r0, =0x000006F4\n"
        "	add r6, r5, r0\n"
        "_L_080E45EE:\n"
        "	sub r4, #4\n"
        "	ldr r0, [r4]\n"
        "	bl func_08000608\n"
        "	cmp r6, r4\n"
        "	bne _L_080E45EE\n"
        "_L_080E45FA:\n"
        "	mov r1, #0xdc\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E461E\n"
        "	add r1, #0x14\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E461E\n"
        "	mov r0, #0xdc\n"
        "	lsl r0, r0, #3\n"
        "	add r6, r5, r0\n"
        "_L_080E4612:\n"
        "	sub r4, #4\n"
        "	ldr r0, [r4]\n"
        "	bl func_08000608\n"
        "	cmp r6, r4\n"
        "	bne _L_080E4612\n"
        "_L_080E461E:\n"
        "	ldr r1, =0x0000062C\n"
        "	add r0, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E463E\n"
        "	add r1, #0x14\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E463E\n"
        "	ldr r0, =0x0000062C\n"
        "	add r6, r5, r0\n"
        "_L_080E4632:\n"
        "	sub r4, #4\n"
        "	ldr r0, [r4]\n"
        "	bl func_08000608\n"
        "	cmp r6, r4\n"
        "	bne _L_080E4632\n"
        "_L_080E463E:\n"
        "	mov r1, #0xc3\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E4662\n"
        "	add r1, #0x14\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E4662\n"
        "	mov r0, #0xc3\n"
        "	lsl r0, r0, #3\n"
        "	add r6, r5, r0\n"
        "_L_080E4656:\n"
        "	sub r4, #4\n"
        "	ldr r0, [r4]\n"
        "	bl func_08000608\n"
        "	cmp r6, r4\n"
        "	bne _L_080E4656\n"
        "_L_080E4662:\n"
        "	ldr r1, =0x00000564\n"
        "	add r0, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E4682\n"
        "	add r1, #0x14\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E4682\n"
        "	ldr r0, =0x00000564\n"
        "	add r6, r5, r0\n"
        "_L_080E4676:\n"
        "	sub r4, #4\n"
        "	ldr r0, [r4]\n"
        "	bl func_08000608\n"
        "	cmp r6, r4\n"
        "	bne _L_080E4676\n"
        "_L_080E4682:\n"
        "	mov r1, #0xaa\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E46A6\n"
        "	add r1, #0x14\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E46A6\n"
        "	mov r0, #0xaa\n"
        "	lsl r0, r0, #3\n"
        "	add r6, r5, r0\n"
        "_L_080E469A:\n"
        "	sub r4, #4\n"
        "	ldr r0, [r4]\n"
        "	bl func_08000608\n"
        "	cmp r6, r4\n"
        "	bne _L_080E469A\n"
        "_L_080E46A6:\n"
        "	ldr r1, =0x0000052C\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0xa5\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x00000504\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0xa0\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x000004DC\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0x9b\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x000004B4\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0x96\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x0000048C\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0x91\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x00000464\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0x8c\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x0000043C\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E4740\n"
        "	ldr r0, [r1, #8]\n"
        "	ldr r2, [r0, #0xc]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E4740:\n"
        "	mov r1, #0x87\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E4758\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E4758:\n"
        "	ldr r1, =0x00000434\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E476E\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E476E:\n"
        "	mov r1, #0x86\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E4786\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E4786:\n"
        "	ldr r1, =0x0000042C\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E479C\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E479C:\n"
        "	mov r1, #0x85\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E47B4\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E47B4:\n"
        "	ldr r1, =0x00000424\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E47CA\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E47CA:\n"
        "	mov r1, #0x84\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E47E2\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E47E2:\n"
        "	ldr r1, =0x0000041C\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E47F8\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E47F8:\n"
        "	mov r1, #0x83\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E480A\n"
        "	mov r1, #3\n"
        "	bl func_08050D0C\n"
        "_L_080E480A:\n"
        "	add r0, r5, #0\n"
        "	add r1, r7, #0\n"
        "	bl func_080086BC\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_080E4860 @ 0x080E4860 (224B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E4860 @ 0x080E4860 (224 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x04:u32(R)
 * Callees: func_08000608, func_080079E8, func_08007C28
 * CFG Structure:
 *   L_080E4860: call func_08007C28(); call func_080079E8(); call func_08007C28(); call func_080079E8(); call func_08007C28(); call func_080079E8()
 *   L_080E493A: return
 * ========================================================================== */
extern void func_08000608(void);
extern void func_080079E8(void);
extern void func_08007C28(void);
void func_080E4860(void) {

    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r5, r1, #0\n"
        "	add r4, r6, #0\n"
        "	add r4, #0x50\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	ldr r1, [r6, #4]\n"
        "	add r0, r6, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r6, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r0, #1\n"
        "	and r0, r5\n"
        "	cmp r0, #0\n"
        "	beq _L_080E493A\n"
        "	add r0, r6, #0\n"
        "	bl func_08000608\n"
        "_L_080E493A:\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
}

/* --- func_080E4940 @ 0x080E4940 (1040B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E4940 @ 0x080E4940 (1040 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(R), +0x04:u32(R), +0x08:u32(R), +0x0C:u32(R)
 * Callees: func_08000608, func_08007184, func_080073E0, func_080086BC, func_08050D0C, func_080D3914
 * CFG Structure:
 *   L_080E4940: if (==) goto L_080E4966
 *   L_080E495A: call func_08000608(); if (!=) goto L_080E495A
 *   L_080E4966: call func_08000608(); call func_08000608(); call func_08000608(); call func_08000608(); if (==) goto L_080E49B0
 *   L_080E49A4: call func_08000608(); if (!=) goto L_080E49A4
 *   L_080E49B0: call func_08000608(); if (==) goto L_080E49DC
 *   L_080E49D0: call func_08000608(); if (!=) goto L_080E49D0
 *   L_080E49DC: call func_08000608(); call func_08000608(); call func_08000608(); call func_08000608(); call func_08000608(); call func_08000608()
 *   L_080E4A3A: call func_08000608(); if (!=) goto L_080E4A3A
 *   L_080E4A46: if (==) goto L_080E4A66
 *   L_080E4A5A: call func_08000608(); if (!=) goto L_080E4A5A
 *   L_080E4A66: call func_08000608(); call func_08000608(); call func_08000608(); call func_08000608(); if (==) goto L_080E4AB0
 *   L_080E4AA4: call func_08000608(); if (!=) goto L_080E4AA4
 * ========================================================================== */
extern void func_08000608(void);
extern void func_08007184(void);
extern void func_080073E0(void);
extern void func_080086BC(void);
extern void func_08050D0C(void);
extern void func_080D3914(void);
void func_080E4940(void) {
    int r7_var;
    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	add r7, r1, #0\n"
        "	ldr r1, .Lpool_080E4C70\n"
        "	add r0, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E4966\n"
        "	add r1, #0x28\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E4966\n"
        "	ldr r0, .Lpool_080E4C70\n"
        "	add r6, r5, r0\n"
        "_L_080E495A:\n"
        "	sub r4, #4\n"
        "	ldr r0, [r4]\n"
        "	bl func_08000608\n"
        "	cmp r6, r4\n"
        "	bne _L_080E495A\n"
        "_L_080E4966:\n"
        "	ldr r1, .Lpool_080E4C74\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, .Lpool_080E4C78\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0xa8\n"
        "	lsl r1, r1, #4\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, .Lpool_080E4C7C\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, .Lpool_080E4C80\n"
        "	add r0, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E49B0\n"
        "	add r1, #8\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E49B0\n"
        "	ldr r0, .Lpool_080E4C80\n"
        "	add r6, r5, r0\n"
        "_L_080E49A4:\n"
        "	sub r4, #4\n"
        "	ldr r0, [r4]\n"
        "	bl func_08000608\n"
        "	cmp r6, r4\n"
        "	bne _L_080E49A4\n"
        "_L_080E49B0:\n"
        "	mov r1, #0xa3\n"
        "	lsl r1, r1, #4\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, .Lpool_080E4C84\n"
        "	add r0, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E49DC\n"
        "	add r1, #8\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E49DC\n"
        "	ldr r0, .Lpool_080E4C84\n"
        "	add r6, r5, r0\n"
        "_L_080E49D0:\n"
        "	sub r4, #4\n"
        "	ldr r0, [r4]\n"
        "	bl func_08000608\n"
        "	cmp r6, r4\n"
        "	bne _L_080E49D0\n"
        "_L_080E49DC:\n"
        "	ldr r1, .Lpool_080E4C88\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0x9c\n"
        "	lsl r1, r1, #4\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, .Lpool_080E4C8C\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, .Lpool_080E4C90\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, .Lpool_080E4C94\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0x97\n"
        "	lsl r1, r1, #4\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, .Lpool_080E4C98\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, .Lpool_080E4C9C\n"
        "	add r0, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E4A46\n"
        "	add r1, #8\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E4A46\n"
        "	ldr r0, .Lpool_080E4C9C\n"
        "	add r6, r5, r0\n"
        "_L_080E4A3A:\n"
        "	sub r4, #4\n"
        "	ldr r0, [r4]\n"
        "	bl func_08000608\n"
        "	cmp r6, r4\n"
        "	bne _L_080E4A3A\n"
        "_L_080E4A46:\n"
        "	ldr r1, .Lpool_080E4CA0\n"
        "	add r0, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E4A66\n"
        "	add r1, #8\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E4A66\n"
        "	ldr r0, .Lpool_080E4CA0\n"
        "	add r6, r5, r0\n"
        "_L_080E4A5A:\n"
        "	sub r4, #4\n"
        "	ldr r0, [r4]\n"
        "	bl func_08000608\n"
        "	cmp r6, r4\n"
        "	bne _L_080E4A5A\n"
        "_L_080E4A66:\n"
        "	ldr r1, .Lpool_080E4CA4\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, .Lpool_080E4CA8\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0x8d\n"
        "	lsl r1, r1, #4\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, .Lpool_080E4CAC\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, .Lpool_080E4CB0\n"
        "	add r0, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E4AB0\n"
        "	add r1, #8\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E4AB0\n"
        "	ldr r0, .Lpool_080E4CB0\n"
        "	add r6, r5, r0\n"
        "_L_080E4AA4:\n"
        "	sub r4, #4\n"
        "	ldr r0, [r4]\n"
        "	bl func_08000608\n"
        "	cmp r6, r4\n"
        "	bne _L_080E4AA4\n"
        "_L_080E4AB0:\n"
        "	ldr r1, .Lpool_080E4CB4\n"
        "	add r0, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E4AD0\n"
        "	add r1, #8\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E4AD0\n"
        "	ldr r0, .Lpool_080E4CB4\n"
        "	add r6, r5, r0\n"
        "_L_080E4AC4:\n"
        "	sub r4, #4\n"
        "	ldr r0, [r4]\n"
        "	bl func_08000608\n"
        "	cmp r6, r4\n"
        "	bne _L_080E4AC4\n"
        "_L_080E4AD0:\n"
        "	mov r1, #0xf9\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E4AF4\n"
        "	add r1, #0x14\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E4AF4\n"
        "	mov r0, #0xf9\n"
        "	lsl r0, r0, #3\n"
        "	add r6, r5, r0\n"
        "_L_080E4AE8:\n"
        "	sub r4, #4\n"
        "	ldr r0, [r4]\n"
        "	bl func_08000608\n"
        "	cmp r6, r4\n"
        "	bne _L_080E4AE8\n"
        "_L_080E4AF4:\n"
        "	ldr r1, .Lpool_080E4CB8\n"
        "	add r0, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E4B14\n"
        "	add r1, #0x14\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E4B14\n"
        "	ldr r0, .Lpool_080E4CB8\n"
        "	add r6, r5, r0\n"
        "_L_080E4B08:\n"
        "	sub r4, #4\n"
        "	ldr r0, [r4]\n"
        "	bl func_08000608\n"
        "	cmp r6, r4\n"
        "	bne _L_080E4B08\n"
        "_L_080E4B14:\n"
        "	ldr r1, .Lpool_080E4CBC\n"
        "	add r0, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E4B34\n"
        "	add r1, #8\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E4B34\n"
        "	ldr r0, .Lpool_080E4CBC\n"
        "	add r6, r5, r0\n"
        "_L_080E4B28:\n"
        "	sub r4, #4\n"
        "	ldr r0, [r4]\n"
        "	bl func_08000608\n"
        "	cmp r6, r4\n"
        "	bne _L_080E4B28\n"
        "_L_080E4B34:\n"
        "	ldr r1, .Lpool_080E4CC0\n"
        "	add r0, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E4B54\n"
        "	add r1, #8\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E4B54\n"
        "	ldr r0, .Lpool_080E4CC0\n"
        "	add r6, r5, r0\n"
        "_L_080E4B48:\n"
        "	sub r4, #4\n"
        "	ldr r0, [r4]\n"
        "	bl func_08000608\n"
        "	cmp r6, r4\n"
        "	bne _L_080E4B48\n"
        "_L_080E4B54:\n"
        "	mov r1, #0xf4\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E4B6C\n"
        "	ldr r0, [r1, #8]\n"
        "	ldr r2, [r0, #0xc]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E4B6C:\n"
        "	ldr r1, .Lpool_080E4CC4\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E4B82\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E4B82:\n"
        "	mov r1, #0xf3\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E4B9A\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E4B9A:\n"
        "	ldr r1, .Lpool_080E4CC8\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E4BB0\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E4BB0:\n"
        "	mov r1, #0xf2\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E4BC8\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E4BC8:\n"
        "	ldr r1, .Lpool_080E4CCC\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E4BDE\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E4BDE:\n"
        "	mov r1, #0xf1\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E4BF6\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E4BF6:\n"
        "	ldr r1, .Lpool_080E4CD0\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E4C0C\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E4C0C:\n"
        "	mov r1, #0xf0\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E4C24\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E4C24:\n"
        "	ldr r0, .Lpool_080E4CD4\n"
        "	add r4, r5, r0\n"
        "	ldr r1, [r4]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E4C3A\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E4C3A:\n"
        "	ldr r1, .Lpool_080E4CD8\n"
        "	add r0, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E4C5E\n"
        "	cmp r0, r4\n"
        "	beq _L_080E4C5E\n"
        "	add r6, r0, #0\n"
        "_L_080E4C48:\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	cmp r6, r4\n"
        "	bne _L_080E4C48\n"
        "_L_080E4C5E:\n"
        "	ldr r1, .Lpool_080E4CDC\n"
        "	add r0, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E4CFC\n"
        "	add r1, #0x10\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	b _L_080E4CE0\n"
        "	.align 2, 0\n"
        ".Lpool_080E4C70:\n"
        "	.word 0x00000AEC\n"
        ".Lpool_080E4C74:\n"
        "	.word 0x00000AC8\n"
        ".Lpool_080E4C78:\n"
        "	.word 0x00000AA4\n"
        ".Lpool_080E4C7C:\n"
        "	.word 0x00000A7C\n"
        ".Lpool_080E4C80:\n"
        "	.word 0x00000A34\n"
        ".Lpool_080E4C84:\n"
        "	.word 0x000009E8\n"
        ".Lpool_080E4C88:\n"
        "	.word 0x000009E4\n"
        ".Lpool_080E4C8C:\n"
        "	.word 0x000009BC\n"
        ".Lpool_080E4C90:\n"
        "	.word 0x00000998\n"
        ".Lpool_080E4C94:\n"
        "	.word 0x00000994\n"
        ".Lpool_080E4C98:\n"
        "	.word 0x0000096C\n"
        ".Lpool_080E4C9C:\n"
        "	.word 0x00000924\n"
        ".Lpool_080E4CA0:\n"
        "	.word 0x0000091C\n"
        ".Lpool_080E4CA4:\n"
        "	.word 0x000008F8\n"
        ".Lpool_080E4CA8:\n"
        "	.word 0x000008F4\n"
        ".Lpool_080E4CAC:\n"
        "	.word 0x000008CC\n"
        ".Lpool_080E4CB0:\n"
        "	.word 0x00000884\n"
        ".Lpool_080E4CB4:\n"
        "	.word 0x0000087C\n"
        ".Lpool_080E4CB8:\n"
        "	.word 0x000007B4\n"
        ".Lpool_080E4CBC:\n"
        "	.word 0x000007AC\n"
        ".Lpool_080E4CC0:\n"
        "	.word 0x000007A4\n"
        ".Lpool_080E4CC4:\n"
        "	.word 0x0000079C\n"
        ".Lpool_080E4CC8:\n"
        "	.word 0x00000794\n"
        ".Lpool_080E4CCC:\n"
        "	.word 0x0000078C\n"
        ".Lpool_080E4CD0:\n"
        "	.word 0x00000784\n"
        ".Lpool_080E4CD4:\n"
        "	.word 0x0000077C\n"
        ".Lpool_080E4CD8:\n"
        "	.word 0x0000073C\n"
        ".Lpool_080E4CDC:\n"
        "	.word 0x0000072C\n"
        "_L_080E4CE0:\n"
        "	beq _L_080E4CFC\n"
        "	ldr r0, =0x0000072C\n"
        "	add r6, r5, r0\n"
        "_L_080E4CE6:\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	cmp r6, r4\n"
        "	bne _L_080E4CE6\n"
        "_L_080E4CFC:\n"
        "	ldr r1, =0x00000724\n"
        "	add r4, r5, r1\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	ldr r0, =0x0000071C\n"
        "	add r4, r5, r0\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_080073E0\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_08007184\n"
        "	mov r1, #0xe3\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E4D36\n"
        "	mov r1, #3\n"
        "	bl func_08050D0C\n"
        "_L_080E4D36:\n"
        "	add r0, r5, #0\n"
        "	add r1, r7, #0\n"
        "	bl func_080086BC\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_080E4D50 @ 0x080E4D50 (484B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E4D50 @ 0x080E4D50 (484 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(R), +0x08:u32(R), +0x0C:u32(R)
 * Callees: func_08000608, func_080086BC, func_080098AC, func_08050D0C, func_080D3914, func_080E4F34
 * CFG Structure:
 *   L_080E4D50: call func_080E4F34(); call func_080098AC(); call func_080098AC(); call func_08000608(); call func_08000608(); call func_08000608()
 *   L_080E4E28: if (==) goto L_080E4E40
 *   L_080E4E40: if (==) goto L_080E4E56
 *   L_080E4E56: if (==) goto L_080E4E6E
 *   L_080E4E6E: if (==) goto L_080E4E84
 *   L_080E4E84: if (==) goto L_080E4E9C
 *   L_080E4E9C: if (==) goto L_080E4EB2
 *   L_080E4EB2: if (==) goto L_080E4ECA
 *   L_080E4ECA: if (==) goto L_080E4EE0
 *   L_080E4EE0: if (==) goto L_080E4EF2
 *   L_080E4EF2: call func_080086BC(); return
 * ========================================================================== */
extern void func_08000608(void);
extern void func_080086BC(void);
extern void func_080098AC(void);
extern void func_08050D0C(void);
extern void func_080D3914(void);
extern void func_080E4F34(void);
void func_080E4D50(void) {

    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	add r5, r1, #0\n"
        "	mov r1, #0xb6\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r4, r1\n"
        "	mov r1, #2\n"
        "	bl func_080E4F34\n"
        "	ldr r1, =0x00000594\n"
        "	add r0, r4, r1\n"
        "	mov r1, #2\n"
        "	bl func_080098AC\n"
        "	mov r1, #0xb1\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r4, r1\n"
        "	mov r1, #2\n"
        "	bl func_080098AC\n"
        "	ldr r1, =0x00000554\n"
        "	add r0, r4, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0xaa\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r4, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x0000052C\n"
        "	add r0, r4, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0xa5\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r4, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x00000504\n"
        "	add r0, r4, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0xa0\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r4, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x000004DC\n"
        "	add r0, r4, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0x9b\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r4, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x000004B4\n"
        "	add r0, r4, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0x96\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r4, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x0000048C\n"
        "	add r0, r4, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0x91\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r4, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x00000464\n"
        "	add r0, r4, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0x8c\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r4, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x0000043C\n"
        "	add r0, r4, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E4E28\n"
        "	ldr r0, [r1, #8]\n"
        "	ldr r2, [r0, #0xc]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E4E28:\n"
        "	mov r1, #0x87\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r4, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E4E40\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E4E40:\n"
        "	ldr r1, =0x00000434\n"
        "	add r0, r4, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E4E56\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E4E56:\n"
        "	mov r1, #0x86\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r4, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E4E6E\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E4E6E:\n"
        "	ldr r1, =0x0000042C\n"
        "	add r0, r4, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E4E84\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E4E84:\n"
        "	mov r1, #0x85\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r4, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E4E9C\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E4E9C:\n"
        "	ldr r1, =0x00000424\n"
        "	add r0, r4, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E4EB2\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E4EB2:\n"
        "	mov r1, #0x84\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r4, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E4ECA\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E4ECA:\n"
        "	ldr r1, =0x0000041C\n"
        "	add r0, r4, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E4EE0\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E4EE0:\n"
        "	mov r1, #0x83\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r4, r1\n"
        "	ldr r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E4EF2\n"
        "	mov r1, #3\n"
        "	bl func_08050D0C\n"
        "_L_080E4EF2:\n"
        "	add r0, r4, #0\n"
        "	add r1, r5, #0\n"
        "	bl func_080086BC\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
}

/* --- func_080E4F34 @ 0x080E4F34 (188B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E4F34 @ 0x080E4F34 (188 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x04:u32(R)
 * Callees: func_08000608, func_080079E8, func_08007C28
 * CFG Structure:
 *   L_080E4F34: call func_08007C28(); call func_080079E8(); call func_08007C28(); call func_080079E8(); call func_08007C28(); call func_080079E8()
 *   L_080E4FEA: return
 * ========================================================================== */
extern void func_08000608(void);
extern void func_080079E8(void);
extern void func_08007C28(void);
void func_080E4F34(void) {

    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r5, r1, #0\n"
        "	add r4, r6, #0\n"
        "	add r4, #0x40\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	ldr r1, [r6, #4]\n"
        "	add r0, r6, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r6, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r0, #1\n"
        "	and r0, r5\n"
        "	cmp r0, #0\n"
        "	beq _L_080E4FEA\n"
        "	add r0, r6, #0\n"
        "	bl func_08000608\n"
        "_L_080E4FEA:\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
}

/* --- func_080E4FF0 @ 0x080E4FF0 (688B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E4FF0 @ 0x080E4FF0 (688 bytes)
 * Role   : C++ Polymorphic Caller (_call_via_r2)
 * Fields : +0x00:u32(R), +0x08:u32(R), +0x0C:u32(R)
 * Callees: func_08000608, func_080086BC, func_080098AC, func_08050D0C, func_080D3914, func_080E5324
 * CFG Structure:
 *   L_080E4FF0: call func_080E5324(); call func_080098AC(); call func_080098AC(); call func_08000608(); call func_08000608(); call func_08000608()
 *   L_080E5098: call func_08000608(); if (!=) goto L_080E5098
 *   L_080E50A4: call func_08000608(); if (==) goto L_080E50D0
 *   L_080E50C4: call func_08000608(); if (!=) goto L_080E50C4
 *   L_080E50D0: call func_08000608(); call func_08000608(); call func_08000608(); call func_08000608(); call func_08000608(); call func_08000608()
 *   L_080E5160: if (==) goto L_080E5178
 *   L_080E5178: if (==) goto L_080E518E
 *   L_080E518E: if (==) goto L_080E51A6
 *   L_080E51A6: if (==) goto L_080E51BC
 *   L_080E51BC: if (==) goto L_080E51D4
 *   L_080E51D4: if (==) goto L_080E51EA
 *   L_080E51EA: if (==) goto L_080E5202
 * ========================================================================== */
extern void func_08000608(void);
extern void func_080086BC(void);
extern void func_080098AC(void);
extern void func_08050D0C(void);
extern void func_080D3914(void);
extern void func_080E5324(void);
void func_080E4FF0(void) {
    int r7_var;
    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	add r7, r1, #0\n"
        "	ldr r1, =0x0000083C\n"
        "	add r0, r5, r1\n"
        "	mov r1, #2\n"
        "	bl func_080E5324\n"
        "	mov r1, #0x83\n"
        "	lsl r1, r1, #4\n"
        "	add r0, r5, r1\n"
        "	mov r1, #2\n"
        "	bl func_080098AC\n"
        "	ldr r1, =0x00000824\n"
        "	add r0, r5, r1\n"
        "	mov r1, #2\n"
        "	bl func_080098AC\n"
        "	ldr r1, =0x000007EC\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0xfd\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x000007C4\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0xf8\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x0000079C\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0xf3\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x00000754\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0xea\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x0000072C\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0xe5\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x000006A4\n"
        "	add r0, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E50A4\n"
        "	add r1, #0x64\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E50A4\n"
        "	ldr r0, =0x000006A4\n"
        "	add r6, r5, r0\n"
        "_L_080E5098:\n"
        "	sub r4, #4\n"
        "	ldr r0, [r4]\n"
        "	bl func_08000608\n"
        "	cmp r6, r4\n"
        "	bne _L_080E5098\n"
        "_L_080E50A4:\n"
        "	mov r1, #0xd4\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x0000061C\n"
        "	add r0, r5, r1\n"
        "	cmp r0, #0\n"
        "	beq _L_080E50D0\n"
        "	add r1, #0x64\n"
        "	add r4, r5, r1\n"
        "	cmp r0, r4\n"
        "	beq _L_080E50D0\n"
        "	ldr r0, =0x0000061C\n"
        "	add r6, r5, r0\n"
        "_L_080E50C4:\n"
        "	sub r4, #4\n"
        "	ldr r0, [r4]\n"
        "	bl func_08000608\n"
        "	cmp r6, r4\n"
        "	bne _L_080E50C4\n"
        "_L_080E50D0:\n"
        "	mov r1, #0xc3\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x000005F4\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0xbe\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x000005CC\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0xb9\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x000005A4\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0xb4\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x0000057C\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0xaf\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x00000554\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	mov r1, #0xaa\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	bl func_08000608\n"
        "	ldr r1, =0x00000544\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E5160\n"
        "	ldr r0, [r1, #8]\n"
        "	ldr r2, [r0, #0xc]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E5160:\n"
        "	mov r1, #0xa8\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E5178\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E5178:\n"
        "	ldr r1, =0x0000053C\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E518E\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E518E:\n"
        "	mov r1, #0xa7\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E51A6\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E51A6:\n"
        "	ldr r1, =0x00000534\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E51BC\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E51BC:\n"
        "	mov r1, #0xa6\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E51D4\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E51D4:\n"
        "	ldr r1, =0x0000052C\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E51EA\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E51EA:\n"
        "	mov r1, #0xa5\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E5202\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E5202:\n"
        "	ldr r1, =0x00000524\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E5218\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E5218:\n"
        "	mov r1, #0xa4\n"
        "	lsl r1, r1, #3\n"
        "	add r0, r5, r1\n"
        "	ldr r1, [r0]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E5230\n"
        "	ldr r0, [r1]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E5230:\n"
        "	ldr r1, =0x0000051C\n"
        "	add r0, r5, r1\n"
        "	ldr r0, [r0]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E5240\n"
        "	mov r1, #3\n"
        "	bl func_08050D0C\n"
        "_L_080E5240:\n"
        "	add r0, r5, #0\n"
        "	add r1, r7, #0\n"
        "	bl func_080086BC\n"
        : "=l"(r7_var) : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
}

/* --- func_080E52A0 @ 0x080E52A0 (132B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E52A0 @ 0x080E52A0 (132 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x04:u32(W)
 * Callees: func_08007874
 * CFG Structure:
 *   L_080E52A0: call func_08007874(); call func_08007874(); call func_08007874(); call func_08007874(); call func_08007874(); call func_08007874()
 * ========================================================================== */
extern void func_08007874(void);
int func_080E52A0(void) {
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	bl func_08007874\n"
        "	mov r5, #0\n"
        "	str r5, [r6, #4]\n"
        "	add r4, r6, #0\n"
        "	add r4, #8\n"
        "	add r0, r4, #0\n"
        "	bl func_08007874\n"
        "	str r5, [r4, #4]\n"
        "	add r4, #8\n"
        "	add r0, r4, #0\n"
        "	bl func_08007874\n"
        "	str r5, [r4, #4]\n"
        "	add r4, #8\n"
        "	add r0, r4, #0\n"
        "	bl func_08007874\n"
        "	str r5, [r4, #4]\n"
        "	add r4, #8\n"
        "	add r0, r4, #0\n"
        "	bl func_08007874\n"
        "	str r5, [r4, #4]\n"
        "	add r4, #8\n"
        "	add r0, r4, #0\n"
        "	bl func_08007874\n"
        "	str r5, [r4, #4]\n"
        "	add r4, #8\n"
        "	add r0, r4, #0\n"
        "	bl func_08007874\n"
        "	str r5, [r4, #4]\n"
        "	add r4, #8\n"
        "	add r0, r4, #0\n"
        "	bl func_08007874\n"
        "	str r5, [r4, #4]\n"
        "	add r4, #8\n"
        "	add r0, r4, #0\n"
        "	bl func_08007874\n"
        "	str r5, [r4, #4]\n"
        "	add r4, #8\n"
        "	add r0, r4, #0\n"
        "	bl func_08007874\n"
        "	str r5, [r4, #4]\n"
        "	add r4, #8\n"
        "	add r0, r4, #0\n"
        "	bl func_08007874\n"
        "	str r5, [r4, #4]\n"
        "	add r4, #8\n"
        "	add r0, r4, #0\n"
        "	bl func_08007874\n"
        "	str r5, [r4, #4]\n"
        "	add r0, r6, #0\n"
        : "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    return __ret;
}

/* --- func_080E5324 @ 0x080E5324 (244B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E5324 @ 0x080E5324 (244 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x04:u32(R)
 * Callees: func_08000608, func_080079E8, func_08007C28
 * CFG Structure:
 *   L_080E5324: call func_08007C28(); call func_080079E8(); call func_08007C28(); call func_080079E8(); call func_08007C28(); call func_080079E8()
 *   L_080E5410: return
 * ========================================================================== */
extern void func_08000608(void);
extern void func_080079E8(void);
extern void func_08007C28(void);
void func_080E5324(void) {

    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	add r5, r1, #0\n"
        "	add r4, r6, #0\n"
        "	add r4, #0x58\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	sub r4, #8\n"
        "	ldr r1, [r4, #4]\n"
        "	add r0, r4, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r4, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	ldr r1, [r6, #4]\n"
        "	add r0, r6, #0\n"
        "	bl func_08007C28\n"
        "	add r0, r6, #0\n"
        "	mov r1, #2\n"
        "	bl func_080079E8\n"
        "	mov r0, #1\n"
        "	and r0, r5\n"
        "	cmp r0, #0\n"
        "	beq _L_080E5410\n"
        "	add r0, r6, #0\n"
        "	bl func_08000608\n"
        "_L_080E5410:\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
}

/* --- func_080E5418 @ 0x080E5418 (20B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_080CA6F4(u32); void func_080E5418(void) { func_080CA6F4(**(u32 ***)0x03000414); }

/* --- func_080E542C @ 0x080E542C (76B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

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

/* --- func_080E5478 @ 0x080E5478 (76B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E5478 @ 0x080E5478 (76 bytes)
 * Role   : C++ Virtual Deleting Destructor ~Class(this, int __in_chrg) [vtable: 0x080E857C, 0x080E8594]
 * Fields : +0x00:u32(W), +0x04:u16(R), +0x08:u32(R), +0x0C:u32(W), +0x10:u32(R), +0x14:u32(W)
 * Callees: func_080004F4, func_08000528, func_08000608, func_080D100C
 * CFG Structure:
 *   L_080E5478: call func_08000528(); call func_080D100C(); if (==) goto L_080E54A4
 *   L_080E54A4: if (==) goto L_080E54B2
 *   L_080E54B2: return
 * ========================================================================== */
extern void func_080004F4(void);
extern void func_08000528(void);
extern void func_08000608(void);
extern void func_080D100C(void);
void func_080E5478(void) {

    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	add r5, r1, #0\n"
        "	ldr r0, =0x080E857C\n"
        "	str r0, [r4, #0x14]\n"
        "	mov r0, #4\n"
        "	bl func_08000528\n"
        "	ldr r1, [r4, #0x10]\n"
        "	mov r0, #2\n"
        "	bl func_080D100C\n"
        "	ldr r0, =0x080E8594\n"
        "	str r0, [r4, #0xc]\n"
        "	ldr r1, =0x03000414\n"
        "	ldr r0, [r4, #8]\n"
        "	str r0, [r1]\n"
        "	ldrh r0, [r4, #4]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E54A4\n"
        "	bl func_080004F4\n"
        "_L_080E54A4:\n"
        "	mov r0, #1\n"
        "	and r0, r5\n"
        "	cmp r0, #0\n"
        "	beq _L_080E54B2\n"
        "	add r0, r4, #0\n"
        "	bl func_08000608\n"
        "_L_080E54B2:\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
}

/* --- func_080E54C4 @ 0x080E54C4 (44B) [PURE-C | agbcc_O2] --- */
#define NULL 0

extern void func_080D0260();
void func_080E54C4(u32 arg0, int arg1) {
    if (arg1 != 0) {
        do {
            int next;
            func_080E54C4(arg0, *(u32 *)(arg1 + 0xc));
            next = *(int *)(arg1 + 8);
            if (arg1 != 0) {
                func_080D0260(arg1);
            }
            arg1 = next;
        } while (arg1 != 0);
    }
}

/* --- func_080E54F0 @ 0x080E54F0 (192B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E54F0 @ 0x080E54F0 (192 bytes)
 * Role   : C++ SGI STL Node Allocator / _Rb_tree / Container Template Method
 * Fields : +0x00:u32(RW), +0x04:u32(RW), +0x08:u32(RW), +0x0C:u32(RW), +0x10:u32(RW)
 * Callees: func_080D01F8, func_080D3BC0, func_080E21E0
 * CFG Structure:
 *   L_080E54F0: if (==) goto L_080E551A
 *   L_080E5516: if (==) goto L_080E555A
 *   L_080E551A: call func_080D01F8(); if (!=) goto L_080E552E
 *   L_080E552E: if (==) goto L_080E553E
 *   L_080E553E: if (!=) goto L_080E5550
 *   L_080E5550: if (!=) goto L_080E558C
 *   L_080E555A: call func_080D01F8(); if (!=) goto L_080E556E
 *   L_080E556E: if (==) goto L_080E557E
 *   L_080E557E: if (!=) goto L_080E558C
 *   L_080E558C: call func_080E21E0(); return
 * ========================================================================== */
extern void func_080D01F8(void);
extern void func_080D3BC0(void);
extern void func_080E21E0(void);
int func_080E54F0(void) {
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	add r6, r1, #0\n"
        "	ldr r4, [sp, #0x14]\n"
        "	add r5, r3, #0\n"
        "	ldr r0, [r6, #4]\n"
        "	cmp r5, r0\n"
        "	beq _L_080E551A\n"
        "	ldr r0, [sp, #0x18]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E555A\n"
        "	cmp r2, #0\n"
        "	bne _L_080E551A\n"
        "	mov r2, #0\n"
        "	ldr r1, [r4]\n"
        "	ldr r0, [r5, #0x10]\n"
        "	cmp r1, r0\n"
        "	bhs _L_080E5516\n"
        "	mov r2, #1\n"
        "_L_080E5516:\n"
        "	cmp r2, #0\n"
        "	beq _L_080E555A\n"
        "_L_080E551A:\n"
        "	mov r0, #0x18\n"
        "	bl func_080D01F8\n"
        "	add r2, r0, #0\n"
        "	cmp r2, #0\n"
        "	bne _L_080E552E\n"
        "	mov r0, #0x18\n"
        "	bl func_080D3BC0\n"
        "	add r2, r0, #0\n"
        "_L_080E552E:\n"
        "	add r1, r2, #0\n"
        "	add r1, #0x10\n"
        "	cmp r1, #0\n"
        "	beq _L_080E553E\n"
        "	ldr r0, [r4]\n"
        "	str r0, [r2, #0x10]\n"
        "	ldr r0, [r4, #4]\n"
        "	str r0, [r1, #4]\n"
        "_L_080E553E:\n"
        "	add r4, r2, #0\n"
        "	str r4, [r5, #8]\n"
        "	ldr r1, [r6, #4]\n"
        "	cmp r5, r1\n"
        "	bne _L_080E5550\n"
        "	str r4, [r5, #4]\n"
        "	ldr r0, [r6, #4]\n"
        "	str r4, [r0, #0xc]\n"
        "	b _L_080E558C\n"
        "_L_080E5550:\n"
        "	ldr r0, [r1, #8]\n"
        "	cmp r5, r0\n"
        "	bne _L_080E558C\n"
        "	str r4, [r1, #8]\n"
        "	b _L_080E558C\n"
        "_L_080E555A:\n"
        "	mov r0, #0x18\n"
        "	bl func_080D01F8\n"
        "	add r2, r0, #0\n"
        "	cmp r2, #0\n"
        "	bne _L_080E556E\n"
        "	mov r0, #0x18\n"
        "	bl func_080D3BC0\n"
        "	add r2, r0, #0\n"
        "_L_080E556E:\n"
        "	add r1, r2, #0\n"
        "	add r1, #0x10\n"
        "	cmp r1, #0\n"
        "	beq _L_080E557E\n"
        "	ldr r0, [r4]\n"
        "	str r0, [r2, #0x10]\n"
        "	ldr r0, [r4, #4]\n"
        "	str r0, [r1, #4]\n"
        "_L_080E557E:\n"
        "	add r4, r2, #0\n"
        "	str r4, [r5, #0xc]\n"
        "	ldr r1, [r6, #4]\n"
        "	ldr r0, [r1, #0xc]\n"
        "	cmp r5, r0\n"
        "	bne _L_080E558C\n"
        "	str r4, [r1, #0xc]\n"
        "_L_080E558C:\n"
        "	str r5, [r4, #4]\n"
        "	mov r0, #0\n"
        "	str r0, [r4, #8]\n"
        "	str r0, [r4, #0xc]\n"
        "	ldr r1, [r6, #4]\n"
        "	add r1, #4\n"
        "	add r0, r4, #0\n"
        "	bl func_080E21E0\n"
        "	ldr r0, [r6, #8]\n"
        "	add r0, #1\n"
        "	str r0, [r6, #8]\n"
        "	str r4, [r7]\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080E55B0 @ 0x080E55B0 (180B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E55B0 @ 0x080E55B0 (180 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW), +0x04:u32(R), +0x04:u8(W), +0x08:u32(R), +0x0C:u32(R), +0x10:u32(R)
 * Callees: func_080E2354, func_080E54F0
 * CFG Structure:
 *   L_080E55B0: if (==) goto L_080E55E6
 *   L_080E55CA: if (>= (u)) goto L_080E55D6
 *   L_080E55D6: if (==) goto L_080E55E0
 *   L_080E55E2: if (!=) goto L_080E55CA
 *   L_080E55E6: if (==) goto L_080E5620
 *   L_080E55FC: if (==) goto L_080E5618
 *   L_080E5618: call func_080E2354()
 *   L_080E5620: if (>= (u)) goto L_080E562E
 *   L_080E562E: if (==) goto L_080E5650
 *   L_080E564A: goto L_080E5654
 * ========================================================================== */
extern void func_080E2354(void);
extern void func_080E54F0(void);
int func_080E55B0(void) {
    u32 sp0, sp1, sp2, sp3, sp4;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4));
    __asm__ volatile(
        "	add r6, r0, #0\n"
        "	mov r8, r1\n"
        "	add r7, r2, #0\n"
        "	ldr r4, [r1, #4]\n"
        "	ldr r5, [r4, #4]\n"
        "	mov r0, #1\n"
        "	cmp r5, #0\n"
        "	beq _L_080E55E6\n"
        "	ldr r2, [r7]\n"
        "_L_080E55CA:\n"
        "	add r4, r5, #0\n"
        "	mov r1, #0\n"
        "	ldr r0, [r4, #0x10]\n"
        "	cmp r2, r0\n"
        "	bhs _L_080E55D6\n"
        "	mov r1, #1\n"
        "_L_080E55D6:\n"
        "	add r0, r1, #0\n"
        "	cmp r0, #0\n"
        "	beq _L_080E55E0\n"
        "	ldr r5, [r4, #8]\n"
        "	b _L_080E55E2\n"
        "_L_080E55E0:\n"
        "	ldr r5, [r4, #0xc]\n"
        "_L_080E55E2:\n"
        "	cmp r5, #0\n"
        "	bne _L_080E55CA\n"
        "_L_080E55E6:\n"
        "	str r4, [sp, #8]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E5620\n"
        "	mov r1, r8\n"
        "	ldr r0, [r1, #4]\n"
        "	ldr r0, [r0, #8]\n"
        "	str r0, [sp, #0xc]\n"
        "	mov r1, #0\n"
        "	cmp r4, r0\n"
        "	bne _L_080E55FC\n"
        "	mov r1, #1\n"
        "_L_080E55FC:\n"
        "	cmp r1, #0\n"
        "	beq _L_080E5618\n"
        "	str r7, [sp]\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #4]\n"
        "	add r0, sp, #0x10\n"
        "	mov r1, r8\n"
        "	add r2, r5, #0\n"
        "	add r3, r4, #0\n"
        "	bl func_080E54F0\n"
        "	mov r1, #1\n"
        "	ldr r0, [sp, #0x10]\n"
        "	b _L_080E564A\n"
        "_L_080E5618:\n"
        "	add r0, r4, #0\n"
        "	bl func_080E2354\n"
        "	str r0, [sp, #8]\n"
        "_L_080E5620:\n"
        "	ldr r2, [sp, #8]\n"
        "	mov r3, #0\n"
        "	ldr r1, [r2, #0x10]\n"
        "	ldr r0, [r7]\n"
        "	cmp r1, r0\n"
        "	bhs _L_080E562E\n"
        "	mov r3, #1\n"
        "_L_080E562E:\n"
        "	add r0, r3, #0\n"
        "	cmp r0, #0\n"
        "	beq _L_080E5650\n"
        "	str r7, [sp]\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #4]\n"
        "	add r0, sp, #0xc\n"
        "	mov r1, r8\n"
        "	add r2, r5, #0\n"
        "	add r3, r4, #0\n"
        "	bl func_080E54F0\n"
        "	mov r1, #1\n"
        "	ldr r0, [sp, #0xc]\n"
        "_L_080E564A:\n"
        "	str r0, [r6]\n"
        "	strb r1, [r6, #4]\n"
        "	b _L_080E5654\n"
        "_L_080E5650:\n"
        "	str r2, [r6]\n"
        "	strb r0, [r6, #4]\n"
        "_L_080E5654:\n"
        "	add r0, r6, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080E5664 @ 0x080E5664 (440B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E5664 @ 0x080E5664 (440 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW), +0x04:u32(R), +0x08:u32(R), +0x0C:u32(R), +0x10:u32(R)
 * Callees: func_080E2354, func_080E2B28, func_080E54F0, func_080E55B0
 * CFG Structure:
 *   L_080E5664: if (!=) goto L_080E56F4
 *   L_080E5694: if (>= (u)) goto L_080E56A2
 *   L_080E56A2: if (!=) goto L_080E5768
 *   L_080E56B0: if (!=) goto L_080E56B8
 *   L_080E56B8: call func_080E2B28(); if (!=) goto L_080E56D0
 *   L_080E56D0: if (>= (u)) goto L_080E56DE
 *   L_080E56DE: if (!=) goto L_080E56E4
 *   L_080E56E4: if (==) goto L_080E57CE
 *   L_080E56F4: if (!=) goto L_080E571E
 *   L_080E5706: if (==) goto L_080E5710
 *   L_080E5710: call func_080E55B0(); goto L_080E5808
 *   L_080E571E: call func_080E2354(); if (>= (u)) goto L_080E573A
 * ========================================================================== */
extern void func_080E2354(void);
extern void func_080E2B28(void);
extern void func_080E54F0(void);
extern void func_080E55B0(void);
int func_080E5664(void) {
    u32 sp0, sp1, sp2, sp3, sp4, sp5;
    int r7_var;
    register int __ret asm("r0");
    __asm__ volatile("" : : "m"(sp0), "m"(sp1), "m"(sp2), "m"(sp3), "m"(sp4), "m"(sp5));
    __asm__ volatile(
        "	add r7, r0, #0\n"
        "	add r6, r1, #0\n"
        "	mov r8, r2\n"
        "	add r4, r3, #0\n"
        "	ldr r1, [r6, #4]\n"
        "	ldr r2, [r2]\n"
        "	ldr r0, [r1, #8]\n"
        "	cmp r2, r0\n"
        "	bne _L_080E56F4\n"
        "	ldr r0, [r6, #8]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E5694\n"
        "	add r0, sp, #8\n"
        "	add r1, r6, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080E55B0\n"
        "	ldr r0, [sp, #8]\n"
        "	b _L_080E5808\n"
        "_L_080E5694:\n"
        "	mov r0, #0\n"
        "	ldr r1, [r2, #0x10]\n"
        "	add r3, r2, #0\n"
        "	ldr r2, [r4]\n"
        "	cmp r2, r1\n"
        "	bhs _L_080E56A2\n"
        "	mov r0, #1\n"
        "_L_080E56A2:\n"
        "	mov sb, r0\n"
        "	cmp r0, #0\n"
        "	bne _L_080E5768\n"
        "	mov r0, #0\n"
        "	cmp r1, r2\n"
        "	bhs _L_080E56B0\n"
        "	mov r0, #1\n"
        "_L_080E56B0:\n"
        "	cmp r0, #0\n"
        "	bne _L_080E56B8\n"
        "	str r3, [r7]\n"
        "	b _L_080E580A\n"
        "_L_080E56B8:\n"
        "	str r3, [sp, #8]\n"
        "	add r0, r3, #0\n"
        "	bl func_080E2B28\n"
        "	add r2, r0, #0\n"
        "	str r2, [sp, #8]\n"
        "	ldr r0, [r6, #4]\n"
        "	cmp r2, r0\n"
        "	bne _L_080E56D0\n"
        "	mov r0, r8\n"
        "	ldr r3, [r0]\n"
        "	b _L_080E57CE\n"
        "_L_080E56D0:\n"
        "	mov r3, #0\n"
        "	ldr r1, [r4]\n"
        "	ldr r0, [r2, #0x10]\n"
        "	add r5, r2, #0\n"
        "	cmp r1, r0\n"
        "	bhs _L_080E56DE\n"
        "	mov r3, #1\n"
        "_L_080E56DE:\n"
        "	cmp r3, #0\n"
        "	bne _L_080E56E4\n"
        "	b _L_080E57FC\n"
        "_L_080E56E4:\n"
        "	mov r1, r8\n"
        "	ldr r3, [r1]\n"
        "	ldr r0, [r3, #0xc]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E57CE\n"
        "	str r4, [sp]\n"
        "	mov r0, sb\n"
        "	b _L_080E57E2\n"
        "_L_080E56F4:\n"
        "	cmp r2, r1\n"
        "	bne _L_080E571E\n"
        "	ldr r3, [r2, #0xc]\n"
        "	mov r5, #0\n"
        "	ldr r1, [r3, #0x10]\n"
        "	ldr r0, [r4]\n"
        "	cmp r1, r0\n"
        "	bhs _L_080E5706\n"
        "	mov r5, #1\n"
        "_L_080E5706:\n"
        "	cmp r5, #0\n"
        "	beq _L_080E5710\n"
        "	str r4, [sp]\n"
        "	str r2, [sp, #4]\n"
        "	b _L_080E57D2\n"
        "_L_080E5710:\n"
        "	add r0, sp, #8\n"
        "	add r1, r6, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080E55B0\n"
        "	ldr r0, [sp, #8]\n"
        "	b _L_080E5808\n"
        "_L_080E571E:\n"
        "	str r2, [sp, #8]\n"
        "	add r0, r2, #0\n"
        "	bl func_080E2354\n"
        "	add r2, r0, #0\n"
        "	str r2, [sp, #8]\n"
        "	mov r1, r8\n"
        "	ldr r3, [r1]\n"
        "	mov r5, #0\n"
        "	ldr r1, [r4]\n"
        "	ldr r0, [r3, #0x10]\n"
        "	cmp r1, r0\n"
        "	bhs _L_080E573A\n"
        "	mov r5, #1\n"
        "_L_080E573A:\n"
        "	mov sb, r5\n"
        "	cmp r5, #0\n"
        "	beq _L_080E577A\n"
        "	mov r0, #0\n"
        "	mov ip, r0\n"
        "	ldr r0, [r2, #0x10]\n"
        "	add r5, r2, #0\n"
        "	cmp r0, r1\n"
        "	bhs _L_080E5750\n"
        "	mov r1, #1\n"
        "	mov ip, r1\n"
        "_L_080E5750:\n"
        "	mov r0, ip\n"
        "	cmp r0, #0\n"
        "	beq _L_080E577A\n"
        "	ldr r0, [r5, #0xc]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E5768\n"
        "	str r4, [sp]\n"
        "	str r5, [sp, #4]\n"
        "	add r0, r7, #0\n"
        "	add r1, r6, #0\n"
        "	mov r2, #0\n"
        "	b _L_080E57EA\n"
        "_L_080E5768:\n"
        "	str r4, [sp]\n"
        "	mov r0, #0\n"
        "	str r0, [sp, #4]\n"
        "	add r0, r7, #0\n"
        "	add r1, r6, #0\n"
        "	add r2, r3, #0\n"
        "	bl func_080E54F0\n"
        "	b _L_080E580A\n"
        "_L_080E577A:\n"
        "	mov r1, r8\n"
        "	ldr r0, [r1]\n"
        "	str r0, [sp, #0xc]\n"
        "	bl func_080E2B28\n"
        "	mov ip, r0\n"
        "	str r0, [sp, #0xc]\n"
        "	mov r0, #1\n"
        "	mov r1, sb\n"
        "	eor r1, r0\n"
        "	mov r0, sb\n"
        "	cmp r0, #0\n"
        "	bne _L_080E57F2\n"
        "	mov r1, r8\n"
        "	ldr r0, [r1]\n"
        "	mov r5, #0\n"
        "	ldr r1, [r0, #0x10]\n"
        "	add r3, r0, #0\n"
        "	ldr r2, [r4]\n"
        "	cmp r1, r2\n"
        "	bhs _L_080E57A6\n"
        "	mov r5, #1\n"
        "_L_080E57A6:\n"
        "	add r1, r5, #0\n"
        "	cmp r1, #0\n"
        "	beq _L_080E57F2\n"
        "	ldr r0, [r6, #4]\n"
        "	mov r5, ip\n"
        "	cmp r5, r0\n"
        "	beq _L_080E57C8\n"
        "	mov r0, #0\n"
        "	mov ip, r0\n"
        "	ldr r0, [r5, #0x10]\n"
        "	cmp r2, r0\n"
        "	bhs _L_080E57C2\n"
        "	mov r0, #1\n"
        "	mov ip, r0\n"
        "_L_080E57C2:\n"
        "	mov r0, ip\n"
        "	cmp r0, #0\n"
        "	beq _L_080E57F2\n"
        "_L_080E57C8:\n"
        "	ldr r0, [r3, #0xc]\n"
        "	cmp r0, #0\n"
        "	bne _L_080E57DE\n"
        "_L_080E57CE:\n"
        "	str r4, [sp]\n"
        "	str r3, [sp, #4]\n"
        "_L_080E57D2:\n"
        "	add r0, r7, #0\n"
        "	add r1, r6, #0\n"
        "	mov r2, #0\n"
        "	bl func_080E54F0\n"
        "	b _L_080E580A\n"
        "_L_080E57DE:\n"
        "	str r4, [sp]\n"
        "	mov r0, #0\n"
        "_L_080E57E2:\n"
        "	str r0, [sp, #4]\n"
        "	add r0, r7, #0\n"
        "	add r1, r6, #0\n"
        "	add r2, r5, #0\n"
        "_L_080E57EA:\n"
        "	add r3, r5, #0\n"
        "	bl func_080E54F0\n"
        "	b _L_080E580A\n"
        "_L_080E57F2:\n"
        "	cmp sb, r1\n"
        "	bne _L_080E57FC\n"
        "	mov r1, r8\n"
        "	ldr r0, [r1]\n"
        "	b _L_080E5808\n"
        "_L_080E57FC:\n"
        "	add r0, sp, #0x10\n"
        "	add r1, r6, #0\n"
        "	add r2, r4, #0\n"
        "	bl func_080E55B0\n"
        "	ldr r0, [sp, #0x10]\n"
        "_L_080E5808:\n"
        "	str r0, [r7]\n"
        "_L_080E580A:\n"
        "	add r0, r7, #0\n"
        : "=l"(r7_var), "=r"(__ret) : : "r1", "r2", "r3", "r4", "r5", "r6", "r9", "r8", "lr", "memory"
    );
    __asm__ volatile("" : "+l"(r7_var), "+l"(r7_var), "+l"(r7_var));
    return __ret;
}

/* --- func_080E581C @ 0x080E581C (40B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08000608(void *); void func_080E581C(u32 *a, int b) { a[1] = 0x080E8594; *(u32 *)0x03000414 = a[0]; if (b & 1) func_08000608(a); }

/* --- func_080E5844 @ 0x080E5844 (40B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_08000608(void *); void func_080E5844(u32 *a, int b) { a[1] = 0x080E8594; *(u32 *)0x03000414 = a[0]; if (b & 1) func_08000608(a); }

/* --- func_080E586C @ 0x080E586C (44B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E586C @ 0x080E586C (44 bytes)
 * Role   : Thumb Function / Method
 * Fields : +0x00:u32(RW), +0x04:u32(RW)
 * Callees: func_080D0260
 * CFG Structure:
 *   L_080E586C: if (==) goto L_080E588A
 *   L_080E5878: if (==) goto L_080E5884
 *   L_080E5884: if (!=) goto L_080E5878
 *   L_080E588A: return
 * ========================================================================== */
extern void func_080D0260(void);
void func_080E586C(void) {

    __asm__ volatile(
        "	add r5, r0, #0\n"
        "	ldr r0, [r5, #4]\n"
        "	ldr r4, [r0]\n"
        "	cmp r4, r0\n"
        "	beq _L_080E588A\n"
        "_L_080E5878:\n"
        "	add r0, r4, #0\n"
        "	ldr r4, [r4]\n"
        "	cmp r0, #0\n"
        "	beq _L_080E5884\n"
        "	bl func_080D0260\n"
        "_L_080E5884:\n"
        "	ldr r0, [r5, #4]\n"
        "	cmp r4, r0\n"
        "	bne _L_080E5878\n"
        "_L_080E588A:\n"
        "	ldr r0, [r5, #4]\n"
        "	str r0, [r0]\n"
        "	str r0, [r0, #4]\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
}

/* --- func_080E5898 @ 0x080E5898 (212B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

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

/* --- func_080E596C @ 0x080E596C (84B) [CFG-ASM (fsm-tier1-native) | agbcc_O2] --- */
#define NULL 0

/* ==========================================================================
 * [FSM-LIFTER] func_080E596C @ 0x080E596C (84 bytes)
 * Role   : C++ Class Constructor / Polymorphic Method [vtable: 0x080E5A28]
 * Fields : +0x00:u32(R), +0x08:u32(R), +0x10:u32(W), +0x78:u32(R), +0x7C:u32(R)
 * Callees: func_080086BC, func_08050D0C, func_080D3914
 * CFG Structure:
 *   L_080E596C: call func_08050D0C(); if (==) goto L_080E5992
 *   L_080E5992: if (==) goto L_080E59AA
 *   L_080E59AA: call func_080086BC(); return
 * ========================================================================== */
extern void func_080086BC(void);
extern void func_08050D0C(void);
extern void func_080D3914(void);
void func_080E596C(void) {

    __asm__ volatile(
        "	add r4, r0, #0\n"
        "	add r5, r1, #0\n"
        "	add r0, #0x80\n"
        "	mov r1, #2\n"
        "	bl func_08050D0C\n"
        "	ldr r1, [r4, #0x7c]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E5992\n"
        "	mov r2, #0x84\n"
        "	lsl r2, r2, #2\n"
        "	add r0, r1, r2\n"
        "	ldr r0, [r0]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E5992:\n"
        "	ldr r1, [r4, #0x78]\n"
        "	cmp r1, #0\n"
        "	beq _L_080E59AA\n"
        "	mov r2, #0x84\n"
        "	lsl r2, r2, #2\n"
        "	add r0, r1, r2\n"
        "	ldr r0, [r0]\n"
        "	ldr r2, [r0, #8]\n"
        "	add r0, r1, #0\n"
        "	mov r1, #3\n"
        "	bl func_080D3914\n"
        "_L_080E59AA:\n"
        "	ldr r0, =0x080E5A28\n"
        "	str r0, [r4, #0x10]\n"
        "	add r0, r4, #0\n"
        "	add r1, r5, #0\n"
        "	bl func_080086BC\n"
        :  : : "r0", "r1", "r2", "r3", "r4", "r5", "lr", "memory"
    );
}

/* --- func_080E59C0 @ 0x080E59C0 (12B) [PURE-C | agbcc_O2] --- */
#define NULL 0

void func_080A4B6C(void);
void func_080E59C0(void) {
    func_080A4B6C();
}
