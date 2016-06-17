#ifndef _CONST_STR_BLOB_PTR_H
#define _CONST_STR_BLOB_PTR_H
#include<vector>
#include<string>
#include<memory>
class StrBlob;
class ConstStrBlobPtr
{
	public:
		using size_type = std::vector<std::string>::size_type;
		ConstStrBlobPtr() : curr(0){};
		ConstStrBlobPtr(const StrBlob &a, size_type pos = 0);
		const std::string &deref();
		ConstStrBlobPtr &incr();
		bool operator!=(const ConstStrBlobPtr &other);
	private:
		size_type curr;
		std::weak_ptr<std::vector<std::string>> wptr;
		std::shared_ptr<std::vector<std::string>> check(size_type, const std::string &);
};
#endif
