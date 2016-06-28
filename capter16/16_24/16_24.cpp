#include"Blob.h"
#include<vector>

using namespace std;

int main()
{
	vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
	Blob<int> b(vec.begin(), vec.end());
}
