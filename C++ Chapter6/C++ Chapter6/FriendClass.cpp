#pragma warning(disable:4996)

#include "FriendClass.h"

#include <iostream>
#include <cstring>

using namespace std;

void Boy::ShowYourFriendInfo(Girl &frn) {

	cout << "Her Phone Number : " << frn.phNum << endl;

}

Girl::Girl(const char *num) {

	strcpy(phNum, num);

}

void Girl::ShowYourFriendInfo(Boy &frn) {

	cout << "His Height : " << frn.height << endl;

}

Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2) {

	opcnt++;
	return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);

}

Point PointOP::PointSub(const Point& pnt1, const Point& pnt2) {

	opcnt++;
	return Point(pnt1.x - pnt2.x, pnt1.y - pnt2.y);

}

PointOP::~PointOP() {

	cout << "Operation Times : " << opcnt << endl;

}

void ShowPointPos(const Point& pos) {

	cout << "x : " << pos.x << ", " << "y : " << pos.y << endl;

}