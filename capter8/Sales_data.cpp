#include <iostream>
#include <string>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::istream;
using std::ostream;

istream &read(istream &is, Sales_data &book)
{
	double price;

	if(is >> book.bookNo >> book.units_sold >> price)
		book.revenue = book.units_sold * price;
	return is;
}

ostream &print(ostream &os, const Sales_data &book)
{
	os << book.isbn() << " " << book.units_sold << " " << book.revenue;
	return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;

	sum.combine(rhs);
	return sum;
}

Sales_data::Sales_data(const string &s, unsigned n, double p) : bookNo(s), revenue(n * p), units_sold(n) 
{
	cout << "(const std::string &s, unsigned n, double p)" << endl;
}

Sales_data::Sales_data(const string &s) : Sales_data(s, 0, 0)
{
	cout << "(const string &s)" << endl;
}

Sales_data::Sales_data(istream &is) : Sales_data("", 0, 0)
{
	cout << "(iostream &is)" << endl;
	read(is, *this);
}

Sales_data::Sales_data() : Sales_data("", 0, 0)
{
	cout << "()" << endl;
}
