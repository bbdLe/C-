#include "Sales_data.h"
#include <iostream>

using namespace std;

int main()
{
	Sales_data book1("book1", 20, 20);
	Sales_data book2("book2", 20, 20);
	book1 += book2;
	
	cout << book1 + book2 << endl;

}
