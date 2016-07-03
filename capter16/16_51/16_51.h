#ifndef _16_51_H
#define _16_51_H
#include<iostream>
template <typename T, typename... Args> void foo(const T &t, const Args& ...rest)
{
	std::cout << sizeof...(Args) << std::endl;
	std::cout << sizeof...(rest) << std::endl;
	std::cout << std::endl;
}

#endif
