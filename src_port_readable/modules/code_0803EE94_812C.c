/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_0803EE94_812C (15 functions) */
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

/* 0x08093DCC (32B) | code_0803EE94_812C_Dtor (orig: func_08093DCC) | origin: pure | domain: code_0803EE94_812C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
void code_0803EE94_812C_Dtor(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E812C;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x08093DEC (52B) | code_0803EE94_812C_vfunc_08 (orig: func_08093DEC) | origin: pure | domain: code_0803EE94_812C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3918();
void code_0803EE94_812C_vfunc_08(int *arg0,u32 arg1,u32 arg2,int arg3,int arg4,int arg5
             ,int arg6,int arg7) {
  func_080D3918(arg0,arg1,arg2,*(u32 *)(*arg0 + 0x20));
  arg0[5] = arg3;
  arg0[6] = arg4;
  arg0[7] = arg5;
  arg0[8] = arg6;
  arg0[9] = arg7;
  arg0[2] = 0x081007AC;
  *(u8 *)((int)arg0 + 0xd) = 0;
}

/* 0x08093E20 (204B) | code_0803EE94_812C_vfunc_0C (orig: func_08093E20) | origin: wip | domain: code_0803EE94_812C | HIGH / vtable_algebra */
void code_0803EE94_812C_vfunc_0C(int *self) {
  int iVar1;
  u32 uVar2;
  u32 uVar3;
  func_080D3910(self,*(u32 *)(*self + 0x24));
  iVar1 = self[2];
  if (iVar1 != 0) {
    self[1] = iVar1;
    self[2] = 0;
    if (*(short *)(iVar1 + 0x12) < 1) {
      uVar2 = *(u32 *)(iVar1 + 0x14);
    }
    else {
      uVar2 = *(u32 *)
               (*(short *)(iVar1 + 0x12) * 4 +
                *(int *)((int)self + (int)*(short *)(iVar1 + 0x14)) + -4);
    }
    func_080D3910((int)self + (int)*(short *)(self[1] + 0x10),uVar2);
    iVar1 = self[1];
    if (*(short *)(iVar1 + 2) < 1) {
      uVar2 = *(u32 *)(iVar1 + 4);
    }
    else {
      uVar2 = *(u32 *)
               (*(short *)(iVar1 + 2) * 4 + *(int *)((int)self + (int)*(short *)(iVar1 + 4)) + -4
               );
    }
    func_080D3910((int)self + (int)*(short *)self[1],uVar2);
  }
  iVar1 = self[1];
  if (*(short *)(iVar1 + 0x1a) < 1) {
    uVar2 = *(u32 *)(iVar1 + 0x1c);
  }
  else {
    uVar2 = *(u32 *)
             (*(short *)(iVar1 + 0x1a) * 4 + *(int *)((int)self + (int)*(short *)(iVar1 + 0x1c))
             + -4);
  }
  uVar2 = func_080D3910((int)self + (int)*(short *)(self[1] + 0x18),uVar2);
  iVar1 = self[1];
  if (*(short *)(iVar1 + 10) < 1) {
    uVar3 = *(u32 *)(iVar1 + 0xc);
  }
  else {
    uVar3 = *(u32 *)
             (*(short *)(iVar1 + 10) * 4 + *(int *)((int)self + (int)*(u8 *)(iVar1 + 0xc)) +
             -4);
  }
  func_080D3914((int)self + (int)*(short *)(self[1] + 8),uVar2,uVar3);
}

/* 0x08093EEC (52B) | code_0803EE94_812C_vfunc_10 (orig: func_08093EEC) | origin: wip | domain: code_0803EE94_812C | HIGH / vtable_algebra */
void code_0803EE94_812C_vfunc_10(int self) {
  int iVar1;
  s8 uVar2;
  register u32 r_zero = r_zero;
  iVar1 = *(int *)(self + 4);
  if (*(s8 *)(iVar1 + 0x22) < 1) {
    uVar2 = *(u32 *)(iVar1 + 0x24);
  }
  else {
    uVar2 = *(u32 *)
  func_080D3910(self + *(s8 *)(*(u8 *)(self + 4) + 0x20),uVar2);
  }
             (*(short *)(iVar1 + 0x22) * 4 + *(int *)(self + *(short *)(iVar1 + 0x24)) + -4);
}

