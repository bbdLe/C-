#include <iostream>
#include <string>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

int main()
{
	Sales_data currVal, val;
	double price;

	if(cin >> currVal.bookNo >> currVal.units_sold >> price)
	{
		currVal.revenue = price * currVal.units_sold;

		while(cin >> val.bookNo >> val.units_sold >> price)
		{
			val.revenue = price * val.units_sold;

			if(val.bookNo == currVal.bookNo)
			{
				currVal.units_sold += val.units_sold;
				currVal.revenue += val.revenue;
			}
			else
			{
				cout << currVal.bookNo << " " << currVal.units_sold << " " << currVal.revenue << endl;
				currVal = val;
			}
		}
		cout << currVal.bookNo << " " << currVal.units_sold << " " << currVal.revenue << endl;
		return 0;
	}
	else
	{
		cerr << "No book data?" << endl;
		return -1;
	}
}
