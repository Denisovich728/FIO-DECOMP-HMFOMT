/* FIO-DECOMP-HMFOMT :: Port Readable Module: SpriteAnimEngine_5A28 (54 functions) */
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

/* 0x0803C7A0 (40B) | SpriteAnimEngine_5A28_Wrap_Dtor (orig: func_0803C7A0) | origin: pure | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
extern u32 SpriteAnimEngine_5A28_Dtor_0D70();
void SpriteAnimEngine_5A28_Wrap_Dtor(int *arg0,u32 arg1) {
  if (*arg0 != 0) {
    SpriteAnimEngine_5A28_Dtor_0D70(*arg0,3);
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x08050D0C (40B) | SpriteAnimEngine_5A28_Wrap_Dtor_0D0C (orig: func_08050D0C) | origin: pure | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
extern u32 SpriteAnimEngine_5A28_Dtor();
void SpriteAnimEngine_5A28_Wrap_Dtor_0D0C(int *arg0,u32 arg1) {
  if (*arg0 != 0) {
    SpriteAnimEngine_5A28_Dtor(*arg0,3);
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x08082264 (232B) | SpriteAnimEngine_5A28_Ctor_2264 (orig: func_08082264) | origin: wip | domain: SpriteAnimEngine_5A28 | HIGH / vtable_algebra */
void SpriteAnimEngine_5A28_Ctor_2264(int self,u32 param_2,u32 param_3,u16 param_4,
             u32 param_5) {
  u32 *puVar1;

  u32 uStack_d4;
  u8 auStack_c4 [48];
  u16 uStack_94;
  u16 uStack_92;
  int *piStack_90;
  int iStack_8c;
  u16 uStack_84;
  u16 uStack_7c;
  u16 uStack_7a;
  u16 uStack_78;
  u16 uStack_76;
  u16 uStack_74;
  u32 uStack_70;
  u8 uStack_6c;
  u8 uStack_6b;
  u32 uStack_68;
  u8 uStack_64;
  u8 uStack_60;
  u32 uStack_5c;
  u32 uStack_58;
  u32 uStack_54;
  u32 uStack_50;
  u32 uStack_4c;
  u32 uStack_48;
  u32 uStack_44;
  u32 uStack_40;
  u8 auStack_3c [8];
  u32 uStack_34;
  u32 uStack_2c;
  
  uStack_d4 = (((u32)(uStack_d4) << 16) | (u16)(param_4));
  code_0803EE94_79C8_Ctor(auStack_c4,param_5);
  uStack_94 = 0;
  uStack_92 = 0;
  code_0803EE94_Sub_0805E824(&piStack_90,auStack_c4,0,0x100);
  uStack_7c = 0;
  uStack_7a = 0;
  uStack_78 = 0;
  uStack_76 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_6b = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = (u32)uStack_58 << 0x10;
  uStack_54 = 0;
  uStack_50 = (u32)uStack_50 << 0x10;
  uStack_4c = 0;
  uStack_48 = (u32)uStack_48 << 0x10;
  uStack_44 = 0;
  uStack_40 = (u32)uStack_40 << 0x10;
  code_0803EE94_Sub_0805E860(&piStack_90,param_2);
  func_080D3918(auStack_3c,piStack_90,*(u16 *)(iStack_8c + (u32)uStack_84 * 4),
                  *(u32 *)(*piStack_90 + 0x10));
  LibC_memcpy(auStack_3c,auStack_3c,0x20);
  if (*(u32 *)(self + 0x20) < 0x28) {
    puVar1 = (u32 *)(self + *(u32 *)(self + 0x20) * 0x10 + 0x24);
    if (puVar1 != (u32 *)0x0) {
      *puVar1 = uStack_d4;
      puVar1[1] = param_3;
      puVar1[2] = uStack_34;
      puVar1[3] = uStack_2c;
    }
    *(int *)(self + 0x20) = *(int *)(self + 0x20) + 1;
  }
  return 0;
}

