#include<random>
#include<iostream>
#include<ctime>

using namespace std;

unsigned int f(unsinged int min, unsigned int max, unsigned int seed)
{
	static default_random_engine engine(seed);
	static uniform_int_distribution<unsigned int> u(min, max);

	return u(engine);
}

unsigned int f(unsigned int seed)
{
	static default_random_engined engine(seed);
	static uniform_int_distribution<unsigned int> u;

	return u(engine);
}

unsigned int f()
{
	static default_random_engine engine;
	static uniform_int_distribution<unsigned int> u;

	return u(engine);
}


int main()
{
	for(auto i = 0; i < 10; i++)
		cout << f(0, 10) << endl;
}
