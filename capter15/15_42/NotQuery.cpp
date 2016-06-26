#include"NotQuery.h"
#include"QueryResult.h"
#include<set>
#include<memory>

using namespace std;

QueryResult NotQuery::eval(const TextQuery &t) const
{
	auto result = query.eval(t);
	auto ret_lines = make_shared<set<lineNo>>();
	auto total = result.getFile()->size();
	auto begin = result.begin(), end = result.end();
	for(auto n = 0; n < total; ++n)
	{
		if(*begin != n || begin == end)
			ret_lines->insert(n);
		else if(begin != end)
			++begin;
	}
	return QueryResult(rep(), result.getFile(), ret_lines);
}
