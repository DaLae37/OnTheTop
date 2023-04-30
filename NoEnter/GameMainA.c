#pragma once
#include <WIndows.h>
#include <stdio.h>
#include <conio.h>
#include "GameTool.h"
#include "Console.h"
#include "GameMain.h"
#include <time.h>
#include <stdlib.h>
#include "Tutorial.h"

void Final(Player pl, int story);
void Monster(Player pl)
{
	system("cls");
	HalfConsole();
	UnderConsole();
	Gotoxy(7, 1); setColor(Red, Black); printf(";..``~~;;..oMEMMMMI;;=+``~.``.~");
	Gotoxy(7, 2); setColor(Red, Black); printf("```   ;+;;=M#MMM##O=i=Oo`````..");
	Gotoxy(7, 3); setColor(Red, Black); printf(":::;8oO888EE8888888EEE8888E~:::");
	Gotoxy(7, 4); setColor(Red, Black); printf(";;;o#8EEEEE#EE#E8EMEEEEEEEE;;II");
	Gotoxy(7, 5); setColor(Red, Black); printf("II;88+####EEE#EEEE8EEEEEE+Ei;II");
	Gotoxy(7, 6); setColor(Red, Black); printf("ii=EOIo######EEE#EEEE##E=+Ei===");
	Gotoxy(7, 7); setColor(Red, Black); printf("++iOO+iiOE###########8+iioE++++");
	Gotoxy(7, 8); setColor(Red, Black); printf("ooo8E8+o++#8OOOOOOoEE+ooOEEoooo");
	Gotoxy(7, 9); setColor(Red, Black); printf("oo+EO8O+ooEOooooooo8E++oE8Eoooo");
	Gotoxy(7, 10); setColor(Red, Black); printf("OOOOEOOOOOE8OOOOOOo8Eooo8EOOOOO");
	Gotoxy(7, 11); setColor(Red, Black); printf("OOOOoOOo+=o8oooOOOO8E+OOOOOOOOO");
	Gotoxy(7, 12); setColor(Red, Black); printf("OooOoO+O8OoO8OOOOOOoEoo8oOOOOOO");
	Gotoxy(7, 13); setColor(Red, Black); printf("OOOO8##MM##E888888E#MMEM#8888O8");
	Gotoxy(7, 19); setColor(White, Black); printf("System : 몬스터와 싸움을 시작합니다");
	getch();
	UnderConsoleCls();
	SelectVs(pl);
}
void GameMain(Player pl)
{
	int story = 1;
	int mx = 2;
	int my = 8;
	int move;
	int a=0, b=0, c=0, d=0;
	system("cls");
	HalfConsole();
	srand((unsigned int)time(NULL));
	a = rand() % 10 + 1;
	b = rand() % 10 + 1;
	c = rand() % 10 + 1;
	d = rand() % 10 + 1;
	Gotoxy(62, 3); setColor(White, Black); printf("이름 : %s", pl.name);
	Gotoxy(52, 2); setColor(White, a); printf("◎");
	Gotoxy(52, 6); setColor(White, b); printf("◎");
	Gotoxy(52, 10); setColor(White, c); printf("◎");
	Gotoxy(52, 14); setColor(White, d); printf("◎");
	UnderConsoleCls();
	UnderConsole();

	while (1)
	{
		Gotoxy(62, 1); setColor(White, Black); printf("            ");
		Gotoxy(62, 1); setColor(White, Black); printf("층 : %d층", story);
		if (story == 10)
		{
			Final(pl, story);
		}
		int space = 0;
		Gotoxy(mx, my); setColor(White, Black); printf("○");
		move = getch();
		switch (move)
		{
		case UP:
			Gotoxy(mx, my); setColor(White, Black); printf("  ");
			my--;
			break;
		case DOWN:
			Gotoxy(mx, my); setColor(White, Black); printf("  ");
			my++;
			break;
		case LEFT:
			Gotoxy(mx, my); setColor(White, Black); printf("  ");
			mx-=2;
			break;
		case RIGHT:
			Gotoxy(mx, my); setColor(White, Black); printf("  ");
			mx+=2;
			break;
		case SPACE:
			space++;
			break;
		case '1':
			Final(pl, story);
			break;
		default:
			break;
		}
		if (space == 1)
		{
				if (mx == 50 && my == 2 || mx == 50 && my == 6 || mx == 50 && my == 10 || mx == 50 && my==14)
				{
					int cor;
					cor = story;
					story += Luck(pl);
					Gotoxy(mx, my); setColor(White, Black); printf("  ");
					mx = 2;
					my = 8;
					if (story>cor)
					{
						a = rand() % 10 + 1;
						b = rand() % 10 + 1;
						c = rand() % 10 + 1;
						d = rand() % 10 + 1;
						Gotoxy(52, 2); setColor(White, a); printf("◎");
						Gotoxy(52, 6); setColor(White, b); printf("◎");
						Gotoxy(52, 10); setColor(White, c); printf("◎");
						Gotoxy(52, 14); setColor(White, d); printf("◎");
					}
				}
		}
		if (mx < 2)
		{
			mx = 2;
		}
		else if (my < 1)
		{
			my = 1;
		}
		else if (my > 16)
		{
			my = 16;
		}
		else if (mx > 50)
		{
			mx = 50;
		}
	}
}

void Final(Player pl, int story)
{
	int x=2, y=8;
	int go;
	system("cls");
	HalfConsole();
	UnderConsole();
	Gotoxy(62, 3); setColor(White, Black); printf("이름 : %s", pl.name);
	Gotoxy(62, 1); setColor(White, Black); printf("층 : %d층", story);
	for (int i = 1; i < 17; i++)
	{
		Gotoxy(52, i); setColor(Yellow, Black); printf("☆");
	}
	while (1)
	{
		int space = 0;
		Gotoxy(x, y); setColor(White, Black); printf("○");
		go = getch();
		switch (go)
		{
		case UP:
			Gotoxy(x, y); setColor(White, Black); printf("  ");
			y--;
			break;
		case DOWN:
			Gotoxy(x, y); setColor(White, Black); printf("  ");
			y++;
			break;
		case LEFT:
			Gotoxy(x, y); setColor(White, Black); printf("  ");
			x -= 2;
			break;
		case RIGHT:
			Gotoxy(x, y); setColor(White, Black); printf("  ");
			x += 2;
			break;
		case SPACE:
			space++;
			break;
		default:
			break;
		}
		if (space > 0 && x==50)
		{
			int why;
			Gotoxy(2, 19); setColor(White, Black); printf("??? : 크와ㅏㅏㅏㅏㅏㅏ아ㅗ아ㅗ아ㅗㅇ앙");
			getch();
			Gotoxy(2, 20); setColor(White, Black); printf("??? : 크릉르으으으으으르르ㅡ를");
			getch();
			UnderConsoleCls();
			Gotoxy(2, 19); setColor(White, Black); printf("System ; 몬스터가 앞에 있다");
			getch();
			Gotoxy(2, 20); setColor(White, Black); printf("System ; 건들여 보시겠습니까?");
			getch();
			why = Select();
			if (why == 1)
			{
				Monster(pl);
			}
			else
			{
				system("cls");
				Final(pl, story);
			}
		}
		if (x < 2)
		{
			x = 2;
		}
		else if (y < 1)
		{
			y = 1;
		}
		else if (y > 16)
		{
			y = 16;
		}
		else if (x > 50)
		{
			x = 50;
		}
		space = 0;
	}
}