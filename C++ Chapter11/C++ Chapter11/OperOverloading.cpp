#include "OperOverloading.h"

#include <iostream>

using namespace std;

First::First(int n1, int n2) : num1(n1), num2(n2) {}

void First::ShowData() const {

	cout << "[" << num1 << ", " << num2 << "]" << endl;

}

First& First::operator=(const First& ref) {

	cout << "First& operator=" << endl;
	num1 = ref.num1;
	num2 = ref.num2;

	return *this;

}

Second::Second(int n1, int n2, int n3, int n4) : First(n1, n2), num3(n3), num4(n4) {}

void Second::ShowaData() const {

	ShowData();
	cout << "[" << num3 << ", " << num4 << "]" << endl;

}

Second& Second::operator=(const Second& ref) {

	cout << "Second & operator=" << endl;
	First::operator=(ref);
	num3 = ref.num3;
	num4 = ref.num4;

	return *this;

}
