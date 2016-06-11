#ifndef _SCREEN_H
#define _SCREEN_H
#include <string>
#include <iostream>
#include "Window_mgr.h"

class Screen
{
	friend void Window_mgr::clear(ScreenIndex);
	public:
		using pos = std::string::size_type;

		Screen() = default;
		Screen(pos hg, pos wd) : height(hg), width(wd) {}
		Screen(pos hg, pos wd, char c) : height(hg), width(wd), content(hg * wd, c) {}

		char get() const;
		char get(pos hg, pos wd) const;

		Screen &move(pos row, pos col);

		Screen &set(pos row, pos col, char ch);

		Screen &set(char ch);

		const Screen &display(std::ostream &os) const;
		Screen &display(std::ostream &os);


	private:
		pos cursor = 0;
		pos height = 0;
		pos width = 0;
		std::string content;
		void do_display(std::ostream &os) const
		{
			os << content;
		}
};

#endif
