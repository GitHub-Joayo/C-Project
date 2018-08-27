#pragma once

class SoBase {

private :
	int baseNum;

public :
	SoBase();
	SoBase(int n);
	void ShowBaseData() const;
	~SoBase();

};

class SoDerived : public SoBase {

private :
	int derivNum;

public :
	SoDerived();
	SoDerived(int n);
	SoDerived(int n1, int n2);
	void ShowDerivData() const;
	~SoDerived();

};