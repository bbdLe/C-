#ifndef _STRVEC_H
#define _STRVEC_H
#include<memory>
#include<string>
#include<stdexcept>
#include<initializer_list>
#include<utility>
#include<iostream>
template <typename T> class StrVec;
template <typename T> bool operator==(const StrVec<T> &, const StrVec<T> &);
template <typename T> bool operator!=(const StrVec<T> &, const StrVec<T> &);

template <typename T> class StrVec
{
	friend bool operator== <T>(const StrVec<T> &, const StrVec<T> &);
	friend bool operator!= <T>(const StrVec<T> &, const StrVec<T> &);
	public:
		StrVec();
		StrVec(const StrVec<T> &other);
		StrVec &operator=(const StrVec<T> &other);
		StrVec(StrVec<T> &&) noexcept;
		StrVec &operator=(StrVec<T> &&) noexcept;
		~StrVec();
		void free();
		void push_back(const T &str);
		size_t size();
		size_t capacity();
		void resize(size_t, const T & = "");
		void reserve(size_t);
		T at(size_t);
		StrVec &operator=(std::initializer_list<T>);
		bool operator<(const StrVec<T> &);
		T &operator[](std::size_t);
		const T &operator[](std::size_t) const;

	private:
		static std::allocator<T> alloc;
		void chk_n_alloc();
		void reallocate();
		void alloc_n_move(size_t);
		void check(size_t, const std::string &);

		std::pair<T *, T *> alloc_n_copy(const T *b, const T *e);
		T *elements;
		T *first_free;
		T *cap;
};

template <typename T> StrVec<T>::StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) {}

template <typename T> StrVec<T>::StrVec(const StrVec<T> &other)
{
	auto p = alloc_n_copy(other.elements, other.first_free);
	elements = p.first;
	first_free = cap = p.second;
}

template <typename T> StrVec<T>::StrVec(StrVec<T> &&other) noexcept : elements(other.elements), first_free(other.first_free), cap(other.cap)
{
	other.elements = nullptr;
	other.first_free = nullptr;
	other.cap = nullptr;
	std::cout << "right refer" << std::endl;
}

template <typename T>StrVec<T> &StrVec<T>::operator=(StrVec<T> &&other) noexcept
{
	if(&other != this)
	{
		free();
		elements = other.elements;
		first_free = other.first_free;
		cap = other.cap;
		other.elements = other.first_free = other.cap = nullptr;
		std::cout << "right refer" << std::endl;
	}
}

template <typename T> bool StrVec<T>::operator<(const StrVec<T> &other)
{
	auto p1 = elements;
	auto p2 = other.elements;

	while(p1 != first_free && p2 != other.first_free)
	{
		if(*p1 != *p2)
			return *p1 < *p2;
		else
		{
			++p1;
			++p2;
		}
	}

	if(p2 == other.first_free)
	{
		return false;
	}
	else
	{
		return true;
	}
}

template <typename T> StrVec<T> &StrVec<T>::operator=(const StrVec<T> &other)
{
	auto p = alloc_n_copy(other.elements, other.first_free);
	free();
	elements = p.first;
	cap = first_free = p.second;
}

template <typename T> StrVec<T> &StrVec<T>::operator=(std::initializer_list<T> li)
{
	auto p = alloc_n_copy(li.begin(), li.end());
	free();
	elements = p.first;
	cap = first_free = p.second;
}

template <typename T> T &StrVec<T>::operator[](size_t n)
{
	return elements[n];
}

template <typename T>const T &StrVec<T>::operator[](size_t n) const
{
	return elements[n];
}

template <typename T> StrVec<T>::~StrVec()
{
	free();
}

template <typename T> void StrVec<T>::free()
{
	if(elements)
	{
		auto p = first_free;
		while(p != elements)
			alloc.destroy(--p);
			alloc.deallocate(elements, cap - elements);
			elements = first_free = cap = nullptr;
	}
}

template <typename T> void StrVec<T>::push_back(const T &str)
{
	chk_n_alloc();
	alloc.construct(first_free++, str);
}

template <typename T> size_t StrVec<T>::size()
{
	return first_free - elements;
}

template <typename T>size_t StrVec<T>::capacity()
{
	return cap - elements;
}

template <typename T> void StrVec<T>::resize(size_t n, const T &str)
{
	if(n <= size())
		return;

	while(size() < n)
	{
		push_back(str);
	}
}

template <typename T> T StrVec<T>::at(size_t n)
{
	check(n, "at : out of range");
	return *(elements + n);
}

template <typename T> void StrVec<T>::chk_n_alloc()
{
	if(size() == capacity())
	reallocate();
}

template <typename T> void StrVec<T>::reallocate()
{
	auto sz = ((size() > 0) ? size() * 2 : 1);

	alloc_n_move(sz);
}

template <typename T> void StrVec<T>::reserve(size_t sz)
{
	if(sz >= size())
	{
		alloc_n_move(sz);
	}
}

template <typename T> void StrVec<T>::alloc_n_move(size_t sz)
{
	auto newp = alloc.allocate(sz);
	auto dest = newp;
	auto target = elements;
	while(target != first_free)
		alloc.construct(dest++, std::move(*target++));
	free();
	elements = newp;
	first_free = dest;
	cap = elements + sz;
}

template <typename T> void StrVec<T>::check(size_t t, const std::string &msg)
{
	if(t >= first_free - elements)
		throw std::out_of_range(msg);
}

template <typename T> std::pair<T *, T *> StrVec<T>::alloc_n_copy(const T *b, const T *e)
{
	auto p = alloc.allocate(e - b);
	auto ret = std::uninitialized_copy(b, e, p);
			
	return {p, ret};
}

template <typename T> bool operator==(const StrVec<T> &a, const StrVec<T> &b)
{
	size_t asz = a.first_free - a.elements;
	size_t bsz = b.first_free - b.elements;

	if(asz != bsz)
		return false;
	else
	{
		const auto *p1 = a.elements;
		const auto *p2 = b.elements;
		while(p1 != a.first_free && p2 != b.first_free)
		{
			if(*p1 != *p2)
				return false;
			++p1;
			++p2;
		}
	}
}

template <typename T> bool operator!=(const StrVec<T> &a, const StrVec<T> &b)
{
	return !(a == b);
}

template <typename T> std::allocator<T> StrVec<T>::alloc;


#endif
