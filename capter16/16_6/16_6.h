#ifndef _16_6_H
#define _16_6_H
#include<iostream>
template <typename T, unsigned N> T* begin(T (&a)[N])
{
	std::cout << "here" << std::endl;
	return a;
	
}

template <typename T, unsigned N> T* end(T (&a)[N])
{
	return a + N;
}
#endif
