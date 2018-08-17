#pragma once

class SimpleClass {

private :
	int num1;
	int num2;

public :
	SimpleClass(int n1 = 0, int n2 = 0) {

		num1 = n1;
		num2 = n2;

	}

	void ShowDate() const;

};