#pragma once

#include "BankCommon.h"
#include "STDString.h"

class DepositException {

private :
	int money;

public :
	DepositException(int money);
	void PrintMsg() const;

};

class WithdrawException {

private :
	int money;
	int balance;

public :
	WithdrawException(int money, int blc);
	void PrintMsg() const;

};

class Acnt {

private:
	String name;
	int accNum;
	int balance;

public:
	Acnt();
	Acnt(const char *name, int accNum, int balance);
	Acnt(const Acnt &obj);
	Acnt& operator=(const Acnt &obj);
	virtual void MakeAccount(const char *name, const int accNum, const int balance);
	virtual void Deposit();
	void WithDraw();
	String GetName() const;
	int GetAccNum() const;
	int GetBalance() const;
	virtual void PrintInfo() const;
	void SetMoney(int money);
	~Acnt();

};