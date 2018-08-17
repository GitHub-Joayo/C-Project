#pragma once
class AAA {

private :
	int num;

public :
	AAA() : num(0) {}
	AAA& CreateInitObj(int n) const;
	void ShowNum() const;

private :
	AAA(int n) : num(n) {}

};