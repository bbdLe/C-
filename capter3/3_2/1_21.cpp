#include <iostream>
#include <string>
#include "Sales_data.h"

using std::string;
using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main()
{
	Sales_data book1, book2;
	double price;

	cin >> book1.bookNo >> book1.units_sold >> price;
	book1.revenue = price * book1.units_sold;

	cin >> book2.bookNo >> book2.units_sold >> price;
	book2.revenue = price * book2.units_sold;

	if(book2.bookNo == book1.bookNo)
	{
		int totalCnt = 0;
		double totalRevenue = 0;

		totalCnt = book1.units_sold + book2.units_sold;
		totalRevenue = book1.revenue + book2.revenue;
		cout << book1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if(totalCnt )
		{
			cout << totalRevenue / totalCnt << endl;
		}
		else
		{
			cout << endl;
		}
	}
	else
	{
		cerr << "Books must refer to the same ISBN" << endl;
	}
}
