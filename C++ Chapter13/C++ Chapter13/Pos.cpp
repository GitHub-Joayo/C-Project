#include "Pos.h"

Pos::Pos(int x, int y) : xpos(x), ypos(y) {}

void Pos::SetPos(int x, int y) {

	xpos = x;
	ypos = y;

}

void Pos::ShowPos() const {

	cout << '[' << xpos << ", " << ypos << ']' << endl;

}

ostream& operator<<(ostream& os, const Pos& pos) {

	os << "[" << pos.xpos << ", " << pos.ypos << "]" << endl;
	return os;

}