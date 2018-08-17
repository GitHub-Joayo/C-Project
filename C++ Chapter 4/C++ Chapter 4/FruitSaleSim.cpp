#include <iostream>

#include "FruitSaleSim.h"

using namespace std;

void FruitSeller::InitMembers(int num, int money) {

	numOfApples = num;
	myMoney = money;

}

int FruitSeller::SaleApples(int money) {

	int num = money / APPLE_PRICE;
	numOfApples -= num;
	myMoney += money;
	return num;

}

void FruitSeller::ShowSalesResult() const {

	cout << "Lefft Apple : " << numOfApples << endl;
	cout << "Sales Profit : " << myMoney << endl << endl;

}

void FruitBuyer::InitMembers(int money) {

	if (money < 0) {

		cout << "NOT Enough Money" << endl << "Please Retype Money" << endl;
		cin >> money;

		while (money < 0) {

			cout << "Input Correct Money" << endl;
			cin >> money;

		}

	}

	myMoney = money;
	numOfApples = 0;

}

void FruitBuyer::BuyApples(FruitSeller &seller, int money) {

	if (money < 0) {

		cout << "NOT Enough Money" << endl << "Please Retype Money" << endl;
		cin >> money;

		while (money < 0) {

			cout << "Input Correct Money" << endl;
			cin >> money;

		}

	}

	numOfApples += seller.SaleApples(money);
	myMoney -= money;

}

void FruitBuyer::ShowBuyResult() const {

	cout << "Left Money : " << myMoney << endl;
	cout << "Numbers of Apples : " << numOfApples << endl << endl;

}