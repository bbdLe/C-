#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	vector<int> v;

	for(auto b = begin(arr), e = end(arr); b != e; b++)
		v.push_back(*b);

	for(auto i : v)
		cout << i << endl;

	return 0;
}
