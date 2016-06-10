#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using FP = int (*)(int, int);


int mul(int x, int y)
{
	return x * y;
}

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int div1(int x, int y)
{
	return x / y;
}

int main()
{
	vector<FP> v = {add, sub, div1, mul};

	return 0;
}
