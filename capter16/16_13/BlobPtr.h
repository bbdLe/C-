#ifndef _BLOB_PTR_H
#define _BLOB_PTR_H
#include"Blob.h"
template <typename T> class BlobPtr;
template <typename T> bool operator==(const BlobPtr<T> &, const BlobPtr<T> &);
template <typename T> bool operator<(const BlobPtr<T> &, const BlobPtr<T> &);

template <typename T> class BlobPtr
{
	friend bool operator== <T>(const BlobPtr<T> &, const BlobPtr<T> &);
	friend bool operator< <T>(const BlobPtr<T> &, const BlobPtr<T> &);
	public:
		BlobPtr() : curr(0) {}
		BlobPtr(const Blob<T> &item, std::size_t sz) : wptr(item.data), curr(sz) {}
		BlobPtr &operator++()
		{
			auto p = check(curr, "++ past the end");
			++curr;
			return *this;
		}
		BlobPtr &operator--()
		{
			--curr;
			auto p = check(curr, "-- before the edge");
			return *this;
		}
		
		BlobPtr operator++(int)
		{
			BlobPtr temp = *this;
			++*this;
			return temp;
		}

		BlobPtr operator--(int)
		{
			BlobPtr temp = *this;
			--*this;
			return temp;
		}

		T &operator*()
		{
			auto p = check(curr, "* past the end");
			return (*p)[curr];
		}

	private:
		std::shared_ptr<std::vector<T>> check(std::size_t i, const std::string &msg) const
		{
			auto p = wptr.lock();
			if(p)
			{
				if(p->size() <= i)
					throw std::out_of_range(msg);
				else
					return p;
			}
			else
			{
				throw std::runtime_error("Item disappered");
			}
		}
		std::weak_ptr<std::vector<T>> wptr;
		std::size_t curr = 0;
};

template <typename T> bool operator==(const BlobPtr<T> &a, const BlobPtr<T> &b)
{
	if(a.wptr.lock() == b.wptr.lock())
	{
		return a.curr == b.curr;
	}
	else
	{
		throw std::runtime_error("pointer to different object");
	}
}

template <typename T> bool operator<(const BlobPtr<T> &a, const BlobPtr<T> &b)
{
	if(a.wptr.lock() == b.wptr.lock())
	{
		return a.curr < b.curr;
	}
	else
	{
		throw std::runtime_error("pointer to different object");
	}
}
#endif
