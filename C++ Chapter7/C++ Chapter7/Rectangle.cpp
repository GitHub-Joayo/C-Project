#include "Rectangle.h"

#include <iostream>

using namespace std;

Rectangle::Rectangle(int len, int bre) : length(len), breadth(bre) {}

void Rectangle::ShowAreaInfo() const {

	cout << "Area : " << length * breadth << endl;

}

Square::Square(int len) : Rectangle(len, len) {}