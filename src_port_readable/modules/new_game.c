/* FIO-DECOMP-HMFOMT :: Port Readable Module: new_game (50 functions) */
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

/* 0x08003B40 (116B) | new_game_Ctor_3B40 (orig: func_08003B40) | origin: wip | domain: new_game | HIGH / vtable_algebra */
void new_game_Ctor_3B40(u32 self) {
    u8 auStack_10 [4];
    u32 auStack_1c [3];
  register u32 uVar2;
  register s16 iVar1;
  iVar1 = hardware_GetField_0x00_8918();
  *(u16 *)(0x50 + iVar1) = 0x3f;
  uVar2 = hardware_GetField_0x00_8918(self);
  auStack_1c[0] = 0;
  auStack_1c[1] = 0;
  *(auStack_1c + 2) = (u8)0x080E5B80;
  hardware_Sub_08009300(auStack_10,uVar2);
  hardware_Sub_0800934C(auStack_10,0x00000889,1,1);
  iVar1 = hardware_GetField_0x00_8940(self);
  func_080D3914(iVar1,auStack_1c,*(u32 *)(*(int *)(iVar1 + 8) + 0x10));
  while ((int)(-auStack_1c[0] | auStack_1c[0]) < 0) {
    hardware_Ctor_87C8(self);
  }
  hardware_Ctor_94B8(auStack_1c,2);
}

/* 0x08003BB4 (116B) | new_game_Ctor_3BB4 (orig: func_08003BB4) | origin: wip | domain: new_game | HIGH / vtable_algebra */
void new_game_Ctor_3BB4(u32 self) {
  s8 iVar1;
  u8 auStack_10 [4];
  u32 auStack_1c [3];
  int uVar2;
  iVar1 = (u32)hardware_GetField_0x00_8918();
  *(u16 *)(iVar1 + 0x50) = 0x3f;
  uVar2 = hardware_GetField_0x00_8918(self);
  auStack_1c[0] = 0;
  auStack_1c[1] = 0;
  *(auStack_1c + 2) = (u8)0x080E5B80;
  hardware_Sub_08009300(auStack_10,uVar2);
  hardware_Sub_08009378(auStack_10,0x00000889,1,1);
  iVar1 = hardware_GetField_0x00_8940(self);
  func_080D3914(iVar1,auStack_1c,*(u32 *)(*(int *)(8 + iVar1) + 0x10));
  while ((int)(-auStack_1c[0] | auStack_1c[0]) < 0) {
    hardware_Ctor_87C8(self);
  }
  hardware_Ctor_94B8(auStack_1c,2);
}

/* 0x08003C28 (88B) | new_game_Sub_08003C28 (orig: func_08003C28) | origin: pure | domain: new_game | HIGH / stanhash_map_tu */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_GetField_0x00_88DC();
extern u32 hardware_GetField_0x00_8918();
extern u32 hardware_GetField_0x00_8920();
extern u32 hardware_GetField_0x00_8940();
extern u32 hardware_Sub_0800894C();
extern u32 code_0803EE94_78A8_Wrap_Ctor();
/* paridad 97.5% preset agbcc_O2 */
void new_game_Sub_08003C28(int arg0) {
  u32 val;
  u32 val2;
  u32 val3;
  u32 val4;
  u32 val5;
  u32 tmp_all_a6;
  u32 tmp_all_a0;
  val = hardware_GetField_0x00_88DC();
  val2 = hardware_GetField_0x00_8920(arg0);
  val3 = hardware_GetField_0x00_8918(arg0);
  val4 = hardware_GetField_0x00_8940(arg0);
  val5 = hardware_Sub_0800894C(arg0);
  tmp_all_a0 = arg0 + 0x10;
  tmp_all_a6 = arg0 + 0x14;
  code_0803EE94_78A8_Wrap_Ctor(tmp_all_a0, val, val2, val3, val4, val5, tmp_all_a6);
}

/* 0x08003DF0 (152B) | new_game_Sub_08003DF0 (orig: func_08003DF0) | origin: wip | domain: new_game | HIGH / stanhash_map_tu */
void new_game_Sub_08003DF0(int param_1,u32 param_2,u32 param_3,u16 param_4) {
  int iVar1;
  u32 *puVar2;
  u32 uVar3;
  u32 uVar4;
  u32 uStack_14;
  uVar4 = (param_3 & 0xFFFFFF00 & 0x1ffffff) >> 0x10;
  uVar3 = uVar4 + 0x80;
  if (*(char *)(param_1 + 0x84 + param_2) != '\0') {
    uVar3 = uVar4 + 0xc0;
  }
  uStack_14 = 0xFE00FFFF &
              (param_3 & 0xFFFFFF00 | (param_3 & 0xff) + 8 + (param_2 * 2 + 1) * 8 & 0xff) |
              (uVar3 & 0x000001FF) << 0x10;
  if ((param_2 == 1) && (*(int *)(param_1 + 0x80) != 1)) {
    uStack_14 = 0xFFFFFCFF & uStack_14 | 0x200;
  }
  iVar1 = hardware_GetField_0x00_8920(param_1);
  puVar2 = (u32 *)(iVar1 + (param_2 & 0x7f) * 8 + 4);
  *puVar2 = uStack_14;
  *(u16 *)(puVar2 + 1) = param_4;
}

/* 0x08003E88 (100B) | new_game_Sub_08003E88 (orig: func_08003E88) | origin: wip | domain: new_game | HIGH / stanhash_map_tu */
void new_game_Sub_08003E88(u32 param_1,int param_2,u32 param_3,u16 param_4) {
  u32 uVar1;
  int iVar2;
  u32 uVar3;
  if (param_2 == 1) {
    param_2 = 0;
  }
  uVar3 = ((param_3 & 0xFFFFFF00 & 0x1ffffff) >> 0x10) + 0x10 & 0x000001FF;
  uVar1 = 0xFE00FFFF &
          (param_3 & 0xFFFFFF00 | (param_3 & 0xff) + 8 + (param_2 * 2 + 1) * 8 & 0xff);
  iVar2 = hardware_GetField_0x00_8920(param_1);
  *(u32 *)(iVar2 + 0x34) = uVar1 | uVar3 << 0x10;
  *(u16 *)(iVar2 + 0x38) = param_4;
}

/* 0x080041DC (916B) | new_game_Dtor_41DC (orig: func_080041DC) | origin: wip | domain: new_game | HIGH / vtable_algebra */
u32 new_game_Dtor_41DC(int self,u32 param_2,u32 *param_3) {
  u8 bVar1;
  char cVar2;
  u16 uVar3;
  u32 uVar4;
  u8 *puVar5;
  u32 uVar6;
  u32 uVar7;
  int iVar8;
  u32 uVar9;
  int *piVar10;
  int iVar11;
  u32 uVar12;
  int iVar13;
  u32 *puVar14;
  u8 auStack_84 [4];
  u8 auStack_80 [4];
  u32 *apuStack_7c [8];
  int iStack_5c;
  u8 uStack_58;
  u8 uStack_57;
  int iStack_54;
  u32 *puStack_50;
  int iStack_4c;
  u8 *pbStack_48;
  u16 *puStack_44;
  u8 *pbStack_40;
  u8 *puStack_3c;
  u8 *pbStack_38;
  int iStack_34;
  u8 *pbStack_30;
  u8 *pbStack_2c;
  u8 *pbStack_28;
  u32 **ppuStack_24;
  uStack_58 = 7;
  uStack_57 = 0;
  puStack_50 = param_3;
  hardware_Create_8574(self);
  *(u32 *)(self + 4) = 0x080E5A5C;
  *(u32 *)(self + 8) = param_2;
  uVar4 = *puStack_50;
  *puStack_50 = 0;
  *(u32 *)(self + 0xc) = uVar4;
  hardware_SetField_0x00_835C(auStack_84);
  hardware_SetField_0x00(auStack_80);
  hardware_5BB4_Sub_08050CC0(self + 0x10,0,0x1f,0xf,0,auStack_84,auStack_80);
  hardware_Sub_08007714(auStack_80,2);
  hardware_Sub_08008364(auStack_84,2);
  hardware_Sub_08008B54(self + 0x14,1);
  hardware_Sub_08008B54(self + 0x18,2);
  code_0803EE94_79C8_Ctor(self + 0x1c,0x08728208);
  hardware_Sub_08007874(self + 0x4c);
  uVar4 = hardware_Sub_08007B54(self + 0x4c,2);
  *(u32 *)(self + 0x50) = uVar4;
  hardware_Sub_08007128(self + 0x54);
  uVar4 = hardware_Sub_0800736C(self + 0x54);
  *(u32 *)(self + 0x58) = uVar4;
  *(u32 *)(self + 0x5c) = 0;
  *(u32 *)(self + 0x60) = 0;
  code_0803EE94_Sub_0805E824(self + 100,self + 0x1c,0,0x100);
  *(u32 *)(self + 0x80) = 0;
  *(u32 *)(self + 0x8c) = 0;
  sram_proxy_2_Sub_08000640(self + 0x90);
  puVar5 = (u8 *)(self + 0x98);
  iVar8 = 1;
  ppuStack_24 = apuStack_7c;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 0x80;
    iVar8 = iVar8 + -1;
  } while (iVar8 != -1);
  iVar11 = self + 0x198;
  iVar13 = 1;
  iStack_4c = self + 0x54;
  iVar8 = self + 0x90;
  puStack_44 = (u16 *)(self + 0x60);
  pbStack_40 = (u8 *)(self + 0x61);
  pbStack_48 = (u8 *)(self + 0x5d);
  puStack_3c = (u8 *)(self + 0x84);
  pbStack_38 = (u8 *)(self + 0x85);
  iStack_34 = self + 0x86;
  pbStack_30 = (u8 *)(self + 0x87);
  pbStack_2c = (u8 *)(self + 0x88);
  pbStack_28 = (u8 *)(self + 0x89);
  do {
    game_state_Sub_080114F8(iVar11);
    iVar11 = iVar11 + 4;
    iVar13 = iVar13 + -1;
  } while (iVar13 != -1);
  code_0803EE94_79C8_vfunc_10(ppuStack_24,self + 0x1c,0);
  uVar4 = apuStack_7c[0][1];
  *(u32 *)(self + 0x5c) = *apuStack_7c[0];
  *(u32 *)(self + 0x60) = uVar4;
  uVar3 = hardware_Sub_08007D4C(self + 0x4c,*(u32 *)(self + 0x50));
  *puStack_44 = (u16)0xFFFFFC00 & *puStack_44 | uVar3 & (u16)0x000003FF;
  cVar2 = hardware_Sub_080074C0(iStack_4c,*(u32 *)(iStack_4c + 4));
  *pbStack_40 = *pbStack_40 & 0xf | cVar2 << 4;
  *pbStack_48 = *pbStack_48 | 0x10;
  *(u32 *)(self + 0x78) = *(u32 *)(self + 0x5c);
  *(u32 *)(self + 0x7c) = *(u32 *)(self + 0x60);
  uVar12 = 0;
  do {
    uVar6 = sram_proxy_1_Sub_080003A0(iVar8);
    uVar6 = 1 << (uVar12 & 0xff) & uVar6;
    uVar9 = uVar12 + 1;
    if ((int)(-uVar6 | uVar6) < 0) {
      uVar4 = sram_proxy_1_Sub_080003DC(iVar8,uVar12);
      iStack_54 = 0;
      iVar11 = 3;
      do {
        uVar7 = CppRuntime_builtin_new(0x000034F4);
        iVar13 = game_state_Sub_08011650(uVar7,iVar8,uVar4,&iStack_54);
        if (iStack_54 == 0) {
          iStack_5c = iVar13;
          new_game_Ctor(self,self + uVar12 * 0x80 + 0x98);
          *(u32 *)(uVar12 * 4 + self + 0x198) = *(u32 *)(iStack_5c + 0x00002210)
          ;
          if (iStack_5c != 0) {
            new_game_Sub_080D4480(iStack_5c,3);
          }
          break;
        }
        iStack_5c = 0;
        CppRuntime_builtin_delete(iVar13);
        if (iStack_5c != 0) {
          new_game_Sub_080D4480(iStack_5c,3);
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != -1);
    }
    uVar12 = uVar9;
    if (1 < uVar9) {
      iVar8 = sram_proxy_1_Sub_08000488(iVar8);
      bVar1 = (u8)((u32)iVar8 >> 0x18);
      if (*(int *)(self + 8) == 0) {
        *(u32 *)(self + 0x80) = 1;
        *puStack_3c = 1;
        *pbStack_38 = (u8)((u8)((u32)-iVar8 >> 0x18) | bVar1) >> 7;
        puVar14 = (u32 *)((u32)*pbStack_38 * 4 + self + 0x198);
        *(bool *)iStack_34 = (*puVar14 & 1) != 0;
        new_game_Sub_08003DF0(self,2,*(u32 *)(self + 0x5c),*(u32 *)(self + 0x60));
        *pbStack_30 = (*(u8 *)puVar14 >> 1 ^ 1) & 1;
        new_game_Sub_08003DF0(self,3,*(u32 *)(self + 0x5c),*(u32 *)(self + 0x60));
        *pbStack_2c = (*(u8 *)puVar14 >> 2 ^ 1) & 1;
        new_game_Sub_08003DF0(self,4,*(u32 *)(self + 0x5c),*(u32 *)(self + 0x60));
        *pbStack_28 = (*(u8 *)puVar14 >> 3 ^ 1) & 1;
        new_game_Sub_08003DF0(self,5,*(u32 *)(self + 0x5c),*(u32 *)(self + 0x60));
      }
      else {
        *puStack_3c = 0;
        *pbStack_38 = (u8)((u8)((u32)-iVar8 >> 0x18) | bVar1) >> 7;
        puVar14 = (u32 *)(*(int *)(self + 8) + 0x00002210);
        *(bool *)iStack_34 = (*puVar14 & 1) != 0;
        new_game_Sub_08003DF0(self,2,*(u32 *)(self + 0x5c),*(u32 *)(self + 0x60));
        *pbStack_30 = ((u8)*puVar14 >> 1 ^ 1) & 1;
        new_game_Sub_08003DF0(self,3,*(u32 *)(self + 0x5c),*(u32 *)(self + 0x60));
        *pbStack_2c = ((u8)*puVar14 >> 2 ^ 1) & 1;
        new_game_Sub_08003DF0(self,4,*(u32 *)(self + 0x5c),*(u32 *)(self + 0x60));
        *pbStack_28 = ((u8)*puVar14 >> 3 ^ 1) & 1;
        new_game_Sub_08003DF0(self,5,*(u32 *)(self + 0x5c),*(u32 *)(self + 0x60));
      }
      piVar10 = (int *)*puStack_50;
      if (piVar10 != (int *)0x0) {
        func_080D3914(piVar10,3,*(u32 *)(*piVar10 + 8));
      }
      return (self);
    }
  } while( true );
}

/* 0x08004B58 (60B) | new_game_Create (orig: func_08004B58) | origin: pure | domain: new_game | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 new_game_Dtor_41DC();
struct Obj {
    const void *vtable;
    void *child;
};

struct Obj *new_game_Create(struct Obj *obj) {
    void *sp0;
    void **p;
    obj->vtable = (const void *)0x080E5A68;
    p = (void **)CppRuntime_builtin_new(4);
    *p = (const void *)0x080E5A3C;
    sp0 = p;
    obj->child = (void *)new_game_Dtor_41DC(CppRuntime_builtin_new(0x1a0), 0, (u32)&sp0);
    return obj;
}

/* 0x08004B94 (72B) | new_game_AutoPtrFactory (orig: func_08004B94) | origin: pure | domain: new_game | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 new_game_Dtor_41DC();
extern u32 func_080D3914();
u32 new_game_AutoPtrFactory(u32 *self,u32 param_2,u32 *param_3) {
  u32 val;

  u32 uVar1;
  int *piVar2;
  u32 uStack_14;
  *self = 0x080E5A68;
  val = *param_3; *param_3 = 0; uStack_14 = val;
  uVar1 = CppRuntime_builtin_new(0x1a0);
  uVar1 = new_game_Dtor_41DC(uVar1,param_2,&uStack_14);
  self[1] = uVar1;
  piVar2 = (int *)*param_3;
  if (piVar2 != (int *)0x0) {
    func_080D3914(piVar2,3,*(u32 *)(*piVar2 + 8));
  }
  return self;
}

/* 0x08004BDC (48B) | new_game_Ctor_4BDC (orig: func_08004BDC) | origin: pure | domain: new_game | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void new_game_Ctor_4BDC(u32 *arg0,u32 arg1) {
  int val;
  *arg0 = 0x080E5A68;
  val = arg0[1];
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  scene_Dtor(arg0,arg1);
}

/* 0x08004C0C (60B) | new_game_vfunc_0C (orig: func_08004C0C) | origin: pure | domain: new_game | HIGH / vtable_algebra */
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
extern "C" AutoPtr<V1> new_game_Ctor_4570(int);
extern "C" AutoPtr<V0> new_game_vfunc_0C(In *in) {
    return new_game_Ctor_4570(in->f4);
}

