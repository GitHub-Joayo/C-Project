#pragma once

#include "Main.h"

template <class Smt>
class SmartPtr {

private :
	Smt * ptr;

public :
	SmartPtr(Smt *ptr) : ptr(ptr) {}
	Smt& operator*() const { return *ptr; }
	Smt* operator->() const { return ptr; }
	~SmartPtr() { delete ptr; }

};