#pragma once
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include "Console.h"
#include "GameTool.h"
#include "Tutorial.h"
#include "GameMain.h"
void Story(Player pl)
{
	Console();
	ConsoleCls();
	Gotoxy(2, 1); setColor(Violet, Black); printf("     .:::::.........");
	Gotoxy(2, 2); setColor(Violet, Black); printf("   =+=:::.....   ......");
	Gotoxy(2, 3); setColor(Violet, Black); printf(" :*+==::::...     .....:.");
	Gotoxy(2, 4); setColor(Violet, Black); printf(".#++====::::...........::.");
	Gotoxy(2, 5); setColor(Violet, Black); printf("=#*+++====::::::::::::::=.");
	Gotoxy(2, 6); setColor(Violet, Black); printf(" ##*++++======::::::::===");
	Gotoxy(2, 7); setColor(Violet, Black); printf("  +##**+++++=========++=");
	Gotoxy(2, 8); setColor(Violet, Black); printf("   :+####**********+:");
	Gotoxy(2, 9); setColor(Violet, Black); printf("       .:::===::.");
	Gotoxy(2, 10); setColor(White, Black); printf("%s : ���� �ٷ� ���� ���̷�!", pl.name);
	getch();
	Gotoxy(2, 11); setColor(White, Black); printf("%s : �ϰ�? ����� �������ٸ� �˾Ҵ� ���� ��¥�� �����Ѵٴ�....", pl.name);
	getch();									    
	Gotoxy(2, 12); setColor(White, Black); printf("%s : ��! �� ���� ��� ������� ���� �˷���߰ڳ�", pl.name);
	getch();									 
	Gotoxy(2, 13); setColor(White, Black); printf("%s : ��.... �Ƹ� ���� ���б� �������ž�", pl.name);
	getch();
	Gotoxy(2, 14); setColor(White, Black); printf("%s : �� ���б��� ģ���� ������ �� ȥ�ڿ���", pl.name);
	getch();
	Gotoxy(2, 15); setColor(White, Black); printf("%s : �б������� ������ ȥ�ڿ��� ��� �ϱ����� ������������", pl.name);
	getch();
	Gotoxy(2, 16); setColor(White, Black); printf("%s : �̾߱Ⱑ ��� ������ �����ȳ�.... �� �׷��� ������ �̾߱� �߾���?", pl.name);
	getch();
	Gotoxy(2, 17); setColor(White, Black); printf("%s : �¾� �� ��� ���̾���, �׶��� �ϱ����̾����ž� ���������� ȥ�ڿ���", pl.name);
	getch();
	Gotoxy(2, 18); setColor(White, Black); printf("%s : �ƹ� �������� �ȴ� �� �տ� �� �� �ϳ��� �����ִ� ���� ���ԵȰž�", pl.name);
	getch();
	Gotoxy(2, 19); setColor(White, Black); printf("%s : ó������ �౸���ΰ� �ͱ⵵ �߾��µ� ������ ���� ���� �۽� ���ΰž�!", pl.name);
	getch();
	Gotoxy(2, 20); setColor(White, Black); printf("%s : �ű��ϱ⵵ �ϰ� �� ���ΰ� �ñ��ϱ⵵ �ؼ� ì�ܼ� ������ ����", pl.name);
	getch();
	StoryA(pl);
}

