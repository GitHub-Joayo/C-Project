#include "OverloadingOperation.h"
#include "PointMultipleOperation.h"

using namespace std;

int main(void) {

	/*
	Point pos1(3, 4);
	Point pos2(10, 20);
	
	Point pos3 = pos1 + pos2;
	
	Point pos4 = pos2 - pos1;

	pos1 += pos2;
	pos2 -= pos1;

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	pos4.ShowPosition();

	Point pos5(5, 5);
	Point pos6(5, 5);
	Point pos7(7, 7);

	if (pos5 == pos6)
		cout << "DONE!" << endl;
	else
		cout << "Something Wrong" << endl;

	if (pos7 != pos6)
		cout << "DONE!" << endl;
	else
		cout << "Something Wrong" << endl;
		*/

	/*
	++pos1;
	pos1.ShowPosition();

	--pos2;
	pos2.ShowPosition();
	*/

	/*
	Point pos1(3, 4);
	Point pos2(3, 4);

	--(--pos2);
	(-pos2).ShowPosition();

	pos1++;
	(~pos1).ShowPosition();
	*/

	/*
	Multiple mul(1, 2);
	Multiple cpy;

	cpy = mul * 3;
	cpy.ShowPosition();

	cpy = 2 * mul * 3;
	cpy.ShowPosition();
	*/

	/*
	Multiple pos1(1, 3);

	cout << pos1;
	*/

	/**/
	Multiple pos;

	cin >> pos;
	cout << pos;

	system("pause");

	return 0;

}