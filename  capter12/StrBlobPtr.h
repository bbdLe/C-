#ifndef _STRBLOBPTR_H
#define _STRBLOBPTR_H
#include <memory>
class StrBlob;
class StrBlobPtr
{
	public:
		using size_type = std::vector<std::string>::size_type; 
		StrBlobPtr() : curr(0) {}
		StrBlobPtr(StrBlob &a, size_type pos = 0);
		std::string &deref() const;
		StrBlobPtr &incr();
		bool operator!=(const StrBlobPtr &);
	private:
		size_type curr;
		std::weak_ptr<std::vector<std::string>> wptr;
		std::shared_ptr<std::vector<std::string>> check(size_type, const std::string &) const;
};
#endif
