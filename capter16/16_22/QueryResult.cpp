#include"QueryResult.h"
#include<iostream>

using namespace std;

QueryResult::QueryResult(string w, shared_ptr<vector<string>> fptr, shared_ptr<set<size_type>> lptr) : word(w), file(fptr), lineNo(lptr) {}

ostream &print(ostream &os, const QueryResult &result)
{
	auto ct = result.lineNo->size();
	os << result.word << " occurs " << ct << ((ct > 1)? "times" : "time") << endl;
	for(auto begin = result.lineNo->begin(), end = result.lineNo->end(); begin != end; ++begin)
		cout << *begin + 1 << " : " << (*result.file)[*begin] << endl;

	return os;
}
