#ifndef _TEXT_QUERY_H
#define _TEXT_QUERY_H
#include<vector>
#include<tuple>
#include<string>
#include<memory>
#include<fstream>
#include<set>
#include<map>
class QueryResult;
class TextQuery
{
	public:
		using lineNo = std::vector<std::string>::size_type;
		TextQuery(std::ifstream &);
		std::tuple<std::string, std::shared_ptr<std::vector<std::string>>, std::shared_ptr<std::set<lineNo>>> query(const std::string &) const;

	private:
		std::shared_ptr<std::vector<std::string>> file;
		std::map<std::string, std::shared_ptr<std::set<lineNo>>> wm;
};
#endif
