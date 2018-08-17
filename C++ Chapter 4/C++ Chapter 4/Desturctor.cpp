#pragma warning(disable:4996)

#include "Destructor.h"

#include <iostream>
#include <cstring>

using namespace std;

Person::Person() {

	name = NULL;
	age = 0;
	cout << "Called Person()" << endl;

}

Person::Person(const char *myname, const int myage) {

	name = new char[strlen(myname) + 1];
	strcpy(name, myname);

	age = myage;

}

void Person::SetPersonInfo(char *myname, int myage) {

	name = new char[strlen(myname) + 1];
	strcpy(name, myname);

	age = myage;

}

void Person::ShowPersonInfo() const {

	cout << "Name : " << name << endl;
	cout << "Age : " << age << endl;

}

Person::~Person() {

	delete[] name;
	cout << "Called Destructor !" << endl;

}