/* FIO-DECOMP-HMFOMT :: Port Readable Module: AEntity_68C8 (17 functions) */
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

/* 0x08033784 (124B) | AEntity_68C8_Sub_08033784 (orig: func_08033784) | origin: wip | domain: AEntity_68C8 | MEDIUM / graph_algebra */
void * AEntity_68C8_Sub_08033784(u8 *param_1,u32 param_2,int *param_3) {
  u32 uVar1;
  int iVar2;

  if (8 < (*param_1 & 0xf)) goto case_080337F2;
  switch(*(u32 *)(((const u32 *)0x080337a0) + (*param_1 & 0xf) * 4) & 0xfffffffe) {
  case 0x80337a4:
  case 0x80337c8:
    uVar1 = 2;
    goto LAB_080337fa;
  case 0x80337cc:
    uVar1 = 0x11;
    goto LAB_080337fa;
  case 0x80337d0:
    uVar1 = 0x25;
    goto LAB_080337fa;
  case 0x80337d4:
    iVar2 = param_1[1] + 0x36;
    break;
  case 0x80337da:
    iVar2 = param_1[1] + 0x2e;
    break;
  case 0x80337e0:
    iVar2 = param_1[1] + 0x4c;
    break;
  case 0x80337f2:
    goto case_080337F2;
  }
  iVar2 = func_080D3914(param_3,iVar2,*(u32 *)(*param_3 + 0x44));
  if (iVar2 == 0) {
case_080337F2:
    uVar1 = 0x234;
  }
  else {
    uVar1 = (u32)*(u16 *)(iVar2 + 4);
  }
LAB_080337fa:
  return (void *)uVar1;
}

/* 0x08033800 (48B) | AEntity_68C8_Sub_08033800 (orig: func_08033800) | origin: wip | domain: AEntity_68C8 | MEDIUM / tu_interp */
u32 AEntity_68C8_Sub_08033800(int param_1, u16 param_2, s8 param_3) {
  u8 val;
  val = func_080D3914(param_2, param_3, *(short *)(*(u32 *)(param_2) + 0x44));
  return val;
}

/* 0x08033830 (192B) | AEntity_68C8_Sub_08033830 (orig: func_08033830) | origin: wip | domain: AEntity_68C8 | MEDIUM / graph_algebra */
u32 AEntity_68C8_Sub_08033830(short *param_1,u8 *param_2,int param_3,u32 param_4) {
  u8 bVar1;
  int iVar2;
  if (8 < (*param_2 & 0xf)) goto case_08033874;
  switch(*(u32 *)(0x08033850 + (*param_2 & 0xf) * 4) & 0xfffffffe) {
  case 0x8033850:
  case 0x8033874:
case_08033874:
    *param_1 = 0;
    param_1[1] = 0;
    break;
  case 0x803387c:
    bVar1 = param_2[2];
    *param_1 = (u16)param_2[1] * 0x10 + 0x118;
    param_1[1] = (u16)bVar1 * 0x10 + 0xb8;
    break;
  case 0x8033892:
    Coop_Wrap_GetCapacity(param_1,param_3 + 0x3fc,param_2[1]);
    break;
  case 0x80338a2:
    Barn_Sub_0800D074(param_1,param_3 + 0x000005DC,param_2[1]);
    break;
  case 0x80338b4:
    func_0800D0C0(param_1,param_3 + 0x000005DC,param_2[1]);
    break;
  case 0x80338c8:
    iVar2 = param_2[1] + 0x36;
    goto LAB_080338d2;
  case 0x80338ce:
    iVar2 = param_2[1] + 0x2e;
LAB_080338d2:
    AEntity_68C8_Sub_08033800(param_1,param_4,iVar2);
    break;
  case 0x80338dc:
    AEntity_68C8_Sub_08033800(param_1,param_4,param_2[1] + 0x4c);
  }
  return (param_1);
}

/* 0x080338F0 (36B) | AEntity_68C8_Sub_080338F0 (orig: func_080338F0) | origin: pure | domain: AEntity_68C8 | MEDIUM / tu_interp */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 code_809E804_Sub_080AB788();
u32 AEntity_68C8_Sub_080338F0(int arg0) {
  u32 val;
  val = code_809E804_Sub_080AB788(0x200);
  return ((u32)(val < arg0 + 0x100U));
}

