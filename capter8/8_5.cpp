#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void f(const string &fn)
{
	ifstream fs(fn);
	vector<string> sv;
	string str;

	while(fs >> str)
	{
		sv.push_back(str);
	}

	for(auto begin = sv.begin(), end = sv.end(); begin != end; ++begin)
	{
		cout << *begin << endl;
	}
}

int main(int argc, char **argv)
{
	f(*(++argv));

	return 0;
}
