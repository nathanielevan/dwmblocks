//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{""   , "status-vol --nficons", 2, 10},
	{""   , "status-bat --nficons", 2, 0},
	{""   , "status-bth --nficons", 2, 0},
	{""   , "status-net --nficons", 2, 0},
	{""   , "status-sys --nficons", 2, 0},
	{""   , "status-time --nficons", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
