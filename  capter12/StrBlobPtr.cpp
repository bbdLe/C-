#include<vector>
#include<string>
#include<memory>
#include<stdexcept>
#include"StrBlobPtr.h"
#include"StrBlob.h"

using namespace std;

shared_ptr<vector<string>> StrBlobPtr::check(size_type i, const string &msg) const
{
	auto p = wptr.lock();

	if(!p)
		throw runtime_error("unbound StrBlobPtr");
	else
	{
		if(i >= p->size())
			throw out_of_range(msg);
	}

	return p;
}

string &StrBlobPtr::deref() const
{
	auto p = check(curr, "dereference past end");
	return (*p)[curr];
}

StrBlobPtr &StrBlobPtr::incr()
{
	auto p = check(curr, "incr past end");
	++curr;
	return *this;
}

StrBlobPtr::StrBlobPtr(StrBlob &a, size_type pos) : curr(pos), wptr(a.data) {}
bool StrBlobPtr::operator!=(const StrBlobPtr &other) {return other.curr != curr;}
