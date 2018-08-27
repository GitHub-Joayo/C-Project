#pragma warning(disable:4996)

#include "EmployeeManager1.h"

#include <iostream>
#include <cstring>

using namespace std;

PermanentWorker::PermanentWorker(const char *name, const int money) : salary(money) {

	strcpy(this->name, name);

}

int PermanentWorker::GetPay() const {

	return salary;

}

void PermanentWorker::ShowSalaryInfo() const {

	cout << "Name : " << name << endl;
	cout << "Salary : " << GetPay() << endl << endl;

}

void EmployeeHandler::AddEmployee(PermanentWorker *emp) {

	empList[empNum++] = emp;

}

void EmployeeHandler::ShowAllSalaryInfo() const {

	for (int i = 0; i < empNum; i++)
		empList[i]->ShowSalaryInfo();

}

void EmployeeHandler::ShowTotalSalary() const {

	int sum = 0;

	for (int i = 0; i < empNum; i++)
		sum += empList[i]->GetPay();

	cout << "Salary sum : " << sum << endl;

}

EmployeeHandler::~EmployeeHandler() {

	for (int i = 0; i < empNum; i++)
		delete empList[i];

}