/* 0x080885AC (220B) | SpriteAnimEngine_5A28_Sub_080885AC (orig: func_080885AC) | origin: wip | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5A28_Sub_080885AC(int param_1,int param_2) {
    char cVar1;
    u16 iVar4;
    u32 iVar6;
    u32 uVar5;
    u32 * puVar3;
    s8 uStack_1c;
  int iVar8;
  int uStack_18;
  register u8 *puVar7;
  register u32 uVar2;
  iVar8 = (u16)0;
  puVar7 = (u8 *)(param_1 + 0x98);
  *puVar7 = 0;
  if (param_2 == 0) {
    cVar1 = held_item_VmHelper_0800F190(*(u32 *)(param_1 + 0xfc));
    if (cVar1 == '\0') {
      iVar8 = SpriteAnimEngine_5A28_Sub_080CF67C(param_1,puVar7,*(u32 *)(param_1 + 0xfc));
    }
  }
  else if (param_2 < 9) {
    uVar5 = *(u32 *)(param_1 + 0x100);
    uVar2 = code_809E804_Sub_080CE184(param_1,param_2,0);
    puVar3 = (u32 *)func_0800FCDC(uVar5,uVar2);
    cVar1 = RucksackItem_IsEmpty(&uStack_1c);
    uStack_1c = *puVar3;
    if (cVar1 == '\0') {
      uStack_18 = uStack_1c;
      iVar8 = SpriteAnimEngine_5A28_Sub_080CFA38(param_1,puVar7);
    }
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 0x94) + 0xbc);
    iVar4 = code_809E804_Sub_080CE184(param_1,param_2,0);
    iVar4 = (u32)iVar6 * 8 + iVar4;
    func_0800B80C(*(u32 *)(param_1 + 0x104),iVar4);
    cVar1 = FoodStack_IsEmpty(param_1);
    if (cVar1 == '\0') {
      uVar2 = func_0800B80C(*(u32 *)(param_1 + 0x104),iVar4);
      FoodStack_GetFood(&uStack_1c,uVar2);
      iVar8 = Food_GetDesc(&uStack_1c);
    }
  }
  if (0 == iVar8) {
    code_0803EE94_78C0_Sub_08050DC8(param_1 + 0x80,0x08100030,0,0);
  }
  else {
    code_0803EE94_78C0_Sub_08050DC8(param_1 + 0x80,iVar8,0,0);
  }
}

/* 0x0808A4C0 (156B) | SpriteAnimEngine_5A28_Sub_0808A4C0 (orig: func_0808A4C0) | origin: wip | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5A28_Sub_0808A4C0(int param_1,int param_2) {
  u32 uVar1;
  u32 *puVar2;
  u32 uVar3;
  u32 uStack_14;
  if (param_2 == 0) {
    held_item_Sub_0800F390(*(u32 *)(param_1 + 0xfc));
    code_0803EE94_7868_Sub_080CC0B4(*(u32 *)(param_1 + 0x78));
  }
  else if (param_2 < 9) {
    uVar3 = *(u32 *)(param_1 + 0x100);
    uVar1 = code_809E804_Sub_080CE184(param_1,param_2,0);
    Rucksack_ExtractItemAt(&uStack_14,uVar3,uVar1);
    uVar3 = *(u32 *)(param_1 + 0x78);
    uVar1 = code_809E804_Sub_080CE184(param_1,param_2,0);
    code_0803EE94_7868_Sub_080CBA60(uVar3,uVar1);
  }
  else {
    uVar1 = code_809E804_Sub_080CE184(param_1,param_2,*(u32 *)(*(s16 *)(param_1 + 0x94) + 0xbc));
    puVar2 = (u32 *)func_0800B80C(*(u32 *)(param_1 + 0x104),uVar1);
    FoodStack_Ctor(&uStack_14);
    *puVar2 = uStack_14;
    uVar3 = *(u32 *)(param_1 + 0x7c);
    uVar1 = code_809E804_Sub_080CE184(param_1,param_2,0);
    code_0803EE94_7868_Sub_080CCDEC(uVar3,uVar1);
  }
}

/* 0x0808BC14 (188B) | SpriteAnimEngine_5A28_Sub_0808BC14 (orig: func_0808BC14) | origin: wip | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5A28_Sub_0808BC14(int param_1,int param_2) {
  int iVar1;
  u32 uVar2;
  u32 uVar3;
  u8 auStack_18 [4];
  u8 uStack_14;
  u8 uStack_13;
  if (param_2 == 9) {
    iVar1 = held_item_VmHelper_0800F204(*(u32 *)(param_1 + 0x100));
    if (iVar1 == 1) {
      uStack_14 = held_item_Func044(*(u32 *)(param_1 + 0x100));
      iVar1 = func_0800DF54(&uStack_14);
      if (iVar1 == 0x35) {
        farmer_Sub_0800ED2C(*(int *)(param_1 + 8) + 0x00001BD8);
      }
    }
    held_item_Sub_0800F390(*(u32 *)(param_1 + 0x100));
    code_0803EE94_7868_Sub_080CD4D4(*(u32 *)(param_1 + 0x7c));
  }
  else {
    uVar3 = *(u32 *)(param_1 + 0x104);
    uVar2 = code_809E804_Sub_080CE184(param_1,param_2,0);
    Rucksack_ExtractItemAt(auStack_18,uVar3,uVar2);
    iVar1 = func_0800F09C(auStack_18);
    if (iVar1 == 1) {
      uStack_13 = RucksackItem_GetArticle(auStack_18);
      iVar1 = func_0800DF54(&uStack_13);
      if (iVar1 == 0x35) {
        farmer_Sub_0800ED2C(*(int *)(param_1 + 8) + 0x00001BD8);
      }
    }
    uVar3 = *(u32 *)(param_1 + 0x7c);
    uVar2 = code_809E804_Sub_080CE184(param_1,param_2,0);
    code_0803EE94_7868_Sub_080CCDEC(uVar3,uVar2);
  }
}

/* 0x0808BF8C (304B) | SpriteAnimEngine_5A28_Sub_0808BF8C (orig: func_0808BF8C) | origin: wip | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5A28_Sub_0808BF8C(int param_1,int param_2) {
  char cVar1;
  s16 uVar2;
  u32 *puVar3;
  u32 uVar4;
  u8 *puVar5;
  int iVar6;
  u32 uStack_28;
  u32 uStack_24;
  u8 uStack_20;
  u8 auStack_1f [3];
  iVar6 = 0;
  puVar5 = (u8 *)(param_1 + 0x98);
  *puVar5 = 0;
  if (param_2 == 0) {
    cVar1 = ToolStack_IsEmpty(*(u32 *)(param_1 + 0xfc));
    if (cVar1 == '\0') {
      uStack_20 = ToolStack_GetTool(*(u32 *)(param_1 + 0xfc));
      iVar6 = SpriteAnimEngine_5A28_Sub_080CF05C(param_1,puVar5,&uStack_20,1);
    }
  }
  else if (param_2 == 9) {
    cVar1 = held_item_VmHelper_0800F190(*(u32 *)(param_1 + 0x100));
    if (cVar1 == '\0') {
      iVar6 = SpriteAnimEngine_5A28_Sub_080CF67C(param_1,puVar5,*(u32 *)(param_1 + 0x100));
    }
  }
  else if (param_2 < 9) {
    uVar4 = *(u16 *)(param_1 + 0x104);
    uVar2 = code_809E804_Sub_080CE184(param_1,param_2,0);
    func_0800FE18(uVar4,uVar2);
    cVar1 = ToolStack_IsEmpty();
    if (cVar1 == '\0') {
      uVar4 = *(u32 *)(param_1 + 0x104);
      uVar2 = code_809E804_Sub_080CE184(param_1,param_2,0);
      func_0800FE18(uVar4,uVar2);
      auStack_1f[0] = ToolStack_GetTool();
      iVar6 = SpriteAnimEngine_5A28_Sub_080CF05C(param_1,param_1 + 0x98,auStack_1f,0);
    }
  }
  else {
    uVar4 = *(u32 *)(param_1 + 0x104);
    uVar2 = code_809E804_Sub_080CE184(param_1,param_2,0);
    puVar3 = (u32 *)func_0800FCDC(uVar4,uVar2);
    uStack_28 = *puVar3;
    cVar1 = RucksackItem_IsEmpty(&uStack_28);
    if (cVar1 == '\0') {
      uStack_24 = uStack_28;
      iVar6 = SpriteAnimEngine_5A28_Sub_080CFA38(param_1,puVar5);
    }
  }
  if (iVar6 == 0) {
    code_0803EE94_78C0_Sub_08050DC8(param_1 + 0x80,0x081000B0,0,0);
  }
  else {
    code_0803EE94_78C0_Sub_08050DC8(param_1 + 0x80,iVar6,0,0);
  }
}

/* 0x0808C8F4 (220B) | SpriteAnimEngine_5A28_Sub_0808C8F4 (orig: func_0808C8F4) | origin: wip | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5A28_Sub_0808C8F4(int param_1,int param_2) {
    u32 uVar5;
    int iVar6;
    s8 iVar8;
    u8 * puVar7;
    u32 * puVar3;
    u32 uStack_1c;
    s8 uStack_18;
    u32 uStack_20;
    u32 uVar2;
    register unsigned int iVar4;
  register char cVar1;
  iVar8 = (u8)0;
  puVar7 = (u8 *)(param_1 + 0x98);
  *puVar7 = 0;
  if (param_2 == 0) {
    cVar1 = held_item_VmHelper_0800F190(*(u32 *)(param_1 + 0xfc));
    if (cVar1 == '\0') {
      iVar8 = SpriteAnimEngine_5A28_Sub_080CF67C(param_1,puVar7,*(u32 *)(param_1 + 0xfc));
    }
  }
  else if (9 > param_2) {
    uVar5 = *(u32 *)(param_1 + 0x100);
    uVar2 = code_809E804_Sub_080CE184(param_1,param_2,0);
    puVar3 = (u32 *)func_0800FCDC(uVar5,uVar2);
    uStack_20 = *puVar3;
    cVar1 = RucksackItem_IsEmpty(&uStack_20);
    if (cVar1 == '\0') {
      uStack_1c = uStack_20;
      iVar8 = (s16)SpriteAnimEngine_5A28_Sub_080CFA38(param_1,puVar7);
    }
  }
  else {
    iVar4 = iVar6 * 8 + iVar4;
    iVar6 = *(int *)(*(int *)(param_1 + 0x94) + 0xbc);
    iVar4 = (s8)code_809E804_Sub_080CE184(param_1,param_2,0);
    func_0800BAA0(*(u32 *)(param_1 + 0x104),iVar4);
    cVar1 = ArticleStack_IsEmpty(param_1);
    if (cVar1 == '\0') {
      func_0800BAA0(*(u32 *)(0x104 + param_1),iVar4);
      uStack_18 = ArticleStack_GetArticle();
      iVar8 = Article_GetDesc();
    }
  }
  if (iVar8 == 0) {
    code_0803EE94_78C0_Sub_08050DC8(param_1 + 0x80,0x081000D0,0,0);
  }
  else {
    code_0803EE94_78C0_Sub_08050DC8(0x80 + param_1,iVar8,0,0);
  }
}

/* 0x0808E65C (160B) | SpriteAnimEngine_5A28_Sub_0808E65C (orig: func_0808E65C) | origin: wip | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5A28_Sub_0808E65C(int param_1,int param_2) {
  u8 auStack_14 [4];
  register s8 uVar1;
  register u32 uVar2;
  if (param_2 == 0) {
    held_item_Sub_0800F390(*(u32 *)(0xfc + param_1));
    code_0803EE94_7868_Sub_080CC0B4(*(u32 *)(0x78 + param_1));
  }
  else if (param_2 < 9) {
    uVar2 = *(s8 *)(param_1 + 0x100);
    uVar1 = code_809E804_Sub_080CE184(param_1,param_2,0);
    Rucksack_ExtractItemAt(auStack_14,uVar2,uVar1);
    uVar2 = *(u32 *)(0x78 + param_1);
    uVar1 = code_809E804_Sub_080CE184(param_1,param_2,0);
    code_0803EE94_7868_Sub_080CBA60(uVar2,uVar1);
  }
  else {
    uVar1 = code_809E804_Sub_080CE184(param_1,param_2,*(u32 *)(*(int *)(param_1 + 0x94) + 0xbc));
    ArticleStack_Ctor(auStack_14);
    LibC_memcpy(uVar1,auStack_14,2);
    uVar1 = func_0800BAA0(*(u32 *)(0x104 + param_1),uVar1);
    uVar2 = *(u32 *)(param_1 + 0x7c);
    uVar1 = code_809E804_Sub_080CE184(param_1,param_2,0);
    code_0803EE94_7868_Sub_080CCDEC(uVar2,uVar1);
  }
}

/* 0x080908CC (148B) | SpriteAnimEngine_5A28_Sub_080908CC (orig: func_080908CC) | origin: wip | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5A28_Sub_080908CC(int param_1,int param_2) {
  bool bVar1;
  u32 *puVar2;
  u32 uVar3;
  u32 uStack_1c;
  u32 uVar4;
  int iStack_18;
  int iStack_14;
  code_809E804_SetField_0x00_AC70(&uStack_1c);
  if (param_2 == 0) {
    puVar2 = (u32 *)func_080CB2FC(*(u32 *)(param_1 + 0x78));
  }
  else if (param_2 < 9) {
    uVar3 = code_809E804_Sub_080CE184(param_1,param_2,0);
    uVar4 = *(u32 *)(param_1 + 0x78);
    puVar2 = (u32 *)func_080CB2E8(uVar4,uVar3);
  }
  else {
    uVar4 = *(u32 *)(param_1 + 0x7c);
    uVar3 = code_809E804_Sub_080CE184(param_1,param_2,0);
    puVar2 = (u32 *)code_809E804_Sub_080CC70C(uVar4,uVar3);
  }
  uStack_1c = *puVar2;
  iStack_14 = puVar2[2];
  iStack_18 = puVar2[1];
  bVar1 = false;
  if ((iStack_18 == 0) || (iStack_14 == 0)) {
    bVar1 = true;
  }
  if (!bVar1) {
    code_0803EE94_78C0_Sub_08050DC8(param_1 + 0x80,*(u32 *)0x08117ADC,0,0);
    *(u32 *)(param_1 + 0x108) = 1;
    hardware_Wrap_m4aMPlayStart(param_1 + 0xc,199);
  }
}

/* 0x08091280 (304B) | SpriteAnimEngine_5A28_Sub_08091280 (orig: func_08091280) | origin: wip | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5A28_Sub_08091280(int param_1,int param_2) {
  char cVar1;
  s8 uVar2;
  u32 *puVar3;
  u32 uVar4;
  u8 *puVar5;
  int iVar6;
  u32 uStack_28;
  u32 uStack_24;
  u8 uStack_20;
  u8 auStack_1f [3];
  iVar6 = 0;
  puVar5 = (u8 *)(param_1 + 0x98);
  *puVar5 = 0;
  if (param_2 == 0) {
    cVar1 = ToolStack_IsEmpty(*(u32 *)(param_1 + 0xfc));
    if (cVar1 == '\0') {
      uStack_20 = ToolStack_GetTool(*(u32 *)(param_1 + 0xfc));
      iVar6 = SpriteAnimEngine_5A28_Sub_080CF05C(param_1,puVar5,&uStack_20,1);
    }
  }
  else if (param_2 == 9) {
    cVar1 = held_item_VmHelper_0800F190(*(u32 *)(param_1 + 0x100));
    if (cVar1 == '\0') {
      iVar6 = SpriteAnimEngine_5A28_Sub_080CF67C(param_1,puVar5,*(u32 *)(param_1 + 0x100));
    }
  }
  else if (param_2 < 9) {
    uVar4 = *(u8 *)(param_1 + 0x104);
    uVar2 = code_809E804_Sub_080CE184(param_1,param_2,0);
    func_0800FE18(uVar4,uVar2);
    cVar1 = ToolStack_IsEmpty();
    if (cVar1 == '\0') {
      uVar4 = *(u32 *)(param_1 + 0x104);
      uVar2 = code_809E804_Sub_080CE184(param_1,param_2,0);
      func_0800FE18(uVar4,uVar2);
      auStack_1f[0] = ToolStack_GetTool();
      iVar6 = SpriteAnimEngine_5A28_Sub_080CF05C(param_1,param_1 + 0x98,auStack_1f,0);
    }
  }
  else {
    uVar4 = *(u32 *)(param_1 + 0x104);
    uVar2 = code_809E804_Sub_080CE184(param_1,param_2,0);
    puVar3 = (u32 *)func_0800FCDC(uVar4,uVar2);
    uStack_28 = *puVar3;
    cVar1 = RucksackItem_IsEmpty(&uStack_28);
    if (cVar1 == '\0') {
      uStack_24 = uStack_28;
      iVar6 = SpriteAnimEngine_5A28_Sub_080CFA38(param_1,puVar5);
    }
  }
  if (iVar6 == 0) {
    code_0803EE94_78C0_Sub_08050DC8(param_1 + 0x80,0x08100168,0,0);
  }
  else {
    code_0803EE94_78C0_Sub_08050DC8(param_1 + 0x80,iVar6,0,0);
  }
}

/* 0x080913B0 (44B) | SpriteAnimEngine_5A28_Sub_080913B0 (orig: func_080913B0) | origin: pure | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
extern "C" int func_0800DB30(u8 const *);
extern "C" bool SpriteAnimEngine_5A28_Sub_080913B0(void *a, u8 b) {
    if (func_0800DB30(&b) <= 0x2f && (func_0800DB30(&b) & 7) == 5)
        return true;
    return false;
}

/* 0x080913DC (68B) | SpriteAnimEngine_5A28_Sub_080913DC (orig: func_080913DC) | origin: pure | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 func_0800DF54();
/* COMPILADOR: agbcc.exe / tcc.exe -O2 -mthumb-interwork -fhex-asm */
/* REGLAS IA: GBA SDK C89 (agbcc.exe -O2 -mthumb-interwork + ADS 1.2 tcc.exe). C89 PURO: declara TODAS las variables al inicio del bloque. PROHIBIDO usar asm, __asm, push, pop, bl o mnemonicos ARM. */
/* REFERENCIA Ghidra (no confiable): */

void * SpriteAnimEngine_5A28_Sub_080913DC(u32 arg0,u8 arg1)

{
  int val;
  u32 val2;

  u8 auStack_8 [4];
  u32 local_buf;
  
  auStack_8[0] = arg1;
  local_buf = 0;
  val = func_0800DF54();
  if ((((val == 0x12) || (val = func_0800DF54(auStack_8), val == 0x13)) ||
      (val = func_0800DF54(auStack_8), val == 0x14)) ||
     ((val = func_0800DF54(auStack_8), val == 0x15 ||
      (val = func_0800DF54(auStack_8), val == 0x1c)))) {
    val2 = 1;
  }
  else {
    val2 = 0;
  }
  return (void *)val2;
}

