#include <iostream>
#include <threads.h>
#include "main.h"

using namespace std;

int main()
{    
    Animal kuda;
    kuda.setKaki(4);
    cout << kuda.getKaki() << endl;
	return 0;
}