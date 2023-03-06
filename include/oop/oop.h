#ifndef LIB_OOP_H
#define LIB_OOP_H
#include <string>
#include <iostream>
using namespace std;
// class animal as base class
class Animal
{
	private :
    string nama;
	int kaki;

	public:
	 Animal();
	virtual ~Animal(){cout << "destructor Animal"<< endl;};
	virtual void setKaki(int setkaki)=0;
	virtual int getKaki(void)=0;
	
};

// derived class
class Mamalia : public Animal{
private:
	string nama ;
	int kaki ;

public:
	//ctor
	Mamalia();
	//dtor
	~Mamalia()override{cout << "destructor Mamalia"<<endl;};

	// member function
	void setKaki(int setkaki) override;
	int getKaki(void) override;

};

#endif