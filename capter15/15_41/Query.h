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
		Query(const std::string str) : q(new WordQuery(str)), count(new int(1))
		{
		}

		Query(const Query &other) : q(other.q), count(other.count)
		{
			++*count;
		}

		Query &operator=(const Query &other)
		{
			++*other.count;
			if(--*count == 0)
			{
				delete q;
				delete count;
			}
			q = other.q;
			count = other.count;
			return *this;
		}

		QueryResult eval(const TextQuery &t) const
		{
			return q->eval(t);
		}

		std::string rep() const
		{
			return q->rep();
		}

		~Query()
		{
			--*count;
			if(count == 0)
				delete q;
		}

	private:
		Query(Query_base *query) : q(query), count(new int(1)) {}
		Query_base * q;
		int *count;
};

std::ostream &operator<<(std::ostream &os, const Query &query);
/*{
	return os << query.rep();
}*/
#endif
