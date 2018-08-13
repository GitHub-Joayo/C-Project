#include "MemMalFree.h"

char *Mem::MakeStrAdr(int len) {

	char *str = (char*)malloc(sizeof(char)*len);
	return str;

}

char *NewDel::MakeStrAdr(int len) {

	char *str = new char[len];
	return str;

}

Point& NewDelQ::PntAdder(const Point &p1, const Point &p2) {

	Point *pt = new Point;

	pt->xpos = p1.xpos + p2.xpos;
	pt->ypos = p1.ypos + p2.ypos;

	return *pt;

}