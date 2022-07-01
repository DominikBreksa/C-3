	#include <iostream>
	#include <string>

	#define MAX_WIDTH 600
	#define MAX_HIGHT 900
	#define MIN_WIDTH 300
	#define MIN_HIGHT 450
	
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