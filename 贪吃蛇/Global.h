#pragma once
#include "Snack.h"
//全局变量//
int score = 0, add = 10;//总得分与每次吃食物得分。
int status, sleeptime = 200;//每次运行的时间间隔
snake *head, *food;//蛇头指针，食物指针
snake *q;//遍历蛇的时候用到的指针
int endgamestatus = 0; //游戏结束的情况，1：撞到墙；2：咬到自己；3：主动退出游戏。

//蛇的状态，U：上 ；D：下；L:左 R：右
#define U 1
#define D 2
#define L 3 
#define R 4 

