#pragma once
#include <stdio.h>
#include <conio.h>
#include "GameTool.h"
#include "Console.h"
#include "Main.h"
void MadeBY()
{
	Console();
	Gotoxy(2, 1); setColor(White, Black); printf("Made By DaLae37");
	Gotoxy(2, 2); setColor(White, Black); printf("Github : https://github.com/DaLae37");
	Gotoxy(2, 3); setColor(White, Black); printf("Blog : https://blog.naver.com/dalae37");
	Gotoxy(2, 4); setColor(White, Black); printf("Thanks To");
	Gotoxy(12, 4); setColor(Yellow, Black); printf("ZEROPEN");
	getch();
	MainA();
}