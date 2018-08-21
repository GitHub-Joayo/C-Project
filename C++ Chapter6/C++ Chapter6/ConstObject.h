#pragma once
class ConstObj {

private :
	int num;

public :
	ConstObj(int n) : num(n) {}
	ConstObj& AddNum(int n);
	void ConstObjFunc();
	void ConstObjFunc() const;
	void ShowData() const;

};

void YourFunc(const ConstObj &obj);