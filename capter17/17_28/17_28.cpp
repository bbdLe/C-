#include<random>
#include<iostream>

using namespace std;

unsigned int f()
{
	static default_random_engine engine;
	static uniform_int_distribution<unsigned int> u(0, 9);

	return u(engine);
}


int main()
{
	for(auto i = 0; i < 10; i++)
		cout << f() << endl;
}
