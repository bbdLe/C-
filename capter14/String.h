#ifndef _13_44_H
#define _13_44_H
#include <memory>
#include <utility>
#include <iostream>
class String
{
	friend std::ostream &operator<<(std::ostream &, const String &);
	friend bool operator==(const String &, const String &);
	friend bool operator!=(const String &, const String &);
	public:
		String() : String("") {}
		String(const String &);
		String(String &&) noexcept;
		String(const char *);
		String &operator=(const String &);
		String &operator=(String &&) noexcept;
		bool operator<(const String &);
		char &operator[](std::size_t);
		const char &operator[](std::size_t) const;
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
