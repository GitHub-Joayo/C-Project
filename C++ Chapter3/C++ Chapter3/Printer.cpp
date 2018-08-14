#pragma warning(disable:4996)

#include "Printer.h"

#include <iostream>
#include <cstring>

using namespace std;

void Printer::SetString(const char *str) {

	strcpy(string, str);

}

void Printer::PrintString(void) {

	cout << endl << string << endl;

}