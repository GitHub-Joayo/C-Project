#include "Cstd.h"

void CstdQ::SimpleFunc(void) {

	char name[] = "Lee";

	char aname[10];

	cout << "name len : " << strlen(name) << endl;

	strcpy(aname, name);

	cout << name << endl << aname << endl;

	strcat(aname, " Kim");

	cout << aname << endl;

	if (!strcmp(name, aname))
		cout << "Same" << endl;
	else
		cout << "not Same" << endl;


}

void CstdRand::SimpleFunc(void) {

	srand(time(NULL));

	for (int i = 0; i < 5; i++) {

		int rnd = rand() % 100;

		cout << rnd << endl;

	}

}