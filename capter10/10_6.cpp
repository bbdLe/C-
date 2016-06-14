#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	vector<int> vec(10, 10);

	for(const auto &ri : vec)
		cout << ri << endl;

	fill_n(vec.begin(), vec.size(), 0);

	for(const auto &ri : vec)
		cout << ri << endl;

	return 0;
}
