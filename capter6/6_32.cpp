#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

void readVector(vector<int>::iterator begin, vector<int>::iterator end)
{
	if(begin != end)
	{
		readVector(begin + 1, end);
		cout << *begin << endl;
	}
}

int main()
{
	vector<int> v = {1, 2, 3, 4, 5};

	readVector(v.begin(), v.end());
	return 0;
}
