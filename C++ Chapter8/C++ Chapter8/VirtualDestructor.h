#pragma once

class VirtualDestructor1 {

private :
	char *strOne;

public :
	VirtualDestructor1(const char *str);
	virtual ~VirtualDestructor1();

};

class VirtualDestructor2 : public VirtualDestructor1 {

private :
	char *strTwo;

public :
	VirtualDestructor2(const char *str1, const char *str2);
	~VirtualDestructor2();

};