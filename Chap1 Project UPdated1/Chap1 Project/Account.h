#ifndef __ACCOUNT___
#define __ACCOUNT___

class Acnt {

private :
	char *name;
	int accNum;
	int balance;

public :
	Acnt();
	Acnt(const char *name, int accNum, int balance);
	Acnt(const Acnt &obj);
	void MakeAccount(const char *name, const int accNum, const int balance);
	void Deposit();
	void WithDraw();
	char *GetName() const;
	int GetAccNum() const;
	int GetBalance() const;
	void PrintInfo() const;
	~Acnt();

};

void PrintMenu(void);
void Deposit(Acnt *arr[]);
void Withdraw(Acnt *arr[]);
void MakeAccount(Acnt *arr[]);
void PrintAll(Acnt *arr[]);

static int clientNum = 0;


#endif