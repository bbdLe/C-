#include<vector>
#include<string>
#include<memory>
#include<stdexcept>
#include<iostream>
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

StrBlobPtr &StrBlobPtr::operator++()
{
	cout << "before ++" << endl;
	check(curr, "incr past end");
	++curr;
	return *this;
}

StrBlobPtr &StrBlobPtr::operator--()
{
	--curr;
	cout << "before --" << endl;
	check(curr, "decr before begin");
	return *this;
}

StrBlobPtr StrBlobPtr::operator++(int)
{
	cout << "after ++" << endl;
	StrBlobPtr temp = *this;
	++*this;
	return temp;
}

StrBlobPtr StrBlobPtr::operator--(int)
{
	cout << "after --" << endl;
	StrBlobPtr temp = *this;
	--*this;
	return temp;
}

StrBlobPtr &StrBlobPtr::operator+=(size_t n)
{
	curr += n;
	check(curr, "incr past end");
	return *this;
}

StrBlobPtr &StrBlobPtr::operator-=(size_t n)
{
	curr -= n;
	check(curr, "decr past end");
	return *this;
}

StrBlobPtr operator-(const StrBlobPtr &p, size_t n)
{
	StrBlobPtr temp = p;
	temp -= n;
	return temp;
}

StrBlobPtr operator+(const StrBlobPtr &p, size_t n)
{
	StrBlobPtr temp = p;
	temp += n;
	return temp;
}

std::string &StrBlobPtr::operator*() const
{
	auto p = check(curr, "dereference past end");

	return (*p)[curr];
}

std::string *StrBlobPtr::operator->() const
{
	return &this->operator*();
}

StrBlobPtr::StrBlobPtr(StrBlob &a, size_type pos) : curr(pos), wptr(a.data) {}
bool StrBlobPtr::operator!=(const StrBlobPtr &other) {return other.curr != curr;}
