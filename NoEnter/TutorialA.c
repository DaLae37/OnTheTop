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
	Gotoxy(2, 19); setColor(White, Black); printf("System : 이름을 입력해 주세요 : ");
	scanf("%s", pl.name);
	fflush(stdin);
	TutorialA_A(pl);
}
int choise;
void TutorialA_A(Player pl)
{
	system("cls");
	UnderConsole();
	Gotoxy(2, 19); setColor(White, Black); printf("%s : 안녕?", pl.name);
	getch();
	Gotoxy(2, 20); setColor(White, Black); printf("%s : 혹시 내 이야기좀 들어 줄 수 있니?", pl.name);
	getch();
	choise = Select();
	if (choise == 1)
	{
		Gotoxy(2, 21); setColor(White, Black); printf("%s : 정말 고마워 아! 그런데 혹시 게임 가이드는 읽고왔니?", pl.name);
		getch();
		choise = Select();
		if (choise == 1)
		{
			Gotoxy(2, 22); setColor(White, Black); printf("%s : 자 그러면 이야기 시작할게", pl.name);
			getch();
			Story(pl);
		}
		else
		{
			Gotoxy(2, 22); setColor(White, Black); printf("%s : 그럼 이야기에 앞서 먼저 설명해 줄게", pl.name);
			getch();
			ConsoleCls();
			GameGuide();
		}
	}
	else
	{
		Gotoxy(2, 21); setColor(White, Black); printf("%s : 그렇구나.....", pl.name);
		getch();
		Gotoxy(2, 22); setColor(White, Black); printf("%s : 그럼 다음번에라도 꼭 들려줘!", pl.name);
		getch();
		MainA();
	}
}