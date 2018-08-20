#include "ReturnObjCopycon.h"

#include <iostream>

using namespace std;

ReturnObj::ReturnObj(const ReturnObj &copy) {

	cout << "Called ReturnObjCopy(const ReturnObjCopy &copy)" << endl;

}

void ReturnObj::ShowData() {

	cout << "num : " << num << endl;

}

ReturnObj& ReturnObj::AddNum(int n) {

	num += n;
	return *this;

}

ReturnObj ReturnObjFunc(ReturnObj ob) {

	cout << "Before return" << endl;
	return ob;

}