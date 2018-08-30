#pragma once

class BaseOne {

public :
	void SimpleFuncOne();

};

class BaseTwo {

public :
	void SimpleFuncTwo();

};

class MultiDeriv : public BaseOne, protected BaseTwo {

public :
	void ComplexFunc();

};