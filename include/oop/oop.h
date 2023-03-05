#ifndef LIB_OOP_H
#define LIB_OOP_H
#include <string>
#include <iostream>
using namespace std;
class Animal
{
	private :
	string nama;
	int kaki;

	public:
	Animal();
	~Animal(){cout << "destructor"<< endl;};
	void setKaki(int setkaki);
	int getKaki(void);
	
};

#endif