#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	vector<int> v(arr, arr + 3);

	for(auto i : v)
	{
		cout << i << endl;
	}

	return 0;
}
