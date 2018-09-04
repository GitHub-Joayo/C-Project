#include "NewDeleteOverloading.h"

AnotherPoint::AnotherPoint(int x, int y) : xpos(x), ypos(y) {}

void * AnotherPoint::operator new (size_t size) {

	cout << "operator new : " << size << endl;
	void *adr = new char[size];
	return adr;

}

void * AnotherPoint::operator new[](size_t size) {

	cout << "operator new[] : " << size << endl;
	void *adr = new char[size];
	return adr;

}

void AnotherPoint::operator delete (void *adr) {

	cout << "operator delete" << endl;
	delete[] adr;

}

void AnotherPoint::operator delete[](void *adr) {

	cout << "operator delete[]" << endl;
	delete[] adr;

}

ostream& operator<<(ostream& os, const AnotherPoint& pos) {

	os << "[" << pos.xpos << ", " << pos.ypos << "]" << endl;
	return os;

}