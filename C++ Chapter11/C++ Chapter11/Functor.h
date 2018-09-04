#pragma once

#include <iostream>

using namespace std;

class FunctorPoint {

private :
	int xpos, ypos;

public :
	FunctorPoint(int x = 0, int y = 0);
	FunctorPoint operator+(const FunctorPoint& pos) const;
	friend ostream& operator<<(ostream& os, const FunctorPoint& pos);

};

ostream& operator<<(ostream& os, const FunctorPoint& pos);

class Adder {

public :
	int operator()(const int &n1, const int& n2);
	double operator()(const double& e1, const double& e2);
	FunctorPoint operator()(const FunctorPoint& pos1, const FunctorPoint& pos2);

};