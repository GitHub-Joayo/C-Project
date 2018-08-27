#pragma once

class Book {

private :
	char *title;
	char *isbn;
	int price;

public :
	Book(const char *title, const char *isbn, int price);
	void ShowBookInfo() const;

};

class EBook : public Book {

private :
	char *DRMKey;

public :
	EBook(const char *title, const char *isbn, int price, const char *DRMKey);
	void ShowEBookInfo() const;

};