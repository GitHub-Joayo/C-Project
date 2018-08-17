#pragma once

class FruitSeller {

private :
	const int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public :
	FruitSeller(int price = 0, int num = 0, int money = 0) : APPLE_PRICE(price), numOfApples(num), myMoney(money) {}
	void InitMembers(int num, int money);
	int SaleApples(int money);
	void ShowSalesResult() const;

};

class FruitBuyer {

private :
	int myMoney;
	int numOfApples;

public :
	FruitBuyer(int money = 0) : myMoney(money), numOfApples(0) {}
	void InitMembers(int money);
	void BuyApples(FruitSeller &seller, int money);
	void ShowBuyResult() const;

};