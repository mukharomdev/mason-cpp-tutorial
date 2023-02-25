#include "main.h"
#include <iostream>
int tambah(int a,int b){return a + b;}

static void local_f(int s) {std::cout << s << std::endl;}  // definition with internal linkage (only used in this file)
thread_local int local_state;        // definition with internal linkage (only used in this file)
 
int state;                     // definition with external linkage (used by main.c)
void f(void) {local_f(state);} // definition with external linkage (used by main.c)