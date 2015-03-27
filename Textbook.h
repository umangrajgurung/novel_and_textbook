#pragma once
#include "Book.h"

#ifndef TEXTBOOK_H
#define TEXTBOOK_H

class Textbook :
	public Book
{
private:
	string subject;
	string level;
	int edition;
	string publication;

public:
	Textbook();
	Textbook(string, string, string, Author, float);
	void setEdition(int);
	void setPublication(string);
	string getSubject();
	string getLevel();
	int getEdition();
	string getPublication();
	~Textbook();
};

#endif