#include <iterator>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	istream_iterator<int> initer(cin), inend;
	ostream_iterator<int> outiter(cout, "\n");
	vector<int> vec;

	copy(initer, inend, inserter(vec, vec.begin()));
	sort(vec.begin(), vec.end());
	unique_copy(vec.begin(), vec.end(), outiter);

	return 0;
}
