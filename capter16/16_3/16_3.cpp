#include"16_3.h"
#include"Sales_data.h"
#include<iostream>

using namespace std;

int main()
{
	Sales_data book1("book1", 20, 20);
	Sales_data book2("boo2", 30, 30);
	cout << compare(book1, book2) << endl;
}
