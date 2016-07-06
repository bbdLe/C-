#ifndef _16_56_H
#define _16_56_H
#include<iostream>
#include<sstream>
#include<string>

template <typename T> std::string debug_rep(const T &item)
{
	std::ostringstream oss;
	oss << item;
	return oss.str();
}

template <typename T> std::ostream& print(std::ostream &os, const T &item)
{
	os << item;
	return os;
}

template <typename T, typename... Args> std::ostream& print(std::ostream &os, const T &item, const Args&... args)
{
	os << item;
	return print(os, args...);
}

template <typename... Args> std::ostream &errorMsg(std::ostream &os, const Args&... args)
{
	print(os, debug_rep(args)...);
	return os;
}
#endif
