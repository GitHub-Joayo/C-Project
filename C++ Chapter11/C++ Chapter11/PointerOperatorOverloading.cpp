#include "PointerOperatorOverloading.h"

#include <iostream>

using namespace std;

Number::Number(int n) : num(n) {}

void Number::ShowData() {

	cout << num << endl;

}

Number* Number::operator->() {

	return this;

}

Number& Number::operator*() {

	return *this;

}