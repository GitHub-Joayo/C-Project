#include <iostream>

#include "Account.h"

using namespace std;

Acnt *cliArr[100];

int main(void) {

	int sel = 0;

	do {

		PrintMenu();
		cin >> sel;

		switch (sel) {

		case 1:
			MakeAccount(cliArr);
			break;

		case 2:
			Deposit(cliArr);
			break;

		case 3:
			Withdraw(cliArr);
			break;

		case 4:
			PrintAll(cliArr);
			break;

		case 5:
			cout << "End Program to Type Any Key" << endl;
			system("pause");
			break;

		default:
			cout << "Retype Number" << endl;

		}

	} while (sel != 5);

	delete[] *cliArr;

}