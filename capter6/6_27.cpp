#include <iostream>
#include <initializer_list>

using std::cout;
using std::endl;
using std::initializer_list;

int sum(initializer_list<int> li)
{
	int sum;
	for(const auto &i : li)
	{
		sum += i;
	}

	return sum;
}

int main()
{
	cout << sum({1, 2, 3, 4}) << endl;

	return 0;
}
