#pragma once

#include "Main.h"

class Car {

private :
	int fuelGauge;

public :
	Car(int fuel);
	void ShowCarState() const;

};

class Truck : public Car {

private :
	int freightWeight;

public :
	Truck(int fuel, int weight);
	void ShowTruckState() const;

};