/* 0x08091420 (128B) | SpriteAnimEngine_5A28_Sub_08091420 (orig: func_08091420) | origin: wip | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
void * SpriteAnimEngine_5A28_Sub_08091420(u32 param_1,u32 param_2,int param_3) {
  u32 uVar1;
  u32 uVar2;

  param_2 = param_2 & 7;
  uVar1 = 0;
  uVar2 = 0;
  if (param_3 - 0x12U < 0xb) {
    switch(*(u32 *)(((const u32 *)0x08091440) + (param_3 - 0x12U) * 4) & 0xfffffffe) {
    case 0x8091444:
      param_2 = 0 >> 0x11;
    case 0x8091470:
      uVar1 = 1;
      break;
    case 0x8091474:
      uVar1 = 2;
      break;
    case 0x8091478:
      uVar1 = 3;
      break;
    case 0x809147c:
      uVar1 = 4;
      break;
    case 0x8091480:
      uVar1 = 7;
    }
  }
  if (param_2 == uVar1) {
    uVar2 = 1;
  }
  else if (uVar1 < param_2) {
    uVar2 = 2;
  }
  else if (param_2 < uVar1) {
    uVar2 = 3;
  }
  return (void *)uVar2;
}

/* 0x080914A0 (140B) | SpriteAnimEngine_5A28_Sub_080914A0 (orig: func_080914A0) | origin: wip | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
void * SpriteAnimEngine_5A28_Sub_080914A0(u32 param_1,u32 param_2,int param_3) {
  u32 uVar1;
  int iVar2;

  param_2 = param_2 & 7;
  uVar1 = 0;
  iVar2 = 0;
  if (param_3 - 0x12U < 0xb) {
    switch(*(u32 *)(((const u32 *)0x080914c0) + (param_3 - 0x12U) * 4) & 0xfffffffe) {
    case 0x80914c4:
    case 0x80914f0:
      uVar1 = 1;
      break;
    case 0x80914f4:
      uVar1 = 2;
      break;
    case 0x80914f8:
      uVar1 = 3;
      break;
    case 0x80914fc:
      uVar1 = 4;
      break;
    case 0x8091500:
      uVar1 = 7;
    }
  }
  if (param_2 == uVar1) {
    iVar2 = 0;
  }
  else if (uVar1 < param_2) {
    iVar2 = 1;
  }
  else if (((param_2 < uVar1) && (iVar2 = uVar1 - param_2, param_2 == 6)) && (uVar1 == 7)) {
    iVar2 = 2;
  }
  return (void *)iVar2;
}

/* 0x08092940 (304B) | SpriteAnimEngine_5A28_Sub_08092940 (orig: func_08092940) | origin: wip | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5A28_Sub_08092940(int param_1,int param_2) {
  u32 uVar4;
  s8 uVar2;
  u32 *puVar3;
  char cVar1;
  u8 *puVar5;
  int iVar6;
  u32 uStack_28;
  u32 uStack_24;
  u8 uStack_20;
  u8 auStack_1f [3];
  iVar6 = 0;
  puVar5 = (u8 *)(param_1 + 0x98);
  *puVar5 = 0;
  if (param_2 == 0) {
    cVar1 = ToolStack_IsEmpty(*(u32 *)(param_1 + 0xfc));
    if (cVar1 == '\0') {
      uStack_20 = ToolStack_GetTool(*(u32 *)(param_1 + 0xfc));
      iVar6 = SpriteAnimEngine_5A28_Sub_080CF05C(param_1,puVar5,&uStack_20,1);
    }
  }
  else if (param_2 == 9) {
    cVar1 = held_item_VmHelper_0800F190(*(u32 *)(param_1 + 0x100));
    if (cVar1 == '\0') {
      iVar6 = SpriteAnimEngine_5A28_Sub_080CF67C(param_1,puVar5,*(u32 *)(param_1 + 0x100));
    }
  }
  else if (param_2 < 9) {
    uVar2 = code_809E804_Sub_080CE184(param_1,param_2,0);
    uVar4 = *(u8 *)(param_1 + 0x104);
    func_0800FE18(uVar4,uVar2);
    cVar1 = ToolStack_IsEmpty();
    if (cVar1 == '\0') {
      uVar4 = *(u32 *)(param_1 + 0x104);
      uVar2 = code_809E804_Sub_080CE184(param_1,param_2,0);
      func_0800FE18(uVar4,uVar2);
      auStack_1f[0] = ToolStack_GetTool();
      iVar6 = SpriteAnimEngine_5A28_Sub_080CF05C(param_1,param_1 + 0x98,auStack_1f,0);
    }
  }
  else {
    uVar4 = *(u32 *)(param_1 + 0x104);
    uVar2 = code_809E804_Sub_080CE184(param_1,param_2,0);
    puVar3 = (u32 *)func_0800FCDC(uVar4,uVar2);
    uStack_28 = *puVar3;
    cVar1 = RucksackItem_IsEmpty(&uStack_28);
    if (cVar1 == '\0') {
      uStack_24 = uStack_28;
      iVar6 = SpriteAnimEngine_5A28_Sub_080CFA38(param_1,puVar5);
    }
  }
  if (iVar6 == 0) {
    code_0803EE94_78C0_Sub_08050DC8(param_1 + 0x80,0x081003F0,0,0);
  }
  else {
    code_0803EE94_78C0_Sub_08050DC8(param_1 + 0x80,iVar6,0,0);
  }
}

/* 0x080AC85C (272B) | SpriteAnimEngine_5A28_Dtor_C85C (orig: func_080AC85C) | origin: wip | domain: SpriteAnimEngine_5A28 | HIGH / vtable_algebra */
void SpriteAnimEngine_5A28_Dtor_C85C(int *self,u32 param_2) {
    int * piVar2;
    int * piVar3;
    u32 uVar4;
  register int iVar1;
  uVar4 = 0;
  piVar2 = self;
  do {
    piVar2 = piVar2 + 1;
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      func_080D3914(iVar1,3,*(u32 *)(*(int *)(iVar1 + 0x14) + 8));
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 100);
  iVar1 = *(int *)((int)self + 0x00001028);
  if (iVar1 != 0) {
    func_080D3914(iVar1,3,*(u32 *)(*(int *)(iVar1 + 0x24) + 8));
  }
  if (*(int *)((int)self + 0x00001024) != 0) {
    hardware_Sub_080AB2E4(*(int *)((int)self + 0x00001024),3);
  }
  if (self[0x408] != 0) {
    hardware_Sub_0803AC78(self[0x408],3);
  }
  iVar1 = 0x080E5A28;
  self[0x3fc] = 0x080E5A28;
  self[0x3f0] = iVar1;
  self[0x3e4] = iVar1;
  self[0x3d8] = iVar1;
  self[0x3cc] = iVar1;
  self[0x3c0] = iVar1;
  self[0x3b4] = iVar1;
  self[0x3a8] = iVar1;
  self[0x39c] = iVar1;
  self[0x390] = iVar1;
  self[900] = iVar1;
  self[0x378] = iVar1;
  self[0x36c] = iVar1;
  if (self != (int *)0xfffff2f0) {
      piVar3 = piVar2 + -3;
    do {
    piVar2 = (int *)((int)self + 0x00000DAC);
      hardware_Sub_080073E0(piVar3,piVar2[-2]);
      hardware_Sub_08007184(piVar3,2);
      piVar2 = piVar3;
    } while (self + 0x344 != piVar2);
  }
  iVar1 = *self;
  if (iVar1 != 0) {
    func_080D3914(iVar1,3,*(u32 *)(*(int *)(iVar1 + 0x90) + 8));
  }
  if ((param_2 & 1) != 0) {
    CppRuntime_builtin_delete(self);
  }
}

/* 0x080ADC84 (32B) | SpriteAnimEngine_5A28_Sub_080ADC84 (orig: func_080ADC84) | origin: pure | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
void SpriteAnimEngine_5A28_Sub_080ADC84(u32 *arg0,u32 arg1) {
  CppRuntime_builtin_delete(*arg0);
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080CAC7C (140B) | SpriteAnimEngine_5A28_Ctor_AC7C (orig: func_080CAC7C) | origin: wip | domain: SpriteAnimEngine_5A28 | HIGH / vtable_algebra */
u32 SpriteAnimEngine_5A28_Ctor_AC7C(u32 *self,u32 param_2,u16 param_3,u32 param_4) {
  u8 auStack_a0 [48];
  u16 uStack_70;
  u16 uStack_6e;
  int *piStack_6c;
  int iStack_68;
  u16 uStack_60;
  u16 uStack_58;
  u16 uStack_56;
  u16 uStack_54;
  u16 uStack_52;
  u16 uStack_50;
  u32 uStack_4c;
  u8 uStack_48;
  u8 uStack_47;
  u32 uStack_44;
  u8 uStack_40;
  u8 uStack_3c;
  u8 auStack_38 [8];
  u32 uStack_30;
  u32 uStack_28;
  code_0803EE94_79C8_Ctor(auStack_a0);
  uStack_70 = 0;
  uStack_6e = 0;
  code_0803EE94_Sub_0805E824(&piStack_6c,auStack_a0,param_3,0x100);
  uStack_58 = 0;
  uStack_56 = 0;
  uStack_54 = 0;
  uStack_52 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_47 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_080D3918(auStack_38,piStack_6c,*(u16 *)(iStack_68 + (u32)uStack_60 * 4),
                  *(u32 *)(*piStack_6c + 0x10));
  self[1] = uStack_30;
  self[2] = uStack_28;
  *self = param_4;
  return self;
}

/* 0x080CAD10 (4B) | SpriteAnimEngine_5A28_SetField_0x00 (orig: func_080CAD10) | origin: pure | domain: SpriteAnimEngine_5A28 | MEDIUM / tu_interp */
void SpriteAnimEngine_5A28_SetField_0x00(u32 *arg0, u32 arg1) {
    *arg0 = arg1;
}

/* 0x080CAD14 (4B) | SpriteAnimEngine_5A28_GetField_0x00 (orig: func_080CAD14) | origin: pure | domain: SpriteAnimEngine_5A28 | MEDIUM / tu_interp */
u32 SpriteAnimEngine_5A28_GetField_0x00(u32 *arg0) {
    return *arg0;
}

/* 0x080CAD18 (136B) | SpriteAnimEngine_5A28_Ctor_AD18 (orig: func_080CAD18) | origin: wip | domain: SpriteAnimEngine_5A28 | HIGH / vtable_algebra */
void SpriteAnimEngine_5A28_Ctor_AD18(u32 *self,u32 param_2,u16 param_3,u32 param_4) {
  u8 auStack_a0 [48];
  u16 uStack_70;
  u16 uStack_6e;
  int *piStack_6c;
  int iStack_68;
  u16 uStack_60;
  u16 uStack_58;
  u16 uStack_56;
  u16 uStack_54;
  u16 uStack_52;
  u16 uStack_50;
  u32 uStack_4c;
  u8 uStack_48;
  u8 uStack_47;
  u32 uStack_44;
  u8 uStack_40;
  u8 uStack_3c;
  u8 auStack_38 [8];
  u32 uStack_30;
  u32 uStack_28;
  code_0803EE94_79C8_Ctor(auStack_a0);
  uStack_70 = 0;
  uStack_6e = 0;
  code_0803EE94_Sub_0805E824(&piStack_6c,auStack_a0,param_3,0x100);
  uStack_58 = 0;
  uStack_56 = 0;
  uStack_54 = 0;
  uStack_52 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_47 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_080D3918(auStack_38,piStack_6c,*(u16 *)(iStack_68 + (u32)uStack_60 * 4),
                  *(u32 *)(*piStack_6c + 0x10));
  self[1] = uStack_30;
  self[2] = uStack_28;
  *self = param_4;
}

