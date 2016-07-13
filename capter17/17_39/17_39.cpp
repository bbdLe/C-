#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	fstream inOut("test", fstream::ate | fstream::in | fstream::out);
	
	if(!inOut)
	{
		cerr << "Can't open the file!" << endl;
		return EXIT_FAILURE;
	}
	
	auto endPos = inOut.tellp();
	size_t length = 0;
	string line;
	inOut.seekg(0, fstream::beg);
	while(inOut && inOut.tellp() != endPos && getline(inOut, line))
	{
		length += line.size() + 1;
		auto currPos = inOut.tellp();
		inOut.seekp(0, fstream::end);
		inOut << length;
		if(length != endPos)
		{
			inOut << " ";
		}
		inOut.seekg(currPos, fstream::beg);
	}
	inOut.seekp(0, fstream::end);
	inOut << "\n";
	return 0;
}
