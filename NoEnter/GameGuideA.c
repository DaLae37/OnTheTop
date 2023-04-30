#pragma once
#include <stdio.h>
#include <conio.h>
#include "GameTool.h"
#include "Console.h"
#include "Main.h"
void GameGuide()
{
	Console();
	Gotoxy(2, 1); setColor(White, Black); printf("○ 주인공");
	Gotoxy(2, 2); setColor(White, Black); printf("◎ 포탈");
	Gotoxy(2, 3); setColor(White, Black); printf("★ 몬스터");
	Gotoxy(2, 5); setColor(White, Black); printf("제가 처음 만든 게임이라 다소 스토리와 진행 방식이 어색할 수 있습니다");
	Gotoxy(2, 6); setColor(White, Black); printf("Made By DaLae37");
	getch();
	MainA();
}