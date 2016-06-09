#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<string> vstr = {"F", "D", "C", "B", "A", "A++"};
	string letterGrade;
	int grade;

	if(cin >> grade)
	{
		if(grade < 60)
		{
			letterGrade = vstr[0];
		}
		else
		{
			letterGrade = vstr[(grade - 50) / 10];
			if(grade != 100)
			{
				if(grade % 10 > 7)
					letterGrade += '+';
				else if(grade % 10 < 4)
					letterGrade += '-';
			}
		}
		cout << letterGrade << endl;
	}
	
	return 0;
}
