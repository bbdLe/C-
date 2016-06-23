#include<vector>
#include<string>
#include<functional>
#include<algorithm>
#include<iostream>

using namespace std;
using namespace std::placeholders;

int main()
{
	vector<int> ivec = {12, 5232, 15, 5452, 5761, 98, 8902};
	cout << count_if(ivec.begin(), ivec.end(), bind(greater<int>(), 1024, _1)) << endl;

	vector<string> svec = {"pooh", "shabi", "haha"};
	auto p = find_if(svec.begin(), svec.end(), bind(not_equal_to<string>(), "pooh", _1));
	cout << *p << endl;

	transform(ivec.begin(), ivec.end(), ivec.begin(), bind(multiplies<int>(), 2, _1));
	for_each(ivec.begin(), ivec.end(), [](const int &n) {cout << n << endl;});

	return 0;
}
