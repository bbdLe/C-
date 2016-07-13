#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <random>
#include <ctime>

using namespace std;

multimap<string, string> buildMap(ifstream &ifs)
{
	multimap<string, string> trans;
	string word, afterWord;

	while(ifs >> word)
	{
		getline(ifs, afterWord);
		if(afterWord.size() > 2)
			trans.emplace(word, afterWord.substr(afterWord.find(" ") + 1));
		else
			throw runtime_error("No replace string");
	}

	return trans;
}

const string transform(const string &str, multimap<string, string> &wordMap)
{
	auto begin = wordMap.find(str);
	if(begin == wordMap.end())
		return str;
	else
	{
		auto size = wordMap.count(str);
		default_random_engine engine(time(nullptr));
		uniform_int_distribution<unsigned> u(0, size - 1);
		auto rand = u(engine);
		while(rand--)
			++begin;
		return begin->second;
	}
}

void word_transform(ifstream &infile, ifstream &tranfile)
{
	multimap<string, string> trans = buildMap(infile);
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
