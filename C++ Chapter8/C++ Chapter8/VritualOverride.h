#pragma once

class First {
	
public :
	virtual void MyFunc();

};

class Second : public First {

public :
	void MyFunc();

};

class Thrid : public Second {

public :
	void MyFunc();

};