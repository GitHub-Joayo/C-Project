#include "BankCommon.h"
#include "AccountHandler.h"

using namespace std;

int main(void) {

	int sel = 0;
	/*
	int len = 0;

	cout << "Input Array Length :";
	cin >> len;
	*/

	AcntHandler bank(100);
	
	do {

		bank.PrintMenu();
		cin >> sel;

		switch (sel) {

		case 1:
			bank.MakeAccount();
			break;

		case 2:
			bank.Deposit();
			break;

		case 3:
			bank.Withdraw();
			break;

		case 4:
			bank.PrintAll();
			break;

		case 5:
			return 0;

		default:
			cout << "Retype Number" << endl;

		}

	} while (sel != 5);

	return 0;

}