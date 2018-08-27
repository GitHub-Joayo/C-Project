#include "HybridCar.h"

#include <iostream>

using namespace std;

Car::Car(int gas) : gasolinGauge(gas) {

	cout << "Car(int gas)" << endl;

}

int Car::GetGasGauge() const {

	return gasolinGauge;

}

HybridCar::HybridCar(int elec, int gas) : electricGauge(elec), Car(gas) {

	cout << "HybridCar(int elec)" << endl;

}

int HybridCar::GetElecGauge() const {

	return electricGauge;

}

HybridWaterCar::HybridWaterCar(int water, int elec, int gas) : waterGauge(water), HybridCar(elec, gas) {

	cout << "HybridWaterCar(int water, int elec, int gas)" << endl;

}

void HybridWaterCar::ShowCurrentGauge() const {

	cout << "Gasolin Gauge : " << GetGasGauge() << endl;
	cout << "Electric Gauge : " << GetElecGauge() << endl;
	cout << "Water Gauge : " << waterGauge << endl;

}