#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	for(auto begin = vec.crbegin(), end = vec.crend(); begin != end; ++begin)
	{
		cout << *begin << endl;
	}

	return 0;
}
