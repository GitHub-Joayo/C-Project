#include "MultiInheritage.h"

#include <iostream>

using namespace std;

void BaseOne::SimpleFuncOne() {

	cout << "BaseOne" << endl;

}

void BaseTwo::SimpleFuncTwo() {

	cout << "BaseTwo" << endl;

}

void MultiDeriv::ComplexFunc() {

	SimpleFuncOne();
	SimpleFuncTwo();

}