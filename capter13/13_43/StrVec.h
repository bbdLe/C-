#ifndef _STRVEC_H
#define _STRVEC_H
#include<memory>
#include<string>
#include<stdexcept>
#include<utility>
class StrVec
{
	public:
		StrVec();
		StrVec(const StrVec &other);
		StrVec &operator=(const StrVec &other);
		~StrVec();
		void free();
		void push_back(const std::string &str);
		size_t size();
		size_t capacity();
		void resize(size_t, const std::string & = "");
		void reserve(size_t);
		std::string at(size_t);

	private:
		static std::allocator<std::string> alloc;
		void chk_n_alloc();
		void reallocate();
		void alloc_n_move(size_t);
		void check(size_t, const std::string &);

		std::pair<std::string *, std::string *> alloc_n_copy(std::string *b, std::string *e);
		std::string *elements;
		std::string *first_free;
		std::string *cap;
};


#endif
