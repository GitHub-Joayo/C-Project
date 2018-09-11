#pragma once

#include "Main.h"

class SoSimple {

public :
	virtual void ShowSimpleInfo();

};

class SoComplex : public SoSimple {

public :
	virtual void ShowSimpleInfo();

};