#include<string>
#include<iostream>
#include"Quote.h"

using namespace std;

double print_total(ostream &os, const Quote &book, size_t n)
{
	auto total = book.net_price(n);
	os << "Book ISBN : " << book.Isbn() << ",sold : " << n << ",total: " << total << endl;
	return total;
}
