#pragma once

#include "Main.h"

template <class T>
void SwapData(T &num1, T &num2) {

	T tmp = num1;
	num1 = num2;
	num2 = tmp;

}

template <class S>
S SumArray(S arr[], int len) {

	S sum = (S)0;
	for (int i = 0; i < len; i++)
		sum += arr[i];

	return sum;

}

class Point1 {

private :
	int xpos, ypos;

public :
	Point1(int x = 0, int y = 0);
	void ShowPosition() const;

};