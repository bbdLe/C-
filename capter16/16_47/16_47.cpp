#include<iostream>

template <typename T1, typename T2, typename T3> void flip(T1 f, T2 &&s1, T3 &&s2)		//这里定义为&&是为了获取&或者&&参数
{
	f(std::forward<T2>(s1), std::forward<T3>(s2));	//这里为了将左值还原成原参数
}

void test1(int &t1, int &t2)
{
}

void test2(int &&t1, int &&t2)
{
}

void test3(int i, int j)
{
}

int main()
{
	int i = 10;
	int j = 20;
	flip(test1, i, j);
	flip(test2, 10, 20);
	flip(test3, 20, 20);
}
