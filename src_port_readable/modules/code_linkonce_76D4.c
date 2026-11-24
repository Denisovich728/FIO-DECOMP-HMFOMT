/* FIO-DECOMP-HMFOMT :: Port Readable Module: code_linkonce_76D4 (3 functions) */
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

/* 0x080DE134 (80B) | code_linkonce_76D4_vfunc_10 (orig: func_080DE134) | origin: wip | domain: code_linkonce_76D4 | HIGH / vtable_algebra */
void code_linkonce_76D4_vfunc_10(u32 *self,u32 *param_2) {
  int iVar1;
  u32 uVar2;
  u32 uVar3;
  int *piVar4;
  u32 uVar5;
  uVar2 = *(u32 *)*self;
  uVar3 = param_2[2];
  uVar5 = *param_2;
  iVar1 = self[2];
  for (piVar4 = self + 3; piVar4 != self + iVar1 + 3; piVar4 = piVar4 + 1) {
    if (*piVar4 != 0) {
      func_080D391C(*piVar4,uVar2,uVar3,uVar5);
    }
  }
}

/* 0x080DE184 (48B) | code_linkonce_76D4_vfunc_0C (orig: func_080DE184) | origin: pure | domain: code_linkonce_76D4 | HIGH / vtable_algebra */
extern void func_080D3910();
void code_linkonce_76D4_vfunc_0C(int self) {
    int *p = (int *)(self + 0xc);
    int *end = (int *)(*(int *)(self + 8) * 4 + self + 0xc);
    for (; p != end; p++) {
        int v = *p;
        if (v != 0) {
            func_080D3910(v, *(u32 *)(*(int *)(v + 0x4c) + 0xc));
        }
    }
}

/* 0x080DE1B4 (108B) | code_linkonce_76D4_Dtor (orig: func_080DE1B4) | origin: pure | domain: code_linkonce_76D4 | HIGH / vtable_algebra */
struct V4C {
    u8 pad[0x4c];
    virtual ~V4C();
};
template <class Iterator>
class rev_it {
protected:
    Iterator current;
public:
    typedef rev_it<Iterator> _Self;
    rev_it() {}
    explicit rev_it(Iterator x) : current(x) {}
    rev_it(const _Self& x) : current(x.current) {}
    template <class Iter>
    rev_it(const rev_it<Iter>& x) : current(x.base()) {}
    Iterator base() const { return current; }
    V4C *&operator*() const {
        Iterator tmp = current;
        return *--tmp;
    }
    _Self& operator++() {
        --current;
        return *this;
    }
};
template <class Iter>
inline bool operator==(const rev_it<Iter>& x, const rev_it<Iter>& y) {
    return x.base() == y.base();
}
template <class Iter>
inline bool operator!=(const rev_it<Iter>& x, const rev_it<Iter>& y) {
    return !(x == y);
}
template <typename T, u32 Capacity>
struct FixedVec {
    u32 m_size;
    u32 m_data[(sizeof(T) * Capacity + 3) / 4];
    T *begin() { return reinterpret_cast<T *>(m_data); }
    T *end() { return reinterpret_cast<T *>(m_data) + m_size; }
    rev_it<T *> rbegin() { return rev_it<T *>(end()); }
    rev_it<T *> rend() { return rev_it<T *>(begin()); }
};
struct C_080E65E0 {
    u32 f0;
    virtual ~C_080E65E0() {}
};
struct C_080E76D4 : public C_080E65E0 {
    FixedVec<V4C *, 12> v;
    virtual ~C_080E76D4();
};
C_080E76D4::~C_080E76D4() {
    rev_it<V4C **> d0, it = v.rbegin();
    rev_it<V4C **> d1, end = v.rend();
    for (; it != end; ++it) {
        delete *it;
    }
}
extern "C" void code_linkonce_76D4_Dtor() __attribute__((alias("_._10C_080E76D4")));

