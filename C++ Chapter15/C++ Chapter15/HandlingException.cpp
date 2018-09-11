#include "HandlingException.h"

void TryCatchDiv(void) {

	int num1 = 0, num2 = 0;
	int result = 0;

	cout << "Input Number : ";
	cin >> num1;

	cout << "Input Divisor : ";
	cin >> num2;

	try {
		
		if (num2 == 0)
			throw num2;
		
		cout << "Share : " << num1 / num2 << endl;
		cout << "Remainder : " << num1 % num2 << endl;

	}
	catch(int expn) {

		cout << "Divisor can't be a " << expn << " !" << endl;
		cout << "Restart Program" << endl;

	}

}