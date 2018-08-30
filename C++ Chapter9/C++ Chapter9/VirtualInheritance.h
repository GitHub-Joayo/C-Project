#pragma once

class One {

public :
	One();
	void SimpleFunc();

};

class MiddleDerivedOne : virtual public One {

public :
	MiddleDerivedOne();
	void MiddelFuncOne();

};

class MiddleDerivedTwo : virtual public One {

public :
	MiddleDerivedTwo();
	void MiddleFuncTwo();

};

class LastDerived : public MiddleDerivedOne, public MiddleDerivedTwo {

public :
	LastDerived();
	void ComplexFunc();

};