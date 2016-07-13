#include<regex>
#include<iostream>
#include<string>

using namespace std;
using std::sregex_iterator;

int main()
{
	try
	{
		string pattern = "[^c]ei";
		pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
		regex r(pattern, regex::icase);
		string word;
	
		while(cin >> word)
		{
			for(sregex_iterator begin(word.begin(), word.end(), r), end; begin != end; ++begin)
				cout << begin->str() << endl;
		}
	} catch(regex_error e)
	{
		cout << e.what() << "\ncode : " << e.code() << endl;
	}
}
