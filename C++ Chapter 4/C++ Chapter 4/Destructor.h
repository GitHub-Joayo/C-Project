#pragma once

class Person {

private :
	char *name;
	int age;

public :
	Person();
	Person(const char *myname, const int myage);
	void SetPersonInfo(char *myname, int myage);
	void ShowPersonInfo() const;
	~Person();

};