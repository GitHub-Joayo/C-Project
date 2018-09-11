#include "DynamicCasting.h"

Car::Car(int fuel) : fuelGauge(fuel) {}

void Car::ShowCarState() const {

	cout << "Left Amount of Fuel : " << fuelGauge << endl;

}

Truck::Truck(int fuel, int weight) : Car(fuel), freightWeight(weight) {}

void Truck::ShowTruckState() const {

	ShowCarState();
	cout << "Weight of Cago : " << freightWeight << endl;

}