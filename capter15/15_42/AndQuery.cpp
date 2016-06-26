#include"AndQuery.h"
#include"QueryResult.h"
#include<set>
#include<algorithm>
#include<iterator>
#include<memory>

using namespace std;


QueryResult AndQuery::eval(const TextQuery &t) const
{
	auto left = lhs.eval(t), right = rhs.eval(t);
	auto ret_lines = make_shared<set<lineNo>>();
	
	set_intersection(left.begin(), left.end(), right.begin(), right.end(), inserter(*ret_lines, (*ret_lines).begin()));
	return QueryResult(rep(), left.getFile(), ret_lines);
}
