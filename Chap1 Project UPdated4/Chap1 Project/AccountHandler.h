#ifndef __ACCOUNT___
#define __ACCOUNT___

#include "BankCommon.h"
#include "Account.h"
#include "AccountArray.h"
#include "AccountArray.cpp"
#include <ctype.h>

class ExceptionClass {

public :
	void PrintCharMsg() const;
	void PrintIntMsg() const;

};

class AcntHandler : public Acnt {

private :
	int cliNum;
	BoundCheckArray<ACCOUNT_PTR> acnt;

public :
	AcntHandler();
	AcntHandler(int len);
	void PrintMenu() const;
	void Deposit();
	void Withdraw();
	void MakeAccount();
	void PrintAll() const;
	~AcntHandler();

};

#endif