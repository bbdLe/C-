#include"String.h"
#include<iostream>

using namespace std;

allocator<char> String::alloc;

String::String(const String &str)
{
	auto p = alloc_n_copy(str.element, str.last);
	element = p.first;
	last = p.second;
	cout << "copy construction" << endl;
}

String::String(String &&str) noexcept : element(str.element), last(str.last)
{
	str.element = nullptr;
	str.last = nullptr;
}

String::String(const char *str)
{
	char *end = const_cast<char *>(str);
	char *start = end;

	while(*end++);
	auto p = alloc_n_copy(start, end);
	element = p.first;
	last = p.second;
	cout << "copy construction" << endl;
}

String &String::operator=(const String &str)
{
	auto p = alloc_n_copy(str.element, str.last);
	free();
	element = p.first;
	last = p.second;
	cout << "operator=" << endl;
}

String &String::operator=(String &&str) noexcept
{
	if(&str != this)
	{
		free();
		element = str.element;
		last = str.last;
		str.element = str.last = nullptr;
	}
}

size_t String::size()
{
	return last - element;
}

char *String::c_str()
{
	return element;
}

void String::free()
{
	auto p = element;
	while(p != last)
		alloc.destroy(p++);
	alloc.deallocate(element, size());
}

pair<char *, char *> String::alloc_n_copy(char *b, char *e)
{
	auto p = alloc.allocate(e - b);
	auto last = uninitialized_copy(b, e, p);

	return {p, last};
}
