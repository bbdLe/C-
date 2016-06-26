#ifndef _QUERY_H
#define _QUERY_H
#include<string>
#include<memory>
#include"QueryResult.h"
#include"WordQuery.h"
#include"Query_base.h"
#include"TextQuery.h"
class Query
{
	friend Query operator&(const Query &, const Query &);
	friend Query operator|(const Query &, const Query &);
	friend Query operator~(const Query &);
	public:
		Query(const std::string str) : q(new WordQuery(str))
		{
		
		}
		QueryResult eval(const TextQuery &t) const
		{
			return q->eval(t);
		}

		std::string rep() const
		{
			return q->rep();
		}

	private:
		Query(std::shared_ptr<Query_base> query) : q(query) {}
		std::shared_ptr<Query_base> q;
};

std::ostream &operator<<(std::ostream &os, const Query &query);
/*{
	return os << query.rep();
}*/
#endif
