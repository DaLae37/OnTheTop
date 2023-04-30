#pragma once
#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include "Tutorial.h"
#include "GameTool.h"
#include "GameGuide.h"
#include "MadeBY.h"
#include "Console.h"

void MainA()
{
	Console();
	ConsoleCls();
	int enter = 1;
	int select = 1;
	char key;
	setColor(Blue, Black); Gotoxy(3, 1); printf("@@@@@@@@@@@@@@@@@@@@@");
	setColor(Blue, Black); Gotoxy(3, 2); printf("@@@@#+=:*#:=:+@@@@@@@");
	setColor(Blue, Black); Gotoxy(3, 3); printf("@@@@@#++:=:.:=@@@@@@@");
	setColor(Blue, Black); Gotoxy(3, 4); printf("@@@@@#+=:::::*@@@@@@@");
	setColor(Blue, Black); Gotoxy(3, 5); printf("@@@@@@%+=:.:%@@@@@@@@");
	setColor(Blue, Black); Gotoxy(3, 6); printf("@@@@@@%+:  .#@@@@@@@@");
	setColor(Blue, Black); Gotoxy(3, 7); printf("@@@@@@#+:. .=@@@@@@@@");
	setColor(Blue, Black); Gotoxy(3, 8); printf("@@@@@@#+:. .:@@@@@@@@");
	setColor(Blue, Black); Gotoxy(3, 9); printf("@@@@@@#+=:..:+@@@@@@@");
	setColor(Blue, Black); Gotoxy(3, 10); printf("@@@@@#+=:.  .:*@@@@@@");
	setColor(Blue, Black); Gotoxy(3, 11); printf("@@@@%*++:::::.:@@@@@@");
	setColor(Blue, Black); Gotoxy(3, 12); printf("@@@%#*+=:..  ...+@@@@");
	setColor(Blue, Black); Gotoxy(3, 13); printf("@@%+=:.         :#@@@");
	setColor(Blue, Black); Gotoxy(3, 14); printf("@@%###**++======:#@@@");
	setColor(Blue, Black); Gotoxy(3, 15); printf("@@@@%*++======+#@@@@@");
	setColor(Red, Black); Gotoxy(55, 1); printf("@@@@@@@@@@@@@@@@@@@@@");
	setColor(Red, Black); Gotoxy(55, 2); printf("@@@@#+=:*#:=:+@@@@@@@");
	setColor(Red, Black); Gotoxy(55, 3); printf("@@@@@#++:=:.:=@@@@@@@");
	setColor(Red, Black); Gotoxy(55, 4); printf("@@@@@#+=:::::*@@@@@@@");
	setColor(Red, Black); Gotoxy(55, 5); printf("@@@@@@%+=:.:%@@@@@@@@");
	setColor(Red, Black); Gotoxy(55, 6); printf("@@@@@@%+:  .#@@@@@@@@");
	setColor(Red, Black); Gotoxy(55, 7); printf("@@@@@@#+:. .=@@@@@@@@");
	setColor(Red, Black); Gotoxy(55, 8); printf("@@@@@@#+:. .:@@@@@@@@");
	setColor(Red, Black); Gotoxy(55, 9); printf("@@@@@@#+=:..:+@@@@@@@");
	setColor(Red, Black); Gotoxy(55, 10); printf("@@@@@#+=:.  .:*@@@@@@");
	setColor(Red, Black); Gotoxy(55, 11); printf("@@@@%*++:::::.:@@@@@@");
	setColor(Red, Black); Gotoxy(55, 12); printf("@@@%#*+=:..  ...+@@@@");
	setColor(Red, Black); Gotoxy(55, 13); printf("@@%+=:.         :#@@@");
	setColor(Red, Black); Gotoxy(55, 14); printf("@@%###**++======:#@@@");
	setColor(Red, Black); Gotoxy(55, 15); printf("@@@@%*++======+#@@@@@");
	setColor(Yellow, Black); Gotoxy(2, 16); printf("               0000000                 000                      ");
	setColor(Yellow, Black); Gotoxy(2, 17); printf("                     0   00000  0000   0   0  0000   00000  0   0");
	setColor(Yellow, Black); Gotoxy(2, 18); printf("                    0    0      0   0  0  00  0   0  0      00  0");
	setColor(Yellow, Black); Gotoxy(2, 19); printf("                   0     00000  0000   0 0 0  0   0  00000  000 0");
	setColor(Yellow, Black); Gotoxy(2, 20); printf("                  0      0      0 0    00  0  0000   0      0 000");
	setColor(Yellow, Black); Gotoxy(2, 21); printf("                 0       0      0  0   0   0  0      0      0  00");
	setColor(Yellow, Black); Gotoxy(2, 22); printf("                0000000  00000  0   0   000   0      00000  0   0");
	while (enter == 1)
	{
		switch (select)
		{
		case 1:
			setColor(Black, White); Gotoxy(35, 5); printf("▶게임 시작 ");
			setColor(Black, White); Gotoxy(35, 8); printf("  게임 설명 ");
			setColor(Black, White); Gotoxy(35, 11); printf("  제 작 자 ");
			setColor(Black, White); Gotoxy(35, 14); printf("  종    료 ");
			break;
		case 2:
			setColor(Black, White); Gotoxy(35, 5); printf("  게임 시작 ");
			setColor(Black, White); Gotoxy(35, 8); printf("▶게임 설명 ");
			setColor(Black, White); Gotoxy(35, 11); printf("  제 작 자 ");
			setColor(Black, White); Gotoxy(35, 14); printf("  종    료 ");
			break;
		case 3:
			setColor(Black, White); Gotoxy(35, 5); printf("  게임 시작 ");
			setColor(Black, White); Gotoxy(35, 8); printf("  게임 설명 ");
			setColor(Black, White); Gotoxy(35, 11); printf("▶제 작 자 ");
			setColor(Black, White); Gotoxy(35, 14); printf("  종    료 ");
			break;
		case 4:
			setColor(Black, White); Gotoxy(35, 5); printf("  게임 시작 ");
			setColor(Black, White); Gotoxy(35, 8); printf("  게임 설명 ");
			setColor(Black, White); Gotoxy(35, 11); printf("  제 작 자 ");
			setColor(Black, White); Gotoxy(35, 14); printf("▶종    료 ");
			break;
		default:
			break;
		}
		setColor(0, 0);
		key = getch();
		switch (key)
		{
		case UP:
			select--;
			break;
		case DOWN:
			select++;
			break;
		case ENTER:
			enter++;
			break;
		default:
			break;
		}
		if (select < 1)
		{
			select = 1;
		}
		else if (select > 4)
		{
			select = 4;
		}
	}
	if (select == 1)
	{
		system("cls");
		ConsoleCls();
		Tutorial();
	}
	else if (select == 2)
	{
		ConsoleCls();
		GameGuide();
	}
	else if (select == 3)
	{
		ConsoleCls();
		MadeBY();
	}
	else
	{
		return;
	}
}