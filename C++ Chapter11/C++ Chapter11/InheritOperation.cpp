#include <iostream>
#include <cstring>

#include "InheritOperation.h"

using namespace std;

Gun::Gun() : bullet(0) {}

Gun::Gun(int bnum) : bullet(bnum) {}

void Gun::Shot() {

	cout << "BANG!" << endl;
	bullet--;

}

Police::Police(int bnum, int bcuff) : handcuffs(bcuff) {

	pistol = new Gun(bnum);

}

Police::Police(const Police &ref){

	handcuffs = ref.handcuffs;

}

void Police::PutHandCuff() {

	cout << "SNAP!" << endl;
	handcuffs--;

}

Police& Police::operator=(const Police &ref) {

	handcuffs = ref.handcuffs;
	pistol = new Gun();

	return *this;

}

void Police::ShowInfo() const {

	cout << handcuffs << endl;
	cout << pistol << endl;

}