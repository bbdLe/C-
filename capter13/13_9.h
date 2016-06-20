#ifndef _13_5_H
#define _13_5_H
#include <string>
#include <iostream>

class HasPtr
{
	public:
		HasPtr(const std::string &s = std::string()) : ptr(new std::string(s)), i(0) {}
		HasPtr(const HasPtr &other) : ptr(new std::string(*(other.ptr))), i(other.i) {}
		HasPtr & operator=(const HasPtr &other) {*ptr = *other.ptr; i = other.i; return *this;}
		~HasPtr() {delete ptr; std::cout << "Delete Finish" << std::endl;}
		std::string get() const {return *ptr;}
		void change(const std::string &s) {*ptr = s;}				//just for test

	private:
		std::string *ptr;
		int i;
};


#endif
