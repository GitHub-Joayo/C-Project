#pragma once

#include <iostream>

using namespace std;

class AnotherPoint {

private :
	int xpos, ypos;

public :
	AnotherPoint(int x = 0, int y = 0);
	friend ostream& operator<<(ostream& os, const AnotherPoint& pos);
	void* operator new(size_t size);
	void* operator new[](size_t size);
	void operator delete (void *adr);
	void operator delete[] (void *adr);
		

};

ostream& operator<<(ostream& os, const AnotherPoint& pos);