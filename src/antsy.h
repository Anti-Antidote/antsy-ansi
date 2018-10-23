#ifndef ANTSY_H
#define ANTSY_H

namespace antsy
{
	// Color Code Bitwise Flags
	// KEY: 0b         : Number is a binary literal
	//        A        : Is background bright?
	//         BBB     : Background color (0-7)
	//            C    : Is foreground bright?
	//             DDD : Foreground color (0-7)
	enum colorCode
	{
		FG_BLACK  = 0b00000000, FG_RED     = 0b00000001,
		FG_GREEN  = 0b00000010, FG_YELLOW  = 0b00000011,
		FG_BLUE   = 0b00000100, FG_MAGENTA = 0b00000101,
		FG_CYAN   = 0b00000110, FG_WHITE   = 0b00000111,
		BG_BLACK  = 0b00000000, BG_RED     = 0b00010000,
		BG_GREEN  = 0b00100000, BG_YELLOW  = 0b00110000,
		BG_BLUE   = 0b01000000, BG_MAGENTA = 0b01010000,
		BG_CYAN   = 0b01100000, BG_WHITE   = 0b01110000,
		FG_BRIGHT = 0b00001000, BG_BRIGHT  = 0b10000000
	}

	// Returns an ANSI escape sequence that sets color to the given colors
	string color(colorCode);

	// Returns an ANSI escape sequence that resets color
	string resetColor();

	// Returns the given string with the given colors
	string colorText(colorCode, int);
}

#endif // ANTSY_H
