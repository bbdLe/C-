#include <iostream>

using std::cout;
using std::endl;

void f()
{
	cout << "f()" << endl;
}

void f(int i)
{
	cout << "f(int i)" << endl;
}

void f(int i, int j)
{
	cout << "f(int i, int j)" << endl;
}

void f(double di, double dj)
{
	cout << "f(double di, double dj)" << endl;
}

int main()
{
	//f(2.56, 42); ambiguous
	f(42);
	f(42, 0);
	f(2.56, 3.14);

	return 0;
}
