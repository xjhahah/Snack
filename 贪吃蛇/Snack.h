#pragma once
#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>

typedef struct SNAKE //�����һ���ڵ�
{
	int x;
	int y;
	struct SNAKE *next;
}snake;


//����ȫ������//
void Pos(int x,int y);
void creatMap();
void initsnake();
int biteself();
void createfood();
void cantcrosswall();
void snakemove();
void pause();
void gamecontrol();
void WelcomeToGame();
void endgame();
void gamestart();

