/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_809E804_850C (7 functions) */
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

/* 0x080AE4E4 (476B) | code_809E804_850C_Sub_080AE4E4 (orig: func_080AE4E4) | origin: wip | domain: code_809E804_850C | MEDIUM / graph_algebra */
u32 code_809E804_850C_Sub_080AE4E4(u32 *param_1,int param_2) {
  int iVar1;
  u32 uVar2;
  u32 uVar3;
  u32 uVar4;
  u32 uVar5;
  u32 uVar6;
  u32 uVar7;
  u32 uVar8;
  int *piVar9;
  u32 *puVar10;
  int *piStack_3c;
  int **appiStack_38 [2];
  u32 *puStack_30;
  u32 *puStack_2c;
  int **ppiStack_28;
  u32 **ppuStack_24;
  puStack_30 = param_1;
  hardware_Wrap_Ctor(param_2);
  iVar1 = hardware_GetField_0x00_8918(param_2);
  *(u16 *)(iVar1 + 0x50) = 0x3f;
  piVar9 = (int *)(param_2 + 0x0000043C);
  hardware_Sub_0800934C(*piVar9 + 0xc,0x00000889,1,1);
  iVar1 = hardware_GetField_0x00_8940(param_2);
  func_080D3914(iVar1,*piVar9,*(u32 *)(*(int *)(iVar1 + 8) + 0x10));
  code_809E804_850C_Sub_080B09B0(param_2);
  code_809E804_850C_Sub_080B0AA0(param_2);
  hardware_Sub_080AE7D0(param_2);
  code_809E804_850C_Sub_080AE894(param_2);
  hardware_Wrap_m4aMPlayStart(param_2 + 0x0000080C,0x22);
  ppiStack_28 = &piStack_3c;
  ppuStack_24 = appiStack_38;
  iVar1 = *(int *)(param_2 + 0x00000838);
  while (iVar1 != 5) {
    hardware_Ctor_87C8(param_2);
    if (*(u32 *)(param_2 + 0x00000838) < 5) {
      switch(*(u32 *)(*(u32 *)(param_2 + 0x00000838) * 4 + 0x080AE590) & 0xfffffffe) {
      case 0x80ae5a4:
        code_809E804_850C_Sub_080B0BB8(param_2);
        break;
      case 0x80ae5ac:
        code_809E804_850C_Sub_080B1B40(param_2);
        break;
      case 0x80ae5b4:
        hardware_Sub_080B1D34(param_2);
        break;
      case 0x80ae5bc:
        hardware_Sub_080B1D94(param_2);
        break;
      case 0x80ae5c4:
        code_809E804_850C_Sub_080B2114(param_2);
      }
    }
    iVar1 = *(int *)(param_2 + 0x00000838);
  }
  puVar10 = (u32 *)(param_2 + 0x0000043C);
  uVar7 = *(u32 *)*puVar10;
  if (-1 < (int)(-uVar7 | uVar7)) {
    hardware_Sub_08009378((u32 *)*puVar10 + 3,0x00000889,1,1);
    iVar1 = hardware_GetField_0x00_8940(param_2);
    func_080D3914(iVar1,*puVar10,*(u32 *)(*(int *)(iVar1 + 8) + 0x10));
  }
  if ((int)(-*(u32 *)*puVar10 | *(u32 *)*puVar10) < 0) {
    puStack_2c = (u32 *)(param_2 + 0x418);
    do {
      hardware_Ctor_87C8(param_2);
      uVar8 = *puStack_2c;
      uVar2 = hardware_GetField_0x00_88DC(param_2);
      uVar3 = hardware_GetField_0x00_8920(param_2);
      uVar4 = hardware_GetField_0x00_8918(param_2);
      uVar5 = hardware_GetField_0x00_8940(param_2);
      uVar6 = hardware_Sub_0800894C(param_2);
      code_0803EE94_78A8_Wrap_Ctor(uVar8,uVar2,uVar3,uVar4,uVar5,uVar6,param_2 + 0x810);
      hardware_Sub_080AF814(param_2);
    } while ((int)(-**(u32 **)(param_2 + 0x0000043C) | **(u32 **)(param_2 + 0x0000043C)) < 0
            );
  }
  piStack_3c = (int *)0x0;
  appiStack_38[0] = ppiStack_28;
  ppuStack_24[1] = (int **)0x0;
  *ppiStack_28 = (int *)0x0;
  *puStack_30 = 0;
  if (piStack_3c != (int *)0x0) {
    func_080D3914(piStack_3c,3,*(u32 *)(*piStack_3c + 8));
  }
  return (puStack_30);
}

