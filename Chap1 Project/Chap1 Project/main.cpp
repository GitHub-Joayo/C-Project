#include <iostream>

#include "Account.h"

int main(void) {

	int sel = 0;

	do {

		PrintMenu();
		cin >> sel;

		switch (sel) {

		case 1:
			MakeAccount();
			break;

		case 2:
			Deposit();
			break;

		case 3:
			WithDraw();
			break;

		case 4:
			PrintAll();
			break;

		case 5:
			cout << "End Program to Type Any Key" << endl;
			system("pause");
			break;

		default:
			cout << "Retype Number" << endl;

		}

	} while (sel != 5);

}