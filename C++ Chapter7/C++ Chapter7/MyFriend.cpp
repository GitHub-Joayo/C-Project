#pragma warning(disable:4996)

#include "MyFriend.h"

#include <iostream>
#include <cstring>

using namespace std;

MyFriendInfo::MyFriendInfo(const char *name, const int age) : age(age){

	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);

}

void MyFriendInfo::ShowMyFriendInfo() const {

	cout << "Name : " << name << endl;
	cout << "Age : " << age << endl;

}

MyFriendDetailInfo::MyFriendDetailInfo(const char *name, const int age, const char *adr, const char *phone)
	: MyFriendInfo(name, age) {

	this->addr = new char[strlen(adr) + 1];
	strcpy(addr, adr);

	this->phone = new char[strlen(phone) + 1];
	strcpy(this->phone, phone);

}

void MyFriendDetailInfo::ShowFriendDetailInfo() const {

	ShowMyFriendInfo();
	cout << "Address : " << addr << endl;
	cout << "Phone : " << phone << endl;

}