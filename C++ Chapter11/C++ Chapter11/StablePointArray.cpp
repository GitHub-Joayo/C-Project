#include "StablePointArray.h"

Point::Point(int x, int y) : xpos(x), ypos(y) {}

void Point::ShowPos() const {

	cout << '[' << xpos << ", " << ypos << ']' << endl;

}

ostream& operator<<(ostream& os, const Point &pos) {

	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;

	return os;

}

ostream& operator<<(ostream& os, const Point* pos) {

	os << "[" << pos->xpos << ", " << pos->ypos << "]" << endl;

	return os;

}

BoundCheckPointArray::BoundCheckPointArray(int len) : arrlen(len){

	arr = new POINT_PTR[len];

}

POINT_PTR& BoundCheckPointArray::operator[] (int idx) {

	if (idx < 0 || idx >= arrlen) {

		cout << "array index out of bound exception" << endl;
		system("pause");
		exit(1);

	}

	return arr[idx];

}

POINT_PTR BoundCheckPointArray::operator[] (int idx) const {

	if (idx < 0 || idx >= arrlen) {

		cout << "array index out of bound exception" << endl;
		system("pause");
		exit(1);

	}

	return arr[idx];

}

int BoundCheckPointArray::GetArrLen() const {

	return arrlen;

}

BoundCheckPointArray::~BoundCheckPointArray() {

	delete[] arr;

}