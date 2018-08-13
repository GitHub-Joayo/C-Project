#include <iostream>
#include "Reference.h"

using namespace std;

void Ref::SimpleFunc(void) {

	int num1 = 1020;
	int &num2 = num1;

	num2 = 3047;

	cout << "Val : " << num1 << endl;
	cout << "Ref : " << num2 << endl;

	cout << "Val : " << &num1 << endl;
	cout << "Ref : " << &num2 << endl;

}

void RefPtr::SimpleFunc(void) {

	int num = 12;
	int *ptr = &num;
	int **dptr = &ptr;

	int &ref = num;
	int *(&pref) = ptr;
	int **(&dpref) = dptr;

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;

}

void ByRef::SimpleFunc(int &ref1, int &ref2) {

	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;

}

int RefReturn::RefReturnOne(int &ref) {

	ref++;
	return ref;

}