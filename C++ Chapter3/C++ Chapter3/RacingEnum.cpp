#include "RacingEnum.h"

#include <iostream>

using namespace std;

void __Car::ShowCarState(void) {

	cout << "Owner ID : " << gamerID << endl;
	cout << "Fuel Levle : " << fuelGauge << endl;
	cout << "Current Speed : " << curSpeed << endl << endl;

}

void __Car::Accel(void) {

	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD) {

		curSpeed = CAR_CONST::MAX_SPD;
		return;

	}

	curSpeed = CAR_CONST::ACC_STEP;

}

void __Car::Break(void) {

	if (curSpeed < CAR_CONST::BRK_STEP) {
		curSpeed = 0;
		return;
	}

	curSpeed -= CAR_CONST::BRK_STEP;

}