#pragma warning(disable:4996)

#include "AccountHandler.h"

#include <cstring>
#include <iostream>

using namespace std;

void AcntHandler::PrintMenu() const {

	cout << endl << "--------------MENU--------------" << endl;
	cout << "1. Make Account " << endl;
	cout << "2. Deposit Money " << endl;
	cout << "3. Draw Money " << endl;
	cout << "4. Print All Account Information " << endl;
	cout << "5. End Program " << endl;
	cout << "Choose Number : ";

}
AcntHandler::AcntHandler() : cliNum(0) {}

void AcntHandler::MakeAccount() {

	char name[100];
	int blc = 0, accNum = 0, sel = 0;

	cout << endl << "-------------------------[Make Account]-------------------------" << endl;

	cout << endl << "1. Basic Account(Does not has interest rate)" << endl;
	cout << "2. Normal Account(interest rate)" << endl;
	cout << "3. High Credit Account(High interest rate)" << endl;

	cout << "Selet Account Type : ";
	cin >> sel;
	cout << endl;

	cout << "Input Name Of Account Master : ";
	cin >> name;

	cout << "Input Account Number : ";
	cin >> accNum;

	cout << "Input Money : ";
	cin >> blc;

	switch (sel) {

	case 1:
		client[cliNum++] = new Acnt(name, accNum, blc);
		cout << endl << "-----------------------Basic Account has Been Made!-----------------------" << endl;
		break;

	case 2:
		client[cliNum++] = new NormalAccount(name, accNum, blc);
		cout << endl << "-----------------------Normal Account has Been Made!-----------------------" << endl;
		break;

	case 3:
		client[cliNum++] = new HighCreditAccount(name, accNum, blc);
		cout << endl << "-----------------------High Credit Account has Been Made!-----------------------" << endl;
		break;

	default :
		cout << "Input Corret Number" << endl;

	}

}

void AcntHandler::Deposit() {

	int accNum = 0;
	int cnt = 0;

	cout << endl << "-------------------------[Deposit]-------------------------" << endl;
	cout << "Input Your Account Number Correctly : ";
	cin >> accNum;

	for (int i = 0; i < cliNum; i++) {

		if (accNum == client[i]->GetAccNum()) {

			client[i]->Deposit();
			cnt++;

		}

	}

	if (cnt == 0)
		cout << endl << "Not Exist Same Account Number" << endl << endl;

}

void AcntHandler::Withdraw() {

	int accNum = 0;
	int cnt = 0;

	cout << endl << "-------------------------[Withdraw]-------------------------" << endl;
	cout << "Input Your Account Number : ";
	cin >> accNum;

	for (int i = 0; i < cliNum; i++) {

		if (accNum == client[i]->GetAccNum()) {

			client[i]->WithDraw();
			cnt++;

		}

	}

	if (cnt == 0)
		cout << "Not Exist Same Account Number" << endl << endl;

}

void AcntHandler::PrintAll() const {

	for (int i = 0; i < cliNum; i++) {

		cout << endl << "--------------------------------------------------------------" << endl << i + 1 << ". ";
		client[i]->PrintInfo();

	}

}

AcntHandler::~AcntHandler() {

	for (int i = 0; i < cliNum; i++)
		delete client[i];

}