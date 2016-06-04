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
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};

	cout << "v1:" << endl;
	cout << "size: " << v1.size() << endl;
	for(auto item : v1)
		cout << item << endl;
	cout << endl;

	cout << "v2:" << endl;
	cout << "size: " << v2.size() << endl;
	for(auto item : v2)
		cout << item << endl;
	cout << endl;

	cout << "v3:" << endl;
	cout << "size: " << v3.size() << endl;
	for(auto item : v3)
		cout << item << endl;
	cout << endl;

	cout << "v4:" << endl;
	cout << "size: " << v4.size() << endl;
	for(auto item : v4)
		cout << item << endl;
	cout << endl;

	cout << "v5:" << endl;
	cout << "size: " << v5.size() << endl;
	for(auto item : v5)
		cout << item << endl;
	cout << endl;

	cout << "v6:" << endl;
	cout << "size: " << v6.size() << endl;
	for(auto item : v6)
		cout << item << endl;
	cout << endl;

	cout << "v7:" << endl;
	cout << "size: " << v7.size() << endl;
	for(auto item : v7)
		cout << item << endl;
	cout << endl;

	return 0;
}
