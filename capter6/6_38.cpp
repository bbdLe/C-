#include <iostream>

using std::cout;
using std::endl;

int odd[] = {1, 3, 5, 7, 9};
int even[] = {2, 4, 6, 8, 10};

decltype(odd) &f(int i)
{
	return odd;
}

int main()
{
	int (&rarr)[5] = f(10);

	for(const auto &i : rarr)
	{
		cout << i << endl;
	}
}
