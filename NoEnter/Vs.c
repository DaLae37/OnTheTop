#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include <time.h>
#include "Console.h"
#include "GameTool.h"
#include "Player.h"
#include "Tutorial.h"
#include "GameMain.h"
int VS()
{
	int a, b, c, d;
	srand((unsigned int)time(NULL));
	a = rand() % 10 + 1;
	while (1)
	{
		if (a == 1 || a == 2 || a == 8)
		{
			b = rand() % 100 + 1;
			c = rand() % 100 + 1;
			Gotoxy(2, 19); setColor(White, Black); printf("system : %d + %d =  ",b,c);
			scanf("%d", &d);
			if (d == b + c)
			{
				UnderConsoleCls();
				return 1;
			}
			else
			{
				Gotoxy(2, 20); setColor(White, Black); printf("system : 틀렸습니다 다시 시작합니다");
				getch();
				UnderConsoleCls();
				continue;
			}
		}
		else if (a == 6 || a == 7 || a == 9)
		{
			b = rand() % 100 + 1;
			c = rand() % 100 + 1;
			if (b < c)
			{
				continue;
			}
			Gotoxy(2, 19); setColor(White, Black); printf("System : %d - %d =  ",b,c);
			scanf("%d", &d);
			if (d == b - c)
			{
				UnderConsoleCls();
				return 1;
			}
			else
			{
				Gotoxy(2, 20); setColor(White, Black); printf("System : 틀렸습니다 다시 시작합니다");
				UnderConsoleCls();
				getch();
				continue;
			}
		}
		else if (a == 3)
		{
			b = rand() % 100 + 1;
			c = rand() % 100 + 1;
			if (b < c)
			{
				continue;
			}
			Gotoxy(2, 19); setColor(White, Black); printf("System : %d / %d =  ", b, c);
			scanf("%d", &d);
			if (d == b / c)
			{
				UnderConsoleCls();
				return 1;
			}
			else
			{
				Gotoxy(2, 20); setColor(White, Black); printf("System : 틀렸습니다 다시 시작합니다");
				UnderConsoleCls();
				getch();
				continue;
			}
		}
		else if (a == 4 || a == 5 || a == 6)
		{
			b = rand() % 100 + 1;
			c = rand() % 100 + 1;
			Gotoxy(2, 19); setColor(White, Black); printf("System : %d * %d =  ", b, c);
			scanf("%d", &d);
			if (d == b * c)
			{
				UnderConsoleCls();
				return 1;
			}
			else
			{
				Gotoxy(2, 20); setColor(White, Black); printf("System : 틀렸습니다 다시 시작합니다");
				UnderConsoleCls();
				getch();
				continue;
			}
		}
		else if(a==10)
		{
			UnderConsoleCls();
			return 1;
		}
	}
}

