#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void f(const string &fd)
{
	string str;
	vector<string> v;

	ifstream input(fd);
	while(getline(input, str))
	{
		v.push_back(str);
	}

	for(auto begin = v.begin(), end = v.end(); begin != end; begin++)
	{
		cout << *begin << endl;
	}
}

int main(int argc, char **argv)
{
	
	f(*(++argv));
	return 0;
}
