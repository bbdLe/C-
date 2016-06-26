#include"QueryResult.h"
#include"StrVec.h"

#include<iostream>


using namespace std;

QueryResult::QueryResult(string w, shared_ptr<StrVec> fptr, shared_ptr<set<size_type>> lptr) : word(w), file(fptr), lineNo(lptr) {}

ostream &print(ostream &os, const QueryResult &result)
{
	auto ct = result.lineNo->size();
	os << result.word << " occurs " << ct << ((ct > 1)? "times" : "time") << endl;
	for(auto bg = result.begin(), eof = result.end(); bg != eof; ++bg)
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
