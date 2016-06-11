#include <iostream>
#include <string>
#include "Screen.h"

using namespace std;

char Screen::get() const
{
	return content[cursor];
}

char Screen::get(pos row, pos col) const
{
	return content[row * width + col];
}

Screen &Screen::move(pos row, pos col)
{
	cursor = row * width + col;
	return *this;
}

Screen &Screen::set(pos row, pos col, char ch)
{
	content[row * width + col] = ch;
	return *this;
}

Screen &Screen::set(char ch)
{
	content[cursor] = ch;
	return *this;
}

const Screen &Screen::display(ostream &os) const
{
	do_display(os);
	return *this;
}

Screen &Screen::display(ostream &os)
{
	do_display(os);
	return *this;
}

