#pragma once

#include "BankCommon.h"
#include "NormalAccount.h"

class HighCreditAccount : public NormalAccount {

private :
	int rank;

public :
	HighCreditAccount();
	HighCreditAccount(const char *name, int accNum, int balance);
	virtual void MakeAccount();
	virtual void Deposit();
	virtual void PrintInfo() const;

};