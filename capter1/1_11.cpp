#include<iostream>

int main()
{
	int v1, v2, temp;

	std::cout << "Inter two number:" << std::endl;
	std::cin >> v1 >> v2;
	if(v1 > v2)
	{
		temp = v1;
		v1 = v2;
		v2 = temp;
	}
	while(v1 <= v2)
	{
		std::cout << v1 << std::endl;
		v1++;
	}
	return 0;
}
