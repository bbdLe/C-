#include <iostream>

using std::cout;
using std::endl;

struct test
{
	char mem[10];
};

double test_function()
{
	return 1.0;
}

int main()
{
	int x, y;
	y = 10;
	test t, *p = &t;
	int a, b;
	b = 6;
	

	cout << "x + y : " << sizeof x + y << endl;
	cout << "p->mem[1] : " << sizeof p->mem[1] << endl;
	cout << "a < b : " << (sizeof a < b) << endl;
	cout << "test_function : " << sizeof test_function() << endl;

	return 0;
}
