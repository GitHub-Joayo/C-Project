#pragma once

class SoSimple {

private :
	int num;

public :
	SoSimple(int n);
	void ShowSimpleData() const;
	SoSimple *GetThisPointer();

};