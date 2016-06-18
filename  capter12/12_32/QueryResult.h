#ifndef _QUERY_RESULT_H
#define _QUERY_RESULT_H
#include<set>
#include<vector>
#include<string>
#include<memory>
#include<iostream>
class StrBlob;
class QueryResult
{
	public:
		friend std::ostream &print(std::ostream &, const QueryResult &);
		using size_type = std::vector<std::string>::size_type;
		QueryResult(std::string, std::shared_ptr<StrBlob>, std::shared_ptr<std::set<size_type>>);
		std::set<size_type>::iterator begin() const;
		std::set<size_type>::iterator end() const;
		std::set<size_type>::iterator begin();
		std::set<size_type>::iterator end();
		std::shared_ptr<StrBlob> getFile() const;
	private:
		std::string word;
		std::shared_ptr<StrBlob> file;
		std::shared_ptr<std::set<size_type>> lineNo;
};

std::ostream &print(std::ostream &, const QueryResult &);
#endif
