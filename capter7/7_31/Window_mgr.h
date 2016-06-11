#ifndef _WINDOW_MGR_H
#define _WINDOW_MGR_H
#include <vector>

class Screen;

class Window_mgr
{
	public:
		Window_mgr();
		using ScreenIndex = std::vector<Screen>::size_type;
		void clear(ScreenIndex);

	private:
		std::vector<Screen> screens;
};
#endif
