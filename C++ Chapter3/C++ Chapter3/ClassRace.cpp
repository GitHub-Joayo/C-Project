#pragma warning(disable:4996)

#include "ClassRace.h"

#include <iostream>
#include <cstring>

using namespace std;

void Car::InitMembers(const char *ID, int fuel) {

	strcpy(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;

}

void Car::ShowCarState() {

	cout << "Owner ID : " << gamerID << endl;
	cout << "Fuel Amount : " << fuelGauge << endl;
	cout << "Current Speed : " << curSpeed << endl << endl;

}

void Car::Accel() {

	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= 2;

	if (curSpeed + 10 >= 200) {
		curSpeed = 200;
		return;
	}

	curSpeed += 10;

}

void Car::Break() {

	if (curSpeed < 10) {
		curSpeed = 0;
		return;
	}

	curSpeed -= 10;

}