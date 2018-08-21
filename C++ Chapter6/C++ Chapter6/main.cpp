#include <iostream>

#include "ConstObject.h"
#include "FriendClass.h"
// #include "StaticMember.h"
#include "Mutable.h"

using namespace std;

int main(void) {

	/*
	const ConstObj obj(7);

	// obj.AddNum(20);
	obj.ShowData();
	*/

	/*
	ConstObj obj1(2);
	const ConstObj obj2(7);

	obj1.ConstObjFunc();
	obj2.ConstObjFunc();

	YourFunc(obj1);
	YourFunc(obj2);
	*/

	/*
	Boy boy(170);
	Girl girl("010-1234-5678");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);
	*/

	/*
	Point pos1(1, 2);
	Point pos2(2, 4);
	PointOP op;

	ShowPointPos(op.PointAdd(pos1, pos2));
	ShowPointPos(op.PointSub(pos2, pos1));
	*/

	/*
	StaticMember sm1;
	StaticMember sm2;

	StaticCnt sc1;
	StaticCnt sc2 = sc1;

	StaticCnt();
	*/

	/**/
	Muta tm(1, 2);

	tm.ShowMuta();
	tm.CopyToNum2();
	tm.ShowMuta();

	system("pause");

	return 0;

}