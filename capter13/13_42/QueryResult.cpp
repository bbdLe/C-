#include"QueryResult.h"
#include"StrVec.h"
#include<iostream>

using namespace std;

QueryResult::QueryResult(string w, shared_ptr<StrVec> fptr, shared_ptr<set<size_type>> lptr) : word(w), file(fptr), lineNo(lptr) {}

ostream &print(ostream &os, const QueryResult &result)
{
	auto ct = result.lineNo->size();
	os << result.word << " occurs " << ct << ((ct > 1)? "times" : "time") << endl;
	for(auto begin = result.lineNo->begin(), end = result.lineNo->end(); begin != end; ++begin)
		cout << *begin + 1 << " : " << result.file->at(*begin) << endl;

	return os;
}
