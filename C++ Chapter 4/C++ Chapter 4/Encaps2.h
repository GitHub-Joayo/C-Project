#pragma once

class SinivelCap {

public :
	void Take() const;

};

class SneezeCap {

public :
	void Take() const;

};

class SnuffleCap {

public :
	void Take() const;

};

class CONTAC600 {

private :
	SinivelCap sin;
	SneezeCap sne;
	SnuffleCap snu;

public :
	void Take() const;

};

class ColdPatient {

public :
	void TakeCONTAC600(const CONTAC600 &cap) const;

};