#include <string>
#include <iostream>

using namespace std;

struct Book
{
	string isbn;
	unsigned units_sold;
	double revenue;
};

int main()
{
	Book test{"haha", 0, 0};
}
