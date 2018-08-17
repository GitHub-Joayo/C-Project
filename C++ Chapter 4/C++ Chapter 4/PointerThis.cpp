#include "PointerThis.h"

#include <iostream>

using namespace std;

SoSimple::SoSimple(int n) : num(n) {
	
	cout << "num = " << num << ", ";
	cout << "Address = " << this << endl;

}

void SoSimple::ShowSimpleData() const {

	cout << num << endl;

}

SoSimple * SoSimple::GetThisPointer() {

	return this;

}