#pragma once

class Person {

public :
	void Sleep();

};

class Student : public Person {

public :
	void Study();

};

class PartTimeStudent : public Student {

public :
	void Work();

};