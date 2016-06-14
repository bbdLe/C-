#include <vector>
#include <list>

using namespace std;

int main()
{
	vector<const char *> roster1 = {"hello", "world", "!"};
	list<const char *> roster2 = {"hello", "world", "!"};

	equal(roster1.cbegin(), roster1.cend(), roster2.cbegin());
}
