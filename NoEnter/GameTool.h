#define LEFT 75 
#define RIGHT 77 
#define UP  72 
#define DOWN 80 
#define SPACE 32
#define ESC 27
#define ENTER 13
void Gotoxy(int x, int y);
void setColor(int color, int bgcolor);
int Select();
enum
{
	Black,
	DarkBlue,
	DarkGreen,
	DarkSkyBlue,
	DarkRed,
	DarkViolet,
	DarkYellow,
	Gray,
	DarkGray,
	Blue,
	Green,
	SkyBlue,
	Red,
	Violet,
	Yellow,
	White
};