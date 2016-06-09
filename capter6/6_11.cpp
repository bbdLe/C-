#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void reset(double &d)
{
	d = 0;
}

int main()
{
	double d = 10;
	reset(d);
	cout << d << endl;
}
