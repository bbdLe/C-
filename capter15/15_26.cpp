#include<string>
#include<iostream>
#include"Quote.h"
#include"Bulk_quote.h"
#include"Disc_quote.h"

using namespace std;

int main()
{
	Bulk_quote book1("a", 20, 20, 0.2);
	cout << endl;

	Bulk_quote book2;
	cout << endl;

	book2 = book1;
	cout << endl;

	Bulk_quote book3(std::move(book2));
	cout << endl;
}
