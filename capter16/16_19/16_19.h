#ifndef _16_19_H
#define _16_19_H
#include<iostream>
template <typename T> void print(T &cont)
{
	typename T::size_type size = 0;
	typename T::size_type total = cont.size();
	while(size != total)
	{
		std::cout << cont[size] << std::endl;
		++size;
	}
}

#endif
