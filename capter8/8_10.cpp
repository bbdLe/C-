#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	vector<string> strv;
	ifstream ifs(*(++argv));
	string str;
	istringstream strs;

	while(ifs >> str)
	{
		strv.push_back(str);
	}

	for(auto begin = strv.begin(), end = strv.end(); begin != end; ++begin)
	{
		strs.str(*begin);
		string temp(strs.str());
		cout << temp << endl;
	}

	return 0;
}
