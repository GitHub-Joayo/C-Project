#include "HasAInheritance.h"

#include <iostream>
#include <cstring>

using namespace std;

Gun::Gun(int bnum) : bullet(bnum) {}

void Gun::Shot() {

	cout << "BANG!" << endl;
	bullet--;

}

Police::Police(int bnum, int bcuff) : Gun(bnum), handcuffs(bcuff) {}

void Police::PutHandCuff() {

	cout << "SNAP!" << endl;
	handcuffs--;

}