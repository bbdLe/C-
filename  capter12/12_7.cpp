#include<memory>
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;
using type = shared_ptr<vector<int>>;

type f1()
{
	return make_shared<vector<int>>();
}

type f2(type spv)
{
	istream_iterator<int> iter(cin), eof;
	copy(iter, eof, back_inserter(*spv));
	return spv;
}

void f3(type spv)
{
	for(auto &i : *spv)
		cout << i << endl;
}

int main()
{
	f3(f2(f1()));

	return 0;
}
