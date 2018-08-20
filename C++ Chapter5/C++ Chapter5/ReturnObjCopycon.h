#pragma once

class ReturnObj {

private :
	int num;

public :
	ReturnObj(int n) : num(n) {}
	ReturnObj(const ReturnObj &copy);
	ReturnObj &AddNum(int n);
	void ShowData();

};

ReturnObj ReturnObjFunc(ReturnObj ob);