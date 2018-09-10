#ifndef __POINT_TEMPLATE__
#define __POINT_TEMPLATE__

#include "Main.h"

template <class Ptr>
class Point {

private :
	Ptr xpos, ypos;

public :
	Point(Ptr xpos = 0, Ptr ypos = 0);
	void ShowPosition() const;

	Point operator+(const Point<Ptr> pos1);

};


#endif