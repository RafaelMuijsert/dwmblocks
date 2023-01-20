//Modify this file to change what commands output to your statusbar, and recompile using the make command.
#define BLOCK_DIRECTORY "~/.config/dwmblocks/"
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"🌡", BLOCK_DIRECTORY "cputemp",	10,			0},
	{"🧠", BLOCK_DIRECTORY "memory",	60,			0},
	{"", BLOCK_DIRECTORY "volume",		0,			10},
	{"", BLOCK_DIRECTORY "battery",		60,			0},
	{"", BLOCK_DIRECTORY "date",		30,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " \uE0B3 ";
static unsigned int delimLen = 5;
