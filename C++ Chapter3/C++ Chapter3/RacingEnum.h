#ifndef __RACING_ENUM__
#define __RACING_ENUM__

namespace CAR_CONST {

	enum {

		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10

	};

}

typedef struct __Car {

	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

	void ShowCarState(void);
	void Accel(void);
	void Break(void);

} Car;

#endif