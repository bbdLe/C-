#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

struct PersonInfo
{
	string name;
	vector<string> phones;
};

bool valid(const string &str)
{
	return isdigit(str[0]);
}

const string &format(const string &str)
{
	return str;
}

int main(int argc, char **argv)
{
	string line, word;
	vector<PersonInfo> people;
	ifstream ifs(*(++argv));

	while(getline(ifs, line))
	{
		PersonInfo singPerson;
		istringstream iss(line);
		iss >> singPerson.name;
		while(iss >> word)
		{
			singPerson.phones.push_back(word);
		}
		people.push_back(singPerson);
	}

	for(const auto &person : people)
	{
		ostringstream formatted, badnum;
		for(const auto &phone : person.phones)
		{
			if(valid(phone))
			{
				formatted << "111111111" << " "; 
			}
			else
			{
				badnum << phone << " ";
			}
		}
		if(badnum.str().empty())
		{
			cout << person.name << formatted.str() << endl;
		}
		else
		{
			cerr << "Error Input : " << person.name << " " << badnum.str() << endl;
		}
	}

	return 0;
}