/* 0x080B09B0 (240B) | code_809E804_850C_Sub_080B09B0 (orig: func_080B09B0) | origin: wip | domain: code_809E804_850C | MEDIUM / graph_algebra */
void code_809E804_850C_Sub_080B09B0(int param_1) {
  u8 bVar1;
  u8 uVar2;
  u8 *puVar3;
  u32 auStack_28 [4];
  u32 uStack_18;
  u32 uStack_14;
  u32 uStack_10;
  auStack_28[0] = *((const u32 *)0x0810756C);
  auStack_28[1] = ((const u32 *)0x0810756C)[1];
  auStack_28[2] = ((const u32 *)0x0810756C)[2];
  auStack_28[3] = ((const u32 *)0x0810756C)[3];
  uStack_18 = ((const u32 *)0x0810756C)[4];
  uStack_14 = ((const u32 *)0x0810756C)[5];
  uStack_10 = ((const u32 *)0x0810756C)[6];
  *(u32 *)(param_1 + 0x934) = auStack_28[*(int *)(param_1 + 0x930)];
  bVar1 = *(u8 *)(param_1 + 0x938);
  if (bVar1 < 3) {
    puVar3 = (u8 *)(param_1 + 0x90E);
    uVar2 = 10;
  }
  else if ((u8)(bVar1 - 3) < 3) {
    puVar3 = (u8 *)(param_1 + 0x90E);
    uVar2 = 0xf;
  }
  else if ((u8)(bVar1 - 6) < 3) {
    puVar3 = (u8 *)(param_1 + 0x90E);
    uVar2 = 0x14;
  }
  else if ((u8)(bVar1 - 9) < 2) {
    puVar3 = (u8 *)(param_1 + 0x90E);
    uVar2 = 0x1e;
  }
  else if ((u8)(bVar1 - 0xb) < 3) {
    puVar3 = (u8 *)(param_1 + 0x90E);
    uVar2 = 0x23;
  }
  else if ((u8)(bVar1 - 0xe) < 3) {
    puVar3 = (u8 *)(param_1 + 0x90E);
    uVar2 = 0x2d;
  }
  else if ((u8)(bVar1 - 0x11) < 3) {
    puVar3 = (u8 *)(param_1 + 0x90E);
    uVar2 = 0x37;
  }
  else {
    puVar3 = (u8 *)(param_1 + 0x90E);
    uVar2 = 0x3c;
  }
  *puVar3 = uVar2;
  return 0;
}

/* 0x080B0AA0 (280B) | code_809E804_850C_Sub_080B0AA0 (orig: func_080B0AA0) | origin: wip | domain: code_809E804_850C | MEDIUM / graph_algebra */
void code_809E804_850C_Sub_080B0AA0(int param_1) {
  int iVar1;
  int iVar2;
  u16 *puVar3;
  int iVar4;
  u32 *puVar5;
  int iVar6;
  u32 *puVar7;
  *(u32 *)(param_1 + 0x00000844) = 0;
  iVar4 = 0;
  puVar5 = (u32 *)(param_1 + 0x00000848);
  iVar6 = 0x000008E1 + param_1;
  puVar3 = (u16 *)(param_1 + 0x8f0);
  puVar7 = (u32 *)(0x00000848 + 0x14 + param_1);
  do {
    *puVar5 = 0;
    puVar5[10] = 0;
    *puVar7 = 0;
    *(u8 *)(iVar6 + iVar4) = 0x70;
    *puVar3 = 0;
    iVar1 = 0x00000915;
    *(u8 *)(param_1 + 0x00000915 + iVar4) = 1;
    *(u16 *)(param_1 + iVar1 + -0x19 + iVar4 * 2) = 0;
    iVar2 = 0x00000906;
    *(u8 *)(param_1 + 0x00000906 + iVar4) = 0;
    *(u8 *)(param_1 + iVar1 + 5 + iVar4) = 1;
    *(u8 *)(param_1 + iVar2 + 0x19 + iVar4) = 1;
    *(u8 *)(param_1 + iVar1 + 0xf + iVar4) = 1;
    puVar5 = puVar5 + 1;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar4 < 5);
  *(u8 *)(param_1 + 0x8e0) = 0x78;
  *(u8 *)(param_1 + iVar1 + -10) = 0x3c;
  *(u8 *)(param_1 + 0x000008FA) = 0;
  *(u8 *)(param_1 + 0x90c) = 0;
  *(u8 *)(param_1 + iVar1 + -8) = 0;
  *(u32 *)(param_1 + 0x00000884) = 2;
  iVar4 = 0x00000838;
  *(u32 *)(param_1 + 0x00000838) = 0;
  *(u32 *)(param_1 + 0x83c) = 0;
  *(u32 *)(param_1 + iVar1 + -0xd5) = 0;
  *(u8 *)(param_1 + iVar4 + 0xdc) = 1;
  *(u8 *)(param_1 + 0x929) = 1;
  *(u8 *)(param_1 + iVar1 + 0x15) = 0;
  *(u8 *)(param_1 + 0x0000092B) = 0;
  *(u8 *)(param_1 + 0x92c) = 0;
}

/* 0x080B3A10 (24B) | code_809E804_850C_Sub_080B3A10 (orig: func_080B3A10) | origin: pure | domain: code_809E804_850C | MEDIUM / graph_algebra */
extern u16 g_081078A0[]; u16 code_809E804_850C_Sub_080B3A10(u8 *a) { return g_081078A0[*(u32 *)(a + 0x934)]; }

/* 0x080B3BE4 (40B) | code_809E804_850C_Create (orig: func_080B3BE4) | origin: pure | domain: code_809E804_850C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 SpriteAnimEngine_Create_DF6C();
u32 code_809E804_850C_Create(u32 *arg0,u32 arg1) {
  u32 val;
  *arg0 = 0x080E850C;
  val = CppRuntime_builtin_new(0x0000093C);
  val = SpriteAnimEngine_Create_DF6C(val,arg1);
  arg0[1] = val;
  return arg0;
}

/* 0x080B3C0C (48B) | code_809E804_850C_Ctor (orig: func_080B3C0C) | origin: pure | domain: code_809E804_850C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void code_809E804_850C_Ctor(u32 *arg0,u32 arg1) {
  int val;
  *arg0 = 0x080E850C;
  val = arg0[1];
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  scene_Dtor(arg0,arg1);
}

/* 0x080B3C3C (60B) | code_809E804_850C_vfunc_0C (orig: func_080B3C3C) | origin: pure | domain: code_809E804_850C | HIGH / vtable_algebra */
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
extern "C" AutoPtr<V1> code_809E804_850C_Sub_080AE4E4(int);
extern "C" AutoPtr<V0> code_809E804_850C_vfunc_0C(In *in) {
    return code_809E804_850C_Sub_080AE4E4(in->f4);
}

