#ifndef _16_7_H
#define _16_7_H
template <typename T, unsigned N> constexpr unsigned size(T (&a)[N])
{
	return N;
}
#endif
