#include <iostream>

#include "TrueAndFalse.h"
#include "BoolType.h"
#include "Reference.h"
#include "RefArray.h"
#include "RefQue.h"
#include "MemMalFree.h"
#include "Cstd.h"

using namespace std;

int main(void) {

	/*
	TAF::SimpleFunc();
	*/

	/*
	bool isPos;
	int num = 0;

	cout << "Input Number : ";
	cin >> num;

	isPos = IsPositive(num);

	if (isPos)
	cout << "Positive" << endl;
	else
	cout << "Negative" << endl;
	*/

	/*
	Ref::SimpleFunc();
	*/

	/*
	RefArr::SimpleFunc();
	*/

	/*
	RefPtr::SimpleFunc();
	*/

	/*
	int val1 = 10;
	int val2 = 20;

	ByRef::SimpleFunc(val1, val2);

	cout << "val 1 : " << val1 << endl;
	cout << "val 2 : " << val2 << endl;
	*/

	/* Que 1
	int val1 = 10;
	int val2 = -10;

	cout << "Plust One " << endl;
	FirstQue::PlusOne(val1, val2);
	cout << "val1 : " << val1 << endl;
	cout << "val2 : " << val2 << endl;
	cout << endl;

	cout << "Reverse Sign " << endl;
	FirstQue::ReverseSign(val1, val2);
	cout << "val1 : " << val1 << endl;
	cout << "val2 : " << val2 << endl;
	cout << endl;
	*/

	/* Que 3
	int num1 = 5, num2 = 10;
	int *ptr1 = &num1, *ptr2 = &num2;

	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;

	ThirdQue::SwapPointer(ptr1, ptr2);

	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;
	*/

	/* Exp
	int num1 = 1;
	int num2 = RefReturn::RefReturnOne(num1);

	num1++;
	num2+=100;

	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;
	*/

	/* Que 4
	const int num = 12;
	const int *ptr = &num;
	const int *(&ref) = ptr;

	cout << *ptr << endl;
	cout << *ref << endl;
	*/

	/* Exp
	char *str = Mem::MakeStrAdr(20);

	strcpy(str, "I am so Happy ~ ");

	cout << str << endl;

	free(str);
	*/

	/* Exp
	char *str = NewDel::MakeStrAdr(20);

	strcpy(str, "I am so Happy ! ");

	cout << str << endl;

	delete[] str;
	*/

	/*
	cout << "case 1 : ";
	Simple *sp1 = new Simple;

	cout << "case 2 : ";
	Simple *sp2 = (Simple*)malloc(sizeof(Simple) * 1);

	cout << endl << "end of Main" << endl;
	*/

	/* Que 5
	Point &pt = NewDelQ::PntAdder({ 5, 5 }, { 5, 5 });

	cout << "X result : " << pt.xpos << endl << "Y Result : " << pt.ypos << endl;

	delete &pt;
	*/

	/*
	char str1[] = "Result";
	char str2[30];

	strcpy(str2, str1);

	printf("%s : %f \n", str1, sin(0.14));
	printf("%s : %f \n", str2, abs(-1.25));
	*/

	/* Que 6 
	CstdQ::SimpleFunc();
	*/

	/* Que 7 */
	CstdRand::SimpleFunc();


	system("pause");

	return 0;

}