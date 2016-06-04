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

	cout << "v1 size : " << v1.size() << endl;
	for(auto b = v1.cbegin(); b != v1.cend(); b++)
		cout << *b << endl;
	cout << "v2 size : " << v2.size() << endl;
	for(auto b = v2.cbegin(); b != v2.cend(); b++)
		cout << *b << endl;
	cout << "v3 size : " << v3.size() << endl;
	for(auto b = v3.cbegin(); b != v3.cend(); b++)
		cout << *b << endl;
	cout << "v4 size : " << v4.size() << endl;
	for(auto b = v4.cbegin(); b != v4.cend(); b++)
		cout << *b << endl;
	cout << "v5 size : " << v5.size() << endl;
	for(auto b = v5.cbegin(); b != v5.cend(); b++)
		cout << *b << endl;
	cout << "v6 size : " << v6.size() << endl;
	for(auto b = v6.cbegin(); b != v6.cend(); b++)
		cout << *b << endl;
	cout << "v7 size : " << v7.size() << endl;
	for(auto b = v7.cbegin(); b != v7.cend(); b++)
		cout << *b << endl;
	
	return 0;
}
