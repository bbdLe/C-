#include <iostream>

int main()
{
	int i = 0, &r = i;
	auto a = r;
	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	auto &f = ci;

	//a = 42;				// int
	//std::cout << a << std::endl;
	//b = 42;				// int
	//std::cout << b << std::endl;
	//c = 42;				// int
	//std::cout << c << std::endl;
	//d = 42;				// int *
	//std::cout << d << std::endl;
	//e = 42;				// const int *
	//std::cout << e << std::endl;
	//f = 42;				// const int &
	//std::cout << f << std::endl;

	return 0;
}