/* 0x08033914 (20B) | AEntity_68C8_Sub_08033914 (orig: func_08033914) | origin: pure | domain: AEntity_68C8 | MEDIUM / graph_algebra */
extern "C" u32 AEntity_68C8_Sub_08033914(u32 a) {
    u32 c = 0xc0 << 9;
    return (((a + 1) * c) >> 8) + (0x80 << 8);
}

/* 0x08033A2C (84B) | AEntity_68C8_Dtor (orig: func_08033A2C) | origin: pure | domain: AEntity_68C8 | HIGH / vtable_algebra */
struct Loc { u32 a, b; };
extern "C" Loc AActorEntity_GetLocation(void const *);
extern "C" void func_0809E368(void *, Loc const &);
struct V4 { u32 f0; virtual ~V4(); };
struct C_080E6250 {
    u8 pad[0x10];
    V4 *unk_10;
    virtual ~C_080E6250() { delete unk_10; }
};
struct C_080E68C8 : public C_080E6250 {
    u8 pad2[0x1C];
    void *actor_34;
    virtual ~C_080E68C8();
};
C_080E68C8::~C_080E68C8() {
    func_0809E368(actor_34, AActorEntity_GetLocation(this));
}
extern "C" void AEntity_68C8_Dtor() __attribute__((alias("_._10C_080E68C8")));

/* 0x08033A80 (100B) | AEntity_68C8_vfunc_30 (orig: func_08033A80) | origin: wip | domain: AEntity_68C8 | HIGH / vtable_algebra */
u32 AEntity_68C8_vfunc_30(s16 self) {
  s16 val;
  val = CppRuntime_builtin_new(0xd4);
  val = code_entities_080320DC_6904_Ctor(val, self);
  return *(u8 *)((self + 0x40));
}

/* 0x08033AE4 (24B) | AEntity_68C8_vfunc_24 (orig: func_08033AE4) | origin: pure | domain: AEntity_68C8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AEntity_68C8_SetField_0x00();
void AEntity_68C8_vfunc_24(int arg0) {
  *(u8 *)(arg0 + 6) = 0;
  *(u8 *)(arg0 + 0x42) = 1;
  AEntity_68C8_SetField_0x00(arg0);
}

/* 0x08033B10 (20B) | AEntity_68C8_vfunc_14 (orig: func_08033B10) | origin: pure | domain: AEntity_68C8 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 AEntity_vfunc_14();
extern u32 func_0809E3DC();
void AEntity_68C8_vfunc_14(int arg0) {
  AEntity_vfunc_14();
  func_0809E3DC(*(u32 *)(arg0 + 0x34));
}

/* 0x08033B7C (8B) | AEntity_68C8_SetField_0x00 (orig: func_08033B7C) | origin: pure | domain: AEntity_68C8 | MEDIUM / graph_algebra */
void AEntity_68C8_SetField_0x00(u8 *arg0) {
    *(u8 *)(arg0 + 65) = 0;
}

/* 0x08034180 (200B) | AEntity_68C8_Sub_08034180 (orig: func_08034180) | origin: wip | domain: AEntity_68C8 | MEDIUM / graph_algebra */
void AEntity_68C8_Sub_08034180(int param_1,u32 param_2,u32 param_3,int param_4) {
  u32 uVar1;
  int iVar2;
  uVar1 = AEntity_68C8_Sub_08034248();
  if (*(u16 *)(param_1 + 0x22) != uVar1) {
    AActorEntity_SetAnim(param_1);
  }
  if (*(u8 *)(param_1 + 0x20) != param_3) {
    AActorEntity_SetAnimFacing(param_1,param_3);
  }
  *(u8 *)(param_1 + 0x42) = 0;
  if (param_2 == 1) {
    if (param_4 < 0) {
      param_4 = -param_4;
    }
    if (param_3 == 1) {
      *(int *)(param_1 + 0x1c) = -param_4;
      *(u32 *)(param_1 + 0x18) = 0;
    }
    else if ((int)param_3 < 2) {
      if (param_3 == 0) {
        *(int *)(param_1 + 0x1c) = param_4;
        *(u32 *)(param_1 + 0x18) = 0;
      }
    }
    else {
      if (param_3 == 2) {
        *(int *)(param_1 + 0x18) = -param_4;
      }
      else {
        if (param_3 != 3) goto LAB_0803420a;
        *(int *)(param_1 + 0x18) = param_4;
      }
      *(u32 *)(param_1 + 0x1c) = 0;
    }
  }
  else if ((int)param_2 < 2) {
    if (param_2 == 0) {
LAB_080341c8:
      *(u32 *)(param_1 + 0x18) = 0;
      *(u32 *)(param_1 + 0x1c) = 0;
    }
  }
  else if ((int)param_2 < 5) goto LAB_080341c8;
LAB_0803420a:
  if (param_2 != *(u8 *)(param_1 + 0x40)) {
    iVar2 = -1;
    if (param_2 == 2) {
      iVar2 = 8;
    }
    else {
      if (param_2 == 3) {
        iVar2 = 5;
      }
      if (iVar2 < 0) {
        entity_actor_Sub_080323C8(param_1);
        goto LAB_0803423e;
      }
    }
    entity_actor_Sub_08032384(param_1,iVar2,1);
  }
LAB_0803423e:
  *(u8 *)(param_1 + 0x40) = (u8)param_2;
}

