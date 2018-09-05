#pragma once

#include <iostream>
#include <string>

using namespace std;

class String {

private :
	int len;
	char *str;

public :
	String();
	String(const char *str);
	String(const String& str);
	String& operator=(const String &ref);
	String operator+(const String &ref);
	String& operator+=(const String &ref);
	bool operator==(const String &ref);
	friend ostream& operator<<(ostream& os, const String str);
	friend istream& operator>>(istream& is, String& str);
	~String();

};

ostream& operator<<(ostream& os, const String str);
istream& operator>>(istream& is, String& str);
