/* FIO-DECOMP-HMFOMT :: Port Readable Module: scene (9 functions) */
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

/* 0x080007EC (32B) | scene_Dtor (orig: func_080007EC) | origin: pure | domain: scene | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
void scene_Dtor(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E59CC;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x0800080C (32B) | scene_Dtor_080C (orig: func_0800080C) | origin: pure | domain: scene | HIGH / vtable_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 CppRuntime_builtin_delete();
void scene_Dtor_080C(u32 *arg0,u32 arg1) {
  *arg0 = 0x080E59DC;
  if ((arg1 & 1) != 0) {
    CppRuntime_builtin_delete(arg0);
  }
}

/* 0x0800082C (232B) | scene_Sub_0800082C (orig: func_0800082C) | origin: wip | domain: scene | HIGH / stanhash_map_tu */
void scene_Sub_0800082C(int *param_1) {
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piStack_2c;
  int *piStack_28;
  int **ppiStack_24;
  int *piStack_20;
  int **ppiStack_1c;
  int *piStack_18;
  if (*param_1 != 0) {
    do {
      func_080D3914(&piStack_2c,(int *)*param_1,*(u32 *)(*(int *)*param_1 + 0xc));
      piVar1 = piStack_2c;
      piStack_20 = piStack_2c;
      piStack_2c = (int *)0x0;
      piVar2 = (int *)*param_1;
      ppiStack_24 = &piStack_2c;
      if ((piVar2 != (int *)0x0) && (piVar2 != (int *)0x0)) {
        func_080D3914(piVar2,3,*(u32 *)(*piVar2 + 8));
      }
      *param_1 = 0;
      if (piVar1 == (int *)0x0) break;
      func_080D3914(&piStack_28,piVar1,*(u32 *)(*piVar1 + 0xc));
      piVar2 = piStack_28;
      piStack_18 = piStack_28;
      piStack_28 = (int *)0x0;
      piStack_2c = (int *)0x0;
      piVar3 = (int *)*param_1;
      ppiStack_1c = &piStack_28;
      if ((piVar2 != piVar3) && (piVar3 != (int *)0x0)) {
        func_080D3914(piVar3,3,*(u32 *)(*piVar3 + 8));
      }
      *param_1 = (int)piVar2;
      if (piStack_2c != (int *)0x0) {
        func_080D3914(piStack_2c,3,*(u32 *)(*piStack_2c + 8));
      }
      if (piVar1 != (int *)0x0) {
        func_080D3914(piVar1,3,*(u32 *)(*piVar1 + 8));
      }
    } while (*param_1 != 0);
  }
  param_1 = (int *)*param_1;
  if (param_1 != (int *)0x0) {
    func_080D3914(param_1,3,*(u32 *)(*param_1 + 8));
  }
}

/* 0x080DC474 (40B) | scene_Sub_080DC474 (orig: func_080DC474) | origin: pure | domain: scene | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void scene_Sub_080DC474(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 8);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DC4E4 (40B) | scene_Sub_080DC4E4 (orig: func_080DC4E4) | origin: pure | domain: scene | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void scene_Sub_080DC4E4(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080DC554 (40B) | scene_Sub_080DC554 (orig: func_080DC554) | origin: pure | domain: scene | MEDIUM / graph_algebra */
#define true 1
#define false 0
#define NULL ((void *)0)
extern u32 scene_Dtor_080C();
extern u32 func_080D3914();
void scene_Sub_080DC554(int arg0,u32 arg1) {
  int *mem_ptr;
  mem_ptr = *(int **)(arg0 + 4);
  if (mem_ptr != (int *)0x0) {
    func_080D3914(mem_ptr,3,*(u32 *)(*mem_ptr + 8));
  }
  scene_Dtor_080C(arg0,arg1);
}

/* 0x080E41B0 (56B) | scene_Sub_080E41B0 (orig: func_080E41B0) | origin: pure | domain: scene | MEDIUM / graph_algebra */
class V0 { public: virtual ~V0(); };
class V4 { public: int x; virtual ~V4(); };
struct S_080E41B0 { int f0; V4 *f4; V0 *f8; };
extern "C" void scene_Dtor(void *, int);
extern "C" void scene_Sub_080E41B0(S_080E41B0 *a, int b) {
    delete a->f8;
    delete a->f4;
    scene_Dtor(a, b);
}

/* 0x080E41E8 (40B) | scene_Sub_080E41E8 (orig: func_080E41E8) | origin: pure | domain: scene | MEDIUM / graph_algebra */
extern void scene_Dtor();
extern void func_080D3914();
void scene_Sub_080E41E8(int arg0, u32 arg1) {
    int *mem_ptr = *(int **)(arg0 + 4);
    if (mem_ptr != 0) {
        func_080D3914(mem_ptr, 3, *(u32 *)(*mem_ptr + 8));
    }
    scene_Dtor(arg0, arg1);
}

/* 0x080E4210 (40B) | scene_Sub_080E4210 (orig: func_080E4210) | origin: pure | domain: scene | MEDIUM / graph_algebra */
extern void scene_Dtor();
extern void func_080D3914();
void scene_Sub_080E4210(int arg0, u32 arg1) {
    int *mem_ptr = *(int **)(arg0 + 4);
    if (mem_ptr != 0) {
        func_080D3914(mem_ptr, 3, *(u32 *)(*mem_ptr + 8));
    }
    scene_Dtor(arg0, arg1);
}

