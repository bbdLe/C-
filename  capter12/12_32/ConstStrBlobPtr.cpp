#include<vector>
#include<stdexcept>
#include<string>
#include<memory>
#include"ConstStrBlobPtr.h"
#include"StrBlob.h"

using namespace std;

ConstStrBlobPtr::ConstStrBlobPtr(const StrBlob &a, size_type pos) : curr(pos), wptr(a.data) {}

const string &ConstStrBlobPtr::deref()
{
	auto p = check(curr, "deref on the wptr");
	return (*p)[curr];
}

ConstStrBlobPtr &ConstStrBlobPtr::incr()
{
	auto p = check(curr, "incr on the wptr");
	++curr;
	return *this;
}

shared_ptr<vector<string>> ConstStrBlobPtr::check(size_type i, const string &msg)
{
	auto p = wptr.lock();

	if(!p)
	{
		throw runtime_error("check on unbound wptr");
	}
	else
	{
		if(i >= p->size())
		{
			throw out_of_range(msg);
		}
	}

	return p;
}

bool ConstStrBlobPtr::operator!=(const ConstStrBlobPtr &other)
{
	return other.curr != this->curr;
}
