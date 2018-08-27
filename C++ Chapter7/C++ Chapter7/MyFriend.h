#pragma once

class MyFriendInfo {

private :
	char *name;
	int age;

public :
	MyFriendInfo(const char *name, const int age);
	void ShowMyFriendInfo() const;

};

class MyFriendDetailInfo : public MyFriendInfo {

private :
	char *addr;
	char *phone;

public :
	MyFriendDetailInfo(const char *name, const int age, const char *adr, const char *phone);
	void ShowFriendDetailInfo() const;

};