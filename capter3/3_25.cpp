#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> v(11, 0);
	int score;
	auto b = v.begin();

	while(cin >> score)
	{
		if(score <= 100)
		{
			*(b + score / 10) += 1;
		}
	}

	for(auto i : v)
	{
		cout << i << endl;
	}

	return 0;
}
