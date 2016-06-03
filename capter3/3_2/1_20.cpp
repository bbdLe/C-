#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data
{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0;
};

int main()
{
	Sales_data book;
	double price;

	while(cin >> book.bookNo >> book.units_sold >> price)
	{
		book.revenue = book.units_sold * price;
		cout << book.bookNo << " " << book.units_sold << " " << book.revenue << endl;
	}

	return 0;
}
