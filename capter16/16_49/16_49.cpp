#include"16_49.h"

using namespace std;

int main()
{
	int i = 42, *p = &i;
	const int ci = 0, *p2 = &ci;

	g(42);
	g(p);
	g(ci);
	g(p2);
	cout << endl;
	f(42);
	f(p);		// if we use f(const T *), then we should add a const
	f(ci);		
	f(p2);
}
