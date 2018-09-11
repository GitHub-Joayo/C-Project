#include "Main.h"
#include "DynamicCasting.h"
#include "Polymorphic.h"

int main(void) {

	/*
	Truck *t1 = new Truck(100, 20);
	
	t1->ShowTruckState();

	Car *c1 = dynamic_cast<Car*>(t1);

	c1->ShowCarState();
	*/

	/*
	Car *t1 = new Truck(200, 30);
	Truck *c1 = static_cast<Truck*>(t1);

	c1->ShowTruckState();

	Car *c2 = new Car(100);
	Truck *t2 = static_cast<Truck*>(c2);

	t2->ShowTruckState();
	*/

	/*
	SoSimple *simPtr = new SoComplex();
	SoComplex *comPtr = dynamic_cast<SoComplex*>(simPtr);
	comPtr->ShowSimpleInfo();
	*/

	/**/
	SoSimple simObj;
	SoSimple &ref = simObj;

	try {
		SoComplex& comRef = dynamic_cast<SoComplex&>(ref);
		comRef.ShowSimpleInfo();
	}
	catch (bad_cast expt) {
		cout << expt.what() << endl;
	}

	system("pause");

	return 0;

}