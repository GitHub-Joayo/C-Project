#pragma once

#include <iostream>

using namespace std;

class SmartPoint {

private :
	int xpos, ypos;

public :
	SmartPoint(int x = 0, int y = 0);
	~SmartPoint();
	void SetPoint(int x, int y);
	friend ostream& operator<<(ostream& os, const SmartPoint& pos);

};

ostream& operator<<(ostream& os, const SmartPoint& pos);

class SmartPtr {

private :
	SmartPoint * posptr;

public :
	SmartPtr(SmartPoint *ptr);
	SmartPoint& operator*() const;
	SmartPoint* operator->() const;
	~SmartPtr();

};