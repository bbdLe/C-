#include <vector>
#include <iterator>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	vector<string> vec1 = {"hello", "hello", "good", "bye"};
	vector<string> vec2;

	unique_copy(vec1.begin(), vec1.end(), inserter(vec2, vec2.begin()));

	for(const auto &str : vec2)
	{
		cout << str << endl;
	}

	return 0;
}
