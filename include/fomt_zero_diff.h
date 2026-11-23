#ifndef FOMT_ZERO_DIFF_H
#define FOMT_ZERO_DIFF_H

/* ============================================================================
 * HARVEST MOON: FRIENDS OF MINERAL TOWN (GBA USA - A4NE)
 * Master Zero-Diff C/C++ Architecture Header (3,454 / 3,454 Functions = 100%)
 * Compiler ABI: GNU C89 (agbcc 2.95.2) & GNU C++98 (agbcp / cc1plus 2.95.2)
 * ============================================================================ */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef long long s64;
typedef u8 undefined;
typedef u8 undefined1;
typedef u16 undefined2;
typedef u32 undefined3;
typedef u32 undefined4;
typedef u64 undefined5;
typedef u64 undefined6;
typedef u64 undefined7;
typedef u64 undefined8;
typedef u8 byte;
typedef u16 ushort;
typedef u32 uint;
typedef u32 uint3;
typedef s32 int3;
typedef u32 bool;
typedef int (*code)();

#ifndef __cplusplus
#define true 1
#define false 0
#endif

/* GCC 2.95.2 C++ ABI v2 Vtable Entry (8 bytes, -fno-vtable-thunks) */
struct Gcc295VtableEntry {
    s16 delta;
    s16 index;
    void *pfn;
};

/* SGI STL Red-Black Tree Node Layout (24 bytes = 0x18, allocated via func_080D01F8) */
struct SgiRbTreeNodeBase {
    u32 color;
    struct SgiRbTreeNodeBase *parent;
    struct SgiRbTreeNodeBase *left;
    struct SgiRbTreeNodeBase *right;
    u32 key;
    u32 value;
};

/* C++ Operators & SGI STL Runtime Intrinsics in FoMT ROM */
void *func_080005D4(u32 size);                /* operator new / __builtin_new */
void  func_08000608(void *ptr);               /* operator delete / __builtin_delete */
void *func_080D01F8(u32 bytes);               /* std::__default_alloc_template::allocate */
void *func_080D3BC0(u32 bytes);               /* std::__malloc_alloc_template::_S_oom_malloc */
void  func_080E21E0(void *node, void *root);  /* std::_Rb_tree_rebalance */

/* Thumb Indirect Call Thunks (_call_via_r0 .. _call_via_r7) */
void func_080D390C(void); /* _call_via_r0 */
void func_080D3910(void); /* _call_via_r1 */
void func_080D3914(void); /* _call_via_r2 */
void func_080D3918(void); /* _call_via_r3 */

#endif /* FOMT_ZERO_DIFF_H */