void StoryA(Player pl)
{
	system("cls");
	Console();
	Gotoxy(2, 1); setColor(White, Black); printf("%s : ���� �����ͼ� �ڼ��� ���� �ѹ��� �� ���� ���� ���̾���", pl.name);
	getch();
	Gotoxy(2, 2); setColor(White, Black); printf("%s : �ٽ� �ΰ� �ñ� ������ ������ �� �Ʊ��⵵ �ϰ� �׷������", pl.name);
	getch();
	Gotoxy(2, 3); setColor(White, Black); printf("%s : ���� ��ȭ�������� ���� �̷����� §! �ϰ� �� �¾�� ���ݾ�", pl.name);
	getch();
	Gotoxy(2, 4); setColor(White, Black); printf("%s : Ȥ�ó� �ؼ� ��ȭ�⿡ 1���� ���� ������", pl.name);
	getch();
	Gotoxy(2, 5); setColor(White, Black); printf("%s : �׷����� ��¥ §! �ϰ� ���� �¾�� ����!!", pl.name);
	getch();
	Gotoxy(2, 6); setColor(White, Black); printf("%s : �ϱ����� �ʾҾ� ���� �� ���� ��ȭ�ϸ����� ������ ���ߴ� ���̾�", pl.name);
	getch();
	Gotoxy(2, 7); setColor(White, Black); printf("%s : ó������ ���� ���� ���� �����̱淡 ���� �ϰ� �־���", pl.name);
	getch();
	Gotoxy(2, 8); setColor(White, Black); printf("%s : �ϴ� ����� �Ǻο���, �װ͵� ��û �ܴ��ϴ����", pl.name);
	getch();
	Gotoxy(2, 9); setColor(White, Black); printf("%s : �� ���� �� ������ ������ �� ���� ����", pl.name);
	getch();
	Gotoxy(2, 10); setColor(White, Black); printf("%s : ��ó�� ���� �޸� ������ �ƴϸ鼭 ����ó�� ���� ��������", pl.name);
	getch();
	Gotoxy(2, 11); setColor(White, Black); printf("%s : �ű⿡ �Ӹ��� �԰����� �޷��ְ� ª�� ������ �־���", pl.name);
	getch();
	Gotoxy(2, 12); setColor(White, Black); printf("%s : �հ��� 4���� ���ð� ������ ����", pl.name);
	getch();
	Gotoxy(2, 13); setColor(White, Black); printf("%s : �׷� �¾�... �װ� ���̾�", pl.name);
	getch();
	Gotoxy(2, 14); setColor(White, Black); printf("%s : �� �ѹ��� ���������� ������ ���� ��", pl.name);
	getch();
	StoryB(pl);
}

void StoryB(Player pl)
{
	system("cls");
	Console();
	ConsoleCls();
	Gotoxy(2, 1); setColor(Yellow, Black); printf("                 ;I~          I;;:~.`.:;Iio");
	Gotoxy(2, 2); setColor(Yellow, Black); printf("               ~I I          `;  .I===I;==");
	Gotoxy(2, 3); setColor(Yellow, Black); printf("              :~ .I          E===Io8+. .I");
	Gotoxy(2, 4); setColor(Yellow, Black); printf("            ::;~=;i         Ii iI   `=E=                     .");
	Gotoxy(2, 5); setColor(Yellow, Black); printf("       .=I`      ::;.    ::I  #  .I;                    .~o.");
	Gotoxy(2, 6); setColor(Yellow, Black); printf("        i:            .=  .:=   `O:I~..~~;;;:i+          ;`;~");
	Gotoxy(2, 7); setColor(Yellow, Black); printf("       o  .      ~::;:~=i~::.  ;;O=~ ;``   .oi         :I Io");
	Gotoxy(2, 8); setColor(Yellow, Black); printf("      +  I+     I  :  I: `I~ ~O;:  I=:I::;;=;        ~I` I`:");
	Gotoxy(2, 9); setColor(Yellow, Black); printf("     i.Io.;`    i  ~::;   :=I; .;I: =.: +;.I        I.  +.+");
	Gotoxy(2, 10); setColor(Yellow, Black); printf("    ;.=: ;=     `i  :I    =~:;:`   ~;;.I;Oi       I;   :  i");
	Gotoxy(2, 11); setColor(Yellow, Black); printf("    I 8=8:        ;=~      ;       OoI.      `::;:    ``~.=");
	Gotoxy(2, 12); setColor(Yellow, Black); printf("   I .MM`   `;;~           ~:::;;~E=~:;;;~~::.        ~. +");
	Gotoxy(2, 13); setColor(Yellow, Black); printf("   . ~+   I=+ +`                 :`                  .  `I");
	Gotoxy(2, 14); setColor(Yellow, Black); printf("  .      +  oi                                      .;~`+");
	Gotoxy(2, 15); setColor(Yellow, Black); printf("  ;     =::;.       `+~.                           ;~  ;.");
	Gotoxy(2, 16); setColor(Yellow, Black); printf(" `:                =I.I.iI                      `:I:.`I`");
	Gotoxy(2, 17); setColor(Yellow, Black); printf("  ;             `~.  `:`=    ;::~~            I;I  ~=~");
	Gotoxy(2, 18); setColor(Yellow, Black); printf("  `;:;;;::~~~~..`  `:.::   ;=~ `: .:::+::     i ~=: i");
	Gotoxy(2, 19); setColor(Yellow, Black); printf("              .o:::. I`  :=   :::i:~`~:=      i.    +");
	Gotoxy(2, 20); setColor(Yellow, Black); printf("                ::Ii~ .II`          ``.`i`    `=    i");
	Gotoxy(2, 21); setColor(Yellow, Black); printf("               .IiI:;;.                  :I;`  i`    +");
	Gotoxy(2, 22); setColor(Yellow, Black); printf("               ``                           ~;;:Eo:;:;I");
	getch();
	StoryC(pl);
}

