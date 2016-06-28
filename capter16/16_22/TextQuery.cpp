#include"TextQuery.h"
#include"QueryResult.h"
#include"16_21.h"
#include<algorithm>
#include<sstream>

using namespace std;

TextQuery::TextQuery(ifstream &ifs) : file(new vector<string>, DebugDelete())
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

QueryResult TextQuery::query(const std::string &word) const
{
	static shared_ptr<set<lineNo>> temp(new set<lineNo>);
	auto p = wm.find(word);

	if(p != wm.end())
	{
		return QueryResult(word, file, p->second);
	}
	else
	{
		return QueryResult(word, file, temp);
	}
}
