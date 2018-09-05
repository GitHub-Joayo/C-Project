#include "STDString.h"

int main(void) {

	String str1 = "I Love It";
	String str2 = "I Like It";
	String str3 = str1 + str2;
	String str4;

	cout << str1;
	cout << str2;
	cout << str3;

	str1 += str2;

	cout << str1;
	cout << str2;

	if (str1 == str3)
		cout << "Same" << endl;
	else
		cout << "Not Same" << endl;

	cin >> str4;

	cout << str4;

	system("pause");

	return 0;

}