void StoryC(Player pl)
{
	system("cls");
	Console();
	Gotoxy(2, 1); setColor(White, Black); printf("%s : �ٷ� �̷� ���̾���!", pl.name);
	getch();
	Gotoxy(2, 2); setColor(White, Black); printf("%s : ������ ó������ �����⵵ �ϰ� ����⵵�߾�", pl.name);
	getch();
	Gotoxy(2, 3); setColor(White, Black); printf("%s : �׷��� ���� �׷������� �����", pl.name);
	getch();
	Gotoxy(2, 4); setColor(White, Black); printf("%s : �� ���� �� ģ���� �Ǿ��� �� ���� ������....", pl.name);
	getch();
	Gotoxy(2, 5); setColor(White, Black); printf("%s : ���� ���� �ֿ� �� �� �̷� ���� �ٷ����� �ƴѰ�....", pl.name);
	getch();
	Gotoxy(2, 6); setColor(White, Black); printf("%s : ���ڱ� ���������� �� ���� �� ���Ⱦ� ����", pl.name);
	getch();
	Gotoxy(2, 7); setColor(White, Black); printf("%s : �� �ڷ� ���� ���� �־���", pl.name);
	getch();
	Gotoxy(2, 8); setColor(White, Black); printf("%s : ���� �� ģ���� �̸��� �뱼�̶� �������", pl.name);
	getch();
	Gotoxy(2, 9); setColor(White, Black); printf("%s : �ٵ� �ֿϵ����� ó�� �Ծ����� �� �̸� �����ִ� ��ó�� ���̾�", pl.name);
	getch();
	Gotoxy(2, 10); setColor(White, Black); printf("%s : �ֿϵ����̶� �ϱ� �� �׷����� ���� �ٸ��� �θ� ���� ���...", pl.name);
	getch();
	Gotoxy(2, 11); setColor(White, Black); printf("%s : ���� �������� �׷��� ������ ������ ���ϴ� �� ���Ҿ�", pl.name);
	getch();
	Gotoxy(2, 12); setColor(White, Black); printf("%s : ���� �� �̺ҿ� �Ƿʸ� �� �� ����� ���� �Ϳ�����", pl.name);
	getch();
	Gotoxy(2, 13); setColor(White, Black); printf("%s : Ȥ�� �ʴ� �̷� ���� �غ��� �־�? ���� �� ������?", pl.name);
	getch();
	Gotoxy(2, 14); setColor(White, Black); printf("%s : �ǿܷ� �������� �Դ� �����̳� ����� ��� ������ �� �Դ����", pl.name);
	getch();
	Gotoxy(2, 15); setColor(White, Black); printf("%s : �� �ΰ��� ���̰� ��¥�� �°� ���� ����� �� ����", pl.name);
	getch();
	Gotoxy(2, 16); setColor(White, Black); printf("%s : ��ɰ�� ���� ��� ������ �߷��� �� ����", pl.name);
	getch();
	Gotoxy(2, 17); setColor(White, Black); printf("%s : ���, ����, ä��, ���� ��� ������ ���� �͵��� ����", pl.name);
	getch();
	Gotoxy(2, 18); setColor(White, Black); printf("%s : �׷����� �ٸ��� �ȸ԰� ���� �߿� ����� �Դ����", pl.name);
	getch();
	Gotoxy(2, 19); setColor(White, Black); printf("%s : �� �ķδ� ���� �ϱ��濡 ���忡 ����� ��� 3���� �簡�� ���", pl.name);
	getch();
	Gotoxy(2, 20); setColor(White, Black); printf("%s : ���� ��� �����ε�.... �ƹ�ư �� ������ ����� ���Ҿ�", pl.name);
	getch();
	StoryD(pl);
}
void StoryD(Player pl)
{
	system("cls");
	Console();
	Gotoxy(2, 1); setColor(White, Black); printf("%s : �׷��� ���� ���� ������, ����� �뱼�̵� ���� Ŀ����", pl.name);
	getch();
	Gotoxy(2, 2); setColor(White, Black); printf("%s : ���� ������ �ĴڰŸ� �� �ִ���� (��� ���� ��������!)", pl.name);
	getch();
	Gotoxy(2, 3); setColor(White, Black); printf("%s : ���� ��å�� �� �� �ְ�(��� �������� ô �ؾ�������)", pl.name);
	getch();
	Gotoxy(2, 4); setColor(White, Black); printf("%s : �㿡�� ���� ������ �ڱ⵵ ����(���� �ֱ� ũ������)", pl.name);
	getch();
	Gotoxy(2, 5); setColor(White, Black); printf("%s : ���п� �Ϸ� �Ϸ簡 ��̿�����", pl.name);
	getch();
	Gotoxy(2, 6); setColor(White, Black); printf("%s : �б������� �ֿϵ����� Ű��� ��� ģ������� ģ������", pl.name);
	getch();
	Gotoxy(2, 7); setColor(White, Black); printf("%s : ���� �ູ�߰� �뱼�� �����̶�� ������ �����", pl.name);
	getch();
	Gotoxy(2, 8); setColor(White, Black); printf("%s : �׷��� �� �ູ�� �׸� ª�� ���� ���� ������....", pl.name);
	getch();
	Gotoxy(2, 9); setColor(White, Black); printf("%s : �뱼�̰� �¾�� 6������ �Ǿ��� ������", pl.name);
	getch();
	Gotoxy(2, 10); setColor(White, Black); printf("%s : ����� �����ΰ� �뱼�̰� ���� �������", pl.name);
	getch();
	Gotoxy(2, 11); setColor(White, Black); printf("%s : �㿡 �߶��� �����Ÿ��� �Ҹ��� ����(ó���� �Ჿ������ �˾Ҿ�)", pl.name);
	getch();
	Gotoxy(2, 12); setColor(White, Black); printf("%s : ���� �Ჿ�뿴���� ���� �ῡ�� �� �͵� �뼭�� �� �� ����", pl.name);
	getch();
	Gotoxy(2, 13); setColor(White, Black); printf("%s : ���°ſ��ٴ�... ���� ���ʹ��Ŷ��....", pl.name);
	getch();
	Gotoxy(2, 14); setColor(White, Black); printf("%s : �Ѱ��� ����� �ʹ� ���ڱ� �� ���°ſ��� �뱼��?", pl.name);
	getch();
	Gotoxy(2, 15); setColor(White, Black); printf("%s : �ƹ�ư �׶��� ���� ��Ȳ�ؼ� �������������� ������ �� �߾�", pl.name);
	getch();
	Gotoxy(2, 16); setColor(White, Black); printf("%s : ������ ������ ���⸦ ���� �Ϸ� �Ϸ簡 �귯����", pl.name);
	getch();
	Gotoxy(2, 17); setColor(White, Black); printf("%s : ������ �� �ٶ����� �޸� ���� �� ���´� ��ȭ�Ǿ���", pl.name);
	getch();
	Gotoxy(2, 18); setColor(White, Black); printf("%s : ���� ���ῡ ���� ��å�� ���������� �پ� ��� ���� �����߾��µ�", pl.name);
	getch();
	Gotoxy(2, 19); setColor(White, Black); printf("%s : ������ ��� ���� �����̴� �� ���� ���� �� ����...", pl.name);
	getch();
	Gotoxy(2, 20); setColor(White, Black); printf("%s : �뱼�̸� ���� �� ���� ã�ٰ� � �ҹ��� ��� ���", pl.name);
	getch();
	StoryF(pl);
}
void StoryF(Player pl)
{
	system("cls");
	Console();
	Gotoxy(2, 1); setColor(White, DarkSkyBlue); printf(";;;;;;;;;;;;;;;;;;;;:;;;;;;;;;");
	Gotoxy(2, 2); setColor(White, DarkSkyBlue); printf(";;;;;;;;;;;;;;;;;;::;M####=:;;");
	Gotoxy(2, 3); setColor(White, DarkSkyBlue); printf(";;;;;;;;;;;;;;;;::+88EEEE#;;;;");
	Gotoxy(2, 4); setColor(White, DarkSkyBlue); printf(";;;;;;;;;;;;;;;;i=8##EEEE#;;;;");
	Gotoxy(2, 5); setColor(White, DarkSkyBlue); printf(";;;;;;;;;;;;;::;MM+~=#EEE#;;;;");
	Gotoxy(2, 6); setColor(White, DarkSkyBlue); printf(";;;;;;;;;;;::iM#;I::=#EEEE:;;;");
	Gotoxy(2, 7); setColor(White, DarkSkyBlue); printf(";;;;;;;;;::88o+i::+88#EE#E:;;;");
	Gotoxy(2, 8); setColor(White, DarkSkyBlue); printf(";;;;;;;:Ii=8Oo::;:o##OOOOO:;;;");
	Gotoxy(2, 9); setColor(White, DarkSkyBlue); printf(";;;;;;;;i##I::;;;:oEE:::::;;;;");
	Gotoxy(2, 10); setColor(White, DarkSkyBlue); printf(";;;::~E#EoO;;=OOoOooO#M=::;;;;");
	Gotoxy(2, 11); setColor(White, DarkSkyBlue); printf(";;:=88OO+II++oooooooooo88O:;;;");
	Gotoxy(2, 12); setColor(White, DarkSkyBlue); printf(":::=##Oo+;;ooooooooooooEE8::::");
	Gotoxy(2, 13); setColor(White, DarkSkyBlue); printf("IIII#EOooII+oooooo+++oo8EoIIII");
	Gotoxy(2, 14); setColor(White, DarkSkyBlue); printf("8888EEOooooooooooo=;IooEEE8888");
	Gotoxy(2, 15); setColor(White, DarkSkyBlue); printf("EEEEE8OoooooooooOO=;IooE8EEEEE");
	Gotoxy(2, 16); setColor(White, DarkSkyBlue); printf("EEEEEEEEEooooooo:;iooEEE8EEEEE");
	Gotoxy(2, 17); setColor(White, DarkSkyBlue); printf("EEEEEEEEE88EOEOE8oE8EEEEEEEEEE");
	Gotoxy(2, 18); setColor(White, DarkSkyBlue); printf("EEEEEEEEE##########E#EEEEEEEEE");
	Gotoxy(2, 19); setColor(White, DarkSkyBlue); printf("EEEEEEEEEEEEEEEEEEEEEEEEEEEEEE");
	getch();
	StoryE(pl);
}

