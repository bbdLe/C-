#include <iostream>
#include <string>
#include "Sales_data.h"


using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
	Sales_data total(cin);
	if(!total.isbn().empty())
	{
		while(cin)
		{
			Sales_data currBook(cin);
			if(!currBook.isbn().empty())
			{
				if(currBook.isbn() == total.isbn())
				{
					total.combine(currBook);
				}
				else
				{
					print(cout, total) << endl;
					total = currBook;
				}
			}
		}
		print(cout, total) << endl;
	}
	return 0;
}
