#pragma warning(disable:4996)

#pragma once
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

typedef struct __Point{
	int xpos;
	int ypos;
}Point;

namespace Mem {

	char *MakeStrAdr(int len);

}

namespace NewDel {

	char *MakeStrAdr(int len);

}

class Simple {
public:
	Simple() {
		cout << "I'm simple constructor ! " << endl;
	}
};

namespace NewDelQ {

	Point& PntAdder(const Point &p1, const Point &p2);

}