#include "HighCreditAccount.h"

HighCreditAccount::HighCreditAccount() : NormalAccount(), rank(0) {}

HighCreditAccount::HighCreditAccount(const char *name, int accNum, int balance) : NormalAccount(name, accNum, balance) {

	cout << "Input Credit Rank" << endl;
	cout << "1. A" << endl;
	cout << "2. B" << endl;
	cout << "3. C" << endl;
	cout << "Select : ";
	cin >> this->rank;

	(rank == 1) ? (rank = CREDIT_LEVEL::A) : (rank == 2) ? (rank = CREDIT_LEVEL::B) : (rank = CREDIT_LEVEL::C);

}

void HighCreditAccount::MakeAccount() {

	MakeAccount();

	cout << "Input Credit Rank" << endl;
	cout << "1. A" << endl;
	cout << "2. B" << endl;
	cout << "3. C" << endl;
	cout << "Select : ";
	cin >> this->rank;

	(rank == 1) ? (rank = CREDIT_LEVEL::A) : (rank == 2) ? (rank = CREDIT_LEVEL::B) : (rank = CREDIT_LEVEL::C);

}

void HighCreditAccount::Deposit() {

	int money = 0;
	int tmp = 0;

	cout << "Input Money Amount : ";
	cin >> money;

	while (money < 0) {

		cout << "Input Corret Value" << endl << "Input Money Amount : ";
		cin >> money;

	}

	tmp = rank + GetRate();

	SetMoney(money + (money * tmp / 100));

	cout << endl << "Deposit Complete!" << endl;
	cout << "Balance : " << GetBalance() << endl << endl;

}

void HighCreditAccount::PrintInfo() const {

	NormalAccount::PrintInfo();

	cout << "Credit Level : " << ((rank == 7) ? 'A' : (rank == 4) ? 'B' : 'C') << endl;

}