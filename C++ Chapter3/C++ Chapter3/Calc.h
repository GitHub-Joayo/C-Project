#ifndef __CALCULATOR__
#define __CALCULATOR__

class Cal {

private :
	double result;
	int add, min, div, mul;

public :
	void InitCal(void);
	double Add(double x, double y);
	double Min(double x, double y);
	double Div(double x, double y);
	double Mul(double x, double y);
	void ShowCount(void);

};

#endif