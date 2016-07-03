#ifndef _16_53_H
#define _16_53_H
#include<iostream>
template <typename T> std::ostream &print(std::ostream &os, const T &t)
{
	return os << t;
}

template <typename T, typename... Args> void print(std::ostream &os, const T &t, const Args &...rest)
{
	os << t;
	print(os, rest...);
}

#endif
