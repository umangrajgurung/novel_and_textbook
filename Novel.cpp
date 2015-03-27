#include "stdafx.h"
#include "Novel.h"

Novel::Novel(){};

Novel::Novel(bool answerIsHardCover, string genreGiven, string ageGroupGiven, string nameGiven, Author authorGiven, float priceGiven) 
	:Book(nameGiven, authorGiven, priceGiven)
{
	isHardCover = answerIsHardCover;
	genre = genreGiven;
	ageGroup = ageGroupGiven;
}

void Novel::setDescription(string descriptionGiven){
	description = descriptionGiven;
}

void Novel::setPublication(string publicationGiven){
	publication = publicationGiven;
}

bool Novel::getIsHardCover(){
	return isHardCover;
}

string Novel::getGenre(){
	return genre;
}

string Novel::getAgeGroup(){
	return ageGroup;
}

string Novel::getDescription(){
	return description;
}

string Novel::getPublication(){
	return publication;
}

float Novel::inCollectionCost(){
	return price*quantity;
}

Novel::~Novel()
{
}
