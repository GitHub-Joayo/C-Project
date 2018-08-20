#pragma warning(disable:4996)

#include "ShallowCopyError.h"

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

Person::Person(const Person &ps) : age(ps.age) {

	name = new char[strlen(ps.name) + 1];

	strcpy(this->name, ps.name);

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