#include "ClassInit.h"

#include <iostream>

using namespace std;

SoSimple::SoSimple(SoSimple &copy) : num1(copy.num1), num2(copy.num2) {

	cout << "Called SoSimple(SoSimple &copy)" << endl;

}

void SoSimple::ShowSimpleDate() {

	cout << this->num1 << endl;
	cout << this->num2 << endl;

}