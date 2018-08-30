#include "VirtualInheritance.h"

#include <iostream>

using namespace std;

One::One() {

	cout << "One" << endl;

}

void One::SimpleFunc() {

	cout << "One SimpleFunc" << endl;

}

MiddleDerivedOne::MiddleDerivedOne() {

	cout << "MiddleFuncOne" << endl;

}

void MiddleDerivedOne::MiddelFuncOne() {

	cout << "MiddleDerivedOne SimpleFunc" << endl;

}

MiddleDerivedTwo::MiddleDerivedTwo() {

	cout << "MiddleFuncTwo" << endl;

}

void MiddleDerivedTwo::MiddleFuncTwo() {

	cout << "MiddleDerivedTwo SimpleFunc" << endl;

}

LastDerived::LastDerived() {

	cout << "Last Derived" << endl;

}

void LastDerived::ComplexFunc() {

	cout << "Last CompFunc" << endl;

}