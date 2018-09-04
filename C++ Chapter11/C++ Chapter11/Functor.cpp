#include "Functor.h"

FunctorPoint::FunctorPoint(int x, int y) : xpos(x), ypos(y) {}

FunctorPoint FunctorPoint::operator+(const FunctorPoint& pos) const {

	return FunctorPoint(xpos + pos.xpos, ypos + pos.ypos);

}

ostream& operator<<(ostream& os, const FunctorPoint& pos) {

	os << "[" << pos.xpos << ", " << pos.ypos << "]" << endl;

	return os;

}

int Adder::operator()(const int &n1, const int& n2) {

	return n1 + n2;

}

double Adder::operator()(const double& e1, const double & e2) {

	return e1 + e2;

}

FunctorPoint Adder::operator()(const FunctorPoint& pos1, const FunctorPoint& pos2) {

	return pos1 + pos2;

}