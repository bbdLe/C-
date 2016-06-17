#include<string>
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	unsigned size = 0;
	char *p = nullptr;
	string str;
	while(cin >> str)
	{
		if(size <= str.size())
		{
			delete [] p;
			p = new char[str.size() + 1];
		}
		strcpy(p, str.c_str());
		cout << p << endl;
	}
	delete [] p;
	return 0;
}
