#include "ArrayTemplate.h"

template <class Arr>
BoundCheckArray<Arr>::BoundCheckArray(int len) : arrlen(len) {

	arr = new Arr[len];

}

template <class Arr>
Arr& BoundCheckArray<Arr>::operator[] (int idx) {

	if (idx < 0 || idx >= arrlen) {

		cout << "array index out of bound exception" << endl;
		system("pause");
		exit(1);

	}

	return arr[idx];

}

template <class Arr>
Arr BoundCheckArray<Arr>::operator[] (int idx) const {

	if (idx < 0 || idx >= arrlen) {

		cout << "array index out of bound exception" << endl;
		system("pause");
		exit(1);

	}

	return arr[idx];

}

template <class Arr>
int BoundCheckArray<Arr>::GetArrLen() const {

	return arrlen;

}

template <class Arr>
BoundCheckArray<Arr>::~BoundCheckArray() {

	delete[] arr;

}