#include "TempObj.h"

#include <iostream>

using namespace std;

Temporary::Temporary(int n) : num(n) {

	cout << "Create Obj : " << num << endl;

}

Temporary::~Temporary() {

	cout << "Destroy Obj : " << num << endl;

}

void Temporary::ShowTempInfo() {

	cout << "My num is " << num << endl;

}