#include "antsy.h"
#include <string>

namespace antsy
{
	string color(colorCode code)
	{
		// Separate foreground and background values
		int foreground = code & 0b00000111;
		int background = (code & 0b01110000) >> 4;
		
		// Find proper ANSI color codes for desired color
		foreground += (code & FG_BRIGHT) ? 90  : 30;
		background += (code & BG_BRIGHT) ? 100 : 40;
		
		// Return escape sequence
		return "\033[0;" + to_string(foreground) + ";" + to_string(background) + "m";
	}
	
	string resetColor()
	{
		return "\033[0m";
	}
	
	string colorText(string text, colorCode code)
	{
		return color(code) + text + resetColor();
	}
}
