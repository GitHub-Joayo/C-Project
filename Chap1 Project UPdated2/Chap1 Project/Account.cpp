#pragma warning(disable:4996)

#include <cstring>
#include <iostream>

#include "Account.h"

using namespace std;

Acnt::Acnt() {

	name = NULL;
	accNum = 0;
	balance = 0;

}

Acnt::Acnt(const char *name, int accNum, int balance) : balance(balance), accNum(accNum) {

	this->name = new char(strlen(name) + 1);
	strcpy(this->name, name);

}

Acnt::Acnt(const Acnt &obj) : accNum(obj.accNum), balance(obj.balance) {

	this->name = new char[strlen(obj.name) + 1];
	strcpy(this->name, obj.name);

}

void Acnt::MakeAccount(const char *name, const int accNum, const int balance) {

	this->name = new char(strlen(name) + 1);
	strcpy(this->name, name);

	this->accNum = accNum;

	this->balance = balance;

}

void Acnt::Deposit() {

	int money = 0;

	cout << "Input Money Amount : ";
	cin >> money;

	while (money < 0) {

		cout << "Input Corret Value" << endl << "Input Money Amount : ";
		cin >> money;

	}

	this->balance += money;

	cout << endl << "Deposit Complete!" << endl;
	cout << "Balance : " << this->balance << endl << endl;

}

void Acnt::WithDraw() {

	int money = 0;

	cout << "Input Money Amount : ";
	cin >> money;

	while (this->balance - money < 0) {

		cout << "Not Enough Balance" << endl << "Retype Money Amount : ";
		cin >> money;

	}

	this->balance -= money;

	cout << endl << "Withdraw Complete!" << endl;
	cout << "Balance : " << this->balance << endl << endl;

}

char *Acnt::GetName() const {

	return name;

}

int Acnt::GetAccNum() const {

	return accNum;

}

int Acnt::GetBalance() const {

	return balance;

}

void Acnt::PrintInfo() const {

	cout << "Name : " << name << endl;
	cout << "Account Number : " << accNum << endl;
	cout << "Balance : " << balance << endl;

}

void Acnt::SetMoney(int money) {

	this->balance += money;

}

Acnt::~Acnt() {

	delete[] name;

}