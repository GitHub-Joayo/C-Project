#pragma once

class Point {

private :
	int x;
	int y;

public :
	Point(const int &a, const int &b) {

		x = a;
		y = b;

	}
	// bool InitMembers(int xpos, int ypos);
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);

};