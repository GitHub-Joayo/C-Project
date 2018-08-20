#pragma once

class ObjDead {

private :
	int num;

public :
	ObjDead(int n);
	ObjDead(const ObjDead &copy);
	~ObjDead();
};

ObjDead ObjDeadFunc(ObjDead ob);