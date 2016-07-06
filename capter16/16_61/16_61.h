#ifndef _16_61_H
#define _16_61_H
#include"Shared_ptr.h"
template <typename T, typename... Args> MySharedPtr<T> myMakeShared(Args&&... args)
{
	return MySharedPtr<T>(new T(std::forward<Args>(args)...));
}

#endif
