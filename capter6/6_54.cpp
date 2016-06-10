#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int test(int x, int y)
{
	return x + y;
}

using FP = decltype(test) *;
typedef decltype(test) *FP2;

int main()
{
	vector<FP2> v = {test};

	cout << v[0](1, 2) << endl;
	return 0;
}
