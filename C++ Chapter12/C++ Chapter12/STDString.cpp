#pragma warning(disable:4996)

#include <cstring>

#include "STDString.h"

String::String() : str(NULL) {}

String::String(const char *str) {

	this->str = new char[strlen(str) + 1];
	strcpy(this->str, str);

}

String& String::operator=(const String &ref) {

	this->str = new char[strlen(ref.str) + 1];
	strcpy(this->str, ref.str);

	return *this;

}

char* String::operator+(const String &ref) {

	char *tmp = new char[strlen(this->str) + strlen(ref.str) + 1];

	strcpy(tmp, this->str);
	strcat(tmp, ref.str);

	return tmp;

}

String& String::operator+=(const String &ref) {

	char *tmp = str;

	this->str = new char[strlen(this->str) + strlen(ref.str) + 1];
	strcpy(this->str, tmp);
	strcat(this->str, ref.str);

	delete[] tmp;

	return *this;

}

bool String::operator==(const String &ref) {

	if (!strcmp(this->str, ref.str))
		return true;
	else
		return false;

}

String::~String() {

	// if (str != NULL)
		// delete[] str;
	
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