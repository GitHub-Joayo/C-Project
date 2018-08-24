#pragma warning(disable:4996)

#include "Account.h"

#include <cstring>
#include <iostream>

using namespace std;

void PrintMenu(void) {

	cout << "--------------MENU--------------" << endl;
	cout << "1. Make Account " << endl;
	cout << "2. Deposit Money " << endl;
	cout << "3. Draw Money " << endl;
	cout << "4. Print All Account Information " << endl;
	cout << "5. End Program " << endl;
	cout << "Choose Number : ";

}

Acnt::Acnt() {

	accNum  = 0;
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

void MakeAccount(Acnt *arr[]) {

	char name[100];
	int blc, accNum;

	cout << "Input Name Of Account Master : ";
	cin >> name;

	cout << "Input Account Number : ";
	cin >> accNum;

	cout << "Input Money : ";
	cin >> blc;

	arr[clientNum++] = new Acnt(name, accNum, blc);

}

void Acnt::MakeAccount(const char *name, const int accNum, const int balance) {

	this->name = new char(strlen(name) + 1);
	strcpy(this->name, name);

	this->accNum = accNum;

	this->balance = balance;

	cout << name << "'s Account was Made " << endl;

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

	cout << "Deposit Complete" << endl;
	cout << "Balance : " << this->balance << endl;

}

void Deposit(Acnt *arr[]) {

	int accNum = 0;
	int cnt = 0;

	cout << "Input Your Account Number Correctly : ";
	cin >> accNum;

	for (int i = 0; i < clientNum; i++) {

		if (accNum == arr[i]->GetAccNum()) {

			arr[i]->Deposit();
			cnt++;

		}

	}

	if (cnt == 0)
		cout << "Not Exist Same Account Number" << endl;

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

	cout << "Withdraw Complete" << endl;
	cout << "Balance : " << this->balance << endl;

}

void Withdraw(Acnt *arr[]) {

	int accNum = 0;
	int cnt = 0;

	cout << "Input Your Account Number : ";
	cin >> accNum;

	for (int i = 0; i < clientNum; i++) {

		if (accNum == arr[i]->GetAccNum()) {

			arr[i]->WithDraw();
			cnt++;

		}

	}

	if (cnt == 0)
		cout << "Not Exist Same Account Number" << endl;

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
	cout << "Balance : " << balance << endl << endl;

}

void PrintAll(Acnt *arr[]) {

	for (int i = 0; i < clientNum; i++) {

		cout << i + 1 << ". ";
		arr[i]->PrintInfo();

	}

}

Acnt::~Acnt() {

	delete[] name;

}