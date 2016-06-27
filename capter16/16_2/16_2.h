#ifndef _16_2_H
#define _16_2_H
template <typename T> int compare(const T &item1, const T &item2)
{
	if(item1 < item2)
		return -1;
	if(item2 < item1)
		return 1;
}
#endif
