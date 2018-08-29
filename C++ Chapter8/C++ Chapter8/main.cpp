#include <iostream>

#include "ObjectPointer.h"
#include "EmployeeManager2.h"
#include "VritualOverride.h"
#include "VirtualDestructor.h"
#include "RefAttribute.h"

using namespace std;

int main(void) {

	/*
	Person *ptr1 = new Student();
	Person *ptr2 = new PartTimeStudent();
	Student *ptr3 = new PartTimeStudent();

	ptr1->Sleep();
	ptr2->Sleep();
	ptr3->Study();

	delete ptr1, ptr2, ptr3;
	*/

	/*
	EmployeeHandler handler;

	handler.AddEmployee(new PermanentWorker("Kim", 1000));
	handler.AddEmployee(new PermanentWorker("Lee", 1500));

	TemporaryWorker *alba = new TemporaryWorker("Jung", 700);
	alba->AddWorkTime(5);
	handler.AddEmployee(alba);

	SalesWorker *seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000);
	handler.AddEmployee(seller);

	handler.ShowAllSalaryInfo();

	handler.ShowTotalSalary();
	*/

	/*
	Thrid *tptr = new Thrid();
	Second *sptr = tptr;
	First *fptr = sptr;

	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();

	delete tptr;
	*/

	/*
	EmployeeHandler handler;

	ForeignSalesWorker *fseller1 = new ForeignSalesWorker("Lee", 1000, 0.1, RISK_LEVEL::RISK_A);
	fseller1->AddSalesResult(7000);
	handler.AddEmployee(fseller1);

	ForeignSalesWorker *fseller2 = new ForeignSalesWorker("Kim", 1000, 0.1, RISK_LEVEL::RISK_B);
	fseller2->AddSalesResult(7000);
	handler.AddEmployee(fseller2);

	ForeignSalesWorker *fseller3 = new ForeignSalesWorker("Park", 1000, 0.1, RISK_LEVEL::RISK_C);
	fseller3->AddSalesResult(7000);
	handler.AddEmployee(fseller3);

	handler.ShowAllSalaryInfo();
	*/

	/*
	VirtualDestructor1 *ptr = new VirtualDestructor2("Simple", "Complex");

	delete ptr;
	*/

	/**/
	RefAtt3 obj;
	obj.FirstFunc();
	obj.SecondFunc();
	obj.ThirdFunc();
	obj.SimpleFunc();

	RefAtt2 &sref = obj;
	obj.FirstFunc();
	obj.SecondFunc();
	obj.SimpleFunc();

	RefAtt1 &fref = obj;
	fref.FirstFunc();
	fref.SimpleFunc();


	system("pause");

	return 0;

}