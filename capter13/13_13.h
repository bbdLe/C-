#ifndef _13_13_H
#define _13_13_H
#include <iostream>
struct X
{
	X() {std::cout << "X()" << std::endl;}
	X(const X &) {std::cout << "X(const X &)" << std::endl;}
	X &operator=(const X &) {std::cout << "operator=" << std::endl;}
	~X() {std::cout << "~X()" << std::endl;}
};
#endif
