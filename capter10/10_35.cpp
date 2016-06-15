#include <vector>
#include <iostream>

using namespace std;

void f(vector<int>::const_iterator begin, vector<int>::const_iterator end)
{
	if(begin == end)
	{
		return;
	}
	else
	{
		f(begin + 1, end);
		cout << *begin << endl;
	}
}

int main()
{
	vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	f(vec.cbegin(), vec.cend());

	return 0;
}
