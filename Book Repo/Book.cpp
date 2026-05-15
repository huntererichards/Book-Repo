#include "book.h"

Book::Book()
{
	this->BookId = "";
	this->Title = "";
	this->Author = "";
	for (int i = 0; i < priceArraySize; i++) this->prices[i] = 0; this->bookType = BookType::UNDECIDED;

}
Book::Book(string BookId, string Title, string Author, double prices[], BookType bookType)
{
	this->BookId = BookId;
	this->Title = Title;
	this->Author = Author;
	for (int i = 0; i < priceArraySize; i++) this->prices[i] = prices[i]; this->bookType = bookType;

}

Book::~Book() {}

string Book::getID() { return this->BookId; }
string Book::getTitle() { return this->Title; }
string Book::getAuthor() { return this->Author; }
double* Book::getPrices() { return this->prices; }
BookType Book::getBookType() { return this->bookType; }

void Book::setID(string ID) { this->BookId = ID; }
void Book::setTitle(string Title) { this->Title = Title; }
void Book::setAuthor(string Author) { this->Author = Author; }
void Book::setPrices(double prices[])
{
	for (int i = 0; i < priceArraySize; i++) this->prices[i] = prices[i];
}
void Book::setBookType(BookType bt) { this->bookType = bt; }

void Book::printHeader()
{
	cout << "Output format: ID|Title|Author|Prices|Type\n";

}

void Book::print()
{
	cout << this->getID() << '\t';
	cout << this->getTitle() << '\t';
	cout << this->getAuthor() << '\t';
	cout << this->getPrices()[0] << ',';
	cout << this->getPrices()[1] << ',';
	cout << this->getPrices()[2] << '\t';
	cout << BookTypeStrings[this->getBookType()] << '\n';
}