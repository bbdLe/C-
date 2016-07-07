#include"TextQuery.h"
#include<tuple>
#include<algorithm>
#include<sstream>

using namespace std;

TextQuery::TextQuery(ifstream &ifs) : file(new vector<string>)
{
	string line;
	lineNo n = 0;

	while(getline(ifs, line))
	{
		string word;
		file->push_back(line);
		istringstream iss(line);
		while(iss >> word)
		{
			auto &sptr = wm[word];
			if(!sptr)
			{
				sptr.reset(new set<lineNo>);
			}
			sptr->insert(n);
		}
		++n;
	}
}

tuple<string, shared_ptr<vector<string>>, shared_ptr<set<TextQuery::lineNo>>>TextQuery::query(const std::string &word) const
{
	static shared_ptr<set<lineNo>> temp(new set<lineNo>);
	auto p = wm.find(word);

	if(p != wm.end())
	{
		return make_tuple(word, file, p->second);
	}
	else
	{
		return make_tuple(word, file, temp);
	}
}
