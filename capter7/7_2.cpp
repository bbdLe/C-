#include <iostream>
#include <string>
#include "Sales_data.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	Sales_data book;

	book.bookNo = "haha";
	cout << book.isbn() << endl;
	return 0;
}
