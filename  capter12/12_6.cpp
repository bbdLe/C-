#include<vector>
#include<iostream>
#include<iterator>

using namespace std;

vector<int> *f1()
{
	return new vector<int>();
}

vector<int> *f2(vector<int> *p)
{
	istream_iterator<int> iter(cin), eof;
	
	p->assign(iter, eof);
	return p;
}

void f3(vector<int> *p)
{
	for(auto &i : *p)
	{
		cout << i << endl;
	}
	delete p;
}

int main()
{
	f3(f2(f1()));

	return 0;
}
