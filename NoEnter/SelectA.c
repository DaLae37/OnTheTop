#pragma once
#include <stdio.h>
#include <conio.h>
#include "GameTool.h"

int Select()
{
	int enter = 1;
	int select = 1;
	char key;
	while (enter == 1)
	{
		switch (select)
		{
		case 1:
			setColor(Black, White); Gotoxy(33, 5); printf("¢ºYes");
			setColor(Black, White); Gotoxy(33, 8); printf("  No");
			break;
		case 2:
			setColor(Black, White); Gotoxy(33, 5); printf("  Yes");
			setColor(Black, White); Gotoxy(33, 8); printf("¢ºNo");
			break;
		default:
			break;
		}
		Gotoxy(0, 0);
		setColor(0, 0);
		key = getch();
		switch (key)
		{
		case UP:
			if (select >= 0);
			select--;
			break;
		case DOWN:
			if (select <= 3);
			select++;
			break;
		case ENTER:
			enter++;
			break;
		default:
			break;
		}
	}
	if (select == 1)
	{
		setColor(Black, Black); Gotoxy(33, 5); printf("			");
		setColor(Black, Black); Gotoxy(33, 8); printf("			");
		return 1;
	}
	else if (select == 2)
	{
		setColor(Black, Black); Gotoxy(33, 5); printf("			");
		setColor(Black, Black); Gotoxy(33, 8); printf("			");
		return 2;
	}
}