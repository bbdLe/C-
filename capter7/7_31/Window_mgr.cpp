#include <iostream>
#include <string>
#include <vector>
#include "Window_mgr.h"
#include "Screen.h"

using namespace std;

Window_mgr::Window_mgr() : screens{Screen(20, 20, 'x')} {}

void Window_mgr::clear(ScreenIndex index)
{
	Screen &s = screens[index];
	s = Screen(s.height, s.width, ' ');
}
