#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "input.h"
int RandomNumber()
{
	//いつものrand関数
	//rand関数をするときはstdlib.hが大事
	return rand() % 10;
}
//InputNumber関数はユーザーから数字を入力してもらう関数
int InputNumber()
{
	int number;
	printf("数字を入力してください: ");
	//scanfだとエラー発生するからscanf_sを使うらしい
	scanf_s("%d", &number);
	//受け付けた数字をmainに返す
	return number;
}

