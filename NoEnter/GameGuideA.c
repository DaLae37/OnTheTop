#pragma once
#include <stdio.h>
#include <conio.h>
#include "GameTool.h"
#include "Console.h"
#include "Main.h"
void GameGuide()
{
	Console();
	Gotoxy(2, 1); setColor(White, Black); printf("�� ���ΰ�");
	Gotoxy(2, 2); setColor(White, Black); printf("�� ��Ż");
	Gotoxy(2, 3); setColor(White, Black); printf("�� ����");
	Gotoxy(2, 5); setColor(White, Black); printf("���� ó�� ���� �����̶� �ټ� ���丮�� ���� ����� ����� �� �ֽ��ϴ�");
	Gotoxy(2, 6); setColor(White, Black); printf("Made By DaLae37");
	getch();
	MainA();
}