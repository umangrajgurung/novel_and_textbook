#include "stdafx.h"
#include "Textbook.h"


Textbook::Textbook(){}

Textbook::Textbook(string subjectGiven, string levelGiven, string nameGiven, Author authorGiven, float priceGiven)
	:Book(nameGiven, authorGiven, priceGiven){
	subject = subjectGiven;
	level = levelGiven;
}

void Textbook::setEdition(int editionGiven){
	edition = editionGiven;
}

void Textbook::setPublication(string publicationGiven){
	publication = publicationGiven;
}

string Textbook::getSubject(){
	return subject;
}

string Textbook::getLevel(){
	return level;
}

int Textbook::getEdition(){
	return edition;
}

string Textbook::getPublication(){
	return publication;
}

Textbook::~Textbook()
{
}
