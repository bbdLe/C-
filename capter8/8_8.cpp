#include <iostream>
#include <fstream>
#include <string>
#include "Sales_data.h"

using namespace std;

int main(int argc, char **argv)
{
	Sales_data total;
	ifstream ifs(*(++argv));
	ofstream ofs(*(++argv), ofstream::out | ofstream::app);

	if(read(ifs, total))
	{
		Sales_data currBook;
		while(read(ifs, currBook))
		{
			if(currBook.isbn() == total.isbn())
			{
				total.combine(currBook);
			}
			else
			{
				print(ofs, total) << endl;
				total = currBook;
			}
		}
		print(ofs, total) << endl;
	}

	return 0;
}
