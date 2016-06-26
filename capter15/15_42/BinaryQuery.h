#ifndef _BINARY_QUERY_H
#define _BINARY_QUERY_H
#include"Query_base.h"
#include"Query.h"
#include<string>
class BinaryQuery : public Query_base
{
	protected:
		BinaryQuery(const Query &l, const Query &r, const std::string &op) : lhs(l), rhs(r), opSym(op) {}
		std::string rep() const
		{
			return "(" + lhs.rep() + " " + opSym + " " + rhs.rep() + ")";
		}

		Query lhs, rhs;
		std::string opSym;
};
#endif
