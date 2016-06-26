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
		using size_type = std::vector<std::string>::size_type;
		friend std::ostream &print(std::ostream &, const QueryResult &, QueryResult::size_type, QueryResult::size_type);
		QueryResult(std::string, std::shared_ptr<StrVec>, std::shared_ptr<std::set<size_type>>);
		std::set<size_type>::iterator begin() const;
		std::set<size_type>::iterator end() const;
		std::set<size_type>::iterator begin();
		std::set<size_type>::iterator end();
		std::shared_ptr<StrVec> getFile() const;
	private:
		std::string word;
		std::shared_ptr<StrVec> file;
		std::shared_ptr<std::set<size_type>> lineNo;
};

std::ostream &print(std::ostream &, const QueryResult &, QueryResult::size_type from, QueryResult::size_type to);
#endif
