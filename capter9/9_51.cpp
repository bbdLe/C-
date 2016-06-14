#include <string>
#include <iostream>

using namespace std;

class Date
{
	public:
		unsigned year = 0;
		unsigned month = 0;
		unsigned day = 0;
		
		Date() = default;
		Date(const string &str);
};

Date::Date(const string &str)
{
	unsigned format = 0;

	if(str.find(",") != string::npos)
	{
		format = 0x01;
	}
	else if(str.find("/") != string::npos)
	{
		format = 0x10;
	}
	else if(str.find(",") != string::npos)
	{
		format = 0x11;
	}
	else
	{
		exit(-1);
	}

	switch(format)
	{
		case 0x01:
			if(str.find("Jan") != string::npos) month = 1;
			if(str.find("Feb") != string::npos) month = 2;
			if(str.find("Mar") != string::npos) month = 3;
			if(str.find("Apr") != string::npos) month = 4;
			if(str.find("May") != string::npos) month = 5;
			if(str.find("Jun") != string::npos) month = 6;
			if(str.find("Jul") != string::npos) month = 7;
			if(str.find("Aug") != string::npos) month = 8;
			if(str.find("Sep") != string::npos) month = 9;
			if(str.find("Oct") != string::npos) month = 10;
			if(str.find("Nov") != string::npos) month = 11;
			if(str.find("Dec") != string::npos) month = 12;
			day = stoul(str.substr(str.find(" ")));
			year = stoul(str.substr(str.rfind(" ")));
			break;
		case 0x10:
		{
			string::size_type pos = 0;
			day = stoul(str);
			pos = str.find("/", pos);
			cout << "pos " << pos << endl;
			++pos;
			month = stoul(str.substr(pos));
			pos = str.find("/", pos);
			cout << "pos " << pos << endl;
			++pos;
			year = stoul(str.substr(pos));
			break;
		}
		case 0x11:
			if(str.find("Jan") != string::npos) month = 1;
			if(str.find("Feb") != string::npos) month = 2;
			if(str.find("Mar") != string::npos) month = 3;
			if(str.find("Apr") != string::npos) month = 4;
			if(str.find("May") != string::npos) month = 5;
			if(str.find("Jun") != string::npos) month = 6;
			if(str.find("Jul") != string::npos) month = 7;
			if(str.find("Aug") != string::npos) month = 8;
			if(str.find("Sep") != string::npos) month = 9;
			if(str.find("Oct") != string::npos) month = 10;
			if(str.find("Nov") != string::npos) month = 11;
			if(str.find("Dec") != string::npos) month = 12;
			day = stoul(str.substr(str.find(" ") + 1));
			year = stoul(str.substr(str.find(",") + 1));
			break;
	}
}

int main()
{
	Date test("Feb 1, 1900");
	Date test2("1/1/1900");
	Date test3("Jan 1, 1900");


	cout << test.day << " " << test.month << " " << test.year << endl;
	cout << test2.day << " " << test2.month << " " << test2.year << endl; 
	cout << test3.day << " " << test3.month << " " << test3.year << endl;

	return 0;
}
