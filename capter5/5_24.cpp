#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main()
{
	int ival1, ival2;

	while(cin >> ival1 >> ival2)
	{
	
		if(ival2 == 0)
			throw runtime_error("Divisor is 0");
		cout << ival1 / ival2 << endl;
	}

	return 0;
}
