#pragma once

#include <iostream>

using namespace std;

class SortRule {

public :
	virtual bool operator()(int num1, int num2) const = 0;

};

class AscendingSort : public SortRule {

public :
	bool operator()(int num1, int num2) const;

};

class DescendingSort : public SortRule {

public :
	bool operator()(int num1, int num2) const;

};

class DataStorage {

private :
	int *arr;
	int idx;
	const int MAX_LEN;

public :
	DataStorage(int arrlen);
	void AddData(int num);
	void ShowAllData() const;
	void SortData(const SortRule& functor);

};