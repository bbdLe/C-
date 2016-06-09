#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int ival1, ival2;

	while(cin >> ival1 >> ival2)
	{
		cout << ival1 / ival2 << endl;
	}

	return 0;
}
