#include "PointQue.h"

#include <iostream>

using namespace std;

void Point::MovePos(int x, int y) {

	xpos += x;
	ypos += y;

}

void Point::AddPoint(const _Point &pos) {

	xpos += pos.xpos;
	ypos += pos.ypos;

}

void Point::ShowPosition(void) {

	cout << "[" << xpos << ", " << ypos << "]" << endl << endl;

}