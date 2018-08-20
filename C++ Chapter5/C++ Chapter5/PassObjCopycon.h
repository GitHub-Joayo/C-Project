#pragma once

class CopyConstructor {

private :
	int num;

public :
	CopyConstructor(int n) : num(n) {}
	CopyConstructor(const CopyConstructor &copy);
	void ShowData();

};

void SimpleFuncObj(CopyConstructor ob);