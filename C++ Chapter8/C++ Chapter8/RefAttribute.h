#pragma once

class RefAtt1 {

public :
	void FirstFunc();
	virtual void SimpleFunc();

};

class RefAtt2 : public RefAtt1 {

public :
	void SecondFunc();
	virtual void SimpleFunc();


};

class RefAtt3 : public RefAtt2 {

public :
	void ThirdFunc();
	virtual void SimpleFunc();

};