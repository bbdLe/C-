#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <stdexcept>

using namespace std;

map<string, string> buildMap(ifstream &ifs)
{
	map<string, string> trans;
	string word, afterWord;

	while(ifs >> word)
	{
		getline(ifs, afterWord);
		if(afterWord.size() > 1)
			trans[word] = afterWord.substr(afterWord.find(" ") + 1);
		else
			throw runtime_error("No replace string");
	}

	return trans;
}

const string transform(const string &str, map<string, string> &wordMap)
{
	if(wordMap.find(str) != wordMap.end())
		return wordMap[str];
	else
		return str;
}

void word_transform(ifstream &infile, ifstream &tranfile)
{
	map<string, string> trans = buildMap(infile);
	bool firstWord = true;
	string word, line;

	while(getline(tranfile, line))
	{
		istringstream strstream(line);
		while(strstream >> word)
		{
			if(firstWord)
			{
				firstWord = false;
			}
			else
			{
				cout << " ";
			}
			cout << transform(word, trans);
		}
		firstWord = true;
		cout << endl;
	}
}

int main()
{
	ifstream ifs1("test1"), ifs2("test2");

	word_transform(ifs1, ifs2);

	return 0;
}