void StoryE(Player pl)
{
	int a;
	system("cls");
	Console();
	Gotoxy(2, 1); setColor(White, Black); printf("���� �� ���� �������� ������ ���� ������ ���� ž �ϳ��� �־���");
	getch();
	Gotoxy(2, 2); setColor(White, Black); printf("�� ž ����� ������ ��� ���̵� �����Ѵٴ� ������ġ���� �ִٴ� �ҹ��̾���");
	getch();
	Gotoxy(2, 3); setColor(White, Black); printf("�� ���� �뱼�̸� �츱 �� �ִٸ� ��� ���̵��� �� �� �� �ִٰ� ������ �����");
	getch();
	Gotoxy(2, 4); setColor(White, Black); printf("�ٷ� �� ž�� �ִ� ������ ã�ư���");
	getch();
	Gotoxy(2, 5); setColor(White, Black); printf("�׷��� ���� ž �Ա��� �ٴٶ����� �̷� ������ �����");
	getch();
	Gotoxy(2, 6); setColor(White, Black); printf("���� �� ž�� ���� ��� ���� ���� ������?");
	getch();
	Gotoxy(2, 7); setColor(White, Black); printf("������ ������ó�� �Ҿ ���� �η�������");
	getch();
	Gotoxy(2, 8); setColor(White, Black); printf("ó���� ž���� ���ߴ� ���� �������� �޸� �η����� �� �߸��� ��� ���Ҿ�");
	getch();
	Gotoxy(2, 9); setColor(White, Black); printf("�°� �ڱ��ո��� ���μӿ� ������ ���ƿ���");
	getch();
	Gotoxy(2, 10); setColor(White, Black); printf("������ �� �η��� ������ ���ļ� �����ִ� �뱼�̸� ���� �������");
	getch();
	Gotoxy(2, 11); setColor(White, Black); printf("�뱼�� ���� ���� ���ʹ� ���� �̸� ������ ��� �ִµ�");
	getch();
	Gotoxy(2, 12); setColor(White, Black); printf("���� �� ������ ������ �ϰ� �ִ°ű���....");
	getch();
	Gotoxy(2, 13); setColor(White, Black); printf("�� ��������� �� �̾߱��");
	getch();
	Gotoxy(2, 14); setColor(White, Black); printf("�׸��� ���� ž���� ���� ���̰�");
	getch();
	Gotoxy(2, 15); setColor(White, Black); printf("�������� ������ ������ ������ �� ������");
	getch();
	Gotoxy(2, 16); setColor(White, Black); printf("Ȥ�� ���� �Բ� �� �� �� �ִ�?");
	getch();
	system("cls");
	Console();
	a = Select();
	if (a == 1)
	{
		Gotoxy(2, 19); setColor(White, Black); printf("���� �׷� �ٷ� ��� ����!");
		getch();
		GameMain(pl);
	}
	else
	{
		Gotoxy(2, 19); setColor(White, Black); printf("��¿ �� ����.... �׷� �� ȥ�ڶ� ���߰ھ�");
		getch();
		Gotoxy(2, 19); setColor(White, Black); printf("�� �� �̾߱� ����༭ ������ �׷� �̸�!");
		getch();
		return;
	}
}
void Clear()
{
	Gotoxy(2, 19); setColor(White, Black); printf("���� : ������ġ���� �ʿ��Ͻʴϱ�?");
	getch();
	Gotoxy(2, 20); setColor(White, Black); printf("���� : �ҹ��� ����Դϴ�! ������ �� �� �������");
	getch();
	Gotoxy(2, 21); setColor(White, Black); printf("���� : ���� ���濡 �̿ϼ� �� ������ �����ֽ��ϴ�");
	getch();
	Gotoxy(2, 22); setColor(White, Black); printf("���� : �� ������ ���� ���ø� �˴ϴ�");
	getch();
	Gotoxy(2, 23); setColor(White, Black); printf("���� : �ϼ���Ű�� ����� �����մϴ� ���࿡ ���� ���常 ������ �˴ϴ�!");
	getch();
}
void FinalStory(Player pl)
{
	int a;
	HalfConsole();
	system("cls");
	UnderConsole();
	Gotoxy(2, 19); setColor(White, Black); printf("System : ���Ͱ� �ִ� �ڸ��� ���̰� �������ִ�");
	getch();
	Gotoxy(2, 20); setColor(White, Black); printf("System : �о� ���ðڽ��ϱ�?");
	getch();
	a = Select();
	UnderConsoleCls();
	if (a == 1)
	{
		Clear();
	}
	else
	{
		Gotoxy(2, 19); setColor(White, Black); printf("System : �ƹ����� �о�߸� �� �� ����");
		getch();
		Gotoxy(2, 20); setColor(White, Black); printf("System : ���̸� �ֿ� �о���");
		getch();
		UnderConsoleCls();
		Clear();
	}
	system("cls");
	Console();
	Gotoxy(2, 1); setColor(White, Black); printf("%s : ���� �����̶��.... ��......", pl.name);
	getch();
	Gotoxy(2, 2); setColor(White, Black); printf("%s : �뱼��..... �̾���.... �̾���.. �̾�.......", pl.name);
	getch();
	Gotoxy(2, 3); setColor(White, Black); printf("%s : �̾���........................................", pl.name);
	getch();
	system("cls");
	Sleep(1000);
	 Gotoxy(5, 5); setColor(White, Black); printf("�������    ��          ��     ���   ");
	 Gotoxy(5, 6); setColor(White, Black); printf("��              ���        ��     ��  ��       ");
	 Gotoxy(5, 7); setColor(White, Black); printf("��              �� ��       ��     ��    ��       ");
	 Gotoxy(5, 8); setColor(White, Black); printf("��              ��  ��      ��     ��     ��     ");
	 Gotoxy(5, 9); setColor(White, Black); printf("�������    ��   ��     ��     ��     ��	 ");
	Gotoxy(5, 10); setColor(White, Black); printf("��              ��    ��    ��     ��     ��	   ");
	Gotoxy(5, 11); setColor(White, Black); printf("��              ��     ��   ��     ��    ��       ");
	Gotoxy(5, 12); setColor(White, Black); printf("��              ��      ��  ��     ��  ��		 ");
	Gotoxy(5, 13); setColor(White, Black); printf("�������    ��       ���      ���          ");
	getch();
	exit(1);
}
