#pragma once

#include <iostream>

using namespace std;



class Point {

private :
	int xpos, ypos;

public :
	Point(int x = 0, int  y = 0);
	friend ostream& operator<<(ostream& os, const Point &pos);
	friend ostream& operator<<(ostream& os, const Point* pos);
	void ShowPos() const;

};

ostream& operator<<(ostream& os, const Point& pos);
ostream& operator<<(ostream & os, const Point* pos);

typedef Point* POINT_PTR;

class BoundCheckPointArray {

private :
	POINT_PTR *arr;
	int arrlen;

private :
	BoundCheckPointArray(const BoundCheckPointArray& arr) {}
	BoundCheckPointArray& operator=(const BoundCheckPointArray& arr) {}

public :
	BoundCheckPointArray(int len);
	POINT_PTR& operator[] (int idx);
	POINT_PTR operator[] (int idx) const;
	int GetArrLen() const;
	~BoundCheckPointArray();

};