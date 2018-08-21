#pragma once

class Girl;

class Boy {

private :
	int height;
	friend class Girl;

public :
	Boy(int len) : height(len) {}
	void ShowYourFriendInfo(Girl &frn);

};

class Girl {

private :
	char phNum[20];

public :
	Girl(const char *num);
	void ShowYourFriendInfo(Boy &frn);
	friend class Boy;

};

class Point;

class PointOP {

private :
	int opcnt;

public :
	PointOP() : opcnt(0) {}
	Point PointAdd(const Point&, const Point&);
	Point PointSub(const Point&, const Point&);
	~PointOP();

};

class Point {

private :
	int x;
	int y;

public :
	Point(const int &xpos, const int &ypos) : x(xpos), y(ypos) {}
	friend Point PointOP::PointAdd(const Point&, const Point&);
	friend Point PointOP::PointSub(const Point&, const Point&);
	friend void ShowPointPos(const Point&);

};

void ShowPointPos(const Point& pos);