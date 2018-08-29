#pragma warning(disable:4996)

#include "EmployeeManager2.h"

#include <iostream>
#include <cstring>

using namespace std;

Employee::Employee(const char *name) {

	strcpy(this->name, name);

}

void Employee::ShowYourName() const {

	cout << "Name : " << name << endl;

}

PermanentWorker::PermanentWorker(const char *name, const int money) : Employee(name), salary(money) { }

int PermanentWorker::GetPay() const {

	return salary;

}

void PermanentWorker::ShowSalaryInfo() const {

	ShowYourName();
	cout << "Salary : " << GetPay() << endl << endl;

}

SalesWorker::SalesWorker(const char *name, int money, double ratio) : PermanentWorker(name, money), salesResult(0), bonusRatio(ratio) {}

void SalesWorker::AddSalesResult(int value) {

	salesResult += value;

}

int SalesWorker::GetPay() const {

	return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);

}

void SalesWorker::ShowSalaryInfo() const {

	ShowYourName();
	cout << "Salary : " << GetPay() << endl << endl;

}

ForeignSalesWorker::ForeignSalesWorker(const char *name, int money, double ratio, int riskLevel) : SalesWorker(name, money, ratio), risk(riskLevel) {}

void ForeignSalesWorker::ShowSalaryInfo() const {

	ShowYourName();
	cout << "Salary : " << GetPay() << endl;
	cout << "Risk Pay : " << GetPay() * risk / 100 << endl;
	cout << "Total : " << GetPay() + (GetPay() * risk / 100) << endl << endl;

}

TemporaryWorker::TemporaryWorker(const char *name, int pay) : Employee(name), workTime(0), payPerHour(pay) {}

void TemporaryWorker::AddWorkTime(int time) {

	workTime += time;

}

int TemporaryWorker::GetPay() const {

	return workTime * payPerHour;

}

void TemporaryWorker::ShowSalaryInfo() const {

	ShowYourName();
	cout << "Salary : " << GetPay() << endl << endl;

}

void EmployeeHandler::AddEmployee(Employee *emp) {

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