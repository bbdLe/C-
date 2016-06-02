#include<iostream>

int main()
{
	int v1 = 0, v2 = 0;
	int temp;

	std::cout << "Enter two number :" << std::endl;
	std::cin >> v1 >> v2;
	if(v1 > v2)
	{
		temp = v1;
		v1 = v2;
		v2 = temp;
	}
	
	for(; v1 <= v2; v1++)
	{
		std::cout << v1 << std::endl;
	}
	return 0;
}
