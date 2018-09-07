#include "Main.h"

#include "Template.h"
#include "PrimitiveTemplate.h"
#include "TemplateQue.h"
#include "TemplateClass.h"
#include "TemplateClass.cpp"
#include "MyTemplateClass.h"
#include "MyTemplateClass.cpp"
#include "Pos.h"
#include "SmartQue.h"

int main(void) {

	/*
	cout << Add(5, 7) << endl;
	cout << Add(3.7, 5.7) << endl;
	cout << Add<int>(5, 7) << endl;
	cout << Add<double>(1.2, 6.2) << endl;
	*/

	/*
	ShowData<char, int>(65);
	ShowData<char, int>(67);
	ShowData<char, double>(68.9);
	ShowData<short, double>(69.2);
	ShowData<short, double>(70.4);
	*/

	/*
	Point pos1(1, 2);
	Point pos2(3, 4);

	pos1.ShowPosition();
	pos2.ShowPosition();

	SwapData(pos1, pos2);

	pos1.ShowPosition();
	pos2.ShowPosition();
	*/

	/*
	double arr1[5] = { 1.2, 5, 0.1, 9, 2.7 };

	int arr2[5] = { 1, 1.2, 1, 1, 1 };

	cout << SumArray(arr1, 5) << endl;
	cout << SumArray(arr2, 5) << endl;
	*/

	/*
	cout << Max(11, 15) << endl;
	cout << Max('T', 'Q') << endl;
	cout << Max(3.5, 7.5) << endl;
	cout << Max("Simple", "Best") << endl;

	char str1[] = "Simple";
	char str2[] = "Best";

	cout << Max(str1, str2) << endl;
	*/

	/*
	Point<int> pos1(3, 4);
	Point<double> pos2(2.4, 3.6);
	Point<char> pos3('P', 'F');

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	*/

	/*
	BoundCheckArray<int> iarr(5);
	for (int i = 0; i < 5; i++)
		iarr[i] = (i + 1) * 11;
	for (int i = 0; i < 5; i++)
		cout << iarr[i] << endl;
		
	BoundCheckArray<Pos> parr(4);
	parr[0] = Pos(3, 4);
	parr[1] = Pos(5, 6);
	parr[2] = Pos(7, 8);
	parr[3] = Pos(9, 10);

	for (int i = 0; i < 4; i++)
		cout << parr[i] << endl;

	typedef Pos* POS_PTR;
	BoundCheckArray<POS_PTR> oarr(3);
	oarr[0] = new Pos(1, 2);
	oarr[1] = new Pos(2, 3);
	oarr[2] = new Pos(3, 4);

	for (int i = 0; i < 3; i++)
		cout << *(parr[i]);
		*/

	/*
	SmartPtr<Pos> sptr1(new Pos(1, 2));
	SmartPtr<Pos> sptr2(new Pos(2, 3));
	SmartPtr<Pos> sptr3(new Pos(3, 4));

	sptr1->ShowPos();
	sptr2->ShowPos();
	sptr3->ShowPos();

	sptr1->SetPos(10, 20);
	sptr2->SetPos(20, 30);
	sptr3->SetPos(30, 40);

	sptr1->ShowPos();
	sptr2->ShowPos();
	sptr3->ShowPos();
	*/

	system("pause");

	return 0;

}