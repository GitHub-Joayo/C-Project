#include "SmartPtr.h"

SmartPoint::SmartPoint(int x, int y) : xpos(x), ypos(y) {

	cout << "Object made" << endl;

}

SmartPoint::~SmartPoint() {

	cout << "Object destroyed" << endl;

}

void SmartPoint::SetPoint(int x, int y) {

	xpos = x;
	ypos = y;

}

ostream& operator<<(ostream& os, const SmartPoint& pos) {

	os << "[" << pos.xpos << ", " << pos.ypos << "]" << endl;
	return os;
}

SmartPtr::SmartPtr(SmartPoint *ptr) : posptr(ptr) {}

SmartPoint& SmartPtr::operator*() const {

	return *posptr;

}

SmartPoint* SmartPtr::operator->() const {

	return posptr;

}

SmartPtr::~SmartPtr() {

	delete posptr;

}