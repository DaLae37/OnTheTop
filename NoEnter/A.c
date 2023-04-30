#pragma once
#include <Windows.h>
#include <stdio.h>
#include "Main.h"
#include "GameTool.h"
int main()
{
	system("title On the Top");
	system("mode con: cols=80 lines=27 ");
	fflush(stdin);
	MainA();

	return 0;
}