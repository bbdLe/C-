#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item currItem, item;

	if(std::cin >> currItem)
	{
		int count = 1;
		while(std::cin >> item)
		{
			if(item.isbn() == currItem.isbn())
			{
				count++;
			}
			else
			{
				std::cout << currItem.isbn() << " occurs " << count << " times" << std::endl;
				currItem = item;
				count = 1;
			}
		}
		std::cout << currItem.isbn() << " occurs " << count << " times" << std::endl;
	}

	return 0;
}

