#include "OverloadingOperation.h"

#include <iostream>

using namespace std;

Point::Point(int x, int y) : xpos(x), ypos(y) {}

void Point::ShowPosition() const {

	cout << "[" << xpos << ", " << ypos << "]" << endl;

}

/*
Point Point::operator-(const Point &ref) {

	Point pos(xpos - ref.xpos, ypos - ref.ypos);

	return pos;

}
*/

void Point::operator+=(const Point &ref) {

	xpos += ref.xpos; 
	ypos += ref.ypos;

}

void Point::operator-=(const Point &ref) {

	xpos -= ref.xpos;
	ypos -= ref.ypos;

}

bool Point::operator==(const Point &ref) {

	if (xpos == ref.xpos && ypos == ref.ypos)
		return true;
	else
		return false;

}

bool Point::operator!=(const Point &ref) {

	return !operator==(ref);

}

Point& Point::operator-() {

	xpos = -xpos;
	ypos = -ypos;

	return *this;
}

Point& Point::operator++(int) {

	this->xpos++;
	this->ypos++;

	return *this;

}

Point operator+(const Point &pos1, const Point &pos2) {

	Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);

	return pos;

}

const Point& operator--(Point &ref) {

	const Point retObj(ref);

	ref.xpos--;
	ref.ypos--;

	return retObj;

}

Point& operator~(Point &ref) {

	int tmp = ref.xpos;
	ref.xpos = ref.ypos;
	ref.ypos = tmp;

	return ref;

}