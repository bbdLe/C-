#include<vector>
#include<string>
#include<initializer_list>
#include<memory>
#include<stdexcept>
#include"StrBlob.h"
#include"StrBlobPtr.h"
#include"ConstStrBlobPtr.h"

using namespace std;

StrBlob::StrBlob() : data(make_shared<vector<string>>()) {}
StrBlob::StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)) {}

void StrBlob::pop()
{
	check(0, "Pop on empty StrBlob");
	data->pop_back();
}

void StrBlob::check(size_type i, const string &msg) const
{
	if(i >= data->size())
	{
		throw out_of_range(msg);
	}
}

string StrBlob::back() const
{
	check(0, "back on empty StrBlob");
	return data->back();
}

string StrBlob::front() const
{
	check(0, "front on empty StrBlob");
	return data->front();
}

StrBlobPtr StrBlob::begin()
{
	return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::end()
{
	return StrBlobPtr(*this, data->size());
}

ConstStrBlobPtr StrBlob::cbegin()
{
	return ConstStrBlobPtr(*this);
}

ConstStrBlobPtr StrBlob::cend()
{
	return ConstStrBlobPtr(*this, data->size());
}

string StrBlob::get(size_type i)
{
	check(i, "get : out_of_range");
	return (*data)[i];
}
