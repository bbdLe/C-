#ifndef _UNIQUE_PTR_H
#define _UNIQUE_PTR_H
#include"DebugDelete.h"
template <typename T, typename C = DebugDelete> class MyUniquePtr
{
	public:
		MyUniquePtr(T *p, C d = C()) : ptr(p), del(d) {}
		MyUniquePtr(const MyUniquePtr<T> &) = delete;
		MyUniquePtr(MyUniquePtr<T> &&) = delete;
		MyUniquePtr<T> &operator=(const MyUniquePtr<T> &) = delete;
		MyUniquePtr<T> &operator=(MyUniquePtr<T> &&) = delete;
		~MyUniquePtr()
		{
			del(ptr);
		}

	
	private: 
		T *ptr;
		C del;
};
#endif