/* 0x08004C48 (12B) | new_game_Ctor_4C48 (orig: func_08004C48) | origin: pure | domain: new_game | HIGH / vtable_algebra */
void new_game_Ctor_4C48(u32 *arg0) {
    *arg0 = 0x080E5A88;
}

/* 0x08004C54 (20B) | new_game_Ctor_4C54 (orig: func_08004C54) | origin: pure | domain: new_game | HIGH / vtable_algebra */
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
extern u32 scene_Dtor();
void new_game_Ctor_4C54(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    r2 = 0x080E5A88;
    *(u32 *)(r0) = r2;
    r0 = scene_Dtor(r0, r1, r2, r3);
    return r0;
}

/* 0x08004EFC (460B) | new_game_Create_4EFC (orig: func_08004EFC) | origin: wip | domain: new_game | HIGH / vtable_algebra */
u32 new_game_Create_4EFC(int self,u32 param_2,u32 param_3,u32 param_4,u32 param_5) {
  int iVar1;
  u32 uVar2;
  u8 *puVar3;
  u32 uVar4;
  u32 uVar5;
  u32 *puVar6;
  int iVar7;
  u8 auStack_3c [4];
  u8 auStack_38 [4];
  u8 auStack_34 [16];
  u32 uStack_24;
  uStack_24 = param_4;
  hardware_Create();
  *(u32 *)(self + 4) = 0x080E5A98;
  iVar1 = 3;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  iVar1 = 3;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  *(u32 *)(self + 0x00001A28) = 2;
  uVar2 = CppRuntime_builtin_new(4);
  hardware_SetField_0x00_835C(auStack_3c);
  hardware_SetField_0x00(auStack_38);
  uVar2 = hardware_5BB4_Sub_08050CC0(uVar2,0,0x1c,4,0,auStack_3c,auStack_38);
  *(u32 *)(self + 0x00001A2C) = uVar2;
  hardware_Sub_08007714(auStack_38,2);
  hardware_Sub_08008364(auStack_3c,2);
  puVar6 = (u32 *)(self + 0x00001A30);
  uVar2 = hardware_Sub_08008D3C(200);
  *puVar6 = uVar2;
  puVar3 = (u8 *)(self + 0x00001A34);
  iVar1 = 3;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  *(u8 *)(self + 0x00001A76) = 0;
  iVar1 = self + 0x00001A34;
  uVar4 = LibC_strlen(param_2);
  if (0xf < uVar4) {
    uVar4 = 0xf;
  }
  LibC_memcpy(iVar1,param_2,uVar4);
  *(u8 *)(iVar1 + uVar4) = 0;
  code_0803EE94_Sub_0804EC84(((param_3 & 0x7f) >> 2) + 1,auStack_34,2);
  uVar2 = code_0800E2E4_Sub_0800E2E4(param_3 & 3);
  iVar7 = self + 0x00001A44;
  iVar1 = LibC_strlen(iVar7);
  uVar4 = 0xf - iVar1;
  if (uVar4 != 0) {
    uVar5 = LibC_strlen(uVar2);
    if (uVar4 < uVar5) {
      uVar5 = uVar4;
    }
    LibC_memcpy(iVar7 + iVar1,uVar2,uVar5);
    *(u8 *)(iVar7 + iVar1 + uVar5) = 0;
  }
  iVar1 = LibC_strlen(iVar7);
  uVar4 = 0xf - iVar1;
  if (uVar4 != 0) {
    uVar5 = LibC_strlen(auStack_34);
    if (uVar4 < uVar5) {
      uVar5 = uVar4;
    }
    LibC_memcpy(iVar7 + iVar1,auStack_34,uVar5);
    *(u8 *)(iVar7 + iVar1 + uVar5) = 0;
  }
  iVar1 = self + 0x00001A54;
  uVar4 = LibC_strlen(uStack_24);
  if (0xf < uVar4) {
    uVar4 = 0xf;
  }
  LibC_memcpy(iVar1,uStack_24,uVar4);
  *(u8 *)(iVar1 + uVar4) = 0;
  iVar1 = self + 0x00001A64;
  uVar4 = LibC_strlen(param_5);
  if (0xf < uVar4) {
    uVar4 = 0xf;
  }
  LibC_memcpy(iVar1,param_5,uVar4);
  *(u8 *)(iVar1 + uVar4) = 0;
  return (self);
}

/* 0x080050C8 (48B) | new_game_Ctor_50C8 (orig: func_080050C8) | origin: pure | domain: new_game | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Dtor();
extern u32 SpriteAnimEngine_5A28_Wrap_Dtor_0D0C();
void new_game_Ctor_50C8(int arg0,u32 arg1) {
  *(u32 *)(arg0 + 4) = 0x080E5A98;
  if (*(int *)(arg0 + 0x00001A2C) != 0) {
    SpriteAnimEngine_5A28_Wrap_Dtor_0D0C(*(int *)(arg0 + 0x00001A2C),3);
  }
  hardware_Dtor(arg0,arg1);
}

/* 0x080050F8 (348B) | new_game_AutoPtrFactory_50F8 (orig: func_080050F8) | origin: wip | domain: new_game | HIGH / vtable_algebra */
u32 new_game_AutoPtrFactory_50F8(u32 *self,int param_2) {
  bool bVar1;
  int iVar2;
  u32 *puVar3;
  u32 uVar4;
  u32 uVar5;
  u32 uStack_28;
  u32 *puStack_24;
  u32 uStack_20;
  new_game_Wrap_Ctor(param_2);
  new_game_SetField_0x00(param_2);
  new_game_Ctor_5278(param_2);
  iVar2 = hardware_GetField_0x00_8918(param_2);
  *(u16 *)(iVar2 + 0x50) = 0x3f;
  puVar3 = (u32 *)CppRuntime_builtin_new(0x10);
  uVar4 = hardware_GetField_0x00_8918(param_2);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0x080E5B80;
  hardware_Sub_08009300(puVar3 + 3,uVar4);
  hardware_Sub_0800934C(puVar3 + 3,0x00000889,1,1);
  iVar2 = hardware_GetField_0x00_8940(param_2);
  func_080D3914(iVar2,puVar3,*(u32 *)(*(int *)(iVar2 + 8) + 0x10));
  uVar5 = 0;
  bVar1 = false;
  do {
    hardware_Ctor_87C8(param_2);
    hardware_Sub_080088B8(param_2);
    hardware_GetField_0x00_88D4(param_2);
    if (uVar5 == 1) {
      new_game_Ctor_5800(param_2);
      if (*(char *)(param_2 + 0x00001A74) != '\0') {
        uVar5 = 2;
      }
    }
    else if (uVar5 < 2) {
      if ((uVar5 == 0) && (-1 < (int)(-*puVar3 | *puVar3))) {
        uVar5 = 1;
      }
    }
    else if (uVar5 == 2) {
      hardware_Sub_08009378(puVar3 + 3,0x00000889,1,1);
      iVar2 = hardware_GetField_0x00_8940(param_2);
      func_080D3914(iVar2,puVar3,*(u32 *)(*(int *)(iVar2 + 8) + 0x10));
      uVar5 = 3;
    }
    else if ((uVar5 == 3) && (-1 < (int)(-*puVar3 | *puVar3))) {
      bVar1 = true;
    }
  } while (!bVar1);
  *self = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  if (puVar3 != (u32 *)0x0) {
    puStack_24 = &uStack_28;
    func_080D3914(puVar3,3,*(u32 *)(puVar3[2] + 0xc));
  }
  return (self);
}

/* 0x08005254 (12B) | new_game_Wrap_Ctor (orig: func_08005254) | origin: pure | domain: new_game | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Ctor();
void new_game_Wrap_Ctor(void) {
  hardware_Ctor();
}

/* 0x08005260 (24B) | new_game_SetField_0x00 (orig: func_08005260) | origin: pure | domain: new_game | HIGH / stanhash_map_tu */
void new_game_SetField_0x00(u8 *arg0) {
    arg0[0x1A75] = 0;
    arg0[0x1A74] = 0;
}

/* 0x0800598C (68B) | new_game_Create_598C (orig: func_0800598C) | origin: pure | domain: new_game | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 new_game_Create_4EFC();
u32 new_game_Create_598C(u32 *arg0,u32 arg1,u32 arg2,u32 arg3,
             u32 arg4) {
  u32 val;
  *arg0 = 0x080E5AA4;
  val = CppRuntime_builtin_new(0x00001A78);
  val = new_game_Create_4EFC(val,arg1,arg2,arg3,arg4);
  arg0[1] = val;
  return arg0;
}

/* 0x080059D0 (48B) | new_game_Ctor_59D0 (orig: func_080059D0) | origin: pure | domain: new_game | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void new_game_Ctor_59D0(u32 *arg0,u32 arg1) {
  int val;
  *arg0 = 0x080E5AA4;
  val = arg0[1];
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  scene_Dtor(arg0,arg1);
}

/* 0x08005A00 (60B) | new_game_vfunc_0C_5A00 (orig: func_08005A00) | origin: pure | domain: new_game | HIGH / vtable_algebra */
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
extern "C" AutoPtr<V1> new_game_AutoPtrFactory_50F8(int);
extern "C" AutoPtr<V0> new_game_vfunc_0C_5A00(In *in) {
    return new_game_AutoPtrFactory_50F8(in->f4);
}

/* 0x08005A3C (16B) | new_game_GetField_0x04 (orig: func_08005A3C) | origin: pure | domain: new_game | HIGH / stanhash_map_tu */
u8 new_game_GetField_0x04(u32 *arg0) {
    return *(u8 *)(arg0[1] + 0x1A76);
}

/* 0x08005A58 (224B) | new_game_Create_5A58 (orig: func_08005A58) | origin: wip | domain: new_game | HIGH / vtable_algebra */
void * new_game_Create_5A58(int self,u32 param_2,char *param_3) {
    int iVar2;
    u32 uVar3;
    u32 * puVar4;
    u32 uVar5;
    u32 * puVar6;
    u8 auStack_20 [4];
    u8 auStack_1c [4];
  register char cVar1;
  hardware_Create();
  *(u32 *)(self + 4) = ((const u32 *)0x080E5AB4);
  iVar2 = 7;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  hardware_Sub_08008B54(self + 0x45F0,1);
  hardware_Sub_08008B54(self + 0x45F4,2);
  uVar3 = CppRuntime_builtin_new(4);
  hardware_SetField_0x00_835C(auStack_20);
  hardware_SetField_0x00(auStack_1c);
  uVar3 = hardware_5BB4_Sub_08050CC0(uVar3,0,0xf,4,0,auStack_20,auStack_1c);
  *(u32 *)(self + 0x45F8) = uVar3;
  hardware_Sub_08007714(auStack_1c,2);
  hardware_Sub_08008364(auStack_20,2);
  *(u32 *)(self + 0x45FC) = param_2;
  puVar4 = (u32 *)(self + 0x461C);
  uVar3 = ((const u32 *)0x080E8BE4)[1];
  uVar5 = ((const u32 *)0x080E8BE4)[2];
  puVar6 = ((const u32 *)0x080E8BE4) + 3;
  *puVar4 = *((const u32 *)0x080E8BE4);
  puVar4[1] = uVar3;
  puVar4[2] = uVar5;
  *(u8 *)(puVar4 + 3) = *(u8 *)puVar6;
  if (param_3 != (char *)0x0) {
    iVar2 = 0;
    cVar1 = *param_3;
    do {
      param_3 = param_3 + 1;
      *(char *)((int)puVar4 + iVar2) = *param_3;
      iVar2 = iVar2 + 1;
      if (0xc < iVar2) break;
      cVar1 = *param_3;
    } while (cVar1 != '\0');
  }
  return (void *)self;
}

/* 0x08005B38 (48B) | new_game_Ctor_5B38 (orig: func_08005B38) | origin: pure | domain: new_game | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Dtor();
extern u32 SpriteAnimEngine_5A28_Wrap_Dtor_0D0C();
void new_game_Ctor_5B38(int arg0,u32 arg1) {
  *(u32 *)(arg0 + 4) = 0x080E5AB4;
  if (*(int *)(arg0 + 0x000045F8) != 0) {
    SpriteAnimEngine_5A28_Wrap_Dtor_0D0C(*(int *)(arg0 + 0x000045F8),3);
  }
  hardware_Dtor(arg0,arg1);
}

/* 0x08005B68 (372B) | new_game_Ctor_5B68 (orig: func_08005B68) | origin: wip | domain: new_game | HIGH / vtable_algebra */
u32 new_game_Ctor_5B68(u32 *self,int param_2) {
  u32 uVar1;
  int iVar2;
  u32 uVar3;
  u8 auStack_40 [4];
  u32 uStack_3c;
  u16 uStack_38;
  u32 uStack_34;
  u32 uStack_30;
  u32 uStack_2c;
  u8 auStack_28 [4];
  u32 uStack_24;
  u32 *puStack_20;
  u32 uStack_1c;
  u32 _sp_pad[7];
  (void)_sp_pad;
  hardware_Ctor(param_2);
  hardware_Sub_08007874(auStack_40);
  uStack_3c = 0;
  hardware_Sub_08007C28(auStack_40,0);
  uStack_3c = hardware_Sub_08007B54(auStack_40,3);
  uVar1 = hardware_Sub_08007D4C(auStack_40);
  new_game_Ctor_5CDC(param_2);
  new_game_Sub_080061A0(param_2,uVar1);
  new_game_Sub_08006334(param_2);
  new_game_Sub_0800637C(param_2);
  iVar2 = hardware_GetField_0x00_8918(param_2);
  uStack_38 = 0x3f;
  *(u16 *)(iVar2 + 0x50) = 0x3f;
  uVar1 = hardware_GetField_0x00_8918(param_2);
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0x080E5B80;
  hardware_Sub_08009300(auStack_28,uVar1);
  hardware_Sub_0800934C(auStack_28,0x00000889,1,1);
  iVar2 = hardware_GetField_0x00_8940(param_2);
  func_080D3914(iVar2,&uStack_34,*(u32 *)(*(int *)(iVar2 + 8) + 0x10));
  uVar3 = (u8)-uStack_34 | uStack_34;
  while ((int)uVar3 < 0) {
    hardware_Ctor_87C8(param_2);
    uVar3 = -uStack_34 | uStack_34;
  }
  while (*(char *)(param_2 + 0x00004636) == '\0') {
    hardware_Sub_080088B8(param_2);
    new_game_Sub_08006CDC(param_2);
    new_game_Sub_080068CC(param_2);
    new_game_Sub_0800637C(param_2);
    new_game_Ctor_64E8(param_2);
    new_game_Sub_08006858(param_2);
    new_game_Ctor_6ED8(param_2);
    hardware_Ctor_87C8(param_2);
  }
  hardware_Sub_08009378(auStack_28,0x00000889,1,1);
  iVar2 = hardware_GetField_0x00_8940(param_2);
  func_080D3914(iVar2,&uStack_34,*(u32 *)(*(int *)(iVar2 + 8) + 0x10));
  while ((int)(-uStack_34 | uStack_34) < 0) {
    hardware_Ctor_87C8(param_2);
  }
  *self = 0;
  uStack_1c = 0;
  uStack_24 = 0;
  puStack_20 = &uStack_24;
  hardware_Ctor_94B8(&uStack_34,2);
  hardware_Sub_08007C28(auStack_40,uStack_3c);
  hardware_Sub_080079E8(auStack_40,2);
  return (self);
}

