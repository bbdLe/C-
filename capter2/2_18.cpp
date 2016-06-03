#include <iostream>

int main()
{
	int i = 10, j = 20;
	int *ptr = &i;

	std::cout << *ptr << std::endl;
	ptr = &j;
	std::cout << *ptr << std::endl;
	*ptr = 50;
	std::cout << *ptr << std::endl;
	return 0;
}
