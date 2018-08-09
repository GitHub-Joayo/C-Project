#ifndef __ACCOUNT___
#define __ACCOUNT___

#include <iostream>

using namespace std;

#define NAME_LEN 30

typedef struct _Account {
	char name[NAME_LEN];
	int accNum;
	int ballance;
} Account;


namespace Acnt {
	void PrintMenu(void);
	void MakeAccount(void);
	void Deposit(void);
	void WithDraw(void);
	void PrintAll(void);
}

using namespace Acnt;

static Account client[30];
static int clientNum = 0;

#endif