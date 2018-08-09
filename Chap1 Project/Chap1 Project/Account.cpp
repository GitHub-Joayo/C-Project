#include "Account.h"

void Acnt::PrintMenu(void) {

	cout << "--------------MENU--------------" << endl;
	cout << "1. Make Account " << endl;
	cout << "2. Deposit Money " << endl;
	cout << "3. Draw Money " << endl;
	cout << "4. Print All Account Information " << endl;
	cout << "5. End Program " << endl;
	cout << "Choose Number : ";

}

void Acnt::MakeAccount(void) {

	cout << "Input Account ID : ";
	cin >> ::client[::clientNum].accNum;

	cout << "Input Name of Account Master : ";
	cin >> ::client[::clientNum].name;

	cout << "Input Deposit Money : ";
	cin >> ::client[::clientNum].ballance;

	::clientNum++;

}

void Acnt::Deposit(void) {

	int accNum = 0;
	int money = 0;

	cout << "Input Your Account Number : ";
	cin >> accNum;

	for (int i = 0; i < ::clientNum; i++) {

		if (accNum == ::client[i].accNum) {

			cout << "Input Deposit Money Amount : ";
			cin >> money;

			::client[i].ballance += money;

			cout << "Deposit Complete" << endl;
			cout << "Balance of " << ::client[i].accNum << " is " << ::client[i].ballance << endl;

		}

	}

	if (money == 0)
		cout << "Not Exist Same Account ID" << endl;

}

void Acnt::WithDraw(void) {

	int accNum = 0;
	int money = 0;

	cout << "Input Your Account ID : ";
	cin >> accNum;

	for (int i = 0; i < ::clientNum; i++) {

		if (accNum == ::client[i].accNum) {

			cout << "Input WithDraw Money Amount : ";
			cin >> money;

			if (::client[i].ballance - money >= 0) {

				::client[i].ballance -= money;
				cout << "WithDraw Complete";
				cout << "Balance of " << ::client[i].accNum << " is " << ::client[i].ballance << endl;

			}
			else {

				cout << "Not Enough Money" << endl;
				cout << "Balance of " << ::client[i].accNum << " is " << ::client[i].ballance << endl;

			}

		}

	}

	if (money == 0)
		cout << "Not Exist Same Account ID" << endl;

}

void Acnt::PrintAll(void) {

	for (int i = 0; i < clientNum; i++) {

		cout << i + 1 << ". Name : " << ::client[i].name << endl;
		cout << "   Account Number : " << ::client[i].accNum << endl;
		cout << "   Balance : " << ::client[i].ballance << endl << endl;

	}

}