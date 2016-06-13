#include<string>
#include<forward_list>
#include<iostream>

using namespace std;

void f(forward_list<string> &sfwl, const string &str1, const string &str2)
{
	auto begin = sfwl.begin();
	auto prev = sfwl.before_begin();
	while(begin != sfwl.end())
	{
		if(*begin == str1)
		{
			sfwl.insert_after(begin, str2);
			return;
		}
		else
		{
			prev = begin;
			++begin;
		}
	}
	
	sfwl.insert_after(prev, str2);
	return;
}

int main()
{
	forward_list<string> sfwl{"hello", "world"};

	f(sfwl, "good", "!");

	for(const auto &str : sfwl)
	{
		cout << str << endl;
	}

	return 0;
}
