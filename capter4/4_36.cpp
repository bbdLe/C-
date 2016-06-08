#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int i = 10;
	double dval = 3.4;

	i *= static_cast<int>(dval);
	cout << i << endl;

	return 0;
}
