#include<list>
#include<vector>

using namespace std;

int main()
{
	vector<int> iv = {1, 2, 3, 4, 5};
	list<double> doul(iv.begin(), iv.end());
	vector<double> douv(iv.begin(), iv.end());

	return 0;
}
