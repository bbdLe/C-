#include<iostream>
#include<climits>


template <typename T> auto sum(T a, T b) -> decltype(a + b)
{
	return a + b;
}

int main()
{
	auto num = sum(INT_MAX, INT_MAX);
}
