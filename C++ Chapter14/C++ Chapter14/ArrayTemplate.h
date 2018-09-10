#pragma once

#include "Main.h"
#include <cstdlib>

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