#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	list<int> lst;

	copy(vec.crbegin() + 2, vec.crbegin() + 7, back_inserter(lst));

	for(auto i : lst)
	{
		cout << i << endl;
	}

	return 0;
}
