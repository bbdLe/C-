#include <fstream>
#include <iterator>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	ifstream fs("test");
	istream_iterator<string> iter(fs), end;
	ostream_iterator<string> oiter(cout, "\n");
	vector<string> vec(iter, end);

	for(const auto &str : vec)
	{
		*oiter++ = str;
	}

	return 0;
}
