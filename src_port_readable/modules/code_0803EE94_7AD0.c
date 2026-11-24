/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7AD0 (3 functions) */
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

/* 0x0806E9D8 (40B) | code_0803EE94_7AD0_Create (orig: func_0806E9D8) | origin: pure | domain: code_0803EE94_7AD0 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 code_0803EE94_7AC4_Create();
u32 code_0803EE94_7AD0_Create(u32 *arg0,u32 arg1) {
  u32 val;
  *arg0 = 0x080E7AD0;
  val = CppRuntime_builtin_new(0x00000454);
  val = code_0803EE94_7AC4_Create(val,arg1);
  arg0[1] = val;
  return arg0;
}

/* 0x0806EA00 (48B) | code_0803EE94_7AD0_Ctor (orig: func_0806EA00) | origin: pure | domain: code_0803EE94_7AD0 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void code_0803EE94_7AD0_Ctor(u32 *arg0,u32 arg1) {
  int val;
  *arg0 = 0x080E7AD0;
  val = arg0[1];
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  scene_Dtor(arg0,arg1);
}

/* 0x0806EA30 (60B) | code_0803EE94_7AD0_vfunc_0C (orig: func_0806EA30) | origin: pure | domain: code_0803EE94_7AD0 | HIGH / vtable_algebra */
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
extern "C" AutoPtr<V1> SpriteAnimEngine_5B80_AutoPtrFactory_DB38(int);
extern "C" AutoPtr<V0> code_0803EE94_7AD0_vfunc_0C(In *in) {
    return SpriteAnimEngine_5B80_AutoPtrFactory_DB38(in->f4);
}

