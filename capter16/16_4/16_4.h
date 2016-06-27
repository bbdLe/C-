#ifndef _16_4_H
#define _16_4_H
template <typename T, typename V> T find(T t1, T t2, const V &v)
{
	while(t1 != t2)
	{
		if(*t1 == v)
			return t1;
		else
			++t1;
	}
	return t2;
}

#endif
