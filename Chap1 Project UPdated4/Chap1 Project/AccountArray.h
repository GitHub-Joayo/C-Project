#pragma once

#include "BankCommon.h"
#include "Account.h"

typedef Acnt* ACCOUNT_PTR;

template <class Arr>
class BoundCheckArray {

private:
	Arr * arr;
	int arrlen;
	BoundCheckArray(const Arr &arr) {}
	BoundCheckArray& operator=(const Arr &arr) {}

public:
	BoundCheckArray(int len);
	Arr& operator[] (int idx);
	Arr operator[] (int idx) const;
	int GetArrLen() const;
	~BoundCheckArray();

};