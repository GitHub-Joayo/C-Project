#include "NormalAccount.h"

#include <iostream>

using namespace std;

NormalAccount::NormalAccount() : Acnt() {

	interest = 0;

}

NormalAccount::NormalAccount(const char *name, int accNum, int balance) : Acnt(name, accNum, balance) {

	cout << "Input Interest Rate : ";
	cin >> this->interest;

}

void NormalAccount::MakeAccount() {

	MakeAccount();

	cout << "Input Interest : ";
	cin >> this->interest;

}

void NormalAccount::Deposit() {

	int money = 0;

	cout << "Input Money Amount : ";
	cin >> money;

	while (money < 0) {

		cout << "Input Corret Value" << endl << "Input Money Amount : ";
		cin >> money;

	}

	SetMoney(money + (money * interest /100));

	cout << endl << "Deposit Complete!" << endl;
	cout << "Balance : " << GetBalance() << endl << endl;

}

void NormalAccount::PrintInfo() const {

	Acnt::PrintInfo();

	cout << "Interest rate : " << interest << endl;

}

int NormalAccount::GetRate() const {

	return interest;

}