#ifndef __CLASS_RACE__
#define __CALSS_RACE__

class Car {

private:
	char gamerID[20];
	int fuelGauge;
	int curSpeed;

public:
	void InitMembers(const char *ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();

};

#endif