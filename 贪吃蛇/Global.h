#pragma once
#include "Snack.h"
//ȫ�ֱ���//
int score = 0, add = 10;//�ܵ÷���ÿ�γ�ʳ��÷֡�
int status, sleeptime = 200;//ÿ�����е�ʱ����
snake *head, *food;//��ͷָ�룬ʳ��ָ��
snake *q;//�����ߵ�ʱ���õ���ָ��
int endgamestatus = 0; //��Ϸ�����������1��ײ��ǽ��2��ҧ���Լ���3�������˳���Ϸ��

//�ߵ�״̬��U���� ��D���£�L:�� R����
#define U 1
#define D 2
#define L 3 
#define R 4 

