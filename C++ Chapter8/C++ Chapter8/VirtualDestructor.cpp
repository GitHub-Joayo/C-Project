#include "VirtualDestructor.h"

#include <iostream>

using namespace std;

VirtualDestructor1::VirtualDestructor1(const char *str) {

	strOne = new char[strlen(str) + 1];

}

VirtualDestructor1::~VirtualDestructor1() {

	cout << "~Virtual Destructor1" << endl;
	delete[] strOne;

}

VirtualDestructor2::VirtualDestructor2(const char *str1, const char *str2) : VirtualDestructor1(str1) {

	strTwo = new char[strlen(str2) + 1];

}

VirtualDestructor2::~VirtualDestructor2() {

	cout << "~VirtualDestructor2" << endl;
	delete[] strTwo;

}