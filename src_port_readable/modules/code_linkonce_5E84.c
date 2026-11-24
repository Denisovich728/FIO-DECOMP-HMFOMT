/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_linkonce_5E84 (4 functions) */
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

/* 0x08093AC8 (12B) | code_linkonce_5E84_GetField_0x04 (orig: func_08093AC8) | origin: pure | domain: code_linkonce_5E84 | MEDIUM / graph_algebra */
u32 code_linkonce_5E84_GetField_0x04(u8 **arg0) {
    return *(u32 *)(arg0[1] + (226 << 1));
}

/* 0x080DB320 (76B) | code_linkonce_5E84_AutoPtrFactory (orig: func_080DB320) | origin: pure | domain: code_linkonce_5E84 | HIGH / vtable_algebra */
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
extern "C" AutoPtr<V0> code_linkonce_5E84_AutoPtrFactory(In *in) {
    return AutoPtr<C_080E5E84>(new C_080E5E84(in->f4, in->f8));
}

/* 0x080DC3A0 (100B) | code_linkonce_5E84_vfunc_0C (orig: func_080DC3A0) | origin: wip | domain: code_linkonce_5E84 | HIGH / vtable_algebra */
u32 code_linkonce_5E84_vfunc_0C(u32 *self, s16 param_2) {
    u8 auStack_30 [12];
    int * piStack_24;
    int ** ppiStack_20;
    u32 uStack_1c;
  register s16 uVar1;
  register int iVar2;
  piStack_24 = (int *)0x0;
  code_0803EE94_8018_Create(auStack_30,&piStack_24,*(u32 *)(param_2 + 8));
  code_0803EE94_8018_vfunc_0C(&piStack_24,auStack_30);
  if (piStack_24 != (int *)0x0) {
    func_080D3914(piStack_24,3,*(u32 *)(*piStack_24 + 8));
  }
  uVar1 = code_linkonce_5E84_GetField_0x04(auStack_30);
  *(u32 *)(iVar2 + 0xc) = uVar1;
  iVar2 = *(int *)(param_2 + 4);
  uStack_1c = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  piStack_24 = (int *)0x0;
  *self = uStack_1c;
  ppiStack_20 = &piStack_24;
  code_0803EE94_8018_Ctor(auStack_30,2);
  return self;
}

/* 0x080DC404 (40B) | code_linkonce_5E84_vfunc_08 (orig: func_080DC404) | origin: pure | domain: code_linkonce_5E84 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void code_linkonce_5E84_vfunc_08(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor(arg0,arg1);
}

