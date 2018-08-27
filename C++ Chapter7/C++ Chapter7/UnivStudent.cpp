#pragma warning(disable:4996)

#include "UnivStudent.h"

#include <iostream>
#include <cstring>

using namespace std;

Person::Person(int myage, const char *myname) : age(myage) {

	name = new char[strlen(myname) + 1];
	strcpy(name, myname);

}

void Person::WhatYourName() const {

	cout << "My name is " << name << endl;

}

void Person::HowOldAreYou() const {

	cout << "I'm " << age << " years old" << endl;

}

Person::~Person() {

	delete[] name;

}

UnivStudent::UnivStudent(const char *myname, int myage, const char *mymajor) : Person(myage, myname) {

	major = new char[strlen(mymajor) + 1];
	strcpy(major, mymajor);

}

void UnivStudent::WhoAreYou() const {

	WhatYourName();
	HowOldAreYou();
	cout << "My major is " << major << endl << endl;

}

UnivStudent::~UnivStudent() {

	delete[] major;

}