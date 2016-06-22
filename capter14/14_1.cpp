#include<iostream>
#include<string>
#include "Sales_data.h"

using namespace std;

int main()
{
	Sales_data a("book1", 10, 20);
	Sales_data b("book2", 20, 40);

	a += b;
	cout << a + b << endl;

	return 0;
}
