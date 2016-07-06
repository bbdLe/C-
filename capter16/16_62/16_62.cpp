#include"Sales_data.h"
#include<unordered_set>

using namespace std;

int main()
{
	unordered_multiset<Sales_data> uoms;

	Sales_data book("book1", 10, 20);
	uoms.insert(book);
}
