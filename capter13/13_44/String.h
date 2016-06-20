#ifndef _13_44_H
#define _13_44_H
#include <memory>
#include <utility>

class String
{
	public:
		String() : String("") {}
		String(const String &);
		String(const char *);
		String &operator=(const String &);
		size_t size();
		char *c_str();
		void free();

	private:
		std::pair<char *, char *> alloc_n_copy(char *, char *);
		char *element;
		char *last;
		static std::allocator<char> alloc;
};
#endif
