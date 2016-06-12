#include <iostream>
#include <fstream>
#include <string>
#include "Sales_data.h"

using namespace std;

int main(int argc, char **argv)
{
	Sales_data total;
	ifstream fs(*(++argv));

	if(read(fs, total))
	{
		Sales_data currBook;
		while(read(fs, currBook))
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
		print(cout, total) << endl;
	}

	return 0;
}
