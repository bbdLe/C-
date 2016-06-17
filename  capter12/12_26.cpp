#include<memory>
#include<iostream>
#include<string>

using namespace std;

int main()
{
	allocator<string> alloc;
	const int n = 10;
	int count = n;
	auto const p = alloc.allocate(10);
	auto q = p;
	string str;

	while(cin >> str && count)
	{
		alloc.construct(q++, str);
		--count;
	}
	for(auto temp = p; temp != q; temp++)
	{
		cout << *temp << endl;
	}
	while(q != p)
	{
		alloc.destroy(--q);
	}
	alloc.deallocate(p, n);
}
