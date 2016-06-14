#include<string>
#include<iostream>

using namespace std;

string iFind(const string &str)
{
	string target = "aceimnorstuvwsz";
	string result;
	string longest;
	string::size_type total = 0, curr = 0, pos = 0;
	string::size_type last = -1;

	while((pos = str.find_first_of(target, pos)) != string::npos)
	{
		if(pos == last + 1)
		{
			++curr;
			result += str[pos];
		}
		else
		{
			result = str[pos];
			curr = 1;
		}
		if(curr > total)
		{
			longest = result;
			total = curr;
		}
		last = pos;
		++pos;
	}

	return longest;
}

int main()
{
	cout << iFind("hello, world!") << endl;
}
