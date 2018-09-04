#pragma once

class First {

private :
	int num1, num2;

public :
	First(int n1 = 0, int n2 = 0);
	void ShowData() const;
	First& operator=(const First& ref);

};

class Second : public First {

private :
	int num3, num4;

public :
	Second(int n1 = 0, int n2 = 0, int n3 = 0, int n4 = 0);
	void ShowaData() const;
	Second& operator=(const Second& ref);

};