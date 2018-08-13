#include "RefQue.h"

void FirstQue::PlusOne(int &ref1, int &ref2) {

	ref1 += 1;
	ref2 += 1;

}

void FirstQue::ReverseSign(int &ref1, int &ref2) {

	ref1 = -ref1;
	ref2 = -ref2;

}

void ThirdQue::SwapPointer(int *ptr1, int *ptr2) {

	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

}