/* 0x080CC720 (8B) | SpriteAnimEngine_5A28_Sub_080CC720 (orig: func_080CC720) | origin: pure | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
u8 *SpriteAnimEngine_5A28_Sub_080CC720(u8 *a) { return a + (0xa0 << 2); }

/* 0x080CD14C (752B) | SpriteAnimEngine_5A28_Sub_080CD14C (orig: func_080CD14C) | origin: wip | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
void SpriteAnimEngine_5A28_Sub_080CD14C(int param_1,u32 param_2,u32 param_3,u32 param_4) {
  int iVar1;
  int *piVar2;
  int iVar3;
  u32 uVar4;
  u32 *puVar5;
  u32 *puVar6;
  int iVar7;
  u32 uVar8;
  u32 uVar9;
  int *piVar10;
  u32 uVar11;
  u32 uStack_5c;
  u32 uStack_58;
  u32 uStack_54;
  u32 uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  u32 uStack_3c;
  u32 uStack_38;
  int iStack_34;
  u32 *puStack_30;
  int iStack_2c;
  u32 *puStack_28;
  u32 *puStack_24;
  uStack_38 = param_4;
  code_809E804_SetField_0x04(param_1 + 0x280);
  iVar1 = hardware_Sub_08007D4C(param_1 + 0x29c,*(u32 *)(param_1 + 0x2a0));
  iStack_34 = hardware_Sub_080074C0(param_1 + 0x2a4,*(u32 *)(param_1 + 0x2a8));
  piVar10 = *(int **)(param_1 + 0x278);
  hardware_Sub_08008F0C(&uStack_5c,*(u32 *)(param_1 + 0x284),iVar1 * 0x20 + 0x06010000,0x80);
  puVar5 = (u32 *)piVar10[1];
  if (puVar5 == (u32 *)piVar10[3]) {
    iStack_48 = 1;
    puVar6 = (u32 *)*piVar10;
    iStack_4c = (int)puVar5 - (int)puVar6 >> 4;
    piVar2 = &iStack_4c;
    if (iStack_4c == 0) {
      piVar2 = &iStack_48;
    }
    puStack_28 = puVar5;
    if (iStack_4c + *piVar2 == 0) {
      puStack_24 = (u32 *)0x0;
      iVar1 = 0;
    }
    else {
      iVar1 = (iStack_4c + *piVar2) * 0x10;
      puStack_24 = (u32 *)LibC_malloc(iVar1);
      if (puStack_24 == (u32 *)0x0) {
        puStack_24 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
      }
      puVar6 = (u32 *)*piVar10;
    }
    iStack_2c = iStack_34 << 5;
    puStack_30 = &uStack_3c;
    puVar5 = puStack_24;
    for (; puVar6 != puStack_28; puVar6 = puVar6 + 4) {
      if (puVar5 != (u32 *)0x0) {
        uVar9 = puVar6[1];
        uVar11 = puVar6[2];
        *puVar5 = *puVar6;
        puVar5[1] = uVar9;
        puVar5[2] = uVar11;
        puVar5[3] = puVar6[3];
      }
      puVar5 = puVar5 + 4;
    }
    iVar3 = iStack_48;
    if (iStack_48 == 1) {
      if (puVar5 != (u32 *)0x0) {
        *puVar5 = uStack_5c;
        puVar5[1] = uStack_58;
        puVar5[2] = uStack_54;
        puVar5[3] = uStack_50;
      }
      puVar5 = puVar5 + 4;
    }
    else {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (puVar5 != (u32 *)0x0) {
          *puVar5 = uStack_5c;
          puVar5[1] = uStack_58;
          puVar5[2] = uStack_54;
          puVar5[3] = uStack_50;
        }
        puVar5 = puVar5 + 4;
      }
    }
    iVar7 = *piVar10;
    for (iVar3 = iVar7; iVar3 != piVar10[1]; iVar3 = iVar3 + 0x10) {
    }
    if (iVar7 != 0) {
      LibC_free(iVar7);
    }
    *piVar10 = (int)puStack_24;
    piVar10[1] = (int)puVar5;
    piVar10[3] = (int)puStack_24 + iVar1;
  }
  else {
    if (puVar5 != (u32 *)0x0) {
      *puVar5 = uStack_5c;
      puVar5[1] = uStack_58;
      puVar5[2] = uStack_54;
      puVar5[3] = uStack_50;
    }
    piVar10[1] = piVar10[1] + 0x10;
    iStack_2c = iStack_34 << 5;
    puStack_30 = &uStack_3c;
  }
  piVar10 = *(int **)(param_1 + 0x278);
  hardware_Sub_08008F0C(&uStack_5c,*(u32 *)(param_1 + 0x288),iStack_2c + 0x05000200,0x20);
  puVar5 = (u32 *)piVar10[1];
  if (puVar5 == (u32 *)piVar10[3]) {
    iStack_40 = 1;
    puVar6 = (u32 *)*piVar10;
    iStack_44 = (int)puVar5 - (int)puVar6 >> 4;
    piVar2 = &iStack_44;
    if (iStack_44 == 0) {
      piVar2 = &iStack_40;
    }
    puStack_28 = puVar5;
    if (iStack_44 + *piVar2 == 0) {
      puVar5 = (u32 *)0x0;
      iVar1 = 0;
      puStack_24 = puVar5;
    }
    else {
      iVar1 = (iStack_44 + *piVar2) * 0x10;
      puVar5 = (u32 *)LibC_malloc(iVar1);
      if (puVar5 == (u32 *)0x0) {
        puVar5 = (u32 *)code_linkonce_Sub_080D3BC0(iVar1);
      }
      puVar6 = (u32 *)*piVar10;
      puStack_24 = puVar5;
    }
    for (; puVar6 != puStack_28; puVar6 = puVar6 + 4) {
      if (puVar5 != (u32 *)0x0) {
        uVar9 = puVar6[1];
        uVar11 = puVar6[2];
        *puVar5 = *puVar6;
        puVar5[1] = uVar9;
        puVar5[2] = uVar11;
        puVar5[3] = puVar6[3];
      }
      puVar5 = puVar5 + 4;
    }
    iVar3 = iStack_40;
    if (iStack_40 == 1) {
      if (puVar5 != (u32 *)0x0) {
        *puVar5 = uStack_5c;
        puVar5[1] = uStack_58;
        puVar5[2] = uStack_54;
        puVar5[3] = uStack_50;
      }
      puVar5 = puVar5 + 4;
    }
    else {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (puVar5 != (u32 *)0x0) {
          *puVar5 = uStack_5c;
          puVar5[1] = uStack_58;
          puVar5[2] = uStack_54;
          puVar5[3] = uStack_50;
        }
        puVar5 = puVar5 + 4;
      }
    }
    iVar7 = *piVar10;
    for (iVar3 = iVar7; iVar3 != piVar10[1]; iVar3 = iVar3 + 0x10) {
    }
    if (iVar7 != 0) {
      LibC_free(iVar7);
    }
    *piVar10 = (int)puStack_24;
    piVar10[1] = (int)puVar5;
    piVar10[3] = (int)puStack_24 + iVar1;
  }
  else {
    if (puVar5 != (u32 *)0x0) {
      *puVar5 = uStack_5c;
      puVar5[1] = uStack_58;
      puVar5[2] = uStack_54;
      puVar5[3] = uStack_50;
    }
    piVar10[1] = piVar10[1] + 0x10;
  }
  uVar4 = *(u16 *)0x0811785C + 0xf & 0xff;
  uVar8 = *(u16 *)0x0811785C & 0xFFFFFF00;
  uStack_3c = uVar8 | uVar4;
  code_0803EE94_7868_Sub_080CAE60(param_1,(u32)*(u8 *)((int)puStack_30 + 1) * 0x40 +
                        (uVar8 & 0xff | uVar4) * 2 + 0x0600F080,0x54,2,1,0,0x20);
  if (1 < uStack_38) {
    code_0803EE94_7838_Sub_080CAEEC(param_1,uStack_38,
                  (u32)*(u8 *)((int)puStack_30 + 1) * 0x40 +
                  (u32)(u8)*puStack_30 * 2 + 0x0600F082,0x20,0,0x20);
  }
}

/* 0x080CD9B0 (148B) | SpriteAnimEngine_5A28_Sub_080CD9B0 (orig: func_080CD9B0) | origin: wip | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_5A28_Sub_080CD9B0(int param_1, int param_2, int param_3) {
  u32 val;
  *(u32 *)(param_1) = param_2;
  *(u32 *)(param_1 + 4) = param_3;
  *(u32 *)(param_1 + 8) = param_3;
  val = hardware_Sub_08007874((param_1 + 0x14));
  val = hardware_Sub_08007B54((param_1 + 0x14), 2);
  *(u32 *)((param_1 + 0x14) + 4) = val;
  val = hardware_Sub_08007128(((param_1 + 0x14) + 8), 2);
  val = hardware_Sub_0800736C(((param_1 + 0x14) + 8), 2);
  *(u32 *)(((param_1 + 0x14) + 8) + 4) = val;
  val = code_0803EE94_79C8_Ctor((param_1 + 0x24), 0x08728208);
  *(u32 *)((param_1 + 0x54)) = 0;
  *(u16 *)((param_1 + 0x54) + 2) = 0;
  val = code_0803EE94_Sub_0805E824(((param_1 + 0x54) + 4), (param_1 + 0x24), 0, (0x80 << 1));
  *(u16 *)((param_1 + 0x6c)) = 0;
  *(u16 *)((param_1 + 0x6c) + 2) = 0;
  *(u16 *)((param_1 + 0x6c) + 4) = 0;
  *(u16 *)((param_1 + 0x6c) + 6) = 0;
  *(u16 *)((param_1 + 0x6c) + 8) = 0;
  *(u32 *)((param_1 + 0x6c) + 0xc) = 0;
  *(u8 *)((param_1 + 0x6c) + 0x10) = 0;
  *(u8 *)((param_1 + 0x6c) + 0x11) = 0;
  *(u32 *)((param_1 + 0x6c) + 0x14) = 0;
  *(u8 *)((param_1 + 0x6c) + 0x18) = 0;
  *(u8 *)(((param_1 + 0x6c) + 0x1c)) = 0;
  *(u32 *)(param_1 + 0xc) = *(u32 *)((*(u32 *)(*(u32 *)(param_1) + 0x78) + (0xa6 << 2)));
  *(u32 *)(param_1 + 0x10) = (*(u32 *)((*(u32 *)(*(u32 *)(param_1) + 0x7c) + (0xa6 << 2))) + 9);
  return param_1;
}

/* 0x080CDA44 (196B) | SpriteAnimEngine_5A28_Sub_080CDA44 (orig: func_080CDA44) | origin: wip | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_5A28_Sub_080CDA44(u32 *param_1) {
    int iVar3;
  u32 uVar1;
  register int iVar2;
  param_1[3] = *(int *)(*(int *)(*param_1 + 0x78) + 0x298);
  param_1[4] = *(int *)(*(int *)(*param_1 + 0x7c) + 0x298) + 9;
  iVar3 = param_1[1];
  iVar2 = *(int *)(iVar3 * 0x10 + 0x0811788C);
  if (iVar3 == 0) {
    iVar3 = param_1[2];
    if (iVar3 == 9) goto LAB_080cda92;
    uVar1 = iVar3 - 5;
  }
  else {
    if ((iVar3 != 9) || (iVar3 = param_1[2], iVar3 == 0)) goto LAB_080cda92;
    uVar1 = iVar3 - 0xe;
  }
  iVar2 = iVar3 + 4;
  if (uVar1 < 4) {
    iVar2 = iVar3;
  }
LAB_080cda92:
  if (iVar2 < 9) {
    iVar3 = param_1[1];
    if ((iVar2 == 0) && (*(char *)(*(int *)(*param_1 + 0x78) + 0x27c) == '\0')) {
      iVar2 = iVar3 + 4;
    }
    for (; param_1[3] < iVar2; iVar2 = *(int *)(iVar2 * 0x10 + 0x0811788C)) {
    }
  }
  else {
    iVar3 = param_1[1];
    if ((iVar2 == 9) && (*(char *)(*(int *)(*param_1 + 0x7c) + 0x27c) == '\0')) {
      iVar2 = iVar3 + 4;
    }
    for (; param_1[4] < iVar2; iVar2 = *(int *)(iVar2 * 0x10 + 0x0811788C)) {
    }
  }
  if (iVar2 != iVar3) {
    param_1[2] = iVar3;
    param_1[1] = iVar2;
  }
  return iVar2;
}

/* 0x080CDB08 (248B) | SpriteAnimEngine_5A28_Sub_080CDB08 (orig: func_080CDB08) | origin: wip | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_5A28_Sub_080CDB08(int *param_1) {
  u32 uVar1;
  register BOOL iVar3;
  register int iVar2;
  param_1[3] = *(int *)(*(int *)(*param_1 + 0x78) + 0x298);
  param_1[4] = *(int *)(*(int *)(*param_1 + 0x7c) + 0x298) + 9;
  iVar3 = (u32)param_1[1];
  iVar2 = (s16)*(int *)(iVar3 * 0x10 + 0x0811788C + 4);
  if (iVar3 == 0) {
    iVar3 = param_1[2];
    if (9 == iVar3) goto LAB_080cdb5a;
    uVar1 = iVar3 - 1;
  }
  else {
    if ((iVar3 != 9) || (iVar3 = param_1[2], iVar3 == 0)) goto LAB_080cdb5a;
    uVar1 = iVar3 - 10;
  }
  iVar2 = iVar3 + -4;
  if (4 > uVar1) {
    iVar2 = iVar3;
  }
LAB_080cdb5a:
  if (iVar2 < 9) {
    iVar3 = param_1[1];
    if ((0 == iVar2) && (*(char *)(*(int *)(*param_1 + 0x78) + 0x27c) == '\0')) {
      iVar2 = iVar3 + -4;
    }
    while (param_1[3] < iVar2) {
      iVar2 = *(int *)(0x10 * iVar2 + 0x08117890);
      if ((iVar2 == 0) && (*(char *)(*(int *)(*param_1 + 0x78) + 0x27c) == '\0')) {
        iVar2 = iVar3;
      }
    }
  }
  else {
    iVar3 = param_1[1];
    if ((iVar2 == 9) && (*(char *)(*(int *)(*param_1 + 0x7c) + 0x27c) == '\0')) {
      iVar2 = iVar3 + -4;
    }
    while (param_1[4] < iVar2) {
      iVar2 = *(int *)(0x10 * iVar2 + 0x08117890);
      if ((iVar2 == 9) && (*(char *)(*(int *)(*param_1 + 0x7c) + 0x27c) == '\0')) {
        iVar2 = iVar3;
      }
    }
  }
  if (iVar2 != iVar3) {
    param_1[2] = iVar3;
    param_1[1] = iVar2;
  }
  return iVar2;
}

/* 0x080CDC00 (208B) | SpriteAnimEngine_5A28_Sub_080CDC00 (orig: func_080CDC00) | origin: wip | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_5A28_Sub_080CDC00(int *param_1) {
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  iVar1 = *(int *)(*param_1 + 0x78);
  iVar7 = *(int *)(iVar1 + 0x298);
  param_1[3] = iVar7;
  iVar6 = *(int *)(*param_1 + 0x7c);
  iVar5 = *(int *)(iVar6 + 0x298) + 9;
  param_1[4] = iVar5;
  iVar4 = param_1[1];
  iVar2 = 0x0811788C + 8;
  iVar3 = *(int *)(iVar4 * 0x10 + iVar2);
  if (iVar3 < 9) {
    if (iVar3 == 0) {
      iVar5 = iVar3;
      if (*(char *)(iVar1 + 0x27c) == '\0') {
        iVar5 = iVar4;
      }
    }
    else {
      while (iVar5 = iVar3, iVar7 < iVar5) {
        iVar3 = iVar7;
        if (4 < iVar7) {
          iVar3 = *(int *)(iVar5 * 0x10 + iVar2);
        }
      }
    }
    iVar3 = iVar5;
    if (((iVar5 != 4) || (iVar1 = param_1[2], iVar1 != param_1[3])) || (iVar1 < 5))
    goto LAB_080cdcbe;
  }
  else {
    iVar1 = iVar3;
    if (iVar3 == 9) {
      if (*(char *)(iVar6 + 0x27c) == '\0') {
        iVar3 = 0;
      }
    }
    else {
      while (iVar3 = iVar1, iVar5 < iVar3) {
        iVar1 = iVar5;
        if (0xd < iVar5) {
          iVar1 = *(int *)(iVar3 * 0x10 + iVar2);
        }
      }
    }
    if (((iVar3 != 0xd) || (iVar1 = param_1[2], iVar1 != param_1[4])) || (iVar1 < 0xe))
    goto LAB_080cdcbe;
  }
  iVar3 = iVar1;
LAB_080cdcbe:
  if (iVar3 != iVar4) {
    param_1[2] = iVar4;
    param_1[1] = iVar3;
  }
  return iVar3;
}

/* 0x080CDCD0 (172B) | SpriteAnimEngine_5A28_Sub_080CDCD0 (orig: func_080CDCD0) | origin: wip | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_5A28_Sub_080CDCD0(int *param_1) {
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  iVar7 = *(int *)(*param_1 + 0x78);
  iVar6 = *(int *)(iVar7 + 0x298);
  param_1[3] = iVar6;
  iVar1 = *(int *)(*param_1 + 0x7c);
  iVar5 = *(int *)(iVar1 + 0x298) + 9;
  param_1[4] = iVar5;
  iVar4 = param_1[1];
  iVar2 = 0x0811788C + 0xc;
  iVar3 = *(int *)(iVar4 * 0x10 + iVar2);
  if (iVar3 < 9) {
    if (iVar3 == 0) {
      if (*(char *)(iVar7 + 0x27c) == '\0') {
        iVar3 = 9;
      }
    }
    else if (iVar6 < iVar3) {
      if (iVar4 == 0x11) {
        iVar3 = 1;
      }
      else {
        for (; iVar3 < 9; iVar3 = *(int *)(iVar3 * 0x10 + iVar2)) {
        }
      }
    }
  }
  else if (iVar3 == 9) {
    if (*(char *)(iVar1 + 0x27c) == '\0') {
      iVar3 = 0;
    }
  }
  else if (iVar5 < iVar3) {
    if (iVar5 < 0xe) {
      iVar3 = 1;
    }
    else {
      for (; 8 < iVar3; iVar3 = *(int *)(iVar3 * 0x10 + iVar2)) {
      }
    }
  }
  if ((iVar3 == 10) && (param_1[2] == 0xe)) {
    iVar3 = 0xe;
  }
  if (iVar3 != iVar4) {
    param_1[2] = iVar4;
    param_1[1] = iVar3;
  }
  return iVar3;
}

/* 0x080CDD7C (48B) | SpriteAnimEngine_5A28_Sub_080CDD7C (orig: func_080CDD7C) | origin: wip | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_5A28_Sub_080CDD7C(int *param_1) {
  int iVar1;
  int iVar2;
  iVar2 = 10;
  if (param_1[1] < 9) {
    iVar1 = *(int *)(*param_1 + 0x7c);
  }
  else {
    iVar1 = *(int *)(*param_1 + 0x78);
    iVar2 = 1;
  }
  if (iVar1 == 0) {
    iVar2 = param_1[1];
  }
  if (iVar2 != param_1[1]) {
    param_1[2] = param_1[1];
    param_1[1] = iVar2;
  }
  return iVar2;
}

/* 0x080CE2FC (224B) | SpriteAnimEngine_5A28_Sub_080CE2FC (orig: func_080CE2FC) | origin: wip | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_5A28_Sub_080CE2FC(u32 *param_1,u32 param_2) {
  u32 uVar1;
  int iVar2;
  u32 *puVar3;
  *param_1 = param_2;
  hardware_Sub_08007874(param_1 + 1);
  uVar1 = hardware_Sub_08007B54(param_1 + 1,2);
  param_1[2] = uVar1;
  hardware_Sub_08007874(param_1 + 3);
  uVar1 = hardware_Sub_08007B54(param_1 + 3,2);
  param_1[4] = uVar1;
  hardware_Sub_08007128(param_1 + 5);
  uVar1 = hardware_Sub_0800736C(param_1 + 5);
  param_1[6] = uVar1;
  puVar3 = param_1 + 7;
  code_0803EE94_79C8_Ctor(puVar3,0x08527094);
  *(u16 *)(param_1 + 0x13) = 0;
  *(u16 *)((int)param_1 + 0x4e) = 0;
  code_0803EE94_Sub_0805E824(param_1 + 0x14,puVar3,0,0x100);
  *(u16 *)(param_1 + 0x19) = 0;
  *(u16 *)((int)param_1 + 0x66) = 0;
  *(u32 *)(param_1 + 0x1a) = 0;
  *(u16 *)((int)param_1 + 0x6a) = 0;
  *(u16 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  *(u8 *)(param_1 + 0x1d) = 0;
  *(u8 *)((int)param_1 + 0x75) = 0;
  param_1[0x1e] = 0;
  *(u8 *)(param_1 + 0x1f) = 0;
  *(u8 *)(param_1 + 0x20) = 0;
  *(u16 *)(param_1 + 0x21) = 0;
  *(u16 *)((int)param_1 + 0x86) = 0;
  code_0803EE94_Sub_0805E824(param_1 + 0x22,puVar3,1,0x100);
  *(u16 *)(param_1 + 0x27) = 0;
  *(u16 *)((int)param_1 + 0x9e) = 0;
  *(u16 *)(param_1 + 0x28) = 0;
  *(u16 *)((int)param_1 + 0xa2) = 0;
  *(u16 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  *(u8 *)(param_1 + 0x2b) = 0;
  *(u8 *)((int)param_1 + 0xad) = 0;
  param_1[0x2c] = 0;
  *(u8 *)(param_1 + 0x2d) = 0;
  *(u8 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
  iVar2 = LibC_malloc(0xc);
  if (iVar2 == 0) {
    iVar2 = code_linkonce_Sub_080D3BC0(0xc);
  }
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 4) = iVar2;
  param_1[0x31] = iVar2;
  return (param_1);
}

/* 0x080CE3DC (164B) | SpriteAnimEngine_5A28_Dtor_E3DC (orig: func_080CE3DC) | origin: wip | domain: SpriteAnimEngine_5A28 | HIGH / vtable_algebra */
void SpriteAnimEngine_5A28_Dtor_E3DC(int self,u32 param_2) {
  u32 *puVar1;
  u32 *puVar2;
  int iVar3;
  u32 *puVar4;
  u32 *puStack_18;
  u32 *sub;
  puVar1 = *(u32 **)(self + 0xc4);
  puVar2 = puVar1;
  puVar4 = (u32 *)*puVar1;
  puStack_18 = (u32 *)*puVar1;
  while ((int)(-((u32)puVar4 ^ (u32)puVar2) | (u32)puVar4 ^ (u32)puVar2) < 0) {
    iVar3 = puStack_18[2];
    if (iVar3 != 0) {
      func_080D3914(iVar3,3,*(u32 *)(*(int *)(iVar3 + 8) + 0xc));
    }
    puVar2 = (u32 *)*puStack_18;
    puVar4 = puVar1;
    puStack_18 = puVar2;
  }
  code_linkonce_Sub_080E586C(self + 0xc0);
  if (*(int *)(self + 0xc4) != 0) {
    LibC_free(self);
  }
  *(u32 *)(self + 0x1c) = 0x080E5A28;
  sub = (u32 *)(self + 0x14);
  hardware_Sub_080073E0(sub, sub[1]);
  hardware_Sub_08007184(sub,2);
  sub = (u32 *)(self + 0xc);
  hardware_Sub_08007C28(sub, sub[1]);
  hardware_Sub_080079E8(sub,2);
  sub = (u32 *)(self + 4);
  hardware_Sub_08007C28(sub, sub[1]);
  hardware_Sub_080079E8(sub,2);
  if ((param_2 & 1) != 0) {
    CppRuntime_builtin_delete(self);
  }
}

