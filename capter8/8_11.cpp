#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct PersonInfo
{
	string name;
	vector<string> phones;
};

int main()
{
	string line, word;
	vector<PersonInfo> people;
	istringstream iss;
	while(getline(cin, line))
	{
		PersonInfo singPerson;
		iss.str(line);
		iss >> singPerson.name;
		while(iss >> word)
		{
			singPerson.phones.push_back(word);
		}
		people.push_back(singPerson);
	}
	cout << "End" << endl;

	return 0;
}
