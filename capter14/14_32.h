#ifndef _14_23_H
#define _14_23_H
#include"StrBlobPtr.h"
class Test
{
	public:
		Test(StrBlobPtr &sp) : ptr(&sp) {}
		StrBlobPtr &operator*()
		{
			return *ptr;
		}
		StrBlobPtr &operator->()
		{
			return this->operator*();
		}

	private:
		StrBlobPtr *ptr;

};
#endif
