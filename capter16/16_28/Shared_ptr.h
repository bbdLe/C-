#ifndef _SHARED_PTR_H
#define _SHARED_PTR_H
#include<functional>
#include<iostream>
#include"DebugDelete.h"
template <typename T> class MySharedPtr
{
	public:
		MySharedPtr() = default;
		MySharedPtr(T *p, std::function<void(T*)> fun = DebugDelete()) : ptr(p), del(fun), cnt(new size_t(1)) {}
		MySharedPtr(const MySharedPtr &other) : ptr(other.ptr), del(other.del), cnt(other.cnt)
		{
			++*cnt;
		}

		MySharedPtr &operator=(const MySharedPtr &other)
		{
			++*other.cnt;
			check_to_delete();
			ptr = other.ptr;
			del = other.del;
			cnt = other.cnt;
		}

		MySharedPtr &reset(T *p, std::function<void (T*)> fun = DebugDelete())
		{
			check_to_delete();
			ptr = p;
			del = fun;
			cnt = new size_t(1);
		}

		~MySharedPtr()
		{
			check_to_delete();
		}

	private:
		void check_to_delete()
		{
			--*cnt;
			if(*cnt == 0)
			{
				del(ptr);
				delete cnt;
			}
			//std::cout << "Delete Finished" << std::endl;
		}

		T *ptr = nullptr;
		std::function<void(T*)> del = DebugDelete();
		size_t *cnt;
};
#endif
