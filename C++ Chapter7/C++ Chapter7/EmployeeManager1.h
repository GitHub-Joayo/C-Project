#pragma once

class PermanentWorker {

private:
	char name[100];
	int salary;

public:
	PermanentWorker(const char *name, const int money);
	int GetPay() const;
	void ShowSalaryInfo() const;

};

class EmployeeHandler {

private :
	PermanentWorker * empList[50];
	int empNum;

public :
	EmployeeHandler() : empNum(0) {}
	void AddEmployee(PermanentWorker *emp);
	void ShowAllSalaryInfo() const;
	void ShowTotalSalary() const;
	~EmployeeHandler();

};