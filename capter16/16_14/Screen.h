#ifndef _SCREEN_H
#define _SCREEN_H
#include<iostream>
template <unsigned N, unsigned M> class Screen;
template <unsigned N, unsigned M> std::ostream &operator<<(std::ostream &, const Screen<N, M>&);

template <unsigned N, unsigned M> class Screen
{
	friend std::ostream &operator<< <N, M> (std::ostream &, const Screen<N, M> &);
	public:
		Screen() : height(N), width(M) {}
	
	private:
		unsigned height = 0;
		unsigned width = 0;
};

template <unsigned N, unsigned M>std::ostream& operator<<(std::ostream &os, const Screen<N, M> &s)
{
	os << s.height << std::endl;
	os << s.width << std::endl;
	return os;
}
#endif