/* 0x08093F20 (4B) | code_0803EE94_812C_vfunc_14 (orig: func_08093F20) | origin: pure | domain: code_0803EE94_812C | HIGH / vtable_algebra */
u8 code_0803EE94_812C_vfunc_14(u8 *arg0) {
    return *(u8 *)(arg0 + 13);
}

/* 0x08093F24 (4B) | code_0803EE94_812C_vfunc_18 (orig: func_08093F24) | origin: pure | domain: code_0803EE94_812C | HIGH / vtable_algebra */
u32 code_0803EE94_812C_vfunc_18(u8 *arg0) {
    return *(u32 *)(arg0 + 16);
}

/* 0x08093F28 (32B) | code_0803EE94_812C_vfunc_64 (orig: func_08093F28) | origin: pure | domain: code_0803EE94_812C | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_080D3910();
void code_0803EE94_812C_vfunc_64(int *arg0) {
  func_080D3910(arg0,*(u32 *)(*arg0 + 0x28));
  func_080D3910(arg0,*(u32 *)(*arg0 + 0x30));
}

/* 0x08093F48 (104B) | code_0803EE94_812C_vfunc_68 (orig: func_08093F48) | origin: wip | domain: code_0803EE94_812C | HIGH / vtable_algebra */
void code_0803EE94_812C_vfunc_68(int *self,int param_2) {
  BOOL iVar2;
  s8 cVar1;
  if (1 == param_2) {
    func_080D3910(self,*(u32 *)(*self + 0x3c));
  }
  cVar1 = func_080D3910(self,*(u32 *)(*self + 0x40));
  if (cVar1 != '\0') {
    cVar1 = func_080D3910(self,*(s16 *)(*self + 0x48));
    iVar2 = (u8)0x081008C4;
    if ((cVar1 == '\0') &&
       (cVar1 = func_080D3910(self,*(s16 *)(*self + 0x44)), iVar2 = 0x081007D4,
       cVar1 != '\0')) {
      iVar2 = (s8)0x0810089C;
      *(self + 4) = 1;
    }
    self[2] = (u16)iVar2;
  }
}

/* 0x08093FB0 (20B) | code_0803EE94_812C_vfunc_78 (orig: func_08093FB0) | origin: pure | domain: code_0803EE94_812C | HIGH / vtable_algebra */
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
extern u32 func_080D3918();
void code_0803EE94_812C_vfunc_78(int *arg0) {
  int v = *arg0;
  func_080D3918(arg0, *(u32 *)arg0[5], 0, *(u32 *)(v + 0x38));
}

/* 0x08093FC4 (60B) | code_0803EE94_812C_vfunc_7C (orig: func_08093FC4) | origin: wip | domain: code_0803EE94_812C | HIGH / vtable_algebra */
void code_0803EE94_812C_vfunc_7C(int *self) {
    int iVar2;
  register char cVar1;
  cVar1 = func_080D3910(self,*(u32 *)(*self + 0x40));
  if (cVar1 != '\0') {
    cVar1 = func_080D3910(self,*(s8 *)(*self + 0x48));
    iVar2 = 0x081007FC;
    if (cVar1 != '\0') {
    self[2] = (s8)iVar2;
    }
      iVar2 = 0x081008C4;
  }
}

/* 0x08094000 (72B) | code_0803EE94_812C_vfunc_8C (orig: func_08094000) | origin: pure | domain: code_0803EE94_812C | HIGH / vtable_algebra */
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
extern u32 func_080D3910();
extern u32 func_080D3918();
void code_0803EE94_812C_vfunc_8C(int *arg0) {
  char val;
  u32 val2;
  val2 = func_080D3910(arg0,*(u32 *)(*arg0 + 0x4c));
  *(u32 *)(arg0[5] + 8) = val2;
  val = func_080D3910(arg0,*(u32 *)(*arg0 + 0x50));
  if (!(val == '\0')) {
    func_080D3918(arg0,0,0,*(u32 *)(*arg0 + 0x38));
  } else {
    func_080D3918(arg0,1,0,*(u32 *)(*arg0 + 0x38));
  }
}

