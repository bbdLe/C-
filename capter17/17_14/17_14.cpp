#include<regex>
#include<stdexcept>
#include<iostream>

using namespace std;

int main()
{
	try
	{
		regex r1("[[alnum:]]+\\.(cpp|cc|cxx)", regex::icase);
		regex r2("[[:alnum:]+\\.(cpp|cc|cxx)", regex::icase);
	} catch(regex_error e)
	{
		cerr << e.what() << "\ncode : " << e.code() << endl;
	}

	return 0;
}