int Nonsense(Player pl)
{
	char a[10];
	int b, c, d;
	srand((unsigned int)time(NULL));
	b = rand() % 15 + 1;
	while (1)
	{
		UnderConsoleCls();
		if (b == 1)
		{
			Gotoxy(2, 19); setColor(White, Black); printf("System : 세상에서 가장 똑똑한 새는?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "하버드") == 0)
			{
				UnderConsoleCls();
				return 1;
			}
			else
			{
				UnderConsoleCls();
				continue;
			}
		}
		else if (b == 2)
		{
			Gotoxy(2, 19); setColor(White, Black); printf("System : 닭의 나이는?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "닭살") == 0)
			{
				UnderConsoleCls();
				return 1;
			}
			else
			{
				UnderConsoleCls();
				continue;
			}
		}
		else if (b == 3)
		{
			Gotoxy(2, 19); setColor(White, Black); printf("System : 신사들이 하는 인사말은?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "신사임당") == 0)
			{
				UnderConsoleCls();
				return 1;
			}
			else
			{
				UnderConsoleCls();
				continue;
			}
		}
		else if (b == 4)
		{
			Gotoxy(2, 19); setColor(White, Black); printf("System : 감이 전쟁터에 나가서 죽으면?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "감전사") == 0)
			{
				UnderConsoleCls();
				return 1;
			}
			else
			{
				UnderConsoleCls();
				continue;
			}
		}
		else if (b == 5)
		{
			Gotoxy(2, 19); setColor(White, Black); printf("System : 산타클로스가 싫어하는 음식은?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "울면") == 0)
			{
				UnderConsoleCls();
				return 1;
			}
			else
			{
				UnderConsoleCls();
				continue;
			}
		}
		else if (b == 6)
		{
			Gotoxy(2, 19); setColor(White, Black); printf("System : 오른손으로 절대 잡을 수 없는 것은?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "오른손") == 0)
			{
				UnderConsoleCls();
				return 1;
			}
			else
			{
				UnderConsoleCls();
				continue;
			}
		}
		else if (b == 7)
		{
			Gotoxy(2, 19); setColor(White, Black); printf("System : 물고기의 반댓말은?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "불고기") == 0)
			{
				UnderConsoleCls();
				return 1;
			}
			else
			{
				UnderConsoleCls();
				continue;
			}
		}
		else if (b == 8)
		{
			Gotoxy(2, 19); setColor(White, Black); printf("System : 오리를 생으로 먹으면?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "회오리") == 0)
			{
				UnderConsoleCls();
				return 1;
			}
			else
			{
				UnderConsoleCls();
				continue;
			}
		}
		else if (b == 9)
		{
			Gotoxy(2, 19); setColor(White, Black); printf("System : 맥주가 죽기전에 남긴말은?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "유언비어") == 0)
			{
				UnderConsoleCls();
				return 1;
			}
			else
			{
				UnderConsoleCls();
				continue;
			}
		}
		else if (b == 10)
		{
			Gotoxy(2, 19); setColor(White, Black); printf("System : 할아버지들이 가장 좋아하는 돈은");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "할머니") == 0)
			{
				UnderConsoleCls();
				return 1;
			}
			else
			{
				UnderConsoleCls();
				continue;
			}
		}
		else if (b == 11)
		{
			Gotoxy(2, 19); setColor(White, Black); printf("System : 길에서 음식을 주으면?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "푸드득") == 0)
			{
				UnderConsoleCls();
				return 1;
			}
			else
			{
				UnderConsoleCls();
				continue;
			}
		}
		else if (b == 12)
		{
			Gotoxy(2, 19); setColor(White, Black); printf("System : 차두리가 불에 타면?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "두리번") == 0)
			{
				UnderConsoleCls();
				return 1;
			}
			else
			{
				UnderConsoleCls();
				continue;
			}
		}
		else if (b == 13)
		{
			Gotoxy(2, 19); setColor(White, Black); printf("System : 너의 이름은?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, pl.name) == 0)
			{
				UnderConsoleCls();
				return 1;
			}
			else
			{
				UnderConsoleCls();
				continue;
			}
		}
		else if (b == 14)
		{
			Gotoxy(2, 19); setColor(White, Black); printf("System : 세상에서 가장 얻기 힘든 것은?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "코딩실력") == 0)
			{
				UnderConsoleCls();
				return 1;
			}
			else
			{
				UnderConsoleCls();
				continue;
			}
		}
		else if (b == 15)
		{
			Gotoxy(2, 19); setColor(White, Black); printf("System : 제작자의 이름은?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "이한수") == 0)
			{
				UnderConsoleCls();
				return 1;
			}
			else
			{
				UnderConsoleCls();
				continue;
			}
		}
	}

}
int Luck(Player pl)
{
	int a, b, c;
	srand((unsigned)time(NULL));
	b = rand() % 2 + 1;
	if (b == 1)
	{
		c = VS();
		return c;
	}
	else
	{
		c = Nonsense(pl);
		return c;
	}
}
void SelectVs(Player pl)
{
	srand((unsigned int)time(NULL));
	int a,b,c,d,e;
	int abc = 0;
	int myhp = 100;
	int monhp = 100;
	int x = 1;
	int move=1;
	int go;
	while (1)
	{
		UnderConsoleCls();
		if (myhp > 100)
		{
			myhp = 100;
		}
		if (myhp <= 0)
		{
			int ok;
			Gotoxy(60, 1); setColor(White, Black); printf("            ");
			Gotoxy(60, 1); setColor(White, Black); printf("내 체력: %3d", myhp);
			getch();
			Gotoxy(2, 19); setColor(White, Black); printf("몬스터와 전투에서 패배했습니다");
			getch();
			Gotoxy(2, 20); setColor(White, Black); printf("다시 도전하시겠습니까?");
			getch();
			system("cls");
			Console();
			ok=Select();
			if (ok == 1)
			{
				Final(pl, 10);
			}
			else
			{
				return;
			}
		}
		else if (monhp <= 0)
		{
			Gotoxy(60, 3); setColor(White, Black); printf("            ");
			Gotoxy(60, 3); setColor(White, Black); printf("몬스터 체력: %3d", monhp);
			getch();
			Gotoxy(2, 19); setColor(White, Black); printf("몬스터와 전투에서 승리하였습니다!");
			getch();
			break;
		}
		Gotoxy(60, 1); setColor(White, Black); printf("            ");
		Gotoxy(60, 1); setColor(White, Black); printf("내 체력: %3d", myhp);
		Gotoxy(60, 3); setColor(White, Black); printf("            ");
		Gotoxy(60, 3); setColor(White, Black); printf("몬스터 체력: %3d", monhp);
		int space = 0;
		switch (move)
		{
		case 1:
			Gotoxy(3, 20); setColor(SkyBlue, White); printf("┌──────────────────┐");
			Gotoxy(3, 21); setColor(SkyBlue, White); printf("│                  │");
			Gotoxy(3, 22); setColor(SkyBlue, White); printf("│      공 격       │");
			Gotoxy(3, 23); setColor(SkyBlue, White); printf("│                  │");
			Gotoxy(3, 24); setColor(SkyBlue, White); printf("└──────────────────┘");
			Gotoxy(26, 20); setColor(Black, White); printf("┌──────────────────┐");
			Gotoxy(26, 21); setColor(Black, White); printf("│                  │");
			Gotoxy(26, 22); setColor(Black, White); printf("│      방 어       │");
			Gotoxy(26, 23); setColor(Black, White); printf("│                  │");
			Gotoxy(26, 24); setColor(Black, White); printf("└──────────────────┘");
			Gotoxy(50, 20); setColor(Black, White); printf("┌──────────────────┐");
			Gotoxy(50, 21); setColor(Black, White); printf("│                  │");
			Gotoxy(50, 22); setColor(Black, White); printf("│      회 복       │");
			Gotoxy(50, 23); setColor(Black, White); printf("│                  │");
			Gotoxy(50, 24); setColor(Black, White); printf("└──────────────────┘");
			break;
		case 2:
			Gotoxy(3, 20); setColor(Black, White); printf("┌──────────────────┐");
			Gotoxy(3, 21); setColor(Black, White); printf("│                  │");
			Gotoxy(3, 22); setColor(Black, White); printf("│      공 격       │");
			Gotoxy(3, 23); setColor(Black, White); printf("│                  │");
			Gotoxy(3, 24); setColor(Black, White); printf("└──────────────────┘");
			Gotoxy(26, 20); setColor(SkyBlue, White); printf("┌──────────────────┐");
			Gotoxy(26, 21); setColor(SkyBlue, White); printf("│                  │");
			Gotoxy(26, 22); setColor(SkyBlue, White); printf("│      방 어       │");
			Gotoxy(26, 23); setColor(SkyBlue, White); printf("│                  │");
			Gotoxy(26, 24); setColor(SkyBlue, White); printf("└──────────────────┘");
			Gotoxy(50, 20); setColor(Black, White); printf("┌──────────────────┐");
			Gotoxy(50, 21); setColor(Black, White); printf("│                  │");
			Gotoxy(50, 22); setColor(Black, White); printf("│      회 복       │");
			Gotoxy(50, 23); setColor(Black, White); printf("│                  │");
			Gotoxy(50, 24); setColor(Black, White); printf("└──────────────────┘");
			break;
		case 3:
			Gotoxy(3, 20); setColor(Black, White); printf("┌──────────────────┐");
			Gotoxy(3, 21); setColor(Black, White); printf("│                  │");
			Gotoxy(3, 22); setColor(Black, White); printf("│      공 격       │");
			Gotoxy(3, 23); setColor(Black, White); printf("│                  │");
			Gotoxy(3, 24); setColor(Black, White); printf("└──────────────────┘");
			Gotoxy(26, 20); setColor(Black, White); printf("┌──────────────────┐");
			Gotoxy(26, 21); setColor(Black, White); printf("│                  │");
			Gotoxy(26, 22); setColor(Black, White); printf("│      방 어       │");
			Gotoxy(26, 23); setColor(Black, White); printf("│                  │");
			Gotoxy(26, 24); setColor(Black, White); printf("└──────────────────┘");
			Gotoxy(50, 20); setColor(SkyBlue, White); printf("┌──────────────────┐");
			Gotoxy(50, 21); setColor(SkyBlue, White); printf("│                  │");
			Gotoxy(50, 22); setColor(SkyBlue, White); printf("│      회 복       │");
			Gotoxy(50, 23); setColor(SkyBlue, White); printf("│                  │");
			Gotoxy(50, 24); setColor(SkyBlue, White); printf("└──────────────────┘");
			break;
		default:
			break;
		}
		go = getch();
		if (go == '1')
		{
			break;
		}
		if (go ==SPACE)
		{
			a = rand() % 6 + 1;
			b = rand() % 2 + 1;
			c = rand() % 10 + 1;
			d = rand() % 10 + 7;
			e = rand() % 5 + 7;
			do
			{
				d = rand() % 9 + 7;
			} while (e > d);
			if (move == 1)
			{
				if (b == 1)
				{
					if (c == 10)
					{
						e = +4;
					}
					monhp -= e;
					myhp -= d;
					UnderConsoleCls();
					Gotoxy(2, 19); setColor(White, Black); printf("나의 체력이 %d 만큼 깎였다", d);
					getch();
					Gotoxy(2, 19); setColor(White, Black); printf("몬스터의 체력이 %d만큼 깎였다", e);
					getch();
				}
				else if (b == 2)
				{
					monhp -= e;
					myhp -= d;
					UnderConsoleCls();
					Gotoxy(2, 19); setColor(White, Black); printf("나의 체력이 %d 만큼 깎였다", d);
					getch();
					Gotoxy(2, 19); setColor(White, Black); printf("몬스터의 체력이 %d만큼 깎였다", e);
					getch();
				}
			}
			else if(move == 2)
			{
				UnderConsoleCls();
				if (b == 1)
				{
					if (a == 1 || a == 2 || a== 3)
					{
						Gotoxy(2, 19); setColor(White, Black); printf("몬스터의 공격을 막아냈다!");
						getch();
						Gotoxy(2, 19); setColor(White, Black); printf("회복 할 기회가 1번 더 생겼다!");
						getch();
						abc--;
					}
					else
					{
						Gotoxy(2, 19); setColor(White, Black); printf("몬스터의 공격을 막기 실패해 %d 만큼의 피해를 입었다", d);
						myhp -= d;
						getch();
					}
				}
				else if (b == 2)
				{
					Gotoxy(2, 19); setColor(White, Black); printf("둘 다 방어자세를 취해 아무런 피해도 없었다!");
					getch();
				}
			}
			else if (move == 3)
			{
				UnderConsoleCls();
				if (abc == 3)
				{
					Gotoxy(2, 19); setColor(White, Black); printf("회복은 3번만 가능합니다!");
					getch();
					continue;
				}
				Gotoxy(2, 19); setColor(White, Black); printf("체력이 %d 만큼 회복되었다!", e);
				myhp += e;
				getch();
				abc++;
			}
		}
		if (go == RIGHT)
		{
			move++;
		}
		else if (go == LEFT)
		{
			move--;
		}
		if (move > 3)
		{
			move = 3;
		}
		else if (move < 1)
		{
			move = 1;
		}
	}
	FinalStory(pl);
	return;
}