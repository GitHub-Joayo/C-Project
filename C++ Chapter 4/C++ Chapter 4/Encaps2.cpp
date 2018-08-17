#include <iostream>

#include "Encaps2.h"

using namespace std;

void SinivelCap::Take() const {

	cout << "Runny nose Stops" << endl;

}

void SneezeCap::Take() const {

	cout << "Sneeze Stops" << endl;

}

void SnuffleCap::Take() const {

	cout << "Nose Clear up" << endl;

}

void CONTAC600::Take() const {

	sin.Take();
	sne.Take();
	snu.Take();

}

void ColdPatient::TakeCONTAC600(const CONTAC600 &cap) const {

	cap.Take();

}