/* 0x080CEC00 (132B) | SpriteAnimEngine_5A28_Sub_080CEC00 (orig: func_080CEC00) | origin: wip | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_5A28_Sub_080CEC00(int param_1) {
  u32 val;
  val = code_0803EE94_79C8_Ctor();
  *(u16 *)(param_1 + 0x34) = 0;
  *(u16 *)(param_1 + 0x36) = 0;
  val = code_0803EE94_Sub_0805E824((param_1 + 0x38), param_1, 1, (0x80 << 1));
  *(u32 *)((param_1 + 0x4c)) = 0;
  *(u16 *)((param_1 + 0x4c) + 2) = 0;
  *(u32 *)((param_1 + 0x4c) + 4) = 0;
  *(u16 *)((param_1 + 0x4c) + 6) = 0;
  *(u32 *)((param_1 + 0x4c) + 8) = 0;
  *(u32 *)((param_1 + 0x4c) + 0xc) = 0;
  *(u32 *)((param_1 + 0x4c) + 0x10) = 0;
  *(u8 *)((param_1 + 0x4c) + 0x11) = 0;
  *(u32 *)((param_1 + 0x4c) + 0x14) = 0;
  *(u8 *)((param_1 + 0x4c) + 0x18) = 0;
  *(u8 *)(((param_1 + 0x4c) + 0x1c)) = 0;
  val = hardware_Sub_08007874((param_1 + 0x6c), param_1, 1, (0x80 << 1));
  val = hardware_Sub_08007B54((param_1 + 0x6c), 4, 1, (0x80 << 1));
  *(u32 *)((param_1 + 0x6c) + 4) = val;
  val = hardware_Sub_08007128(((param_1 + 0x6c) + 8), 4, 1, (0x80 << 1));
  val = hardware_Sub_0800736C(((param_1 + 0x6c) + 8), 4, 1, (0x80 << 1));
  *(u32 *)(((param_1 + 0x6c) + 8) + 4) = val;
  *(u32 *)(param_1 + 0x7c) = 0x12;
  *(u32 *)((param_1 + 0x80)) = 0;
  *(u16 *)(((param_1 + 0x80) + 4)) = 0;
  return param_1;
}

/* 0x080CF050 (4B) | SpriteAnimEngine_5A28_GetField_0x7C (orig: func_080CF050) | origin: pure | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_5A28_GetField_0x7C(u8 *arg0) {
    return *(u32 *)(arg0 + 124);
}

/* 0x080CF054 (8B) | SpriteAnimEngine_5A28_Sub_080CF054 (orig: func_080CF054) | origin: pure | domain: SpriteAnimEngine_5A28 | MEDIUM / tu_interp */
u32 SpriteAnimEngine_5A28_Sub_080CF054(u8 *arg0) {
    return *(u32 *)(arg0 + 128);
}

