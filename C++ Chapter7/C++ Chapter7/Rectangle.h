#pragma once

class Rectangle {

protected :
	int length;
	int breadth;

public :
	Rectangle(int len, int bre);
	void ShowAreaInfo() const;

};

class Square : public Rectangle {

public :
	Square(int len);

};