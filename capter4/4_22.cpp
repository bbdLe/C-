#include <iostream>
#include <string>


using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
	int score;
	string str;

	while(cin >> score)
	{
		if(score <= 100)
		{
			str = (score > 90) ? "high pass" : 
											   (score > 75) ? "pass" : 
											                           (score >= 60) ? "lowpass" : "fail";
		}
		cout << str << endl;
	}
	return 0;
}
