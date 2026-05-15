#pragma once
#include <iostream>
#include <iomanip>
#include "bookType.h"
using std::string;
using std::cout;

class Book
{
public:
	const static int priceArraySize = 3;
private:
	string BookId;
	string Title;
	string Author;
	double prices[priceArraySize];
	BookType bookType;
public:
	Book();
	Book(string BookId, string Title, string Author, double prices[], BookType bookType); //Full Constructor 
	~Book(); //destructor

	// getters aka accessors 
	string getID();
	string getTitle();
	string getAuthor();
	double* getPrices();
	BookType getBookType();

	//setters aka mutators 
	void setID(string ID);
	void setTitle(string Title);
	void setAuthor(string Author);
	void setPrices(double prices[]);
	void setBookType(BookType bt);

	static void printHeader();

	void print(); //display 'this' student data
};