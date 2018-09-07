#include "TemplateQue.h"

Point1::Point1(int x, int y) : xpos(x), ypos(y) {}

void Point1::ShowPosition() const {

	cout << "[" << xpos << ", " << ypos << "]" << endl;

}