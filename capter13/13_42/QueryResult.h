#ifndef _QUERY_RESULT_H
#define _QUERY_RESULT_H
#include<set>
#include<vector>
#include<string>
#include<memory>
#include<iostream>
class StrVec;
class QueryResult
{
	public:
		friend std::ostream &print(std::ostream &, const QueryResult &);
		using size_type = std::vector<std::string>::size_type;
		QueryResult(std::string, std::shared_ptr<StrVec>, std::shared_ptr<std::set<size_type>>);
	private:
		std::string word;
		std::shared_ptr<StrVec> file;
		std::shared_ptr<std::set<size_type>> lineNo;
};

std::ostream &print(std::ostream &, const QueryResult &);
#endif
