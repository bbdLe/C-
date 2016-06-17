#include <iostream>
#include <unordered_map>
#include <string>
#include <fstream>
#include <sstream>
#include <stdexcept>

using namespace std;

unordered_map<string, string> buildMap(ifstream &ifs)
{
	unordered_map<string, string> trans;
	string word, afterWord;

	while(ifs >> word)
	{
		getline(ifs, afterWord);
		if(afterWord.size() > 2)
			trans[word] = afterWord.substr(afterWord.find(" ") + 1);
		else
			throw runtime_error("No replace string");
	}

	return trans;
}

const string transform(const string &str, unordered_map<string, string> &wordMap)
{
	if(wordMap.find(str) != wordMap.end())
		return wordMap[str];
	else
		return str;
}

void word_transform(ifstream &infile, ifstream &tranfile)
{
	unordered_map<string, string> trans = buildMap(infile);
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
