#include"QueryResult.h"
#include"StrVec.h"
#include<iostream>
#include<functional>
#include<algorithm>


using namespace std;
using namespace std::placeholders;

QueryResult::QueryResult(string w, shared_ptr<StrVec> fptr, shared_ptr<set<size_type>> lptr) : word(w), file(fptr), lineNo(lptr) {}

ostream &print(ostream &os, const QueryResult &result, QueryResult::size_type from, QueryResult::size_type to)
{
	const auto  begin = find_if(result.begin(), result.end(), bind(greater_equal<int>(), _1, from - 1));
	const auto end = find_if(result.begin(), result.end(), bind(greater<int>(), _1, to - 1));
	size_t ct = 0;
	for(auto b = begin, e = end; b != e; ++b)
	{
		++ct;
	}
	
	os << result.word << " occurs " << ct << ((ct > 1)? "times" : "time") << endl;
	for(auto bg = begin, eof = end; bg != eof; ++bg)
		cout << *bg + 1 << " : " << result.getFile()->at(*bg) << endl;

	return os;
}

set<QueryResult::size_type>::iterator QueryResult::begin()
{
	return lineNo->begin();
}

set<QueryResult::size_type>::iterator QueryResult::end()
{
	return lineNo->end();
}

set<QueryResult::size_type>::iterator QueryResult::begin() const
{
	return lineNo->cbegin();
}

set<QueryResult::size_type>::iterator QueryResult::end() const
{
	return lineNo->cend();
}

std::shared_ptr<StrVec> QueryResult::getFile() const
{
	return file;
}
