#ifndef _7_43_H
#define _7_43_H

class NoDefault
{
	public:
		NoDefault(int j) : i(j) {}

	private:
		int i;
};

class C
{
	public:
		C() : item(0) {}

	private:
		NoDefault item;
};

#endif
