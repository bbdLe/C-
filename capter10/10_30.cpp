#include <iterator>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	vector<int> vec;
	istream_iterator<int> initer(cin), enditer;


	copy(initer, enditer, inserter(vec, vec.begin()));
	sort(vec.begin(), vec.end());
	for(auto i : vec)
	{
		cout << i << endl;
	}
}
