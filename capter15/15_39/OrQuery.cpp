#include"OrQuery.h"
#include"QueryResult.h"

using namespace std;

QueryResult Or_Query::eval(const TextQuery &t) const
{
	auto left = lhs.eval(t), right = rhs.eval(t);

	auto ret_lines = make_shared<set<lineNo>>(left.begin(), left.end());
	ret_lines->insert(right.begin(), right.end());
	return QueryResult(rep(), left.getFile(), ret_lines);
}
