/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7AB4 (3 functions) */
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

/* 0x0806D8C8 (80B) | code_0803EE94_7AB4_AutoPtrFactory (orig: func_0806D8C8) | origin: pure | domain: code_0803EE94_7AB4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 code_0803EE94_7AA8_Ctor();
extern u32 func_080D3914();
u32 *code_0803EE94_7AB4_AutoPtrFactory(u32 *self, u32 *param_2, u32 param_3, u32 param_4) {
  u32 uVar1;
  int *piVar2;
  u32 uStack_18;
  u32 val;
  *self = 0x080E7AB4;
  val = *param_2;
  *param_2 = 0;
  uStack_18 = val;
  uVar1 = CppRuntime_builtin_new(0x00004178);
  uVar1 = code_0803EE94_7AA8_Ctor(uVar1, &uStack_18, param_3, param_4);
  self[1] = uVar1;
  piVar2 = (int *)*param_2;
  if (piVar2 != (int *)0) {
    func_080D3914(piVar2, 3, *(u32 *)(*piVar2 + 8));
  }
  return self;
}

/* 0x0806D918 (48B) | code_0803EE94_7AB4_Ctor (orig: func_0806D918) | origin: pure | domain: code_0803EE94_7AB4 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void code_0803EE94_7AB4_Ctor(u32 *arg0,u32 arg1) {
  int val;
  *arg0 = 0x080E7AB4;
  val = arg0[1];
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  scene_Dtor(arg0,arg1);
}

/* 0x0806D948 (60B) | code_0803EE94_7AB4_vfunc_0C (orig: func_0806D948) | origin: pure | domain: code_0803EE94_7AB4 | HIGH / vtable_algebra */
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
struct In { int f0; int f4; };
extern "C" AutoPtr<V1> code_0803EE94_7AB4_Sub_0806A1F4(int);
extern "C" AutoPtr<V0> code_0803EE94_7AB4_vfunc_0C(In *in) {
    return code_0803EE94_7AB4_Sub_0806A1F4(in->f4);
}

