#pragma warning(disable:4996)

#include "Book.h"

#include <iostream>
#include <cstring>

using namespace std;

Book::Book(const char *title, const char *isbn, int price) : price(price) {

	this->title = new char[strlen(title) + 1];
	strcpy(this->title, title);

	this->isbn = new char[strlen(isbn) + 1];
	strcpy(this->isbn, isbn);

}

void Book::ShowBookInfo() const {

	cout << "Title : " << title << endl;
	cout << "ISBN : " << isbn << endl;
	cout << "Price : " << price << endl;

}

EBook::EBook(const char *title, const char *isbn, int price, const char *DRMKey) : Book(title, isbn, price) {

	this->DRMKey = new char[strlen(DRMKey) + 1];
	strcpy(this->DRMKey, DRMKey);

}

void EBook::ShowEBookInfo() const {

	ShowBookInfo();
	cout << "DRM Key : " << DRMKey << endl;

}