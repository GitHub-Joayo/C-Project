#pragma once

class Gun {

private:
	int bullet;

public:
	Gun();
	Gun(int bnum);
	void Shot();

};

class Police {

private:
	int handcuffs;
	Gun *pistol;

public:
	Police(int bnum, int bcuff);
	Police(const Police &ref);
	void PutHandCuff();
	Police& operator=(const Police &ref);
	void ShowInfo() const;

};
