#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	vector<int> ivec;

	for(int i = 0; i < 10; i++)
		ivec.push_back(i);

	for(auto i : ivec)
		cout << i << endl;

	auto cnt = ivec.size();
	for(decltype(cnt) ix = 0; ix != ivec.size(); cnt--, ix++)
		ivec[ix] = cnt;

	cout << endl;

	for(auto i : ivec)
		cout << i << endl;

	return 0;
}
