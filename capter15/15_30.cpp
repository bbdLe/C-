#include"Quote.h"
#include"Disc_quote.h"
#include"Bulk_quote.h"
#include"Basket.h"
#include<iostream>

using namespace std;

int main()
{
	Basket basket;
	Bulk_quote b1("Book1", 20, 30, 0.2);
	Bulk_quote b2("Book2", 20, 30, 0.3);
	Bulk_quote b3("Book1", 0, 30, 0.4);
	basket.addItem(b1);
	basket.addItem(b2);
	basket.addItem(b3);
	basket.total_receipt(cout);
	
	return 0;
}
