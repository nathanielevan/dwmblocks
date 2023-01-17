//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{""   , "status-vol", 2, 10},
	{""   , "status-bat", 2, 0},
	{""   , "status-bth", 2, 0},
	{""   , "status-net", 2, 0},
	{""   , "status-mon", 2, 0},
	{""   , "status-time", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
