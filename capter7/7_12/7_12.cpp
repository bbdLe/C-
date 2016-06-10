#include <iostream>
#include <string>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	Sales_data book(cin);
	print(cout, book) << endl;
	return 0;
}
