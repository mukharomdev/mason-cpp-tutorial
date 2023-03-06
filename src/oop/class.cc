#include "oop/oop.h"
// //base class
 Animal::Animal(){}

// void Animal::setKaki(int setkaki){
// 	kaki = setkaki;
// }

// int Animal::getKaki(void){
// 	return this->kaki;
// }


// derived class Mamalia 

Mamalia::Mamalia(){}
void Mamalia::setKaki(int setkaki){
	this->kaki = setkaki;
}

int Mamalia::getKaki(void){
	return this->kaki;
}