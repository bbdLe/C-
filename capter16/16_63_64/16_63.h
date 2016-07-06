#ifndef _16_63_H
#define _16_63_H
#include<string>
#include<vector>
#include<cstring>
#include<iostream>
template <typename V, typename T> std::size_t myCount(const V &v, const T &item)
{
	std::size_t count = 0;
	for(const T &i : v)
	{
		if(i == item)
			++count;
	}
	return count;
}

template <> std::size_t myCount(const std::vector<const char *> &v, const char * const &p)
{
	std::size_t count = 0;
	for(const char *vp : v)
	{
		if(strcmp(vp, p) == 0)
			++count;
	}
	std::cout << "here" << std::endl;
	return count;
}

std::size_t myCount(const std::vector<std::string> &vec, const char * const & str)
{
	std::size_t count = 0;
	for(const std::string &item : vec)
	{
		if(strcmp(str, item.c_str()) == 0)
			++count;
	}
	return count;
}

template <unsigned N> std::size_t myCount(const std::vector<std::string> &vec, const char (&str)[N])
{
	std::size_t count = 0;
	for(const std::string &item : vec)
	{
		if(str == item)
			++count;
	}
	return count;
}


#endif
