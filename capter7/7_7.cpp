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

	if(read(cin, total))
	{
		while(read(cin, currBook))
		{
			if(total.isbn() == currBook.isbn())
			{
				total.combine(currBook);
			}
			else
			{
				print(cout, total) << endl;
				total = currBook;
			}
		}
		print(cout, total) << endl;
	}

	return 0;
}
