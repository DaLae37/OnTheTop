#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include "GameTool.h"
#include "Player.h"
#include "Console.h"
#include "Main.h"
#include "GameMain.h"
#include "MadeBY.h"
#include "GameGuide.h"
#include "Tutorial.h"
void Tutorial()
{
	Player pl;
	UnderConsole();
	Gotoxy(2, 19); setColor(White, Black); printf("System : �̸��� �Է��� �ּ��� : ");
	scanf("%s", pl.name);
	fflush(stdin);
	TutorialA_A(pl);
}
int choise;
void TutorialA_A(Player pl)
{
	system("cls");
	UnderConsole();
	Gotoxy(2, 19); setColor(White, Black); printf("%s : �ȳ�?", pl.name);
	getch();
	Gotoxy(2, 20); setColor(White, Black); printf("%s : Ȥ�� �� �̾߱��� ��� �� �� �ִ�?", pl.name);
	getch();
	choise = Select();
	if (choise == 1)
	{
		Gotoxy(2, 21); setColor(White, Black); printf("%s : ���� ���� ��! �׷��� Ȥ�� ���� ���̵�� �а�Դ�?", pl.name);
		getch();
		choise = Select();
		if (choise == 1)
		{
			Gotoxy(2, 22); setColor(White, Black); printf("%s : �� �׷��� �̾߱� �����Ұ�", pl.name);
			getch();
			Story(pl);
		}
		else
		{
			Gotoxy(2, 22); setColor(White, Black); printf("%s : �׷� �̾߱⿡ �ռ� ���� ������ �ٰ�", pl.name);
			getch();
			ConsoleCls();
			GameGuide();
		}
	}
	else
	{
		Gotoxy(2, 21); setColor(White, Black); printf("%s : �׷�����.....", pl.name);
		getch();
		Gotoxy(2, 22); setColor(White, Black); printf("%s : �׷� ���������� �� �����!", pl.name);
		getch();
		MainA();
	}
}