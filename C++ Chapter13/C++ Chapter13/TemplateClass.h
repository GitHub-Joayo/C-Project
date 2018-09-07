#pragma once

#include "Main.h"

template <class Ptr>

class Point {

private:
	Ptr xpos, ypos;

public:
	Point(Ptr x = 0, Ptr y = 0);
	void ShowPosition() const;

};