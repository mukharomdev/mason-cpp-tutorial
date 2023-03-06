#include <iostream>
#include <threads.h>
#include "main.h"

using namespace std;

int main()
{   /* basic
     * 
    */
    int result = add<int>(2,6);
    cout << result << endl;
    double resultd = add<double>(3.299,4.899);
    cout << resultd << endl;
    string nama = add<string>("yodha","rishang");
    cout << nama << endl;
    int resultb = add<int,2>(10);
    cout << resultb << endl; 





    //oop 
    Mamalia kuda;
    kuda.setKaki(4);
    cout << kuda.getKaki() << endl;
    cout << sizeof(kuda) << endl;
	return 0;
}