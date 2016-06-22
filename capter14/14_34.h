#ifndef _14_34_H
#define _14_34_H
class Test
{
	public:
		int operator()(bool cond, int a, int b)
		{
			if(cond)
				return a;
			else
				return b;
		}
};

#endif
