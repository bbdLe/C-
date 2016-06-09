#include <iostream>

using std::cout;
using std::endl;

int f()
{
	static int i = 0;
	return i++;
}

int main()
{
	for(int i = 0; i != 10; i++)
	{
		cout << f() << endl;
	}
	return 0;
}
