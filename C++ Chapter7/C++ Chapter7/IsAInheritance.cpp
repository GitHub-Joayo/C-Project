#pragma warning(disable:4996)

#include "IsAInheritance.h"

#include <iostream>

using namespace std;

Computer::Computer(const char *name) {

	owner = new char[strlen(name) + 1];
	strcpy(owner, name);

}

void Computer::Calculate() const {

	cout << "Calculate requested" << endl;

}

LaptopComp::LaptopComp(const char *name, int initChag) : Computer(name), battery(initChag) {}

void LaptopComp::Charging() {

	battery += 5;

}

void LaptopComp::UseBattery() {

	battery -= 1;

}

void LaptopComp::MovingCal() {

	if (GetBatteryInfo() < 1) {

		cout << "Low Battery Please Charge" << endl;
		return;

	}

	cout << "Moving ";
	Calculate();
	UseBattery();

}

int LaptopComp::GetBatteryInfo() const {

	return battery;

}

TabletPC::TabletPC(const char *name, int initChag, const char *pen) : LaptopComp(name, initChag) {

	regstPenModel = new char[strlen(pen) + 1];
	strcpy(regstPenModel, pen);

}

void TabletPC::Write(const char *penInfo) {

	if (GetBatteryInfo() < 1) {

		cout << "Low Battery Please Charge" << endl;
		return;


	}

	if (strcmp(regstPenModel, penInfo)) {

		cout << "Not Registered Pen" << endl;
		return;

	}

	cout << "Processing Wrote Contents" << endl;
	UseBattery();

}