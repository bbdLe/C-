#include <iostream>
#include <vector>
#include <iterator>
#include <fstream>
#include <algorithm>
#include "Sales_data.h"

using namespace std;

int main()
{
	ifstream ifs("items");
	istream_iterator<Sales_data> iter(ifs), ieof;
	vector<Sales_data> vec(iter, ieof);

	sort(vec.begin(), vec.end(), [](const Sales_data &item1, const Sales_data &item2) {return item1.isbn() < item2.isbn();});
	for(auto beg = vec.begin(), end = beg; beg != vec.end(); beg = end)
	{
		end = find_if(beg, vec.end(), [&beg](const Sales_data &item) {return item.isbn() != (*beg).isbn();});
		Sales_data total = accumulate(beg, end, Sales_data((*beg).isbn()), [](Sales_data &item1, Sales_data &item2){return item1.combine(item2);});
		print(cout, total) << endl;
	}

	return 0;
}
