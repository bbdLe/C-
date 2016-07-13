#include"17_10.h"
#include<iostream>

using namespace std;

int main()
{
	Quiz<4> answer("1010");
	Quiz<4> stuAns("0101");
	cout << grade(answer, stuAns) << endl;;
}
