#include"StrVec.h"
#include<iostream>

using namespace std;

int main()
{
	StrVec vec1;

	vec1.push_back("haha");
	cout << vec1.size() << endl;
	vec1.push_back("ruozhi");
	StrVec vec2(vec1);
	cout << vec2.size() << endl;
	vec2.resize(5);
	cout << vec2.size() << endl;
	vec2.reserve(10);
	cout << vec2.capacity() << endl;
	cout << vec2.at(4) << endl;

	return 0;
}
