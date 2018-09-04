#include "ArrayClass.h"

#include <iostream>

using namespace std;

BoundCheckIntArray::BoundCheckIntArray(int len) : arrLen(len) {

	arr = new int[len];

}

int& BoundCheckIntArray::operator[](int idx) {

	if (idx < 0 || idx >= arrLen) {

		cout << "Array index out of bound exception" << endl;
		system("pause");
		exit(1);

	}

	return arr[idx];

}

int& BoundCheckIntArray::operator[](int idx) const {

	if (idx < 0 || idx >= arrLen) {

		cout << "Array index out of bound exception" << endl;
		system("pause");
		exit(1);

	}

	return arr[idx];

}

int BoundCheckIntArray::GetArrLen() const {

	return arrLen;

}

BoundCheckIntArray::~BoundCheckIntArray() {

	delete[] arr;

}

void ShowAllData(const BoundCheckIntArray& ref) {

	int len = ref.GetArrLen();

	for (int idx = 0; idx < len; idx++)
		cout << ref[idx] << endl;

}