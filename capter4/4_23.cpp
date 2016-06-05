#include <iostream>
#include <string>

using std::string;

int main()
{
	string  s = "word";
	string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
	return 0;
}
