#ifndef _STRBLOBPTR_H
#define _STRBLOBPTR_H
#include <memory>
class StrBlob;
class StrBlobPtr
{
	friend StrBlobPtr operator-(const StrBlobPtr &, size_t);
	friend StrBlobPtr operator+(const StrBlobPtr &, size_t);
	public:
		using size_type = std::vector<std::string>::size_type; 
		StrBlobPtr() : curr(0) {}
		StrBlobPtr(StrBlob &a, size_type pos = 0);
		std::string &deref() const;
		StrBlobPtr &incr();
		bool operator!=(const StrBlobPtr &);
		StrBlobPtr &operator++();
		StrBlobPtr operator++(int);
		StrBlobPtr &operator--();
		StrBlobPtr operator--(int);
		StrBlobPtr &operator+=(size_t);
		StrBlobPtr &operator-=(size_t);
		std::string &operator*() const;
		std::string *operator->() const;
	private:
		size_type curr;
		std::weak_ptr<std::vector<std::string>> wptr;
		std::shared_ptr<std::vector<std::string>> check(size_type, const std::string &) const;
};
#endif
