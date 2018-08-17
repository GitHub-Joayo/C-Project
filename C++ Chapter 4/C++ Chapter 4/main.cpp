#pragma warning(disable:4996)

#include "Point.h"
#include "Rectangle.h"
#include "FruitSaleSim.h"
#include "Encaps2.h"
#include "Circle.h"
#include "Constructor.h"
// #include "RefMem.h"
#include "PrivateConstructor.h"
#include "Destructor.h"
#include "NameCard.h"
#include "PointerThis.h"
#include "SelfRef.h"

#include <iostream>
#include <cstring>

using namespace std;

int main(void) {

	/*
	Point pos1;
	if (!pos1.InitMembers(-2, 4))
		cout << "Initialize Fail" << endl;

	if (!pos1.InitMembers(2, 4))
		cout << "Initialize Fail" << endl;

	Point pos2;
	if (!pos2.InitMembers(5, 9))
		cout << "Initialize Fail" << endl;

	Rectangle rec;
	if (!rec.InitMembers(pos2, pos1))
		cout << "Rectangle Initialize Fail" << endl;

	if (!rec.InitMembers(pos1, pos2))
		cout << "Rectangle Initialize Fail" << endl;

	rec.ShowRecInfo();
	*/

	/* Que 4 - 1
	FruitSeller seller;

	seller.InitMembers(1000, 20, 0);

	FruitBuyer buyer;

	buyer.InitMembers(-1000);
	buyer.BuyApples(seller, 2000);

	cout << "Current State of Fruit Seller" << endl;
	seller.ShowSalesResult();

	cout << "Current State of Fruit Buyer" << endl;
	buyer.ShowBuyResult();
	*/

	/*
	CONTAC600 cap;
	ColdPatient sufferer;
	sufferer.TakeCONTAC600(cap);
	*/

	/*
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	*/

	/*
	SimpleClass *ptr1 = new SimpleClass(100, 20);

	ptr1->ShowDate();

	SimpleClass *ptr2 = new SimpleClass();

	ptr2->ShowDate();
	*/

	/*
	Rectangle rec(1, 1, 5, 5);
	rec.ShowRecInfo();
	*/

	/*
	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.ShowYourName();
	*/

	/*
	AAA base;
	base.ShowNum();

	AAA &obj1 = base.CreateInitObj(3);
	obj1.ShowNum();

	AAA &obj2 = base.CreateInitObj(12);
	obj2.ShowNum();

	delete &obj1;
	delete &obj2;
	*/

	/*
	Person man1("Lee", 24);
	Person man2("Kim", 24);

	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	*/

	/*
	Ring ring(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	*/

	/*
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLECK);
	NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);

	manClerk.ShowNameCardInfo();
	manSenior.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	*/

	/*
	Person parr[3];
	char namestr[100];
	char *strptr;
	int age;

	for (int i = 0; i < 3; i++) {

		cout << "Name : ";
		cin >> namestr;

		cout << "Age : ";
		cin >> age;
		
		strptr = new char[strlen(namestr) + 1];
		strcpy(strptr, namestr);
		
		parr[i].SetPersonInfo(strptr, age);

	}

	for (int i = 0; i < 3; i++)
		parr[i].ShowPersonInfo();
	*/

	/*
	SoSimple sim1(100);
	SoSimple *ptr1 = sim1.GetThisPointer();
	cout << ptr1 << ", ";
	ptr1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple *ptr2 = sim2.GetThisPointer();
	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();
	*/

	/**/
	SelfRef obj(3);
	SelfRef &ref = obj.Adder(2);

	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();

	system("pause");

	return 0;

}