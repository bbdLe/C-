#ifndef _QUERY_BASE_H
#define _QUERY_BASE_H
#include"TextQuery.h"
#include"StrVec.h"
class Query_base
{
	friend class Query;

	protected:
		using lineNo = TextQuery::lineNo;
		virtual ~Query_base() = default;

	private:
		virtual QueryResult eval(const TextQuery &) const = 0;
		virtual std::string rep() const = 0;
};
#endif
