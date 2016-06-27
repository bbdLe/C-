#include "StrVec.h"

using namespace std;

int main()
{
	StrVec<int> vec;
	vec = {1, 2, 3, 4, 5, 6, 7};
	cout << vec.at(5) << endl;
}
