#include <iostream>
#include <string>
#include "Person.h"

using std::istream;
using std::ostream;

ostream &print(ostream &os, const Person &someone)
{
	os << someone.name() << " " << someone.address();
	return os;
}

istream &read(istream &is, Person &someone)
{
	is >> someone.pname >> someone.paddress;
	return is;
}
