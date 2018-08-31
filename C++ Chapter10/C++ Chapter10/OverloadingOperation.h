#pragma once

class Point {

private :
	int xpos, ypos;

public :
	Point(int x = 0, int y = 0);
	void ShowPosition() const;
	friend Point operator+(const Point &pos1, const Point &pos2);
	//Point operator-(const Point &ref);
	void operator+=(const Point &ref);
	void operator-=(const Point &ref);
	bool operator==(const Point &ref);
	bool operator!=(const Point &ref);
	Point& operator++(int);
	const friend Point& operator--(Point &ref);
	Point& operator-();
	friend Point& operator~(Point &ref);

};

Point operator+(const Point &pos1, const Point &pos2);
const Point& operator--(Point &ref);
Point& operator~(Point &ref);