/* 0x080CFA38 (240B) | SpriteAnimEngine_5A28_Sub_080CFA38 (orig: func_080CFA38) | origin: wip | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
u32 SpriteAnimEngine_5A28_Sub_080CFA38(u32 param_1,u8 *param_2,u32 param_3) {
  char cVar1;
  int iVar2;
  u32 uVar3;
  u32 uVar4;
  u32 uVar5;
  u8 *puVar6;
  u32 uStack_28;
  u8 auStack_24 [4];
  u8 uStack_20;
  u8 uStack_1f;
  *param_2 = 0;
  uStack_28 = param_3;
  iVar2 = func_0800F09C(&uStack_28);
  if (iVar2 == 0) {
    cVar1 = func_0800F11C(&uStack_28);
    if (cVar1 == '\0') {
      RucksackItem_GetFood(auStack_24,&uStack_28);
      puVar6 = (u8 *)Food_GetDesc(auStack_24);
      goto LAB_080cfb18;
    }
    RucksackItem_GetFood(auStack_24,&uStack_28);
    uVar3 = Food_GetName(auStack_24);
  }
  else {
    puVar6 = (u8 *)0x0;
    if (iVar2 != 1) goto LAB_080cfb18;
    cVar1 = func_0800F11C(&uStack_28);
    if (cVar1 == '\0') {
      uStack_1f = RucksackItem_GetArticle(&uStack_28);
      puVar6 = (u8 *)Article_GetDesc();
      goto LAB_080cfb18;
    }
    uStack_20 = RucksackItem_GetArticle(&uStack_28);
    uVar3 = Article_GetName();
  }
  uVar4 = LibC_strlen();
  if (99 < uVar4) {
    uVar4 = 99;
  }
  LibC_memcpy(param_2,uVar3,uVar4);
  param_2[uVar4] = 0;
  uVar3 = *(u16 *)0x08117AA4;
  iVar2 = LibC_strlen(param_2);
  uVar4 = 99 - iVar2;
  puVar6 = param_2;
  if (uVar4 != 0) {
    uVar5 = LibC_strlen(uVar3);
    if (uVar4 < uVar5) {
      uVar5 = uVar4;
    }
    LibC_memcpy(param_2 + iVar2,uVar3,uVar5);
    (param_2 + iVar2)[uVar5] = 0;
  }
LAB_080cfb18:
  return puVar6;
}

/* 0x080D3C78 (604B) | SpriteAnimEngine_5A28_Ctor_3C78 (orig: func_080D3C78) | origin: wip | domain: SpriteAnimEngine_5A28 | HIGH / vtable_algebra */
void SpriteAnimEngine_5A28_Ctor_3C78(int self,u32 param_2) {
  u32 uVar1;
  int iVar2;
  u32 *sub;
  iVar2 = (s16)self + 0x00006D20;
  hardware_Sub_080073E0(iVar2,*(u32 *)(iVar2 + 4));
  hardware_Sub_08007184(iVar2,2);
  iVar2 = self + 0x00006D18;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  hardware_Sub_080079E8(iVar2,2);
  iVar2 = self + 0x00006D10;
  hardware_Sub_080073E0(iVar2,*(u32 *)(iVar2 + 4));
  hardware_Sub_08007184(iVar2,2);
  iVar2 = self + 0x00006D08;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  hardware_Sub_080079E8(iVar2,2);
  sub = (u32 *)(self + 0x6d00);
  hardware_Sub_080073E0(sub, sub[1]);
  hardware_Sub_08007184(sub,2);
  iVar2 = self + 0x00006CF8;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  hardware_Sub_080079E8(iVar2,2);
  iVar2 = self + 0x00006CF0;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  hardware_Sub_080079E8(iVar2,2);
  iVar2 = self + 0x00006CE8;
  hardware_Sub_080073E0(iVar2,*(u32 *)(iVar2 + 4));
  hardware_Sub_08007184(iVar2,2);
  iVar2 = self + 0x00006CE0;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  hardware_Sub_080079E8(iVar2,2);
  iVar2 = self + 0x00006CD8;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  hardware_Sub_080079E8(iVar2,2);
  iVar2 = self + 0x00006CD0;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  hardware_Sub_080079E8(iVar2,2);
  iVar2 = self + 0x00006CC8;
  hardware_Sub_080073E0(iVar2,*(u32 *)(iVar2 + 4));
  hardware_Sub_08007184(iVar2,2);
  iVar2 = self + 0x00006CC0;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  hardware_Sub_080079E8(iVar2,2);
  iVar2 = self + 0x00006CB8;
  hardware_Sub_080073E0(iVar2,*(u32 *)(iVar2 + 4));
  hardware_Sub_08007184(iVar2,2);
  iVar2 = self + 0x00006CB0;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  hardware_Sub_080079E8(iVar2,2);
  iVar2 = self + 0x00006CA8;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  hardware_Sub_080079E8(iVar2,2);
  iVar2 = self + 0x00006CA0;
  hardware_Sub_080073E0(iVar2,*(u32 *)(iVar2 + 4));
  hardware_Sub_08007184(iVar2,2);
  iVar2 = self + 0x00006C98;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  hardware_Sub_080079E8(iVar2,2);
  iVar2 = self + 0x00006C90;
  hardware_Sub_080073E0(iVar2,*(u32 *)(iVar2 + 4));
  hardware_Sub_08007184(iVar2,2);
  iVar2 = self + 0x00006C88;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  hardware_Sub_080079E8(iVar2,2);
  sub = (u32 *)(self + 0x6c80);
  hardware_Sub_080073E0(sub, sub[1]);
  hardware_Sub_08007184(sub,2);
  iVar2 = self + 0x00006C78;
  hardware_Sub_08007C28(iVar2,*(u32 *)(iVar2 + 4));
  hardware_Sub_080079E8(iVar2,2);
  hardware_Sub_08007184(self + 0x00006C74,2);
  hardware_Sub_080079E8(self + 0x00006C70,2);
  uVar1 = 0x080E5A28;
  *(u32 *)(self + 0x00006A70) = 0x080E5A28;
  iVar2 = 0x00006A40;
  *(u32 *)(self + 0x00006A40) = uVar1;
  hardware_Dtor(self,param_2);
  *(u32 *)(self + iVar2 + -0x30) = uVar1;
}