/* 0x080061A0 (404B) | new_game_Sub_080061A0 (orig: func_080061A0) | origin: wip | domain: new_game | HIGH / stanhash_map_tu */
void new_game_Sub_080061A0(int param_1,int param_2) {
  u16 uVar3;
  int uVar2;
  u16 uVar1;
  u32 uVar4;
  int iVar5;
  int iVar6;
  u8 *pbVar7;
  u8 uVar8;
  hardware_HW_DMA3SAD_8EB8(0,param_1 + 0x00004608,8);
  hardware_HW_DMA3SAD_8EB8(0,param_1 + 0x00004614,8);
  *(u8 *)(param_1 + 0x0000460B) = *(u8 *)(param_1 + 0x0000460B) & 0x3f;
  *(u8 *)(param_1 + 0x00004617) = *(u8 *)(param_1 + 0x00004617) & 0x3f;
  pbVar7 = (u8 *)(param_1 + 0x00004615);
  *pbVar7 = *pbVar7 & 0x3f | 0x80;
  *(u8 *)(param_1 + 0x00004609) = *(u8 *)(param_1 + 0x00004609) & 0xf3 | 4;
  *pbVar7 = *pbVar7 & 0xf3 | 4;
  uVar3 = (u16)0x000003FF;
  uVar1 = (u16)param_2 & uVar3;
  uVar2 = (u32)0xFFFFFC00;
  *(u16 *)(param_1 + 0x0000460C) = uVar2 & *(u16 *)(param_1 + 0x0000460C) | uVar1;
  *(u16 *)(param_1 + 0x00004618) =
       uVar2 & *(int *)(param_1 + 0x00004618) | uVar1 & uVar3;
  *(u8 *)(param_1 + 0x0000460D) = *(u8 *)(param_1 + 0x0000460D) & 0xf | 0x40;
  *(u8 *)(param_1 + 0x00004619) = *(u8 *)(param_1 + 0x00004619) & 0xf | 0x40;
  uVar4 = 0x88888888;
  uVar8 = 0;
  do {
    iVar5 = 0x06010000;
    iVar6 = param_2 * 0x20 + uVar8 * 4;
    *(u32 *)(iVar6 + 0x06010000) = uVar4;
    *(u32 *)(iVar6 + iVar5 + 0x20) = uVar4;
    *(u32 *)(iVar6 + iVar5 + 0x40) = uVar4;
    *(u32 *)(iVar6 + iVar5 + 0x60) = uVar4;
    *(u32 *)(iVar6 + iVar5 + 0x80) = uVar4;
    *(u32 *)(iVar6 + iVar5 + 0xa0) = uVar4;
    *(u32 *)(iVar6 + iVar5 + 0xc0) = uVar4;
    *(u32 *)(iVar6 + 0x060100E0) = uVar4;
    uVar8 = uVar8 + 1 & 0xff;
  } while (uVar8 < 8);
  *(u16 *)0x05000290 = (short)0x0000027F;
  uVar1 = (u16)0xFFFFFE00;
  *(u16 *)(param_1 + 0x00004616) = uVar1 & *(u16 *)(param_1 + 0x00004616) | 0x90;
  *(u8 *)(param_1 + 0x00004614) = 8;
  *(u16 *)(param_1 + 0x0000460A) = uVar1 & *(u16 *)(param_1 + 0x0000460A);
  *(u8 *)(param_1 + 0x00004608) = 0x20;
  *(u8 *)(param_1 + 0x00004619) = *(u8 *)(param_1 + 0x00004619) & 8 | 0xf3;
  *(u8 *)(param_1 + 0x0000460D) = *(u8 *)(param_1 + 0x0000460D) & 8 | 0xf3;
}

/* 0x0800637C (364B) | new_game_Sub_0800637C (orig: func_0800637C) | origin: wip | domain: new_game | HIGH / stanhash_map_tu */
void new_game_Sub_0800637C(int param_1) {
  int *piVar1;
  int *piVar2;
  u32 *puVar3;
  int iVar4;
  u32 *puVar5;
  int iVar6;
  u32 uVar7;
  u32 *puVar8;
  u32 uVar9;
  u32 uStack_44;
  u32 uStack_40;
  u32 uStack_3c;
  u32 uStack_38;
  u32 uStack_34;
  u32 uStack_30;
  int iStack_2c;
  int iStack_28;
  u32 *puStack_24;
  uStack_34 = 0x2001e;
  iVar6 = param_1 + 0x00003C2C;
  Code_Lib_Syscall_Sub_0804E7DC(0x2001e,iVar6,0,0,0x60,0x10,0);
  uStack_30 = 0x2001e;
  Code_Lib_Syscall_Sub_0804E8F0(0x2001e,iVar6,0x90,0,param_1 + 0x0000461C);
  piVar1 = (int *)hardware_GetField_0x00_8910(param_1);
  hardware_Sub_08008F0C(&uStack_44,iVar6,0x6003c00);
  puVar3 = (u32 *)piVar1[1];
  if (puVar3 == (u32 *)piVar1[3]) {
    iStack_28 = 1;
    iStack_2c = (int)puVar3 - *piVar1 >> 4;
    piVar2 = &iStack_2c;
    if (iStack_2c == 0) {
      piVar2 = &iStack_28;
    }
    if (iStack_2c + *piVar2 == 0) {
      puStack_24 = (u32 *)0x0;
      iVar6 = 0;
    }
    else {
      iVar6 = (iStack_2c + *piVar2) * 0x10;
      puStack_24 = (u32 *)LibC_malloc(iVar6);
      if (puStack_24 == (u32 *)0x0) {
        puStack_24 = (u32 *)code_linkonce_Sub_080D3BC0(iVar6);
      }
    }
    puVar8 = puStack_24;
    for (puVar5 = (u32 *)*piVar1; puVar5 != puVar3; puVar5 = puVar5 + 4) {
      if (puVar8 != (u32 *)0x0) {
        uVar7 = puVar5[1];
        uVar9 = puVar5[2];
        *puVar8 = *puVar5;
        puVar8[1] = uVar7;
        puVar8[2] = uVar9;
        puVar8[3] = puVar5[3];
      }
      puVar8 = puVar8 + 4;
    }
    iVar4 = iStack_28;
    if (iStack_28 == 1) {
      if (puVar8 != (u32 *)0x0) {
        *puVar8 = uStack_44;
        puVar8[1] = uStack_40;
        puVar8[2] = uStack_3c;
        puVar8[3] = uStack_38;
      }
      puVar8 = puVar8 + 4;
    }
    else {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar8 != (u32 *)0x0) {
          *puVar8 = uStack_44;
          puVar8[1] = uStack_40;
          puVar8[2] = uStack_3c;
          puVar8[3] = uStack_38;
        }
        puVar8 = puVar8 + 4;
      }
    }
    for (iVar4 = *piVar1; iVar4 != piVar1[1]; iVar4 = iVar4 + 0x10) {
    }
    if (*piVar1 != 0) {
      LibC_free();
    }
    *piVar1 = (int)puStack_24;
    piVar1[1] = (int)puVar8;
    piVar1[3] = (int)puStack_24 + iVar6;
  }
  else {
    if (puVar3 != (u32 *)0x0) {
      *puVar3 = uStack_44;
      puVar3[1] = uStack_40;
      puVar3[2] = uStack_3c;
      puVar3[3] = uStack_38;
    }
    piVar1[1] = piVar1[1] + 0x10;
  }
}

/* 0x08006858 (116B) | new_game_Sub_08006858 (orig: func_08006858) | origin: wip | domain: new_game | HIGH / stanhash_map_tu */
void new_game_Sub_08006858(int param_1) {
  u8 bVar1;
  int iVar2;
  u8 *pbVar3;
  if (*(int *)(param_1 + 0x0000463C) == 0) {
    pbVar3 = (u8 *)hardware_GetField_0x00_8920(param_1);
    iVar2 = 0x00004608;
    bVar1 = *pbVar3;
    if (bVar1 < 0x80) {
      *(u32 *)(pbVar3 + (u32)bVar1 * 8 + 4) = *(u32 *)(param_1 + 0x00004608);
      *(u16 *)(pbVar3 + (u32)bVar1 * 8 + 4 + 4) = *(u16 *)(param_1 + iVar2 + 4);
      *pbVar3 = bVar1 + 1;
    }
  }
  pbVar3 = (u8 *)hardware_GetField_0x00_8920(param_1);
  bVar1 = *pbVar3;
  if (bVar1 < 0x80) {
    *(u32 *)(pbVar3 + (u32)bVar1 * 8 + 4) = *(u32 *)(param_1 + 0x00004614);
    *(u16 *)(pbVar3 + (u32)bVar1 * 8 + 4 + 4) = *(u16 *)(param_1 + 0x00004618);
    *pbVar3 = bVar1 + 1;
  }
}

/* 0x080068CC (296B) | new_game_Sub_080068CC (orig: func_080068CC) | origin: wip | domain: new_game | HIGH / stanhash_map_tu */
void new_game_Sub_080068CC(int param_1) {
  u16 uVar1;
  int iVar2;
  u8 bVar3;
  u16 uVar5;
  u8 *pbVar6;
  u16 *puVar7;
  char *pcVar8;
  u8 bVar4;
  uVar1 = (u16)0x000001FF;
  uVar5 = (u16)0xFFFFFE00;
  *(u16 *)(param_1 + 0x00004616) =
       uVar5 & *(u16 *)(param_1 + 0x00004616) |
       (u16)*(u8 *)(param_1 + 0x00004610) * 8 + 0x90 & uVar1;
  iVar2 = 0x00004614;
  *(u8 *)(param_1 + 0x00004614) = 8;
  pcVar8 = (char *)(param_1 + 0x00004605);
  if (*pcVar8 < '\x06') {
    puVar7 = (u16 *)(param_1 + iVar2 + -10);
    *puVar7 = uVar5 & *puVar7 | (short)*(char *)(param_1 + 0x00004604) << 4 & uVar1;
    *(char *)(param_1 + 0x00004608) = *pcVar8 * '\x10' + ' ';
    *(u8 *)(param_1 + 0x0000460B) = *(u8 *)(param_1 + 0x0000460B) & 0x3f;
    pbVar6 = (u8 *)(param_1 + 0x00004609);
    bVar4 = *pbVar6;
    bVar3 = 0x80;
  }
  else {
    uVar5 = 0;
    for (bVar4 = *(u8 *)(param_1 + 0x00004604); 4 < bVar4; bVar4 = bVar4 - 5) {
      uVar5 = uVar5 + 1 & 0xff;
    }
    *(u16 *)(param_1 + 0x0000460A) =
         (u16)0xFFFFFE00 & *(u16 *)(param_1 + 0x0000460A) |
         uVar5 * 0x50 + 0x18 & (u16)0x000001FF;
    *(u8 *)(param_1 + 0x00004608) = 0x88;
    *(u8 *)(param_1 + 0x0000460B) = *(u8 *)(param_1 + 0x0000460B) & 0x3f | 0x80;
    pbVar6 = (u8 *)(param_1 + 0x00004609);
    bVar4 = *pbVar6;
    bVar3 = 0x40;
  }
  *pbVar6 = bVar4 & 0x3f | bVar3;
}

/* 0x080069F4 (412B) | new_game_Sub_080069F4 (orig: func_080069F4) | origin: wip | domain: new_game | HIGH / stanhash_map_tu */
void new_game_Sub_080069F4(int param_1) {
  char cVar1;
  u8 bVar2;
  u32 uVar3;
  char *pcVar4;
  char *pcVar5;
  u8 *pbVar6;
  int iVar7;
  uVar3 = hardware_GetField_0x00_88D4();
  if ((uVar3 & 0x40) == 0) {
    if ((uVar3 & 0x80) == 0) {
      if ((uVar3 & 0x10) == 0) {
        if ((uVar3 & 0x20) == 0) {
        }
        hardware_Wrap_m4aMPlayStart(param_1 + 0x000045F4,0xcb);
        pcVar4 = (char *)(param_1 + 0x00004605);
        if (*pcVar4 == '\x06') {
          pbVar6 = (u8 *)(param_1 + 0x00004604);
          bVar2 = 0xc;
        }
        else {
          pbVar6 = (u8 *)(param_1 + 0x00004604);
          iVar7 = *pbVar6 - 1;
          *pbVar6 = (u8)iVar7;
          if (*pcVar4 == '\x05') {
            if (-1 < iVar7 * 0x1000000) {
            }
            bVar2 = 0xc;
          }
          else {
            if (-1 < iVar7 * 0x1000000) {
            }
            bVar2 = 0xe;
          }
        }
      }
      else {
        hardware_Wrap_m4aMPlayStart(param_1 + 0x000045F4,0xcb);
        pcVar4 = (char *)(param_1 + 0x00004605);
        if (*pcVar4 != '\x06') {
          pcVar5 = (char *)(param_1 + 0x00004604);
          cVar1 = *pcVar5;
          *pcVar5 = cVar1 + '\x01';
          if (*pcVar4 != '\x05') {
            if ((char)(cVar1 + '\x01') < '\x0f') {
            }
            *pcVar5 = '\0';
          }
          if (*pcVar5 < '\r') {
          }
          *pcVar5 = '\0';
        }
        pbVar6 = (u8 *)(param_1 + 0x00004604);
        bVar2 = 0xc;
      }
    }
    else {
      hardware_Wrap_m4aMPlayStart(param_1 + 0x000045F4,0xcb);
      pcVar4 = (char *)(param_1 + 0x00004605);
      cVar1 = *pcVar4;
      *pcVar4 = cVar1 + '\x01';
      if ('\x06' < (char)(cVar1 + '\x01')) {
        *pcVar4 = '\0';
      }
      if ((*pcVar4 == '\x05') && ('\f' < *(char *)(param_1 + 0x00004604))) {
        *pcVar4 = *pcVar4 + '\x01';
      }
      if (*(char *)(param_1 + 0x00004605) != '\x06') {
      }
      pbVar6 = (u8 *)(param_1 + 0x00004604);
      bVar2 = 0xc;
    }
    *pbVar6 = bVar2;
  }
  else {
    hardware_Wrap_m4aMPlayStart(param_1 + 0x000045F4,0xcb);
    pbVar6 = (u8 *)(param_1 + 0x00004605);
    bVar2 = *pbVar6;
    *pbVar6 = (u8)(bVar2 - 1);
    if ((int)((bVar2 - 1) * 0x1000000) < 0) {
      *pbVar6 = 6;
      *(u8 *)(param_1 + 0x00004604) = 0xc;
    }
    if ((*pbVar6 == 5) && ('\f' < *(char *)(param_1 + 0x00004604))) {
      *pbVar6 = *pbVar6 - 1;
    }
  }
}

/* 0x08006B90 (152B) | new_game_Ctor_6B90 (orig: func_08006B90) | origin: wip | domain: new_game | HIGH / vtable_algebra */
void new_game_Ctor_6B90(int self) {
  char cVar1;
  u8 bVar2;
  u8 *pbVar3;
  char *pcVar4;
  cVar1 = *(char *)(*(char *)(self + 0x00004604) * 2 +
                    *(char *)(self + 0x00004605) * 0x1f + *(int *)(self + 0x4600) * 0xba +
                   0x080E89B6);
  pbVar3 = (u8 *)(self + 0x00004610);
  bVar2 = *pbVar3;
  pcVar4 = (char *)(self + 0x00004610 + 0xc + (u32)bVar2);
  if (*pcVar4 != cVar1) {
    *pcVar4 = cVar1;
    bVar2 = *pbVar3;
  }
  *pbVar3 = bVar2 + 1;
  pbVar3 = (u8 *)(self + 0x00004610);
  if (0xb < *pbVar3) {
    *(u8 *)(self + 0x00004604) = 0xc;
    *(u8 *)(self + 0x00004605) = 6;
    *pbVar3 = 0xb;
  }
}

/* 0x08006C28 (56B) | new_game_Sub_08006C28 (orig: func_08006C28) | origin: wip | domain: new_game | HIGH / stanhash_map_tu */
void new_game_Sub_08006C28(int param_1,u32 param_2) {
  int iVar1;
  param_2 = param_2 & 0xff;
  if (param_2 < 0xb) {
    iVar1 = param_1 + 0x0000461C;
    do {
      *(u8 *)(iVar1 + param_2) = *(u8 *)(iVar1 + param_2 + 1);
      param_2 = param_2 + 1 & 0xff;
    } while (param_2 < 0xb);
  }
  *(u8 *)(param_1 + 0x00004627) = 0x5f;
}

