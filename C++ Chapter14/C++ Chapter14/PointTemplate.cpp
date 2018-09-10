#include "PointTemplate.h"

template <class Ptr>
Point<Ptr>::Point(Ptr xpos, Ptr ypos) : xpos(xpos), ypos(ypos) {}

template <class Ptr>
void Point<Ptr>::ShowPosition() const {

	cout << "[" << xpos << ", " << ypos << "]" << endl;

}

template <class Ptr>
Point<Ptr> Point<Ptr>::operator+(const Point<Ptr> pos1) {

	Point<Ptr> temp(pos1.xpos + xpos, pos1.ypos + ypos);

	return temp;

}