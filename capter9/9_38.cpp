#include<vector>
#include<iostream>

using namespace std;

int main()
{
	vector<int> iv;

	cout << iv.size() << " " <<iv.capacity() << endl;
	
	for(int i = 0; i < 10; i++)
	{
		iv.push_back(i);
	}

	cout << iv.size() << " " <<iv.capacity() << endl;
	iv.resize(17);
	cout << iv.size() << " " <<iv.capacity() << endl;
	iv.resize(21);
	cout << iv.size() << " " <<iv.capacity() << endl;


	return 0;
}
