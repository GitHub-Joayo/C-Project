#pragma once

#include "Main.h"

class Pos {

private :
	int xpos, ypos;

public :
	Pos(int x = 0, int y = 0);
	void SetPos(int x, int y);
	void ShowPos() const;
	friend ostream& operator<<(ostream& os, const Pos& pos);

};


ostream& operator<<(ostream& os, const Pos& pos);