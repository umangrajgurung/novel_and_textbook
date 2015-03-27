#pragma once
#include "Book.h"

#ifndef NOVEL_H
#define NOVEL_H

class Novel :
	public Book
{
private:
	bool isHardCover;
	string genre;
	string description;
	string publication;
	string ageGroup;
public:
	Novel();
	Novel(bool, string, string, string, Author, float);
	void setDescription(string);
	void setPublication(string);
	bool getIsHardCover();
	string getGenre();
	string getDescription();
	string getPublication();
	string getAgeGroup();
	float inCollectionCost();
	~Novel();
};

#endif
