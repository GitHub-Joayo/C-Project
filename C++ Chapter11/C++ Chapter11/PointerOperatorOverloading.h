#pragma once

class Number {

private :
	int num;

public :
	Number(int n);
	void ShowData();

	Number* operator->();
	Number& operator*();

};