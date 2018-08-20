#pragma warning(disable:4996)

#include "NameCardCopyConstructor.h"

#include <cstring>
#include <iostream>

using namespace std;

void COMP_POS::ShowInfo(int pos) {

	switch (pos) {

	case 0:
		cout << "Clerk" << endl;
		break;

	case 1:
		cout << "Senior" << endl;
		break;

	case 2:
		cout << "Assist" << endl;
		break;

	case 3:
		cout << "Manager" << endl;
		break;

	default:
		cout << "Error" << endl;
		break;

	}

}

NameCard::NameCard(const NameCard &nc) : pos(nc.pos) {

	this->name = new char[strlen(nc.name) + 1];
	strcpy(this->name, nc.name);

	this->comName = new char[strlen(nc.comName) + 1];
	strcpy(this->comName, nc.comName);

	this->phoneNum = new char[strlen(nc.phoneNum) + 1];
	strcpy(this->phoneNum, nc.phoneNum);

}

void NameCard::ShowNameCardInfo() const {

	cout << "Name : " << name << endl;
	cout << "Firm Name : " << comName << endl;
	cout << "Phone Number : " << phoneNum << endl;
	cout << "Position : ";

	COMP_POS::ShowInfo(pos);

}

NameCard::NameCard(const char *inName, const char *inComName, const char *inPhoneNum, const int &inPos) {

	name = new char[strlen(inName) + 1];
	strcpy(name, inName);

	comName = new char[strlen(inComName) + 1];
	strcpy(comName, inComName);

	phoneNum = new char[strlen(inPhoneNum) + 1];
	strcpy(phoneNum, inPhoneNum);

	pos = inPos;

}

NameCard::~NameCard() {

	delete[] name, comName, phoneNum;

}