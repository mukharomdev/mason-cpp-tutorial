#include <iostream>
#include <threads.h>
#include "main.h"

using namespace std;

int main()
{    
	cout << "2 + 19 = "<< tambah(2,19) << endl;
	cout << _GNU_SOURCE << endl;
	int x[MAX] = {size}; // uses the constant and the read-only variable
    state = 7;           // modifies state in flib.c
    f();                // calls f() in tambah.cc
    cout << " " << x[0]<< endl;
    
    /*
    include asm into main function
     */
    int foo = 10, bar = 15;
        __asm__ __volatile__("addl  %%ebx,%%eax"
                             :"=a"(foo)
                             :"a"(foo), "b"(bar)
                             );
     cout << foo << endl;
	return 0;
}