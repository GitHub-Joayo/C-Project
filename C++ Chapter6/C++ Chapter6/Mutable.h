#pragma once

class Muta {

private :
	int num1;
	mutable int num2;

public :
	Muta(int n1, int n2) :num1(n1), num2(n2) {}
	void ShowMuta() const;
	void CopyToNum2() const;

};