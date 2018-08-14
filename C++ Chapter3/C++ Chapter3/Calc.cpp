#include "Calc.h"

#include <iostream>

using namespace std;

void Cal::InitCal(void) {

	add = min = div = mul = 0;
	result = 0.0;

}


double Cal::Add(double x, double y) {

	add++;

	return x + y;

}

double Cal::Min(double x, double y) {

	min++;

	return x - y;

}

double Cal::Div(double x, double y) {

	if (x == 0 && y == 0) {
		cout << "Both are Zero" << endl << endl;
		result = 0;
		return result;
	}
	else if (y == 0) {

		cout << "Divisor is Zero" << endl << endl;
		result = 0;
		return result;

	}

	div++;
	result = x / y;

	return result;

}

double Cal::Mul(double x, double y) {

	mul++;

	return x * y;

}

void Cal::ShowCount(void) {

	cout << endl << "Add : " << add << endl << "Min : " << min << endl << "Div : " << div << endl << "Mul : " << mul << endl;

}