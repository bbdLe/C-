#include <iostream>

extern int i;

int main()
{
	// extern int i = 20;				wrong
	std::cout << i << std::endl;
	return 0;
}
