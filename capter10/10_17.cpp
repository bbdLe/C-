#include <vector>
#include <string>
#include "Sales_data.h"
#include <iostream>
#include <algorithm>

using namespace std;

bool compareIsbn(const Sales_data &item1, const Sales_data &item2)
{
	return item1.isbn().size() < item1.isbn().size();
}

int main()
{
	vector<Sales_data> vec;
	
	vec.emplace(vec.end(), "baichi", 2, 20);
	vec.emplace(vec.end(), "ruozhis", 2, 20);

	sort(vec.begin(), vec.end(), [](const Sales_data &item1, const Sales_data &item2) {return item1.isbn().size() < item2.isbn().size();});
	
	for(const auto &book : vec)
	{
		cout << book.isbn() << endl;
	}
}
