#ifndef _STRBLOB_H
#define _STRBLOB_H
#include <string>
#include <vector>
#include <memory>
#include <initializer_list>
class StrBlobPtr;
class ConstStrBlobPtr;
class StrBlob
{
	friend class StrBlobPtr;
	friend class ConstStrBlobPtr;
	public:
		typedef std::vector<std::string>::size_type size_type;
		StrBlob();
		StrBlob(const StrBlob &other) : data(std::make_shared<std::vector<std::string>>(*other.data)) {}
		StrBlob &operator=(const StrBlob &other)
		{
			auto np = std::make_shared<std::vector<std::string>>(*other.data);
			data = np;
		}
		StrBlob(std::initializer_list<std::string> il);
		void push(const std::string &str) {data->push_back(str);}
		void push(std::string &&str) {data->push_back(std::move(str));}
		void pop();
		bool empty() const {return data->empty();}
		std::string back() const;
		std::string front() const;
		StrBlobPtr begin();
		StrBlobPtr end();
		ConstStrBlobPtr cbegin();
		ConstStrBlobPtr cend();

	private:
		std::shared_ptr<std::vector<std::string>> data;
		void check(size_type i, const std::string &msg) const;
};
#endif
