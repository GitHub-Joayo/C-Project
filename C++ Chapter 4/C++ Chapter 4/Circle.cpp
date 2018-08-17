#include "Circle.h"

#include <iostream>

using namespace std;

void CPoint::Init(int x, int y) {

	xpos = x;
	ypos = y;

}

void CPoint::ShowPointInfo() const {

	cout << "[ " << xpos << ", " << ypos << " ]" << endl;

}

void Circle::Init(int x, int y, double inRad) {

	if (inRad < 0) {

		cout << "Please Input Correct Radius" << endl;
		cin >> inRad;

		while (inRad < 0) {

			cout << "Retype Correctly" << endl;
			cin >> inRad;

		}

	}

	cp.Init(x, y);
	rad = inRad;

}

void Circle::ShowCircleInfo() const {

	cout << "Center Point : ";
	cp.ShowPointInfo();
	cout << "Circle's Radius : " << rad << endl << endl;

}

void Ring::Init(int w, int x, int rad1, int y, int z, int rad2) {

	inner.Init(w, x, rad1);
	outter.Init(y, z, rad2);

}

void Ring::ShowRingInfo() const {

	cout << "Inner Circle" << endl;
	inner.ShowCircleInfo();
	cout << endl;

	cout << "Outter Circle" << endl;
	outter.ShowCircleInfo();
	cout << endl;

}