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
	Gotoxy(2, 10); setColor(White, Black); printf("%s : 저게 바로 용의 알이래!", pl.name);
	getch();
	Gotoxy(2, 11); setColor(White, Black); printf("%s : 믿겨? 상상의 동물인줄만 알았던 용이 진짜로 존재한다니....", pl.name);
	getch();									    
	Gotoxy(2, 12); setColor(White, Black); printf("%s : 아! 저 알을 어디서 얻었는지 먼저 알려줘야겠네", pl.name);
	getch();									 
	Gotoxy(2, 13); setColor(White, Black); printf("%s : 음.... 아마 내가 중학교 때였을거야", pl.name);
	getch();
	Gotoxy(2, 14); setColor(White, Black); printf("%s : 난 중학교때 친구가 없었어 늘 혼자였지", pl.name);
	getch();
	Gotoxy(2, 15); setColor(White, Black); printf("%s : 학교에서는 언제나 혼자였고 등교와 하교역시 마찬가지였지", pl.name);
	getch();
	Gotoxy(2, 16); setColor(White, Black); printf("%s : 이야기가 잠시 옆으로 새버렸네.... 자 그러면 어디까지 이야기 했었지?", pl.name);
	getch();
	Gotoxy(2, 17); setColor(White, Black); printf("%s : 맞아 알 얘기 중이었지, 그때가 하굣길이었을거야 언제나같이 혼자였지", pl.name);
	getch();
	Gotoxy(2, 18); setColor(White, Black); printf("%s : 아무 생각없이 걷다 집 앞에 저 알 하나가 놓여있는 것을 보게된거야", pl.name);
	getch();
	Gotoxy(2, 19); setColor(White, Black); printf("%s : 처음에는 축구공인가 싶기도 했었는데 가까이 가서 보니 글쎄 알인거야!", pl.name);
	getch();
	Gotoxy(2, 20); setColor(White, Black); printf("%s : 신기하기도 하고 뭔 알인가 궁금하기도 해서 챙겨서 집으로 갔지", pl.name);
	getch();
	StoryA(pl);
}

