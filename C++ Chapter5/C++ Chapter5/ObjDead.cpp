#include "ObjDead.h"

#include <iostream>

using namespace std;

ObjDead::ObjDead(int n) : num(n) {

	cout << " New Object : " << this << endl;

}

ObjDead::ObjDead(const ObjDead &copy) : num(copy.num) {

	cout << " New Copy obj : " << this << endl;

}

ObjDead::~ObjDead() {

	cout << "Destroy obj : " << this << endl;

}

ObjDead ObjDeadFunc(ObjDead ob) {

	cout << " Parm ADR : " << &ob << endl;

	return ob;

}