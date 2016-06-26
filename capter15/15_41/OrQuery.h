#ifndef _OR_QUERY_H
#define _OR_QUERY_H
#include"BinaryQuery.h"
#include<memory>
class QueryResult;
class Or_Query : public BinaryQuery
{
	friend Query operator|(const Query &, const Query &);
	Or_Query(const Query &l, const Query &r) : BinaryQuery(l, r, "|") {}
	QueryResult eval(const TextQuery &) const;
};

inline Query operator|(const Query &l, const Query &r)
{
	return new Or_Query(l, r);
}
#endif
