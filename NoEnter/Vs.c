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
				Gotoxy(2, 20); setColor(White, Black); printf("system : Ʋ�Ƚ��ϴ� �ٽ� �����մϴ�");
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
				Gotoxy(2, 20); setColor(White, Black); printf("System : Ʋ�Ƚ��ϴ� �ٽ� �����մϴ�");
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
				Gotoxy(2, 20); setColor(White, Black); printf("System : Ʋ�Ƚ��ϴ� �ٽ� �����մϴ�");
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
				Gotoxy(2, 20); setColor(White, Black); printf("System : Ʋ�Ƚ��ϴ� �ٽ� �����մϴ�");
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
			Gotoxy(2, 19); setColor(White, Black); printf("System : ���󿡼� ���� �ȶ��� ����?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "�Ϲ���") == 0)
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
			Gotoxy(2, 19); setColor(White, Black); printf("System : ���� ���̴�?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "�߻�") == 0)
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
			Gotoxy(2, 19); setColor(White, Black); printf("System : �Ż���� �ϴ� �λ縻��?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "�Ż��Ӵ�") == 0)
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
			Gotoxy(2, 19); setColor(White, Black); printf("System : ���� �����Ϳ� ������ ������?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "������") == 0)
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
			Gotoxy(2, 19); setColor(White, Black); printf("System : ��ŸŬ�ν��� �Ⱦ��ϴ� ������?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "���") == 0)
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
			Gotoxy(2, 19); setColor(White, Black); printf("System : ���������� ���� ���� �� ���� ����?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "������") == 0)
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
			Gotoxy(2, 19); setColor(White, Black); printf("System : ������� �ݴ���?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "�Ұ��") == 0)
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
			Gotoxy(2, 19); setColor(White, Black); printf("System : ������ ������ ������?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "ȸ����") == 0)
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
			Gotoxy(2, 19); setColor(White, Black); printf("System : ���ְ� �ױ����� ���主��?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "������") == 0)
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
			Gotoxy(2, 19); setColor(White, Black); printf("System : �Ҿƹ������� ���� �����ϴ� ����");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "�ҸӴ�") == 0)
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
			Gotoxy(2, 19); setColor(White, Black); printf("System : �濡�� ������ ������?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "Ǫ���") == 0)
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
			Gotoxy(2, 19); setColor(White, Black); printf("System : ���θ��� �ҿ� Ÿ��?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "�θ���") == 0)
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
			Gotoxy(2, 19); setColor(White, Black); printf("System : ���� �̸���?");
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
			Gotoxy(2, 19); setColor(White, Black); printf("System : ���󿡼� ���� ��� ���� ����?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "�ڵ��Ƿ�") == 0)
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
			Gotoxy(2, 19); setColor(White, Black); printf("System : �������� �̸���?");
			scanf("%s", a);
			fflush(stdin);
			if (strcmp(a, "���Ѽ�") == 0)
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
			Gotoxy(60, 1); setColor(White, Black); printf("�� ü��: %3d", myhp);
			getch();
			Gotoxy(2, 19); setColor(White, Black); printf("���Ϳ� �������� �й��߽��ϴ�");
			getch();
			Gotoxy(2, 20); setColor(White, Black); printf("�ٽ� �����Ͻðڽ��ϱ�?");
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
			Gotoxy(60, 3); setColor(White, Black); printf("���� ü��: %3d", monhp);
			getch();
			Gotoxy(2, 19); setColor(White, Black); printf("���Ϳ� �������� �¸��Ͽ����ϴ�!");
			getch();
			break;
		}
		Gotoxy(60, 1); setColor(White, Black); printf("            ");
		Gotoxy(60, 1); setColor(White, Black); printf("�� ü��: %3d", myhp);
		Gotoxy(60, 3); setColor(White, Black); printf("            ");
		Gotoxy(60, 3); setColor(White, Black); printf("���� ü��: %3d", monhp);
		int space = 0;
		switch (move)
		{
		case 1:
			Gotoxy(3, 20); setColor(SkyBlue, White); printf("����������������������������������������");
			Gotoxy(3, 21); setColor(SkyBlue, White); printf("��                  ��");
			Gotoxy(3, 22); setColor(SkyBlue, White); printf("��      �� ��       ��");
			Gotoxy(3, 23); setColor(SkyBlue, White); printf("��                  ��");
			Gotoxy(3, 24); setColor(SkyBlue, White); printf("����������������������������������������");
			Gotoxy(26, 20); setColor(Black, White); printf("����������������������������������������");
			Gotoxy(26, 21); setColor(Black, White); printf("��                  ��");
			Gotoxy(26, 22); setColor(Black, White); printf("��      �� ��       ��");
			Gotoxy(26, 23); setColor(Black, White); printf("��                  ��");
			Gotoxy(26, 24); setColor(Black, White); printf("����������������������������������������");
			Gotoxy(50, 20); setColor(Black, White); printf("����������������������������������������");
			Gotoxy(50, 21); setColor(Black, White); printf("��                  ��");
			Gotoxy(50, 22); setColor(Black, White); printf("��      ȸ ��       ��");
			Gotoxy(50, 23); setColor(Black, White); printf("��                  ��");
			Gotoxy(50, 24); setColor(Black, White); printf("����������������������������������������");
			break;
		case 2:
			Gotoxy(3, 20); setColor(Black, White); printf("����������������������������������������");
			Gotoxy(3, 21); setColor(Black, White); printf("��                  ��");
			Gotoxy(3, 22); setColor(Black, White); printf("��      �� ��       ��");
			Gotoxy(3, 23); setColor(Black, White); printf("��                  ��");
			Gotoxy(3, 24); setColor(Black, White); printf("����������������������������������������");
			Gotoxy(26, 20); setColor(SkyBlue, White); printf("����������������������������������������");
			Gotoxy(26, 21); setColor(SkyBlue, White); printf("��                  ��");
			Gotoxy(26, 22); setColor(SkyBlue, White); printf("��      �� ��       ��");
			Gotoxy(26, 23); setColor(SkyBlue, White); printf("��                  ��");
			Gotoxy(26, 24); setColor(SkyBlue, White); printf("����������������������������������������");
			Gotoxy(50, 20); setColor(Black, White); printf("����������������������������������������");
			Gotoxy(50, 21); setColor(Black, White); printf("��                  ��");
			Gotoxy(50, 22); setColor(Black, White); printf("��      ȸ ��       ��");
			Gotoxy(50, 23); setColor(Black, White); printf("��                  ��");
			Gotoxy(50, 24); setColor(Black, White); printf("����������������������������������������");
			break;
		case 3:
			Gotoxy(3, 20); setColor(Black, White); printf("����������������������������������������");
			Gotoxy(3, 21); setColor(Black, White); printf("��                  ��");
			Gotoxy(3, 22); setColor(Black, White); printf("��      �� ��       ��");
			Gotoxy(3, 23); setColor(Black, White); printf("��                  ��");
			Gotoxy(3, 24); setColor(Black, White); printf("����������������������������������������");
			Gotoxy(26, 20); setColor(Black, White); printf("����������������������������������������");
			Gotoxy(26, 21); setColor(Black, White); printf("��                  ��");
			Gotoxy(26, 22); setColor(Black, White); printf("��      �� ��       ��");
			Gotoxy(26, 23); setColor(Black, White); printf("��                  ��");
			Gotoxy(26, 24); setColor(Black, White); printf("����������������������������������������");
			Gotoxy(50, 20); setColor(SkyBlue, White); printf("����������������������������������������");
			Gotoxy(50, 21); setColor(SkyBlue, White); printf("��                  ��");
			Gotoxy(50, 22); setColor(SkyBlue, White); printf("��      ȸ ��       ��");
			Gotoxy(50, 23); setColor(SkyBlue, White); printf("��                  ��");
			Gotoxy(50, 24); setColor(SkyBlue, White); printf("����������������������������������������");
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
					Gotoxy(2, 19); setColor(White, Black); printf("���� ü���� %d ��ŭ �𿴴�", d);
					getch();
					Gotoxy(2, 19); setColor(White, Black); printf("������ ü���� %d��ŭ �𿴴�", e);
					getch();
				}
				else if (b == 2)
				{
					monhp -= e;
					myhp -= d;
					UnderConsoleCls();
					Gotoxy(2, 19); setColor(White, Black); printf("���� ü���� %d ��ŭ �𿴴�", d);
					getch();
					Gotoxy(2, 19); setColor(White, Black); printf("������ ü���� %d��ŭ �𿴴�", e);
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
						Gotoxy(2, 19); setColor(White, Black); printf("������ ������ ���Ƴ´�!");
						getch();
						Gotoxy(2, 19); setColor(White, Black); printf("ȸ�� �� ��ȸ�� 1�� �� �����!");
						getch();
						abc--;
					}
					else
					{
						Gotoxy(2, 19); setColor(White, Black); printf("������ ������ ���� ������ %d ��ŭ�� ���ظ� �Ծ���", d);
						myhp -= d;
						getch();
					}
				}
				else if (b == 2)
				{
					Gotoxy(2, 19); setColor(White, Black); printf("�� �� ����ڼ��� ���� �ƹ��� ���ص� ������!");
					getch();
				}
			}
			else if (move == 3)
			{
				UnderConsoleCls();
				if (abc == 3)
				{
					Gotoxy(2, 19); setColor(White, Black); printf("ȸ���� 3���� �����մϴ�!");
					getch();
					continue;
				}
				Gotoxy(2, 19); setColor(White, Black); printf("ü���� %d ��ŭ ȸ���Ǿ���!", e);
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