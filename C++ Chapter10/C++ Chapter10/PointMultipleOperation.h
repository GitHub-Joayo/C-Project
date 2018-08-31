#pragma once

#include <iostream>

using namespace std;

class Multiple {

private :
	int xpos, ypos;

public :
	Multiple(int x = 0, int y = 0);
	void ShowPosition() const;
	Multiple operator*(int times);
	int GetXpos() const;
	int GetYpos() const;
	friend Multiple operator*(int times, Multiple &ref);
	friend ostream& operator<<(ostream& os, const Multiple &pos);
	friend istream& operator>>(istream& is, Multiple &pos);

};

Multiple operator*(int times, Multiple &ref);
ostream& operator<<(ostream& os, const Multiple &pos);
istream& operator>>(istream& is, Multiple &pos);