#include <iostream>

#include "OperOverloading.h"
#include "InheritOperation.h"
#include "Book.h"
#include "ArrayClass.h"
#include "StablePointArray.h"
#include "NewDeleteOverloading.h"
#include "PointerOperatorOverloading.h"
#include "SmartPtr.h"
#include "Functor.h"
#include "SortFunctor.h"

using namespace std;

int main(void) {

	/*
	First fsrc(111, 222);
	First fcpy;

	Second ssrc(333, 444);
	Second scpy;

	fcpy = fsrc;
	scpy = ssrc;

	fcpy.ShowData();
	scpy.ShowaData();

	First fob1, fob2;
	Second sob1, sob2;

	fob1 = fob2 = fsrc;
	sob1 = sob2 = ssrc;

	fob1.ShowData();
	fob2.ShowData();

	sob1.ShowaData();
	sob2.ShowaData();
	*/

	/*
	Second ssrc(111, 222, 333, 444);
	Second scpy;

	scpy = ssrc;
	scpy.ShowaData();
	*/

	/*
	Police test(10, 1);
	Police cpy(1, 10);

	test.ShowInfo();
	cpy.ShowInfo();

	Police cpy2(test);
	
	cpy = test;

	cpy.ShowInfo();
	cpy2.ShowInfo();
	*/

	/*
	Book bk1("C++", "123-abc", 10000);
	Book bk2("C#", "abc-123", 15000);

	EBook eb1("Java", "456-789", 20000, "1111111");
	EBook eb2("Assembly", "789-456", 20000, "AAA");

	bk1.ShowBookInfo();
	cout << endl;
	bk2.ShowBookInfo();
	cout << endl;

	bk1 = bk2;

	bk2.ShowBookInfo();
	cout << endl;

	eb1.ShowEBookInfo();
	cout << endl;
	eb2.ShowEBookInfo();
	cout << endl;

	eb1 = eb2;

	eb1.ShowEBookInfo();
	cout << endl;
	*/

	/*
	BoundCheckIntArray arr(5);
	for (int i = 0; i < 5; i++)
		arr[i] = (i + 1) * 11;

	for (int i = 0; i < 6; i++)
		cout << arr[i] << endl;
		*/

	/*
	BoundCheckIntArray arr(5);

	for (int i = 0; i < 5; i++)
		arr[i] = (i + 1) * 11;

	ShowAllData(arr);

	*/

	/*
	BoundCheckPointArray arr(3);

	arr[0] = new Point(3, 4);
	arr[1] = new Point(5, 6);
	arr[2] = new Point(7, 8);

	for (int i = 0; i < arr.GetArrLen(); i++)
		cout << arr[i];

	for (int i = 0; i < arr.GetArrLen(); i++)
		delete arr[i];
		*/

	/*
	AnotherPoint *ptr = new AnotherPoint(3, 4);
	AnotherPoint *ptrArr = new AnotherPoint[3];

	cout << ptr;
	cout << ptrArr;

	delete[] ptrArr;
	delete ptr;
	*/

	/*
	Number num(20);
	num.ShowData();

	(*num) = 30;

	num->ShowData();

	(*num).ShowData();
	*/

	/*
	SmartPtr sptr1(new SmartPoint(1, 2));
	SmartPtr sptr2(new SmartPoint(2, 3));
	SmartPtr sptr3(new SmartPoint(3, 4));

	cout << *sptr1;
	cout << *sptr2;
	cout << *sptr3;

	sptr1->SetPoint(10, 20);
	sptr2->SetPoint(30, 40);
	sptr3->SetPoint(50, 60);

	cout << *sptr1;
	cout << *sptr2;
	cout << *sptr3;
	*/

	/*
	Adder adder;

	cout << adder(1, 3) << endl;
	cout << adder(1.5, 3.7) << endl;
	cout << adder(FunctorPoint(3, 4), FunctorPoint(7, 9));
	*/

	/**/
	DataStorage storage(5);
	storage.AddData(40);
	storage.AddData(30);
	storage.AddData(50);
	storage.AddData(20);
	storage.AddData(10);

	storage.SortData(AscendingSort());
	storage.ShowAllData();

	storage.SortData(DescendingSort());
	storage.ShowAllData();


	system("pause");

	return 0;

}