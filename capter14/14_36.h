#ifndef _14_36_H
#define _14_36_H
class Test
{
	public:
		Test(int n) : number(n) {}
		bool operator()(int x) {return number == x;}

	private:
		int number;
};
#endif
