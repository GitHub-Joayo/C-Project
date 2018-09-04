#pragma once

class Book {

private:
	char *title;
	char *isbn;
	int price;

public:
	Book(const Book &ref);
	Book(const char *title, const char *isbn, int price);
	void ShowBookInfo() const;
	Book& operator=(const Book &ref);

};

class EBook : public Book {

private:
	char *DRMKey;

public:
	EBook(const EBook &ref);
	EBook(const char *title, const char *isbn, int price, const char *DRMKey);
	void ShowEBookInfo() const;
	EBook& operator=(const EBook &ref);

};