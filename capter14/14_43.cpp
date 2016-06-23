#include<vector>
#include<string>
#include<functional>
#include<algorithm>
#include<iostream>

using namespace std;
using namespace std::placeholders;

int main()
{
	vector<int> vec = {23, 4554, 68, 323, 4356, 411};
	int target = 10;
	auto f1 = divides<int>();
	auto f2 = [&](int i) {return 0 == f1(i, target);};
	auto cond = all_of(vec.begin(), vec.end(), f2);
	if(cond)
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	return 0;
}
