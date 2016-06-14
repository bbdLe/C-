#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	vector<double> vec = {1.5, 1.5, 1.5, 1.5};

	// accumulate return a int value
	double sum = accumulate(vec.cbegin(), vec.cend(), 0);
	cout << sum << endl;
	return 0;
}
