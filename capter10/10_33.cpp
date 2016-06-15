#include <iostream>
#include <fstream>
#include <iterator>
#include <string>

using namespace std;

void f(const string &file1, const string &file2, const string &file3)
{
	ifstream ifs(file1);
	ofstream ofs1(file2), ofs2(file3);
	istream_iterator<int> ifi(ifs), end; 
	ostream_iterator<int> ofi1(ofs1, " ");
	ostream_iterator<int> ofi2(ofs2, "\n");

	while(ifi != end)
	{
		if(*ifi % 2)
		{
			ofi1 = *ifi++;
		}
		else
		{
			ofi2 = *ifi++;
		}
	}
}



int main()
{
	f("file1", "file2", "file3");

	return 0;
}
