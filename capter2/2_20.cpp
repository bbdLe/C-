#include <iostream>

int main()
{
	int i = 42;
	int *ptr = &i;
	*ptr = *ptr * *ptr;
	std::cout << *ptr << std::endl;

	return 0;
}
