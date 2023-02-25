#ifndef LIB_MAIN
#define LIB_MAIN
#if defined(__linux__) && __GLIBCXX__ >= 201710
#include "tambah.h"
#endif
void f(void);              // function declaration with external linkage
extern int state;          // variable declaration with external linkage
static const int size = 5; // definition of a read-only variable with internal linkage
enum { MAX = 10 };         // constant definition
inline int sum (int a, int b) { return a+b; } // inline function definition
#endif