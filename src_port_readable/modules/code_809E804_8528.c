/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_809E804_8528 (5 functions) */
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

/* 0x080B44E0 (12B) | code_809E804_8528_Sub_080B44E0 (orig: func_080B44E0) | origin: pure | domain: code_809E804_8528 | MEDIUM / graph_algebra */
u8 code_809E804_8528_Sub_080B44E0(u8 *arg0) {
    return *(u8 *)(arg0 + (179 << 4));
}

/* 0x080BC898 (40B) | code_809E804_8528_Create (orig: func_080BC898) | origin: pure | domain: code_809E804_8528 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 SpriteAnimEngine_Create_3CC8();
u32 code_809E804_8528_Create(u32 *arg0,u32 arg1) {
  u32 val;
  *arg0 = 0x080E8528;
  val = CppRuntime_builtin_new(0x00000B78);
  val = SpriteAnimEngine_Create_3CC8(val,arg1);
  arg0[1] = val;
  return arg0;
}

/* 0x080BC8C0 (48B) | code_809E804_8528_Ctor (orig: func_080BC8C0) | origin: pure | domain: code_809E804_8528 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void code_809E804_8528_Ctor(u32 *arg0,u32 arg1) {
  int val;
  *arg0 = 0x080E8528;
  val = arg0[1];
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  scene_Dtor(arg0,arg1);
}

/* 0x080BC8F0 (12B) | code_809E804_8528_Sub_080BC8F0 (orig: func_080BC8F0) | origin: pure | domain: code_809E804_8528 | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_809E804_8528_Sub_080B44E0();
u32 code_809E804_8528_Sub_080BC8F0(int arg0) {
  return code_809E804_8528_Sub_080B44E0(*(u32 *)(arg0 + 4));
}

/* 0x080BC8FC (60B) | code_809E804_8528_vfunc_0C (orig: func_080BC8FC) | origin: pure | domain: code_809E804_8528 | HIGH / vtable_algebra */
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
extern "C" AutoPtr<V1> hardware_Sub_080B44EC(int);
extern "C" AutoPtr<V0> code_809E804_8528_vfunc_0C(In *in) {
    return hardware_Sub_080B44EC(in->f4);
}

