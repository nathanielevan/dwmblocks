//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{""   , "dwmblocks-eth", 2, 0},
	{""   , "dwmblocks-wlan", 2, 0},
	{""   , "dwmblocks-vol", 2, 10},
	{""   , "dwmblocks-ram", 2, 0},
	{""   , "dwmblocks-cpu", 2, 0},
	{""   , "dwmblocks-bat", 2, 0},
	{""   , "dwmblocks-time", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
