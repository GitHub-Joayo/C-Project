#include "PointMultipleOperation.h"

using namespace std;

Multiple::Multiple(int x, int y) : xpos(x), ypos(y) {}

void Multiple::ShowPosition() const {

	cout << "[" << xpos << ", " << ypos << "]" << endl;

}

Multiple Multiple::operator*(int times) {

	Multiple pos(xpos * times, ypos * times);

	return pos;

}

int Multiple::GetXpos() const {

	return xpos;

}

int Multiple::GetYpos() const {

	return ypos;

}

Multiple operator*(int times, Multiple &ref) {

	return ref * times;

}

ostream& operator<<(ostream& os, const Multiple &mul) {

	os << "[" << mul.xpos << ", " << mul.ypos << "]" << endl;

	return os;

}

istream& operator>>(istream& is, Multiple &pos) {

	is >> pos.xpos;
	is >> pos.ypos;

	return is;

}