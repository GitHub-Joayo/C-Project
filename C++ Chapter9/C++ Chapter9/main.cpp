#include <iostream>

#include "VirtualInternal.h"
#include "MultiInheritage.h"
#include "VirtualInheritance.h"

using namespace std;

int main(void) {

	/*
	AAA *aptr = new AAA();
	aptr->Func1();

	BBB *bptr = new BBB();
	bptr->Func1();
	*/

	/*
	MultiDeriv mdr;
	mdr.ComplexFunc();
	*/

	cout << "Before make Object" << endl;
	LastDerived ldr;
	cout << "After make Object" << endl;
	ldr.ComplexFunc();

	system("pause");

	return 0;

}