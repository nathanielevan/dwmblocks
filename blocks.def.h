//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{""   , "status-eth", 2, 0},
	{""   , "status-wlan", 2, 0},
	{""   , "status-vol", 2, 10},
	{""   , "status-ram", 2, 0},
	{""   , "status-cpu", 2, 0},
	{""   , "status-bat", 2, 0},
	{""   , "status-time", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
