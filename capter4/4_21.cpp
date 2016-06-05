#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::endl;
using std::vector;

int main()
{
	vector<int> v;
	int i;

	while(cin >> i)
		v.push_back(i);

	for(auto &r : v)
		r = ((r % 2 == 0) ? r : r * 2);

	for(auto &r : v)
		cout << r << endl;

	return 0;
}
