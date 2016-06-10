#include <iostream>
#include <string>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	Sales_data book1;
	Sales_data book2;
	Sales_data total;
	
	read(cin, book1);
	read(cin, book2);
	total = add(book1, book2);
	print(cout, total);

	return 0;
}
