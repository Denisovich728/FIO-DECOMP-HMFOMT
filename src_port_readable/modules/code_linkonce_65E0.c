/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_linkonce_65E0 (11 functions) */
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

/* 0x080DC5F4 (52B) | code_linkonce_65E0_Dtor (orig: func_080DC5F4) | origin: pure | domain: code_linkonce_65E0 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
extern u32 code_809E804_82D8_Dtor();
void code_linkonce_65E0_Dtor(int arg0,u32 arg1) {
  code_809E804_82D8_Dtor(arg0 + 0x48,2);
  code_809E804_82D8_Dtor(arg0 + 8,2);
  *(u32 *)(arg0 + 4) = 0x080E65E0;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080DC65C (32B) | code_linkonce_65E0_Dtor_C65C (orig: func_080DC65C) | origin: pure | domain: code_linkonce_65E0 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
void code_linkonce_65E0_Dtor_C65C(int arg0,u32 arg1) {
  *(u32 *)(arg0 + 4) = 0x080E65E0;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080DC724 (64B) | code_linkonce_65E0_Dtor_C724 (orig: func_080DC724) | origin: pure | domain: code_linkonce_65E0 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
extern u32 code_809E804_82D8_Dtor();
void code_linkonce_65E0_Dtor_C724(int arg0,u32 arg1) {
  code_809E804_82D8_Dtor(arg0 + 0x8c,2);
  code_809E804_82D8_Dtor(arg0 + 0x48,2);
  code_809E804_82D8_Dtor(arg0 + 8,2);
  *(u32 *)(arg0 + 4) = 0x080E65E0;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080DC764 (104B) | code_linkonce_65E0_Dtor_C764 (orig: func_080DC764) | origin: pure | domain: code_linkonce_65E0 | HIGH / vtable_algebra */
struct D_080A47B4 {
    u8 b[0x40];
    ~D_080A47B4();
};
struct Elem48 {
    u32 f0;
    D_080A47B4 sub;
    u32 f44;
    ~Elem48() {}
};
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
struct Base04 {
    u32 f0;
    u32 vtbl;
    ~Base04() { vtbl = 0x080E65E0; }
};
struct C_080DC764 : public Base04 {
    D_080A47B4 s1;
    D_080A47B4 s2;
    u32 pad_88;
    D_080A47B4 s3;
    FV_Dtor<Elem48, 4> v;
    ~C_080DC764();
};
C_080DC764::~C_080DC764() {}
extern "C" void code_linkonce_65E0_Dtor_C764() __attribute__((alias("_._10C_080DC764")));

/* 0x080DC890 (52B) | code_linkonce_65E0_Dtor_C890 (orig: func_080DC890) | origin: pure | domain: code_linkonce_65E0 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
extern u32 code_809E804_82D8_Dtor();
void code_linkonce_65E0_Dtor_C890(int arg0,u32 arg1) {
  code_809E804_82D8_Dtor(arg0 + 0x48,2);
  code_809E804_82D8_Dtor(arg0 + 8,2);
  *(u32 *)(arg0 + 4) = 0x080E65E0;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080DC8F8 (52B) | code_linkonce_65E0_Dtor_C8F8 (orig: func_080DC8F8) | origin: pure | domain: code_linkonce_65E0 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
extern u32 code_809E804_82D8_Dtor();
void code_linkonce_65E0_Dtor_C8F8(int arg0,u32 arg1) {
  code_809E804_82D8_Dtor(arg0 + 0x48,2);
  code_809E804_82D8_Dtor(arg0 + 8,2);
  *(u32 *)(arg0 + 4) = 0x080E65E0;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080DC92C (64B) | code_linkonce_65E0_Dtor_C92C (orig: func_080DC92C) | origin: pure | domain: code_linkonce_65E0 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
extern u32 code_809E804_82D8_Dtor();
void code_linkonce_65E0_Dtor_C92C(int arg0,u32 arg1) {
  code_809E804_82D8_Dtor(arg0 + 0x8c,2);
  code_809E804_82D8_Dtor(arg0 + 0x48,2);
  code_809E804_82D8_Dtor(arg0 + 8,2);
  *(u32 *)(arg0 + 4) = 0x080E65E0;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080DCDB0 (176B) | code_linkonce_65E0_Dtor_CDB0 (orig: func_080DCDB0) | origin: wip | domain: code_linkonce_65E0 | HIGH / vtable_algebra */
void code_linkonce_65E0_Dtor_CDB0(int self,u32 param_2) {
  u8 *piVar1;
  int iVar2;
  int *piVar3;
  piVar1 = *(int **)(self + 0x14);
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    for (piVar3 = piVar1 + 1; piVar3 != piVar1 + iVar2 * 0x14 + 1; piVar3 = piVar3 + 0x14) {
      code_809E804_82D8_Dtor(piVar3,2);
    }
    CppRuntime_builtin_delete(piVar1);
  }
  piVar1 = *(int **)(self + 0x10);
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    for (piVar3 = piVar1 + 1; piVar3 != piVar1 + iVar2 * 0x10 + 1; piVar3 = piVar3 + 0x10) {
      func_080D3914(piVar3,2,*(u32 *)(piVar3[9] + 8));
    }
    CppRuntime_builtin_delete(piVar1);
  }
  iVar2 = *(int *)(self + 0xc);
  if (iVar2 != 0) {
    code_809E804_82D8_Dtor(iVar2,2);
    CppRuntime_builtin_delete(iVar2);
  }
  iVar2 = *(int *)(self + 8);
  if (iVar2 != 0) {
    code_809E804_82D8_Dtor(iVar2,2);
    CppRuntime_builtin_delete(iVar2);
  }
  *(u32 *)(self + 4) = 0x080E65E0;
  if ((param_2 & 1) != 0) {
    CppRuntime_builtin_delete(self);
  }
}

/* 0x080DCE94 (44B) | code_linkonce_65E0_Dtor_CE94 (orig: func_080DCE94) | origin: pure | domain: code_linkonce_65E0 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
extern u32 code_809E804_82D8_Dtor();
void code_linkonce_65E0_Dtor_CE94(int arg0,u32 arg1) {
  code_809E804_82D8_Dtor(arg0 + 8,2);
  *(u32 *)(arg0 + 4) = 0x080E65E0;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080DCEC0 (44B) | code_linkonce_65E0_Dtor_CEC0 (orig: func_080DCEC0) | origin: pure | domain: code_linkonce_65E0 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
extern u32 code_809E804_82D8_Dtor();
void code_linkonce_65E0_Dtor_CEC0(int arg0,u32 arg1) {
  code_809E804_82D8_Dtor(arg0 + 8,2);
  *(u32 *)(arg0 + 4) = 0x080E65E0;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x080DCF20 (44B) | code_linkonce_65E0_Dtor_CF20 (orig: func_080DCF20) | origin: pure | domain: code_linkonce_65E0 | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
extern u32 code_809E804_82D8_Dtor();
void code_linkonce_65E0_Dtor_CF20(int arg0,u32 arg1) {
  code_809E804_82D8_Dtor(arg0 + 8,2);
  *(u32 *)(arg0 + 4) = 0x080E65E0;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

