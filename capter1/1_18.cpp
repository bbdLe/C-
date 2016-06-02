#include<iostream>

int main()
{
	int currVal = 0, val = 0;
	
	if(std::cin >> currVal)
	{
		int times = 1;
		while(std::cin >> val)
		{
			if(val == currVal)
			{
				times++;
			}
			else
			{
				std::cout << currVal << " occurs " << times << " times" << std::endl;
				currVal = val;
				times = 1;
			}
		}
		std::cout << currVal << " occurs " << times << " times" << std::endl;
	}

	return 0;
}
