#include "PrivateConstructor.h"

#include <iostream>

using namespace std;

AAA& AAA::CreateInitObj(int n) const {

	AAA *ptr = new AAA(n);
	return *ptr;

}

void AAA::ShowNum() const {

	cout << num << endl;

}