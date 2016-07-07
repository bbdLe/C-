#ifndef _16_48_H
#define _16_48_H
#include <string>
#include <iostream>
#include <sstream>
template <typename T> std::string debug_rep(const T &a)
{
	std::cout << "debug_rep(const T &)" << std::endl;
	std::ostringstream ret;
	ret << a;
	return ret.str();
}

template <> std::string debug_rep(const std::string &str)
{
	std::cout << "template <> std::string debug_rep(const std::string &str)" << std::endl;
	std::ostringstream ret;
	ret << str;
	return ret.str();
}

// Can't use by char *, because the system has a special operator<< on char *cl
template <typename T> std::string debug_rep(T *a)
{
	std::cout << "debug_rep(T *a)" << std::endl;
	std::ostringstream ret;
	ret << "Pointer : " << a;
	if(a)
	{
		ret << " " << debug_rep(*a);
	}
	else
	{
		ret << " null pointer";
	}
	return ret.str();
}

template <> std::string debug_rep(char *p)
{
	std::cout << "debug_rep(char *p)" << std::endl;
	return debug_rep(std::string(p));
}

template <> std::string debug_rep(const char *p)
{
	std::cout << "debug_rep(const char *p)" << std::endl;
	return debug_rep(std::string(p));
}

#endif