/* 0x08034248 (24B) | AEntity_68C8_Sub_08034248 (orig: func_08034248) | origin: pure | domain: AEntity_68C8 | MEDIUM / graph_algebra */
extern const u16 g_080F1450[][5]; u16 AEntity_68C8_Sub_08034248(u8 *a, int b) { return g_080F1450[a[0x30]][b]; }

/* 0x080342D8 (148B) | AEntity_68C8_Sub_080342D8 (orig: func_080342D8) | origin: pure | domain: AEntity_68C8 | MEDIUM / graph_algebra */
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
extern u32 AEntity_68C8_Sub_080338F0();
extern u32 AEntity_68C8_Sub_08034180();
extern u32 AEntity_Sub_08034260();
extern u32 func_0809E33C();
extern u32 func_0809E65C();
extern u32 HarvestSprite_GetTaskExp();
extern u32 func_0809E7D8();
extern u32 code_809E804_Sub_080AB788();
struct _bf34 { u32 f0 : 16; u32 f1 : 8; u32 f2 : 8; };
void AEntity_68C8_Sub_080342D8(int arg0) {
  struct _bf34 local_buf;
  u32 val3;
  u32 val;
  u32 val2;
  func_0809E33C(*(u32 *)(arg0 + 0x34));
  if ((u8)AEntity_68C8_Sub_080338F0() == 0 || (u8)AEntity_Sub_08034260(arg0) == 0) {
    local_buf.f0 = (u16)code_809E804_Sub_080AB788(0xb4);
    local_buf.f1 = 0;
    val3 = *(u32 *)(arg0 + 0x34);
    val = func_0809E65C(val3);
    val2 = HarvestSprite_GetTaskExp(val3, val);
    local_buf.f2 = (code_809E804_Sub_080AB788(0x100 - val2) >> 6) + 2;
    func_0809E7D8(*(u32 *)(arg0 + 0x34), &local_buf);
    AEntity_68C8_Sub_08034180(arg0, 0, *(u8 *)(arg0 + 0x20), 0);
  }
}

/* 0x08034940 (212B) | AEntity_68C8_Sub_08034940 (orig: func_08034940) | origin: wip | domain: AEntity_68C8 | MEDIUM / graph_algebra */
u32 AEntity_68C8_Sub_08034940(u32 *param_1) {
    u32 uVar4;
    s16 sStack_14;
    u32 iVar2;
    u16 uVar1;
    u8 uVar3;
    u8 auStack_10 [4];
    int sStack_18;
    s32 sStack_12;
    register int sStack_16;
  iVar2 = func_080D3910((int *)*param_1,*(u32 *)(*(int *)*param_1 + 0x144));
  uVar3 = *(u16 *)(iVar2 + 10) & 0x1f;
  if (5 < uVar3) {
    if ((uVar3 - 6) * 0x3c + ((*(u16 *)(iVar2 + 10) & 0x7ff) >> 5) <
        (u32)*(u8 *)(param_1 + 0xc) + 0x00000385) {
      uVar4 = 0;
      goto LAB_08034a0a;
    }
  }
  uVar1 = *(u16 *)(param_1 + 1);
  if (uVar1 == 0x11) {
    AEntity_SetLocation(param_1,2,(int)sStack_14,(int)sStack_12);
    func_08009AE8(&sStack_14);
  }
  else if ((0x11 < uVar1) && (uVar1 == 0x25)) {
    func_08009ADC(&sStack_18);
    AEntity_SetLocation(param_1,2,(int)sStack_18,(int)sStack_16);
  }
  code_809E804_Sub_0809E994(param_1[0xe],*(u8 *)(param_1 + 0xc));
  func_0809E7FC(param_1[0xd],auStack_10);
  if (*(short *)((int)param_1 + 10) == 0x168) {
    uVar4 = 1;
  }
  else {
    uVar4 = (s16)2;
    if (*(short *)((int)param_1 + 10) <= (u8)0x00000167) {
      uVar4 = 3;
    }
  }
  AEntity_68C8_Sub_08034180(param_1,1,uVar4,0x8000);
  uVar4 = (u8)1;
LAB_08034a0a:
  return uVar4;
}

