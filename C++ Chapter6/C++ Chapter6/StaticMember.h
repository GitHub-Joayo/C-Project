#ifndef __STATIC_MEMBER__
#define __STATIC_MEMBER__

#include <iostream>

using namespace std;

class StaticMember {

private:
	static int staMemCnt;

public:
	StaticMember() {

		staMemCnt++;
		cout << staMemCnt << " StaticMember Object " << endl;

	}

};

int StaticMember::staMemCnt = 0;


class StaticCnt {

private:
	static int cntObjCnt;

public:
	StaticCnt() {

		cntObjCnt++;
		cout << cntObjCnt << " StaticCnt Object " << endl;

	}
	StaticCnt(StaticCnt &copy) {

		cntObjCnt++;
		cout << cntObjCnt << " StaticCnt Object " << endl;

	}

};

int StaticCnt::cntObjCnt = 0;


#endif