#include <iostream>

using namespace std;

int main()
{
	int size = 10;
	auto f = [&size]() -> bool {
								if(!size) 
									return true;
								else
								{
									while(--size);
									return false;
								}};
	cout << boolalpha << f() << endl;
	cout << boolalpha << f() << endl;

}
