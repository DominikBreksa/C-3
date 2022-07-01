	#include "start.h"

	bool Win::Count;

	Win::Win(void): Width(MAX_WIDTH), Hight(MAX_HIGHT), ScreenName("C-3") {
		if(Count) this->~Win();
		else Count = true;
	}
	Win::Win(int n, char* arg[]): Width(std::min(std::max(std::stoi(arg[1]), MIN_WIDTH), MAX_WIDTH)), Hight(std::min(std::max(std::stoi(arg[2]), MIN_HIGHT), MAX_HIGHT)), ScreenName(arg[3]) {
		if(Count) this->~Win();
		else Count = true;
	}
	Win::~Win(void) {
		Width = Hight = 0;
		ScreenName.clear();
		Count = false;
	}
	
	int Win::GetWidth(void) const {return Width;}
	int Win::GetHight(void) const {return Hight;}
	std::string Win::GetScreenName(void) const {return ScreenName;}
	bool Win::GetCount(void) const {return Count;}