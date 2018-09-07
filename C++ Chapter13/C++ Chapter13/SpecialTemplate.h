#pragma once

#include "Main.h"

template <class P>
P Max(P a, P b) {

	return a > b ? a : b;

}

template <>
char *Max(char *a, char *b) {

	cout << "char *Max<char*>(char* a, char *b)" << endl;
	return strcmp(a, b) > 0 ? a : b;

}

template <>
const char* Max(const char *a, const char *b) {

	cout << "const char *Max" << endl;
	return strcmp(a, b) > 0 ? a : b;

}