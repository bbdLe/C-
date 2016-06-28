#ifndef _16_19_H
#define _16_19_H
#include<iostream>
template <typename T> void print(const T &cont)
{
	typename T::const_iterator beg = cont.begin();
	typename T::const_iterator end = cont.end();
	while(beg != end)
	{
		std::cout << *beg << std::endl;
		++beg;
	}
}

#endif
