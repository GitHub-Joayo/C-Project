#pragma once

class AAA {

private :
	int num1;

public :
	virtual void Func1();
	virtual void Func2();

};

class BBB : public AAA {

private :
	int num2;

public :
	virtual void Func1();
	void Func3();

};