#pragma warning(disable:4996)

#include <iostream>

#include "ClassInit.h"
#include "ShallowCopyError.h"
#include "NameCardCopyConstructor.h"
#include "PassObjCopycon.h"
#include "ReturnObjCopycon.h"
#include "TempObj.h"
#include "ObjDead.h"

using namespace std;

int main(void) {

	/*
	SoSimple sim1(15, 20);
	cout << "Initialize Soon " << endl;

	SoSimple sim2(sim1);
	cout << "Just Initialized" << endl;

	sim2.ShowSimpleDate();
	*/

	/*
	Person man1("Lee", 29);
	Person man2 = man1;

	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	*/

	/*
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard copy1 = manClerk;

	NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard copy2 = manSenior;

	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();
	*/

	/*
	CopyConstructor obj(7);
	cout << "Before Call Function" << endl;

	SimpleFuncObj(obj);
	cout << "After Call Function" << endl;
	*/

	/*
	ReturnObj obj(7);
	ReturnObjFunc(obj).AddNum(30).ShowData();
	obj.ShowData();
	*/

	/*
	Temporary(100);
	cout << "  after make ~ " << endl << endl;

	Temporary(200).ShowTempInfo();
	cout << "  after make ~ " << endl << endl;

	const Temporary &ref = Temporary(300);
	cout << " end of main " << endl << endl;
	*/

	/**/
	ObjDead obj(7);
	ObjDeadFunc(obj);

	cout << endl;

	ObjDead tempRef = ObjDeadFunc(obj);
	cout << " Return Obj " << &tempRef << endl;

	system("pause");

	return 0;

}