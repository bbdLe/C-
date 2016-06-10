#include <iostream>
#include <string>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	Sales_data total, currBook;
	double price;

	if(cin >> total.bookNo >> total.units_sold >> price)
	{
		total.revenue = total.units_sold * price;
		while(cin >> currBook.bookNo >> currBook.units_sold >> price)
		{
			currBook.revenue = currBook.units_sold * price;
			if(currBook.isbn() == total.isbn())
			{
				total.combine(currBook);
			}
			else
			{
				cout << total.isbn() << " " << total.units_sold << " " << total.revenue << endl;;
				total = currBook;
			}
		}
		cout << total.isbn() << " " << total.units_sold << " " << total.revenue << endl;
	}

	return 0;
}
