#ifndef _16_5_H
#define _16_5_H
#include<iostream>
template <typename T, unsigned N> void print(T (&a)[N])
{
	for(auto &item : a)
	{
		std::cout << item << std::endl;
	}
}
#endif