/* 0x08094048 (116B) | code_0803EE94_812C_vfunc_90 (orig: func_08094048) | origin: wip | domain: code_0803EE94_812C | HIGH / vtable_algebra */
void code_0803EE94_812C_vfunc_90(int *self) {
  u32 iVar2;
  register s8 cVar1;
  cVar1 = func_080D3910(self,*(u32 *)(*self + 0x40));
  if (cVar1 != (u16)'\0') {
    cVar1 = func_080D3910(self,*(s8 *)(*self + 0x48));
    iVar2 = (s16)0x081008C4;
    if (cVar1 == '\0') {
      cVar1 = func_080D3910(self,*(u32 *)(*self + 0x54));
      if (cVar1 == '\0') {
        self[4] = 3;
        iVar2 = (u8)0x0810089C;
      }
      else {
        cVar1 = func_080D3910(self,*(u8 *)(*self + 0x58));
        iVar2 = (s8)0x08100824;
        if (cVar1 == '\0') {
          *(u8 *)(3 + self) = 1;
          iVar2 = 0x0810084C;
        }
      }
    }
    self[2] = (s8)iVar2;
  }
}

/* 0x080940C0 (36B) | code_0803EE94_812C_vfunc_A4 (orig: func_080940C0) | origin: pure | domain: code_0803EE94_812C | HIGH / vtable_algebra */
struct S { u32 f0, f4, f8; u8 fc; };
extern "C" void code_0803EE94_812C_vfunc_A4(S *s, int x) {
    switch (x) {
    case 2:
        s->fc = 1;
        break;
    case 3:
        s->fc = 0;
        break;
    default:
        return;
    }
    s->f8 = 0x0810084C;
}

/* 0x080940E4 (44B) | code_0803EE94_812C_vfunc_B4 (orig: func_080940E4) | origin: pure | domain: code_0803EE94_812C | HIGH / vtable_algebra */
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
extern u32 func_080D3918();
void code_0803EE94_812C_vfunc_B4(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    register u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r1 = r0 + 0;
    r0 = *(u8 *)(r1 + 0xc);
    if (r0 == 0) goto loc_0809459E;
    r0 = *(u32 *)(r1);
    r3 = *(u32 *)(r0 + 0x38);
    r0 = r1 + 0;
    r1 = 0;
    r2 = 1;
    r0 = func_080D3918(r0, r1, r2, r3);
    goto loc_080945AC;
loc_0809459E:
    r0 = *(u32 *)(r1);
    r3 = *(u32 *)(r0 + 0x38);
    r0 = r1 + 0;
    r1 = 1;
    r2 = 1;
    r0 = func_080D3918(r0, r1, r2, r3);
loc_080945AC:
    return r0;
}

/* 0x08094110 (152B) | code_0803EE94_812C_vfunc_B8 (orig: func_08094110) | origin: wip | domain: code_0803EE94_812C | HIGH / vtable_algebra */
void code_0803EE94_812C_vfunc_B8(int *self,int param_2) {
  char cVar1;
  s32 iVar2;
  if (param_2 == 1) {
    func_080D3910(self,*(u32 *)(*self + 0x3c));
  }
  cVar1 = func_080D3910(self,*(u32 *)(*self + 0x40));
  if (cVar1 != '\0') {
    cVar1 = func_080D3910(self,*(u32 *)(*self + 0x48));
    iVar2 = 0x081008C4;
    if (cVar1 == '\0') {
      cVar1 = func_080D3910(self,*(u32 *)(*self + 0x44));
      if (cVar1 == '\0') {
        if ((char)self[3] == '\0') {
          self[4] = 1;
          iVar2 = 0x0810089C;
        }
        else {
          cVar1 = func_080D3910(self,*(u32 *)(*self + 0x5c));
          iVar2 = 0x08100874;
          if (cVar1 == '\0') {
            self[4] = 2;
            iVar2 = 0x0810089C;
          }
        }
      }
      else {
        self[4] = 1;
        iVar2 = (s16)0x0810089C;
      }
    }
    self[2] = iVar2;
  }
}

