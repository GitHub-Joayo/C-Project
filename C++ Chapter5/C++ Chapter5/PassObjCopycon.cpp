#include "PassObjCopycon.h"

#include <iostream>

using namespace std;

CopyConstructor::CopyConstructor(const CopyConstructor &copy) : num(copy.num) {

	cout << "Called SoSimple(const SoSimple &copy)" << endl;

}

void CopyConstructor::ShowData() {

	cout << "num : " << this->num << endl;

}

void SimpleFuncObj(CopyConstructor ob) {

	ob.ShowData();

}