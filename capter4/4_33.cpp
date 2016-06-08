#include <iostream>

using std::cout;
using std::endl;

int main()
{
	bool cond = false;
	int x = 10, y = 0;

	cout << (cond? ++x, ++y : --x, --y) << endl;
	return 0;

}
