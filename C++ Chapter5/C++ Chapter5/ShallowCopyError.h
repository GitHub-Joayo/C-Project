#pragma once
#pragma once

class Person {

private:
	char *name;
	int age;

public:
	Person();
	Person(const char *myname, const int myage);
	Person(const Person &ps);
	void SetPersonInfo(char *myname, int myage);
	void ShowPersonInfo() const;
	~Person();

};