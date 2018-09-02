#pragma once

#include "Account.h"

class NormalAccount : public Acnt {

private :
	int interest;

public :
	NormalAccount();
	NormalAccount(const char *name, int accNum, int balance);
	virtual void MakeAccount();
	virtual void Deposit();
	virtual void PrintInfo() const;
	int GetRate() const;

};