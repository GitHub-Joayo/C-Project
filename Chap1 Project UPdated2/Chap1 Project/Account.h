#pragma once

namespace CREDIT_LEVEL {

	enum {
		A = 7,
		B = 4,
		C = 2
	};

}

class Acnt {

private:
	char *name;
	int accNum;
	int balance;

public:
	Acnt();
	Acnt(const char *name, int accNum, int balance);
	Acnt(const Acnt &obj);
	virtual void MakeAccount(const char *name, const int accNum, const int balance);
	virtual void Deposit();
	void WithDraw();
	virtual char *GetName() const;
	virtual int GetAccNum() const;
	virtual int GetBalance() const;
	virtual void PrintInfo() const;
	void SetMoney(int money);
	~Acnt();

};