/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_809E804_8298 (7 functions) */
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

/* 0x080A39FC (252B) | code_809E804_8298_vfunc_0C (orig: func_080A39FC) | origin: wip | domain: code_809E804_8298 | HIGH / vtable_algebra */
void * code_809E804_8298_vfunc_0C(u32 *self,int param_2,u32 param_3) {
  u8 uVar1;
  u32 uVar2;
  u32 uVar3;
  u32 uVar4;

  u8 auStack_38 [8];
  int *piStack_30;
  u32 uStack_2c;
  u8 uStack_28;
  int **ppiStack_24;
  u32 uStack_20;
  
  uStack_2c = 4;
  uStack_28 = 0x12;
  uVar2 = *(int *)(param_2 + 0xc) - 0x24;
  if (uVar2 < 7) {
    switch(*(u32 *)(((const u32 *)0x080a3a28) + uVar2 * 4) & 0xfffffffe) {
    case 0x80a3a2c:
      param_3 = 0;
    case 0x80a3a48:
      uStack_2c = 0;
      break;
    case 0x80a3a4c:
      uStack_2c = 2;
      break;
    case 0x80a3a50:
      uStack_2c = 3;
      break;
    case 0x80a3a54:
      uStack_2c = 4;
      break;
    case 0x80a3a58:
      uStack_2c = 5;
      break;
    case 0x80a3a5c:
      uStack_2c = 6;
      break;
    case 0x80a3a60:
      uStack_2c = 1;
    }
  }
  uVar3 = ScriptVM_Func0CC(*(int *)(param_2 + 8) + 0x1CD4,*(u32 *)(param_2 + 0xc),param_3
                       );
  uStack_28 = HarvestSprite_GetMinigameExp(uVar3,0);
  code_809E804_8544_Create(auStack_38,&uStack_2c);
  code_809E804_8544_vfunc_0C(&piStack_30,auStack_38);
  if (piStack_30 != (int *)0x0) {
    func_080D3914(piStack_30,3,*(u32 *)(*piStack_30 + 8));
  }
  uVar1 = code_809E804_8298_Sub_080C0D74(auStack_38);
  HarvestSprite_SetPlayedMinigame(uVar3,0,uVar1);
  *(u8 *)(*(int *)(param_2 + 4) + 0xc) = uVar1;
  uVar4 = *(u32 *)(param_2 + 8);
  uVar3 = code_809E804_8298_GetField_0x04(auStack_38);
  game_state_Sub_08011464(uVar4,uVar3);
  uStack_20 = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  piStack_30 = (int *)0x0;
  *self = uStack_20;
  ppiStack_24 = &piStack_30;
  code_809E804_8544_Ctor(auStack_38,2);
  return (void *)self;
}

/* 0x080A3C40 (48B) | code_809E804_8298_Ctor (orig: func_080A3C40) | origin: pure | domain: code_809E804_8298 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void code_809E804_8298_Ctor(u32 *arg0,u32 arg1) {
  int *mem_ptr;
  *arg0 = 0x080E8298;
  mem_ptr = (int *)arg0[1];
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor(arg0,arg1);
}

/* 0x080A3C70 (28B) | code_809E804_8298_Ctor_3C70 (orig: func_080A3C70) | origin: pure | domain: code_809E804_8298 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 code_809E804_8298_Ctor_3C70(u32 *arg0,u32 *arg1,u32 arg2,u32 arg3) {
  u32 val;
  *arg0 = 0x080E8298;
  val = *arg1;
  *arg1 = 0;
  arg0[1] = val;
  arg0[2] = arg2;
  arg0[3] = arg3;
  return;
}

/* 0x080BCCD4 (12B) | code_809E804_8298_Sub_080BCCD4 (orig: func_080BCCD4) | origin: pure | domain: code_809E804_8298 | MEDIUM / graph_algebra */
u8 code_809E804_8298_Sub_080BCCD4(u8 *arg0) {
    return *(u8 *)(arg0 + (194 << 3));
}

/* 0x080C0D74 (12B) | code_809E804_8298_Sub_080C0D74 (orig: func_080C0D74) | origin: pure | domain: code_809E804_8298 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_809E804_8298_Sub_080BCCD4();
u32 code_809E804_8298_Sub_080C0D74(int arg0) {
  return code_809E804_8298_Sub_080BCCD4(*(u32 *)(arg0 + 4));
}

/* 0x080C0D80 (16B) | code_809E804_8298_GetField_0x04 (orig: func_080C0D80) | origin: pure | domain: code_809E804_8298 | MEDIUM / graph_algebra */
u32 code_809E804_8298_GetField_0x04(u32 *arg0) {
    return *(u32 *)(arg0[1] + 0x604);
}

/* 0x080DB568 (80B) | code_809E804_8298_AutoPtrFactory (orig: func_080DB568) | origin: pure | domain: code_809E804_8298 | HIGH / vtable_algebra */
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
extern "C" AutoPtr<V0> code_809E804_8298_AutoPtrFactory(In *in) {
    return AutoPtr<C_080E8298>(new C_080E8298(in->f4, in->f8, in->fc));
}

