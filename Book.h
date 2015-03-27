/*Name: Umang Raj Gurung
  Roll no: 0315
  File: Book.h
  Program: Object oriented programming of two classes, Author and Book
*/

#include "Author.h"

#ifndef BOOK_H
#define BOOK_H

class Book
{
private:
	string name;
	Author author;
	
protected:
	float price;
	int quantity;
	int pages;
	string datePublished;

public:
	Book();
	Book(string nameGiven, Author authorGiven, float priceGiven);
	Book(string nameGiven, Author authorGiven, float priceGiven, int quantityGiven);
	void setQuantity(int quantityGiven);
	void setPrice(float priceGiven);
	void setPages(int);
	void setDatePublished(string);
	string getName();
	Author getAuthor();
	float getPrice();
	int getQuantity();
	int getPages();
	string getDatePublished();
	void toString();
};
#endif
