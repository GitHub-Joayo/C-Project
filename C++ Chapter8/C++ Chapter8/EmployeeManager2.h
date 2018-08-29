#pragma once

namespace RISK_LEVEL {

	enum {
		RISK_A = 30, 
		RISK_B = 20, 
		RISK_C = 10};

}

class Employee {

private :
	char name[100];

public :
	Employee(const char *name);
	void ShowYourName() const;
	virtual int GetPay() const = 0;
	virtual void ShowSalaryInfo() const = 0;

};

class PermanentWorker : public Employee {

private:
	int salary;

public:
	PermanentWorker(const char *name, const int money);
	int GetPay() const;
	void ShowSalaryInfo() const;

};

class SalesWorker : public PermanentWorker {

private :
	int salesResult;
	double bonusRatio;

public :
	SalesWorker(const char *name, int money, double ratio);
	void AddSalesResult(int value);
	int GetPay() const;
	void ShowSalaryInfo() const;

};

class ForeignSalesWorker : public SalesWorker {

private :
	const int risk;

public :
	ForeignSalesWorker(const char *name, int money, double ratio, int riskLevel);
	void ShowSalaryInfo() const;

};

class TemporaryWorker : public Employee {

private :
	int workTime;
	int payPerHour;

public :
	TemporaryWorker(const char *name, int pay);
	void AddWorkTime(int time);
	int GetPay() const;
	void ShowSalaryInfo() const;

};

class EmployeeHandler {

private:
	Employee * empList[50];
	int empNum;

public:
	EmployeeHandler() : empNum(0) {}
	void AddEmployee(Employee *emp);
	void ShowAllSalaryInfo() const;
	void ShowTotalSalary() const;
	~EmployeeHandler();

};