/* 0x080D3ED4 (32B) | SpriteAnimEngine_5A28_Dtor_3ED4 (orig: func_080D3ED4) | origin: pure | domain: SpriteAnimEngine_5A28 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
void SpriteAnimEngine_5A28_Dtor_3ED4(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E5A28;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080D406C (96B) | SpriteAnimEngine_5A28_Ctor_406C (orig: func_080D406C) | origin: pure | domain: SpriteAnimEngine_5A28 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Sub_08007184();
extern u32 hardware_Sub_080073E0();
extern u32 hardware_Sub_080079E8();
extern u32 hardware_Sub_08007C28();
extern u32 hardware_Dtor();
extern u32 SpriteAnimEngine_5A28_Wrap_Dtor_0D0C();
extern u32 func_080D3914();
void SpriteAnimEngine_5A28_Ctor_406C(int arg0, u32 arg1) {
  int *mem_ptr;
  u32 *sub;
  sub = (u32 *)(arg0 + 0x54);
  hardware_Sub_080073E0(sub, sub[1]);
  hardware_Sub_08007184(sub, 2);
  sub = (u32 *)(arg0 + 0x4c);
  hardware_Sub_08007C28(sub, sub[1]);
  hardware_Sub_080079E8(sub, 2);
  *(u32 *)(arg0 + 0x1c) = 0x080E5A28;
  SpriteAnimEngine_5A28_Wrap_Dtor_0D0C(arg0 + 0x10, 2);
  mem_ptr = *(int **)(arg0 + 0xc);
  if (mem_ptr != (int *)0) {
    func_080D3914(mem_ptr, 3, *(u32 *)(*mem_ptr + 8));
  }
  hardware_Dtor(arg0, arg1);
}

/* 0x080E0C38 (280B) | SpriteAnimEngine_5A28_Dtor_0C38 (orig: func_080E0C38) | origin: wip | domain: SpriteAnimEngine_5A28 | HIGH / vtable_algebra */
void SpriteAnimEngine_5A28_Dtor_0C38(u32 *self,u32 param_2) {
    int * piVar4;
    u32 * puVar2;
  u32 *puVar1;
  register int iVar3;
  if ((self != (u8)(u32 *)0xfffffc74) && (self + 0xe3 != self + 0x107)) {
    puVar1 = self + 0x107;
    do {
      puVar2 = puVar1 + -6;
      func_080D3914(puVar2,0,*(u32 *)(puVar1[-4] + 0xc));
      puVar1 = puVar2;
    } while (self + 0xe3 != puVar2);
  }
  if (self != (u32 *)0xfffffc8c) {
    puVar1 = self + 0xe3;
    while (self + 0xdd != puVar1) {
      puVar2 = puVar1 + -2;
      hardware_Sub_08007C28(puVar2,puVar1[-1]);
      hardware_Sub_080079E8(puVar2,2);
      puVar1 = (u16)puVar2;
    }
  }
  if (self != (u8)(u32 *)0xffffffac) {
    piVar4 = self + 0x1c;
    while (self + 0x15 != piVar4) {
      piVar4 = piVar4 + -1;
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        hardware_Dtor_98AC(iVar3 + 8,2);
        hardware_Sub_08007C28(iVar3,*(u32 *)(iVar3 + 4));
        hardware_Sub_080079E8(iVar3,2);
        CppRuntime_builtin_delete(iVar3);
      }
    }
  }
  iVar3 = self[0x14];
  if (iVar3 != 0) {
    hardware_Dtor_98AC(iVar3 + 8,2);
    hardware_Sub_08007C28(iVar3,*(u32 *)(iVar3 + 4));
    hardware_Sub_080079E8(iVar3,2);
    CppRuntime_builtin_delete(iVar3);
  }
  hardware_Dtor_98AC(self + 0xe,2);
  hardware_Sub_080073E0(self + 0xc,self[0xd]);
  hardware_Sub_08007184(self + 0xc,2);
  *self = 0x080E5A28;
  if ((param_2 & 1) != 0) {
    CppRuntime_builtin_delete(self);
  }
}

/* 0x080E0D70 (272B) | SpriteAnimEngine_5A28_Dtor_0D70 (orig: func_080E0D70) | origin: wip | domain: SpriteAnimEngine_5A28 | HIGH / vtable_algebra */
void SpriteAnimEngine_5A28_Dtor_0D70(u32 *self,u32 param_2) {
  u32 uVar1;
  hardware_Dtor_98AC(self + 0xd0,2);
  hardware_Sub_08007C28(self + 0xce,self[0xcf]);
  hardware_Sub_080079E8(self + 0xce,2);
  hardware_Dtor_98AC(self + 199,2);
  hardware_Sub_08007C28(self + 0xc5,self[0xc6]);
  hardware_Sub_080079E8(self + 0xc5,2);
  hardware_Dtor_98AC(self + 0xbf,2);
  hardware_Sub_080073E0(self + 0xbd,self[0xbe]);
  hardware_Sub_08007184(self + 0xbd,2);
  hardware_Dtor_98AC(self + 0xb6,2);
  hardware_Sub_08007C28(self + 0xb4,self[0xb5]);
  hardware_Sub_080079E8(self + 0xb4,2);
  hardware_Dtor_98AC(self + 0xad,2);
  hardware_Sub_08007C28(self + 0xaa,self[0xab]);
  hardware_Sub_080079E8(self + 0xaa,2);
  hardware_Dtor_98AC(self + 100,2);
  hardware_Sub_08007C28(self + 0x61,self[0x62]);
  hardware_Sub_080079E8(self + 0x61,2);
  hardware_Dtor_98AC(self + 0x1a,2);
  hardware_Sub_080073E0(self + 0x18,self[0x19]);
  hardware_Sub_08007184(self + 0x18,2);
  uVar1 = 0x080E5A28;
  self[0xc] = 0x080E5A28;
  *self = uVar1;
  if ((param_2 & 1) != 0) {
    CppRuntime_builtin_delete(self);
  }
}

/* 0x080E1148 (68B) | SpriteAnimEngine_5A28_Ctor_1148 (orig: func_080E1148) | origin: wip | domain: SpriteAnimEngine_5A28 | HIGH / vtable_algebra */
void SpriteAnimEngine_5A28_Ctor_1148(int self, char param_2) {
  u32 *sub;
  hardware_Sub_080073E0(0xb0 + self,*(u32 *)(self + 0xb4));
  hardware_Sub_08007184(self + 0xb0,2);
  sub = (u32 *)(self + 0xa8);
  hardware_Sub_08007C28(sub, sub[1]);
  hardware_Sub_080079E8(sub,2);
  *(u32 *)(self + 0x10) = 0x080E5A28;
  hardware_Dtor(self,param_2);
}

/* 0x080E1984 (32B) | SpriteAnimEngine_5A28_Dtor_1984 (orig: func_080E1984) | origin: pure | domain: SpriteAnimEngine_5A28 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
void SpriteAnimEngine_5A28_Dtor_1984(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E5A28;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080E1A54 (28B) | SpriteAnimEngine_5A28_Ctor_1A54 (orig: func_080E1A54) | origin: pure | domain: SpriteAnimEngine_5A28 | HIGH / vtable_algebra */
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
extern u32 code_0803EE94_7B88_Dtor();
void SpriteAnimEngine_5A28_Ctor_1A54(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    register u32 r0 = arg0;
    register u32 r1 = arg1;
    register u32 r2 = arg2;
    register u32 r3 = arg3;
    r2 = 0x000009C4;
    r3 = r0 + r2;
    r2 = 0x080E5A28;
    *(u32 *)(r3) = r2;
    r0 = code_0803EE94_7B88_Dtor(r0, r1, r2, r3);
    return r0;
}

/* 0x080E1DD4 (84B) | SpriteAnimEngine_5A28_Ctor_1DD4 (orig: func_080E1DD4) | origin: wip | domain: SpriteAnimEngine_5A28 | HIGH / vtable_algebra */
void SpriteAnimEngine_5A28_Ctor_1DD4(int self,u32 param_2) {
  int *piVar1;
  int iVar2;
  for (piVar1 = (int *)(self + 0x128);
      piVar1 != (int *)(self + 0x124) + *(int *)(self + 0x124) * 2 + 1; piVar1 = piVar1 + 2) {
  }
  *(u32 *)(self + 0xc) = 0x080E5A28;
  iVar2 = *(int *)(self + 8);
  if ((u8)iVar2 != 0) {
    func_080D3914(iVar2,3,*(u32 *)(*(int *)(iVar2 + 0x000005B4) + 8));
  }
  hardware_Dtor(self,param_2);
}

/* 0x080E1E28 (388B) | SpriteAnimEngine_5A28_Dtor_1E28 (orig: func_080E1E28) | origin: wip | domain: SpriteAnimEngine_5A28 | HIGH / vtable_algebra */
void SpriteAnimEngine_5A28_Dtor_1E28(int self,u32 param_2) {
  u32 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  if ((self + 0x00004120 != 0) &&
     (iVar3 = self + 0x00004120 + 0x50, self + 0x00004120 != iVar3)) {
    iVar5 = self + 0x00004120;
    do {
      iVar4 = iVar3 + -8;
      hardware_Sub_080073E0(iVar4,*(u32 *)(iVar3 + -4));
      hardware_Sub_08007184(iVar4,2);
      iVar3 = iVar4;
    } while (iVar5 != iVar4);
  }
  piVar6 = (int *)(self + 0x00003FA8);
  piVar2 = (int *)(0x00003EA4 + self);
  if ((self + 0x000040D0 != 0) && (self + 0x000040D0 != self + 0x00004120)) {
    iVar5 = self + 0x000040D0;
    iVar3 = self + 0x00004120;
    do {
      iVar4 = iVar3 + -8;
      hardware_Sub_08007C28(iVar4,*(u32 *)(iVar3 + -4));
      hardware_Sub_080079E8(iVar4,2);
      iVar3 = iVar4;
    } while (iVar5 != iVar4);
  }
  iVar3 = self + 0x000040C8;
  hardware_Sub_080073E0(iVar3,*(u32 *)(iVar3 + 4));
  hardware_Sub_08007184(iVar3,2);
  iVar3 = self + 0x000040C0;
  hardware_Sub_08007C28(iVar3,*(u32 *)(iVar3 + 4));
  hardware_Sub_080079E8(iVar3,2);
  iVar3 = self + 0x000040B8;
  hardware_Sub_080073E0(iVar3,*(u32 *)(iVar3 + 4));
  hardware_Sub_08007184(iVar3,2);
  iVar3 = self + 0x000040B0;
  hardware_Sub_08007C28(iVar3,*(u32 *)(iVar3 + 4));
  hardware_Sub_080079E8(iVar3,2);
  for (; piVar6 != (int *)(self + 0x00003FA4) + *(int *)(self + 0x00003FA4) * 3 + 1;
      piVar6 = piVar6 + 3) {
  }
  for (; piVar2 != (int *)(self + 0x00003EA0) + *(int *)(self + 0x00003EA0) * 4 + 1;
      piVar2 = piVar2 + 4) {
  }
  SpriteAnimEngine_5A28_Wrap_Dtor_0D0C(self + 0x134,2);
  uVar1 = 0x080E5A28;
  *(u32 *)(self + 0x54) = 0x080E5A28;
  *(u32 *)(self + 0x24) = uVar1;
  iVar3 = *(int *)(self + 0x1c);
  if (iVar3 != 0) {
    code_0803EE94_7B68_Ctor_5DEC(iVar3 + 0x28,2);
    for (iVar5 = *(int *)(iVar3 + 0x18); iVar5 != *(int *)(iVar3 + 0x1c); iVar5 = iVar5 + 0x40) {
    }
    if (*(int *)(iVar3 + 0x18) != 0) {
      LibC_free();
    }
    CppRuntime_builtin_delete(iVar3);
  }
  piVar6 = *(int **)(self + 8);
  if (piVar6 != (int *)0x0) {
    func_080D3914(piVar6,3,*(u32 *)(*piVar6 + 8));
  }
  hardware_Dtor(self,param_2);
}

