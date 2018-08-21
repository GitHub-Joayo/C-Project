#include "ConstObject.h"

#include <iostream>

using namespace std;

ConstObj& ConstObj::AddNum(int n) {

	num += n;
	return *this;

}

void ConstObj::ConstObjFunc() {

	cout << "ConstObjFunc() : "<< num << endl;

}

void ConstObj::ConstObjFunc() const {

	cout << "ConstObjFunc() const : " << num << endl;

}

void ConstObj::ShowData() const {

	cout << "num : " << num << endl;

}

void YourFunc(const ConstObj &obj) {

	obj.ConstObjFunc();

}