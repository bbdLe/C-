#include <iostream>
#include <string>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	double price;
	Sales_data total, currBook;

	if(cin>> total.bookNo >> total.units_sale >> price)
	{
		total.revenue = total.units_sale * price;
		while(cin >> currBook.bookNo >> currBook.units_sale >> price)
		{
			currBook.revenue = currBook.units_sale * price;
			if(currBook.bookNo == total.bookNo)
			{
				total.revenue += currBook.revenue;
				total.units_sale += currBook.units_sale;
			}
			else
			{
				cout << total.bookNo << " " << total.units_sale << " " <<total.revenue << endl;
				total.bookNo = currBook.bookNo;
				total.units_sale = currBook.units_sale;
				total.revenue = currBook.revenue;
			}
		}
		cout << total.bookNo << " " << total.units_sale << " " <<total.revenue << endl;
	}

	return 0;
}
