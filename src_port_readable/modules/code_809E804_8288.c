/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_809E804_8288 (7 functions) */
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

/* 0x080A3AF8 (252B) | code_809E804_8288_vfunc_0C (orig: func_080A3AF8) | origin: wip | domain: code_809E804_8288 | HIGH / vtable_algebra */
void * code_809E804_8288_vfunc_0C(u32 *self,int param_2,u32 param_3,int param_4) {
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
  
  uStack_2c = 3;
  uStack_28 = 0xf;
  uVar2 = *(int *)(param_2 + 0xc) - 0x24;
  if (uVar2 < 7) {
    switch(*(u32 *)(((const u32 *)0x080a3b24) + uVar2 * 4) & 0xfffffffe) {
    case 0x80a3b28:
      param_4 = param_4 + -0x230;
      param_3 = 0;
    case 0x80a3b44:
      uStack_2c = 0;
      break;
    case 0x80a3b48:
      uStack_2c = 2;
      break;
    case 0x80a3b4c:
      uStack_2c = 3;
      break;
    case 0x80a3b50:
      uStack_2c = 4;
      break;
    case 0x80a3b54:
      uStack_2c = 5;
      break;
    case 0x80a3b58:
      uStack_2c = 6;
      break;
    case 0x80a3b5c:
      uStack_2c = 1;
    }
  }
  uVar3 = ScriptVM_Func0CC(*(int *)(param_2 + 8) + 0x1CD4,*(u32 *)(param_2 + 0xc),param_3
                        ,param_4);
  uStack_28 = HarvestSprite_GetMinigameExp(uVar3,1);
  code_809E804_8560_Create(auStack_38,&uStack_2c);
  code_809E804_8560_vfunc_0C(&piStack_30,auStack_38);
  if (piStack_30 != (int *)0x0) {
    func_080D3914(piStack_30,3,*(u32 *)(*piStack_30 + 8));
  }
  uVar1 = code_809E804_8288_Sub_080C7F00(auStack_38);
  HarvestSprite_SetPlayedMinigame(uVar3,1,uVar1);
  *(u8 *)(*(int *)(param_2 + 4) + 0xc) = uVar1;
  uVar4 = *(u32 *)(param_2 + 8);
  uVar3 = code_809E804_8288_GetField_0x04(auStack_38);
  game_state_Sub_080114C8(uVar4,uVar3);
  uStack_20 = *(u32 *)(param_2 + 4);
  *(u32 *)(param_2 + 4) = 0;
  piStack_30 = (int *)0x0;
  *self = uStack_20;
  ppiStack_24 = &piStack_30;
  code_809E804_8560_Ctor(auStack_38,2);
  return (void *)self;
}

/* 0x080A3BF4 (48B) | code_809E804_8288_Ctor (orig: func_080A3BF4) | origin: pure | domain: code_809E804_8288 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void code_809E804_8288_Ctor(u32 *arg0,u32 arg1) {
  int *mem_ptr;
  *arg0 = 0x080E8288;
  mem_ptr = (int *)arg0[1];
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor(arg0,arg1);
}

/* 0x080A3C24 (28B) | code_809E804_8288_Ctor_3C24 (orig: func_080A3C24) | origin: pure | domain: code_809E804_8288 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
u32 code_809E804_8288_Ctor_3C24(u32 *arg0,u32 *arg1,u32 arg2,u32 arg3) {
  u32 val;
  *arg0 = 0x080E8288;
  val = *arg1;
  *arg1 = 0;
  arg0[1] = val;
  arg0[2] = arg2;
  arg0[3] = arg3;
  return;
}

/* 0x080C12B8 (12B) | code_809E804_8288_Sub_080C12B8 (orig: func_080C12B8) | origin: pure | domain: code_809E804_8288 | MEDIUM / graph_algebra */
u8 code_809E804_8288_Sub_080C12B8(u8 *arg0) {
    return *(u8 *)(arg0 + 0x96A);
}

/* 0x080C7F00 (12B) | code_809E804_8288_Sub_080C7F00 (orig: func_080C7F00) | origin: pure | domain: code_809E804_8288 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_809E804_8288_Sub_080C12B8();
u32 code_809E804_8288_Sub_080C7F00(int arg0) {
  return code_809E804_8288_Sub_080C12B8(*(u32 *)(arg0 + 4));
}

/* 0x080C7F0C (16B) | code_809E804_8288_GetField_0x04 (orig: func_080C7F0C) | origin: pure | domain: code_809E804_8288 | MEDIUM / graph_algebra */
u32 code_809E804_8288_GetField_0x04(u32 *arg0) {
    return *(u32 *)(arg0[1] + 0x974);
}

/* 0x080DB4F0 (80B) | code_809E804_8288_AutoPtrFactory (orig: func_080DB4F0) | origin: pure | domain: code_809E804_8288 | HIGH / vtable_algebra */
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
extern "C" AutoPtr<V0> code_809E804_8288_AutoPtrFactory(In *in) {
    return AutoPtr<C_080E8288>(new C_080E8288(in->f4, in->f8, in->fc));
}

