#include <functional>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>


using namespace std;
using namespace std::placeholders;

bool check_size(const string &str, size_t sz)
{
	return str.size() >= sz;
}

int main()
{
	string str = "fuckh";
	vector<string> vec = {"good", "morning", "!"};

	auto p = find_if(vec.cbegin(), vec.cend(), bind(check_size, _1, str.size()));
	cout << *p << endl;
	return 0;
}
