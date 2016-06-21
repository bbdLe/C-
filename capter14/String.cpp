#include"String.h"
#include<iostream>
#include<cstring>

using namespace std;

allocator<char> String::alloc;

String::String(const String &str)
{
	auto p = alloc_n_copy(str.element, str.last);
	element = p.first;
	last = p.second;
	cout << "copy construction" << endl;
}

bool operator==(const String &a, const String &b)
{
	return !strcmp(a.element, b.element);			// remember strcmp return zero if the strings are same
}

bool operator!=(const String &a, const String &b)
{
	return !(a == b);
}

bool String::operator<(const String &str)
{
	auto p1 = element;
	auto p2 = str.element;

	while(p1 != last && p2 != str.last)
	{
		if(*p1 != *p2)
			return *p1 < *p2;
		else
		{
			++p1;
			++p2;
		}
	}

	if(p2 == last)
	{
		return false;
	}
	else
	{
		return true;
	}
}

char &String::operator[](size_t n)
{
	return element[n];
}

const char &String::operator[](size_t n) const
{
	return element[n];
}


String::String(String &&str) noexcept : element(str.element), last(str.last)
{
	str.element = nullptr;
	str.last = nullptr;
	cout << "Left Refer:construction" << endl;
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
		cout << "Left Refer=operator" << endl;
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

ostream &operator<<(ostream &os, const String &str)
{
	os << str.element;
}
