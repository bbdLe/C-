#ifndef _TEXT_QUERY_H
#define _TEXT_QUERY_H
#include<vector>
#include<string>
#include<memory>
#include<fstream>
#include<set>
#include<map>
class QueryResult;
class StrBlob;
class TextQuery
{
	public:
		using lineNo = std::vector<std::string>::size_type;
		TextQuery(std::ifstream &);
		QueryResult query(const std::string &) const;

	private:
		std::shared_ptr<StrBlob> file;
		std::map<std::string, std::shared_ptr<std::set<lineNo>>> wm;
};
#endif
