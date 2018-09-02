#ifndef __ACCOUNT___
#define __ACCOUNT___

#include "Account.h"
#include "NormalAccount.h"
#include "HighCreditAccount.h"

class AcntHandler : public Acnt {

private :
	int cliNum;
	Acnt *client[100];

public :
	AcntHandler();
	void PrintMenu() const;
	void Deposit();
	void Withdraw();
	void MakeAccount();
	void PrintAll() const;
	~AcntHandler();

};

#endif