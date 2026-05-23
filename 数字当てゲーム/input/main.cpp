#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "input.h"
#include "judge.h"
int main()
{
	printf("数字当てゲーム\n");
	printf("0～9の数字を当ててください\n");
	//  srand関数を呼び出してランダム生成、時間を引数にすることで完全ランダムを実現
	srand((unsigned int)time(NULL));
	//RandomNumber関数を呼び出して、0～9の数字をランダムに生成
	int target = RandomNumber();
	//atempts変数を宣言して、試行回数をカウント
	int attempts = 0;
	//isCorrect変数を宣言して、正解かどうかを判定
	bool isCorrect = false;
	//isCorrectがfalseの間、InputNumber関数を呼び出して、ユーザーから数字受付開始
	while (!isCorrect)
	{
		//attemptsを足していって、試行回数をカウント
		attempts++;
		//ここで入力受付開始
		int guess = InputNumber();
		//多分だけどここで順番間違えるとダメかも
		isCorrect = JudgeNumber(guess, target);
	}
	//Whileループを抜けてからResulu関数を呼び出す。attemptsを引数として渡す。
	Result(attempts);
	return 0;
}