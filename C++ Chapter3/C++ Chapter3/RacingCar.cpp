#include "RacingCar.h"

#include <iostream>

using namespace std;

void _Car::ShowCarState() {

	cout << "Owner ID : " << gamerID << endl;
	cout << "Fuel Level : " << fuelGauge << endl;
	cout << "Current Speed : " << curSpeed << endl << endl;

}

void _Car::Accel() {

	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= FUEL_STEP;

	if (curSpeed + ACC_STEP >= MAX_SPD) {
		curSpeed = MAX_SPD;
		return;
	}

	curSpeed += ACC_STEP;

}

void _Car::Break() {

	if (curSpeed < BRK_STEP) {

		curSpeed = 0;
		return;

	}

	curSpeed -= BRK_STEP;

}