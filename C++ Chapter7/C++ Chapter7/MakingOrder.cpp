#include "MakingOrder.h"

#include <iostream>

using namespace std;

SoBase::SoBase() : baseNum(20) {

	cout << "SoBase() " << endl;

}

SoBase::SoBase(int n) : baseNum(n) {

	cout << "SoBase(int n)" << endl;

}

void SoBase::ShowBaseData() const {

	cout << baseNum << endl;

}

SoBase::~SoBase() {

	cout << "~SoBase() " << baseNum << endl;

}

SoDerived::SoDerived() : derivNum(30) {

	cout << "SoDerived()" << endl;

}

SoDerived::SoDerived(int n) : derivNum(n) {

	cout << "SoDerived(int n)" << endl;

}

SoDerived::SoDerived(int n1, int n2) : SoBase(n1), derivNum(n2) {

	cout << "SoDerived(int n1, int 2n)" << endl;

}

void SoDerived::ShowDerivData() const {

	ShowBaseData();
	cout << derivNum << endl;

}

SoDerived::~SoDerived() {

	cout << "~SoDerived() " << derivNum << endl;

}