/* 0x080E2018 (124B) | SpriteAnimEngine_5A28_Ctor_2018 (orig: func_080E2018) | origin: wip | domain: SpriteAnimEngine_5A28 | HIGH / vtable_algebra */
void SpriteAnimEngine_5A28_Ctor_2018(u32 self, u32 param_2, u32 param_3, u32 param_4) {
    u32 r2;
    u32 r3;
    u32 r0 = self;
    register u32 r1 = param_2;
    r2 = param_3;
    r3 = param_4;
    register u32 r4, r5, r6, r7;
    r5 = r0 + 0;
    r7 = r1 + 0;
    r0 += 0xe0;
    if (r0 == 0) goto loc_080E203E;
    r1 = 0xd0;
    r1 = r1 << 1;
    r4 = r5 + r1;
    if (r0 == r4) goto loc_080E203E;
    r6 = r0 + 0;
loc_080E2030:
    r4 -= 0x30;
    r1 = 0;
    r0 = r4 + 0;
    r0 = SpriteAnimEngine_5A28_Sub_080E20C0(r0, r1, r2, r3);
    if (r6 != r4) goto loc_080E2030;
loc_080E203E:
    r0 = r5 + 0;
    r0 += 0xd0;
    r2 = *(u32 *)(r0 + 4);
    r1 = *(u32 *)(r0);
    r4 = r5 + 0;
    r4 += 0xa0;
    r6 = r5 + 0;
    r6 += 0x18;
    if (r1 == r2) goto loc_080E2058;
loc_080E2052:
    r1 += 0x1c;
    if (r1 != r2) goto loc_080E2052;
loc_080E2058:
    r0 = *(u32 *)(r0);
    if (r0 == 0) goto loc_080E2062;
    r0 = LibC_free(r0, r1, r2, r3);
loc_080E2062:
    r0 = 0x080E5A28;
    *(u32 *)(r4) = r0;
    *(u32 *)(r5 + 0x20) = r0;
    r0 = r6 + 0;
    r1 = 2;
    r0 = code_0803EE94_7B5C_Dtor(r0, r1, r2, r3);
    r1 = *(u32 *)(r5 + 0xc);
    if (r1 == 0) goto loc_080E2082;
    r0 = *(u32 *)(r1);
    r2 = *(u32 *)(r0 + 8);
    r0 = r1 + 0;
    r1 = 3;
    r0 = func_080D3914(r0, r1, r2, r3);
loc_080E2082:
    r0 = r5 + 0;
    r1 = r7 + 0;
    r0 = hardware_Dtor(r0, r1, r2, r3);
    return r0;
}

/* 0x080E20C0 (56B) | SpriteAnimEngine_5A28_Sub_080E20C0 (orig: func_080E20C0) | origin: pure | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
extern u32 LibC_free();
void SpriteAnimEngine_5A28_Sub_080E20C0(int *arg0,u32 arg1) {
  if (arg0[8] != 0) {
    LibC_free();
  }
  if (arg0[4] != 0) {
    LibC_free();
  }
  if (*arg0 != 0) {
    LibC_free();
  }
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080E211C (84B) | SpriteAnimEngine_5A28_Ctor_211C (orig: func_080E211C) | origin: wip | domain: SpriteAnimEngine_5A28 | HIGH / vtable_algebra */
void SpriteAnimEngine_5A28_Ctor_211C(int self,u32 param_2) {
  int *piVar1;
  int iVar2;
  for (piVar1 = (int *)(self + 0x128);
      piVar1 != (int *)(self + 0x124) + *(int *)(self + 0x124) * 2 + 1; piVar1 = piVar1 + 2) {
  }
  *(u32 *)(self + 0xc) = 0x080E5A28;
  iVar2 = *(int *)(self + 8);
  if ((u8)iVar2 != 0) {
    func_080D3914(iVar2,3,*(u32 *)(*(int *)(iVar2 + 0x000005B4) + 8));
  }
  hardware_Dtor(self,param_2);
}

/* 0x080E2E34 (56B) | SpriteAnimEngine_5A28_Ctor_2E34 (orig: func_080E2E34) | origin: pure | domain: SpriteAnimEngine_5A28 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 hardware_Dtor();
extern u32 func_080D3914();
void SpriteAnimEngine_5A28_Ctor_2E34(int arg0,u32 arg1) {
  int val;
  *(u32 *)(arg0 + 0xc) = 0x080E5A28;
  val = *(int *)(arg0 + 8);
  if (val != 0) {
    func_080D3914(val,3,*(u32 *)(*(int *)(val + 0x000005B4) + 8));
  }
  hardware_Dtor(arg0,arg1);
}

/* 0x080E2E78 (44B) | SpriteAnimEngine_5A28_Sub_080E2E78 (orig: func_080E2E78) | origin: pure | domain: SpriteAnimEngine_5A28 | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 LibC_free();
void SpriteAnimEngine_5A28_Sub_080E2E78(u32 arg0,int arg1) {
  int val;
  while (val = arg1, val != 0) {
    SpriteAnimEngine_5A28_Sub_080E2E78(arg0,*(u32 *)(val + 0xc));
    arg1 = *(int *)(val + 8);
    if (val != 0) {
      LibC_free(val);
    }
  }
}

/* 0x080E32E8 (176B) | SpriteAnimEngine_5A28_Ctor_32E8 (orig: func_080E32E8) | origin: wip | domain: SpriteAnimEngine_5A28 | HIGH / vtable_algebra */
void SpriteAnimEngine_5A28_Ctor_32E8(int self,u32 param_2) {
    s32 iVar2;
  register u8 uVar1;
  register int *piVar3;
  if (*(short *)(self + 0x1e4) != 0) {
    SpriteAnimEngine_5A28_Sub_080E2E78(self + 0x1dc,*(u32 *)(*(int *)(self + 0x1e0) + 4));
    *(int *)(*(int *)(self + 0x1e0) + 8) = *(int *)(self + 0x1e0);
    *(u32 *)(*(int *)(self + 0x1e0) + 4) = 0;
    *(int *)(*(int *)(self + 0x1e0) + 0xc) = *(int *)(self + 0x1e0);
    *(u32 *)(self + 0x1e4) = 0;
  }
  if (*(int *)(self + 0x1e0) != 0) {
    LibC_free();
  }
  for (iVar2 = *(int *)(self + 0x1cc); iVar2 != *(int *)(self + 0x1d0); iVar2 = iVar2 + 0x1c) {
  }
  if (*(int *)(self + 0x1cc) != 0) {
    LibC_free();
  }
  uVar1 = 0x080E5A28;
  *(u32 *)(self + 0x19c) = 0x080E5A28;
  *(u32 *)(self + 0x28) = uVar1;
  code_0803EE94_7B5C_Dtor(self + 0x20,2);
  SpriteAnimEngine_5A28_Wrap_Dtor(self + 0x1c,2);
  SpriteAnimEngine_5A28_Wrap_Dtor_0D0C(self + 0x18,2);
  piVar3 = *(int **)(self + 0xc);
  if (piVar3 != (int *)0x0) {
    func_080D3914(piVar3,3,*(u32 *)(*piVar3 + 8));
  }
  hardware_Dtor(self,param_2);
}

/* 0x080E33D0 (196B) | SpriteAnimEngine_5A28_Ctor_33D0 (orig: func_080E33D0) | origin: pure | domain: SpriteAnimEngine_5A28 | HIGH / vtable_algebra */
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
extern u32 hardware_Sub_08007184();
extern u32 hardware_Sub_080073E0();
extern u32 hardware_Sub_080079E8();
extern u32 hardware_Sub_08007C28();
extern u32 hardware_Dtor();
extern u32 LibC_free();
void SpriteAnimEngine_5A28_Ctor_33D0(int arg0,u32 arg1) {
  u32 val;
  int val2;
  u32 *sub;
  if (*(int *)(arg0 + 0xa60) != 0) {
    LibC_free();
  }
  val2 = arg0 + 0x00000838;
  hardware_Sub_080073E0(val2,*(u32 *)(val2 + 4));
  hardware_Sub_08007184(val2,2);
  sub = (u32 *)(arg0 + 0x830);
  hardware_Sub_08007C28(sub, sub[1]);
  hardware_Sub_080079E8(sub,2);
  val2 = arg0 + 0x00000828;
  hardware_Sub_080073E0(val2,*(u32 *)(val2 + 4));
  hardware_Sub_08007184(val2,2);
  sub = (u32 *)(arg0 + 0x820);
  hardware_Sub_08007C28(sub, sub[1]);
  hardware_Sub_080079E8(sub,2);
  val2 = arg0 + 0x00000818;
  hardware_Sub_080073E0(val2,*(u32 *)(val2 + 4));
  hardware_Sub_08007184(val2,2);
  sub = (u32 *)(arg0 + 0x810);
  hardware_Sub_08007C28(sub, sub[1]);
  hardware_Sub_080079E8(sub,2);
  *(u32 *)(arg0 + 0x00000744) = 0x080E5A28;
  val2 = 0x00000744;
  val = 0x080E5A28;
  *(u32 *)(arg0 + val2 + -0x30) = val;
  hardware_Dtor(arg0,arg1);
}

/* 0x080E3504 (216B) | SpriteAnimEngine_5A28_Dtor_3504 (orig: func_080E3504) | origin: wip | domain: SpriteAnimEngine_5A28 | HIGH / vtable_algebra */
void SpriteAnimEngine_5A28_Dtor_3504(int self,u32 param_2) {
  u32 *sub;
  int iVar1;
  if (*(int *)(self + 0x94) != 0) {
    SpriteAnimEngine_5A28_Dtor_E3DC(*(int *)(self + 0x94),3);
  }
  iVar1 = *(int *)(self + 0x90);
  if (iVar1 != 0) {
    sub = (u32 *)(iVar1 + 0x74);
  hardware_Sub_080073E0(sub, sub[1]);
  hardware_Sub_08007184(sub,2);
    sub = (u32 *)(iVar1 + 0x6c);
  hardware_Sub_08007C28(sub, sub[1]);
  hardware_Sub_080079E8(sub,2);
    *(u32 *)(iVar1 + 4) = 0x080E5A28;
    CppRuntime_builtin_delete(iVar1);
  }
  iVar1 = *(int *)(self + 0x8c);
  if (iVar1 != 0) {
    *(u32 *)(iVar1 + 0x24) = 0x080E5A28;
    sub = (u32 *)(iVar1 + 0x1c);
  hardware_Sub_080073E0(sub, sub[1]);
  hardware_Sub_08007184(sub,2);
    sub = (u32 *)(iVar1 + 0x14);
  hardware_Sub_08007C28(sub, sub[1]);
  hardware_Sub_080079E8(sub,2);
    CppRuntime_builtin_delete(iVar1);
  }
  SpriteAnimEngine_5A28_Wrap_Dtor_0D0C(self + 0x80,2);
  iVar1 = *(int *)(self + 0x7c);
  if (iVar1 != 0) {
    func_080D3914(iVar1,3,*(u32 *)(*(int *)(iVar1 + 0x210) + 8));
  }
  iVar1 = *(int *)(self + 0x78);
  if (iVar1 != 0) {
    func_080D3914(iVar1,3,*(u32 *)(*(int *)(iVar1 + 0x210) + 8));
  }
  *(u32 *)(self + 0x10) = 0x080E5A28;
  hardware_Dtor(self,param_2);
}

