#include<random>
#include<iostream>
#include<ctime>

using namespace std;

unsigned int f(unsigned int seed = time(nullptr))
{
	static default_random_engine engine(seed);
	static uniform_int_distribution<unsigned int> u(0, 9);

	return u(engine);
}


int main()
{
	for(auto i = 0; i < 10; i++)
		cout << f(800) << endl;
}
