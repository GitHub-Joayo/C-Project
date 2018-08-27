#include "EmployeeManager1.h"
#include "UnivStudent.h"
#include "MakingOrder.h"
#include "HybridCar.h"
#include "MyFriend.h"
#include "IsAInheritance.h"
#include "HasAInheritance.h"
#include "Rectangle.h"
#include "Book.h"

#include <iostream>

using namespace std;

int main(void) {

	/*

	EmployeeHandler handler;

	handler.AddEmployee(new PermanentWorker("Kim", 1000));
	handler.AddEmployee(new PermanentWorker("Lee", 2000));
	handler.AddEmployee(new PermanentWorker("Park", 3000));

	handler.ShowAllSalaryInfo();

	handler.ShowTotalSalary();
	*/

	/* 
	UnivStudent ustd1("Lee", 24, "Computer Eng.");
	ustd1.WhoAreYou();

	UnivStudent ustd2("Kim", 22, "Electronic eng. ");
	ustd2.WhoAreYou();
	*/

	/*
	cout << "case1....." << endl;
	SoDerived dr1;
	dr1.ShowDerivData();

	cout << "case2......" << endl;
	SoDerived dr2(10);
	dr2.ShowDerivData();

	cout << "case3......" << endl;
	SoDerived dr3(10, 20);
	dr3.ShowDerivData();
	*/

	/*
	cout << "Check Destroyer" << endl;

	SoDerived dr1(10, 20);
	*/

	/*
	UnivStudent st1("Kim", 22, "Mathmatics");
	st1.WhoAreYou();

	UnivStudent st2("Lee", 24, "Computer Eng.");
	st2.WhoAreYou();
	*/

	/* 
	HybridWaterCar hwc1(10, 20, 30);
	hwc1.ShowCurrentGauge();
	*/

	/* 
	MyFriendDetailInfo mfd("Lee", 24, "Daegu", "4187 1729");
	mfd.ShowFriendDetailInfo();
	*/

	/*
	LaptopComp lc("Lee", 5);
	TabletPC tp("Kim", 5, "ISE-241-242");

	lc.MovingCal();
	tp.Write("ISE-241-242");
	*/

	/*
	Police pman(5, 3);
	pman.Shot();
	pman.PutHandCuff();
	*/

	/*
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();
	*/

	/**/
	Book book("Good C++", "555-12345-890-0", 20000);
	book.ShowBookInfo();

	EBook ebook("Good C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
	ebook.ShowEBookInfo();

	system("pause");

	return 0;

}