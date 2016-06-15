#include <iostream>
#include <string>
#include <set>
#include "Sales_data.h"

using namespace std;

bool compareIsbn(const Sales_data &book1, const Sales_data &book2)
{
	return book1.isbn() < book2.isbn();
}


int main()
{
	multiset<Sales_data, bool (*)(const Sales_data &, const Sales_data &)> test(compareIsbn);
}