/* 0x08006C60 (124B) | new_game_Sub_08006C60 (orig: func_08006C60) | origin: wip | domain: new_game | HIGH / stanhash_map_tu */
u32 new_game_Sub_08006C60(int param_1) {
  u32 uVar6;
  int iVar2;
  char *pcVar3;
  s16 iVar4;
  int iVar5;
  char cVar1;
  uVar6 = 0;
  iVar5 = 0;
  iVar4 = param_1 + 0x00004629;
  LibC_strcpy(iVar4,param_1 + 0x00004629 + -0xd);
  iVar2 = 0;
  do {
    cVar1 = *(char *)(iVar4 + iVar2);
    if (cVar1 == '_') {
      iVar5 = iVar5 + 1;
    }
    else {
      if (cVar1 == ' ') {
        iVar5 = iVar5 + 1;
      }
      uVar6 = iVar2 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xc);
  if (iVar5 == 0xc) {
    uVar6 = 0;
  }
  else {
    iVar2 = 0;
    if (0 < (int)uVar6) {
      iVar4 = param_1 + 0x00004629;
      do {
        pcVar3 = (char *)(iVar4 + iVar2);
        if (*pcVar3 == '_') {
          *pcVar3 = ' ';
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)uVar6);
    }
  }
  *(u8 *)(param_1 + 0x00004629 + uVar6) = 0;
  return ((-uVar6 | uVar6) >> 0x1f);
}

/* 0x08006ED8 (416B) | new_game_Ctor_6ED8 (orig: func_08006ED8) | origin: wip | domain: new_game | HIGH / vtable_algebra */
void new_game_Ctor_6ED8(int self) {
  int iVar1;
  u32 uVar2;
  u32 uVar3;
  u32 uVar4;
  u32 uVar5;
  u32 uVar6;
  u32 uVar7;
  char *pcVar8;
  u32 *puVar9;
  u32 uVar10;
  if (*(int *)(self + 0x0000463C) != 0) {
    puVar9 = (u32 *)(self + 0x000045F8);
    iVar1 = code_0803EE94_GetField_0x00(*puVar9);
    uVar10 = *puVar9;
    uVar2 = hardware_GetField_0x00_88DC(self);
    uVar3 = hardware_GetField_0x00_8920(self);
    uVar4 = hardware_GetField_0x00_8918(self);
    uVar5 = hardware_GetField_0x00_8940(self);
    uVar6 = hardware_Sub_0800894C(self);
    uVar7 = code_0803EE94_78A8_Wrap_Ctor(uVar10,uVar2,uVar3,uVar4,uVar5,uVar6,self + 0x000045F0);
    if (uVar7 < 7) {
      switch(*(u32 *)(uVar7 * 4 + 0x08006F60) & 0xfffffffe) {
      case 0x8006f7c:
        pcVar8 = (char *)(self + 0x00004638);
        if (*pcVar8 != '\0') {
          *(u32 *)(self + 0x0000463C) = 0;
          *pcVar8 = '\0';
        }
        iVar1 = 0x00004639;
        if (*(char *)(self + 0x00004639) != '\0') {
          *(char *)(self + 0x00004639) = '\0';
          *(u8 *)(self + 0x00004636) = 1;
          LibC_strcpy(self + 0x0000461C,self + iVar1 + -0x10);
        }
        code_0803EE94_78C0_Sub_08050D5C(*(u32 *)(self + 0x000045F8));
        break;
      case 0x8006fd8:
        if (iVar1 < 6) {
          if (3 < iVar1) {
          }
          if (iVar1 == 1) {
            if (*(int *)(self + 0x0000463C) != 1) {
            }
            code_0803EE94_Sub_08050E30(*(u32 *)(self + 0x000045F8),0x080E8C2C,0x080E8C44,
                          0x080E8C48,0,0,0);
          }
        }
        else if (iVar1 == 6) {
          iVar1 = code_0803EE94_Sub_08050DF0(*(u32 *)(self + 0x000045F8));
          if (iVar1 == 1) {
            *(u8 *)(self + 0x00004639) = 1;
          }
          if (iVar1 != 2) {
          }
          *(u8 *)(self + 0x00004638) = 1;
        }
        code_0803EE94_78C0_Sub_08050D74(*(u32 *)(self + 0x000045F8));
      }
    }
  }
}

/* 0x08007078 (44B) | new_game_Create_7078 (orig: func_08007078) | origin: pure | domain: new_game | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_new();
extern u32 new_game_Create_5A58();
u32 new_game_Create_7078(u32 *arg0,u32 arg1,u32 arg2) {
  u32 val;
  *arg0 = 0x080E5AC0;
  val = CppRuntime_builtin_new(0x00004640);
  val = new_game_Create_5A58(val,arg1,arg2);
  arg0[1] = val;
  return arg0;
}

/* 0x080070A4 (48B) | new_game_Ctor_70A4 (orig: func_080070A4) | origin: pure | domain: new_game | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor();
extern u32 func_080D3914();
void new_game_Ctor_70A4(u32 *arg0,u32 arg1) {
  int val;
  *arg0 = 0x080E5AC0;
  val = arg0[1];
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 4) + 8));
  }
  scene_Dtor(arg0,arg1);
}

/* 0x080070D4 (60B) | new_game_vfunc_0C_70D4 (orig: func_080070D4) | origin: pure | domain: new_game | HIGH / vtable_algebra */
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
extern "C" AutoPtr<V1> new_game_Ctor_5B68(int);
extern "C" AutoPtr<V0> new_game_vfunc_0C_70D4(In *in) {
    return new_game_Ctor_5B68(in->f4);
}

/* 0x08007110 (12B) | new_game_GetField_0x04_7110 (orig: func_08007110) | origin: pure | domain: new_game | HIGH / stanhash_map_tu */
u32 new_game_GetField_0x04_7110(u32 *arg0) {
    return arg0[1] + 0x461C;
}

/* 0x0806EA6C (12B) | new_game_GetField_0x04_EA6C (orig: func_0806EA6C) | origin: pure | domain: new_game | MEDIUM / graph_algebra */
u8 new_game_GetField_0x04_EA6C(u8 **arg0) {
    return *(u8 *)(arg0[1] + (137 << 3));
}

/* 0x080D4178 (776B) | new_game_Sub_080D4178 (orig: func_080D4178) | origin: wip | domain: new_game | MEDIUM / graph_algebra */
u32 new_game_Sub_080D4178(u32 *param_1,u32 *param_2) {
  u8 bVar1;
  u8 *pbVar2;
  u32 uVar3;
  u8 *pbVar4;
  int iVar5;
  u32 uVar6;
  u32 uVar7;
  u8 *pbVar8;
  u8 *pbVar9;
  u32 uVar10;
  bVar1 = (u8)*param_2;
  *(u8 *)param_1 =
       (u8)*param_1 & 0xe0 | bVar1 & 1 | bVar1 & 2 | bVar1 & 4 | bVar1 & 8 | bVar1 & 0x10;
  *(u16 *)param_1 = (u16)0xFFFFE01F & (u16)*param_1 | (u16)*param_2 & 0x1fe0;
  *param_1 = *param_1 & 0xFFFC1FFF | *param_2 & 0x3e000;
  *(u16 *)((int)param_1 + 2) =
       (u16)0xFFFFFE03 & *(u16 *)((int)param_1 + 2) | *(u16 *)((int)param_2 + 2) & 0x1fc
  ;
  *(u8 *)((int)param_1 + 3) =
       *(u8 *)((int)param_1 + 3) & 1 | *(u8 *)((int)param_2 + 3) & 0x7e |
       *(u8 *)((int)param_2 + 3) & 0x80;
  *(u8 *)(param_1 + 1) = (u8)param_1[1] & 0xfe | (u8)param_2[1] & 1;
  uVar3 = param_2[3];
  uVar7 = param_2[4];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  param_1[4] = uVar7;
  new_game_Sub_080D64C8(param_1 + 5,param_2 + 5);
  new_game_Sub_080D6B40((u8 *)((int)param_1 + 0x00001AA8),(u8 *)((int)param_2 + 0x00001AA8));
  new_game_Sub_080D68C0((u8 *)((int)param_1 + 0x00001BD8),(u8 *)((int)param_2 + 0x00001BD8));
  Farm_Sub_080D67C8((u8 *)((int)param_1 + 0x00001C70),(u8 *)((int)param_2 + 0x00001C70));
  param_1[0x728] = 0;
  uVar3 = param_2[0x728];
  pbVar2 = (u8 *)((int)param_2 + 0x00001CA4);
  pbVar8 = pbVar2 + uVar3;
  pbVar4 = (u8 *)((int)param_1 + 0x00001CA4);
  for (; pbVar2 != pbVar8; pbVar2 = pbVar2 + 1) {
    if (pbVar4 != (u8 *)0x0) {
      *pbVar4 = *pbVar2;
    }
    pbVar4 = pbVar4 + 1;
  }
  param_1[0x728] = uVar3;
  LibC_memcpy(param_1 + 0x731,param_2 + 0x731,6);
  LibC_memcpy((u8 *)((int)param_1 + 0x00001CCC),(u8 *)((int)param_2 + 0x00001CCC),6);
  new_game_Sub_080D60B0((u8 *)((int)param_1 + 0x00001CD4),(u8 *)((int)param_2 + 0x00001CD4));
  new_game_Sub_080D44D4((u8 *)((int)param_1 + 0x0000214C),(u8 *)((int)param_2 + 0x0000214C));
  pbVar9 = (u8 *)((int)param_1 + 0x000021CC);
  pbVar2 = (u8 *)(0x000021CC + (int)param_2);
  *(u32 *)pbVar9 = *(u32 *)pbVar2;
  *(u32 *)(pbVar9 + 4) = *(u32 *)(pbVar2 + 4);
  pbVar8 = (u8 *)((int)param_1 + 0x000021D4);
  iVar5 = 7;
  pbVar4 = (u8 *)((int)param_2 + 0x000021D4);
  do {
    *pbVar8 = *pbVar4;
    pbVar8 = pbVar8 + 1;
    pbVar4 = pbVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  pbVar8 = pbVar9 + 0x10;
  iVar5 = 3;
  pbVar4 = pbVar2 + 0x10;
  do {
    *pbVar8 = *pbVar4;
    pbVar8 = pbVar8 + 1;
    pbVar4 = pbVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  LibC_strcpy(pbVar9 + 0x14,pbVar2 + 0x14);
  LibC_strcpy(pbVar9 + 0x24,pbVar2 + 0x24);
  LibC_strcpy(pbVar9 + 0x34,pbVar2 + 0x34);
  *(u32 *)((int)param_1 + 0x00002210) = *(u32 *)((int)param_2 + 0x00002210);
  LibC_memcpy((u8 *)((int)param_1 + 0x00002214),(u8 *)((int)param_2 + 0x00002214),
                0x00000A08);
  pbVar2 = (u8 *)((int)param_1 + 0x00002C1C);
  pbVar4 = (u8 *)((int)param_2 + 0x00002C1C);
  uVar6 = *(u32 *)(pbVar4 + 4);
  uVar10 = *(u32 *)(pbVar4 + 8);
  *(u32 *)pbVar2 = *(u32 *)pbVar4;
  *(u32 *)(pbVar2 + 4) = uVar6;
  *(u32 *)(pbVar2 + 8) = uVar10;
  uVar6 = *(u32 *)(pbVar4 + 0x10);
  uVar10 = *(u32 *)(pbVar4 + 0x14);
  *(u32 *)(pbVar2 + 0xc) = *(u32 *)(pbVar4 + 0xc);
  *(u32 *)(pbVar2 + 0x10) = uVar6;
  *(u32 *)(pbVar2 + 0x14) = uVar10;
  uVar6 = *(u32 *)(pbVar4 + 0x1c);
  uVar10 = *(u32 *)(pbVar4 + 0x20);
  *(u32 *)(pbVar2 + 0x18) = *(u32 *)(pbVar4 + 0x18);
  *(u32 *)(pbVar2 + 0x1c) = uVar6;
  *(u32 *)(pbVar2 + 0x20) = uVar10;
  uVar6 = *(u32 *)(pbVar4 + 0x28);
  uVar10 = *(u32 *)(pbVar4 + 0x2c);
  *(u32 *)(pbVar2 + 0x24) = *(u32 *)(pbVar4 + 0x24);
  *(u32 *)(pbVar2 + 0x28) = uVar6;
  *(u32 *)(pbVar2 + 0x2c) = uVar10;
  pbVar4 = (u8 *)((int)param_1 + 0x00002C4C);
  pbVar2 = (u8 *)((int)param_2 + 0x00002C4C);
  uVar6 = *(u32 *)(pbVar2 + 4);
  uVar10 = *(u32 *)(pbVar2 + 8);
  *(u32 *)pbVar4 = *(u32 *)pbVar2;
  *(u32 *)(pbVar4 + 4) = uVar6;
  *(u32 *)(pbVar4 + 8) = uVar10;
  uVar6 = *(u32 *)(pbVar2 + 0x10);
  uVar10 = *(u32 *)(pbVar2 + 0x14);
  *(u32 *)(pbVar4 + 0xc) = *(u32 *)(pbVar2 + 0xc);
  *(u32 *)(pbVar4 + 0x10) = uVar6;
  *(u32 *)(pbVar4 + 0x14) = uVar10;
  uVar6 = *(u32 *)(pbVar2 + 0x1c);
  uVar10 = *(u32 *)(pbVar2 + 0x20);
  *(u32 *)(pbVar4 + 0x18) = *(u32 *)(pbVar2 + 0x18);
  *(u32 *)(pbVar4 + 0x1c) = uVar6;
  *(u32 *)(pbVar4 + 0x20) = uVar10;
  *(u32 *)(pbVar4 + 0x24) = *(u32 *)(pbVar2 + 0x24);
  pbVar4 = (u8 *)((int)param_1 + 0x00002C74);
  pbVar2 = (u8 *)((int)param_2 + 0x00002C74);
  uVar6 = *(u32 *)(pbVar2 + 4);
  uVar10 = *(u32 *)(pbVar2 + 8);
  *(u32 *)pbVar4 = *(u32 *)pbVar2;
  *(u32 *)(pbVar4 + 4) = uVar6;
  *(u32 *)(pbVar4 + 8) = uVar10;
  LibC_memcpy(param_1 + 0xb20,param_2 + 0xb20,0x1d8);
  LibC_memcpy((u8 *)((int)param_1 + 0x00002E58),(u8 *)((int)param_2 + 0x00002E58),0x628)
  ;
  uVar3 = param_2[0xd21];
  uVar7 = param_2[0xd22];
  param_1[0xd20] = param_2[0xd20];
  param_1[0xd21] = uVar3;
  param_1[0xd22] = uVar7;
  uVar3 = param_2[0xd24];
  param_1[0xd23] = param_2[0xd23];
  param_1[0xd24] = uVar3;
  pbVar2 = (u8 *)((int)param_1 + 0x00003494);
  pbVar4 = (u8 *)((int)param_2 + 0x00003494);
  uVar6 = *(u32 *)(pbVar4 + 4);
  uVar10 = *(u32 *)(pbVar4 + 8);
  *(u32 *)pbVar2 = *(u32 *)pbVar4;
  *(u32 *)(pbVar2 + 4) = uVar6;
  *(u32 *)(pbVar2 + 8) = uVar10;
  uVar6 = *(u32 *)(pbVar4 + 0x10);
  uVar10 = *(u32 *)(pbVar4 + 0x14);
  *(u32 *)(pbVar2 + 0xc) = *(u32 *)(pbVar4 + 0xc);
  *(u32 *)(pbVar2 + 0x10) = uVar6;
  *(u32 *)(pbVar2 + 0x14) = uVar10;
  uVar6 = *(u32 *)(pbVar4 + 0x1c);
  uVar10 = *(u32 *)(pbVar4 + 0x20);
  *(u32 *)(pbVar2 + 0x18) = *(u32 *)(pbVar4 + 0x18);
  *(u32 *)(pbVar2 + 0x1c) = uVar6;
  *(u32 *)(pbVar2 + 0x20) = uVar10;
  uVar6 = *(u32 *)(pbVar4 + 0x28);
  uVar10 = *(u32 *)(pbVar4 + 0x2c);
  *(u32 *)(pbVar2 + 0x24) = *(u32 *)(pbVar4 + 0x24);
  *(u32 *)(pbVar2 + 0x28) = uVar6;
  *(u32 *)(pbVar2 + 0x2c) = uVar10;
  *(u8 *)((int)param_1 + 0x000034C4) = *(u8 *)((int)param_2 + 0x000034C4);
  *(u8 *)((int)param_1 + 0x000034C5) = *(u8 *)((int)param_2 + 0x000034C5);
  pbVar4 = (u8 *)((int)param_1 + 0x000034C8);
  pbVar2 = (u8 *)((int)param_2 + 0x000034C8);
  uVar6 = *(u32 *)(pbVar2 + 4);
  uVar10 = *(u32 *)(pbVar2 + 8);
  *(u32 *)pbVar4 = *(u32 *)pbVar2;
  *(u32 *)(pbVar4 + 4) = uVar6;
  *(u32 *)(pbVar4 + 8) = uVar10;
  *(u32 *)(pbVar4 + 0xc) = *(u32 *)(pbVar2 + 0xc);
  *(u32 *)((int)param_1 + 0x000034D8) = *(u32 *)((int)param_2 + 0x000034D8);
  pbVar2 = (u8 *)((int)param_1 + 0x000034DC);
  pbVar4 = (u8 *)((int)param_2 + 0x000034DC);
  uVar6 = *(u32 *)(pbVar4 + 4);
  uVar10 = *(u32 *)(pbVar4 + 8);
  *(u32 *)pbVar2 = *(u32 *)pbVar4;
  *(u32 *)(pbVar2 + 4) = uVar6;
  *(u32 *)(pbVar2 + 8) = uVar10;
  uVar6 = *(u32 *)(pbVar4 + 0x10);
  uVar10 = *(u32 *)(pbVar4 + 0x14);
  *(u32 *)(pbVar2 + 0xc) = *(u32 *)(pbVar4 + 0xc);
  *(u32 *)(pbVar2 + 0x10) = uVar6;
  *(u32 *)(pbVar2 + 0x14) = uVar10;
  return (param_1);
}

/* 0x080D4480 (84B) | new_game_Sub_080D4480 (orig: func_080D4480) | origin: pure | domain: new_game | MEDIUM / tu_interp */
struct D_080D6C08 {
    u8 b[0x190];
    ~D_080D6C08();
};
struct D_080D6B00 {
    u8 b[0x68];
    ~D_080D6B00();
};
struct FV_U8_Dtor {
    u32 m_size;
    u32 m_data[4];
    u8 *begin() { return reinterpret_cast<u8 *>(m_data); }
    u8 *end() { return reinterpret_cast<u8 *>(m_data) + m_size; }
    ~FV_U8_Dtor() {
        u8 *e = end();
        for (u8 *it = begin(); it != e; ++it) {}
    }
};
struct C_080D4480 {
    u8 pad[0x1AA8];
    D_080D6C08 s1;
    D_080D6B00 s2;
    FV_U8_Dtor v;
    ~C_080D4480();
};
C_080D4480::~C_080D4480() {}
extern "C" void new_game_Sub_080D4480() __attribute__((alias("_._10C_080D4480")));

/* 0x080D44D4 (4096B) | new_game_Sub_080D44D4 (orig: func_080D44D4) | origin: wip | domain: new_game | MEDIUM / graph_algebra */
u32 new_game_Sub_080D44D4(int *param_1,int *param_2) {
  u8 bVar1;
  u8 bVar2;
  u16 uVar3;
  u16 uVar4;
  int *piVar5;
  int iVar6;
  u16 *puVar7;
  u16 *puVar8;
  int *piVar9;
  *param_1 = 0;
  iVar6 = *param_2;
  piVar9 = param_2 + 1;
  piVar5 = (int *)(iVar6 * 2 + (int)piVar9);
  if (piVar5 != piVar9) {
    LibC_memmove(param_1 + 1,piVar9,(int)piVar5 - (int)piVar9);
  }
  *param_1 = iVar6;
  *(short *)(param_1 + 3) = (short)param_2[3];
  *(u8 *)((int)param_1 + 0xe) = *(u8 *)((int)param_2 + 0xe);
  *(u8 *)((int)param_1 + 0xf) = *(u8 *)((int)param_2 + 0xf);
  *(char *)(param_1 + 4) = (char)param_2[4];
  bVar1 = *(u8 *)((int)param_2 + 0x11);
  *(u8 *)((int)param_1 + 0x11) =
       bVar1 & 1 | *(u8 *)((int)param_1 + 0x11) & 0x80 | bVar1 & 2 | bVar1 & 4 | bVar1 & 8 |
       bVar1 & 0x10 | bVar1 & 0x60;
  param_1[4] = param_1[4] & 0xFFFE7FFF | param_2[4] & 0x18000U;
  bVar1 = *(u8 *)((int)param_2 + 0x12);
  *(u8 *)((int)param_1 + 0x12) =
       *(u8 *)((int)param_1 + 0x12) & 0x81 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  *(u16 *)((int)param_1 + 0x12) =
       (u16)0xFFFFFE7F & *(u16 *)((int)param_1 + 0x12) |
       *(u16 *)((int)param_2 + 0x12) & 0x180;
  bVar1 = *(u8 *)((int)param_2 + 0x13);
  bVar2 = *(u8 *)(param_2 + 5);
  *(u8 *)((int)param_1 + 0x13) =
       *(u8 *)((int)param_1 + 0x13) & 1 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60 | bVar1 & 0x80;
  bVar1 = *(u8 *)(param_2 + 5);
  *(u8 *)(param_1 + 5) =
       *(u8 *)(param_1 + 5) & 0x80 | bVar2 & 1 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  *(u16 *)(param_1 + 5) =
       (u16)0xFFFFFE7F & *(u16 *)(param_1 + 5) | *(u16 *)(param_2 + 5) & 0x180;
  bVar1 = *(u8 *)((int)param_2 + 0x15);
  *(u8 *)((int)param_1 + 0x15) =
       *(u8 *)((int)param_1 + 0x15) & 0x81 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  param_1[5] = param_1[5] & 0xFFFE7FFF | param_2[5] & 0x18000U;
  bVar1 = *(u8 *)((int)param_2 + 0x16);
  *(u8 *)((int)param_1 + 0x16) =
       *(u8 *)((int)param_1 + 0x16) & 0x81 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  *(u16 *)((int)param_1 + 0x16) =
       (u16)0xFFFFFE7F & *(u16 *)((int)param_1 + 0x16) |
       *(u16 *)((int)param_2 + 0x16) & 0x180;
  bVar1 = *(u8 *)((int)param_2 + 0x17);
  bVar2 = *(u8 *)(param_2 + 6);
  *(u8 *)((int)param_1 + 0x17) =
       *(u8 *)((int)param_1 + 0x17) & 1 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60 | bVar1 & 0x80;
  bVar1 = *(u8 *)(param_2 + 6);
  *(u8 *)(param_1 + 6) =
       bVar2 & 1 | *(u8 *)(param_1 + 6) & 0x80 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  *(u16 *)(param_1 + 6) =
       (u16)0xFFFFFE7F & *(u16 *)(param_1 + 6) | *(u16 *)(param_2 + 6) & 0x180;
  bVar1 = *(u8 *)((int)param_2 + 0x19);
  *(u8 *)((int)param_1 + 0x19) =
       *(u8 *)((int)param_1 + 0x19) & 0x81 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  param_1[6] = param_1[6] & 0xFFFE7FFF | param_2[6] & 0x18000U;
  bVar1 = *(u8 *)((int)param_2 + 0x1a);
  *(u8 *)((int)param_1 + 0x1a) =
       *(u8 *)((int)param_1 + 0x1a) & 0x81 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  *(u16 *)((int)param_1 + 0x1a) =
       (u16)0xFFFFFE7F & *(u16 *)((int)param_1 + 0x1a) |
       *(u16 *)((int)param_2 + 0x1a) & 0x180;
  bVar1 = *(u8 *)((int)param_2 + 0x1b);
  bVar2 = *(u8 *)(param_2 + 7);
  *(u8 *)((int)param_1 + 0x1b) =
       *(u8 *)((int)param_1 + 0x1b) & 1 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60 | bVar1 & 0x80;
  bVar1 = *(u8 *)(param_2 + 7);
  *(u8 *)(param_1 + 7) =
       bVar2 & 1 | *(u8 *)(param_1 + 7) & 0x80 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  *(u16 *)(param_1 + 7) =
       (u16)0xFFFFFE7F & *(u16 *)(param_1 + 7) | *(u16 *)(param_2 + 7) & 0x180;
  bVar1 = *(u8 *)((int)param_2 + 0x1d);
  *(u8 *)((int)param_1 + 0x1d) =
       *(u8 *)((int)param_1 + 0x1d) & 0x81 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  param_1[7] = param_1[7] & 0xFFFE7FFF | param_2[7] & 0x18000U;
  bVar1 = *(u8 *)((int)param_2 + 0x1e);
  *(u8 *)((int)param_1 + 0x1e) =
       *(u8 *)((int)param_1 + 0x1e) & 0x81 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  *(u16 *)((int)param_1 + 0x1e) =
       (u16)0xFFFFFE7F & *(u16 *)((int)param_1 + 0x1e) |
       *(u16 *)((int)param_2 + 0x1e) & 0x180;
  bVar1 = *(u8 *)((int)param_2 + 0x1f);
  bVar2 = *(u8 *)(param_2 + 8);
  *(u8 *)((int)param_1 + 0x1f) =
       *(u8 *)((int)param_1 + 0x1f) & 1 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60 | bVar1 & 0x80;
  bVar1 = *(u8 *)(param_2 + 8);
  *(u8 *)(param_1 + 8) =
       bVar2 & 1 | *(u8 *)(param_1 + 8) & 0x80 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  *(u16 *)(param_1 + 8) =
       (u16)0xFFFFFE7F & *(u16 *)(param_1 + 8) | *(u16 *)(param_2 + 8) & 0x180;
  bVar1 = *(u8 *)((int)param_2 + 0x21);
  *(u8 *)((int)param_1 + 0x21) =
       *(u8 *)((int)param_1 + 0x21) & 0x81 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  param_1[8] = param_1[8] & 0xFFFE7FFF | param_2[8] & 0x18000U;
  bVar1 = *(u8 *)((int)param_2 + 0x22);
  *(u8 *)((int)param_1 + 0x22) =
       *(u8 *)((int)param_1 + 0x22) & 0x81 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x20 |
       bVar1 & 0x40;
  bVar1 = *(u8 *)(param_2 + 9);
  *(u8 *)((int)param_1 + 0x23) =
       *(u8 *)((int)param_1 + 0x23) & 0xf | *(u8 *)((int)param_2 + 0x23) & 0xf0;
  bVar2 = *(u8 *)(param_2 + 9);
  *(u8 *)(param_1 + 9) = *(u8 *)(param_1 + 9) & 0x80 | bVar1 & 7 | bVar2 & 0x18 | bVar2 & 0x60;
  *(u16 *)(param_1 + 9) =
       (u16)0xFFFFFE7F & *(u16 *)(param_1 + 9) | *(u16 *)(param_2 + 9) & 0x180;
  bVar1 = *(u8 *)((int)param_2 + 0x25);
  *(u8 *)((int)param_1 + 0x25) =
       *(u8 *)((int)param_1 + 0x25) & 1 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60 | bVar1 & 0x80;
  *(u8 *)((int)param_1 + 0x26) = *(u8 *)((int)param_2 + 0x26);
  *(u8 *)((int)param_1 + 0x27) = *(u8 *)((int)param_2 + 0x27);
  *(char *)(param_1 + 10) = (char)param_2[10];
  *(u8 *)((int)param_1 + 0x29) = *(u8 *)((int)param_2 + 0x29);
  bVar1 = *(u8 *)((int)param_2 + 0x2a);
  *(u8 *)((int)param_1 + 0x2a) =
       bVar1 & 1 | *(u8 *)((int)param_1 + 0x2a) & 0x80 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  *(u16 *)((int)param_1 + 0x2a) =
       (u16)0xFFFFFE7F & *(u16 *)((int)param_1 + 0x2a) |
       *(u16 *)((int)param_2 + 0x2a) & 0x180;
  bVar1 = *(u8 *)((int)param_2 + 0x2b);
  *(u8 *)((int)param_1 + 0x2b) =
       *(u8 *)((int)param_1 + 0x2b) & 1 | bVar1 & 6 | bVar1 & 8 | bVar1 & 0x30 | bVar1 & 0xc0;
  *(char *)(param_1 + 0xb) = (char)param_2[0xb];
  bVar1 = *(u8 *)((int)param_2 + 0x2d);
  *(u8 *)((int)param_1 + 0x2d) =
       *(u8 *)((int)param_1 + 0x2d) & 0xc0 | bVar1 & 3 | bVar1 & 0xc | bVar1 & 0x30;
  param_1[0xb] = param_1[0xb] & 0xFFFC3FFF | param_2[0xb] & 0x3c000U;
  bVar1 = *(u8 *)((int)param_2 + 0x2e);
  *(u8 *)((int)param_1 + 0x2e) =
       *(u8 *)((int)param_1 + 0x2e) & 3 | bVar1 & 4 | bVar1 & 0x18 | bVar1 & 0x60 | bVar1 & 0x80;
  bVar1 = *(u8 *)(param_2 + 0xc);
  *(u8 *)((int)param_1 + 0x2f) = *(u8 *)((int)param_2 + 0x2f);
  bVar2 = *(u8 *)(param_2 + 0xc);
  *(u8 *)(param_1 + 0xc) = bVar1 & 1 | bVar2 & 6 | bVar2 & 0x18 | bVar2 & 0x60 | bVar2 & 0x80;
  *(u8 *)((int)param_1 + 0x31) = *(u8 *)((int)param_2 + 0x31);
  *(u8 *)((int)param_1 + 0x32) = *(u8 *)((int)param_2 + 0x32);
  *(u8 *)((int)param_1 + 0x33) = *(u8 *)((int)param_2 + 0x33);
  *(char *)(param_1 + 0xd) = (char)param_2[0xd];
  *(u8 *)((int)param_1 + 0x35) = *(u8 *)((int)param_2 + 0x35);
  bVar1 = *(u8 *)((int)param_2 + 0x36);
  *(u8 *)((int)param_1 + 0x36) =
       *(u8 *)((int)param_1 + 0x36) & 0x80 | bVar1 & 3 | bVar1 & 4 | bVar1 & 0x18 | bVar1 & 0x60;
  *(u16 *)((int)param_1 + 0x36) =
       (u16)0xFFFFFE7F & *(u16 *)((int)param_1 + 0x36) |
       *(u16 *)((int)param_2 + 0x36) & 0x180;
  bVar1 = *(u8 *)((int)param_2 + 0x37);
  bVar2 = *(u8 *)(param_2 + 0xe);
  *(u8 *)((int)param_1 + 0x37) =
       *(u8 *)((int)param_1 + 0x37) & 1 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60 | bVar1 & 0x80;
  bVar1 = *(u8 *)(param_2 + 0xe);
  *(u8 *)(param_1 + 0xe) = bVar2 & 1 | bVar1 & 2 | bVar1 & 0xc | bVar1 & 0x30 | bVar1 & 0xc0;
  *(u8 *)((int)param_1 + 0x39) = *(u8 *)((int)param_2 + 0x39);
  bVar1 = *(u8 *)((int)param_2 + 0x3a);
  *(u8 *)((int)param_1 + 0x3a) =
       *(u8 *)((int)param_1 + 0x3a) & 0x80 | bVar1 & 3 | bVar1 & 0x1c | bVar1 & 0x60;
  *(u16 *)((int)param_1 + 0x3a) =
       (u16)0xFFFFFE7F & *(u16 *)((int)param_1 + 0x3a) |
       *(u16 *)((int)param_2 + 0x3a) & 0x180;
  bVar1 = *(u8 *)((int)param_2 + 0x3b);
  bVar2 = *(u8 *)(param_2 + 0xf);
  *(u8 *)((int)param_1 + 0x3b) =
       *(u8 *)((int)param_1 + 0x3b) & 1 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60 | bVar1 & 0x80;
  bVar1 = *(u8 *)(param_2 + 0xf);
  *(u8 *)(param_1 + 0xf) =
       bVar2 & 1 | *(u8 *)(param_1 + 0xf) & 0x80 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  *(u16 *)(param_1 + 0xf) =
       (u16)0xFFFFFC7F & *(u16 *)(param_1 + 0xf) | *(u16 *)(param_2 + 0xf) & 0x380;
  *(u8 *)((int)param_1 + 0x3d) =
       *(u8 *)((int)param_1 + 0x3d) & 0xc3 | *(u8 *)((int)param_2 + 0x3d) & 0xc |
       *(u8 *)((int)param_2 + 0x3d) & 0x30;
  param_1[0xf] = param_1[0xf] & 0xFFFC3FFF | param_2[0xf] & 0x3c000U;
  bVar1 = *(u8 *)((int)param_2 + 0x3e);
  *(u8 *)((int)param_1 + 0x3e) =
       *(u8 *)((int)param_1 + 0x3e) & 3 | bVar1 & 0xc | bVar1 & 0x30 | bVar1 & 0xc0;
  puVar7 = (u16 *)(param_2 + 0x10);
  uVar3 = *puVar7;
  *(u8 *)((int)param_1 + 0x3f) = *(u8 *)((int)param_2 + 0x3f);
  puVar8 = (u16 *)(param_1 + 0x10);
  bVar1 = (u8)*puVar7;
  *(u8 *)puVar8 = (u8)uVar3 & 1 | (u8)*puVar8 & 0x80 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60
  ;
  *puVar8 = (u16)0xFFFFFE7F & *puVar8 | *puVar7 & 0x180;
  *(u8 *)((int)param_1 + 0x41) =
       *(u8 *)((int)param_1 + 0x41) & 0xe1 | *(u8 *)((int)param_2 + 0x41) & 6 |
       *(u8 *)((int)param_2 + 0x41) & 0x18;
  param_1[0x10] = param_1[0x10] & 0xFFFE1FFF | param_2[0x10] & 0x1e000U;
  bVar1 = *(u8 *)((int)param_2 + 0x42);
  *(u8 *)((int)param_1 + 0x42) =
       *(u8 *)((int)param_1 + 0x42) & 1 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x20 | bVar1 & 0xc0;
  *(u8 *)((int)param_1 + 0x43) = *(u8 *)((int)param_2 + 0x43);
  *(char *)(param_1 + 0x11) = (char)param_2[0x11];
  *(u8 *)((int)param_1 + 0x45) = *(u8 *)((int)param_2 + 0x45);
  *(u8 *)((int)param_1 + 0x46) = *(u8 *)((int)param_2 + 0x46);
  *(u8 *)((int)param_1 + 0x47) = *(u8 *)((int)param_2 + 0x47);
  *(char *)(param_1 + 0x12) = (char)param_2[0x12];
  *(u8 *)((int)param_1 + 0x49) = *(u8 *)((int)param_2 + 0x49);
  *(u8 *)((int)param_1 + 0x4a) = *(u8 *)((int)param_2 + 0x4a);
  *(u8 *)((int)param_1 + 0x4b) = *(u8 *)((int)param_2 + 0x4b);
  *(char *)(param_1 + 0x13) = (char)param_2[0x13];
  bVar1 = *(u8 *)((int)param_2 + 0x4d);
  *(u8 *)((int)param_1 + 0x4d) =
       *(u8 *)((int)param_1 + 0x4d) & 0x80 | bVar1 & 3 | bVar1 & 4 | bVar1 & 8 | bVar1 & 0x10 |
       bVar1 & 0x20 | bVar1 & 0x40;
  param_1[0x13] = param_1[0x13] & 0xFFFE7FFF | param_2[0x13] & 0x18000U;
  bVar1 = *(u8 *)((int)param_2 + 0x4e);
  puVar8 = (u16 *)((int)param_1 + 0x4e);
  *(u8 *)puVar8 = *(u8 *)puVar8 & 0x81 | bVar1 & 2 | bVar1 & 0xc | bVar1 & 0x10 | bVar1 & 0x60;
  *puVar8 = (u16)0xFFFFFE7F & *puVar8 | *(u16 *)((int)param_2 + 0x4e) & 0x180;
  bVar1 = *(u8 *)((int)param_2 + 0x4f);
  bVar2 = *(u8 *)(param_2 + 0x14);
  *(u8 *)((int)param_1 + 0x4f) =
       *(u8 *)((int)param_1 + 0x4f) & 1 | bVar1 & 0xe | bVar1 & 0x30 | bVar1 & 0x40 | bVar1 & 0x80
  ;
  bVar1 = *(u8 *)(param_2 + 0x14);
  *(u8 *)(param_1 + 0x14) = bVar2 & 3 | bVar1 & 0xc | bVar1 & 0x10 | bVar1 & 0x60 | bVar1 & 0x80;
  *(u8 *)((int)param_1 + 0x51) = *(u8 *)((int)param_2 + 0x51);
  bVar1 = *(u8 *)((int)param_2 + 0x52);
  puVar8 = (u16 *)((int)param_1 + 0x52);
  *(u8 *)puVar8 = bVar1 & 1 | *(u8 *)puVar8 & 0xc0 | bVar1 & 6 | bVar1 & 8 | bVar1 & 0x30;
  *puVar8 = (u16)0xFFFFFE3F & *puVar8 | *(u16 *)((int)param_2 + 0x52) & 0x1c0;
  bVar1 = *(u8 *)((int)param_2 + 0x53);
  *(u8 *)((int)param_1 + 0x53) =
       *(u8 *)((int)param_1 + 0x53) & 1 | bVar1 & 6 | bVar1 & 8 | bVar1 & 0x30 | bVar1 & 0xc0;
  *(char *)(param_1 + 0x15) = (char)param_2[0x15];
  *(u8 *)((int)param_1 + 0x55) = *(u8 *)((int)param_2 + 0x55);
  *(u8 *)((int)param_1 + 0x56) = *(u8 *)((int)param_2 + 0x56);
  bVar1 = *(u8 *)(param_2 + 0x16);
  *(u8 *)((int)param_1 + 0x57) = *(u8 *)((int)param_2 + 0x57);
  bVar2 = *(u8 *)(param_2 + 0x16);
  *(u8 *)(param_1 + 0x16) =
       bVar1 & 1 | bVar2 & 2 | bVar2 & 0xc | bVar2 & 0x10 | bVar2 & 0x60 | bVar2 & 0x80;
  bVar1 = *(u8 *)((int)param_2 + 0x59);
  *(u8 *)((int)param_1 + 0x59) =
       *(u8 *)((int)param_1 + 0x59) & 0x80 | bVar1 & 3 | bVar1 & 4 | bVar1 & 0x18 | bVar1 & 0x60;
  param_1[0x16] = param_1[0x16] & 0xFFFC7FFF | param_2[0x16] & 0x38000U;
  bVar1 = *(u8 *)((int)param_2 + 0x5a);
  puVar8 = (u16 *)((int)param_1 + 0x5a);
  *(u8 *)puVar8 =
       *(u8 *)puVar8 & 0x83 | bVar1 & 4 | bVar1 & 8 | bVar1 & 0x10 | bVar1 & 0x20 | bVar1 & 0x40;
  *puVar8 = (u16)0xFFFFFE7F & *puVar8 | *(u16 *)((int)param_2 + 0x5a) & 0x180;
  bVar1 = *(u8 *)((int)param_2 + 0x5b);
  bVar2 = *(u8 *)(param_2 + 0x17);
  *(u8 *)((int)param_1 + 0x5b) =
       *(u8 *)((int)param_1 + 0x5b) & 1 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60 | bVar1 & 0x80;
  bVar1 = *(u8 *)(param_2 + 0x17);
  *(u8 *)(param_1 + 0x17) = bVar2 & 1 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0xe0;
  *(u8 *)((int)param_1 + 0x5d) = *(u8 *)((int)param_2 + 0x5d);
  *(u8 *)((int)param_1 + 0x5e) = *(u8 *)((int)param_2 + 0x5e);
  *(u8 *)((int)param_1 + 0x5f) = *(u8 *)((int)param_2 + 0x5f);
  *(char *)(param_1 + 0x18) = (char)param_2[0x18];
  *(u8 *)((int)param_1 + 0x61) = *(u8 *)((int)param_2 + 0x61);
  *(u8 *)((int)param_1 + 0x62) = *(u8 *)((int)param_2 + 0x62);
  *(u8 *)((int)param_1 + 99) = *(u8 *)((int)param_2 + 99);
  *(char *)(param_1 + 0x19) = (char)param_2[0x19];
  *(u8 *)((int)param_1 + 0x65) = *(u8 *)((int)param_2 + 0x65);
  *(u8 *)((int)param_1 + 0x66) = *(u8 *)((int)param_2 + 0x66);
  *(u8 *)((int)param_1 + 0x67) = *(u8 *)((int)param_2 + 0x67);
  bVar1 = (u8)*(u16 *)(param_2 + 0x1a);
  puVar8 = (u16 *)(param_1 + 0x1a);
  *(u8 *)puVar8 = (u8)*puVar8 & 0xc0 | bVar1 & 3 | bVar1 & 0xc | bVar1 & 0x30;
  uVar3 = (u16)0xFFFFC03F;
  *puVar8 = uVar3 & *puVar8 | *(u16 *)(param_2 + 0x1a) & 0x3fc0;
  param_1[0x1a] = param_1[0x1a] & 0xFFC03FFF | param_2[0x1a] & 0x3fc000U;
  *(u16 *)((int)param_1 + 0x6a) =
       uVar3 & *(u16 *)((int)param_1 + 0x6a) | *(u16 *)((int)param_2 + 0x6a) & 0x3fc0;
  uVar4 = *(u16 *)(param_2 + 0x1b);
  *(u8 *)((int)param_1 + 0x6b) =
       *(u8 *)((int)param_1 + 0x6b) & 0x3f | *(u8 *)((int)param_2 + 0x6b) & 0xc0;
  puVar8 = (u16 *)(param_1 + 0x1b);
  *(u8 *)puVar8 = (u8)*puVar8 & 0xc0 | (u8)uVar4 & 0x3f;
  *puVar8 = uVar3 & *puVar8 | *(u16 *)(param_2 + 0x1b) & 0x3fc0;
  param_1[0x1b] = param_1[0x1b] & 0xFFC03FFF | param_2[0x1b] & 0x3fc000U;
  *(u16 *)((int)param_1 + 0x6e) =
       uVar3 & *(u16 *)((int)param_1 + 0x6e) | *(u16 *)((int)param_2 + 0x6e) & 0x3fc0;
  uVar4 = *(u16 *)(param_2 + 0x1c);
  *(u8 *)((int)param_1 + 0x6f) =
       *(u8 *)((int)param_1 + 0x6f) & 0x3f | *(u8 *)((int)param_2 + 0x6f) & 0xc0;
  puVar8 = (u16 *)(param_1 + 0x1c);
  *(u8 *)puVar8 = (u8)*puVar8 & 0xc0 | (u8)uVar4 & 0x3f;
  *puVar8 = uVar3 & *puVar8 | *(u16 *)(param_2 + 0x1c) & 0x3fc0;
  param_1[0x1c] = param_1[0x1c] & 0xFFC03FFF | param_2[0x1c] & 0x3fc000U;
  *(u16 *)((int)param_1 + 0x72) =
       uVar3 & *(u16 *)((int)param_1 + 0x72) | *(u16 *)((int)param_2 + 0x72) & 0x3fc0;
  uVar3 = *(u16 *)(param_2 + 0x1d);
  *(u8 *)((int)param_1 + 0x73) =
       *(u8 *)((int)param_1 + 0x73) & 0x3f | *(u8 *)((int)param_2 + 0x73) & 0xc0;
  puVar8 = (u16 *)(param_1 + 0x1d);
  *(u8 *)puVar8 = (u8)*puVar8 & 0xc0 | (u8)uVar3 & 0x3f;
  *puVar8 = (u16)0xFFFFFE3F & *puVar8 | *(u16 *)(param_2 + 0x1d) & 0x1c0;
  bVar1 = *(u8 *)((int)param_2 + 0x75);
  *(u8 *)((int)param_1 + 0x75) =
       *(u8 *)((int)param_1 + 0x75) & 1 | bVar1 & 6 | bVar1 & 8 | bVar1 & 0x10 | bVar1 & 0x20 |
       bVar1 & 0x40 | bVar1 & 0x80;
  bVar1 = *(u8 *)((int)param_2 + 0x76);
  puVar8 = (u16 *)((int)param_1 + 0x76);
  *(u8 *)puVar8 =
       bVar1 & 1 | *(u8 *)puVar8 & 0x80 | bVar1 & 2 | bVar1 & 4 | bVar1 & 8 | bVar1 & 0x10 |
       bVar1 & 0x20 | bVar1 & 0x40;
  *puVar8 = (u16)0xFFFFF87F & *puVar8 | *(u16 *)((int)param_2 + 0x76) & 0x780;
  bVar1 = *(u8 *)(param_2 + 0x1e);
  *(u8 *)((int)param_1 + 0x77) =
       *(u8 *)((int)param_1 + 0x77) & 7 | *(u8 *)((int)param_2 + 0x77) & 0x78 |
       *(u8 *)((int)param_2 + 0x77) & 0x80;
  bVar2 = *(u8 *)(param_2 + 0x1e);
  *(u8 *)(param_1 + 0x1e) =
       bVar1 & 7 | bVar2 & 8 | bVar2 & 0x10 | bVar2 & 0x20 | bVar2 & 0x40 | bVar2 & 0x80;
  *(u8 *)((int)param_1 + 0x79) = *(u8 *)((int)param_2 + 0x79);
  puVar8 = (u16 *)((int)param_1 + 0x7a);
  *(u8 *)puVar8 = *(u8 *)((int)param_2 + 0x7a) & 1 | *(u8 *)puVar8 & 0xfe;
  *puVar8 = (u16)0xFFFFFE01 & *puVar8 | *(u16 *)((int)param_2 + 0x7a) & 0x1fe;
  bVar1 = *(u8 *)((int)param_2 + 0x7b);
  *(u8 *)((int)param_1 + 0x7b) =
       *(u8 *)((int)param_1 + 0x7b) & 1 | bVar1 & 2 | bVar1 & 4 | bVar1 & 8 | bVar1 & 0x10 |
       bVar1 & 0x20 | bVar1 & 0x40 | bVar1 & 0x80;
  *(char *)(param_1 + 0x1f) = (char)param_2[0x1f];
  *(u8 *)((int)param_1 + 0x7d) = *(u8 *)((int)param_2 + 0x7d);
  bVar1 = *(u8 *)((int)param_2 + 0x7e);
  puVar8 = (u16 *)((int)param_1 + 0x7e);
  *(u8 *)puVar8 =
       *(u8 *)puVar8 & 0x80 | bVar1 & 3 | bVar1 & 4 | bVar1 & 8 | bVar1 & 0x10 | bVar1 & 0x20 |
       bVar1 & 0x40;
  *puVar8 = (u16)0xFFFFFC7F & *puVar8 | *(u16 *)((int)param_2 + 0x7e) & 0x380;
  *(u8 *)((int)param_1 + 0x7f) =
       *(u8 *)((int)param_1 + 0x7f) & 3 | *(u8 *)((int)param_2 + 0x7f) & 0xfc;
  return (param_1);
}

/* 0x080D60B0 (1048B) | new_game_Sub_080D60B0 (orig: func_080D60B0) | origin: wip | domain: new_game | MEDIUM / graph_algebra */
u32 new_game_Sub_080D60B0(u32 *param_1,u32 *param_2) {
  u8 *pbVar1;
  u8 *pbVar2;
  u32 uVar3;
  u32 uVar4;
  u32 uVar5;
  u32 uVar6;
  *(u8 *)param_1 = (u8)*param_1 & 0xc0 | (u8)*param_2 & 0x3f;
  *(u16 *)param_1 = (u16)0xFFFFE03F & (u16)*param_1 | (u16)*param_2 & 0x1fc0;
  *param_1 = *param_1 & 0xFFE01FFF | *param_2 & 0x1fe000;
  *(u8 *)((int)param_1 + 2) =
       *(u8 *)((int)param_1 + 2) & 0xdf | *(u8 *)((int)param_2 + 2) & 0x20;
  *(u16 *)((int)param_1 + 2) =
       (u16)0xFFFFFE3F & *(u16 *)((int)param_1 + 2) | *(u16 *)((int)param_2 + 2) & 0x1c0
  ;
  *(u8 *)((int)param_1 + 3) =
       *(u8 *)((int)param_1 + 3) & 0xe1 | *(u8 *)((int)param_2 + 3) & 2 |
       *(u8 *)((int)param_2 + 3) & 0x1c;
  uVar3 = param_2[2];
  uVar5 = param_2[3];
  param_1[1] = param_2[1];
  param_1[2] = uVar3;
  param_1[3] = uVar5;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  LibC_strcpy(param_1 + 6,param_2 + 6);
  *(u8 *)(param_1 + 10) = (u8)param_2[10];
  *(u8 *)((int)param_1 + 0x29) = *(u8 *)((int)param_2 + 0x29);
  *(u8 *)((int)param_1 + 0x2a) =
       *(u8 *)((int)param_1 + 0x2a) & 0xfe | *(u8 *)((int)param_2 + 0x2a) & 1;
  param_1[0xb] = param_2[0xb];
  uVar3 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar3;
  uVar3 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar3;
  uVar3 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar3;
  uVar3 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar3;
  uVar3 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar3;
  uVar3 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar3;
  uVar3 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar3;
  uVar3 = param_2[0x1b];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar3;
  uVar3 = param_2[0x1d];
  uVar5 = param_2[0x1e];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar3;
  param_1[0x1e] = uVar5;
  uVar3 = param_2[0x20];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = uVar3;
  uVar3 = param_2[0x22];
  uVar5 = param_2[0x23];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = uVar3;
  param_1[0x23] = uVar5;
  uVar3 = param_2[0x25];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = uVar3;
  uVar3 = param_2[0x27];
  uVar5 = param_2[0x28];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = uVar3;
  param_1[0x28] = uVar5;
  uVar3 = param_2[0x2a];
  uVar5 = param_2[0x2b];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = uVar3;
  param_1[0x2b] = uVar5;
  uVar3 = param_2[0x2d];
  uVar5 = param_2[0x2e];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = uVar3;
  param_1[0x2e] = uVar5;
  uVar3 = param_2[0x30];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = uVar3;
  uVar3 = param_2[0x32];
  uVar5 = param_2[0x33];
  param_1[0x31] = param_2[0x31];
  param_1[0x32] = uVar3;
  param_1[0x33] = uVar5;
  uVar3 = param_2[0x35];
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = uVar3;
  uVar3 = param_2[0x37];
  uVar5 = param_2[0x38];
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = uVar3;
  param_1[0x38] = uVar5;
  uVar3 = param_2[0x3a];
  uVar5 = param_2[0x3b];
  param_1[0x39] = param_2[0x39];
  param_1[0x3a] = uVar3;
  param_1[0x3b] = uVar5;
  uVar3 = param_2[0x3d];
  uVar5 = param_2[0x3e];
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3d] = uVar3;
  param_1[0x3e] = uVar5;
  uVar3 = param_2[0x40];
  param_1[0x3f] = param_2[0x3f];
  param_1[0x40] = uVar3;
  uVar3 = param_2[0x42];
  uVar5 = param_2[0x43];
  param_1[0x41] = param_2[0x41];
  param_1[0x42] = uVar3;
  param_1[0x43] = uVar5;
  uVar3 = param_2[0x45];
  param_1[0x44] = param_2[0x44];
  param_1[0x45] = uVar3;
  uVar3 = param_2[0x47];
  uVar5 = param_2[0x48];
  param_1[0x46] = param_2[0x46];
  param_1[0x47] = uVar3;
  param_1[0x48] = uVar5;
  uVar3 = param_2[0x4a];
  param_1[0x49] = param_2[0x49];
  param_1[0x4a] = uVar3;
  uVar3 = param_2[0x4c];
  uVar5 = param_2[0x4d];
  param_1[0x4b] = param_2[0x4b];
  param_1[0x4c] = uVar3;
  param_1[0x4d] = uVar5;
  uVar3 = param_2[0x4f];
  param_1[0x4e] = param_2[0x4e];
  param_1[0x4f] = uVar3;
  uVar3 = param_2[0x51];
  uVar5 = param_2[0x52];
  param_1[0x50] = param_2[0x50];
  param_1[0x51] = uVar3;
  param_1[0x52] = uVar5;
  uVar3 = param_2[0x54];
  param_1[0x53] = param_2[0x53];
  param_1[0x54] = uVar3;
  uVar3 = param_2[0x56];
  uVar5 = param_2[0x57];
  param_1[0x55] = param_2[0x55];
  param_1[0x56] = uVar3;
  param_1[0x57] = uVar5;
  uVar3 = param_2[0x59];
  uVar5 = param_2[0x5a];
  param_1[0x58] = param_2[0x58];
  param_1[0x59] = uVar3;
  param_1[0x5a] = uVar5;
  uVar3 = param_2[0x5c];
  uVar5 = param_2[0x5d];
  param_1[0x5b] = param_2[0x5b];
  param_1[0x5c] = uVar3;
  param_1[0x5d] = uVar5;
  uVar3 = param_2[0x5f];
  param_1[0x5e] = param_2[0x5e];
  param_1[0x5f] = uVar3;
  uVar3 = param_2[0x61];
  uVar5 = param_2[0x62];
  param_1[0x60] = param_2[0x60];
  param_1[0x61] = uVar3;
  param_1[0x62] = uVar5;
  uVar3 = param_2[100];
  param_1[99] = param_2[99];
  param_1[100] = uVar3;
  uVar3 = param_2[0x66];
  uVar5 = param_2[0x67];
  param_1[0x65] = param_2[0x65];
  param_1[0x66] = uVar3;
  param_1[0x67] = uVar5;
  uVar3 = param_2[0x69];
  param_1[0x68] = param_2[0x68];
  param_1[0x69] = uVar3;
  uVar3 = param_2[0x6b];
  uVar5 = param_2[0x6c];
  param_1[0x6a] = param_2[0x6a];
  param_1[0x6b] = uVar3;
  param_1[0x6c] = uVar5;
  uVar3 = param_2[0x6e];
  param_1[0x6d] = param_2[0x6d];
  param_1[0x6e] = uVar3;
  uVar3 = param_2[0x70];
  uVar5 = param_2[0x71];
  param_1[0x6f] = param_2[0x6f];
  param_1[0x70] = uVar3;
  param_1[0x71] = uVar5;
  uVar3 = param_2[0x73];
  param_1[0x72] = param_2[0x72];
  param_1[0x73] = uVar3;
  uVar3 = param_2[0x75];
  uVar5 = param_2[0x76];
  param_1[0x74] = param_2[0x74];
  param_1[0x75] = uVar3;
  param_1[0x76] = uVar5;
  uVar3 = param_2[0x78];
  param_1[0x77] = param_2[0x77];
  param_1[0x78] = uVar3;
  uVar3 = param_2[0x7a];
  uVar5 = param_2[0x7b];
  param_1[0x79] = param_2[0x79];
  param_1[0x7a] = uVar3;
  param_1[0x7b] = uVar5;
  uVar3 = param_2[0x7d];
  uVar5 = param_2[0x7e];
  param_1[0x7c] = param_2[0x7c];
  param_1[0x7d] = uVar3;
  param_1[0x7e] = uVar5;
  uVar3 = param_2[0x80];
  uVar5 = param_2[0x81];
  param_1[0x7f] = param_2[0x7f];
  param_1[0x80] = uVar3;
  param_1[0x81] = uVar5;
  uVar3 = param_2[0x83];
  param_1[0x82] = param_2[0x82];
  param_1[0x83] = uVar3;
  uVar3 = param_2[0x85];
  uVar5 = param_2[0x86];
  param_1[0x84] = param_2[0x84];
  param_1[0x85] = uVar3;
  param_1[0x86] = uVar5;
  uVar3 = param_2[0x88];
  uVar5 = param_2[0x89];
  param_1[0x87] = param_2[0x87];
  param_1[0x88] = uVar3;
  param_1[0x89] = uVar5;
  uVar3 = param_2[0x8b];
  uVar5 = param_2[0x8c];
  param_1[0x8a] = param_2[0x8a];
  param_1[0x8b] = uVar3;
  param_1[0x8c] = uVar5;
  uVar3 = param_2[0x8e];
  param_1[0x8d] = param_2[0x8d];
  param_1[0x8e] = uVar3;
  uVar3 = param_2[0x90];
  uVar5 = param_2[0x91];
  param_1[0x8f] = param_2[0x8f];
  param_1[0x90] = uVar3;
  param_1[0x91] = uVar5;
  uVar3 = param_2[0x93];
  param_1[0x92] = param_2[0x92];
  param_1[0x93] = uVar3;
  uVar3 = param_2[0x95];
  uVar5 = param_2[0x96];
  param_1[0x94] = param_2[0x94];
  param_1[0x95] = uVar3;
  param_1[0x96] = uVar5;
  uVar3 = param_2[0x98];
  param_1[0x97] = param_2[0x97];
  param_1[0x98] = uVar3;
  uVar3 = param_2[0x9a];
  uVar5 = param_2[0x9b];
  param_1[0x99] = param_2[0x99];
  param_1[0x9a] = uVar3;
  param_1[0x9b] = uVar5;
  uVar3 = param_2[0x9d];
  uVar5 = param_2[0x9e];
  param_1[0x9c] = param_2[0x9c];
  param_1[0x9d] = uVar3;
  param_1[0x9e] = uVar5;
  uVar3 = param_2[0xa0];
  uVar5 = param_2[0xa1];
  param_1[0x9f] = param_2[0x9f];
  param_1[0xa0] = uVar3;
  param_1[0xa1] = uVar5;
  uVar3 = param_2[0xa3];
  param_1[0xa2] = param_2[0xa2];
  param_1[0xa3] = uVar3;
  uVar3 = param_2[0xa5];
  uVar5 = param_2[0xa6];
  param_1[0xa4] = param_2[0xa4];
  param_1[0xa5] = uVar3;
  param_1[0xa6] = uVar5;
  uVar3 = param_2[0xa8];
  uVar5 = param_2[0xa9];
  param_1[0xa7] = param_2[0xa7];
  param_1[0xa8] = uVar3;
  param_1[0xa9] = uVar5;
  uVar3 = param_2[0xab];
  uVar5 = param_2[0xac];
  param_1[0xaa] = param_2[0xaa];
  param_1[0xab] = uVar3;
  param_1[0xac] = uVar5;
  uVar3 = param_2[0xae];
  param_1[0xad] = param_2[0xad];
  param_1[0xae] = uVar3;
  uVar3 = param_2[0xb0];
  uVar5 = param_2[0xb1];
  param_1[0xaf] = param_2[0xaf];
  param_1[0xb0] = uVar3;
  param_1[0xb1] = uVar5;
  uVar3 = param_2[0xb3];
  param_1[0xb2] = param_2[0xb2];
  param_1[0xb3] = uVar3;
  uVar3 = param_2[0xb5];
  uVar5 = param_2[0xb6];
  param_1[0xb4] = param_2[0xb4];
  param_1[0xb5] = uVar3;
  param_1[0xb6] = uVar5;
  uVar3 = param_2[0xb8];
  param_1[0xb7] = param_2[0xb7];
  param_1[0xb8] = uVar3;
  uVar3 = param_2[0xba];
  uVar5 = param_2[0xbb];
  param_1[0xb9] = param_2[0xb9];
  param_1[0xba] = uVar3;
  param_1[0xbb] = uVar5;
  uVar3 = param_2[0xbd];
  uVar5 = param_2[0xbe];
  param_1[0xbc] = param_2[0xbc];
  param_1[0xbd] = uVar3;
  param_1[0xbe] = uVar5;
  uVar3 = param_2[0xc0];
  uVar5 = param_2[0xc1];
  param_1[0xbf] = param_2[0xbf];
  param_1[0xc0] = uVar3;
  param_1[0xc1] = uVar5;
  uVar3 = param_2[0xc3];
  param_1[0xc2] = param_2[0xc2];
  param_1[0xc3] = uVar3;
  uVar3 = param_2[0xc5];
  uVar5 = param_2[0xc6];
  param_1[0xc4] = param_2[0xc4];
  param_1[0xc5] = uVar3;
  param_1[0xc6] = uVar5;
  uVar3 = param_2[200];
  uVar5 = param_2[0xc9];
  param_1[199] = param_2[199];
  param_1[200] = uVar3;
  param_1[0xc9] = uVar5;
  uVar3 = param_2[0xcb];
  uVar5 = param_2[0xcc];
  param_1[0xca] = param_2[0xca];
  param_1[0xcb] = uVar3;
  param_1[0xcc] = uVar5;
  uVar3 = param_2[0xce];
  param_1[0xcd] = param_2[0xcd];
  param_1[0xce] = uVar3;
  uVar3 = param_2[0xd0];
  uVar5 = param_2[0xd1];
  param_1[0xcf] = param_2[0xcf];
  param_1[0xd0] = uVar3;
  param_1[0xd1] = uVar5;
  uVar3 = param_2[0xd3];
  uVar5 = param_2[0xd4];
  param_1[0xd2] = param_2[0xd2];
  param_1[0xd3] = uVar3;
  param_1[0xd4] = uVar5;
  uVar3 = param_2[0xd6];
  uVar5 = param_2[0xd7];
  param_1[0xd5] = param_2[0xd5];
  param_1[0xd6] = uVar3;
  param_1[0xd7] = uVar5;
  uVar3 = param_2[0xd9];
  uVar5 = param_2[0xda];
  param_1[0xd8] = param_2[0xd8];
  param_1[0xd9] = uVar3;
  param_1[0xda] = uVar5;
  uVar3 = param_2[0xdc];
  uVar5 = param_2[0xdd];
  param_1[0xdb] = param_2[0xdb];
  param_1[0xdc] = uVar3;
  param_1[0xdd] = uVar5;
  uVar3 = param_2[0xdf];
  uVar5 = param_2[0xe0];
  param_1[0xde] = param_2[0xde];
  param_1[0xdf] = uVar3;
  param_1[0xe0] = uVar5;
  uVar3 = param_2[0xe2];
  uVar5 = param_2[0xe3];
  param_1[0xe1] = param_2[0xe1];
  param_1[0xe2] = uVar3;
  param_1[0xe3] = uVar5;
  uVar3 = param_2[0xe5];
  uVar5 = param_2[0xe6];
  param_1[0xe4] = param_2[0xe4];
  param_1[0xe5] = uVar3;
  param_1[0xe6] = uVar5;
  uVar3 = param_2[0xe8];
  uVar5 = param_2[0xe9];
  param_1[0xe7] = param_2[0xe7];
  param_1[0xe8] = uVar3;
  param_1[0xe9] = uVar5;
  uVar3 = param_2[0xeb];
  uVar5 = param_2[0xec];
  param_1[0xea] = param_2[0xea];
  param_1[0xeb] = uVar3;
  param_1[0xec] = uVar5;
  uVar3 = param_2[0xee];
  uVar5 = param_2[0xef];
  param_1[0xed] = param_2[0xed];
  param_1[0xee] = uVar3;
  param_1[0xef] = uVar5;
  uVar3 = param_2[0xf1];
  uVar5 = param_2[0xf2];
  param_1[0xf0] = param_2[0xf0];
  param_1[0xf1] = uVar3;
  param_1[0xf2] = uVar5;
  uVar3 = param_2[0xf4];
  uVar5 = param_2[0xf5];
  param_1[0xf3] = param_2[0xf3];
  param_1[0xf4] = uVar3;
  param_1[0xf5] = uVar5;
  uVar3 = param_2[0xf7];
  uVar5 = param_2[0xf8];
  param_1[0xf6] = param_2[0xf6];
  param_1[0xf7] = uVar3;
  param_1[0xf8] = uVar5;
  uVar3 = param_2[0xfa];
  uVar5 = param_2[0xfb];
  param_1[0xf9] = param_2[0xf9];
  param_1[0xfa] = uVar3;
  param_1[0xfb] = uVar5;
  uVar3 = param_2[0xfd];
  uVar5 = param_2[0xfe];
  param_1[0xfc] = param_2[0xfc];
  param_1[0xfd] = uVar3;
  param_1[0xfe] = uVar5;
  uVar3 = param_2[0x100];
  uVar5 = param_2[0x101];
  param_1[0xff] = param_2[0xff];
  param_1[0x100] = uVar3;
  param_1[0x101] = uVar5;
  uVar3 = param_2[0x103];
  uVar5 = param_2[0x104];
  param_1[0x102] = param_2[0x102];
  param_1[0x103] = uVar3;
  param_1[0x104] = uVar5;
  pbVar1 = (u8 *)((int)param_1 + 0x00000414);
  pbVar2 = (u8 *)((int)param_2 + 0x00000414);
  uVar4 = *(u32 *)(pbVar2 + 4);
  uVar6 = *(u32 *)(pbVar2 + 8);
  *(u32 *)pbVar1 = *(u32 *)pbVar2;
  *(u32 *)(pbVar1 + 4) = uVar4;
  *(u32 *)(pbVar1 + 8) = uVar6;
  uVar4 = *(u32 *)(pbVar2 + 0x10);
  uVar6 = *(u32 *)(pbVar2 + 0x14);
  *(u32 *)(pbVar1 + 0xc) = *(u32 *)(pbVar2 + 0xc);
  *(u32 *)(pbVar1 + 0x10) = uVar4;
  *(u32 *)(pbVar1 + 0x14) = uVar6;
  uVar4 = *(u32 *)(pbVar2 + 0x1c);
  uVar6 = *(u32 *)(pbVar2 + 0x20);
  *(u32 *)(pbVar1 + 0x18) = *(u32 *)(pbVar2 + 0x18);
  *(u32 *)(pbVar1 + 0x1c) = uVar4;
  *(u32 *)(pbVar1 + 0x20) = uVar6;
  LibC_memcpy(param_1 + 0x10e,param_2 + 0x10e,0x38);
  param_1[0x11c] = param_2[0x11c];
  *(u8 *)((int)param_1 + 0x00000474) = *(u8 *)((int)param_2 + 0x00000474);
  return (param_1);
}

/* 0x080D64C8 (180B) | new_game_Sub_080D64C8 (orig: func_080D64C8) | origin: wip | domain: new_game | MEDIUM / graph_algebra */
u32 new_game_Sub_080D64C8(int param_1,int param_2) {
    u32 uVar2;
    int iVar3;
    u32 * puVar4;
    u32 * puVar5;
  register u8 bVar1;
  LibC_strcpy();
  *(u16 *)(param_1 + 0x10) =
       (u16)0xFFFFFC00 & *(s16 *)(param_1 + 0x10) | *(u8 *)(param_2 + 0x10) & 0x3ff;
  bVar1 = *(u8 *)(param_2 + 0x11);
  *(u8 *)(param_1 + 0x11) =
       *(u8 *)(param_1 + 0x11) & 0xe3 | bVar1 & 4 | bVar1 & 8 | bVar1 & 0x10;
  puVar5 = (u32 *)(param_1 + 0x14);
  iVar3 = 10;
  puVar4 = (u32 *)(param_2 + 0x14);
  do {
    uVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    *puVar5 = uVar2;
    puVar5 = puVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  LibC_memcpy(param_1 + 0x40,param_2 + 0x40,0x1a0);
  LibC_memcpy(param_1 + 0x1e0,param_2 + 0x1e0,0x21c);
  new_game_Sub_080D66A4(param_1 + 0x3fc,param_2 + 0x3fc);
  new_game_Sub_080D657C(param_1 + 0x000005DC,param_2 + 0x000005DC);
  LibC_memcpy(param_1 + 0x000009C8,param_2 + 0x000009C8,0x000010CC);
  return (param_1);
}

/* 0x080D657C (296B) | new_game_Sub_080D657C (orig: func_080D657C) | origin: wip | domain: new_game | MEDIUM / graph_algebra */
u32 new_game_Sub_080D657C(u32 *param_1,u32 *param_2) {
  u8 *pbVar1;
  u8 *pbVar2;
  int iVar3;
  u32 *puVar4;
  *(u8 *)param_1 = (u8)*param_1 & 0xfe | (u8)*param_2 & 1;
  *(u16 *)param_1 =
       (u16)0xFFFFF801 & (u16)*param_1 | (u16)0x000007FE & (u16)*param_2;
  *(u8 *)((int)param_1 + 1) =
       *(u8 *)((int)param_1 + 1) & 0xe7 | *(u8 *)((int)param_2 + 1) & 8 |
       *(u8 *)((int)param_2 + 1) & 0x10;
  *param_1 = *param_1 & 0xE0001FFF | *param_2 & 0x1FFFE000;
  *(u8 *)((int)param_1 + 3) =
       *(u8 *)((int)param_1 + 3) & 0x1f | *(u8 *)((int)param_2 + 3) & 0x60 |
       *(u8 *)((int)param_2 + 3) & 0x80;
  *(u8 *)(param_1 + 1) = (u8)param_1[1] & 0xf0 | (u8)param_2[1] & 0xf;
  *(u16 *)(param_1 + 1) =
       (u16)0xFFFFC00F & (u16)param_1[1] | (u16)0x00003FF0 & (u16)param_2[1];
  param_1[1] = param_1[1] & 0xFF003FFF | param_2[1] & 0x00FFC000;
  pbVar2 = (u8 *)((int)param_1 + 7);
  iVar3 = 1;
  pbVar1 = (u8 *)((int)param_2 + 7);
  do {
    *pbVar2 = *pbVar1;
    pbVar2 = pbVar2 + 1;
    pbVar1 = pbVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  LibC_strcpy(param_1 + 3,param_2 + 3);
  LibC_strcpy(param_1 + 7,param_2 + 7);
  puVar4 = param_1 + 0xb;
  iVar3 = 0xf;
  param_2 = param_2 + 0xb;
  do {
    LibC_memcpy(puVar4,param_2,0x3c);
    puVar4 = puVar4 + 0xf;
    param_2 = param_2 + 0xf;
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  return (param_1);
}

/* 0x080D66A4 (292B) | new_game_Sub_080D66A4 (orig: func_080D66A4) | origin: wip | domain: new_game | MEDIUM / graph_algebra */
u32 new_game_Sub_080D66A4(u32 *param_1,u32 *param_2) {
  u32 *puVar1;
  u32 *puVar2;
  u32 uVar3;
  u32 uVar4;
  int iVar5;
  *(u8 *)param_1 = (u8)*param_1 & 0xfe | (u8)*param_2 & 1;
  *(u16 *)param_1 =
       (u16)0xFFFFF801 & (u16)*param_1 | (u16)0x000007FE & (u16)*param_2;
  *(u8 *)((int)param_1 + 1) = *(u8 *)((int)param_1 + 1) & 0xf7 | *(u8 *)((int)param_2 + 1) & 8
  ;
  *param_1 = *param_1 & 0xFFF00FFF | *param_2 & 0xff000;
  *(u8 *)((int)param_1 + 2) =
       *(u8 *)((int)param_1 + 2) & 0xf | *(u8 *)((int)param_2 + 2) & 0x10 |
       *(u8 *)((int)param_2 + 2) & 0xe0;
  uVar3 = param_2[1];
  *(u8 *)((int)param_1 + 3) = *(u8 *)((int)param_2 + 3);
  *(u8 *)(param_1 + 1) = (u8)param_1[1] & 0xfc | (u8)uVar3 & 3;
  LibC_strcpy(param_1 + 2,param_2 + 2);
  puVar2 = param_1 + 6;
  iVar5 = 7;
  puVar1 = param_2 + 6;
  do {
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    uVar3 = puVar1[4];
    uVar4 = puVar1[5];
    puVar2[3] = puVar1[3];
    puVar2[4] = uVar3;
    puVar2[5] = uVar4;
    uVar3 = puVar1[7];
    uVar4 = puVar1[8];
    puVar2[6] = puVar1[6];
    puVar2[7] = uVar3;
    puVar2[8] = uVar4;
    uVar3 = puVar1[10];
    uVar4 = puVar1[0xb];
    puVar2[9] = puVar1[9];
    puVar2[10] = uVar3;
    puVar2[0xb] = uVar4;
    puVar2 = puVar2 + 0xc;
    puVar1 = puVar1 + 0xc;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  puVar1 = param_1 + 0x66;
  iVar5 = 7;
  puVar2 = param_2 + 0x66;
  do {
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  puVar2 = param_1 + 0x76;
  iVar5 = 1;
  param_2 = param_2 + 0x76;
  do {
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    *puVar2 = uVar3;
    puVar2 = puVar2 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  return (param_1);
}

/* 0x080D68C0 (448B) | new_game_Sub_080D68C0 (orig: func_080D68C0) | origin: wip | domain: new_game | MEDIUM / graph_algebra */
u32 new_game_Sub_080D68C0(int param_1,int param_2) {
  u8 bVar1;
  u16 uVar2;
  u16 uVar3;
  u32 uVar4;
  int iVar5;
  u32 *puVar6;
  u32 uVar7;
  u32 *puVar8;
  u32 uVar9;
  u16 *puVar10;
  LibC_strcpy();
  LibC_strcpy(param_1 + 0x10,param_2 + 0x10);
  *(u8 *)(param_1 + 0x20) = *(u8 *)(param_2 + 0x20);
  uVar7 = *(u32 *)(param_2 + 0x28);
  *(u32 *)(param_1 + 0x24) = *(u32 *)(param_2 + 0x24);
  *(u32 *)(param_1 + 0x28) = uVar7;
  puVar8 = (u32 *)(param_1 + 0x2c);
  iVar5 = 5;
  puVar6 = (u32 *)(param_2 + 0x2c);
  do {
    uVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    *puVar8 = uVar7;
    puVar8 = puVar8 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  bVar1 = *(u8 *)(param_2 + 0x44);
  puVar10 = (u16 *)(param_1 + 0x44);
  *(u8 *)puVar10 =
       *(u8 *)puVar10 & 0x80 | bVar1 & 0xf | bVar1 & 0x10 | bVar1 & 0x20 | bVar1 & 0x40;
  uVar2 = (u16)0xFFFF807F;
  *puVar10 = uVar2 & *puVar10 | *(u16 *)(param_2 + 0x44) & 0x7f80;
  *(u32 *)(param_1 + 0x44) =
       *(u32 *)(param_1 + 0x44) & 0xFF807FFF | *(u32 *)(param_2 + 0x44) & 0x7f8000;
  *(u16 *)(param_1 + 0x46) =
       uVar2 & *(u16 *)(param_1 + 0x46) | *(u16 *)(param_2 + 0x46) & 0x7f80;
  uVar4 = 0x1FFFFFFF;
  uVar9 = *(u32 *)(param_2 + 0x48);
  *(u8 *)(param_1 + 0x47) = *(u8 *)(param_1 + 0x47) & 0x7f | *(u8 *)(param_2 + 0x47) & 0x80;
  *(u32 *)(param_1 + 0x48) = *(u32 *)(param_1 + 0x48) & 0xe0000000 | uVar9 & uVar4;
  *(u8 *)(param_1 + 0x4b) = *(u8 *)(param_1 + 0x4b) & 0x1f | *(u8 *)(param_2 + 0x4b) & 0xe0;
  puVar10 = (u16 *)(param_1 + 0x4c);
  *(u8 *)puVar10 = *(u8 *)puVar10 & 0x80 | *(u8 *)(param_2 + 0x4c) & 0x7f;
  *puVar10 = uVar2 & *puVar10 | *(u16 *)(param_2 + 0x4c) & 0x7f80;
  uVar2 = *(u16 *)(param_2 + 0x50);
  uVar3 = (u16)0x00001FFF;
  *(u32 *)(param_1 + 0x4c) =
       *(u32 *)(param_1 + 0x4c) & 0x00007FFF | *(u32 *)(param_2 + 0x4c) & 0xffff8000;
  *(u16 *)(param_1 + 0x50) =
       (u16)0xFFFFE000 & *(u16 *)(param_1 + 0x50) | uVar2 & uVar3 & uVar3;
  *(u8 *)(param_1 + 0x51) = *(u8 *)(param_1 + 0x51) & 0x1f | *(u8 *)(param_2 + 0x51) & 0xe0;
  uVar7 = *(u32 *)(param_2 + 0x58);
  *(u32 *)(param_1 + 0x54) = *(u32 *)(param_2 + 0x54);
  *(u32 *)(param_1 + 0x58) = uVar7;
  LibC_memcpy(param_1 + 0x5c,param_2 + 0x5c,2);
  new_game_Sub_080D6A80(param_1 + 0x60,param_2 + 0x60);
  return (param_1);
}

/* 0x080D6A80 (128B) | new_game_Sub_080D6A80 (orig: func_080D6A80) | origin: wip | domain: new_game | MEDIUM / graph_algebra */
u32 new_game_Sub_080D6A80(int *param_1,int *param_2) {
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  *param_1 = 0;
  iVar2 = *param_2;
  piVar3 = param_2 + 1;
  piVar1 = piVar3 + iVar2;
  piVar4 = param_1;
  for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
    piVar4 = piVar4 + 1;
    if (piVar4 != (int *)0x0) {
      *piVar4 = *piVar3;
    }
  }
  *param_1 = iVar2;
  param_1[9] = 0;
  iVar2 = param_2[9];
  param_2 = param_2 + 10;
  piVar4 = (int *)(iVar2 * 2 + (int)param_2);
  piVar3 = param_1 + 10;
  for (; param_2 != piVar4; param_2 = (int *)((int)param_2 + 2)) {
    if (piVar3 != (int *)0x0) {
      LibC_memcpy(piVar3,param_2,2);
    }
    piVar3 = (int *)((int)piVar3 + 2);
  }
  param_1[9] = iVar2;
  return param_1;
}

/* 0x080D6B00 (64B) | new_game_Sub_080D6B00 (orig: func_080D6B00) | origin: pure | domain: new_game | MEDIUM / tu_interp */
struct Elem4 { u32 x; ~Elem4() {} };
template <typename T, u32 Capacity>
struct FV_Dtor {
    u32 m_size;
    u32 m_data[(sizeof(T) * Capacity + 3) / 4];
    T *begin() { return reinterpret_cast<T *>(m_data); }
    T *end() { return reinterpret_cast<T *>(m_data) + m_size; }
    ~FV_Dtor() {
        T *e = end();
        for (T *it = begin(); it != e; ++it) { it->~T(); }
    }
};
struct FV_U16_Dtor {
    u32 m_size;
    u32 m_data[4];
    u16 *begin() { return reinterpret_cast<u16 *>(m_data); }
    u16 *end() { return reinterpret_cast<u16 *>(m_data) + m_size; }
    ~FV_U16_Dtor() {
        u16 *e = end();
        for (u16 *it = begin(); it != e; ++it) {}
    }
};
struct C_080D6B00 {
    FV_Dtor<Elem4, 8> v1;
    FV_U16_Dtor v2;
    ~C_080D6B00();
};
C_080D6B00::~C_080D6B00() {}
extern "C" void new_game_Sub_080D6B00() __attribute__((alias("_._10C_080D6B00")));

/* 0x080D6B40 (200B) | new_game_Sub_080D6B40 (orig: func_080D6B40) | origin: wip | domain: new_game | MEDIUM / graph_algebra */
u32 new_game_Sub_080D6B40(u32 *param_1,u32 *param_2) {
  u32 *puVar1;
  u32 uVar2;
  u32 *puVar3;
  u32 *puVar4;
  int iVar5;
  *param_1 = *param_2;
  *(u8 *)(param_1 + 1) =
       *(u8 *)(param_1 + 1) & 0xfc | *(u8 *)(param_2 + 1) & 1 | *(u8 *)(param_2 + 1) & 2;
  param_1[2] = 0;
  iVar5 = param_2[2];
  puVar1 = param_2 + 3;
  puVar4 = puVar1 + iVar5 * 2;
  puVar3 = param_1 + 3;
  for (; puVar1 != puVar4; puVar1 = puVar1 + 2) {
    if (puVar3 != (u32 *)0x0) {
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
    }
    puVar3 = puVar3 + 2;
  }
  param_1[2] = iVar5;
  param_1[0x3f] = 0;
  iVar5 = param_2[0x3f];
  puVar1 = param_2 + 0x40;
  puVar4 = puVar1 + iVar5 * 2;
  puVar3 = param_1 + 0x40;
  for (; puVar1 != puVar4; puVar1 = puVar1 + 2) {
    if (puVar3 != (u32 *)0x0) {
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
    }
    puVar3 = puVar3 + 2;
  }
  param_1[0x3f] = iVar5;
  uVar2 = param_2[0x49];
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = uVar2;
  uVar2 = param_2[0x4b];
  param_1[0x4a] = param_2[0x4a];
  param_1[0x4b] = uVar2;
  return param_1;
}

/* 0x080D6C08 (80B) | new_game_Sub_080D6C08 (orig: func_080D6C08) | origin: pure | domain: new_game | MEDIUM / graph_algebra */
struct P8 { u32 a, b; ~P8() {} };
template <typename T, u32 Capacity>
struct FV_Dtor {
    u32 m_size;
    u32 m_data[(sizeof(T) * Capacity + 3) / 4];
    T *begin() { return reinterpret_cast<T *>(m_data); }
    T *end() { return reinterpret_cast<T *>(m_data) + m_size; }
    ~FV_Dtor() {
        T *e = end();
        for (T *it = begin(); it != e; ++it) { it->~T(); }
    }
};
struct C_080D6C08 {
    u32 f0, f4;
    FV_Dtor<P8, 30> v1;
    FV_Dtor<P8, 5> v2;
    ~C_080D6C08();
};
C_080D6C08::~C_080D6C08() {}
extern "C" void new_game_Sub_080D6C08() __attribute__((alias("_._10C_080D6C08")));

