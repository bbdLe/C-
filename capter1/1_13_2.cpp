#include<iostream>

int main()
{
	int sum = 0;

	for(int i = 10; i >= 0; i--)
	{
		sum += i;
	}

	std::cout << sum << std::endl;
	return 0;
}
