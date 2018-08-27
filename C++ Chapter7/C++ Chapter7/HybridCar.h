#pragma once

class Car {

private :
	int gasolinGauge;

public :
	Car(int gas);
	int GetGasGauge() const;

};

class HybridCar : public Car {

private :
	int electricGauge;

public :
	HybridCar(int elec, int gas);
	int GetElecGauge() const;

};

class HybridWaterCar : public HybridCar {

private :
	int waterGauge;

public :
	HybridWaterCar(int water, int elec, int gas);
	void ShowCurrentGauge() const;

};