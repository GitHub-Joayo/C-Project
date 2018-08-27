#pragma once

class Computer {

private :
	char *owner;

public :
	Computer(const char *name);
	void Calculate() const;

};

class LaptopComp : public Computer {

private :
	int battery;

public :
	LaptopComp(const char *name, int initChag);
	void Charging();
	void UseBattery();
	void MovingCal();
	int GetBatteryInfo() const;

};

class TabletPC : public LaptopComp {

private :
	char *regstPenModel;

public :
	TabletPC(const char *name, int initChag, const char *pen);
	void Write(const char *penInfo);

};