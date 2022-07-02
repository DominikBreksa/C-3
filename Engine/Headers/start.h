	#ifndef START_H
		#define START_H
		#define MAX_WIDTH 875
		#define MAX_HIGHT 700
		#define MIN_WIDTH 375
		#define MIN_HIGHT 300

		#include <iostream>
		#include <string>
		
		// @note We can only have one object of class Win
	
		class Win {
			public:
				Win(void);
				Win(int n, char* arg[]);
				~Win(void);
	
				int GetWidth(void) const;
				int GetHight(void) const;
				std::string GetScreenName(void) const;
				bool GetCount(void) const;
			protected:
				static bool Count;
				int Width;		// Width of the screen
				int Hight;		// Hight of the screen
				std::string ScreenName;			// Name of the screen
		};
	#endif