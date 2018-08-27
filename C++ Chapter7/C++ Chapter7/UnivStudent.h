#pragma once

class Person {

private :
	int age;
	char *name;

public :
	Person(int myage, const char *myname);
	void WhatYourName() const;
	void HowOldAreYou() const;
	~Person();

};

class UnivStudent : public Person {

private :
	char *major;

public :
	UnivStudent(const char *myname, int myage, const char *mymajor);
	void WhoAreYou() const;
	~UnivStudent();

};