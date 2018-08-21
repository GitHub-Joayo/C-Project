#include "Mutable.h"

#include <iostream>

using namespace std;

void Muta::ShowMuta() const {

	cout << num1 << " , " << num2 << endl;

}

void Muta::CopyToNum2() const {

	num2 = num1;

}