#include "Repo.h"

int main()
{
	const string bookData[] =
	{
	"NX_1,Forensics for Housewives!,Genevieve Valentin,23.4,45.99,35,NONFICTION",
	"Fx0_F2,Useless Cyberpunk Gamer Chat,SuperKiil Cyberdog,0,19.99,2000,FICTION",
	"UXU1c,A Primer of Educational Wisdom,Sage the Divine Goddess,.99,123.45,987.65,UNDECIDED",
	"F3-F, Mein Kampf est NICHT Fiction!,Adolf Hitler's Corpse,0,1,2.49,FICTION",
	"N_W1,An Agonizing Death from C++,David Wayne Bishop,999.99,3.14,123,NONFICTION"

	};

	const int numBooks = 5;
	Repo repo;

	for (int i = 0; i < numBooks; i++) repo.parse(bookData[i]);
	cout << "Displaying all books: " << std::endl;
	repo.printAll();
	cout << std::endl;


	for (int i = 0; i < 3; i++)
	{
		cout << "displaying by the book type: " << BookTypeStrings[i] << std::endl;
		repo.printByBookType((BookType)i);
	}

	cout << "Displaying books with invalid IDs" << std::endl;
	repo.printInvalidIDs();
	cout << std::endl;

	cout << "Displaying average prices: " << std::endl;
	repo.printAveragePrices();

	cout << "Removing book with ID N_W1:" << std::endl;
	repo.removeBookByID("N_W1");
	cout << std::endl;

	cout << "Removing book with ID N_W1:" << std::endl;
	repo.removeBookByID("N_W1");
	cout << std::endl;

	system("pause");
	return 0;
}