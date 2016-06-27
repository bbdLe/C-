#ifndef _BLOB_H
#define _BLOB_H
#include<initializer_list>
#include<vector>
#include<string>
#include<memory>
#include<stdexcept>
template <typename T> class BlobPtr;
template <typename T> class Blob
{
	public:
		friend class BlobPtr<T>;
		typedef T value_type;
		typedef typename std::vector<T>::size_type size_type;

		Blob();
		Blob(std::initializer_list<T> li);
		size_type size() const;
		bool empty() const;
		void push_back(const T &);
		void push_back(T &&);

	private:
		std::shared_ptr<std::vector<T>> data;
		void check(size_type, const std::string &) const;
};

template <typename T> Blob<T>::Blob() : data(std::make_shared<std::vector<T>>()) {}

template <typename T> Blob<T>::Blob(std::initializer_list<T> li) : data(std::make_shared<std::vector<T>>(li)) {}

template <typename T> typename Blob<T>::size_type Blob<T>::size() const
{
	return data->size();
}

template <typename T> bool Blob<T>::empty() const
{
	return data->empty();
}

template <typename T> void Blob<T>::push_back(const T &item)
{
	data->push_back(item);
}

template <typename T> void Blob<T>::push_back(T &&item)
{
	data->push_back(std::move(item));
}

template <typename T> void Blob<T>::check(size_type i, const std::string &msg) const
{
	if(i >= data->size())
		throw std::out_of_range(msg);
}
#endif
