#pragma once

class BoundCheckIntArray {

private :
	int *arr;
	int arrLen;
	BoundCheckIntArray(const BoundCheckIntArray& arr) {}
	BoundCheckIntArray& operator=(const BoundCheckIntArray& arr) {}

public :
	BoundCheckIntArray(int len);
	int & operator[](int idx);
	int& operator[](int idx) const;
	int GetArrLen() const;
	~BoundCheckIntArray();

};

void ShowAllData(const BoundCheckIntArray& ref);