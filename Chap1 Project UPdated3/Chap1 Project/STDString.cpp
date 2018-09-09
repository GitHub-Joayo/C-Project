#pragma warning(disable:4996)

#include <cstring>

#include "STDString.h"

String::String() : str(NULL), len(0) {}

String::String(const char *str) {

	len = strlen(str) + 1;

	this->str = new char[len];
	strcpy(this->str, str);

}

String::String(const String& str) {

	len = str.len;
	this->str = new char[len];
	strcpy(this->str, str.str);

}

String& String::operator=(const String &ref) {

	if (str != NULL)
		delete[] str;

	len = ref.len;

	this->str = new char[len];
	strcpy(this->str, ref.str);

	return *this;

}

String String::operator+(const String &ref) {

	char *tmpstr = new char[len + ref.len - 1];

	strcpy(tmpstr, this->str);
	strcat(tmpstr, ref.str);

	String tmp(tmpstr);

	return tmp;

}

String& String::operator+=(const String &ref) {

	len += (ref.len - 1);

	char *tmp = new char[len];

	strcpy(tmp, str);
	strcat(tmp, ref.str);

	if (str != NULL)
		delete[] str;

	str = tmp;

	return *this;

}

bool String::operator==(const String &ref) {

	return strcmp(str, ref.str) ? false : true;

}

String::~String() {

	if (str != NULL)
		delete[] str;

}

ostream& operator<<(ostream& os, const String str) {

	os << str.str << endl;

	return os;

}

istream& operator>>(istream& is, String& str) {

	char tmp[100];

	is >> tmp;
	str = String(tmp);

	return is;

}