#pragma once

class CPoint {

private :
	int xpos;
	int ypos;

public :
	CPoint(const int &x, const int &y) : xpos(x), ypos(y) {}
	void Init(int x, int y);
	void ShowPointInfo() const;

};

class Circle {

private :
	CPoint cp;
	double rad;

public :
	Circle(int x, int y, double inRad) : cp(x, y), rad(inRad) {}
	void Init(int x, int y, double inRad);
	void ShowCircleInfo() const;

};

class Ring {

private :
	Circle inner;
	Circle outter;

public :
	Ring(int x1, int y1, int rad1, int x2, int y2, int rad2) : inner(x1, y1, rad1), outter(x2, y2, rad2) {}
	void Init(int w, int x, int rad1, int y, int z, int rad2);
	void ShowRingInfo() const;

};