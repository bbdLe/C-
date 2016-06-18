#include<vector>
#include<set>
#include<map>
#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;
using lineNo = vector<string>::size_type;

int main()
{
	ifstream ifs("test");
	map<string, set<lineNo>> wm;
	vector<string> file;
	string line;
	lineNo n = 0;

	while(getline(ifs, line))
	{
		string word;
		istringstream iss(line);
		file.push_back(line);
		while(iss >> word)
		{
			auto &s = wm[word];
			s.insert(n);
		}
		++n;
	}

	while(1)
	{
		string word;
		cout << "Please input the word which you want to find : " << endl;
		if(cin >> word)
		{
			auto p = wm.find(word);
			set<lineNo> wordSet;
			if(p != wm.end())
			{
				cout << p->second.size() << endl;
				wordSet = p->second;
			}
			else
			{
				wordSet = set<lineNo>();
			}
			cout << word << " occurs " << wordSet.size() << ((wordSet.size() > 1)? " times" : " time") << endl;
			for(auto begin = wordSet.begin(), end = wordSet.end(); begin != end; ++begin)
				cout << *begin + 1 << " : " << file[*begin] << endl;
		}
		else
			break;
	}

	return 0;
}
