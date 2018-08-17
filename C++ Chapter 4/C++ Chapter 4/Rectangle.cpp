#include <iostream>

#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(const int &x1, const int &y1, const int &x2, const int &y2) : upLeft(x1, y1), lowRight(x2, y2) {


}

/*
bool Rectangle::InitMembers(const Point &ul, const Point &lr) {

	if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY()) {

		cout << "Wrong Infomation" << endl;
		return false;

	}

	upLeft = ul;
	lowRight = lr;
	return true;

}
*/

void Rectangle::ShowRecInfo() const {

	cout << "Up Left Point : [ " << upLeft.GetX() << ", " << upLeft.GetY() << " ]" << endl;
	cout << "Low Right Point : [ " << lowRight.GetX() << ", " << lowRight.GetY() << " ]" << endl;

}