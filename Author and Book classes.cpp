/*Name: Umang Raj Gurung
  Roll no: 0315
  File: Author and Book classes.cpp
  Program: Object oriented programming of two classes, Author and Book
*/

#include "stdafx.h"
#include <iostream>
#include "Book.h"
#include "Novel.h"
#include "Textbook.h"
#define MAX 5

using namespace std;

int main(){
	string authorName, authorEmail, bookName;
	char authorGender;
	float bookPrice;
	int bookQuantity, novelNo = 0, textbookNo = 0;
	bool isNovel, novelIsHardCover;
	string novelGenre, novelAgeGroup;
	string textbookSubject, textbookLevel;
	Novel novelObjs[MAX];
	Textbook textbookObjs[MAX];

	cout << "\t\t\t\tBook store\n" << endl;
	for (int i = 0; i < MAX; i++){
		cout << "\nBook no. " << (i + 1) << endl;
		cout << "Enter name of book: ";
		getline(cin, bookName);
		cout << "Is it a novel(true/1 & false/0)?" << endl;
		cin >> isNovel;
		cin.get();
		cout << "Enter name of author: ";
		getline(cin, authorName);
		cout << "Enter author email: ";
		getline(cin, authorEmail);
		cout << "Enter author gender: ";
		cin >> authorGender;
		cout << "Enter book price: ";
		cin >> bookPrice;
		cout << "Enter quantity of books: ";
		cin >> bookQuantity;
		Author newAuthor(authorName, authorEmail, authorGender);
		cin.get();

		if (isNovel){
			cout << "Is the novel a hardcover(true/1 & false/0)?" << endl;
			cin >> novelIsHardCover;
			cin.get();
			cout << "Novel genre: ";
			getline(cin, novelGenre);
			cout << "Novel ageGroup: ";
			getline(cin, novelAgeGroup);
			Novel newNovel(novelIsHardCover, novelGenre, novelAgeGroup, bookName, newAuthor, bookPrice);
			novelObjs[novelNo] = newNovel;
			novelNo++;
		}else{
			cout << "Enter the subject: ";
			getline(cin, textbookSubject);
			cout << "Enter the level: ";
			getline(cin, textbookLevel);
			Textbook newTextbook(textbookSubject, textbookLevel, bookName, newAuthor, bookPrice);
			textbookObjs[textbookNo] = newTextbook;
			textbookNo++;
		}
	}
	cout << "\n\nBooks Available:-\n" << endl;
	cout << "Novels:-" << endl;
	for (int i = 0; i < novelNo; i++){
		cout << (i + 1) << ". ";
		novelObjs[i].toString();
		cout << "\t" << novelObjs[i].getPrice() << endl;
	}
	cout << "Textbooks:-" << endl;
	for (int i = 0; i < textbookNo; i++){
		cout << (i + 1) << ". ";
		textbookObjs[i].toString();
		cout << "\t" << textbookObjs[i].getPrice() << endl;
	}
}
