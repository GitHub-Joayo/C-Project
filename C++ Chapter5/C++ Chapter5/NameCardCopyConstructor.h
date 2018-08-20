#pragma once

namespace COMP_POS {

	enum {
		CLERK,
		SENIOR,
		ASSIST,
		MANAGER
	};

	void ShowInfo(int pos);

}

class NameCard {

private:
	char *name;
	char *comName;
	char *phoneNum;
	int pos;

public:
	NameCard(const char *inName, const char *inComName, const char *inPhoneNum, const int &inPos);
	NameCard(const NameCard &nc);
	void ShowNameCardInfo() const;
	~NameCard();

};