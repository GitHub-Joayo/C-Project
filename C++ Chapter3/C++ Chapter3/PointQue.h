#ifndef __POINT__
#define __POINT__

#include <iostream>

using namespace std;

typedef struct _Point {

	int xpos;
	int ypos;

	void MovePos(int x, int y);
	void AddPoint(const _Point &pos);
	void ShowPosition(void);

} Point;

#endif