/* 0x080A03B8 (100B) | AEntity_68C8_Sub_080A03B8 (orig: func_080A03B8) | origin: wip | domain: AEntity_68C8 | MEDIUM / graph_algebra */
u32 AEntity_68C8_Sub_080A03B8(int param_1,u32 param_2,u32 param_3) {
  u16 uVar1;
  int iVar2;
  u16 uStack_18;
  u16 uStack_16;
  u16 uStack_14;
  iVar2 = ScriptVM_Sub_080A0030(param_2,param_3);
  if (iVar2 == 0) {
    uVar1 = (u16)0xFFFFFC00;
    uStack_18 = uVar1 & uStack_18 & 0x3ff | 2;
    uStack_16 = uVar1 & uStack_16 & 0x3ff;
    uStack_14 = uVar1 & uStack_14;
    LibC_memcpy(param_1,&uStack_18,6);
    *(u8 *)(param_1 + 6) = 0;
  }
  else {
    Npc_GetLocation(param_1);
  }
  return param_1;
}

/* 0x080A099C (104B) | AEntity_68C8_Sub_080A099C (orig: func_080A099C) | origin: wip | domain: AEntity_68C8 | MEDIUM / graph_algebra */
void * AEntity_68C8_Sub_080A099C(int param_1,u32 param_2) {
  int iVar1;

  if (param_2 < 7) {
    switch(*(u32 *)(((const u32 *)0x080a09b0) + param_2 * 4) & 0xfffffffe) {
    case 0x80a09b4:
      goto LAB_080a09d0;
    case 0x80a09d4:
      iVar1 = 0x33c;
      break;
    case 0x80a09da:
      iVar1 = 0x360;
      break;
    case 0x80a09e0:
      iVar1 = 900;
      break;
    case 0x80a09e6:
      iVar1 = 0x3a8;
      break;
    case 0x80a09ec:
      iVar1 = 0x3cc;
      break;
    case 0x80a09f2:
      iVar1 = 0x3f0;
      break;
    case 0x80a09f8:
      iVar1 = 0x414;
    }
    param_1 = param_1 + iVar1;
  }
  else {
LAB_080a09d0:
    param_1 = 0;
  }
  return (void *)param_1;
}

/* 0x080ABA3C (84B) | AEntity_68C8_Sub_080ABA3C (orig: func_080ABA3C) | origin: wip | domain: AEntity_68C8 | MEDIUM / graph_algebra */
u32 AEntity_68C8_Sub_080ABA3C(u32 param_1) {
  u32 uStack_3c;
  u32 uStack_38;
  u32 uStack_34;
  u32 uStack_30;
  u8 uStack_2c;
  u8 uStack_2b;
  u8 uStack_2a;
  u8 uStack_29;
  u32 uStack_28;
  u32 uStack_24;
  u16 uStack_20;
  u16 uStack_1e;
  u16 uStack_1c;
  u16 uStack_1a;
  u16 uStack_18;
  u16 uStack_16;
  u32 uStack_14;
  u32 uStack_10;
  u32 uStack_c;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1e = 0;
  uStack_1c = 0;
  uStack_1a = 0;
  uStack_18 = 0;
  uStack_16 = 0;
  uStack_14 = 1;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_2c = 1;
  uStack_2b = 1;
  uStack_2a = 1;
  uStack_29 = 1;
  LibC_memcpy(param_1,&uStack_3c,0x34);
  return param_1;
}

