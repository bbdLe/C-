#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::count;

int main()
{
	vector<int> vec = {1, 2, 3, 3, 2, 1};

	cout << count(vec.begin(), vec.end(), 1) << endl;
	return 0;
}
