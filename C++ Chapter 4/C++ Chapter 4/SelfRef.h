#pragma once
class SelfRef {

private :
	int num;

public :
	SelfRef(int n) : num(n) {}
	SelfRef& Adder(int n);
	SelfRef& ShowTwoNumber();

};