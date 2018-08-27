#pragma once

class Gun {

private :
	int bullet;

public :
	Gun(int bnum);
	void Shot();

};

class Police : public Gun {

private :
	int handcuffs;

public :
	Police(int bnum, int bcuff);
	void PutHandCuff();

};