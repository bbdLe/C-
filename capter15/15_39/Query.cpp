#include"Query.h"
#include"WordQuery.h"

//Query::Query(const std::string &str) : q(new WordQuery(s)) {}
std::ostream &operator<<(std::ostream &os, const Query &query)
{
	return os << query.rep();
}