void StoryA(Player pl)
{
	system("cls");
	Console();
	Gotoxy(2, 1); setColor(White, Black); printf("%s : 집에 가져와서 자세히 보니 한번도 본 적이 없는 알이었어", pl.name);
	getch();
	Gotoxy(2, 2); setColor(White, Black); printf("%s : 다시 두고 올까 생각도 했지만 좀 아깝기도 하고 그러더라고", pl.name);
	getch();
	Gotoxy(2, 3); setColor(White, Black); printf("%s : 보통 만화같은데서 보면 이런데서 짠! 하고 뭐 태어나곤 하잖아", pl.name);
	getch();
	Gotoxy(2, 4); setColor(White, Black); printf("%s : 혹시나 해서 부화기에 1주일 정도 놔봤지", pl.name);
	getch();
	Gotoxy(2, 5); setColor(White, Black); printf("%s : 그랬더니 진짜 짠! 하고 뭐가 태어난거 있지!!", pl.name);
	getch();
	Gotoxy(2, 6); setColor(White, Black); printf("%s : 믿기지가 않았어 나도 저 알이 변화하리라고는 생각도 못했단 말이야", pl.name);
	getch();
	Gotoxy(2, 7); setColor(White, Black); printf("%s : 처음에는 낯이 익지 않은 생물이길래 뭔가 하고 있었어", pl.name);
	getch();
	Gotoxy(2, 8); setColor(White, Black); printf("%s : 일단 노란색 피부였어, 그것도 엄청 단단하더라고", pl.name);
	getch();
	Gotoxy(2, 9); setColor(White, Black); printf("%s : 그 다음 내 눈길을 끈것은 두 개의 날개", pl.name);
	getch();
	Gotoxy(2, 10); setColor(White, Black); printf("%s : 새처럼 깃털 달린 날개는 아니면서 박쥐처럼 얇은 날개였지", pl.name);
	getch();
	Gotoxy(2, 11); setColor(White, Black); printf("%s : 거기에 머리엔 뿔같은게 달려있고 짧은 꼬리도 있었어", pl.name);
	getch();
	Gotoxy(2, 12); setColor(White, Black); printf("%s : 손가락 4개에 가늘고 뾰족한 손톱", pl.name);
	getch();
	Gotoxy(2, 13); setColor(White, Black); printf("%s : 그래 맞아... 그건 용이야", pl.name);
	getch();
	Gotoxy(2, 14); setColor(White, Black); printf("%s : 단 한번도 본적없었던 상상속의 동물 용", pl.name);
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
	Gotoxy(2, 1); setColor(White, Black); printf("%s : 바로 이런 용이었어!", pl.name);
	getch();
	Gotoxy(2, 2); setColor(White, Black); printf("%s : 솔직히 처음에는 무섭기도 하고 놀랍기도했어", pl.name);
	getch();
	Gotoxy(2, 3); setColor(White, Black); printf("%s : 그런데 문득 그런생각이 들더라", pl.name);
	getch();
	Gotoxy(2, 4); setColor(White, Black); printf("%s : 저 용이 내 친구가 되어줄 수 있지 않을까....", pl.name);
	getch();
	Gotoxy(2, 5); setColor(White, Black); printf("%s : 내가 알을 주워 올 때 이런 것을 바랬던건 아닌가....", pl.name);
	getch();
	Gotoxy(2, 6); setColor(White, Black); printf("%s : 갑자기 울컥해져서 그 용을 꽉 껴안아 줬지", pl.name);
	getch();
	Gotoxy(2, 7); setColor(White, Black); printf("%s : 그 뒤로 많은 일이 있었어", pl.name);
	getch();
	Gotoxy(2, 8); setColor(White, Black); printf("%s : 먼저 그 친구의 이름을 용굴이라 지어줬어", pl.name);
	getch();
	Gotoxy(2, 9); setColor(White, Black); printf("%s : 다들 애완동물을 처음 입양했을 때 이름 지어주는 것처럼 말이야", pl.name);
	getch();
	Gotoxy(2, 10); setColor(White, Black); printf("%s : 애완동물이라 하긴 좀 그렇지만 딱히 다르게 부를 말도 없어서...", pl.name);
	getch();
	Gotoxy(2, 11); setColor(White, Black); printf("%s : 말은 못하지만 그래도 나랑은 마음이 통하는 것 같았어", pl.name);
	getch();
	Gotoxy(2, 12); setColor(White, Black); printf("%s : 가끔 내 이불에 실례를 할 때 빼고는 정말 귀여웠지", pl.name);
	getch();
	Gotoxy(2, 13); setColor(White, Black); printf("%s : 혹시 너는 이런 생각 해본적 있어? 용은 뭘 먹을까?", pl.name);
	getch();
	Gotoxy(2, 14); setColor(White, Black); printf("%s : 의외로 강아지들 먹는 개껌이나 고양이 사료 같은건 안 먹더라고", pl.name);
	getch();
	Gotoxy(2, 15); setColor(White, Black); printf("%s : 저 두개의 먹이가 퇴짜를 맞고 나서 고민을 좀 했지", pl.name);
	getch();
	Gotoxy(2, 16); setColor(White, Black); printf("%s : 고심고심 끝에 몇가지 음식을 추려서 줘 봤지", pl.name);
	getch();
	Gotoxy(2, 17); setColor(White, Black); printf("%s : 고기, 우유, 채소, 과일 등등 맛있을 만한 것들을 줬지", pl.name);
	getch();
	Gotoxy(2, 18); setColor(White, Black); printf("%s : 그랬더니 다른건 안먹고 과일 중에 사과만 먹더라고", pl.name);
	getch();
	Gotoxy(2, 19); setColor(White, Black); printf("%s : 그 후로는 매일 하굣길에 시장에 들려서 사과 3개씩 사가게 됬어", pl.name);
	getch();
	Gotoxy(2, 20); setColor(White, Black); printf("%s : 나는 사과 질색인데.... 아무튼 잘 먹으니 기분은 좋았어", pl.name);
	getch();
	StoryD(pl);
}
void StoryD(Player pl)
{
	system("cls");
	Console();
	Gotoxy(2, 1); setColor(White, Black); printf("%s : 그렇게 여러 날이 지났어, 어느덧 용굴이도 제법 커졌어", pl.name);
	getch();
	Gotoxy(2, 2); setColor(White, Black); printf("%s : 이제 날개도 파닥거릴 수 있더라고 (비록 날진 못하지만!)", pl.name);
	getch();
	Gotoxy(2, 3); setColor(White, Black); printf("%s : 같이 산책도 할 수 있고(비록 강아지인 척 해야하지만)", pl.name);
	getch();
	Gotoxy(2, 4); setColor(White, Black); printf("%s : 밤에는 같이 누워서 자기도 했지(아직 애기 크기지만)", pl.name);
	getch();
	Gotoxy(2, 5); setColor(White, Black); printf("%s : 덕분에 하루 하루가 즐겁웠었지", pl.name);
	getch();
	Gotoxy(2, 6); setColor(White, Black); printf("%s : 학교에서도 애완동물을 키우는 몇몇 친구들과도 친해졌어", pl.name);
	getch();
	Gotoxy(2, 7); setColor(White, Black); printf("%s : 모든게 행복했고 용굴이 덕분이라는 생각이 들었지", pl.name);
	getch();
	Gotoxy(2, 8); setColor(White, Black); printf("%s : 그런데 그 행복이 그리 짧을 줄은 미쳐 몰랐어....", pl.name);
	getch();
	Gotoxy(2, 9); setColor(White, Black); printf("%s : 용굴이가 태어난지 6개월쯤 되었을 때였지", pl.name);
	getch();
	Gotoxy(2, 10); setColor(White, Black); printf("%s : 어느날 부터인가 용굴이가 힘이 없어보였어", pl.name);
	getch();
	Gotoxy(2, 11); setColor(White, Black); printf("%s : 밤에 잘때고 끙끙거리는 소리를 내고(처음엔 잠꼬대인줄 알았어)", pl.name);
	getch();
	Gotoxy(2, 12); setColor(White, Black); printf("%s : 차라리 잠꼬대였으면 내가 잠에서 깬 것도 용서가 할 수 있지", pl.name);
	getch();
	Gotoxy(2, 13); setColor(White, Black); printf("%s : 아픈거였다니... 많이 아팠던거라니....", pl.name);
	getch();
	Gotoxy(2, 14); setColor(White, Black); printf("%s : 한가지 물어보고 싶다 갑자기 왜 아픈거였니 용굴아?", pl.name);
	getch();
	Gotoxy(2, 15); setColor(White, Black); printf("%s : 아무튼 그때는 정말 당황해서 동물병원에까지 데려갈 뻔 했어", pl.name);
	getch();
	Gotoxy(2, 16); setColor(White, Black); printf("%s : 간신히 참으며 낫기를 빌며 하루 하루가 흘러갔지", pl.name);
	getch();
	Gotoxy(2, 17); setColor(White, Black); printf("%s : 하지만 내 바람과는 달리 점점 더 상태는 악화되었어", pl.name);
	getch();
	Gotoxy(2, 18); setColor(White, Black); printf("%s : 매일 저녁에 같이 산책을 나갈정도로 뛰어 노는 것을 좋아했었는데", pl.name);
	getch();
	Gotoxy(2, 19); setColor(White, Black); printf("%s : 지금은 잠시 몸을 움직이는 것 조차 힘든 것 같아...", pl.name);
	getch();
	Gotoxy(2, 20); setColor(White, Black); printf("%s : 용굴이를 낫게 할 약을 찾다가 어떤 소문을 듣게 됬어", pl.name);
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
	Gotoxy(2, 1); setColor(White, Black); printf("마을 뒤 편에는 오랬동안 쓰이지 않은 무섭게 생긴 탑 하나가 있었지");
	getch();
	Gotoxy(2, 2); setColor(White, Black); printf("그 탑 꼭대기 층에는 모든 병이든 낫게한다는 만병통치제가 있다는 소문이었어");
	getch();
	Gotoxy(2, 3); setColor(White, Black); printf("그 때는 용굴이를 살릴 수 있다면 모든 것이든지 다 할 수 있다고 생각이 들었어");
	getch();
	Gotoxy(2, 4); setColor(White, Black); printf("바로 그 탑이 있는 곳으로 찾아갔지");
	getch();
	Gotoxy(2, 5); setColor(White, Black); printf("그런데 문득 탑 입구에 다다랐을때 이런 생각이 들었지");
	getch();
	Gotoxy(2, 6); setColor(White, Black); printf("내가 이 탑에 들어가면 살아 나올 수는 있을까?");
	getch();
	Gotoxy(2, 7); setColor(White, Black); printf("걱정은 눈덩이처럼 불어나 점차 두려워졌지");
	getch();
	Gotoxy(2, 8); setColor(White, Black); printf("처음에 탑으로 향했던 당찬 다짐과는 달리 두려움이 내 발목을 잡고 말았어");
	getch();
	Gotoxy(2, 9); setColor(White, Black); printf("온갖 자기합리와 위로속에 집으로 돌아왔지");
	getch();
	Gotoxy(2, 10); setColor(White, Black); printf("하지만 그 두려움 마저도 아파서 누워있는 용굴이를 보자 사라졌지");
	getch();
	Gotoxy(2, 11); setColor(White, Black); printf("용굴이 덕에 많이 아팠던 내가 이리 멀쩡히 살고 있는데");
	getch();
	Gotoxy(2, 12); setColor(White, Black); printf("나는 내 은인을 버리려 하고 있는거구나....");
	getch();
	Gotoxy(2, 13); setColor(White, Black); printf("자 여기까지가 내 이야기야");
	getch();
	Gotoxy(2, 14); setColor(White, Black); printf("그리고 지금 탑으로 가는 중이고");
	getch();
	Gotoxy(2, 15); setColor(White, Black); printf("아직까지 조금은 무서워 하지만 가 보려고");
	getch();
	Gotoxy(2, 16); setColor(White, Black); printf("혹시 나와 함께 가 줄 수 있니?");
	getch();
	system("cls");
	Console();
	a = Select();
	if (a == 1)
	{
		Gotoxy(2, 19); setColor(White, Black); printf("고마워 그럼 바로 출발 하자!");
		getch();
		GameMain(pl);
	}
	else
	{
		Gotoxy(2, 19); setColor(White, Black); printf("어쩔 수 없지.... 그럼 나 혼자라도 가야겠어");
		getch();
		Gotoxy(2, 19); setColor(White, Black); printf("내 긴 이야기 들어줘서 고마웠어 그럼 이만!");
		getch();
		return;
	}
}
void Clear()
{
	Gotoxy(2, 19); setColor(White, Black); printf("종이 : 만병통치제가 필요하십니까?");
	getch();
	Gotoxy(2, 20); setColor(White, Black); printf("종이 : 소문은 사실입니다! 하지만 반 쯤 사실이죠");
	getch();
	Gotoxy(2, 21); setColor(White, Black); printf("종이 : 여기 옆방에 미완성 된 물약이 놓여있습니다");
	getch();
	Gotoxy(2, 22); setColor(White, Black); printf("종이 : 그 물약을 가져 가시면 됩니다");
	getch();
	Gotoxy(2, 23); setColor(White, Black); printf("종이 : 완성시키는 방법은 간단합니다 물약에 용의 심장만 넣으면 됩니다!");
	getch();
}
void FinalStory(Player pl)
{
	int a;
	HalfConsole();
	system("cls");
	UnderConsole();
	Gotoxy(2, 19); setColor(White, Black); printf("System : 몬스터가 있던 자리에 종이가 떨어져있다");
	getch();
	Gotoxy(2, 20); setColor(White, Black); printf("System : 읽어 보시겠습니까?");
	getch();
	a = Select();
	UnderConsoleCls();
	if (a == 1)
	{
		Clear();
	}
	else
	{
		Gotoxy(2, 19); setColor(White, Black); printf("System : 아무래도 읽어야만 할 거 같다");
		getch();
		Gotoxy(2, 20); setColor(White, Black); printf("System : 종이를 주워 읽었다");
		getch();
		UnderConsoleCls();
		Clear();
	}
	system("cls");
	Console();
	Gotoxy(2, 1); setColor(White, Black); printf("%s : 용의 심장이라니.... 용......", pl.name);
	getch();
	Gotoxy(2, 2); setColor(White, Black); printf("%s : 용굴아..... 미안해.... 미안해.. 미안.......", pl.name);
	getch();
	Gotoxy(2, 3); setColor(White, Black); printf("%s : 미안해........................................", pl.name);
	getch();
	system("cls");
	Sleep(1000);
	 Gotoxy(5, 5); setColor(White, Black); printf("■■■■■■    ■          ■     ■■   ");
	 Gotoxy(5, 6); setColor(White, Black); printf("■              ■■        ■     ■  ■       ");
	 Gotoxy(5, 7); setColor(White, Black); printf("■              ■ ■       ■     ■    ■       ");
	 Gotoxy(5, 8); setColor(White, Black); printf("■              ■  ■      ■     ■     ■     ");
	 Gotoxy(5, 9); setColor(White, Black); printf("■■■■■■    ■   ■     ■     ■     ■	 ");
	Gotoxy(5, 10); setColor(White, Black); printf("■              ■    ■    ■     ■     ■	   ");
	Gotoxy(5, 11); setColor(White, Black); printf("■              ■     ■   ■     ■    ■       ");
	Gotoxy(5, 12); setColor(White, Black); printf("■              ■      ■  ■     ■  ■		 ");
	Gotoxy(5, 13); setColor(White, Black); printf("■■■■■■    ■       ■■      ■■          ");
	getch();
	exit(1);
}
