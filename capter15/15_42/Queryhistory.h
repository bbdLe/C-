#ifndef _QUERY_HISTORY_H
#define _QUERY_HISTORY_H
#include"Query.h"
#include<memory>
#include<vector>

class Queryhistory
{
	public:
		Query& operator[](std::size_t n)
		{
			return vec[n];
		}

		void push(const Query &other)
		{
			vec.push_back(other);
		}

	private:
		std::vector<Query> vec;
};

#endif
