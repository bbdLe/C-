#ifndef DEBUGDELETE_H
#define DEBUGDELETE_H
#include<iostream>
class DebugDelete
{
	public:
		DebugDelete(std::ostream &o = std::cerr) : os(o) {}

		template <typename T> void operator() (T *p)
		{
			os << "Delete item" << std::endl;
			delete p;
		}

	private:
		std::ostream &os;
};
#endif
