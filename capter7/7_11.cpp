#include <iostream>
#include <string>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	Sales_data book1("baichi");
	Sales_data book2("ruozhi", 20, 10);
	Sales_data book3;
	Sales_data book4(cin);

	print(cout, book1) << endl;
	print(cout, book2) << endl;
	print(cout, book3) << endl;
	print(cout, book4) << endl;

	return 0;
}
