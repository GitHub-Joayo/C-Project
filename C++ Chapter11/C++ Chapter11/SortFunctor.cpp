#include "SortFunctor.h"

bool AscendingSort::operator()(int num1, int num2) const {

	if (num1 > num2)
		return true;
	else
		return false;

}

bool DescendingSort::operator()(int num1, int num2) const {

	if (num1 > num2)
		return false;
	else
		return true;

}

DataStorage::DataStorage(int arrlen) : idx(0), MAX_LEN(arrlen) {

	arr = new int[MAX_LEN];

}

void DataStorage::AddData(int num) {

	if (MAX_LEN <= idx) {

		cout << "You Can't Storage More Data" << endl;
		return;

	}

	arr[idx++] = num;

}

void DataStorage::ShowAllData() const {

	for (int i = 0; i < idx; i++)
		cout << arr[i] << " ";
	cout << endl;

}

void DataStorage::SortData(const SortRule& functor) {

	for (int i = 0; i < (idx - 1); i++) {

		for (int j = 0; j < (idx - 1) - i; j++) {

			if (functor(arr[j], arr[j + 1])) {

				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}

		}

	}

}