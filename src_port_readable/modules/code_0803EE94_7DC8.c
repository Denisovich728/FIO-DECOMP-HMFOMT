/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_7DC8 (3 functions) */
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

/* 0x08092570 (84B) | code_0803EE94_7DC8_Create (orig: func_08092570) | origin: pure | domain: code_0803EE94_7DC8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 code_0803EE94_7DBC_Ctor();
u32 code_0803EE94_7DC8_Create(u32 *self,u32 *param_2,u32 param_3,u8 param_4) {
  u32 val;

  u32 uVar1;
  u32 uStack_1c;
  *self = 0x080E7DC8;
  val = *param_2; *param_2 = 0; uStack_1c = val;
  uVar1 = CppRuntime_builtin_new(0x1b8);
  uVar1 = code_0803EE94_7DBC_Ctor(uVar1,&uStack_1c,param_3,param_4);
  self[1] = uVar1;
  uVar1 = *param_2;
  *param_2 = 0;
  self[2] = uVar1;
  return self;
}

/* 0x080925C4 (64B) | code_0803EE94_7DC8_Ctor (orig: func_080925C4) | origin: pure | domain: code_0803EE94_7DC8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void code_0803EE94_7DC8_Ctor(u32 *arg0,u32 arg1) {
  int *mem_ptr;
  int val;
  *arg0 = 0x080E7DC8;
  mem_ptr = (int *)arg0[2];
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  val = arg0[1];
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  scene_Dtor(arg0,arg1);
}

/* 0x08092604 (60B) | code_0803EE94_7DC8_vfunc_0C (orig: func_08092604) | origin: pure | domain: code_0803EE94_7DC8 | HIGH / vtable_algebra */
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
extern "C" AutoPtr<V1> SpriteAnimEngine_5A28_Dtor_152C(int);
extern "C" AutoPtr<V0> code_0803EE94_7DC8_vfunc_0C(In *in) {
    return SpriteAnimEngine_5A28_Dtor_152C(in->f4);
}

