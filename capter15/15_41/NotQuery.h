#ifndef _NOT_QUERY_H
#define _NOT_QUERY_H
#include"Query_base.h"
#include"Query.h"
class NotQuery: public Query_base
{
	friend Query operator~(const Query &operand);
	NotQuery(const Query &q) : query(q) {}
	std::string rep() const
	{
		return "~(" + query.rep() + ")";
	}
	QueryResult eval(const TextQuery &) const;
	Query query;
};

inline Query operator~(const Query &operand)
{
	return new NotQuery(operand);
}
#endif
